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
extern u16 data_02151fc8;
extern const s16 data_0213a394[];
extern s32 data_02162360[];
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

void func_020be784(void) {
    u8 *p;
    data_0216020c = func_0210c594(0x1e0, data_02155c3c);
    *(u32 *)(data_0216020c + 0x4c) = 0;
    *(u32 *)(data_0216020c + 0x50) = 0;
    *(u32 *)(data_0216020c + 0x54) = 0;
    *(u16 *)(data_0216020c + 0x58) = 0;
    *(u32 *)(data_0216020c + 0x5c) = 0;
    *(u32 *)(data_0216020c + 0x60) = 0;
    *(u32 *)(data_0216020c + 0x6c) = 0;
    *(u16 *)(data_0216020c + 0x66) = 0;
    *(u16 *)(data_0216020c + 0x68) = 0;
    *(u32 *)(data_0216020c + 0x44) = 0;
    p = data_0216020c;
    *(u32 *)(p + 0x18) = 0;
    *(u32 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x20) = 0;
    p = data_0216020c;
    *(u32 *)(p + 0x00) = 0;
    *(u32 *)(p + 0x04) = 0;
    *(u32 *)(p + 0x08) = 0;
    p = data_0216020c;
    *(u32 *)(p + 0x0c) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    p = data_0216020c;
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x28) = 0;
    *(u32 *)(p + 0x2c) = 0;
    func_020becfc();
    func_020bed10();
}

void func_020be844(void) {
    if (data_0216020c == NULL) {
        return;
    }
    if (data_0216020c != NULL) {
        func_0210c5dc(data_0216020c);
    }
    data_0216020c = NULL;
}

void func_020beb14(void) {
    data_02155984 = data_0216242c;
    data_0216242c[9] += *(s32 *)(data_0216020c + 0x98);
    data_02151fcc = *(s16 *)(data_0216020c + 0x8e) + 0x80;
    func_02108240();
}

void func_020beb64(s32 arg0) {
    if (arg0 == 1) {
        *(s32 *)(data_0216020c + 0xc) = data_0213a394[((data_02151fc8 >> 4) * 2) + 1];
        *(s32 *)(data_0216020c + 0x14) = data_0213a394[(data_02151fc8 >> 4) * 2];
    } else {
        *(s32 *)(data_0216020c + 0xc) = data_0213a394[((data_02151fc8 >> 4) * 2) + 1];
        *(s32 *)(data_0216020c + 0x14) = data_0213a394[(data_02151fc8 >> 4) * 2];
    }
}

void func_020bebc8(s32 arg0) {
    data_02151fc8 = (u16)((((s64)(arg0 << 12) * 0xb60b60b60bLL) + 0x80000000000LL) >> 44);
}

extern u16 data_02151fca;
void func_020bec04(s32 arg0) {
    data_02151fca = (u16)((((s64)(arg0 << 12) * 0xb60b60b60bLL) + 0x80000000000LL) >> 44);
}

void func_020bec40(u16 arg0) {
    if (arg0 < 0x20) {
        arg0 = 0x20;
    }
    data_02151fcc = (s32)arg0 << 12;
}

void func_020bec5c(s32 arg0) {
    if (arg0 == 0) {
        data_02155984 = data_0216242c;
    } else if (arg0 == 1) {
        data_02155984 = data_02162360;
    }
}

void func_020bed94(void) {
    func_020becfc();
}

void func_020befc4(void *arg0) {
    func_02008f74(arg0, 0, 0x38);
}

