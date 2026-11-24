/* 4 functions from 0x0206923C to 0x0206A158 (main), found by ds-decomp. */
#include "common.h"

void func_0206923c(u8 *arg0)
{
    extern void *func_02067698(u8 *, u16);
    extern u32 data_0216263c[3];
    extern u8 data_0213a394[];

    typedef struct {
        s32 x;
        s32 y;
        s32 z;
    } Vec3;

    typedef struct {
        Vec3 pos;
        u8 pad0c[4];
        s16 scaleX;
        s16 scaleY;
        s32 fxScaleX;
        s32 fxScaleY;
        s32 velocityX;
        s32 velocityY;
        u8 pad24[8];
        u16 timer;
        u8 pad2e[2];
        s32 active;
    } Particle;

    typedef struct {
        u8 pad00[0x2c];
        u32 frame;
        u16 timer;
        u16 timer2;
        u16 state;
        u16 phase;
        u8 pad38[0x10];
        s32 finished;
    } Effect;

    Effect *e = (Effect *)arg0;
    Particle *p;
    u16 phase = e->phase;
    s32 zero = 0;
    u32 *rng;

#define RH_RANDOM(n) \
    ((u16)((((rng[0] = rng[1] * rng[0] + rng[2]) >> 16) * (n)) >> 16))

    switch (phase) {
    case 0: {
        u16 i;
        s32 initialFixed;
        s16 initialScale;
        u32 range;

        rng = data_0216263c;
        i = zero;
        initialFixed = 0x6000;
        initialScale = 6;
        range = 40;

        for (; i < 8; i++) {
            p = (Particle *)func_02067698(arg0, i);

            p->fxScaleY = initialFixed;
            p->fxScaleX = initialFixed;

            p->scaleY = initialScale;
            p->scaleX = p->scaleY;

            if (i == 0 || i == 4) {
                u32 seed;
                u32 value;

                seed = rng[1] * rng[0] + rng[2];
                value = (seed >> 16) * range;

                rng[0] = seed;

                p->timer = value >> 16;
            }

            p->pos.x = zero;
            p->pos.y = zero;
            p->pos.z = zero;
        }

        {
            u16 nextPhase = 1;
            u16 timer = 0x1000;

            e->timer = timer;
            e->phase = nextPhase;
        }

        break;
    }

    case 1: {
        u8 group;

        for (group = zero; group < 2; group++) {
            s32 start;
            u16 j;
            s32 scale;
            s32 z;

            j = (u8)((group + 1) * 4 - 1);
            start = group * 4;

            for (; j > start; j--) {
                Particle *prev;
                Particle *dst;

                prev = (Particle *)func_02067698(
                    arg0, (u16)(j - 1));

                dst = (Particle *)func_02067698(arg0, j);

                dst->pos = prev->pos;

                dst->scaleX = dst->scaleY = prev->scaleX;
                dst->active = prev->active;
            }

            p = (Particle *)func_02067698(arg0, (u16)start);

            p->pos.y = 0x60000 -
                (s32)((u32)e->timer << 19) / 0x1000;

            if (group == 0) {
                s16 (*trig)[2] = (s16 (*)[2])data_0213a394;

                p->pos.x =
                    trig[((s32)((e->frame - 1) * 0xb60)
                    % 0xffff) >> 4][0] * 32;

                z =
                    trig[((s32)((e->frame - 1) * 0xb60)
                    % 0xffff) >> 4][1] * 32;
            } else {
                s16 (*trig)[2] = (s16 (*)[2])data_0213a394;

                p->pos.x =
                    trig[((s32)((e->frame - 1) * 0xb60
                    + 0x7ff8) % 0xffff) >> 4][0] * 24;

                z =
                    trig[((s32)((e->frame - 1) * 0xb60
                    + 0x7ff8) % 0xffff) >> 4][1] * 24;
            }

            p->pos.z = z;

            scale = (p->fxScaleX * 97) / 100;

            p->fxScaleY = scale;
            p->fxScaleX = scale;

            p->scaleY = scale >> 12;
            p->scaleX = p->scaleY;

            if (e->frame > 1) {
                p->active = 1;
            }
        }

        e->timer = (e->timer * 192) / 100;
        break;
    }
    }

    {
        u16 state = e->state;
        s32 inactive = zero;

        if (state == 0) {
            u16 i;
            s32 initialScale;
            s32 active;
            s32 maxScale;

            rng = data_0216263c;
            i = 8;
            initialScale = 6;
            active = 1;
            maxScale = 48;

            for (; i < 20; i++) {
                p = (Particle *)func_02067698(arg0, i);

                if (p->active != 0) {
                    s32 scale;

                    switch (i) {
                    case 8:
                    case 9:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                        scale = (p->fxScaleY * 96) / 100;

                        p->fxScaleY = scale;
                        p->fxScaleX = scale;

                        p->scaleY = scale >> 12;
                        p->scaleX = p->scaleY;

                        if (p->scaleX < 2) {
                            p->active = inactive;
                        }

                        p->pos.y += p->velocityY;

                        p->velocityY =
                            (p->velocityY * 94) / 100;
                        break;

                    case 10:
                    case 11:
                    case 12:
                    case 13:
                        scale = (p->fxScaleY * 92) / 100;

                        p->fxScaleY = scale;
                        p->scaleY = scale >> 12;

                        if (p->scaleY < 2) {
                            p->active = inactive;
                        }

                        p->pos.y += p->timer * 0x1000;
                        break;

                    case 18:
                    case 19:
                        scale = p->fxScaleY + 0x2000;

                        p->fxScaleY = scale;
                        p->pos.y += p->velocityY;

                        p->scaleX = p->fxScaleX >> 12;
                        p->scaleY = scale >> 12;

                        if (p->scaleY > 10) {
                            p->fxScaleX =
                                (p->fxScaleX * 94) / 100;
                        }

                        if (p->scaleX < 3) {
                            p->active = inactive;
                        }

                        if (p->scaleY > maxScale) {
                            p->scaleY = maxScale;
                        }
                        break;
                    }
                } else {
                    s32 value;

                    if (RH_RANDOM(8) != 0) {
                        continue;
                    }

                    if (e->frame >= 16) {
                        continue;
                    }

                    p->active = active;

                    p->pos.x = (RH_RANDOM(36) - 18) * 0x1000;
                    p->pos.y = (RH_RANDOM(16) - 24) * 0x1000;

                    switch (i) {
                    case 8:
                    case 9:
                        p->scaleY = initialScale;
                        value = ((volatile Particle *)p)->scaleY;
                        p->scaleX = value;

                        value = 0x6000;

                    squareParticle:
                        p->fxScaleY = value;
                        p->fxScaleX = value;

                        value = RH_RANDOM(4) + 4;
                        goto setVelocity;

                    case 10:
                    case 11:
                    case 12:
                    case 13:
                        p->scaleY = RH_RANDOM(5) + 5;
                        p->fxScaleY = p->scaleY * 0x1000;

                        p->timer = RH_RANDOM(3) + 1;
                        break;

                    case 14:
                    case 15:
                    case 16:
                    case 17:
                        p->scaleX = p->scaleY = 7;

                        value = 0x7000;
                        goto squareParticle;

                    case 18:
                        p->scaleX = 8;
                        value = 0x8000;
                        goto tallParticle;

                    case 19:
                        p->scaleX = 11;
                        value = 0xb000;

                    tallParticle:
                        p->fxScaleX = value;
                        p->fxScaleY = 0x1000;
                        p->scaleY = (s16)active;

                        value = RH_RANDOM(2) + 2;

                    setVelocity:
                        p->velocityY = value * 0x1000;
                        break;
                    }
                }
            }
        }
    }

#undef RH_RANDOM

    if (e->frame > 32) {
        e->finished = 1;
    }
}

    extern void *func_02067698(u8 *, u16);
    extern u8 data_0213fcf4[];
    extern u32 data_0216263c[3];

    typedef struct {
        s8 x;
        s8 y;
    } Pair;

    typedef struct {
        s32 x;
        s32 y;
        s32 z;
        u8 pad0c[4];
        s16 scaleX;
        s16 scaleY;
        s32 fxScaleX;
        s32 fxScaleY;
        u8 pad1c[0x10];
        u16 speed;
        u8 pad2e[2];
        s32 active;
    } Particle;

    typedef struct {
        s32 x;
        s32 y;
        u8 pad08[0x24];
        u32 frame;
        u16 timer;
        u16 timer2;
        u16 state;
        u8 pad36[0x12];
        s32 finished;
    } Effect;


