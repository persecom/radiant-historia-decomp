/* 1 function from 0x020F6990 to 0x020FC50C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_021626e8[2];
extern u8 *data_02160200, *data_021600ac, *data_02160204;
extern s32 data_02146330;
extern const char data_02152050[], data_02152054[], data_0215205c[], data_02152064[], data_0215206c[], data_02152074[], data_0215207c[];
s32 func_020fc50c(void);
s32 func_0210cc54(const char *);
s32 func_0210ce90(void);
s32 func_020f5948(void);
s32 func_0210cd50(void);
s32 func_0210cba0(void *, s32);
s32 func_0210ce5c(void);
void func_020b3744(u8);
void func_020468b0(s32);
void *func_020f635c(void);
void *func_020f6458(void);
void func_020f6614(void *, void *, s32);
void func_0210cef8(void);

s32 func_020f6990(void) {
 u8 *script = data_021626e8[0];
 u8 *ctx = *(u8 **)(script + 0x10);
 u32 skip = *(u32 *)(ctx + 0x18) & 0x80000000;
 s32 n, value;
 if (*(u32 *)(data_02160200 + 0x160) & 4) func_020fc50c();
 if (func_0210cc54(data_02152050)) {
  n = --*(s32 *)(script + 0x5c);
  if (n < 0) return 0;
  value = *(s32 *)(script + 0x1c + n*4);
  if (value) {
   *(s32 *)(*(u8 **)data_021626e8[0] + 8) = value;
   *(s32 *)(script + 0x1c + n*4) = 0;
   if (*(s32 *)(script + 0x5c) < 0) *(s32 *)(script + 0x5c) = 0;
  }
  return 1;
 }
 if (func_0210cc54(data_02152054)) {
  if (skip) return 1;
  n = 0;
  if (!func_0210ce90()) n = func_020f5948();
  do {
   value = func_0210cd50();
   if (!n) {
    *(s32 *)(script + 0x1c + *(s32 *)(script + 0x5c)*4) = value;
    ++*(s32 *)(script + 0x5c);
    return func_0210cba0(data_021626e8[0], value);
   }
  } while (--n >= 0);
  return 0;
 }
 if (func_0210cc54(data_0215205c)) {
  func_020b3744((u8)func_0210ce5c());
  data_02146330 = 14;
  *(s32 *)(data_021600ac + 0xc) = 1;
  data_02160204[0x7a] = 1;
  func_020468b0(1);
  return 1;
 }

 if (func_0210cc54(data_02152064)) {
  s32 flag = 0;
  if (skip) return 1;
  if (func_0210ce90()) n = 1;
  else { n = func_020f5948(); flag = 1; }
  do {
   value = func_0210cd50();
   if (n) return func_0210cba0(data_021626e8[0], value);
  } while (--n >= 0);
  return flag != 0;
 }
 if (func_0210cc54(data_0215206c)) {
  void *a = func_020f635c();
  void *b = func_020f6458();
  value = func_020f5948();
  if (!a || !b) return 0;
  func_020f6614(a,b,value);
  return 1;
 }
 if (func_0210cc54(data_02152074)) {
  if (skip) return 1;
  if (*(u32 *)(data_02160200+0x160)&4) *(s32 *)(ctx+0x2c)=1;
  else *(s32 *)(ctx+0x2c)=func_0210ce5c();
  func_0210cef8();
  return 1;
 }
 if (func_0210cc54(data_0215207c)) {
  value=func_0210ce5c();
  if (!value) *(s32 *)(ctx+0x30)=0;
  else *(s32 *)(ctx+0x34)=value;
  func_0210cef8();
  return 1;
 }
 return 0;
}

