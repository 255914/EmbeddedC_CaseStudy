/**
 * @file user_utils.c
 * @author Souhardya Sengupta ()
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "user_utils.h"

/**
 * @brief 
 * Delay Function
 * @param delay_time 
 */
void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}