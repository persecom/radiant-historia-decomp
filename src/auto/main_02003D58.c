/* 32 functions from 0x02003D58 to 0x02004CD4 (main), found by ds-decomp. */
#include "common.h"

extern s32 data_02145ba4;
extern u32 func_02003474(void);
extern void func_020085ec(s32, void *, u32, u32, s32);
extern void func_02008e38(void *, u32, u32);
void func_02003d58(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003474();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

extern u32 func_020034a8(void);
extern u32 func_020034c8(void);
extern u32 func_02003518(void);
void func_02003ea8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003518();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

