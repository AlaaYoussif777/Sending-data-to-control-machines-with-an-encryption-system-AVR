


#ifndef KEYPAD_INT_H_
#define KEYPAD_INT_H_
#include "STD_TYPES.h"

typedef enum Keypad_enuState {
    Keypad_enuNormalState=0,
    Keypad_enuNullPointerException
}Keypad_enuState;

void Keypad_voidInit(void);
u8 Keypad_u8GetPressedButtonValue(u8 * u8PtrToVal);



#endif /* KEYPAD_INT_H_ */