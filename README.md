# Sending data to control machines with an encryption system AVR

Tools :
- C programming language
- 3 AVR microcontroller (ATMEGA 32)
- UART Communication Protocol
- PWM
- Timer0
- Keypad & LCD

Description :
- We have three MCs the first one send encrypted data and the second one decrypt it , the third one is trying to read the data and can’t understand it .
- Data Entered by Keypad and be viewed on LCD.
- This data control motors on 3 levels of speeds (100,175,255).
- The LED, when we turn it up , it closed automatically after 10 seconds and the motor and keypad and LCD keep working without being affected.
