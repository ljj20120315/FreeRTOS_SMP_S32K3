################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/src/Cache_Ip.c \
../RTD/src/Cache_Ip_HwAcc_ArmCoreMx.c \
../RTD/src/Clock_Ip.c \
../RTD/src/Clock_Ip_Data.c \
../RTD/src/Clock_Ip_Divider.c \
../RTD/src/Clock_Ip_DividerTrigger.c \
../RTD/src/Clock_Ip_ExtOsc.c \
../RTD/src/Clock_Ip_FracDiv.c \
../RTD/src/Clock_Ip_Frequency.c \
../RTD/src/Clock_Ip_Gate.c \
../RTD/src/Clock_Ip_IntOsc.c \
../RTD/src/Clock_Ip_Irq.c \
../RTD/src/Clock_Ip_Monitor.c \
../RTD/src/Clock_Ip_Pll.c \
../RTD/src/Clock_Ip_ProgFreqSwitch.c \
../RTD/src/Clock_Ip_Selector.c \
../RTD/src/Clock_Ip_Specific.c \
../RTD/src/Det.c \
../RTD/src/Det_stub.c \
../RTD/src/Lpuart_Uart_Ip.c \
../RTD/src/Lpuart_Uart_Ip_Irq.c \
../RTD/src/Mpu_M7_Ip.c \
../RTD/src/OsIf_Timer.c \
../RTD/src/OsIf_Timer_System.c \
../RTD/src/OsIf_Timer_System_Internal_Systick.c \
../RTD/src/SchM_Dio.c \
../RTD/src/SchM_Mcl.c \
../RTD/src/SchM_Mcu.c \
../RTD/src/SchM_Port.c \
../RTD/src/SchM_Rm.c \
../RTD/src/SchM_Uart.c \
../RTD/src/Sema42_Ip.c \
../RTD/src/Siul2_Dio_Ip.c \
../RTD/src/Siul2_Port_Ip.c \
../RTD/src/Tspc_Port_Ip.c \
../RTD/src/Xrdc_Ip.c 

OBJS += \
./RTD/src/Cache_Ip.o \
./RTD/src/Cache_Ip_HwAcc_ArmCoreMx.o \
./RTD/src/Clock_Ip.o \
./RTD/src/Clock_Ip_Data.o \
./RTD/src/Clock_Ip_Divider.o \
./RTD/src/Clock_Ip_DividerTrigger.o \
./RTD/src/Clock_Ip_ExtOsc.o \
./RTD/src/Clock_Ip_FracDiv.o \
./RTD/src/Clock_Ip_Frequency.o \
./RTD/src/Clock_Ip_Gate.o \
./RTD/src/Clock_Ip_IntOsc.o \
./RTD/src/Clock_Ip_Irq.o \
./RTD/src/Clock_Ip_Monitor.o \
./RTD/src/Clock_Ip_Pll.o \
./RTD/src/Clock_Ip_ProgFreqSwitch.o \
./RTD/src/Clock_Ip_Selector.o \
./RTD/src/Clock_Ip_Specific.o \
./RTD/src/Det.o \
./RTD/src/Det_stub.o \
./RTD/src/Lpuart_Uart_Ip.o \
./RTD/src/Lpuart_Uart_Ip_Irq.o \
./RTD/src/Mpu_M7_Ip.o \
./RTD/src/OsIf_Timer.o \
./RTD/src/OsIf_Timer_System.o \
./RTD/src/OsIf_Timer_System_Internal_Systick.o \
./RTD/src/SchM_Dio.o \
./RTD/src/SchM_Mcl.o \
./RTD/src/SchM_Mcu.o \
./RTD/src/SchM_Port.o \
./RTD/src/SchM_Rm.o \
./RTD/src/SchM_Uart.o \
./RTD/src/Sema42_Ip.o \
./RTD/src/Siul2_Dio_Ip.o \
./RTD/src/Siul2_Port_Ip.o \
./RTD/src/Tspc_Port_Ip.o \
./RTD/src/Xrdc_Ip.o 

C_DEPS += \
./RTD/src/Cache_Ip.d \
./RTD/src/Cache_Ip_HwAcc_ArmCoreMx.d \
./RTD/src/Clock_Ip.d \
./RTD/src/Clock_Ip_Data.d \
./RTD/src/Clock_Ip_Divider.d \
./RTD/src/Clock_Ip_DividerTrigger.d \
./RTD/src/Clock_Ip_ExtOsc.d \
./RTD/src/Clock_Ip_FracDiv.d \
./RTD/src/Clock_Ip_Frequency.d \
./RTD/src/Clock_Ip_Gate.d \
./RTD/src/Clock_Ip_IntOsc.d \
./RTD/src/Clock_Ip_Irq.d \
./RTD/src/Clock_Ip_Monitor.d \
./RTD/src/Clock_Ip_Pll.d \
./RTD/src/Clock_Ip_ProgFreqSwitch.d \
./RTD/src/Clock_Ip_Selector.d \
./RTD/src/Clock_Ip_Specific.d \
./RTD/src/Det.d \
./RTD/src/Det_stub.d \
./RTD/src/Lpuart_Uart_Ip.d \
./RTD/src/Lpuart_Uart_Ip_Irq.d \
./RTD/src/Mpu_M7_Ip.d \
./RTD/src/OsIf_Timer.d \
./RTD/src/OsIf_Timer_System.d \
./RTD/src/OsIf_Timer_System_Internal_Systick.d \
./RTD/src/SchM_Dio.d \
./RTD/src/SchM_Mcl.d \
./RTD/src/SchM_Mcu.d \
./RTD/src/SchM_Port.d \
./RTD/src/SchM_Rm.d \
./RTD/src/SchM_Uart.d \
./RTD/src/Sema42_Ip.d \
./RTD/src/Siul2_Dio_Ip.d \
./RTD/src/Siul2_Port_Ip.d \
./RTD/src/Tspc_Port_Ip.d \
./RTD/src/Xrdc_Ip.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/src/%.o: ../RTD/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/src/Cache_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


