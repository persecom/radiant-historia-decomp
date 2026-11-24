/* 8 functions from 0x0205317C to 0x02054118 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02054e14(void *);
extern s32 func_020552e4(void *);

void func_02053fdc(u8 *arg0) {
    u16 n = *(u16 *)(arg0 + 4);
    u8 v;

    if (n > 1) return;
    v = *(u8 *)arg0;
    if (v != 0) {
        *(u8 *)arg0 = v - 1;
        return;
    }
    {
        u16 x = 1;
        if (n != 0) x = 0;
        *(u16 *)(arg0 + 4) = x;
    }
    *(u8 *)arg0 = *(u8 *)(arg0 + 0x1b);
}

extern s32 func_0205453c(void *);
extern void func_02055564(void *, u8);
