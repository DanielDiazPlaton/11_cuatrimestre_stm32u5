/*
 * TCU_helper.c
 *
 *  Created on: Feb 28, 2025
 *      Author: USER
 */

#include "TCU_helper.h"


/**
 * @brief This code shift the position of PRND in an one variable
 *
 * @return uint8
 */
uint8 PRND_position(void) {

  static uint8 PRND = 0;
  if(PRESS_POSITION_SHIFT == HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_15)){
    PRND = PARKING_ACTIVE;
  } else if(PRESS_POSITION_SHIFT == HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0)) {
    PRND = REVERSE_ACTIVE;
  } else if(PRESS_POSITION_SHIFT == HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12)) {
    PRND = NEUTRAL_ACTIVE;
  } else if(PRESS_POSITION_SHIFT == HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_14)) {
    PRND = DRIVE_ACTIVE;
  } else {
    // Do nothing
  }

  return PRND;
}

/**
 * @brief This toggle the ignition button to simulate a switch
 *
 * @return uint8
 */
uint8 ignition_toggle(void) {

  static uint8 ignition = 0;

  if(PRESS_IGNITION == HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)) {
    ignition ^= 1u;
  } else {
    // Do nothing
  }

  return ignition;
}


/**
 * @brief This toggle the break pedal button to simulate a switch
 *
 * @return uint8
 */
uint8 BreakPedal_toggle(void) {

  static uint8 brakePedal = 0;

  if(PRESS_BRAKEPEDAL == HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8)) {
	  brakePedal ^= 1u;
  } else {
    // Do nothing
  }

  return brakePedal;
}
