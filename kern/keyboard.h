#ifndef KEYBOARD_H
#define KEYBOARD_H

void keyboard_init(void);
void keyboard_poll_gpio(void);
void keyboard_transmit_data(void);

#endif
