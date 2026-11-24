/* 25 functions from 0x0200D63C to 0x0200E5E8 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215f000[];
extern u8 data_0215efa0[];
extern u32 data_0215effc;
extern void func_0200b988(void *, void *, u32, u32, u32);
extern void func_0200d63c();
extern void func_0200bc24(void);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_0200d868(void);
extern s32 func_0200df4c(void *, u16, u16, u8, u8, u16, u16, u8, u8);
extern void func_0200dddc(void);
extern void func_0200e138(u32, u32);
extern u32 data_0215f068;
extern u32 data_02145c18;
extern s32 func_0200818c(void);
extern s32 func_02008180(void);
extern void func_0200a75c(void);
extern u8 data_0215f03c[];
extern void func_0200e320(u32);
extern void func_0200e418(u32, u32, u32);

void func_0200d790(void *arg0, u32 arg1, u32 arg2) {
    func_0200b988(arg0, data_0215efa0, arg1, arg1 + arg2, 0xffff);
}

void func_0200d7c0(s32 arg0) {
    if (data_0215effc != 0) {
        return;
    }
    data_0215effc = 1;
    func_0200d63c(arg0);
    func_0200bc24();
}

void func_0200dadc(void) {
    if (*(u16 *)(data_0215f000 + 0) != 0) {
        return;
    }
    *(u16 *)(data_0215f000 + 0) = 1;
    func_0200a56c();
    *(u16 *)(data_0215f000 + 0x10) = 0;
    *(u32 *)(data_0215f000 + 4) = 0;
    *(u32 *)(data_0215f000 + 0x14) = 0;
    *(u16 *)(data_0215f000 + 0x36) = 0;
    *(u16 *)(data_0215f000 + 0x34) = 0;
    *(u16 *)(data_0215f000 + 0x3a) = 0;
    *(u16 *)(data_0215f000 + 0x38) = 0;
    while (func_0200a6c0(6, 1) == 0) {}
    func_0200a674(6, (void *)func_0200d868);
}

s32 func_0200db50(u16 *arg0) {
    volatile u8 *g = (volatile u8 *)0x02fffc80;
    u16 v58 = *(u16 *)(g + 0x58);
    u16 v5a = *(u16 *)(g + 0x5a);
    u16 v5e = *(u16 *)(g + 0x5e);
    u16 v60 = *(u16 *)(g + 0x60);
    u8 b5c = g[0x5c];
    u8 b5d = g[0x5d];
    u8 b62 = g[0x62];
    u8 b63 = g[0x63];
    if (v58 == 0 && v5e == 0 && v5a == 0 && v60 == 0) {
        goto clear;
    }
    if (func_0200df4c(arg0, v58, v5a, b5c, b5d, v5e, v60, b62, b63) == 0) {
        return 1;
    }
clear:
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    return 1;
}

void func_0200df30(u32 arg0) {
    func_0200dddc();
    func_0200e138(arg0, arg0);
}

void func_0200e254(u16 arg0) {
    while (*(volatile u16 *)(data_0215f000 + 0x3a) & arg0) {
    }
}

u32 func_0200e26c(u32 arg0) {
    return *(u16 *)(data_0215f000 + 0x38) & arg0;
}

u32 func_0200e280(void) {
    return *(u32 *)0x02ffff90;
}

extern s32 func_0200df4c(void *, u16, u16, u8, u8, u16, u16, u8, u8);
extern void func_0200dddc(void);
extern void func_0200e138(u32, u32);
extern u32 data_0215f068;
extern u32 data_02145c18;
extern s32 func_0200818c(void);
extern s32 func_02008180(void);
extern void func_0200a75c(void);
void func_0200e290(void) {
    register u32 *flag = &data_0215f068;
    register volatile u16 *reg = (volatile u16 *)0x4000208;
    while (*flag != 0) {
        if ((data_02145c18 & 0x2) != 0 && func_0200818c() == 0x12) {
            goto call;
        }
        if ((data_02145c18 & 0x4) != 0 && func_02008180() == 0x80) {
            goto call;
        }
        if ((data_02145c18 & 0x8) != 0 && *reg == 0) {
            goto call;
        }
        continue;
    call:
        func_0200a75c();
    }
}

void func_0200e314(u32 val, u32 *ptr) {
    if (ptr != NULL) {
        *ptr = val;
    }
}

void func_0200e320(u32 unused) {
    void (*cb)(u32) = (void (*)(u32))*(u32 *)(data_0215f03c + 0x30);
    u32 arg = *(u32 *)(data_0215f03c + 0x34);
    *(u32 *)(data_0215f03c + 0x2c) = 0;
    if (cb != NULL) {
        *(u32 *)(data_0215f03c + 0x30) = 0;
        cb(arg);
    }
}

void func_0200e350(void) {
    volatile u32 v = *(volatile u32 *)0x02fffc3c;
    u32 cur;
    for (;;) {
        cur = *(volatile u32 *)0x02fffc3c;
        if (v != cur) {
            break;
        }
    }
}

void func_0200e384(void) {
    u32 reg;
    if (*(u16 *)data_0215f03c != 0) {
        return;
    }
    *(u16 *)data_0215f03c = 1;
    *(u32 *)(data_0215f03c + 0x2c) = 0;
    *(u32 *)(data_0215f03c + 0x30) = 0;
    func_0200a56c();
    if (func_0200a6c0(8, 1) == 0) {
        do {
            WaitByLoop(100);
        } while (func_0200a6c0(8, 1) == 0);
    }
    func_0200a674(8, (void *)func_0200e418);
    reg = *(u32 *)0x02fffc3c;
    *(u32 *)(data_0215f03c + 8) = reg;
    *(u32 *)(data_0215f03c + 4) = reg;
}

void func_0200e418(u32 arg0, u32 arg1, u32 arg2) {
    u8 b = (u8)arg1;
    u32 v = ((arg1 & 0x7f00) << 8) >> 16;
    u32 cond = arg2;
    if (cond != 0) {
        func_0200e320((v == 0x61 || v == 0x62) ? 1 : 2);
        return;
    }
    switch (v) {
    case 0x60:
        b = 0;
        break;
    case 0x61: {
        u8 *p = *(u8 **)(data_0215f03c + 0x38);
        if (p != NULL) {
            *(u16 *)p = b;
        }
        b = 0;
        break;
    }
    case 0x62:
        break;
    case 0x63:
        *(u32 *)(data_0215f03c + 0xc) = 1;
        break;
    }
    func_0200e320(b);
}

extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern void func_0200e974(u32);
s32 func_0200e4a0(u32 *arg0, s32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    s32 irq = func_02008128();
    if (*(u32 *)(data_0215f03c + 0x2c) != 0) {
        func_0200813c(irq);
        return 1;
    }
    *(u32 *)(data_0215f03c + 0x2c) = 1;
    *(u32 *)(data_0215f03c + 0x38) = arg2;
    *(u32 *)(data_0215f03c + 0x30) = arg3;
    *(u32 *)(data_0215f03c + 0x34) = arg4;
    {
        s32 i;
        for (i = 0; i < arg1; i++) {
            func_0200e974(arg0[i]);
        }
    }
    func_0200813c(irq);
    return 0;
}

