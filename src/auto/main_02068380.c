/* 3 functions from 0x02068380 to 0x0206923C (main), found by ds-decomp. */
#include "common.h"


void func_02068380(u8 *arg0)
{
    extern void *func_02067698(u8 *, u16);
    extern s32 func_0201fb1c(s32, s32);
    extern u8 data_0213fd04[];
    extern u8 data_0213a394[];
    extern u32 data_0216263c[3];

    typedef struct {
        s8 x;
        s8 y;
    } Pair;

    typedef struct {
        Pair entries[4];
    } DirectionTable;

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
        u16 angle;
        u8 pad2e;
        u8 flag2f;
        s32 active;
    } Particle;

    typedef struct {
        s32 x;
        s32 y;
        s32 z;
        u8 pad0c[0x24];
        u16 timer;
        u16 timer2;
        u16 state;
        u16 phase;
        s32 velocity;
        u8 pad3c[0xc];
        s32 finished;
    } Effect;

    Effect *e = (Effect *)arg0;
    Particle *p;

    e->y += 0x10000;

    if (e->state == 0) {
        u16 i;

        for (i = 0; i < 4; i++) {
            p = (Particle *)func_02067698(arg0, i);

            p->active = 1;
            p->x = -p->fxScaleX / 2;
            p->y = p->fxScaleY / 2;
        }

        e->state = 1;
    }

    if (e->state == 1) {
        DirectionTable directions =
            *(const DirectionTable *)data_0213fd04;

        u16 i;

        for (i = 0; i < 4; i++) {
            s32 height;
            s32 absY;
            s32 dx, dy;
            s32 angle;
            s32 wave;
            s32 sy;
            const Pair *dir;

            p = (Particle *)func_02067698(arg0, i);

            dir = &directions.entries[i];
            dx = dir->x;
            dy = dir->y;
            angle = ((e->timer * 0x800) % 0x10000) >> 4;
            wave = ((s16 (*)[2])data_0213a394)[angle][0];

            p->fxScaleX = dx * (0x8000 - wave);

            sy = dy *
                (0x8000 -
                ((s16 (*)[2])data_0213a394)[((e->timer * 0x800) % 0x10000) >> 4][0]);

            p->fxScaleY = sy;

            p->x = p->fxScaleX / 2;
            p->y = sy / 2;

            height =
                ((s16 (*)[2])data_0213a394)[((e->timer * 0x400) % 0x10000) >> 4][0];

            absY = p->fxScaleY;

            if (absY < 0) {
                absY = -absY;
            }

            p->y += height * 8 + absY / 2;

            if (i == 0 || i == 3) {
                p->x += 0x1000;
            }

            if (i == 2 || i == 3) {
                p->y += 0x1000;
            }

            p->scaleX = p->fxScaleX >> 12;
            p->scaleY = p->fxScaleY >> 12;
        }

        e->timer++;

        if (e->timer >= 0x40) {
            e->finished = 1;
        }

        if (e->timer == 0x10) {
            e->phase = 1;
        }
    }

    {
        s32 n;
        Particle *p;
        u16 i;
        u32 rng;
        u16 random;

        for (i = 7; i < 10; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p->active != 0) {
                s32 sx, sy;

                sx = p->fxScaleX + 0xc00;
                p->fxScaleX = sx;

                sy = p->fxScaleY + 0xc00;
                p->fxScaleY = sy;

                p->scaleX = sx >> 12;
                p->scaleY = sy >> 12;

                if (p->scaleX >= 7) {
                    p->active = 0;
                }
            } else {
                s32 magnitude;
                s32 offset;

                rng = data_0216263c[1] * data_0216263c[0]
                    + data_0216263c[2];

                data_0216263c[0] = rng;

                random = (u16)(((rng >> 16) * 24) >> 16);

                if (random == 0 && e->timer < 0x30) {
                    p->active = 1;

                    p->scaleX = 0;
                    p->scaleY = 4;

                    p->fxScaleX = p->scaleX * 0x1000;
                    p->fxScaleY = p->scaleY * 0x1000;

                    rng = data_0216263c[1] * data_0216263c[0]
                        + data_0216263c[2];

                    data_0216263c[0] = rng;

                    random = (u16)(((rng >> 16) * 28) >> 16);

                    n = random - 14;
                    magnitude = n >= 0 ? n : -n;

                    offset = func_0201fb1c(n, magnitude);

                    p->x = (n + offset * 8) * 0x1000;

                    rng = data_0216263c[1] * data_0216263c[0]
                        + data_0216263c[2];

                    data_0216263c[0] = rng;

                    random = (u16)(((rng >> 16) * 20) >> 16);

                    n = random - 10;
                    magnitude = n >= 0 ? n : -n;

                    offset = func_0201fb1c(n, magnitude);

                    p->y =
                        ((s16 *)data_0213a394)
                        [(((e->timer * 0x400) % 0x10000) >> 4) * 2]
                        * 8 + (n + offset * 6) * 0x1000;
                }
            }
        }
    }

    {
        s16 (*trig)[2] = (s16 (*)[2])data_0213a394;
        u16 i;
        u32 rng;
        u16 random;

        for (i = 4; i < 7; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p->active != 0) {
                s32 sx, sy;

                p->x += trig[(p->angle % 0x10000) >> 4][0];
                p->y += trig[(p->angle % 0x10000) >> 4][1];

                sx = (p->fxScaleX * 94) / 100;
                p->fxScaleX = sx;

                sy = (p->fxScaleY * 94) / 100;
                p->fxScaleY = sy;

                p->scaleX = sx >> 12;
                p->scaleY = sy >> 12;

                if (p->scaleX != 0) {
                    if (p->scaleY != 0) {
                        continue;
                    }
                }

                p->active = 0;
            } else {
                rng = data_0216263c[1] * data_0216263c[0]
                    + data_0216263c[2];

                random = (u16)(((rng >> 16) * 32) >> 16);
                data_0216263c[0] = rng;

                if (random == 0) {
                    p->active = 1;
                    p->x = 0;

                    p->y =
                        trig[((e->timer * 0x400) % 0x10000) >> 4][0]
                        * 8;

                    p->scaleX = 8;
                    p->scaleY = 8;

                    p->fxScaleX = p->scaleX * 0x1000;
                    p->fxScaleY = p->scaleY * 0x1000;

                    rng = data_0216263c[1] * data_0216263c[0]
                        + data_0216263c[2];

                    data_0216263c[0] = rng;

                    p->angle = rng >> 16;
                }
            }
        }
    }

    if (e->phase == 1) {
        u16 i;
        for (i = 10; i < 16; i++) {
            p = (Particle *)func_02067698(arg0, i);

            p->active = 1;
            p->flag2f = 1;

            p->x = 0;
            p->y = 0;
            p->z = 0;

            p->scaleX = 8;
            p->scaleY = 8;

            p->fxScaleX = p->scaleX * 0x1000;
            p->fxScaleY = p->scaleY * 0x1000;
        }

        e->velocity = -0x400;
        e->phase++;
        return;
    }

    if (e->phase == 2) {
        u16 i;
        for (i = 10; i < 16; i++) {
            p = (Particle *)func_02067698(arg0, i);

            p->y += e->velocity;
        }

        if (p->y < -0x10000) {
            u16 nextPhase = e->phase + 1;
            e->velocity = 0x2000;
            e->phase = nextPhase;
        }

        e->velocity -= 0x400;
        return;
    }

    if (e->phase == 3) {
        u16 i;
        for (i = 10; i < 16; i++) {
            s32 index;

            p = (Particle *)func_02067698(arg0, i);
            index = ((((i - 10) * 0x2aa8) % 0x10000) >> 4) * 2;

            p->y += e->velocity;
            p->x += ((p->fxScaleX / 3) >> 12) * ((s16 *)data_0213a394)[index];
            p->z += ((p->fxScaleY / 3) >> 12) * ((s16 *)data_0213a394)[index + 1];

            p->fxScaleX = (p->fxScaleX * 91) / 100;
            p->fxScaleY = (p->fxScaleY * 91) / 100;
            p->scaleX = p->fxScaleX >> 12;
            p->scaleY = p->fxScaleY >> 12;
        }

        e->velocity -= 0x400;
    }
}
    extern void *func_02067698(u8 *, u16);
    extern u8 data_0213a394[];
    extern u32 data_0216263c[3];

    typedef struct {
        s32 x;
        s32 y;
        s32 z;
        u8 pad0c[4];
        volatile s16 scaleX;
        volatile s16 scaleY;
        s32 fxScaleX;
        s32 fxScaleY;
        u8 pad1c[0x12];
        u8 phase;
        u8 flag2f;
        s32 active;
    } Particle;

    typedef struct {
        s32 x;
        s32 y;
        u8 pad08[0x28];
        u16 timer;
        u8 pad32[0x16];
        s32 finished;
    } Effect;


