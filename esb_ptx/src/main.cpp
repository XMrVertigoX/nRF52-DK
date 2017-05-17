#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "app_util.h"
#include "boards.h"
#include "nrf.h"
#include "nrf_delay.h"
#include "nrf_error.h"
#include "nrf_esb.h"
#include "nrf_esb_error_codes.h"
#include "nrf_gpio.h"
#include "sdk_common.h"

#define NRF_LOG_MODULE_NAME "TRANSMITTER"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"

#define WAIT_UNTIL(x) while (!x)

static nrf_esb_payload_t tx_payload;
static nrf_esb_payload_t rx_payload;

static void flashLed(uint32_t ledNumber, uint32_t ms) {
    nrf_gpio_pin_write(ledNumber, 0);
    nrf_delay_ms(ms);
    nrf_gpio_pin_write(ledNumber, 1);
}

void nrf_esb_event_handler(nrf_esb_evt_t const* p_event) {
    switch (p_event->evt_id) {
        case NRF_ESB_EVENT_TX_SUCCESS: {
            flashLed(LED_1, 10);
            NRF_LOG_DEBUG("TX SUCCESS EVENT\r\n");
        } break;
        case NRF_ESB_EVENT_TX_FAILED: {
            flashLed(LED_2, 10);
            NRF_LOG_DEBUG("TX FAILED EVENT\r\n");

            nrf_esb_flush_tx();
            nrf_esb_start_tx();
        } break;
        case NRF_ESB_EVENT_RX_RECEIVED: {
            flashLed(LED_3, 10);
            NRF_LOG_DEBUG("RX RECEIVED EVENT\r\n");

            while (nrf_esb_read_rx_payload(&rx_payload) == NRF_SUCCESS) {
                if (rx_payload.length > 0) {
                    flashLed(LED_4, 10);
                    NRF_LOG_DEBUG("RX RECEIVED PAYLOAD\r\n");
                }
            }
        } break;
    }

    NRF_GPIO->OUTCLR = 0xFUL << 12;
    NRF_GPIO->OUTSET = (p_event->tx_attempts & 0x0F) << 12;
}

void clocks_start(void) {
    NRF_CLOCK->EVENTS_HFCLKSTARTED = 0;
    NRF_CLOCK->TASKS_HFCLKSTART    = 1;

    WAIT_UNTIL(NRF_CLOCK->EVENTS_HFCLKSTARTED);
}

void gpio_init(void) {
    nrf_gpio_range_cfg_output(8, 15);
    bsp_board_leds_init();
}

uint32_t esb_init(void) {
    uint32_t err_code;

    uint8_t base_addr_0[4] = {0xE7, 0xE7, 0xE7, 0xE7};
    uint8_t base_addr_1[4] = {0xC2, 0xC2, 0xC2, 0xC2};
    uint8_t addr_prefix[8] = {0xE7, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8};

    nrf_esb_config_t nrf_esb_config   = NRF_ESB_DEFAULT_CONFIG;
    nrf_esb_config.protocol           = NRF_ESB_PROTOCOL_ESB_DPL;
    nrf_esb_config.retransmit_delay   = 600;
    nrf_esb_config.bitrate            = NRF_ESB_BITRATE_2MBPS;
    nrf_esb_config.event_handler      = nrf_esb_event_handler;
    nrf_esb_config.mode               = NRF_ESB_MODE_PTX;
    nrf_esb_config.selective_auto_ack = false;

    err_code = nrf_esb_init(&nrf_esb_config);
    VERIFY_SUCCESS(err_code);

    err_code = nrf_esb_set_base_address_0(base_addr_0);
    VERIFY_SUCCESS(err_code);

    err_code = nrf_esb_set_base_address_1(base_addr_1);
    VERIFY_SUCCESS(err_code);

    err_code = nrf_esb_set_prefixes(addr_prefix, 8);
    VERIFY_SUCCESS(err_code);

    return (err_code);
}

int main(void) {
    ret_code_t err_code;

    gpio_init();

    err_code = NRF_LOG_INIT(NULL);
    APP_ERROR_CHECK(err_code);

    clocks_start();

    err_code = esb_init();
    APP_ERROR_CHECK(err_code);

    bsp_board_leds_init();

    uint8_t payload[] = {0x00};
    tx_payload.pipe   = 0;
    tx_payload.length = sizeof(payload);
    memcpy(tx_payload.data, payload, tx_payload.length);

    NRF_LOG_INFO("Enhanced ShockBurst Transmitter Example running.\r\n");

    while (true) {
        NRF_LOG_DEBUG("Transmitting packet %02x\r\n", tx_payload.data[0]);

        tx_payload.noack = false;

        if (nrf_esb_write_payload(&tx_payload) == NRF_SUCCESS) {
            tx_payload.data[0]++;
        } else {
            NRF_LOG_WARNING("Sending packet failed\r\n");
        }

        nrf_delay_ms(100);
    }
}
/*lint -restore */
