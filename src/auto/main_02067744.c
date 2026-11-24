/* 2 functions from 0x02067744 to 0x02068380 (main), found by ds-decomp. */
#include "common.h"

    extern void *func_02067698(u8 *, u16);
    extern u8 data_0213fd14[];
    extern u8 data_0213fd1c[];
    extern u32 data_0216263c[3];

    typedef struct {
        s8 x;
        s8 y;
    } Pair;

    typedef struct {
        s8 x;
        s8 y;
        s8 sx;
        s8 sy;
    } Spawn;

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
        u16 speed;
        u8 pad2e[2];
        s32 active;
    } Particle;


typedef struct { Pair values[4]; } Directions_02067de0;
typedef struct { Spawn values[7]; } Spawns_02067de0;
typedef struct { Directions_02067de0 directions; Spawns_02067de0 spawn, temp; } Tables_02067de0;

void func_02067de0(u8 *arg0)
{
    Particle *p;
    u16 i;
    u16 state = *(u16 *)(arg0 + 0x34);
    s32 posY = *(s32 *)(arg0 + 0x4);

    *(s32 *)(arg0 + 0x4) = posY + 0x18000;

    switch (state) {
    case 0:
        for (i = 0; i < 4; i++) {
            s32 sx, sy;

            p = (Particle *)func_02067698(arg0, i);

            sx = (p->scaleX * 0x1000) / 32;
            p->fxScaleX = sx;

            sy = (p->scaleY * 0x1000) / 32;
            p->fxScaleY = sy;

            p->x = sx / 2;
            p->y = sy / 2;

            p->scaleX = sx >> 12;
            p->scaleY = sy >> 12;

            p->active = 1;
            p->alpha = 24;
        }

        *(u16 *)(arg0 + 0x32) = 0x1000;
        *(u16 *)(arg0 + 0x34) = 1;
        break;

    case 1: {
        struct {
            Pair directions[4];
            Spawn spawn[7];
            Spawn temp[7];
        } tables;

        const u8 *src;
        u8 *dst;
        u32 count;
        u32 rng;
        u16 random;

        src = data_0213fd14;
        dst = (u8 *)tables.directions;
        count = 4;

        do {
            u8 y = src[1];
            u8 x = src[0];

            src += 2;
            dst[1] = y;
            dst[0] = x;
            dst += 2;
        } while (--count != 0);

        *(u16 *)(arg0 + 0x32) =
            (*(u16 *)(arg0 + 0x32) * 96) / 100;

        for (i = 0; i < 4; i++) {
            s32 sx, sy;
            const Pair *dir;

            p = (Particle *)func_02067698(arg0, i);
            dir = &tables.directions[i];

            sx = (0x1000 - *(u16 *)(arg0 + 0x32))
                * 45 * dir->x;
            p->fxScaleX = sx;

            sy = (0x1000 - *(u16 *)(arg0 + 0x32))
                * 45 * dir->y;
            p->fxScaleY = sy;

            p->scaleX = sx >> 12;
            p->scaleY = sy >> 12;

            p->x = sx / 2;
            p->y = sy / 2;
        }

        src = data_0213fd1c;
        dst = (u8 *)tables.spawn;
        i = 4;
        count = 14;

        do {
            u8 y = src[1];
            u8 x = src[0];

            src += 2;
            dst[1] = y;
            dst[0] = x;
            dst += 2;
        } while (--count != 0);

        for (; i < 11; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p->active != 0) {
                s32 x, sx, sy;

                x = (p->x * (p->speed + 88)) / 100;
                p->x = x;

                p->y = (p->y * (p->speed + 88)) / 100;

                sx = (p->fxScaleX * 92) / 100;
                p->fxScaleX = sx;

                sy = (p->fxScaleY * 92) / 100;
                p->fxScaleY = sy;

                p->scaleX = sx >> 12;
                p->scaleY = sy >> 12;

                if (x < 0x4000 &&
                    x > -0x4000 &&
                    p->y < 0x4000 &&
                    p->y > -0x4000) {
                    p->active = 0;
                }
            } else {
                rng = data_0216263c[1] * data_0216263c[0]
                    + data_0216263c[2];

                random = (u16)(((rng >> 16) * 4) >> 16);
                data_0216263c[0] = rng;

                if (random - 2 != 0) {
                    s32 index;
                    s32 speed;
                    s32 dx, dy;
                    s32 tx, ty;
                    s32 x, y;
                    s16 sx, sy;
                    const Spawn *entry;
                    const Pair *dir;

                    src = (const u8 *)tables.spawn;
                    dst = (u8 *)tables.temp;
                    count = 14;

                    do {
                        u8 b = src[1];
                        u8 a = src[0];

                        src += 2;
                        dst[1] = b;
                        dst[0] = a;
                        dst += 2;
                    } while (--count != 0);

                    rng = data_0216263c[1] * rng
                        + data_0216263c[2];

                    random = (u16)(((rng >> 16) * 6) >> 16);
                    data_0216263c[0] = rng;

                    index = (s8)(random - 3);
                    index = (s8)(index < 0 ? -index : index);

                    entry = &tables.temp[i - 4];
                    dir = &tables.directions[index];

                    tx = entry->x;
                    dx = dir->x;

                    x = dx * (tx * 2);
                    sx = entry->sx * dx;

                    dy = dir->y;
                    sy = entry->sy * dy;
                    ty = entry->y;

                    p->scaleX = sx;
                    p->scaleY = sy;

                    y = dy * (ty * 2);

                    p->fxScaleX = p->scaleX * 0x1000;
                    p->fxScaleY = p->scaleY * 0x1000;

                    p->x = x * 0x1000;
                    p->y = y * 0x1000;

                    rng = data_0216263c[1] * data_0216263c[0]
                        + data_0216263c[2];

                    random = (u16)(((rng >> 16) * 20) >> 16);
                    data_0216263c[0] = rng;

                    speed = (s8)(random - 10);

                    if (speed < 0) {
                        speed = -speed;
                    }

                    p->speed = speed;
                    p->active = 1;
                }
            }
        }

        for (i = 11; i < 15; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p->active != 0) {
                s32 x, sx, sy;

                x = (p->x * (p->speed + 84)) / 100;
                p->x = x;

                p->y = (p->y * (p->speed + 84)) / 100;

                sx = (p->fxScaleX * 88) / 100;
                p->fxScaleX = sx;

                sy = (p->fxScaleY * 88) / 100;
                p->fxScaleY = sy;

                p->scaleX = sx >> 12;
                p->scaleY = sy >> 12;

                if (x < 0x4000 &&
                    x > -0x4000 &&
                    p->y < 0x4000 &&
                    p->y > -0x4000) {
                    p->active = 0;
                }
            } else {
                rng = data_0216263c[1] * data_0216263c[0]
                    + data_0216263c[2];

                random = (u16)(((rng >> 16) * 128) >> 16);
                data_0216263c[0] = rng;

                p->x = (random - 64) * 0x1000;

                rng = data_0216263c[1] * data_0216263c[0]
                    + data_0216263c[2];

                random = (u16)(((rng >> 16) * 128) >> 16);
                data_0216263c[0] = rng;

                p->y = (random - 64) * 0x1000;

                p->scaleX = 5;
                p->scaleY = 5;

                p->fxScaleX = p->scaleX * 0x1000;
                p->fxScaleY = p->scaleY * 0x1000;

                p->active = 1;
            }
        }
        break;
    }
    }

    if (*(u32 *)(arg0 + 0x2c) > 90) {
        *(s32 *)(arg0 + 0x48) = 1;
    }
}
