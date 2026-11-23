/* 38 functions from 0x020C7408 to 0x020C83F4 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern u32 func_020c73b8(void);
extern void func_020c74fc(void *);
extern void func_020c753c(void *);
BOOL func_020c7408(void) {
    return (func_020c73b8() & 4) != 0;
}

BOOL func_020c7420(void) {
    return (func_020c73b8() & 8) != 0;
}

s32 func_020c7440(void) {
    return 0;
}

void func_020c7448(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c745c(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x30) == 0) {
        return 1;
    }
    switch (*(u8 *)((u8 *)arg0 + 0x3a)) {
    case 0: {
        u16 max = *(u16 *)((u8 *)arg0 + 0x38);
        *(u16 *)((u8 *)arg0 + 0x36) += 1;
        if (*(u16 *)((u8 *)arg0 + 0x36) > max) {
            *(u8 *)((u8 *)arg0 + 0x3a) = 1;
            *(u16 *)((u8 *)arg0 + 0x36) = max;
        }
        break;
    }
    case 1:
        *(u16 *)((u8 *)arg0 + 0x36) -= 1;
        if (*(u16 *)((u8 *)arg0 + 0x36) == 0) {
            *(u16 *)((u8 *)arg0 + 0x36) = 0;
            *(u8 *)((u8 *)arg0 + 0x3a) = 0;
        }
        break;
    }
    switch (*(u8 *)((u8 *)arg0 + 0x34)) {
    case 0:
        func_020c74fc(arg0);
        break;
    case 1:
        func_020c753c(arg0);
        break;
    }
    return 0;
}

s32 func_020c7604(void) {
    return 0;
}

extern void func_020c7838(void *);
extern u32 func_020c73b8(void);
extern void func_020c74fc(void *);
extern void func_020c753c(void *);
void func_020c7818(void *arg0) {
    func_020c7838(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020c6d78(void);
s32 func_020c812c(void) {
    func_020c6d78();
    return 0;
}

void func_020c813c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

