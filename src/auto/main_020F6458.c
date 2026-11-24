/* 6 functions from 0x020F6458 to 0x020F6990 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215204c[4];
extern s32 func_021093f0(void *);
extern void func_02012590(const char *, const char *, ...);
s32 func_020f685c(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    func_02012590(r4, (const char *)data_0215204c, &arg1);
    return arg1;
}
