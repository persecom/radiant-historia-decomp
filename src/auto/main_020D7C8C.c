/* 4 functions from 0x020D708C to 0x020D7E7C (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_0202fb50(s32,s32);
extern void func_0202fad8(void*);
extern s32 func_02092a28(void*,void*);
extern char data_021513f4[],data_0215141c[],data_02151420[],data_02151428[];
extern u32 data_02155c3c;
extern u8 *data_02160a6c;
extern void *func_02092a40(void*,s32);
extern s32 func_02092a70(void*,s32);
extern u8 *func_02065298(void*,u16,s32,s32,void*);
extern u32 func_020deaf0(void*,s32,s32);
extern u8 *func_0202e548(u8);
extern u8 *func_0210c594(s32,u32);
extern void func_02022fb0(void*);
extern void func_02030878(void*,void*,void*,u32,u32,s32);
extern void func_0202c7d8(s8);
extern void func_02064c80(void*);
extern u8 *func_020ddbcc(u16);
extern void func_0202e874(void*);
extern u32 func_0202e98c(u8,s16);
extern u8 *func_020dce1c(s32,s32,s32);
extern void *func_020ddc44(u16);
extern void *func_020de160(void);
extern void func_020de190(void*,u16);
extern void func_020ddd5c(void*);
extern void func_020dd810(void*,s32,s32);
extern void *func_020d413c(void);
extern void *func_02064be8(void);
extern void *func_02026e40(u16);
extern void *func_02026548(void);
extern void func_021167f0(void*,void*);
extern void func_021168f8(void*,void*);
extern char data_02151454[],data_0215147c[],data_02151484[];
extern char data_0215142c[];
extern u32 data_0216263c[3];
extern void func_02005e80(void *, const char *, ...);
extern void *func_021092d8(void *);
extern int func_02092ab0(void *, int);
extern int func_02092994(void *, int);
extern void func_02109444(void *);
extern void func_021093b0(void *);

extern void *func_02021f10(u32);
#pragma optimization_level 4

extern s32 func_02092a28(void *,void *);
extern s32 func_021094a4(void *,void *);
extern u8 *func_0202fb50(s32,s32);
extern void func_0202fad8(void *);
#pragma optimization_level 3

s32 func_020d7c8c(s32 a,s32 b,s32 c,u32 match,u16 index,s16 *out,s32 *text) {
 char name[64];
 s32 zero;
 u8 *fp;
 s32 active;
 s32 count;
 s32 result;
 s32 value;
 s32 id;
 func_02005e80(name,data_02151454,a,b);
 fp=func_021092d8(name);
 id=-1;
 result=0;
 count=0;
 *out=-1;
 active=1;
 while(result<512) {
 while(active) {
 zero=0;
 result=func_02092ab0(fp,c);
 if(result!=-1) {
 if(match==(u16)func_02092994(fp,zero)) {
 if(func_02092a28(*(void **)(fp+8),data_0215147c)) {
 if(index==count) {
 value=99;
 active=zero;
 result=513;
 *text=func_021094a4(fp,*(void **)(fp+8));
 }
 } else if(func_02092a28(*(void **)(fp+8),data_02151484)) {
 if(index==count) {
 value=99;
 active=zero;
 result=513;
 *text=func_021094a4(fp,*(void **)(fp+8));
 }
 } else {
 s32 n=func_02092994(fp,zero);
 if(index==count) {
 id=n;
 *out=func_02092994(fp,zero);
 *out=func_02092994(fp,zero);
 active=zero;
 *text=func_021094a4(fp,*(void **)(fp+8));
 result=513;
 }
 }
 count++;
 }
 } else {
 result=513;
 active=0;
 }
 if(result<512)func_02109444(fp);
 }
 }
 if(fp)func_021093b0(fp);
 if(id!=-1 && id>100) {
 u8 *p=func_0202fb50(id,1);
 value=p[0x54];
 if(p)func_0202fad8(p);
 }
 return value;
}
#pragma scheduling on
