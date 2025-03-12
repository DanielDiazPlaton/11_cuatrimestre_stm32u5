/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TCU_SWC.h
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

#ifndef TCU_SWC_h_
#define TCU_SWC_h_
#ifndef TCU_SWC_COMMON_INCLUDES_
#define TCU_SWC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* TCU_SWC_COMMON_INCLUDES_ */

#include "TCU_SWC_types.h"
#include "TCU.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_TCU_TCU_SWC_T TCU;                /* '<Root>/TCU' */
} DW_TCU_SWC_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T PRND;                        /* '<Root>/PRND' */
  uint8_T Ignition_status;             /* '<Root>/Ignition_status' */
  uint8_T AccePedalPosition;           /* '<Root>/AccePedalPosition' */
  uint8_T BrakePosition;               /* '<Root>/BrakePosition' */
} ExtU_TCU_SWC_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T P;                           /* '<Root>/P' */
  uint8_T R;                           /* '<Root>/R' */
  uint8_T N;                           /* '<Root>/N' */
  uint8_T D;                           /* '<Root>/D' */
} ExtY_TCU_SWC_T;

/* Real-time Model Data Structure */
struct tag_RTM_TCU_SWC_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_TCU_SWC_T TCU_SWC_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_TCU_SWC_T TCU_SWC_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TCU_SWC_T TCU_SWC_Y;

/* Model entry point functions */
extern void TCU_SWC_initialize(void);
extern void TCU_SWC_step(void);
extern void TCU_SWC_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TCU_SWC_T *const TCU_SWC_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TCU_SWC'
 * '<S1>'   : 'TCU_SWC/TCU'
 * '<S2>'   : 'TCU_SWC/TCU/Shift_logic'
 */
#endif                                 /* TCU_SWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
