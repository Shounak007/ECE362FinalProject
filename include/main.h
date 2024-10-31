/**
  ******************************************************************************
  * @file    main.h
  * @brief   Header for main.c file.
  ******************************************************************************
  */

#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"      // STM32Cube HAL header
#include <stdio.h>

/* Exported constants --------------------------------------------------------*/
/* Define constants related to the temperature sensor and other peripherals */
#define TEMP_SENSOR_PIN         GPIO_PIN_0        // PA0
#define TEMP_SENSOR_GPIO_PORT   GPIOA              // GPIO Port A
#define TEMP_SENSOR_ADC_CHANNEL ADC_CHANNEL_0      // ADC Channel 0

#define UART_TX_PIN             GPIO_PIN_2        // PA2
#define UART_RX_PIN             GPIO_PIN_3        // PA3
#define UART_GPIO_PORT          GPIOA              // GPIO Port A
#define UART_INSTANCE           USART2             // USART2 instance

/* Exported function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_ADC_Init(void);
void MX_USART2_UART_Init(void);
float Read_Temperature(void);

/* External variables --------------------------------------------------------*/
extern ADC_HandleTypeDef hadc;
extern UART_HandleTypeDef huart2;

#ifdef __cplusplus
}
#endif

#endif /* MAIN_H */
