/*
 * File:   delay.c
 * Author: 20185210
 *
 * Created on 10 de Fevereiro de 2021, 14:20
 */


#include <xc.h>
#include  "config.h"



void delay (int t)  
{
    while ( t ) 
    {
        __delay_ms(1);
        --t;
    }
}
