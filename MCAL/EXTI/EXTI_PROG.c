/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : EXTI_PROG.c         *****************/
/******** Date	     : 8/10/2022           *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"EXIT_PRIVATE.h"
#include"EXIT_INTERFACE.h"
static void(*EXTICallback[3])();

void EXIT_VidInit(Interrupts Intr, Int_Type type)
{
	
	switch(Intr)
	{
	case INTR0:
		/*PIE->Enable*/
		SET_BIT(GICR,INT0);
		if(type==FallingR)
		{
			/*Sense control of interrupt 0 is falling edge*/
			SET_BIT(MCUCR,ISC01);
			CLR_BIT(MCUCR,ISC00);
		}
		else if(type==RisingR)
		{
			/*Sense control of interrupt 0 is rising edge*/
			SET_BIT(MCUCR,ISC01);
			SET_BIT(MCUCR,ISC00);
		}
		else if(type==LOWR)
		{
			/*Sense control of interrupt 0 is LOW Level*/
			CLR_BIT(MCUCR,ISC01);
			CLR_BIT(MCUCR,ISC00);
		}
		else if(type==ANYR)
		{
			/*Sense control of interrupt 0 is any logical change*/
			CLR_BIT(MCUCR,ISC01);
			SET_BIT(MCUCR,ISC00);
		}
		else
		{
			/*Do Nothing*/
		}
		break;
	case INTR1:
		/*PIE->Enable*/
		SET_BIT(GICR,INT1);
		if(type==FallingR)
		{
			/*Sense control of interrupt 1 is falling edge*/
			SET_BIT(MCUCR,ISC11);
			CLR_BIT(MCUCR,ISC10);
		}
		else if(type==RisingR)
		{
			/*Sense control of interrupt 1 is rising edge*/
			SET_BIT(MCUCR,ISC11);
			SET_BIT(MCUCR,ISC10);
		}
		else if(type==LOWR)
		{
			/*Sense control of interrupt 1 is LOW Level*/
			CLR_BIT(MCUCR,ISC11);
			CLR_BIT(MCUCR,ISC10);
		}
		else if(type==ANYR)
		{
			/*Sense control of interrupt 1 is any logical change*/
			CLR_BIT(MCUCR,ISC11);
			SET_BIT(MCUCR,ISC10);
		}
		else
		{
			/*Do Nothing*/
		}
		break;
	case INTR2:
		/*PIE->Enable*/
		SET_BIT(GICR,INT2);
		if(type==FallingR)
		{
			/*Sense control of interrupt 2 is falling edge*/
			CLR_BIT(MCUCSR,ISC2);
		}
		else if(type==RisingR)
		{
			/*Sense control of interrupt 2 is rising edge*/
			SET_BIT(MCUCSR,ISC2);
		}
		else
		{
			/*Do Nothing*/
		}
		break;
	}
}
void EXTI_VidDisable(Interrupts Intr)
{
	switch(Intr)
	{
	case INT0:	CLR_BIT(GICR,INT0); break;
	case INT1:	CLR_BIT(GICR,INT1); break;
	case INT2:	CLR_BIT(GICR,INT2); break;
	}
}
void EXTI_VidSetCallback(Interrupts Intr,void(*Callback)())
{
    EXTICallback[Intr]=Callback;
}
void __vector_1(void)  
{
	if(EXTICallback[0]!=(void*)(0)){
	EXTICallback[0]();
	}
}
void __vector_2(void)  
{
	if(EXTICallback[1]!=(void*)(0)){
    EXTICallback[1]();
    }
}
void __vector_3(void)  
{
	if(EXTICallback[2]!=(void*)(0)){
    EXTICallback[2]();
	}
}
