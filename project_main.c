/**
 * @file project_main.c
 * @author Souhardya Sengupta
 * @brief Activities in Embedded Case Study
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#define ON 1
/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	uint16_t Temp;
	uint8_t ADCch=0;
	char TempTy;
	/**
	 * @brief Construct a new USARTInit object
	 * Initialize Peripherals for UART
	 */
	USARTInit(); 
	while(1){
		uint8_t Status;
		/**
		 * @brief 
		 * Turns LED ON if and only if both switches ButtonSensor and Heater are closed
		 */
		Status=StatusOfLedActuator();
		if(Status==ON){
			/**
			 * @brief 
			 * reads sensor data from ADCChannel
			 */
			Temp=ReadADC(ADCch);
			/**
			 * @brief 
			 * Generates PWM according to data received from sensor
			 */
    	    TempTy=GeneratePWM(Temp);
			/**
			 * @brief Construct a new USARTWriteString object
			 * Sends data to serial monitor
			 */
			USARTWriteString(TempTy);
		}
	}
	return 0;
}
