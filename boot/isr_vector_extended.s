    .section .isr_vector

    .long     PVD_IRQHandler                    /* PVD through EXTI Line detection */
    .long     TAMP_STAMP_IRQHandler             /* Tamper and TimeStamps through the EXTI line */
    .long     RTC_WKUP_IRQHandler               /* RTC Wakeup through the EXTI line */
    .long     FLASH_IRQHandler                  /* FLASH                        */
    .long     RCC_IRQHandler                    /* RCC                          */
    .long     EXTI0_IRQHandler                  /* EXTI Line0                   */
    .long     EXTI1_IRQHandler                  /* EXTI Line1                   */
    .long     EXTI2_IRQHandler                  /* EXTI Line2                   */
    .long     EXTI3_IRQHandler                  /* EXTI Line3                   */
    .long     EXTI4_IRQHandler                  /* EXTI Line4                   */
    .long     DMA1_Stream0_IRQHandler           /* DMA1 Stream 0                */
    .long     DMA1_Stream1_IRQHandler           /* DMA1 Stream 1                */
    .long     DMA1_Stream2_IRQHandler           /* DMA1 Stream 2                */
    .long     DMA1_Stream3_IRQHandler           /* DMA1 Stream 3                */
    .long     DMA1_Stream4_IRQHandler           /* DMA1 Stream 4                */
    .long     DMA1_Stream5_IRQHandler           /* DMA1 Stream 5                */
    .long     DMA1_Stream6_IRQHandler           /* DMA1 Stream 6                */
    .long     ADC_IRQHandler                    /* ADC1, ADC2 and ADC3s         */
    .long     CAN1_TX_IRQHandler                /* CAN1 TX                      */
    .long     CAN1_RX0_IRQHandler               /* CAN1 RX0                     */
    .long     CAN1_RX1_IRQHandler               /* CAN1 RX1                     */
    .long     CAN1_SCE_IRQHandler               /* CAN1 SCE                     */
    .long     EXTI9_5_IRQHandler                /* External Line[9:5]s          */
    .long     TIM1_BRK_TIM9_IRQHandler          /* TIM1 Break and TIM9          */
    .long     TIM1_UP_TIM10_IRQHandler          /* TIM1 Update and TIM10        */
    .long     TIM1_TRG_COM_TIM11_IRQHandler     /* TIM1 Trigger and Commutation and TIM11 */
    .long     TIM1_CC_IRQHandler                /* TIM1 Capture Compare         */
    .long     TIM2_IRQHandler                   /* TIM2                         */
    .long     TIM3_IRQHandler                   /* TIM3                         */
    .long     TIM4_IRQHandler                   /* TIM4                         */
    .long     I2C1_EV_IRQHandler                /* I2C1 Event                   */
    .long     I2C1_ER_IRQHandler                /* I2C1 Error                   */
    .long     I2C2_EV_IRQHandler                /* I2C2 Event                   */
    .long     I2C2_ER_IRQHandler                /* I2C2 Error                   */
    .long     SPI1_IRQHandler                   /* SPI1                         */
    .long     SPI2_IRQHandler                   /* SPI2                         */
    .long     USART1_IRQHandler                 /* USART1                       */
    .long     USART2_IRQHandler                 /* USART2                       */
    .long     USART3_IRQHandler                 /* USART3                       */
    .long     EXTI15_10_IRQHandler              /* External Line[15:10]s        */
    .long     RTC_Alarm_IRQHandler              /* RTC Alarm (A and B) through EXTI Line */
    .long     OTG_FS_WKUP_IRQHandler            /* USB OTG FS Wakeup through EXTI line */
    .long     TIM8_BRK_TIM12_IRQHandler         /* TIM8 Break and TIM12         */
    .long     TIM8_UP_TIM13_IRQHandler          /* TIM8 Update and TIM13        */
    .long     TIM8_TRG_COM_TIM14_IRQHandler     /* TIM8 Trigger and Commutation and TIM14 */
    .long     TIM8_CC_IRQHandler                /* TIM8 Capture Compare         */
    .long     DMA1_Stream7_IRQHandler           /* DMA1 Stream7                 */
    .long     FMC_IRQHandler                    /* FMC                         */
    .long     SDIO_IRQHandler                   /* SDIO                         */
    .long     TIM5_IRQHandler                   /* TIM5                         */
    .long     SPI3_IRQHandler                   /* SPI3                         */
    .long     UART4_IRQHandler                  /* UART4                        */
    .long     UART5_IRQHandler                  /* UART5                        */
    .long     TIM6_DAC_IRQHandler               /* TIM6 and DAC1&2 underrun errors */
    .long     TIM7_IRQHandler                   /* TIM7                         */
    .long     DMA2_Stream0_IRQHandler           /* DMA2 Stream 0                */
    .long     DMA2_Stream1_IRQHandler           /* DMA2 Stream 1                */
    .long     DMA2_Stream2_IRQHandler           /* DMA2 Stream 2                */
    .long     DMA2_Stream3_IRQHandler           /* DMA2 Stream 3                */
    .long     DMA2_Stream4_IRQHandler           /* DMA2 Stream 4                */
    .long     ETH_IRQHandler                    /* Ethernet                     */
    .long     ETH_WKUP_IRQHandler               /* Ethernet Wakeup through EXTI line */
    .long     CAN2_TX_IRQHandler                /* CAN2 TX                      */
    .long     CAN2_RX0_IRQHandler               /* CAN2 RX0                     */
    .long     CAN2_RX1_IRQHandler               /* CAN2 RX1                     */
    .long     CAN2_SCE_IRQHandler               /* CAN2 SCE                     */
    .long     OTG_FS_IRQHandler                 /* USB OTG FS                   */
    .long     DMA2_Stream5_IRQHandler           /* DMA2 Stream 5                */
    .long     DMA2_Stream6_IRQHandler           /* DMA2 Stream 6                */
    .long     DMA2_Stream7_IRQHandler           /* DMA2 Stream 7                */
    .long     USART6_IRQHandler                 /* USART6                       */
    .long     I2C3_EV_IRQHandler                /* I2C3 event                   */
    .long     I2C3_ER_IRQHandler                /* I2C3 error                   */
    .long     OTG_HS_EP1_OUT_IRQHandler         /* USB OTG HS End Point 1 Out   */
    .long     OTG_HS_EP1_IN_IRQHandler          /* USB OTG HS End Point 1 In    */
    .long     OTG_HS_WKUP_IRQHandler            /* USB OTG HS Wakeup through EXTI */
    .long     OTG_HS_IRQHandler                 /* USB OTG HS                   */
    .long     DCMI_IRQHandler                   /* DCMI                         */
    .long     0                                 /* Reserved                     */
    .long     HASH_RNG_IRQHandler               /* Hash and Rng                 */
    .long     FPU_IRQHandler                    /* FPU                          */
    .long     UART7_IRQHandler                  /* UART7                        */
    .long     UART8_IRQHandler                  /* UART8                        */
    .long     SPI4_IRQHandler                   /* SPI4                         */
    .long     SPI5_IRQHandler                   /* SPI5 						  */
    .long     SPI6_IRQHandler                   /* SPI6						  */
    .long     SAI1_IRQHandler                   /* SAI1						  */
    .long     LTDC_IRQHandler                   /* LTDC_IRQHandler			  */
    .long     LTDC_ER_IRQHandler                /* LTDC_ER_IRQHandler			  */
    .long     DMA2D_IRQHandler                  /* DMA2D                        */

    .text
	.align	1
	.weak	Default_Handler
