/* 15 functions from 0x02052328 to 0x0205317C (main), found by ds-decomp. */
#include "common.h"

extern void func_020dd9b4(void *, s32 *);
extern s32 func_02117d80(void);
extern u32 *data_02155984;
extern u8 *data_02160a80;
extern u8 *data_021600bc;
extern void func_020526f0(u64, u32, s32, s32);
extern void func_020477dc(void *, s32, s32);
void func_02052328(void) {
    data_02155984[0] = 0x165;
    data_02155984[1] = 0xff0;
}

u32 func_02052a54(void *arg0, s32 arg1) {
    s32 val;
    u32 ret = 0;
    func_020dd9b4(arg0, &val);
    if (val != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80()) {
        ret |= 1;
    }
    return ret;
}
