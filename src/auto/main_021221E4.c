/* 16 functions from 0x021221E4 to 0x021231B0 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155ee8;
extern void *data_02155ed8;
extern u16 *func_02120c74(u8 *);
extern void *func_02121090(void *, u16, u16);
extern u8 func_02121040(void *, u8);
extern void func_02122fa0(void *, u8, u8 *);
extern u8 func_02121068(void *);
void func_02008df0(u8, void *, u32);
s32 func_02120e30(void *, void *);
#pragma opt_propagation off
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

s32 func_02122aa8(u8 *base, u32 flags, s32 offset, u32 frame) {
u32 end, a, b;
s32 x,y;
if (flags & 0x20000000) return offset;
base += offset;
if (flags & 0xc0000000) {
end = (u16)flags;
if (flags & 0x40000000) {
if (frame & 1) {
if (frame > end) { frame = (end >> 1)+1; goto sample; }
frame >>= 1; goto average;
}
frame >>= 1;
} else {
u32 rem = frame & 3;
if (rem) {
if (frame > end) { frame = (end >> 2)+rem; goto sample; }
if (frame & 1) {
if (frame & 2) { frame >>= 2; a = frame+1; } else { a = frame >> 2; frame = a+1; }
if (flags & 0x10000000) { x = ((s16 *)base)[a]; y = ((s16 *)base)[frame]; }
else { x = ((s32 *)base)[a]; y = ((s32 *)base)[frame]; }
return (3*x+y)>>2;
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
if (flags & 0x10000000) { x = ((s16 *)base)[frame]; y = ((s16 *)base)[frame+1]; }
else { x = ((s32 *)base)[frame]; y = ((s32 *)base)[frame+1]; }
return (x+y)>>1;
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
    u32 off = (arg0 != NULL) ? *(u16 *)(arg0 + 0x34) : 0;
    u32 result;
    u16 *p;
    u32 v, w;
    if (off == 0) {
        result = 0;
    } else {
        p = func_02120c74(arg0 + off);
        v = p[0];
        w = (u16)(((u16)*(u32 *)(arg0 + 0x2c)) & ~0xe0000000u);
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
    u32 frame = *(u32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;
    u8 *r;
    if ((s32)frame >= limit) {
        frame = limit - 1;
    } else if ((s32)frame < 0) {
        frame = 0;
    }
    r = func_02121090(ptr, (u16)arg2, (u16)(frame << 4));
    func_02122fa0(*(void **)(arg1 + 0x14), func_02121040(ptr, *(u8 *)(r + 2)), arg0);
    if (*(u8 *)(r + 3) != 0xff) {
        func_02123074(*(void **)(arg1 + 0x14), func_02121068(ptr), arg0);
    }
}

void func_02123168(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 count = arg2[0x17];
    void *d = data_02155ed8;
    u32 i = 0;
    *(void **)(arg0 + 0xc) = d;
    arg0[0x19] = count;
    *(void **)(arg0 + 8) = arg1;
    for (i = 0; i < arg0[0x19]; i++) {
        *(u16 *)(arg0 + 0x1a + i * 2) = (u16)(i | 0x100);
    }
}

