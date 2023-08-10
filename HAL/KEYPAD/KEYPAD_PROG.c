/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : KPD_PROG.c          *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/

#include"STD_TYPES.h"
#include"KEYPAD_CFG.h"
#include"DIO_INTERFACE.h"

#include"ADC_INTERFACE.h"
#include<avr/delay.h>

void KEYPAD_VidInit()
{
	DIO_VidSetPortDirection(KEYPAD_PORT,0b11110000);
	DIO_VidSetPortValue(KEYPAD_PORT,255);
}

u8 KEYPAD_VidGetPressedKey()
{
	u8 key=50;
	for(int col=0;col<KEYPAD_COLN;col++)
	{
		DIO_VidSetPinValue(KEYPAD_PORT,col+4,0);
		for(int row=0;row<KEYPAD_ROWN;row++)
		{
			if(DIO_U8GetPinValue(KEYPAD_PORT,row)==0)
			{
				/* for debouncing effect*/
				_delay_ms(2);
				key=(row*KEYPAD_COLN)+col;
				while(DIO_U8GetPinValue(KEYPAD_PORT,row)==0);
			}
		}
		DIO_VidSetPinValue(KEYPAD_PORT,col+4,1);
	}
	return key;
}
/* one pin implementation using ADC and variable resistances with trial and error*/
u8 KEYPAD_VidGetPressedKeyAdc()
{
	u16 arr[]={10,311,27,171,511,601,516,556,93,352,107,230,19,315,36,177};
	   _delay_ms(1);
		u16 x=ADC_U16Read(0);
		u8 pressed=-1;
		for(int i=0;i<16;i++)
		{
			if(x>=arr[i]-1&&x<arr[i]+2)
				{pressed=i;
			break;}
		}
		while(ADC_U16Read(0)<1023);
		return pressed;
}