/* 1 function from 0x0201B4CC to 0x0201C654 (main), found by ds-decomp. */
#include "common.h"
#define POW_HI(x) (((s32 *)&(x))[1])
#define POW_LO(x) (((u32 *)&(x))[0])
extern double data_0213ec60[], data_0213ec70[], data_0213ec50[];
extern float data_02145c2c;
extern double func_02019c20(double, s32);

extern s32 data_02160034;
extern double func_02020058(double);
extern double func_0201e014(double);
double func_0201b4cc(double x, double y) {
    if (y == 0.0) {
        return 1.0;
    }
    if (y == 1.0) {
        return x;
    }
    if (y == -1.0) {
        return 1.0 / x;
    }
    if (y == 2.0) {
        return x * x;
    }
    if (y == 0.5 && x >= 0.0) {
        return func_02020058(x);
    }
    return x + y;
}
