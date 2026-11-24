/* 7 functions from 0x020CC09C to 0x020CCD34 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160238;
extern void func_020ce170(u32, u32, u32);

void func_020ccadc(void) {
    u8 *p = data_02160238;
    u32 v;
    v = p[0x708];
    func_020ce170(v, v, 1);
    v = p[0x709];
    func_020ce170(v, v, 0);
}
