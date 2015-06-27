BIN := main
LDSCRIPT := build/gcc.ld
OBJS := boot/startup_ARMCM4.o boot/isr_vector_extended.o kern/main.o HAL_INCLUDES/system_stm32f4xx.o HAL_INCLUDES/stm32f4xx_it.o 

#libs
HALOBJS  := $(patsubst %.c,%.o,$(wildcard lib/STM32Cube_FW_F4_V1.6.0/Drivers/STM32F4xx_HAL_Driver/Src/*.c))

vpath %.o boot:kern

sinclude config_flags.mk

PREFIX := arm-none-eabi-
AS := $(PREFIX)as
CC := $(PREFIX)gcc
DB := $(PREFIX)gdb
OBJCOPY := $(PREFIX)objcopy
OBJDUMP := $(PREFIX)objdump

ARCHFLAGS := -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mthumb -mfloat-abi=hard
CPPFLAGS := -Ilib/STM32Cube_FW_F4_V1.6.0/Drivers/CMSIS/Include -Ilib/STM32Cube_FW_F4_V1.6.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include -Ilib/STM32Cube_FW_F4_V1.6.0/Drivers/STM32F4xx_HAL_Driver/Inc -IHAL_INCLUDES -DSTM32F407xx
ASFLAGS := $(ARCHFLAGS)
CFLAGS := $(ARCHFLAGS) -std=c99 -g -Wall -Wextra
ifeq ("$(BUILD)","RELEASE")
LDFLAGS := $(ARCHFLAGS) -specs=nosys.specs -T$(LDSCRIPT)
else
LDFLAGS := $(ARCHFLAGS) -specs=rdimon.specs -T$(LDSCRIPT)
endif

$(BIN): $(OBJS) $(HALOBJS)

debug: $(BIN)
	$(DB) -iex "add-auto-load-safe-path .gdbinit" $<

flash: $(BIN)
	openocd -f ./openocd.cfg -c "program $(BIN) verify"

clean:
	$(RM) $(OBJS)
distclean: clean
	$(RM) $(BIN) $(BIN).d $(BIN).t $(HALOBJS)

%.d: %
	$(OBJDUMP) -d $< >$@
%.t: %
	$(OBJDUMP) -t $< >$@
