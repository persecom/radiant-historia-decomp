/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02118234(void *);
extern void func_02118430(void *);

extern void func_02006dc4(void *, u32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02003830(void *, u32, u32);
extern void func_02003894(void *, u32, u32);

void func_02118624(void *arg0, u32 arg1, s32 arg2, s32 *arg3) {
    u32 mapType = *(u32 *)((u8 *)arg0 + 8);

    switch (arg2) {
        case 0:
            break;
        case 1:
            *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & 0xffcfffef) | mapType;
            break;
        case 2:
            *(volatile u32 *)0x04001000 = (*(volatile u32 *)0x04001000 & 0xffcfffef) | mapType;
            break;
    }

    func_02006dc4(*(void **)((u8 *)arg0 + 0x14), *(u32 *)((u8 *)arg0 + 0x10));

    switch (arg2) {
        case 0:
            func_0200439c();
            func_020043f8(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            func_02004544();
            break;
        case 1:
            func_02003830(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            break;
        case 2:
            func_02003894(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            break;
    }

    if (*(u32 *)((u8 *)arg0 + 8) == 0) {
        s32 val;
        switch (*(u16 *)((u8 *)arg0 + 2)) {
            case 1: val = 0; break;
            case 2: val = 1; break;
            case 4: val = 2; break;
            case 8: val = 3; break;
            case 16: val = 4; break;
            case 32: val = 5; break;
            default: val = 0; break;
        }
        arg3[3] = val;

        switch (*(u16 *)((u8 *)arg0 + 0)) {
            case 1: val = 0; break;
            case 2: val = 1; break;
            case 4: val = 2; break;
            case 8: val = 3; break;
            case 16: val = 4; break;
            case 32: val = 5; break;
            default: val = 0; break;
        }
        arg3[4] = val;
    } else {
        arg3[3] = *(u16 *)((u8 *)arg0 + 2);
        arg3[4] = *(u16 *)((u8 *)arg0 + 0);
    }

    arg3[5] = *(s32 *)((u8 *)arg0 + 4);
    arg3[6] = 0;
    arg3[7] = 1;
    arg3[8] = *(s32 *)((u8 *)arg0 + 8);
    func_021185b0(arg3, arg2, (s32)arg1);
}

void func_02118e68(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i] = -1;
    }
}

void func_02118e84(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1] = arg2;
}

s32 func_02118e8c(s32 *arg0, s32 arg1) {
    return arg0[arg1];
}

extern void func_02117e4c(void *);
extern void func_02118f24(void *);
void func_021190bc(void *arg0) {
    func_02117e4c(arg0);
    func_02118f24(arg0);
}

