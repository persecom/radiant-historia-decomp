/* 25 functions from 0x02025F38 to 0x02026F38 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void func_02022584(void *, s32, s8, s16, s16, s16, s16);
extern void *func_0210c594(s32, u32);
extern u32 data_02155c3c;
void func_02025f38(void *arg0, void *arg1, s32 arg2) {
    func_02022584(
        *(void **)((u8 *)(*(void **)((u8 *)arg0 + 0x118)) + 0x60),
        arg2,
        (s8)(*(s16 *)((u8 *)arg1 + 0x2)),
        *(s16 *)((u8 *)arg1 + 0x6),
        *(s16 *)((u8 *)arg1 + 0x8),
        *(s16 *)((u8 *)arg1 + 0xa),
        *(s16 *)((u8 *)arg1 + 0x10)
    );
}

void *func_02026548(void) {
    return func_0210c594(0x14, data_02155c3c);
}

void func_02026564(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02026578(void *arg0) {
    if (arg0 != NULL) {
        *(u16 *)((u8 *)arg0 + 0) = 0;
        *(u16 *)((u8 *)arg0 + 2) = 0;
        *(u16 *)((u8 *)arg0 + 4) = 0;
        *(u32 *)((u8 *)arg0 + 8) = 0;
        *(u32 *)((u8 *)arg0 + 12) = 0;
    }
}

s16 func_020265cc(s16 *arg0) {
    return arg0[1];
}

void *func_02026c58(void **arg0) {
    return *arg0;
}

void func_02026c94(u16 *arg0) {
    arg0[6]++;
}

u16 func_02026ca4(u16 *arg0) {
    return arg0[6];
}

