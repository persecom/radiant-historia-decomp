/* 17 functions from 0x0205B710 to 0x0205C65C (main), found by ds-decomp. */
#include "common.h"

extern void func_020d4eb8();
extern void func_020d2b78(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern void *func_02022494(void *arg0, s32 arg1);
extern s32 func_020dddfc(void *arg0, void *arg1, s32 arg2);
extern void func_020020f8(void *arg0, void *arg1, void *arg2);
extern u8 *data_02160a6c;
s32 func_0205ba98(void *arg0, s32 arg1) {
    if (func_020dddfc(arg0, (u8 *)arg0 + 0x24, arg1 << 12) != 0) {
        return 1;
    }
    func_020020f8(arg0, (u8 *)arg0 + 0x30, arg0);
    return 0;
}

void *func_0205bad4(void *arg0) {
    u8 *p = func_02022494(arg0, 0);
    if (p != NULL) {
        p = *(u8 **)(p + 4);
        if (p != NULL) {
            return *(void **)(p + 0x28);
        }
    }
    return NULL;
}

void func_0205bbd8(void *arg0) {
    u8 *p = *(u8 **)(data_02160a6c + 0xb8);
    while (p != NULL) {
        u16 *ptr = *(u16 **)(p + 0x124);
        if (*ptr != 0) {
            *ptr = 7;
        }
        p = *(u8 **)(p + 0x174);
    }
    p = func_0205bad4(arg0);
    while (p != NULL) {
        u8 *obj = *(u8 **)p;
        u8 *a = *(u8 **)(obj + 0x118);
        u16 *b = *(u16 **)(obj + 0x124);
        if (*a == 1) {
            if (*(s16 *)(b + 1) != 0 && *b != 0) {
                *b = 3;
            }
        }
        p = *(u8 **)(p + 0x18);
    }
}

void func_0205bc60(s32 *arg0, u8 *arg1, s32 arg2) {
    if (func_020dddfc(arg0, arg0 + 9, arg2 << 12) == 0) {
        return;
    }
    arg0[0xc] = 0;
    arg0[0xe] = 0;
    (*arg1)++;
    if (arg0[0xd] == 0) {
        (*arg1)++;
    }
}

void func_0205c314(void) {
    func_020d4eb8();
}
