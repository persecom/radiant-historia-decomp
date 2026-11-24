/* 12 functions from 0x020EFC58 to 0x020F0AEC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160af0;
extern u8 data_02162618[];
extern void func_021168f8(void *, void *);
extern void func_0210b4cc(void *);
extern void func_0210c5dc(void *);
extern void func_0210b860(void **);

void func_020eff58(void) {
}

void func_020f0984(u32 *arg0) {
    func_021168f8(data_02160af0 + 0x64, arg0);
    if (*(u32 *)((u8 *)arg0 + 0x10) < 0x2710) {
        func_0210b4cc(*(void **)arg0);
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
        if (*(s32 *)(node + 0x10) == arg0) {
            return node;
        }
        node = *(u32 **)(node + 0x4c);
    }
    return NULL;
}

