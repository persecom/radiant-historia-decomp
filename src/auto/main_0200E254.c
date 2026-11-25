/* 25 functions from 0x0200D63C to 0x0200E5E8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 pad0[4]; void (*callback)(s32,s32,s32); u8 pad8[8]; u16 f10, f12; u8 *entries; u16 count; u8 pad1a[0x1a]; u16 f34, f36; volatile u16 f38, f3a; } State0200dcd4;

extern u8 data_0215f000[];
extern s32 data_0215f01c[];
typedef struct { u16 x,y,z,w; } Coord0200e138;
extern s32 func_0200a6e4(s32,u32,s32);
static inline s32 Send0200dcd4(u32 a, u32 b) {
 if(func_0200a6e4(6,(b&255)|0x02000100,0)<0) return 0;
 if(func_0200a6e4(6,a|0x01010000,0)<0) return 0;
 return 1;
}
extern u8 data_0215efa0[];
extern u32 data_0215effc;
extern void func_0200b988(void *, void *, u32, u32, u32);
extern void func_0200d63c();
extern void func_0200bc24(void);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_0200d868(void);
extern s32 func_0200df4c(void *, u16, u16, u8, u8, u16, u16, u8, u8);
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData0200dddc;
extern void func_0200dddc();
extern void func_0200e138(u32, u32);
extern u32 data_0215f068;
extern u32 data_02145c18;
extern s32 func_0200818c(void);
extern s32 func_02008180(void);
extern void func_0200a75c(void);
extern u8 data_0215f03c[];
extern void func_0200e320(u32);
extern void func_0200e418(u32, u32, u32);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern void func_0200e974(u32);

extern u32 data_0215ef98[];
extern u8 data_02145c0c[];
extern u8 data_02145c10[];
extern void func_0200f858(void);
extern u32 func_02005df8(void);
extern void func_0200b594(void *);
extern void func_0200b5b8(void *, void *, s32);
extern s32 func_020081e0(void);
extern u8 *func_0200f9a4(void);
extern void func_0200d4e0(void *, void *, s32);
extern void func_0200d3f4(void *, u32, u32, u32, u32, u32, void *, void *);
extern void func_0200d634(void *);
extern void func_0200b178(void *);
extern void func_0200d5a0(void);
extern void func_0200d558(void);
extern void func_0200d610(void);
extern void func_0200d624(void);
extern void func_0200d62c(void);

s32 func_0200a6e4(s32,u32,s32);
#pragma opt_propagation off

#pragma opt_propagation on

#pragma optimization_level 3

#pragma optimization_level 4

void func_0200e254(u16 arg0) {
    while (*(volatile u16 *)(data_0215f000 + 0x3a) & arg0) {
    }
}

u32 func_0200e26c(u32 arg0) {
    return *(u16 *)(data_0215f000 + 0x38) & arg0;
}

u32 func_0200e280(void) {
    return *(u32 *)0x02ffff90;
}

extern s32 func_0200df4c(void *, u16, u16, u8, u8, u16, u16, u8, u8);
extern void func_0200e138(u32, u32);
extern u32 data_0215f068;
extern u32 data_02145c18;
extern s32 func_0200818c(void);
extern s32 func_02008180(void);
extern void func_0200a75c(void);
void func_0200e290(void) {
    register u32 *flag = &data_0215f068;
    register volatile u16 *reg = (volatile u16 *)0x4000208;
    while (*flag != 0) {
        if ((data_02145c18 & 0x2) != 0 && func_0200818c() == 0x12) {
            goto call;
        }
        if ((data_02145c18 & 0x4) != 0 && func_02008180() == 0x80) {
            goto call;
        }
        if ((data_02145c18 & 0x8) != 0 && *reg == 0) {
            goto call;
        }
        continue;
    call:
        func_0200a75c();
    }
}

void func_0200e314(u32 val, u32 *ptr) {
    if (ptr != NULL) {
        *ptr = val;
    }
}

void func_0200e320(u32 arg0) {
    void (*cb)(u32, u32) = (void (*)(u32, u32))*(u32 *)(data_0215f03c + 0x30);
    u32 arg1 = *(u32 *)(data_0215f03c + 0x34);
    *(u32 *)(data_0215f03c + 0x2c) = 0;
    if (cb != NULL) {
        *(u32 *)(data_0215f03c + 0x30) = 0;
        cb(arg0, arg1);
    }
}

void func_0200e350(void) {
    volatile u32 v = *(volatile u32 *)0x02fffc3c;
    u32 cur;
    for (;;) {
        cur = *(volatile u32 *)0x02fffc3c;
        if (v != cur) {
            break;
        }
    }
}

void func_0200e384(void) {
    u32 reg;
    if (*(u16 *)data_0215f03c != 0) {
        return;
    }
    *(u16 *)data_0215f03c = 1;
    *(u32 *)(data_0215f03c + 0x2c) = 0;
    *(u32 *)(data_0215f03c + 0x30) = 0;
    func_0200a56c();
    if (func_0200a6c0(8, 1) == 0) {
        do {
            WaitByLoop(100);
        } while (func_0200a6c0(8, 1) == 0);
    }
    func_0200a674(8, (void *)func_0200e418);
    reg = *(u32 *)0x02fffc3c;
    *(u32 *)(data_0215f03c + 8) = reg;
    *(u32 *)(data_0215f03c + 4) = reg;
}

void func_0200e418(u32 arg0, u32 arg1, u32 arg2)
{
  u32 v = ((arg1 & 0x7f00) << 8) >> 16;
  if (arg2 != 0)
  {
    func_0200e320(((v == 0x61) || (v == 0x62)) ? (1) : (2));
    return;
  }
  switch (v)
  {
    case 0x61:
    {
      u8 *p = *((u8 **) (data_0215f03c + 0x38));
      if (p)
      {
        *((u16 *) p) = v;
      }
      v = 0;
      break;
    }

    case 0x60:
      v = 0;
      break;

    case 0x62:
      break;

    case 0x63:
      *((u32 *) (data_0215f03c + 0xc)) = 1;
      break;

  }

  func_0200e320(v);
}

extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern void func_0200e974(u32);
s32 func_0200e4a0(u32 *arg0, s32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    s32 irq = func_02008128();
    if (*(u32 *)(data_0215f03c + 0x2c) != 0) {
        func_0200813c(irq);
        return 1;
    }
    *(u32 *)(data_0215f03c + 0x2c) = 1;
    *(u32 *)(data_0215f03c + 0x38) = arg2;
    *(u32 *)(data_0215f03c + 0x30) = arg3;
    *(u32 *)(data_0215f03c + 0x34) = arg4;
    {
        s32 i;
        for (i = 0; i < arg1; i++) {
            func_0200e974(arg0[i]);
        }
    }
    func_0200813c(irq);
    return 0;
}
