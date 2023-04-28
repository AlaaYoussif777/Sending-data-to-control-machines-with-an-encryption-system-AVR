#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include "STD_TYPES.h"
#include "UartTX.h"
#include "BIT_LIB.h"


int main (void)
{
	u8 data;
	u8 keypressed;
	USART_Init(MYUBRR);
	int i = 0;
	int j=0;
	LCD_voidInit();
	Keypad_voidInit();
	LCD_u8WriteCommand(0x80);

	while(1)
	{
		Keypad_u8GetPressedButtonValue (&keypressed);
		if (keypressed != 'F' )
		{
			if (j==0)
			{
				switch(keypressed)
				{
					case 1:
					data ='1';
					encrypt(&data, 0XAED);
					USART_Transmit(data);
					break;
					case 2:
					data ='2';
					encrypt(&data, 0XAED);
					USART_Transmit(data);
					break;
					case 3:
					data ='3';
					encrypt(&data, 0XAED);
					USART_Transmit(data);
					break;
					case 4:
					data ='4';
					encrypt(&data, 0XAED);
					USART_Transmit(data);
					break;
				}
				j=1;
				decrypt(&data, 0XAED);
				LCD_u8WriteData(keypressed +48);
				if (keypressed == 'c')
				{
					LCD_u8ClearDisplay();
				}
			}
		}
		else
		{
			j=0;
		}
	}
}