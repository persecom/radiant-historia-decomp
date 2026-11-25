/* 1 function from 0x02036514 to 0x02037D1C (main), found by ds-decomp. */
#include "common.h"

extern void func_020d9ea8(s32, s32);
extern u8 *func_0205bad4(u8 *);
void func_02036514(u8 *arg0)
{
    typedef struct {
        s32 x, y, z;
    } Vec;
    typedef struct {
        u16 phase;
        volatile s16 timer;
        volatile s16 timer2;
        s16 unk06;
        u16 flags;
        s16 duration;
        Vec delta;
        Vec savedActor;
        Vec savedTarget;
        s16 timer30;
    } State;
    typedef struct {
        Vec pos;
        u8 pad0c[0x58];
        s32 unk64;
        u8 pad68[0x10];
        s32 speed;
        u32 unk7c;
        u32 flags;
        u8 pad84[8];
        u16 unk8c;
        u16 id;
        u8 pad90[0x44];
        Vec savedPos;
        u8 pade0[0x18];
        s32 unkf8;
        u8 padfc[0x1c];
        u8 *model;
        u8 pad11c[0xc];
        u8 *ctx;
        u8 pad12c[0x66];
        u8 alpha;
    } Actor;
    typedef struct {
        Actor *target;
        u8 pad04[0x88];
        State *state;
    } Context;
    typedef struct Node {
        Actor *actor;
        u8 pad04[0x14];
        struct Node *next;
    } Node;
    typedef struct {
        u8 *object;
        u8 pad04[0x1c];
        s32 scaleX;
        s32 scaleY;
    } Effect;

    extern u8 *data_02160a74;
    extern u8 *data_02160244;
    extern u8 *data_02160204;
    extern u8 *data_02160260;
    extern u8 *data_02160258;
    extern void func_020d9ea8(s32, s32);
    extern u8 *func_0205bad4(u8 *);
    extern void func_02033274(u8 *, s32, s32, s32);
    extern void func_020dd810(u8 *, s32, s32);
    extern void func_020d907c(u8 *);
    extern void func_020331d0(u8 *, u16, s32);
    extern void func_020331b0(u8 *, s32);
    extern s32 func_020331f0(u8 *);
    extern s32 func_0205bcb0(u8 *, s32);
    extern void func_0210d27c(s32);
    extern s32 func_020d2af4(s32, s32, s32, s32, s32);
    extern u8 *func_020f0a5c(u16);
    extern void func_020df3f4(u8 *, s32);
    extern void func_020df56c(u8 *, s32);
    extern void func_020a2c38(u16, s32);
    extern void func_02035c3c(u8 *, s32);
    extern u8 *func_020c1370(s32, void *, s32, s32, s32);
    extern void func_020ec8cc(u8 *, s32, s32);
    extern void func_020d9058(void *);
    extern void func_0205db90(u8 *, u8 *, s32, s32);
    extern void func_020d9da8(s32);
    extern u8 *func_020ec950(s32);
    extern void func_020ec548(u8 *);
    extern void func_020de078(void);

    Actor *actor = (Actor *)arg0;
    Context *ctx = (Context *)actor->ctx;
    s32 next = 0;
    Actor *target = ctx->target;
    State *state = ctx->state;
    Vec vec;

    switch (state->phase) {
    case 0: {
        Node *node;

        func_020d9ea8(8, next);
        state->savedTarget = target->pos;
        for (node = (Node *)func_0205bad4((u8 *)ctx); node != NULL; node = node->next) {
            Actor *obj = node->actor;
            if (obj != NULL && obj->model != NULL) {
                obj->savedPos.x = obj->pos.x;
                obj->savedPos.y = obj->pos.y;
                obj->savedPos.z = obj->pos.z;
            }
        }
        state->savedActor = actor->pos;
        next = 1;
        break;
    }

    case 1: {
        s32 zero = 0;
        s32 one = 1;

        if (!(state->flags & 1)) {
            actor->speed = 0x8fc;
            func_02033274(arg0, target->pos.x - 0x14000, target->pos.y, target->pos.z);
            if (target->id == 0x353) {
                func_02033274(arg0, target->pos.x - 0x14000, target->pos.y, target->pos.z - 0x1e000);
            }
            func_020dd810(arg0, one, zero);
            *(u16 *)(data_02160a74 + 0x1e0) = zero;
            func_020d907c(arg0);
            (*(u8 **)data_02160244)[0x6c] = one;
            func_020331d0((u8 *)state, one, one);
        }
        if (func_020331f0(arg0)) {
            next = 2;
        }
        break;
    }

    case 2: {
        s32 eight = 8;
        s32 zero = 0;

        if (!(state->flags & 1)) {
            func_020dd810(arg0, 0x14, next);
            func_020331d0((u8 *)state, 1, 1);
        }
        if ((state->flags & 1) && !(state->flags & 2) && (func_0205bcb0(arg0, 5) & 1)) {
            Node *node;
            func_020331d0((u8 *)state, 2, 1);
            for (node = (Node *)func_0205bad4((u8 *)ctx); node != NULL; node = node->next) {
                Actor *obj = node->actor;
                if (obj != NULL && obj->model != NULL && !(*(u32 *)(obj->model + 0x78) & 0x20)) {
                    func_020dd810((u8 *)obj, 9, zero);
                }
            }
            state->timer30 = 0;
            func_0210d27c(0x6d);
        }
        if ((state->flags & 1) && (state->flags & 2) && !(state->flags & 8) && (func_0205bcb0(arg0, 5) & 2)) {
            func_020dd810(arg0, 1, 0);
            func_020331d0((u8 *)state, 8, 1);
        }
        if (state->flags & 2) {
            u16 done = 0;
            u16 total = 0;
            Node *node;

            for (node = (Node *)func_0205bad4((u8 *)ctx); node != NULL; node = node->next) {
                Actor *obj = node->actor;
                if (obj != NULL && obj->model != NULL) {
                    total++;
                    obj->pos.x += 0x8000;
                    if (obj->pos.x >= state->savedTarget.x + 0xc8000) {
                        obj->pos.x = state->savedTarget.x + 0xc8000;
                        obj->flags &= ~2;
                        done++;
                    }
                }
            }
            if (done == total) {
                func_020331d0((u8 *)state, 4, 1);
            }
        }
        if ((state->flags & 4) && (state->flags & 8)) {
            (*(u8 **)data_02160244)[0x6c] = eight;
            if (state->timer30 == 0) {
                state->timer30++;
                func_0210d27c(0x60);
            }
            actor->pos.x += 0x8000;
            if (actor->pos.x >= state->savedTarget.x + 0xc8000) {
                func_020331d0((u8 *)state, 0x10, 1);
            }
        }
        if ((state->flags & 0x10) && func_020d2af4(zero, 2, 0x1f, 1, 0x21c)) {
            u8 *entry = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
            *(u32 *)(entry + 0x14) &= ~1;
            func_020df3f4(NULL, 2);
            func_020df56c(NULL, 1);
            *(u16 *)(data_02160260 + 0x4a) = zero;
            func_020a2c38(*(u16 *)(data_02160260 + 0x4a), zero);
            next = 3;
        }
        break;
    }

    case 3: {
        s32 two = 2;
        s32 one = 1;
        s32 z = 0x259000;
        s32 effectId = 0x7d3;

        if (!(state->flags & 1)) {
            actor->alpha = 100;
            target->alpha = 10;
            func_02035c3c((u8 *)target, next);
            target->pos = state->savedTarget;
            target->pos.x -= 0xc8000;
            actor->pos = target->pos;
            target->flags |= 2;
            if (!(*(u32 *)(target->model + 0x78) & 0x20)) {
                func_020dd810((u8 *)target, next, next);
            }
            target->unkf8 = one;
            func_020d2af4(0, 0x1f, 0x1f, one, 0x2bc);

            vec.x = 0x80000;
            vec.y = 0x60000;
            vec.z = z;
            func_020c1370(0, &vec, effectId, two, 0);
            vec.z = z + 0x1000;
            vec.x = 0x80000;
            vec.y = 0x60000;
            func_020c1370(one, &vec, effectId, 3, 0x80);
            vec.x = 0x80000;
            vec.y = 0x60000;
            vec.z = z;
            func_020ec8cc(func_020c1370(two, &vec, effectId, 8, 0x200), 0, 0);
            func_020ec8cc(func_020c1370(3, &vec, effectId, 6, 0x380), 0, 0);

            vec = state->savedTarget;
            vec.y += 0xa000;
            func_020d9058(&vec);
            *(Vec *)data_02160258 = vec;
            func_020331d0((u8 *)state, one, one);
        }
        if (state->flags & 1) {
            next = 4;
        }
        break;
    }

    case 4: {
        if (!(state->flags & 0x10)) {
            if (func_020d2af4(next, next - 1, next, 1, 0x2bc)) {
                func_020331d0((u8 *)state, 0x10, 1);
            }
        }
        if (!(state->flags & 1)) {
            if (target->pos.x < state->savedTarget.x) {
                target->pos.x += 0x7000;
            } else {
                actor->flags |= 2;
                target->pos.x = state->savedTarget.x;
                func_020331d0((u8 *)state, 1, 1);
            }
        }
        if ((state->flags & 1) && !(state->flags & 2)) {
            state->timer++;
            if (state->timer >= 0x1e) {
                state->timer = 0;
                actor->pos = target->pos;
                actor->pos.x -= 0x19000;
                func_020dd810(arg0, 0xe, 0);
                func_020331d0((u8 *)state, 2, 1);
            }
        }
        if ((func_0205bcb0(arg0, 1) & 1) && (state->flags & 2)) {
            if (!(*(u32 *)(target->model + 0x78) & 0x20)) {
                func_020dd810((u8 *)target, 9, 0);
            }
            func_0210d27c(0x72);
            target->unkf8 = 0;
        }
        if (state->flags & 2) {
            u16 i;
            s32 anim, x, y, ticks, z;
            u16 bit;

            for (i = 0; i < 4; i++) {
                switch (i) {
                case 0:
                    anim = 1;
                    ticks = 3;
                    x = target->pos.x + 0xa000;
                    y = target->pos.y;
                    break;
                case 1:
                    anim = 0xa;
                    ticks = 3;
                    x = target->pos.x - 0x1e000;
                    y = target->pos.y;
                    break;
                case 2:
                    anim = 0x15;
                    ticks = 3;
                    x = target->pos.x + 0x14000;
                    y = target->pos.y;
                    break;
                case 3:
                    anim = 0x1c;
                    ticks = 1;
                    x = target->pos.x;
                    y = target->pos.y;
                    break;
                }
                z = target->pos.z;
                bit = (u16)(0x20 << i);
                if ((func_0205bcb0(arg0, anim) & 1) && !(state->flags & bit)) {
                    state->timer = 0;
                    target->flags |= 0x80;
                    state->delta.x = (x - target->pos.x) / ticks;
                    state->delta.y = (y - target->pos.y) / ticks;
                    state->delta.z = (z - target->pos.z) / ticks;
                    state->duration = ticks;
                    func_020331d0((u8 *)state, bit, 1);
                    switch (i) {
                    case 0: func_0210d27c(0x6d); break;
                    case 1: func_0210d27c(0x6e); break;
                    case 2: func_0210d27c(0x6c); break;
                    case 3: func_0210d27c(0x73); break;
                    }
                    func_0205db90(arg0, (u8 *)target, 3, 0);
                    func_020d9da8(0x20);
                    func_020d9ea8(8, 0);
                }
            }
            state->timer++;
            if (state->timer <= state->duration && state->duration != 0) {
                target->pos.x += state->delta.x;
                target->pos.y += state->delta.y;
                target->pos.z += state->delta.z;
                if (state->timer == state->duration) {
                    func_020331d0((u8 *)state, 8, 1);
                    state->timer2 = 0;
                    state->duration = 0;
                    state->delta.x = 0;
                    state->delta.y = 0;
                    state->delta.z = 0;
                }
            }
            if (state->flags & 8) {
                state->timer2++;
                if (state->timer2 > 4) {
                    target->flags &= ~0x80;
                    func_020331d0((u8 *)state, 8, 0);
                }
            }
        }
        if ((func_0205bcb0(arg0, 0x25) & 1) && (state->flags & 2)) {
            func_020d907c((u8 *)target);
            (*(u8 **)data_02160244)[0x6c] = 1;
            func_020ec548(func_020ec950(0));
            func_020ec548(func_020ec950(1));
            vec.y = 0x60000;
            vec.z = 0x25a000;
            vec.x = 0x80000;
            func_020c1370(4, &vec, 0x7d3, 4, 0x500);
            func_0205db90(arg0, (u8 *)target, 3, 0);
            func_020d9da8(0x20);
            func_020d9ea8(8, 0);
            func_0210d27c(0x73);
            func_020331d0((u8 *)state, 4, 1);
        }
        if (state->flags & 4) {
            state->timer30 = 0;
            next = 5;
        }
        break;
    }

    case 5: {
        s32 baseX = 0x80000;
        s32 zero = 0;
        s32 one = 1;
        s32 four = 4;

        func_020d907c((u8 *)target);
        (*(u8 **)data_02160244)[0x6c] = one;
        if (!(state->flags & 1)) {
            if (target->pos.y < state->savedTarget.y + 0xb8000) {
                target->pos.y += 0x8000;
            } else {
                actor->flags &= ~2;
                func_020331d0((u8 *)state, one, one);
            }
        }
        if (target->pos.y >= state->savedTarget.y + 0x10000 && !(state->flags & 2)) {
            func_020ec548(func_020ec950(4));
            func_020331d0((u8 *)state, 2, 1);
        }
        if (target->pos.y >= state->savedTarget.y + 0x50000 && !(state->flags & 4)) {
            vec.x = baseX;
            vec.z = 0x25a000;
            vec.y = 0x60000;
            func_020c1370(four, &vec, 0x7d3, 5, 0x500);
            func_020331d0((u8 *)state, four, 1);
        }
        if (target->pos.y >= state->savedTarget.y + 0x60000 && !(state->flags & 8)) {
            func_020ec548(func_020ec950(4));
            func_020ec8cc(func_020ec950(2), one, zero);
            func_020ec8cc(func_020ec950(3), one, zero);
            func_020331d0((u8 *)state, 8, one);
            func_0210d27c(0x7f);
        }
        if (state->flags & 1) {
            next = 9;
        }
        break;
    }

    case 9: {
        if (!(state->flags & 1)) {
            state->timer++;
            if (state->timer >= 0x41) {
                (*(u8 **)data_02160244)[0x6c] = 8;
                state->timer = next;
                func_020331d0((u8 *)state, 1, 1);
            }
        }
        if ((state->flags & 1) && !(state->flags & 2)) {
            state->timer++;
            if (state->timer >= 0x15) {
                state->timer = 0;
                func_020331d0((u8 *)state, 2, 1);
            }
            if (target->pos.y <= state->savedTarget.y) {
                target->pos.y = state->savedTarget.y;
            } else {
                target->pos.y -= 0x8000;
            }
        }
        if ((state->flags & 2) && !(state->flags & 4)) {
            func_020ec548(func_020ec950(2));
            func_020ec548(func_020ec950(3));
            vec.x = 0x80000;
            vec.z = 0x25a000;
            vec.y = 0x60000;
            func_020c1370(4, &vec, 0x7d3, 7, 0x500);
            func_020331d0((u8 *)state, 4, 1);
        }
        if (state->flags & 4) {
            state->timer++;
            if (state->timer >= 2) {
                func_020ec548(func_020ec950(4));
                func_020331d0((u8 *)state, 8, 1);
            }
        }
        if (state->flags & 8) {
            actor->flags |= 2;
            target->flags &= ~2;
            func_020dd810(arg0, 0xf, 0);
            actor->pos = state->savedTarget;
            actor->pos.y = state->savedTarget.y + 0x54000;
            actor->pos.x -= 0x64000;
            state->timer30 = 0;
            next = 10;
        }
        break;
    }

    case 10: {
        s32 zero = 0;
        s32 one = 1;
        if ((state->flags & 1) && !(state->flags & 2)) {
            vec.x = 0x80000;
            vec.z = 0x231000;
            vec.y = 0x60000;
            func_020c1370(5, &vec, 0x7d3, next, next);
            vec.z = 0x258000;
            vec.x = 0x80000;
            vec.y = 0x60000;
            func_020c1370(6, &vec, 0x7d3, one, 0xec0);
            func_020331d0((u8 *)state, 2, one);
            if (state->timer30 == 0) {
                func_0210d27c(0x75);
                state->timer30 = one;
            }
        }
        if (!(state->flags & 1)) {
            state->timer++;
            actor->pos.x += 0x5555;
            actor->pos.y += 0x6aaa;
            if (state->timer >= 0xf) {
                state->timer = zero;
                func_020331d0((u8 *)state, 1, 1);
            }
        }
        if ((state->flags & 2) && !(state->flags & 4)) {
            Effect *effect = (Effect *)func_020ec950(5);
            if (*(u32 *)(effect->object + 0x20) != 0) {
                func_020ec548(func_020ec950(5));
                func_020ec548(func_020ec950(6));
                func_020331d0((u8 *)state, 4, 1);
            }
        }
        if (state->flags & 4) {
            state->timer30 = zero;
            next = 11;
        }
        break;
    }

    case 11: {
        s32 zero = 0;
        s32 one = 1;
        s32 y;
        Node *node;

        if (!(state->flags & 1)) {
            target->flags |= 2;
            target->pos.y = actor->pos.y - 0x3c000;
            target->alpha = 0x32;
            vec.y = 0x50000;
            vec.z = 0x249000;
            vec.x = 0xa0000;
            func_020ec8cc(func_020c1370(7, &vec, 0x7d3, 9, next), next, next);
            vec.x = 0x80000;
            vec.y = 0x60000;
            vec.z = 0x46000;
            func_020ec8cc(func_020c1370(8, &vec, 0x7d2, next, 0x1000), next, next);
            func_020331d0((u8 *)state, one, one);
        }
        if ((state->flags & 1) && !(state->flags & 2)) {
            target->pos.y += 0xa000;
            if (target->pos.y >= actor->pos.y - 0x1e000) {
                func_020331d0((u8 *)state, 4, 1);
            }
            if (target->pos.y >= actor->pos.y - 0x14000) {
                target->pos.y = actor->pos.y - 0x14000;
                func_020331d0((u8 *)state, 2, 1);
            }
        }
        if ((state->flags & 4) && !(state->flags & 8)) {
            func_020dd810(arg0, 0x10, zero);
            func_020ec8cc(func_020ec950(7), one, zero);
            func_020ec8cc(func_020ec950(8), one, zero);
            func_0205db90(arg0, (u8 *)target, 3, zero);
            func_020d9da8(0x20);
            func_020d9ea8(8, zero);
            if (state->timer30 == 0) {
                func_0210d27c(0x73);
                state->timer30 = one;
            }
            func_020331d0((u8 *)state, 8, 1);
        }
        if ((state->flags & 2) && (state->flags & 8) && func_020d2af4(1, 1, 0x1f, 0, 0x2bc)) {
            func_020ec548(func_020ec950(7));
            func_020ec548(func_020ec950(8));
            vec = state->savedTarget;
            func_020d9058(&vec);
            *(Vec *)data_02160258 = vec;
            y = target->pos.y;
            if (target->id == 0x353 && target != NULL && target->model != NULL) {
                if (target->unk8c == 0xea66) {
                    y += 0x1e000;
                    target->pos.y = y;
                } else if (target->unk8c == 0xea67) {
                    y += 0xa0000;
                    target->pos.y = y;
                }
            }
            for (node = (Node *)func_0205bad4((u8 *)ctx); node != NULL; node = node->next) {
                Actor *obj = node->actor;
                if (obj != NULL && obj->model != NULL) {
                    obj->pos.x = obj->savedPos.x;
                    obj->pos.z = obj->savedPos.z;
                    obj->pos.y = y;
                }
            }
            next = 0x13;
        }
        break;
    }

    case 19: {
        if (!(state->flags & 1)) {
            u8 *entry = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
            u8 *effect;
            *(u32 *)(entry + 0x14) |= 1;
            func_020df3f4(arg0, next);
            actor->flags &= ~2;
            func_020df56c(NULL, next);
            func_020d2af4(next, next - 0x1f, next, next, 0x21c);
            func_020de078();
            func_02035c3c((u8 *)target, 1);
            vec.x = 0x80000;
            vec.y = 0x60000;
            vec.z = 0x1f9000;
            func_020ec8cc(func_020c1370(9, &vec, 0x7d4, 1, next), next, next);
            vec.z = 0x1f9000 - 0x4000;
            vec.x = 0x80000;
            vec.y = 0x60000;
            effect = func_020c1370(0xa, &vec, 0x7d4, 2, 0xf80);
            func_020ec8cc(effect, next, next);
            ((Effect *)effect)->scaleX = 0x800;
            ((Effect *)effect)->scaleY = 0x800;
            func_020331d0((u8 *)state, 1, 1);
        }
        if ((state->flags & 1) && !(state->flags & 2) && func_020d2af4(1, -1, 0, 0, 0x2bc)) {
            state->savedTarget = target->pos;
            state->savedTarget.y -= 0x40000;
            func_020d907c((u8 *)&state->savedTarget);
            (*(u8 **)data_02160244)[0x6c] = 1;
            func_020a2c38(*(u16 *)(data_02160260 + 0x48), 0);
            func_020331d0((u8 *)state, 2, 1);
        }
        if ((state->flags & 2) && !(state->flags & 4)) {
            u16 total = 0;
            u16 done = 0;
            Node *node;

            for (node = (Node *)func_0205bad4((u8 *)ctx); node != NULL; node = node->next) {
                Actor *obj = node->actor;
                if (obj != NULL && obj->model != NULL) {
                    total++;
                    if (obj->pos.y > obj->savedPos.y) {
                        obj->pos.y -= 0xc000;
                    } else {
                        obj->pos.x = obj->savedPos.x;
                        obj->pos.y = obj->savedPos.y;
                        obj->pos.z = obj->savedPos.z;
                        done++;
                    }
                }
            }
            for (node = (Node *)func_0205bad4((u8 *)ctx); node != NULL; node = node->next) {
                Actor *obj = node->actor;
                if (obj != NULL && obj->model != NULL) {
                    obj->alpha = 0;
                    obj->unk64 = 0;
                }
            }
            target = ctx->target;
            func_02035c3c((u8 *)target, 1);
            state->savedTarget = target->pos;
            state->savedTarget.y -= 0x40000;
            func_020d907c((u8 *)&state->savedTarget);
            if (total == done) {
                data_02160244[0x10d] = 0;
                func_020ec8cc(func_020ec950(9), 1, 0);
                func_0210d27c(0x90);
                func_020ec8cc(func_020ec950(0xa), 1, 0);
                func_0205db90(arg0, (u8 *)target, 4, 0);
                func_020d9da8(0x20);
                func_020d9ea8(8, 0);
                func_020331d0((u8 *)state, 4, 1);
            }
        }
        if (state->flags & 4) {
            Effect *effect;
            u8 *obj;

            effect = (Effect *)func_020ec950(9);
            if (effect != NULL) {
                effect->scaleX += 0x100;
                effect->scaleY += 0x200;
                if (effect->scaleY > 0x2000) {
                    obj = *(u8 **)(effect->object + 8);
                    obj[0x71] -= 3;
                    obj = *(u8 **)(effect->object + 8);
                    if (obj[0x71] < 2) {
                        obj[0x71] = 0;
                        func_020ec548((u8 *)effect);
                        func_020331d0((u8 *)state, 8, 1);
                    }
                }
            }
            effect = (Effect *)func_020ec950(0xa);
            if (effect != NULL) {
                effect->scaleX += 0x200;
                effect->scaleY += 0x200;
                if (effect->scaleX > 0x2000) {
                    obj = *(u8 **)(effect->object + 8);
                    obj[0x71] -= 3;
                    obj = *(u8 **)(effect->object + 8);
                    if (obj[0x71] < 2) {
                        obj[0x71] = 0;
                        func_020ec548((u8 *)effect);
                        func_020331d0((u8 *)state, 0x10, 1);
                    }
                }
            }
            if (func_020ec950(9) == NULL && func_020ec950(0xa) == NULL) {
                next = 0x14;
            }
        }
        break;
    }

    case 20: {
        s32 one = 1;
        if (!(state->flags & 1)) {
            actor->pos = state->savedActor;
            actor->pos.x += 0x32000;
            actor->pos.y += 0x3c000;
            func_020dd810(arg0, 0x11, next);
            actor->flags |= 2;
            vec = state->savedActor;
            vec.x += 0x1e000;
            func_020d9058(&vec);
            func_020331d0((u8 *)state, one, one);
        }
        if ((state->flags & 1) && !(state->flags & 2)) {
            state->timer++;
            actor->pos.x -= 0x1555;
            actor->pos.y -= 0x4000;
            if (state->timer >= 0xf) {
                state->timer = 0;
                func_020dd810(arg0, 8, 0);
                func_0210d27c(0x60);
                func_020331d0((u8 *)state, 2, 1);
            }
        }
        if (state->flags & 2) {
            state->timer++;
            if (state->timer >= 0xc) {
                func_020d907c(arg0);
                next = 0x1a;
                (*(u8 **)data_02160244)[0x6c] = one;
            }
        }
        break;
    }

    default:
        break;
    }
    if (next != 0) {
        func_020331b0((u8 *)state, next);
    }
}
