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

  USBD_SetupReqTypedef request = {0};
    request.bRequest = USB_REQ_SET_ADDRESS;
    request.wValue = 0x01;
  USBD_StatusTypeDef  result =  USBD_StdDevReq (&hUsbDeviceFS, &request);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    HAL_Delay(200); // Needs this delay to work.
    request.bRequest = USB_REQ_SET_CONFIGURATION;
    request.wValue = 0x0;
    result =  USBD_StdDevReq (&hUsbDeviceFS, &request);
    if (result !=  USBD_OK) {
        puts("bad init");
    }
    HAL_Delay(200); // Needs this delay to work.
}

void send_key_press(key_table_t * table) {
    HAL_Delay(1);
    uint8_t report[9];
    
    // fist the control keys
    report[0] = 0x01;
    report[1] = table->control_keys[RIGHT_GUI  ] << 7
              | table->control_keys[RIGHT_ALT  ] << 6
              | table->control_keys[RIGHT_SHIFT] << 5
              | table->control_keys[RIGHT_CTRL ] << 4
              | table->control_keys[LEFT_GUI   ] << 3
              | table->control_keys[LEFT_ALT   ] << 2
              | table->control_keys[LEFT_SHIFT ] << 1
              | table->control_keys[LEFT_CTRL  ] << 0;

    // one for the padding
    report[2] = 0x00;
    // the individual keys
    report[3] = table->individual_keys[0];
    report[4] = table->individual_keys[1];
    report[5] = table->individual_keys[2];
    report[6] = table->individual_keys[3];
    report[7] = table->individual_keys[4];
    report[8] = table->individual_keys[5];
    USBD_HID_SendReport(&hUsbDeviceFS, report,9);
}

void send_keys_released(void) {
    HAL_Delay(20);
    uint8_t report[8];
    report[0] = NO_KEY;
    report[1] = NO_KEY;
    report[2] = NO_KEY;
    report[3] = NO_KEY;
    report[4] = NO_KEY;
    report[5] = NO_KEY;
    report[6] = NO_KEY;
    report[7] = NO_KEY;
    USBD_HID_SendReport(&hUsbDeviceFS, report,8);
}

void reset_key_table(key_table_t * table) {
    // Reset the control keys
    table->control_keys[RIGHT_GUI  ] = false;
    table->control_keys[RIGHT_ALT  ] = false;
    table->control_keys[RIGHT_SHIFT] = false;
    table->control_keys[RIGHT_CTRL ] = false;
    table->control_keys[LEFT_GUI   ] = false;
    table->control_keys[LEFT_ALT   ] = false;
    table->control_keys[LEFT_SHIFT ] = false;
    table->control_keys[LEFT_CTRL  ] = false;
    // Reset the individual keys
    table->individual_keys[0] = NO_KEY;
    table->individual_keys[1] = NO_KEY;
    table->individual_keys[2] = NO_KEY;
    table->individual_keys[3] = NO_KEY;
    table->individual_keys[4] = NO_KEY;
    table->individual_keys[5] = NO_KEY;
}








/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
