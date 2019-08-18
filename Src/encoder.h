/*
 * encoder.h
 *
 *  Created on: 2019/08/18
 *      Author: tomok
 */

#ifndef ENCODER_H_
#define ENCODER_H_

#include "stm32f3xx_hal.h"

#define ENC_1_TIM_HANDLER	htim1
#define ENC_1_TIM	TIM1

//#define ENC_2_TIM_HANDLER	htim3
//#define ENC_2_TIM	TIM3

extern TIM_HandleTypeDef htim1;
//extern TIM_HandleTypeDef htim3;


void EncGetData(int16_t *);
void EncEnable(void);
void EncDisable(void);


#endif /* ENCODER_H_ */
