/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : SSD_INTERFACE.c     *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : ..                  *****************/
/***********************************************************/
/***********************************************************/
#ifndef SSD_INTERFACE_H
#include"STD_TYPES.h"
#include"SSD_PRIVATE.h"
#define SSD_INTERFACE_H
void SSD_VidInitialize(u8 index);
void SSD_VidDisplayNumber(SSD_Numbers num, u8 index);
void SSD_VidDisplayDOT(u8 index);
void SSD_VidOff(u8 index);
void SSD_VidOn(u8 index);
#endif
