#ifndef INC_X86_H
#define INC_X86_H

#include <inc/types.h>

static inline uint8_t inb(int port)
{
    uint8_t data;
    asm volatile("inb %w1,%0" : "=a" (data) : "d" (port));
    return data;
}

#endif // !INC_X86_H
