/* 24 functions from 0x020C2E80 to 0x020C3DF4 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160090;
extern u8 *data_02160140;
extern u8 *data_0216013c;
extern void func_021167ac(void *, u32);
extern void func_021167f0(void *, void *);
extern void *func_020c2dd8(u32);
void func_020c3020(void *arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    u8 *next;
    u8 *p;
    while (node != NULL) {
        next = *(u8 **)(node + 0x24);
        if (*(void **)(node + 4) == arg0 || *(void **)(node + 4) == NULL) {
            p = *(u8 **)(data_02160090 + 8);
            while (p != NULL) {
                if (*(void **)(p + 0x48) == node) {
                    *(void **)(p + 0x48) = NULL;
                }
                p = *(u8 **)(p + 0x1c);
            }
            func_021168f8((void **)(data_02160090 + 0x48), node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
        node = next;
    }
}

void *func_020c30b4(u8 arg0, u8 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void func_020c30f8(void) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    u8 i = 0;
    while (node != NULL) {
        i++;
        if (i > 9) {
            return;
        }
        node = *(u8 **)(node + 0x24);
    }
}

void func_020c3134(void *arg0) {
    u8 i;
    u8 *node;
    func_021168f8((void **)(data_02160090 + 0x48), arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
    i = 0;
    node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        i++;
        node = *(u8 **)(node + 0x24);
        if (i > 15) {
            return;
        }
    }
}

void func_020c319c(u8 *arg0, u8 *arg1) {
    u8 *node;
    u8 i;
    *(u32 *)(arg0 + 4) = *(u32 *)(arg1 + 4);
    *(u32 *)(arg0 + 8) = *(u32 *)(arg1 + 8);
    *(u32 *)(arg0 + 0xc) = *(u32 *)(arg1 + 0xc);
    node = *(u8 **)(data_02160090 + 0x48);
    i = 0;
    while (node != NULL) {
        i++;
        node = *(u8 **)(node + 0x24);
        if (i > 9) {
            return;
        }
    }
}

void func_020c31f0(void) {
    u8 *node = func_020c2dd8(0);
    if (node != NULL) {
        func_021168f8((void **)(data_02160090 + 0x48), node);
        func_021167f0((void **)(data_02160090 + 0x54), node);
        if (*(u16 *)(data_02160090 + 0x50) != 0) {
            func_020c30f8();
        }
    }
}

void func_020c33d4(void) {
}

void func_020c35c4(u32 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u16 arg6, u32 arg7) {
    volatile u32 *base = (volatile u32 *)0x40004a8;
    volatile u32 *p;
    base[0] = 0;
    *(volatile u32 *)((u8 *)base - 0x64) = 0;
    p = (volatile u32 *)((u8 *)base - 0x38);
    p[0] = arg0[0];
    p[0] = arg0[1];
    p[0] = arg0[2];
    p = (volatile u32 *)((u8 *)base - 0x3c);
    p[0] = arg4 << 12;
    p[0] = 0x1000;
    p[0] = arg5 << 12;
    base[0x58 / 4] = 1;
    *(volatile u32 *)((u8 *)base - 0x28) = arg6;
    p = (volatile u32 *)((u8 *)base - 0x18);
    p[0] = 0x3c0003c0;
    p[0] = 0x040003c0;
    p[0] = 0x04000040;
    p[0] = 0x3c000040;
    base[0x5c / 4] = 0;
    *(volatile u32 *)((u8 *)base - 0x60) = 1;
}

void *func_020c3810(u16 arg0) {
    u8 *node = *(u8 **)(data_02160140 + 0x3c);
    while (node != NULL) {
        if (*(u16 *)(node + 0x16) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

void *func_020c3c78(void) {
    return func_0210c594(0x28, data_02155c3c);
}

void func_020c3c94(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020c3ca8(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x2c);
    return ptr;
}

extern void func_021168f8(void *, void *);
void func_020c3cd4(void **arg0) {
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

void *func_020c3d24(void *arg0) {
    void *p = func_0210c594(0x34, data_02155c3c);
    *(u32 *)((u8 *)p + 0xc) = 0x1000;
    *(u32 *)((u8 *)p + 0x10) = 0x1000;
    func_021168f0(arg0, p);
    return p;
}

void *func_020c3d64(u16 arg0) {
    u8 *node = *(u8 **)(data_0216013c + 0x8c);
    while (node != NULL) {
        if (*(u16 *)(node + 0x16) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

