#include "STD_TYPES.h"
#ifndef UARTRX_H_
#define UARTRX_H_


#define FOSC 8000000
#define BAUD 9600
#define MYUBRR FOSC/8/BAUD-1

void USART_Init(u32 ubrr);

u8 USART_Recieve(u8 *data);





#ifndef UART_H_
#define UART_H_












#endif /* UART_H_ */


#endif /* UARTRX_H_ */