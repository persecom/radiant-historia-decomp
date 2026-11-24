/* 37 functions from 0x02009B24 to 0x0200A980 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215d1b8[9];
extern u8 data_0215ec80[0x60];
extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern s32 func_02009964(s32);
extern void func_02009ec4(void);
s32 func_02009d58(u32);
extern void func_0200a674(s32, void *);
extern void func_020081a4(s32);

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

void func_02009e3c(u32 arg0, u32 arg1) {
    s32 irq = func_02008128();
    func_02009ffc(arg1);
    func_0200813c(irq);
}

void func_02009e60(void) {
    func_0200a674(7, func_02009e3c);
    if (func_02009f34() == 0) {
        return;
    }
    while (func_0200a6c0(7, 1) == 0) {
        func_020081a4(50);
    }
}

void func_02009ec4(void) {
    while (func_0200a6e4(7, 0, 0) < 0) {
    }
}

void *func_02009eec(void) {
    s32 irq = func_02008128();
    void **node = (void **)data_0215d1b8[0];
    if (node == NULL) {
        func_0200813c(irq);
        return NULL;
    }
    data_0215d1b8[0] = (u32)*node;
    if (data_0215d1b8[0] == 0) {
        data_0215d1b8[4] = 0;
    }
    func_0200813c(irq);
    return node;
}

extern u8 data_0215ec80[0x60];
extern void func_0200a674(s32, void *);
extern s32 func_02009f34(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_020081a4(s32);
extern s32 func_0200a6e4(s32, s32, s32);
void func_02009fac(s32 arg0) {
    u8 *p = data_0215ec80 + arg0 * 12;
    p[8]++;
}

u32 func_02009fcc(s32 arg0, u32 arg1, u32 arg2) {
    u8 *p = data_0215ec80 + arg0 * 12;
    *(u32 *)p = arg1;
    *(u32 *)(p + 4) = arg2;
    return ++p[8];
}

extern s32 func_0200698c(void);
void func_0200a328(u32 *arg0) {
    u32 tmp[2];
    tmp[0] = 0;
    tmp[1] = 0;
    arg0[0] = tmp[0];
    arg0[1] = tmp[1];
}

s32 func_0200a4f4(u8 *arg0) {
    return *(s32 *)(arg0 + 0x38);
}

void func_0200a56c(void) {
    func_0200a578();
}
