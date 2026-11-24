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
        if (i > 10) {
            return;
        }
    }
}

void func_020c31f0(void) {
    u8 *node;
    u8 zero = 0;
    do {
        node = func_020c2dd8(zero);
        if (node != NULL) {
            func_021168f8((void **)(data_02160090 + 0x48), node);
            func_021167f0((void **)(data_02160090 + 0x54), node);
        }
    } while (*(u16 *)(data_02160090 + 0x50) != 0);
}

void func_020c3244(u8 arg0) {
    u8 *root = data_02160090;
    u8 *node;
    s8 v = -1;
    u8 flag;
    if (*(u16 *)(root + 0x5c) == 0) {
        return;
    }
    do {
        node = *(u8 **)(root + 0x54);
        node[0] -= arg0;
        if (v == -1) {
            flag = 1;
            v = (s8)node[0];
        } else if (v != node[0]) {
            v = (s8)node[0];
            flag = 1;
        }
        node[1] = flag;
        func_021168f8((void **)(root + 0x54), node);
        func_021167f0((void **)(root + 0x48), node);
        flag++;
    } while (*(u16 *)(root + 0x5c) != 0);
}

void func_020c33d4(void) {
}

void func_020c35c4(u32 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 unused, u32 arg4, u32 arg5, u16 arg6, u32 arg7) {
    u32 v0 = arg0[0];
    u32 v1 = arg0[1];
    u32 v2 = arg0[2];
    *(volatile u32 *)0x40004a8 = 0;
    *(volatile u32 *)0x4000444 = 0;
    *(volatile u32 *)0x4000470 = v0;
    *(volatile u32 *)0x4000470 = v1;
    *(volatile u32 *)0x4000470 = v2;
    *(volatile u32 *)0x400046c = arg4 << 12;
    *(volatile u32 *)0x400046c = 0x1000;
    *(volatile u32 *)0x400046c = arg5 << 12;
    *(volatile u32 *)0x4000500 = 1;
    *(volatile u32 *)0x4000480 = arg6;
    *(volatile u32 *)0x4000490 = 0x3c0003c0;
    *(volatile u32 *)0x4000490 = 0x040003c0;
    *(volatile u32 *)0x4000490 = 0x04000040;
    *(volatile u32 *)0x4000490 = 0x3c000040;
    *(volatile u32 *)0x4000504 = 0;
    *(volatile u32 *)0x4000448 = 1;
}

void *func_020c3810(u16 arg0) {
    u8 **head = *(u8 ***)(data_02160140 + 0x3c);
    u8 *node = *head;
    while (node != NULL) {
        if (*(u16 *)(node + 0x16) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return node;
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
    u8 **head = *(u8 ***)(data_0216013c + 0x8c);
    u8 *node = *head;
    while (node != NULL) {
        if (*(u16 *)(node + 0x16) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return node;
}

void func_020c3da4(void *arg0, u16 arg1, s32 arg2) {
    if (arg0 == NULL) {
        return;
    }
    switch (arg2) {
    case 0:
        *(u16 *)((u8 *)arg0 + 0x2a) |= arg1;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0x2a) &= (u16)~arg1;
        break;
    case 2:
        *(u16 *)((u8 *)arg0 + 0x2a) = 0;
        break;
    }
}

