/* 12 functions from 0x02054E14 to 0x02055E14 (main), found by ds-decomp. */
#include "common.h"

typedef struct { s32 x, y, z; } Vec_0205530c;
extern const s16 data_0213a394[];
static inline s16 Sin_0205530c(s32 a) { return data_0213a394[((a % 65536) >> 4)*2]; }
static inline s16 Cos_0205530c(s32 a) { return data_0213a394[((a % 65536) >> 4)*2+1]; }
static inline void SetVec_0205530c(Vec_0205530c *dst, s32 x, s32 y, s32 z) { dst->x=x; dst->y=y; dst->z=z; }
static inline void AddVec_0205530c(Vec_0205530c *dst, const Vec_0205530c *a, const Vec_0205530c *b) { dst->x = a->x+b->x; dst->y = a->y+b->y; dst->z = a->z+b->z; }
static inline void CopyVec_0205530c(Vec_0205530c *dst, const Vec_0205530c *src) { dst->x = src->x; dst->y = src->y; dst->z = src->z; }

typedef struct {
    void *f0;
    u32 f4[4];
} UnkEntry_02055c90;

typedef struct {
    UnkEntry_02055c90 entries[2];
} UnkData_02055c90;

extern u8 *data_021600ac;
extern u8 *data_021600c0;
extern u32 data_02155c3c;
extern const UnkData_02055c90 data_0213f31c;
extern char data_02146550[];

extern void func_02002128(void *, void *, void *);
extern s32 func_02002388(void *, void *);
extern void func_02002274(void *, void *);
extern void func_020020f8(void *, void *, void *);
extern void *func_0210c594(u32, u32);
extern void func_0210d9e4(void *);
extern void func_021167ac(void *, s32);
extern void func_02055994(void);
extern void func_02055bac(void);
extern void func_02055c90(s32);
extern void func_02055ebc(void);
extern void func_02005e80(void *, const char *, ...);
extern void *func_02055d28(void *, u16);
extern void func_02124e68(void *);
extern void func_0212501c(void *);
extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_0210c5dc(void *);

