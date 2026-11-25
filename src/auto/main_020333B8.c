/* 1 function from 0x020333B8 to 0x0203447C (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74;
extern u32 data_02160244;
extern u32 data_02160204;
extern u32 data_02160258;
extern u32 data_02160a6c;

typedef struct {
    u16 unk0;
    s16 unk2;
    u8 pad[4];
    u16 unk8;
} RHState;

typedef struct {
    u8 pad[0x8c];
    RHState *state;
} RHObj;

typedef struct {
    u8 pad[0x128];
    RHObj *obj;
} RHArg;

extern void func_020d9ea8(u32, s32);
extern void func_020d907c(void *);
extern void func_020331d0(void *, s32, s32);
extern void func_020dd810(void *, s32, s32);
extern void func_02033274(void *, s32, s32, s32);
extern void func_0210d27c(s32);
extern s32 func_020331f0(void *);
extern s32 func_020d2af4(s32, s32, s32, s32, s32);
extern u8 *func_020f0a5c(u16);
extern void func_020df3f4(void *, s32);
extern void func_020df56c(s32, s32);
extern void func_02036348(s32);
extern u8 *func_020c1370(s32, void *, s32, s32, s32);
extern s32 func_0205bcb0(void *, s32);
extern u8 *func_020ec950(s32);
extern s32 func_020332c8(u8 *);
extern void func_020ec548(u8 *);
void func_020333b8(RHArg *arg)
{
    typedef struct {
        s32 x, y, z;
    } Vec;
    typedef struct {
        u16 phase;
        volatile s16 timer;
        volatile s16 step;
        volatile s16 delay;
        u16 flags;
        u8 pad0a[0xe];
        Vec saved;
        u8 pad24[0xc];
        volatile s16 counter;
        u8 sound;
    } State;
    typedef struct {
        Vec offset;
        u8 mode;
        u8 pad0d;
        s16 value0e;
        u8 flags;
        u8 pad11;
        s16 value12;
        u8 value14;
        u8 pad15[3];
    } EffectArgs;

    extern void func_020331b0(u8 *, s32);
    extern void func_020332e8(void *);
    extern void func_020ec8cc(u8 *, s32, s32);
    extern void func_0206e7a0(u8, void *, void *, u16);
    extern void func_020d9d10(s32, s32, s32);
    extern void func_0205db90(u8 *, u8 *, u16, u16);

    register u8 *p = (u8 *)arg;
    register State *s = (State *)arg->obj->state;
    register s32 zero = 0;
    register s32 two = 2;
    register s32 next = zero;
    Vec vec;
    EffectArgs effect;
    Vec temp;

    switch (s->phase) {
    case 0:
        func_020d9ea8(0x28, next);
        *(u16 *)((u8 *)data_02160a74 + 0x1e0) = next;
        s->saved.x = *(s32 *)(p + 0);
        s->saved.y = *(s32 *)(p + 4);
        s->saved.z = *(s32 *)(p + 8);
        func_020d907c(&s->saved);
        (*(u8 **)data_02160244)[0x6c] = 1;
        func_020d9ea8(0x80000000, next);
        func_020d9ea8(8, 0x30);
        s->timer = next;
        next = 1;
        break;

    case 1:
        s->timer++;
        if (s->timer > 10) {
            s->timer = next;
            next = two;
        }
        break;

    case 2: {
        register s32 x = 0x80000;
        if (!(s->flags & 1)) {
            s32 z;
            s32 px, py;
            func_020331d0(s, 1, 1);
            func_020dd810(p, 5, next);
            *(s32 *)(p + 0x78) = 0x8fc;
            z = *(s32 *)(p + 8);
            px = *(s32 *)(p + 0);
            py = *(s32 *)(p + 4);
            func_02033274(p, px - 0x12c000, py + 0x64000, z);
            func_0210d27c(0x60);
        }
        if (!(s->flags & 2)) {
            if (func_020331f0(p) != 0) {
                func_020331d0(s, 2, 1);
            }
        }
        if (!(s->flags & 4)) {
            if (func_020d2af4(zero, 1, 0x1f, 1, 0x21c) != 0) {
                u8 *e = func_020f0a5c(*(u16 *)((u8 *)data_02160204 + 0x7c));
                *(u32 *)(e + 0x14) &= ~1u;
                func_020df3f4(p, 1);
                func_020df56c(zero, 1);
                func_02036348(zero);
                p[0x192] = 0x64;
                *(u16 *)((u8 *)data_02160a74 + 0x1e0) = zero;
                func_020331d0(s, 4, 1);
            }
        }
        if ((s->flags & 2) && (s->flags & 4)) {
            register s32 z = 0x231000;
            register s32 y = 0x60000;
            register s32 id = 0x7e7;
            vec.x = x;
            vec.y = y;
            vec.z = z;
            func_020c1370(1, &vec, id, 1, zero);
            vec.z = z;
            vec.x = x;
            vec.y = y;
            func_020c1370(2, &vec, id, 2, 0x200);
            s->counter = zero;
            s->sound = zero;
            next = 3;
        }
        break;
    }

    case 3:
        if (!(s->flags & 1)) {
            *(s32 *)(p + 0) = *(s32 *)((u8 *)data_02160258 + 0) + 0x6c000;
            *(s32 *)(p + 4) = *(s32 *)((u8 *)data_02160258 + 4) - 0x23000;
            *(s32 *)(p + 8) = *(s32 *)((u8 *)data_02160258 + 8);
            func_0210d27c(0x75);
            func_020331d0(s, 1, 1);
        }
        if (!(s->flags & 2)) {
            s32 x, y;
            s->timer++;
            y = *(s32 *)(p + 4);
            x = *(s32 *)(p + 0);
            x -= 0x7333;
            y += 0x2555;
            *(s32 *)(p + 0) = x;
            *(s32 *)(p + 4) = y;
            if (s->timer >= 15) {
                s->timer = zero;
                func_020331d0(s, 2, 1);
            }
        }
        if (s->flags & 2) {
            s->timer++;
            if (s->timer > 30) next = 9;
        }
        break;

    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        break;

    case 9: {
        register s32 x = 0x80000;
        register s32 three = 3;
        register s32 bit = two;
        if (!(s->flags & 1)) {
            func_020dd810(p, 0xe, next);
            func_020331d0(s, 1, 1);
        }
        if ((func_0205bcb0(p, bit) & 1) && !(s->flags & 2)) {
            func_020331d0(s, bit, 1);
            s->sound = 1;
            vec.y = 0x60000;
            vec.z = 0x28b000;
            vec.x = x;
            func_020c1370(3, &vec, 0x7e7, 0, 0x340);
        }
        if (!(s->flags & 4)) {
            u8 *e = func_020ec950(3);
            if (e != NULL && func_020332c8(e) == 0x1d) {
                func_020dd810(p, 0xf, zero);
                s->sound = zero;
                s->counter = zero;
                func_020331d0(s, 4, 1);
            }
        }
        if (s->sound == 1) {
            s->counter++;
            if (s->counter % three == 0) func_0210d27c(0x71);
        }
        if ((s->flags & 2) && !(s->flags & 8)) {
            u8 *e = func_020ec950(3);
            if (*(s32 *)(*(u8 **)e + 0x20) != 0) {
                func_020ec548(e);
                func_020331d0(s, 8, 1);
            }
        }
        if ((s->flags & 8) && !(s->flags & 0x10)) {
            if (p[0x104] == 0xf && (func_0205bcb0(p, 4) & 1)) {
                func_0210d27c(0x60);
            }
            s->timer++;
            if (s->timer > 15) {
                s->timer = zero;
                func_020ec548(func_020ec950(1));
                func_020ec548(func_020ec950(2));
                func_020331d0(s, 0x10, 1);
            }
        }
        if (s->flags & 0x10) {
            s->timer++;
            if (s->timer > 15) {
                s->sound = zero;
                s->counter = zero;
                next = 10;
            }
        }
        break;
    }

    case 10: {
        register s32 x = 0x80000;
        u16 i;
        if (!(s->flags & 1)) {
            register s32 z;
            register s32 y;
            register s32 px;
            func_020dd810(p, 0x10, next);
            z = 0x259000;
            px = x;
            y = 0x60000;
            vec.x = px;
            vec.z = z;
            vec.y = y;
            func_020c1370(4, &vec, 0x7e7, 3, next);
            vec.x = px; vec.y = y; vec.z = z;
            func_020c1370(5, &vec, 0x7e7, 4, 0x140);
            vec.x = px; vec.y = y; vec.z = z;
            func_020c1370(6, &vec, 0x7e7, 6, 0x280);
            func_020331d0(s, 1, 1);
        }
        if ((func_0205bcb0(p, 0x1c) & 1) && !(s->flags & 2)) {
            u8 *e;
            register s32 z;
            register s32 y;
            func_020331d0(s, 2, 1);
            z = 0x259000;
            y = 0x60000;
            vec.x = x; vec.y = y; vec.z = z;
            e = func_020c1370(0, &vec, 0x7e8, 2, 0x4c0);
            *(s32 *)(e + 0x20) = 0x800;
            *(s32 *)(e + 0x24) = 0x800;
            vec.x = x; vec.y = y; vec.z = z;
            func_020c1370(7, &vec, 0x7e7, 7, 0x400);
        }
        if (func_0205bcb0(p, 0) & 1) func_0210d27c(0x77);
        if (func_0205bcb0(p, 0x1b) & 1) func_0210d27c(0x7f);
        if ((func_0205bcb0(p, 0x20) & 1) && !(s->flags & 4)) {
            *(s32 *)(p + 0xf8) = 1;
            func_020331d0(s, 4, 1);
        }
        if (!(s->flags & 8)) {
            u8 *e = func_020ec950(zero);
            if (e != NULL) {
                u8 *a;
                *(s32 *)(e + 0x20) += 0x200;
                *(s32 *)(e + 0x24) += 0x200;
                (*(u8 **)(*(u8 **)e + 8))[0x71] -= 3;
                a = *(u8 **)(*(u8 **)e + 8);
                if (a[0x71] < 2) {
                    a[0x71] = zero;
                    func_020ec548(e);
                    func_020331d0(s, 8, 1);
                }
            }
        }
        for (i = 0; i < 4; i++) {
            u8 *e = func_020ec950(i + 4);
            if (e != NULL && *(s32 *)(*(u8 **)e + 0x20) != 0) {
                func_020ec548(e);
                s->timer++;
            }
        }
        if ((s->flags & 2) && (s->flags & 4) && (s->flags & 8) && s->timer >= 4) {
            *(s32 *)(p + 0xf8) = zero;
            s->sound = zero;
            s->counter = zero;
            next = 11;
        }
        break;
    }

    case 11: {
        register s32 bit = two;
        if (!(s->flags & 1)) {
            func_020dd810(p, 0x11, next);
            func_020331d0(s, 1, 1);
        }
        if (func_0205bcb0(p, 0) & 1) func_0210d27c(0x64);
        if ((func_0205bcb0(p, 6) & 1) && !(s->flags & 2)) {
            if (s->counter == 0) {
                s->counter = 1;
                func_0210d27c(0x60);
            }
            s->timer++;
            if (s->timer > 15) {
                u8 *e;
                vec.y = 0x4c000;
                vec.z = 0x295000;
                vec.x = 0x6c000;
                e = func_020c1370(1, &vec, 0x7e7, 5, 0xd00);
                *(s32 *)(e + 0x20) = 0x400;
                *(s32 *)(e + 0x24) = 0x400;
                func_020331d0(s, 2, 1);
            }
        }
        if ((s->flags & 2) && !(s->flags & 4)) {
            u8 *e = func_020ec950(1);
            if (e != NULL) {
                s32 delta, size;
                if (s->counter == 1) {
                    s->counter = bit;
                    func_0210d27c(0x7e);
                }
                s->step++;
                delta = 0x100 - (s16)s->step * (s16)10;
                if (delta < 8) delta = 8;
                size = *(s32 *)(e + 0x20) + delta;
                *(s32 *)(e + 0x20) = size;
                *(s32 *)(e + 0x24) += delta;
                if (size > 0x1000) {
                    *(s32 *)(e + 0x20) = 0x1000;
                    *(s32 *)(e + 0x24) = 0x1000;
                    func_020331d0(s, 4, 1);
                }
            }
        }
        if (s->flags & 2) {
            if (func_020d2af4(1, 1, 0x1f, zero, 0x2bc) != 0) {
                u8 *e = func_020ec950(1);
                if (e != NULL) {
                    *(s32 *)(e + 0x20) = 0x1000;
                    *(s32 *)(e + 0x24) = 0x1000;
                    func_020ec8cc(e, zero, zero);
                }
                s->sound = zero;
                s->counter = zero;
                next = 19;
            }
        }
        break;
    }

    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        break;

    case 19:
        if (!(s->flags & 1)) {
            u8 *camera;
            u8 *e;
            (*(u8 **)data_02160244)[0x6c] = 8;
            camera = (u8 *)data_02160258;
            func_020332e8(&temp);
            *(Vec *)(camera + 0xc) = temp;
            *(s32 *)(camera + 0xc) -= 0xd8000;
            *(s32 *)((u8 *)data_02160258 + 0x10) += 0x50000;
            camera = (u8 *)data_02160258;
            *(Vec *)camera = *(Vec *)(camera + 0xc);
            e = func_020f0a5c(*(u16 *)((u8 *)data_02160204 + 0x7c));
            *(u32 *)(e + 0x14) |= 1;
            func_020df3f4(p, next);
            p[0x192] = next;
            func_020df56c(next, next);
            func_02036348(1);
            func_020d2af4(next, 1 - 0x20, next, next, 0x21c);
            *(s32 *)(p + 4) = 0x20000;
            *(s32 *)(p + 0) = next;
            func_020331d0(s, 1, 1);
        }
        if (s->flags & 1) next = 21;
        break;

    case 20:
        break;

    case 21: {
        Vec *v = &vec;
        s32 four = 4;
        u16 i;
        u16 count;
        u16 flags;
        if (!(s->flags & 1)) {
            if (func_020d2af4(1, 1 - 2, next, next, 0x2bc) != 0) {
                func_020331d0(s, 1, 1);
            }
        }
        if (!(s->flags & 2)) {
            u8 *camera;
            s->step++;
            *(s32 *)((u8 *)data_02160258 + 0xc) += 0xaccc;
            *(s32 *)((u8 *)data_02160258 + 0x10) -= 0x3800;
            if (s->step >= 20) {
                s->step = zero;
                func_020331d0(s, 2, 1);
            }
            camera = (u8 *)data_02160258;
            *(Vec *)camera = *(Vec *)(camera + 0xc);
        }
        s->timer++;
        for (i = 0; i < 5; i++) {
            s32 threshold;
            u16 mask;
            func_020332e8(v);
            v->y += 0xa000;
            switch (i) {
            case 0:
                v->y += 0xa000;
                threshold = 15;
                v->x += 0xa000;
                break;
            case 1: {
                u8 *camera;
                v->y -= 0xa000;
                camera = (u8 *)data_02160258;
                v->x -= 0xa000;
                v->y = *(s32 *)(camera + 0x10) - 0xa000;
                v->z = *(s32 *)(camera + 0x14);
                threshold = 20;
                v->x = *(s32 *)(camera + 0xc) - 0xa000;
                break;
            }
            case 2:
                v->y -= 0xf000;
                threshold = 21;
                v->x += 0x37000;
                break;
            case 3:
                v->y -= 0x19000;
                threshold = 27;
                v->x -= 0x14000;
                break;
            case 4:
                v->y -= 0x37000;
                threshold = 30;
                v->x += 0xa000;
                break;
            default:
                threshold = 0;
                break;
            }
            mask = (u16)(four << i);
            if (!(s->flags & mask) && s->timer > threshold) {
                effect.mode = 2;
                effect.value0e = zero;
                effect.flags = zero;
                effect.value12 = zero;
                effect.value14 = zero;
                effect.offset.x = zero;
                effect.offset.y = zero;
                effect.offset.z = zero;
                func_0206e7a0(0x12, v, &effect, zero);
                func_0210d27c(0x73);
                func_020331d0(s, mask, 1);
            }
        }
        flags = s->flags;
        count = 0;
        for (i = 0; i < 7; i++) {
            if (flags & (u16)(1 << i)) count++;
        }
        if (count >= 7) {
            s->delay++;
            if (s->delay > 5) next = 22;
        }
        break;
    }

    case 22:
        if (!(s->flags & 1)) {
            u8 *e = func_020ec950(1);
            func_020ec8cc(e, 1, next);
            *(s32 *)(e + 0x14) = 0x178000;
            *(s32 *)(e + 0x18) = next - 0x1e000;
            func_020331d0(s, 1, 1);
        }
        if (!(s->flags & 2)) {
            u8 *e = func_020ec950(1);
            s32 y;
            *(s32 *)(e + 0x14) -= 0x24000;
            y = *(s32 *)(e + 0x18) + 0xc000;
            *(s32 *)(e + 0x18) = y;
            if (y >= 0x26000) func_020331d0(s, 2, 1);
        }
        if (s->flags & 2) {
            func_020ec548(func_020ec950(1));
            next = 23;
        }
        break;

    case 23: {
        register s32 x = 0x80000;
        u8 *e;
        if (!(s->flags & 1)) {
            register s32 y = 0x74000;
            register s32 z = 0x21c000;
            u8 *node;
            vec.x = x; vec.y = y; vec.z = z;
            func_020c1370(next, &vec, 0x7e8, 1, next);
            z -= 0x1000;
            vec.z = z;
            vec.x = x;
            vec.y = y;
            e = func_020c1370(1, &vec, 0x7e8, two, 0x840);
            *(s32 *)(e + 0x20) = 0x800;
            *(s32 *)(e + 0x24) = 0x800;
            func_020d9d10(next, 0x14, 0xa);
            func_0205db90(p, (u8 *)next, 4, two);
            func_0210d27c(0x90);
            node = *(u8 **)((u8 *)data_02160a6c + 0xb8);
            while (node != NULL) {
                if (!(*(u32 *)(*(u8 **)(node + 0x118) + 0x78) & 0x20)) {
                    func_020dd810(node, 9, zero);
                }
                node = *(u8 **)(node + 0x174);
            }
            ((u8 *)data_02160a74)[0x1e2] = 0;
            func_020331d0(s, 1, 1);
        }
        e = func_020ec950(zero);
        if (e != NULL) {
            s32 y;
            *(s32 *)(e + 0x20) += 0x100;
            y = *(s32 *)(e + 0x24) + 0x200;
            *(s32 *)(e + 0x24) = y;
            if (y > 0x2000) {
                u8 *a;
                (*(u8 **)(*(u8 **)e + 8))[0x71] -= 2;
                a = *(u8 **)(*(u8 **)e + 8);
                if (a[0x71] < 2) {
                    a[0x71] = zero;
                    func_020ec548(e);
                }
            }
        }
        e = func_020ec950(1);
        if (e != NULL) {
            s32 xsize = *(s32 *)(e + 0x20) + 0x200;
            *(s32 *)(e + 0x20) = xsize;
            *(s32 *)(e + 0x24) += 0x200;
            if (xsize > 0x2000) {
                u8 *a;
                (*(u8 **)(*(u8 **)e + 8))[0x71] -= 2;
                a = *(u8 **)(*(u8 **)e + 8);
                if (a[0x71] < 2) {
                    a[0x71] = zero;
                    func_020ec548(e);
                }
            }
        }
        if (func_020ec950(0) == NULL && func_020ec950(1) == NULL) next = 24;
        break;
    }

    case 24: {
        s32 x = s->saved.x;
        *(s32 *)(p + 0) = x;
        *(s32 *)(p + 4) = s->saved.y;
        *(s32 *)(p + 8) = s->saved.z;
        *(s32 *)(p + 0) = x - 0x80000;
        (*(u8 **)data_02160244)[0x6c] = next;
        next = 26;
        break;
    }
    }

    if (next != 0) {
        func_020331b0((u8 *)s, next);
    }
}
