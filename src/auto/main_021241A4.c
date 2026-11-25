/* 45 functions from 0x021241A4 to 0x021251A0 (main), found by ds-decomp. */
#include "common.h"

typedef struct { u32 f[6]; } Row24;
extern Row24 data_0215617c[];
extern u32 data_02156160[];
extern u16 data_02173170;
extern u32 data_02156150;
extern u32 data_02156154;
extern void func_021205ec(u32, void *, s32);
extern void (*data_02156130[8])(s32 *, u8 *);
extern void (*data_02156110[8])(s32 *, u8 *);

extern void func_02003c78(void);
extern void func_02002058(s32, s32);
extern s32 func_02001ff4(void);
extern void func_02124c78(void);
extern u32 func_02124cf8();
extern Row24 data_02156194, data_021561ac;
extern Row24 *data_02156168[];

extern int func_02124e60(void);
void func_021241a4(s32 *__restrict arg0, u8 *__restrict arg1) {
    arg0[0] = 0x1000;
    arg0[5] = 0x1000;
    arg0[1] = 0;
    arg0[12] = (-*(s32 *)(arg1 + 0x24) * *(u16 *)(arg1 + 0x2c)) << 4;
    arg0[13] = (*(s32 *)(arg1 + 0x28) * *(u16 *)(arg1 + 0x2e)) << 4;
    arg0[4] = 0;
}

void func_021241f0(s32 *out, u8 *p)
{
  typedef struct { u8 pad[0x2c]; u16 w; u16 h; } Dims;
  Dims *d = (Dims *)p;
  s32 w = (*((u16 *) (p + 0x2c))) << 12;
  s32 h = (*((u16 *) (p + 0x2e))) << 12;
  s32 c, s, sx, sy, cx, ss, cy, ys;
  func_02002058(h, w);
  c = *((s16 *) (p + 0x22));
  sx = *((s32 *) (p + 0x18));
  s = *((s16 *) (p + 0x20));
  sy = *((s32 *) (p + 0x1c));
  cx = (((s64) sx) * c) >> 12;
  ss = (((s64) sx) * s) >> 12;
  cy = (((s64) sy) * c) >> 12;
  ys = (((s64) sy) * s) >> 12;
  out[0] = cx;
  out[5] = cy;
  out[1] = (ys * func_02001ff4()) >> 12;
  func_02002058(w, h);
  {
    s32 w2 = d->w;
    s32 h2 = d->h;
    s32 x = (-w2) << 11;
    s64 a = ((s64) cx) * x;
    s32 y = (-h2) << 11;
    out[12] = ((s32) ((a - (((s64) ss) * y)) >> 8)) + (w2 << 15);
    out[13] = ((s32) (((((s64) ys) * x) + (((s64) cy) * y)) >> 8)) + (h2 << 15);
  }
  out[4] = ((-ss) * func_02001ff4()) >> 12;
}

#pragma opt_propagation on
void func_021242e4(s32 *arg0, u8 *arg1) {
s32 w=*(u16 *)(arg1+0x2c)<<12; s32 h=*(u16 *)(arg1+0x2e)<<12; s32 val;
func_02002058(h,w);
val=*(s16 *)(arg1+0x22); arg0[0]=val;arg0[5]=val;
arg0[1]=(*(s16 *)(arg1+0x20)*func_02001ff4())>>12;
func_02002058(w,h);
{
u16 h2=*(u16 *)(arg1+0x2e);
u16 w2=*(u16 *)(arg1+0x2c);
s16 c=*(s16 *)(arg1+0x22);
s32 y=-h2<<11;
s16 s=*(s16 *)(arg1+0x20);
s32 x=-w2<<11;
s64 a=(s64)c*x;
s64 b=(s64)s*x+(s64)c*y;
arg0[12]=(s32)((a-(s64)s*y)>>8)+(w2<<15);
arg0[13]=(s32)(b>>8)+(h2<<15);
}
arg0[4]=(-*(s16 *)(arg1+0x20)*func_02001ff4())>>12;
}
void func_021243ac(s32 *__restrict arg0, u8 *__restrict arg1) {
 s32 x=*(s32*)(arg1+0x18);
 s32 y=*(s32*)(arg1+0x1c);
 arg0[5]=y;
 arg0[0]=x;
 arg0[1]=0;
 arg0[12]=((0x1000-x)* *(u16*)(arg1+0x2c))<<3;
 arg0[13]=((0x1000-y)* *(u16*)(arg1+0x2e))<<3;
 arg0[4]=0;
}

