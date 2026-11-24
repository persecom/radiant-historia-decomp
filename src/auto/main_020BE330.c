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
extern void func_02008f74(void *, s32, s32);
extern u32 data_02155c3c;
extern u8 *func_0210c594(s32, u32);
extern void func_020bed10(void);
extern void func_0210c5dc(void *);
extern s32 data_0216242c[10];
extern s32 *data_02155984;
extern s32 data_02151fcc;
extern void func_02108240(void);
void func_020be330(u8 *arg0) {
    u16 flags = *(u16 *)(arg0 + 0x18);
    s16 sp2;
    s16 sp0;
    u8 *node;

    if ((flags & 3) == 0) {
        return;
    }
    if ((flags & 4) != 0) {
        return;
    }
    sp2 = *(s16 *)(arg0 + 0x1a);
    sp0 = *(s16 *)(arg0 + 0x1c);
    func_020be30c(&sp2, &sp0);
    node = *(u8 **)arg0;
    while (node != NULL) {
        func_020be490(node, sp2, sp0);
        node = *(u8 **)(node + 0x10);
    }
}

void func_020be650(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020be678(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020be6a0(void) {
    u8 *p = func_020becfc();
    u16 val;
    func_020bec40(*(u16 *)(data_0216020c + 0x8e));
    func_020beb64(0);
    func_020bec5c(0);
    func_020be9b8(0);
    func_020beb14();
    val = *(u16 *)(p + 0xd8);
    if (val == 0 || (val & 1) != 0) {
        return;
    }
    func_020bf24c(0, (u8)val);
}

void func_020be704(void) {
    u8 *p = func_020becfc();
    u16 val;
    func_020bec40(*(u16 *)(data_0216020c + 0x8e));
    func_020beb64(1);
    func_020bec5c(1);
    func_020be9b8(1);
    val = *(u16 *)(p + 0xd8);
    if (val == 0 || (val & 1) != 0) {
        return;
    }
    func_020bf24c(1, (u8)val);
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

void func_020befc4(void *arg0) {
    func_02008f74(arg0, 0, 0x38);
}

