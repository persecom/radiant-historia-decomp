/* 19 functions from 0x02091CD8 to 0x02092CA0 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0214874c[4];
extern s32 func_021093f0(void *);
extern void func_02092194(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_02012590(const char *, const char *, ...);
void func_02092190(void) {
}

const char *func_02092a40(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    return r4;
}
