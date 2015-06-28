/**
  ******************************************************************************
  * @file           : USB_DEVICE
  * @date           : 27/06/2015 18:51:22  
  * @version        : v1.0_Cube
  * @brief          : This file implements the USB Device 
  ******************************************************************************
  *
  * COPYRIGHT(c) 2015 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  * 1. Redistributions of source code must retain the above copyright notice,
  * this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  * this list of conditions and the following disclaimer in the documentation
  * and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of its contributors
  * may be used to endorse or promote products derived from this software
  * without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/

#include "usb_device.h"
#include "usbd_core.h"
#include "usbd_desc.h"
#include "usbd_hid.h"

/* USB Device Core handle declaration */
USBD_HandleTypeDef hUsbDeviceFS;

/* init function */				        
void MX_USB_DEVICE_Init(void)
{
  /* Init Device Library,Add Supported Class and Start the library*/
  USBD_Init(&hUsbDeviceFS, &FS_Desc, DEVICE_FS);

  USBD_RegisterClass(&hUsbDeviceFS, &USBD_HID);

  USBD_Start(&hUsbDeviceFS);

  HAL_Delay(1000);
  USBD_SetupReqTypedef request = {0};
    request.bRequest = USB_REQ_SET_ADDRESS;
    request.wValue = 0x01;
  USBD_StatusTypeDef  result =  USBD_StdDevReq (&hUsbDeviceFS, &request);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    else {
        puts("good init");
    }
    HAL_Delay(1000);
    request.bRequest = USB_REQ_SET_CONFIGURATION;
    request.wValue = 0x55;
    result =  USBD_StdDevReq (&hUsbDeviceFS, &request);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    else {
        puts("good init");
    }
    HAL_Delay(1000);
    uint8_t report[9];
    report [ 0 ] = 0x00;
    report [ 1 ] = 0x0a;;
    report [ 2 ] = 0x0b;
    report [ 3 ] = 0x0c;
    report [ 4 ] = 0x0d;
    report [ 5 ] = 0x0e;
    report [ 6 ] = 0x0f;
    report [ 7 ] = 0x0a;
    report [ 8 ] = 0x0b;
    USBD_HID_SendReport(&hUsbDeviceFS, report,9);
    HAL_Delay(1000);
    report [ 0 ] = 0x00;
    report [ 1 ] = 0x00;
    report [ 2 ] = 0x00;
    report [ 3 ] = 0x00;
    report [ 4 ] = 0x00;
    report [ 5 ] = 0x00;
    report [ 6 ] = 0x00;
    report [ 7 ] = 0x00;
    report [ 8 ] = 0x00;
    USBD_HID_SendReport(&hUsbDeviceFS, report,9);

}
/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
