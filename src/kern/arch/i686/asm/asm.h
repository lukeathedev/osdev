#ifndef I686_ASM_H
#define I686_ASM_H

#include <stdint.h>

void outb(uint16_t port, uint8_t data);

uint8_t inb(uint16_t port);

void io_wait();

#endif