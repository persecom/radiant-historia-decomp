/* 12 functions from 0x02066D84 to 0x02067744 (main), found by ds-decomp. */
#include "common.h"

extern void *func_0210c594(u32, void *);
extern u32 data_02155c3c;
void func_02067674(void) {
    u8 *p = func_0210c594(0x3c, data_02155c3c);
    p[0x26] = 0x1f;
}