typedef struct { Pair values[4]; } Directions_020698e0;

void func_020698e0(u8 *arg0)
{
    Effect *e = (Effect *)arg0;
    Particle *p;
    s32 posY = e->y;
    u16 state = e->state;

    e->y = posY + 0x18000;

    if (state == 0) {
        u16 i;
        s32 active = 1;

        for (i = 0; i < 4; i++) {
            p = (Particle *)func_02067698(arg0, i);

            p->active = active;

            p->x = p->fxScaleX / 2;
            p->y = p->fxScaleY / 2;
        }

        e->timer = 0x1000;
        e->state = active;
    } else if (state == 1) {
        Pair directions[4];
        const u8 *src = data_0213fcf4;
        u8 *dst = (u8 *)directions;
        u32 count = 4;
        u16 i;

        do {
            u8 y = src[1];
            u8 x = src[0];

            src += 2;
            dst[1] = y;
            dst[0] = x;
            dst += 2;
        } while (--count != 0);

        for (i = 0; i < 4; i++) {
            s32 sx;
            s32 sy;
            const Pair *dir;

            p = (Particle *)func_02067698(arg0, i);

            dir = &directions[i];

            sx = (0x1000 - e->timer) * directions[i].x;
            p->fxScaleX = sx;

            sy = (0x1000 - e->timer) * dir->y;
            p->fxScaleY = sy;

            p->scaleX = sx >> 12;
            p->scaleY = sy >> 12;

            p->x = sx / 2;
            p->y = sy / 2;

            if (i == 0) {
                p->x -= 0x2000;
                p->y -= 0x1000;
            }

            if (i == 1) {
                p->y -= 0x1000;
            }

            if (i == 2) {
                p->x -= 0x2000;
            }
        }

        e->timer = (e->timer * 90) / 100;

        if (e->timer < 8) {
            e->state = 2;
        }
    }

    {
        u32 *rng = data_0216263c;
        u16 i;
        s32 active = 1;
        s32 inactive = 0;
        u32 positionRange = 48;
        u32 speedRange = 10;

        for (i = 4; i < 8; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p->active != 0) {
                s32 x;
                s32 y;

                x = (p->x * p->speed) / 100;
                p->x = x;

                if (x < 0) {
                    x = -x;
                }

                p->y = (p->y * p->speed) / 100;

                if (x < 0x4000) {
                    y = p->y;

                    if (y < 0) {
                        y = -y;
                    }

                    if (y < 0x4000) {
                        p->active = inactive;
                    }
                }
            } else {
                u32 seed;
                u16 random;
                s32 offset;
                s32 spawn;

                seed = rng[1] * rng[0] + rng[2];

                random = (u16)(((seed >> 16) * 4) >> 16);
                rng[0] = seed;

                spawn = random - 2;

                if (spawn == 0 && e->frame < 0x20) {
                    p->active = active;

                    seed = rng[1] * rng[0] + rng[2];

                    random = (u16)(((seed >> 16) * 48) >> 16);
                    offset = random - 24;

                    rng[0] = seed;

                    p->x = offset * 0x1000;

                    seed = rng[1] * rng[0] + rng[2];

                    random = (u16)(
                        ((seed >> 16) * positionRange) >> 16);
                    offset = random - 24;

                    rng[0] = seed;

                    p->y = offset * 0x1000;

                    seed = rng[1] * rng[0] + rng[2];

                    random = (u16)(
                        ((seed >> 16) * speedRange) >> 16);

                    rng[0] = seed;

                    p->speed = random + 86;
                }
            }
        }
    }

    if (e->frame > 0x80) {
        e->finished = 1;
    }
}

