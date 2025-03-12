/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Shift_logic.h
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

#ifndef Shift_logic_h_
#define Shift_logic_h_
#ifndef TCU_SWC_COMMON_INCLUDES_
#define TCU_SWC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* TCU_SWC_COMMON_INCLUDES_ */

/* Block states (default storage) for system '<S1>/Shift_logic' */
typedef struct {
  uint8_T is_active_c3_TCU_SWC;        /* '<S1>/Shift_logic' */
  uint8_T is_c3_TCU_SWC;               /* '<S1>/Shift_logic' */
} DW_Shift_logic_TCU_SWC_T;

extern void TCU_SWC_Shift_logic_Init(uint8_T *rty_P, uint8_T *rty_R, uint8_T
  *rty_N, uint8_T *rty_D);
extern void TCU_SWC_Shift_logic(uint8_T rtu_PRND, uint8_T rtu_Ignition_status,
  uint8_T rtu_AccePedalPosition, uint8_T rtu_BrakePosition, uint8_T *rty_P,
  uint8_T *rty_R, uint8_T *rty_N, uint8_T *rty_D, DW_Shift_logic_TCU_SWC_T
  *localDW);

#endif                                 /* Shift_logic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
