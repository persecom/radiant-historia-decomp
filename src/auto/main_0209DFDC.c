/* 11 functions from 0x0209DFDC to 0x0209EE60 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_02148964[],data_02148978[],data_02148994[],data_021489ac[],data_021489c4[],data_021489e0[];
extern void *func_020a8604(s32,s32);
extern void *func_020a84b8(s32,s32);
extern void *func_020a94b8(void *);
extern void func_020a9830(void *,void *,s32,s32,s32,s32);
extern void func_020a9610(void *,void *,s32,void *,s32,s32);

extern u8 *data_021600b0;
extern u8 *data_02160204;
extern u16 data_021626a6, data_021626a8, data_021628f8;
extern u16 data_02162908[4];
extern void func_020a957c(void *);
extern void func_0210d27c(s32);
extern void func_0210c5dc(void *);
extern void func_0209e688(void);
extern void func_0203bc34(void *, void *, void *, s32, s32, s32);
extern void func_020a899c(void *);
typedef struct { s16 field[10]; } Unk_0209e688;
extern const Unk_0209e688 data_02142bc8;

typedef struct {
    u16 f0;
    u16 f2;
} Unk_02142c40;

extern Unk_02142c40 data_02142c40[5];
extern Unk_02142c40 data_02142bf0[5];

typedef struct {
    u16 x;
    u16 y;
    u16 z;
} Unk_0209edc8_vec;

extern void func_0209f684(s32, Unk_0209edc8_vec, s16);
extern void func_020a8810(void *, u32);
extern void func_020a5858(void *);
extern void func_020a5ce4(void *);
extern void func_0209f1c4(s32, s32, s32, s32, void *, s32);
extern void func_020a0fd4(s32, s32);

extern void *func_020a583c(void);
extern void func_0209e8a4(void *, u32);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
void func_0209dfdc(void) {
    s16 i;
    u8 *p = *(u8 **)(data_021600b0 + 0x1c0);
    if (p == NULL) {
        return;
    }
    switch (p[0x20]) {
    case 0:
        p[0x20] = 5;
        *(u16 *)(p + 0x4c) = 0;
        p[0x8e] = 0;
        for (i = 0; i < 7; i++) {
            *(s32 *)(p + i * 4 + 0x28) = 0x100000;
            if (i == p[0x8f]) {
                func_020a8810(*(void **)*(u8 **)(p + i * 4 + 4), 0x13);
            } else {
                func_020a8810(*(void **)*(u8 **)(p + i * 4 + 4), 0x14);
            }
        }
        if (*(void **)p != NULL) {
            func_020a957c(p);
        }
        if ((s8)p[0x4e] != 0) {
            *(void **)p = func_020a94b8(p + 0x4e);
        }
        break;
    case 1: {
        u16 row = 0;
        s32 cnt = 0;
        s32 last = 0;
        for (i = 0; i < 7; i++) {
            if (p[0x44 + i] == 0) {
                continue;
            }
            cnt++;
            if (*(u16 *)(p + 0x4c) > (cnt - 1) * 4) {
                *(s32 *)(p + i * 4 + 0x28) -= *(s32 *)(p + i * 4 + 0x28) / 7;
                if (*(s32 *)(p + i * 4 + 0x28) <= 0x89000) {
                    *(s32 *)(p + i * 4 + 0x28) = 0x89000;
                }
            }
            if (!(p[0x8e] & (1 << i)) && p[0x44 + i] != 0) {
                u8 *o2 = *(u8 **)*(u8 **)(p + i * 4 + 4);
                ((void (*)(void *))*(void **)(o2 + 4))(o2);
                func_0203bc34(*(void **)p, *(void **)*(u8 **)(p + i * 4 + 4), (void *)(s32)p[0x44 + i], 0, 0, 0);
                func_020a899c(*(void **)*(u8 **)(p + i * 4 + 4));
                p[0x8e] |= (u8)(1 << i);
            }
            if (p[0x44 + i] != 0) {
                *(s32 *)(*(u8 **)*(u8 **)(p + i * 4 + 4) + 0x44) = *(s32 *)(p + i * 4 + 0x28) + 0x6000;
                *(s32 *)(*(u8 **)*(u8 **)(p + i * 4 + 4) + 0x48) = (0xc5 - (p[0x90] - row) * 0x19) << 12;
                row++;
                *(s32 *)(*(u8 **)*(u8 **)(p + i * 4 + 4) + 0x4c) = 0x276000;
            }
            last = i;
        }
        if (*(s32 *)(p + last * 4 + 0x28) == 0x89000) {
            p[0x20] = 2;
        }
        func_0209e688();
        break;
    }
    case 2:
        if (data_021626a6 & 0x40) {
            func_0210d27c(2);
            do {
                if (p[0x8f] == 0) {
                    p[0x8f] = 6;
                } else {
                    p[0x8f]--;
                }
            } while (p[p[0x8f] + 0x21] == 0);
        }
        if (data_021626a6 & 0x80) {
            func_0210d27c(2);
            do {
                p[0x8f]++;
                p[0x8f] = (s32)p[0x8f] % 7;
            } while (p[p[0x8f] + 0x21] == 0);
        }
        if (data_021626a8 & 1) {
            func_0210d27c(3);
            *(u16 *)(p + 0x4c) = 0;
            p[0x20] = 3;
        }
        if ((data_021626a8 & 2) && p[0x20] != 3) {
            for (i = 0; i < 7; i++) {
                if (p[0x21 + i] == 2) {
                    p[0x8f] = i;
                    func_0210d27c(5);
                    *(u16 *)(p + 0x4c) = 0;
                    p[0x20] = 3;
                    break;
                }
            }
        }
        if (p[0x20] != 3) {
            s16 count = 0;
            s16 row;
            for (i = 0; i < 7; i++) {
                if (p[0x21 + i] != 0) {
                    count++;
                }
            }
            row = 0;
            for (i = 0; i < 7; i++) {
                if (p[0x21 + i] != 0) {
                    s32 y = 0xbf - (count - row) * 0x18;
                    s32 bottom = y + 0x10;
                    s32 touchY = data_02162908[1];
                    s32 x = data_02162908[0];
                    s32 inside;
                    if (x >= 0x89 && x <= 0x100 && touchY >= y && touchY <= bottom) {
                        inside = 1;
                    } else {
                        inside = 0;
                    }
                    if (inside && data_021628f8) {
                        if (p[0x8f] == i) {
                            func_0210d27c(0xb);
                            *(u16 *)(p + 0x4c) = 0;
                            p[0x20] = 3;
                        } else {
                            func_0210d27c(2);
                            p[0x8f] = i;
                        }
                    }
                    row++;
                }
            }
        }
        for (i = 0; i < 7; i++) {
            if (i == p[0x8f]) {
                func_020a8810(*(void **)*(u8 **)(p + i * 4 + 4), 0x13);
            } else {
                func_020a8810(*(void **)*(u8 **)(p + i * 4 + 4), 0x14);
            }
        }
        func_0209e688();
        break;
    case 3: {
        u16 row = 0;
        s32 cnt = 0;
        s32 last = 0;
        for (i = 0; i < 7; i++) {
            if (p[0x44 + i] == 0) {
                continue;
            }
            cnt++;
            if (*(u16 *)(p + 0x4c) > (cnt - 1) * 4) {
                *(s32 *)(p + i * 4 + 0x28) += *(s32 *)(p + i * 4 + 0x28) / 6;
                if (*(s32 *)(p + i * 4 + 0x28) >= 0x100000) {
                    *(s32 *)(p + i * 4 + 0x28) = 0x100000;
                }
            }
            if (p[0x44 + i] != 0) {
                *(s32 *)(*(u8 **)*(u8 **)(p + i * 4 + 4) + 0x44) = *(s32 *)(p + i * 4 + 0x28) + 0x6000;
                *(s32 *)(*(u8 **)*(u8 **)(p + i * 4 + 4) + 0x48) = (0xc5 - (p[0x90] - row) * 0x19) << 12;
                row++;
                *(s32 *)(*(u8 **)*(u8 **)(p + i * 4 + 4) + 0x4c) = 0x276000;
            }
            last = i;
        }
        if (*(s32 *)(p + last * 4 + 0x28) == 0x100000) {
            data_02160204[0x86] = p[0x8f];
            p[0x20] = 4;
        }
        func_0209e688();
        break;
    }
    case 4:
        *(s8 *)(data_02160204 + 0x86) = -1;
        func_020a957c(p);
        p[0x20] = 5;
        return;
    case 5:
        *(u16 *)(p + 0x4c) = 0;
        break;
    case 6:
        p[0x20] = 1;
        *(u16 *)(p + 0x4c) = 0;
        p[0x8e] = 0;
        for (i = 0; i < 7; i++) {
            *(s32 *)(p + i * 4 + 0x28) = 0x100000;
            if (i == p[0x8f]) {
                func_020a8810(*(void **)*(u8 **)(p + i * 4 + 4), 0x13);
            } else {
                func_020a8810(*(void **)*(u8 **)(p + i * 4 + 4), 0x14);
            }
        }
        if (*(void **)p != NULL) {
            func_020a957c(p);
        }
        if ((s8)p[0x4e] != 0) {
            *(void **)p = func_020a94b8(p + 0x4e);
        }
        break;
    }
    (*(u16 *)(p + 0x4c))++;
}

void func_0209e688(void)
{
  int new_var2;
  u8 *p = *((u8 **) (data_021600b0 + 0x1c0));
  Unk_0209e688 buf = data_02142bc8;
  s32 new_var;
  u16 i;
  u16 count;
 count=0; i=count;
  *((volatile u32 *) 0x040004a4) = 0x1f00c0;
  for (; i < 7; i++)
  {
    if (p[0x21 + i])
    {
      new_var2 = i * 4;
      if (p[0x8f] == i)
      {
        if (p[0x20] == 3)
        {
          func_020a3bbc(3);
        }
        else
        {
          func_020a3bbc(2);
        }
      }
      else
      {
        func_020a3bbc(1);
      }
      buf.field[5] = (new_var = *((s32 *) ((p + 0x28) + new_var2))) >> 12;
      buf.field[6] = 194 - ((p[0x90] - count) * 25);
      func_021098ac(&buf);
      count++;
    }
  }

}

void func_0209e78c(void) {
    u16 i;
    u8 *base = data_021600b0;
    for (i = 0; i < 0xd; i++) {
        *(void **)(base + i * 4 + 0xe4) = func_020a583c();
    }
    func_0209e8a4(*(void **)(base + 0xe4), 1);
    func_0209e8a4(*(void **)(base + 0xe8), 2);
    func_0209e8a4(*(void **)(base + 0xec), 4);
    func_0209e8a4(*(void **)(base + 0xf0), 2);
    func_0209e8a4(*(void **)(base + 0xf4), 0);
    func_0209e8a4(*(void **)(base + 0xf8), 4);
    func_0209e8a4(*(void **)(base + 0xfc), 4);
    func_0209e8a4(*(void **)(base + 0x100), 4);
    func_0209e8a4(*(void **)(base + 0x104), 4);
    func_0209e8a4(*(void **)(base + 0x108), 4);
    func_0209e8a4(*(void **)(base + 0x10c), 4);
    func_0209e8a4(*(void **)(base + 0x110), 4);
}

void func_0209e85c(void) {
    u16 i;
    for (i = 0; i < 0xd; i++) {
        func_020a5858(*(void **)(data_021600b0 + i * 4 + 0xe4));
        *(u32 *)(data_021600b0 + i * 4 + 0xe4) = 0;
    }
}

void func_0209e8a4(void *arg0,u32 mode) {
s32 depth=0x2d0000, zero=0;
u8 *p=arg0;
s32 one=1;
switch(mode) {
case 0:
*(void **)(p+4)=func_020a8604(3,one);
func_020a8810(*(void **)(p+4),one);
*(void **)p=func_020a94b8(data_02148964);
*(s32*)(*(u8 **)(p+4)+0x44)=zero;
*(s32*)(*(u8 **)(p+4)+0x48)=zero;
*(s32*)(*(u8 **)(p+4)+0x4c)=0x2bc000;
break;
case 1:
*(void **)(p+4)=func_020a84b8(4,one);
func_020a8810(*(void **)(p+4),one);
*(void **)p=func_020a94b8(data_02148978);
*(s32*)(*(u8 **)(p+4)+0x44)=zero;
*(s32*)(*(u8 **)(p+4)+0x48)=zero;
*(s32*)(*(u8 **)(p+4)+0x4c)=depth;
break;
case 2:
*(void **)(p+4)=func_020a84b8(5,3);
func_020a8810(*(void **)(p+4),one);
*(void **)p=func_020a94b8(data_02148994);
*(s32*)(*(u8 **)(p+4)+0x44)=zero;
*(s32*)(*(u8 **)(p+4)+0x48)=zero;
*(s32*)(*(u8 **)(p+4)+0x4c)=depth;
break;
case 3:
*(void **)(p+4)=func_020a84b8(5,3);
func_020a8810(*(void **)(p+4),one);
*(void **)p=func_020a94b8(data_021489ac);
*(s32*)(*(u8 **)(p+4)+0x44)=zero;
*(s32*)(*(u8 **)(p+4)+0x48)=zero;
*(s32*)(*(u8 **)(p+4)+0x4c)=depth;
break;
case 4:
*(void **)(p+4)=func_020a84b8(4,one);
func_020a8810(*(void **)(p+4),one);
*(void **)p=func_020a94b8(data_021489c4);
*(s32*)(*(u8 **)(p+4)+0x44)=zero;
*(s32*)(*(u8 **)(p+4)+0x48)=zero;
*(s32*)(*(u8 **)(p+4)+0x4c)=depth;
break;
case 5:
*(void **)(p+4)=func_020a8604(5,3);
func_020a9830(p+0xc,p+0x40,240,64,zero,zero);
func_020a8810(*(void **)(p+4),7);
*(void **)p=func_020a94b8(data_021489e0);
func_020a9610(p+0x40,*(void **)p,4,*(void **)(p+4),zero,zero);
*(s32*)(*(u8 **)(p+4)+0x44)=0x1a000;
*(s32*)(*(u8 **)(p+4)+0x48)=0x14000;
*(s32*)(*(u8 **)(p+4)+0x4c)=depth;
*(u16*)(p+0x5c)|=1;
break;
}
}

extern void func_0203bc34(void *, void *, void *, s32, s32, s32);
extern void func_0203bcf8(void *, void *, void *, s32, s32, s32, s32, s32);
extern void func_020a899c(void *);
void func_0209eae0(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 mode) {
    u8 *self = (u8 *)arg0;
    u8 *obj = *(u8 **)(self + 4);
    u8 *f0 = *(u8 **)(self + 0);

    ((void (*)(void *))*(void **)(obj + 4))(obj);

    if (mode == 0) {
        func_0203bc34(f0, obj, (void *)arg4, 0, 0, 0);
    } else if (mode == 1) {
        func_0203bc34(f0, obj, (void *)arg4, 0x40, 0, 1);
    } else if (mode == 2) {
        func_0203bc34(f0, obj, (void *)arg4, 0x71, 0, 2);
    } else if (mode == 3) {
        func_0203bcf8(f0, obj, (void *)arg4, 0, 0, 0x100, 0x40, 0xe);
    }

    func_020a899c(obj);
    *(u32 *)(obj + 0x44) = arg1 << 12;
    *(u32 *)(obj + 0x48) = arg2 << 12;
    *(u32 *)(obj + 0x4c) = arg3 << 12;
}

void func_0209ed34(u32 arg0, u32 arg1);
void func_0209ebec(u32 arg0, u32 arg1, u32 arg2, s32 arg3, u16 arg4) {
    u8 *base = data_021600b0;

    func_0209eae0(*(u32 *)(base + 0xe4), 0x40, 0xb, 0x69, arg0, 1);
    func_0209eae0(*(u32 *)(base + 0xec), 0x40, 0x21, 0x69, arg1, 1);
    func_0209eae0(*(u32 *)(base + 0xe8), 0x17, 0x3c, 0x69, arg2, 3);
    if (arg4 != 0) {
        func_0209eae0(*(u32 *)(base + 0xf0), 0x17, (s16)(0x74 - arg3 * 0xe), 0x69, arg4, 3);
    } else {
        func_020a5ce4(*(void **)(base + 0xf0));
    }
    func_0209ed34(0, 0x1a);
    func_0209ed34(1, 0x1e);
    func_0209ed34(2, 0x1a);
    if (arg4 != 0) {
        func_0209ed34(3, 0x1e);
    }
}

void func_0209ed00(void) {
    u8 *base = data_021600b0;
    func_020a5ce4(*(void **)(base + 0xe4));
    func_020a5ce4(*(void **)(base + 0xe8));
    func_020a5ce4(*(void **)(base + 0xec));
    func_020a5ce4(*(void **)(base + 0xf0));
}

void func_0209ed34(u32 arg0, u32 arg1) {
    u8 *p = data_021600b0 + arg0 * 4;
    func_020a8810(*(void **)(*(void **)(p + 0xe4) + 4), arg1);
}

void func_0209ed58(s32 arg0, s32 arg1)
{
  Unk_02142c40 arr[5];
  u32 count = 5;
  u16 new_var;
  Unk_02142c40 *dst = arr;
  Unk_02142c40 *src = data_02142c40;
  do
  {
    new_var = src->f0;
    dst->f2 = src->f2;
    dst->f0 = new_var;
    src++;
    dst++;
  }
  while ((--count) != 0);
  func_0209f1c4(0, 0xa, arg0, arg1, arr, 0x1f);
  func_020a0fd4(arg0, arg1);
}

void func_0209edc8(s32 arg0, s32 arg1)
{
  u8 *base = data_021600b0;
  Unk_02142c40 arr[5];
  u32 count = 5;
  u16 new_var;
  Unk_02142c40 *dst = arr;
  Unk_02142c40 *src = data_02142bf0;
  if ((base && base) && base)
  {
  }
  do
  {
    new_var = src->f0;
    dst->f2 = src->f2;
    dst->f0 = new_var;
    src++;
    dst++;
  }
  while ((--count) != 0);
  func_0209f1c4(1, 0xa, arg0, arg1, arr, 0x1f);
  func_0209f684(0, *((Unk_0209edc8_vec *) (base + 0x1e0)), *((s16 *) (base + 0x1ea)));
}

