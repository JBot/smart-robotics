################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include avrRos/subdir.mk
-include Arduino/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
FLASH_IMAGE += \
avrBridgeAVR_example.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: avrBridgeAVR_example.elf secondary-outputs

# Tool invocations
avrBridgeAVR_example.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C++ Linker'
	avr-g++ --cref -s -Os -o"avrBridgeAVR_example.elf" $(OBJS) $(USER_OBJS) $(LIBS) -lm -Wl,-Map,avrBridgeAVR_example.map,--cref -L"/media/ROBOTS/Tests_before_implement/PML/PML_AVR" -mmcu=atmega328p
	@echo 'Finished building target: $@'
	@echo ' '

avrBridgeAVR_example.hex: avrBridgeAVR_example.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex avrBridgeAVR_example.elf  "avrBridgeAVR_example.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: avrBridgeAVR_example.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p avrBridgeAVR_example.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ELFS)$(FLASH_IMAGE)$(S_DEPS)$(CXX_DEPS)$(S_UPPER_DEPS)$(C++_DEPS)$(ASM_DEPS)$(CC_DEPS)$(CPP_DEPS)$(C_UPPER_DEPS)$(SIZEDUMMY) avrBridgeAVR_example.elf
	-@echo ' '

secondary-outputs: $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
