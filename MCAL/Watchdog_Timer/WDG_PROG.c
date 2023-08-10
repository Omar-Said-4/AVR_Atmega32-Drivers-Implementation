/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : WDG_PROG.c          *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"WDG_PRIVATE.h"
void WDG_VidEnable(u8 prescalar)
{
	/* setting timeout */
	prescalar&=0b00000111;
	WDTCR&=0;
	WDTCR|=prescalar;
	/* enable watchdog*/
	SET_BIT(WDTCR,WDE);

}
void WDG_VidDisable()
{
	WDTCR|=0b00011000;
	WDTCR = 0x00;
}
