/*
 * File:   desafiocontador.c
 * Author: 20185210
 *
 * Created on 5 de Março de 2021, 14:05
 */


#include <xc.h>
#include "config.h"


char digitos[16] = { 0x3F, 0x06, 0x5B, 0x4F,
                     0x66, 0x6D, 0x7D, 0x07,
                     0x7F, 0x6F, 0x77, 0x7C,
                     0x39, 0x5E, 0x79, 0x71 };

void display7seg_init(void)
{
    ANSELH = 0;
    TRISB =  0;
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;
}

void display7seg (char c)
{
    if(c >= 0 && c <= 15)
        PORTB = digitos[c];
    else
        PORTB = 0X00;
}

int botao_up (void)
{
    return(PORTDbits.RD2);
}

int botao_down (void)
{
    return(PORTDbits.RD3);
}
