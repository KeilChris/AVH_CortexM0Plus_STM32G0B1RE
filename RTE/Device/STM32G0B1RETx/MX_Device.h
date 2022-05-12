
#if 0
**********************************************************************************
*** RCC Param Entries
**********************************************************************************
  TIM1Freq_Value=64000000
  LSI_VALUE=32000
  USART1CLockSelection=RCC_USART1CLKSOURCE_PCLK1
  CECCLockSelection=RCC_CECCLKSOURCE_HSI_DIV488
  LPUART1Freq_Value=64000000
  MCO2PinFreq_Value=64000000
  RCC_MCODiv=RCC_MCODIV_1
  ADCCLockSelection=RCC_ADCCLKSOURCE_SYSCLK
  TIM15Freq_Value=64000000
  ExtClockEnable=false
  APB1CLKDivider=RCC_HCLK_DIV1
  I2S1Freq_Value=64000000
  LPTIM2Freq_Value=64000000
  ClockTypePCLK1=RCC_CLOCKTYPE_PCLK1
  DATA_CACHE_ENABLE=1
  RCC_MCO2Div=RCC_MCO2DIV_1
  HSISYSCLKDivider=RCC_HSI_DIV1
  FCLKCortexFreq_Value=64000000
  AHBFreq_Value=64000000
  RCC_MCO2Source=RCC_MCO2SOURCE_SYSCLK
  CodegenConfigPeriph=true
  ClockTypeSysClk=RCC_CLOCKTYPE_SYSCLK
  USART2CLockSelection=RCC_USART2CLKSOURCE_PCLK1
  SYSCLKFreq_VALUE=64000000
  USART1Freq_Value=64000000
  HSICalibrationValue=64
  I2C2CLockSelection=RCC_I2C2CLKSOURCE_PCLK1
  PLLQ=RCC_PLLQ_DIV2
  PLLP=RCC_PLLP_DIV2
  SYSCLKSource=RCC_SYSCLKSOURCE_PLLCLK
  LPTIM1CLockSelection=RCC_LPTIM1CLKSOURCE_PCLK1
  LPTIM1Freq_Value=64000000
  PLLR=RCC_PLLR_DIV2
  LSE_VALUE=32768
  HSE_VALUE=8000000
  ClockTypeARG=RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK|RCC_CLOCKTYPE_PCLK1
  APB1TimCLKDivider=1
  Cortex_Div=SYSTICK_CLKSOURCE_HCLK
  HSI_VALUE=16000000
  AHBCLKDividerARG=RCC_SYSCLK_DIV1
  EnableCSSLSE=false
  ADCFreq_Value=64000000
  I2S1CLockSelection=RCC_I2S1CLKSOURCE_SYSCLK
  driver=HAL
  APB1CLKDividerARG=RCC_HCLK_DIV1
  PWR_Regulator_Voltage_Scale=PWR_REGULATOR_VOLTAGE_SCALE1
  EXTERNAL_I2S2_CLOCK_VALUE=12288000
  OscillatorType=RCC_OSCILLATORTYPE_HSI
  APBTimFreq_Value=64000000
  RTCFreq_Value=32000
  VDD_VALUE=3
  AHBCLKDivider=RCC_SYSCLK_DIV1
  LPTIM2CLockSelection=RCC_LPTIM2CLKSOURCE_PCLK1
  Instance=RCC
  SYSCLKFreq_VALUE1=64
  SYSCLKFreq_VALUE2=64
  PWRFreq_Value=64000000
  USART3CLockSelection=RCC_USART3CLKSOURCE_PCLK1
  MCO1PinFreq_Value=64000000
  I2C1CLockSelection=RCC_I2C1CLKSOURCE_PCLK1
  USART2Freq_Value=64000000
  HCLKFreq_Value=64000000
  HSISYSCLKDividerARG=RCC_HSI_DIV1
  SYSCLKSourceARG=RCC_SYSCLKSOURCE_PLLCLK
  HSE_Timout=100
  APBFreq_Value=64000000
  USBFreq_Value=48000000
  EnableExtClockForI2S=false
  WatchDogFreq_Value=32000
  PLLM=RCC_PLLM_DIV1
  LPUART1CLockSelection=RCC_LPUART1CLKSOURCE_PCLK1
  CECFreq_Value=32786
  PREFETCH_ENABLE=0
  PLLN=8
  FLatency=FLASH_LATENCY_2
  EXTERNAL_CLOCK_VALUE=12288000
  CortexFreq_Value=64000000
  I2C1Freq_Value=64000000
  RTCClockSelection=RCC_RTCCLKSOURCE_LSI
  USART3Freq_Value=64000000
  LSE_Timout=5000
  ClockTypeHCLK=RCC_CLOCKTYPE_HCLK
  RCC_CEC_Clock_Source_FROM_HSI16=488
  INSTRUCTION_CACHE_ENABLE=1
  RCC_RTC_Clock_Source_FROM_HSE=32
  RCC_MCO1Source=RCC_MCO1SOURCE_SYSCLK
  EnbaleCSS=false
  ClockType=RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK|RCC_CLOCKTYPE_PCLK1

