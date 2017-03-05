# ----- Configuration ---------------------------------------------------------

PROJECT_NAME = blinky

# ----- Directories and files -------------------------------------------------

# Directories
LIBS_DIR = ../libs
SDK_ROOT = $(LIBS_DIR)/nRF5_SDK_12.2.0_f012efa

#  Files
LINKER_SCRIPT = blinky_FreeRTOS_gcc_nrf52.ld

# ----- Symbols ---------------------------------------------------------------

SYMBOLS += BOARD_PCA10040
SYMBOLS += CONFIG_GPIO_AS_PINRESET
SYMBOLS += DEBUG_NRF
SYMBOLS += NRF_LOG_USES_RTT=1
SYMBOLS += FREERTOS
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
# SYMBOLS += ARM_MATH_CM4
# SYMBOLS += NDEBUG

# ----- Include directories ---------------------------------------------------

# SDK
INCLUDE_DIRS += $(SDK_ROOT)/components
INCLUDE_DIRS += $(SDK_ROOT)/components/boards
INCLUDE_DIRS += $(SDK_ROOT)/components/device
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/clock
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/common
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/gpiote
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/hal
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/uart
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/bsp
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/button
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/log
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/log/src
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/timer
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/util
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
SOURCE_FILES += $(SDK_ROOT)/components/boards/boards.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/clock/nrf_drv_clock.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/common/nrf_drv_common.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/gpiote/nrf_drv_gpiote.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd/nrf_nvic.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd/nrf_soc.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/uart/nrf_drv_uart.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/bsp/bsp.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/bsp/bsp_nfc.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/button/app_button.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_serial.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_frontend.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/timer/app_timer_freertos.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_error.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_error_weak.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_util_platform.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/nrf_assert.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/sdk_errors.c
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

download: $(EXECUTABLE)
	$(TOOLCHAIN_PREFIX)gdb -q -x download.gdb $<
