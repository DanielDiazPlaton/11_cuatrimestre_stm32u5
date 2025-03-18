/*
 * model_getset.c
 *
 *  Created on: Mar 9, 2025
 *      Author: USER
 */


#include "model_getset.h"

extern uint8 speed;
extern uint16 rpm;

uint8 Get_speedVh()
{
	return speed;
}

void Set_speedVh(uint8 speed_in)
{
	speed = speed_in;
}

uint16 Get_rpmVh()
{
	return rpm;
}

void Set_rpmVh(uint16 rpm_in)
{
	rpm = rpm_in;
}

uint8 Get_PRND()
{
	return TCU_SWC_U.PRND;
}

void Set_PRND(uint8 prnd)
{
	TCU_SWC_U.PRND = prnd;
}

uint8 Get_ignitionStatus()
{
	return TCU_SWC_U.Ignition_status;
}

void Set_ignitionStatus(uint8 ignition)
{
	TCU_SWC_U.Ignition_status = ignition;
}

