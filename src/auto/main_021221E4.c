/* 16 functions from 0x021221E4 to 0x021231B0 (main), found by ds-decomp. */
#include "common.h"
static inline void cross_021221e4(const s32 *a, const s32 *b, s32 *out) {
 s32 x=(a[1]*b[2]-a[2]*b[1])>>12;
 s32 y=(a[2]*b[0]-a[0]*b[2])>>12;
 s32 z=(a[0]*b[1]-a[1]*b[0])>>12;
 out[0]=x; out[1]=y; out[2]=z;
}
extern const u8 data_02144f4c[], data_02144f4d[], data_02144f4e[], data_02144f4f[];
typedef struct { s16 x, y; } Pair_02122b9c;

extern void *data_02155ee8;
extern void *data_02155ed8;
extern u16 *func_02120c74(u8 *);
extern void *func_02121090(void *, u16, u16);
extern u8 func_02121040(void *, u8);
extern void func_02122fa0(void *, u8, u8 *);
extern u8 func_02121068();
void func_02008df0(u8, void *, u32);
s32 func_02120e30(void *, void *);
#pragma opt_propagation off
s32 func_0212251c(s32 *, const s16 *, const s16 *, u32);
void func_02002274(s32 *, s32 *);
#pragma opt_propagation off
void func_021221e4(s32 *out, s32 time, u32 *track, u8 *base)
{
  s32 a[9];
  s32 b[9];
  u32 offsetB;
  u32 offsetA;
  u32 next;
  s32 frac;
  s32 step;
  u16 *indices;
  u32 frame;
  u32 flags;
  s32 result = 0;
  indices = (u16 *) (base + track[1]);
  frame = time >> 12;
  offsetA = *((u32 *) (base + 12));
  offsetB = *((u32 *) (base + 16));
  flags = track[0];
  if (frame == ((*((u16 *) (base + 4))) - 1))
  {
    if (flags & 0xc0000000)
    {
      if (flags & 0x40000000)
      {
        frame = (frame & 1) + (frame >> 1);
      }
      else
      {
        frame = (frame & 3) + (frame >> 2);
      }
    }
    if ((*((u32 *) (base + 8))) & 2)
    {
      next = 0;
      goto unit;
    }
    if (func_0212251c(out, (s16 *) (base + offsetA), (s16 *) (base + offsetB), indices[frame]))
    {
      s32 x, y, z;
      s32 ax, ay, az, bx, by, bz;
      ax = out[0]; bx = out[3]; bz = out[5];
      ay = out[1]; az = out[2]; by = out[4];
      x = ((ay * bz) - (az * by)) >> 12;
      y = ((az * bx) - (ax * bz)) >> 12;
      z = ((ax * by) - (ay * bx)) >> 12;
      out[6] = x; out[7] = y; out[8] = z;
    }
    else
    {
      func_02002274(out + 6, out + 6);
    }
    return;
  }
  if (flags & 0xc0000000)
  {
    u32 limit = (flags & 0x1fff0000) >> 16;
    if (flags & 0x40000000)
    {
      if (frame >= limit)
      {
        frame = limit >> 1;
        next = frame + 1;
        goto unit;
      }
      frame >>= 1;
      next = frame + 1;
      frac = time & 0x1fff;
      step = 2;
    }
    else
    {
      if (frame >= limit)
      {
        frame = (frame & 3) + (frame >> 2);
        next = frame + 1;
        goto unit;
      }
      frame >>= 2;
      next = frame + 1;
      frac = time & 0x3fff;
      step = 4;
    }
  }
  else
  {
    next = frame + 1;
    unit:
    frac = time & 0xfff;

    step = 1;
  }
  result |= func_0212251c(a, (s16 *) (base + offsetA), (s16 *) (base + offsetB), indices[frame]);
  result |= func_0212251c(b, (s16 *) (base + offsetA), (s16 *) (base + offsetB), indices[next]);
  out[0] = (a[0] * step) + ((frac * (b[0] - a[0])) >> 12);
  out[1] = (a[1] * step) + ((frac * (b[1] - a[1])) >> 12);
  out[2] = (a[2] * step) + ((frac * (b[2] - a[2])) >> 12);
  out[3] = (a[3] * step) + ((frac * (b[3] - a[3])) >> 12);
  out[4] = (a[4] * step) + ((frac * (b[4] - a[4])) >> 12);
  out[5] = (a[5] * step) + ((frac * (b[5] - a[5])) >> 12);
  func_02002274(out, out);
  func_02002274(out + 3, out + 3);
  if (!result)
  {
    out[6] = (a[6] * step) + ((frac * (b[6] - a[6])) >> 12);
    out[7] = (a[7] * step) + ((frac * (b[7] - a[7])) >> 12);
    out[8] = (a[8] * step) + ((frac * (b[8] - a[8])) >> 12);
    func_02002274(out + 6, out + 6);
  }
  else
  {
    s32 x, y, z;
    s32 ax, ay, az, bx, by, bz;
    ax = out[0]; bx = out[3]; bz = out[5];
    ay = out[1]; az = out[2]; by = out[4];
    x = ((ay * bz) - (az * by)) >> 12;
    y = ((az * bx) - (ax * bz)) >> 12;
    z = ((ax * by) - (ay * bx)) >> 12;
    out[6] = x; out[7] = y; out[8] = z;
  }
}
#pragma opt_propagation on
s32 func_0212251c(s32 *out, const s16 *a, const s16 *b, u32 flags) {
 if (flags & 0x8000) {
  const s16 *p = a + (flags & 0x7fff)*3;
  s32 v = p[0];
  s32 idx = v & 15;
  s32 x, y;
  out[0]=out[1]=out[2]=out[3]=out[4]=out[5]=out[6]=out[7]=out[8]=0;
  x=p[1]; y=p[2];
  out[idx] = (v & 16) ? -4096 : 4096;
  out[data_02144f4c[idx*4]]=x;
  out[data_02144f4d[idx*4]]=y;
  out[data_02144f4e[idx*4]]=(p[0]&32) ? -y : y;
  out[data_02144f4f[idx*4]]=(p[0]&64) ? -x : x;
  return 0;
 } else {
  const s16 *p=b+(flags&0x7fff)*5;
  s32 a3, a2, a1, a0, e;
  e=p[4]; a0=p[0]; a1=p[1]; a2=p[2]; a3=p[3];
  s16 bits=e&7;
  bits=(bits<<3)|(a0&7);
  bits=(bits<<3)|(a1&7);
  bits=(bits<<3)|(a2&7);
  bits=(bits<<3)|(a3&7);
  out[4]=e>>3;
  out[0]=a0>>3;out[1]=a1>>3;out[2]=a2>>3;out[3]=a3>>3;
  out[5]=(bits<<19)>>19;
  return 1;
 }
}
#pragma opt_propagation on
u16 func_02122684(u8 *base, u32 flags, u32 frame) {
u16 *p; u32 limit,a,b,x,y;
if(flags&0x20000000) return (u16)flags;
p=(u16 *)(base+(u16)flags);
if(!(flags&0xc0000000)) return p[frame];
limit=(flags&0x1fff0000)>>16;
if(flags&0x40000000) {
if(frame&1) {if(frame>limit) return (p+(limit>>1))[1]; a=frame>>1; goto average;}
return p[frame>>1];
}
if(frame&3) {
if(frame>limit) return (p+(limit>>2))[frame&3];
if(frame&1) {
if(frame&2) {b=frame>>2;a=b+1;} else {a=frame>>2;b=a+1;}
x=p[a]; y=p[b];
{u32 rb=x&0x7c1f; u32 g=x&0x3e0; g*=3; g+=y&0x3e0; rb*=3; rb+=y&0x7c1f; return (u16)(((rb>>2)&0x7c1f)|((g>>2)&0x3e0));}
}
a=frame>>2;goto average;
}
return p[frame>>2];
average:
x=p[a]; y=(p+a)[1];
return (u16)(((((x&0x7c1f)+(y&0x7c1f))>>1)&0x7c1f)|((((x&0x3e0)+(y&0x3e0))>>1)&0x3e0));
}

