################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../avrRos/AvrLaserVector.cpp \
../avrRos/Msg.cpp \
../avrRos/Ros.cpp \
../avrRos/String.cpp \
../avrRos/ros_generated.cpp \
../avrRos/ros_string.cpp 

OBJS += \
./avrRos/AvrLaserVector.o \
./avrRos/Msg.o \
./avrRos/Ros.o \
./avrRos/String.o \
./avrRos/ros_generated.o \
./avrRos/ros_string.o 

CPP_DEPS += \
./avrRos/AvrLaserVector.d \
./avrRos/Msg.d \
./avrRos/Ros.d \
./avrRos/String.d \
./avrRos/ros_generated.d \
./avrRos/ros_string.d 


# Each subdirectory must supply rules for building sources it contributes
avrRos/%.o: ../avrRos/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/media/ROBOTS/Tests_before_implement/PML/PML_AVR/Arduino" -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


