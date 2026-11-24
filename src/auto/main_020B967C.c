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

void func_020b9990(void) {
    u8 *p = data_021601ec;
    u16 arr[1];
    arr[0] = data_021438e0;
    func_020c738c(func_020c9c10(*(void **)(p + 0x4c), arr[0]), 0, 1);
    *(s32 *)(p + 0x5c) = 0xfa000;
}

void func_020b9ad8(void) {
    *(s32 *)(data_021601ec + 0x5c) = 0xe6000;
}

void func_020b9af0(void) {
    u8 *p = data_021601ec;
    u8 *obj = func_020c9c10(*(void **)(p + 0x4c), 2);
    s32 val = (*(s32 *)(p + 0x5c) * 60) / 100;
    *(s32 *)(p + 0x5c) = val;
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, (s16)((val >> 12) + 0x14));
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, 0x19);
    if (*(s32 *)(p + 0x5c) < 0x800) {
        *(s32 *)(p + 0x40) = 0;
        func_020b8aac();
    }
}