void func_021243f4(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}

void func_02124418(u8 *arg0)
{
  s32 data[19];
  u32 flags;
  unsigned int new_var;
  s32 scale = 0;
  void (*fn)(s32 *, u8 *);
  if ((*((u32 *) arg0)) & 8)
  {
    data[0] = 0x101610;
  }
  else
  {
    data[0] = 0x101810;
  }
  fn = data_02156110[flags & 7];
  data[1] = 3;
  data[18] = 2;
  data[12] = (new_var = (data[13] = scale));
  data[16] = scale;
  data[11] = new_var;
  data[8] = (data[10] = scale);
  data[9] = scale;
  flags++;
  flags--;
  data[4] = new_var;
  data[5] = scale;
  data[17] = 0x1000;
  fn(&data[2], arg0);
  scale = *((s32 *) (arg0 + 0x30));
  if (scale != 0x1000)
  {
    data[2] = (s32) ((((s64) scale) * data[2]) >> 12);
    data[3] = (s32) ((((s64) scale) * data[3]) >> 12);
    data[14] = (s32) ((((s64) scale) * data[14]) >> 12);
  }
  scale = *((s32 *) (arg0 + 0x34));
  if (scale != 0x1000)
  {
    data[6] = (s32) ((((s64) scale) * data[6]) >> 12);
    data[7] = (s32) ((((s64) scale) * data[7]) >> 12);
    data[15] = (s32) ((((s64) scale) * data[15]) >> 12);
  }
  func_021205ec(data[0], (s32 *) (((u8 *) data) + 4), 0x12);
}

