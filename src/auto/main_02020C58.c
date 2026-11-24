/* 27 functions from 0x02020C58 to 0x02021C48 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210d220(void);
s32 func_02021284(void);
extern u16 func_02021618;
extern s32 func_02021428(u16 *);
extern void (*ARM9_CTOR_START[])(void);
extern u32 *data_02162730;
extern u32 func_021155c8(u32);
void func_0202119c(void) {
}

void func_020211a0(void) {
    void (**p)(void) = ARM9_CTOR_START;
    while (p != 0 && *p != 0) {
        (*p)();
        p++;
    }
}

u32 func_020211d0(void) {
    return func_021155c8(*data_02162730) >> 10;
}

s32 func_020212ec(void) {
    func_0210d220();
    return func_02021284();
}

void func_02021340(void) {
}

s32 func_02021a28(void) {
    return func_02021428(&func_02021618);
}

extern u16 func_020217b4;
s32 func_02021a3c(void) {
    return func_02021428(&func_020217b4);
}

extern u32 data_02160054[];
u32 func_02021a50(void) {
    return data_02160054[3];
}

