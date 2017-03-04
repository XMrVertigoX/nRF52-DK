# ----- Configuration ---------------------------------------------------------

PROJECT_NAME = ble_app_uart

# ----- Directories and files -------------------------------------------------

# Directories
SDK_ROOT = ../libs/nRF5_SDK_12.2.0_f012efa

#  Files
LINKER_SCRIPT = ble_app_uart_gcc_nrf52.ld
SOFT_DEVICE   = $(SDK_ROOT)/components/softdevice/s132/hex/s132_nrf52_3.0.0_softdevice.hex

# ----- Symbols ---------------------------------------------------------------

SYMBOLS +=

# ----- Include directories ---------------------------------------------------

include sdk.mk

INCLUDE_DIRS += src/config

# Build all supported source files found in project folder
SOURCE_FILES += $(shell find -iregex ".*\.\(c\|cpp\|s\)")

# ----- Libraries -------------------------------------------------------------

LIBRARY_DIRS += $(SDK_ROOT)/components/toolchain/gcc
LIBRARY_DIRS += $(SDK_ROOT)/components/toolchain/cmsis/dsp/GCC

LIBRARIES += arm_cortexM4lf_math

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
