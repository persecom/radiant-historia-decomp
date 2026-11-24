/* 16 functions from 0x0209C2AC to 0x0209D0F0 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160120;
extern u32 func_021136b0(void);
extern void func_0209c94c(void *);

u32 func_0209cb98(void) {
    u32 v = func_021136b0();
    if ((v & 2) == 0) return 0;
    return v;
}
