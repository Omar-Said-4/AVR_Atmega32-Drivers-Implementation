#ifndef EEPROM_INTERFACE_H
#define EEPROM_INTERFACE_H

u8 EEPROM_VidReadByte(u16 Copy_u16Address);
void EEPROM_VidWriteByte(u16 Copy_u16Address,u8 Copy_u8Data);
bool EEPROM_VidCanPRocess();
#endif
