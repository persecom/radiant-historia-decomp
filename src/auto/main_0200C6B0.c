/* 47 functions from 0x0200C6B0 to 0x0200D63C (main), found by ds-decomp. */
#include "common.h"

extern s32 func_0200c248(void *, void *, u32);
extern s32 func_0200cb40(void *, s32, s32);
extern void func_0200b888(void *);
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

s32 func_0200cb08(void *arg0) {
    void *arc = *(void **)((u8 *)arg0 + 0x8);
    void *vtbl = *(void **)((u8 *)arc + 0x20);
    u32 pos = *(u32 *)((u8 *)arg0 + 0x2c);
    u32 len = *(u32 *)((u8 *)arg0 + 0x38);
    void *dst = *(void **)((u8 *)arg0 + 0x30);
    *(u32 *)((u8 *)arg0 + 0x2c) = pos + len;
    return (*(s32 (**)(void *, void *, u32, u32))((u8 *)vtbl + 0x24))(arc, dst, pos, len);
}

s32 func_0200cb38(void) {
    return 0;
}

s32 func_0200cc10(void *arg0, void *arg1, void *arg2, u32 *arg3) {
    void *p = *(void **)((u8 *)arg1 + 0x4);
    u32 req = *arg3;
    u32 rem = *(u32 *)((u8 *)p + 0x8) - *(u32 *)((u8 *)p + 0xc);
    if (req > rem) {
        *arg3 = rem;
    }
    *(u32 *)((u8 *)arg1 + 0x34) = req;
    *(void **)((u8 *)arg1 + 0x30) = arg2;
    *(u32 *)((u8 *)arg1 + 0x38) = *arg3;
    return func_0200cb40(arg1, 0, 0);
}

s32 func_0200cc54(void *arg0, void *arg1, void *arg2, u32 *arg3) {
    void *p = *(void **)((u8 *)arg1 + 0x4);
    u32 req = *arg3;
    u32 rem = *(u32 *)((u8 *)p + 0x8) - *(u32 *)((u8 *)p + 0xc);
    if (req > rem) {
        *arg3 = rem;
    }
    *(u32 *)((u8 *)arg1 + 0x34) = req;
    *(void **)((u8 *)arg1 + 0x30) = arg2;
    *(u32 *)((u8 *)arg1 + 0x38) = *arg3;
    return func_0200cb40(arg1, 1, 0);
}

s32 func_0200cc98(void *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    s32 res;
    *(void **)(arg1 + 0x8) = arg0;
    *(void **)(arg1 + 0x30) = arg0;
    *(u16 *)(arg1 + 0x34) = (u16)arg2;
    *(u16 *)(arg1 + 0x36) = (u16)(arg2 >> 16);
    *(u32 *)(arg1 + 0x38) = arg3;
    res = func_0200cb40(arg1, 2, 1);
    if (res == 0) {
        *(u32 *)(arg1 + 0xc) = (*(u32 *)(arg1 + 0xc) | 0x20) & ~0x10;
        *(void **)(arg1 + 0x4) = arg1 + 0x20;
        *(void **)(arg1 + 0x8) = arg0;
    }
    return res;
}

s32 func_0200ce18(void *arg0, u16 arg1, void *arg2, u32 *arg3, s32 arg4) {
    u8 file[0x48];
    u32 sp0[3];
    s32 res;

    func_0200b888(file);
    *(void **)(file + 0x8) = arg0;
    *(void **)(file + 0x30) = arg0;
    *(u16 *)(file + 0x34) = arg1;
    *(u16 *)(file + 0x36) = 0;
    *(u32 *)(file + 0x38) = 0;
    *(void **)(file + 0x3c) = arg2;
    *(s32 *)(file + 0x40) = arg4;
    *(void **)(file + 0x44) = sp0;
    res = func_0200cb40(file, 4, 1);
    if (res == 0) {
        if (arg4 != 0) {
            *arg3 = *(u16 *)((u8 *)sp0 + 4);
        } else {
            *arg3 = sp0[1];
        }
    }
    return res;
}