**********************************************************************************
*** SYS
**********************************************************************************
*** SYS - Params
  driver=HAL
  Instance=SYS
  DisableDeadBatterySignalsConfig=SYSCFG_CFGR1_UCPD1_STROBE | SYSCFG_CFGR1_UCPD2_STROBE

*** SYS - GPIO Params
  SYS_SWDIO={Pin=PA13, Port=PA, GPIO_Label=TMS}
  SYS_WKUP2={Pin=PC13, Port=PC, GPIO_Label=}
  SYS_SWCLK={Pin=PA14-BOOT0, Port=PA, GPIO_Label=TCK}

*** SYS - DMA Params

*** SYS - NVIC Params

**********************************************************************************
*** USART2
**********************************************************************************
*** USART2 - Params
  StopBits=STOPBITS_1
  AutoBaudRateEnableParam=UART_ADVFEATURE_AUTOBAUDRATE_DISABLE
  MSBFirstParam=ADVFEATURE_MSBFIRST_DISABLE
  HwFlowCtl=UART_HWCONTROL_NONE
  ClockPrescaler=PRESCALER_DIV1
  FIFOMode=FIFOMODE_DISABLE
  TXFIFOThreshold=TXFIFO_THRESHOLD_1EIGHTHFULL
  Instance=USART$Index
  Mode=MODE_TX_RX
  OneBitSampling=UART_ONE_BIT_SAMPLE_DISABLE
  OverrunDisableParam=ADVFEATURE_OVERRUN_ENABLE
  OverSampling=UART_OVERSAMPLING_16
  RXFIFOThreshold=RXFIFO_THRESHOLD_1EIGHTHFULL
  DMADisableonRxErrorParam=ADVFEATURE_DMA_ENABLEONRXERROR
  TxPinLevelInvertParam=ADVFEATURE_TXINV_DISABLE
  driver=HAL
  BaudRate=115200
  SwapParam=ADVFEATURE_SWAP_DISABLE
  DataInvertParam=ADVFEATURE_DATAINV_DISABLE
  WordLength=WORDLENGTH_8B
  VirtualMode_Asynchronous=VM_ASYNC
  Parity=PARITY_NONE
  RxPinLevelInvertParam=ADVFEATURE_RXINV_DISABLE

*** USART2 - GPIO Params
  USART2_TX={GPIO_ModeDefaultPP=GPIO_MODE_AF_PP, GPIO_Speed=GPIO_SPEED_FREQ_LOW, Pin=PA2, GPIOx=GPIOA, PinState=GPIO_PIN_RESET, GPIO_PuPd=GPIO_NOPULL, Port=PA, GPIO_Label=USART2_TX [STLK_TX], GPIO_Pin=GPIO_PIN_2, GPIO_AF=GPIO_AF1_USART2}
  USART2_RX={GPIO_ModeDefaultPP=GPIO_MODE_AF_PP, GPIO_Speed=GPIO_SPEED_FREQ_LOW, Pin=PA3, GPIOx=GPIOA, PinState=GPIO_PIN_RESET, GPIO_PuPd=GPIO_NOPULL, Port=PA, GPIO_Label=USART2_RX [STLK_RX], GPIO_Pin=GPIO_PIN_3, GPIO_AF=GPIO_AF1_USART2}

*** USART2 - DMA Params

*** USART2 - NVIC Params

**********************************************************************************
*** NVIC
**********************************************************************************
*** NVIC - Params
  driver=HAL
  Instance=NVIC

*** NVIC - GPIO Params

*** NVIC - DMA Params

*** NVIC - NVIC Params

**********************************************************************************
*** GPIO
**********************************************************************************
*** GPIO - Params
  driver=HAL
  Instance=GPIO

