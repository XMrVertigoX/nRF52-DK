# ----- Configuration ---------------------------------------------------------

PROJECT_NAME = ble_HeartRate

# ----- Directories and files -------------------------------------------------

# Directories
LIBS_DIR = ../libs
SDK_ROOT = ../libs/nRF5_SDK_12.2.0_f012efa

#  Files
LINKER_SCRIPT = ble_app_hrs_freertos_gcc_nrf52.ld
SOFT_DEVICE   = $(SDK_ROOT)/components/softdevice/s132/hex/s132_nrf52_3.0.0_softdevice.hex

# ----- Symbols ---------------------------------------------------------------

SYMBOLS += __HEAP_SIZE=1024
SYMBOLS += __STACK_SIZE=2048
SYMBOLS += BLE_STACK_SUPPORT_REQD
SYMBOLS += BOARD_PCA10040
SYMBOLS += CONFIG_GPIO_AS_PINRESET
SYMBOLS += FREERTOS
SYMBOLS += NRF_SD_BLE_API_VERSION=3
SYMBOLS += NRF52
SYMBOLS += NRF52_PAN_12
SYMBOLS += NRF52_PAN_15
SYMBOLS += NRF52_PAN_20
SYMBOLS += NRF52_PAN_31
SYMBOLS += NRF52_PAN_36
SYMBOLS += NRF52_PAN_51
SYMBOLS += NRF52_PAN_54
SYMBOLS += NRF52_PAN_55
SYMBOLS += NRF52_PAN_58
SYMBOLS += NRF52_PAN_64
SYMBOLS += NRF52832
SYMBOLS += S132
SYMBOLS += SOFTDEVICE_PRESENT

SYMBOLS += DEBUG_NRF
SYMBOLS += NRF_LOG_ENABLED=1
SYMBOLS += NRF_LOG_USES_RTT=1
# SYMBOLS += ARM_MATH_CM4
# SYMBOLS += NDEBUG

# ----- Include directories ---------------------------------------------------

# SDK
INCLUDE_DIRS += $(SDK_ROOT)/components
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_advertising
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_dtm
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_racp
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_ancs_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_ans_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_bas
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_bas_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_cscs
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_cts_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_dfu
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_dis
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_gls
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_hids
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_hrs
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_hrs_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_hts
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_ias
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_ias_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_lbs
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_lbs_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_lls
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_nus
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_nus_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_rscs
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_rscs_c
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/ble_services/ble_tps
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/common
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/nrf_ble_gatt
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/nrf_ble_qwr
INCLUDE_DIRS += $(SDK_ROOT)/components/ble/peer_manager
INCLUDE_DIRS += $(SDK_ROOT)/components/boards
INCLUDE_DIRS += $(SDK_ROOT)/components/device
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/adc
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/clock
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/common
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/comp
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/delay
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/gpiote
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/hal
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/i2s
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/lpcomp
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/pdm
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/power
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/ppi
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/pwm
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/qdec
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/rng
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/rtc
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/saadc
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/spi_master
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/spi_slave
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/swi
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/timer
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/twi_master
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/twis_slave
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/uart
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/usbd
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/wdt
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/bsp
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/button
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/crc16
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/crc32
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/csense
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/csense_drv
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/experimental_section_vars
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/fds
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/fstorage
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/gpiote
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/hardfault
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/hardfault/nrf52
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/hci
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/led_softblink
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/log
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/log/src
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/low_power_pwm
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/mem_manager
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/pwm
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/queue
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/scheduler
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/sensorsim
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/slip
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/timer
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/twi
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/uart
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/audio
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/cdc
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/cdc/acm
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/hid
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/hid/generic
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/hid/kbd
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/hid/mouse
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/class/msc
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/usbd/config
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/util
INCLUDE_DIRS += $(SDK_ROOT)/components/softdevice/common/softdevice_handler
INCLUDE_DIRS += $(SDK_ROOT)/components/softdevice/s132/headers
INCLUDE_DIRS += $(SDK_ROOT)/components/softdevice/s132/headers/nrf52
INCLUDE_DIRS += $(SDK_ROOT)/components/toolchain
INCLUDE_DIRS += $(SDK_ROOT)/components/toolchain/cmsis/include
INCLUDE_DIRS += $(SDK_ROOT)/components/toolchain/gcc
INCLUDE_DIRS += $(SDK_ROOT)/external/freertos/portable/CMSIS/nrf52
INCLUDE_DIRS += $(SDK_ROOT)/external/freertos/portable/GCC/nrf52
INCLUDE_DIRS += $(SDK_ROOT)/external/freertos/source/include
INCLUDE_DIRS += $(SDK_ROOT)/external/segger_rtt

