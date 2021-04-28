#ifndef __USER_UTILS_H__
#define __USER_UTILS_H__
/**
 * @file user_utils.h
 * @author Souhardya Sengupta ()
 * @brief User defined utilities used across the project
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);
/**
 * @brief Function to change LED Actuator status as per to the requirement in activity One
 * 
 */
void activityOne(void);
/**
 * @brief 
 * Function used to read values from a channel 
 * @param channel no.
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t channel);
/**
 * @brief 
 * Function used to initialize ADC
 */
void InitADC();
#endif /* __USER_UTILS_H__ */