extern u32 data_0216263c[3];
extern void func_02052844(void *, s32, s32);
extern void func_0210d27c(s32);
extern s32 func_020ddc8c(void *, void *);
extern void func_020477dc(void *, s32, s32);
extern void func_020495fc(void *, s32);
extern void func_02050b0c(void *, s32);
extern void func_0205103c(void *);
extern void func_020510e8(void *);
extern void func_02051344(void *);
extern void func_0205196c(void *);
s32 func_02054e14(u8 *p) {
    u8 *config = *(u8 **)(p + 0xd0);
    s32 i;
    s32 angle;
    Vec_0205530c vel;

    if ((func_02002388(p, p + 0x1b4) >> 12) < 3) {
        u32 r;
        *(s16 *)(p + 0x98) = 0;
        r = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
        data_0216263c[0] = r;
        if ((u16)(((r >> 16) * 100) >> 16) < 50) {
            func_02052844(p, 0, -1);
            func_02052844(p, 3, 0);
            config[1] = 8;
            *(u16 *)(config + 4) = 0;
            if (config[0x25] != 0x47 && config[0x25] != 0x51) {
                *(u16 *)(config + 6) = 0;
            }
            func_0210d27c(0x8a);
        } else {
            *(u16 *)(config + 4) = 0;
            if (config[0x25] == 0x47 || config[0x25] == 0x51) {
                *(u16 *)(config + 6) = 2;
                config[1] = 3;
            } else {
                *(u16 *)(config + 6) = 0;
                config[1] = 1;
            }
        }
        return 0;
    }

    angle = func_020ddc8c(p, p + 0x1b4);
    *(s32 *)(p + 0x30) = Sin_0205530c(angle) * 8;
    *(s32 *)(p + 0x38) = Cos_0205530c(angle) * 8;
    *(s32 *)(p + 0x30) = (*(s32 *)(p + 0x30) * (s32)((f32)(*(s16 *)(p + 0x98) + 10) / 10.0f)) / 2;
    *(s32 *)(p + 0x38) = (*(s32 *)(p + 0x38) * (s32)((f32)(*(s16 *)(p + 0x98) + 10) / 10.0f)) / 2;
    CopyVec_0205530c(&vel, (Vec_0205530c *)(p + 0x30));

    for (i = 0; i < 2; i++) {
        CopyVec_0205530c((Vec_0205530c *)(p + 0x30), &vel);
        CopyVec_0205530c((Vec_0205530c *)(p + 0xc), (Vec_0205530c *)p);
        CopyVec_0205530c((Vec_0205530c *)(p + 0xd4), (Vec_0205530c *)p);
        SetVec_0205530c((Vec_0205530c *)(p + 0xe0), *(s32 *)p + vel.x, *(s32 *)(p + 4), *(s32 *)(p + 8) + vel.z);
        func_020477dc(p, 2, 1);
        if (*(u32 *)(p + 0xac) & 1) {
            u8 *other;
            *(u16 *)(*(u8 **)(p + 0xb0) + 4) = 0;
            func_020495fc(p, 0);
            func_02050b0c(p, 0);
            func_02050b0c(p, 0x8000);
            func_0205103c(p);
            CopyVec_0205530c((Vec_0205530c *)(p + 0xd4), (Vec_0205530c *)(p + 0xc));
            CopyVec_0205530c((Vec_0205530c *)(p + 0xe0), (Vec_0205530c *)p);
            *(s32 *)(p + 0x30) = *(s32 *)p - *(s32 *)(p + 0xc);
            *(s32 *)(p + 0x38) = *(s32 *)(p + 8) - *(s32 *)(p + 0x14);
            if (*(s32 *)(p + 0x30) == 0 && *(s32 *)(p + 0x38) == 0) {
                p[0xa4] |= 8;
            }
            func_020510e8(p);
            p[0xa4] &= 0xfe;
            p[0xa4] &= 0xfd;
            p[0xa4] &= 0xfb;
            other = *(u8 **)(data_021600ac + 0x68);
            if (other && *(u16 *)(p + 0x90) == *(u16 *)(*(u8 **)(other + 0xb0) + 4)) {
                *(u16 *)(*(u8 **)(p + 0xb0) + 4) = 0;
                *(u16 *)(*(u8 **)(other + 0xb0) + 4) = 0;
            }
            func_02051344(p);
            func_0205196c(p);
            *(s32 *)(p + 0x30) = 0;
            *(s32 *)(p + 0x38) = 0;
            if (*(s32 *)(p + 0xec) != *(s32 *)p || *(s32 *)(p + 0xf4) != *(s32 *)(p + 8)) {
                CopyVec_0205530c((Vec_0205530c *)(p + 0xec), (Vec_0205530c *)p);
            }
        } else {
            *(s32 *)p += vel.x;
            *(s32 *)(p + 8) += vel.z;
        }
    }

    *(s16 *)(p + 0x98) += 1;
    if (*(s16 *)(p + 0x98) > 7) {
        u32 r;
        *(s16 *)(p + 0x98) = 0;
        r = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
        data_0216263c[0] = r;
        if ((u16)(((r >> 16) * 100) >> 16) < 50) {
            func_02052844(p, 0, -1);
            func_02052844(p, 3, 0);
            config[1] = 8;
            *(u16 *)(config + 4) = 0;
            if (config[0x25] != 0x47 && config[0x25] != 0x51) {
                *(u16 *)(config + 6) = 0;
            }
            func_0210d27c(0x8a);
        } else {
            *(u16 *)(config + 4) = 0;
            if (config[0x25] == 0x47 || config[0x25] == 0x51) {
                *(u16 *)(config + 6) = 2;
                config[1] = 3;
            } else {
                *(u16 *)(config + 6) = 0;
                config[1] = 1;
            }
        }
    }
    return 0;
}

void func_02055240(u8 *arg0) {
    u8 *p = *(u8 **)(data_021600ac + 0x68);
    struct { s32 x, y, z; } vec1 = { 0, 0, 0 };
    struct { s32 x, y, z; } vec2 = { 0, 0, 0 };
    s32 dist;

    *(s32 *)(arg0 + 0x1b8) = 0;
    func_02002128(arg0, p, &vec1);
    dist = (func_02002388(arg0, p) >> 12) + 0x50;
    func_02002274(&vec1, &vec1);
    vec2.x = vec1.x * dist;
    vec2.z = vec1.z * dist;
    func_020020f8(p, &vec2, arg0 + 0x1b4);
    *(s16 *)(arg0 + 0x98) = 0;
}

s32 func_020552e4(u8 *arg0) {
    *(s16 *)(arg0 + 0x98) += 1;
    if (*(s16 *)(arg0 + 0x98) > 0x78) {
        *(s16 *)(arg0 + 0x98) = 0;
        return 1;
    }
    return 0;
}

