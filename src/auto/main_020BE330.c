/* 37 functions from 0x020BE330 to 0x020BF330 (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020becfc(void);
extern u8 *data_0216020c;
extern void func_020be30c(s16 *, s16 *);
extern void func_020be490(u8 *, s16, s16);
extern void func_020bec40(u16);
extern void func_020beb64(s32);
extern void func_020bec5c(s32);
extern void func_020be9b8(s32);
extern void func_020beb14(void);
extern void func_020bf24c(s32, u8);
extern void func_020c33d4(s32);
void func_020be650(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020be678(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020be764(void) {
    func_020c33d4(0);
}

extern void func_020c33d4(s32);
void func_020be774(void) {
    func_020c33d4(1);
}

void func_020bed94(void) {
    func_020becfc();
}
