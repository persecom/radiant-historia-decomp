/* 20 functions from 0x020B967C to 0x020BA63C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021601ec;
extern u16 data_021438e0;
extern u8 *func_020c9c10(void *, u32);

void func_020b9930(void) {
    u8 *obj = func_020c9c10(*(void **)(data_021601ec + 0x4c), 2);
    func_02112688();
    func_02111dc8(obj, (u16)(1 << func_02110b20()));
    func_020ba4b4();
    func_02112068(obj);
    func_02111bf0(obj);
    func_02111ff0(obj);
}

void func_020b9ad8(void) {
    *(s32 *)(data_021601ec + 0x5c) = 0xe6000;
}
