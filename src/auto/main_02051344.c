/* 6 functions from 0x02051344 to 0x02052328 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
extern s32 func_020ef4c8(void);
extern void func_020477dc(void *, s32, s32);
void func_02052240(u8 *arg0) {
    s32 val = func_020ef4c8();
    *(s32 *)(arg0 + 0x7c) = 0;
    *(s32 *)(arg0 + 0x4) = val;
    *(s32 *)(arg0 + 0x50) = val;
    if (data_02160aec != NULL && *(u8 **)(data_02160aec + 0x58be0) != NULL) {
        *(s32 *)(arg0 + 0x7c) = (*(u8 **)(data_02160aec + 0x58be0))[3];
    }
}

void func_02052284(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        func_020477dc(arg0, 2, 0);
        break;
    case 1:
        func_020477dc(arg0, 0, 0);
        break;
    case 2:
        func_020477dc(arg0, 1, 0);
        break;
    }
}

void func_020522d4(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        if (arg2 != 0) {
            if (arg0[0x9e] == 0) {
                *(s32 *)(arg0 + 0x78) = 6;
            }
            func_02052284(arg0, 2);
        } else {
            if (arg0[0x9e] == 0) {
                *(s32 *)(arg0 + 0x78) = 3;
            }
            func_02052284(arg0, 1);
        }
    } else {
        func_02052284(arg0, 0);
    }
}

