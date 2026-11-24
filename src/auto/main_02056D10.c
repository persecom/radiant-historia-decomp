/* 7 functions from 0x02056D10 to 0x02057AE4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600ac;
extern u8 *func_02057764(u16, s32, s16, s16, s16, s8, u16, u8, s32);
extern void func_021168f8(void **, void *);
extern void func_0210c5dc(void *);
extern void func_020f4f04(void *);
extern void func_02056fbc(void);
extern s32 func_020a2c5c(s32, s32, s32, s32, s32);
extern s32 func_020a8844(s32, s32, s32, s32);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern void func_020a9610(void *, s32, s32, s32, s32, s32);
extern void func_02044820(u32);
extern void func_021167ac(void *, s32);
extern u8 *func_020bd438(s32);
extern u8 *func_02021f10(s32);
extern void func_02057244(void);
extern u32 data_02160204;
extern u32 data_02160078;
extern u32 data_02155c3c;
extern u8 data_02146568;
extern u8 *func_0210c594(s32, s32);
extern u8 *func_020f4d40(s32);
extern u8 *func_020f4c2c(s32);
extern u8 *func_020f4ec4(void);
extern s32 func_020f50bc(void *, void *, void *, s32);
extern void func_020f5114(void *, s32);
extern void func_021167f0(void *, void *);

void func_02056d10(void) {
    u8 i;
    s32 n;
    func_02056fbc();
    i = 0;
    if (func_020a2c5c(5, 0xe, i, 0x7d0, 7) == 0) {
        return;
    }
    *(u32 *)(data_021600ac + 0x2e4) = func_020a8844(0x20, 0x1c0, 0x20, 2);
    func_020a9830(data_021600ac + 0x300, data_021600ac + 0x2e8, i, i, i, i);
    func_020a9610(data_021600ac + 0x2e8, *(u32 *)(data_021600ac + 0xa8), 1, *(u32 *)(data_021600ac + 0x2e4), i, i);
    func_02044820(*(u16 *)((u8 *)data_02160204 + 0x72));
    func_021167ac(data_021600ac + 0x8c4, 0x4c);
    func_021167ac(data_021600ac + 0x8d0, 0x20);
    for (; i < 3; i++) {
        u8 *e = func_020bd438(i);
        if (e == 0) {
            continue;
        }
        if ((*(u16 *)e & 1) == 0) {
            continue;
        }
        u8 *tbl = func_02021f10(*(u8 *)(e + 2));
        func_02057764(i * 0x64 + 0xc9, tbl[0x43], i * 0x51 + 0x4f, 0x88, 1, 5, 0x160, 1, 1);
        func_02057764(i * 0x64 + 0xca, *(u16 *)(tbl + 0x10), i * 0x51 + 0x4f, 0x91, 1, 5, 0x160, 1, 1);
        func_02057764(i * 0x64 + 0xcb, *(u16 *)(tbl + 0x14), i * 0x51 + 0x4f, 0x9e, 1, 5, 0x160, 1, 1);
    }
    n = 1;
    func_02057244();
    func_02057764(0x3e8 - n, *(s32 *)((u8 *)data_02160078 + 0x28), 0xe2, 0x75, n, 8, 0x120, n, 0);
}

void func_02056f2c(void) {
    u8 *node = *(u8 **)(data_021600ac + 0x8d0);
    while (node != NULL) {
        u8 *child = *(u8 **)(node + 0x14);
        u8 *next = *(u8 **)(node + 0x24);
        while (child != NULL) {
            void *v = *(void **)(child + 4);
            u8 *child_next = *(u8 **)(child + 0xc);
            func_020f4f04(v);
            func_021168f8((void **)(node + 0x14), child);
            if (child != NULL) func_0210c5dc(child);
            child = child_next;
        }
        func_021168f8((void **)(data_021600ac + 0x8d0), node);
        if (node != NULL) func_0210c5dc(node);
        node = next;
    }
}

void *func_020579dc(u16 arg0) {
    u8 *node = *(u8 **)(data_021600ac + 0x8d0);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void func_02057a18(u16 arg0, s32 arg1, s32 arg2) {
    u8 *node = (u8 *)func_020579dc(arg0);
    if (node != NULL) {
        u8 *child = *(u8 **)(node + 0x14);
        while (child != NULL) {
            void *v = *(void **)(child + 4);
            u8 *child_next = *(u8 **)(child + 0xc);
            func_020f4f04(v);
            func_021168f8((void **)(node + 0x14), child);
            if (child != NULL) func_0210c5dc(child);
            child = child_next;
        }
        func_021168f8((void **)(data_021600ac + 0x8d0), node);
        func_02057764(
            *(u16 *)node,
            arg1,
            *(s16 *)(node + 8),
            *(s16 *)(node + 0xa),
            *(s16 *)(node + 0xc),
            *(s8 *)(node + 0xe),
            *(u16 *)(node + 0x10),
            *(u8 *)(node + 0x12),
            arg2
        );
        if (node != NULL) func_0210c5dc(node);
    }
}

