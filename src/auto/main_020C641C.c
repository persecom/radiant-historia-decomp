/* 33 functions from 0x020C641C to 0x020C7408 (main), found by ds-decomp. */
#include "common.h"
s32 func_020c6d78(void *arg0);
void func_020c6da0(void *arg0);
s32 func_020c6db4(void);
s32 func_020c6dbc(u8 *arg0);
void func_020c6de0(void *arg0);
s32 func_020c6df4(u8 *arg0);
void func_020c6f04(u8 *arg0, u16 arg1);
void func_020c6f0c(u8 *arg0, u16 arg1);
s32 func_020c6f14(u8 *arg0);
void func_020c706c(u8 *arg0, u8 arg1);
void func_020c7074(u8 *arg0, u8 arg1, u8 arg2);
s32 func_020c7080(void);
void func_020c7088(u8 *arg0, u8 arg1);
s32 func_020c71bc(u8 *arg0);
void func_020c71d8(void *arg0);
s32 func_020c71ec(u8 *p);
s32 func_020c7384(void);
typedef struct { s16 x,y,w,h; } Unk_020c71ec_Rect;

extern void func_0210c5dc(void *);
extern void *func_020c641c();
extern u32 data_02155c3c;
extern void *func_0210c594(u32,u32);
extern s32 func_021112b0();
extern s32 func_021110d0();
extern s32 func_0211128c();
extern s32 func_021110a8();
extern s32 func_020c8b90();
extern s32 func_020c8ba0();
extern s32 func_020c8bb4();
extern s32 func_020c8268();
extern s32 func_020c8278();
extern s32 func_020c82a8();
extern s32 func_020c8588();
extern s32 func_020c8590();
extern s32 func_020c862c();
extern s32 func_020c8634();
extern s32 func_020c8650();
extern s32 func_020c8624();
extern s32 func_020c85ac();
extern s32 func_020c77d8();
extern s32 func_020c7818();
extern s32 func_020c786c();
extern s32 func_020c7fe4();
extern s32 func_020c7ff4();
extern s32 func_020c805c();
extern s32 func_020c80ac();
extern s32 func_020c8124();
extern s32 func_020c8008();
extern s32 func_020c7604();
extern s32 func_020c760c();
extern s32 func_020c812c();
extern s32 func_020c813c();
extern s32 func_020c8150();
extern s32 func_020c7440();
extern s32 func_020c7448();
extern s32 func_020c745c();
extern s32 func_02112ae8();
extern s32 func_02112c94();
extern s32 func_02112ce0();
extern s32 func_02112d64();
extern s32 func_02112d74();
extern s32 func_02112cf4();
extern s32 func_02112d88();
extern s32 func_02110b94();
extern s32 func_0211104c();
extern s32 func_0211129c();
extern s32 func_021111f4();
extern s32 func_02111674();
extern s32 func_02111708();
extern s32 func_021117b0();
extern s32 func_021117dc();
extern s32 func_02111a18();
extern s32 func_02111a28();
extern s32 func_02111a3c();
extern s32 func_02112110();
extern s32 func_02112198();
extern s32 func_02112214();
extern s32 func_0211223c();
extern s32 func_02112554();
extern s32 func_02112564();
extern s32 func_02112578();
extern s32 func_021100e4();
extern s32 func_021101cc();
extern s32 func_02110228();
extern s32 func_0211023c();
extern s32 func_02110288();
extern s32 func_02110340();
extern s32 func_02110350();
extern s32 func_02110364();
extern s32 func_02110428();
extern s32 func_02110464();
extern s32 func_021104c0();
extern s32 func_021104d4();
extern s32 func_02110868();
extern s32 func_02110878();
extern s32 func_0211088c();
extern s32 func_02112690();
extern s32 func_021128c4();
extern s32 func_021128d4();
extern s32 func_021128f4();
extern s32 func_020c87a4();
extern s32 func_020c87f8();
extern s32 func_020c885c();
extern s32 func_020c8948();
extern s32 func_020c8958();
extern s32 func_020c8b88();
extern s32 func_020c8a14();
extern s32 func_020c896c();
extern s32 func_020c8a6c();
extern s32 func_020c8a08();
extern s32 func_021128fc();
extern s32 func_02112ac0();
extern s32 func_02112ae0();
extern s32 func_020c6324();
extern s32 func_020c636c();
extern s32 func_020c6334();
extern s32 func_020c6348();
extern s32 func_020c6414();
extern s32 func_020c8c08();
extern s32 func_020c8d24();
extern s32 func_020c8d70();
extern s32 func_020c8d98();
extern s32 func_020c8ec0();
extern s32 func_020c8ed0();
extern s32 func_020c8e5c();
extern s32 func_020ba78c();
extern s32 func_020ba7f8();
extern s32 func_020baba8();
extern s32 func_020babc8();
extern s32 func_020c874c();
extern s32 func_020c8780();
extern s32 func_020c7438();
extern void func_020c738c(void *, s32, s32);
extern s32 func_020c73c0();
extern void func_021098ac(void *);
extern void func_020a3bbc(u16);
extern s16 data_02160220[10];
extern s16 data_02162908[4];
extern u16 data_021628f8;
extern u16 data_021626aa;
void func_020c6ef4(u8 *arg0);
s32 func_020c6e40(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
void func_020c6e2c(void *, void *);
void *func_020c641c(u32 type) {
    void **p=0;
    switch(type) {
case 0:
    p=func_0210c594(0x30,data_02155c3c);
    break;
case 1:
    p=func_0210c594(0x4c,data_02155c3c);
    p[0]=(void *)func_020c6dbc;
    p[2]=(void *)func_020c6df4;
    p[1]=(void *)func_020c6de0;
    p[4]=(void *)func_020c6f04;
    p[5]=(void *)func_020c6f0c;
    p[6]=(void *)func_020c6f14;
    p[8]=(void *)func_020c706c;
    p[9]=(void *)func_020c7074;
    p[10]=(void *)func_020c7080;
    p[7]=(void *)func_020c7088;
    break;
case 2:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_020c71bc;
    p[1]=(void *)func_020c71d8;
    p[2]=(void *)func_020c71ec;
    p[4]=(void *)func_020c6f04;
    p[5]=(void *)func_020c6f0c;
    p[6]=(void *)func_020c6f14;
    p[8]=(void *)func_020c706c;
    p[9]=(void *)func_020c7074;
    p[10]=(void *)func_020c7384;
    p[7]=(void *)func_020c7088;
    break;
case 3:
    p=func_0210c594(0x5c,data_02155c3c);
    p[0]=(void *)func_020c8b90;
    p[1]=(void *)func_020c8ba0;
    p[3]=(void *)func_020c8bb4;
    p[2]=(void *)func_020c71ec;
    p[4]=(void *)func_020c6f04;
    p[5]=(void *)func_020c6f0c;
    p[6]=(void *)func_020c6f14;
    p[8]=(void *)func_020c706c;
    p[9]=(void *)func_020c7074;
    p[10]=(void *)func_020c7384;
    p[7]=(void *)func_020c7088;
    break;
case 4:
    p=func_0210c594(0x5c,data_02155c3c);
    p[0]=(void *)func_020c8268;
    p[1]=(void *)func_020c8278;
    p[2]=(void *)func_020c82a8;
    p[4]=(void *)func_020c8588;
    p[5]=(void *)func_020c8590;
    p[8]=(void *)func_020c862c;
    p[9]=(void *)func_020c8634;
    p[6]=(void *)func_020c8650;
    p[10]=(void *)func_020c8624;
    p[7]=(void *)func_020c85ac;
    break;
case 5:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_020c77d8;
    p[1]=(void *)func_020c7818;
    p[2]=(void *)func_020c786c;
    p[4]=(void *)func_020c7fe4;
    p[5]=(void *)func_020c7ff4;
    p[6]=(void *)func_020c6f14;
    p[8]=(void *)func_020c805c;
    p[9]=(void *)func_020c80ac;
    p[10]=(void *)func_020c8124;
    p[7]=(void *)func_020c8008;
    break;
case 6:
    p=func_0210c594(0x34,data_02155c3c);
    p[0]=(void *)func_020c7604;
    p[1]=(void *)func_020c760c;
    break;
case 7:
    p=func_0210c594(0x3c,data_02155c3c);
    p[0]=(void *)func_020c812c;
    p[1]=(void *)func_020c813c;
    p[3]=(void *)func_020c8150;
    break;
case 8:
    p=func_0210c594(0x3c,data_02155c3c);
    p[0]=(void *)func_020c7440;
    p[1]=(void *)func_020c7448;
    p[3]=(void *)func_020c745c;
    break;
case 10:
    p=func_0210c594(0x38,data_02155c3c);
    p[0]=(void *)func_02112ae8;
    p[1]=(void *)func_02112c94;
    p[2]=(void *)func_02112ce0;
    p[4]=(void *)func_02112d64;
    p[5]=(void *)func_02112d74;
    p[9]=(void *)func_02112cf4;
    p[6]=(void *)func_02112d88;
    break;
case 11:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_02110b94;
    p[1]=(void *)func_0211104c;
    p[2]=(void *)func_021110a8;
    p[4]=(void *)func_0211128c;
    p[5]=(void *)func_0211129c;
    p[9]=(void *)func_021111f4;
    p[6]=(void *)func_021110d0;
    p[7]=(void *)func_021112b0;
    break;
case 12:
    p=func_0210c594(0x8c,data_02155c3c);
    p[0]=(void *)func_02111674;
    p[1]=(void *)func_02111708;
    p[2]=(void *)func_021117b0;
    p[3]=(void *)func_021117dc;
    p[4]=(void *)func_02111a18;
    p[5]=(void *)func_02111a28;
    p[7]=(void *)func_02111a3c;
    break;
case 13:
    p=func_0210c594(0x9c,data_02155c3c);
    p[0]=(void *)func_02112110;
    p[1]=(void *)func_02112198;
    p[2]=(void *)func_02112214;
    p[3]=(void *)func_0211223c;
    p[4]=(void *)func_02112554;
    p[5]=(void *)func_02112564;
    p[7]=(void *)func_02112578;
    break;
case 14:
    p=func_0210c594(0x40,data_02155c3c);
    p[0]=(void *)func_021100e4;
    p[1]=(void *)func_021101cc;
    p[2]=(void *)func_02110228;
    p[6]=(void *)func_0211023c;
    p[9]=(void *)func_02110288;
    p[4]=(void *)func_02110340;
    p[5]=(void *)func_02110350;
    p[7]=(void *)func_02110364;
    break;
case 15:
    p=func_0210c594(0x78,data_02155c3c);
    p[0]=(void *)func_02110428;
    p[1]=(void *)func_02110464;
    p[2]=(void *)func_021104c0;
    p[3]=(void *)func_021104d4;
    p[4]=(void *)func_02110868;
    p[5]=(void *)func_02110878;
    p[7]=(void *)func_0211088c;
    break;
case 16:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_02112690;
    p[1]=(void *)func_0211104c;
    p[2]=(void *)func_021110a8;
    p[4]=(void *)func_0211128c;
    p[5]=(void *)func_0211129c;
    p[9]=(void *)func_021111f4;
    p[6]=(void *)func_021110d0;
    p[7]=(void *)func_021112b0;
    break;
case 17:
    p=func_0210c594(0x9c,data_02155c3c);
    p[0]=(void *)func_021128c4;
    p[1]=(void *)func_021128d4;
    p[2]=(void *)func_02112214;
    p[3]=(void *)func_0211223c;
    p[4]=(void *)func_02112554;
    p[5]=(void *)func_02112564;
    p[10]=(void *)func_021128f4;
    p[7]=(void *)func_02112578;
    break;
case 18:
    p=func_0210c594(0x9c,data_02155c3c);
    p[0]=(void *)func_020c87a4;
    p[1]=(void *)func_020c87f8;
    p[2]=(void *)func_020c885c;
    p[4]=(void *)func_020c8948;
    p[5]=(void *)func_020c8958;
    p[10]=(void *)func_020c8b88;
    p[8]=(void *)func_020c8a14;
    p[7]=(void *)func_020c896c;
    p[9]=(void *)func_020c8a6c;
    p[6]=(void *)func_020c8a08;
    break;
case 19:
    p=func_0210c594(0x60,data_02155c3c);
    p[0]=(void *)func_021128fc;
    p[1]=(void *)func_02112ac0;
    p[2]=(void *)func_020c885c;
    p[4]=(void *)func_020c8948;
    p[5]=(void *)func_020c8958;
    p[10]=(void *)func_02112ae0;
    p[6]=(void *)func_020c8a08;
    p[8]=(void *)func_020c8a14;
    p[7]=(void *)func_020c896c;
    p[9]=(void *)func_020c8a6c;
    break;
case 9:
    p=func_0210c594(0x50,data_02155c3c);
    p[0]=(void *)func_020c6324;
    p[2]=(void *)func_020c636c;
    p[1]=(void *)func_020c6334;
    p[4]=(void *)func_020c6f04;
    p[5]=(void *)func_020c6f0c;
    p[6]=(void *)func_020c6f14;
    p[8]=(void *)func_020c706c;
    p[9]=(void *)func_020c7074;
    p[7]=(void *)func_020c7088;
    p[3]=(void *)func_020c6348;
    p[10]=(void *)func_020c6414;
    break;
case 20:
    p=func_0210c594(0x60,data_02155c3c);
    p[0]=(void *)func_020c8c08;
    p[1]=(void *)func_020c8d24;
    p[2]=(void *)func_020c8d70;
    p[3]=(void *)func_020c8d98;
    p[4]=(void *)func_020c8ec0;
    p[5]=(void *)func_020c8ed0;
    p[7]=(void *)func_020c8e5c;
    break;
case 21:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_020ba78c;
    p[1]=(void *)func_0211104c;
    p[2]=(void *)func_021110a8;
    p[4]=(void *)func_0211128c;
    p[5]=(void *)func_0211129c;
    p[9]=(void *)func_021111f4;
    p[6]=(void *)func_021110d0;
    p[7]=(void *)func_021112b0;
    break;
case 22:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_020ba7f8;
    p[1]=(void *)func_0211104c;
    p[2]=(void *)func_021110a8;
    p[4]=(void *)func_0211128c;
    p[5]=(void *)func_0211129c;
    p[9]=(void *)func_021111f4;
    p[6]=(void *)func_021110d0;
    p[7]=(void *)func_021112b0;
    break;
case 23:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_020baba8;
    p[1]=(void *)func_0211104c;
    p[2]=(void *)func_021110a8;
    p[4]=(void *)func_0211128c;
    p[5]=(void *)func_0211129c;
    p[9]=(void *)func_021111f4;
    p[6]=(void *)func_021110d0;
    p[7]=(void *)func_021112b0;
    break;
case 24:
    p=func_0210c594(0x54,data_02155c3c);
    p[0]=(void *)func_020babc8;
    p[1]=(void *)func_0211104c;
    p[2]=(void *)func_021110a8;
    p[4]=(void *)func_0211128c;
    p[5]=(void *)func_0211129c;
    p[9]=(void *)func_021111f4;
    p[6]=(void *)func_021110d0;
    p[7]=(void *)func_021112b0;
    break;
case 25:
    p=func_0210c594(0x50,data_02155c3c);
    p[0]=(void *)func_020c874c;
    p[2]=(void *)func_020c6df4;
    p[1]=(void *)func_020c8780;
    p[4]=(void *)func_020c6f04;
    p[5]=(void *)func_020c6f0c;
    p[6]=(void *)func_020c6f14;
    p[8]=(void *)func_020c706c;
    p[9]=(void *)func_020c7074;
    p[10]=(void *)func_020c7080;
    p[7]=(void *)func_020c7088;
    break;
case 26:
    p=func_0210c594(0x4c,data_02155c3c);
    p[0]=(void *)func_020c6dbc;
    p[2]=(void *)func_020c6df4;
    p[1]=(void *)func_020c6de0;
    p[4]=(void *)func_020c6f04;
    p[5]=(void *)func_020c6f0c;
    p[6]=(void *)func_020c6f14;
    p[8]=(void *)func_020c706c;
    p[9]=(void *)func_020c7074;
    p[10]=(void *)func_020c7080;
    p[7]=(void *)func_020c7088;
    break;
    }
    if(!p[0])p[0]=(void *)func_020c6d78;
    if(!p[1])p[1]=(void *)func_020c6da0;
    if(!p[2])p[2]=(void *)func_020c6db4;
    if(!p[6])p[6]=(void *)func_020c7438;
    return p;
}

void func_020c6d4c(u8 *arg0) {
    (*(void (**)(void *))(arg0 + 4))(arg0);
}

void *func_020c6d5c(u32 type) {
    void *ptr = ((void *(*)(u32))func_020c641c)(type);
    (*(void (**)(void *))ptr)(ptr);
    return ptr;
}

s32 func_020c6d78(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    func_020c738c(arg0, 0, 0);
    return 0;
}

void func_020c6da0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6db4(void) {
    return 1;
}

s32 func_020c6dbc(u8 *arg0) {
    arg0[0x42] = 0x1f;
    arg0[0x43] = 0x2d;
    *(void **)(arg0 + 0x48) = (void *)func_020c6ef4;
    return 0;
}

void func_020c6de0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6df4(u8 *arg0) {
    u8 val = arg0[0x42];
    if (val == 0) {
        return 0;
    }
    *(volatile u32 *)0x040004a4 = (val << 16) | 0xc0;
    func_020c6e2c(arg0, arg0 + 0x30);
    return 0;
}

void func_020c6e2c(void *arg0, void *arg1) {
    func_020c6e40(arg0, arg1, 0, 0);
}

#pragma scheduling off
s32 func_020c6e40(void *arg0, u8 *__restrict arg1, s32 arg2, s32 arg3) {
    if (func_020c73c0() == 0) {
        return 2;
    }
    (*(void (**)(void *))(arg1 + 0x18))(arg0);
    data_02160220[0] = 1;
    data_02160220[1] = *(s16 *)(arg1 + 2);
    data_02160220[2] = *(s16 *)(arg1 + 4);
    data_02160220[3] = *(s16 *)(arg1 + 6);
    data_02160220[4] = *(s16 *)(arg1 + 8);
    data_02160220[5] = arg2 + (*(s16 *)(arg1 + 0xa) + arg1[0x14]);
    data_02160220[6] = arg3 + (*(s16 *)(arg1 + 0xc) + arg1[0x15]);
    data_02160220[7] = arg1[0x13];
    data_02160220[8] = *(s16 *)(arg1 + 0xe);
    data_02160220[9] = *(s16 *)(arg1 + 0x10);
    func_021098ac(data_02160220);
    return 0;
}
void func_020c6ef4(u8 *arg0) {
    func_020a3bbc(*(u16 *)(arg0 + 0x30));
}

void func_020c6f04(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
}

void func_020c6f0c(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3c) = arg1;
}

