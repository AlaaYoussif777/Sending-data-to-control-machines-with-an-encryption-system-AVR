#include <avr/io.h>
#include "STD_TYPES.h"



void USART_Init(u32 baud)
{
	//Set baud rate
	UBRRH = (u8)(baud>>8);
	UBRRL = (u8)(baud);
	//Enable receiver and transmitter
	UCSRB = (1<<RXEN);
	//Set frame format : 8data 2 stop bit
	UCSRC = (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
}

u8 USART_Recieve(u8 *data)
{
	//Wait for empty transmit buffer
	while (!(UCSRA & (1<<RXC)));
	//encrypt(data, 0XAED);
	//Put data into buffer
	 *data =UDR  ;

}

/*void USART_Flush( void )
{
	unsigned char dummy;
	while ( UCSRA & (1<<RXC) ) dummy = UDR;
}*/












