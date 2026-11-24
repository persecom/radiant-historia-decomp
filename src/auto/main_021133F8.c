/* 51 functions from 0x021133F8 to 0x021143C0 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 a[5];
} UnkStruct20;

typedef struct {
    u16 a[5][2];
} UnkStruct20_u16;

extern UnkStruct20_u16 data_02144d20;

extern u8 data_02155dac[];
extern u8 *data_0216bf88;
extern s32 data_02155c3c;
extern UnkStruct20 data_02155d30;
extern UnkStruct20 data_02155d44;
extern void func_021140b8(void *, s32);
extern void *func_021092d8(void *);
extern u8 *func_0210c594(s32, s32);
extern s32 func_020f685c(void *, s32);
extern void func_021167f0(void *, void *);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern s32 func_020a94b8(s32);

extern void func_02114c80(void);
extern void func_02112f88(void);
void func_0211355c(void) {
    void *file = func_021092d8(data_02155dac);
    if (file != NULL) {
        do {
            u8 *entry = func_0210c594(0x2c, data_02155c3c);
            *(u16 *)(entry + 0) = func_020f685c(file, 0);
            *(s32 *)(entry + 4) = func_020f685c(file, 0);
            *(u16 *)(entry + 8) |= (u16)(func_020f685c(file, 0) != 0 ? 1 : 0);
            func_021167f0(data_0216bf88 + 0x30, entry);
        } while (func_02109444(file) != 0);
    }
    if (file != NULL) {
        func_021093b0(file);
    }
}

s32 func_0211361c(s32 *arg0) {
    return arg0[1];
}

u32 func_02113624(u32 *arg0) {
    return arg0[1] >> 1;
}

void func_02113630(s32 *arg0, s32 *arg1) {
    UnkStruct20 a = data_02155d30;
    UnkStruct20 b = data_02155d44;
    s32 i;
    for (i = 0; i < 5; i++) {
        arg0[i] = func_020a94b8(a.a[i]);
        arg1[i] = func_020a94b8(b.a[i]);
    }
}

extern s32 func_02110b38(u16);
extern s32 func_021136e4(s32);
#pragma optimization_level 0
s32 func_021136b0(u16 arg0, ...) {
    s32 x;
    s32 ret = 0;
    s32 y;
    x = func_02110b38(arg0);
    y = func_021136e4(x);
    return ret;
}

extern void func_0211379c(s32, u16 *, u16 *);
extern s32 func_02022068(u16);
#pragma optimization_level 0
s32 func_021136e4(s32 arg0) {
    u16 sum = 0;
    u16 i;
    s32 count = 0;
    u16 start;
    u16 end;

    func_0211379c(arg0, &start, &end);
    for (i = start; i < end; i++) {
        count = func_02022068(i);
        if (count != 0) {
            if ((arg0 == 1 ? 1 : (arg0 == 2 ? 1 : (arg0 == 3 ? 1 : 0))) != 0) {
                sum += count;
            } else {
                sum++;
            }
        }
    }
    return sum;
}
#pragma optimization_level 4

#pragma optimization_level 4

s32 func_02113824(void) {
    func_02112f88();
    return 0;
}

extern u32 data_0216bf8c[4];
u32 func_02113834(void) {
    return data_0216bf8c[0];
}

void func_02113980(void) {
    func_02114c80();
}

void func_02113b58(void **arg0, s32 arg1) {
    func_021140b8(*arg0, arg1);
}

void func_02113c0c(u32 *arg0) {
    *arg0 = 0;
}

extern void func_021142f0(void);
void func_0211405c(void) {
    func_021142f0();
}

