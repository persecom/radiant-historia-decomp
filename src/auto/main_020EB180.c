/* 11 functions from 0x020EB180 to 0x020EC12C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aa4;
extern void (*data_02156154)(void *);
extern s32 data_02155c3c;
void func_0210dba0(void *);
void func_0210dbe8(void *);
void func_0210c5dc(void *);
void func_0211a700(void *);
void *func_0210c594(s32, s32);
void *func_02108844(void);
void *func_0211a810(void);
void func_0211a860(void *);
void func_02108594(void *);
extern s32 func_021086d4(void *);
extern void *func_02117630(u8 *, u32);
extern void func_0211903c(void *, void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_020ebc94(u8 *, u32, s32);
void func_020eb344(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        data_02156154(*(void **)data_02160aa4);
    }
    data_02156154(*(void **)(data_02160aa4 + 8));
    data_02156154(*(void **)(data_02160aa4 + 0x10));
    func_0210dba0(data_02160aa4 + 0x1c);
    if (arg1 == 1) {
        func_0210dbe8(data_02160aa4 + 0x30);
    }
    if (data_02160aa4 != NULL) {
        func_0210c5dc(data_02160aa4);
        data_02160aa4 = NULL;
    }
}

void func_020eb3dc(void) {
    void *p = *(void **)(data_02160aa4 + 0x18);
    if (p != NULL) {
        func_0211a700(p);
    }
}

void *func_020eb400(void) {
    u8 *p = (u8 *)func_0210c594(0x28, data_02155c3c);
    *(u32 *)(p + 0x18) = 1;
    *(u16 *)(p + 0x1c) = 1;
    *(u32 *)(p + 0) = 0;
    *(u32 *)(p + 4) = 0;
    *(void **)(p + 8) = func_02108844();
    *(void **)(p + 0x10) = func_0211a810();
    return p;
}

void func_020ebc24(u8 *arg0) {
    if (*(void **)arg0 != NULL) {
        func_0210c5dc(*(void **)arg0);
        *(void **)arg0 = NULL;
    }
    *(u32 *)(arg0 + 4) = 0;
    if ((*(u16 *)(arg0 + 0x14) & 1) && *(void **)(arg0 + 0xc) != NULL) {
        func_0210c5dc(*(void **)(arg0 + 0xc));
        *(void **)(arg0 + 0xc) = NULL;
    }
    *(void **)(arg0 + 0xc) = NULL;
    func_0211a860(*(void **)(arg0 + 0x10));
    func_02108594(*(void **)(arg0 + 8));
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020ebc94(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *p4 = *(u8 **)(arg0 + 4);
    u8 *p58 = *(u8 **)(*(u8 **)(arg0 + 8) + 0x58);
    void *res = func_02117630(*(u8 **)(p58 + 0xc), arg1);

    func_0211903c(*(u8 **)(arg0 + 8), res, *(void **)(p58 + 4), *(void **)(arg0 + 0x10),
                  *(s32 *)(arg0 + 0x24), -1, -1, 0,
                  *(s32 *)(p4 + 0x14), *(s32 *)(p4 + 0x10));
}

s32 func_020ebcfc(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *r0 = *(u8 **)(arg0 + 8);
    u32 count = *(u16 *)(*(u8 **)(*(u8 **)(r0 + 0x58) + 0xc));
    s32 res;
    if (count <= arg1) {
        return 0;
    }
    res = (func_021086d4(r0) == 0) ? 1 : 0;
    if (res != 0) {
        return 0;
    }
    func_020ebc94(arg0, arg1, arg2);
    return 1;
}

s32 func_020ebd5c(u8 *arg0, s32 arg1) {
    u8 *r3 = *(u8 **)(arg0 + 0xc);
    u8 *p8;
    if (r3 == NULL) {
        return 0;
    }
    p8 = *(u8 **)(arg0 + 8);
    if (*(u16 *)(*(u8 **)(*(u8 **)(p8 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
    case 0:
        return 0;
    case 1:
        return func_020ebcfc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    case 3:
        return func_020ebcfc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    default:
        return 0;
    }
}

