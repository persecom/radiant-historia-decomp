/* 52 functions from 0x020C83F4 to 0x020C93F4 (main), found by ds-decomp. */
#include "common.h"

extern void func_020c6f14(void);
extern void func_0210c5dc(void *);
extern void func_020c8dc0(void *, s32, s32);
extern void func_020a9610(void *, s32, s32, void *, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_0203bc34(s32, void *, s32, s32, s32, s32);
extern void func_020a98a0(void *);
void func_020c83f4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
    if (*(void **)(arg0 + 0x40) != NULL) {
        func_020a9610(arg0 + 0x44, arg1, arg2, *(void **)(arg0 + 0x30), 0, 0);
        func_020a98ac(*(void **)(arg0 + 0x40));
        func_020a98f4(*(void **)(arg0 + 0x40));
    } else {
        func_0203bc34(arg1, *(void **)(arg0 + 0x30), arg2, 0, 0, arg3);
    }
}

void func_020c8488(u8 *arg0) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
}

void func_020c84ac(u8 *arg0) {
    if (*(void **)(arg0 + 0x40) != NULL) {
        func_020a98a0(*(void **)(arg0 + 0x40));
        if (*(void **)(arg0 + 0x40) != NULL) {
            func_0210c5dc(*(void **)(arg0 + 0x40));
            *(void **)(arg0 + 0x40) = NULL;
        }
        *(void **)(arg0 + 0x40) = NULL;
    }
}

void func_020c8548(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x44) = arg1 << 12;
}

void func_020c8558(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x48) = arg1 << 12;
}

void func_020c8780(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020c8818(void *);
void func_020c87f8(void *arg0) {
    func_020c8818(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020c8a08(void) {
    func_020c6f14();
}

extern void func_020c71bc(void);
s32 func_020c8b90(void) {
    func_020c71bc();
    return 0;
}

void func_020c8ba0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020c8ec0(u8 *arg0, s32 arg1) {
    func_020c8dc0(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
void func_020c8ed0(u8 *arg0, s32 arg1) {
    func_020c8dc0(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

