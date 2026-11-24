/* 7 functions from 0x0211F518 to 0x02120518 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02173164[12];
extern void func_02120500(void);
extern void func_021205ec(s32, void *, s32);
extern void func_02008e50(void *, u32, u32);

void func_0211fd3c(u8 *arg0, s32 arg1) {
    s32 flags = *(s32 *)(arg0 + 8);
    s32 arr[3];

    if ((flags & 0x100) || (flags & 0x200)) return;

    if (arg1 == 0) {
        arr[0] = arr[1] = arr[2] = *(s32 *)(arg0 + 0xe0);
    } else {
        arr[0] = arr[1] = arr[2] = *(s32 *)(arg0 + 0xe4);
    }
    func_021205ec(0x1b, arr, 3);
    *(s32 *)arg0 += 1;
}

void func_02120500(void) {
    while (*(s32 *)(data_02173164 + 4) != 0) {
    }
}
