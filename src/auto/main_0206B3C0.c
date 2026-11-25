/* 1 function from 0x0206B3C0 to 0x0206E7A0 (main), found by ds-decomp. */
#include "common.h"

void func_0206b3c0(u8*arg){
#define RH_DEF(N) typedef struct { s8 data[N];} Table##N;
#define RH_E(N,A) extern const Table##N data_02##A;
#define RH_T(N,A) Table##N local_##A=data_02##A;
#define RH_F(A)*(s8*)(entry+0xc)=((s8*)local_##A.data)[idx+0];*(s8*)(entry+0xd)=((s8*)local_##A.data)[idx+1];*(s8*)(entry+0xe)=((s8*)local_##A.data)[idx+2];*(s8*)(entry+0xf)=((s8*)local_##A.data)[idx+3];*(s16*)(entry+0x10)=((s8*)local_##A.data)[idx+4];*(s16*)(entry+0x12)=((s8*)local_##A.data)[idx+5];
#define RH_X *(s32*)(entry+0x14)=(u32)(s32)*(s16*)(entry+0x10) << 12;*(s32*)(entry+0x18)=(u32)(s32)*(s16*)(entry+0x12) << 12;
#define RH_N(I) u8*entry=(u8*)func_02067674();u32 idx=(I)*6;
#define RH_G(I)*(u16*)(entry+0x2a)=I;*(s32*)(entry+0x30)=zero;
#define RH_P func_021167f0(arg+0x54,entry);
#define RH_RET func_021167f0(data_021600e8+0x48,arg);return;
#define RH_END(C,D)*(u16*)(arg+0x1c)=C;*(u16*)(arg+0x26)=D;RH_RET
#define RH_LF(N,A,C) RH_T(N,A) for (i=0;i < C;i++) { RH_N(i) RH_F(A) RH_X RH_G(i) RH_P }
#define RH_L(N,A,C) RH_T(N,A) for (i=0;i < C;i++) { RH_N(i) RH_F(A) RH_G(i) RH_P }
#define RH_C(N,A,C,D) { RH_L(N,A,C) RH_END(i,D) }
#define RH_CF(N,A,C,D) { RH_LF(N,A,C) RH_END(i,D) }
#define RH_R(R,N) { u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];R=(u16)(((seed >> 16)*(u16)(N)) >> 16);data_0216263c[0]=seed;}
#define RH_RANGE(R) { u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];u32 r=seed>>16;data_0216263c[0]=seed;if((u16)twice!=0)r=(r*width)>>16;R=(u16)r;}
typedef struct{u32 x,y,z;}Vec12;
RH_DEF(6) RH_DEF(12) RH_DEF(18) RH_DEF(24) RH_DEF(30) RH_DEF(36) RH_DEF(42) RH_DEF(48) RH_DEF(60) RH_DEF(72) RH_DEF(78) RH_DEF(84) RH_DEF(90) RH_DEF(96) RH_DEF(108) RH_DEF(120) RH_DEF(150) RH_DEF(162)
extern u8*func_02067674(void);
extern void func_021167f0(void*,void*);
extern void func_0206a75c(u8*);
extern void func_0206e990(u32,u16);
extern void func_0206e8f0(u32,Vec12*,u8);
extern void func_0210c5dc(void*);
extern u32 data_0216263c[3];
extern u8*data_021600e8;
RH_E(42,13ffdc) RH_E(18,13fe84) RH_E(30,13fee0) RH_E(18,13fe5c) RH_E(30,13ff00) RH_E(6,13fdec) RH_E(96,1405c4) RH_E(12,13fe30) RH_E(12,13fe3c) RH_E(12,13fe18) RH_E(96,140624) RH_E(72,140290) RH_E(72,1402d8) RH_E(108,1406e4) RH_E(18,13fe70) RH_E(6,13fdf4) RH_E(36,13ff68) RH_E(6,13fe04) RH_E(12,13fe24) RH_E(24,13fec8) RH_E(18,13fe48) RH_E(150,140834) RH_E(48,140158) RH_E(36,13ff20) RH_E(60,140188) RH_E(36,13ff44) RH_E(72,140200) RH_E(48,140038) RH_E(72,140248) RH_E(96,140564) RH_E(84,1403b8) RH_E(84,14040c) RH_E(84,140460) RH_E(84,1404b4) RH_E(48,140098) RH_E(36,13ff8c) RH_E(72,140320) RH_E(108,140750) RH_E(6,13fdfc) RH_E(78,140368) RH_E(12,13fe0c) RH_E(48,140068) RH_E(24,13fe98) RH_E(48,1400c8) RH_E(60,1401c4) RH_E(48,1400f8) RH_E(120,1407bc) RH_E(48,140008) RH_E(42,13ffb0) RH_E(96,140684) RH_E(90,140508) RH_E(24,13feb0) RH_E(48,140128) RH_E(162,1408cc)
u16 i=0;
u32 zero=0;
switch(arg[0x18]){
case 0x37: RH_C(42,13ffdc,7,0)
case 0x39: RH_C(18,13fe84,3,0)
case 0x3a: RH_C(30,13fee0,5,0)
case 0x3b: RH_C(18,13fe5c,3,0)
case 0x3c:
case 0x86: RH_C(30,13ff00,5,0)
case 0x07: RH_C(6,13fdec,1,6)
case 0x01:
{
RH_T(96,1405c4)
{
u8 count=6;
s32 span,twice,empty;
u16 width;
i=0;
if(*(s16*)(arg+0x22)!=0)count=(u8)*(s16*)(arg+0x22);
span=16-count;
twice=span*2;
empty=(span==0);
width=(u16)twice;
for(;;){
s32 first;
s32 second;
if(!empty){
u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
u32 random=seed;
u16 firstVal;
data_0216263c[0]=seed;
if((u16)twice!=0)random=(seed>>16)*width;
firstVal=(u16)(random>>16);
first=(s32)firstVal-span;
}else{
first=0;
}
if(first>=0){
if(span!=0){u32 random;RH_RANGE(random)second=(s32)random-span;}else{second=0;}
}else{
if(span!=0){u32 random;RH_RANGE(random)second=(s32)random-span;}else{second=0;}
second=-second;
}
if(second==0){
u8*node=*(u8**)(arg+0x54);
s32 available=1;
while(node!=0){
if(*(u16*)(node+0x2a)==i)available=0;
node=*(u8**)(node+0x38);
}
if(available){RH_N(i)RH_F(1405c4)RH_G(i)RH_P}
}
if(*(u16*)(arg+0x5c)>=count)break;
i=(u16)(i+1)% 16;
}
*(u16*)(arg+0x26)=0xc;
*(u16*)(arg+0x1c)=count;
RH_RET
}
}
case 0x08:
{
RH_L(12,13fe30,2)
*(u16*)(arg+0x1c)=i;
*(u16*)(arg+0x26)=9;
if(*(s16*)(arg+0x22)==0)*(s16*)(arg+0x22)=3;
RH_RET
}
case 0x68:
case 0x69:
case 0x6a:
case 0x87: RH_C(12,13fe3c,2,3)
case 0x05: RH_C(12,13fe18,2,3)
case 0x65: RH_C(96,140624,16,0xc)
case 0x3f:
case 0x40:
{
RH_L(72,140290,12)
*(u16*)(arg+0x1c)=i;
if(arg[0x18]==0x3f)*(u16*)(arg+0x26)=0xd;
else if(arg[0x18]==0x40)*(u16*)(arg+0x26)=0xe;
RH_RET
}
case 0x12: RH_CF(72,1402d8,12,0x13)
case 0x0f: RH_CF(108,1406e4,18,0x16)
case 0x77:
{
RH_T(18,13fe70)
u32 random;
RH_R(random,4)
s32 selected=(s32)random-2;
if(selected<0)selected=-selected;
u16 choice=(u16)selected;
RH_N(choice)
RH_F(13fe70)
RH_X
RH_G(0)
RH_P
RH_END(choice,0x16)
}
case 0x78:
{
RH_T(6,13fdf4)
RH_N(0)
RH_F(13fdf4)
RH_X
RH_G(0)
RH_P
RH_END(1,0x41)
}
case 0x7c: RH_CF(36,13ff68,6,0x38)
case 0x7d:
{
RH_T(6,13fe04)
RH_N(0)
u32 random_x;
RH_R(random_x,4)
*(s8*)(entry+0xc)=random_x*8;
u32 random_y;
RH_R(random_y,2)
*(s8*)(entry+0xd)=random_y*8;
*(s8*)(entry+0xe)=((s8*)local_13fe04.data)[idx+2];
*(s8*)(entry+0xf)=((s8*)local_13fe04.data)[idx+3];
*(s16*)(entry+0x10)=((s8*)local_13fe04.data)[idx+4];
*(s16*)(entry+0x12)=((s8*)local_13fe04.data)[idx+5];
RH_X
RH_G(0)
RH_P
RH_END(1,0x4d)
}
case 0x7e:
case 0x80:
{
RH_T(12,13fe24)
{
u8 repeat;
for(repeat=0;repeat<3;repeat++){
s32 choose;
if(repeat!=0){u32 random;RH_R(random,3)choose=random==0;}else{choose=1;}
if(choose){
u16 j;
for(j=0;j<2;j++){RH_N(j)RH_F(13fe24)RH_X RH_G(*(u16*)(arg+0x5c))RH_P}
}
}
}
RH_END(*(u16*)(arg+0x5c),arg[0x18]==0x7e ? 0x53 : 0x54)
}
case 0x7f:
{
RH_T(24,13fec8)
RH_T(18,13fe48)
{
for(i=0;i<4;i++){RH_N(i)RH_F(13fec8)RH_X RH_G(*(u16*)(arg+0x5c))RH_P}
u16 j;
for(j=0;j<3;j++){
u32 random;
RH_R(random,2)
if(random!=0){
RH_N(j)
*(s8*)(entry+0xc)=((s8*)local_13fe48.data)[idx+0];
*(s8*)(entry+0xd)=((s8*)local_13fe48.data)[idx+1];
*(s8*)(entry+0xe)=((s8*)local_13fe48.data)[idx+2];
*(s8*)(entry+0xf)=((s8*)local_13fe48.data)[idx+3];
u32 flip;
RH_R(flip,2)
if(flip!=0)*(s8*)(entry+0xd)+=0x10;
*(s16*)(entry+0x10)=((s8*)local_13fe48.data)[idx+4];
*(s16*)(entry+0x12)=((s8*)local_13fe48.data)[idx+5];
RH_X
RH_G(*(u16*)(arg+0x5c))
RH_P
}
}
*(u16*)(arg+0x1c)=*(u16*)(arg+0x5c);
*(u16*)(arg+0x26)=0x50;
RH_RET
}
}
case 0x04: RH_CF(150,140834,25,0x1c)
case 0x0e: RH_CF(48,140158,8,0x19)
case 0x67: RH_CF(36,13ff20,6,0x1f)
case 0x03: RH_CF(60,140188,10,0x22)
case 0x66: RH_CF(36,13ff44,6,0x25)
case 0x10:
case 0x14: RH_CF(72,140200,12,arg[0x18]==0x10 ? 0x28 : 0x64)
case 0x11:
case 0x13: RH_CF(48,140038,8,arg[0x18]==0x11 ? 0x28 : 0x64)
case 0x3d:
case 0x3e:
{
RH_T(72,140248)
for(i=0;i<12;i++){
RH_N(i)RH_F(140248)RH_X RH_G(i)RH_P
if(arg[0x18]==0x3d&&i>=5)break;
}
RH_END(i,arg[0x18]==0x3e ? 0x2e : 0x2b)
}
case 0x09:
case 0x0a: RH_CF(96,140564,16,arg[0x18]==9 ? 0x31 : 0x32)
case 0x0b:
{
RH_T(84,1403b8)
for(i=0;i<8;i++){
RH_N(i)RH_F(1403b8)RH_X RH_G(i)
if(i==7)*(u16*)(entry+0x28)=0x37;
RH_P
}
RH_END(i,0x34)
}
case 0x15: RH_CF(84,14040c,7,0x34)
case 0x0c: RH_CF(84,140460,14,0x37)
case 0x85: RH_CF(84,1404b4,14,0x63)
case 0x0d: RH_CF(48,140098,8,0x38)
case 0x81:
{
RH_T(36,13ff8c)
u16 choice;
RH_R(choice,6)
RH_N(choice)
RH_F(13ff8c)
RH_X
RH_G(0)
RH_P
*(u16*)(arg+0x26)=0x38;
*(u16*)(arg+0x1c)=1;
arg[0x40]=2;
RH_RET
}
case 0x82:
{
func_0206a75c(arg);
return;
}
case 0x83: RH_CF(72,140320,12,0x61)
case 0x84: RH_CF(108,140750,18,0x62)
case 0x02:
{
RH_T(6,13fdfc)
RH_N(0)RH_F(13fdfc)RH_X RH_G(0)RH_P
RH_END(0,0x3a)
}
case 0x36:
{
RH_T(78,140368)
for(i=0;i<13;i++){
RH_N(i)RH_F(140368)RH_X RH_G(i)
if(i>=5&&i<9)*(u16*)(entry+0x28)=0x3d;
if(i>=9)*(u16*)(entry+0x28)=0x40;
RH_P
}
RH_END(i,0)
}
case 0x43: RH_CF(12,13fe0c,2,0x56)
case 0x44: RH_CF(48,140068,8,0x56)
case 0x45: RH_CF(24,13fe98,4,0x56)
case 0x47: RH_CF(48,1400c8,8,0x47)
case 0x48: RH_CF(60,1401c4,10,0x44)
case 0x4d: RH_CF(48,1400f8,8,0x44)
case 0x49:
{
RH_T(120,1407bc)
for(i=0;i<20;i++){
RH_N(i)RH_F(1407bc)RH_X RH_G(i)
if(i<8){*(u8*)(entry+0x2f)=1;}else{u32 random;RH_R(random,2)if(random!=0)*(s8*)(entry+0xd)+=0x10;}
RH_P
}
RH_END(i,0x50)
}
case 0x4a:
{
RH_LF(48,140008,8)
*(u16*)(arg+0x26)=0x59;
*(u16*)(arg+0x1c)=i;
if(arg[0x28]==1){arg[0x28]=0;*(u16*)(arg+0x26)=0x5f;}
RH_RET
}
case 0x4b: RH_CF(42,13ffb0,7,0x5a)
case 0x4c: RH_CF(96,140684,16,0x5b)
case 0x79: RH_CF(90,140508,15,0x4a)
case 0x7a:
case 0x7b: RH_CF(24,13feb0,4,0x4a)
case 0x4e:
{
RH_T(48,140128)
for(i=0;i<8;i++){
RH_N(i)RH_F(140128)RH_X
if(i<4){
*(s32*)(entry+0x14)=*(s32*)(entry+0x14)*70/100;
*(s32*)(entry+0x18)=*(s32*)(entry+0x18)*70/100;
*(s16*)(entry+0x10)=*(s32*)(entry+0x14)>>12;
*(s16*)(entry+0x12)=*(s32*)(entry+0x18)>>12;
}else{
*(s32*)(entry+0x0)=*(s32*)(entry+0x14)/2;
*(s32*)(entry+0x4)=*(s32*)(entry+0x18)/2-0x8000;
}
RH_G(i)RH_P
}
*(u16*)(arg+0x26)=0x5f;
*(u16*)(arg+0x1c)=i;
RH_RET
}
case 0x42: RH_CF(162,1408cc,27,0x10)
case 0x06:
{
if(arg[0x20]==0){
func_0206e990(7,*(u16*)(arg+0x24));
func_0206e990(8,*(u16*)(arg+0x24));
func_0206e990(1,*(u16*)(arg+0x24));
}else{
func_0206e8f0(7,*(Vec12**)(arg+0x4c),arg[0x20]);
func_0206e8f0(8,*(Vec12**)(arg+0x4c),arg[0x20]);
func_0206e8f0(1,*(Vec12**)(arg+0x4c),arg[0x20]);
if(arg[0x20]==2&&*(void**)(arg+0x4c)!=0){func_0210c5dc(*(void**)(arg+0x4c));*(void**)(arg+0x4c)=0;}
}
if(arg!=0)func_0210c5dc(arg);
return;
}
case 0x33:
case 0x34:
case 0x35:
{
RH_RET
}
default:
{
if((u8)(arg[0x20]+0xfe)<=1&&*(void**)(arg+0x4c)!=0){func_0210c5dc(*(void**)(arg+0x4c));*(void**)(arg+0x4c)=0;}
if(arg!=0)func_0210c5dc(arg);
return;
}
}
#undef RH_RANGE
#undef RH_R
#undef RH_CF
#undef RH_C
#undef RH_L
#undef RH_LF
#undef RH_END
#undef RH_RET
#undef RH_P
#undef RH_G
#undef RH_N
#undef RH_X
#undef RH_F
#undef RH_T
#undef RH_E
#undef RH_DEF
}