s32 func_0200cea4(void *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 *arg4) {
    s32 res;
    *(u16 *)(arg1 + 0x38) = 0;
    *(u16 *)(arg1 + 0x3a) = 0;
    *(u32 *)(arg1 + 0x30) = arg3;
    *(u32 *)(arg1 + 0x34) = *arg4;
    res = func_0200cb40(arg1, 5, 1);
    if (res == 0) {
        *arg4 = *(u32 *)(arg1 + 0x34);
    }
    return res;
}

s32 func_0200cee8(void *arg0, u8 *arg1, u32 arg2) {
    s32 res;
    *(u32 *)(arg1 + 0x34) = arg2;
    *(void **)(arg1 + 0x30) = arg0;
    res = func_0200cb40(arg1, 6, 1);
    if (res == 0) {
        *(u32 *)(arg1 + 0xc) = (*(u32 *)(arg1 + 0xc) | 0x10) & ~0x20;
        *(void **)(arg1 + 4) = arg1 + 0x20;
        *(void **)(arg1 + 8) = arg0;
    }
    return res;
}

s32 func_0200cf30(void *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 *arg4) {
    s32 res;
    *(u32 *)(arg1 + 0x30) = arg2;
    *(u32 *)(arg1 + 0x34) = arg3;
    *(u32 *)(arg1 + 0x38) = *arg4;
    res = func_0200cb40(arg1, 7, 1);
    if (res == 0) {
        *(u32 *)(arg1 + 0xc) = (*(u32 *)(arg1 + 0xc) | 0x10) & ~0x20;
        *(void **)(arg1 + 4) = arg1 + 0x20;
        *(void **)(arg1 + 8) = arg0;
    }
    return res;
}

s32 func_0200cf84(void *arg0, u8 *arg1) {
    s32 res = func_0200cb40(arg1, 8, 1);
    *(void **)(arg1 + 4) = NULL;
    *(u32 *)(arg1 + 0xc) &= ~0x30;
    return res;
}

s32 func_0200cfb4(void *arg0) {
    u32 buf[0x12];
    func_0200b888(buf);
    buf[2] = (u32)arg0;
    return func_0200cb40(buf, 9, 0);
}

void func_0200d1a8(u32 arg0, u32 *ptr) {
    *ptr = 0;
}

extern const u8 data_0213e964[];
extern s32 func_0200d140(void *, void *, void *);
BOOL func_0200d460(u8 *arg0, void *arg1) {
    BOOL ret = FALSE;
    u8 *arc = *(u8 **)(arg0 + 8);
    if (*(const void **)(arc + 0x24) == data_0213e964) {
        if (func_0200d140(arc, arg0, arg1) == 0) {
            ret = TRUE;
        }
    }
    return ret;
}

extern s32 func_0200d15c(void *, void *, void *);
BOOL func_0200d4a0(u8 *arg0, void *arg1) {
    BOOL ret = FALSE;
    u8 *arc = *(u8 **)(arg0 + 8);
    if (*(const void **)(arc + 0x24) == data_0213e964) {
        if (func_0200d15c(arc, arg0, arg1) == 0) {
            ret = TRUE;
        }
    }
    return ret;
}

u8 *func_0200d500(u8 *arg0, s32 arg1) {
    return *(u8 **)(*(u8 **)(arg0 + 0x20)) + arg1;
}

s32 func_0200d510(u8 *arg0) {
    return (*(s32 *)(arg0 + 0x14) & 4) ? 1 : 0;
}

u32 func_0200d524(u8 *arg0) {
    return *(u32 *)(arg0 + 0x24);
}

s32 func_0200d52c(void) {
    return 0;
}

s32 func_0200d624(void) {
    return 4;
}

s32 func_0200d62c(void) {
    return 4;
}

s32 func_0200d634(void) {
    return 0;
}

