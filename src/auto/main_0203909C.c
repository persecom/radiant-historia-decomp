/* 1 function from 0x0203909C to 0x0203A3B0 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x, y, z;
} Vec_3909C;

extern u8 *data_02160a74;
extern u8 *data_02160244;
extern u8 *data_02160258;
extern u8 *data_02160204;
extern u8 *data_02160a6c;

extern void func_020331d0(u8 *, u16, s32);
extern void func_020331b0(u8 *, s32);
extern s32 func_020331f0(u8 *);
extern void func_02033274(u8 *, s32, s32, s32);
extern void func_020332e8(Vec_3909C *);
extern void func_020dd810(u8 *, s32, s32);
extern void func_0210d27c(s32);
extern s32 func_020d2af4(s32, s32, s32, s32, s32);
extern u8 *func_020f0a5c(u16);
extern void func_020df3f4(u8 *, s32);
extern void func_020df56c(s32, s32);
extern s32 func_0205bcb0(u8 *, s32);
extern u8 *func_020c1370(s32, void *, s32, s32, s32);
extern u8 *func_020ec950(s32);
extern void func_020ec548(void);
extern void func_020ec8cc(u8 *, s32, s32);

void func_0203909c(u8 *actor) {
    u8 *ctx = *(u8 **)(actor + 0x128);
    u8 *state = *(u8 **)(ctx + 0x8c);
    s16 next = 0;
    Vec_3909C pos;

    switch (*(u16 *)state) {
    case 0:
        *(u16 *)(data_02160a6c + 0x1e0) = 0;
        (*(u8 **)data_02160244)[0x6c] = 2;
        pos.x = 0x1e0000;
        pos.y = 0x30000;
        pos.z = 0x200000;
        *(Vec_3909C *)(data_02160258 + 0xc) = pos;
        *(Vec_3909C *)(state + 0x18) = *(Vec_3909C *)actor;
        next = 1;
        break;
    case 1:
        if (!(*(u16 *)(state + 8) & 1)) {
            func_020331d0(state, 1, 1);
            func_020dd810(actor, 1, 0);
            *(s32 *)(actor + 0x78) = 0x480;
            func_02033274(actor, *(s32 *)actor - 0x12c000, *(s32 *)(actor + 4), *(s32 *)(actor + 8));
            actor[0x192] = 0x64;
            func_0210d27c(0x63);
        }
        if (!(*(u16 *)(state + 8) & 2)) {
            if (func_020331f0(actor)) {
                func_020331d0(state, 2, 1);
            }
        }
        if (!(*(u16 *)(state + 8) & 4)) {
            if (func_020d2af4(0, 1, 0x1f, 1, 0x208)) {
                u8 *obj = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
                *(u32 *)(obj + 0x14) &= ~1;
                func_020df3f4(actor, 1);
                func_020df56c(0, 1);
                func_020331d0(state, 4, 1);
            }
        }
        if ((*(u16 *)(state + 8) & 2) && (*(u16 *)(state + 8) & 4)) {
            Vec_3909C tmp;
            func_020332e8(&tmp);
            *(Vec_3909C *)(data_02160258 + 0xc) = tmp;
            *(s32 *)(data_02160258 + 0xc) -= 0xa0000;
            *(s32 *)(data_02160258 + 0x10) += 0xa000;
            *(Vec_3909C *)data_02160258 = *(Vec_3909C *)(data_02160258 + 0xc);
            (*(u8 **)data_02160244)[0x6c] = 8;
            next = 3;
        }
        break;
    case 3:
        if (!(*(u16 *)(state + 8) & 1)) {
            *(s32 *)actor = *(s32 *)data_02160258 + 0x6c000;
            *(s32 *)(actor + 4) = *(s32 *)(data_02160258 + 4) - 0xd000;
            *(s32 *)(actor + 8) = *(s32 *)(data_02160258 + 8);
            func_020331d0(state, 1, 1);
        }
        if ((*(u16 *)(state + 8) & 1) && !(*(u16 *)(state + 8) & 2)) {
            func_020331d0(state, 2, 1);
            *(s32 *)(actor + 0x78) = 0x47e;
            func_02033274(actor, *(s32 *)data_02160258 - 0xa000, *(s32 *)(actor + 4), *(s32 *)(actor + 8));
        }
        if (!(*(u16 *)(state + 8) & 4)) {
            if (func_020331f0(actor)) {
                func_020331d0(state, 4, 1);
            }
        }
        if (actor[0x104] == 0xe) {
            if (func_0205bcb0(actor, 2) & 1) {
                func_0210d27c(0x80);
            }
            if ((func_0205bcb0(actor, 0) & 2) && (*(u16 *)(state + 8) & 8)) {
                func_020dd810(actor, 0xf, 0);
                *(s16 *)(state + 0x30) = 0;
                next = 4;
            }
        }
        if ((*(u16 *)(state + 8) & 4) && !(*(u16 *)(state + 8) & 8)) {
            func_020dd810(actor, 0xe, 0);
            func_020331d0(state, 8, 1);
        }
        break;
    case 4:
        if (*(s16 *)(state + 0x30) == 0) {
            *(s16 *)(state + 0x30) = 1;
            func_0210d27c(0x7e);
        }
        if (!(*(u16 *)(state + 8) & 1)) {
            *(s16 *)(state + 2) += 1;
            *(s32 *)actor += 0x1000;
            if (*(s16 *)(state + 2) >= 20) {
                *(s16 *)(state + 2) = 0;
                func_020331d0(state, 1, 1);
            }
        }
        if (!(*(u16 *)(state + 8) & 2)) {
            *(s16 *)(state + 4) += 1;
            *(s32 *)(actor + 0x54) = ((20 - *(s16 *)(state + 4)) * 0x1000) / 20;
            if (*(s16 *)(state + 4) >= 20) {
                *(u32 *)(actor + 0x80) &= ~2;
                func_020331d0(state, 2, 1);
            }
        }
        if ((*(u16 *)(state + 8) & 1) && (*(u16 *)(state + 8) & 2)) {
            *(s16 *)(state + 2) += 1;
            if (*(s16 *)(state + 2) >= 15) {
                next = 9;
            }
        }
        break;
    case 9:
        if (!(*(u16 *)(state + 8) & 1)) {
            u8 *eff;
            func_0210d27c(0x73);
            pos.x = 0xc0000;
            pos.y = 0x80000;
            pos.z = 0x258000;
            eff = func_020c1370(0, &pos, 0x82d, 0, 0);
            *(s32 *)(eff + 0x38) = 1;
            *(s32 *)(eff + 0x20) = (*(s32 *)(eff + 0x20) * 3) / 5;
            *(s32 *)(eff + 0x24) = (*(s32 *)(eff + 0x24) * 3) / 5;
            pos.x = 0x80000;
            pos.y = 0x60000;
            pos.z = 0x258000 - 0x27000;
            func_020c1370(1, &pos, 0x82d, 1, 0x380);
            func_020331d0(state, 1, 1);
        }
        if (!(*(u16 *)(state + 8) & 2)) {
            u8 *eff = func_020ec950(0);
            if (eff) {
                *(s32 *)(eff + 0x20) += 0x199;
                *(s32 *)(eff + 0x24) += 0x199;
                (*(u8 **)(*(u8 **)eff + 8))[0x71] -= 2;
                if ((*(u8 **)(*(u8 **)eff + 8))[0x71] < 2) {
                    (*(u8 **)(*(u8 **)eff + 8))[0x71] = 0;
                    func_020ec548();
                    func_020331d0(state, 2, 1);
                }
            }
        }
        if (!(*(u16 *)(state + 8) & 4)) {
            if (*(s32 *)(*(u8 **)func_020ec950(1) + 0x20)) {
                func_020ec950(1);
                func_020ec548();
                func_020331d0(state, 4, 1);
            }
        }
        if ((*(u16 *)(state + 8) & 2) && (*(u16 *)(state + 8) & 4)) {
            *(s16 *)(state + 0x30) = 0;
            next = 10;
        }
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 19:
        break;
    }
    if (next) {
        func_020331b0(state, next);
    }
}
