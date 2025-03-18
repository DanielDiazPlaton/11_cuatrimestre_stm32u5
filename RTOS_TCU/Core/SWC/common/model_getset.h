/*
 * model_getset.h
 *
 *  Created on: Mar 9, 2025
 *      Author: USER
 */

#ifndef SWC_COMMONS_MODEL_GETSET_H_
#define SWC_COMMONS_MODEL_GETSET_H_

#include "Platform_Types.h"
#include "TCU_SWC.h"



#define IGNITION_ON			1u
#define IGNITION_OFF		0

uint8 Get_speedVh();
void Set_speedVh(uint8 speed);

uint16 Get_rpmVh();
void Set_rpmVh(uint16 rpm);

uint8 Get_PRND();
void Set_PRND(uint8 prnd);

uint8 Get_ignitionStatus();
void Set_ignitionStatus(uint8 ignition);

#endif /* SWC_COMMONS_MODEL_GETSET_H_ */
