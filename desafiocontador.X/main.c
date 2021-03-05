/*
 * File:   main.c
 * Author: 20185210
 *
 * Created on 5 de Março de 2021, 14:03
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "desafiocontador.h"


void main(void) 
{   
    signed char cont = 0; 
    display7seg_init();
    char estado = 0;
     
  
    while(1)
    {
        display7seg( cont );
     
        switch(estado)
        {
            case 0 :
                        if(botao_up() == 1)
                            estado = 1;
                        break;
            
            case 1 :    
                        ++cont;
                        estado = 2;
                        break;
        
            case 2 :
                        if (botao_up()== 0)
                            estado = 0;
                        break;
        }
    }
}