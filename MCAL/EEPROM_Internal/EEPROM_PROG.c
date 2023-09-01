
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include"EEPROM_PRIVATE.h"
#include"EEPROM_INTERFACE.h"
void EEPROM_VidWriteByte(u16 Copy_u16Address,u8 Copy_u8Data)
{

    /* mask un-needed bits in address*/
	Copy_u16Address&=0x03FF;
	EEAR = Copy_u16Address;
	EEDR = Copy_u8Data;

	SET_BIT(EECR,EEMWE);
	SET_BIT(EECR,EEWE);



}

u8 EEPROM_VidReadByte(u16 Copy_u16Address)
{
	CLR_BIT(EECR,EEWE);
	/* mask un-needed bits in address*/
	Copy_u16Address&=0x03FF;
	EEAR = Copy_u16Address;
	SET_BIT(EECR,EERE);
	return EEDR;
}
bool EEPROM_VidCanPRocess()
{
	return (!GET_BIT(EECR,EEWE));
}
