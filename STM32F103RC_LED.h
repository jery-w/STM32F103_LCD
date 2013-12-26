/**
  ******************************************************************************
  * @file    STM32F103RC_led.h
  * @author  jery Wang
  * @version V1.0.0
  * @date    12/18/2013
  * @brief   Header file for STM32F103RC_led.c module.
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2013 Jery Wang </center></h2>
  */ 
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F103RC_LED_H
#define __STM32F103RC_LED_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
#include "STM32f10x.h"

/** @addtogroup Utilities
  * @{
  */ 
  
/** @addtogroup STM32F103RC
  * @{
  */ 

/** @defgroup STM32F103RC_Abstraction_Layer
  * @{
  */  

/** @defgroup STM32F103RC_HARDWARE_RESOURCES
  * @{
  */
  
/** @defgroup STM32F103RC_Exported_Types
  * @{
  */
typedef enum 
{
  LED_FAULT = 0,
  LED_NORMAL = 1
} Led_TypeDef;

typedef enum 
{  
  BUTTON_USER = 0
} Button_TypeDef;

typedef enum 
{  
  BUTTON_MODE_GPIO = 0,
  BUTTON_MODE_EXTI = 1
} ButtonMode_TypeDef;              

/** 
  * @brief  STM32F100 Button Defines Legacy  
  */ 

#define Button_USER          BUTTON_USER
#define Mode_GPIO            BUTTON_MODE_GPIO
#define Mode_EXTI            BUTTON_MODE_EXTI
#define Button_Mode_TypeDef  ButtonMode_TypeDef


/** @addtogroup STM32F103RC_LOW_LEVEL_LED
  * @{
  */
#define LEDn                              2
#define LED_FAULT_PIN                     GPIO_Pin_11  
#define LED_FAULT_GPIO_PORT               GPIOA
#define LED_FAULT_GPIO_CLK                RCC_APB2Periph_GPIOA 

#define LED_NORMAL_PIN                    GPIO_Pin_12  
#define LED_NORMAL_GPIO_PORT              GPIOA
#define LED_NORMAL_GPIO_CLK               RCC_APB2Periph_GPIOA  

/**
  * @}
  */ 
  
/** @addtogroup STM32F103RC_LOW_LEVEL_BUTTON
  * @{
  */  
#define BUTTONn                           4

/* * @brief USER push-button
 */
#define BUTTON_DOWN                       GPIO_Pin_4
#define BUTTON_UP                         GPIO_Pin_5
#define BUTTON_ENTER                      GPIO_Pin_6
#define BUTTON_ESC                        GPIO_Pin_7

#define BUTTON_GPIO_PORT                  GPIOA
#define BUTTON_GPIO_CLK                   RCC_APB2Periph_GPIOA
#define BUTTON_EXTI_PORT_SOURCE           GPIO_PortSourceGPIOA
#define BUTTON_EXTI_PIN_SOURCE            GPIO_PinSource0
#define BUTTON_EXTI_LINE                  EXTI_Line0
#define BUTTON_EXTI_IRQn                  EXTI0_IRQn

/**
  * @}
  */ 

/** @defgroup STM32F103RC_LOW_LEVEL__Exported_Functions
  * @{
  */  
void STM32F103RC_LEDInit(Led_TypeDef Led);
void STM32F103RC_LEDOn(Led_TypeDef Led);
void STM32F103RC_LEDOff(Led_TypeDef Led);
void STM32F103RC_LEDToggle(Led_TypeDef Led);
void STM32F103RC_PBInit(Button_TypeDef Button, ButtonMode_TypeDef Button_Mode);
uint32_t STM32F103RC_PBGetState(Button_TypeDef Button);

/**
  * @}
  */ 
    
#ifdef __cplusplus
}
#endif


#endif /* __STM32F103RC_LED_H */

/**
  * @}
  */ 

/**
  * @}
  */  

/**
  * @}
  */
  
/******************* (C) COPYRIGHT 2013 STMicroelectronics *****END OF FILE****/
