/* 6 functions from 0x020F6458 to 0x020F6990 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02160c74[2];
extern u8 *data_02160200;
extern u8 *data_021600ac;
extern u8 *data_021600a4;
extern char *func_0210cd50(void *);
extern s32 func_02018830(char *);
extern s32 func_02109754(u32);
extern void func_020f4174(void);
extern void func_0203fcc0(u32);
extern void func_020a994c(void *);
extern void func_0210d6f4(void *);
extern void func_0210d828(void);
extern void func_0210d648(s32, s32);
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

const char *func_020f68bc(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        r4 = arg1;
    }
    return r4;
}

extern void *data_02160c74[2];
extern u8 *data_02160200;
extern u8 *data_021600ac;
extern u8 *data_021600a4;
extern char *func_0210cd50(void *);
extern s32 func_02018830(char *);
extern s32 func_02109754(u32);
extern void func_020f4174(void);
extern void func_0203fcc0(u32);
extern void func_020a994c(void *);
extern void func_0210d6f4(void *);
extern void func_0210d828(void);
extern void func_0210d648(s32, s32);
s32 func_020f68ec(void) {
    void **tbl = data_02160c74;
    u8 *base = (u8 *)tbl[0];
    char *s;
    s32 ret = 0;
    s8 c;
    s = func_0210cd50(tbl);
    c = *s;
    if (c >= '0' && c <= '9') {
        return func_02018830(s);
    }
    switch (c) {
    case 'a':
        ret = *(s32 *)(base + func_02018830(s + 1) * 4 + 4);
        break;
    case 'p':
        ret = *(u8 *)(data_02160200 + 0x16c);
        break;
    case 't':
        if (data_021600ac != NULL) {
            ret = *(u16 *)(data_021600ac + 0x396);
        }
        break;
    default:
        return 0;
    }
    return ret;
}

