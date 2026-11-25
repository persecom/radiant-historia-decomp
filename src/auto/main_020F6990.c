/* 1 function from 0x020F6990 to 0x020FC50C (main), found by ds-decomp. */
#include "common.h"
typedef struct Script6990 {
 u8 *stream;
 u32 unk04[3];
 u8 *context;
 u32 unk14[2];
 s32 returns[16];
 s32 depth;
} Script6990;
typedef struct ScriptPosition { s32 x, y, z; } ScriptPosition;
extern const char data_02152084[], data_0215208c[], data_02152090[], data_02152094[], data_021520a0[], data_021520a8[], data_021520b0[], data_021520b4[], data_021520bc[], data_021520c0[], data_021520c8[], data_021520d0[], data_021520d8[], data_021520dc[], data_021520e4[], data_021520e8[], data_021520ec[], data_021520f0[], data_021520f8[], data_021520fc[];
void func_020a56b4(s32);
s32 func_0210cd90(s32);
void func_0210968c(s32,s32,s32);
void func_020a5698(void);
s32 func_020ef4c8(void *);
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
 s32 n, value;
 u32 skip;
 u8 *ctx;
 Script6990 *script;
 script=(Script6990 *)data_021626e8[0];
 ctx=script->context;
 skip=*(u32 *)(ctx+0x18)&0x80000000;
 if (*(u32 *)(data_02160200 + 0x160) & 4) func_020fc50c();
 if (func_0210cc54(data_02152050)) {
  n = --script->depth;
  if (n < 0) return 0;
  value = script->returns[n];
  if (value) {
   *(s32 *)(*(u8 **)data_021626e8[0] + 8) = value;
   script->returns[n] = 0;
   if (script->depth < 0) script->depth = 0;
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
    script->returns[script->depth] = value;
    ++script->depth;
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
 if (func_0210cc54(data_02152084)) {
  if (skip) return 1;
  if (func_0210cc54(data_0215208c)) {
   if (*(u32 *)(data_02160200+0x160)&4) { func_020a56b4(0); return 1; }
   func_0210968c(3,0,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_02152090)) {
   if (*(u32 *)(data_02160200+0x160)&4) { func_020a56b4(1); return 1; }
   func_0210968c(3,-16,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_02152094)) {
   if (*(u32 *)(data_02160200+0x160)&4) { func_020a56b4(1); return 1; }
   func_0210968c(3,16,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_021520a0)) {
   if (*(u32 *)(data_02160200+0x160)&4) {  return 1; }
   func_0210968c(1,16,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_021520a8)) {
   if (*(u32 *)(data_02160200+0x160)&4) { func_020a56b4(1); return 1; }
   func_0210968c(2,16,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_021520b0)) {
   if (*(u32 *)(data_02160200+0x160)&4) {  return 1; }
   func_0210968c(1,0,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_021520b4)) {
   if (*(u32 *)(data_02160200+0x160)&4) {  return 1; }
   func_0210968c(1,-16,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_021520bc)) {
   if (*(u32 *)(data_02160200+0x160)&4) { func_020a56b4(0); return 1; }
   func_0210968c(2,0,func_0210cd90(30));
   func_020a5698();
   return 1;
  }
  if (func_0210cc54(data_021520c0)) {
   if (*(u32 *)(data_02160200+0x160)&4) { func_020a56b4(1); return 1; }
   func_0210968c(2,-16,func_0210cd90(30));
   
   return 1;
  }
  if (func_0210cc54(data_021520c8)) { data_02160204[0x117]=func_0210ce5c(); return 1; }
  if (func_0210cc54(data_021520d0)) { data_02160204[0x118]=func_0210ce5c(); return 1; }
  if (func_0210cc54(data_021520d8)) { data_02160204[0x122]=1; return 1; }
  return 0;
 }
 if (func_0210cc54(data_021520dc)) {
  if (func_0210cc54(data_021520e4)) { data_02160204[0x138]=1; return 1; }
  return 0;
 }
 if (func_0210cc54(data_021520e8)) {
  if (func_0210cc54(data_021520ec)) {
   *(s32 *)(ctx+0x1c)=func_020f5948();
   *(s32 *)(ctx+0x20)=func_020f5948();
   *(s32 *)(ctx+0x24)=func_020f5948();
   return 1;
  }
  if (func_0210cc54(data_021520f0)) {
   u8 *p=*(u8 **)(data_021600ac+0x68);
   *(s32 *)(ctx+0x1c)=func_020f5948();
   *(s32 *)(ctx+0x20)=func_020f5948();
   *(s32 *)(ctx+0x24)=func_020f5948();
   *(ScriptPosition *)p=*(ScriptPosition *)(ctx+0x1c);
   *(u16 *)(*(u8 **)(p+0xb0)+4)=0;
   return 1;
  }
  if (func_0210cc54(data_021520f8)) {
   *(s32 *)(ctx+0x1c)+=func_020f5948();
   *(s32 *)(ctx+0x20)+=func_020f5948();
   *(s32 *)(ctx+0x24)+=func_020f5948();
   return 1;
  }
  if (func_0210cc54(data_021520fc)) {
   *(s32 *)(ctx+0x20)=func_020ef4c8(ctx+0x1c);
   return 1;
  }
 }
 return 0;
}

