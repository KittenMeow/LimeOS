#pragma once
#include <stdint.h>

 

struct GDT{
    int base;
    int limit;
    int type;
};

int encodeGdtEntry(uint8_t *target, struct GDT source);
void create_descriptor(uint32_t base, uint32_t limit, uint16_t flag);

