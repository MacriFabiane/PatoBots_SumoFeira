/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbaxx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BI_D_Pin GPIO_PIN_12
#define BI_D_GPIO_Port GPIOB
#define FI_D_Pin GPIO_PIN_8
#define FI_D_GPIO_Port GPIOA
#define BI_E_Pin GPIO_PIN_7
#define BI_E_GPIO_Port GPIOA
#define FI_E_Pin GPIO_PIN_6
#define FI_E_GPIO_Port GPIOA
#define S_FD_Pin GPIO_PIN_5
#define S_FD_GPIO_Port GPIOA
#define S_FE_Pin GPIO_PIN_1
#define S_FE_GPIO_Port GPIOA
#define SP_FE_Pin GPIO_PIN_9
#define SP_FE_GPIO_Port GPIOD
#define SP_LE_Pin GPIO_PIN_8
#define SP_LE_GPIO_Port GPIOD
#define TSOP_Pin GPIO_PIN_8
#define TSOP_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_2
#define LED2_GPIO_Port GPIOB
#define MONITOR_BAT_Pin GPIO_PIN_1
#define MONITOR_BAT_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_0
#define LED3_GPIO_Port GPIOB
#define LED4_Pin GPIO_PIN_15
#define LED4_GPIO_Port GPIOB
#define LED5_Pin GPIO_PIN_3
#define LED5_GPIO_Port GPIOH
#define SP_LD_Pin GPIO_PIN_10
#define SP_LD_GPIO_Port GPIOA
#define SP_FD_Pin GPIO_PIN_9
#define SP_FD_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
