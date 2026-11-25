/* 3 functions from 0x02019C20 to 0x0201ABC4 (main), found by ds-decomp. */
#include "common.h"

extern u64 func_0201e1f8(u32, u32, s32 *);
extern double _dmul(double, double);
extern double _dadd(double, double);
extern double _dsub(double, double);
extern int _dgr(double, double);
extern double func_0201e014(double);
extern double func_02020c58(double, double);
extern double func_0201f800(u32);
extern double func_02020058(double);
extern u32 data_02145c2c;
extern u32 data_02160034;
extern void func_0201e2b8(u64, s32);
void func_02019c20(u32 arg0, u32 arg1, s32 arg2) {
    s32 local;
    u64 tmp = func_0201e1f8(arg0, arg1, &local);
    local += arg2;
    func_0201e2b8(tmp, local);
}

#pragma opt_propagation off
