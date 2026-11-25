/* 28 functions from 0x0211A178 to 0x0211B0E8 (main), found by ds-decomp. */
#include "common.h"
typedef union {
 u32 word[2];
 struct { u32 unused0:13; u32 format:1; u32 unused1:14; u32 flipX:1; u32 flipY:1; u32 size:2;
 u32 tile:10; u32 unused2:2; u32 palette:4; u32 unused3:16; } bits;
} SpriteOam_1a8ac;
typedef struct { s32 width,height,format,palette,transparent,mapping; } SpriteTex_1a8ac;
static inline void set_tex_1a8ac(s32 format, u32 address, s32 width, s32 height, s32 transparent) {
 *(volatile u32 *)0x40004a8 = (format<<26)|(address>>3)|0x40000000|(width<<20)|(height<<23)|(transparent<<29);
}
extern u16 data_02144d84[][4];
extern u16 data_02144d6c[][4];
extern s32 data_02144db8[8];
extern s32 data_02144dd8[][4];
extern s32 data_02144e08[][4];
extern s32 data_02144db0[2];
extern u32 data_02145ba4;
void func_02006dc4(void *, u32);
void func_02008690(u32, void *, void *, u32, s32);
void func_02008e08(void *, void *, u32);
typedef struct { s32 v[6]; } Mtx23;

extern s32 data_0216f234[4];
extern u16 data_02155eb0[];
extern u16 data_0216f2c4[][4];
static inline s32 Active0211a3ac(void) {
 if(data_0216f234[1]==0 && data_02155eb0[0]!=0xfffe) return 1;
 return 0;
}
extern s32 data_0216f3d4[];
extern s32 data_0216f3d8[];
extern s32 data_0216f244[];
extern s32 data_0216f3c4[][6];
extern s32 data_0216f6c4[][6];
void func_0211a4e0(void *, void *, void *);
extern u32 data_02144d9c[5];
extern u32 data_021701d8[4];
extern u32 data_021701cc[3];
extern u16 data_02144e48[8];

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} U32x3;

extern u32 data_02155ed0[4];


extern void func_0211c5fc(void);
void func_0211a178(s32 x, s32 y, s32 z)
{
  s32 *new_var;
  volatile s32 m[6];
  if (data_0216f234[1])
  {
    s32 i = data_0216f234[3];
    *((volatile s32 *) (((u8 *) data_0216f3d4) + (i * 24))) += x;
    {
      s32 a = *((volatile s32 *) (((u8 *) data_0216f3d8) + (i * 24)));
      s32 b = ((volatile s32 *) data_0216f244)[i];
      *((s32 *) (((u8 *) data_0216f3d8) + (i * 24))) = a + y;
      ((volatile s32 *)data_0216f244)[i] = b + z;
    }
    return;
  }
  m[0] = 0x1000;
  m[1] = 0;
  m[2] = 0;
  m[3] = 0x1000;
  m[5] = y;
  m[4] = x;
  func_0211a4e0((void *) m, data_0216f3c4[data_0216f234[3]], data_0216f3c4[(new_var = data_0216f234)[3]]);
  func_0211a4e0((void *) m, data_0216f6c4[data_0216f234[3]], data_0216f6c4[data_0216f234[3]]);
  data_0216f244[data_0216f234[3]] += z;
}

s32 func_02001fc0(s32);
void func_0211a26c(s32 x, s32 y)
{
  Mtx23 m;
  u32 new_var3;
  volatile s32 new_var2;
  Mtx23 *mp = &m;
  s32 index = (*((volatile s32 *) (&data_0216f234[3]))) * 24;
  volatile u16 *entry;
  int new_var;
  s32 zero = 0;
  mp->v[0] = x;
  mp->v[1] = zero;
  mp->v[4] = (mp->v[2] = zero);
  mp->v[3] = y;
  mp->v[1] = (mp->v[5] = zero);
  new_var3 = (u32) data_0216f3c4;
  func_0211a4e0(mp, (void *) (new_var3 + index), (void *) (new_var3 + index));
  mp->v[0] = func_02001fc0(x);
  new_var2 = *((volatile s32 *) (&data_0216f234[3]));
  mp->v[2] = zero;
  new_var = 5;
  {
    s32 t = func_02001fc0(y);
    index = new_var2 * 24;
    mp->v[3] = t;
  }
  mp->v[4] = (mp->v[new_var] = zero);
  func_0211a4e0(mp, (void *) (((u32) data_0216f6c4) + index), (void *) (((u32) data_0216f6c4) + index));
  if (!Active0211a3ac())
  {
    do
    {
      data_02155eb0[0] = data_0216f234[3];
    }
    while (0);
  }
  entry = data_0216f2c4[(u16) data_0216f234[3]];
  switch (entry[2])
  {
    case 1:
      break;

    case 0:

    case 2:

    case 3:
    {
      u16 n = ((u16 *) data_0216f234)[1];
      ((volatile u16 *) data_0216f234)[1] = n + 1;
      entry[1] = n;
    }
      entry[2] = 1;
      break;

  }

}

void func_0211a3ac(s32 sine, s32 cosine)
{
  s32 storage[6];
  u32 offset;
  s32 *m = storage;
  long stride = 24;
  s32 *state = data_0216f234;
  s32 index = *((volatile s32 *) (&state[3]));
  volatile u16 *entry;
  s32 active;
  m[1] = sine;
  offset = index * stride;
  m[3] = (m[0] = cosine);
  m[2] = -sine;
  m[5] = m[4] = 0;
  func_0211a4e0((void *) m, ((u8 *) data_0216f3c4) + offset, data_0216f3c4[index]);
  func_0211a4e0((void *) m, ((u8 *) data_0216f6c4) + (state[3] * stride), data_0216f6c4[data_0216f234[3]]);
  active = Active0211a3ac();
  if (!active)
  {
    data_02155eb0[0] = data_0216f234[3];
  }
  entry = data_0216f2c4[(u16) data_0216f234[3]];
  switch (entry[2])
  {
    case 1:
      break;

    case 0:

    case 2:

    case 3:
    {
      u16 n = ((u16 *) data_0216f234)[1];
      ((volatile u16 *) data_0216f234)[1] = n + 1;
      entry[1] = n;
    }
      entry[2] = 1;
      break;

  }

}

void func_0211a4c0(void) {
    func_0211c5fc();
}

u32 func_0211a4cc(u8 *arg0) {
    return *(u32 *)(arg0 + 0x78);
}

extern void func_0211c52c(void);
void func_0211a4d4(void) {
    func_0211c52c();
}
