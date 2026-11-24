/* 5 functions from 0x020139A4 to 0x02014994 (main), found by ds-decomp. */
#include "common.h"

void func_02014880(u8 *arg0, s32 arg1) {
    s32 up, one = 1;
    u8 *digits;
    u8 *dp;
    u8 *p;
    u8 d, dig;
    s16 e;

    if (arg1 < 0) {
    L_reset:
        arg0[4] = one;
        arg0[5] = '0';
        *(s16 *)(arg0 + 2) = 0;
        return;
    }
    if (arg1 >= arg0[4]) {
        return;
    }
    digits = arg0 + 5;
    dp = digits + arg1 + 1;
    d = *--dp - '0';
    if (d == 5) {
        p = digits + arg0[4];
        do {
            p--;
        } while (p > dp && *p == '0');
        if (p == dp) {
            up = dp[-1] & 1;
        } else {
            up = one;
        }
    } else {
        up = d > 5 ? one : 0;
    }
    if (arg1 != 0) {
        do {
            dig = (*--dp - '0') + up;
            up = dig > 9 ? one : 0;
            if (up == 0 && dig != 0) {
                *dp = dig + '0';
                break;
            }
            arg1--;
        } while (arg1 != 0);
    }
    if (up != 0) {
        e = *(s16 *)(arg0 + 2) + 1;
        arg0[4] = one;
        arg0[5] = '1';
        *(s16 *)(arg0 + 2) = e;
        return;
    }
    if (arg1 == 0) {
        goto L_reset;
    }
    arg0[4] = arg1;
}
