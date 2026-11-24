/* 19 functions from 0x02091CD8 to 0x02092CA0 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0214874c[4];
extern s32 func_021093f0(void *);
extern void func_02092194(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_02012590(const char *, const char *, ...);
void func_02092190(void) {
}

void func_020922bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7) {
    func_02092194(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, 5, 5);
}

s32 func_02092994(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    func_02012590(r4, (const char *)data_0214874c, &arg1);
    return arg1;
}

const char *func_020929f4(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (arg1 == 1 && !func_021093f0(arg0)) {
        return NULL;
    }
    return *r4 == '\0' ? NULL : r4;
}

extern u8 data_02148750[4];
extern s32 func_020123f0(const char *, const char *);
extern s32 func_02109444(void *);
BOOL func_02092a28(const char *arg0, const char *arg1) {
    return func_020123f0(arg0, arg1) == 0;
}

const char *func_02092a40(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        r4 = arg1;
    }
    return r4;
}

s32 func_02092a70(const char *arg0, s32 arg1) {
    if (*arg0 == '\0') {
        return arg1;
    }
    func_02012590(arg0, (const char *)data_02148750, &arg1);
    return arg1;
}

s32 func_02092ab0(u8 *arg0, s32 arg1) {
    s32 val = func_02092994(arg0, 0);
    while (val != arg1) {
        if (func_02109444(arg0)) {
            val = func_02092994(arg0, 0);
        } else {
            return -1;
        }
    }
    return val;
}

