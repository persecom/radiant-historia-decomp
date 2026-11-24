/* 27 functions from 0x02120518 to 0x02121494 (main), found by ds-decomp. */
#include "common.h"

extern void func_02117478(void);
extern u8 data_02173164[12];
extern u32 data_02145ba4;
extern u32 data_02173168;
extern void func_021205ec(u32, void *, u32);
extern void func_021204a8(void);
extern void func_02008d08(u32, void *, u32, void (*)(u32 *), void *);
extern void func_02008b08(u32, void *, u32, void (*)(u32 *), void *);
extern s32 func_02002f3c(void *);
extern void func_02001860(void *, void *);
extern s32 func_02002f6c(void *);
extern void func_021206c8(void *, void *);
extern void *func_0211c9c8(void *, void *);
extern void func_02117464(void *, void *);
extern void func_02002c2c(void);
extern void func_0211d664(void);
extern void func_02120bbc(u8 *, u32, u32);
void func_02120518(u32 *arg0) {
    *arg0 = 0;
}

void func_02120524(s32 arg0) {
    *(s32 *)(data_02173164 + 8) = arg0;
}

void func_02120534(u32 *arg0, u32 arg1) {
    if (arg1 < 0x100 || data_02145ba4 == (u32)-1) {
        func_021205ec(*arg0, arg0 + 1, (arg1 >> 2) - 1);
    } else {
        func_021204a8();
        *(u32 *)(data_02173164 + 4) = 1;
        if (*(s32 *)(data_02173164 + 8) != 0) {
            func_02008d08(data_02145ba4 <= 3 ? data_02145ba4 : (u32)-1, arg0, arg1, func_02120518, &data_02173168);
        } else {
            func_02008b08(data_02145ba4 <= 3 ? data_02145ba4 : (u32)-1, arg0, arg1, func_02120518, &data_02173168);
        }
    }
}

void func_021206c8(void *arg0, void *arg1) {
    u8 mtx[0x40];
    func_021204a8();
    *(volatile u32 *)0x4000440 = 0;
    *(volatile u32 *)0x4000444 = 0;
    *(volatile u32 *)0x4000454 = 0;
    if (arg0 != NULL) {
        u8 *p = mtx;
        while (func_02002f3c(p) != 0) {}
        func_02001860(p, arg0);
    }
    if (arg1 != NULL) {
        while (func_02002f6c(arg1) != 0) {}
    }
    *(volatile u32 *)0x4000448 = 1;
    *(volatile u32 *)0x4000440 = 2;
}

s32 func_02120754(u8 *arg0, void *arg1, void *arg2, u32 arg3) {
    u8 *dict = *(u8 **)(arg0 + 4) + 0x40;
    u8 *node;
    u32 val;
    if (dict != NULL) {
        u32 *entry;
        if (dict != NULL && arg3 < *(u8 *)(dict + 1)) {
            u16 off = *(u16 *)(dict + 6);
            u16 size = *(u16 *)(dict + off);
            entry = (u32 *)(dict + off + 4 + size * arg3);
        } else {
            entry = NULL;
        }
        if (entry != NULL) {
            node = dict + *entry;
            goto got_node;
        }
    }
    node = NULL;
got_node:
    val = ((u32)(*(u16 *)node & 0xf800)) >> 11;
    if (val != 0x1f) {
        u32 cmd = val;
        func_021205ec(0x14, &cmd, 1);
        if (arg1 != NULL || arg2 != NULL) {
            func_021206c8(arg1, arg2);
        }
        return 1;
    }
    return 0;
}

void func_02120800(void) {
    func_02002c2c();
    func_0211d664();
    *(volatile u32 *)0x4000600 = (*(volatile u32 *)0x4000600 & ~0xc0000000) | 0x80000000;
}

void func_02120b8c(void *arg0, void *arg1, void *arg2) {
    func_02117464(arg0, func_0211c9c8(arg1, arg2));
}

void func_02120bb0(void) {
    func_02117478();
}

void func_02120bbc(u8 *arg0, u32 arg1, u32 arg2) {
    u8 *matInfo;
    u8 *mat;
    if (arg0 != NULL && *(u32 *)(arg0 + 8) != 0) {
        matInfo = arg0 + *(u32 *)(arg0 + 8);
    } else {
        matInfo = NULL;
    }
    if (matInfo != NULL) {
        u8 *dict = matInfo + 4;
        u32 *entry;
        if (dict != NULL && arg1 < *(u8 *)(matInfo + 5)) {
            u16 off = *(u16 *)(matInfo + 10);
            u16 size = *(u16 *)(dict + off);
            entry = (u32 *)(dict + off + 4 + size * arg1);
        } else {
            entry = NULL;
        }
        if (entry != NULL) {
            mat = matInfo + *entry;
            goto got_mat;
        }
    }
    mat = NULL;
got_mat:
    *(u32 *)(mat + 0xc) = (*(u32 *)(mat + 0xc) & ~0x3f000000) | (arg2 << 24);
}

void func_02120c34(u8 *arg0, u32 arg1) {
    u32 i;
    for (i = 0; i < *(u8 *)(arg0 + 0x18); i++) {
        func_02120bbc(arg0, i, arg1);
    }
}

extern u32 data_02145ba4;
extern u32 data_02173168;
extern void func_021205ec(u32, void *, u32);
extern void func_021204a8(void);
extern void func_02008d08(u32, void *, u32, void (*)(u32 *), void *);
extern void func_02008b08(u32, void *, u32, void (*)(u32 *), void *);
extern s32 func_02002f3c(void *);
extern void func_02001860(void *, void *);
extern s32 func_02002f6c(void *);
u8 *func_02120f94(u8 *arg0) {
    u16 off = *(u16 *)(arg0 + 0xc);
    return arg0 + *(u32 *)(arg0 + off);
}

