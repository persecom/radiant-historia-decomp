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
    s32 zero = 0;
    u16 i;
    u16 phase = e->phase;

#define RH_RANDOM(n) \
    ((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] \
    + data_0216263c[2]) >> 16) * (n)) >> 16))

    switch (phase) {
    case 0:
        for (i = zero; i < 8; i++) {
            p = (Particle *)func_02067698(arg0, i);

            p->fxScaleY = 0x6000;
            p->fxScaleX = 0x6000;

            p->scaleY = 6;
            p->scaleX = p->scaleY;

            if (i == 0 || i == 4) {
                u32 seed;
                u32 value;

                seed = data_0216263c[1] * data_0216263c[0]
                    + data_0216263c[2];
                value = (seed >> 16) * 40;

                data_0216263c[0] = seed;

                p->timer = value >> 16;
            }

            p->pos.x = zero;
            p->pos.y = zero;
            p->pos.z = zero;
        }

        e->timer = 0x1000;
        e->phase = e->timer >> 12;
        break;

    case 1: {
        u8 group;
        s32 start;
        u16 j;
        s32 scale;
        s32 z;

        for (group = zero; group < 2; group++) {
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
            p->scaleX = ((volatile Particle *)p)->scaleY;

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

        if (state == 0) {
            s32 active;
            s32 inactive;
            s32 maxScale;
            s32 initialScale;
            s32 scale;

            active = 1;
            inactive = zero;
            maxScale = 48;
            initialScale = 6;

            for (i = 8; i < 20; i++) {
                p = (Particle *)func_02067698(arg0, i);

                if (p->active != 0) {
                    switch (i) {
                    case 8:
                    case 9:
                    case 14:
                    case 15:
                    case 16:
                    case 17: {
                        s32 value;

                        scale = (p->fxScaleY * 96) / 100;

                        p->fxScaleY = scale;
                        p->fxScaleX = scale;

                        p->scaleY = scale >> 12;
                        value = ((volatile Particle *)p)->scaleY;

                        p->scaleX = value;

                        if (value < 2) {
                            p->active = inactive;
                        }

                        p->pos.y += p->velocityY;

                        p->velocityY =
                            (p->velocityY * 94) / 100;
                        break;
                    }

                    case 10:
                    case 11:
                    case 12:
                    case 13: {
                        s32 value;

                        scale = (p->fxScaleY * 92) / 100;

                        p->fxScaleY = scale;
                        p->scaleY = scale >> 12;
                        value = ((volatile Particle *)p)->scaleY;

                        if (value < 2) {
                            p->active = inactive;
                        }

                        p->pos.y += p->timer * 0x1000;
                        break;
                    }

                    case 18:
                    case 19:
                        scale = p->fxScaleY + 0x2000;

                        p->fxScaleY = scale;
                        p->pos.y += p->velocityY;

                        p->scaleX = p->fxScaleX >> 12;
                        p->scaleY = scale >> 12;

                        if (((volatile Particle *)p)->scaleY > 10) {
                            p->fxScaleX =
                                (p->fxScaleX * 94) / 100;
                        }

                        if (((volatile Particle *)p)->scaleX < 3) {
                            p->active = inactive;
                        }

                        if (((volatile Particle *)p)->scaleY > maxScale) {
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
                        /* fallthrough */
                    square:
                        p->fxScaleY = value;
                        p->fxScaleX = value;

                        p->velocityY = (RH_RANDOM(4) + 4) * 0x1000;
                        break;

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
                        p->scaleY = 7;
                        value = ((volatile Particle *)p)->scaleY;
                        p->scaleX = value;

                        value = 0x7000;
                        goto square;

                    case 18:
                        p->scaleX = 8;
                        value = 0x8000;
                        goto tall;

                    case 19:
                        p->scaleX = 11;
                        value = 0xb000;

                    tall:
                        p->fxScaleX = value;
                        p->fxScaleY = 0x1000;
                        p->scaleY = active;

                        p->velocityY = (RH_RANDOM(2) + 2) * 0x1000;
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
    u16 state;
    e->y += 0x18000;
    state=e->state;

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
        Directions_020698e0 table = *(const Directions_020698e0 *)data_0213fcf4;
        u16 i;

        for (i = 0; i < 4; i++) {
            s32 sx;
            s32 sy;

            p = (Particle *)func_02067698(arg0, i);

            sx = (0x1000 - e->timer) * ((s8 *)&table)[i*2];
            p->fxScaleX = sx;

            sy = (0x1000 - e->timer) * ((s8 *)&table)[i*2+1];
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

                p->y = (p->y * p->speed) / 100;

                if (x < 0) {
                    x = -x;
                }

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

                seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                random = (u16)(((seed >> 16) * 4) >> 16);
                data_0216263c[0] = seed;

                spawn = random - 2;

                if (spawn == 0 && e->frame < 0x20) {
                    p->active = active;

                    seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                    random = (u16)(((seed >> 16) * 48) >> 16);
                    offset = random - 24;

                    data_0216263c[0] = seed;

                    p->x = offset * 0x1000;

                    seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                    random = (u16)(
                        ((seed >> 16) * positionRange) >> 16);
                    offset = random - 24;

                    data_0216263c[0] = seed;

                    p->y = offset * 0x1000;

                    seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];

                    random = (u16)(
                        ((seed >> 16) * speedRange) >> 16);

                    data_0216263c[0] = seed;

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

#define RH_RANDOM(n) \
    ((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * (n)) >> 16))

#define RH_ABS(x) ((x) >= 0 ? (x) : -(x))

    e->y += 0x18000;

    switch (e->state) {
    case 0: {
        u16 i;
        for (i = 0; i < 4; i++) {
            s32 sx;
            p = (Particle *)func_02067698(arg0, i);
            p->active = 1;
            sx = p->scaleX << 12;
            p->fxScaleX = sx;
            p->fxScaleY = (p->scaleY * 0x8000) / 10;
            p->x = sx / 2;
            if (i == 0 || i == 2) {
                p->x -= 0x1000;
            }
            p->y = p->fxScaleY / 2;
        }
        e->state = 1;
        break;
    }

    case 1: {
        u16 i;
        for (i = 0; i < 4; i++) {
            p = (Particle *)func_02067698(arg0, i);
            p->x = ((e->timer * 10) << 12) + p->fxScaleX / 2;
            p->y = p->fxScaleY / 2;
            if (i == 0 || i == 2) {
                p->x -= 0x1000;
            }
        }

        for (i = 4; i < 10; i++) {
            p = (Particle *)func_02067698(arg0, i);
            if (p->active != 0) {
                p->x += p->speed << 12;
                p->speed--;
                if (i >= 8) {
                    p->fxScaleX = (p->fxScaleX * 70) / 100;
                    p->scaleX = p->fxScaleX >> 12;
                }
                if (p->speed == 0 || p->fxScaleX < 0x1000) {
                    p->active = 0;
                }
            } else {
                if (RH_RANDOM(4) - 2 == 0) {
                    u16 r;
                    Particle *anchor;
                    s32 d;
                    p->active = 1;
                    r = RH_RANDOM(64);
                    anchor = (Particle *)func_02067698(arg0, 0);
                    d = r - 64;
                    p->x = anchor->x + (d << 12);
                    p->y = (RH_RANDOM(32) - 16) << 12;
                    p->speed = RH_ABS(RH_RANDOM(20) - 10);
                    if (i >= 8) {
                        p->fxScaleX = (RH_ABS(RH_RANDOM(32) - 16) + 8) << 12;
                    }
                }
            }
        }

        e->timer++;
        if (((volatile Effect *)e)->timer > 0x20) {
            e->finished = 1;
        }
        break;
    }
    }

#undef RH_ABS
#undef RH_RANDOM

    if (e->frame > 0x3c) {
        e->finished = 1;
    }
}
