/* 27 functions from 0x02020C58 to 0x02021C48 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210d220(void);
s32 func_02021284(void);
extern u16 func_02021618;
extern s32 func_02021428(u16 *);
extern void (*ARM9_CTOR_START[])(void);
extern u32 *data_02162730;
extern u32 func_021155c8(u32);
extern void func_0210d85c(s32);
extern u32 func_021154a4(u32);
extern void func_021154f4(u32, u32);
extern void func_021156bc(s32, u32);
extern void func_021160c0(void *, s32, s32);
extern void func_0210d114(u32, void *);
extern void func_0211568c(s32, u32);
extern u8 data_02145fc8[];
extern void *data_02155c80;
extern s32 data_02160050;
extern u32 data_02160054[];
extern u8 data_02160064[];
extern u32 *data_02160078;
extern u32 *data_021626f0;
extern void func_020213c4(void *, s32, u32);
extern void func_0210d9e4(u8 *);
extern void func_0210da14(void *);
void func_020211f0(void *arg0, s32 arg1);
void func_0202147c(s32 arg0);
void func_02021514(void);
void func_0202119c(void) {
}

void func_020211a0(void) {
    void (**p)(void) = ARM9_CTOR_START;
    while (p != 0 && *p != 0) {
        (*p)();
        p++;
    }
}

u32 func_020211d0(void) {
    return func_021155c8(*data_02162730) >> 10;
}

void func_020211f0(void *arg0, s32 arg1) {
    if (data_02162730[4] == 0) {
        if (func_020211d0() <= 0x80) {
            data_02162730[4] = func_021154a4(data_02162730[0]);
        }
    } else {
        if (func_020211d0() < 0x1e) {
            func_0210d85c(0);
            func_021154f4(data_02162730[0], data_02162730[4]);
        }
    }
    func_021156bc(arg1, data_02162730[0]);
    func_021160c0(arg0, 0, arg1);
}

s32 func_02021284(void) {
    s32 res;
    func_0210d114(0x40000, data_02145fc8);
    data_02155c80 = (void *)func_020211f0;
    func_0211568c(0, data_02162730[0]);
    res = func_021154a4(data_02162730[0]);
    data_02160050 = res;
    data_02162730[4] = 0;
    return res;
}

s32 func_020212ec(void) {
    func_0210d220();
    return func_02021284();
}

s32 func_020212fc(void) {
    if (data_02160050 <= 0) {
        return 0;
    }
    func_021154f4(data_02162730[0], data_02160050);
    data_02162730[4] = 0;
    return 1;
}

void func_02021340(s32 arg0) {
    (void)arg0;
}

s32 func_02021344(u32 arg0) {
    s32 ret = func_0210723c();
    if (ret == 0) {
        func_02021340((s32)arg0);
    }
    return ret;
}

u32 func_02021368(u8 *data, u32 len) {
    u32 hash = 0x12345678;
    u32 i;
    for (i = 0; i < len; i++) {
        u32 v = hash + data[i];
        u32 shift = (v + i) & 0x1f;
        hash += (v << shift) | (v >> (0x20 - shift));
    }
    return hash != 0 ? hash : 0xaaaaaaaa;
}

void func_020213c4(void *ptr, s32 len, u32 key) {
    u8 *p = (u8 *)ptr;
    u8 *end = p + len;
    u8 *kb = (u8 *)&key;
    u8 k = kb[0] + kb[1] + kb[2] + kb[3];
    if (k == 0) {
        k = 0xaa;
    }
    if (p >= end) {
        return;
    }
    do {
        *p = *p ^ k;
        p++;
    } while (p < end);
}

extern s32 func_0210723c(void);
extern void func_0210d9e4(u8 *);
s32 func_02021428(u16 *arg) {
    data_02160054[4] = (u32)arg;
    data_02160054[5] = 1000;
    func_0210d9e4(data_02160064);
    data_02160054[3] = 1;
    data_02160054[1] = 0;
    {
        u32 **pp = &data_021626f0;
        u32 *p = *pp;
        if (p != NULL) {
            u32 v = *p;
            data_02160054[0] = v;
            *p = 0;
            return (s32)v;
        }
        return (s32)pp;
    }
}

void func_0202147c(s32 arg0) {
    func_0210da14(data_02160064);
    data_02160054[4] = 0;
    data_02160054[3] = arg0;
    switch (arg0) {
    case 4:
        func_02021340(0);
        break;
    case 5:
        func_02021340(1);
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
    default:
        break;
    }
    if (data_02160054[2] != 0) {
        data_02160054[2] = 0;
    }
    if (data_021626f0 != NULL) {
        *data_021626f0 = data_02160054[0];
        data_02160054[0] = 0;
    }
}

void func_02021514(void) {
    u32 *p = data_02160078;
    func_020213c4(p + 4, 0x1688, p[2]);
}

void func_0202153c(s32 arg0) {
    if (data_02160054[2] != 0) {
        data_02160054[2] = 0;
        func_02021514();
    }
    func_0202147c(arg0);
}

s32 func_02021570(u32 *arg0, u32 arg1, u32 arg2) {
    if (arg0[0] != 0x6d63) {
        return 0;
    }
    if (arg0[1] != 0) {
        return 0;
    }
    if (((u16 *)arg0)[6] != arg1) {
        return 0;
    }
    if (((u16 *)arg0)[7] != arg2) {
        return 0;
    }
    return 1;
}

s32 func_02021a28(void) {
    return func_02021428(&func_02021618);
}

extern u16 func_020217b4;
s32 func_02021a3c(void) {
    return func_02021428(&func_020217b4);
}

extern u32 data_02160054[];
u32 func_02021a50(void) {
    return data_02160054[3];
}

extern void func_02021bd0(s32);
extern void func_0210d85c(s32);
extern u32 func_021154a4(u32);
extern void func_021154f4(u32, u32);
extern void func_021156bc(s32, u32);
extern void func_021160c0(void *, s32, s32);
extern void func_0210d114(u32, void *);
extern void func_0211568c(s32, u32);
extern u8 data_02145fc8[];
extern void *data_02155c80;
extern s32 data_02160050;
void func_02021c28(s32 arg0) {
    s32 offset = arg0 * 0x4800;
    func_02021bd0(offset);
    func_02021bd0(offset + 0x2400);
}

