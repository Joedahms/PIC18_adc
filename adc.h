/* 
 * File:   adc.h
 * Author: joe
 *
 * Created on March 10, 2024, 6:59 PM
 */

#ifndef ADC_H
#define	ADC_H

void adc_init();

struct adc_data
{
    int full_result;        // Full 10 bit result
    uint8_t res_hi;         // Value of high byte
    uint8_t res_lo;         // Value of low byte
    uint8_t full_result_flag;
    uint8_t lob_flag;       // Whether ADC low byte has been sent/received
    uint8_t hib_flag;       // Whether ADC high byte has been sent/received
};

#endif	/* ADC_H */

