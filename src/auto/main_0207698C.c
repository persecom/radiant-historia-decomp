/* 15 functions from 0x0207698C to 0x02077688 (main), found by ds-decomp. */
#include "common.h"

typedef struct Unk14 {
    u16 unk[7];
} Unk14;

extern const Unk14 data_02140c40;

extern void *func_020764e4(void);
extern void func_02076868(void);
extern void func_0207763c(void);
extern void func_0207698c(void);
extern void func_021098ac(void *);
extern s32 func_02076df4(s8, s32, s32, s32);
extern void func_02076380(void *);
extern void func_021099f8(void *);
extern void func_020a9610(void *, u32, u16, void *, u32, u32);
void func_02076d6c(void) {
    u8 *ptr = func_020764e4();
    switch (*(u8 *)(ptr + 0x54)) {
    case 0:
        func_02076868();
        break;
    case 1:
        *(s32 *)(ptr + 0xa0) += 1;
        if (*(s32 *)(ptr + 0xa0) >= 0x1e) {
            func_0207763c();
            *(u8 *)(ptr + 0x54) = 2;
        }
        break;
    case 2:
        func_0207698c();
        break;
    case 3:
        break;
    }
}

void func_02076dcc(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_02076fdc(s32 arg0, s32 arg1) {
    u16 buf[10];
    *(volatile u32 *)0x04000480 = 0x4b7f;
    buf[0] = 1;
    buf[1] = 0;
    buf[2] = 0x68;
    buf[3] = 0x5d;
    buf[4] = 0xb;
    buf[5] = arg0;
    buf[6] = arg1;
    buf[7] = 0x66;
    buf[8] = 0x5d;
    buf[9] = 0xb;
    func_021098ac(buf);
    buf[1] = 0;
    buf[2] = 0x75;
    buf[3] = 0x7c;
    buf[4] = 0xb;
    buf[5] = arg0 + 0x5d;
    buf[6] = arg1;
    buf[7] = 0x66;
    buf[8] = 0x7c;
    buf[9] = 0xb;
    func_021098ac(buf);
}

s32 func_0207708c(void *arg0, s32 arg1, s32 arg2) {
    s32 x;
    s32 y = arg2 + *(s32 *)arg0 - arg1;
    s32 i;
    if (y <= -13 || y >= 192) {
        return *(s32 *)arg0;
    }
    x = 10;
    if (*(s32 *)((u8 *)arg0 + 0x24) == 2) {
        func_02076fdc(x, y);
        return *(s32 *)arg0;
    }
    for (i = 0; i < 32; i++) {
        s8 c = ((s8 *)arg0 + 4)[i];
        if (c == 0) {
            break;
        }
        x += func_02076df4(c, x, y, *(s32 *)((u8 *)arg0 + 0x24));
    }
    return *(s32 *)arg0;
}

extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_02076380(void *);
extern void func_021099f8(void *);
extern void func_020a9610(void *, u32, u16, void *, u32, u32);
void func_0207763c(void) {
    u8 *ptr = func_020764e4();
    func_020a98ac(ptr + 0xbc);
    func_020a98f4(ptr + 0xbc);
    func_020a98ac(ptr + 0x10c);
    func_020a98f4(ptr + 0x10c);
    func_020a98ac(ptr + 0x15c);
    func_020a98f4(ptr + 0x15c);
    *(u32 *)(ptr + 0xa4) = 0;
}

void func_02077684(void) {
}

