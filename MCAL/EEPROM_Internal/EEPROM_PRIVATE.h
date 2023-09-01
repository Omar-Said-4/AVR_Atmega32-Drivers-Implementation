#ifndef EEPROM_PRIV_H
#define EEPROM_PRIV_H

#define EEAR *((volatile u16*)0x3E)
#define EEDR *((volatile u8*)0x3D)
#define EECR *((volatile u8*)0x3C)
#define SPMCR *((volatile u8*)0x57)

#define EEMWE 2
#define EEWE 1
#define EERE 0

#endif
