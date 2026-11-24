/* 20 functions from 0x0202B4D8 to 0x0202C328 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160080;
extern u8 *data_02160a6c;
extern u8 *data_02160244;
extern void func_02026fbc(void);
extern void func_02027004(void *, void *);
extern u8 *func_0203222c(void);
extern u32 data_0214618c[];
extern void *func_0210c594(s32, void *);
extern u32 data_02155c3c;
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_0202e874(void *);

void func_0202b694(void) {
    u8 *node;
    s32 i;
    i = 0;
    node = func_0203222c();
    while (node != NULL) {
        u8 *p = *(u8 **)(node + 0);
        if (*(u8 *)(*(u8 **)(p + 0x118)) == 1) {
            if ((*(u16 *)(node + 0xe) & 0x100) == 0) {
                func_02027004(p, node);
            }
        }
        i++;
        if (i > 10) {
            return;
        }
        node = *(u8 **)(node + 0x1c);
    }
}

void func_0202b6ec(void) {
    u8 *node = func_0203222c();
    while (node != NULL) {
        *(u16 *)(node + 0xe) &= 0xfeff;
        node = *(u8 **)(node + 0x1c);
    }
    {
        u8 *p = *(u8 **)(data_02160a6c + 0xb8);
        if (p == NULL) {
            return;
        }
        do {
            u8 *q = *(u8 **)(p + 0x12c);
            *(u32 *)(q + 0x10) &= ~1;
            p = *(u8 **)(p + 0x174);
        } while (p != NULL);
    }
}

void func_0202b928(void) {
    *(u16 *)data_02160080 |= 1;
    func_02026fbc();
    func_0202b694();
}

void func_0202b950(u32 arg0) {
    u16 mask = 0xfffe;
    s32 zero = 0;
    *(u16 *)data_02160080 &= mask;
    *(u16 *)data_02160080 |= 2;
    *(u16 *)data_02160080 |= 8;
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    func_02027004(arg0, zero);
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    *(u16 *)data_02160080 &= mask - 1;
    *(u16 *)data_02160080 &= mask - 7;
    *(u16 *)data_02160080 |= 1;
}

void func_0202ba04(u32 arg0) {
    u16 mask = 0xfffe;
    s32 zero = 0;
    *(u16 *)data_02160080 &= mask;
    *(u16 *)data_02160080 |= 2;
    *(u16 *)data_02160080 |= 0x10;
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    func_02027004(arg0, zero);
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    *(u16 *)data_02160080 &= mask - 1;
    *(u16 *)data_02160080 &= mask - 0xf;
    *(u16 *)data_02160080 |= 1;
}

void func_0202bcd4(u32 *arg0, s32 arg1) {
    s32 idx = arg1 * 2;
    arg0[0] = data_0214618c[idx] << 12;
    arg0[1] = 0x20000;
    arg0[2] = data_0214618c[idx + 1] << 12;
}

