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

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{ 
	/**
	 * @brief Construct a new Initialize Peripherals object
	 *  Initializing Peripherals 
	 */
	InitializePeripherals();
	/**
	 * @brief 
	 * Turns LED ON if and only if both switches ButtonSensor and Heater are closed
	 */
	StatusOfLedActuator();
	return 0;
}