*** GPIO - GPIO Params
  PA5={GPIO_Speed=GPIO_SPEED_FREQ_HIGH, Pin=PA5, GPIOx=GPIOA, PinState=GPIO_PIN_RESET, GPIO_PuPd=GPIO_NOPULL, Port=PA, GPIO_Label=LED_GREEN, GPIO_Pin=GPIO_PIN_5, GPIO_ModeDefaultOutputPP=GPIO_MODE_OUTPUT_PP}
  PC7={Pin=PC7, GPIOx=GPIOC, GPIO_PuPd=GPIO_NOPULL, Port=PC, GPIO_Label=ARDUINO_D9_DATAREADY, GPIO_Pin=GPIO_PIN_7, GPIO_Mode=GPIO_MODE_INPUT}
  PB0={GPIO_Speed=GPIO_SPEED_FREQ_HIGH, Pin=PB0, GPIOx=GPIOB, PinState=GPIO_PIN_SET, GPIO_PuPd=GPIO_NOPULL, Port=PB, GPIO_Label=ARDUINO_D10_SPI1_NSS, GPIO_Pin=GPIO_PIN_0, GPIO_ModeDefaultOutputPP=GPIO_MODE_OUTPUT_PP}

*** GPIO - DMA Params

*** GPIO - NVIC Params

#endif

/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 09/05/2022 15:16:45
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_SYSCLKFreq_VALUE                     64000000
#define MX_HCLKFreq_Value                       64000000
#define MX_FCLKCortexFreq_Value                 64000000
#define MX_CortexFreq_Value                     64000000
#define MX_AHBFreq_Value                        64000000
#define MX_APBFreq_Value                        64000000
#define MX_CECFreq_Value                        32786
#define MX_I2S1Freq_Value                       64000000
#define MX_PWRFreq_Value                        64000000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        48000000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    64000000
#define MX_TIM1Freq_Value                       64000000
#define MX_LPUART1Freq_Value                    64000000
#define MX_TIM15Freq_Value                      64000000
#define MX_LPTIM2Freq_Value                     64000000
#define MX_USART1Freq_Value                     64000000
#define MX_LPTIM1Freq_Value                     64000000
#define MX_ADCFreq_Value                        64000000
#define MX_APBTimFreq_Value                     64000000
#define MX_SYSCLKFreq_VALUE1                    64
#define MX_SYSCLKFreq_VALUE2                    64
#define MX_USART2Freq_Value                     64000000
#define MX_I2C1Freq_Value                       64000000

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/* Pin PA13 */
#define MX_SYS_SWDIO_Pin                        PA13
#define MX_TMS                                  SYS_SWDIO

/* Pin PC13 */
#define MX_SYS_WKUP2_Pin                        PC13

/* Pin PA14-BOOT0 */
#define MX_SYS_SWCLK_Pin                        PA14_BOOT0
#define MX_TCK                                  SYS_SWCLK

/*-------------------------------- USART2     --------------------------------*/

#define MX_USART2                               1

#define MX_USART2_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA2 */
#define MX_USART2_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_Pin                        PA2
#define MX_USART2_TX_GPIOx                      GPIOA
#define MX_USART2_TX_PinState                   GPIO_PIN_RESET
#define MX_USART2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_TX_STLK_TX                    USART2_TX
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_2
#define MX_USART2_TX_GPIO_AF                    GPIO_AF1_USART2

/* Pin PA3 */
#define MX_USART2_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_Pin                        PA3
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_PinState                   GPIO_PIN_RESET
#define MX_USART2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_RX_STLK_RX                    USART2_RX
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_3
#define MX_USART2_RX_GPIO_AF                    GPIO_AF1_USART2

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PA5 */
#define MX_PA5_GPIO_Speed                       GPIO_SPEED_FREQ_HIGH
#define MX_PA5_Pin                              PA5
#define MX_PA5_GPIOx                            GPIOA
#define MX_PA5_PinState                         GPIO_PIN_RESET
#define MX_PA5_GPIO_PuPd                        GPIO_NOPULL
#define MX_LED_GREEN                            PA5
#define MX_PA5_GPIO_Pin                         GPIO_PIN_5
#define MX_PA5_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC7 */
#define MX_PC7_Pin                              PC7
#define MX_PC7_GPIOx                            GPIOC
#define MX_PC7_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARDUINO_D9_DATAREADY                 PC7
#define MX_PC7_GPIO_Pin                         GPIO_PIN_7
#define MX_PC7_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB0 */
#define MX_PB0_GPIO_Speed                       GPIO_SPEED_FREQ_HIGH
#define MX_PB0_Pin                              PB0
#define MX_PB0_GPIOx                            GPIOB
#define MX_PB0_PinState                         GPIO_PIN_SET
#define MX_PB0_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARDUINO_D10_SPI1_NSS                 PB0
#define MX_PB0_GPIO_Pin                         GPIO_PIN_0
#define MX_PB0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

#endif  /* __MX_DEVICE_H */

