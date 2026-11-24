/* 7 functions from 0x020A033C to 0x020A1234 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern s16 *func_02116984(void *, u16);

void func_020a0da8(void) {
}

void *func_020a0dac(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020a0dc8(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

s32 func_020a0e08(void *arg0, s32 arg1) {
    s32 i = 0;
    s16 *ptr = func_02116984(arg0, i);
    do {
        if (ptr[0] == arg1) {
            return ptr[1];
        }
        i++;
        ptr = func_02116984(arg0, i);
    } while (ptr != NULL);
    return 0;
}

extern s32 func_020123f0(const char *, const char *);
extern char data_02148a18[];
extern char data_02148a24[];
extern char data_02148a2c[];
extern char data_02148a34[];
extern char data_02148a40[];
extern char data_02148a48[];
extern char data_02148a54[];
extern char data_02148a60[];
extern char data_02148a6c[];
extern char data_02148a78[];
extern char data_02148a84[];
extern char data_02148a90[];
extern char data_02148a9c[];
s32 func_020a0e5c(const char *arg0) {
    if (func_020123f0(data_02148a18, arg0) == 0) {
        return 1;
    }
    if (func_020123f0(data_02148a24, arg0) == 0) {
        return 2;
    }
    if (func_020123f0(data_02148a2c, arg0) == 0) {
        return 3;
    }
    if (func_020123f0(data_02148a34, arg0) == 0) {
        return 4;
    }
    if (func_020123f0(data_02148a40, arg0) == 0) {
        return 5;
    }
    if (func_020123f0(data_02148a48, arg0) == 0) {
        return 6;
    }
    if (func_020123f0(data_02148a54, arg0) == 0) {
        return 7;
    }
    if (func_020123f0(data_02148a60, arg0) == 0) {
        return 8;
    }
    if (func_020123f0(data_02148a6c, arg0) == 0) {
        return 9;
    }
    if (func_020123f0(data_02148a78, arg0) == 0) {
        return 10;
    }
    if (func_020123f0(data_02148a84, arg0) == 0) {
        return 11;
    }
    if (func_020123f0(data_02148a90, arg0) == 0) {
        return 12;
    }
    if (func_020123f0(data_02148a9c, arg0) != 0) {
        return 0;
    }
    return 13;
}

