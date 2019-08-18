/*
 * motor.h
 *
 *  Created on: 2019/08/18
 *      Author: tomok
 */

#ifndef MOTOR_H_
#define MOTOR_H_

//#include "math.h"
#include "stm32f3xx_hal.h"
#include "struct.h"



/*-----------------------------------------------
 * ���W��DC���[�^(r, theta, z)
-----------------------------------------------*/
void CoordinateSetPosXYZ(void);
void CoordinateSetPosRTZ(void);
void CoordinateSetDuty(float duty);
void CoordinateEnable(void);
void CoordinateDisable(void);

//���W��DC���[�^�^�C�}�n���h��
#define COORDINATE_TIM_HANDLER		htim2

//PWM���g��
#define COORDINATE_PWM_FREQ			10000

//�^�C�}���g��
#define COORDINATE_TIM_FREQ			84000000

//Duty���̃��~�b�g
#define COORDINATE_DUTY_LIMIT		0.55f

//���[�^PWM�`�����l��
#define PWM_TIM_CH				TIM_CHANNEL_1


//DC���[�^���]����GPIO
//R��
#define MOTOR_R_1_PORT				GPIOA
#define MOTOR_R_1_PIN				GPIO_PIN_5
#define MOTOR_R_2_PORT				GPIOA
#define MOTOR_R_2_PIN				GPIO_PIN_6


//���[�^�u���[�L
#define MOTOR_BRAKE					1000000


#endif /* MOTOR_H_ */
