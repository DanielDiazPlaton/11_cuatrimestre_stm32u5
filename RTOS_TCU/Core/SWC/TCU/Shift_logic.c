/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Shift_logic.c
 *
 * Code generated for Simulink model 'TCU_SWC'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Feb  9 17:29:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtwtypes.h"
#include "Shift_logic.h"

/* Named constants for Chart: '<S1>/Shift_logic' */
#define TCU_SWC_IN_Drive               ((uint8_T)1U)
#define TCU_SWC_IN_Neutral             ((uint8_T)2U)
#define TCU_SWC_IN_Off                 ((uint8_T)3U)
#define TCU_SWC_IN_Parking             ((uint8_T)4U)
#define TCU_SWC_IN_Reverse             ((uint8_T)5U)

/* System initialize for atomic system: '<S1>/Shift_logic' */
void TCU_SWC_Shift_logic_Init(uint8_T *rty_P, uint8_T *rty_R, uint8_T *rty_N,
  uint8_T *rty_D)
{
  *rty_P = 0U;
  *rty_R = 0U;
  *rty_N = 0U;
  *rty_D = 0U;
}

/* Output and update for atomic system: '<S1>/Shift_logic' */
void TCU_SWC_Shift_logic(uint8_T rtu_PRND, uint8_T rtu_Ignition_status, uint8_T
  rtu_AccePedalPosition, uint8_T rtu_BrakePosition, uint8_T *rty_P, uint8_T
  *rty_R, uint8_T *rty_N, uint8_T *rty_D, DW_Shift_logic_TCU_SWC_T *localDW)
{
  /* Chart: '<S1>/Shift_logic' */
  if (localDW->is_active_c3_TCU_SWC == 0) {
    localDW->is_active_c3_TCU_SWC = 1U;
    localDW->is_c3_TCU_SWC = TCU_SWC_IN_Off;
    *rty_P = 0U;
    *rty_R = 0U;
    *rty_N = 0U;
    *rty_D = 0U;
  } else {
    switch (localDW->is_c3_TCU_SWC) {
     case TCU_SWC_IN_Drive:
      *rty_P = 0U;
      *rty_R = 0U;
      *rty_N = 0U;
      *rty_D = 1U;
      if (rtu_Ignition_status == 0) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Off;
        *rty_P = 0U;
        *rty_R = 0U;
        *rty_N = 0U;
        *rty_D = 0U;
      } else if (rtu_PRND == 8) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Neutral;
        *rty_P = 0U;
        *rty_R = 0U;
        *rty_N = 1U;
        *rty_D = 0U;
      }
      break;

     case TCU_SWC_IN_Neutral:
      *rty_P = 0U;
      *rty_R = 0U;
      *rty_N = 1U;
      *rty_D = 0U;
      if (rtu_Ignition_status == 0) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Off;
        *rty_P = 0U;
        *rty_R = 0U;
        *rty_N = 0U;
        *rty_D = 0U;
      } else {
        switch (rtu_PRND) {
         case 2U:
          localDW->is_c3_TCU_SWC = TCU_SWC_IN_Reverse;
          *rty_P = 0U;
          *rty_R = 1U;
          *rty_N = 0U;
          *rty_D = 0U;
          break;

         case 4U:
          localDW->is_c3_TCU_SWC = TCU_SWC_IN_Drive;
          *rty_P = 0U;
          *rty_R = 0U;
          *rty_N = 0U;
          *rty_D = 1U;
          break;
        }
      }
      break;

     case TCU_SWC_IN_Off:
      *rty_P = 0U;
      *rty_R = 0U;
      *rty_N = 0U;
      *rty_D = 0U;
      if ((rtu_Ignition_status == 1) && (rtu_PRND == 1) &&
          (rtu_AccePedalPosition == 0)) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Parking;
        *rty_P = 1U;
        *rty_R = 0U;
        *rty_N = 0U;
        *rty_D = 0U;
      } else if ((rtu_Ignition_status == 1) && (rtu_PRND == 2) &&
                 (rtu_BrakePosition == 0)) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Reverse;
        *rty_P = 0U;
        *rty_R = 1U;
        *rty_N = 0U;
        *rty_D = 0U;
      } else if ((rtu_Ignition_status == 1) && (rtu_PRND == 8)) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Neutral;
        *rty_P = 0U;
        *rty_R = 0U;
        *rty_N = 1U;
        *rty_D = 0U;
      } else if ((rtu_Ignition_status == 1) && (rtu_PRND == 4) &&
                 (rtu_BrakePosition == 0)) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Drive;
        *rty_P = 0U;
        *rty_R = 0U;
        *rty_N = 0U;
        *rty_D = 1U;
      }
      break;

     case TCU_SWC_IN_Parking:
      *rty_P = 1U;
      *rty_R = 0U;
      *rty_N = 0U;
      *rty_D = 0U;
      if (rtu_Ignition_status == 0) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Off;
        *rty_P = 0U;
        *rty_R = 0U;
        *rty_N = 0U;
        *rty_D = 0U;
      } else if (rtu_PRND == 2) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Reverse;
        *rty_P = 0U;
        *rty_R = 1U;
        *rty_N = 0U;
        *rty_D = 0U;
      }
      break;

     default:
      /* case IN_Reverse: */
      *rty_P = 0U;
      *rty_R = 1U;
      *rty_N = 0U;
      *rty_D = 0U;
      if (rtu_Ignition_status == 0) {
        localDW->is_c3_TCU_SWC = TCU_SWC_IN_Off;
        *rty_P = 0U;
        *rty_R = 0U;
        *rty_N = 0U;
        *rty_D = 0U;
      } else {
        switch (rtu_PRND) {
         case 1U:
          localDW->is_c3_TCU_SWC = TCU_SWC_IN_Parking;
          *rty_P = 1U;
          *rty_R = 0U;
          *rty_N = 0U;
          *rty_D = 0U;
          break;

         case 8U:
          localDW->is_c3_TCU_SWC = TCU_SWC_IN_Neutral;
          *rty_P = 0U;
          *rty_R = 0U;
          *rty_N = 1U;
          *rty_D = 0U;
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Shift_logic' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
