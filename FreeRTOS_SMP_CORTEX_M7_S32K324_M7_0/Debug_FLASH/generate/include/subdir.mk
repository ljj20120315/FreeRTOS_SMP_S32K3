################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/include/OsIf_Cfg.c 

OBJS += \
./generate/include/OsIf_Cfg.o 

C_DEPS += \
./generate/include/OsIf_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/include/%.o: ../generate/include/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/include/OsIf_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


