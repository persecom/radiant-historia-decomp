/* 19 functions from 0x020EC12C to 0x020ED0BC (main), found by ds-decomp. */
#include "common.h"

extern void func_02108594(void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160ab4;
extern void func_020ebc24(u8 *);
extern s32 func_020ebddc(void *, s32);
extern void func_021168f8(u8 *, u8 *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210dc70(void *);
void func_020ec548(u8 *arg0);
void func_020ec218(void) {
    u8 **p = &data_02160ab4;
    while (*(u8 **)(*p + 0x50) != NULL) {
        func_020ec548(*(u8 **)(*p + 0x50));
    }
    func_0210da14(*p);
    func_0210dba0(*p + 0x14);
    func_0210dbe8(*p + 0x28);
    func_0210dc70(*p + 0x3c);
    if (*p != NULL) {
        func_0210c5dc(*p);
        *p = NULL;
    }
}

void func_020ec548(u8 *arg0) {
    if (arg0 == NULL) return;
    func_020ebc24(*(u8 **)arg0);
    func_021168f8(data_02160ab4 + 0x50, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020ec6ac(void) {
    u8 *obj = *(u8 **)(data_02160ab4 + 0x50);
    s32 zero = 0;
    s32 one = 1;
    s32 arg;
    if (obj == NULL) return;
    while (obj != NULL) {
        arg = one;
        if (*(u32 *)(obj + 0x38) != 0) arg = zero;
        func_020ebddc(*(u8 **)(obj + 0x0), arg);
        obj = *(u8 **)(obj + 0x48);
    }
}

void func_020ec88c(u8 *arg0, s32 arg1, s32 arg2) {
    if (*(s32 *)(arg0 + 0x40) == arg1) {
        return;
    }
    if (arg2 == 0) {
        arg2 = 1;
    }
    if (arg2 != 0 && func_020ebd5c(*(void **)arg0, arg1, arg2) != 0) {
        *(s32 *)(arg0 + 0x40) = arg1;
    }
}

void func_020ec98c(u32 arg0) {
    *(u32 *)(data_02160ab4 + 0x64) = arg0;
}

extern s32 func_02117d80(void *);
extern s32 func_020ebd5c(void *, s32, s32);
u32 func_020ec9a0(u8 *arg0, s32 arg1) {
    s32 a = *(s32 *)(arg0 + 0x20);
    void *b = *(void **)(arg0 + 8);
    u32 ret = 0;
    if (a != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80(b)) {
        ret |= 1;
    }
    return ret;
}

void func_020ecaa4(void **arg0) {
    func_02108594(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