Default_Handler:
	b	.

    .weak      PVD_IRQHandler
    .thumb_set PVD_IRQHandler,Default_Handler

    .weak      TAMP_STAMP_IRQHandler
    .thumb_set TAMP_STAMP_IRQHandler,Default_Handler

    .weak      RTC_WKUP_IRQHandler
    .thumb_set RTC_WKUP_IRQHandler,Default_Handler

    .weak      FLASH_IRQHandler
    .thumb_set FLASH_IRQHandler,Default_Handler

    .weak      RCC_IRQHandler
    .thumb_set RCC_IRQHandler,Default_Handler

    .weak      EXTI0_IRQHandler
    .thumb_set EXTI0_IRQHandler,Default_Handler

    .weak      EXTI1_IRQHandler
    .thumb_set EXTI1_IRQHandler,Default_Handler

    .weak      EXTI2_IRQHandler
    .thumb_set EXTI2_IRQHandler,Default_Handler

    .weak      EXTI3_IRQHandler
    .thumb_set EXTI3_IRQHandler,Default_Handler

    .weak      EXTI4_IRQHandler
    .thumb_set EXTI4_IRQHandler,Default_Handler

    .weak      DMA1_Stream0_IRQHandler
    .thumb_set DMA1_Stream0_IRQHandler,Default_Handler

    .weak      DMA1_Stream1_IRQHandler
    .thumb_set DMA1_Stream1_IRQHandler,Default_Handler

    .weak      DMA1_Stream2_IRQHandler
    .thumb_set DMA1_Stream2_IRQHandler,Default_Handler

    .weak      DMA1_Stream3_IRQHandler
    .thumb_set DMA1_Stream3_IRQHandler,Default_Handler

    .weak      DMA1_Stream4_IRQHandler
    .thumb_set DMA1_Stream4_IRQHandler,Default_Handler

    .weak      DMA1_Stream5_IRQHandler
    .thumb_set DMA1_Stream5_IRQHandler,Default_Handler

    .weak      DMA1_Stream6_IRQHandler
    .thumb_set DMA1_Stream6_IRQHandler,Default_Handler

    .weak      ADC_IRQHandler
    .thumb_set ADC_IRQHandler,Default_Handler

    .weak      CAN1_TX_IRQHandler
    .thumb_set CAN1_TX_IRQHandler,Default_Handler

    .weak      CAN1_RX0_IRQHandler
    .thumb_set CAN1_RX0_IRQHandler,Default_Handler

    .weak      CAN1_RX1_IRQHandler
    .thumb_set CAN1_RX1_IRQHandler,Default_Handler

    .weak      CAN1_SCE_IRQHandler
    .thumb_set CAN1_SCE_IRQHandler,Default_Handler

    .weak      EXTI9_5_IRQHandler
    .thumb_set EXTI9_5_IRQHandler,Default_Handler

    .weak      TIM1_BRK_TIM9_IRQHandler
    .thumb_set TIM1_BRK_TIM9_IRQHandler,Default_Handler

    .weak      TIM1_UP_TIM10_IRQHandler
    .thumb_set TIM1_UP_TIM10_IRQHandler,Default_Handler

    .weak      TIM1_TRG_COM_TIM11_IRQHandler
    .thumb_set TIM1_TRG_COM_TIM11_IRQHandler,Default_Handler

    .weak      TIM1_CC_IRQHandler
    .thumb_set TIM1_CC_IRQHandler,Default_Handler

    .weak      TIM2_IRQHandler
    .thumb_set TIM2_IRQHandler,Default_Handler

    .weak      TIM3_IRQHandler
    .thumb_set TIM3_IRQHandler,Default_Handler

    .weak      TIM4_IRQHandler
    .thumb_set TIM4_IRQHandler,Default_Handler

    .weak      I2C1_EV_IRQHandler
    .thumb_set I2C1_EV_IRQHandler,Default_Handler

    .weak      I2C1_ER_IRQHandler
    .thumb_set I2C1_ER_IRQHandler,Default_Handler

    .weak      I2C2_EV_IRQHandler
    .thumb_set I2C2_EV_IRQHandler,Default_Handler

    .weak      I2C2_ER_IRQHandler
    .thumb_set I2C2_ER_IRQHandler,Default_Handler

    .weak      SPI1_IRQHandler
    .thumb_set SPI1_IRQHandler,Default_Handler

    .weak      SPI2_IRQHandler
    .thumb_set SPI2_IRQHandler,Default_Handler

    .weak      USART1_IRQHandler
    .thumb_set USART1_IRQHandler,Default_Handler

    .weak      USART2_IRQHandler
    .thumb_set USART2_IRQHandler,Default_Handler

    .weak      USART3_IRQHandler
    .thumb_set USART3_IRQHandler,Default_Handler

    .weak      EXTI15_10_IRQHandler
    .thumb_set EXTI15_10_IRQHandler,Default_Handler

    .weak      RTC_Alarm_IRQHandler
    .thumb_set RTC_Alarm_IRQHandler,Default_Handler

    .weak      OTG_FS_WKUP_IRQHandler
    .thumb_set OTG_FS_WKUP_IRQHandler,Default_Handler

    .weak      TIM8_BRK_TIM12_IRQHandler
    .thumb_set TIM8_BRK_TIM12_IRQHandler,Default_Handler

    .weak      TIM8_UP_TIM13_IRQHandler
    .thumb_set TIM8_UP_TIM13_IRQHandler,Default_Handler

    .weak      TIM8_TRG_COM_TIM14_IRQHandler
    .thumb_set TIM8_TRG_COM_TIM14_IRQHandler,Default_Handler

    .weak      TIM8_CC_IRQHandler
    .thumb_set TIM8_CC_IRQHandler,Default_Handler

    .weak      DMA1_Stream7_IRQHandler
    .thumb_set DMA1_Stream7_IRQHandler,Default_Handler

    .weak      FMC_IRQHandler
    .thumb_set FMC_IRQHandler,Default_Handler

    .weak      SDIO_IRQHandler
    .thumb_set SDIO_IRQHandler,Default_Handler

    .weak      TIM5_IRQHandler
    .thumb_set TIM5_IRQHandler,Default_Handler

    .weak      SPI3_IRQHandler
    .thumb_set SPI3_IRQHandler,Default_Handler

    .weak      UART4_IRQHandler
    .thumb_set UART4_IRQHandler,Default_Handler

    .weak      UART5_IRQHandler
    .thumb_set UART5_IRQHandler,Default_Handler

    .weak      TIM6_DAC_IRQHandler
    .thumb_set TIM6_DAC_IRQHandler,Default_Handler

    .weak      TIM7_IRQHandler
    .thumb_set TIM7_IRQHandler,Default_Handler

    .weak      DMA2_Stream0_IRQHandler
    .thumb_set DMA2_Stream0_IRQHandler,Default_Handler

    .weak      DMA2_Stream1_IRQHandler
    .thumb_set DMA2_Stream1_IRQHandler,Default_Handler

    .weak      DMA2_Stream2_IRQHandler
    .thumb_set DMA2_Stream2_IRQHandler,Default_Handler

    .weak      DMA2_Stream3_IRQHandler
    .thumb_set DMA2_Stream3_IRQHandler,Default_Handler

    .weak      DMA2_Stream4_IRQHandler
    .thumb_set DMA2_Stream4_IRQHandler,Default_Handler

    .weak      ETH_IRQHandler
    .thumb_set ETH_IRQHandler,Default_Handler

    .weak      ETH_WKUP_IRQHandler
    .thumb_set ETH_WKUP_IRQHandler,Default_Handler

    .weak      CAN2_TX_IRQHandler
    .thumb_set CAN2_TX_IRQHandler,Default_Handler

    .weak      CAN2_RX0_IRQHandler
    .thumb_set CAN2_RX0_IRQHandler,Default_Handler

    .weak      CAN2_RX1_IRQHandler
    .thumb_set CAN2_RX1_IRQHandler,Default_Handler

    .weak      CAN2_SCE_IRQHandler
    .thumb_set CAN2_SCE_IRQHandler,Default_Handler

    .weak      OTG_FS_IRQHandler
    .thumb_set OTG_FS_IRQHandler,Default_Handler

    .weak      DMA2_Stream5_IRQHandler
    .thumb_set DMA2_Stream5_IRQHandler,Default_Handler

    .weak      DMA2_Stream6_IRQHandler
    .thumb_set DMA2_Stream6_IRQHandler,Default_Handler

    .weak      DMA2_Stream7_IRQHandler
    .thumb_set DMA2_Stream7_IRQHandler,Default_Handler

    .weak      USART6_IRQHandler
    .thumb_set USART6_IRQHandler,Default_Handler

    .weak      I2C3_EV_IRQHandler
    .thumb_set I2C3_EV_IRQHandler,Default_Handler

    .weak      I2C3_ER_IRQHandler
    .thumb_set I2C3_ER_IRQHandler,Default_Handler

    .weak      OTG_HS_EP1_OUT_IRQHandler
    .thumb_set OTG_HS_EP1_OUT_IRQHandler,Default_Handler

    .weak      OTG_HS_EP1_IN_IRQHandler
    .thumb_set OTG_HS_EP1_IN_IRQHandler,Default_Handler

    .weak      OTG_HS_WKUP_IRQHandler
    .thumb_set OTG_HS_WKUP_IRQHandler,Default_Handler

    .weak      OTG_HS_IRQHandler
    .thumb_set OTG_HS_IRQHandler,Default_Handler

    .weak      DCMI_IRQHandler
    .thumb_set DCMI_IRQHandler,Default_Handler

    .weak      HASH_RNG_IRQHandler
    .thumb_set HASH_RNG_IRQHandler,Default_Handler

    .weak      FPU_IRQHandler
    .thumb_set FPU_IRQHandler,Default_Handler

    .weak      UART7_IRQHandler
    .thumb_set UART7_IRQHandler,Default_Handler

    .weak      UART8_IRQHandler
    .thumb_set UART8_IRQHandler,Default_Handler

    .weak      SPI4_IRQHandler
    .thumb_set SPI4_IRQHandler,Default_Handler

    .weak      SPI5_IRQHandler
    .thumb_set SPI5_IRQHandler,Default_Handler

    .weak      SPI6_IRQHandler
    .thumb_set SPI6_IRQHandler,Default_Handler

    .weak      SAI1_IRQHandler
    .thumb_set SAI1_IRQHandler,Default_Handler

    .weak      LTDC_IRQHandler
    .thumb_set LTDC_IRQHandler,Default_Handler

    .weak      LTDC_ER_IRQHandler
    .thumb_set LTDC_ER_IRQHandler,Default_Handler

    .weak      DMA2D_IRQHandler
    .thumb_set DMA2D_IRQHandler,Default_Handler
