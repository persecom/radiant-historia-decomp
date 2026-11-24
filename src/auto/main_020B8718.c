/* 21 functions from 0x020B8718 to 0x020B967C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021601ec;
extern u8 *data_02160204;
extern void func_020c9b64(void *);
extern void func_020c9bb8(void *);
extern void func_020b8ef4(void);
extern void func_020b9350(void);
extern void func_020b967c(void);
extern void func_020b99d8(void);
extern void func_020b9af0(void);
extern void func_020b9c84(void);
extern void func_020ba214(void);
extern void func_020ba3c0(void);
extern void func_020ba3f8(void);
extern void func_020b748c(void);
extern void func_020b7624(void);
extern void func_020b8944(void);
extern s32 func_020de3d8(void);

void func_020b8844(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020b886c(void) {
    func_020c9b64(*(void **)(data_021601ec + 0x48));
}

void func_020b8888(void) {
    func_020c9b64(*(void **)(*(u8 **)data_021601ec + 0x4c));
}

void func_020b88a4(void) {
    u8 *root = *(u8 **)data_021601ec;
    func_020c9bb8(*(void **)(root + 0x48));
    func_020c9bb8(*(void **)(root + 0x4c));
    switch (*(u32 *)(root + 0x40)) {
    case 0:
        func_020b8ef4();
        break;
    case 1:
        func_020b9350();
        break;
    case 2:
        func_020b967c();
        break;
    case 3:
        func_020b99d8();
        break;
    case 4:
        func_020b9af0();
        break;
    case 5:
        func_020b9c84();
        break;
    case 6:
        func_020ba214();
        func_020ba3c0();
        func_020ba3f8();
        func_020b748c();
        func_020b7624();
        func_020b8944();
        break;
    }
}

s32 func_020b8d60(void) {
    u8 *p = *(u8 **)data_02160204;
    if (*(u32 *)(p + 0x10c) == 0) {
        return 1;
    }
    return func_020de3d8() == 0;
}

