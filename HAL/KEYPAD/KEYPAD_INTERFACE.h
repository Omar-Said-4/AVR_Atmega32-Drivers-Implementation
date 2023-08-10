/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : KPD_INTERFACE.h     *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/
#ifndef KEYPAD_INTERFACE_H
#define KEYPAD_INTERFACE_H
#include"STD_TYPES.h"
void KEYPAD_VidInit();
u8 KEYPAD_VidGetPressedKey();
u8 KEYPAD_VidGetPressedKeyAdc();
#endif