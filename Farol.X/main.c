/*
 * File:   main.c
 * Author: 20185315
 *
 * Created on 19 de Fevereiro de 2021, 14:32
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "Semaforo.h"
    
void main (void)
{
    semaforo_init();
    int estado = 0;
    int t;
    
    while(1)
    {
        switch (estado)
        {
            case 0:
                    verde();
                    vermelho_ped();
                    if( botao_ped() == 1 )
                    estado=1;
                    break;
                    
            case 1:
                    delay(3000);
                    estado = 2;
                    break;
            case 2:
                    t<=0;
                    estado = 3;
                    break;
            case 3:
                    amarelo();
                    delay(2000);
                    estado = 4;
                    break;
            case 4:
                    t<=0;
                    estado = 5;
                    break;
            case 5:
                    vermelho();
                    verde_ped();
                    delay(5000);
                    estado = 6;
                    break;
            case 6:
                    t<=0;
                    estado = 0;
                    break;
        }
    }
    
}
