


#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

#include "DIO_int.h"

/******** Columns Definition *********/
/* RANGE : DIO_enuPin0 -----> DIO_enuPin31 */
#define C4 DIO_enuPin16
#define C3 DIO_enuPin17
#define C2 DIO_enuPin18
#define C1 DIO_enuPin19

/******** Rows Definition *********/
/* RANGE : DIO_enuPin0 -----> DIO_enuPin31 */
#define R4 DIO_enuPin20
#define R3 DIO_enuPin21
#define R2 DIO_enuPin22
#define R1 DIO_enuPin23

/******** Buttons Definition ********/
/** RANGE : u8 ---> 0 to 255 values */
#define BUTTON1_VAL 'c'
#define BUTTON2_VAL 0
#define BUTTON3_VAL 13
#define BUTTON4_VAL -5
#define BUTTON5_VAL 1
#define BUTTON6_VAL 2
#define BUTTON7_VAL 3
#define BUTTON8_VAL -3
#define BUTTON9_VAL 4
#define BUTTON10_VAL 5
#define BUTTON11_VAL 6
#define BUTTON12_VAL -6
#define BUTTON13_VAL 7
#define BUTTON14_VAL 8
#define BUTTON15_VAL 9
#define BUTTON16_VAL -1






#endif /* KEYPAD_CONFIG_H_ */