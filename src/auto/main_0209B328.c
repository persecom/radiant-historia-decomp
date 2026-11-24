/* 13 functions from 0x0209B328 to 0x0209C2AC (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern u8 *data_02160120;
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_0209b194(s32);

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_0209b570(void) {
    u8 *base = data_02160120;
    *(s8 *)(base + 0x69a) += 1;
    *(s8 *)(base + 0x69a) %= 4;
    *(s16 *)(base + 0x69c) += 0x20;
    if (*(s16 *)(base + 0x69c) > 0x64) {
        *(s16 *)(base + 0x69c) = 0x64;
    }
    if (*(s16 *)(base + 0x5a) == 0) {
        *(s16 *)(base + 0x5a) = 1;
    }
    *(s16 *)(base + 0x698) += 2;
    if (*(s16 *)(base + 0x698) > 0x3c) {
        func_0209b194(5);
    }
}

void *func_0209c0d0(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x24);
    return ptr;
}

void func_0209c0fc(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0209c14c(u16 arg0) {
    u8 *node;
    if (data_02160120 == NULL) {
        return NULL;
    }
    node = **(u8 ***)(data_02160120 + 0x704);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x28);
    }
    return NULL;
}

