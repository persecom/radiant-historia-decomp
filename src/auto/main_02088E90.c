/* 13 functions from 0x02088E90 to 0x02089BB0 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02162908[4];
extern u8 *data_0216010c;
extern void func_020a8810(void *, u32);
extern void func_020895a0();
extern void func_020a994c(void *);

typedef struct {
    u32 pad[10];
    u16 pad28;
    s16 field_2a;
    u32 pad2[14];
} Unk_02089b38;

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

void func_02089550(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_02089578(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
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

