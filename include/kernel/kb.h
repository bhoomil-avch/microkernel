#ifndef KB_H
#define KB_H

#include "kernel/stdint.h"

/* Install a custom handler in the IDT for the keyboard */
void keyboard_init(void);
/* Get a char from the keyboard buffer */
uint8_t kbd_buffer_read(void);
/* How many chars are to be read from keyboard buffer? */
uint32_t kbd_buffer_size(void);

#endif
