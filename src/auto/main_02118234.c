/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02118234(void *);
extern void func_02118430(void *);
void func_02118570(void *arg0) {
    func_02118234(arg0);
    func_02118430(arg0);
}

u16 func_02118588(u16 *arg0, s32 arg1) {
    return arg0[arg1];
}

void func_02118594(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i] = -1;
    }
}

void func_021185b0(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1] = arg2;
}

s32 func_021185b8(s32 *arg0, s32 arg1) {
    return arg0[arg1];
}

s32 func_021185c0(s32 *arg0, s32 arg1) {
    return arg0[arg1] != -1;
}

void func_021185d4(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i + 2] = -1;
    }
}

void func_021185f4(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 8 + arg1 * 4) = arg2;
}

s32 func_02118600(u8 *arg0, s32 arg1) {
    return *(s32 *)(arg0 + 8 + arg1 * 4);
}

extern void func_02006dc4(void *, u32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02003830(void *, u32, u32);
extern void func_02003894(void *, u32, u32);
