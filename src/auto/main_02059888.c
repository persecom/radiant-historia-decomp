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
void func_0205a810(void) {
    data_02160a74[0x1c2] &= 0xfd;
    func_020e4c38();
    func_020e86c0(0xd);
}
