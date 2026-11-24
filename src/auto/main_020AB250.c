/* 10 functions from 0x020AB250 to 0x020AC0B0 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_021626a8;
extern u16 data_02162908[4];
extern void func_020ae50c(s32);
extern void *func_020b442c(void);

s32 func_020ab9c8(u8 *arg0) {
    u16 flags = data_021626a8;
    if ((flags & 1) || (flags & 2)) {
        *arg0 = 0;
        func_020ae50c(6);
        return 2;
    }
    return 0;
}
