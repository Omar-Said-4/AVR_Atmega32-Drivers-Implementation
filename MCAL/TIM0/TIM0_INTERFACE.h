
/***********************************************************/
/***********************************************************/
/******** Author  	 : Omar Said           *****************/
/******** File name  : TIM0_INTERFACE.h     ****************/
/******** Version  	 : V1                  *****************/
/******** Desc  	 : --             **********************/
/***********************************************************/
/***********************************************************/


#ifndef TIM0_INTERFACE_H
#define TIM0_INTERFACE_H

#define NORMAL_MODE 0
#define PHASE_CORRECT_PWM_MODE 1
#define FAST_PWM 2
#define CTC_MODE 3
#define OVERFLOW 4
#define INTERNAL_CLK 0

#define EXTRNAL_CLK 1

#define INVERTING_MODE 0
#define NON_INVERTING_MODE 1

void TIM0_VidInit(u16 AlarmOrFreqOrPrescalar);
void TIM0_VidWritePwm(u8 val);
#endif
