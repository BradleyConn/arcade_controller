/**
  ******************************************************************************
  * @file           : USB_DEVICE
  * @date           : 27/06/2015 18:51:22  
  * @version        : v1.0_Cube
  * @brief          : Header for usb_device file.
  ******************************************************************************
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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __usb_device_H
#define __usb_device_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "usbd_def.h"

#include <stdbool.h>

// NO KEY
#define NO_KEY            0x00

// CONTROL KEYS
#define RIGHT_GUI   0
#define RIGHT_ALT   1
#define RIGHT_SHIFT 2
#define RIGHT_CTRL  3
#define LEFT_GUI    4
#define LEFT_ALT    5
#define LEFT_SHIFT  6
#define LEFT_CTRL   7

// INDIVIDUAL KEYS
#define KEY_A            0x04
#define KEY_B            0x05
#define KEY_C            0x06
#define KEY_D            0x07
#define KEY_E            0x08
#define KEY_F            0x09
#define KEY_G            0x0a
#define KEY_H            0x0b
#define KEY_I            0x0c
#define KEY_J            0x0d
#define KEY_K            0x0e
#define KEY_L            0x0f
#define KEY_M            0x10
#define KEY_N            0x11
#define KEY_O            0x12
#define KEY_P            0x13
#define KEY_Q            0x14
#define KEY_R            0x15
#define KEY_S            0x16
#define KEY_T            0x17
#define KEY_U            0x18
#define KEY_V            0x19
#define KEY_W            0x1a
#define KEY_X            0x1b
#define KEY_Y            0x1c
#define KEY_Z            0x1d
#define KEY_1            0x1e
#define KEY_2            0x1f
#define KEY_3            0x20
#define KEY_4            0x21
#define KEY_5            0x22
#define KEY_6            0x23
#define KEY_7            0x24
#define KEY_8            0x25
#define KEY_9            0x26
#define KEY_0            0x27
#define KEY_ENTER        0x28
#define KEY_ESCAPE       0x29
#define KEY_BACKSPACE    0x2a
#define KEY_TAB          0x2b
#define KEY_SPACEBAR     0x2c
#define KEY_MINUS        0x2d
#define KEY_EQUALS       0x2e
#define KEY_LEFTBRACKET  0x2f
#define KEY_RIGHTBRACKET 0x30
#define KEY_BACKSLASH    0x31
#define KEY_SQUIGGLY     0x32
#define KEY_SEMICOLON    0x33
#define KEY_APOSTROPHE   0x34
#define KEY_TILDE        0x35
#define KEY_COMMA        0x36
#define KEY_PEROD        0x37
#define KEY_FORWARDSLASH 0x38
#define KEY_CAPSLOCKS    0x39
#define KEY_F1           0x3a
#define KEY_F2           0x3b
#define KEY_F3           0x3c
#define KEY_F4           0x3d
#define KEY_F5           0x3e
#define KEY_F6           0x3f
#define KEY_F7           0x40
#define KEY_F8           0x41
#define KEY_F9           0x42
#define KEY_F10          0x43
#define KEY_F11          0x44
#define KEY_F12          0x45
#define KEY_PRINTSCREEN  0x46
#define KEY_SCROLLLOCK   0x47
#define KEY_PAUSE        0x48
#define KEY_INSERT       0x49
#define KEY_HOME         0x4a
#define KEY_PAGEUP       0x4b
#define KEY_DELETE       0x4c
#define KEY_END          0x4d
#define KEY_PAGEDOWN     0x4e
#define KEY_RIGHTARROW   0x4f
#define KEY_LEFTARROW    0x50
#define KEY_DOWNARROW    0x51
#define KEY_UPARROW      0x52
#define KEY_NUMLOCK      0x53
// There are even more but I don't feel like adding them. Cut, Copy, and Paste might be useful. Look here for more http://www.freebsddiary.org/APC/usb_hid_usages.php
extern USBD_HandleTypeDef hUsbDeviceFS;

/* USB_Device init function */	
void MX_USB_DEVICE_Init(void);

typedef struct {
    bool control_keys[8];
    uint8_t individual_keys[6];
}key_table_t;

void send_key_press(key_table_t * table);
void send_keys_released(void);
void reset_key_table(key_table_t * table);

#ifdef __cplusplus
}
#endif
#endif /*__usb_device_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
