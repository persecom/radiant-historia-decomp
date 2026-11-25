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
void func_0203447c(u8 *actor)
{
    typedef struct { s32 x, y, z; } Vec;
    typedef struct { u16 phase; volatile s16 timer; u8 pad04[4]; u16 flags; u8 pad0a[0xe]; Vec savedActor; Vec savedTarget; } State;
    typedef struct Node { u8 *obj; u8 pad04[0x14]; struct Node *next; } Node;
    typedef struct { u8 *object; u8 pad04[0x10]; s32 x, y; u8 pad1c[4]; s32 sx, sy; } Effect;
    extern u8 *func_020dde4c(u16);
    extern u8 *func_020c1370(s32, void *, s32, s32, s32);
    extern u8 *func_020ec950(s32);
    extern void func_020ec548(u8 *);
    extern void func_020d9d10(s32, s32, s32);
    extern void func_0205db90(u8 *, u8 *, s32, s32);
    extern void func_02002028(s32);
    extern s64 func_02001fd0(void);
    extern u32 data_0216263c[];
    extern s32 data_02170248[];
    extern s32 data_02170204[];
    register u8 *target asm("r5");
    register State *state asm("r6");
    u8 *ctx = *(u8 **)(actor + 0x128);
    target = *(u8 **)ctx;
    state = *(State **)(ctx + 0x8c);
    s32 zero = 0;
    s32 next = 0;
    s32 one = 1;
    Vec pos;
    u16 i;
    switch (state->phase) {
    case 0: {
        Node *node;
        func_020d9ea8(0x28, next);
        *(u16 *)(data_02160a74 + 0x1e0) = next;
        state->savedActor.x = *(s32 *)(actor + 0);
        state->savedActor.y = *(s32 *)(actor + 4);
        state->savedActor.z = *(s32 *)(actor + 8);
        func_020d907c(actor);
        (*(u8 **)data_02160244)[0x6c] = one;
        func_020d9d8c(0x20);
        func_020d9dc8(actor, *(u16 *)(actor + 0x90), 0x10, next);
        node = (Node *)func_0205bad4(ctx);
        while (node != NULL) {
            u8 *obj = node->obj;
            if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                *(s32 *)(obj + 0xd4) = *(s32 *)(obj + 0);
                *(s32 *)(obj + 0xd8) = *(s32 *)(obj + 4);
                *(s32 *)(obj + 0xdc) = *(s32 *)(obj + 8);
            }
            node = node->next;
        }
        next = 1;
        break;
    }
    case 1:
        if (!(state->flags & 1)) {
            *(s32 *)(actor + 0x78) = 0x8fc;
            func_02033274(actor, *(s32 *)(target + 0), *(s32 *)(target + 4), *(s32 *)(target + 8));
            func_020dd810(actor, one, next);
            func_020331d0((u8 *)state, one, one);
        }
        if (func_020331f0(actor)) {
            func_020331d0((u8 *)state, 1, 0);
            next = 3;
        }
        break;
    case 3:
        if (state->flags & 1) {
            s32 result = func_0205bcb0(actor, 3);
            if (result & 1) {
                Node *node;
                func_020c17bc(actor, 0x439, 0x270f, next, next);
                node = (Node *)func_0205bad4(ctx);
                while (node != NULL) {
                    u8 *obj = node->obj;
                    if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                        if (!(*(u32 *)(*(u8 **)(obj + 0x118) + 0x78) & 0x20)) {
                            func_020dd810(obj, 9, zero);
                        }
                    }
                    node = node->next;
                }
                func_0210d27c(0x72);
            }
            if (result & 2) {
                func_020dd810(actor, 0xe, 0);
                next = 9;
            }
        }
        if (!(state->flags & 1)) {
            func_020dd810(actor, 2, 0);
            func_020331d0((u8 *)state, 1, 1);
        }
        break;
    case 9:
        state->timer++;
        if (state->timer > 10) {
            func_020dd810(actor, 0x10, next);
            actor[0x192] = 0x28;
            *(s32 *)(actor + 0x64) = next;
            *(s32 *)(target + 0x64) = next;
            target[0x192] = 0x64;
            *(s32 *)(target + 0) = *(s32 *)(actor + 0);
            *(s32 *)(target + 8) = *(s32 *)(actor + 8);
            *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x40000;
            func_02035c3c(target, 3);
            if (*(u16 *)(target + 0x8e) >= 0x320) {
                *(s32 *)(target + 0x64) = next;
                target[0x192] = 0x64;
            }
            func_020d907c(actor);
            (*(u8 **)data_02160244)[0x6c] = one;
            func_020d9d8c(0x20);
            func_020d9dc8(actor, *(u16 *)(actor + 0x90), 0x10, 0);
            (*(u8 **)data_02160244)[0x6c] = 8;
            func_0210d27c(0x63);
            next = 10;
        }
        break;
    case 10:
        if ((*(s32 *)(actor + 4) >> 12) < 0x708) {
            Node *node;
            s32 y = *(s32 *)(actor + 4) + 0x14000;
            *(s32 *)(actor + 4) = y;
            if ((y >> 12) >= 0x384 && (y >> 12) <= 0x4b0) {
                *(s32 *)(actor + 4) = 0x514000;
            }
            node = (Node *)func_0205bad4(ctx);
            while (node != NULL) {
                u8 *obj = node->obj;
                if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                    *(s32 *)(obj + 4) = *(s32 *)(actor + 4) + 0x40000;
                }
                node = node->next;
            }
        }
        state->timer++;
        if (state->timer > 20 && func_020d2af4(zero, 1, 0x1f, 1, 0x212)) {
            u8 *entry = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
            u8 *selected;
            s32 mode;
            *(u32 *)(entry + 0x14) &= ~1U;
            func_020df3f4(actor, 1);
            if (*(u16 *)(target + 0x8e) >= 0x320) {
                selected = target;
                mode = 1;
            } else {
                selected = NULL;
                mode = 0;
            }
            func_020df56c(selected, mode);
            func_020331d0((u8 *)state, 4, 1);
            next = 11;
        }
        break;
    case 11: {
        s32 limit;
        if (!(state->flags & 1)) {
            *(s32 *)(actor + 0) = *(s32 *)(data_02160258 + 0);
            *(s32 *)(actor + 4) = *(s32 *)(data_02160258 + 4) - 0x64000;
            *(s32 *)(actor + 8) = *(s32 *)(data_02160258 + 8);
            *(Vec *)target = *(Vec *)actor;
            *(s32 *)(target + 4) += 0x10000;
            func_020c17bc(actor, 0xff2, 1000, 2, next);
            func_020c17bc(actor, 0xff2, 1001, 2, next);
            func_020c17bc(actor, 0xff2, 1002, 2, next);
            func_020c17bc(actor, 0xff2, 1003, 2, next);
            func_020c17bc(actor, 0xff2, 1004, 2, next);
            func_020c17bc(actor, 0xff2, 1005, 2, next);
            for (i = 0; i < 6; i++) {
                *(s32 *)(func_020dde4c((u16)(i + 1000)) + 0x78) = 0x20;
            }
            func_0210d27c(0x7e);
            func_020331d0((u8 *)state, 1, 1);
        }
        *(s32 *)(actor + 4) += 0x8000;
        limit = *(s32 *)(data_02160258 + 4) - 0x1e000;
        if (*(s32 *)(actor + 4) > limit) {
            *(s32 *)(actor + 4) = limit;
            next = 12;
        }
        *(s32 *)target = *(s32 *)actor;
        if (*(u16 *)(target + 0x8e) < 0x320) {
            switch (*(u16 *)(target + 0x8e)) {
            case 0x137: case 0x138: case 0x139: case 0x13a:
            case 0x155: case 0x156: case 0x157: case 0x158: case 0x159:
            case 0x1a5: case 0x1a6: case 0x1a7: case 0x1a8: case 0x1a9: case 0x1aa:
                *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x32000;
                break;
            case 0x15f: case 0x160: case 0x161: case 0x162: case 0x163:
            case 0x173: case 0x174: case 0x175: case 0x176: case 0x177:
            case 0x1b9: case 0x1ff: case 0x200:
                *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x34000;
                break;
            case 0x191: case 0x192: case 0x193: case 0x194: case 0x195:
                *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x24000;
                break;
            case 0x19b: case 0x19c: case 0x19d: case 0x19e: case 0x19f:
                *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x38000;
                break;
            case 0x295:
                *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x28000;
                break;
            default:
                *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x3a000;
                break;
            }
        } else {
            *(s32 *)(target + 4) = *(s32 *)(actor + 4) + 0x8000;
        }
        break;
    }
    case 12:
        if (!(state->flags & 1)) {
            for (i = 0; i < 6; i++) {
                *(s32 *)(func_020dde4c((u16)(i + 1000)) + 0x78) = 0x10;
            }
            func_020331d0((u8 *)state, 1, 1);
        }
        state->timer++;
        if (state->timer > 16) next = 13;
        break;
    case 13:
        if (!(state->flags & 1)) {
            for (i = 0; i < 6; i++) {
                u8 *obj = func_020dde4c((u16)(i + 1000));
                *(s32 *)(obj + 0x78) = 8;
                func_020dd810(obj, 3, zero);
            }
            func_020331d0((u8 *)state, 1, 1);
        }
        state->timer++;
        if (state->timer > 8) next = 14;
        break;
    case 14:
        if (!(state->flags & 1)) {
            for (i = 0; i < 6; i++) {
                u8 *obj = func_020dde4c((u16)(i + 1000));
                *(s32 *)(obj + 0x78) = 4;
                func_020dd810(obj, zero, zero);
            }
            func_020331d0((u8 *)state, 1, 1);
        }
        state->timer++;
        if (state->timer > 8) next = 15;
        break;
    case 15:
        if (!(state->flags & 1)) {
            Effect *effect;
            pos.x = 0x2e000;
            pos.y = 0x2d000;
            pos.z = 0x21c000;
            effect = (Effect *)func_020c1370(next, &pos, 0x823, next, next);
            effect->sx = one;
            effect->sy = one;
            pos.x = 0xcb000;
            pos.y = 0x96000;
            pos.z = 0x21c000;
            effect = (Effect *)func_020c1370(one, &pos, 0x823, one, 0x940);
            effect->sx = one;
            effect->sy = one;
            func_0210d27c(0x7a);
            func_020331d0((u8 *)state, one, one);
        }
        for (i = 0; i < 2; i++) {
            Effect *effect = (Effect *)func_020ec950(i);
            if (i == 0) {
                effect->x = 0x2e000;
                effect->y = 0x2d000;
            } else if (i == 1) {
                effect->x = 0xcb000;
                effect->y = 0x96000;
            }
            effect->sx += 0x200;
            effect->sy += 0x200;
            if (effect->sx > 0x1000) {
                effect->sx = 0x1000;
                effect->sy = 0x1000;
                data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                effect->x += ((s32)(u16)(((data_0216263c[0] >> 16) * 20U) >> 16) - 10) * 0x1000;
                data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                effect->y += ((s32)(u16)(((data_0216263c[0] >> 16) * 20U) >> 16) - 10) * 0x1000;
            }
        }
        state->timer++;
        if (state->timer > 16) next = 16;
        break;
    case 16:
        if (!(state->flags & 1)) {
            u8 *effect;
            u8 *obj;
            pos.x = 0x2e000;
            pos.y = 0x37000;
            pos.z = 0x21c000;
            func_020c1370(2, &pos, 0x824, 6, 0x1280);
            pos.x = 0x2e000;
            pos.y = 0x2d000;
            pos.z = 0x21c000;
            func_020c1370(3, &pos, 0x824, 5, 0x1f40);
            pos.x = 0xcb000;
            pos.y = 0xa0000;
            pos.z = 0x21c000;
            effect = func_020c1370(4, &pos, 0x824, 6, 0x2c00);
            obj = *(u8 **)(*(u8 **)effect + 8);
            *(s32 *)obj += 0x10;
            pos.x = 0xcb000;
            pos.y = 0x96000;
            pos.z = 0x21c000;
            effect = func_020c1370(5, &pos, 0x824, 5, 0x38c0);
            (*(u8 **)(*(u8 **)effect + 8))[0x70] |= 2;
            obj = *(u8 **)(*(u8 **)effect + 8);
            *(s32 *)obj += 0x10;
            effect = func_020ec950(0);
            *(s32 *)(effect + 0x14) = 0x2e000;
            *(s32 *)(effect + 0x18) = 0x2d000;
            effect = func_020ec950(1);
            *(s32 *)(effect + 0x14) = 0xcb000;
            *(s32 *)(effect + 0x18) = 0x96000;
            func_020331d0((u8 *)state, 1, 1);
        }
        state->timer++;
        if (state->timer > 20) next = 23;
        break;
    case 23:
        func_020dd810(actor, 0x11, next);
        func_0210d27c(0x7f);
        for (i = 0; i < 6; i++) {
            u8 *obj = func_020dde4c((u16)(i + 1000));
            *(s32 *)(obj + 0x78) = 8;
            func_020dd810(obj, 8, zero);
            if (*(s32 *)(obj + 4) < 0) {
                u32 r = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                u16 v = (u16)(((r >> 16) * 100U) >> 16);
                data_0216263c[0] = r;
                *(s32 *)(obj + 4) = v + 0xc0;
            }
        }
        state->timer = 0;
        next = 24;
        break;
    case 24:
        *(s32 *)(target + 4) -= 0x14000;
        state->timer++;
        if (state->timer > 10) {
            state->timer = next;
            next = 17;
        }
        break;
    case 17:
        if (state->timer == 0) {
            Node *node = (Node *)func_0205bad4(ctx);
            while (node != NULL) {
                u8 *obj = node->obj;
                if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                    *(s32 *)(obj + 0) = *(s32 *)(obj + 0xd4);
                    *(s32 *)(obj + 4) = 0x12c000;
                    *(s32 *)(obj + 8) = *(s32 *)(obj + 0xdc);
                }
                node = node->next;
            }
            if (*(u16 *)(target + 0x8e) == 0x353 && *(u16 *)(target + 0x8c) == 0xea67) {
                *(s32 *)(target + 4) += 0xa0000;
            }
        }
        state->timer++;
        if (state->timer > 20 && func_020d2af4(one, one, 0x1f, 0, 0x2bc)) {
            state->savedTarget = *(Vec *)target;
            state->savedTarget.y -= 0x40000;
            func_020d907c((u8 *)&state->savedTarget);
            (*(u8 **)data_02160244)[0x6c] = one;
            for (i = 0; i < 6; i++) {
                u8 *effect = func_020ec950(i);
                if (effect != NULL) func_020ec548(effect);
            }
            next = 18;
        }
        break;
    case 18:
        if (!(state->flags & 1)) {
            u8 *entry;
            for (i = 0; i < 8; i++) {
                u8 *obj = func_020dde4c((u16)(i + 1000));
                if (obj != NULL) obj[0xa5] = one;
            }
            entry = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
            *(u32 *)(entry + 0x14) |= 1;
            func_020d2af4(zero, -0x1f, zero, zero, 0x21c);
            func_020df3f4(actor, zero);
            func_020df56c(NULL, zero);
            actor[0x192] = zero;
            target[0x192] = zero;
            func_02035c3c(target, one);
            state->savedTarget = *(Vec *)target;
            state->savedTarget.y -= 0x40000;
            func_020d907c((u8 *)&state->savedTarget);
            (*(u8 **)data_02160244)[0x6c] = one;
            *(s32 *)(actor + 4) = 0x20000;
            *(u32 *)(actor + 0x80) &= ~2U;
            func_020331d0((u8 *)state, one, one);
        }
        if (func_020d2af4(one, -11, zero, zero, 0x2bc)) {
            next = 19;
            func_020331d0((u8 *)state, one, zero);
            func_020331d0((u8 *)state, 2, zero);
            func_020331d0((u8 *)state, 4, zero);
            state->savedTarget = *(Vec *)target;
            state->savedTarget.y -= 0x40000;
            func_020d907c((u8 *)&state->savedTarget);
        }
        break;
    case 19:
        if (!(state->flags & 1)) {
            Node *node;
            u16 total = 0;
            u16 done = 0;
            node = (Node *)func_0205bad4(ctx);
            while (node != NULL) {
                u8 *obj = node->obj;
                if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                    total++;
                    if (*(s32 *)(obj + 4) > *(s32 *)(obj + 0xd8)) {
                        *(s32 *)(obj + 4) -= 0x14000;
                    } else {
                        *(s32 *)(obj + 0) = *(s32 *)(obj + 0xd4);
                        *(s32 *)(obj + 4) = *(s32 *)(obj + 0xd8);
                        *(s32 *)(obj + 8) = *(s32 *)(obj + 0xdc);
                        done++;
                    }
                }
                node = node->next;
            }
            state->savedTarget = *(Vec *)target;
            state->savedTarget.y -= 0x40000;
            func_020d907c((u8 *)&state->savedTarget);
            if (total == done) {
                Effect *effect;
                data_02160244[0x10d] = 0;
                func_020d9d10(3, 0, 10);
                pos.x = 0x58000;
                pos.y = 0x80000;
                pos.z = 0x21c000;
                func_020c1370(0, &pos, 0x825, 1, 0);
                pos.x = 0x58000;
                pos.y = 0x80000;
                pos.z = 0x21b000;
                effect = (Effect *)func_020c1370(1, &pos, 0x825, 2, 0x840);
                effect->sx = 0x800;
                effect->sy = 0x800;
                func_0205db90(actor, target, 4, 3);
                func_0210d27c(0x90);
                func_020331d0((u8 *)state, 1, 1);
                func_020331d0((u8 *)state, 2, 1);
            }
        }
        if (state->flags & 2) {
            s32 x, y, z, tx, ty, tz, w, px, py;
            s32 sx, sy;
            s64 inv;
            Effect *effect;
            u8 *obj;
            x = *(s32 *)(target + 0);
            y = *(s32 *)(target + 4);
            z = *(s32 *)(target + 8);
            ty = data_02170248[10] + (s32)(((s64)y * data_02170248[4] + (s64)x * data_02170248[1] + (s64)z * data_02170248[7]) >> 12);
            tx = data_02170248[9] + (s32)(((s64)y * data_02170248[3] + (s64)x * data_02170248[0] + (s64)z * data_02170248[6]) >> 12);
            tz = data_02170248[11] + (s32)(((s64)y * data_02170248[5] + (s64)x * data_02170248[2] + (s64)z * data_02170248[8]) >> 12);
            w = data_02170204[15] + (s32)(((s64)ty * data_02170204[7] + (s64)tx * data_02170204[3] + (s64)tz * data_02170204[11]) >> 12);
            func_02002028(w);
            px = data_02170204[12] + (s32)(((s64)ty * data_02170204[4] + (s64)tx * data_02170204[0] + (s64)tz * data_02170204[8]) >> 12);
            py = data_02170204[13] + (s32)(((s64)ty * data_02170204[5] + (s64)tx * data_02170204[1] + (s64)tz * data_02170204[9]) >> 12);
            inv = func_02001fd0();
            sy = ((s32)(((s64)py * inv + 0x80000000ULL) >> 32) + 0x1000) >> 1;
            sy = 0xc0 - ((sy * 0xc0 + 0x800) >> 12);
            sx = ((s32)(((s64)px * inv + 0x80000000ULL) >> 32) + 0x1000) >> 1;
            sx = (sx * 0x100 + 0x800) >> 12;
            effect = (Effect *)func_020ec950(0);
            if (effect != NULL) {
                effect->x = sx * 0x1000;
                effect->y = sy * 0x1000;
                effect->sx += 0x100;
                effect->sy += 0x200;
                if (effect->sy > 0x2000) {
                    obj = *(u8 **)(effect->object + 8);
                    obj[0x71] -= 2;
                    obj = *(u8 **)(effect->object + 8);
                    if (obj[0x71] < 2) {
                        obj[0x71] = zero;
                        func_020ec548((u8 *)effect);
                    }
                }
            }
            effect = (Effect *)func_020ec950(1);
            if (effect != NULL) {
                effect->x = sx * 0x1000;
                effect->y = sy * 0x1000;
                effect->sx += 0x200;
                effect->sy += 0x200;
                if (effect->sx > 0x2000) {
                    obj = *(u8 **)(effect->object + 8);
                    obj[0x71] -= 2;
                    obj = *(u8 **)(effect->object + 8);
                    if (obj[0x71] < 2) {
                        obj[0x71] = 0;
                        func_020ec548((u8 *)effect);
                    }
                }
            }
            func_020331d0((u8 *)state, 4, 1);
        }
        if ((state->flags & 4) && func_020ec950(zero) == NULL && func_020ec950(1) == NULL) {
            Node *node;
            func_020d9d10(2, zero, zero);
            node = (Node *)func_0205bad4(ctx);
            while (node != NULL) node = node->next;
            next = 20;
        }
        break;
    case 20:
        if (!(state->flags & 1)) {
            (*(u8 **)data_02160244)[0x6c] = 2;
            *(s32 *)(actor + 4) = 0x12c000;
            *(u32 *)(actor + 0x80) |= 2;
            func_020dd810(actor, 5, next);
            func_020331d0((u8 *)state, one, one);
            state->timer = next;
            next = 21;
        }
        break;
    case 21:
        state->timer++;
        if (state->timer > 10) {
            next = 26;
            (*(u8 **)data_02160244)[0x6c] = 2;
        }
        break;
    }
    if (next != 0) {
        func_020331b0((u8 *)state, next);
    }
    for (i = 0; i < 6; i++) {
        u8 *obj = func_020dde4c((u16)(i + 1000));
        if (obj != NULL) {
            switch (obj[0x104]) {
            case 0:
            case 2:
            case 3: {
                s32 half;
                s32 val;
                u32 r;
                u16 range;
                obj[0xa1] |= 2;
                half = *(s32 *)(obj + 0x78) / 2;
                if (half != 0) {
                    data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                    r = data_0216263c[0] >> 16;
                    range = (u16)(half * 2);
                    if (range != 0) r = (r * range) >> 16;
                    val = (s32)(u16)r - *(s32 *)(obj + 0x78) / 2;
                } else {
                    val = zero;
                }
                *(s32 *)(obj + 0x68) = val;
                half = *(s32 *)(obj + 0x78) / 2;
                if (half != 0) {
                    data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                    r = data_0216263c[0] >> 16;
                    range = (u16)(half * 2);
                    if (range != 0) r = (r * range) >> 16;
                    val = (s32)(u16)r - *(s32 *)(obj + 0x78) / 2;
                } else {
                    val = zero;
                }
                *(s32 *)(obj + 0x70) = val;
                *(s32 *)(obj + 4) += *(s32 *)(obj + 0x78);
                if (*(s32 *)(obj + 4) > 0x124) {
                    data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                    *(s32 *)(obj + 0) = (u16)(((data_0216263c[0] >> 16) * 0xf0U) >> 16) + 10;
                    data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                    *(s32 *)(obj + 4) = -((s32)(u16)(((data_0216263c[0] >> 16) * 0xc8U) >> 16) + 10);
                }
                break;
            }
            case 8:
                *(s32 *)(obj + 4) -= *(s32 *)(obj + 0x78);
                if (*(s32 *)(obj + 4) < -40) {
                    *(s32 *)(obj + 4) = -40;
                    func_020dd810(obj, 9, zero);
                }
                if (func_0205bcb0(obj, zero) & 2) {
                    func_020dd810(obj, 9, zero);
                }
                break;
            case 9:
                *(s32 *)(obj + 4) -= *(s32 *)(obj + 0x78);
                if (*(s32 *)(obj + 4) < 0x50) *(s32 *)(obj + 4) = 0x50;
                break;
            }
        }
    }
}
