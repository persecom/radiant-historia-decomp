/* 34 functions from 0x020B34D0 to 0x020B44CC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020b3890(void);
extern u8 *func_020b3fd8(void);
extern void func_020b3a9c(void);
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
extern u8 data_021601e0;

extern u8 *func_02021f10(u8);

extern void func_020b3a9c(void);
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);

u8 *func_020b3fd8(void) {
    return func_020b3880() + 0x96c;
}

extern void func_02008f74(void *, s32, s32);
void func_020b3fec(void) {
    func_02008f74(func_020b3fd8(), 0, 0x2ab8);
}

u8 *func_020b442c(void) {
    return (u8 *)func_020b3880() + 0x3424;
}

