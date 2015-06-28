#include "keyboard.h"

#include "usbd_hid.h"
#include "usbd_conf_template.h"
#include "usbd_core.h"
#include "usbd_ctlreq.h"
#include "usbd_ioreq.h"

void usb_init(void) {
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
    USBD_Handle.pClass = &USBD_HID;
    //void                    *pClassData;  
    //void                    *pUserData;    
    //void                    *pData;    
    USBD_DescriptorsTypeDef USBD_Descriptor;
    uint8_t id = 11;
    USBD_StatusTypeDef result = USBD_Init(&USBD_Handle, &USBD_Descriptor, id);
    if (result !=  USBD_OK) {
        puts("baaad");
    }
    else {
        puts("good init");
    }

//    USBD_HID_SendReport();
//uint8_t USBD_HID_SendReport     (USBD_HandleTypeDef  *pdev, 
//                                 uint8_t *report,
 //                                uint16_t len)
}

