/* 11 functions from 0x0209DFDC to 0x0209EE60 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;
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
void func_0209e688(void) {
u8 *p=*(u8 **)(data_021600b0+0x1c0);
Unk_0209e688 buf=data_02142bc8;
u16 i=0, count=0;
*(volatile u32 *)0x040004a4=0x1f00c0;
for(;i<7;i++) {
if(p[0x21+i]) {
if(p[0x8f]==i) {
if(p[0x20]==3) func_020a3bbc(3);
else func_020a3bbc(2);
} else func_020a3bbc(1);
buf.field[5]=*(s32 *)(p+0x28+i*4)>>12;
buf.field[6]=194-(p[0x90]-count)*25;
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

