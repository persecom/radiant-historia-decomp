/* 2 functions from 0x02077688 to 0x020783E8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 x,y,z; } Vec_02077688;
typedef struct { u8 *head; u8 *tail; u16 count,offset; } List_02077688;
extern u8 *data_021600ac;
extern u32 data_02155c3c,data_0216263c[3];
extern void *func_0210c594(u32,u32);
extern u16 func_02043964(u16);
extern u8 *func_02047820(u16);
extern s32 func_020ddc8c(void*,void*),func_0210c2f4(void*,void*);
extern u16 func_020d7ab8(s32,s32,s32);
extern s32 func_020d7c8c(s32,s32,s32,u32,u16,s16*,s32*);

extern u8 *data_02160204;
extern u16 data_021626aa;
extern s16 data_0213a394[];
extern u16 data_02151fc8;
extern u16 data_02151fca;
void func_02077688(void) {}

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
