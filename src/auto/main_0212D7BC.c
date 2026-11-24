/* 71 functions from 0x0212D7BC to 0x0212E764 (main), found by ds-decomp. */
#include "common.h"

extern void func_021333b0(void);
extern void func_0212e5a0(void);
extern void func_0212e5ac(void);
extern void func_0212e4b4(void);
extern void func_0212e528(void);
extern void func_0212da40(void *);
extern void func_0212dd4c(void *);
extern void func_0212db74(void *);
extern void func_02013878(void *, s32, u32);
extern s32 func_0212d9f8(void *, void *);
extern void func_0212d7bc(void *, s32, s32, s32, s32);
extern s32 data_02156d74[];
extern s32 data_021740d8[];
extern u8 data_021740f0[10][0x64];
void *func_0212d89c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *entry = NULL;
    s32 i;
    for (i = 0; i < data_02156d74[2]; i++) {
        entry = data_021740f0[data_021740d8[4] + i];
        if ((s8)entry[0] == 0) {
            break;
        }
    }
    if (i == data_02156d74[2]) {
        return NULL;
    }
    func_0212d7bc(entry, arg0, arg1, arg2, arg3);
    entry[3] = 1;
    return entry;
}

void *func_0212d938(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *e = NULL;
    s32 i;
    for (i = 0; i < data_02156d74[0]; i++) {
        e = data_021740f0[data_02156d74[1] + i];
        if ((s8)e[0] == 0) {
            break;
        }
    }
    if (i == data_02156d74[0]) {
        return NULL;
    }
    func_0212d7bc(e, arg0, arg1, arg2, arg3);
    e[3] = 0;
    return e;
}

s32 func_0212d9cc(void *arg0, void *arg1) {
    s32 ret;
    func_0212e5a0();
    ret = func_0212d9f8(arg0, arg1);
    func_0212e5ac();
    return ret;
}

s32 func_0212dc0c(s8 *arg0) {
    return arg0[1];
}

void func_0212e4a0(void) {
    func_0212e5a0();
    func_0212e4b4();
    func_0212e5ac();
}

void func_0212e514(void) {
    func_0212e5a0();
    func_0212e528();
    func_0212e5ac();
}

void func_0212e528(void) {
    func_021333b0();
}

extern void func_0212a9dc(void);
void func_0212e57c(void) {
    func_0212a9dc();
}

extern void func_0212a9e8(void);
void func_0212e588(void) {
    func_0212a9e8();
}

extern void func_02138658(void);
void func_0212e594(void) {
    func_02138658();
}

extern void func_0212a9f4(void);
void func_0212e5a0(void) {
    func_0212a9f4();
}

extern void func_0212a9f8(void);
void func_0212e5ac(void) {
    func_0212a9f8();
}

s32 func_0212e5d4(void) {
    return 0;
}

extern void func_0212c4c8(void);
void func_0212e610(void) {
    func_0212c4c8();
}

extern void func_0213807c(void);
void func_0212e61c(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_0212e628(void) {
    func_0213808c();
}

