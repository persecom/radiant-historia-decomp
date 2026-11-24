/* 5 functions from 0x0205D644 to 0x0205DF48 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern u32 func_0205bcb0(u8 *, u16);
extern void func_020d56d8(u8 *, s32, s32, s32);
extern void func_020d5fd0(u8 *);
extern void func_020d4eb8(u8 *);
extern s32 func_02032c14(u8 *, u8 *);
extern void func_020de0a8(u8 *);
extern void func_020db35c(u8 *, s32);
void func_0205de08(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    u32 res = func_0205bcb0(arg0, (u16)*(u32 *)(p + 0x34));
    if ((res & 1) && *(s16 *)(p + 0x1c) == 0) {
        *(s16 *)(p + 0x1c) = 1;
        func_020d56d8(arg0, 0, 0, 1);
        func_020d5fd0(arg0);
    }
    if (res & 2) {
        func_020d4eb8(arg0);
    }
}

s16 func_0205de70(void) {
    s16 count = 0;
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0) {
            count++;
        }
        node = *(u8 **)(node + 0x174);
    }
    return count;
}
