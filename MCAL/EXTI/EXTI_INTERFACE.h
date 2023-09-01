/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : EXTI_INTERFACE.h    *****************/
/******** Date	     : 8/10/2022           *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/



#ifndef EXIT_INTERFACE_H
#define EXIT_INTERFACE_H
typedef enum
{
	INTR0,
	INTR1,
	INTR2
}Interrupts;
typedef enum
{
	LOWR, /*low level*/
	ANYR, /*Any change*/
	FallingR, /*falling edge*/
	RisingR    /*Rising edge*/
}Int_Type;

void EXIT_VidInit(Interrupts Intr, Int_Type type);
void EXTI_VidDisable(Interrupts Intr);
void EXTI_VidSetCallback(Interrupts Intr,void(*Callback)());


#endif
