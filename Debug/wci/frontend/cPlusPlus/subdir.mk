################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/frontend/cPlusPlus/CPlusPlusError.cpp \
../wci/frontend/cPlusPlus/CPlusPlusErrorHandler.cpp \
../wci/frontend/cPlusPlus/CPlusPlusParserTD.cpp \
../wci/frontend/cPlusPlus/CPlusPlusScanner.cpp \
../wci/frontend/cPlusPlus/CPlusPlusToken.cpp 

OBJS += \
./wci/frontend/cPlusPlus/CPlusPlusError.o \
./wci/frontend/cPlusPlus/CPlusPlusErrorHandler.o \
./wci/frontend/cPlusPlus/CPlusPlusParserTD.o \
./wci/frontend/cPlusPlus/CPlusPlusScanner.o \
./wci/frontend/cPlusPlus/CPlusPlusToken.o 

CPP_DEPS += \
./wci/frontend/cPlusPlus/CPlusPlusError.d \
./wci/frontend/cPlusPlus/CPlusPlusErrorHandler.d \
./wci/frontend/cPlusPlus/CPlusPlusParserTD.d \
./wci/frontend/cPlusPlus/CPlusPlusScanner.d \
./wci/frontend/cPlusPlus/CPlusPlusToken.d 


# Each subdirectory must supply rules for building sources it contributes
wci/frontend/cPlusPlus/%.o: ../wci/frontend/cPlusPlus/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++0x -I"E:\Users\singhal\downloads\boost_1_68_0" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