void func_02069c00(u8 *arg0)
{
    extern void *func_02067698(u8 *, u16);
    extern u32 data_0216263c[3];

    typedef struct {
        s32 x;
        s32 y;
        s32 z;
        u8 pad0c[4];
        s16 scaleX;
        s16 scaleY;
        s32 fxScaleX;
        s32 fxScaleY;
        u8 pad1c[0x10];
        u16 speed;
        u8 pad2e[2];
        s32 active;
    } Particle;

    typedef struct {
        s32 x;
        s32 y;
        u8 pad08[0x24];
        u32 frame;
        u16 timer;
        u16 timer2;
        u16 state;
        u8 pad36[0x12];
        s32 finished;
    } Effect;

    Effect *e = (Effect *)arg0;
    Particle *p;
    s32 active = 1;

#define RH_DOUBLE_DRAW(range, center, result)                  \
    do {                                                       \
        u32 seed = rng[0];                                     \
        u32 multiplier = rng[1];                               \
        u32 increment = rng[2];                                \
        u32 next;                                              \
        s32 first;                                             \
                                                               \
        seed = multiplier * seed + increment;                 \
        ((volatile u32 *)rng)[0] = seed;                       \
                                                               \
        next = multiplier * seed + increment;                 \
                                                               \
        first = (u16)(((seed >> 16) * (range)) >> 16)          \
            - (center);                                        \
                                                               \
        rng[0] = next;                                         \
                                                               \
        result = first >= 0                                    \
            ? (s32)(u16)(((next >> 16) * (range)) >> 16)        \
                - (center)                                     \
            : -((s32)(u16)(((next >> 16) * (range)) >> 16)      \
                - (center));                                   \
    } while (0)

    e->y += 0x18000;

    switch (e->state) {
    case 0: {
        u16 i;

        for (i = 0; i < 4; i++) {
            s32 sx;
            s32 x;

            p = (Particle *)func_02067698(arg0, i);

            p->active = active;

            sx = p->scaleX * 0x1000;
            p->fxScaleX = sx;

            x = sx / 2;

            p->fxScaleY = (p->scaleY * 0x8000) / 10;

            p->x = x;

            if (i == 0 || i == 2) {
                p->x -= 0x1000;
            }

            p->y = p->fxScaleY / 2;
        }

        e->state = active;
        break;
    }

    case 1: {
        u16 i;
        s32 movement = 10;

        for (i = 0; i < 4; i++) {
            p = (Particle *)func_02067698(arg0, i);

            p->x = e->timer * movement * 0x1000
                + p->fxScaleX / 2;

            p->y = p->fxScaleY / 2;

            if (i == 0 || i == 2) {
                p->x -= 0x1000;
            }
        }

        {
            u32 *rng = data_0216263c;
            s32 inactive = 0;
            u16 j;

            for (j = 4; j < 10; j++) {
                p = (Particle *)func_02067698(arg0, j);

                if (p->active != 0) {
                    s32 sx;

                    p->x += p->speed * 0x1000;
                    p->speed--;

                    if (j >= 8) {
                        sx = (p->fxScaleX * 70) / 100;

                        p->fxScaleX = sx;
                        p->scaleX = sx >> 12;
                    }

                    if (p->speed == 0 ||
                        p->fxScaleX < 0x1000) {
                        p->active = inactive;
                    }
                } else {
                    u32 seed;
                    u16 random;
                    s32 result;
                    Particle *anchor;

                    seed = rng[1] * rng[0] + rng[2];

                    random = (u16)(
                        ((seed >> 16) * 4) >> 16);

                    rng[0] = seed;

                    if (random - 2 != 0) {
                        continue;
                    }

                    p->active = active;

                    seed = rng[1] * rng[0] + rng[2];
                    rng[0] = seed;

                    random = (u16)(
                        ((seed >> 16) * 64) >> 16);

                    anchor = (Particle *)
                        func_02067698(arg0, 0);

                    p->x = anchor->x
                        + (random - 64) * 0x1000;

                    seed = rng[1] * rng[0] + rng[2];

                    random = (u16)(
                        ((seed >> 16) * 32) >> 16);

                    result = random - 16;

                    rng[0] = seed;

                    p->y = result * 0x1000;

                    RH_DOUBLE_DRAW(20, 10, result);

                    p->speed = result;

                    if (j >= 8) {
                        RH_DOUBLE_DRAW(32, 16, result);

                        p->fxScaleX =
                            (result + 8) * 0x1000;
                    }
                }
            }
        }

        e->timer++;

        if (e->timer > 0x20) {
            e->finished = 1;
        }

        break;
    }
    }

#undef RH_DOUBLE_DRAW

    if (e->frame > 0x3c) {
        e->finished = 1;
    }
}

