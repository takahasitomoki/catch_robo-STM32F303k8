/*
 * robotstate.h
 *
 *  Created on: 2019/08/18
 *      Author: tomok
 */

#ifndef ROBOTSTATE_H_
#define ROBOTSTATE_H_

#include <math.h>
#include "stm32f3xx_hal.h"
#include "struct.h"

//��������
//#define CTRL_CYCLE		0.005f

//�~�����W�n
typedef struct {
	float r;
	float theta;
	float z;
} struct_cyl;
extern struct_cyl poscyl;
extern struct_cyl refcyl;

//���s���W�n
typedef struct {
	float x;
	float y;
	float z;
} struct_rec;
extern struct_rec posrec;
extern struct_rec refrec;

void TestPos(void);


#endif /* ROBOTSTATE_H_ */
