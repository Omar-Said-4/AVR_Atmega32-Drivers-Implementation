/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : LCD_INTERFACE.h     *****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : ---                 *****************/
/***********************************************************/
/***********************************************************/
#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H
void LCD_VidWrite(string entry);
void LCD_VidInitialise();
void LCD_VidSendCommand(u8 cmd);
void LCD_VidClear(void);
void LCD_VidCursorRight();
void LCD_VidCursorLeft();
void LCD_VidShiftRight();
void LCD_VidCgRamInit(u8 i);
void LCD_VidShiftLeft();
void LCD_VidReturnHome();
void LCD_VidSendNumber(s32 num);
void LCD_VidPrintFloat(f32 num);
void LCD_VidSetCursorPosition(u8 row, u8 coloumn);
void LCD_DisplayCreatedChar(u8 cgram_index,u8 row,u8 coloumn);
void LCD_VidCreateChar(u8*pattern, u8 cgram_index);
#endif