void func_0205530c(u8 *p) {
    u8 *config = *(u8 **)(p + 0xd0);

    *(u16 *)(p + 0x92) = func_020ddc8c(*(u8 **)(data_021600ac + 0x68), p);
    *(s32 *)(p + 0x30) = (s16)config[0x1a] * data_0213a394[((*(u16 *)(p + 0x92) % 65536) >> 4) * 2];
    *(s32 *)(p + 0x38) = (s16)config[0x1a] * data_0213a394[((*(u16 *)(p + 0x92) % 65536) >> 4) * 2 + 1];

    CopyVec_0205530c((Vec_0205530c *)(p + 0xc), (Vec_0205530c *)p);
    CopyVec_0205530c((Vec_0205530c *)(p + 0xd4), (Vec_0205530c *)p);
    SetVec_0205530c((Vec_0205530c *)(p+0xe0), *(s32 *)p + *(s32 *)(p+0x30), *(s32 *)(p+4), *(s32 *)(p+8) + *(s32 *)(p+0x38));

    if (*(u16 *)(p + 0x8e) < 700) {
        func_020477dc(p, 1, 1);
    } else {
        func_020477dc(p, 0, 1);
    }

    if (*(u32 *)(p + 0xac) & 1) {
        u8 *other;
        *(u16 *)(*(u8 **)(p + 0xb0) + 4) = 0;
        func_020495fc(p, 0);
        func_02050b0c(p, 0);
        func_02050b0c(p, 0x8000);
        func_0205103c(p);
        CopyVec_0205530c((Vec_0205530c *)(p + 0xd4), (Vec_0205530c *)(p + 0xc));
        CopyVec_0205530c((Vec_0205530c *)(p + 0xe0), (Vec_0205530c *)p);
        *(s32 *)(p + 0x30) = *(s32 *)p - *(s32 *)(p + 0xc);
        *(s32 *)(p + 0x38) = *(s32 *)(p + 8) - *(s32 *)(p + 0x14);
        if (*(s32 *)(p + 0x30) == 0 && *(s32 *)(p + 0x38) == 0) {
            p[0xa4] |= 8;
        }
        func_020510e8(p);
        p[0xa4] &= 0xfe;
        p[0xa4] &= 0xfd;
        p[0xa4] &= 0xfb;
        other = *(u8 **)(data_021600ac + 0x68);
        if (other && *(u16 *)(p + 0x90) == *(u16 *)(*(u8 **)(other + 0xb0) + 4)) {
            *(u16 *)(*(u8 **)(p + 0xb0) + 4) = 0;
            *(u16 *)(*(u8 **)(other + 0xb0) + 4) = 0;
        }
        func_02051344(p);
        func_0205196c(p);
        *(s32 *)(p + 0x30) = 0;
        *(s32 *)(p + 0x38) = 0;
        if (*(s32 *)(p + 0xec) != *(s32 *)p || *(s32 *)(p + 0xf4) != *(s32 *)(p + 8)) {
            CopyVec_0205530c((Vec_0205530c *)(p + 0xec), (Vec_0205530c *)p);
        }
    } else {
        *(s32 *)p += *(s32 *)(p + 0x30);
        *(s32 *)(p + 8) += *(s32 *)(p + 0x38);
    }
}

