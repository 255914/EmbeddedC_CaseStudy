/**
 * @file ActivityOneMain.c
 * @author Souhardya Sengupta (senguptasouhardya@gmail.com)
 * @brief 
 * The Activity One has two tasks:
 * 1. To check the status of the Button Sensor
 *      - Button Sensor will check the passenger is seated or not.
 * 2. To check the status of Heater
 *      - Heater will check the heater button is ON.
 * Accordingly, display the status in the LED Actuator which acts like the dashboard of the car
 *      - Led Actuator shows the driver is seated.
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
/**
 * @brief main function
 * 
 * @return int 
 */
int main(void)
{
    /**
     * @brief 
     * Set first pin of PORTB for Output
     */
    DDRB |= (1<<PB0);
    /**
     * @brief 
     * Clear all pins of PORTD for input
     */
    DDRD = 0x00; 
    /**
     * @brief 
     * To turn LED OFF
     */
    PORTB &=~(1<<PB0); 
    /**
     * @brief 
     * Repeat the process
     */
    while(1){
        
        /**
         * @brief 
         * To check whether Heater Button is ON or OFF
         */
        if((PIND & 1<<PD1)){
            /**
             * @brief 
             * To Check whether Button Sensor is ON or OFF
             */
            if((PIND & 1<<PD0)){
                /**
                 * @brief 
                 * To turn LED ON
                 */
                PORTB |= (1<<PB0); 
            }
            /**
             * @brief 
             * To turn LED OFF 
             */
            else PORTB &=~(1<<PB0); 
        }
        /**
         * @brief 
         * To turn LED OFF 
         */
        else PORTB &=~(1<<PB0); 
    }

    return 0;
}