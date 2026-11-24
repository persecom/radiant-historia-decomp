/* 9 functions from 0x020DC7EC to 0x020DD770 (main), found by ds-decomp. */
#include "common.h"

void func_020dc994(void) {
}

void func_020dc998(void) {
}

void func_020dc99c(void) {
}

extern u8 *data_02160204;
extern u8 *data_0216025c[2];
extern u8 *data_02160a74;
extern void func_020f0154(s32);
extern void func_020dc4b8(void);
extern void func_020d914c(s32);
extern void func_020d0a40(s32);
extern void func_020d0cd4(s32, u32);
extern void func_020e26f0(s32, s32, s32);
void func_020dc9a0(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
        *(u16 *)(data_02160204 + 0x7c) = (u16)arg1;
        func_020f0154((u16)arg1);
        if (*(u16 *)(data_02160204 + 0x7c) == 0x18) {
            *(u16 *)(data_0216025c[1] + 0x8e) = 1;
        }
        return;
    case 1:
        *(u16 *)(data_0216025c[1] + 0x48) = arg1;
        return;
    case 2:
        func_020dc4b8();
        return;
    case 3:
        if (arg1 == 1) {
            func_020d914c(1);
            func_020d0a40(3);
            func_020e26f0(7, 0, 999);
        } else if (arg1 == 99) {
            func_020d0a40(1);
        }
        return;
    case 4:
        func_020d0cd4((u16)arg1, 1);
        return;
    case 5:
        func_020d0cd4((u16)arg1, 2);
        return;
    case 6:
        func_020d0cd4((u16)arg1, 8);
        func_020d0cd4(0, 4);
        data_02160a74[0x1c0] &= 0xfb;
        return;
    case 7:
        func_020d0a40((u16)arg1);
        return;
    }
}

