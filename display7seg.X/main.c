/*
 * File:   main.c
 * Author: 20185315
 *
 * Created on 25 de Fevereiro de 2021, 14:16
 */


#include <xc.h>
#include "config.h"
#include "delay.h"

void main(void) 
{
    TRISD = 0;
    PORTD = 0;
    while(1)
    {
        PORTD = 0x06;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x5B;
        delay(2000);
        PORTD = 0;
    
        PORTD = 0x77;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x7C;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x39;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x5E;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x79;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x71;
        delay(2000);
        PORTD = 0;
        
        
        
    
    
    
    }
}
