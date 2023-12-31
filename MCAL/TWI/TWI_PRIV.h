/********************************************************/
/*    SWC: DIOS                                         */
/*    Author: Omar Said                                 */
/*    Version : V1.0                                    */
/*    Description : Two Wire Intrface                   */ 
/********************************************************/
#ifndef TWI_PRIV_H_
#define TWI_PRIV_H_

#define TWBR *((volatile u8*)0x20)
#define TWCR *((volatile u8*)0x56)
#define TWDR *((volatile u8*)0x23)
#define TWAR *((volatile u8*)0x22)
#define TWSR *((volatile u8*)0x21)
#define TWI_BITRATE 2
#define TWEN 2
#define TWSTO 4
#define TWIE 0
#define TWSTA 5
#define TWEA 6
#define TWINT 7
#define TPWS0 0
#define TWPS1 1
#define SCL_CLK 100000
#define BITRATE(TWSR)	((8000000/SCL_CLK)-16)/(2*power(4,(TWSR&((1<<0)|(1<<1)))))

#endif /* TWI_PRIV_H_ */
