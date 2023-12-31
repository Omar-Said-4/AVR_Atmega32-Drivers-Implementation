/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : SPI_PRIV.h          *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/

#ifndef SPI_PRIV_H
#define SPI_PRIV_H

#include"STD_TYPES.h"
#define SPCR *((volatile u8*)0x2D)
#define SPSR *((volatile u8*)0x2E)
#define SPDR *((volatile u16*)0x2F)
#define SPIE 7
#define SPE 6
#define DORD 5
#define MSTR 4
#define CPOL 3
#define CPHA 2
#define SPR1 1
#define SPR0 0
#define SPIF 7
void __vector_12(void) __attribute__((signal));

#endif
