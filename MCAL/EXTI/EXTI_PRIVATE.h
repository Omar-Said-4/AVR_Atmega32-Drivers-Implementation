/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : EXTI_PRIVATE.h      *****************/
/******** Date	     : 8/10/2022           *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/

#ifndef EXIT_PRIVATE_H
#define EXIT_PRIVATE_H
#define MCUCR *((volatile u8*)0x55)


#define GICR *((volatile u8*)0x5B)

#define GIFR *((volatile u8*)0x5A)

#define MCUCSR *((volatile u8*)0x54)

#define INT0 6
#define INT1 7
#define INT2 5

#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3
#define ISC2  6
void __vector_1(void) __attribute__((signal)); 
void __vector_2(void) __attribute__((signal));
void __vector_3(void) __attribute__((signal));

#endif
