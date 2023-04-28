#include "STD_TYPES.h"
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_LIB.h"
void Pwm_voidInit();

void Pwm_voidSetOCR0(u8 value);

void Pwm_voidInit1()
{
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,COM01);
	SET_BIT(TCCR0,CS02);
	SET_BIT(TCCR0,CS00);
	
	
}
void Pwm_voidInit2()
{
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,COM01);
	SET_BIT(TCCR0,CS02);
	SET_BIT(TCCR0,CS00);
	
	
}
void Pwm_voidInit3()
{
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,COM01);
	SET_BIT(TCCR0,CS02);
	SET_BIT(TCCR0,CS00);
	
	
}

void Pwm_voidSetOCR0(u8 duty)
{
	
	OCR0 = duty;
}