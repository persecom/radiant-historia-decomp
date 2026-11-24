/* 19 functions from 0x020948AC to 0x02095874 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern void func_020a9544(void *);
extern void func_0203bc34(void *, void *, u32, s32, s32, s32);
extern void func_020a8ab8(void *);
extern void *func_020a94b8(void *);
extern u8 data_021488b0[];
extern u8 data_021488bc[];
void func_020948ac(void) {
    u8 *p = data_02160110;
    u16 i;
    for (i = 0; i < 10; i++) {
        if (*(void **)(p + i * 4 + 0x18) != NULL) {
            func_020a9544(*(void **)(p + i * 4 + 0x18));
            *(void **)(p + i * 4 + 0x18) = NULL;
        }
        if (*(void **)(p + i * 4 + 0x40) != NULL) {
            (*(void (**)(void *))(*(u8 **)(p + i * 4 + 0x40) + 0xc))(*(void **)(p + i * 4 + 0x40));
            *(void **)(p + i * 4 + 0x40) = NULL;
        }
    }
}

void func_0209491c(s32 arg0, u32 arg1, s32 arg2) {
    u8 *p = data_02160110;
    u8 *obj = *(u8 **)(p + arg0 * 4 + 0x40);
    void *other = *(void **)(p + arg0 * 4 + 0x18);
    if (arg2 == 0) {
        (*(void (**)(void *))(obj + 4))(obj);
        return;
    }
    (*(void (**)(void *))(obj + 4))(obj);
    func_0203bc34(other, obj, arg1, 0, 1, 0);
    func_020a8ab8(obj);
}

void func_02094990(s32 arg0, s32 arg1) {
    u8 *p = data_02160110;
    func_020a9544(*(void **)(p + arg0 * 4 + 0x18));
    if (arg1 == 0) {
        *(void **)(p + arg0 * 4 + 0x18) = func_020a94b8(data_021488b0);
    } else if (arg1 == 1) {
        *(void **)(p + arg0 * 4 + 0x18) = func_020a94b8(data_021488bc);
    }
}

u32 func_02095198(void) {
    if (data_02160110 != NULL) {
        return *(u32 *)(data_02160110 + 0x9c);
    }
    return 0;
}
