/* 14 functions from 0x0202EC9C to 0x0202FB50 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02160084;
extern void *data_02155c3c;

void *func_0210c594(u32, void *);
void func_0210c5dc(void *);
void func_021167ac(void *, u32);
void func_021167f0(void *, void *);
void func_021168f8(void *, void *);
void func_0202f4d8(void *);

void func_0202f388(void) {
    void **p = &data_02160084;
    if (*p != NULL) {
        return;
    }
    *p = func_0210c594(0xC, data_02155c3c);
    func_021167ac(*p, 0x14);
}

void func_0202f3c4(void) {
    void **p = &data_02160084;
    if (*p == NULL) {
        return;
    }
    while (*(void **)*p != NULL) {
        func_0202f4d8(*(void **)*p);
    }
    if (*p != NULL) {
        func_0210c5dc(*p);
        data_02160084 = NULL;
    }
}

void func_0202f41c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6) {
    u8 *node = func_0210c594(0x20, data_02155c3c);
    *(s32 *)(node + 0x0) = arg0;
    *(s32 *)(node + 0x4) = arg1;
    *(s32 *)(node + 0x8) = arg2;
    *(s32 *)(node + 0xc) = arg3;
    *(s32 *)(node + 0x10) = arg4;
    *(u8 *)(node + 0x1c) = arg5;
    *(u8 *)(node + 0x1d) = arg6;
    func_021167f0(data_02160084, node);
}

void func_0202f4d8(void *arg0) {
    func_021168f8(&data_02160084, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
