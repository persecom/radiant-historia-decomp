/* 19 functions from 0x020BF330 to 0x020C0284 (main), found by ds-decomp. */
#include "common.h"

extern void func_021082d0(void);
extern void func_02008f74(void *, s32, u32);
extern void func_02009008(void *, void *, u32);
extern void func_020bf00c(void *, void *, void *, f32);
extern void func_020ec9d0(s32, s32);
extern void func_020eca2c(s32);
void func_020bf330(void *arg0) {
    func_02008f74(arg0, 0, 0x2c);
}

void func_020bf344(u8 *arg0, void *arg1, void *arg2, s32 arg3) {
    *(f32 *)arg0 = (f32)arg3;
    *(f32 *)(arg0 + 4) = 0.0f;
    func_02009008(arg1, arg0 + 8, 0xc);
    func_02009008(arg2, arg0 + 0x14, 0xc);
    func_02009008(arg0 + 8, arg0 + 0x20, 0xc);
}

s32 func_020bf3a0(u8 *arg0, f32 arg1) {
    u8 buf[0xc];
    if (arg1 > 1.0f) {
        return 0;
    }
    func_020bf00c(buf, arg0 + 8, arg0 + 0x14, arg1);
    func_02009008(buf, arg0 + 0x20, 0xc);
    return 1;
}

void func_020bf3fc(void) {
    func_021082d0();
}

extern void func_021082ec(void);
void func_020bf408(void) {
    func_021082ec();
}

