/* 37 functions from 0x02009B24 to 0x0200A980 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215d1b8[9];
extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern s32 func_02009964(s32);
extern void func_02009ec4(void);
s32 func_02009d58(u32);

extern void func_0200a578(void);
void func_02009cc0(u32 arg0) {
    if (func_02009d58(arg0)) {
        return;
    }
    while (func_02009964(0) != 0) {
    }
    if (func_02009d58(arg0)) {
        return;
    }
    func_02009ec4();
    if (func_02009d58(arg0)) {
        return;
    }
    do {
        func_02009964(1);
    } while (!func_02009d58(arg0));
}

u32 func_02009d2c(void) {
    s32 irq = func_02008128();
    u32 ret = (data_0215d1b8[2] == 0) ? data_0215d1b8[1] : data_0215d1b8[8];
    func_0200813c(irq);
    return ret;
}

s32 func_0200a4f4(u8 *arg0) {
    return *(s32 *)(arg0 + 0x38);
}

void func_0200a56c(void) {
    func_0200a578();
}
