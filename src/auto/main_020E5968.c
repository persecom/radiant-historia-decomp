/* 1 function from 0x020E5968 to 0x020E8358 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160260;
extern u8 *data_02160a74;
extern u8 *data_02160110;
extern u16 data_021626a8;
extern s32 func_02064b84(s32, s32, s32, s32);
extern void func_0210d27c(s32);
extern s32 func_020df38c(s32, s32);
void func_020e5968(void) {
    u8 *p260 = data_02160260;
    u8 *pA74 = data_02160a74;
    u8 *p110 = data_02160110;
    u8 state = p260[0x95];
    if (state == 1 || state == 2) {
        return;
    }
    if (!(pA74[0x1c0] & 4)) {
        if ((pA74[0x1c0] & 1) && !(pA74[0x1c0] & 2)) {
            if (func_02064b84(6, 5, 0x22, 0xe) || (data_021626a8 & 0x802)) {
                data_02160a74[0x1c0] |= 2;
                func_0210d27c(5);
            }
        }
        if (data_02160a74[0x1c0] & 2) {
            data_02160a74[0x1c1]++;
            if (data_02160a74[0x1c1] > 5) {
                data_02160a74[0x1c1] = 0;
                data_02160a74[0x1c0] &= ~1;
                data_02160a74[0x1c0] &= ~2;
            }
        }
    }
    switch (*(u16 *)(pA74 + 0x9c)) {
    case 0:
        break;
    case 24:
        (*(s16 *)(pA74 + 0x148))++;
        if (*(s16 *)(pA74 + 0x148) > 2) {
            func_020df38c(0, 0);
            *(s16 *)(pA74 + 0x148) = 0;
            *(u16 *)(pA74 + 0x9c) = *(u16 *)(pA74 + 0x14a);
        }
        break;
    default:
        break;
    }
}
