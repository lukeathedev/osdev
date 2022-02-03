#include "asm.h"

#include <stdint.h>

uint8_t inb(uint16_t port) {
  uint8_t data;
  __asm__("inb %1, %0" : "=a"(data) : "Nd"(port));
  return data;
}

void outb(uint16_t port, uint8_t data) {
  __asm__("outb %0, %1" :: "a"(data), "Nd"(port));
}