#include "STD_TYPES.h"
#ifndef UART_H_
#define UART_H_

#define FOSC 8000000
#define BAUD 9600
#define MYUBRR FOSC/8/BAUD-1

void USART_Init(u32 ubrr);
void USART_Transmit(u8 data);








#endif /* UART_H_ */