void func_02055564(u8 *p, s32 speed) {
    u8 *config = *(u8 **)(p + 0xd0);
    u16 id;
    s32 distance;
    s32 zero = 0;
    s32 angle;
    Vec_0205530c pos, next;
    s32 dx, dz;
    config[8] = 1;
    *(u16 *)(p + 0x92) = func_020ddc8c(p, p+0x24);
    angle = *(u16 *)(p + 0x92);
    angle = (angle % 65536) >> 4;
    CopyVec_0205530c(&pos, (Vec_0205530c *)p);
    CopyVec_0205530c(&next, &pos);
    dz = speed * data_0213a394[angle * 2 + 1];
    dx = speed * data_0213a394[angle * 2];
    next.x += dx;
    next.z += dz;
    *(s32 *)(p+0x38) = dz;
    *(s32 *)(p+0x30) = dx;
    CopyVec_0205530c((Vec_0205530c *)(p+0xc), &pos);
    CopyVec_0205530c((Vec_0205530c *)(p+0xd4), &pos);
    SetVec_0205530c((Vec_0205530c *)(p+0xe0), next.x, *(s32 *)(p+4), next.z);
    if (*(u16 *)(p + 0x8e) < 700) func_020477dc(p, 1, 1);
    else func_020477dc(p, 0, 1);
    if (*(u32 *)(p + 0xac) & 1) {
        u8 *other;
        *(u16 *)(*(u8 **)(p + 0xb0) + 4) = zero;
        func_020495fc(p, zero);
        func_02050b0c(p, zero);
        func_02050b0c(p, 0x8000);
        func_0205103c(p);
        CopyVec_0205530c((Vec_0205530c *)(p+0xd4), (Vec_0205530c *)(p+0xc));
        CopyVec_0205530c((Vec_0205530c *)(p+0xe0), (Vec_0205530c *)p);
        *(s32 *)(p + 0x30) = *(s32 *)p - *(s32 *)(p + 0xc);
        *(s32 *)(p + 0x38) = *(s32 *)(p + 8) - *(s32 *)(p + 0x14);
        if (*(s32 *)(p + 0x30) == 0 && *(s32 *)(p + 0x38) == 0) p[0xa4] |= 8;
        func_020510e8(p);
        p[0xa4] &= ~1;
        p[0xa4] &= ~2;
        p[0xa4] &= ~4;
        other = *(u8 **)(data_021600ac + 0x68);
        if (other && *(u16 *)(p + 0x90) == *(u16 *)(*(u8 **)(other + 0xb0) + 4)) {
            *(u16 *)(*(u8 **)(p + 0xb0) + 4) = zero;
            *(u16 *)(*(u8 **)(other + 0xb0) + 4) = zero;
        }
        func_02051344(p);
        func_0205196c(p);
        *(s32 *)(p + 0x30) = zero;
        *(s32 *)(p + 0x38) = zero;
        if (*(s32 *)(p + 0xec) != *(s32 *)p || *(s32 *)(p + 0xf4) != *(s32 *)(p + 8))
            CopyVec_0205530c((Vec_0205530c *)(p + 0xec), (Vec_0205530c *)p);
    } else {
        *(s32 *)p += *(s32 *)(p + 0x30);
        *(s32 *)(p + 8) += *(s32 *)(p + 0x38);
    }
    distance = speed << 12;
    if (func_0210c2f4(p, p+0x24) < distance || p[0xa4]) {
        func_020477dc(p, 2, 1);
        if (distance > func_0210c2f4(p, p+0x24)) {
            *(s32 *)p = *(s32 *)(p+0x24);
            *(s32 *)(p+8) = *(s32 *)(p+0x2c);
        }
        config[8] = zero;
    }
}

void func_02055804(s32 arg0) {
    if (data_021600c0 != NULL) {
        return;
    }
    data_021600c0 = func_0210c594(0x4c, data_02155c3c);
    *(void **)(data_021600c0 + 0xc) = (void *)func_02055994;
    *(u32 *)(data_021600c0 + 0x10) = 0x3f3;
    func_0210d9e4(data_021600c0 + 0xc);
    *(void **)(data_021600c0 + 0x20) = (void *)func_02055bac;
    *(u32 *)(data_021600c0 + 0x24) = 0x3f3;
    func_0210d9e4(data_021600c0 + 0x20);
    func_021167ac(data_021600c0 + 0x34, 0x2c);
    func_021167ac(data_021600c0 + 0x40, 8);
    func_02055c90(arg0);
    func_02055ebc();
}

void func_020558b4(void) {
void *node;
void **entry;
if (data_021600c0 == NULL) return;
while ((node = *(void **)(data_021600c0 + 0x34)) != NULL) {
func_021168f8(data_021600c0 + 0x34, node);
if (node != NULL) func_0210c5dc(node);
}
while ((entry = *(void ***)(data_021600c0 + 0x40)) != NULL) {
func_021168f8(data_021600c0 + 0x40, entry);
func_0210eb80(*entry);
if (*entry != NULL) { func_0210c5dc(*entry); *entry = NULL; }
if (entry != NULL) func_0210c5dc(entry);
}
func_0210da14(data_021600c0 + 0xc);
func_0210da14(data_021600c0 + 0x20);
if (data_021600c0 != NULL) {func_0210c5dc(data_021600c0); data_021600c0 = NULL;}
}

