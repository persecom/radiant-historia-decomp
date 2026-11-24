/* 12 functions from 0x020EFC58 to 0x020F0AEC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160af0;
extern u8 data_02162618[];
extern void func_021168f8(void *, void *);
extern void func_0210b4cc(void *);
extern void func_0210c5dc(void *);
extern void func_0210b860(void **);

extern void func_020f09d4(void *);
extern void func_020f0984(u32 *);
extern void func_0210da14(void *);
extern void func_0210db10(void *);
extern void func_0210db58(void *);

void func_020f0984(u32 *arg0) {
    func_021168f8(data_02160af0 + 0x64, arg0);
    if (*(u32 *)((u8 *)arg0 + 0x10) < 0x2710) {
        func_0210b4cc(*(void **)arg0);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020f09d4(void *arg0) {
    void *head;
    void *p;
    register void *q;
    func_021168f8(data_02160af0 + 0x70, arg0);
    head = *(void **)data_02162618;
    p = head;
    while (p != NULL) {
        u16 off = *(u16 *)(data_02162618 + 0xa);
        q = (p != NULL) ? *(void **)((u8 *)p + off + 4) : head;
        if (*(void **)p == *(void **)arg0) {
            func_0210b860((void **)q);
            break;
        }
        p = q;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020f0a58(void) {
}

u32 *func_020f0a5c(s32 arg0) {
    u8 *base = data_02160af0;
    u32 *node;
    if (base == NULL) {
        return NULL;
    }
    node = *(u32 **)(base + 0x64);
    while (node != NULL) {
        if (*(s32 *)((u8 *)node + 0x10) == arg0) {
            return node;
        }
        node = *(u32 **)((u8 *)node + 0x4c);
    }
    return NULL;
}

u32 *func_020f0aa4(s32 arg0) {
    u8 *base = data_02160af0;
    u32 *node;
    if (base == NULL) {
        return NULL;
    }
    node = *(u32 **)(base + 0x70);
    while (node != NULL) {
        if (*(s32 *)((u8 *)node + 0x2c) == arg0) {
            return node;
        }
        node = *(u32 **)((u8 *)node + 0x54);
    }
    return NULL;
}

