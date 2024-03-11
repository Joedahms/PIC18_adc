#include <xc.h>

#include "adc.h"

void adc_init()
{
    // set AN4 as analog input (pin 6)
    ANS4 = 1;   
    
    // set VCFG to 00 to use AVDD and AVSS as VREFs
    VCFG0 = 0;  
    VCFG1 = 0;
    
    // set group A select bits to 01 to use AN4
    GASEL0 = 1; 
    GASEL1 = 0;
    
    // Auto-Conversion Continuous Loop
    ACONV = 1;  
    
    // Conversion clock set to Internal RC Oscillator?
    ADCS0 = 1;
    ADCS1 = 1;
    ADCS2 = 1;
    
    // set up inter
    IPEN = 1;   // Set Interrupt Priority Enable
    GIE = 1;    // Global Interrupt Enable
    PEIE = 1;   // Peripheral Interrupt Enable
    ADIE = 1;   // A/D Converter Interrupt Enable        
    ADIF = 0;   // Clear A/D Interrupt Flag (conversion not complete)

    // A/D Interrupt Priority
    ADIP = 1;   // high priority
    
    // Results right justified
    ADFM = 1;
    
    // Turn on ADC
    ADON = 1;       // A/D on
    GODONE = 1;     // start conversion
}
