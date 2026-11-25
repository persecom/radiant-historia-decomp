/* 27 functions from 0x02020C58 to 0x02021C48 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;
typedef struct { u8 value:1; u8 rest:7; } SaveFlag_02021ac4;

extern void func_021072d0(u32, u32, u32);
extern u32 func_02107294(void);
extern void func_02107334(u32, u32, u32);
extern void func_020106a0(void);
extern u32 func_0200f984(void);
extern void func_0210d220(void);
s32 func_02021284(void);
void func_02021618(void);

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
void func_02021bd0(s32);
double func_02020c58(double a, double b) { return a / b; }

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
    u32 hash = 0x23456789;
    u32 i = 0;
    if (i < len) {
        for (; i < len; i++) {
            u32 v = *data++ + hash;
            u32 shift = (i + v) & 0x1f;
            hash += (v << shift) | (v >> (0x20 - shift));
        }
    }
    if (hash == 0) {
        hash = 0xaaaaaaaa;
    }
    return hash;
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
#pragma optimization_level 3