extern s32 func_020c73d8();
extern s32 func_020c6fe4(u8 *);
extern s32 func_020c7048(u8 *);
extern void func_020c7090(u8 *);
s32 func_020c6f14(u8 *arg0) {
    u8 val = func_020c73d8(arg0);
    if (func_020c73d8(arg0) != 0) {
        if (func_020c7048(arg0) == 0) {
            return 1;
        }
        func_020c738c(arg0, 0, 2);
        func_020c738c(arg0, 0, 0x10);
        return 0;
    }
    if (data_021628f8 == 0) {
        return 1;
    }
    if (((u16 *)data_02162908)[2] == 0) {
        return 1;
    }
    if (func_020c6fe4(arg0) != 0) {
        goto two;
    }
    if (val == 0) {
        func_020c7090(arg0);
        func_020c738c(arg0, 0x10, 0x10);
    }
    return 0;
two:
    return 2;
}

s32 func_020c6fe4(u8 *arg0)
{
  s32 py = data_02162908[1];
  s32 y = *((s16 *) (arg0 + 0x3c));
  s32 y2 = y + (*((s16 *) (arg0 + 0x40)));
  s32 x = *((s16 *) (arg0 + 0x3a));
  s32 x2 = (*((s16 *) (arg0 + 0x3e))) + x;
  s32 px = data_02162908[0];
  u8 inside = (((px >= (*((s16 *) (arg0 + 0x3a)))) && (px <= x2)) && (py >= y)) && (py <= y2);
  s32 ret = 0;
  if (inside == 0) {
    ret = 1;
  }
  return ret;
}