# External libraries
INCLUDE_DIRS += $(LIBS_DIR)

# Application
INCLUDE_DIRS += src/config

# ----- Source files ----------------------------------------------------------

# SDK
SOURCE_FILES += $(SDK_ROOT)/components/ble/ble_advertising/ble_advertising.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/ble_services/ble_bas/ble_bas.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/ble_services/ble_dis/ble_dis.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/ble_services/ble_hrs/ble_hrs.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/common/ble_advdata.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/common/ble_conn_params.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/common/ble_conn_state.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/common/ble_srv_common.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/nrf_ble_gatt/nrf_ble_gatt.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/gatt_cache_manager.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/gatts_cache_manager.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/id_manager.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/peer_data.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/peer_data_storage.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/peer_database.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/peer_id.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/peer_manager.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/pm_buffer.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/pm_mutex.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/security_dispatcher.c
SOURCE_FILES += $(SDK_ROOT)/components/ble/peer_manager/security_manager.c
SOURCE_FILES += $(SDK_ROOT)/components/boards/boards.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/clock/nrf_drv_clock.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/common/nrf_drv_common.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/gpiote/nrf_drv_gpiote.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/uart/nrf_drv_uart.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/bsp/bsp.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/bsp/bsp_btn_ble.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/bsp/bsp_nfc.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/button/app_button.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/crc16/crc16.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/fds/fds.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/fstorage/fstorage.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/hardfault/hardfault_implementation.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/hardfault/nrf52/handler/hardfault_handler_gcc.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_serial.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_frontend.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/sensorsim/sensorsim.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/timer/app_timer_freertos.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_error.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_error_weak.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_util_platform.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/nrf_assert.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/sdk_errors.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/sdk_mapped_flags.c
SOURCE_FILES += $(SDK_ROOT)/components/softdevice/common/softdevice_handler/softdevice_handler.c
SOURCE_FILES += $(SDK_ROOT)/components/toolchain/gcc/gcc_startup_nrf52.S
SOURCE_FILES += $(SDK_ROOT)/components/toolchain/system_nrf52.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/portable/CMSIS/nrf52/port_cmsis.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/portable/CMSIS/nrf52/port_cmsis_systick.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/portable/GCC/nrf52/port.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/source/croutine.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/source/event_groups.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/source/list.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/source/portable/MemMang/heap_1.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/source/queue.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/source/tasks.c
SOURCE_FILES += $(SDK_ROOT)/external/freertos/source/timers.c
SOURCE_FILES += $(SDK_ROOT)/external/segger_rtt/RTT_Syscalls_GCC.c
SOURCE_FILES += $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT.c
SOURCE_FILES += $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_printf.c

# Add whole xXx library sources
SOURCE_FILES += $(LIBS_DIR)/xXx/utils/logging.cpp

# Add all supported source files found in project folder
SOURCE_FILES += $(shell find -iregex ".*\.\(c\|cpp\|s\)")

# ----- Libraries -------------------------------------------------------------

LIBRARY_DIRS += $(SDK_ROOT)/components/toolchain/gcc
# LIBRARIES += arm_cortexM4lf_math

# ----- Flags -----------------------------------------------------------------

ASMFLAGS += -x assembler-with-cpp

GCCFLAGS += -mcpu=cortex-m4
GCCFLAGS += -mthumb
GCCFLAGS += -mabi=aapcs
GCCFLAGS += -mfloat-abi=hard
GCCFLAGS += -mfpu=fpv4-sp-d16

CPPFLAGS +=

COMMON_CFLAGS += -g
COMMON_CFLAGS += -Og
COMMON_CFLAGS += --short-enums

CFLAGS += -std=gnu11

CXXFLAGS += -std=gnu++14

LDFLAGS += -T $(realpath $(LINKER_SCRIPT))

# ----- Rules -----------------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-

include ../libs/xXx/utils/rules.mk

erase:
	nrfjprog --eraseall -f nrf52

flash_application: $(HEXARY)
	nrfjprog --program $< -f nrf52 --sectorerase
	nrfjprog --reset -f nrf52

flash_softdevice:
	nrfjprog --program $(SOFT_DEVICE) -f nrf52 --sectorerase
	nrfjprog --reset -f nrf52
