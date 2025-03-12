/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TCU.c
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
#include "TCU.h"
#include "Shift_logic.h"

/* System initialize for atomic system: '<Root>/TCU' */
void TCU_SWC_TCU_Init(uint8_T *rty_P, uint8_T *rty_R, uint8_T *rty_N, uint8_T
                      *rty_D)
{
  /* SystemInitialize for Chart: '<S1>/Shift_logic' */
  TCU_SWC_Shift_logic_Init(rty_P, rty_R, rty_N, rty_D);
}

/* Output and update for atomic system: '<Root>/TCU' */
void TCU_SWC_TCU(uint8_T rtu_PRND, uint8_T rtu_Ignition_status, uint8_T
                 rtu_AccePedalPosition, uint8_T rtu_BrakePosition, uint8_T
                 *rty_P, uint8_T *rty_R, uint8_T *rty_N, uint8_T *rty_D,
                 DW_TCU_TCU_SWC_T *localDW)
{
  /* Chart: '<S1>/Shift_logic' */
  TCU_SWC_Shift_logic(rtu_PRND, rtu_Ignition_status, rtu_AccePedalPosition,
                      rtu_BrakePosition, rty_P, rty_R, rty_N, rty_D,
                      &localDW->sf_Shift_logic);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
