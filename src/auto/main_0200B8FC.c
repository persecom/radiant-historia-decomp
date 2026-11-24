/* 28 functions from 0x0200B8FC to 0x0200C6B0 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    void *arc;
    u32 file_id;
} FSFileID;

extern u32 func_0200bab8(u8 *);
extern s32 func_0200ba20(void *, void *, s32);
extern void *func_0200b2ac(const char *, u32 *, u8 *);
extern void func_0200b888(u8 *);
extern s32 func_0200afb4(u8 *, s32, s32);
extern s32 func_0200d460(u8 *, u32 *);
s32 func_0200b8fc(u32 *arg0, const char *arg1) {
    s32 ret = 0;
    u8 path[0x118];
    u8 file[0x48];
    u32 sp4[4];
    u32 sp0 = 0;
    void *arc;

    arc = func_0200b2ac(arg1, &sp0, path);
    if (arc != NULL) {
        func_0200b888(file);
        *(void **)(file + 8) = arc;
        *(void **)(file + 0x10) = sp4;
        sp4[0] = sp0;
        sp4[1] = (u32)path;
        sp4[3] = 0;
        if (func_0200afb4(file, 4, 1) != 0) {
            arg0[0] = (u32)arc;
            arg0[1] = sp4[2];
            ret = 1;
        }
    }
    return ret;
}

s32 func_0200b988(u8 *arg0, void *arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 sp0[4];
    *(void **)(arg0 + 8) = arg1;
    *(void **)(arg0 + 0x10) = sp0;
    sp0[0] = arg4;
    sp0[1] = arg2;
    sp0[2] = arg3;
    sp0[3] = 0;
    return func_0200afb4(arg0, 7, 1);
}

s32 func_0200b9c8(u8 *arg0, FSFileID arg1) {
    s32 ret = 0;
    if (arg1.arc != NULL) {
        u32 sp0[2];
        *(void **)(arg0 + 8) = arg1.arc;
        *(void **)(arg0 + 0x10) = sp0;
        sp0[0] = arg1.file_id;
        sp0[1] = 0;
        ret = func_0200afb4(arg0, 6, 1);
    }
    return ret;
}

s32 func_0200baa4(u8 *arg0) {
    return func_0200afb4(arg0, 8, 1);
}

s32 func_0200bc08(void *arg0, void *arg1) {
    return func_0200ba20(arg0, arg1, 1);
}

u32 func_0200bc18(u8 *arg0) {
    return func_0200bab8(arg0);
}

extern void func_0200c0a8(void);
s32 func_0200c198(void) {
    func_0200c0a8();
    return 1;
}

