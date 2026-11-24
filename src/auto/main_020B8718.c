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
extern void *func_020c9c10(void *, s32);
extern void func_020c8488(void *);
extern void func_020b8dbc(void);
extern void func_02111ccc(void *);
extern void *func_02111d3c(void *);
extern u16 func_02110b38(u16);
extern void func_02112688(void *);
extern void func_021108f0(void *, s32);
extern void func_02112068(void *);
extern void func_02111bf0(void *);
extern void func_02111ff0(void *);
extern void *func_02112048(void *);
extern void func_020b9214(void *, u16, s32);
extern void func_020b9274(void *, u16, s32);
extern void func_020b92b0(void);
extern void func_020b9250(void);

void func_020b8844(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020b886c(void) {
    func_020c9b64(*(void **)(data_021601ec + 0x48));
}

void func_020b8888(void) {
    func_020c9b64(*(void **)(data_021601ec + 0x4c));
}

void func_020b88a4(void) {
    u8 *root = data_021601ec;
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
    if (*(u32 *)(data_02160204 + 0x10c) == 0) {
        return 1;
    }
    return func_020de3d8() == 0;
}

void func_020b8d94(void) {
    u8 *root = data_021601ec;
    if (root[0x44] == 0) {
        *(u32 *)(root + 0x5c) = 0x55000;
    }
    func_020b8dbc();
}

void func_020b90f0(void) {
    void *obj = func_020c9c10(*(void **)(data_021601ec + 0x4c), 2);
    u8 *item;
    void *node;
    func_02111ccc(obj);
    item = *(u8 **)(*(u8 **)(data_02160204 + 0) + 0x10c);
    if (item == NULL) {
        return;
    }
    item = *(u8 **)item;
    while (item != NULL) {
        u16 v = *(u16 *)(item + 8);
        node = func_02111d3c(obj);
        *(u16 *)((u8 *)node + 2) = v;
        *(u16 *)((u8 *)node + 4) = func_02110b38(v);
        *(u32 *)((u8 *)node + 8) = *(u16 *)(item + 0xa);
        *((u8 *)node + 6) |= 4;
        item = *(u8 **)(item + 4);
    }
    func_02112688(obj);
    func_021108f0(obj, 0);
    func_02112068(obj);
    func_02111bf0(obj);
    func_02111ff0(obj);
}

void func_020b9250(void) {
    func_020c8488(func_020c9c10(*(void **)(data_021601ec + 0x48), 10));
}