static inline u16 Random_02068ac4(u32 limit) {
    u32 seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    data_0216263c[0] = seed;
    return (u16)(((seed >> 16) * limit) >> 16);
}

void func_02068ac4(u8 *arg0)
{
    Effect *e = (Effect *)arg0;
    register Particle *anchor;

    e->y += 0x10000;

    anchor = (Particle *)func_02067698(arg0, 0);

    {
        register s32 one = 1;
        register s32 depth = -0xa000;
        register u16 i;
        register s32 zero = 0;

        anchor->active = one;

        anchor->y =
            ((s16 *)data_0213a394)
            [(((e->timer * 0x400) % 0x10000) >> 4) * 2]
            * 8;


        for (i = 4; i < 7; i++) {
            Particle *p = (Particle *)func_02067698(arg0, i);

            if (p->active != 0) {
                p->active = zero;
            } else {
                u32 increment;
                u32 multiplier;
                u32 seed;
                u16 random;

                random = Random_02068ac4(3);

                if (random == 0) {
                    random = Random_02068ac4(32);

                    p->x = (random - 16) * 0x1000;

                    seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                    random = (u16)(((seed >> 16) * 32) >> 16);
                    data_0216263c[0] = seed;

                    p->y = anchor->y + (random - 16) * 0x1000;
                    p->z = depth;

                    p->active = one;
                }
            }
        }
    }

    {
        register s32 depth = -0xa000;
        register s32 inactive = 0;
        register u16 i;
        register s32 initialScale = inactive;
        register u32 range = 36;

        for (i = 2; i < 4; i++) {
            Particle *p = (Particle *)func_02067698(arg0, i);

            if (p->active != 0) {
                u32 increment;
                u32 multiplier;
                u32 seed1;
                u32 seed2;
                u32 high1;
                u32 high2;
                u16 direction;
                s32 offset;
                s32 scale;

                offset = Random_02068ac4(3);
                direction = Random_02068ac4(2);

                if (direction == 0) offset = -offset;
                p->y -= 0x1000;
                p->x += offset * 0x1000;

                if (p->phase == 0) {
                    scale = p->fxScaleX + 0x800;

                    p->fxScaleY = scale;
                    p->fxScaleX = scale;

                    if (scale >= 0x7000) {
                        p->phase = 1;
                    }
                } else {
                    scale = p->fxScaleX - 0x800;

                    p->fxScaleY = scale;
                    p->fxScaleX = scale;

                    if (scale <= 0x1000) {
                        p->active = inactive;
                    }
                }

                p->scaleY = p->fxScaleX >> 12;
                p->scaleX = p->scaleY;
            } else {
                u32 seed;
                u16 random;

                seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                random = (u16)(((seed >> 16) * 5) >> 16);
                data_0216263c[0] = seed;

                if (random == 0) {
                    p->active = 1;
                    p->phase = initialScale;

                    seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                    random = (u16)(((seed >> 16) * range) >> 16);
                    data_0216263c[0] = seed;

                    p->x = (random - 18) * 0x1000;

                    seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                    data_0216263c[0] = seed;
                    random = (u16)(((seed >> 16) * 16) >> 16);

                    p->y = anchor->y + random * 0x1000;
                    p->z = depth;

                    p->scaleX = initialScale;
                    p->fxScaleX = p->scaleX;

                    p->scaleY = initialScale;
                    p->fxScaleY = p->scaleY;
                }
            }
        }
    }

    {
        register s32 finished = 1;

        e->timer++;

        if (e->timer >= 0x40) {
            e->finished = finished;
        }
    }
}

