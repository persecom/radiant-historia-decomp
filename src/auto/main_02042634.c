/* 1 function from 0x02042634 to 0x020437F0 (main), found by ds-decomp. */
#include "common.h"

s32 func_02021f10(s32);
void func_020a5138(void);
void func_020a3bbc(s32);
void func_021098ac(void *);
extern u8 data_021600a8[];
extern u32 data_02160204;
extern const u16 data_0213f294[10];
extern u32 data_021600f0;
extern u32 data_021600b8;
void func_021099f8(void *, s32);
extern const u16 data_0213f1a8[10];
extern u32 data_021600f0, data_021600b8, data_02160200;
void func_02042634(void) {
typedef struct { s16 v[10]; } Draw;
typedef struct { s16 v[7]; } Fill;
typedef struct { s16 v[9]; } Fade;
typedef struct { s32 xOffset; u8 *current; } Context;
extern const u16 data_0213f21c[10], data_0213f208[10];
extern const u16 data_0213f1e0[10], data_0213f1f4[10];
extern const u16 data_0213f244[10], data_0213f258[10];
extern const u16 data_0213f280[10], data_0213f2a8[10], data_0213f1cc[10];
extern const u16 data_0213f230[10], data_0213f26c[10], data_0213f2bc[10];
extern const u16 data_0213f1b8[9];
extern s32 data_02146324[4];
extern void func_020469ac(void);
extern void func_0204690c(u32, s32);
extern void func_02044ba0(u16);
extern u32 func_0207c578(void);
register Context *context = (Context *)(void *)data_021600a8;
register s32 zero = 0;
u8 *player = (u8 *)func_02021f10(zero);
volatile u32 *polygon = (volatile u32 *)0x040004a4;
Draw menu; Fill bars; Draw notice; Draw object; Draw hp; Draw mp;
Draw left; Draw rightDetail; Draw rightDetailText;
Draw leftDetail; Draw leftDetailText;
Draw other; Draw otherDetail; Draw otherDetailText; Fade fade;
if ((*(u8 *)((u8 *)data_02160204 + 0x12a)) & 2) return;
func_020a5138();
if ((*(u8 *)((u8 *)data_02160204 + 0x7e)) == zero) {
 u8 *current = context->current;
 u32 idle = (*(s32 *)(current + 0x7c));
 s32 i;
 menu = *(const Draw *)(const void *)data_0213f294;
 if ((*(s32 *)(current + 0x10)) == 6 && idle == zero) {
  func_020a3bbc(4);
  i = 0;
  menu.v[1] = i; menu.v[2] = i; menu.v[3] = 0x2f;
  menu.v[4] = 0x1b; menu.v[7] = 0x28a; menu.v[8] = 0x2f; menu.v[9] = 0x1b;
  for (; i < 3; i++) {
   if ((*(s8 *)(context->current + 0x36c)) != i)
    (*(volatile u32 *)0x04000480) = 0x4e73;
   else
    (*(volatile u32 *)0x04000480) = 0x7fff;
   menu.v[5] = i * 0x37 + 0x14;
   menu.v[6] = 0x18;
   func_021098ac(&menu);
  }
  (*(volatile u32 *)0x04000480) = 0x7fff;
  menu.v[1] = 0x32; menu.v[2] = 2; menu.v[3] = 9;
  menu.v[4] = 0xc; menu.v[7] = 0x294 - 9; menu.v[8] = 9; menu.v[9] = 0xc;
  menu.v[5] = (*(s8 *)(context->current + 0x36c)) * 0x37 + 0x29;
  menu.v[6] = 0x2e;
  func_021098ac(&menu);
 }
}
{
 u8 *g = context->current;
 if ((*(u8 *)(g + 0x334)) == 1 || (*(u8 *)(g + 0x335)) != 0) {
  bars = *(const Fill *)(const void *)data_0213f1a8;
  if ((*(u8 *)(g + 0x334)) != 0) {
   (*(u8 *)(g + 0x335))++;
   if ((*(u8 *)(context->current + 0x335)) > 8) (*(u8 *)(context->current + 0x335)) = 8;
  } else {
   (*(u8 *)(g + 0x335))--;
  }
  (*polygon) = 0x1f0080;
  bars.v[4] = 0x100; bars.v[5] = 0x10; bars.v[6] = zero; bars.v[1] = zero;
  bars.v[2] = (*(u8 *)(context->current + 0x335)) * 2 - 0x10;
  ((void (*)(void *))func_021099f8)(&bars);
  bars.v[1] = zero;
  bars.v[2] = 0xc0 - (*(u8 *)(context->current + 0x335)) * 2;
  ((void (*)(void *))func_021099f8)(&bars);
 }
}
notice = *(const Draw *)(const void *)data_0213f21c;
if ((*(u8 *)((u8 *)data_02160204 + 0x121)) & 1) {
 if (!((*(u8 *)((u8 *)data_02160204 + 0x121)) & 2)) func_020a3bbc(0x23);
 else func_020a3bbc(0x24);
 notice.v[7] = 0x2bc; notice.v[8] = 0x28;
 notice.v[1] = zero; notice.v[2] = zero;
 notice.v[3] = 0x28; notice.v[4] = 0xe; notice.v[9] = 0xe;
 notice.v[5] = 0xd8; notice.v[6] = 4;
 func_021098ac(&notice);
 (*(u8 *)((u8 *)data_02160204 + 0x121)) = zero;
}
func_020469ac();
func_0204690c((*(u16 *)((u8 *)data_021600b8 + 0x1a)), (*(u8 *)((u8 *)data_021600b8 + 0x18)));
(*polygon) = 0x1f0080;
{
 u8 *node;
 object = *(const Draw *)(const void *)data_0213f208;
 for (node = (*(u8 * *)(context->current + 0x8ac)); node != 0; node = (*(u8 * *)(node + 0xc))) {
  if ((*(u8 *)(node + 6)) != 0) {
   func_02044ba0((*(u16 *)(node + 4)));
   object.v[1] = zero; object.v[2] = zero;
   object.v[3] = 0x100; object.v[4] = 0xc0;
   object.v[8] = 0x100; object.v[9] = 0xc0;
   object.v[5] = zero; object.v[6] = zero;
   func_021098ac(&object);
  }
 }
}
{
 u32 flags = (*(s32 *)((u8 *)data_02160200 + 0x34));
 if ((flags & 0x10) && ((*(u8 *)(context->current + 0x3ac)) & 0x20) &&
  ((flags & 0x20) || (flags & 0x40) || (flags & 8) || (flags & 0x10))) {
  hp = *(const Draw *)(const void *)data_0213f1e0;
  (*polygon) = 0x1f0080;
  hp.v[5] -= (s16)((*(s32 *)(context->current + 0x780)) >> 12);
  if (func_0207c578() == 1) func_020a3bbc(9);
  else if ((*(u8 *)((*(u8 * *)((u8 *)data_021600f0 + 4)) + 0)) != 0) func_020a3bbc(8);
  else func_020a3bbc(7);
  func_021098ac(&hp);
  hp.v[5] += 8; hp.v[6] += 7; hp.v[3] = 0x14; hp.v[4] = 0x14;
  hp.v[7] += 1; hp.v[8] = 0x14; hp.v[9] = 0x14;
  if (func_0207c578() == 1) func_020a3bbc(0x13);
  else if ((*(u8 *)((*(u8 * *)((u8 *)data_021600f0 + 4)) + 0)) != 0) func_020a3bbc(0x12);
  else func_020a3bbc(0x11);
  func_021098ac(&hp);
 }
}
{
 u32 flags = (*(s32 *)((u8 *)data_02160200 + 0x34));
 if ((flags & 0x20) && ((*(u8 *)(context->current + 0x3ac)) & 0x20) &&
  ((flags & 0x20) || (flags & 0x40) || (flags & 8) || (flags & 0x10))) {
  mp = *(const Draw *)(const void *)data_0213f1f4;
  (*polygon) = 0x1f0080;
  mp.v[5] -= (s16)((*(s32 *)(context->current + 0x780)) >> 12);
  if ((*(u16 *)(player + 0x14)) == 0) func_020a3bbc(0xc);
  else if ((*(u8 *)((*(u8 * *)((u8 *)data_021600f0 + 0xc)) + 0)) != 0) func_020a3bbc(0xb);
  else func_020a3bbc(0xa);
  func_021098ac(&mp);
  mp.v[7] += 1; mp.v[5] += 8; mp.v[6] += 7;
  mp.v[3] = 0x14; mp.v[4] = 0x14; mp.v[8] = 0x14; mp.v[9] = 0x14;
  if ((*(u16 *)(player + 0x14)) == 0) func_020a3bbc(0x1c);
  else if ((*(u8 *)((*(u8 * *)((u8 *)data_021600f0 + 0xc)) + 0)) != 0) func_020a3bbc(0x1b);
  else func_020a3bbc(0x1a);
  func_021098ac(&mp);
 }
}
{
 u8 *g;
 u32 flags = (*(s32 *)((u8 *)data_02160200 + 0x34));
 if ((flags & 8) && ((g = context->current)[0x3ac] & 0x20) &&
  ((flags & 0x20) || (flags & 0x40) || (flags & 8) || (flags & 0x10))) {
  s16 baseY; u8 *selected; u8 *position; Draw *finalDetail;
  left = *(const Draw *)(const void *)data_0213f244;
  rightDetail = *(const Draw *)(const void *)data_0213f258;
  rightDetailText = *(const Draw *)(const void *)data_0213f280;
  leftDetail = *(const Draw *)(const void *)data_0213f2a8;
  leftDetailText = *(const Draw *)(const void *)data_0213f1cc;
  selected = (*(u8 * *)((u8 *)data_021600f0 + 8));
  if ((*(u8 *)(selected + 0)) == 1) (*(s32 *)(g + 0x880)) = 1;
  g = context->current;
  if ((*(s32 *)(g + 0x87c)) == 1) {
   position = (*(u8 * *)(g + 0x68));
   (*(s32 *)(g + 0x86c)) = (s16)(((*(u16 *)(g + 0x874)) * 0x95) / 6 - 0x95);
   if ((*(u16 *)(context->current + 0x874)) < 6) (*(u16 *)(context->current + 0x874))++;
   else (*(s32 *)(context->current + 0x884)) = 1;
   left.v[5] = (*(s32 *)(position + 0xfc)) - 0x4b + (*(s32 *)(context->current + 0x86c));
   left.v[6] = (*(s32 *)(position + 0x100)) - 0x49;
   baseY = left.v[6];
   (*polygon) = 0x1f0080;
   g = context->current;
   if ((*(s32 *)(g + 0x880)) == zero) {
    left.v[6] += (s16)(((*(u16 *)(g + 0x876)) * 17) / 3);
    left.v[9] = 35 + ((*(u16 *)(g + 0x876)) * -35) / 3;
   }
   (*(s32 *)(g + 0x88c)) = left.v[5] + 0x10 + data_02146324[0];
   (*(s32 *)(context->current + 0x894)) = left.v[5] + left.v[8] + 0x20 + context->xOffset;
   (*(s32 *)(context->current + 0x890)) = left.v[6] + data_02146324[2];
   (*(s32 *)(context->current + 0x898)) = left.v[6] + left.v[9] + data_02146324[1];
   if ((*(s32 *)(context->current + 0x888)) == 1) func_020a3bbc(0x10);
   else func_020a3bbc(0xf);
   func_021098ac(&left);
   left.v[6] = baseY + 7; left.v[5] += 8; left.v[7]++;
   left.v[3] = 0x14; left.v[4] = 0x14; left.v[8] = 0x14; left.v[9] = 0x14;
   g = context->current;
   baseY = left.v[6];
   if ((*(s32 *)(g + 0x880)) == zero) {
    left.v[6] += (s16)(((*(u16 *)(g + 0x876)) * 10) / 3);
    left.v[9] = 20 + ((*(u16 *)(g + 0x876)) * -20) / 3;
   }
   if ((*(s32 *)(g + 0x888)) == 1) func_020a3bbc(0x15);
   else func_020a3bbc(0x14);
   func_021098ac(&left);
   if ((*(u8 *)(selected + 0)) == 1 || (g = context->current)[0x879] == 1) {
    leftDetail.v[6] = baseY + 0xd;
    leftDetail.v[5] = left.v[5] + 0x1c;
    g = context->current;
    baseY = leftDetail.v[6];
    if ((*(s32 *)(g + 0x880)) == zero) {
     leftDetail.v[6] += (s16)(((*(u16 *)(g + 0x876)) * 7) / 3);
     leftDetail.v[9] = 15 + ((*(u16 *)(g + 0x876)) * -15) / 3;
    }
    (*(s32 *)(g + 0x89c)) = leftDetail.v[5] + data_02146324[0];
    (*(s32 *)(context->current + 0x8a4)) = leftDetail.v[5] + leftDetail.v[8] + context->xOffset;
    (*(s32 *)(context->current + 0x8a0)) = leftDetail.v[6] + data_02146324[2];
    (*(s32 *)(context->current + 0x8a8)) = leftDetail.v[6] + leftDetail.v[9] + data_02146324[1];
    func_020a3bbc(0x16);
    func_021098ac(&leftDetail);
    leftDetailText.v[6] = baseY;
    leftDetailText.v[7]++;
    leftDetailText.v[5] = leftDetail.v[5];
    g = context->current;
    if ((*(s32 *)(g + 0x880)) == zero) {
     (*(s32 *)(g + 0x884)) = zero;
     g = context->current;
     leftDetailText.v[6] += (s16)(((*(u16 *)(g + 0x876)) * 7) / 3);
     leftDetailText.v[9] = 14 + ((*(u16 *)(g + 0x876)) * -14) / 3;
     if ((*(u16 *)(g + 0x876)) < 3) (*(u16 *)(g + 0x876))++;
     else (*(s32 *)(g + 0x87c)) = zero;
    }
    func_020a3bbc(0x19);
    finalDetail = &leftDetailText;
   } else {
    rightDetail.v[6] = baseY + 0xd;
    rightDetail.v[5] = left.v[5] + 0x1c;
    baseY = rightDetail.v[6];
    if ((*(s32 *)(g + 0x880)) == zero) {
     rightDetail.v[6] += (s16)(((*(u16 *)(g + 0x876)) * 7) / 3);
     rightDetail.v[9] = 15 + ((*(u16 *)(g + 0x876)) * -15) / 3;
    }
    (*(s32 *)(g + 0x89c)) = rightDetail.v[5] + data_02146324[0];
    (*(s32 *)(context->current + 0x8a4)) = rightDetail.v[5] + rightDetail.v[8] + context->xOffset;
    (*(s32 *)(context->current + 0x8a0)) = rightDetail.v[6] + data_02146324[2];
    (*(s32 *)(context->current + 0x8a8)) = rightDetail.v[6] + rightDetail.v[9] + data_02146324[1];
    func_020a3bbc(0x17);
    func_021098ac(&rightDetail);
    rightDetailText.v[6] = baseY;
    rightDetailText.v[5] = rightDetail.v[5];
    rightDetailText.v[7]++;
    g = context->current;
    if ((*(s32 *)(g + 0x880)) == zero) {
     rightDetailText.v[6] += (s16)(((*(u16 *)(g + 0x876)) * 7) / 3);
     rightDetailText.v[9] = 14 + ((*(u16 *)(g + 0x876)) * -14) / 3;
     if ((*(u16 *)(g + 0x876)) < 3) (*(u16 *)(g + 0x876))++;
     else (*(s32 *)(g + 0x87c)) = zero;
    }
    func_020a3bbc(0x18);
    finalDetail = &rightDetailText;
   }
   func_021098ac(finalDetail);
  }
 }
}
{
 u8 *g;
 u32 flags = (*(s32 *)((u8 *)data_02160200 + 0x34));
 if ((flags & 4) && ((g = context->current)[0x3ac] & 0x20) &&
  ((flags & 0x20) || (flags & 0x40) || (flags & 8) || (flags & 0x10))) {
  s16 baseY; u8 *position;
  other = *(const Draw *)(const void *)data_0213f230;
  otherDetail = *(const Draw *)(const void *)data_0213f26c;
  otherDetailText = *(const Draw *)(const void *)data_0213f2bc;
  if ((*(s32 *)(g + 0x83c)) == 1) {
   s32 shift; u8 *current = context->current; s32 moving;
   shift = (*(s32 *)(g + 0x82c));
   moving = (*(s32 *)(current + 0x87c));
   position = (*(u8 **)(current + 0x68));
   if (moving == zero) {
    other.v[5] = (*(s32 *)(position + 0xfc)) - 0x4b + shift;
    other.v[6] = (*(s32 *)(position + 0x100)) - 0x49;
   } else {
    other.v[5] = (*(s32 *)(position + 0xfc)) - 0x2f + shift;
    other.v[6] = (*(s32 *)(position + 0x100)) - 0x5c;
   }
   baseY = other.v[6];
   (*polygon) = 0x1f0080;
   g = context->current;
   other.v[5] -= (s16)((*(s32 *)(g + 0x780)) >> 12);
   if ((*(s32 *)(g + 0x840)) == zero) {
    other.v[6] += (s16)(((*(u16 *)(g + 0x836)) * 17) / 3);
    other.v[9] = 35 + ((*(u16 *)(g + 0x836)) * -35) / 3;
   }
   (*(s32 *)(g + 0x84c)) = other.v[5] + 8 + data_02146324[0];
   (*(s32 *)(context->current + 0x854)) = other.v[5] + other.v[8] + 8 + context->xOffset;
   (*(s32 *)(context->current + 0x850)) = other.v[6] + data_02146324[2];
   (*(s32 *)(context->current + 0x858)) = other.v[6] + other.v[9] + data_02146324[1];
   if ((*(s32 *)(context->current + 0x848)) == 1) func_020a3bbc(0xe);
   else func_020a3bbc(0xd);
   func_021098ac(&other);
   other.v[6] = baseY + 7; other.v[5] += 8;
   other.v[3] = 0x14; other.v[4] = 0x14; other.v[8] = 0x14; other.v[9] = 0x14;
   other.v[7]++;
   g = context->current;
   baseY = other.v[6];
   if ((*(s32 *)(g + 0x840)) == zero) {
    other.v[6] += (s16)(((*(u16 *)(g + 0x836)) * 10) / 3);
    other.v[9] = 20 + ((*(u16 *)(g + 0x836)) * -20) / 3;
   }
   if ((*(s32 *)(g + 0x848)) == 1) func_020a3bbc(0x20);
   else func_020a3bbc(0x1f);
   func_021098ac(&other);
   otherDetail.v[6] = baseY + 0xd;
   baseY = otherDetail.v[6];
   otherDetail.v[5] = other.v[5] + 0x1c;
   g = context->current;
   if ((*(s32 *)(g + 0x840)) == zero) {
    otherDetail.v[6] += (s16)(((*(u16 *)(g + 0x836)) * 7) / 3);
    otherDetail.v[9] = 15 + ((*(u16 *)(g + 0x836)) * -15) / 3;
   }
   (*(s32 *)(g + 0x85c)) = otherDetail.v[5] + data_02146324[0];
   (*(s32 *)(context->current + 0x864)) = otherDetail.v[5] + otherDetail.v[8] + context->xOffset;
   (*(s32 *)(context->current + 0x860)) = otherDetail.v[6] + data_02146324[2];
   (*(s32 *)(context->current + 0x868)) = otherDetail.v[6] + otherDetail.v[9] + data_02146324[1];
   func_020a3bbc(0x21);
   func_021098ac(&otherDetail);
   otherDetailText.v[6] = baseY;
   otherDetailText.v[7]++;
   otherDetailText.v[5] = otherDetail.v[5];
   g = context->current;
   if ((*(s32 *)(g + 0x840)) == zero) {
    (*(s32 *)(g + 0x844)) = zero;
    g = context->current;
    otherDetailText.v[6] += (s16)(((*(u16 *)(g + 0x836)) * 7) / 3);
    otherDetailText.v[9] = 14 + ((*(u16 *)(g + 0x836)) * -14) / 3;
    (*(s32 *)(g + 0x844)) = zero;
    g = context->current;
    if ((*(u16 *)(g + 0x836)) < 3) (*(u16 *)(g + 0x836))++;
    else (*(s32 *)(g + 0x83c)) = zero;
   }
   func_020a3bbc(0x22);
   func_021098ac(&otherDetailText);
  }
 }
}
(*(s32 *)(context->current + 0x840)) = zero;
(*(s32 *)(context->current + 0x880)) = zero;
(*(s32 *)(context->current + 0x848)) = zero;
(*(s32 *)(context->current + 0x888)) = zero;
if ((*(u8 *)(context->current + 0x8b8)) != 0) {
 u8 *g;
 fade = *(const Fade *)(const void *)data_0213f1b8;
 g = context->current;
 fade.v[3] = (*(s16 *)(g + 0x8bc));
 fade.v[6] = (*(u8 *)(g + 0x8b9)) | ((*(u8 *)(g + 0x8ba)) << 5) | ((*(u8 *)(g + 0x8bb)) << 10);
 if ((*(u8 *)(g + 0x8b8)) < 0x1f) (*polygon) = 0x10080c0 | ((*(u8 *)(g + 0x8b8)) << 16);
 else (*polygon) = 0xc0 | ((*(u8 *)(g + 0x8b8)) << 16);
 ((void (*)(void *))func_021099f8)(&fade);
}
}
