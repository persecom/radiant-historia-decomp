/* 13 functions from 0x02088E90 to 0x02089BB0 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02162908[4];
extern u8 *data_0216010c;
extern void func_020a8810(void *, u32);
extern int func_020895a0(int, int, int, int, u8, void *, u8, int, int);
extern void func_020a994c(void *);

typedef struct {
    u32 pad[10];
    u16 pad28;
    s16 field_2a;
    u32 pad2[14];
} Unk_02089b38;

extern char data_021485f0[];
void *func_021092d8(void *);
s32 func_02092994(void *,s32);
s32 func_02109444(void *);
void func_021093b0(void *);
void func_02088e90(void)
{
  void *file = func_021092d8(data_021485f0);
  s16 i;
  for (i = 0; i < 8; i++)
  {
    data_0216010c[(i * 0x844) + 0x650] = 0;
  }

  do
  {
    s16 group = func_02092994(file, 0);
    if (group > 0)
    {
      s32 off = ((s16) (group - 1)) * 0x844;
      unsigned char index = data_0216010c[off + 0x650];
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x690)) = (u8) func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x654)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x656)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x658)) = func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x65a)) = func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x65b)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x66a)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x66c)) = func_02092994(file, 0);
      *((s8 *) (((data_0216010c + off) + (index << 6)) + 0x66e)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x670)) = func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x668)) = func_02092994(file, 0);
      *((s32 *) (((data_0216010c + off) + (index << 6)) + 0x65c)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x658)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + ((((((((((index & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) << 6)) + 0x656)) = func_02092994(file, 0);
      func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x672)) = func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x678)) = func_02092994(file, 0);
      *((s16 *) (((off + data_0216010c) + (index << 6)) + 0x68c)) = func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x68e)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x674)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x676)) = func_02092994(file, 0);
      *((s16 *) (((data_0216010c + off) + (index << 6)) + 0x67a)) = func_02092994(file, 0);
      *((u8 *) (((data_0216010c + off) + (index << 6)) + 0x67c)) = func_02092994(file, 0);
      if ((*((s16 *) (((data_0216010c + off) + (index << 6)) + 0x670))) > 0)
      {
        data_0216010c[off + 0x650]++;
      }
      else
        if ((*((s8 *) (((data_0216010c + off) + (index << 6)) + 0x66e))) >= 2)
      {
        data_0216010c[off + 0x650]++;
      }
    }
  }
  while (func_02109444(file));
  if (file)
  {
    func_021093b0(file);
  }
}

s32 func_02089220(s32 arg0, s16 arg1) {
    volatile u8 *base = data_0216010c + arg0 * 0x844;
    s16 i;
    for (i = 0; i < (s16)base[0x650]; i++) {
        if (*(s16 *)(base + 0x600 + (i << 6) + 0x90) == arg1) {
            return (s8)i;
        }
    }
    return -1;
}

extern void func_02013878(void *, s32, s32);
extern void *func_02021f10(s32);
extern void func_02013858(void *, void *, s32);
extern void func_02015a3c(void *, s32, s32, void *);
extern void func_02088e10(void);
void func_02089284(s32 arg0, s32 arg1) {
    s16 i;
    s16 count = 0;
    u8 *p;
    data_0216010c[0x4870] = count;
    func_02013878(data_0216010c + 0x4870, count, 0x844);
    p = (u8 *)func_02021f10(arg0);
    if (arg1 == 0) {
        s32 off = arg0 * 0x844;
        for (i = 0; i < 0x1e; i++) {
            u8 val = p[i + 0x4e];
            if (val != 0) {
                s32 idx = func_02089220(arg0, val);
                if (idx != -1) {
                    if (*(s16 *)((u8 *)(off + (u32)data_0216010c) + (idx << 6) + 0x670) != 0 ||
                        *(s8 *)((u8 *)(off + (u32)data_0216010c) + (idx << 6) + 0x66e) >= 2) {
                        func_02013858(data_0216010c + 0x4874 + (count << 6),
                                      data_0216010c + 0x654 + off + (idx << 6),
                                      0x40);
                        count++;
                        data_0216010c[0x4870] = count;
                    }
                }
            }
        }
        for (i = 0; i < 3; i++) {
            u8 val = p[i + 0x6c];
            if (val != 0) {
                s32 idx = func_02089220(arg0, val);
                if (idx != -1) {
                    if (*(s8 *)((u8 *)(off + (u32)data_0216010c) + (idx << 6) + 0x66e) >= 2) {
                        func_02013858(data_0216010c + 0x4874 + (count << 6),
                                      data_0216010c + 0x654 + off + (idx << 6),
                                      0x40);
                        count++;
                        data_0216010c[0x4870] = count;
                    }
                }
            }
        }
    } else {
        s32 off = arg0 * 0x844;
        for (i = 0; i < 0x1e; i++) {
            u8 val = p[i + 0x4e];
            if (val != 0) {
                s32 idx = func_02089220(arg0, val);
                if (idx != -1) {
                    if (*(u8 *)((u8 *)(off + (u32)data_0216010c) + (idx << 6) + 0x65b) == 5) {
                        func_02013858(data_0216010c + 0x4874 + (count << 6),
                                      data_0216010c + 0x654 + off + (idx << 6),
                                      0x40);
                        count++;
                        data_0216010c[0x4870] = count;
                    }
                }
            }
        }
    }
    func_02015a3c(data_0216010c + 0x4874, data_0216010c[0x4870], 0x40, func_02088e10);
    *(s16 *)(data_0216010c + 0x50d4) = data_0216010c[0x4870];
    if (*(s16 *)(data_0216010c + 0x50d4) <= 6) {
        data_0216010c[0x50d8] = 0x5f;
        return;
    }
    data_0216010c[0x50d8] = 0x23a / *(s16 *)(data_0216010c + 0x50d4);
    {
        struct {
            u8 pad[0x50d8];
            u8 f;
        } *s = (void *)data_0216010c;
        if (s->f < 8) {
            s->f = 8;
        }
    }
}

void func_02089550(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_02089578(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_0203bc34(void *,void *,void *,int,int,int);
void func_020a9610(void *,void *,void *,void *,int,int);
int func_020a96f0(void *);
void func_020a98ac(void *);
void func_020a98f4(void *);
int func_020895a0(int index, int x, int y, int z, u8 slot, void *arg, u8 mode, int a, int b) {
u32 off=index*0x50;
int ret=0;
func_020a994c(data_0216010c+0x74+off);
if(!arg)return ret;
*(int *)(*(u8 **)(data_0216010c+off+0x70)+0x4c)=(z+140)<<12;
*(int *)(*(u8 **)(data_0216010c+off+0x70)+0x44)=x;
*(int *)(*(u8 **)(data_0216010c+off+0x70)+0x48)=y;
switch(mode) {
case 2: func_0203bc34(*(void **)(data_0216010c+0x48+slot*4),*(void **)(data_0216010c+off+0x70),arg,a,b,2);break;
case 1: func_0203bc34(*(void **)(data_0216010c+0x48+slot*4),*(void **)(data_0216010c+off+0x70),arg,a,b,1);break;
default:
func_020a9610(data_0216010c+0xa8+off,*(void **)(data_0216010c+0x48+slot*4),arg,*(void **)(data_0216010c+off+0x70),0,0);
ret=func_020a96f0(*(void **)(data_0216010c+off+0xb8));
func_020a98ac(data_0216010c+0x74+off);
func_020a98f4(data_0216010c+0x74+off);
}
return ret;
}

void func_0203bcf8(void *, void *, void *, s32, s32, s32, s32, s32);
s32 func_020a899c(void *);
s32 func_020896f4(s32 index, s32 x, s32 y, s32 z, u8 slot, void *arg, u8 mode) {
    u32 off = index * 0x50;
    u8 *node = *(u8 **)(data_0216010c + off + 0x70);
    s32 ret;
    ((void (*)(void *))*(u32 *)(node + 4))(node);
    if (mode == 0) {
        func_0203bc34(*(void **)(data_0216010c + slot * 4 + 0x48), *(void **)(data_0216010c + off + 0x70), arg, 0, 0, 0);
    } else if (mode == 1) {
        func_0203bc34(*(void **)(data_0216010c + slot * 4 + 0x48), *(void **)(data_0216010c + off + 0x70), arg, 0x40, 0, 1);
    } else if (mode == 2) {
        func_0203bc34(*(void **)(data_0216010c + slot * 4 + 0x48), *(void **)(data_0216010c + off + 0x70), arg, 0x71, 0, 2);
    } else if (mode == 3) {
        func_0203bcf8(*(void **)(data_0216010c + slot * 4 + 0x48), *(void **)(data_0216010c + off + 0x70), arg, 0, 0, 0x100, 0x40, 14);
    }
    ret = func_020a899c(*(void **)(data_0216010c + off + 0x70));
    *(s32 *)(*(u8 **)(data_0216010c + off + 0x70) + 0x4c) = z << 12;
    *(s32 *)(*(u8 **)(data_0216010c + off + 0x70) + 0x44) = x << 12;
    *(s32 *)(*(u8 **)(data_0216010c + off + 0x70) + 0x48) = y << 12;
    return ret;
}

void func_02089878(void)
{
    u8 **pp = &data_0216010c;
    s32 zero = 0;
    s32 n = 50;
    s32 v;
    u8 *base = *pp;
    u8 idx = *(u8 *)(base + 0x50d7);

    v = *(s16 *)(base + idx * 100 + 0x5570);
    if (v >= 1) {
        func_020a8810(*(void **)(*pp + 0x340), 0x18);
        v = (u16)v;
        func_020895a0(9, 0x12000, 0x86000, n, zero, v, zero, zero, zero);
        func_020a8810(*(void **)(*pp + 0x2f0), 0x16);
        func_020895a0(8, 0x14000, 0x98000, n, 1, v, zero, zero, zero);
    } else {
        func_020a994c(base + 0x2f4);
        func_020a994c(*pp + 0x344);
    }
}

void func_0208994c(s32 arg0) {
    u8 **pp = &data_0216010c;
    s32 zero = 0;
    s32 n = 50;
    s32 v;
    func_020a8810(*(void **)(*pp + 0x340), 0x18);
    v = (u16)arg0;
    func_020895a0(9, 0x12000, 0x86000, n, zero, v, zero, zero, zero);
    func_020a8810(*(void **)(*pp + 0x2f0), 0x16);
    func_020895a0(8, 0x14000, 0x98000, n, 1, v, zero, zero, zero);
}

void func_020899e8(s32 arg0) {
    u8 **pp = &data_0216010c;
    s32 zero = 0;
    s32 n = 50;
    s32 v;
    func_020a8810(*(void **)(*pp + 0x340), 0x18);
    v = (u16)(arg0 + 1);
    func_020895a0(9, 0x12000, 0x86000, n, 8, v, zero, zero, zero);
    func_020a8810(*(void **)(*pp + 0x2f0), 0x16);
    func_020895a0(8, 0x14000, 0x98000, n, 9, v, zero, zero, zero);
}

void func_02089a98(void) {
    u8 **pp = &data_0216010c;
    s32 i;
    func_020a994c(*pp + 0x2f4);
    func_020a994c(*pp + 0x344);
    for (i = 0; i < 7; i++) {
        func_020a994c(*pp + 0x74 + i * 0x50);
    }
}

BOOL func_02089ae4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 x1 = arg0 + arg2;
    u16 x = data_02162908[0];
    u16 y = data_02162908[1];
    s32 y1 = arg1 + arg3;
    s32 ret;
    if (x >= arg0 && x <= x1 && y >= arg1 && y <= y1) {
        ret = 1;
    } else {
        ret = 0;
    }
    return !!ret;
}

s32 func_02089b38(Unk_02089b38 *arg0, Unk_02089b38 *arg1)
{
  Unk_02089b38 a;
  int new_var;
  s16 new_var2;
  Unk_02089b38 b;
  a = *arg0;
  b = *arg1;
  new_var2 = a.field_2a;
  if (a.field_2a < b.field_2a)
  {
    return -1;
  }
  new_var = new_var2 > b.field_2a;
  if (new_var)
  {
    return 1;
  }
  return 0;
}

