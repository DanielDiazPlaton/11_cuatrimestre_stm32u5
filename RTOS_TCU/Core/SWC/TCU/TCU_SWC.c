/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TCU_SWC.c
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

#include "TCU_SWC.h"
#include "TCU.h"

/* Block states (default storage) */
DW_TCU_SWC_T TCU_SWC_DW;

/* External inputs (root inport signals with default storage) */
ExtU_TCU_SWC_T TCU_SWC_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TCU_SWC_T TCU_SWC_Y;

/* Real-time model */
static RT_MODEL_TCU_SWC_T TCU_SWC_M_;
RT_MODEL_TCU_SWC_T *const TCU_SWC_M = &TCU_SWC_M_;

/* Model step function */
void TCU_SWC_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/TCU' */

  /* Inport: '<Root>/PRND' incorporates:
   *  Inport: '<Root>/AccePedalPosition'
   *  Inport: '<Root>/BrakePosition'
   *  Inport: '<Root>/Ignition_status'
   *  Outport: '<Root>/D'
   *  Outport: '<Root>/N'
   *  Outport: '<Root>/P'
   *  Outport: '<Root>/R'
   */
  TCU_SWC_TCU(TCU_SWC_U.PRND, TCU_SWC_U.Ignition_status,
              TCU_SWC_U.AccePedalPosition, TCU_SWC_U.BrakePosition, &TCU_SWC_Y.P,
              &TCU_SWC_Y.R, &TCU_SWC_Y.N, &TCU_SWC_Y.D, &TCU_SWC_DW.TCU);

  /* End of Outputs for SubSystem: '<Root>/TCU' */
}

/* Model initialize function */
void TCU_SWC_initialize(void)
{
  /* SystemInitialize for Atomic SubSystem: '<Root>/TCU' */

  /* SystemInitialize for Outport: '<Root>/P' incorporates:
   *  Outport: '<Root>/D'
   *  Outport: '<Root>/N'
   *  Outport: '<Root>/R'
   */
  TCU_SWC_TCU_Init(&TCU_SWC_Y.P, &TCU_SWC_Y.R, &TCU_SWC_Y.N, &TCU_SWC_Y.D);

  /* End of SystemInitialize for SubSystem: '<Root>/TCU' */
}

/* Model terminate function */
void TCU_SWC_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
