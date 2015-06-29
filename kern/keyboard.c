#include "keyboard.h"
#include "usb_device.h"

  key_table_t table;

void keyboard_init(void) {
    // It is assumed gpio_init was already called.
    MX_USB_DEVICE_Init();
    reset_key_table(&table);
}

void keyboard_poll_gpio(void){
    // TODO: less hard coding.
    // These all have pullups on them. We want to check if it reads low.
    // control keys
    if (!HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_9)) {
            table.control_keys[RIGHT_GUI] = true;
    }
    if (!HAL_GPIO_ReadPin(GPIOD,GPIO_PIN_11)) {
            table.control_keys[RIGHT_ALT] = true;
    }
    if (!HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_15)) {
            table.control_keys[RIGHT_SHIFT] = true;
    }
    if (!HAL_GPIO_ReadPin(GPIOD,GPIO_PIN_9)) {
            table.control_keys[RIGHT_CTRL] = true;
    }
    if (!HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_11)) {
            table.control_keys[LEFT_GUI] = true;
    }
    if (!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)) {
            table.control_keys[LEFT_ALT] = true;
    }
    if (!HAL_GPIO_ReadPin(GPIOD,GPIO_PIN_0)) {
            table.control_keys[LEFT_SHIFT] = true;
    }
    if (!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)) {
            table.control_keys[LEFT_CTRL] = true;
    }
    
    // individual keys
    int i = 0;
    if (!HAL_GPIO_ReadPin(GPIOD,GPIO_PIN_2) && i < 6) {
            table.individual_keys[i] = KEY_A;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_9) && i < 6) {
            table.individual_keys[i] = KEY_B;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOD,GPIO_PIN_6) && i < 6) {
            table.individual_keys[i] = KEY_C;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_7) && i < 6) {
            table.individual_keys[i] = KEY_D;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5) && i < 6) {
            table.individual_keys[i] = KEY_E;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_1) && i < 6) {
            table.individual_keys[i] = KEY_F;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7) && i < 6) {
            table.individual_keys[i] = KEY_G;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_5) && i < 6) {
            table.individual_keys[i] = KEY_H;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_5) && i < 6) {
            table.individual_keys[i] = KEY_I;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3) && i < 6) {
            table.individual_keys[i] = KEY_J;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13) && i < 6) {
            table.individual_keys[i] = KEY_K;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1) && i < 6) {
            table.individual_keys[i] = KEY_L;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_0) && i < 6) {
            table.individual_keys[i] = KEY_M;
            i++;
    }
    if (!HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_1) && i < 6) {
            table.individual_keys[i] = KEY_N;
            i++;
    }
}

void keyboard_transmit_data(void){
    send_key_press(&table);
    reset_key_table(&table);
}
