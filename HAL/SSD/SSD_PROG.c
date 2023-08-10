/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : SSD_PROG.c          *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : ..                  *****************/
/***********************************************************/
/***********************************************************/
#include"DIO_INTERFACE.h"
#include"SSD_PRIVATE.h"
#include"STD_TYPES.h"
#include"SSD1_CONFIG.h"
void SSD_VidInitialize(u8 index)
{
	if (index==0){
	    DIO_VidSetPortDirection(SSD1_DDR, 255);
		DIO_VidSetPinDirection(SSD1_CONTROL,1);
       }
}
/* SSD_Zero -- SSD_Nine*/ 
void SSD_VidDisplayNumber(SSD_Numbers num, u8 index)
{
	if (index==0){
	    if (SSD1_TYPE==SSD_Common_Cathode){
			switch(num)
			{
				
				case 0:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 1:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 2:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 3:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 4:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 5:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 6:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 7:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 8:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 9:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,1);
				break;
			}
		}
	    else if (SSD1_TYPE==SSD_Common_Anode){
			switch(num){
			case 0:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 1:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 2:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,1);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 3:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 4:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 5:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 6:
				DIO_VidSetPinValue(SSD1A,1);
				DIO_VidSetPinValue(SSD1B,1);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 7:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,1);
				DIO_VidSetPinValue(SSD1G,1);
				break;
				case 8:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,0);
				DIO_VidSetPinValue(SSD1E,0);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,0);
				break;
				case 9:
				DIO_VidSetPinValue(SSD1A,0);
				DIO_VidSetPinValue(SSD1B,0);
				DIO_VidSetPinValue(SSD1C,0);
				DIO_VidSetPinValue(SSD1D,1);
				DIO_VidSetPinValue(SSD1E,1);
				DIO_VidSetPinValue(SSD1F,0);
				DIO_VidSetPinValue(SSD1G,0);
				break;
			}
 		
	    }
	}
}
void SSD_VidDisplayDOT(SSD_Type type, u8 index)
{
	if (index==0){
	    if (SSD1_TYPE==SSD_Common_Cathode)
			DIO_VidSetPinValue(SSD1H,1);
	    else if (SSD1_TYPE==SSD_Common_Anode)
			DIO_VidSetPinValue(SSD1H,0);
	    }
}

void SSD_VidOff(SSD_Type type, u8 index)
{
	if (index==0){
	    if (SSD1_TYPE==SSD_Common_Cathode)
			DIO_VidSetPinValue(SSD1_CONTROL,1);

	    else if (SSD1_TYPE==SSD_Common_Anode)
			DIO_VidSetPinValue(SSD1_CONTROL,0);
 		
	    }
}

void SSD_VidOn(SSD_Type type, u8 index)
{
	if (index==0){
	    if (SSD1_TYPE==SSD_Common_Cathode)
			DIO_VidSetPinValue(SSD1_CONTROL,0);

	
	    else if (SSD1_TYPE==SSD_Common_Anode)
			DIO_VidSetPinValue(SSD1_CONTROL,1);
 		
	    }
}




