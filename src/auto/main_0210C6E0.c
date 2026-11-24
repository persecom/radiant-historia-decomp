/* 46 functions from 0x0210C6E0 to 0x0210D6D8 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210cce4(s32);
extern u32 func_0210c924(void);
extern void func_0210c970(u32);
extern void func_0210c9cc(void);
void func_0210ca6c(void) {
    u32 r4 = func_0210c924();
    func_0210c9cc();
    func_0210c970(r4);
}

const char *func_0210cd20(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        r4 = arg1;
    }
    return r4;
}

void func_0210cd50(void) {
    func_0210cce4(0);
}

extern u8 data_02155c5c[4];
extern s32 func_021093f0(void *);
extern void func_02012590(const char *, const char *, ...);
s32 func_0210cdfc(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    func_02012590(r4, (const char *)data_02155c5c, &arg1);
    return arg1;
}

extern void func_0210cd90(s32);
void func_0210ce5c(void) {
    func_0210cd90(0);
}

