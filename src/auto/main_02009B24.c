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

s32 func_02009d58(u32 arg0) {
    s32 irq = func_02008128();
    u32 cur = data_0215d1b8[1];
    s32 ret;
    if (arg0 > cur) {
        if (arg0 - cur < 0x80000000U) {
            ret = 0;
        } else {
            ret = 1;
        }
    } else {
        ret = 1;
        if (cur - arg0 >= 0x80000000U) {
            ret = 0;
        }
    }
    func_0200813c(irq);
    return ret;
}

u32 func_02009da8(void) {
    s32 irq = func_02008128();
    u32 count = 0;
    u8 *p = (u8 *)data_0215d1b8[0];

    while (p != NULL) {
        p = *(u8 **)p;
        count++;
    }
    func_0200813c(irq);
    return count;
}

u32 func_02009de4(void) {
    s32 irq = func_02008128();
    u32 count = 0;
    u8 *p = (u8 *)data_0215d1b8[2];

    while (p != NULL) {
        p = *(u8 **)p;
        count++;
    }
    func_0200813c(irq);
    return count;
}

extern u32 func_02009da8(void);
extern u32 func_02009de4(void);
extern void func_02009ffc(u32);
s32 func_02009e20(void) {
    return 0x100 - func_02009da8() - func_02009de4();
}

s32 func_0200a4f4(u8 *arg0) {
    return *(s32 *)(arg0 + 0x38);
}

void func_0200a56c(void) {
    func_0200a578();
}