u16 func_021227e4(u8 *base, u32 flags, u32 frame)
{
  u8 *p;
  u32 limit;
  u8 *new_var;
  if (flags & 0x20000000)
  {
    return (u16) flags;
  }
  p = base + ((u16) flags);
  if (!(flags & 0xc0000000))
  {
    return p[frame];
  }
  limit = (flags & 0x1fff0000) >> 16;
  if (flags & 0x40000000)
  {
    if (frame & 1)
    {
      if (frame > limit)
      {
        return (p + (limit >> 1))[1];
      }
      return (u16) ((p[frame >> 1] + (p + (frame >> 1))[1]) >> 1);
    }
    return p[frame >> 1];
  }
  if (frame & 3)
  {
    if (frame > limit)
    {
      return (p + (limit >> 2))[frame & 3];
    }
    if (frame & 1)
    {
      u32 a;
      if (frame & 2)
      {
        frame = frame >> 2;
        a = frame + 1;
      }
      else
      {
        a = frame >> 2;
        frame = a + 1;
      }
      new_var = &p[a];
      return (u16) (((3 * (*new_var)) + p[frame]) >> 2);
    }
    return (u16) ((p[frame >> 2] + (p + (frame >> 2))[1]) >> 1);
  }
  return p[frame >> 2];
}
#pragma opt_propagation on
void func_021228d0(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 *r8;

    if (arg2 != NULL && *(u32 *)(arg2 + 8) != 0) {
        r8 = arg2 + *(u32 *)(arg2 + 8);
    } else {
        r8 = NULL;
    }

    *(void **)(arg0 + 0xc) = data_02155ee8;
    arg0[0x19] = arg2[0x18];
    func_02008df0(0, arg0 + 0x1a, (u32)arg0[0x19] * 2);

    for (i = 0; i < arg1[9]; i++) {
        void *name;
        s32 idx;
        if ((arg1 + 8) != NULL && i < *(u8 *)(arg1 + 9)) {
            u8 *p = (arg1 + 8) + *(u16 *)((arg1 + 8) + 6);
            name = p + *(u16 *)(p + 2) + i * 0x10;
        } else {
            name = NULL;
        }
        if (r8 == NULL) {
            idx = -1;
        } else {
            idx = func_02120e30(r8 + 4, name);
        }
        if (idx >= 0) {
            *(u16 *)(arg0 + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}

extern u16 func_02122684(u8 *, u32, u32);
void func_0212299c(u8 *pResult, u8 *anmObj, u32 dataIdx) {
    u8 *res = *(u8 **)(anmObj + 8);
    s32 frame = *(s32 *)(anmObj + 0);
    s32 maxFrame = *(u16 *)(res + 4) << 12;
    u32 iFrame;
    u8 *dict;
    u8 *data;
    u32 diff;
    u32 amb;
    u32 emi;
    u32 spec;
    u32 alpha;

    if (frame >= maxFrame) {
        frame = maxFrame - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    iFrame = frame >> 12;

    dict = res + 8;
    if (dict != NULL && (u32)(u16)dataIdx < (u32)res[9]) {
        u8 *p = dict + *(u16 *)(res + 0xe);
        data = (p + 4) + *(u16 *)p * (u16)dataIdx;
    } else {
        data = NULL;
    }

    diff = func_02122684(res, *(u32 *)(data + 0), iFrame);
    amb = func_02122684(res, *(u32 *)(data + 4), iFrame);
    *(u32 *)(pResult + 4) = diff | (amb << 16) | (((*(u32 *)(pResult + 4) & 0x8000) != 0) << 15);

    emi = func_02122684(res, *(u32 *)(data + 0xc), iFrame);
    spec = func_02122684(res, *(u32 *)(data + 8), iFrame);
    *(u32 *)(pResult + 8) = spec | (emi << 16) | (((*(u32 *)(pResult + 8) & 0x8000) != 0) << 15);

    alpha = func_021227e4(res, *(u32 *)(data + 0x10), iFrame);
    *(u32 *)(pResult + 0xc) = (*(u32 *)(pResult + 0xc) & ~0x1f0000) | (alpha << 16);
}

s32 func_02122aa8(u8 *base, u32 flags, s32 offset, u32 frame) {
    u32 end, a;
    s32 x, y;
    if (flags & 0x20000000) return offset;
    base += offset;
    if (flags & 0xc0000000) {
        end = (u16)flags;
        if (flags & 0x40000000) {
            if (frame & 1) {
                if (frame > end) { frame = (end >> 1) + 1; goto sample; }
                frame >>= 1; goto average;
            }
            frame >>= 1;
        } else {
            u32 rem = frame & 3;
            if (rem) {
                if (frame > end) { frame = (end >> 2) + rem; goto sample; }
                if (frame & 1) {
                    if (frame & 2) { frame >>= 2; a = frame + 1; } else { a = frame >> 2; frame = a + 1; }
                    if (flags & 0x10000000) { x = ((s16 *)base)[a]; y = ((s16 *)base)[frame]; }
                    else { x = ((s32 *)base)[a]; y = ((s32 *)base)[frame]; }
                    x *= 3;
                    x += y;
                    return x >> 2;
                }
                frame >>= 2; goto average;
            }
            frame >>= 2;
        }
    }
sample:
    if (flags & 0x10000000) return ((s16 *)base)[frame];
    return ((s32 *)base)[frame];
average:
    if (flags & 0x10000000) {
        y = (((s16 *)base) + frame)[1];
        x = ((s16 *)base)[frame];
    } else {
        s32 *p = (s32 *)base + frame;
        x = p[0];
        y = p[1];
    }
    return (y + x) >> 1;
}

u32 func_02122b9c(u8 *base,u32 flags,u32 offset,s32 frame) {
u32 f=(u32)frame,end,a;
s32 x,y;
if(flags&0x20000000) return offset;
base+=offset;
if(flags&0xc0000000) {
end=(u16)flags;
if(flags&0x40000000) {
if(f&1) {
if(f>end) {f=(end>>1)+1;goto sample;}
a=f>>1;goto average;
}
f>>=1;
} else {
u32 rem=f&3;
if(rem) {
if(f>end) {f=(end>>2)+rem;goto sample;}
if(f&1) {
if(f&2) {f>>=2;a=f+1;} else {a=f>>2;f=a+1;}
x=3*((Pair_02122b9c *)base)[a].x; x+=((Pair_02122b9c *)base)[f].x; x>>=2;
y=3*((Pair_02122b9c *)base)[a].y; y+=((Pair_02122b9c *)base)[f].y; y>>=2;
return (u16)x|((u32)y<<16);
}
a=f>>2;goto average;
}
f>>=2;
}
}
sample: return ((u32 *)base)[f];
average:
x=(((Pair_02122b9c *)base)[a].x+(((Pair_02122b9c *)base)+a)[1].x)>>1;
y=(((Pair_02122b9c *)base)[a].y+(((Pair_02122b9c *)base)+a)[1].y)>>1;
return (u16)x|((u32)y<<16);
}

extern u32 func_02122b9c(u8 *, u32, u32, s32);
void func_02122ca8(u8 *arg0, u16 arg1, s32 arg2, u32 *arg3) {
    u32 flag;
    s32 v1;
    s32 v2;
    u32 rot;
    u32 *r4;

    if ((arg0 + 8) != NULL && (u32)arg1 < arg0[9]) {
        u8 *p = (arg0 + 8) + *(u16 *)((arg0 + 8) + 6);
        r4 = (u32 *)(p + 4 + *(u16 *)p * (u32)arg1);
    } else {
        r4 = NULL;
    }

    flag = arg3[0];
    v1 = func_02122aa8(arg0, r4[6], r4[7], arg2);
    v2 = func_02122aa8(arg0, r4[8], r4[9], arg2);
    if (v1 == 0 && v2 == 0) {
        flag |= 4;
    } else {
        arg3[10] = v2;
        arg3[9] = v1;
        flag &= ~4;
    }

    rot = func_02122b9c(arg0, r4[4], r4[5], arg2);
    if (rot == 0x10000000) {
        flag |= 2;
    } else {
        *(u16 *)((u8 *)arg3 + 0x20) = (u16)rot;
        *(u16 *)((u8 *)arg3 + 0x22) = (u16)(rot >> 16);
        flag &= ~2;
    }

    v1 = func_02122aa8(arg0, r4[0], r4[1], arg2);
    v2 = func_02122aa8(arg0, r4[2], r4[3], arg2);
    if (v1 == 0x1000 && v2 == 0x1000) {
        flag |= 1;
    } else {
        flag &= ~1;
        arg3[6] = v1;
        arg3[7] = v2;
    }

    arg3[0] = flag;
}

extern void *data_02155ee0;
void func_02122da4(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 *r8;

    if (arg2 != NULL && *(u32 *)(arg2 + 8) != 0) {
        r8 = arg2 + *(u32 *)(arg2 + 8);
    } else {
        r8 = NULL;
    }

    *(void **)(arg0 + 0xc) = data_02155ee0;
    arg0[0x19] = arg2[0x18];
    func_02008df0(0, arg0 + 0x1a, (u32)arg0[0x19] * 2);

    for (i = 0; i < arg1[9]; i++) {
        void *name;
        s32 idx;
        if ((arg1 + 8) != NULL && i < *(u8 *)(arg1 + 9)) {
            u8 *p = (arg1 + 8) + *(u16 *)((arg1 + 8) + 6);
            name = p + *(u16 *)(p + 2) + i * 0x10;
        } else {
            name = NULL;
        }
        if (r8 == NULL) {
            idx = -1;
        } else {
            idx = func_02120e30(r8 + 4, name);
        }
        if (idx >= 0) {
            *(u16 *)(arg0 + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}

extern void func_02122ca8(u8 *arg0, u16 arg1, s32 arg2, u32 *arg3);
void func_02122e70(u32 *arg0, u8 *arg1, u32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;

    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    func_02122ca8(ptr, (u16)arg2, frame >> 12, arg0);

    arg0[4] = (arg0[4] & ~0xc0000000u) | 0x40000000u;
    arg0[0] |= 0x8;
}

extern void *data_02155ee4;
void func_02122ed0(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 *r8;

    if (arg2 != NULL && *(u32 *)(arg2 + 8) != 0) {
        r8 = arg2 + *(u32 *)(arg2 + 8);
    } else {
        r8 = NULL;
    }

    *(void **)(arg0 + 0xc) = data_02155ee4;
    arg0[0x19] = arg2[0x18];
    *(void **)(arg0 + 8) = arg1;
    func_02008df0(0, arg0 + 0x1a, (u32)arg0[0x19] * 2);

    for (i = 0; i < arg1[0xd]; i++) {
        void *name;
        s32 idx;
        if ((arg1 + 0xc) != NULL && i < *(u8 *)(arg1 + 0xd)) {
            u8 *p = (arg1 + 0xc) + *(u16 *)((arg1 + 0xc) + 6);
            name = p + *(u16 *)(p + 2) + i * 0x10;
        } else {
            name = NULL;
        }
        if (r8 == NULL) {
            idx = -1;
        } else {
            idx = func_02120e30(r8 + 4, name);
        }
        if (idx >= 0) {
            *(u16 *)(arg0 + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}

extern s32 func_02001fb0(s32, s32);
void func_02122fa0(void *arg0_, u8 arg1, u8 *arg2) {
    u8 *arg0 = (u8 *)arg0_;
    u32 *res;
    u32 addr;
    u32 w;
    u32 h;

    if (arg0 != NULL) {
        res = (u32 *)func_02120c74(arg0 + 0x3c);
    } else {
        res = NULL;
    }

    if ((res[0] & 0x1c000000) != 0x14000000) {
        addr = ((u16)*(u32 *)(arg0 + 0x8)) & ~0xe0000000;
    } else {
        addr = ((u16)*(u32 *)(arg0 + 0x18)) & ~0xe0000000;
    }

    *(u32 *)(arg2 + 0x10) &= 0xc00f0000;
    *(u32 *)(arg2 + 0x10) |= res[0] + addr;

    *(u16 *)(arg2 + 0x2c) = (u16)(res[1] & 0x7ff);
    *(u16 *)(arg2 + 0x2e) = (u16)((res[1] & (0x7ff << 11)) >> 11);

    w = res[1] & 0x7ff;
    h = (res[1] & (0x7ff << 11)) >> 11;

    *(s32 *)(arg2 + 0x30) = (w == *(u16 *)(arg2 + 0x2c))
        ? 0x1000
        : func_02001fb0(w << 12, *(u16 *)(arg2 + 0x2c) << 12);

    *(s32 *)(arg2 + 0x34) = (h == *(u16 *)(arg2 + 0x2e))
        ? 0x1000
        : func_02001fb0(h << 12, *(u16 *)(arg2 + 0x2e) << 12);
}

void func_02123074(u8 *arg0, void *arg1, u32 *arg2) {
    u32 off;
    u32 result;
    if (arg0 == NULL || (off = *(u16 *)(arg0 + 0x34)) == 0) {
        result = 0;
    } else {
        u16 *p = func_02120c74(arg0 + off);
        u32 v = p[0];
        u32 w = (u16)(((u16)*(u32 *)(arg0 + 0x2c)) & ~0xe0000000u);
        if ((p[1] & 1) == 0) {
            v = (v << 15) >> 16;
            w = (w << 15) >> 16;
        }
        result = v + w;
    }
    arg2[5] = result;
}

void func_021230d8(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;
    u8 *r;
    u8 idx;
    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    r = func_02121090(ptr, (u16)arg2, (u16)(frame >> 12));
    func_02122fa0(*(void **)(arg1 + 0x14), func_02121040(ptr, *(u8 *)(r + 2)), arg0);
    idx = *(u8 *)(r + 3);
    if (idx != 0xff) {
        func_02123074(*(void **)(arg1 + 0x14), func_02121068(ptr, idx), arg0);
    }
}

void func_02123168(u8 *arg0, u8 *arg1, u8 * __restrict arg2) {
    u32 i;
    *(void **)(arg0 + 0xc) = data_02155ed8;
    arg0[0x19] = arg2[0x17];
    *(void **)(arg0 + 8) = arg1;
    for (i = 0; i < arg0[0x19]; i++) {
        *(u16 *)(arg0 + 0x1a + i * 2) = (u16)(i | 0x100);
    }
}

