/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : TIM0_PRIV.h       *******************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/

#ifndef TIMO_PRIV_H
#define TIMO_PRIV_H

#define TCCR0 *((volatile u8*)0x53)
#define TCNT0 *((volatile u8*)0x52)
#define OCR0 *((volatile u8*)0x5C)
#define TIMSK *((volatile u8*)0x59)
#define TIFR *((volatile u8*)0x58)
#define SFIOR *((volatile u8*)0x50)

#define TOIE0 0
#define WGM00 6
#define WGM01 3
#define COM01 5
#define COM00 4
void __vector_11(void) __attribute__((signal));
void __vector_10(void) __attribute__((signal));


#endif
