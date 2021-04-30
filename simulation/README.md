# Case Study Project in Action

![simulinkdiag](https://user-images.githubusercontent.com/80656121/116651442-d77bac00-a9a0-11eb-9c84-983fc3e4c346.PNG)


## Code 
```
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
                
                change_led_state(LED_ON);
            }
            /**
             * @brief 
             * To turn LED OFF 
             */
            else change_led_state(LED_OFF);
        }
        /**
         * @brief 
         * To turn LED OFF 
         */
        else change_led_state(LED_OFF);
    }
```
