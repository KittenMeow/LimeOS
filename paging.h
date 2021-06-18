#pragma once
#include <stdint.h>
#include <stdbool.h>

void initpage();
extern void loadPageDirectory(unsigned int*);
extern void enablePaging();
void map_page(void *physaddr, void *virtualaddr, unsigned int flags);
void unmap_page(void *virtualaddr);

/* struct PD{
    bool Pres : 1;
    bool RW : 1;
    bool UsSu : 1;
    bool WT : 1;
    bool CacheDis : 1;
    bool Acc : 1;
    bool ign0 : 1;
    bool Size : 1;
    bool ign1 : 1;
    uint8_t Avail : 3;
    uint32_t Addr : 20;

}__attribute__((aligned(4096)));

struct PT{
    struct PD entries[1024];
}__attribute__((aligned(4096))); */



