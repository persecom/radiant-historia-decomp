/* 36 functions from 0x0210D6D8 to 0x0210E694 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02162730[12];
extern s32 data_02162834[3];
extern u8 data_0216280c[];
extern u8 data_021628e0[12];
extern u8 data_021628d4[12];
extern u8 data_021628a4[12];
extern u8 data_021628c8[12];
extern u8 data_021628bc[12];
extern u8 data_021628b0[12];
extern u8 data_02162898[12];
extern u8 data_0216288c[12];
extern void func_021167ac(void *, s32);
extern void func_0210e640(void);
extern void func_0210ddfc(void);
extern void func_021167f0(void *, void *);
extern void func_02116844(void *, void *);
extern void func_02116894(void *, void *, void *);
extern void func_021168f8(void *, void *);
extern void func_02113d10(s32, s32, s32);
extern void func_02113b58(void *, s32);
extern void func_02113c18(void *);

extern u8 data_021628ec[];
extern u16 data_021626b0;
extern u8 *data_02160204;
extern void func_02008250(u32);
extern void func_020081c0(void);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_0210d6d8(s32 arg0, s32 arg1, s32 arg2) {
    func_02113d10(arg0, arg1, arg2 >> data_02162834[0]);
}

void func_0210d6f4(void *arg0) {
    func_02113b58(arg0, 0);
    func_02113c18(arg0);
}

void func_0210d828(void) {
    *(s16 *)(data_02162730 + 4) = -1;
    *(s32 *)(data_02162730 + 8) = 0;
}

void func_0210d844(s16 arg0) {
    *(s16 *)(data_02162730 + 4) = arg0;
    *(s32 *)(data_02162730 + 8) = 1;
}

void func_0210d85c(s32 arg0) {
    *(s32 *)(data_02162730 + 8) = arg0;
}

void func_0210d86c(void) {
    func_021167ac(data_021628e0, 0xc);
    func_021167ac(data_021628d4, 0xc);
    func_021167ac(data_021628a4, 0xc);
    func_021167ac(data_021628c8, 0xc);
    func_021167ac(data_021628bc, 0xc);
    func_021167ac(data_021628b0, 0xc);
    func_021167ac(data_02162898, 0xc);
    func_021167ac(data_0216288c, 0xc);
    func_0210e640();
    *(s32 *)(data_0216280c + 0x24) = 0x3c;
    *(s32 *)(data_0216280c + 0x28) = 0;
    *(s32 *)(data_0216280c + 0x10) = 1;
    *(s32 *)(data_0216280c + 0x14) = 1;
    *(void (**)(void))(data_0216280c + 0x1c) = func_0210ddfc;
}

void func_0210d92c(u8 *arg0, u8 *arg1) {
    s32 val = *(s32 *)(arg1 + 4);
    u8 *cur = NULL;
    if (val < 0) {
        val = -val;
    }
    while ((cur = (cur != NULL) ? *(u8 **)(cur + *(u16 *)(arg0 + 0xa) + 4) : *(u8 **)arg0) != NULL) {
        s32 curVal = *(s32 *)(cur + 4);
        if (curVal < 0) {
            curVal = -curVal;
        }
        if (val < curVal) {
            break;
        }
    }
    if (cur == NULL) {
        func_021167f0(arg0, arg1);
    } else if (cur == *(u8 **)arg0) {
        func_02116844(arg0, arg1);
    } else {
        func_02116894(arg0, cur, arg1);
    }
}

void func_0210d9ac(void *arg0, u8 *arg1) {
    if (*(u8 **)(data_0216280c + 0x7c) == arg1) {
        *(u8 **)(data_0216280c + 0x30) = *(u8 **)(arg1 + 0x10);
    }
    if (*(u8 **)(data_0216280c + 0x30) == arg1) {
        *(u8 **)(data_0216280c + 0x30) = *(u8 **)(*(u8 **)(data_0216280c + 0x30) + 0x10);
    }
    func_021168f8(arg0, arg1);
}

void func_0210d9e4(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628e0 : data_021628b0;
    func_0210d92c(list, arg0);
}

void func_0210da14(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628e0 : data_021628b0;
    func_0210d9ac(list, arg0);
}

void func_0210da44(u8 *arg0) {
    u8 *node = *(s32 *)(data_0216280c + 0x44) == 0
        ? *(u8 **)(data_0216280c + 0xd4)
        : *(u8 **)(data_0216280c + 0xa4);
    while (node != NULL) {
        if (node == arg0) {
            func_0210d9ac(*(s32 *)(data_0216280c + 0x44) == 0 ? data_021628e0 : data_021628b0, arg0);
        }
        node = *(u8 **)(node + 0x10);
    }
}

void func_0210dab0(void *arg0) {
    func_0210d92c(data_021628b0, arg0);
}

void func_0210dac8(s32 arg0) {
    func_0210d9ac(data_021628b0, arg0);
}

void func_0210dae0(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628d4 : data_02162898;
    func_0210d92c(list, arg0);
}

void func_0210db10(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628d4 : data_02162898;
    func_0210d9ac(list, arg0);
}

void func_0210db40(s32 arg0) {
    func_0210d92c(data_02162898, arg0);
}

void func_0210db58(s32 arg0) {
    func_0210d9ac(data_02162898, arg0);
}

void func_0210db70(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628a4 : data_0216288c;
    func_0210d92c(list, arg0);
}

void func_0210dba0(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628a4 : data_0216288c;
    func_0210d9ac(list, arg0);
}

void func_0210dbd0(s32 arg0) {
    func_0210d92c(data_0216288c, arg0);
}

void func_0210dbe8(s32 arg0) {
    func_0210d9ac(data_0216288c, arg0);
}

extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern void func_021168f8(void *, void *);
void func_0210dc00(void *arg0) {
    s32 irq = func_02008128();
    func_0210d92c(data_021628c8, arg0);
    func_0200813c(irq);
}

void func_0210dc2c(void *arg0) {
    s32 irq = func_02008128();
    func_021168f8(data_021628c8, arg0);
    func_0200813c(irq);
}

void func_0210dc58(s32 arg0) {
    func_0210d92c(data_021628bc, arg0);
}

void func_0210dc70(s32 arg0) {
    func_021168f8(data_021628bc, arg0);
}

