/* 23 functions from 0x0203BAE4 to 0x0203C998 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern void *func_0210c594(u32, void *);
extern void func_0210c5dc(void *);
void func_0203bc74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6);
void func_0203bc34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    u8 local[0x18];
    func_0203bc74(local, arg0, arg1, arg2, arg3, arg4, arg5);
}

void func_0203bc74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6) {
    func_020a9610(arg0, arg1, arg3, arg2, arg4, arg5);
    if (arg6 == 1) {
        *(s32 *)(arg0 + 8) = (*(s32 *)(arg0 + 8) - (func_020a96f0(*(void **)(arg0 + 0x10)) >> 1)) & ~3;
    } else if (arg6 == 2) {
        *(s32 *)(arg0 + 8) = (*(s32 *)(arg0 + 8) - func_020a96f0(*(void **)(arg0 + 0x10))) & ~3;
    }
    while (func_020a9648(arg0) != 0) {
    }
}

void func_0203bcf8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 local[6] = { 0, 0, 0, 0, 0, 0 };
    func_0203bd68(local, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void func_0203be4c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0203c0d8(void) {
    return func_0210c594(0x40, data_02155c3c);
}

void func_0203c820(void) {
}

void func_0203c994(void) {
}

