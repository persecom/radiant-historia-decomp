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
    u8 *node;
    if (func_02032c14(arg0, arg1) == 0) {
        return NULL;
    }
    node = func_0210c594(0x1c, data_02155c3c);
    *(u8 **)node = arg1;
    if (arg2 == 1) {
        *(u16 *)(node + 4) |= 0x20;
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

