/* 18 functions from 0x02031724 to 0x02032488 (main), found by ds-decomp. */
#include "common.h"

extern void *data_0216008c;
extern void *data_02160090;
extern void func_02031fcc(s32, s32);
extern void func_021168f8(void *, void *);
extern void func_02033060(void);
extern void func_02032de8(void);
extern void func_02033010(void);
extern void func_02032f34(void);
extern void func_020c2b98(void);
extern void func_020c2be4(void);
extern void func_020c2c30(void);
extern void func_0210c5dc(void *);
void *func_02031c24(u32 arg0) {
    void *node = *(void **)((u8 *)data_0216008c + 0x2c);
    while (node != NULL) {
        if (*(u8 *)((u8 *)node + 0x8) == arg0) {
            return node;
        }
        node = *(void **)((u8 *)node + 0x4);
    }
    return NULL;
}

void func_02031c60(void) {
}

void func_02031d2c(void) {
    void *node = *(void **)((u8 *)data_02160090 + 0x14);
    while (node != NULL) {
        void *next = *(void **)((u8 *)node + 0x24);
        func_021168f8((u8 *)data_02160090 + 0x14, node);
        node = next;
    }
    func_02033060();
    func_02032de8();
    func_02033010();
    func_02032f34();
    func_020c2b98();
    func_020c2be4();
    func_020c2c30();
    if (data_02160090 != NULL) {
        func_0210c5dc(data_02160090);
        data_02160090 = NULL;
    }
}

void func_02031fbc(s32 arg0, s32 arg1, s32 arg2) {
    func_02031fcc(arg0, arg2);
}

void func_0203218c(u8 *arg0) {
    void *node;
    if (arg0 == NULL) {
        return;
    }
    while ((node = *(void **)(arg0 + 0x28)) != NULL) {
        func_021168f8(arg0 + 0x28, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020321cc(s32 arg0) {
    void *node;
    while ((node = *(void **)((u8 *)data_02160090 + 8)) != NULL) {
        func_02031fcc((s32)node, arg0);
    }
}

void func_02032208(u8 *arg0, void *arg1) {
    func_021168f8(arg0 + 0x28, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

void *func_0203222c(void) {
    return *(void **)((u8 *)data_02160090 + 8);
}

