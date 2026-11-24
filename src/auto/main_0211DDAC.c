/* 13 functions from 0x0211DDAC to 0x0211EA84 (main), found by ds-decomp. */
#include "common.h"

extern void (*data_02156070[])(void *, u32);
extern void (*data_02155f80[])(void *);
extern void (*data_02155f90[])(void *);
s32 func_0211ddac(u32 *arg0, u8 *arg1, u32 arg2) {
    s32 ret = 0;
    *arg0 = 0;
    do {
        if (arg2 < *(u8 *)(arg1 + 0x19)) {
            u16 val = *(u16 *)(arg1 + 0x1A + arg2 * 2);
            if ((val & 0x300) == 0x100) {
                void (*fn)(u32 *, u8 *, u32) = *(void (**)(u32 *, u8 *, u32))(arg1 + 0xC);
                if (fn != NULL) {
                    u32 tmp;
                    fn(&tmp, arg1, val & 0xFF);
                    *arg0 |= tmp;
                    ret = 1;
                }
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    } while (arg1 != NULL);
    return ret;
}

void func_0211de34(u8 *arg0) {
    do {
        u8 cmd;
        *(u32 *)(arg0 + 8) &= ~0x40;
        cmd = **(u8 **)arg0;
        data_02156070[cmd & 0x1F](arg0, cmd & 0xE0);
    } while ((*(u32 *)(arg0 + 8) & 0x20) == 0);
}

void func_0211e014(u32 *arg0, u8 *arg1) {
    while (arg1 != NULL) {
        s32 i;
        for (i = 0; i < *(u8 *)(arg1 + 0x19); i++) {
            if (*(u16 *)(arg1 + 0x1A + i * 2) & 0x100) {
                arg0[i >> 5] |= 1 << (i & 0x1F);
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
}

void func_0211e158(u8 *arg0) {
    void (*fn)(void *) = *(void (**)(void *))(arg0 + 0xC);
    if (fn != NULL) {
        fn(arg0);
    }
    *(u8 **)arg0 += 1;
}

void func_0211e180(u8 *arg0) {
    void (*fn)(void *) = *(void (**)(void *))(arg0 + 0x10);
    do {
        if (fn == NULL) {
            break;
        }
        fn(arg0);
        *(u32 *)(arg0 + 8) |= 0x20;
    } while (0);
}

