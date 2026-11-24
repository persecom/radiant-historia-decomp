/* 1 function from 0x0206A854 to 0x0206B3C0 (main), found by ds-decomp. */
#include "common.h"

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
        s32 offsetX;
        s32 offsetY;
        u8 pad24[2];
        u8 alpha;
        u8 pad27[5];
        u16 timer;
        u8 pad2e[2];
        s32 active;
    } Particle;

    typedef struct {
        u8 pad00[0x30];
        u16 timer;
        u16 timer2;
        u16 flags;
        u8 pad36[0x12];
        s32 finished;
    } Effect;


void func_0206a854(u8 *arg0)
{
    Effect *e = (Effect *)arg0;
    Particle *p;
    s32 flags;
    s32 bit;
    s32 width = 26;
    s32 active = 1;
    s32 inactive = 0;
    u32 *rng;
    s32 range;

#define RH_RANDOM(n) \
    ((u16)((((rng[0] = rng[1] * rng[0] + rng[2]) >> 16) * (n)) >> 16))

    flags = e->flags;

    if (!(flags & 1)) {
        u16 i;

        e->flags = flags | 1;

        for (i = inactive; i < 4; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p != NULL) {
                p->active = active;
            }
        }
    }

    flags = e->flags;
    bit = flags & 2;

    if (bit == 0) {
        u16 i;
        s32 negativeWidth;
        s32 right;
        s32 upper;
        s32 height;

        e->flags = flags | 2;

        i = 0;
        negativeWidth = -26;
        right = 0x1a000;
        upper = 0x11000;
        height = 17;

        for (; i < 4; i++) {
            s32 h;

            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            switch (i) {
            case 0:
                p->x = inactive;
                p->y = upper;
                p->timer = inactive;
                p->scaleX = width;
                p->scaleY = height;
                break;

            case 1:
                p->x = right;
                p->y = 0x11000;
                p->timer = inactive;
                p->scaleX = negativeWidth;

                h = 17;
                goto storeInitialHeight;

            case 2:
                p->x = inactive;
                p->y = 0x6000;
                p->timer = inactive;
                p->scaleX = width;

                goto shortHeight;

            case 3:
                p->x = 0x1a000;
                p->y = 0x6000;
                p->timer = inactive;
                p->scaleX = negativeWidth;

            shortHeight:
                h = 7;

            storeInitialHeight:
                p->scaleY = h;
                break;
            }
        }
    } else if (bit != 0) {
        s32 mask = 0xfffd;
        u16 i;
        s32 limit = 8;
        s32 negativeWidth = -26;

        for (i = 0; i < 4; i++) {
            s32 t;
            s32 xProduct;
            s32 yProduct;
            s32 sx;
            s32 sy;
            s32 h;

            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            p->timer++;

            t = p->timer;

            if (t > limit) {
                p->timer = limit;
            }

            switch (i) {
            case 0:
                t = p->timer;

                xProduct = t * width;
                yProduct = t * 8;

                sx = (s16)(xProduct / 8);

                p->x = -(sx / 2) * 0x1000;

                sy = (s16)(yProduct / 8);

                h = sy + 17;
                sx += 26;

                p->y = h * 0x1000;
                p->scaleX = sx;
                p->scaleY = h;

                t = p->timer;

                if (t == 8) {
                    e->flags &= mask;
                }

                goto setActive;

            case 1:
                t = p->timer;

                xProduct = t * width;
                yProduct = t * 8;

                sx = (s16)(xProduct / 8);

                p->x = (26 + sx / 2) * 0x1000;

                sy = (s16)(yProduct / 8);

                h = sy + 17;
                sx = negativeWidth - sx;

                p->y = h * 0x1000;
                p->scaleX = sx;
                p->scaleY = h;

                t = p->timer;
                goto setActive;

            case 2:
                t = p->timer;

                xProduct = t * width;
                yProduct = t * 5;

                sx = (s16)(xProduct / 8);

                p->x = -(sx / 2) * 0x1000;

                sx += 26;

                goto lowerPair;

            case 3:
                t = p->timer;

                xProduct = t * width;
                yProduct = t * 5;

                sx = (s16)(xProduct / 8);

                p->x = (26 + sx / 2) * 0x1000;

                sx = negativeWidth - sx;

            lowerPair:
                sy = (s16)(yProduct / 8);

                p->y = (6 + sy / 2) * 0x1000;

                p->scaleX = sx;
                p->scaleY = sy + 6;

                t = p->timer;

            setActive:
                if (t == 8) {
                    p->active = inactive;
                } else {
                    p->active = active;
                }

                break;
            }
        }
    }

    flags = e->flags;

    active = 1;
    inactive = 0;

    bit = flags & 4;

    if (bit == 0) {
        s32 depth;
        s32 left;
        s32 upper;
        s32 negativeWidth;
        u16 i;

        e->flags = flags | 4;

        i = 4;
        depth = -0x14000;
        left = 0x5000;
        upper = 0x1e000;
        negativeWidth = -17;

        for (; i < 6; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            switch (i) {
            case 4:
                p->x = left;
                p->y = upper;
                p->z = depth;
                p->timer = inactive;
                p->scaleX = negativeWidth;
                goto initializePair;

            case 5:
                p->x = 0x15000;
                p->y = 0x1e000;
                p->z = depth;
                p->timer = inactive;
                p->scaleX = 17;

            initializePair:
                p->scaleY = 32;
                p->active = active;
                break;
            }
        }
    } else if (bit != 0) {
        s32 heightRange = 24;
        u16 i = 4;
        s32 otherRange = heightRange;

        for (; i < 6; i++) {
            s32 t;
            s32 sx;
            s32 sy;
            s32 xProduct;
            s32 yProduct;

            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            p->timer++;

            t = p->timer;

            if (t > 8) {
                p->timer = inactive;
            }

            switch (i) {
            case 4:
                t = p->timer;

                yProduct = t * otherRange;
                xProduct = t * 8;

                sx = (s16)(xProduct / 8);
                sy = (s16)(yProduct / 8);

                p->x = (5 + sx / 2) * 0x1000;
                p->y = (30 + sy / 2) * 0x1000;

                sx -= 17;

                goto updatePairScale;

            case 5:
                t = p->timer;

                yProduct = t * heightRange;
                xProduct = t * 8;

                sx = (s16)(xProduct / 8);
                sy = (s16)(yProduct / 8);

                p->x = (21 - sx / 2) * 0x1000;
                p->y = (30 + sy / 2) * 0x1000;

                sx = 17 - sx;

            updatePairScale:
                p->scaleX = sx;
                p->scaleY = sy + 32;
                break;
            }
        }
    }

    flags = e->flags;
    rng = data_0216263c;
    range = 10;

    bit = flags & 8;

    active = 1;
    inactive = 0;

    if (bit == 0) {
        s32 depth;
        u16 i;

        e->flags = flags | 8;

        i = 6;
        depth = -0xa000;

        for (; i < 14; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p != NULL) {
                u32 seed;
                u32 value;

                seed = rng[1] * rng[0] + rng[2];
                value = (seed >> 16) * range;
                rng[0] = seed;

                p->timer = value >> 16;
                p->z = depth;
            }
        }
    } else if (bit != 0) {
        u16 i = 6;
        s32 initialWidth = 12;
        s32 initialHeight = 40;

        for (; i < 14; i++) {
            s32 timer;

            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            p->timer--;

            if (p->timer == 0) {
                u32 seed;
                u16 random;

                seed = rng[1] * rng[0] + rng[2];

                random = (u16)(
                    ((seed >> 16) * 40) >> 16);

                rng[0] = seed;

                p->timer = random + 10;
            }

            timer = p->timer;

            if (timer < 10) {
                p->active = inactive;
            } else if (timer <= 25) {
                s32 t;
                s32 sx;
                s32 sy;

                p->active = active;

                t = 26 - p->timer;

                sx = (s16)((t * 16) / 16);
                sy = (s16)((t * 20) / 16);

                p->scaleX = 12 - sx;
                p->scaleY = 40 - sy;

                p->x = (p->offsetX + 14) * 0x1000;
                p->y = (p->offsetY + 50) * 0x1000;
            } else if (timer == 26) {
                u32 seed;
                u16 random;
                s32 offset;

                seed = rng[1] * rng[0] + rng[2];

                random = (u16)(
                    ((seed >> 16) * 32) >> 16);

                rng[0] = seed;

                p->offsetX = random - 16;

                seed = rng[1] * rng[0] + rng[2];

                random = (u16)(
                    ((seed >> 16) * range) >> 16);

                rng[0] = seed;

                offset = random;
                p->offsetY = offset;

                p->x = (p->offsetX + 14) * 0x1000;
                p->y = (offset + 50) * 0x1000;

                p->scaleX = initialWidth;
                p->scaleY = initialHeight;
            }
        }
    }

    flags = e->flags;
    rng = data_0216263c;
    range = 10;

    bit = flags & 0x10;

    active = 1;
    inactive = 0;

    if (bit == 0) {
        s32 depth;
        u16 i;

        e->flags = flags | 0x10;

        i = 14;
        depth = -0x1e000;

        for (; i < 18; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p != NULL) {
                u32 seed;
                u32 value;

                seed = rng[1] * rng[0] + rng[2];
                value = (seed >> 16) * range;
                rng[0] = seed;

                p->timer = value >> 16;
                p->z = depth;
            }
        }
    } else if (bit != 0) {
        u16 i = 14;
        s32 initialHeight = 40;
        s32 timerRange = 12;

        for (; i < 18; i++) {
            s32 timer;

            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            p->timer--;

            if (p->timer == 0) {
                p->timer = RH_RANDOM(timerRange) + 22;
            }

            timer = p->timer;

            if (timer < 10) {
                p->active = inactive;
            } else if (timer <= 21) {
                s32 t;
                s32 scale;

                p->active = active;

                t = 22 - p->timer;

                scale = (s16)((t * range) / 12);

                p->scaleX = 10 - scale;
                p->scaleY = 50 - scale;

                p->x = (p->offsetX + 14) * 0x1000;
                p->y = (p->offsetY + 40) * 0x1000;
            } else if (timer == 22) {
                s32 offset;

                p->offsetX = RH_RANDOM(48) - 24;

                offset = RH_RANDOM(20) - 10;
                p->offsetY = offset;

                p->x = (p->offsetX + 14) * 0x1000;
                p->y = (offset + 30) * 0x1000;

                p->scaleX = range;
                p->scaleY = initialHeight;
            }
        }
    }

    flags = e->flags;
    rng = data_0216263c;
    range = 10;

    bit = flags & 0x20;

    active = 1;
    inactive = 0;

    if (bit == 0) {
        s32 depth;
        u16 i;

        e->flags = flags | 0x20;

        i = 22;
        depth = -0x28000;

        for (; i < 30; i++) {
            p = (Particle *)func_02067698(arg0, i);

            if (p != NULL) {
                u32 seed;
                u32 value;

                seed = rng[1] * rng[0] + rng[2];
                value = (seed >> 16) * range;
                rng[0] = seed;

                p->timer = value >> 16;
                p->z = depth;
            }
        }
    } else if (bit != 0) {
        s32 initialWidth = 12;
        u16 i = 22;
        s32 timerRange = initialWidth;

        for (; i < 30; i++) {
            s32 timer;

            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            p->timer--;

            if (p->timer == 0) {
                p->timer = RH_RANDOM(timerRange) + 22;
            }

            timer = p->timer;

            if (timer < 10) {
                p->active = inactive;
            } else if (timer <= 21) {
                s32 t;
                s32 scale;

                p->active = active;

                t = 22 - p->timer;

                scale = (s16)((t * range) / 12);

                p->scaleX = 12 - scale;
                p->scaleY = 10 - scale;

                p->x = (p->offsetX + 14) * 0x1000;
                p->y = (p->offsetY + 50) * 0x1000;
            } else if (timer == 22) {
                s32 offset;

                p->offsetX = RH_RANDOM(48) - 24;

                offset = RH_RANDOM(range);
                p->offsetY = offset;

                p->x = (p->offsetX + 14) * 0x1000;
                p->y = (offset + 50) * 0x1000;

                p->scaleX = initialWidth;
                p->scaleY = range;
            }
        }
    }

#undef RH_RANDOM

    e->timer++;

    active = 1;
    inactive = 0;

    if (e->timer <= 10) {
        return;
    }

    if (e->timer < 21) {
        return;
    }

    {
        u16 i;

        for (i = inactive; i < 30; i++) {
            s32 alpha;

            p = (Particle *)func_02067698(arg0, i);

            if (p != NULL) {
                alpha = 31 - (e->timer * 31) / 30;

                p->alpha = alpha;

                if ((alpha & 0xff) == 0) {
                    p->active = inactive;
                }
            }
        }
    }

    if (e->timer == 30) {
        e->finished = active;
    }
}
