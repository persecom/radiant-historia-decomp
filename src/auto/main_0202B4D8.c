/* 20 functions from 0x0202B4D8 to 0x0202C328 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160080;
extern u8 *data_02160a6c;
extern u8 *data_02160244;
extern void func_02026fbc(void);
extern void func_02027004(void *, void *);
extern u8 *func_0203222c(void);

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
    register s32 zero = 0;
    register u16 mask = 0xfffe;
    register u8 **pb = &data_02160244;
    register u8 **pf = &data_02160080;
    *(u16 *)*pf &= mask;
    *(u16 *)*pf |= 2;
    *(u16 *)*pf |= 8;
    *(u16 *)(*pb + 0xf8) = zero;
    *(u16 *)(*pb + 0xf6) = zero;
    func_02027004(arg0, zero);
    *(u16 *)(*pb + 0xf8) = zero;
    *(u16 *)(*pb + 0xf6) = zero;
    *(u16 *)*pf &= mask - 1;
    *(u16 *)*pf &= mask - 7;
    *(u16 *)*pf |= 1;
}

