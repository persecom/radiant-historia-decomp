/* 34 functions from 0x020B34D0 to 0x020B44CC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020b3890(void);
extern u8 data_021601e0;
void func_020b3744(u8 arg0) {
    data_021601e0 = arg0;
}

u8 func_020b3754(void) {
    return data_021601e0;
}

void func_020b3764(void) {
    data_021601e0 = 0;
}

extern void func_02021f10(u8);
u8 *func_020b3880(void) {
    return ((u8 **)&data_021601e0)[1];
}

u8 *func_020b3890(void) {
    return func_020b3880() + 0x708;
}

void func_020b38a4(s32 arg0) {
    func_02021f10((func_020b3890() + arg0)[0x25c]);
}

void func_020b3908(void) {
    func_020b3890();
}

u8 *func_020b3914(void) {
    return func_020b3890() + 0x128;
}

u16 func_020b39f4(u8 *arg0, u32 arg1) {
    u16 res = 0;
    if (arg1 < 5) {
        if (arg1 == 0) {
            res = *(u16 *)(arg0 + 0x38);
        } else if (arg1 == 1) {
            res = *(u16 *)(arg0 + 0x3a);
        } else {
            res = *(u16 *)(arg0 + 0x3c + (arg1 - 2) * 2);
        }
    }
    return res;
}

extern void func_020b3a9c(void);
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
u8 *func_020b3fd8(void) {
    return func_020b3880() + 0x96c;
}

