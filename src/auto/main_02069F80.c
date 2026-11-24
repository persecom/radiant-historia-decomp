/* 4 functions from 0x0206923C to 0x0206A158 (main), found by ds-decomp. */
#include "common.h"

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
    u16 state = ((volatile Effect *)e)->state;

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
        u32 count;
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

        if (((volatile Effect *)e)->timer >= 0x40) {
            e->finished = 1;
        }

        return;
    }

    case 2:
        e->state = 3;
        break;
    }
}

