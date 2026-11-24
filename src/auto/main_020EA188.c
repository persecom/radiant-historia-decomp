/* 10 functions from 0x020EA188 to 0x020EB180 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a90[5];
extern u8 data_021518c0[8];
extern s32 func_0210dba0(void *);
extern s32 func_021086d4(void *);
extern void func_02108680(void *, u32, s32);
extern void *func_0210a4cc(void);
extern s32 func_020f1ffc(void *, s32, s32, s32);
extern void func_0210c5dc(void *);
extern void *func_0210eb98(void *, s32);
extern void func_0210f3ac(void *, void *, s32);
s32 func_020ea574(u8 *arg0, u32 arg1, s32 arg2) {
    s32 res;
    if (*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 0xc)) <= arg1) {
        return 0;
    }
    res = (func_021086d4(*(u8 **)arg0) == 0) ? 1 : 0;
    if (res != 0) {
        return 0;
    }
    func_02108680(*(u8 **)arg0, arg1, arg2);
    return 1;
}

s32 func_020ea5d4(u8 *arg0, s32 arg1) {
    u8 *r2 = *(u8 **)arg0;
    u8 *r3 = *(u8 **)(arg0 + 0xc);
    if (*(u16 *)(*(u8 **)(*(u8 **)(r2 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
    case 0:
        return 0;
    case 1:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    case 3:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    default:
        return 0;
    }
}

extern u8 *data_02160a80;
void func_020eaa10(u32 arg0) {
    *(u32 *)(data_02160a80 + 0x54) = arg0;
}

void *func_020eaa24(s32 arg0, s32 arg1) {
    void *r5 = func_0210a4cc();
    if (r5 == NULL) {
        return NULL;
    }
    if (!func_020f1ffc(r5, arg0, 0, arg1)) {
        if (r5 != NULL) {
            func_0210c5dc(r5);
        }
        return NULL;
    }
    func_0210f3ac(func_0210eb98(&data_021518c0, arg0), r5, 0);
    *(s32 *)((u8 *)r5 + 0x30) = 1;
    return r5;
}

s32 func_020eaacc(void) {
    return func_0210dba0(&data_02160a90);
}
