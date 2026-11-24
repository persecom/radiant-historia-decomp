/* 24 functions from 0x0211CDC8 to 0x0211DDAC (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021701fc[];
extern u8 data_0217032c[];
extern u8 data_02170248[];
extern u8 data_021702fc[];
extern u8 data_021702b8[];
extern void func_02001194(u8 *, u8 *);
extern void func_02001508(u8 *, u8 *, u8 *);
extern void func_02001160(u8 *, u8 *, u32, u32, u32);
extern void func_0211d814(void);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02004588(void);
extern void func_020045bc(void *, u32, u32);
extern void func_0200462c(void);
extern void func_021205ec(u32, void *, s32);
extern s32 func_0211d144(void *, void *);
extern s32 func_0211d3a0(void *, void *);
void func_0211d238(u8 *);
void func_0211d49c(u8 *arg0);
void func_0211cdc8(u8 *arg0, BOOL arg1) {
    u32 sz;

    if (arg1) {
        func_0200439c();
    }
    sz = (u32)*(u16 *)(arg0 + 0xc) << 3;
    if (sz != 0) {
        func_020043f8(arg0 + *(u32 *)(arg0 + 0x14), (*(u32 *)(arg0 + 8) & 0xffff) << 3, sz);
        *(u16 *)(arg0 + 0x10) |= 1;
    }
    {
        u32 ofs;
        u32 sz2 = (u32)*(u16 *)(arg0 + 0x1c) << 3;
        u32 addr;
        if (sz2 != 0) {
            addr = (*(u32 *)(arg0 + 0x18) & 0xffff) << 3;
            ofs = *(u32 *)(arg0 + 0x28);
            func_020043f8(arg0 + *(u32 *)(arg0 + 0x24), addr, sz2);
            func_020043f8(arg0 + ofs, 0x20000 + ((addr & 0x1ffff) >> 1) + ((addr & 0x40000) >> 2), sz2 >> 1);
            *(u16 *)(arg0 + 0x20) |= 1;
        }
    }
    if (arg1) {
        func_02004544();
    }
}

void func_0211ce80(u8 *arg0, u32 *arg1, u32 *arg2) {
    if (arg1 != NULL) {
        u32 key = *(u32 *)(arg0 + 8);
        *(u16 *)(arg0 + 0x10) &= ~1;
        *arg1 = key;
        *(u32 *)(arg0 + 8) = 0;
    }
    if (arg2 != NULL) {
        u32 key = *(u32 *)(arg0 + 0x18);
        *(u16 *)(arg0 + 0x20) &= ~1;
        *arg2 = key;
        *(u32 *)(arg0 + 0x18) = 0;
    }
}

u32 func_0211ced0(u8 *arg0) {
    if (arg0 != NULL) {
        return (u32)*(u16 *)(arg0 + 0x30) << 3;
    }
    return 0;
}

void func_0211cee4(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0x2c) = arg1;
}

void func_0211ceec(u8 *arg0, BOOL arg1) {
    u32 a, b;
    if (arg1) {
        func_02004588();
        a = *(u32 *)(arg0 + 0x2c);
        b = *(u16 *)(arg0 + 0x30);
        a = (a & 0xffff) << 3;
        b = b << 3;
        func_020045bc(arg0 + *(u32 *)(arg0 + 0x38), a, b);
    }
    *(u16 *)(arg0 + 0x32) |= 1;
    if (arg1) {
        func_0200462c();
    }
}

u32 func_0211cf3c(u8 *arg0) {
    u16 flag = *(u16 *)(arg0 + 0x32);
    u32 key = *(u32 *)(arg0 + 0x2c);
    flag &= ~1;
    *(u16 *)(arg0 + 0x32) = flag;
    *(u32 *)(arg0 + 0x2c) = 0;
    return key;
}

void func_0211d08c(u8 *arg0, u8 *arg1) {
    u16 ofs = *(u16 *)arg1;
    u8 *base = arg0 + ofs;
    u32 n = *(u8 *)(arg1 + 2);
    u32 i;
    if (n <= 0) goto done;
    for (i = 0; i < n; i++) {
        u8 v = *(u8 *)(base + i);
        u8 *p = NULL;
        if (arg0 != NULL && arg0 + 4 != NULL && v < *(u8 *)(arg0 + 5)) {
            u16 idx = *(u16 *)(arg0 + 0xa);
            u8 *b2 = arg0 + 4 + idx;
            p = *(u16 *)b2 * v + b2 + 4;
        }
        if (p != NULL) {
            u8 *q = arg0 + *(u32 *)p;
            *(u32 *)(q + 0x14) &= 0xc00f0000;
            *(u32 *)(q + 0x24) = 0x1000;
            *(u32 *)(q + 0x28) = 0x1000;
        }
    }
done:
    *(u8 *)(arg1 + 3) &= ~1;
}

void func_0211d238(u8 *arg0) {
    u32 i;
    u8 *p, *name, *q;
    if (arg0 != NULL && *(u32 *)(arg0 + 8) != 0) {
        p = arg0 + *(u32 *)(arg0 + 8);
    } else {
        p = NULL;
    }
    q = p + *(u16 *)p;
    if (*(u8 *)(q + 1) <= 0) return;
    for (i = 0; i < *(u8 *)(q + 1); i++) {
        name = NULL;
        if (i < *(u8 *)(q + 1)) {
            u8 *base = q + *(u16 *)(q + 6);
            name = *(u16 *)base * i + (base + 4);
        }
        if (*(u8 *)(name + 3) & 1) {
            func_0211d08c(p, name);
        }
    }
}

void func_0211d49c(u8 *arg0) {
    u8 *mat = (arg0 != NULL && *(u32 *)(arg0 + 8) != 0) ? (arg0 + *(u32 *)(arg0 + 8)) : NULL;
    u8 *dict = mat + *(u16 *)(mat + 2);
    u32 i;
    for (i = 0; i < *(u8 *)(dict + 1); i++) {
        u8 *entry = NULL;
        if (dict != NULL && i < *(u8 *)(dict + 1)) {
            u16 ofs = *(u16 *)(dict + 6);
            u16 unit = *(u16 *)(dict + ofs);
            entry = (dict + ofs + 4) + unit * i;
        }
        if (entry[3] & 1) {
            entry[3] &= ~1;
        }
    }
}

s32 func_0211d520(u8 *arg0, void *arg1) {
    s32 ret = 1;
    u32 i;
    for (i = 0; i < *(u8 *)(arg0 + 9); i++) {
        u8 *mdl = NULL;
        if (arg0 != NULL) {
            u8 *dict = arg0 + 8;
            u32 *entry = NULL;
            if (dict != NULL && i < *(u8 *)(dict + 1)) {
                u16 ofs = *(u16 *)(dict + 6);
                u16 unit = *(u16 *)(dict + ofs);
                entry = (u32 *)((dict + ofs + 4) + unit * i);
            }
            if (entry != NULL) {
                mdl = arg0 + *entry;
            }
        }
        ret &= func_0211d144(mdl, arg1);
        ret &= func_0211d3a0(mdl, arg1);
    }
    return ret;
}

void func_0211d5d0(u8 *arg0) {
    u32 i;
    for (i = 0; i < *(u8 *)(arg0 + 9); i++) {
        u8 *mdl = NULL;
        if (arg0 != NULL) {
            u8 *dict = arg0 + 8;
            u32 *entry = NULL;
            if (dict != NULL && i < *(u8 *)(dict + 1)) {
                u16 ofs = *(u16 *)(dict + 6);
                u16 unit = *(u16 *)(dict + ofs);
                entry = (u32 *)((dict + ofs + 4) + unit * i);
            }
            if (entry != NULL) {
                mdl = arg0 + *entry;
            }
        }
        func_0211d238(mdl);
        func_0211d49c(mdl);
    }
}

void func_0211d7a4(void) {
    func_021205ec(*(u32 *)data_021701fc, data_021701fc + 4, 0x3e);
    *(u32 *)(data_021701fc + 0xfc) &= ~1;
    *(u32 *)(data_021701fc + 0xfc) &= ~2;
}

void *func_0211d878(void) {
    u8 *p = data_021701fc;
    if ((*(u32 *)(p + 0xfc) & 0x80) == 0) {
        func_0211d814();
        *(u32 *)(p + 0xfc) |= 0x80;
    }
    return data_0217032c;
}

extern u8 data_0217035c[];
void *func_0211d8ac(void) {
    u8 *p = data_021701fc;
    if ((*(u32 *)(p + 0xfc) & 0x80) == 0) {
        func_0211d814();
        *(u32 *)(p + 0xfc) |= 0x80;
    }
    return data_0217035c;
}

extern u8 data_02170248[];
extern u8 data_021702fc[];
extern void func_02001194(u8 *, u8 *);
extern u8 data_021702b8[];
extern void func_02001508(u8 *, u8 *, u8 *);
extern void func_02001160(u8 *, u8 *, u32, u32, u32);
s32 func_0211d8e0(u32 *arg0, u8 *arg1, u32 arg2) {
    s32 ret = 0;
    while (arg1 != NULL) {
        if (arg2 < *(u8 *)(arg1 + 0x19)) {
            u16 val = *(u16 *)(arg1 + 0x1A + arg2 * 2);
            if ((val & 0x300) == 0x100) {
                void (*fn)(u32 *, u8 *, u32) = *(void (**)(u32 *, u8 *, u32))(arg1 + 0xC);
                if (fn != NULL) {
                    fn(arg0, arg1, val & 0xFF);
                    ret = 1;
                }
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
    return ret;
}

void func_0211d94c(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        arg0[0] += arg2;
        arg0[1] += arg2;
        arg0[2] += arg2;
    } else {
        arg0[0] += (arg1[0] * arg2) >> 12;
        arg0[1] += (arg1[1] * arg2) >> 12;
        arg0[2] += (arg1[2] * arg2) >> 12;
    }
}

