#include "keyboard.h"

#include "usbd_hid.h"
#include "usbd_conf_template.h"
#include "usbd_core.h"
#include "usbd_ctlreq.h"
#include "usbd_ioreq.h"

void usb_init(void) {
    USBD_HandleTypeDef USBD_Handle;
    USBD_DescriptorsTypeDef USBD_Descriptor;
    uint8_t id = 11;
    USBD_Init(&USBD_Handle, &USBD_Descriptor, id);

//    USBD_HID_SendReport();
//uint8_t USBD_HID_SendReport     (USBD_HandleTypeDef  *pdev, 
//                                 uint8_t *report,
 //                                uint16_t len)
}

