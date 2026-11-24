/* 26 functions from 0x020A7598 to 0x020A84B8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160140;
extern u8 *data_021600e4;
extern void func_020c3850(void *);
extern void func_020a78f0(void);
extern void *func_020c6d5c(s32);
extern void func_020c7654(void *, s32, u32, s32, s32, s32, s32, s32, s32);
extern void func_020a7834(void);
extern void func_020a773c(void);
extern s32 func_020aa818(void *, u16);
extern void func_020c7734(void *, s32);
extern void func_020c7760(void *, s16, s16);
extern void func_020c3df4(void *, s32);
extern void func_020c6d4c(u8 *);
extern void *func_020a6360(void *, u8);

void func_020a76cc(void) {
    u8 *p = data_021600e4;
    func_020a78f0();
    if (*(void **)(p + 0x154) == NULL) {
        s32 six = 6;
        *(void **)(p + 0x154) = func_020c6d5c(six);
        func_020c7654(*(void **)(p + 0x154), 2, 0x80008000, 0, 0, 0xa0, 0, six, 0);
        func_020a7834();
        func_020a773c();
    }
}

void func_020a773c(void) {
    u8 *p = data_021600e4;
    u8 *node = *(u8 **)(p + 0x148);
    if (node == NULL) {
        return;
    }
    while (node != NULL) {
        s32 val = 4;
        void *obj = *(void **)(node + 0);
        if (func_020aa818(*(void **)(p + 0x13f4), *(u16 *)(node + 0xc)) != 0) {
            val = 6;
        }
        func_020c7734(obj, val);
        node = *(u8 **)(node + 8);
    }
}

void func_020a779c(void) {
    u8 *p = data_021600e4;
    s32 a = *(s32 *)(p + 0x7c);
    s32 b = *(s32 *)(p + 0x80);
    s32 c = *(s32 *)(p + 0xc8);
    s32 d = *(s32 *)(p + 0xd0);
    s32 x = (a * -235) / 0x1000 + 0x80 + ((c >> 12) * a) / 0x1000;
    s32 y = (b * -235) / 0x1000 + 0x60 + ((d >> 12) * b) / 0x1000;
    func_020c7760(*(void **)(p + 0x154), (s16)(x - 8), (s16)(y - 0x18));
}

void func_020a7fe8(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020a80cc(void) {
}

void func_020a80d0(void) {
}

void func_020a80d4(void) {
}

void func_020a80d8(void) {
}

void func_020a83a8(void) {
    func_020c3850(*(void **)(data_02160140 + 0x40));
}

