#include "keyboard.h"
#include "stm32f4xx_hal_pcd.h"

#include "usbd_conf.h"
#include "usbd_hid.h"
#include "usbd_core.h"
#include "usbd_ctlreq.h"
#include "usbd_desc.h"
#include "usbd_ioreq.h"

void usb_init(void) {
    PCD_HandleTypeDef PCD_Handle;
    HAL_PCD_MspInit(&PCD_Handle);
    USBD_HandleTypeDef USBD_Handle = {0};
        //uint8_t                 id;
        //uint32_t                dev_config;
        //uint32_t                dev_default_config;
        //uint32_t                dev_config_status; 
        //USBD_SpeedTypeDef       dev_speed; 
        //USBD_EndpointTypeDef    ep_in[15];
        //USBD_EndpointTypeDef    ep_out[15];  
        //uint32_t                ep0_state;  
        //uint32_t                ep0_data_len;     
        //uint8_t                 dev_state;
        //uint8_t                 dev_old_state;
        //uint8_t                 dev_address;
        //uint8_t                 dev_connection_status;  
        //uint8_t                 dev_test_mode;
        //uint32_t                dev_remote_wakeup;

        //USBD_SetupReqTypedef    request;
        //USBD_DescriptorsTypeDef *pDesc;
        //USBD_ClassTypeDef       *pClass;
        //void                    *pClassData;  
        //void                    *pUserData;    
        //void                    *pData;    
    USBD_DescriptorsTypeDef USBD_Descriptor = HID_Desc;
        /* uint8_t  *(*GetDeviceDescriptor)( USBD_SpeedTypeDef speed , uint16_t *length); */  
        /* uint8_t  *(*GetLangIDStrDescriptor)( USBD_SpeedTypeDef speed , uint16_t *length); */ 
        /* uint8_t  *(*GetManufacturerStrDescriptor)( USBD_SpeedTypeDef speed , uint16_t *length); */  
        /* uint8_t  *(*GetProductStrDescriptor)( USBD_SpeedTypeDef speed , uint16_t *length); */  
        /* uint8_t  *(*GetSerialStrDescriptor)( USBD_SpeedTypeDef speed , uint16_t *length); */  
        /* uint8_t  *(*GetConfigurationStrDescriptor)( USBD_SpeedTypeDef speed , uint16_t *length); */  
        /* uint8_t  *(*GetInterfaceStrDescriptor)( USBD_SpeedTypeDef speed , uint16_t *length); */ 
    uint8_t id = 11;
    USBD_StatusTypeDef result = USBD_Init(&USBD_Handle, &USBD_Descriptor, id);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    else {
        puts("good init");
    }
    /* Add Supported Class */
    USBD_RegisterClass(&USBD_Handle, USBD_HID_CLASS);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    else {
        puts("good init");
    }
    /* Start Device Process */
    USBD_Start(&USBD_Handle);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    else {
        puts("good init");
    }
    USBD_SetupReqTypedef request = {0};
    request.bRequest = USB_REQ_SET_ADDRESS;
    request.wValue = 0x11;
    result =  USBD_StdDevReq (&USBD_Handle, &request);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    else {
        puts("good init");
    }
    request.bRequest = USB_REQ_SET_CONFIGURATION;
    request.wValue = 0x1;
    result =  USBD_StdDevReq (&USBD_Handle, &request);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    else {
        puts("good init");
    }
    uint8_t report[6] = "HELLO";
    USBD_HID_SendReport(&USBD_Handle, report,6);

//    USBD_HID_SendReport();
//uint8_t USBD_HID_SendReport     (USBD_HandleTypeDef  *pdev, 
//                                 uint8_t *report,
 //                                uint16_t len)
}

void UART8_IRQHandler(void) {

    puts("weeee");
}
void USART6_IRQHandler(void) {

    puts("argggg");
}
void USART3_IRQHandler(void) {

    puts("phooo");
}
void USART2_IRQHandler(void) {

    puts("weeee");
}
void USART1_IRQHandler(void) {

    puts("oneee");
}
void UART7_IRQHandler(void){puts("ake");}
void UART6_IRQHandler(void){puts("ake");}
void UART5_IRQHandler(void){puts("ake");}
void UART4_IRQHandler(void){puts("ake");}
void UART3_IRQHandler(void){puts("ake");}
void UART2_IRQHandler(void){puts("ake");}
void UART1_IRQHandler(void){puts("ake");}
