/* 19 functions from 0x020C1FEC to 0x020C2E80 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160090;
extern u8 *data_02160a6c;

extern u8 *func_020c2584(u8 *, u32);
extern u8 *func_020ddb90(u16);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020c27b4(u8, s8, u32);
extern void func_021167f0(u8 *, u8 *);

void func_020c2734(u8 arg0, s8 arg1, u32 arg2);
void func_020c2694(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xac);
    while (node != NULL) {
        ((s8 *)data_02160090)[0x7d]++;
        node = *(u8 **)(node + 0x16c);
    }
    node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        ((s8 *)data_02160090)[0x7d]++;
        node = *(u8 **)(node + 0x174);
    }
}

void func_020c2708(u8 arg0) {
    func_020c2734(arg0, 0, 0);
    func_020c27b4(arg0, 3, 0);
}

void func_020c2734(u8 arg0, s8 arg1, u32 arg2) {
    u8 *node = *(u8 **)(data_02160a6c + 0xac);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0) {
            u8 *res = func_020c2584(node, arg2);
            res[0] = arg0;
            res[0x14] = arg1;
            func_021167f0(data_02160090 + 0x48, res);
            arg1++;
        }
        node = *(u8 **)(node + 0x16c);
    }
}

void func_020c27b4(u8 arg0, s8 arg1, u32 arg2) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *res = func_020c2584(node, arg2);
        res[0] = arg0;
        res[0x14] = arg1;
        func_021167f0(data_02160090 + 0x48, res);
        arg1++;
        node = *(u8 **)(node + 0x174);
    }
}

void func_020c2824(u8 arg0, u8 arg1, u32 arg2, u16 arg3) {
    u8 *node = func_020ddb90(arg3);
    if (node != NULL) {
        u8 *res = func_020c2584(node, arg2);
        res[0] = arg0;
        res[0x14] = arg1;
        func_021167f0(data_02160090 + 0x48, res);
    }
}

void *func_020c2a98(u8 arg0, u8 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void *func_020c2adc(u8 arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[0x1a] == 1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void func_020c2b98(void) {
    void *node;
    while ((node = *(void **)(data_02160090 + 0x48)) != NULL) {
        func_021168f8(data_02160090 + 0x48, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void *func_020c2d80(void) {
    return *(void **)(data_02160090 + 0x48);
}

void *func_020c2d94(u8 arg0, u8 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

