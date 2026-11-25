/* 1 function from 0x020B5364 to 0x020B72E4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021626e8, *data_02160258, *data_0216bf84;
extern char data_02150d0c[];
extern s32 func_0210cc54(const char *);
extern s32 func_0210ce5c(void);
extern char data_02150d14[], data_02150d1c[], data_02150d24[], data_02150d2c[], data_02150d34[], data_02150d38[];
extern void func_020dc9a0(s32, s32);
extern s32 func_0210cd90(s32);
extern void func_0210968c(s32, s32, s32);
extern void func_0210cef8(void);
s32 func_020b5364(void) {
extern u8 *data_02160260, *data_021601e8, *data_02160204, *data_02160a6c, *data_02160a74, *data_02160244, *data_02160aa4, *data_02160c74, *data_02160208;
extern u32 data_021601d4;
extern char data_02150d3c[], data_02150d48[], data_02150d4c[], data_02150d54[], data_02150d58[], data_02150d60[], data_02150d68[], data_02150d6c[], data_02150d74[], data_02150d7c[], data_02150d88[], data_02150d90[], data_02150d98[], data_02150da0[], data_02150da8[], data_02150db0[], data_02150db8[], data_02150dc0[], data_02150dc8[], data_02150dcc[], data_02150dd0[], data_02150dd8[], data_02150ddc[], data_02150de4[], data_02150de8[], data_02150df0[], data_02150df8[], data_02150e00[], data_02150e08[], data_02150e0c[], data_02150e10[], data_02150e14[], data_02150e1c[], data_02150e24[], data_02150e2c[], data_02150e34[], data_02150e3c[], data_02150e40[], data_02150e48[], data_02150e50[], data_02150e58[], data_02150e60[], data_02150e68[], data_02150e70[], data_02150e78[], data_02150e80[], data_02150e88[], data_02150e90[], data_02150e98[], data_02150ea0[], data_02150ea8[], data_02150eb0[], data_02150eb8[], data_02150ebc[], data_02150ec0[], data_02150ec8[], data_02150ecc[], data_02150ed0[], data_02150ed8[], data_02150edc[], data_02150ee0[], data_02150ee4[], data_02150ee8[], data_02150eec[], data_02150ef4[], data_02150ef8[], data_02150f00[], data_02150f04[], data_02150f0c[], data_02150f14[], data_02150f20[], data_02150f24[], data_02150f2c[], data_02150f34[], data_02150f3c[], data_02150f44[], data_02150f4c[], data_02150f50[], data_02150f58[], data_02150f5c[], data_02150f64[], data_02150f6c[], data_02150f70[], data_02150f78[], data_02150f80[], data_02150f84[], data_02150f8c[], data_02150f90[], data_02150f94[], data_02150f9c[], data_02150fa0[], data_02150fa8[], data_02150fb0[], data_02150fb8[], data_02150fbc[], data_02150fc0[], data_02150fc8[], data_02150fcc[], data_02150fd4[], data_02150fdc[], data_02150fe4[], data_02150fec[], data_02150ff0[], data_02150ff8[], data_02151000[], data_02151008[], data_0215100c[], data_02151014[], data_0215101c[];
extern void * func_020bd438(u8);
extern void func_020bd608(void);
extern void func_020d67f8(void);
extern void func_020dd810(void *,s32,s32);
extern u16 func_020d708c(s32,s32,s32,u32);
extern s32 func_020b4c60(u16,u16,u16,u16,s32,s32);
extern void * func_020ddb90(u16);
extern void func_0202bcd4(void *,u32);
extern void func_020f46cc(void *,s32);
extern void func_020b4cd8(u32,s32);
extern void func_020b4d14(void *,void *,s32);
extern void func_020db35c(void *,s32);
extern s32 func_0202c658(void *);
extern void func_0202c328(void *,s32);
extern void func_0202e518(void *,s32);
extern s32 func_0210ce90(void);
extern s32 func_0210cd50(void);
extern s32 func_0210cba0(void *,s32);
extern void func_020db850(void);
extern void * func_020b4b04(u16);
extern void * func_020c17bc(void *,s32,u16,s32,s32);
extern void func_020d2b78(void *,void *,s32,s32);
extern void func_020a9544(void *);
extern void * func_020a94b8(void *);
extern void * func_0210cce4(void *);
extern void func_020a994c(void *);
extern void func_020bb294(void *,s32);
extern void func_020a98ac(void *);
extern u32 func_020a96f0(void *);
extern void func_020a98f4(void *);
extern void func_020b4af0(void *);
extern void * func_020b498c(u16,u8,u8);
extern void func_020d0a40(s32);
extern void * func_020f6458(void);
extern void func_020b4d84(void *,void *,s32);
extern void func_0210d6f4(void *);
extern void func_0210d6a8(void *,s32);
extern void func_0210d844(s16);
extern void func_0210d6a4(s32,s32);
extern void func_0210d27c(s32);
extern void func_02108da0(u8,u8);
extern void func_02108d34(s32,float);
extern void func_02108ea4(u8,s32);
extern void func_0210d6d8(void *,u8,s32,u16);
extern void func_0210d828(void);
extern void func_020d0cd4(s32,u32);
extern s32 func_0210cbd0(void);

 typedef struct {s32 x,y,z;} Vec5364;
 u8 *ctx=(*(u8 **)((u8 *)(data_021626e8)+(0x10))), *base=data_02160258;
 u8 *p,*q,*t;
 u8 **flag_addr=&data_02160260, **mgr_addr=&data_021601e8;
 s32 a,b,c,d,result;
 u32 mask;
 s32 zero=0,one=1;
 if(func_0210cc54(data_02150d0c)){if(func_0210ce5c()==0)(*(u32 *)&data_0216bf84)=zero;else (*(u32 *)&data_0216bf84)=one;return 1;}
 if(func_0210cc54(data_02150d14)){func_020dc9a0(zero,func_0210ce5c());a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();func_020dc9a0(one,(u16)((u32)a|((u32)b<<5)|((u32)c<<10)));return 1;}
 if(func_0210cc54(data_02150d1c)){func_020dc9a0(2,zero);return 1;}
 if(func_0210cc54(data_02150d24)){func_020dc9a0(3,(u16)func_0210ce5c());return 1;}
 if(func_0210cc54(data_02150d2c)){
  if(func_0210cc54(data_02150d34)){func_0210968c(3,zero,func_0210cd90(30));return 1;}
  if(func_0210cc54(data_02150d38)){func_0210968c(3,-16,func_0210cd90(30));return 1;}
  if(func_0210cc54(data_02150d3c)){func_0210968c(3,16,func_0210cd90(30));return 1;}
  if(func_0210cc54(data_02150d48)){func_0210968c(one,zero,func_0210cd90(30));return 1;}
  if(func_0210cc54(data_02150d4c)){func_0210968c(one,-16,func_0210cd90(30));return 1;}
  if(func_0210cc54(data_02150d54)){func_0210968c(2,zero,func_0210cd90(30));return 1;}
  if(!func_0210cc54(data_02150d58))return zero;
  func_0210968c(2,-16,func_0210cd90(30));return 1;
 }
 if(func_0210cc54(data_02150d60)){(*(s32 *)((u8 *)(ctx)+(0x18)))=func_0210ce5c();func_0210cef8();return 1;}
 if(func_0210cc54(data_02150d68)){
  if(func_0210cc54(data_02150d6c)){
   a=func_0210ce5c();b=func_0210ce5c();p=(u8*)func_020bd438((u8)a);
   if(b==-1)(*(u16 *)((u8 *)(p)+(0)))&=0xfffd;
   else if(b==0){if((*(u16 *)((u8 *)(p)+(0)))&1)(*(u16 *)((u8 *)(p)+(0)))|=8;(*(u16 *)((u8 *)(p)+(0)))&=0xfffe;}
   else if(b>=1){if(!((*(u16 *)((u8 *)(p)+(0)))&1)){(*(u16 *)((u8 *)(p)+(0)))|=1;(*(u16 *)((u8 *)(p)+(0)))|=0x10;}(*(u16 *)((u8 *)(p)+(0)))|=2;(*(u8 *)((u8 *)(p)+(3)))=b;}
   else {if((*(u16 *)((u8 *)(p)+(0)))&1)(*(u16 *)((u8 *)(p)+(0)))|=8;(*(u16 *)((u8 *)(p)+(0)))&=0xfffe;}
   (*(u8 *)((u8 *)(data_02160204)+(0xdf)))=one;return 1;
  }
  if(func_0210cc54(data_02150d74)){func_020bd608();(*(u8 *)((u8 *)(data_02160204)+(0xdf)))=zero;return 1;}
  if(func_0210cc54(data_02150d7c)){func_020d67f8();p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));while(p){(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x70)))=one;(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(4)))=one;func_020dd810(p,zero,zero);p=(*(u8 **)((u8 *)(p)+(0x16c)));}return 1;}
  if(func_0210cc54(data_02150d88)){func_020d67f8();return 1;}
  if(func_0210cc54(data_02150d90)){a=func_0210ce5c();b=func_0210ce5c();func_020d708c(999,(u16)a,(u16)b,zero);return 1;}
 }
 if(func_0210cc54(data_02150d98)){
  if(func_0210cc54(data_02150da0)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();d=func_0210ce5c();return func_020b4c60((u16)a,(u16)b,(u16)c,(u16)d,zero,zero)!=0;}
  if(func_0210cc54(data_02150da8)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();d=func_0210ce5c();return func_020b4c60((u16)a,(u16)b,(u16)c,(u16)d,zero,zero)!=0;}
 }
 if(func_0210cc54(data_02150db0)){
  if(func_0210cc54(data_02150db8)){a=func_0210ce5c();(*(u8 **)((u8 *)(ctx)+(0x20)))=0;(*(u8 **)((u8 *)(ctx)+(0x20)))=(u8*)func_020ddb90((u16)a);return 1;}
  if(func_0210cc54(data_02150dc0)){a=func_0210ce5c();(*(u8 **)((u8 *)(ctx)+(0x20)))=0;(*(u8 **)((u8 *)(ctx)+(0x20)))=(u8*)func_020ddb90((u16)a);return 1;}
 }
 if(func_0210cc54(data_02150dc8)){
  if(func_0210cc54(data_02150dcc)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();{(*(s32 *)((u8 *)(ctx)+(0x24)))=(s32)((u32)(a)<<12); (*(s32 *)((u8 *)(ctx)+((0x24)+4)))=(s32)((u32)(b)<<12); (*(s32 *)((u8 *)(ctx)+((0x24)+8)))=(s32)((u32)(c)<<12);};return 1;}
  if(func_0210cc54(data_02150dd0)){p=(*(u8 **)((u8 *)(ctx)+(0x20)));if(p){a=(*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0)));if(a==0){if((*(u8 *)((u8 *)((*mgr_addr))+(0x18)))==1)b=10;else b=(u8)((*(u16 *)((u8 *)(p)+(0x90)))+9);}else if(a==1)b=(u8)((*(u16 *)((u8 *)(p)+(0x90)))-101);else return one;func_0202bcd4(ctx+0x24,b);}return 1;}
  if(func_0210cc54(data_02150dd8)){a=func_0210ce5c();b=func_0210ce5c();p=(u8*)func_020ddb90((u16)a);if(p){s32 vx=(*(s32 *)((u8 *)(p)+(0))),vy=(*(s32 *)((u8 *)(p)+(4))),vz=(*(s32 *)((u8 *)(p)+(8)));(*(s32 *)((u8 *)(ctx)+(0x24)))=(s32)((u32)vx+((u32)b<<12));(*(s32 *)((u8 *)(ctx)+(0x28)))=(s32)((u32)vy+0x10000);(*(s32 *)((u8 *)(ctx)+(0x2c)))=(s32)((u32)vz+0x20000);}return 1;}
  if(func_0210cc54(data_02150ddc)){a=func_0210ce5c();b=func_0210ce5c();p=(u8*)func_020ddb90((u16)a);if(p){s32 vx=(*(s32 *)((u8 *)(p)+(0))),vy=(*(s32 *)((u8 *)(p)+(4))),vz=(*(s32 *)((u8 *)(p)+(8)));(*(s32 *)((u8 *)(ctx)+(0x24)))=(s32)((u32)vx+((u32)b<<12));(*(s32 *)((u8 *)(ctx)+(0x28)))=vy;(*(s32 *)((u8 *)(ctx)+(0x2c)))=vz;}return 1;}
  return 1;
 }
 if(func_0210cc54(data_02150de4)){
  if(func_0210cc54(data_02150de8)){func_020dc9a0(4,func_0210ce5c());return 1;}
  if(func_0210cc54(data_02150df0)){func_020dc9a0(5,func_0210ce5c());return 1;}
  if(func_0210cc54(data_02150df8)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();{(*(s32 *)((u8 *)(base)+(0)))=(s32)((u32)(a)<<12); (*(s32 *)((u8 *)(base)+((0)+4)))=(s32)((u32)(b)<<12); (*(s32 *)((u8 *)(base)+((0)+8)))=(s32)((u32)(c)<<12);};return 1;}
  if(func_0210cc54(data_02150e00)){func_020f46cc(ctx+0x24,func_0210ce5c());func_020b4cd8(one,one);func_0210cef8();return 1;}
  if(func_0210cc54(data_02150e08)){(*(u16 *)((u8 *)(base)+(0x76)))=func_0210ce5c();return 1;}
  if(func_0210cc54(data_02150e0c)){a=func_0210ce5c();b=func_0210ce5c();p=(u8*)func_020ddb90((u16)a);if(p){s32 vx=(*(s32 *)((u8 *)(p)+(0))),vy=(*(s32 *)((u8 *)(p)+(4))),vz=(*(s32 *)((u8 *)(p)+(8)));(*(s32 *)((u8 *)(base)+(0)))=(s32)((u32)vx+((u32)b<<12));(*(s32 *)((u8 *)(base)+(4)))=(s32)((u32)vy+0x10000);(*(s32 *)((u8 *)(base)+(8)))=(s32)((u32)vz+0x20000);return 1;}}
 }
 if(func_0210cc54(data_02150e10)){
  if(!(*(u8 **)((u8 *)(ctx)+(0x20))))return 1;
  if(func_0210cc54(data_02150e14)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();p=(*(u8 **)((u8 *)(ctx)+(0x20)));{(*(s32 *)((u8 *)(p)+(0)))=(s32)((u32)(a)<<12); (*(s32 *)((u8 *)(p)+((0)+4)))=(s32)((u32)(b)<<12); (*(s32 *)((u8 *)(p)+((0)+8)))=(s32)((u32)(c)<<12);};return 1;}
  if(func_0210cc54(data_02150e1c)){a=func_0210ce5c();func_020dd810((*(u8 **)((u8 *)(ctx)+(0x20))),(u8)a,zero);return 1;}
  if(func_0210cc54(data_02150e24)){a=func_0210ce5c();(*(u8 **)((u8 *)(ctx)+(0x30)))=(*(u8 **)((u8 *)(ctx)+(0x20)));func_020b4d14(ctx,ctx+0x24,a);func_020b4cd8(2,one);func_0210cef8();return 1;}
  if(func_0210cc54(data_02150e2c)){(*(u8 *)((u8 *)(ctx)+(0x57)))=func_0210ce5c();func_020b4cd8(0x10,one);func_0210cef8();return 1;}
  if(func_0210cc54(data_02150e34)){(*(u8 *)((u8 *)(ctx)+(0x57)))=func_0210ce5c();func_020b4cd8(8,one);func_0210cef8();return 1;}
  if(func_0210cc54(data_02150e3c)){(*(u32 *)((u8 *)((*(u8 **)((u8 *)(ctx)+(0x20))))+(0x80)))|=0x80;return 1;}
  if(func_0210cc54(data_02150e40)){a=func_0210ce5c();p=(*(u8 **)((u8 *)(ctx)+(0x20)));if(a==1)(*(u8 *)((u8 *)((*(u8 **)((u8 *)((*(u8 **)((u8 *)(p)+(0x108))))+(0))))+(0x70)))|=2;else if(a==0)(*(u8 *)((u8 *)((*(u8 **)((u8 *)((*(u8 **)((u8 *)(p)+(0x108))))+(0))))+(0x70)))&=~2;return 1;}
  if(func_0210cc54(data_02150e48)){a=func_0210ce5c();p=(*(u8 **)((u8 *)(ctx)+(0x20)));if(a==1)(*(u8 *)((u8 *)((*(u8 **)((u8 *)((*(u8 **)((u8 *)(p)+(0x108))))+(8))))+(0x70)))|=2;else if(a==0)(*(u8 *)((u8 *)((*(u8 **)((u8 *)((*(u8 **)((u8 *)(p)+(0x108))))+(8))))+(0x70)))&=~2;return 1;}
  if(func_0210cc54(data_02150e50)){p=(*(u8 **)((u8 *)(ctx)+(0x20)));(*(u32 *)((u8 *)(p)+(0x80)))&=~0x800;func_020db35c(p,one);(*(u8 **)((u8 *)(ctx)+(0x20)))=0;return 1;}
  if(func_0210cc54(data_02150e58)){a=func_0210ce5c();p=(*(u8 **)((u8 *)(ctx)+(0x20)));if(a==1)(*(u32 *)((u8 *)(p)+(0x80)))|=0x800;else if(a==2)(*(u32 *)((u8 *)(p)+(0x80)))&=~0x800;return 1;}
  if(func_0210cc54(data_02150e60)){p=(*(u8 **)((u8 *)(ctx)+(0x20)));if(!p)goto after_actor;a=(*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0)));if(a==0)b=(u8)((*(u16 *)((u8 *)(p)+(0x90)))+9);else if(a==1)b=(u8)((*(u16 *)((u8 *)(p)+(0x90)))-101);else return one;func_0202bcd4(p,b);return 1;}
  if(func_0210cc54(data_02150e68)){p=(*(u8 **)((u8 *)(ctx)+(0x20)));if(!p)goto after_actor;(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x70)))=one;return 1;}
  if(func_0210cc54(data_02150e70)){p=(*(u8 **)((u8 *)(ctx)+(0x20)));(*(u8 *)((u8 *)((*mgr_addr))+(0x18)))=one;if(p){if((u8)func_0202c658(p)!=10){func_0202c328(p,10);func_0202e518(p,10);}return 1;}}
 }
after_actor:
 if(func_0210cc54(data_02150e78)){
  if(func_0210cc54(data_02150e80)){if(!func_0210ce90())return zero;a=func_0210cd50();return func_0210cba0(data_021626e8,a);}
  if(func_0210cc54(data_02150e88)){func_020b4cd8(4,one);func_0210cef8();return 1;}
 }
 if(func_0210cc54(data_02150e90)){
  if(func_0210cc54(data_02150e98)){(*(s32 *)((u8 *)(ctx)+(0x58)))=zero;if((*(u32 *)((u8 *)(*flag_addr)+(0x60)))&0x20)(*(s32 *)((u8 *)(ctx)+(0x58)))=one;return 1;}
  if(func_0210cc54(data_02150ea0)){(*(u16 *)((u8 *)(ctx)+(0x4e)))=zero;return 1;}
  if(func_0210cc54(data_02150ea8)){a=func_0210ce5c();if((*(u16 *)((u8 *)(ctx)+(0x4e)))==a)(*(s32 *)((u8 *)(ctx)+(0x58)))=one;else (*(s32 *)((u8 *)(ctx)+(0x58)))=zero;return 1;}
  if(func_0210cc54(data_02150eb0)){func_020db850();return 1;}
  d=func_0210ce5c();mask=((u32)d&255)<32?1U<<((u32)d&255):0;a=func_0210ce5c();if(!func_0210cc54(data_02150eb8))return zero;b=func_0210ce5c();p=(u8*)func_020b4b04((u16)a);if(!p)return zero;if(b==(*(u8 *)((u8 *)(p)+(0x50))))(*(u16 *)((u8 *)(ctx)+(0x4e)))|=(u16)mask;(*(s32 *)((u8 *)(ctx)+(0x58)))=zero;if(b==(*(u8 *)((u8 *)(p)+(0x50))))(*(s32 *)((u8 *)(ctx)+(0x58)))=one;return 1;
 }
 if(func_0210cc54(data_02150ebc)){func_0210cef8();if((*(s32 *)((u8 *)(ctx)+(0x58)))){a=func_0210cd50();return func_0210cba0(data_021626e8,a);}func_0210cd50();a=func_0210cd50();return func_0210cba0(data_021626e8,a);}
 if(func_0210cc54(data_02150ec0)){p=(u8*)func_020b4b04((u16)func_0210ce5c());if(p){(*(u32 *)((u8 *)(p)+(0x1c)))&=~4;a=func_0210cd50();return func_0210cba0((*(u8 **)((u8 *)(p)+(0x14))),a);}}
 if(func_0210cc54(data_02150ec8)){if(func_0210cc54(data_02150ecc)){(*(u8 *)((u8 *)(ctx)+(0x50)))=func_0210ce5c();return 1;}}
 if(func_0210cc54(data_02150ed0)){
  if(func_0210cc54(data_02150ed8)){p=(*(u8 **)((u8 *)(ctx)+(0x20)));a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();q=(u8*)func_020ddb90((u16)a);d=(u16)((*(u16 *)((u8 *)(p)+(0x90)))-101)*10;t=(u8*)func_020c17bc(p,(u16)b,(u16)(d+0x276),(u8)c,zero);func_020d2b78(t,q,zero,one);(*(s32 *)((u8 *)(t)+(0x28)))+=0x20000;return 1;}
  if(func_0210cc54(data_02150edc)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();p=(u8*)func_020ddb90((u16)a);func_020c17bc(p,(u16)b,9999,(u8)c,zero);return 1;}
 }
 if(func_0210cc54(data_02150ee0)){
  p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));
  if(func_0210cc54(data_02150ee4)){a=func_0210ce5c();(*(u16 *)((u8 *)(p)+(0x10c)))=zero;(*(u32 *)((u8 *)(p)+(0x108)))|=1;if(a==0)(*(u16 *)((u8 *)(p)+(0x10c)))|=1;else if(a==1)(*(u16 *)((u8 *)(p)+(0x10c)))|=2;q=data_02160a74;if(q)(*(u8 *)((u8 *)(q)+(0x1c0)))|=4;return 1;}
  if(func_0210cc54(data_02150ee8)){(*(u16 *)((u8 *)(p)+(0x10c)))=zero;(*(u32 *)((u8 *)(p)+(0x108)))&=~1;return 1;}
  if(func_0210cc54(data_02150eec)){a=func_0210ce5c();b=func_0210ce5c();if(a==0)(*(u16 *)((u8 *)(p)+(0x10c)))|=4;else if(a==1)(*(u16 *)((u8 *)(p)+(0x10c)))|=8;else if(a==2)(*(u16 *)((u8 *)(p)+(0x10c)))|=0x10;if(b==0)(*(u16 *)((u8 *)(p)+(0x10c)))&=0xffdf;else if(b==1)(*(u16 *)((u8 *)(p)+(0x10c)))|=0x20;return 1;}
 }
 if(func_0210cc54(data_02150ef4)){
  if(func_0210cc54(data_02150ef8)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));if((*(u8 **)((u8 *)(p)+(0x10))))func_020a9544((*(u8 **)((u8 *)(p)+(0x10))));q=(u8*)func_020a94b8(func_0210cce4(0));(*(u8 **)((u8 *)(p)+(0x10)))=q;if(!q)return zero;(*(s32 *)((u8 *)(p)+(0x100)))=zero;return 1;}
  if(func_0210cc54(data_02150f00)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));a=func_0210ce5c();if(!(*(u8 **)((u8 *)(p)+(0x10))))return zero;(*(s32 *)((u8 *)(p)+(0x100)))=a;func_020a994c(p+0x4c);func_020bb294(p,one);(*(u32 *)((u8 *)(p)+(0x108)))|=8;if((*(u8 **)((u8 *)(p)+(0xdc)))){func_020a98ac(p+0x4c);(*(u32 *)((u8 *)(p)+(0x108)))&=~4;(*(u16 *)((u8 *)(p)+(0x10c)))&=0xffbf;func_020b4cd8(0x40,one);func_0210cef8();}return 1;}
  if(func_0210cc54(data_02150f04)){func_020b4cd8(0x20,one);func_0210cef8();return 1;}
  if(func_0210cc54(data_02150f0c)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));a=func_0210ce5c();func_0210ce5c();(*(u16 *)((u8 *)(p)+(0x10c)))|=0x80;func_020a994c(p+0x18);(*(s32 *)((u8 *)(p)+(0xfc)))=a;func_020bb294(p,zero);(*(u16 *)((u8 *)(p)+(0x110)))=func_020a96f0((*(u8 **)((u8 *)(p)+(0xc4))));if((*(s16 *)((u8 *)(p)+(0x110)))<24)(*(u16 *)((u8 *)(p)+(0x110)))=24;func_020a98ac(p+0x18);func_020a98f4(p+0x18);return 1;}
  if(func_0210cc54(data_02150f14)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));(*(u16 *)((u8 *)(p)+(0x10c)))&=0xff7f;func_020a994c(p+0x18);return 1;}
 }
 if(func_0210cc54(data_02150f20)){
  if(func_0210cc54(data_02150f24)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));if((*(u8 **)((u8 *)(p)+(0x10))))func_020a9544((*(u8 **)((u8 *)(p)+(0x10))));q=(u8*)func_020a94b8(func_0210cce4(0));(*(u8 **)((u8 *)(p)+(0x10)))=q;if(!q)return zero;(*(s32 *)((u8 *)(p)+(0x100)))=zero;return 1;}
  if(func_0210cc54(data_02150f2c)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));++(*(s32 *)((u8 *)(p)+(0x100)));if(!(*(u8 **)((u8 *)(p)+(0x10))))return zero;func_020a994c(p+0x4c);func_020bb294(p,one);(*(u32 *)((u8 *)(p)+(0x108)))&=~8;if((*(u8 **)((u8 *)(p)+(0xdc)))){func_020a98ac(p+0x4c);(*(u32 *)((u8 *)(p)+(0x108)))&=~4;(*(u16 *)((u8 *)(p)+(0x10c)))&=0xffbf;func_020b4cd8(0x20,one);func_0210cef8();}return 1;}
  if(func_0210cc54(data_02150f34)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));func_020b4cd8(0x100,one);++(*(s32 *)((u8 *)(p)+(0x100)));if(!(*(u8 **)((u8 *)(p)+(0x10))))return zero;func_020a994c(p+0x4c);func_020bb294(p,one);(*(u32 *)((u8 *)(p)+(0x108)))&=~8;if((*(u8 **)((u8 *)(p)+(0xdc)))){func_020a98ac(p+0x4c);(*(u32 *)((u8 *)(p)+(0x108)))&=~4;(*(u16 *)((u8 *)(p)+(0x10c)))&=0xffbf;func_020b4cd8(0x20,one);(*(u32 *)&data_021601d4)=zero;func_0210cef8();}return 1;}
  if(func_0210cc54(data_02150f3c)){p=(*(u8 **)((u8 *)((*mgr_addr))+(0x14)));(*(u16 *)((u8 *)(p)+(0x10c)))&=0xff7f;func_020a994c(p+0x18);func_020a994c(p+0x4c);return 1;}
 }
 if(func_0210cc54(data_02150f44)){
  if(func_0210cc54(data_02150f4c)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();if(b==0)p=(*(u8 **)((u8 *)((*mgr_addr))+(0xc)));else if(b==1)p=(*(u8 **)((u8 *)((*mgr_addr))+(0x10)));else return zero;q=(*(u8 **)((u8 *)(p)+(0)));result=0;if(!q)result=1;else if(a!=(*(u16 *)((u8 *)(p)+(4))))result=1;if(result){func_020b4af0(q);(*(u8 **)((u8 *)(p)+(0)))=0;(*(u8 **)((u8 *)(p)+(0)))=(u8*)func_020b498c((u16)a,(u8)c,(u8)b);(*(u16 *)((u8 *)(p)+(4)))=a;(*(u8 *)((u8 *)(p)+(6)))=c;(*(u16 *)((u8 *)(p)+(8)))=zero;(*(u8 *)((u8 *)(p)+(0xa)))=zero;}func_0210cef8();return 1;}
  if(func_0210cc54(data_02150f50)){a=func_0210ce5c();if(a==0)p=(*(u8 **)((u8 *)((*mgr_addr))+(0xc)));else if(a==1)p=(*(u8 **)((u8 *)((*mgr_addr))+(0x10)));else return zero;(*(u8 *)((u8 *)(p)+(0xa)))|=1;(*(u16 *)((u8 *)(p)+(8)))=zero;func_0210cef8();return 1;}
  if(func_0210cc54(data_02150f58)){a=func_0210ce5c();if(a==0)p=(*(u8 **)((u8 *)((*mgr_addr))+(0xc)));else if(a==1)p=(*(u8 **)((u8 *)((*mgr_addr))+(0x10)));else return zero;(*(u8 *)((u8 *)(p)+(0xa)))=(u8)((*(u8 *)((u8 *)(p)+(0xa)))&0xfe)|2;func_0210cef8();return 1;}
 }
 {u8 **battle_addr=&data_02160244;
 if(func_0210cc54(data_02150f5c)){
  if(func_0210cc54(data_02150f64)){func_020dc9a0(6,one);func_020b4cd8(0x80,one);func_0210cef8();return 1;}
  if(func_0210cc54(data_02150f6c)){func_020dc9a0(6,zero);func_020b4cd8(0x80,zero);func_0210cef8();return 1;}
  if(func_0210cc54(data_02150f70)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();(*(u16 *)((u8 *)(data_02160204)+(0xda)))=a;(*(u16 *)((u8 *)(data_02160204)+(0x70)))=(*(u16 *)((u8 *)(data_02160204)+(0xda)));(*(u16 *)((u8 *)(data_02160204)+(0xdc)))=b;(*(u16 *)((u8 *)(data_02160204)+(0x72)))=c;(*(u32 *)((u8 *)(*flag_addr)+(0x60)))|=0x10;(*(u32 *)((u8 *)((*battle_addr))+(0x7c)))&=~4;func_0210cef8();return 1;}
  if(func_0210cc54(data_02150f78)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();(*(u16 *)((u8 *)(data_02160204)+(0xda)))=a;(*(u16 *)((u8 *)(data_02160204)+(0x70)))=(*(u16 *)((u8 *)(data_02160204)+(0xda)));(*(u16 *)((u8 *)(data_02160204)+(0xdc)))=b;(*(u16 *)((u8 *)(data_02160204)+(0x72)))=c;(*(u32 *)((u8 *)((*battle_addr))+(0x7c)))&=~4;return 1;}
  if(func_0210cc54(data_02150f80)){func_020d0a40(11);(*(u32 *)((u8 *)((*battle_addr))+(0x7c)))|=0x10;func_0210cef8();return 1;}
  if(func_0210cc54(data_02150f84)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();(*(u16 *)((u8 *)(data_02160204)+(0xda)))=a;(*(u16 *)((u8 *)(data_02160204)+(0x70)))=(*(u16 *)((u8 *)(data_02160204)+(0xda)));(*(u16 *)((u8 *)(data_02160204)+(0xdc)))=b;(*(u16 *)((u8 *)(data_02160204)+(0x72)))=c;(*(u32 *)((u8 *)(*flag_addr)+(0x60)))|=0x10;(*(u32 *)((u8 *)((*battle_addr))+(0x7c)))&=~4;func_0210cef8();return 1;}
 }
 if(func_0210cc54(data_02150f8c)){
  if(func_0210cc54(data_02150f90)){a=func_0210ce5c();q=(u8*)func_020f6458();b=func_0210ce5c();p=(u8*)func_020ddb90((u16)a);if(p){s32 percent=(*(s32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(4)))*100/(*(s32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(8)));func_020b4d84(&percent,q,b);if((*(s32 *)((u8 *)(ctx)+(0x5c))))(*(s32 *)((u8 *)(ctx)+(0x58)))=one;else (*(s32 *)((u8 *)(ctx)+(0x58)))=zero;}return 1;}
  if(func_0210cc54(data_02150f94)){func_020dc9a0(7,(u16)func_0210ce5c());return 1;}
 }
 if(func_0210cc54(data_02150f9c)){p=(u8*)func_020ddb90((u16)func_0210ce5c());(*(u8 *)((u8 *)(p)+(0xa5)))=one;return 1;}
 if(func_0210cc54(data_02150fa0)){(*(s32 *)((u8 *)(data_02160aa4)+(4)))=zero;return 1;}
 if(func_0210cc54(data_02150fa8)){if(func_0210cc54(data_02150fb0)){func_020d67f8();return 1;}}
 if(func_0210cc54(data_02150fb8)){
  if(func_0210cc54(data_02150fbc)){a=func_0210ce5c();func_0210d6f4(data_02160c74);func_0210d6a8(data_02160c74,a);func_0210d844((s16)a);return 1;}
  if(func_0210cc54(data_02150fc0)){a=func_0210ce5c();func_0210d6a4(127,one);func_0210d27c(a);return 1;}
  if(func_0210cc54(data_02150fc8)){a=func_0210ce5c();b=func_0210ce5c();func_02108da0((u8)a,(u8)b);func_02108d34((u8)a,1.0f);if(a==0)(*(u8 *)((u8 *)(data_02160204)+(0x112)))=b;return 1;}
  if(func_0210cc54(data_02150fcc)){a=func_0210ce5c();b=func_0210ce5c();func_02108ea4((u8)a,b);return 1;}
  if(func_0210cc54(data_02150fd4)){a=func_0210ce5c();b=func_0210ce5c();c=func_0210ce5c();func_0210d6d8(data_02160c74,(u8)a,b,(u16)c);return 1;}
  if(!func_0210cc54(data_02150fdc))return zero;
  func_0210d6f4(data_02160c74);func_0210d828();return 1;
 }
 if(func_0210cc54(data_02150fe4)){if(func_0210cc54(data_02150fec))return 1;}
 if(func_0210cc54(data_02150ff0)){(*(s32 *)((u8 *)((*flag_addr))+(0x64)))=zero;return 1;}
 if(func_0210cc54(data_02150ff8)){p=data_02160208;if(p)(*(s32 *)((u8 *)(p)+(0xa8)))=one;return 1;}
 if(func_0210cc54(data_02151000)){if(func_0210cc54(data_02151008)){p=(*battle_addr);if(p){(*(u8 *)((u8 *)(p)+(0xe8)))=one;return 1;}}}
 if(func_0210cc54(data_0215100c)){a=func_0210ce5c();p=(*flag_addr);if(p){if(a==0){(*(s32 *)((u8 *)(p)+(0x88)))=zero;return 1;}if(a==1){(*(s32 *)((u8 *)(p)+(0x88)))=one;return 1;}}}
 if(func_0210cc54(data_02151014)){if((*flag_addr))(*(u8 *)((u8 *)((*flag_addr))+(0x8c)))=func_0210ce5c();return 1;}
 if(func_0210cc54(data_0215101c)){a=func_0210ce5c();p=(*battle_addr);if(p){(*(u16 *)((u8 *)(p)+(0xf4)))=a;func_020d0cd4(one,0x20);return 1;}}
 return func_0210cbd0();
}
}
