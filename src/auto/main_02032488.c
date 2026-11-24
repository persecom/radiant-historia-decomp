/* 38 functions from 0x02032488 to 0x020333B8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160090;
extern u8 *data_02160110;
extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void *func_0203222c(void);
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
s32 func_02032c14(u8 *, void *);
extern void func_02031c60(s32, s32);
extern void func_0209568c(s32, s32);
extern void func_0209625c(void);
extern void func_02031fcc(void *, s32);
extern void *func_020de56c(void *);
extern void func_0210c5dc(void *);

extern void func_020c2e80(void);
void func_020328fc(void) {
    u8 *node = *(u8 **)(data_02160090 + 0x14);
    s32 count;
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 0x24);
        func_021168f8(data_02160090 + 0x14, node);
        node = next;
    }
    count = 0;
    node = func_0203222c();
    while (node != NULL) {
        if (*(s8 *)(data_02160110 + 0xc4) != **(u8 **)(*(u8 **)node + 0x118)) {
            break;
        }
        if (count >= 10) {
            break;
        }
        node[0xc] = 1;
        func_021167f0(data_02160090 + 0x14, node);
        node = *(u8 **)(node + 0x1c);
        count++;
    }
}

u8 func_020329a0(void) {
    u8 count = 0;
    u8 *node = *(u8 **)(data_02160090 + 0x14);
    while (node != NULL) {
        if (node != NULL) {
            count++;
        }
        node = *(u8 **)(node + 0x24);
    }
    return count;
}

u16 func_020329d8(void *arg0) {
    u16 i = 0;
    u8 *node = func_0203222c();
    while (node != NULL) {
        if (node == arg0) {
            return i;
        }
        i++;
        node = *(u8 **)(node + 0x1c);
    }
    return 0x100;
}

void *func_02032b98(u8 *arg0, u8 *arg1, s32 arg2) {
    if (func_02032c14(arg0, arg1) != 0) {
        u8 *node = func_0210c594(0x1c, data_02155c3c);
        *(u8 **)node = arg1;
        switch (arg2) {
        case 1:
            *(u16 *)(node + 4) |= 0x20;
            break;
        }
        {
            u8 *sub = *(u8 **)(arg1 + 0x118);
            if (*(u32 *)(sub + 0x8c) & 8) {
                *(u32 *)(sub + 0x8c) |= 0x800;
            }
        }
        func_021167f0(arg0 + 0x28, node);
        return node;
    }
    return NULL;
}

s32 func_02032c14(u8 *arg0, void *arg1) {
    u8 *node = *(u8 **)(arg0 + 0x28);
    while (node != NULL) {
        if (*(void **)node == arg1) {
            return 0;
        }
        node = *(u8 **)(node + 0x18);
    }
    return 1;
}

void *func_02032c44(void) {
    u8 *ptr = func_0210c594(0x54, data_02155c3c);
    func_021167ac(ptr + 0x28, 0x14);
    ptr[0x12] = 0;
    *(u32 *)(ptr + 0x14) = 0;
    return ptr;
}

s32 func_02032c80(void) {
    func_02031c60(1, 0x64);
    func_0209568c(0, 1);
    func_0209625c();
    return 1;
}

void func_02032cac(void) {
    u8 *node = *(u8 **)(data_02160090 + 8);
    while (node != NULL) {
        func_02031fcc(node, 0);
        node = *(u8 **)(data_02160090 + 8);
    }
    func_02031c60(2, 0x64);
}

void func_02032cf4(void *arg0) {
    u8 *node;
    if (arg0 != NULL) {
        node = *(u8 **)(data_02160090 + 8);
        while (node != NULL) {
            node[0x41] &= 0xfd;
            if (*(void **)node == arg0) {
                node[0x41] |= 2;
            }
            node = *(u8 **)(node + 0x1c);
        }
    } else {
        node = *(u8 **)(data_02160090 + 8);
        while (node != NULL) {
            node[0x41] &= 0xfd;
            node = *(u8 **)(node + 0x1c);
        }
    }
}

void func_02032d74(void *arg0) {
    u8 *node;
    if (arg0 != NULL) {
        return;
    }
    node = *(u8 **)(data_02160090 + 8);
    while (node != NULL) {
        node[0x41] &= ~4;
        node = *(u8 **)(node + 0x1c);
    }
}

void *func_02032e34(u32 arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x24);
    while (node != NULL) {
        if (*(u32 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x14);
    }
    return NULL;
}

void func_02032e70(void *arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x24);
    while (node != NULL) {
        if (arg0 == *(void **)(node + 4)) {
            *(void **)(node + 4) = func_020de56c(*(void **)node);
        }
        node = *(u8 **)(node + 0x14);
    }
}

void func_02032eb8(void *arg0, u16 arg1) {
    u8 *node = func_0210c594(0x10, data_02155c3c);
    *(void **)node = arg0;
    *(u16 *)(node + 4) = arg1;
    func_021167f0(data_02160090 + 0x30, node);
}

void func_02032efc(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_021168f8(data_02160090 + 0x30, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02032f34(void) {
    void *node;
    while ((node = *(void **)(data_02160090 + 0x30)) != NULL) {
        func_021168f8(data_02160090 + 0x30, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void *func_02032f80(u32 arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x30);
    while (node != NULL) {
        if (*(u32 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0xc);
    }
    return NULL;
}

void func_02032ff8(void) {
    data_02160090[0x7e] = 1;
}

void func_0203305c(void) {
}

void func_0203312c(void) {
    func_020c2e80();
}

extern void func_020c3134(void);
void func_02033138(void) {
    func_020c3134();
}

extern void func_020c319c(void);
void func_02033144(void) {
    func_020c319c();
}

extern void func_0210c5dc(void *);
void func_0203319c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020331b0(u16 *arg0, u16 arg1) {
    arg0[0] = arg1;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
}

void func_020331d0(u8 *arg0, u16 arg1, s32 arg2) {
    if (arg2 != 0) {
        *(u16 *)(arg0 + 8) |= arg1;
    } else {
        *(u16 *)(arg0 + 8) &= (u16)~arg1;
    }
}

extern s32 func_02117d80(void *);
s32 func_020332c8(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return func_02117d80(*(void **)(*(void **)arg0 + 8));
}

