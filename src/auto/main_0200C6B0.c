/* 47 functions from 0x0200C6B0 to 0x0200D63C (main), found by ds-decomp. */
#include "common.h"

extern s32 func_0200c248(void *, void *, u32);
extern s32 func_0200cb40(void *, s32, s32);
s32 func_0200ca2c(void *arg0) {
    void *r3 = *(void **)((u8 *)arg0 + 0x8);
    u32 r4 = *(u32 *)((u8 *)arg0 + 0x34);
    void *r1 = *(void **)((u8 *)r3 + 0x20);
    u32 r2 = r4 * 8;
    struct { u32 a; u32 b; } sp8;
    struct { void *a; u32 b; } sp0;
    s32 res;
    if (r2 >= *(u32 *)((u8 *)r1 + 0x8)) {
        return 0xb;
    }
    sp0.a = r3;
    sp0.b = *(u32 *)((u8 *)r1 + 0x4) + r2;
    res = func_0200c248(&sp0, &sp8, 8);
    if (res == 0) {
        *(u32 *)((u8 *)arg0 + 0x30) = sp8.a;
        *(u32 *)((u8 *)arg0 + 0x34) = sp8.b;
        *(u32 *)((u8 *)arg0 + 0x38) = r4;
        res = func_0200cb40(arg0, 7, 1);
    }
    return res;
}

s32 func_0200cab4(void *arg0) {
    u32 r3 = *(u32 *)((u8 *)arg0 + 0x30);
    u32 r2 = *(u32 *)((u8 *)arg0 + 0x34);
    u32 r1 = *(u32 *)((u8 *)arg0 + 0x38);
    *(u32 *)((u8 *)arg0 + 0x24) = r3;
    *(u32 *)((u8 *)arg0 + 0x2c) = r3;
    *(u32 *)((u8 *)arg0 + 0x28) = r2;
    *(u32 *)((u8 *)arg0 + 0x20) = r1;
    return 0;
}

s32 func_0200cad8(void *arg0) {
    void *arc = *(void **)((u8 *)arg0 + 0x8);
    void *vtbl = *(void **)((u8 *)arc + 0x20);
    u32 pos = *(u32 *)((u8 *)arg0 + 0x2c);
    u32 len = *(u32 *)((u8 *)arg0 + 0x38);
    void *dst = *(void **)((u8 *)arg0 + 0x30);
    *(u32 *)((u8 *)arg0 + 0x2c) = pos + len;
    return (*(s32 (**)(void *, void *, u32, u32))((u8 *)vtbl + 0x20))(arc, dst, pos, len);
}

s32 func_0200cb38(void) {
    return 0;
}

s32 func_0200d52c(void) {
    return 0;
}

s32 func_0200d634(void) {
    return 0;
}

