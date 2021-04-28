/**
 * @file activitytwo_main.c
 * @author Souhardya Sengupta
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
/**
 * @brief 
 * reading values from a channel
 * @param channel 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t channel)
{
    /**
     * @brief 
     * selecting ADC channel with safety mask
     */
    ADMUX &= 0xF8;
    /**
     * @brief 
     * single conversion mode
     */
    channel &= 0x07;
    ADCSRA |= (1<<ADSC);
    /**
     * @brief 
     * waiting until ADC conversion is complete
     */
    while( ADCSRA & (1<<ADSC) );
    ADCSRA|=(1<<ADIF);
    return ADC;
}
/**
 * @brief initializing ADC
 * 
 */
void InitADC()
{
    /**
     * @brief 
     * Selecting Vref=AVcc
     */
    ADMUX |= (1<<REFS0);
    /**
     * @brief 
     * seting prescaller to 128 and enable ADC
     */
    ADCSRA |= (1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)|(1<<ADEN);
}
