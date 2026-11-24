/* 19 functions from 0x020F1A1C to 0x020F26FC (main), found by ds-decomp. */
#include "common.h"

extern s32 func_020f1ffc(s32);
extern void func_0210b198(s32, u16, s32, s32, s32);
extern u32 *func_020f0a5c(s32);
extern u8 *data_02160c10;
extern s32 data_02160aec;
extern void func_021168f8(void *, void *);
extern void func_020e97ec(void *);
extern u32 *func_020efb74(u8, u8);
extern void func_0210c5dc(void *);
void func_020f1dd4(s32 *arg0, s32 arg1) {
    func_0210b198(*arg0, (u16)(arg1 + 1), 0, 1, 0);
}

void func_020f1dfc(s32 arg0, s32 arg1) {
    u32 *ptr = func_020f0a5c(arg0);
    if (ptr == NULL) {
        return;
    }
    if (arg1 != 0) {
        ptr[5] |= 1;
    } else {
        ptr[5] &= ~1;
    }
}

void func_020f1f28(u8 *arg0) {
    func_021168f8(data_02160c10 + arg0[0x20] * 0xc, arg0);
    if (*(void **)(arg0 + 0x1c) != NULL) {
        func_020e97ec(*(void **)(arg0 + 0x1c));
        *(void **)(arg0 + 0x1c) = NULL;
    }
    if (data_02160aec != 0) {
        func_020efb74(arg0[0x21], arg0[0x22])[2] = 0;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

BOOL func_020f24f4(s32 arg0) {
    return func_020f1ffc(arg0) != 0;
}

extern s32 func_020f2104(s32);
BOOL func_020f250c(s32 arg0) {
    return func_020f2104(arg0) != 0;
}

