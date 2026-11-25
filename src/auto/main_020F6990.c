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

extern void func_02047820(u16);
s32 func_020f6990(void){
#define E(x) extern const char D(52##x)[];
#define R0(f) r0=(u32)((u32(*)(void))F(f))();
#define V0(f) ((void(*)(void))F(f))();
#define R1(f) r0=(u32)((u32(*)(u32))F(f))(r0);
#define V1(f) ((void(*)(u32))F(f))(r0);
#define R2(f) r0=(u32)((u32(*)(u32,u32))F(f))(r0,r1);
#define V2(f) ((void(*)(u32,u32))F(f))(r0,r1);
#define R3(f) r0=(u32)((u32(*)(u32,u32,u32))F(f))(r0,r1,r2);
#define V3(f) ((void(*)(u32,u32,u32))F(f))(r0,r1,r2);
#define R4(f) r0=(u32)((u32(*)(u32,u32,u32,u32))F(f))(r0,r1,r2,r3);
#define V4(f) ((void(*)(u32,u32,u32,u32))F(f))(r0,r1,r2,r3);
#define V5(f) ((void(*)(u32,u32,u32,u32,u32))F(f))(r0,r1,r2,r3,arg5);
#define V6(f) ((void(*)(u32,u32,u32,u32,u32,u32))F(f))(r0,r1,r2,r3,arg5,arg6);
#define J(l) if(cmp_a==cmp_b){goto L(l);}
#define N(l) if(cmp_a!=cmp_b){goto L(l);}
#define EQ(s) if(cmp_a==cmp_b){s}
#define NE(s) if(cmp_a!=cmp_b){s}
#define B(a,b,l) cmp_a=a;cmp_b=b;J(l)
#define BN(a,b,l) cmp_a=a;cmp_b=b;N(l)
#define A(d,x) d=(u32)(((u32)&D(x)));
#define C(x,l) A(r0,52##x)R1(10cc54)B(r0,0x0,l)
#define CN(x,l) A(r0,52##x)R1(10cc54)BN(r0,0x0,l)
#define Y r0=(0x1);return(s32)r0;
#define Z r0=(0x0);return(s32)r0;
#define RET(r) return(s32)r;
#define G(x) goto L(x);
#define LD(d,t,b,o) d=(u32)(*(const t*)(b+o));
#define ST(t,b,o,s) *(t*)(b+o)=(t)s;
#define W(d,b,o) LD(d,u32,b,0x##o)
#define WS(b,o,s) ST(u32,b,0x##o,s)
#define H(d,b,o) LD(d,u16,b,0x##o)
#define HS(b,o,s) ST(u16,b,0x##o,s)
#define U(d,b,o) LD(d,u8,b,0x##o)
#define US(b,o,s) ST(u8,b,0x##o,s)
#define I(d,b,o) LD(d,s16,b,0x##o)
#define K(d,b,o) LD(d,s8,b,0x##o)
#define P(d,b) W(d,b,0)
#define M(d,s) d=(s);
#define T(a,b) cmp_a=a;cmp_b=b;
#define CC(x) F(10cc54)(D(52##x))
#define NUM F(0f5948)()
#define INT F(10ce5c)()
#define TOK F(10cd50)()
#define S(p,o) (*(s32*)((u8*)(p)+o))
#define H16(p,o) (*(u16*)((u8*)(p)+o))
#define B8(p,o) (*(u8*)((u8*)(p)+o))
#define PTR(p,o) (*(u8**)((u8*)(p)+o))
#define D(x) data_021##x
#define F(x) func_02##x
#define L(x) L##x
extern u16 D(51fc8);extern u16 D(51fca);extern s32 D(51fcc);extern u8*D(51ffc);E(100)E(108)E(110)E(114)E(118)E(11c)E(124)E(12c)
E(134)E(138)E(13c)E(144)E(14c)E(154)E(15c)E(164)E(168)E(170)E(178)E(180)E(188)E(190)E(198)E(19c)E(1a0)E(1a8)
E(1ac)E(1b0)E(1b4)E(1b8)E(1bc)E(1c4)E(1c8)E(1cc)E(1d0)E(1d4)E(1dc)E(1e4)E(1ec)E(1f4)E(1fc)E(204)E(20c)E(210)
E(218)E(220)E(228)E(230)E(23c)E(244)E(24c)E(254)E(25c)E(264)E(26c)E(274)E(27c)E(284)E(288)E(290)E(298)E(29c)
E(2a0)E(2a8)E(2b0)E(2b8)E(2c0)E(2c8)E(2cc)E(2d4)E(2d8)E(2dc)E(2e0)E(2e8)E(2f0)E(2f4)E(2f8)E(2fc)E(300)E(304)
E(308)E(30c)E(310)E(314)E(318)E(31c)E(320)E(324)E(328)E(32c)E(330)E(334)E(338)E(33c)E(340)E(344)E(348)E(350)
E(358)E(360)E(368)E(36c)E(370)E(374)E(37c)E(384)E(38c)E(394)E(39c)E(3a0)E(3a8)E(3b0)E(3b8)E(3c0)E(3c8)E(3ec)
E(3f4)E(3fc)E(404)E(40c)E(414)E(438)E(440)E(448)E(450)E(454)E(45c)E(464)E(468)E(46c)E(474)E(47c)E(480)E(488)
E(490)E(498)E(49c)E(4a0)E(4a8)E(4b0)E(4b4)E(4b8)E(4bc)E(4c4)E(4cc)E(4d4)E(4d8)E(4dc)E(4f0)E(4f4)E(508)E(50c)
E(520)E(528)E(52c)E(530)E(534)E(53c)E(540)E(544)E(548)E(54c)E(550)E(554)E(558)E(560)E(564)E(568)E(56c)E(584)
E(58c)E(590)E(598)E(5a0)E(5a4)E(5a8)E(5b4)E(5bc)E(5c4)E(5c8)E(5d0)E(5d4)E(5d8)E(5ec)E(5f0)E(604)E(60c)E(610)
E(614)E(61c)E(620)E(628)E(62c)E(634)E(63c)E(640)E(644)E(648)E(650)E(654)E(65c)E(678)E(690)E(698)E(6b4)E(6cc)
E(6d4)E(6d8)E(6e0)E(6e8)E(6f0)E(6f4)E(6fc)E(700)E(70c)E(714)E(71c)E(720)E(728)E(730)E(738)E(740)E(748)E(74c)
E(750)E(754)E(758)E(75c)E(760)E(764)E(76c)E(774)E(77c)E(798)E(7b8)E(7c0)E(7dc)E(7fc)E(808)E(810)E(830)E(838)
E(83c)E(844)E(84c)E(868)E(86c)E(888)E(890)E(894)E(8a0)E(8a4)E(8c0)E(8c8)E(8cc)E(8d4)E(8dc)E(8fc)E(900)E(91c)
E(924)E(928)E(930)E(938)E(93c)E(940)E(944)E(948)E(94c)E(950)E(954)E(958)E(95c)E(960)E(964)E(968)E(96c)E(970)
E(974)E(97c)E(984)E(98c)E(994)E(998)E(99c)E(9a0)E(9a4)E(9bc)E(9c4)E(9cc)E(9d4)E(9dc)extern void*D(55c3c);
extern u32 D(60078);extern u8*D(6009c);extern u8*D(600a0);extern u8*D(600a4);extern u8*D(600b0);extern u8*D(600b8);extern u8*D(600bc);
extern u8*D(600e8);extern u8*D(6020c);extern u8*D(60c38);extern u8*D(60c74);extern u8*D(60c9c);extern u8*D(60cdc);extern u32 D(6263c)[3];
extern u16 D(626a6);extern void F(005e80)(char*,const char*,...);extern void F(009008)(void*,void*,u32);
extern void F(015a10)(void*,const char*,void*);extern u8 F(022068)(u16);extern void F(0220b0)(s32,s32);extern void F(022100)(s32);
extern void F(03e730)(u16,s32,s32,s32);extern void F(03fcc0)(s32);extern void F(0407fc)(void);extern s32 F(0444a0)(u16);extern void F(044a98)(s32);
extern void F(044f80)(void);extern void F(046794)(void);extern void*F(04680c)(const char*,u16);extern void*F(046f90)(void*,u16);
extern void F(047490)(void*);extern void F(0477dc)(void*,s32,s32);extern void*F(04785c)(u16,u16);extern void F(052904)(s32);
extern void F(066eac)(s32);extern void F(066f9c)(void);extern void F(06713c)(s32,s32);extern void F(06e7a0)(u8,void*,void*,u16);
extern void F(06e8f0)(s32,void*,s32);extern void F(06eb80)(u16,u8,u8,void*,void*);extern void F(06ec84)(u16);extern void F(07884c)(u16);
extern void F(0789ec)(void);extern void F(07b148)(void);extern void F(0a1750)(s32);extern void F(0a5644)(s32);extern s32 F(0a567c)(void);
extern void F(0a6a88)(s32,u16);extern void F(0a8810)(void*,u32);extern void*F(0a94b8)(void*);extern void F(0a957c)(void*);
extern void F(0a9610)(void*,void*,s32,void*,s32,s32);extern s32 F(0a9738)(u32,u16);extern void F(0a98a0)(void*);extern void F(0a98ac)(void*);
extern void F(0a994c)(void*);extern void F(0bd2fc)(u8,u8,u8,u8);extern void F(0bd35c)(u8,s32);extern void*F(0bd438)(u8);extern void F(0bd574)(void);
extern s32 F(0bdb30)(u16,s32);extern s32 F(0bdba0)(u16);extern void F(0bdbe8)(s32,ScriptPosition);extern void F(0bdcc0)(s32);
extern void F(0bdd80)(s32,s32);extern void F(0bdd84)(s32);extern s32 F(0ddc8c)(void*,void*);extern void F(0f4174)(void);extern void F(0f4640)(void);
extern void F(0f4668)(void*);extern void F(0f46cc)(void*,s32);extern void F(0f4774)(void*,u8);extern void F(0f4828)(u16,u16);
extern void F(0f4844)(u16,u16);extern s32 F(0f53fc)(void);extern s32 F(0f5704)(s32);extern void*F(0f5724)(void);extern s32 F(0f5730)(s32);
extern u8*F(0f57e8)(const char*);extern void F(0f58c0)(void*);extern void F(0f5914)(void*,void*,s32,s32,s32,s32);extern s32 F(0f68ec)(void);
extern void F(0fce30)(s32,s32,u8,s8);extern void F(0fce80)(void);extern void F(0fdb64)(void);extern s32 F(0fe83c)(void);extern s32 F(102e60)(void);
extern s32 F(10344c)(void);extern s32 F(103848)(void);extern s32 F(103b04)(const char*,const char*);extern s32 F(103c2c)(s32,const char*,void*);
extern void F(103d30)(void);extern void F(103d78)(s32);extern void F(103d98)(s32);extern s32 F(103dc8)(void);extern s32 F(104b04)(void);
extern s32 F(104f68)(void);extern void F(10829c)(s32,s32,s32);extern void F(108ffc)(void);extern void F(1091b4)(void);extern void F(109444)(void*);
extern void*F(10c594)(s32,void*);extern void F(10c5dc)(void*);extern s32 F(10cbd0)(void);extern s32 F(10ccbc)(const char*);
extern const char*F(10cce4)(const char*);extern void*F(10eb98)(const char*,...);extern void F(1167f0)(void*,void*);extern void F(1168f8)(void*,void*);
u32 frame[(0x2d4-8)/4],arg5,arg6;u32 r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12;u32 cmp_a,cmp_b,base_tmp;{s32 n,value;u32 skip;u8*ctx;Script6990*script;
script=(Script6990*)D(626e8)[0];ctx=script->context;skip=(*(u32*)(ctx+0x18))&0x80000000u;if(S(D(60200),0x160)&4)F(0fc50c)();if(CC(050)){
n=--script->depth;if(n<0)return 0;value=script->returns[n];if(value){(*(s32*)((u8*)(*(u8**)D(626e8)[0])+8))=value;script->returns[n]=0;
if(script->depth<0)script->depth=0;}return 1;}if(CC(054)){if(skip)return 1;n=0;if(!F(10ce90)())n=NUM;do{value=TOK;if(!n){
script->returns[script->depth]=value;++script->depth;return F(10cba0)(D(626e8)[0],value);}}while(--n>=0);return 0;}if(CC(05c)){F(0b3744)((u8)INT);
D(46330)=14;S(D(600ac),0xc)=1;B8(D(60204),0x7a)=1;F(0468b0)(1);return 1;}if(CC(064)){s32 flag=0;if(skip)return 1;if(F(10ce90)())n=1;
else{n=NUM;flag=1;}do{value=TOK;if(n)return F(10cba0)(D(626e8)[0],value);}while(--n>=0);return flag!=0;}if(CC(06c)){void*a=F(0f635c)();
void*b=F(0f6458)();value=NUM;if(a==0||b==0)return 0;F(0f6614)(a,b,value);return 1;}if(CC(074)){if(skip)return 1;
if(S(D(60200),0x160)&4)S(ctx,0x2c)=1;else S(ctx,0x2c)=INT;F(10cef8)();return 1;}if(CC(07c)){value=INT;if(!value)S(ctx,0x30)=0;
else S(ctx,0x34)=value;F(10cef8)();return 1;}if(CC(084)){if(skip)return 1;if(CC(08c)){if(*(u32*)(D(60200)+0x160)&4){F(0a56b4)(0);return 1;}
F(10968c)(3,0,F(10cd90)(30));return 1;}if(CC(090)){if(*(u32*)(D(60200)+0x160)&4){F(0a56b4)(1);return 1;}F(10968c)(3,-16,F(10cd90)(30));return 1;}
if(CC(094)){if(*(u32*)(D(60200)+0x160)&4){F(0a56b4)(1);return 1;}F(10968c)(3,16,F(10cd90)(30));return 1;}if(CC(0a0)){
if(*(u32*)(D(60200)+0x160)&4){return 1;}F(10968c)(1,16,F(10cd90)(30));return 1;}if(CC(0a8)){if(*(u32*)(D(60200)+0x160)&4){F(0a56b4)(1);return 1;}
F(10968c)(2,16,F(10cd90)(30));return 1;}if(CC(0b0)){if(*(u32*)(D(60200)+0x160)&4){return 1;}F(10968c)(1,0,F(10cd90)(30));return 1;}if(CC(0b4)){
if(*(u32*)(D(60200)+0x160)&4){return 1;}F(10968c)(1,-16,F(10cd90)(30));return 1;}if(CC(0bc)){if(*(u32*)(D(60200)+0x160)&4){F(0a56b4)(0);return 1;}
F(10968c)(2,0,F(10cd90)(30));F(0a5698)();return 1;}if(CC(0c0)){if(*(u32*)(D(60200)+0x160)&4){F(0a56b4)(1);return 1;}F(10968c)(2,-16,F(10cd90)(30));
return 1;}if(CC(0c8)){B8(D(60204),0x117)=INT;return 1;}if(CC(0d0)){B8(D(60204),0x118)=INT;return 1;}if(CC(0d8)){B8(D(60204),0x122)=1;return 1;}
return 0;}if(CC(0dc)){if(CC(0e4)){B8(D(60204),0x138)=1;return 1;}return 0;}if(CC(0e8)){if(CC(0ec)){
S(ctx,0x1c)=NUM;S(ctx,0x20)=NUM;S(ctx,0x24)=NUM;return 1;}if(CC(0f0)){u8*p=PTR(D(600ac),0x68);S(ctx,0x1c)=NUM;S(ctx,0x20)=NUM;S(ctx,0x24)=NUM;
*(ScriptPosition*)p=*(ScriptPosition*)(ctx+0x1c);(*(u16*)((u8*)(PTR(p,0xb0))+4))=0;return 1;}if(CC(0f8)){value=NUM;S(ctx,0x1c)+=value;
value=NUM;S(ctx,0x20)+=value;value=NUM;S(ctx,0x24)+=value;return 1;}if(CC(0fc)){S(ctx,0x20)=F(0ef4c8)(ctx+0x1c);return 1;}if(CC(100)){
u8*p=(u8*)((u32(*)(u32))F(047820))((u16)INT);if(!p)return 0;*(ScriptPosition*)(ctx+0x1c)=*(ScriptPosition*)p;return 1;}if(CC(108)){
u8*p=(u8*)((u32(*)(u32))F(047820))((u16)INT);if(!p)return 0;*(ScriptPosition*)(ctx+0x1c)=*(ScriptPosition*)p;S(ctx,0x24)+=0x20000;return 1;}return 0;}
if(CC(110)){if(CC(114)){H16(ctx,0x28)=NUM;return 1;}if(CC(118)){value=NUM;H16(ctx,0x28)+=(u16)value;return 1;}
if(CC(11c)){value=NUM;H16(D(60204),0x78)=value;return 1;}if(CC(124)){u16 a,b;a=(u16)INT;b=(u16)INT;u8*p=(u8*)((u32(*)(u32))F(047820))(a),*q;
if(!p)return 0;q=(u8*)((u32(*)(u32))F(047820))(b);if(!q)return 0;H16(ctx,0x28)=F(0ddc8c)((void*)p,(void*)q);
switch(((u32)(u16)(H16(ctx,0x28)+H16(&D(51fc8),0)+0xe00c))>>14){case 0:H16(q,0x92)=0x4000;break;case 1:H16(q,0x92)=0x8000;break;
case 2:H16(q,0x92)=0xc000;break;case 3:H16(q,0x92)=0;break;}return 1;}if(CC(12c)){u16 a,b;a=(u16)INT;b=(u16)INT;
u8*p=(u8*)((u32(*)(u32))F(047820))(a),*q;if(!p)return 0;q=(u8*)((u32(*)(u32))F(047820))(b);if(!q)return 0;H16(ctx,0x28)=F(0ddc8c)((void*)p,(void*)q);
switch(((u32)(u16)(H16(ctx,0x28)+H16(&D(51fc8),0)+0xe00c))>>14){case 0:H16(q,0x92)=0x4000;break;case 1:H16(q,0x92)=0x8000;break;
case 2:H16(q,0x92)=0xc000;break;case 3:H16(q,0x92)=0;break;}return 1;}return 0;}if(CC(134)){
if(CC(138)){F(0f46cc)(ctx+0x1c,2);F(0f4174)();F(10cef8)();return 1;}if(CC(13c)){value=NUM;
if(S(D(60200),0x160)&4){F(0f46cc)(ctx+0x1c,2);F(0f4174)();}else{F(0f46cc)(ctx+0x1c,value);S(ctx,0x18)|=0x10;}F(10cef8)();return 1;}if(CC(144)){
value=NUM;if(S(D(60200),0x160)&4){F(0f46cc)(ctx+0x1c,2);F(0f4174)();}else{F(0f4774)(ctx+0x1c,(u8)value);S(ctx,0x18)|=0x10;}F(10cef8)();return 1;}
if(CC(14c)){value=NUM;F(0f4774)(ctx+0x1c,(u8)value);PTR(D(60c38),0x3c)=ctx+0x1c;B8(D(60c38),0x40)=(u8)value;S(ctx,0x18)|=0x10;H16(D(60c38),0x38)|=1;
F(10cef8)();return 1;}if(CC(154)){u8*p;value=NUM;S(D(60c38),0x44)=value;value=INT;H16(D(60c38),0x4c)=value;p=D(60c38);
if(H16(p,0x4c)==0){S(&D(51fcc),0)=S(p,0x44);S(p,0x44)=0;}else S(p,0x48)=(S(p,0x44)-S(&D(51fcc),0))/H16(p,0x4c);return 1;}if(CC(15c))return 1;
if(CC(164)){F(0f4668)(ctx+0x1c);return 1;}if(CC(168)){value=INT;if(value>=0){u8*p=(u8*)((u32(*)(u32))F(047820))((u16)value);if(!p)return 0;
PTR(ctx,0x17c)=p;S(ctx,0x18)|=0x200;}else S(ctx,0x18)&=~0x200;return 1;}if(CC(170)){H16(&D(51fc8),0)=NUM;H16(&D(51fca),0)=NUM;S(&D(51fcc),0)=NUM;
F(0f4640)();if(D(600bc))H16(D(600bc),0x2e)=H16(&D(51fc8),0);return 1;}if(CC(178)){u8*p=(u8*)F(10c594)(12,D(55c3c));
H16(p,2)=F(10cd90)(0);H16(p,0)=NUM;F(1167f0)(D(6009c)+0x64,p);return 1;}if(CC(180)){value=NUM;n=NUM;F(0f4828)((u16)value,(u16)n);return 1;}
if(CC(188)){value=NUM;n=NUM;F(0f4844)((u16)value,(u16)n);return 1;}if(CC(190)){
if(CC(198)){value=INT;n=INT;F(10829c)((u32)value<<12,0x2000,n);return 1;}if(CC(19c)){F(10829c)(0,0,0);return 1;}return 0;}if(CC(1a0)){
if(CC(1a8))B8(D(60204),0x7e)=1;else if(CC(1ac))B8(D(60204),0x7e)=0;return 1;}return 0;}if(CC(1b0)){if(skip)return 1;return F(104b04)();}
if(CC(1b4))return 1;if(CC(1b8)){if(CC(1bc)){F(044a98)(INT);return 1;}if(CC(1c4)){u8*p=PTR(D(600ac),0x8ac);value=INT;
while(p){if(H16(p,4)==value){B8(p,6)=1;break;}p=PTR(p,0xc);}return 1;}if(CC(1c8)){u8*p=PTR(D(600ac),0x8ac);value=INT;
while(p){if(H16(p,4)==value){B8(p,6)=0;break;}p=PTR(p,0xc);}return 1;}return 0;}if(CC(1cc))return 1;
if(CC(1d0)){
 s32 pending=0;
 s32 mode,width,height,kind,quantity,id; s8 negative;
 u8 *node,*obj,*params;
 if(S(D(60200),0x160)&4)return 1;
 for(;;){
  if(CC(1d4)){
   if(PTR(ctx,0x128))F(0a957c)(ctx+0x128);
   PTR(ctx,0x128)=F(0a94b8)((void*)F(10cce4)(0));S(ctx,0x178)=0;
   if(!PTR(ctx,0x128))return 0;
   if(!B8(D(60204),0x7e)){
    PTR(D(600ac),0x7c)=ctx;
    F(0f5914)(ctx,PTR(D(600ac),0x78),240,32,0,0);
    node=PTR(D(600b8),0);
    while(node&&node!=ctx)node=PTR(node,0x1dc);
    if(!node)F(1167f0)(D(600b8),PTR(D(600ac),0x7c));
   }else F(0f5914)(ctx,PTR(D(600ac),0x78),240,32,0,0);
   goto redraw_dialogue;
  }
  if(CC(1dc)&&CC(1e4)){
   if(PTR(ctx,0x128))F(0a957c)(ctx+0x128);
   PTR(ctx,0x128)=F(0a94b8)(F(0f5724)());S(ctx,0x178)=0;
   if(!PTR(ctx,0x128))return 0;
   if(!B8(D(60204),0x7e)){
    PTR(D(600ac),0x7c)=ctx;
    F(0f5914)(ctx,PTR(D(600ac),0x78),240,32,0,0);
    F(1167f0)(D(600b8),PTR(D(600ac),0x7c));
   }else F(0f5914)(ctx,PTR(D(600ac),0x78),240,32,0,0);
   redraw_dialogue:F(108ffc)();continue;
  }
  if(CC(1ec))pending=-1;else if(CC(1f4))pending=-2;
  if(pending==-1||pending==-2){
   if(!skip){
    if(!PTR(ctx,0x128))return 0;
    ++S(ctx,0x178);F(0a994c)(ctx+0x144);mode=0;
    F(0a9610)(ctx+0x12c,PTR(ctx,0x128),S(ctx,0x178),PTR(ctx,0x130),0,-100);
    if(PTR(ctx,0x13c)){
     F(0a98ac)(ctx+0x144);S(PTR(ctx,0x130),0x40)=1;F(0a8810)(PTR(D(600ac),0x78),7);
     if(pending==-1){mode=INT;B8(ctx,0x1c2)=0xff;}else if(pending==-2)mode=*(s8*)(ctx+0x1c2);
     switch(mode){
      case 0:case 5:width=204;height=20;if(mode==5)S(ctx,0x18)|=0x400;break;
      case 1:F(0a8810)(PTR(D(600ac),0x78),16);width=204;S(ctx,0x18)|=0x800;height=82;break;
      case 2:width=F(0a9738)(*(u32*)PTR(ctx,0x12c),(u16)S(ctx,0x178));S(ctx,0x18)|=0x400;height=180;break;
      case 3:width=F(0a9738)(*(u32*)PTR(ctx,0x12c),(u16)S(ctx,0x178));S(ctx,0x18)|=0x800;height=80;break;
      case 4:width=128;S(ctx,0x18)|=0x800;height=144;break;
     }
     obj=PTR(ctx,0x130);
     if(mode==4)S(obj,0x44)=0x3000;else S(obj,0x44)=(128-width/2)*4096;
     S(obj,0x48)=height*4096;S(obj,0x4c)=0x2bc000;pending=1;
    }
   }else ++S(ctx,0x178);
   if(skip)break;
   continue;
  }
  if(CC(1fc)){
   obj=(u8*)((u32(*)(u32))F(047820))(H16(PTR(PTR(D(600ac),0x68),0xb0),4));params=PTR(obj,0xb0);
   kind=*(s16*)(params+0xe);id=*(s16*)(params+0x10);negative=0;
   if(kind==4){F(022100)(id);if(id<0)negative=1;quantity=1;}
   else{quantity=*(s16*)(params+0x12);if(quantity<0)negative=1;F(0220b0)(id,quantity);}
   goto apply_reward;
  }
  if(CC(204)){
   negative=0;kind=F(0f5704)(0);id=F(0f5704)(1);
   if(kind==4){F(022100)(id);if(id<0)negative=1;quantity=1;}
   else{quantity=F(0f5704)(2);if(quantity<0)negative=1;F(0220b0)(id,quantity);}
   apply_reward:F(0fce30)(kind,id,(u8)quantity,negative);S(ctx,0x18)|=0x1000000;continue;
  }
  if(CC(20c)){
   if(F(0f5704)(0)==0){
    if(F(0f5704)(1)>0&&F(0f5704)(1)<=100)S(&D(60c74),8)=0;
    else if(F(0f5704)(1)>200&&F(0f5704)(1)<=300)S(&D(60c74),8)=5;
    else if(F(0f5704)(1)>300&&F(0f5704)(1)<=500)S(&D(60c74),8)=1;
    else if(F(0f5704)(1)>500&&F(0f5704)(1)<=700)S(&D(60c74),8)=2;
    else if(F(0f5704)(1)>700&&F(0f5704)(1)<=800)S(&D(60c74),8)=3;
   }else if(F(0f5704)(0)==1)S(&D(60c74),8)=4;else if(F(0f5704)(0)==2)S(&D(60c74),8)=5;
   if(F(0f5704)(3)>=0){kind=F(0f5704)(0);id=F(0f5704)(1);quantity=F(0f5704)(2);negative=0;}
   else{kind=F(0f5704)(0);id=F(0f5704)(1);quantity=F(0f5704)(2);negative=1;}
   F(0fce30)(kind,id,(u8)quantity,negative);
   S(ctx,0x18)|=0x1000000;
   if(F(0f5704)(0)==4){id=F(0f5704)(1);quantity=F(0f5704)(3);F(022100)(id*quantity);}
   else{id=F(0f5704)(1);quantity=F(0f5704)(2);mode=F(0f5704)(3);F(0220b0)(id,quantity*mode);}
   continue;
  }
  if(CC(210)){S(ctx,0x18)|=0x1000000;id=F(0f5704)(0);quantity=F(0f5704)(1);kind=6;negative=0;goto apply_item;}
  if(CC(218)){S(ctx,0x18)|=0x1000000;id=F(0f5704)(0);quantity=F(0f5704)(1);kind=6;negative=1;
apply_item:F(0fce30)(kind,id,(u8)quantity,negative);continue;}
  if(CC(220)){S(ctx,0x18)|=0x1000000;id=F(0f5704)(0);quantity=F(0f5704)(1);kind=7;negative=1;goto apply_item;}
  if(CC(228)){S(ctx,0x18)|=0x1000000;id=F(0f5704)(0);negative=(s8)F(0f5704)(1);kind=8;quantity=0;goto apply_item;}
  if(CC(230)){S(ctx,0x18)|=0x1000000;id=F(0f5704)(0);kind=9;quantity=0;negative=0;goto apply_item;}
  if(CC(23c)){
   S(ctx,0x18)|=0x1000000;
   if(F(0f5704)(1)==0){id=F(0f5704)(0);kind=10;quantity=0;negative=0;goto apply_item;}
   else if(F(0f5704)(1)==1){id=F(0f5704)(0);kind=11;quantity=0;negative=0;goto apply_item;}continue;
  }
  if(CC(244)){if(!(S(ctx,0x18)&0x1000000))return 1;pending=1;if(skip)break;}
  if(CC(24c)){
   if(CC(254)){if(!CC(25c))return 1;value=F(0f5704)(5);}else value=INT;
   if(value){S(D(600a0),0x38)=F(0444a0)((u16)value);obj=D(600a0);if(S(obj,0x38)<24)S(obj,0x38)=24;}
   else{S(D(600a0),0x38)=0;F(0a994c)(D(600ac)+0xb8);}return 1;
  }
  if(CC(264)){B8(ctx,0x1c2)=INT;return 1;}
  if(CC(26c)){if(!skip)pending=1;continue;}
  if(CC(274)){pending=0;continue;}
  if(CC(27c)){
   F(03fcc0)(0);S(D(600a0),0x38)=0;F(0a994c)(D(600ac)+0xb8);F(0a994c)(D(600ac)+0x108);F(0a994c)(ctx+0x144);
   if(PTR(ctx,0x130))S(PTR(ctx,0x130),0x40)=0;S(PTR(D(600ac),0xb4),0x40)=0;F(0fce80)();continue;
  }
  if(CC(284)){F(0a98a0)(ctx+0x144);if(PTR(ctx,0x128))goto release_dialogue;continue;}
  if(CC(288)){
   node=PTR(D(600b8),0);while(node&&node!=ctx)node=PTR(node,0x1dc);
   if(node){F(1168f8)(D(600b8),node);if(PTR(node,0x128)){++S(node,0x178);F(0a994c)(node+0x144);F(0a98a0)(node+0x144);F(0a957c)(node+0x128);}PTR(D(600ac),0x7c)=0;}continue;
  }
  if(CC(290)){
   if(PTR(D(600ac),0x7c))F(1168f8)(D(600b8),PTR(D(600ac),0x7c));
   F(0a98a0)(ctx+0x144);if(PTR(ctx,0x128)){release_dialogue:F(0a957c)(ctx+0x128);}continue;
  }
  break;
 }
 if(pending){if(!(S(ctx,0x18)&0x400))S(ctx,0x18)|=1;F(10cef8)();}return 1;
}
r9=(u32)script;r6=(u32)ctx;r7=skip;r4=(u32)&D(600ac);r5=1;r8=0;}
#define Q R0(10ce5c)
#define ZP R0(0f5948)
#define QT R0(10cd50)
#define CE V0(10cef8)
#define CK R1(10cc54)
#define J0 EQ(M(r0,0x0))EQ(RET(r0))
#define J1 NE(M(r0,0x1))NE(RET(r0))
#define JY EQ(M(r0,0x1))EQ(RET(r0))
#define JR NE(RET(r0))
#define A0(x) A(r0,x)
#define A4(x) A(r4,x)
#define B0(x) B(r0,0x0,x)
#define N0(x) BN(r0,0x0,x)
#define T0 T(r0,0x0)
#define F0(o,s) *(u32*)(((u32)frame)-8+o)=(u32)s;
#define FL(d,o) d=(u32)(*(const u32*)(((u32)frame)-8+o));
#define SL(d,s,o) d=(((u32)(s)<<(o)));
#define SR(d,s,o) d=(((u32)(s)>>(o)));
#define PP P(a,a)
#define AA M(a,z)
#define AY M(a,q)
#define P1 P(b,b)
#define H0 M(a,i)
#define H1 M(a,f)
#define a r0
#define b r1
#define c r2
#define d r3
#define e r4
#define f r5
#define g r6
#define h r7
#define i r8
#define j r9
#define k r10
#define l r11
#define m r12
#define n cmp_a
#define o cmp_b
#define z 0x0
#define q 0x1
#define t 0x10
#define v 0x18
#define x 0x2
#define y 0x4
L1cf8:A0(52298)A(l,60200)A(k,60c74)CK B0(1d1c)R0(103dc8)RET(a)
L1d1c:C(29c,1d50)A(b,60204)P1 U(b,b,12a)T(b&t,0)JR R0(0fe83c)RET(a)
L1d50:C(2a0,1d6c)R0(102e60)RET(a)
L1d6c:C(2a8,1d88)R0(10344c)RET(a)
L1d88:C(2b0,1da4)R0(103848)RET(a)
L1da4:C(2b8,1e90)C(2c0,1e58)Q M(e,a)Q B(e,z,1de4)B(e,q,1df0)G(1e10)
L1de4:SL(b,a,t)a=(u32)(0x13e3);G(1df8)
L1df0:SL(b,a,t)a=(u32)(0x13ed);
L1df8:SR(b,b,t)R2(046f90)M(b,i)M(c,i)M(i,a)V3(0477dc)
L1e10:ZP WS(i,0,a)ZP WS(i,4,a)ZP WS(i,8,a)Q W(b,i,b0)HS(b,a,a)W(b,i,ac)AY b=b&~(q);
WS(i,ac,b)W(b,i,80)b=b&~(0x400);WS(i,80,b)RET(a)
L1e58:A0(522c8)CK T0 J0 Q SL(a,a,t)SR(a,a,t)R1(047820)V1(047490)Y
L1e90:C(2cc,2478)A0(60200)A4(600a4)PP M(k,0xd)W(a,a,160)M(h,0x6)T(a&y,0)M(l,0x3)M(j,x)J1 C(2d4,1f60)Q B0(1f28)A(b,626a6)SL(a,a,t)H(b,b,0)M(c,z)T(b&0x400,0)M(b,q)J(1f10)M(d,b)G(1f14)
L1f10:M(d,c)
L1f14:SR(a,a,t)V4(03e730)P(a,e)HS(a,34,f)G(1f40)
L1f28:P(b,e)H(a,b,34)T(a,0xff)NE(HS(b,38,a))P(a,e)HS(a,34,i)
L1f40:Q P(b,e)WS(b,50,a)WS(g,2c,k)CE Y
L1f60:C(2d8,1ff8)Q B0(1fc0)A(b,626a6)SL(a,a,t)H(b,b,0)M(c,q)B(b&0x400,0,1fa4)M(d,c)
SR(a,a,t)M(b,j)G(1fb0)
L1fa4:SR(a,a,t)M(b,j)M(d,z)
L1fb0:V4(03e730)P(a,e)HS(a,3a,j)G(1fd8)
L1fc0:P(b,e)H(a,b,3a)T(a,0xff)NE(HS(b,3e,a))P(a,e)HS(a,3a,i)
L1fd8:Q P(b,e)WS(b,54,a)WS(g,2c,k)CE Y
L1ff8:C(2dc,2198)Q M(h,a)Q SL(a,a,t)T(h,z)SR(k,a,t)J(2110)SL(a,h,t)M(c,z)M(b,f)M(d,c)SR(a,a,t)V4(03e730)P(a,e)HS(a,34,f)G(2128)
L2110:P(b,e)H(a,b,34)T(a,0xff)NE(HS(b,38,a))P(a,e)HS(a,34,i)
L2128:T(k,z)M(f,0xd)J(2154)M(a,k)M(b,j)M(c,q)M(d,z)V4(03e730)P(a,e)HS(a,3a,j)G(216c)
L2154:P(b,e)H(a,b,3a)T(a,0xff)NE(HS(b,3e,a))P(a,e)HS(a,3a,i)
L216c:Q P(b,e)WS(b,50,a)Q P(b,e)WS(b,54,a)WS(g,2c,f)CE Y
L2198:C(2e0,22bc)C(2e8,22bc)M(a,l)R1(0f5704)T0 JY M(a,j)R1(0f5704)B(a,q,21ec)B(a,x,2254)G(22bc)
L21ec:M(a,l)R1(0f5704)B0(2220)SL(a,a,t)M(c,z)M(b,f)M(d,c)SR(a,a,t)V4(03e730)P(a,e)HS(a,34,f)G(2238)
L2220:P(b,e)H(a,b,34)T(a,0xff)NE(HS(b,38,a))P(a,e)HS(a,34,i)
L2238:P(a,e)WS(a,50,i)WS(g,2c,h)CE Y
L2254:M(a,l)R1(0f5704)B0(2288)SL(a,a,t)M(b,j)SR(a,a,t)M(c,q)M(d,z)V4(03e730)P(a,e)HS(a,3a,j)G(22a0)
L2288:P(b,e)H(a,b,3a)T(a,0xff)NE(HS(b,3e,a))P(a,e)HS(a,3a,i)
L22a0:P(a,e)WS(a,54,i)WS(g,2c,h)CE Y
L22bc:C(2f0,246c)P(a,e)T0 J0 C(2f4,23a8)CN(2f8,2310)C(2fc,234c)
L2310:Q P(d,e)b=((((a&255u)<32u)?((u32)(f)<<(a&255u)):0u));U(c,d,40)b=b&0xff;T(a,q)a=c|b;US(d,40,a)N(2340)Q P(b,e)US(b,42,a)
L2340:Y
L234c:CN(300,236c)C(304,23a8)
L236c:Q P(d,e)b=((((a&255u)<32u)?((u32)(f)<<(a&255u)):0u));U(c,d,41)b=b&0xff;T(a,q)a=c|b;US(d,41,a)N(239c)Q P(b,e)US(b,48,a)
L239c:Y
L23a8:C(308,2460)CN(30c,23d8)C(310,240c)
L23d8:Q P(d,e)b=~((((a&255u)<32u)?((u32)(f)<<(a&255u)):0u));U(c,d,40)b=b&0xff;T(a,q)a=c&b;US(d,40,a)EQ(P(a,e))EQ(US(a,42,i))Y
L240c:CN(314,242c)C(318,2460)
L242c:Q P(d,e)b=~((((a&255u)<32u)?((u32)(f)<<(a&255u)):0u));U(c,d,41)b=b&0xff;T(a,q)a=c&b;US(d,41,a)EQ(P(a,e))EQ(US(a,48,i))Y
L2460:Z
L246c:Z
L2478:C(31c,2748)A0(60200)A4(600a0)PP W(a,a,160)T(a&y,0)J1 C(320,24c0)
L24b8:M(a,0x25)G(2624)
L24c0:C(324,24d8)
L24d0:M(a,0x5)G(2624)
L24d8:C(328,24f0)
L24e8:a=(u32)(0x221);G(2624)
L24f0:C(32c,2508)
L2500:a=(u32)(0x201);G(2624)
L2508:C(330,2520)
L2518:a=(u32)(0x821);G(2624)
L2520:C(334,2538)
L2530:a=(u32)(0x801);G(2624)
L2538:C(338,2550)
L2548:M(a,0x31)G(2624)
L2550:C(33c,2568)
L2560:M(a,0x11)G(2624)
L2568:C(340,2580)
L2578:M(a,0x2a)G(2624)
L2580:C(344,2598)
L2590:M(a,0xa)G(2624)
L2598:C(348,25b0)
L25a8:a=(u32)(0x422);G(2624)
L25b0:C(350,25c8)
L25c0:a=(u32)(0x402);G(2624)
L25c8:C(358,25e0)
L25d8:a=(u32)(0x1022);G(2624)
L25e0:C(360,25f8)
L25f0:a=(u32)(0x1002);G(2624)
L25f8:C(368,2610)
L2608:AY G(2624)
L2610:C(36c,262c)
L2620:M(a,x)
L2624:V1(03fcc0)G(2730)
L262c:C(370,2654)
L263c:M(a,0x100)V1(03fcc0)Q P(b,e)US(b,3c,a)G(2730)
L2654:C(374,2678)AA V1(03fcc0)a=g+0x144;V1(0a994c)G(2730)
L2678:C(37c,2724)M(a,y)R1(0f5704)T(a,t)
if(n<=o){switch(a){case 0:G(269c)case 1:G(26a0)case 2:G(26a4)case 3:G(26a8)case 4:G(26ac)case 5:G(26b0)case 6:G(26b4)case 7:G(26b8)case 8:G(26bc)case 9:G(26c0)
case 10:G(26c4)case 11:G(26c8)case 12:G(26cc)case 13:G(26d0)case 14:G(26d4)case 15:G(26d8)case 16:G(26dc)default:break;}}
G(2730)
L269c:G(26e0)
L26a0:G(26e4)
L26a4:G(26e8)
L26a8:G(26ec)
L26ac:G(26f0)
L26b0:G(26f4)
L26b4:G(26f8)
L26b8:G(26fc)
L26bc:G(2700)
L26c0:G(2704)
L26c4:G(2708)
L26c8:G(270c)
L26cc:G(2710)
L26d0:G(2714)
L26d4:G(2718)
L26d8:G(271c)
L26dc:G(2720)
L26e0:G(24b8)
L26e4:G(24d0)
L26e8:G(24e8)
L26ec:G(2500)
L26f0:G(2518)
L26f4:G(2530)
L26f8:G(2548)
L26fc:G(2560)
L2700:G(2578)
L2704:G(2590)
L2708:G(25a8)
L270c:G(25c0)
L2710:G(25d8)
L2714:G(25f0)
L2718:G(2608)
L271c:G(2620)
L2720:G(263c)
L2724:Z
L2730:Q P(b,e)US(b,3d,a)Y
L2748:C(384,29a8)P(a,l)M(h,x)W(a,a,160)T(a&y,0)J1 C(38c,2798)Q V1(066eac)Y
L2798:C(394,27d8)A0(600e8)PP T0 J0 Q M(b,f)V2(06713c)H1 RET(a)
L27d8:C(39c,2850)A0(600e8)PP T0 J0 Q M(f,a)Q M(e,a)Q SL(b,e,t)
SL(c,a,t)SR(a,b,t)SR(b,c,t)R2(04785c)M(b,a)T(b,0)J0 a=f&0xff;M(c,h)V3(06e8f0)Y
L2850:C(3a0,2954)A0(600e8)PP T0 J0 Q e=a&0xff;Q SL(a,a,t)
SR(a,a,t)T(a,0)J(28b4)R1(047820)T0 if(a){*(ScriptPosition*)((u32)frame-8+0x30)=*(ScriptPosition*)a;G(28c4)}Z
L28b4:*(ScriptPosition*)((u32)frame-8+0x30)=*(ScriptPosition*)(g+0x1c);
L28c4:F0(0x3c,i)F0(0x40,i)F0(0x44,i)*(u8*)(((u32)frame)-8+0x48)=(u8)h;
Q a=a&0xff;*(u16*)(((u32)frame)-8+0x4a)=(u16)a;Q *(u8*)(((u32)frame)-8+0x4c)=(u8)a;Q SL(a,a,v)
a=(((u32)((s32)(a)>>(v))));*(u16*)(((u32)frame)-8+0x4e)=(u16)a;Q *(u8*)(((u32)frame)-8+0x50)=(u8)a;Q g=a&0xff;T(g,0)J(2934)Q SL(a,a,t)f=((u32)frame)-8+0x3c;d=((u32)frame)-8+0x30;M(b,g)M(c,e)SR(a,a,t)
M(arg5,f)V5(06eb80)G(2948)
L2934:b=((u32)frame)-8+0x30;c=((u32)frame)-8+0x3c;M(a,e)M(d,i)V4(06e7a0)
L2948:Y
L2954:C(3a8,2980)Q SL(a,a,t)SR(a,a,t)V1(06ec84)Y
L2980:A0(523b0)CK T0 J0 V0(066f9c)Y
L29a8:C(3b8,2cec)T(h,z)A(i,60204)A(h,600b8)M(k,0xa)M(j,0x3)J1 P(a,i)U(a,a,d7)BN(a,0x3,29f8)Q Y
L29f8:C(3c0,2a80)P(g,i)QT M(d,a)H(b,g,d4)H(c,g,70)A0(523c8)R4(10eb98)R1(0f57e8)P(b,e)WS(b,80,a)P(a,e)W(a,a,80)T0 J0 US(a,1c1,f)P(a,e)P(c,h)W(b,a,80)a=c+0xc;V2(1167f0)P(b,e)W(c,b,80)H1 W(b,c,18)
b=b|0x4000000;WS(c,18,b)RET(a)
L2a80:C(3ec,2af0)V0(1091b4)QT M(b,a)A0(523f4)R2(10eb98)R1(0f57e8)M(i,a)T(i,0)J0 US(i,1c1,f)U(a,g,1c1)M(b,i)T(a,x)EQ(US(g,1c1,k))P(a,h)a=a+0x20;V2(1167f0)P(b,e)AY WS(b,80,i)US(i,1f4,a)RET(a)
L2af0:C(3fc,2b70)V0(1091b4)QT M(b,a)A0(52404)R2(10eb98)R1(0f57e8)P(b,e)WS(b,80,a)P(a,e)W(a,a,80)T0 J0 US(a,1c1,f)P(a,e)P(c,h)W(b,a,80)a=c+0xc;V2(1167f0)P(b,e)
W(c,b,80)H1 W(b,c,18)b=b|0x4000000;WS(c,18,b)RET(a)
L2b70:C(40c,2bf4)P(g,i)QT M(d,a)H(b,g,d4)H(c,g,70)A0(52414)R4(10eb98)R1(0f57e8)P(b,e)WS(b,80,a)P(a,e)W(a,a,80)T0 J0 US(a,1c1,f)P(b,e)P(a,h)W(b,b,80)V2(1167f0)P(b,e)W(c,b,80)H1 W(b,c,18)b=b|0x4000000;
WS(c,18,b)RET(a)
L2bf4:C(438,2c5c)P(a,e)N0(2c14)V0(0407fc)
L2c14:Q P(b,i)a=a&0xff;HS(b,d4,a)Q SL(b,a,t)d=a&0xff;P(c,i)A0(52440)SR(b,b,t)
HS(c,70,d)R2(04680c)US(a,1c1,j)P(b,i)AY US(b,7e,a)RET(a)
L2c5c:C(448,2c88)W(a,g,18)a=a|0x100;WS(g,18,a)CE Y
L2c88:C(450,2ca8)V0(046794)Y
L2ca8:A0(52454)CK T0 J0 P(a,e)P(c,h)W(b,a,80)a=c+0xc;V2(1168f8)P(a,e)W(a,a,80)V1(0f58c0)Y
L2cec:C(45c,2dc8)C(464,2d44)Q A(b,600b8)P1 HS(b,1a,a)A0(600b8)P(c,a)AY H(b,c,1a)HS(c,1c,b)A(b,600b8)P1 US(b,18,a)RET(a)
L2d44:C(468,2d88)A0(600b8)PP HS(a,1a,i)A0(600b8)P(c,a)AY H(b,c,1a)HS(c,1c,b)A(b,600b8)P1 US(b,18,i)RET(a)
L2d88:A0(5246c)CK T0 J0 Q A(b,600b8)P1 HS(b,1c,a)A0(600b8)P(b,a)AY US(b,18,a)RET(a)
L2dc8:C(474,2e98)A0(5247c)A(h,60204)CK B0(2e14)Q P(b,h)HS(b,6a,a)A(b,46330)AY P(c,e)WS(b,0,a)WS(c,c,a)RET(a)
L2e14:C(480,2e6c)P(a,e)P(b,h)W(g,a,68)H1 US(b,7a,f)V1(0468b0)M(a,x)V1(052904)W(a,g,b0)M(c,0xe)HS(a,4,i)A0(46330)P(b,e)WS(a,0,c)H1 WS(b,c,f)RET(a)
L2e6c:C(488,2e98)P(b,e)AY WS(b,c,a)P(b,h)US(b,d8,i)RET(a)
L2e98:C(490,2f30)C(498,2ee0)P(a,e)US(a,334,f)P(b,l)W(a,b,15c)a=a|0x8000000;WS(b,15c,a)V0(0fdb64)H1 RET(a)
L2ee0:C(49c,2f24)P(a,e)US(a,334,i)P(b,l)W(a,b,160)BN(a&y,0,2f18)T(a&0x20,0)EQ(W(a,b,15c))EQ(a=a&~(0x8000000);)EQ(WS(b,15c,a))
L2f18:Y
L2f24:Z
L2f30:C(4a0,2fa0)P(a,e)T0 J0 Q P(b,e)US(b,8b8,a)Q P(b,e)US(b,8b9,a)Q P(b,e)US(b,8ba,a)Q P(b,e)US(b,8bb,a)Q P(b,e)b=b+0x800;HS(b,bc,a)Y
L2fa0:C(4a8,3020)C(4b0,2fd0)Q Y
L2fd0:A0(524b4)CK T0 J1 C(4b8,3014)QT K(a,a,0)T(a,0x30)NE(AY )EQ(AA )RET(a)
L3014:Z
L3020:C(4bc,3a3c)A(k,60204)P(b,k)U(b,b,12a)T(b&t,0)JR A0(524c4)A(h,60078)CK B0(30b8)ZP P(b,k)M(e,z)US(b,87,a)P(a,k)U(a,a,87)T0 if((s32)n<=(s32)o){G(309c)}
L307c:QT b=g+((u32)(e)<<(x));WS(b,18c,a)P(a,k)e=e+q;U(a,a,87)T(e,a)if((s32)n<(s32)o){G(307c)}
L309c:W(a,g,18)a=a|0x20;WS(g,18,a)CE Y
L30b8:A0(524cc)G(3214)
L3214:CK B0(32a8)Q P(b,e)f=a&0xff;W(a,b,68)W(a,a,b0)H(a,a,4)R1(047820)W(b,g,18)M(e,a)a=b|0x20;
WS(g,18,a)T(f,z)M(h,z)if((s32)n<=(s32)o){G(3270)}
L3258:QT b=g+((u32)(h)<<(x));h=h+q;WS(b,18c,a)T(h,f)if((s32)n<(s32)o){G(3258)}
L3270:W(a,e,b0)P(b,k)U(c,a,24)a=f-q;US(b,86,c)W(c,e,b0)U(b,c,24)T(b,a)if((s32)n<(s32)o){a=b+q;}
if((s32)n<(s32)o){US(c,24,a)}CE Y
L32a8:C(4d4,33f8)P(a,l)M(e,z)T0 EQ(M(a,e))EQ(RET(a))C(4d8,3318)Q f=((u32)frame)-8+0x254;c=a&0xff;A(b,524dc)H1 V3(005e80)QT M(b,f)R2(103b04)P(b,l)U(b,b,16c)T(b,a)EQ(M(e,q))G(33b4)
L3318:C(4f0,3360)Q f=((u32)frame)-8+0x1d4;c=a&0xff;A(b,524f4)H1 V3(005e80)QT M(b,f)R2(103b04)P(b,l)U(b,b,16c)T(b,a)
if((s32)n>=(s32)o){M(e,q)}G(33b4)
L3360:C(508,33a8)Q f=((u32)frame)-8+0x154;c=a&0xff;A(b,5250c)H1 V3(005e80)QT M(b,f)R2(103b04)P(b,l)U(b,b,16c)T(b,a)
if((s32)n<=(s32)o){M(e,q)}G(33b4)
L33a8:M(a,e)RET(a)
L33b4:M(f,z)
L33b8:QT b=g+((u32)(f)<<(x));f=f+q;WS(b,18c,a)T(f,x)if((s32)n<(s32)o){G(33b8)}T(e,z)W(a,g,14)J(33e4)W(b,g,18c)G(33e8)
L33e4:W(b,g,190)
L33e8:R2(10cba0)Y
L33f8:C(520,34f8)A0(52528)M(e,z)CK B0(3440)Q M(h,a)Q M(f,a)M(a,h)R1(022068)T(f,a)EQ(M(e,q))G(34b4)
L3440:C(52c,3474)Q M(h,a)Q M(f,a)M(a,h)R1(022068)T(a,f)if((s32)n>=(s32)o){M(e,q)}G(34b4)
L3474:C(530,34a8)Q M(h,a)Q M(f,a)M(a,h)R1(022068)T(a,f)if((s32)n<=(s32)o){M(e,q)}G(34b4)
L34a8:M(a,e)RET(a)
L34b4:M(f,z)
L34b8:QT b=g+((u32)(f)<<(x));f=f+q;WS(b,18c,a)T(f,x)if((s32)n<(s32)o){G(34b8)}T(e,z)W(a,g,14)J(34e4)W(b,g,18c)G(34e8)
L34e4:W(b,g,190)
L34e8:R2(10cba0)Y
L34f8:C(534,35d4)A0(5253c)M(e,z)CK B0(3534)Q P(b,h)W(b,b,28)T(b,a)EQ(M(e,q))G(3590)
L3534:C(540,355c)Q P(b,h)W(b,b,28)T(b,a)if(n>=o){M(e,q)}G(3590)
L355c:C(544,3584)Q P(b,h)W(b,b,28)T(b,a)if(n<=o){M(e,q)}G(3590)
L3584:M(a,e)RET(a)
L3590:M(f,z)
L3594:QT b=g+((u32)(f)<<(x));f=f+q;WS(b,18c,a)T(f,x)if((s32)n<(s32)o){G(3594)}T(e,z)W(a,g,14)J(35c0)W(b,g,18c)G(35c4)
L35c0:W(b,g,190)
L35c4:R2(10cba0)Y
L35d4:C(548,36b0)A0(5254c)M(f,z)CK B0(3610)R0(0f68ec)M(e,a)R0(0f68ec)T(e,a)EQ(M(f,q))G(366c)
L3610:C(550,3638)R0(0f68ec)M(e,a)R0(0f68ec)T(a,e)if((s32)n>=(s32)o){M(f,q)}G(366c)
L3638:C(554,3660)R0(0f68ec)M(e,a)R0(0f68ec)T(a,e)if((s32)n<=(s32)o){M(f,q)}G(366c)
L3660:H1 RET(a)
L366c:M(e,z)
L3670:QT b=g+((u32)(e)<<(x));e=e+q;WS(b,18c,a)T(e,x)if((s32)n<(s32)o){G(3670)}T(f,z)W(a,g,14)J(369c)W(b,g,18c)G(36a0)
L369c:W(b,g,190)
L36a0:R2(10cba0)Y
L36b0:C(558,38b4)M(e,z)M(h,e)M(c,e)l=e-q;b=((u32)frame)-8+0x20;
L36d4:a=c+q;*(u8*)(b+c)=(u8)i;c=a&0xff;T(c,t)if(n<o){G(36d4)}QT A(b,600b0)M(c,a)P(a,b)T0 NE(W(e,a,1c0))NE(T(e,z))J(3714)A(b,52560)a=e+0x4e;V3(015a10)
L3714:M(i,z)US(e,90,i)
L371c:a=e+i;M(b,z)US(a,44,b)F0(0x8,a)US(a,21,b)P(a,j)V1(109444)Q a=a&0xff;T(a,0)
F0(0xc,a)J(37f8)A0(52564)R1(10cce4)M(k,a)T(k,0)J(379c)A(b,52568)a=((u32)frame)-8+0x20;M(c,k)V3(005e80)
a=(u32)(*(const s8*)(((u32)frame)-8+0x20));T(a,0x6e)EQ(a=(u32)(*(const s8*)(((u32)frame)-8+0x21));)EQ(T(a,0x6f))EQ(a=(u32)(*(const s8*)(((u32)frame)-8+0x22));)
EQ(T(a,0x74))EQ(M(h,f))J(379c)A(c,5256c)M(b,k)AA R3(103c2c)M(h,a)
L379c:T(l,z)if((s32)n<(s32)o){SL(a,i,v)}if((s32)n<(s32)o){l=(((u32)((s32)(a)>>(v))));}T(h,z)
if((s32)n<=(s32)o){G(37f8)}SL(a,h,t)SR(a,a,t)R1(0bdba0)N0(37cc)BN(h,q,37f8)
L37cc:FL(b,0xc)FL(a,0x8)US(a,44,b)FL(b,0xc)
US(a,21,b)QT b=g+((u32)(i)<<(x));WS(b,18c,a)U(a,e,90)a=a+q;US(e,90,a)
L37f8:a=i+q;i=a&0xff;T(i,0x7)if(n<o){G(371c)}US(e,8f,l)M(b,0x6)A0(600ac)US(e,20,b)M(c,0x7)P(b,a)A0(60204)WS(b,10,c)PP b=c-0x8;US(a,86,b)W(a,g,18)a=a|0x20;
WS(g,18,a)CE W(b,g,18)A0(60200)b=b&~(0x80000000u);
WS(g,18,b)P(c,a)W(b,c,160)b=b|t;WS(c,160,b)P(b,a)W(a,b,160)a=a|0x8;WS(b,160,a)R0(0a567c)BN(a,x,3888)M(a,0x3)G(38a4)
L3888:R0(0a567c)B(a,q,38a0)R0(0a567c)N0(38a8)
L38a0:M(a,y)
L38a4:V1(0a5644)
L38a8:Y
L38b4:C(584,3a30)A0(55c3c)M(h,0x9c)P(b,a)M(a,h)R2(10c594)P(b,e)M(f,a)W(a,b,3a8)h=h-0x9d;B0(3928)P(a,k)US(a,86,h)P(a,e)a=a+0xac;V1(0a957c)P(a,e)W(a,a,3a8)B0(3920)V1(10c5dc)P(a,e)WS(a,3a8,i)
L3920:P(a,e)WS(a,3a8,i)
L3928:QT M(c,a)A(b,5258c)a=f+v;V3(015a10)M(i,z)M(k,0x7)
L3944:P(a,j)V1(109444)Q b=a&0xff;T(b,0)J(3984)T(h,z)if((s32)n<(s32)o){SL(a,i,v)}
if((s32)n<(s32)o){h=(((u32)((s32)(a)>>(v))));}a=f+i;US(a,3,b)QT b=g+((u32)(i)<<(x));WS(b,18c,a)U(a,f,0)
a=a+q;US(f,0,a)
L3984:i=i+q;T(i,y)if((s32)n<(s32)o){G(3944)}US(f,2,h)P(a,e)b=k-0x8;WS(a,3a8,f)P(a,e)WS(a,10,k)A0(60204)PP US(a,86,b)W(a,g,18)a=a|0x20;WS(g,18,a)CE W(a,g,18)
a=a&~(0x80000000u);WS(g,18,a)P(b,l)W(a,b,160)a=a|t;
WS(b,160,a)P(b,l)W(a,b,160)a=a|0x8;WS(b,160,a)R0(0a567c)BN(a,x,3a04)M(a,0x3)G(3a20)
L3a04:R0(0a567c)B(a,q,3a1c)R0(0a567c)N0(3a24)
L3a1c:M(a,y)
L3a20:V1(0a5644)
L3a24:Y
L3a30:Z
L3a3c:C(590,3ae4)A(b,60204)P1 U(b,b,12a)T(b&t,0)JR M(f,z)H1 R1(10cd90)T0 EQ(H1 )EQ(RET(a))
SL(a,a,t)SR(a,a,t)R1(0bdba0)M(e,a)a=f-q;T(e,a)EQ(H1 )EQ(RET(a))
L3aa4:QT b=g+((u32)(f)<<(x));f=f+q;WS(b,18c,a)T(f,x)if((s32)n<(s32)o){G(3aa4)}T(e,z)W(a,g,14)J(3ad0)W(b,g,18c)G(3ad4)
L3ad0:W(b,g,190)
L3ad4:R2(10cba0)Y
L3ae4:C(598,3be0)C(5a0,3b84)H0 R1(10cd90)M(e,a)T(e,z)if((s32)n<=(s32)o){H0 }if((s32)n<=(s32)o){RET(a)}T(e,0x80)
if((s32)n<(s32)o){G(3b40)}T(e,0xbf)if((s32)n>(s32)o){G(3b40)}V0(103d30)M(a,e)V1(103d78)G(3b58)
L3b40:a=(u32)(0x4a1);T(e,a)if((s32)n<(s32)o){G(3b5c)}T(e,0x4c0)if((s32)n>(s32)o){G(3b5c)}M(a,e)
L3b58:V1(103d98)
L3b5c:SL(a,e,t)M(e,q)M(b,e)SR(a,a,t)R2(0bdb30)T0 EQ(M(e,z))M(a,e)RET(a)
L3b84:C(5a4,3bd4)M(e,z)M(a,e)R1(10cd90)T0 if((s32)n<=(s32)o){M(a,e)}if((s32)n<=(s32)o){RET(a)}
SL(a,a,t)M(b,e)SR(a,a,t)R2(0bdb30)T0 NE(M(e,q))M(a,e)RET(a)
L3bd4:Z
L3be0:C(5a8,3c34)P(a,l)T0 J0 a=~(z);R1(10cd90)P(b,l)WS(b,168,a)P(b,l)W(a,b,168)T0 
if((s32)n<(s32)o){AA }if((s32)n<(s32)o){WS(b,168,a)}if((s32)n>=(s32)o){AY }RET(a)
L3c34:C(5b4,3c50)R0(0f53fc)RET(a)
L3c50:C(5bc,3e4c)C(5c4,3ca0)A0(525c8)CK T0 J0 Q P(b,l)*(u32*)(b+((u32)(a)<<(x)))=(u32)i;Y
L3ca0:C(5d0,3d64)P(a,l)M(e,z)T0 EQ(M(a,e))EQ(RET(a))C(5d4,3d0c)Q e=((u32)frame)-8+0xd4;M(c,a)A(b,525d8)M(a,e)V3(005e80)QT M(b,e)R2(103b04)P(b,l)M(e,q)US(b,16c,a)G(3d58)
L3d0c:C(5ec,3d58)Q e=((u32)frame)-8+0x54;M(c,a)A(b,525f0)M(a,e)V3(005e80)QT M(b,e)R2(103b04)P(c,l)a=a&0xff;U(b,c,16c)M(e,q)a=b+a;US(c,16c,a)
L3d58:M(a,e)RET(a)
L3d64:C(604,3e40)P(a,e)T0 J0 C(60c,3dd0)Q P(b,e)T0 c=b+0x300;
b=((((a&255u)<32u)?((u32)(f)<<(a&255u)):0u));H(d,c,6e)SL(b,b,t)b=d|((u32)(b)>>(t));HS(c,6e,b)N(3e34)
SL(a,a,t)SR(a,a,t)V1(07884c)G(3e34)
L3dd0:C(610,3e10)Q P(b,e)T0 c=b+0x300;b=~((((a&255u)<32u)?((u32)(f)<<(a&255u)):0u));H(d,c,6e)SL(b,b,t)
a=d&((u32)(b)>>(t));HS(c,6e,a)N(3e34)V0(0789ec)G(3e34)
L3e10:C(614,3e34)Q P(b,e)c=((((a&255u)<32u)?((u32)(f)<<(a&255u)):0u));a=b+0x300;HS(a,6e,c)
L3e34:Y
L3e40:Z
L3e4c:C(61c,3f98)C(620,3f1c)A(b,6263c)US(g,1bc,f)base_tmp=b;c=*(u32*)(base_tmp+0);d=*(u32*)(base_tmp+4);e=*(u32*)(base_tmp+8);
e=d*c+e;M(a,0xc8)SR(c,e,t)a=c*a;SR(a,a,t)SL(a,a,t)SR(a,a,t)
T(a,0x64)a=n-o;WS(b,0,e)if((s32)(n-o)<0){a=z-a;}A4(5262c)A(f,52628)US(g,1bd,a)
L3eac:P(a,j)V1(109444)H1 CK B0(3eac)M(a,e)CK B0(3f04)Q SL(a,a,t)SR(a,a,t)
U(b,g,1be)a=a&0xff;b=b+a;US(g,1be,b)U(a,g,1bd)b=b&0xff;T(b,a)if(n<=o){G(3eac)}G(3f04)
L3f04:US(g,1bd,i)US(g,1be,i)US(g,1bc,i)Y
L3f1c:C(634,3f74)A4(52640)A(f,5263c)
L3f34:P(a,j)V1(109444)H1 CK B0(3f34)M(a,e)CK B0(3f34)US(g,1bd,i)US(g,1be,i)US(g,1bc,i)Y
L3f74:A0(52644)CK T0 NE(US(g,1bd,i))NE(US(g,1be,i))NE(US(g,1bc,i))J1 
L3f98:C(648,45b4)A0(52650)M(h,0x3)CK B0(3fe0)Q M(e,a)Q M(b,a)M(a,e)V2(0220b0)Y
L3fe0:C(654,42e4)M(h,0xc)M(g,0x3)Q WS(k,8,a)Q WS(k,c,a)Q WS(k,10,a)WS(k,14,f)P(a,l)W(a,a,160)B(a&y,0,4178)H0 M(h,0x5)M(e,y)R1(0f5704)B0(404c)H0 R1(0f5704)BN(a,x,4104)
L404c:H1 R1(0f5704)T0 if((s32)n<=(s32)o){G(4070)}H1 R1(0f5704)T(a,0x64)if((s32)n<=(s32)o){WS(k,8,i)}
if((s32)n<=(s32)o){G(4114)}
L4070:H1 R1(0f5704)T(a,0xc8)if((s32)n<=(s32)o){G(4094)}H1 R1(0f5704)T(a,0x12c)if((s32)n<=(s32)o){WS(k,8,h)}
if((s32)n<=(s32)o){G(4114)}
L4094:H1 R1(0f5704)T(a,0x12c)if((s32)n<=(s32)o){G(40b8)}H1 R1(0f5704)T(a,0x1f4)if((s32)n<=(s32)o){WS(k,8,f)}
if((s32)n<=(s32)o){G(4114)}
L40b8:H1 R1(0f5704)T(a,0x1f4)if((s32)n<=(s32)o){G(40e0)}H1 R1(0f5704)T(a,0x2bc)if((s32)n<=(s32)o){M(a,x)}
if((s32)n<=(s32)o){WS(k,8,a)}if((s32)n<=(s32)o){G(4114)}
L40e0:H1 R1(0f5704)T(a,0x2bc)if((s32)n<=(s32)o){G(4114)}H1 R1(0f5704)T(a,0x320)if((s32)n<=(s32)o){WS(k,8,g)}G(4114)
L4104:H0 R1(0f5704)T(a,q)EQ(WS(k,8,e))
L4114:AA R1(0f5704)T(a,y)AY N(4144)R1(0f5704)M(e,a)M(a,0x3)R1(0f5704)a=e*a;V1(022100)G(416c)
L4144:R1(0f5704)M(f,a)M(a,x)R1(0f5704)M(e,a)M(a,0x3)R1(0f5704)b=e*a;H1 V2(0220b0)
L416c:Y
L4178:AA R1(0f5704)BN(a,x,4294)A0(5265c)G(4298)
L4294:A0(52678)
L4298:R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,h)A0(600b8)P(b,e)PP W(b,b,84)
a=a+0x20;V2(1167f0)Y
L42e4:C(690,44c4)M(g,0xc)Q WS(k,8,a)Q WS(k,c,a)Q WS(k,10,a)a=~(z);WS(k,14,a)P(a,l)W(a,a,160)B(a&y,0,445c)H0 M(e,0x5)M(g,y)R1(0f5704)N0(43d4)H1 R1(0f5704)T0 
if((s32)n<=(s32)o){G(4364)}H1 R1(0f5704)T(a,0x64)if((s32)n<=(s32)o){WS(k,8,i)}if((s32)n<=(s32)o){G(43f8)}
L4364:H1 R1(0f5704)T(a,0x12c)if((s32)n<=(s32)o){G(4388)}H1 R1(0f5704)T(a,0x1f4)if((s32)n<=(s32)o){WS(k,8,f)}
if((s32)n<=(s32)o){G(43f8)}
L4388:H1 R1(0f5704)T(a,0x1f4)if((s32)n<=(s32)o){G(43b0)}H1 R1(0f5704)T(a,0x2bc)if((s32)n<=(s32)o){M(a,x)}
if((s32)n<=(s32)o){WS(k,8,a)}if((s32)n<=(s32)o){G(43f8)}
L43b0:H1 R1(0f5704)T(a,0x2bc)if((s32)n<=(s32)o){G(43f8)}H1 R1(0f5704)T(a,0x320)if((s32)n<=(s32)o){WS(k,8,h)}G(43f8)
L43d4:H0 R1(0f5704)T(a,q)EQ(WS(k,8,g))J(43f8)H0 R1(0f5704)T(a,x)EQ(WS(k,8,e))
L43f8:AA R1(0f5704)T(a,y)AY N(4428)R1(0f5704)M(e,a)M(a,0x3)R1(0f5704)a=e*a;V1(022100)G(4450)
L4428:R1(0f5704)M(f,a)M(a,x)R1(0f5704)M(e,a)M(a,0x3)R1(0f5704)b=e*a;H1 V2(0220b0)
L4450:Y
L445c:AA R1(0f5704)BN(a,x,4474)A0(52698)G(4478)
L4474:A0(526b4)
L4478:R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,g)A0(600b8)P(b,e)PP W(b,b,84)
a=a+0x20;V2(1167f0)Y
L44c4:A0(526cc)A(h,60078)CK B0(450c)P(a,l)W(a,a,160)T(a&y,0)J1 W(a,g,18)a=a|0x2000;WS(g,18,a)CE Y
L450c:C(6d4,4564)P(a,l)W(a,a,160)T(a&y,0)J1 A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1168f8)P(a,e)W(a,a,84)V1(0f58c0)Y
L4564:C(6d8,458c)P(a,h)A(b,60cdc)a=a+0x178;c=(u32)(0x387);a=a+0x800;G(45b0)
L458c:C(6e0,45b4)P(b,h)A0(60cdc)b=b+0x178;c=(u32)(0x387);b=b+0x800;
L45b0:V3(009008)
L45b4:C(6e8,45f0)A0(526f0)CK T0 J0 Q V1(022100)Y
L45f0:C(6f4,468c)A0(600b8)M(h,y)PP A(f,60204)P(b,a)B(b,z,4638)
L461c:BN(b,g,462c)V2(1168f8)G(4638)
L462c:W(b,b,1dc)BN(b,z,461c)
L4638:P(a,f)US(a,7e,i)P(a,e)WS(a,10,h)P(a,l)W(a,a,160)BN(a&y,0,4660)B(a&0x20,0,4670)
L4660:M(a,0x3)V1(0a5644)P(a,e)US(a,334,i)
L4670:P(c,l)W(b,c,15c)AY b=b&~(0x8000000);WS(c,15c,b)RET(a)
L468c:C(6fc,4838)A0(52700)M(g,0x7)M(f,0xc)M(h,0x3)A(j,60204)CK B0(471c)M(a,h)V1(0a1750)P(a,e)W(a,a,3a8)B0(4710)P(a,j)b=h-y;US(a,86,b)P(a,e)a=a+0xac;V1(0a957c)
P(a,e)W(a,a,3a8)B0(4708)V1(10c5dc)P(a,e)WS(a,3a8,i)
L4708:P(a,e)WS(a,3a8,i)
L4710:Y
L471c:C(70c,4790)M(a,x)V1(0a1750)P(a,e)W(a,a,3a8)B0(4784)M(a,x)P(b,j)a=a-0x3;US(b,86,a)P(a,e)a=a+0xac;V1(0a957c)P(a,e)W(a,a,3a8)B0(477c)V1(10c5dc)P(a,e)WS(a,3a8,i)
L477c:P(a,e)WS(a,3a8,i)
L4784:Y
L4790:C(714,47bc)Q c=a&0xff;P(b,j)HS(b,fa,c)Y
L47bc:C(71c,482c)Q h=a&0xff;Q A(b,6020c)c=a&0xff;P(a,b)B0(481c)US(a,c0,h)P(a,b)US(a,c1,c)P(a,l)W(a,a,15c)T(a&0x80000000u,0)EQ(P(a,b))EQ(HS(a,be,g))J(4814)V0(044f80)
L4814:P(a,e)WS(a,10,f)
L481c:CE Y
L482c:Z
L4838:C(720,488c)A0(52728)A4(60204)CK T0 J0 Q P(b,e)HS(b,f8,a)P(b,e)AA H(b,b,f8)V2(0a6a88)Y
L488c:C(730,4990)A0(52738)M(g,0xd)A(h,60204)CK B0(4948)P(a,e)M(h,z)W(i,a,68)Q B0(4930)A0(51ffc)P(b,l)U(a,a,1)b=(u32)(*(const u32*)(b+((u32)(a)<<(x))));M(a,h)
L48e0:BN(b&(((a&255u)<32u)?((u32)(f)<<(a&255u)):0u),0,48f8)a=a+q;a=a&0xff;T(a,0x20)if(n<o){G(48e0)}
L48f8:T(a,0x7)if(n<=o){M(h,z)}if(n<=o){G(4914)}T(a,0x8)if(n<o){G(4914)}T(a,0xe)if(n<=o){M(h,q)}
L4914:M(a,h)base_tmp=i;b=*(u32*)(base_tmp+0);c=*(u32*)(base_tmp+4);d=*(u32*)(base_tmp+8);V4(0bdbe8)M(a,h)M(b,z)V2(0bdd80)G(493c)
L4930:P(a,e)WS(a,10,g)CE 
L493c:Y
L4948:A0(52740)CK T0 J0 M(a,x)V1(0bdcc0)M(a,x)V1(0bdd84)P(b,h)M(a,x)US(b,d8,a)P(b,e)AY WS(b,c,a)RET(a)
L4990:C(748,4abc)Q e=a&0xff;C(74c,49dc)R0(0f68ec)P(b,k)c=b+y;b=(u32)(*(const u32*)(c+((u32)(e)<<(x))));a=b+a;
*(u32*)(c+((u32)(e)<<(x)))=(u32)a;Y
L49dc:C(750,4a10)R0(0f68ec)P(b,k)c=b+y;b=(u32)(*(const u32*)(c+((u32)(e)<<(x))));a=b-a;*(u32*)(c+((u32)(e)<<(x)))=(u32)a;Y
L4a10:C(754,4a44)R0(0f68ec)P(b,k)c=b+y;b=(u32)(*(const u32*)(c+((u32)(e)<<(x))));a=b*a;*(u32*)(c+((u32)(e)<<(x)))=(u32)a;Y
L4a44:C(758,4a88)R0(0f68ec)M(b,a)T(b,0)J0 P(a,k)f=a+y;a=(u32)(*(const u32*)(f+((u32)(e)<<(x))));
a=(u32)((s32)a/(s32)b);*(u32*)(f+((u32)(e)<<(x)))=(u32)a;Y
L4a88:A0(5275c)CK T0 J0 R0(0f68ec)P(b,k)b=b+((u32)(e)<<(x));WS(b,4,a)Y
L4abc:C(760,4ad8)R0(104f68)RET(a)
L4ad8:C(764,4af8)V0(07b148)Y
L4af8:C(76c,50d0)A0(52774)A(h,60078)M(j,0xc)CK B0(4c90)Q a=a+q;WS(k,8,a)Q WS(k,c,a)P(b,l)W(b,b,160)B(b&y,0,4bc0)AA R1(0f5704)e=a-q;M(g,q)
L4b54:a=g&0xff;R1(0bd438)B0(4ba8)H(b,a,0)BN(b&q,0,4b94)M(b,f)a=g&0xff;c=e&0xff;M(d,z)V4(0bd2fc)V0(0bd574)H1 RET(a)
L4b94:U(a,a,2)T(a,e)JY 
L4ba8:g=g+q;T(g,0x7)if((s32)n<(s32)o){G(4b54)}Y
L4bc0:N0(4bd0)A0(5277c)G(4bd4)
L4bd0:A0(52798)
L4bd4:R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,j)A0(600b8)P(b,e)PP W(b,b,84)
a=a+0x20;V2(1167f0)AA R1(0f5704)e=a-q;M(g,q)
L4c24:a=g&0xff;R1(0bd438)B0(4c78)H(b,a,0)BN(b&q,0,4c64)M(b,f)a=g&0xff;c=e&0xff;M(d,z)V4(0bd2fc)V0(0bd574)H1 RET(a)
L4c64:U(a,a,2)T(a,e)JY 
L4c78:g=g+q;T(g,0x7)if((s32)n<(s32)o){G(4c24)}Y
L4c90:C(7b8,4ed0)Q a=a+q;WS(k,8,a)Q WS(k,c,a)P(b,l)W(b,b,160)B(b&y,0,4da0)M(g,z)M(a,g)R1(0f5704)
e=a-q;
L4cd4:a=g&0xff;R1(0bd438)B0(4d88)H(b,a,0)B(b&q,0,4d88)U(a,a,2)BN(a,e,4d88)a=g&0xff;M(b,q)V2(0bd35c)V0(0bd574)T(g,0x6)NE(M(e,g))if((s32)n>=(s32)o){G(4d7c)}
L4d18:a=e+q;a=a&0xff;R1(0bd438)B0(4d6c)H(a,a,0)B(a&q,0,4d6c)P(a,h)M(b,f)a=a+((u32)(e)<<(x));a=a+0x1000;U(c,a,4d6)U(d,a,4d7)a=g&0xff;V4(0bd2fc)a=e+q;M(b,f)a=a&0xff;V2(0bd35c)V0(0bd574)
L4d6c:e=e+q;T(e,0x6)g=g+q;if((s32)n<(s32)o){G(4d18)}
L4d7c:Y
L4d88:g=g+q;T(g,0x7)if((s32)n<(s32)o){G(4cd4)}Y
L4da0:N0(4db0)A0(527c0)G(4db4)
L4db0:A0(527dc)
L4db4:R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,j)A0(600b8)P(b,e)PP W(b,b,84)
a=a+0x20;V2(1167f0)M(g,z)M(a,g)R1(0f5704)e=a-q;
L4e04:a=g&0xff;R1(0bd438)B0(4eb8)H(b,a,0)B(b&q,0,4eb8)U(a,a,2)BN(a,e,4eb8)a=g&0xff;M(b,q)V2(0bd35c)V0(0bd574)T(g,0x6)NE(M(e,g))if((s32)n>=(s32)o){G(4eac)}
L4e48:a=e+q;a=a&0xff;R1(0bd438)B0(4e9c)H(a,a,0)B(a&q,0,4e9c)P(a,h)M(b,f)a=a+((u32)(e)<<(x));a=a+0x1000;U(c,a,4d6)U(d,a,4d7)a=g&0xff;V4(0bd2fc)a=e+q;M(b,f)a=a&0xff;V2(0bd35c)V0(0bd574)
L4e9c:e=e+q;T(e,0x6)g=g+q;if((s32)n<(s32)o){G(4e48)}
L4eac:Y
L4eb8:g=g+q;T(g,0x7)if((s32)n<(s32)o){G(4e04)}Y
L4ed0:C(7fc,4f30)M(e,z)
L4ee4:a=e&0xff;R1(0bd438)B0(4f18)H(b,a,0)T(b&q,0)NE(U(a,a,2))NE(T0 )J(4f18)M(b,f)a=e&0xff;V2(0bd35c)V0(0bd574)
L4f18:e=e+q;T(e,0x7)if((s32)n<(s32)o){G(4ee4)}Y
L4f30:C(808,5034)P(a,l)W(a,a,160)B(a&y,0,4fa0)M(e,z)
L4f54:a=e&0xff;R1(0bd438)B0(4f88)H(b,a,0)T(b&q,0)NE(U(a,a,2))NE(T0 )J(4f88)M(b,f)a=e&0xff;V2(0bd35c)V0(0bd574)
L4f88:e=e+q;T(e,0x7)if((s32)n<(s32)o){G(4f54)}Y
L4fa0:A0(52810)R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,j)A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1167f0)M(e,z)
L4fe8:a=e&0xff;R1(0bd438)B0(501c)H(b,a,0)T(b&q,0)NE(U(a,a,2))NE(T0 )J(501c)M(b,f)a=e&0xff;V2(0bd35c)V0(0bd574)
L501c:e=e+q;T(e,0x7)if((s32)n<(s32)o){G(4fe8)}Y
L5034:C(830,5078)P(a,l)W(a,a,160)T(a&y,0)J1 W(a,g,18)a=a|0x2000;WS(g,18,a)CE Y
L5078:C(838,50d0)P(a,l)W(a,a,160)T(a&y,0)J1 A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1168f8)P(a,e)W(a,a,84)V1(0f58c0)Y
L50d0:C(83c,5238)A0(52844)M(h,0xc)CK B0(5158)Q SL(a,a,t)SR(b,a,t)WS(k,8,b)A0(5284c)WS(k,c,i)R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 EQ(H0 )EQ(RET(a))
US(a,1c1,h)A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1167f0)Y
L5158:C(868,51cc)Q SL(a,a,t)SR(b,a,t)WS(k,8,b)A0(5286c)WS(k,c,f)R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,h)A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1167f0)H1 RET(a)
L51cc:C(888,51f8)W(a,g,18)a=a|0x2000;WS(g,18,a)CE Y
L51f8:C(890,5238)A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1168f8)P(a,e)W(a,a,84)V1(0f58c0)Y
L5238:C(894,5328)A0(528a0)M(h,0xc)CK B0(52bc)Q SL(b,a,t)SR(b,b,t)A0(528a4)WS(k,8,b)R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,h)A0(600b8)P(b,e)PP W(b,b,84)
a=a+0x20;V2(1167f0)Y
L52bc:C(8c0,52e8)W(a,g,18)a=a|0x2000;WS(g,18,a)CE Y
L52e8:C(8c8,5328)A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1168f8)P(a,e)W(a,a,84)V1(0f58c0)Y
L5328:C(8cc,5584)A0(528d4)M(h,0xc)CK B0(53a8)A0(528dc)R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 V0(0fdb64)P(a,e)W(a,a,84)US(a,1c1,h)A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1167f0)Y
L53a8:C(8fc,5518)Q SL(b,a,t)SR(b,b,t)A0(52900)WS(k,8,b)R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 J0 US(a,1c1,h)A0(600b8)G(54f8)
L54f8:P(b,e)PP W(b,b,84)a=a+0x20;V2(1167f0)Y
L5518:C(91c,5544)W(a,g,18)a=a|0x2000;WS(g,18,a)CE Y
L5544:C(924,5584)A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1168f8)P(a,e)W(a,a,84)V1(0f58c0)Y
L5584:C(928,58b4)A0(52930)M(h,0x3)CK B0(55dc)P(a,l)W(a,a,160)T(a&y,0)J1 W(a,g,18)a=a|0x2000;
WS(g,18,a)CE Y
L55dc:A0(52938)M(g,0xc)CK T0 P(a,l)W(a,a,160)J(5638)T(a&y,0)J1 A0(600b8)P(b,e)PP W(b,b,84)
a=a+0x20;V2(1168f8)P(a,e)W(a,a,84)V1(0f58c0)Y
L5638:T(a&y,0)J1 Q WS(k,8,a)Q WS(k,c,a)A0(5293c)CK T0 NE(WS(k,10,f))N(5694)A0(52940)CK T0 NE(M(a,x))NE(WS(k,10,a))N(5694)A0(52944)CK T0 NE(WS(k,10,i))
L5694:A0(52948)R1(10ccbc)B0(56b0)WS(k,14,i)Q G(56b8)
L56b0:Q WS(k,14,a)
L56b8:A0(5294c)M(j,y)CK T0 NE(WS(k,18,i))N(583c)A0(52950)CK T0 NE(WS(k,18,f))N(583c)A0(52954)M(f,0x5)CK T0 NE(M(a,x))NE(WS(k,18,a))N(583c)A0(52958)M(l,0x6)CK 
T0 NE(WS(k,18,h))N(583c)A0(5295c)M(h,0x7)CK T0 NE(WS(k,18,j))N(583c)A0(52960)CK T0 NE(WS(k,18,f))N(583c)A0(52964)M(f,0xd)CK T0 NE(WS(k,18,l))N(583c)A0(52968)
M(j,0xa)CK T0 NE(WS(k,18,h))N(583c)A0(5296c)CK T0 NE(M(a,0x8))NE(WS(k,18,a))N(583c)A0(52970)CK T0 NE(M(a,0x9))NE(WS(k,18,a))N(583c)A0(52974)CK T0 NE(WS(k,18,j))
N(583c)A0(5297c)CK T0 NE(M(a,0xb))NE(WS(k,18,a))N(583c)A0(52984)CK T0 NE(WS(k,18,g))N(583c)A0(5298c)CK T0 NE(WS(k,18,f))N(583c)A0(52994)CK T0 NE(M(a,0xe))
NE(WS(k,18,a))N(583c)A0(52998)CK T0 NE(M(a,0xf))NE(WS(k,18,a))N(583c)A0(5299c)CK T0 NE(M(a,t))NE(WS(k,18,a))
L583c:Q WS(k,1c,a)Q WS(k,20,a)H0 R1(10cce4)M(c,a)A0(60c9c)A(b,529a0)V3(005e80)A0(529a4)R1(0f57e8)P(b,e)WS(b,84,a)P(a,e)W(a,a,84)T0 EQ(H0 )EQ(RET(a))US(a,1c1,g)
A0(600b8)P(b,e)PP W(b,b,84)a=a+0x20;V2(1167f0)Y
L58b4:C(9bc,58e4)Q A(b,60204)P1 b=b+0x100;HS(b,48,a)Y
L58e4:C(9c4,59d8)Q SL(a,a,t)e=(u32)(0xac2);g=(((u32)((s32)(a)>>(t))));M(a,e)R1(0f5730)BN(a,q,59cc)a=e+q;
R1(0f5730)BN(a,q,59cc)a=e+x;R1(0f5730)BN(a,q,59cc)a=e+0x3;R1(0f5730)BN(a,q,59cc)a=e+y;R1(0f5730)BN(a,q,59cc)a=e+0x5;R1(0f5730)BN(a,q,59cc)a=e+0x6;R1(0f5730)
BN(a,q,59cc)a=e+0x7;R1(0f5730)BN(a,q,59cc)a=e+0x8;R1(0f5730)BN(a,q,59cc)a=e+0x9;R1(0f5730)BN(a,q,59cc)a=(((u32)((s32)(g)>>(y))));SR(c,g,0x1f)a=g+((u32)(a)>>(0x1b));b=((u32)(g)<<(0x1b))-c;
e=(((u32)((s32)(a)>>(0x5))));P(g,l)a=c+(((u32)(b)>>(0x1b))|((u32)(b)<<(32-(0x1b))));d=(u32)(*(const u32*)(g+((u32)(e)<<(x))));
a=d|(((a&255u)<32u)?((u32)(f)<<(a&255u)):0u);*(u32*)(g+((u32)(e)<<(x)))=(u32)a;
L59cc:Y
L59d8:C(9cc,5a3c)Q SL(a,a,t)SR(e,a,t)Q SL(b,a,t)M(a,e)SR(g,b,t)
R1(0f5730)BN(a,q,5a30)P(e,l)SR(d,g,0x5)SR(b,g,0x1f)a=((u32)(g)<<(0x1b))-b;
c=(u32)(*(const u32*)(e+((u32)(d)<<(x))));a=b+(((u32)(a)>>(0x1b))|((u32)(a)<<(32-(0x1b))));a=c|(((a&255u)<32u)?((u32)(f)<<(a&255u)):0u);
*(u32*)(e+((u32)(d)<<(x)))=(u32)a;
L5a30:Y
L5a3c:C(9d4,5acc)Q SL(a,a,t)SR(g,a,t)Q SL(a,a,t)SR(e,a,t)Q 
SL(b,a,t)M(a,g)SR(g,b,t)R1(0f5730)BN(a,q,5ac0)P(h,l)SR(d,e,0x5)SR(b,e,0x1f)
a=((u32)(e)<<(0x1b))-b;a=b+(((u32)(a)>>(0x1b))|((u32)(a)<<(32-(0x1b))));c=(u32)(*(const u32*)(h+((u32)(d)<<(x))));
SR(b,g,0x1f)a=c|(((a&255u)<32u)?((u32)(f)<<(a&255u)):0u);*(u32*)(h+((u32)(d)<<(x)))=(u32)a;a=((u32)(g)<<(0x1b))-b;P(e,l)
SR(d,g,0x5)c=(u32)(*(const u32*)(e+((u32)(d)<<(x))));a=b+(((u32)(a)>>(0x1b))|((u32)(a)<<(32-(0x1b))));
a=c|(((a&255u)<32u)?((u32)(f)<<(a&255u)):0u);*(u32*)(e+((u32)(d)<<(x)))=(u32)a;
L5ac0:Y
L5acc:A0(529dc)CK T0 J1 R0(10cbd0)RET(a)
#undef y
#undef x
#undef v
#undef t
#undef q
#undef z
#undef o
#undef n
#undef m
#undef l
#undef k
#undef j
#undef i
#undef h
#undef g
#undef f
#undef e
#undef d
#undef c
#undef b
#undef a
#undef H1
#undef H0
#undef P1
#undef AY
#undef AA
#undef PP
#undef SR
#undef SL
#undef FL
#undef F0
#undef T0
#undef N0
#undef B0
#undef A4
#undef A0
#undef JR
#undef JY
#undef J1
#undef J0
#undef CK
#undef CE
#undef QT
#undef ZP
#undef Q
#undef L
#undef F
#undef D
#undef PTR
#undef B8
#undef H16
#undef S
#undef TOK
#undef INT
#undef NUM
#undef CC
#undef T
#undef M
#undef P
#undef K
#undef I
#undef US
#undef U
#undef HS
#undef H
#undef WS
#undef W
#undef ST
#undef LD
#undef G
#undef RET
#undef Z
#undef Y
#undef CN
#undef C
#undef A
#undef BN
#undef B
#undef NE
#undef EQ
#undef N
#undef J
#undef V6
#undef V5
#undef V4
#undef R4
#undef V3
#undef R3
#undef V2
#undef R2
#undef V1
#undef R1
#undef V0
#undef R0
#undef E
}

