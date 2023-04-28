#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include "STD_TYPES.h"
#include "UartRx.h"
#include "BIT_LIB.h"
#include "PWM.h"


volatile u32  Counter;

int main ()
{	
	timer0_Int();
	LCD_voidInit();	
	LCD_u8WriteCommand(0x80);
	USART_Init(MYUBRR);
	u8 data;
	u8 value;
	u8 duty;
	while(1)
	{
		USART_Recieve(&data);
		decrypt(&data,0XAED);
			switch(data)
			{
				case '1':
				LCD_u8WriteData(data);
				Pwm_voidInit1();
				duty = 100;
				Pwm_voidSetOCR0(duty);
				SET_BIT(PORTB,3);
				SET_BIT(DDRB,3);
				break;
				case '2':
				LCD_u8WriteData(data);
				Pwm_voidInit1();
				duty = 175;
				Pwm_voidSetOCR0(duty);
				SET_BIT(PORTB,3);
				SET_BIT(DDRB,3);
				break;
				case '3':
				LCD_u8WriteData(data);
				Pwm_voidInit1();
				duty = 255;
				Pwm_voidSetOCR0(duty);
				SET_BIT(PORTB,3);
				SET_BIT(DDRB,3);
				break;
				case '4':
				LCD_u8WriteData(data);
				SET_BIT(PORTB,4);
				SET_BIT(DDRB,4);
				Counter=0;
				break;
		}
	}
	return 0;
}
ISR(TIMER0_OVF_vect)
{
	Counter++;
	if (Counter == 310)
	{
		TOGGLE_BIT(DDRB,4);
	}
}

