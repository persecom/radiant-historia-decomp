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
        *(volatile u32 *)0x04001010 = (q[0] & 0x1ff) | ((q[1] << 16) & 0x01ff0000);
    }
}

extern void *func_020a8844(s32, s32, s32, s32);
extern void *func_020a94b8(void *);
extern u8 data_0214888c[12];
extern u8 data_02148898[12];
extern u8 data_021488a4[12];
void func_020947e8(void) {
    u8 *p = data_02160110;
    u16 i;
    *(void **)(p + 0x40) = func_020a8844(0x20, 0x1c0, 0x10, 2);
    *(void **)(p + 0x18) = func_020a94b8(data_0214888c);
    for (i = 1; i < 9; i++) {
        *(void **)(p + 0x40 + i * 4) = func_020a8844(0x20, ((i - 1) << 6) + 0x10, 0x10, 2);
        *(void **)(p + 0x18 + i * 4) = func_020a94b8(data_02148898);
    }
    *(void **)(p + 0x64) = func_020a8844(0x20, 0x180, 0x10, 2);
    *(void **)(p + 0x3c) = func_020a94b8(data_021488a4);
}

