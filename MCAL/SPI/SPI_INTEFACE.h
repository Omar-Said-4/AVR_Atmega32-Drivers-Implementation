
/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : SPI_INTERFACE.h     *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/


#ifndef SPI_INTERFACE_H
#define SPI_INTERFACE_H

u8 SPI_U8Transaction(u8 data);
void SPI_VidMasterInit();
void SPI_VidSlaveInit();
void SPI_VidSetRecCb(void(*ptr)(void));

#endif
