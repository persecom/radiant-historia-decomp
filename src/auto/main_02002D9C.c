/* 47 functions from 0x02002D9C to 0x02003D58 (main), found by ds-decomp. */
#include "common.h"

extern s32 data_02145ba4;
extern u32 func_02003188(void);
extern void func_02008690(s32, void *, u32, u32, s32);
extern void func_02008e08(void *, u32, u32);
extern void func_020030f4(void *);
extern s32 func_0200308c(s32 *);
extern s32 func_020030b8(s32 *);

void func_020038f8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003188();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_020031bc(void);
void func_02003968(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020031bc();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_020031dc(void);
void func_020039d8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020031dc();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

