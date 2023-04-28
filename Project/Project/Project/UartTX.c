#include "UartTX.h"
#include "STD_TYPES.h"
#include <avr/io.h>

void USART_Init(u32 baud)
{
	//Set baud rate
	UBRRH = (u8)(baud>>8);
	UBRRL = (u8)baud;
	//Enable receiver and transmitter 
	UCSRB = (1<<RXEN)|(1<<TXEN);
	//Set frame format : 8data 2 stop bit
	UCSRC = (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
}

void USART_Transmit(u8 data)
{
	//encrypt(data, 0XAED);
	//Wait for empty transmit buffer
	//encrypt(&data,0XAED);
	while (!(UCSRA & (1<<UDRE)));
	//encrypt(&data, 0XAED);
	//encrypt(&data, 0XAED);
	//Put data into buffer
	
	UDR = data;
	

}










/*DDRB &= (~(1<<PB4));
PORTB = (1<<PB4);
USART_Init(MYUBRR);
while(1)
{
	if (!(PINA & (1<<PA0)))
	{
		USART_Transmit('N');
		
	}
	
}
*/