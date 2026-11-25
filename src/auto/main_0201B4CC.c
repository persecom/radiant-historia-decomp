/* 1 function from 0x0201B4CC to 0x0201C654 (main), found by ds-decomp. */
#include "common.h"

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
