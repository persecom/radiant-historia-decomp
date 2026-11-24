/* 11 functions from 0x0201E034 to 0x0201EDB0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02019c4c(void);
extern u64 func_0201edb0(u64, u64);
double func_0201e1f8(double x, s32 *exp) {
    union {
        double d;
        struct { u32 lo, hi; } w;
    } u;
    u.d = x;
    *exp = 0;
    if ((u.w.hi & 0x7fffffff) >= 0x7ff00000) {
        return x;
    }
    if (((u.w.hi & 0x7fffffff) | u.w.lo) == 0) {
        return x;
    }
    if ((u.w.hi & 0x7fffffff) < 0x100000) {
        u.d = func_0201edb0(u.d, 0x1p54);
        *exp = -54;
    }
    *exp += (s32)((u.w.hi & 0x7fffffff) >> 20) - 1022;
    u.w.hi = (u.w.hi & 0x800fffff) | 0x3fe00000;
    return u.d;
}

void func_0201e690(void) {
    func_02019c4c();
}

extern void func_0201a460(void);
void func_0201e69c(void) {
    func_0201a460();
}

extern void func_0201abc4(void);
void func_0201e6a8(void) {
    func_0201abc4();
}

extern void func_0201b2f4(void);
void func_0201e6b4(void) {
    func_0201b2f4();
}

extern void func_0201b4cc(void);
void func_0201e6c0(void) {
    func_0201b4cc();
}

