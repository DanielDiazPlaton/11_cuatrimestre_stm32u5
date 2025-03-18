/*
 * TCU_helper.h
 *
 *  Created on: Feb 28, 2025
 *      Author: USER
 */

#ifndef SWC_COMMONS_TCU_HELPER_H_
#define SWC_COMMONS_TCU_HELPER_H_

#include "Platform_Types.h"
#include "stm32u5xx_hal.h"

#define PRESS_POSITION_SHIFT    1u
#define PRESS_IGNITION          1u
#define PRESS_BRAKEPEDAL		1u

#define PARKING_ACTIVE			1u
#define REVERSE_ACTIVE			2u
#define NEUTRAL_ACTIVE			8u
#define DRIVE_ACTIVE			4u

uint8 PRND_position(void);
uint8 ignition_toggle(void);
uint8 BreakPedal_toggle(void);

#endif /* SWC_COMMONS_TCU_HELPER_H_ */
