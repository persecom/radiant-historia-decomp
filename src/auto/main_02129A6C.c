/* 57 functions from 0x02129A6C to 0x0212A9FC (main), found by ds-decomp. */
#include "common.h"

extern void func_0213807c(void);
extern u8 data_0217358c[12];
void func_02129bb8(s32 arg0) {
    *(s32 *)(data_0217358c + 8) = arg0;
}

u32 func_02129c20(u8 *arg0, u32 *arg1, u32 *arg2, u32 *arg3) {
    *arg1 = *(u32 *)(arg0 + 0x8c);
    *arg2 = *(u32 *)(arg0 + 0x40) - *(u32 *)(arg0 + 0x8c);
    *arg3 = *(u32 *)(arg0 + 0x18) - *(u32 *)(arg0 + 0x88);
    return *(u32 *)(arg0 + 0x3c);
}

void *func_0212a220(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

extern void func_02129624(void);
extern void func_02129a50(void);
extern void *memset(void *, int, u32);
extern u8 data_021735a4[976];
u32 func_0212a250(u8 *arg0) {
    return *(u32 *)(arg0 + 0x30);
}

s32 func_0212a4b8(s32 *arg0) {
    return arg0[1];
}

void *func_0212a58c(u8 *arg0) {
    return *(void **)(arg0 + 0x90);
}

void func_0212a9dc(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_0212a9e8(void) {
    func_0213808c();
}

