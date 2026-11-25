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

void func_0203909c(u8 *actor)
{
    extern void func_02035c3c(u8 *, s32);
    extern void func_020d9ea8(s32, s32);
    extern void func_020de078(void);
    extern void func_0205db90(u8 *, u8 *, s32, s32);

    typedef struct {
        u16 phase;
        volatile s16 timer;
        volatile s16 timer2;
        s16 unk06;
        u16 flags;
        u8 pad0a[0xe];
        Vec_3909C saved;
        u8 pad24[0xc];
        volatile s16 timer30;
    } State;

    u8 *ctx = *(u8 **)(actor + 0x128);
    s32 zero = 0;
    State *s = *(State **)(ctx + 0x8c);
    u16 four = 4;
    u16 two = 2;
    s32 one = 1;
    register s16 next = zero;
    Vec_3909C pos;

    switch (s->phase) {
    case 0: {
        u8 *dst;
        s32 x = 0x1e0000;
        s32 y = 0x30000;
        s32 z = 0x200000;
        *(u16 *)(data_02160a74 + 0x1e0) = zero;
        (*(u8 **)data_02160244)[0x6c] = two;
        dst = data_02160258;
        pos.x = x;
        pos.y = y;
        pos.z = z;
        *(s32 *)(dst + 0xc) = x;
        *(s32 *)(dst + 0x10) = y;
        *(s32 *)(dst + 0x14) = z;
        s->saved = *(Vec_3909C *)actor;
        next = one;
        break;
    }
    case 1: {
        u8 **camera = &data_02160244;
        s32 mode = 8;
        u8 **position = &data_02160258;
        if (!(s->flags & 1)) {
            func_020331d0((u8 *)s, one, one);
            func_020dd810(actor, one, zero);
            *(s32 *)(actor + 0x78) = 0x8fc;
            func_02033274(actor, *(s32 *)actor - 0x12c000, *(s32 *)(actor + 4), *(s32 *)(actor + 8));
            actor[0x192] = 0x64;
            func_0210d27c(0x63);
        }
        if (!(s->flags & 2)) {
            if (func_020331f0(actor)) {
                func_020331d0((u8 *)s, 2, 1);
            }
        }
        if (!(s->flags & 4)) {
            if (func_020d2af4(zero, one, 0x1f, one, 0x208)) {
                u8 *obj = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
                *(u32 *)(obj + 0x14) &= ~1;
                func_020df3f4(actor, one);
                func_020df56c(zero, one);
                func_020331d0((u8 *)s, 4, one);
            }
        }
        if ((s->flags & 2) && (s->flags & 4)) {
            Vec_3909C tmp;
            u8 *p = *position;
            func_020332e8(&tmp);
            *(Vec_3909C *)(p + 0xc) = tmp;
            next = 3;
            *(s32 *)(p + 0xc) -= 0xa0000;
            *(s32 *)(*position + 0x10) += 0xa000;
            *(Vec_3909C *)*position = *(Vec_3909C *)(*position + 0xc);
            (**(u8 ***)camera)[0x6c] = mode;
        }
        break;
    }
    case 3: {
        u8 **position = &data_02160258;
        if (!(s->flags & 1)) {
            *(s32 *)actor = *(s32 *)*position + 0x6c000;
            *(s32 *)(actor + 4) = *(s32 *)(*position + 4) - 0xd000;
            *(s32 *)(actor + 8) = *(s32 *)(*position + 8);
            func_020331d0((u8 *)s, 1, 1);
        }
        if ((s->flags & 1) && !(s->flags & 2)) {
            func_020331d0((u8 *)s, two, 1);
            *(s32 *)(actor + 0x78) = 0x480 - two;
            func_02033274(actor, *(s32 *)*position - 0xa000, *(s32 *)(actor + 4), *(s32 *)(actor + 8));
        }
        if (!(s->flags & 4)) {
            if (func_020331f0(actor)) {
                func_020331d0((u8 *)s, 4, 1);
            }
        }
        if (actor[0x104] == 0xe) {
            if (func_0205bcb0(actor, 2) & 1) {
                func_0210d27c(0x80);
            }
            if ((func_0205bcb0(actor, zero) & 2) && (s->flags & 8)) {
                func_020dd810(actor, 0xf, zero);
                s->timer30 = zero;
                next = 4;
            }
        }
        if ((s->flags & 4) && !(s->flags & 8)) {
            func_020dd810(actor, 0xe, 0);
            func_020331d0((u8 *)s, 8, 1);
        }
        break;
    }
    case 4:
        if (s->timer30 == 0) {
            s->timer30 = one;
            func_0210d27c(0x7e);
        }
        if (!(s->flags & 1)) {
            s->timer += 1;
            *(s32 *)actor += -0x2199;
            if (s->timer >= 20) {
                s->timer = zero;
                func_020331d0((u8 *)s, 1, 1);
            }
        }
        if (!(s->flags & 2)) {
            s->timer2 += 1;
            *(s32 *)(actor + 0x54) = ((20 - s->timer2) * 0x1000) / 20;
            if (s->timer2 >= 20) {
                *(u32 *)(actor + 0x80) &= ~2;
                func_020331d0((u8 *)s, 2, 1);
            }
        }
        if ((s->flags & 1) && (s->flags & 2)) {
            s->timer += 1;
            if (s->timer >= 15) next = 9;
        }
        break;
    case 9: {
        s32 effectId = 0x7f1;
        if (!(s->flags & 1)) {
            u8 *eff;
            s32 depth;
            s32 width;
            func_0210d27c(0x73);
            depth = 0x24e000;
            width = 0x80000;
            pos.x = 0xc0000;
            pos.y = width;
            pos.z = depth;
            eff = func_020c1370(zero, &pos, effectId, zero, zero);
            *(s32 *)(eff + 0x38) = one;
            *(s32 *)(eff + 0x20) = (*(s32 *)(eff + 0x20) * 3) / 5;
            depth -= 0x27000;
            *(s32 *)(eff + 0x24) = (*(s32 *)(eff + 0x24) * 3) / 5;
            pos.x = width;
            pos.y = 0x60000;
            pos.z = depth;
            func_020c1370(one, &pos, effectId, one, 0x380);
            func_020331d0((u8 *)s, one, one);
        }
        if (!(s->flags & 2)) {
            u8 *eff = func_020ec950(zero);
            if (eff != NULL) {
                *(s32 *)(eff + 0x20) += 0x199;
                *(s32 *)(eff + 0x24) += 0x199;
                (*(u8 **)(*(u8 **)eff + 8))[0x71] -= 2;
                if ((*(u8 **)(*(u8 **)eff + 8))[0x71] < 2) {
                    (*(u8 **)(*(u8 **)eff + 8))[0x71] = zero;
                    ((void (*)(u8 *))func_020ec548)(eff);
                    func_020331d0((u8 *)s, 2, 1);
                }
            }
        }
        if (!(s->flags & 4)) {
            if (*(s32 *)(*(u8 **)func_020ec950(one) + 0x20)) {
                ((void (*)(u8 *))func_020ec548)(func_020ec950(one));
                func_020331d0((u8 *)s, 4, one);
            }
        }
        if ((s->flags & 2) && (s->flags & 4)) {
            s->timer30 = zero;
            next = 10;
        }
        break;
    }
    case 10:
        if (!(s->flags & 1)) {
            u8 *node;
            s32 found = zero;
            s32 x, y, z;
            for (node = *(u8 **)(data_02160a6c + 0xb8); node != NULL; node = *(u8 **)(node + 0x174)) {
                if (*(u16 *)(node + 0x8e) == 0x353) found = one;
            }
            x = 0x80000;
            y = 0x60000;
            if (found == 1) z = 0x235000;
            else z = 0x24e000;
            pos.x = x;
            pos.y = y;
            pos.z = z;
            func_020ec8cc(func_020c1370(4, &pos, 0x7f1, 7, 0x200), 0, 0);
            pos.x = x;
            pos.y = y;
            pos.z = z;
            func_020c1370(6, &pos, 0x7f1, 6, 0x700);
            func_020331d0((u8 *)s, 1, 1);
        }
        if (!(s->flags & 2)) {
            func_020331d0((u8 *)s, 2, 1);
        }
        if (!(s->flags & 4)) {
            if (*(s32 *)(*(u8 **)func_020ec950(6) + 0x20)) {
                ((void (*)(u8 *))func_020ec548)(func_020ec950(6));
                func_020ec8cc(func_020ec950(four), one, 0);
                func_020331d0((u8 *)s, four, one);
            }
        }
        s->timer30 += 1;
        if (s->timer30 % 3 == 0) func_0210d27c(0x91);
        if ((s->flags & 2) && (s->flags & 4)) {
            s->timer += 1;
            if (s->timer >= 15) {
                s->timer30 = zero;
                next = 11;
            }
        }
        break;
    case 11: {
        if (!(s->flags & 1)) {
            func_020dd810(actor, 0x10, zero);
            *(u32 *)(actor + 0x80) |= 2;
            *(s32 *)actor = *(s32 *)data_02160258 - 0x6e000;
            pos.x = 0x141000;
            pos.y = 0x6f000;
            pos.z = 0x21c000 + 0x6f000;
            func_020c1370(7, &pos, 0x7f1, 9, 0x600);
            func_020331d0((u8 *)s, 1, 1);
        }
        if (!(s->flags & 2)) {
            u8 *eff;
            s->timer += 1;
            *(s32 *)actor += 0x5000;
            eff = func_020ec950(7);
            *(s32 *)(eff + 0x14) -= 0xa000;
            pos = *(Vec_3909C *)(eff + 0x14);
            pos.x += 0x14000;
            pos.y += 0x10000;
            if (s->timer >= 20) {
                s->timer = zero;
                func_020331d0((u8 *)s, 2, 1);
            }
        }
        s->timer30 += 1;
        if (s->timer30 % 3 == 0) func_0210d27c(0x91);
        if (s->flags & 2) {
            s->timer += 1;
            if (s->timer >= 15) {
                s->timer30 = zero;
                next = 12;
            }
        }
        break;
    }
    case 12:
        if (!(s->flags & 1)) {
            u8 *head;
            u8 *node;
            register u8 *selected;
            s32 found;
            func_020df56c(zero, zero);
            head = *(u8 **)(data_02160a6c + 0xb8);
            selected = NULL;
            found = zero;
            for (node = head; node != NULL; node = *(u8 **)(node + 0x174)) {
                switch (*(u16 *)(node + 0x8e)) {
                case 0x321:
                case 0x32b:
                case 0x335:
                case 0x33f:
                case 0x349:
                case 0x353:
                case 0x35d:
                    found = one;
                    selected = node;
                    break;
                }
            }
            if (!found) {
                for (node = head; node != NULL; node = *(u8 **)(node + 0x174)) {
                    u8 *p = *(u8 **)(node + 0x128);
                    if (p != NULL) {
                        *(s32 *)(node + 0x64) = 0;
                        node[0x192] = (u8)((s8)p[0xa8] * 10 + 90);
                    }
                }
            } else {
                func_02035c3c(selected, 2);
            }
            func_020331d0((u8 *)s, 1, 1);
        }
        if (!(s->flags & 8)) {
            s32 eight = 8;
            if (s->flags & 4) {
                *(s32 *)actor += 0xf000;
                if (s->flags & 2) {
                    u8 *eff = func_020ec950(7);
                    *(s32 *)(eff + 0x14) -= 0x1e000;
                    pos = *(Vec_3909C *)(eff + 0x14);
                    pos.x += 0x14000;
                    pos.y += 0x10000;
                }
                func_020332e8(&pos);
                if (*(s32 *)actor >= pos.x + 0x64000) {
                    *(u32 *)(actor + 0x80) &= ~2;
                    ((void (*)(u8 *))func_020ec548)(func_020ec950(7));
                    ((void (*)(u8 *))func_020ec548)(func_020ec950(eight));
                    func_020331d0((u8 *)s, eight, 1);
                }
            }
            func_020331d0((u8 *)s, 4, 1);
        }
        if ((s->flags & 0x10) && !(s->flags & 0x20)) {
            if (func_020d2af4(one, one - 12, 0, 0, 0x2bc)) {
                func_020331d0((u8 *)s, 0x20, one);
            }
        }
        if ((s->flags & 2) && !(s->flags & 0x10)) {
            if (s->timer30 == 0) {
                s->timer30 = 1;
                func_0210d27c(0x6f);
            }
            if (func_020d2af4(one, 0xb, 0x1f, zero, 0x2bc)) {
                pos.x = 0x80000;
                pos.y = 0x60000;
                pos.z = 0x24e000;
                func_020ec8cc(func_020c1370(6, &pos, 0x7f1, 8, 0x1700), zero, zero);
                func_020331d0((u8 *)s, 0x10, one);
            }
        }
        if ((s->flags & 0x10) && !(s->flags & 0x40)) {
            ((void (*)(u8 *))func_020ec548)(func_020ec950(2));
            ((void (*)(u8 *))func_020ec548)(func_020ec950(3));
            ((void (*)(u8 *))func_020ec548)(func_020ec950(4));
            func_020ec8cc(func_020ec950(5), one, zero);
            func_020ec8cc(func_020ec950(6), one, zero);
            func_020331d0((u8 *)s, 0x40, one);
        }
        if ((s->flags & 0x40) && !(s->flags & 0x80)) {
            func_020331d0((u8 *)s, 0x80, 1);
        }
        if ((s->flags & 0x40) && !(s->flags & 0x100)) {
            if (*(s32 *)(*(u8 **)func_020ec950(6) + 0x20)) {
                ((void (*)(u8 *))func_020ec548)(func_020ec950(6));
                func_020331d0((u8 *)s, 0x100, 1);
            }
        }
        if (!(s->flags & 2)) {
            *(s32 *)(data_02160258 + 0xc) += 0xf000;
            func_020332e8(&pos);
            if (*(s32 *)(data_02160258 + 0xc) >= pos.x) {
                u8 *node;
                *(s32 *)(data_02160258 + 0xc) = pos.x;
                for (node = *(u8 **)(data_02160a6c + 0xb8); node != NULL; node = *(u8 **)(node + 0x174)) {
                    func_020dd810(node, zero, zero);
                    *(s32 *)(node + 0xf8) = one;
                }
                func_020331d0((u8 *)s, 2, 1);
            }
            *(Vec_3909C *)data_02160258 = *(Vec_3909C *)(data_02160258 + 0xc);
        }
        if ((s->flags & 2) && (s->flags & 8) && (s->flags & 0x20) &&
            (s->flags & 0x80) && (s->flags & 0x100)) {
            s->timer += 1;
            if (s->timer >= 15) next = 13;
        }
        break;
    case 13: {
        s32 effectId = 0x7f1;
        s32 mask = 8;
        u8 **camera = &data_02160244;
        u16 i;
        if (!(s->flags & 1)) {
            pos.x = 0x72000;
            pos.y = 0x7e000;
            pos.z = 0x28f000;
            func_020ec8cc(func_020c1370(10, &pos, effectId, 12, 0xc00), zero, zero);
            pos.x = 0x1f000;
            pos.z = 0x2b8000 - 0x1f000;
            pos.y = 0x7e000;
            func_020ec8cc(func_020c1370(12, &pos, effectId, 12, 0x2400), zero, zero);
            func_020331d0((u8 *)s, one, one);
        }
        if (!(s->flags & 0x40)) {
            s->timer2 += 1;
            if (s->timer2 > 0 && !(s->flags & 8)) {
                func_020331d0((u8 *)s, 8, 1);
                func_0210d27c(0x90);
            }
            if (s->timer2 > 8 && !(s->flags & 0x10)) {
                func_020331d0((u8 *)s, 0x10, one);
                func_020ec8cc(func_020ec950(10), one, 0);
                func_0210d27c(0x90);
            }
            if (s->timer2 > 16 && !(s->flags & 0x20)) {
                func_020331d0((u8 *)s, 0x20, 1);
                func_0210d27c(0x90);
            }
            if (s->timer2 > 24 && !(s->flags & 0x40)) {
                func_020331d0((u8 *)s, 0x40, one);
                func_020ec8cc(func_020ec950(12), one, 0);
                func_0210d27c(0x90);
            }
        }
        for (i = 0; i < 4; i++) {
            if (s->flags & (u16)(mask << i)) {
                u8 *eff = func_020ec950(i + 9);
                if (eff != NULL) {
                    *(s32 *)(eff + 0x20) += 0x100;
                    *(s32 *)(eff + 0x24) += 0x100;
                    if (*(s32 *)(*(u8 **)eff + 0x20)) {
                        ((void (*)(u8 *))func_020ec548)(eff);
                        if (i == 3) func_020331d0((u8 *)s, 0x80, one);
                    }
                }
            }
        }
        if (!(s->flags & 2)) {
            s->timer += 1;
            if (s->timer > 16) {
                s->timer = zero;
                func_020331d0((u8 *)s, 2, 1);
            }
        }
        if ((s->flags & 2) && !(s->flags & 4)) {
            if (func_020d2af4(one, one, 0x1f, zero, 0x2ee)) {
                func_020d9ea8((s32)0x80000000, zero);
                func_020331d0((u8 *)s, 4, one);
            }
        }
        if ((s->flags & 4) && (s->flags & 0x80)) {
            s->timer += 1;
            if (s->timer >= 5) {
                next = 19;
                (**(u8 ***)camera)[0x6c] = one;
            }
        }
        break;
    }
    case 19: {
        u8 **camera = &data_02160244;
        if (!(s->flags & 1)) {
            u8 *obj;
            u8 *node;
            obj = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
            *(u32 *)(obj + 0x14) |= 1;
            func_020df3f4((u8 *)0, zero);
            *(Vec_3909C *)actor = s->saved;
            func_020dd810(actor, zero, zero);
            func_020d2af4(zero, zero - 0x1f, zero, zero, 0x208);
            func_020de078();
            for (node = *(u8 **)(data_02160a6c + 0xb8); node != NULL; node = *(u8 **)(node + 0x174)) {
                func_020dd810(node, 9, zero);
                *(s32 *)(node + 0xf8) = zero;
                node[0x192] = zero;
                *(u16 *)(node + 0x190) = zero;
                *(s32 *)(node + 0x64) = zero;
                func_02035c3c(node, one);
            }
            func_020331d0((u8 *)s, 1, 1);
        }
        if (!(s->flags & 2)) {
            if (func_020d2af4(one, one - 2, zero, zero, 0x2ee)) {
                (*camera)[0x10d] = zero;
                func_0205db90(actor, NULL, 4, 4);
                func_020331d0((u8 *)s, 2, one);
            }
        }
        (**(u8 ***)camera)[0x6c] = 6;
        if ((s->flags & 2) && !(s->flags & 4)) {
            s->timer += 1;
            if (s->timer >= 32) func_020331d0((u8 *)s, 4, 1);
        }
        if (s->flags & 4) {
            s->timer += 1;
            if (s->timer >= 15) next = 26;
        }
        break;
    }
    }
    if (next != 0) func_020331b0((u8 *)s, next);
}
