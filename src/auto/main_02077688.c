/* 2 functions from 0x02077688 to 0x020783E8 (main), found by ds-decomp. */
#include "common.h"

static inline void storeSinCos781b0(u8 *arg0, s32 a, s32 b) {
    s32 scale = *(s32 *)(arg0 + 0x78);
    *(s32 *)(arg0 + 0x38) = a * scale;
    *(s32 *)(arg0 + 0x30) = b * scale;
}

extern u8 *data_02160204;
extern u16 data_021626aa;
extern s16 data_0213a394[];
extern u16 data_02151fc8;
extern u16 data_02151fca;
void func_02077688(void)
{
}

#pragma optimization_level 3
void func_020781b0(u8 *arg0, u16 *arg1, u32 *arg2) {
    u32 r12 = 0;
    u16 keys;
    s32 angle;

    if (data_02160204[0x12a] & 8) {
        return;
    }

    keys = data_021626aa;
    if (keys & 0x40) r12 |= 0x10;
    if (keys & 0x80) r12 |= 0x4;
    if (keys & 0x20) r12 |= 0x2;
    if (keys & 0x10) r12 |= 0x8;

    if (keys & 2) {
        *(u32 *)(arg0 + 0xac) |= 0x10;
    } else {
        *(u32 *)(arg0 + 0xac) &= ~0x10;
    }

    if (r12 != 0) {
        if ((r12 & 0x10) && (r12 & 4)) {
            r12 &= ~0x14;
        }
        if ((r12 & 2) && (r12 & 8)) {
            r12 &= ~0xa;
        }

        switch (r12) {
        case 0x12: angle = 0xa000; break;
        case 0x18: angle = 0xe000; break;
        case 0x6:  angle = 0x6000; break;
        case 0xc:  angle = 0x2000; break;
        case 0x10: angle = 0xc000; break;
        case 0x4:  angle = 0x4000; break;
        case 0x2:  angle = 0x8000; break;
        case 0x8:  angle = 0x0; break;
        case 0x0:
        default:   r12 |= 1; break;
        }

        if (!(r12 & 1)) {
            u16 baseAngle;
            s32 idx;

            *(s32 *)(arg0 + 0x30) = 0;
            *(s32 *)(arg0 + 0x34) = 0;
            *(s32 *)(arg0 + 0x38) = 0;

            if (*arg2 == r12) {
                baseAngle = *arg1;
            } else {
                baseAngle = data_02151fc8;
            }

            angle = (u16)((baseAngle + angle) % 0x10000);
            idx = angle >> 4;
            *(s32 *)(arg0 + 0x30) = data_0213a394[idx * 2 + 1];
            *(s32 *)(arg0 + 0x38) = data_0213a394[idx * 2];
            *(s32 *)(arg0 + 0x38) *= *(s32 *)(arg0 + 0x78);
            *(s32 *)(arg0 + 0x30) *= *(s32 *)(arg0 + 0x78);

            if (data_02151fca / 182 == 21) {
                *(s32 *)(arg0 + 0x38) += (*(s32 *)(arg0 + 0x38) * 5) / 10;
            }

            *(u32 *)(arg0 + 0xac) &= ~0x40;
            *(u32 *)(arg0 + 0xac) &= ~0x80;
            *(u32 *)(arg0 + 0xac) |= 2;
        }
    } else {
        *(u32 *)(arg0 + 0xac) &= ~2;
    }

    if (*arg2 != r12) {
        *arg2 = r12;
        *arg1 = data_02151fc8;
    }
}
#pragma optimization_level 4
