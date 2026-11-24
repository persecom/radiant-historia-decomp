/* 6 functions from 0x02059888 to 0x0205A83C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_021600ac;
extern void func_020e4c38(void);
extern void func_020e86c0(s32);
extern void *func_020bf308(s32);
extern void func_020bf344(void *, s32 *, s32 *, s32);
extern void func_020bed54(s32, s32);
extern u8 *func_020becfc(void);
extern void func_020477dc(void *, s32, s32);
void func_0205a3cc(void) {
    u8 *p = *(u8 **)(data_021600ac + 0x68);
    s32 vec2[3];
    s32 vec1[3];

    vec1[0] = 0xd3;
    vec1[1] = 0xa;
    vec1[2] = 0xc1;
    vec2[0] = 0xdd;
    vec2[1] = -0xa;
    vec2[2] = 0x33;
    func_020bf344(func_020bf308(0), vec1, vec2, 0x3c);
    func_020bed54(8, 1);
    *(s32 *)(func_020becfc() + 0x100) = 0;
    *(u16 *)(p + 0x92) = 0x8000;
    func_020477dc(p, 0, 0);
}

void func_0205a810(void) {
    data_02160a74[0x1c2] &= 0xfd;
    func_020e4c38();
    func_020e86c0(0xd);
}
