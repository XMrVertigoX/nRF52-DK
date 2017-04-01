# ----- Configuration ---------------------------------------------------------

PROJECT_NAME = esb_prx

# ----- Directories and files -------------------------------------------------

LIBS = ../libs
SDK_ROOT = $(LIBS)/nRF5_SDK_13.0.0_04a0bfd

LINKER_SCRIPT = esb_prx_gcc_nrf52.ld

# ----- Symbols ---------------------------------------------------------------

SYMBOLS += BOARD_PCA10040
SYMBOLS += BSP_DEFINES_ONLY
SYMBOLS += CONFIG_GPIO_AS_PINRESET
SYMBOLS += ESB_PRESENT
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
SYMBOLS += NRF52_PAN_74
SYMBOLS += NRF52832_XXAA

SYMBOLS += USE_APP_CONFIG

# ----- Include directories ---------------------------------------------------

INCLUDE_DIRS += $(SDK_ROOT)/components
INCLUDE_DIRS += $(SDK_ROOT)/components/boards
INCLUDE_DIRS += $(SDK_ROOT)/components/device
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/common
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/delay
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/hal
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd
INCLUDE_DIRS += $(SDK_ROOT)/components/drivers_nrf/uart
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/bsp
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/log
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/log/src
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/strerror
INCLUDE_DIRS += $(SDK_ROOT)/components/libraries/util
INCLUDE_DIRS += $(SDK_ROOT)/components/proprietary_rf/esb
INCLUDE_DIRS += $(SDK_ROOT)/components/toolchain
INCLUDE_DIRS += $(SDK_ROOT)/components/toolchain/cmsis/include
INCLUDE_DIRS += $(SDK_ROOT)/components/toolchain/gcc
INCLUDE_DIRS += $(SDK_ROOT)/config
INCLUDE_DIRS += $(SDK_ROOT)/external/segger_rtt

# External libraries
# INCLUDE_DIRS += $(LIBS)

# Application
INCLUDE_DIRS += src/config

# ----- Source files ----------------------------------------------------------

SOURCE_FILES += $(SDK_ROOT)/components/boards/boards.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/common/nrf_drv_common.c
SOURCE_FILES += $(SDK_ROOT)/components/drivers_nrf/uart/nrf_drv_uart.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_serial.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_frontend.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/strerror/nrf_strerror.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_error_weak.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_error.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/app_util_platform.c
SOURCE_FILES += $(SDK_ROOT)/components/libraries/util/nrf_assert.c
SOURCE_FILES += $(SDK_ROOT)/components/proprietary_rf/esb/nrf_esb.c
SOURCE_FILES += $(SDK_ROOT)/components/toolchain/gcc/gcc_startup_nrf52.S
SOURCE_FILES += $(SDK_ROOT)/components/toolchain/system_nrf52.c
SOURCE_FILES += $(SDK_ROOT)/external/segger_rtt/RTT_Syscalls_GCC.c
SOURCE_FILES += $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_printf.c
SOURCE_FILES += $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT.c

# Add all supported source files found in project folder
SOURCE_FILES += $(shell find ./src -iregex ".*\.\(c\|cpp\|s\)")

# ----- Libraries -------------------------------------------------------------

LIBRARY_DIRS += $(SDK_ROOT)/components/toolchain/gcc

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

CFLAGS += -std=gnu11

CXXFLAGS += -std=gnu++14

LDFLAGS += -T $(LINKER_SCRIPT)

# ----- Rules -----------------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-

include $(LIBS)/xXx/utils/rules.mk

download: $(EXECUTABLE)
	$(TOOLCHAIN_PREFIX)gdb -q -x download.gdb $<

erase:
	nrfjprog -f nrf52 --eraseall

flash_application: $(HEXARY)
	nrfjprog -f nrf52 --sectorerase --program $<
	nrfjprog -f nrf52 --reset

flash_softdevice:
	nrfjprog -f nrf52 --sectorerase --program $(SOFT_DEVICE)
	nrfjprog -f nrf52 --reset
