#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H
#include"STD_TYPES.h"
#define OUTPUT 1
#define INPUT 0
#define HIGH 1
#define LOW 0
#define PORT_OUTPUT 255
#define PORT_INPUT 0
#define IOA 0
#define IOB 1
#define IOC 2
#define IOD 3
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
void DIO_VidSetPinDirection(u8 port, u8 pin, u8 dir);
void DIO_VidSetPortDirection(u8 port, u8 dir);
void DIO_VidSetPinValue(u8 port, u8 pin, u8 val);
void DIO_VidSetPortValue(u8 port,u8 val);
u8 DIO_U8GetPinValue(u8 port, u8 pin);
void DIO_VidTogglePinValue(u8 port,u8 pin);

#endif