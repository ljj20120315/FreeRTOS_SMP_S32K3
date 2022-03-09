################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mpu_M7_Ip_Cfg.c \
../generate/src/Xrdc_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Xrdc_Ip_Cfg.c 

OBJS += \
./generate/src/Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mpu_M7_Ip_Cfg.o \
./generate/src/Xrdc_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Xrdc_Ip_Cfg.o 

C_DEPS += \
./generate/src/Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mpu_M7_Ip_Cfg.d \
./generate/src/Xrdc_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Xrdc_Ip_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