s32 func_020c7048(u8 *arg0) {
    if (arg0[0x46] != 0) {
        arg0[0x46]--;
    } else {
        return 1;
    }
    return 0;
}

void func_020c706c(u8 *arg0, u8 arg1) {
    arg0[0x42] = arg1;
}

void func_020c7074(u8 *arg0, u8 arg1, u8 arg2) {
    arg0[0x44] = arg1;
    arg0[0x45] = arg2;
}

s32 func_020c7080(void) {
    return 1;
}

void func_020c7088(u8 *arg0, u8 arg1) {
    arg0[0x43] = arg1;
}

void func_020c70a0(u8 *arg0, u8 arg1);
void func_020c7090(u8 *arg0) {
    func_020c70a0(arg0, 4);
}

void func_020c70a0(u8 *arg0, u8 arg1) {
    func_020c738c(arg0, 2, 2);
    arg0[0x46] = arg1;
}

s32 func_020c70c0(u8 *arg0, u32 arg1) {
    if (((u16 *)data_02162908)[2] == 0) {
        goto block_c;
    }
    if (data_021628f8 == 0) {
        goto block_a;
    }
    if (func_020c6fe4(arg0) != 0) {
        goto block_a;
    }
    func_020c7090(arg0);
    func_020c738c(arg0, 0x10, 0x10);
    arg0[0x47] = 0xc;
    return 1;
block_a:
    if (func_020c6fe4(arg0) != 0) {
        goto block_b;
    }
    if (arg0[0x47] != 0) {
        goto decrement;
    }
    if (func_020c73d8(arg0) == 0) {
        goto block_b;
    }
    return 1;
decrement:
    arg0[0x47]--;
    return 0;
block_c:
    if ((data_021626aa & arg1) != 0) {
        return 0;
    }
block_b:
    if (func_020c7048(arg0) != 0) {
        func_020c738c(arg0, 0, 2);
        func_020c738c(arg0, 0, 0x10);
    }
    return 0;
}

