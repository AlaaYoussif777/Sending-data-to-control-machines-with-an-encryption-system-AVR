#include <avr/io.h>
#include <avr/interrupt.h>
#include "BIT_LIB.h"


void timer0_Int(void)
{
	sei();
	SET_BIT(TIMSK,0);
	RESET_BIT(TCCR0,3);
	RESET_BIT(TCCR0,6);
	SET_BIT(TCCR0,0);
	RESET_BIT(TCCR0,1);
	SET_BIT(TCCR0,2);
}