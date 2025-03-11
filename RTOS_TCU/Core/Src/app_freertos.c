/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : app_freertos.c
  * Description        : FreeRTOS applicative file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "app_freertos.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "Platform_Types.h"
#include <stdio.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */
#define BUFFER_SIZE 10
#define RX_QUEUE_SIZE 10

uint8 rxBuffer[BUFFER_SIZE] = {0};
uint8 txBuffer[BUFFER_SIZE] = {0};
uint16 rxIndex = 0;

uint16 rpmVh = 0;
uint8 speed = 128u;
uint16 rpm = 1000u;

extern UART_HandleTypeDef huart1;
osMessageQueueId_t rxQueue;

osThreadId_t TaskCommRxHandle;
const osThreadAttr_t rx_attributes = {
  .name = "RxTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};

osThreadId_t TaskCommTxHandle;
const osThreadAttr_t tx_attributes = {
  .name = "TxTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  TaskCommRxHandle = osThreadNew(Task_Comm_Rx, NULL, &rx_attributes);
  TaskCommTxHandle = osThreadNew(Task_Comm_Tx, NULL, &tx_attributes);
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}
/* USER CODE BEGIN Header_StartDefaultTask */
/**
* @brief Function implementing the defaultTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN defaultTask */
  /* Infinite loop */
  for(;;)
  {
    printf("Topicos...\n\r");
    HAL_Delay(1000);
  }
  /* USER CODE END defaultTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */
void Task_Comm_Tx(void *argument)
{
	while(1);
}

void Task_Comm_Rx(void *argument)
{
	uint8 received_data[BUFFER_SIZE];

	    /* Infinite loop */
	while(1)
	{
	    // Esperar a recibir un dato de la cola
	    osMessageQueueGet(rxQueue, received_data, NULL, osWaitForever);

	    // Procesar los datos recibidos (por ejemplo, imprimirlos) o enviarlos a la señal que le corresponde
	    if(70u == received_data[1])
	    {
	        rpmVh = (received_data[8] << 8);
	        rpmVh |= (received_data[9]);
	    }

	    printf("[TCU]:");
	    for (uint16 i = 0; i < BUFFER_SIZE; i++) {
	        printf("%c", received_data[i]);
	    }
	    printf("\n");
	}
}
/* USER CODE END Application */