s32 func_020c71bc(u8 *arg0) {
    func_020c6dbc(arg0);
    *(s32 *)(arg0 + 0x4c) = 1;
    return 0;
}

void func_020c71d8(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c71ec(u8 *p) {
s32 n=*(s32*)(p+0x4c);
u8 count=0;
Unk_020c71ec_Rect src,dst;
u32 i;
if(n!=0) { while(n!=0){count++;n/=10;} } else count=1;
src=*(Unk_020c71ec_Rect*)(p+0x32);
dst=*(Unk_020c71ec_Rect*)(p+0x3a);
*(volatile u32*)0x40004a4=(p[0x42]<<16)|0xc0;
n=*(s32*)(p+0x4c); if(n<0)n=-n;
for(i=0;i<count;i++){
u8 digit=n%10;
n/=10;
*(s16*)(p+0x32)=src.x+digit*src.w;
switch(p[0x50]){
case 0:*(s16*)(p+0x3a)=dst.x+dst.w*(count-i-1);break;
case 1:*(s16*)(p+0x3a)=dst.x-i*dst.w;break;
case 2:*(s16*)(p+0x3a)=dst.x-i*dst.w;if(i!=0)(*(s16*)(p+0x3a))++;break;
}
func_020c6e2c(p,p+0x30);
}
*(s16*)(p+0x32)=src.x;
*(s16*)(p+0x3a)=dst.x;
return 0;
}

s32 func_020c7384(void) {
    return 2;
}

void func_020c738c(void *arg0, s32 arg1, s32 arg2) {
    *(volatile u16 *)((u8 *)arg0 + 0x2c) &= (u16)~arg2;
    *(volatile u16 *)((u8 *)arg0 + 0x2c) |= (u16)(arg1 & arg2);
}

u16 func_020c73b8(u16 *arg0) {
    return arg0[0x16];
}

s32 func_020c73c0(u16 *arg0) {
    return (func_020c73b8(arg0) & 1) == 0;
}

s32 func_020c73d8(u16 *arg0) {
    return (func_020c73b8(arg0) & 2) != 0;
}

s32 func_020c73f0(u16 *arg0) {
    return (func_020c73b8(arg0) & 0x10) != 0;
}

