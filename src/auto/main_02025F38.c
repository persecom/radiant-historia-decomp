/* 25 functions from 0x02025F38 to 0x02026F38 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_02022584(void *, s32, s8, s16, s16, s16, s16);
extern void *func_0210c594(s32, u32);
extern u32 data_02155c3c;
extern void *data_0216007c[];
extern void func_021168f8(void *, void *);
extern void func_021167ac(void *, s32);
extern void func_021093b0(void *);
extern void *func_02032c44(void);
extern void func_021167f0(void *, void *);
extern void func_0203218c(void *);
extern void func_02026ddc(void *);
void func_02025f38(void *arg0, void *arg1, s32 arg2) {
    func_02022584(
        *(void **)((u8 *)(*(void **)((u8 *)arg0 + 0x118)) + 0x60),
        arg2,
        (s8)(*(s16 *)((u8 *)arg1 + 0x2)),
        *(s16 *)((u8 *)arg1 + 0x6),
        *(s16 *)((u8 *)arg1 + 0x8),
        *(s16 *)((u8 *)arg1 + 0xa),
        *(s16 *)((u8 *)arg1 + 0x10)
    );
}

void *func_02026548(void) {
    return func_0210c594(0x14, data_02155c3c);
}

void func_02026564(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02026578(void *arg0) {
    if (arg0 != NULL) {
        *(u16 *)((u8 *)arg0 + 0) = 0;
        *(u16 *)((u8 *)arg0 + 2) = 0;
        *(u16 *)((u8 *)arg0 + 4) = 0;
        *(u32 *)((u8 *)arg0 + 8) = 0;
        *(u32 *)((u8 *)arg0 + 12) = 0;
    }
}

void func_0202659c(u8 *arg0, s32 arg1) {
    *(s16 *)(arg0 + 2) += arg1;
    if (*(s16 *)(arg0 + 2) > 2) {
        *(s16 *)(arg0 + 2) = 2;
    }
    if (*(s16 *)(arg0 + 2) < 0) {
        *(s16 *)(arg0 + 2) = 0;
    }
}

s16 func_020265cc(s16 *arg0) {
    return arg0[1];
}

void func_020265d4(u8 *arg0, s32 arg1) {
    if (arg1 >= *(s16 *)(arg0 + 2) * 0x58) {
        return;
    }
    *(s32 *)(arg0 + 0xc) = 0xe000;
    *(u16 *)(arg0 + 0) = 1;
    *(u32 *)(arg0 + 8) |= 0x20;
}

void func_02026608(u8 *arg0) {
    *(s32 *)(arg0 + 0xc) = -0x1000;
    *(u16 *)(arg0 + 0) = 1;
    *(u32 *)(arg0 + 8) |= 0x40;
}

void func_02026c00(void **arg0) {
    void *ptr;
    void *next;
    if (arg0 == NULL) {
        return;
    }
    ptr = *arg0;
    while (ptr != NULL) {
        next = *(void **)((u8 *)ptr + 0x20);
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
        ptr = next;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_02026c58(void **arg0) {
    return *arg0;
}

void *func_02026c60(void *arg0, u32 arg1) {
    u8 *node = *(u8 **)arg0;
    u8 i = 0;
    if (node != NULL) {
        do {
            if (i == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0x20);
            i++;
        } while (node != NULL);
    }
    return NULL;
}

void func_02026c94(u16 *arg0) {
    arg0[6]++;
}

u16 func_02026ca4(u16 *arg0) {
    return arg0[6];
}

void func_02026cac(u8 *arg0) {
    void *node;
    if (arg0 == NULL || *(u16 *)(arg0 + 0xe) == 0) {
        return;
    }
    node = *(void **)arg0;
    if (node == NULL) {
        return;
    }
    *(u16 *)(arg0 + 0xe) -= 1;
    func_021168f8(arg0, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
}

void func_02026cec(void) {
    u8 *p = func_0210c594(0x44, data_02155c3c);
    data_0216007c[1] = p;
    func_021167ac(p + 0x18, 0x14);
}

void func_02026d20(void) {
    while (*(void **)((u8 *)data_0216007c[1] + 0x18) != NULL) {
        func_02026ddc(*(void **)((u8 *)data_0216007c[1] + 0x18));
    }
    if (data_0216007c[1] != NULL) {
        func_0210c5dc(data_0216007c[1]);
        data_0216007c[1] = NULL;
    }
}

void *func_02026d70(u32 arg0, u32 arg1, u32 arg2) {
    u32 *node = func_0210c594(0x1c, data_02155c3c);
    node[0] = arg0;
    node[1] = arg1;
    node[2] = arg2;
    node[3] = (u32)func_02032c44();
    func_021167f0((u8 *)data_0216007c[1] + 0x18, node);
    *(u16 *)((u8 *)data_0216007c[1] + 0x16) += 1;
    return node;
}

void func_02026ddc(void *arg0) {
    void *sub = *(void **)((u8 *)arg0 + 0xc);
    func_0203218c(sub);
    if (sub != NULL) {
        func_0210c5dc(sub);
    }
    func_021168f8((u8 *)data_0216007c[1] + 0x18, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
    *(u16 *)((u8 *)data_0216007c[1] + 0x16) -= 1;
}

void func_02026e40(u16 arg0) {
    void *p = func_0210c594(0x28, data_02155c3c);
    *(u16 *)p = arg0;
}

void func_02026e64(u8 *arg0) {
    if (arg0 != NULL) {
        if (*(void **)(arg0 + 4) != NULL) {
            func_021093b0(*(void **)(arg0 + 4));
            *(void **)(arg0 + 4) = NULL;
        }
        if (arg0 != NULL) {
            func_0210c5dc(arg0);
        }
    }
}

