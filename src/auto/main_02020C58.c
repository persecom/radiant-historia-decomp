/* 27 functions from 0x02020C58 to 0x02021C48 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210d220(void);
s32 func_02021284(void);
extern u16 func_02021618;
extern s32 func_02021428(u16 *);
extern void (*ARM9_CTOR_START[])(void);
extern u32 *data_02162730;
extern u32 func_021155c8(u32);
u32 func_020211d0(void) {
    return func_021155c8(*data_02162730) >> 10;
}

s32 func_020212ec(void) {
    func_0210d220();
    return func_02021284();
}
