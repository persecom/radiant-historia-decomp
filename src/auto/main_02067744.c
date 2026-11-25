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
        volatile s16 scaleX;
        volatile s16 scaleY;
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

static inline void Spawn_02067de0(Particle *p, const Spawn *entry, const Pair *dir) {
 s32 x=dir->x*(entry->x*2);
 s16 sx=entry->sx*dir->x;
 s16 sy=entry->sy*dir->y;
 s32 y=dir->y*(entry->y*2);
 p->scaleX=sx; p->scaleY=sy;
 p->fxScaleX=p->scaleX*4096;
 p->fxScaleY=p->scaleY*4096;
 p->x=x*4096; p->y=y*4096;
}
static inline u16 Random_02067de0(u32 limit) {
    u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
    data_0216263c[0]=seed;
    return (u16)(((seed>>16)*limit)>>16);
}
extern u8 *data_021600e8;
extern u16 data_0213fc78[];
extern s32 data_02170248[];
extern s32 data_02170204[];
extern s32 data_02155984;
extern void func_0206753c(s32);
extern void func_02002028(s32);
extern long long func_02001fd0(void);
extern s32 func_0210c2f4(void *, void *);
extern void func_021098ac(void *);
static inline void ProjectParticlePosition(const s32 *pos,s32 *outX,s32 *outY) {
const s32 *m=data_02170248,*p=data_02170204;
register s32 z,y;
s32 x,py,px,sy,sx;
long long inv;
x=m[9]+(s32)(((long long)pos[0]*m[0]+(long long)pos[1]*m[3]+(long long)pos[2]*m[6])>>12);
y=m[10]+(s32)(((long long)pos[0]*m[1]+(long long)pos[1]*m[4]+(long long)pos[2]*m[7])>>12);
z=m[11]+(s32)(((long long)pos[0]*m[2]+(long long)pos[1]*m[5]+(long long)pos[2]*m[8])>>12);
func_02002028(p[15]+(s32)(((long long)x*p[3]+(long long)y*p[7]+(long long)z*p[11])>>12));
px=p[12]+(s32)(((long long)x*p[0]+(long long)y*p[4]+(long long)z*p[8])>>12);
py=p[13]+(s32)(((long long)x*p[1]+(long long)y*p[5]+(long long)z*p[9])>>12);
inv=func_02001fd0();
sy=(s32)((inv*py+0x80000000LL)>>32);
sy=(sy+4096)>>1;
sy=((sy<<7)+(sy<<6)+2048)>>12;
sx=(s32)((inv*px+0x80000000LL)>>32);
sx=((((sx+4096)>>1)<<8)+2048)>>12;
sy=192-sy;
*outX=sx;*outY=sy;
}
void func_02067744(void) {
    s16 table[10];
    u8 *owner = *(u8 **)(data_021600e8 + 0x48);
    s32 signY, signX;
    u32 count = 5;
    u16 *src = data_0213fc78;
    u16 *dst = (u16 *)table;
    do {
        u16 a = src[0], b = src[1];
        src += 2;
        dst[1] = b;
        dst[0] = a;
        dst += 2;
    } while (--count);
    while (owner) {
        signX = 1;
        signY = 1;
        if (owner[0x40] & 2) {
            signX = -1;
        }
        if (owner[0x40] & 4) {
            signY = -1;
        }
        if (*(void **)(owner + 0x44)) {
            u8 *part = *(u8 **)(owner + 0x54);
            while (part) {
                s32 draw = 1;
                *(volatile u32 *)0x040004a4 = (((owner[0x18] + 24) % 24 + 32) << 24) | 0xc0 | (part[0x26] << 16);
                if (*(s32 *)(part + 0x30) && part[0x26]) {
                    s32 texture = *(u16 *)(part + 0x28);
                    s32 screenX, screenY;
                    func_0206753c(texture != 0 ? texture : (*(u16 *)(owner + 0x26) + owner[0x28]));
                    table[1] = *(s8 *)(part + 0xc);
                    table[2] = *(s8 *)(part + 0xd);
                    table[3] = *(s8 *)(part + 0xe);
                    table[4] = *(s8 *)(part + 0xf);
                    table[8] = *(s16 *)(part + 0x10) * signX;
                    table[9] = *(s16 *)(part + 0x12) * signY;
                    if (part[0x2f] == 0) {
                        if (owner[0x20] == 3) {
                            screenX = *(s32 *)owner >> 12;
                            screenY = *(s32 *)(owner + 4) >> 12;
                        } else {
                            s32 x = *(s32 *)owner, y = *(s32 *)(owner + 4), z = *(s32 *)(owner + 8);
                            s32 tx = data_02170248[9] + (s32)(((long long)y * data_02170248[3] + (long long)x * data_02170248[0] + (long long)z * data_02170248[6]) >> 12);
                            s32 ty = data_02170248[10] + (s32)(((long long)y * data_02170248[4] + (long long)x * data_02170248[1] + (long long)z * data_02170248[7]) >> 12);
                            s32 tz = data_02170248[11] + (s32)(((long long)y * data_02170248[5] + (long long)x * data_02170248[2] + (long long)z * data_02170248[8]) >> 12);
                            s32 pw = data_02170204[15] + (s32)(((long long)ty * data_02170204[7] + (long long)tx * data_02170204[3] + (long long)tz * data_02170204[11]) >> 12);
                            s32 px, py;
                            long long inv;
                            func_02002028(pw);
                            px = data_02170204[12] + (s32)(((long long)ty * data_02170204[4] + (long long)tx * data_02170204[0] + (long long)tz * data_02170204[8]) >> 12);
                            py = data_02170204[13] + (s32)(((long long)ty * data_02170204[5] + (long long)tx * data_02170204[1] + (long long)tz * data_02170204[9]) >> 12);
                            inv = func_02001fd0();
                            {
                                s32 sy = ((s32)((inv * py + 0x80000000LL) >> 32) + 4096) >> 1;
                                screenY = 192 - (((sy << 6) + (sy << 7) + 2048) >> 12);
                            }
                            screenX = ((((s32)((inv * px + 0x80000000LL) >> 32) + 4096) >> 1) * 256 + 2048) >> 12;
                        }
                        table[5] = screenX + ((-*(s32 *)part * signX) >> 12) - (*(s16 *)(part + 0x10) * signX) / 2;
                        table[6] = screenY + ((-*(s32 *)(part + 4) * signY) >> 12) - (*(s16 *)(part + 0x12) * signY) / 2;
                    } else if (part[0x2f] == 1) {
                        {
                            s32 x = *(s32 *)owner + *(s32 *)part * signX;
                            s32 y = *(s32 *)(owner + 4) + *(s32 *)(part + 4) * signY;
                            s32 z = *(s32 *)(owner + 8) + *(s32 *)(part + 8);
                            s32 tx = data_02170248[9] + (s32)(((long long)y * data_02170248[3] + (long long)x * data_02170248[0] + (long long)z * data_02170248[6]) >> 12);
                            s32 ty = data_02170248[10] + (s32)(((long long)y * data_02170248[4] + (long long)x * data_02170248[1] + (long long)z * data_02170248[7]) >> 12);
                            s32 tz = data_02170248[11] + (s32)(((long long)y * data_02170248[5] + (long long)x * data_02170248[2] + (long long)z * data_02170248[8]) >> 12);
                            s32 pw = data_02170204[15] + (s32)(((long long)ty * data_02170204[7] + (long long)tx * data_02170204[3] + (long long)tz * data_02170204[11]) >> 12);
                            s32 px, py;
                            long long inv;
                            func_02002028(pw);
                            px = data_02170204[12] + (s32)(((long long)ty * data_02170204[4] + (long long)tx * data_02170204[0] + (long long)tz * data_02170204[8]) >> 12);
                            py = data_02170204[13] + (s32)(((long long)ty * data_02170204[5] + (long long)tx * data_02170204[1] + (long long)tz * data_02170204[9]) >> 12);
                            inv = func_02001fd0();
                            {
                                s32 sy = ((s32)((inv * py + 0x80000000LL) >> 32) + 4096) >> 1;
                                screenY = 192 - (((sy << 6) + (sy << 7) + 2048) >> 12);
                            }
                            screenX = ((((s32)((inv * px + 0x80000000LL) >> 32) + 4096) >> 1) * 256 + 2048) >> 12;
                        }
                        table[5] = screenX - (*(s16 *)(part + 0x10) * signX) / 2;
                        table[6] = screenY - (*(s16 *)(part + 0x12) * signY) / 2;
                    }
                    if (owner[0x20] == 0) {
                        u8 *actor = *(u8 **)(owner + 0x4c);
                        if (actor) {
                            if (*(u32 *)(actor + 0x80) & 0x40) {
                                u8 **disp = *(u8 ***)(actor + 0x108);
                                if (disp) {
                                    if (*disp) {
                                        table[6] += *(s16 *)(*disp + 0x4a);
                                    } else {
                                        draw = 0;
                                    }
                                } else {
                                    draw = 0;
                                }
                            }
                        } else {
                            draw = 0;
                        }
                    }
                    switch (owner[0x20]) {
                        case 0: {
                            u8 *actor = *(u8 **)(owner + 0x4c);
                            if (actor) {
                                table[7] = *(s16 *)(owner + 0x1e) + (*(s32 *)(actor + 0x74) - (*(s32 *)(part + 8) >> 12));
                            } else {
                                draw = 0;
                            }
                            break;
                        }
                        case 1:
                        case 2: {
                            s32 depth = func_0210c2f4((u8 *)data_02155984 + 0x14, *(void **)(owner + 0x4c)) >> 12;
                            table[7] = *(s16 *)(owner + 0x1e) + (500 - depth / 10 - (*(s32 *)(part + 8) >> 12));
                            break;
                        }
                        case 3:
                            table[7] = *(s16 *)(owner + 0x1e) + 500;
                            break;
                        case 4: {
                            u8 *actor = *(u8 **)(owner + 0x4c);
                            if (actor) {
                                table[7] = *(s16 *)(owner + 0x1e) + (*(s32 *)(actor + 0x1c) - (*(s32 *)(part + 8) >> 12));
                            } else {
                                draw = 0;
                            }
                            break;
                        }
                    }
                    if (draw) {
                        func_021098ac(table);
                    }
                }
                part = *(u8 **)(part + 0x38);
            }
        }
        owner = *(u8 **)(owner + 0x64);
    }
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
}
