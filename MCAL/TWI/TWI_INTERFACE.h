/********************************************************/
/*    SWC: DIOS                                         */
/*    Author: Omar Said                                 */
/*    Version : V1.0                                    */
/*    Description : Two Wire Intrface                   */ 
/********************************************************/
#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_
#include"STD_TYPES.h"
void TWI_VidMasterInit(void);
void TWI_VidStart(u8 address);
void TWI_VidStartCheck(u8 address);
void TWI_VidStop(void);
void TWI_VidSendByte(unsigned char data);
u8 TWI_U8ReadACK(void);
u8 TWI_U8ReadNACK(void);
u8 TWI_U8GetStatus(void);
void TWI_VidSlaveInit();
void TWI_U8SlvRcv();

#endif /* TWI_INTERFACE_H_ */