void func_02068da0(u8 *arg0)
{
    extern void *func_02067698(u8 *, u16);
    extern u32 data_0216263c[3];
    extern u8 data_0213a394[];
    extern u8 data_0213fcfc[];

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
        u8 pad1c[0xa];
        u8 alpha;
        u8 pad27[5];
        u16 timer;
        u8 pad2e[2];
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
    Particle *p;
    s16 flipY;
    s16 flipX;
    u32 *rng;
    s32 depth;
    s32 zero;
    u16 i;
    s32 one;
    depth=-0x10000;
    i=0;
    flipX=-1;
    rng=data_0216263c;
    flipY=flipX;
    zero=0;
    one=1;

    e->y += 0x10000;

    for (; i < 4; i++) {
        p = (Particle *)func_02067698(arg0, i);

        if (p == NULL) {
            continue;
        }

        if (p->active != 0) {
            if (p->timer >= 2) {
                p->active = zero;
            } else {
                p->alpha -= 10;
            }

            p->timer++;
        } else {
            u32 seed;
            u32 multiplier;
            u32 increment;
            u32 next;
            s32 first;
            s32 result;
            u16 random;

            seed = rng[0];
            multiplier = rng[1];
            increment = rng[2];

            seed = multiplier * seed + increment;
            next = multiplier * seed + increment;

            first = (u16)(((seed >> 16) * 8) >> 16) - 4;
            rng[0] = next;

            result = first >= 0
                ? (s32)(u16)(((next >> 16) * 8) >> 16) - 4
                : -((s32)(u16)(((next >> 16) * 8) >> 16) - 4);

            if (result != 0) {
                continue;
            }

            p->active = one;

            seed = rng[1] * rng[0] + rng[2];
            rng[0] = seed;

            random = (u16)(((seed >> 16) * 28) >> 16);

            p->x = (random - 14) * 0x1000;

            seed = rng[1] * rng[0] + rng[2];
            rng[0] = seed;

            random = (u16)(((seed >> 16) * 28) >> 16);

            p->y =
                ((s16 *)data_0213a394)
                [(((e->timer * 0x400) % 0x10000) >> 4) * 2]
                * 8 + (random - 14) * 0x1000;

            p->z = depth;

            p->timer = 0;
            p->alpha = 31;

            seed = rng[0];
            multiplier = rng[1];
            increment = rng[2];

            seed = multiplier * seed + increment;
            next = multiplier * seed + increment;

            first = (u16)(((seed >> 16) * 2) >> 16) - 1;
            rng[0] = next;

            result = first >= 0
                ? (s32)(u16)(((next >> 16) * 2) >> 16) - 1
                : -((s32)(u16)(((next >> 16) * 2) >> 16) - 1);

            if (result != 0) {
                p->scaleX *= flipX;
            }

            seed = rng[0];
            multiplier = rng[1];
            increment = rng[2];

            seed = multiplier * seed + increment;
            next = multiplier * seed + increment;

            first = (u16)(((seed >> 16) * 2) >> 16) - 1;
            rng[0] = next;

            result = first >= 0
                ? (s32)(u16)(((next >> 16) * 2) >> 16) - 1
                : -((s32)(u16)(((next >> 16) * 2) >> 16) - 1);

            if (result != 0) {
                p->scaleY *= flipY;
            }
        }
    }

    if (e->state == 0) {
        u16 j;
        s32 active = 1;

        for (j = 4; j < 8; j++) {
            p = (Particle *)func_02067698(arg0, j);

            p->active = active;

            p->x = -p->fxScaleX / 2;
            p->y = p->fxScaleY / 2;

            if (j == 5 || j == 6) {
                p->x -= 0x1000;
            }
        }

        e->state = 1;
    }

    if (e->state != 1) {
        return;
    }

    {
        Pair directions[4];
        const u8 *src = data_0213fcfc;
        u8 *dst = (u8 *)directions;
        u32 count = 4;
        s16 (*trig)[2];
        u16 j;

        do {
            u8 y = src[1];
            u8 x = src[0];

            src += 2;
            dst[1] = y;
            dst[0] = x;
            dst += 2;
        } while (--count != 0);

        trig = (s16 (*)[2])data_0213a394;

        for (j = 4; j < 8; j++) {
            s32 index;
            s32 angle;
            s32 wave;
            s32 sy;
            s32 height;
            s32 absY;
            const Pair *dir;

            p = (Particle *)func_02067698(arg0, j);

            index = j - 4;

            angle = ((e->timer * 0x800) % 0x10000) >> 4;

            wave = trig[angle][0];
            dir = &directions[index];

            p->fxScaleX =
                directions[index].x * (0xf000 - wave * 2);

            sy = dir->y *
                (0xf000 -
                trig[((e->timer * 0x800) % 0x10000) >> 4][0] * 2);

            p->fxScaleY = sy;

            p->x = -p->fxScaleX / 2;
            p->y = sy / 2;

            height =
                trig[((e->timer * 0x400) % 0x10000) >> 4][0];

            absY = p->fxScaleY;

            if (absY < 0) {
                absY = -absY;
            }

            p->y += height * 8 + absY / 2;

            if (j == 5 || j == 6) {
                p->x -= 0x1000;
            }

            p->scaleX = p->fxScaleX >> 12;
            p->scaleY = p->fxScaleY >> 12;
        }
    }

    e->timer++;

    if (e->timer >= 0x40) {
        e->finished = 1;
    }
}

