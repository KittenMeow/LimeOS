#pragma once
#include <stdint.h>

 

struct GDT{
    int base;
    int limit;
    int type;
};

struct GDT Null = {0, 0, 0};                    
struct GDT KCode = {0, 0xffffffff, 0x9A};       
struct GDT KData = {0, 0xffffffff, 0x92};       
struct GDT UCode = {0, 0xffffffff, 0x9A};       
struct GDT UData = {0, 0xffffffff, 0x92};       

int encodeGdtEntry(uint8_t *target, struct GDT source);
void create_descriptor(uint32_t base, uint32_t limit, uint16_t flag);