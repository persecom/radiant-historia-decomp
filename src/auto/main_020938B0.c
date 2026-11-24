/* 5 functions from 0x020938B0 to 0x020948AC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern u32 data_02155c3c;
extern void func_0210c5dc(void *);
extern s32 func_020a2c5c(s32, s32, s32, s32, s32);
extern void *func_0210c594(u32, u32);
s32 func_02094700(void) {
    u8 *p = data_02160110;
    if (func_020a2c5c(4, 13, 0, 101, 7) == 0) {
        return 0;
    }
    if (*(u8 **)(p + 0x14) == NULL) {
        u32 *buf = (u32 *)func_0210c594(8, data_02155c3c);
        *(u32 **)(p + 0x14) = buf;
        buf[0] = 0;
        (*(u32 **)(p + 0x14))[1] = 0;
    }
    return 1;
}

void func_02094774(void) {
    u8 *p = data_02160110;
    if (*(u8 **)(p + 0x14) != NULL) {
        func_0210c5dc(*(u8 **)(p + 0x14));
        *(u8 **)(p + 0x14) = NULL;
    }
}

void func_020947a0(void) {
    u8 *p = data_02160110;
    if (p != NULL) {
        u32 *q = *(u32 **)(p + 0x14);
        *(volatile u32 *)0x04001010 = (q[0] & 0x1ff) | ((q[1] & 0x1ff) << 16);
    }
}

