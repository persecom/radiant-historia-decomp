/* 34 functions from 0x020B34D0 to 0x020B44CC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020b3890(void);
extern u8 *func_020b3fd8(void);
extern void func_020b3a9c();
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
extern u8 data_021601e0;
void func_020b3744(u8 arg0) {
    data_021601e0 = arg0;
}

u8 func_020b3754(void) {
    return data_021601e0;
}

void func_020b3764(void) {
    data_021601e0 = 0;
}

extern u8 *func_02021f10(u8);
u8 *func_020b3880(void) {
    return ((u8 **)&data_021601e0)[1];
}

u8 *func_020b3890(void) {
    return func_020b3880() + 0x708;
}

u8 *func_020b38a4(s32 arg0) {
    return func_02021f10((func_020b3890() + arg0)[0x25c]);
}

void func_020b38c0(s32 arg0) {
    u8 *p1 = func_020b3890();
    u8 *p2 = func_020b38a4(arg0);
    func_020b3a9c();
    func_02009008(p2, p1, 0x128);
    func_02009008(p2, p1 + 0x128, 0x128);
}

void func_020b3908(void) {
    func_020b3890();
}

u8 *func_020b3914(void) {
    return func_020b3890() + 0x128;
}

u16 func_020b39f4(u8 *arg0, u32 arg1) {
    u16 res = 0;
    if (arg1 < 5) {
        if (arg1 == 0) {
            res = *(u16 *)(arg0 + 0x38);
        } else if (arg1 == 1) {
            res = *(u16 *)(arg0 + 0x3a);
        } else {
            res = *(u16 *)(arg0 + 0x3c + (arg1 - 2) * 2);
        }
    }
    return res;
}

s32 func_020b3a28(void)
{
  int new_var;
  u8 *r4 = func_020b3880();
  u8 *r5 = func_020b3fd8();
  if ((((*((s32 *) (r4 + 0x3438))) == 0) && ((*((u32 *) (r5 + 0x2aa4))) <= 2)) && ((*((u16 *) (func_020b4044() + 4))) != 0))
  {
    new_var = 2;
    if ((*((s32 *) (r5 + 0x2aa4))) != 2)
    {
      return 1;
    }
    if ((*((u8 *) (r4 + 0x3442))) == new_var)
    {
      return 1;
    }
  }
  return 0;
}

void func_020b3cfc(void) {
    s32 count = 0;
    u8 *base = func_020b3890();
    func_02008f74(base, 0, 0x264);
    {
        u8 i;
        for (i = 0; i < 7; i++) {
            u8 *node = func_020bd438(i);
            if (node != NULL && (*(u16 *)node & 1) != 0) {
                if (func_02021f10(node[2]) != NULL) {
                    base[0x25c + count] = node[2];
                    count++;
                }
            }
        }
    }
    *(u32 *)(base + 0x254) = count;
    *(u32 *)(base + 0x250) = 0;
    *(u32 *)(base + 0x258) = (u32)func_0202214c();
    func_020b38c0(*(u32 *)(base + 0x250) & 0xff);
}

s32 func_020b3d88(void) {
    s32 r = 0;
    u8 *base1 = func_020b3880();
    func_020b3890();
    u8 *base3 = func_020b3fd8();
    if (*(u32 *)(base1 + 0x3438) == 0) {
        if (*(u8 *)(base1 + 0x3440) != 0) {
            if (*(u32 *)(base3 + 0x2aa4) != 3) {
                r = 1;
            }
        }
    }
    return r;
}

s32 func_020b3ef4(s32 arg0) {
    s32 r = 0;
    if ((u32)(func_020b3f14(arg0) - 1) <= 2) {
        r = 1;
    }
    return r;
}

s32 func_020b3f14(u32 arg0) {
    s32 res = -1;
    if (arg0 != 0 && arg0 < 0x385) {
        if (arg0 >= 1 && arg0 < 0x33) {
            res = 0;
        } else if (arg0 >= 0xc9 && arg0 < 0x10f) {
            res = 4;
        } else if (arg0 >= 0x12d && arg0 < 0x1a9) {
            res = 1;
        } else if (arg0 >= 0x208 && arg0 < 0x26c) {
            res = 2;
        } else if (arg0 >= 0x2bd && arg0 < 0x31e) {
            res = 3;
        }
    }
    return res;
}

void func_020b3fb4(u32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 & 1) {
        *arg2 = 0;
    } else {
        *arg2 = 3;
    }
    if (arg0 & 8) {
        *arg1 = 4;
    } else {
        *arg1 = 3;
    }
}

extern void func_020b3a9c(void);
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