#pragma scheduling off
void func_02124550(s32 *__restrict arg0, u8 *__restrict arg1) {
    s32 w = *(u16 *)(arg1 + 0x2c) << 12;
    s32 h = *(u16 *)(arg1 + 0x2e) << 12;
    s32 cy, ss, c, s, sx, sy;

    func_02002058(h, w);
    c = *(s16 *)(arg1 + 0x22);
    sx = *(s32 *)(arg1 + 0x18);
    sy = *(s32 *)(arg1 + 0x1c);
    arg0[0] = ((s64)sx * c) >> 12;
    cy = ((s64)sy * c) >> 12;
    arg0[5] = cy;
    s = *(s16 *)(arg1 + 0x20);
    ss = ((s64)sx * s) >> 12;
    arg0[1] = ((s32)(((s64)sy * s) >> 12) * func_02001ff4()) >> 12;
    func_02002058(w, h);
    {
        s64 a = ((s64)*(s32 *)(arg1 + 0x24) * s - (s64)*(s32 *)(arg1 + 0x28) * *(s16 *)(arg1 + 0x22)) >> 12;
        s64 b = ((s64)*(s32 *)(arg1 + 0x24) * *(s16 *)(arg1 + 0x22) + (s64)*(s32 *)(arg1 + 0x28) * s) >> 12;
        arg0[13] = (-(s32)*(u16 *)(arg1 + 0x2e) * (cy + (s32)((a * (s64)sy) >> 12) - 0x1000)) << 4;
        arg0[12] = (*(u16 *)(arg1 + 0x2c) * (ss - (s32)((b * *(s32 *)(arg1 + 0x18)) >> 12))) << 4;
    }
    arg0[4] = (-ss * func_02001ff4()) >> 12;
}
void func_021246b0(s32 *arg0, u8 *arg1) {
    s32 w = *(u16 *)(arg1 + 0x2c) << 12;
    s32 h = *(u16 *)(arg1 + 0x2e) << 12;
    s32 val;

    func_02002058(h, w);
    val = *(s16 *)(arg1 + 0x22);
    arg0[0] = val;
    arg0[5] = val;
    arg0[1] = (*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
    func_02002058(w, h);
    {
        s32 a = *(s16 *)(arg1 + 0x20) - (s32)(((s64)*(s32 *)(arg1 + 0x24) * *(s16 *)(arg1 + 0x22) + (s64)*(s32 *)(arg1 + 0x28) * *(s16 *)(arg1 + 0x20)) >> 12);
        s32 b = *(s16 *)(arg1 + 0x22) + (s32)(((s64)*(s32 *)(arg1 + 0x24) * *(s16 *)(arg1 + 0x20) - (s64)*(s32 *)(arg1 + 0x28) * *(s16 *)(arg1 + 0x22)) >> 12) - 0x1000;
        u16 h2 = *(u16 *)(arg1 + 0x2e);
        u16 w2 = *(u16 *)(arg1 + 0x2c);
        arg0[12] = (w2 * a) << 4;
        arg0[13] = (-h2 * b) << 4;
    }
    arg0[4] = (-*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
}

#pragma optimization_level 2
void func_02124788(s32 *__restrict arg0, u8 *__restrict arg1) {
    s32 ty = *(s32 *)(arg1 + 0x28);
    s32 sx = *(s32 *)(arg1 + 0x18);
    s32 sy = *(s32 *)(arg1 + 0x1c);
    s32 tx = *(s32 *)(arg1 + 0x24);
    s32 w = *(u16 *)(arg1 + 0x2c);
    s32 h = *(u16 *)(arg1 + 0x2e);
    s64 p1 = (s64)(-ty) * sy;
    s64 p2 = (s64)tx * sx;
    arg0[0] = sx;
    arg0[5] = sy;
    arg0[1] = 0;
    arg0[12] = (w * -(s32)(p2 >> 12)) << 4;
    arg0[13] = (-h * (sy + (s32)(p1 >> 12) - 0x1000)) << 4;
    arg0[4] = 0;
}
#pragma optimization_level 1
void func_02124800(s32 *arg0, u8 *arg1) {
    register u32 h;
    register u32 ty;
    register u32 tx;
    register u32 w;
    register u32 s;
    register u32 t;
    register u32 nh;

    h = *(u16 *)(arg1 + 0x2e);
    ty = (u32)*(s32 *)(arg1 + 0x28);
    tx = (u32)*(s32 *)(arg1 + 0x24);
    w = *(u16 *)(arg1 + 0x2c);

    tx = 0u - tx;
    ty = 0u - ty;
    s = (u32)w * tx;
    nh = 0u - (u32)h;
    t = nh * ty;

    {
        register s32 one = 0x1000;
        register s32 zero = 0;

        arg0[5] = one;
        arg0[0] = one;
        arg0[1] = zero;

        s <<= 4;
        t <<= 4;

        arg0[12] = (s32)s;
        arg0[13] = (s32)t;
        arg0[4] = zero;
    }
}
#pragma optimization_level 4
void func_02124850(s32 *out, u8 *p) {
    s32 w = *(u16 *)(p + 0x2c) << 12;
    s32 h = *(u16 *)(p + 0x2e) << 12;
    s32 c, s, sx, sy, cx, ss, cy;
    func_02002058(h, w);
    c = *(s16 *)(p + 0x22);
    sx = *(s32 *)(p + 0x18);
    s = *(s16 *)(p + 0x20);
    sy = *(s32 *)(p + 0x1c);
    cx = ((s64)sx * c) >> 12;
    ss = ((s64)sx * s) >> 12;
    cy = ((s64)sy * c) >> 12;
    out[0] = cx;
    out[5] = cy;
    out[1] = (((s32)(((s64)sy * s) >> 12)) * func_02001ff4()) >> 12;
    func_02002058(w, h);
    {
        s32 w2 = *(u16 *)(p + 0x2c);
        s32 h2 = *(u16 *)(p + 0x2e);
        out[12] = (w2 * ss) << 4;
        out[13] = (-h2 * (cy - 0x1000)) << 4;
    }
    out[4] = (-ss * func_02001ff4()) >> 12;
}
void func_0212491c(s32 *arg0, u8 *arg1) {
    s32 w = *(u16 *)(arg1 + 0x2c) << 12;
    s32 h = *(u16 *)(arg1 + 0x2e) << 12;
    s32 val;

    func_02002058(h, w);
    val = *(s16 *)(arg1 + 0x22);
    arg0[0] = val;
    arg0[5] = val;
    arg0[1] = (*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
    func_02002058(w, h);
    {
        u16 h2 = *(u16 *)(arg1 + 0x2e);
        s16 s2 = *(s16 *)(arg1 + 0x22);
        u16 w2 = *(u16 *)(arg1 + 0x2c);
        s16 s1 = *(s16 *)(arg1 + 0x20);
        arg0[12] = (w2 * s1) << 4;
        arg0[13] = (-h2 * (s2 - 0x1000)) << 4;
    }
    arg0[4] = (-*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
}

#pragma opt_propagation off
void func_021249bc(s32 *__restrict arg0, u8 *__restrict arg1) {
    s32 x = *(s32 *)(arg1 + 0x18);
    s32 y = *(s32 *)(arg1 + 0x1c);
    arg0[5] = y;
    arg0[0] = x;
    arg0[1] = 0;
    arg0[12] = 0;
    arg0[13] = (-(*(u16 *)(arg1 + 0x2e)) * (y - 0x1000)) << 4;
    arg0[4] = 0;
}
#pragma opt_propagation on
void func_021249f8(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}

#pragma opt_propagation off
void func_02124a1c(u8 *arg0) {
    s32 data[19];
    s32 scale = 0;
    void (*fn)(s32 *, u8 *);
    if (*(u32 *)arg0 & 8) { data[0] = 0x101610; } else { data[0] = 0x101810; }
    if (*(u32 *)arg0 & 1) { *(u32 *)(arg0 + 0x1c) = 0x1000; *(u32 *)(arg0 + 0x18) = 0x1000; }
    if (*(u32 *)arg0 & 2) { *(u16 *)(arg0 + 0x22) = 0x1000; *(u16 *)(arg0 + 0x20) = 0; }
    if (*(u32 *)arg0 & 4) { *(u32 *)(arg0 + 0x28) = 0; *(u32 *)(arg0 + 0x24) = 0; }
    fn = data_02156130[*(u32 *)arg0 & 7];
    data[1] = 3;
    data[18] = 2;
    data[16] = scale;
    data[13] = scale;
    data[12] = scale;
    data[11] = scale;
    data[10] = scale;
    data[9] = scale;
    data[8] = scale;
    data[5] = scale;
    data[4] = scale;
    data[17] = 0x1000;
    fn(&data[2], arg0);
    scale = *(s32 *)(arg0 + 0x30);
    if (scale != 0x1000) {
        data[2] = (s32)(((s64)scale * data[2]) >> 12);
        data[3] = (s32)(((s64)scale * data[3]) >> 12);
        data[14] = (s32)(((s64)scale * data[14]) >> 12);
    }
    scale = *(s32 *)(arg0 + 0x34);
    if (scale != 0x1000) {
        data[6] = (s32)(((s64)scale * data[6]) >> 12);
        data[7] = (s32)(((s64)scale * data[7]) >> 12);
        data[15] = (s32)(((s64)scale * data[15]) >> 12);
    }
    func_021205ec(data[0], (s32 *)((u8 *)data + 4), 0x12);
}
#pragma opt_propagation on
s32 func_02124b90(void) {
    return 0;
}

s32 func_02124b98(void) {
    return -1;
}

s32 func_02124ba0(void) {
    return 0;
}

s32 func_02124ba8(void) {
    return -1;
}

extern u32 data_02173174[];
extern u32 (*data_02156158)(u32, s32, s32);
extern s32 (*data_0215615c)(void);
extern void func_02125038(void);
extern u32 func_02124ef8(u32, s32, s32);
extern s32 func_02125014(void);
void func_02124bb0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    data_02156160[2] = (u32)&data_0215617c[a0];
    data_02156160[3] = (u32)&data_0215617c[a1];
    data_02156160[4] = (u32)&data_0215617c[a2];
    data_02156160[5] = (u32)&data_0215617c[a3];
    data_02156160[6] = (u32)&data_0215617c[a4];
}

void func_02124bf8(u32 arg0, s32 arg1) {
    if (arg0 <= 2) {
        func_02124bb0(4, 3, 2, 0, 1);
    } else {
        func_02124bb0(4, 3, 0, 2, 1);
    }
    data_02173170 = arg0;
    func_02124c78();
    if (arg1 != 0) {
        data_02156150 = (u32)func_02124cf8;
        data_02156154 = (u32)func_02124e60;
    }
}

void func_02124c78(void) {
    s32 n = (data_02173170 > 1) ? data_02173170 + 1 : data_02173170;
    s32 i;
    for (i = 0; i < 5; i++) {
        if (i < n) {
            data_0215617c[i].f[2] = 1;
        } else {
            data_0215617c[i].f[2] = 0;
        }
        if (data_0215617c[i].f[3] != 0) {
            data_0215617c[i].f[0] = 0;
            data_0215617c[i].f[1] = 0x10000;
        } else {
            data_0215617c[i].f[0] = 0;
            data_0215617c[i].f[1] = 0x20000;
        }
    }
}

#pragma opt_strength_reduction off
u32 func_02124cf8(u32 size, u32 flag)
{
  u32 addr;
  int i;
  size = (size == 0) ? (16) : ((size + 15) & (~15));
  int ok;
  Row24 *q;
  Row24 *p;
  if (size >= 0x7fff0)
  {
    return 0;
  }
  if (flag)
  {
    for (i = 0; i < 2; i++)
    {
      p = (Row24 *) data_02156160[i];
      if (p->f[2] && ((p->f[1] - p->f[0]) >= size))
      {
        switch (*((u16 *) (&p->f[4])))
        {
          case 0:
            q = &data_02156194;
            break;

          case 3:
            q = &data_021561ac;
            break;

          default:
            q = 0;
            break;

        }

        if (q->f[2] && ((q->f[1] - q->f[0]) >= (size / 2)))
        {
          u32 start = *((volatile u32 *) (&p->f[0]));
          p->f[0] = size;
          p->f[0] = start + p->f[0];
          q->f[0] += size / 2;
          addr = start + p->f[5];
          ok = 1;
          goto done;
        }
      }
    }

  }
  else
  {
    for (i = 0; i < 5; i++)
    {
      p = data_02156168[i];
      if (p->f[2] && ((p->f[1] - p->f[0]) >= size))
      {
        u32 start = (*((volatile u32 *) (&p->f[1]))) - size;
        p->f[1] = start;
        addr = start + p->f[5];
        ok = 1;
        goto done;
      }
    }

  }
  ok = 0;
  done:
  if (!ok)
  {
    return 0;
  }

  return (((size >> 4) << 16) | ((addr >> 3) & 0xffff)) | (flag << 31);
}
#pragma opt_strength_reduction on
s32 func_02124e60(void) {
    return 0;
}

void func_02124e68(u32 *arg0) {
    s32 i;
    for (i = 0; i < 5; i++) {
        arg0[i * 2] = data_0215617c[i].f[0];
        arg0[i * 2 + 1] = data_0215617c[i].f[1];
    }
}

void func_02124eac(u32 arg0, s32 arg1) {
    data_02173174[2] = arg0;
    func_02125038();
    if (arg1 != 0) {
        data_02156158 = func_02124ef8;
        data_0215615c = func_02125014;
    }
}

u32 func_02124ef8(u32 size, s32 small, s32 dir) {
u32 addr=0; s32 ok; u32 total, edge, pad, end;
if(size==0) size=8; else size=(size+7)&~7;
if(size>=0x7fff8) return 0;
if(dir==1) {
edge=data_02173174[0];
if(small) pad=(8-(edge&7))&7; else pad=(16-(edge&15))&15;
total=size+pad;
if(data_02173174[1]-edge>=total) {
end=edge+total;
if(small && end>0x10000) ok=0;
else {addr=edge+pad; data_02173174[0]+=total; ok=1;}
} else ok=0;
} else {
edge=data_02173174[1];
if(edge>=size) {
if(small) pad=(edge-size)&7; else pad=(edge-size)&15;
total=size+pad;
if(edge-data_02173174[0]>=total) {
if(small && edge>0x10000) ok=0;
else {ok=1; addr=*(volatile u32 *)&data_02173174[1]-total; data_02173174[1]=addr;}
} else goto fail;
} else goto fail;
}
goto done;
fail: ok=0;
done:
if(ok) { u32 a=(addr<<13)>>16; u32 b=size>>3; return (b<<16)|a; }
return 0;
}

s32 func_02125014(void) {
    return 0;
}

extern int func_02124e60(void);
void func_0212501c(u32 *arg0) {
    arg0[0] = data_02173174[0];
    arg0[1] = data_02173174[1];
}

void func_02125038(void) {
    data_02173174[0] = 0;
    data_02173174[1] = data_02173174[2];
}

u16 func_02125054(u32 *arg0, u32 arg1) {
    return (arg1 + 1) % arg0[1];
}

s32 func_02125074(u8 *arg0) {
    return *(u16 *)(arg0 + 0xc) == *(u32 *)(arg0 + 4);
}

s32 func_0212508c(u8 *arg0) {
    return *(u16 *)(arg0 + 0xc) == 0;
}

extern void func_0200439c(void);
extern void func_020043f8(u32, u32, u32);
extern void func_02004544(void);
void func_021250a0(u32 arg0, u32 arg1, u32 arg2) {
    func_0200439c();
    func_020043f8(arg0, arg1, arg2);
    func_02004544();
}

extern void func_02004588(void);
extern void func_020045bc(u32, u32, u32);
extern void func_0200462c(void);
void func_021250cc(u32 arg0, u32 arg1, u32 arg2) {
    func_02004588();
    func_020045bc(arg0, arg1, arg2);
    func_0200462c();
}

extern void func_02004668(void);
extern void func_020046f8(void *, void *);
extern void func_020047d4(void);
void func_021250f8(void *arg0, void *arg1, void *arg2) {
    func_02004668();
    ((void (*)(void *, void *))func_020046f8)(arg0, arg2);
    func_020047d4();
}

extern void func_02004764(void *, void *);
void func_0212511c(void *arg0, void *arg1, void *arg2) {
    func_02004668();
    ((void (*)(void *, void *))func_02004764)(arg0, arg2);
    func_020047d4();
}

void func_02125140(void) {
    func_02003c78();
}

extern void func_02003d58(void);
void func_0212514c(void) {
    func_02003d58();
}

extern void func_02003e38(void);
void func_02125158(void) {
    func_02003e38();
}

extern void func_02003f18(void);
void func_02125164(void) {
    func_02003f18();
}

extern void func_020038f8(void);
void func_02125170(void) {
    func_020038f8();
}

extern void func_020039d8(void);
void func_0212517c(void) {
    func_020039d8();
}

extern void func_02003ab8(void);
void func_02125188(void) {
    func_02003ab8();
}

extern void func_02003b98(void);
void func_02125194(void) {
    func_02003b98();
}

