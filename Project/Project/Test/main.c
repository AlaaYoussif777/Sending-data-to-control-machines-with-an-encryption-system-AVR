#define F_CPU 8000000UL
#include <avr/io.h>
#include "STD_TYPES.h"
#include "UartRx.h"

int main (void)
{	
	LCD_voidInit();	
	LCD_u8WriteCommand(0x80);
	USART_Init(MYUBRR);
	u8 data;
	while(1)
	{
		USART_Recieve(&data);
		LCD_u8WriteData(data);	
	}
}