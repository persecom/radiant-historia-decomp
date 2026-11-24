/* 38 functions from 0x021078D0 to 0x021088CC (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02162860;
extern void func_02107d84(u32, u32, u32, u32);
extern void func_02107e4c(void *);
extern void func_02002128(void *, void *, void *);
extern void func_02002274(void *, void *);
extern u32 data_02155984;
extern void func_02008f74(void *, s32, u32);
extern void func_02107cf4(void);
extern u8 data_0215599c[];
extern u8 data_02155988[];
extern u8 data_0216242c[];
extern u8 data_02162360[];
extern void func_0210dae0(void *);
extern void func_0210db40(void *);

extern void func_021254a8(void);
extern u8 data_02161088[28];
extern void func_02118178(void *, s32);
extern u8 data_021610a4[28];
extern void func_0211809c(void *, s32, s32);
extern void func_02119d48(void *);
extern void func_02119c80(void *);
extern void func_02119d38(void *, void *);
extern void func_02107860(void);
void func_021078d0(void *arg0, void *arg1) {
    u32 val = 0xc0000;
    func_02119d48(arg1);
    *(u32 *)((u8 *)arg1 + 0x0) = 0;
    *(u32 *)((u8 *)arg1 + 0x4) = 0;
    *(u32 *)((u8 *)arg1 + 0x8) = 0x100000;
    *(u32 *)((u8 *)arg1 + 0xc) = val;
    *(u32 *)((u8 *)arg1 + 0x28) = 0;
    *(u32 *)((u8 *)arg1 + 0x2c) = 0;
    *(void **)((u8 *)arg1 + 0x34) = func_02107860;
    *(u32 *)((u8 *)arg1 + 0x14) = 0;
    func_02119c80(arg0);
    func_02119d38(arg0, arg1);
    *(u32 *)((u8 *)arg0 + 0x80) = val - 0xc1000;
}

void func_02107a24(s32 arg0, s32 arg1) {
    func_0211809c(data_02161088, arg0, arg1);
}

void func_02107a44(s32 arg0, s32 arg1) {
    func_0211809c(data_021610a4, arg0, arg1);
}

void func_02107a64(s32 arg0) {
    func_02118178(data_02161088, arg0);
}

void func_02107a7c(s32 arg0) {
    func_02118178(data_021610a4, arg0);
}

void func_02107a94(void) {
    func_021254a8();
}

void func_02107aa0(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 arg4, s32 arg5) {
    if (arg4 != 0) {
        (*arg0)--;
        (*arg2)--;
    }
    if (arg5 != 0) {
        (*arg1)--;
        (*arg3)--;
    }
}

void func_02107aec(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 arg4, s32 arg5) {
    (*arg0)--;
    (*arg2)--;
    if (arg4 != 0 || arg5 != 0) {
        (*arg1)--;
        (*arg3)--;
    }
}

void func_02107c70(u8 *arg0) {
    u32 prev = data_02155984;
    data_02155984 = (u32)arg0;
    func_02008f74(arg0, 0, 0xcc);
    *(s32 *)(arg0 + 0x1c) = 0x1000;
    *(s32 *)(arg0 + 0x30) = 0x1000;
    *(s32 *)(arg0 + 0x50) = -0x1000;
    *(s32 *)(arg0 + 0x5c) = -0x1000;
    func_02107cf4();
    data_02155984 = prev;
}

void func_02107cb8(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    *(u32 *)data_02155984 = arg0;
    *(u32 *)(data_02155984 + 4) = arg1;
    *(u32 *)(data_02155984 + 8) = arg2;
    *(u32 *)(data_02155984 + 0xc) = arg3;
    *(u32 *)(data_02155984 + 0x10) = arg4;
}

void func_02107cf4(void) {
    func_02107cb8(0x165, 0xff0, 0x1555, 0x64000, 0x800000);
}

void func_02107d20(void) {
    func_0210dae0(data_0215599c);
    func_0210db40(data_02155988);
    func_02107c70(data_0216242c);
    func_02107c70(data_02162360);
}

void func_02107d58(u32 arg0, u32 arg1, u32 arg2) {
    func_02107d84(data_02155984, arg0, arg1, arg2);
}

extern u32 data_02155984;
extern s32 func_02108258(u32);
s32 func_02108240(void) {
    return func_02108258(data_02155984);
}

extern u8 data_0215599c[];
extern u8 data_02155988[];
extern u8 data_0216242c[];
extern u8 data_02162360[];
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
void *func_021082d0(void) {
    u8 *p = (u8 *)data_02155984;
    if (p != NULL) {
        return p + 0x14;
    }
    return NULL;
}

extern u32 data_02162860;
extern void func_02107d84(u32, u32, u32, u32);
extern void func_02107e4c(void *);
extern void func_02002128(void *, void *, void *);
extern void func_02002274(void *, void *);
void *func_021082ec(void) {
    u8 *p = (u8 *)data_02155984;
    if (p != NULL) {
        return p + 0x20;
    }
    return NULL;
}

extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_02008f74(void *, s32, u32);
extern void func_02107cf4(void);
void *func_0210889c(u32 arg0) {
    return func_0210c594(arg0, data_02155c3c);
}

extern void func_0210c5dc(void *);
void func_021088b4(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_021088c8(void) {
    while (1) {
    }
}

