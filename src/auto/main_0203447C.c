/* 1 function from 0x0203447C to 0x02035C3C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74, *data_02160244, *data_02160204, *data_02160258;
extern void func_020d9ea8(s32, s32);
extern void func_020d907c(u8 *);
extern void func_020d9d8c(s32);
extern void func_020d9dc8(u8 *, u16, s32, s32);
extern u8 *func_0205bad4(u8 *);
extern void func_02033274(u8 *, s32, s32, s32);
extern void func_020dd810(u8 *, s32, s32);
extern void func_020331d0(u8 *, u16, s32);
extern void func_020331b0(u8 *, s32);
extern s32 func_020331f0(u8 *);
extern s32 func_0205bcb0(u8 *, s32);
extern void func_020c17bc(u8 *, s32, s32, s32, s32);
extern void func_0210d27c(s32);
extern void func_02035c3c(u8 *, s32);
extern s32 func_020d2af4(s32, s32, s32, s32, s32);
extern u8 *func_020f0a5c(u16);
extern void func_020df3f4(u8 *, s32);
extern void func_020df56c(u8 *, s32);
void func_0203447c(u8 *actor) {
    u8 *ctx = *(u8 **)(actor + 0x128);
    u8 *state = *(u8 **)(ctx + 0x8c);
    u8 *target = *(u8 **)ctx;
    s16 next = 0;

    switch (*(u16 *)state) {
    case 0: {
        u8 *node;
        func_020d9ea8(0x28, 0);
        *(u16 *)(data_02160a74 + 0x1e0) = 0;
        *(s32 *)(state + 0x18) = *(s32 *)(actor + 0);
        *(s32 *)(state + 0x1c) = *(s32 *)(actor + 4);
        *(s32 *)(state + 0x20) = *(s32 *)(actor + 8);
        func_020d907c(actor);
        (*(u8 **)data_02160244)[0x6c] = 1;
        func_020d9d8c(0x20);
        func_020d9dc8(actor, *(u16 *)(actor + 0x90), 0x10, 0);
        node = func_0205bad4(ctx);
        while (node) {
            u8 *obj = *(u8 **)node;
            if (obj && *(u8 **)(obj + 0x118)) {
                *(s32 *)(obj + 0xd4) = *(s32 *)(obj + 0);
                *(s32 *)(obj + 0xd8) = *(s32 *)(obj + 4);
                *(s32 *)(obj + 0xdc) = *(s32 *)(obj + 8);
            }
            node = *(u8 **)(node + 0x18);
        }
        next = 1;
        break;
    }
    case 1:
        if (!(*(u16 *)(state + 8) & 1)) {
            *(s32 *)(actor + 0x78) = 0x480;
            func_02033274(actor, *(s32 *)(target + 0), *(s32 *)(target + 4), *(s32 *)(target + 8));
            func_020dd810(actor, 1, 0);
            func_020331d0(state, 1, 1);
        }
        if (func_020331f0(actor)) {
            func_020331d0(state, 1, 0);
            next = 3;
        }
        break;
    case 3:
        if (*(u16 *)(state + 8) & 1) {
            s32 res = func_0205bcb0(actor, 3);
            if (res & 1) {
                u8 *node;
                func_020c17bc(actor, 0, 0, 0, 0);
                node = func_0205bad4(ctx);
                while (node) {
                    u8 *obj = *(u8 **)node;
                    if (obj && *(u8 **)(obj + 0x118)) {
                        if (!(*(u32 *)(*(u8 **)(obj + 0x118) + 0x78) & 0x20)) {
                            func_020dd810(obj, 9, 0);
                        }
                    }
                    node = *(u8 **)(node + 0x18);
                }
                func_0210d27c(0x72);
            }
            if (res & 2) {
                func_020dd810(actor, 0xe, 0);
                next = 9;
            }
        }
        if (!(*(u16 *)(state + 8) & 1)) {
            func_020dd810(actor, 2, 0);
            func_020331d0(state, 1, 1);
        }
        break;
    case 9:
        *(s16 *)(state + 2) += 1;
        if (*(s16 *)(state + 2) > 10) {
            func_020dd810(actor, 0x10, 0);
            actor[0x192] = 0x28;
            *(s32 *)(actor + 0x64) = 0;
            *(s32 *)(target + 0x64) = 0;
            target[0x192] = 0x64;
            *(s32 *)(target + 0) = *(s32 *)(actor + 0);
            *(s32 *)(target + 8) = *(s32 *)(actor + 8);
            *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x40000;
            func_02035c3c(target, 3);
            if (*(u16 *)(target + 0x8e) >= 0x320) {
                *(s32 *)(target + 0x64) = 0;
                target[0x192] = 0x64;
            }
            func_020d907c(actor);
            (*(u8 **)data_02160244)[0x6c] = 1;
            func_020d9d8c(0x20);
            func_020d9dc8(actor, *(u16 *)(actor + 0x90), 0x10, 0);
            (*(u8 **)data_02160244)[0x6c] = 8;
            func_0210d27c(0x63);
            next = 10;
        }
        break;
    case 10:
        {
            s32 y = *(s32 *)(actor + 4);
            s32 sy = y >> 12;
            if (sy < 0x4b0) {
                y += 0x14000;
                *(s32 *)(actor + 4) = y;
                sy = y >> 12;
                if (sy >= 0x384 && sy <= 0x4b0) *(s32 *)(actor + 4) = 0x4b0000;
            }
        }
        *(s16 *)(state + 2) += 1;
        if (*(s16 *)(state + 2) > 20) {
            func_020331d0(state, 4, 1);
            next = 11;
        }
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
        break;
    }
    if (next) {
        func_020331b0(state, next);
    }
}
