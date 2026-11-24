/* 31 functions from 0x02134134 to 0x02134F44 (main), found by ds-decomp. */
#include "common.h"

extern void func_02135c78(void);
extern s32 func_02136930(void *);
extern void func_0200baa4(void *);
extern void func_02013878(void *, u32, u32);
extern s32 func_020138b8(void *, u32, u32);
extern s32 func_02016d50(u32, void *, u32 *, u32 *, u32 *);
extern u8 data_0215bc4c[];
extern u8 data_0215bc54[];
extern void func_0213807c(void);
extern void func_0213808c(void);
extern void func_0200bb10(void *, s32, s32);
extern void func_0200b8b4(void *);
extern void func_02133dd0(s32, void *);
extern u8 data_0215bd14[];
extern u8 data_0215bd2c[];
extern u8 data_0215bdd0[];
BOOL func_02134c94(u8 *arg0);
s32 func_021343a0(u8 *, s32, s32);
s32 func_0213443c(u8 *);
void func_02134544(u8 *);
s32 func_02134134(u8 *arg0) {
    return *(s32 *)(arg0 + 0x5c);
}

s32 func_0213413c(u32 arg0, u32 *arg1, u32 *arg2, u32 *arg3) {
    if (func_020138b8(data_0215bc4c, arg0, 7) != 0) goto fail;
    if (func_02016d50(arg0, data_0215bc54, arg1, arg2, arg3) != 3) goto fail;
    if (*arg3 == 0) *arg3 = 7 - (s32)0x80000008;
    return 1;
fail:
    *arg1 = 0;
    *arg2 = 0;
    *arg3 = 0;
    return 0;
}

void func_02134368(u8 *arg0) {
    if (arg0 == NULL) return;
    if (*(void **)(arg0 + 0x4c) == arg0 + 4) {
        func_0200baa4(*(void **)(arg0 + 0x4c));
    }
    *(u8 *)arg0 = 0;
    func_02013878(arg0, 0, 0x84);
}

extern void func_02133dd0(s32, void *);
extern u8 data_0215bde8[24];
s32 func_02134590(void *arg0) {
    if (arg0 != NULL) {
        return *(s8 *)((u8 *)arg0 + 1);
    }
    func_02133dd0(0, data_0215bde8);
    return 0;
}

s32 func_021346bc(void) {
    return 0;
}

s32 func_021346c4(u8 *arg0) {
    return *(s32 *)(arg0 + 0x68);
}

void func_0213473c(void) {
    func_02135c78();
}

extern void func_021146b8(void *);
void func_02134bf0(u8 *arg0) {
    func_021146b8(arg0 + 0x34);
}

BOOL func_02134c94(u8 *arg0) {
    if (arg0 == NULL) {
        return FALSE;
    }
    return (arg0[1] & 1) != 0;
}

s32 func_02134efc(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return func_02136930(*(void **)((u8 *)arg0 + 0x20));
}

extern s32 func_02136944(void *);
s32 func_02134f18(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return func_02136944(*(void **)((u8 *)arg0 + 0x20));
}

s32 func_02134f34(u8 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return arg0[6];
}

