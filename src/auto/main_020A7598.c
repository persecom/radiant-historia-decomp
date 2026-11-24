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