void func_02069f80(u8 *arg0)
{
    extern void *func_02067698(u8 *, u16);
    extern u8 data_0213fd0c[];
    extern u8 data_0213a394[];

    typedef struct {
        u8 x;
        u8 y;
    } Pair;

    typedef struct {
        s32 x;
        s32 y;
        s32 z;
        u8 pad0c[4];
        s16 scaleX;
        s16 scaleY;
        s32 fxScaleX;
        s32 fxScaleY;
        u8 pad1c[0xa];
        u8 alpha;
        u8 pad27[9];
        s32 active;
    } Particle;

    typedef struct {
        s32 x;
        s32 y;
        u8 pad08[0x28];
        u16 timer;
        u16 timer2;
        u16 state;
        u8 pad36[0x12];
        s32 finished;
    } Effect;

    Effect *e = (Effect *)arg0;
    s32 posY = ((volatile Effect *)e)->y;
    s32 state = ((volatile Effect *)e)->state;

    e->y = posY + 0x18000;

    switch (state) {
    case 0: {
        u16 i;
        s32 active = 1;
        u8 alpha = 24;
        u16 timer;

        for (i = 0; i < 4; i++) {
            Particle *p;
            s32 sx;
            s32 sy;

            p = (Particle *)func_02067698(arg0, i);

            p->active = active;

            sx = p->scaleX * 0x1000;
            p->fxScaleX = sx;

            sy = p->scaleY * 0x1000;
            p->fxScaleY = sy;

            p->x = sx / 2;
            p->y = sy / 2;

            p->alpha = alpha;
        }

        timer = e->timer;

        e->state = active;
        e->timer = timer + 1;
        return;
    }

    case 1: {
        Pair directions[4];
        const Pair *src;
        Pair *dst;
        s32 count;
        s16 (*trig)[2];
        u16 i;

        src = (const Pair *)data_0213fd0c;
        dst = directions;
        count = 4;

        do {
            u8 y;
            u8 x;

            y = src->y;
            x = src++->x;

            dst->y = y;
            dst++->x = x;

        } while (--count != 0);

        trig = (s16 (*)[2])data_0213a394;

        for (i = 0; i < 4; i++) {
            Particle *p;
            const Pair *dir;
            s32 angle;
            s32 wave;
            s32 dx;
            s32 dy;
            s32 sy;

            p = (Particle *)func_02067698(arg0, i);

            angle = ((e->timer * 0x400) % 0x10000) >> 4;

            dir = &directions[i];

            wave = trig[angle][0];
            dx = (s8)directions[i].x;

            p->fxScaleX = dx * (0x2d000 - wave * 8);

            angle = ((e->timer * 0x400) % 0x10000) >> 4;

            wave = trig[angle][0];
            dy = (s8)dir->y;

            sy = dy * (0x2d000 - wave * 8);

            p->fxScaleY = sy;

            p->x = p->fxScaleX / 2;
            p->y = sy / 2;

            p->scaleX = p->fxScaleX >> 12;
            p->scaleY = sy >> 12;
        }

        e->timer++;

        if (e->timer >= 0x40) {
            e->finished = 1;
        }

        return;
    }

    case 2:
        e->state = 3;
        break;
    }
}