void *func_02055dd8(u16);
void func_02055994(void)
{
  u8 *p = data_021600c0;
  u8 i;
  u8 *new_var;
  u16 *new_var3;
  u8 j;
  u8 k;
  u8 *n;
  int new_var2;
  if (!p[0])
  {
    return;
  }
  switch (p[1])
  {
    case 0:
      for (i = 0; i < 2; i++)
    {
      n = func_02055dd8(i);
      *((s16 *) (n + 10)) = 0;
      n[2] = 1;
    }

      n = func_02055dd8(2);
      *((s16 *) (n + 16)) = 4;
      new_var = p + 2;
      new_var3 = (u16 *) new_var;
      *((s16 *) (n + 12)) = 125;
      *new_var3 = 0;
      p[1] = 1;
      break;

    case 1:
      for (j = 0; j < 2; j++)
    {
      n = func_02055dd8(j);
      (*((s16 *) (n + 10)))++;
    }

      if ((*((u16 *) new_var)) >= 18)
    {
      n = func_02055dd8(2);
      n[2] = 1;
      new_var2 = 0;
      *((u16 *) (p + 2)) = new_var2;
      p[1] = 2;
    }
      break;

    case 2:
      n = func_02055dd8(2);
      *((s16 *) (n + 16)) += 4;
      *((s16 *) (n + 12)) -= 2;
      if ((*((s16 *) (n + 16))) >= 84)
    {
      p[1] = 3;
      *new_var3 = 0;
    }
      break;

    case 3:
      if ((*new_var3) > 6)
    {
      p[1] = 4;
    }
      break;

    case 4:
      n = func_02055dd8(3);
      n[2] = 1;
      *((s16 *) (n + 6)) = 14;
      *((s32 *) (n + 24)) = 0xe000;
      p[1] = 5;
      break;

    case 5:
      n = func_02055dd8(3);
      --(*((s16 *) (n + 6)));
      *((s32 *) (n + 24)) -= 0x1000;
      if (!(*((s32 *) (n + 24))))
    {
      p[1] = 6;
      *((u16 *) (p + 2)) = 0;
    }
      break;

    case 6:
      if ((*((u16 *) (p + 2))) >= 64)
    {
      p[1] = 7;
    }
      break;

    case 7:
      j = 0;
      for (k = 0; k < 4; k++)
    {
      n = func_02055dd8(k);
      if (n[2])
      {
        j = 1;
        if ((*((s16 *) (n + 18))) >= 2)
        {
          *((s16 *) (n + 18)) -= 2;
        }
        else
        {
          n[2] = 0;
        }
      }
    }

      if (!j)
    {
      p[1] = 8;
    }
      break;

    case 8:
      func_020558b4();
      return;

  }

  ++(*((u16 *) (p + 2)));
}

void func_02055bac(void) {
u8 *node = *(u8 **)(data_021600c0 + 0x34);
s16 sp[10];
if (node == NULL) return;
do {
if (node[2] != 0 && node[0x26] != 0) {
*(volatile u32 *)0x040004a4 = (node[0x26] << 16) | 0xc0;
func_02055e14(node[3]);
sp[0] = 1;
sp[1] = *(s16 *)(node + 4);
sp[2] = *(s16 *)(node + 6);
sp[3] = *(s16 *)(node + 8);
sp[4] = *(s16 *)(node + 10);
sp[5] = *(s16 *)(node + 12) + (*(s32 *)(node + 20) >> 12);
sp[6] = *(s16 *)(node + 14) + (*(s32 *)(node + 24) >> 12);
sp[7] = *(s16 *)(node + 36);
sp[8] = *(s16 *)(node + 16) + (*(s32 *)(node + 28) >> 12);
sp[9] = *(s16 *)(node + 18) + (*(s32 *)(node + 32) >> 12);
func_021098ac(sp);
}
node = *(u8 **)(node + 0x30);
} while (node != NULL);
}

void func_02055c90(s32 arg0) {
    UnkData_02055c90 buf;
    u8 unk8[0x28];
    u8 unk0[0x8];
    u8 i;

    buf = data_0213f31c;
    for (i = 0; i < 2; i++) {
        if (i == 1) {
            func_02005e80(buf.entries[i].f0, data_02146550, arg0);
        }
        func_02055d28(&buf.entries[i], i);
    }
    func_02124e68(unk8);
    func_0212501c(unk0);
}

void *func_02055d28(void *arg0, u16 arg1) {
    u8 *p1;
    void *result;
    u8 *p2;
    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(data_021600c0 + 0x40, p2);
    } else {
        if (p1 != NULL) {
            func_0210c5dc(p1);
        }
        if (p2 != NULL) {
            func_0210c5dc(p2);
        }
    }
    return result;
}

extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_0210c5dc(void *);
void *func_02055dd8(u16 arg0) {
    u8 *node = *(u8 **)(data_021600c0 + 0x34);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

