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

void func_02067de0(u8 *arg0)
{
  int new_var;
  Particle *p;
  u16 i;
  u16 state;
  s32 posY = *((s32 *) (arg0 + 0x4));
  *((s32 *) (arg0 + 0x4)) = posY + 0x18000;
  state=*(u16 *)(arg0+0x34);
  switch (state)
  {
    case 0:
      for (i = 0; i < 4; i++)
    {
      s32 sx;
      s32 sy;
      p = (Particle *) func_02067698(arg0, i);
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

      *((u16 *) (arg0 + 0x32)) = 0x1000;
      *((u16 *) (arg0 + 0x34)) = 1;
      break;

    case 1:
    {
      Tables_02067de0 tables;
      u32 count;
      u8 *dst;
      const u8 *src;
      u32 rng;
      u16 random;
      src = data_0213fd14;
      dst = (u8 *) tables.directions.values;
      count = 4;
      do
      {
        u8 y;
        u8 x = src[0];
        dst[1] = src[1];
        src += 2;
        dst[0] = x;
        dst += 2;
      }
      while ((--count) != 0);
      *((u16 *) (arg0 + 0x32)) = ((*((u16 *) (arg0 + 0x32))) * 96) / 100;
      for (i = 0; i < 4; i++)
      {
        s32 sx;
        s32 sy;
        const Pair *dir;
        p = (Particle *) func_02067698(arg0, i);
        dir = &tables.directions.values[i];
        sx = ((0x1000 - (*((u16 *) (arg0 + 0x32)))) * 45) * ((s8 *)tables.directions.values)[i*2];
        p->fxScaleX = sx;
        sy = ((0x1000 - (*((u16 *) (arg0 + 0x32)))) * 45) * ((s8 *)tables.directions.values)[i*2+1];
        p->fxScaleY = sy;
        p->scaleX = sx >> 12;
        p->scaleY = sy >> 12;
        p->x = sx / 2;
        p->y = sy / 2;
      }

      dst = (u8 *) tables.spawn.values;
      src = data_0213fd1c;
      i = 4;
      count = 14;
      do
      {
        u8 y=src[1];
        u8 x = src[0];
        src += 2;
        dst[1] = y;
        dst[0] = x;
        dst += 2;
      }
      while ((--count) != 0);
      for (; i < 11; i++)
      {
        p = (Particle *) func_02067698(arg0, i);
        if (p->active != 0)
        {
          s32 x;
          s32 sx;
          s32 sy;
          x = (p->x * (p->speed + 88)) / 100;
          p->x = x;
          p->y = (p->y * (p->speed + 88)) / 100;
          sx = (p->fxScaleX * 92) / 100;
          p->fxScaleX = sx;
          sy = (p->fxScaleY * 92) / 100;
          p->fxScaleY = sy;
          p->scaleX = sx >> 12;
          p->scaleY = (sy >> 2) >> 10;
          if ((((x < 0x4000) && (x > (-0x4000))) && (p->y < 0x4000)) && (p->y > (-0x4000)))
          {
            p->active = 0;
          }
        }
        else
        {
          rng = (data_0216263c[1] * data_0216263c[0]) + data_0216263c[2];
          random = (u16) (((rng >> 16) * 4) >> 16);
          data_0216263c[0] = rng;
          if ((random - 2) != 0)
          {
            s32 index;
            s32 speed;
            s32 dx;
            s32 dy;
            s32 tx;
            s32 ty;
            s32 x;
            s32 y;
            s16 sx;
            s16 sy;
            const Spawn *entry;
            const Pair *dir;
            src = (const u8 *) tables.spawn.values;
            dst = (u8 *) tables.temp.values;
            count = 14;
            do
            {
              u8 b = src[1];
              u8 a = src[0];
              src += 2;
              dst[1] = b;
              dst[0] = a;
              dst += 2;
            }
            while ((--count) != 0);
            rng = (data_0216263c[1] * rng) + data_0216263c[2];
            random = (u16) (((rng >> 16) * 6) >> 16);
            data_0216263c[0] = rng;
            index = (s8) (random - 3);
            index = (s8) ((index < 0) ? (-index) : (index));
            entry = &tables.temp.values[new_var];
            dir = &tables.directions.values[index];
            tx = entry->x;
            dx = dir->x;
            index = tx * 2;
            x = dx * index;
            sx = dx * entry->sx;
            dy = dir->y;
            sy = entry->sy * dy;
            random = sx;
            ty = entry->y;
            p->scaleX = random;
            p->scaleY = sy;
            posY = 2;
            y = dy * (ty * posY);
            p->fxScaleX = p->scaleX * 0x1000;
            p->fxScaleY = p->scaleY * 0x1000;
            p->x = x * 0x1000;
            p->y = y * 0x1000;
            rng = (data_0216263c[1] * data_0216263c[0]) + data_0216263c[2];
            random = (u16) (((rng >> 16) * 20) >> 16);
            data_0216263c[0] = rng;
            speed = (s8) (random - 10);
            if (speed < 0)
            {
              speed = -speed;
            }
            p->speed = speed;
            p->active = 1;
          }
        }
      }

      for (i = 11; i < 15; i++)
      {
        p = (Particle *) func_02067698(arg0, i);
        if (p->active != 0)
        {
          s32 x;
          s32 sx;
          s32 sy;
          x = (p->x * (p->speed + 84)) / 100;
          p->x = x;
          p->y = (p->y * (p->speed + 84)) / 100;
          sx = (p->fxScaleX * 88) / 100;
          p->fxScaleX = sx;
          sy = (p->fxScaleY * 88) / 100;
          p->fxScaleY = sy;
          p->scaleX = sx >> 12;
          p->scaleY = sy >> 12;
          if ((((x < 0x4000) && (x > (-0x4000))) && (p->y < 0x4000)) && (p->y > (-0x4000)))
          {
            p->active = 0;
          }
        }
        else
        {
          rng = (data_0216263c[1] * data_0216263c[0]) + data_0216263c[2];
          random = (u16) (((rng >> 16) * 128) >> 16);
          data_0216263c[0] = rng;
          p->x = (random - 64) * 0x1000;
          rng = (data_0216263c[1] * data_0216263c[0]) + data_0216263c[2];
          random = (u16) (((rng >> 16) * 128) >> 16);
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

  if ((*((u32 *) (arg0 + 0x2c))) > 90)
  {
    *((s32 *) (arg0 + 0x48)) = 1;
  }
}
