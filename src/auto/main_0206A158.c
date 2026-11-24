/* 2 functions from 0x0206A158 to 0x0206A854 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s8 data[30][6];
} Unk_0213fd38;

extern const Unk_0213fd38 data_0213fd38;
extern u8 *data_021600e8;

extern u8 *func_02067674(void);
extern void func_021167f0(void *, void *);
void func_0206a158(u8 *arg0)
{
    extern void *func_02067698(u8 *, u16);
    extern u32 data_0216263c[3];
    extern u16 data_0213fcec[];

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
        u16 timer;
        u8 phase;
        u8 pad2f;
        s32 active;
    } Particle;

    typedef struct {
        s32 x;
        s32 y;
        u8 pad08[0x24];
        u32 frame;
        u16 count;
        u16 timer2;
        u16 state;
        u8 pad36[0x12];
        s32 finished;
    } Effect;

    typedef struct {
        s16 values[3];
    } OffsetTable;

    Effect *e = (Effect *)arg0;

#define RH_RANDOM(n) \
    ((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * (n)) >> 16))

#define RH_ABS(x) ((x) >= 0 ? (x) : -(x))

    e->y += 0x10000;

    if (e->state == 0) {
        OffsetTable offsets =
            *(const OffsetTable *)data_0213fcec;

        u16 i;

        for (i = 0; i < 27; i++) {
            Particle *p;

            p = (Particle *)func_02067698(arg0, i);

            if (p != NULL) {
                p->x += 0x20000;

                if (i >= 3) {
                    p->x += 0x10000;
                } else {
                    p->x =
                        (p->x + offsets.values[i] * 0x1000)
                        - 0xc000;

                    p->y -= 0x4000;
                }
            }
        }

        e->count = 3;
        e->state = 1;
    }

    if (e->count < 21) {
        u16 i;

        for (i = 0; i < 3; i++) {
            Particle *p;

            p = (Particle *)func_02067698(arg0, i);

            if (p != NULL) {
                if (i == ((e->frame >> 1) % 3)) {
                    p->active = 1;
                } else {
                    p->active = 0;
                }
            }
        }
    }

    if (e->state == 1) {
        u16 i;

        for (i = 3; i < e->count; i++) {
            Particle *p;

            p = (Particle *)func_02067698(arg0, i);

            if (p == NULL) {
                continue;
            }

            if (p->active != 0) {
                if (p->phase == 0) {
                    p->timer -= (u16)(p->timer / 34);
                } else if (p->phase == 1) {
                    p->timer -= (u16)(p->timer / 30);
                } else if (p->phase == 2) {
                    p->timer -= (u16)(p->timer / 27);
                }

                p->x = 0x15c000 - p->timer * 300;

                if (RH_ABS(RH_RANDOM(6) - 3) == 0) {
                    p->x += (RH_RANDOM(6) - 3) * 0x1000;
                    p->y += (RH_RANDOM(6) - 3) * 0x1000;
                }

                if (p->timer > 0x300) {
                    if (p->phase == 0) {
                        p->y += 0x1000 - RH_ABS(RH_RANDOM(1024) - 512);
                    } else if (p->phase == 2) {
                        p->y -= 0x1000 + RH_ABS(RH_RANDOM(1024) - 512);
                    }

                    if (p->fxScaleY < 0x30000) {
                        if (RH_ABS(RH_RANDOM(8) - 4) != 0) {
                            p->fxScaleY += p->fxScaleY / 20;
                            p->fxScaleX += p->fxScaleX / 20;
                        }
                    }

                    p->scaleX = p->fxScaleX >> 12;
                    p->scaleY = p->fxScaleY >> 12;
                } else {
                    if (p->phase == 0) {
                        p->y -= 0x800;
                    } else if (p->phase == 2) {
                        p->y += 0x800;
                    }
                }
            } else {
                s32 sx;
                s32 sy;

                p->active = 1;
                p->z = -0x20000;

                p->y += (RH_RANDOM(6) - 3) * 0x1000;

                p->phase = (s32)i % 3;

                sx = (p->fxScaleX / 5) * 3;
                p->fxScaleX = sx;

                sy = (p->fxScaleY / 5) * 3;
                p->fxScaleY = sy;

                p->scaleX = sx >> 12;
                p->scaleY = sy >> 12;

                p->timer = 0x1000;
            }
        }

        if ((e->frame & 1) == 0 && e->count < 21) {
            e->count += 3;

            if (((volatile Effect *)e)->count >= 21) {
                u16 j;

                e->count = 21;

                for (j = 0; j < 3; j++) {
                    Particle *p;

                    p = (Particle *)func_02067698(arg0, j);

                    if (p != NULL) {
                        p->active = 0;
                    }
                }
            }
        }
    }

#undef RH_ABS
#undef RH_RANDOM

    if (e->frame > 64) {
        e->finished = 1;
    }
}

void func_0206a75c(u8 *arg0) {
    Unk_0213fd38 local = data_0213fd38;
    u16 i;

    for (i = 0; i < 30; i++) {
        u8 *entry = func_02067674();
        u16 idx = i * 6;
        *(s8 *)(entry + 0xc) = ((s8 *)local.data)[idx + 0];
        *(s8 *)(entry + 0xd) = ((s8 *)local.data)[idx + 1];
        *(s8 *)(entry + 0xe) = ((s8 *)local.data)[idx + 2];
        *(s8 *)(entry + 0xf) = ((s8 *)local.data)[idx + 3];
        *(s16 *)(entry + 0x10) = ((s8 *)local.data)[idx + 4];
        *(s16 *)(entry + 0x12) = ((s8 *)local.data)[idx + 5];
        *(s32 *)(entry + 0x14) = *(s16 *)(entry + 0x10) << 12;
        *(s32 *)(entry + 0x18) = *(s16 *)(entry + 0x12) << 12;
        *(u16 *)(entry + 0x2a) = i;
        *(s32 *)(entry + 0x30) = 0;
        func_021167f0(arg0 + 0x54, entry);
    }
    *(u16 *)(arg0 + 0x1c) = 6;
    *(u16 *)(arg0 + 0x26) = 0x60;
    func_021167f0(data_021600e8 + 0x48, arg0);
}
