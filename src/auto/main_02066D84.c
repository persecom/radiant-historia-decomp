/* 12 functions from 0x02066D84 to 0x02067744 (main), found by ds-decomp. */
#include "common.h"

extern void *func_0210c594(u32, u32);
extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_0210c5dc(void *);
extern void func_021167ac(void *, s32);
extern u32 data_02155c3c;
extern u8 *data_021600e8;
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0206713c(s32, s32);
extern void func_0206ed38(void);
extern void func_02067744(void);
void func_02066eac(s32 arg0) {
    s32 val = 0x3f6;
    if (data_021600e8 != NULL) {
        return;
    }
    data_021600e8 = (u8 *)func_0210c594(0x60, data_02155c3c);
    func_021167ac(data_021600e8 + 0x3c, 8);
    func_021167ac(data_021600e8 + 0x48, 0x60);
    func_021167ac(data_021600e8 + 0x54, 0x24);
    *(void (**)(void))data_021600e8 = func_0206ed38;
    *(s32 *)(data_021600e8 + 4) = val;
    func_0210d9e4(data_021600e8);
    *(void (**)(void))(data_021600e8 + 0x14) = func_02067744;
    *(s32 *)(data_021600e8 + 0x18) = val - 0xc;
    func_0210db70(data_021600e8 + 0x14);
    if (arg0 == 0x12) {
        *(void (**)(void))(data_021600e8 + 0x28) = func_02067744;
        *(s32 *)(data_021600e8 + 0x2c) = val - 0xc;
        func_0210dbd0(data_021600e8 + 0x28);
    } else {
        *(void (**)(void))(data_021600e8 + 0x28) = NULL;
    }
    func_0206713c(arg0, 0);
}

void *func_02067294(void *arg0, u16 arg1) {
    void *result;
    u8 *p1;
    u8 *p2;
    void *second;

    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    second = *(void **)((u8 *)arg0 + 4);
    if (second == NULL) {
        result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    } else {
        result = func_0203be60(p1, *(void **)arg0, second);
    }
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(data_021600e8 + 0x3c, p2);
    } else {
        if (p1 != NULL) {
            func_0210c5dc(p1);
        }
        if (p2 != NULL) {
            func_0210c5dc(p2);
        }
    }
    return result;
}

void func_0206753c(u16 arg0) {
    u8 *p;
    u8 *node;

    p = data_021600e8;
    if (p == NULL) return;
    node = *(u8 **)(p + 0x3c);
    if (node == NULL) return;
    for (;;) {
        if (*(u16 *)(node + 4) == arg0) {
            u8 *d = *(u8 **)node;
            *(volatile u32 *)0x040004a8 = (*(u32 *)(d + 4) >> 3) | (*(u32 *)(d + 0x18) << 26) |
                                          0x40000000 | (*(u32 *)(d + 0x10) << 20) |
                                          (*(u32 *)(d + 0x14) << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = *(u32 *)(d + 0xc) >> (4 - (*(u32 *)(d + 0x18) == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = *(u8 **)(node + 0xc);
        if (node == NULL) return;
    }
}

void *func_020675e4(u8 arg0, u16 arg1) {
    u8 *p = func_0210c594(0x68, data_02155c3c);
    *(u32 *)(p + 0x0) = 0;
    *(u32 *)(p + 0x4) = 0;
    *(u32 *)(p + 0x8) = 0;
    *(u32 *)(p + 0xc) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u8 *)(p + 0x18) = arg0;
    *(u16 *)(p + 0x1a) = arg1;
    *(u16 *)(p + 0x1c) = 0;
    *(u16 *)(p + 0x22) = 0;
    *(u16 *)(p + 0x26) = 0;
    *(u32 *)(p + 0x2c) = 0;
    *(u16 *)(p + 0x30) = 0;
    *(u16 *)(p + 0x32) = 0;
    *(u16 *)(p + 0x34) = 0;
    *(u16 *)(p + 0x36) = 0;
    *(u8 *)(p + 0x40) = 0;
    *(u32 *)(p + 0x44) = 1;
    *(u32 *)(p + 0x48) = 0;
    *(u32 *)(p + 0x4c) = 0;
    func_021167ac(p + 0x54, 0x34);
    return p;
}

void func_02067674(void) {
    u8 *p = func_0210c594(0x3c, data_02155c3c);
    p[0x26] = 0x1f;
}

void *func_02067698(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0x54);
    while (node != NULL) {
        if (*(u16 *)(node + 0x2a) == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x38);
    }
    return NULL;
}

void func_020676c4(u8 arg0, u16 arg1) {
    u8 *node = *(u8 **)(data_021600e8 + 0x48);
    while (node != NULL) {
        if (*(u16 *)(node + 0x24) == arg1 && *(u8 *)(node + 0x18) == arg0) {
            *(u32 *)(node + 0x48) = 1;
            return;
        }
        node = *(u8 **)(node + 0x64);
    }
}

void func_02067708(u32 arg0) {
    u8 *p = data_021600e8;
    u8 *node;
    if (p == NULL) {
        return;
    }
    node = *(u8 **)(p + 0x48);
    while (node != NULL) {
        if (*(u32 *)(node + 0x4c) == arg0) {
            *(u32 *)(node + 0x4c) = 0;
        }
        node = *(u8 **)(node + 0x64);
    }
}

