/* 11 functions from 0x020ACE8C to 0x020ADE8C (main), found by ds-decomp. */
#include "common.h"
extern u8 func_020b3be8(u16,u8);
extern void func_020ac094(s32 *,s32 *);
extern void func_020b3fb4(u8,s32 *,s32 *);
extern u32 func_020b3908(void);
extern u16 func_020b39f4(u32,u8);
extern void func_020b3924(void),func_020aea84(void);
extern void func_020ade30(s32);

extern u8 *func_020b3890(void), *func_020b4044(void), *func_020b3fd8(void);
extern s32 func_020b3f14(u16);
extern void func_020220b0(u16,s32);
extern void func_020b41b8(s32);
extern void func_020b40a4(s32,s32*,s32*);
extern void func_020aaf88(s32*,s32,s32,s32,s32);
extern void func_020b4058(s32);
extern void func_0210d27c(s32);
extern void func_0210d490(s32);

extern u8 *func_020b442c(void);
extern s32 func_020abf5c(s32, s32, s32, s32, s32);
extern void func_020ae50c(s32);
extern void func_020abf3c(void);
extern u8 *func_020b3880(void);
extern void func_02008f74(void *, s32, u32);
extern void func_020adf34(void *);
extern void func_020ae180(void *);
extern void func_020ae560(void *);
extern void func_020adf14(void);
extern void func_020adfb4(void *);
extern void func_020ae35c(void *);
extern void func_020ae6e8(void *);
extern u8 data_02162908[];
u8 *func_020adda8(void);
s32 func_020ace8c(u8 *arg) {
u8 *player,*menu;
s32 *touch;
s32 kind;
u8 option=0;
s32 commit=0;
player=func_020b4044();menu=func_020b3fd8();touch=(s32 *)func_020b442c();
kind=func_020b3f14(*(u16 *)(player+4));
if(func_020abf5c(24,59,130,18,0)){
if(touch[2]==1 && kind==1){*(s32 *)(menu+0x2aa8)=0;func_020abf3c();commit=1;}
}else if(func_020abf5c(24,79,130,18,0)){
if(touch[2]==1 && kind==2){*(s32 *)(menu+0x2aa8)=1;func_020abf3c();commit=1;}
}
else if(func_020abf5c(24,99,130,18,0)){
if(kind==3){
if(touch[0]!=21){
func_0210d27c(2);
*(s32 *)(menu+0x2aa8)=2;
option=(u8)(*(s32 *)(menu+0x2aa8)-2);
func_020b3be8(*(u16 *)(func_020b4044()+4),option);
touch[0]=21;
}else if(touch[2]==1){
*(s32 *)(menu+0x2aa8)=2;
option=(u8)(*(s32 *)(menu+0x2aa8)-2);
func_020b3be8(*(u16 *)(func_020b4044()+4),option);
func_020abf3c();commit=1;
}
}
}
else if(func_020abf5c(24,119,130,18,0)){
if(kind==3){
if(touch[0]!=22){
func_0210d27c(2);
*(s32 *)(menu+0x2aa8)=3;
option=(u8)(*(s32 *)(menu+0x2aa8)-2);
func_020b3be8(*(u16 *)(func_020b4044()+4),option);
touch[0]=22;
}else if(touch[2]==1){
*(s32 *)(menu+0x2aa8)=3;
option=(u8)(*(s32 *)(menu+0x2aa8)-2);
func_020b3be8(*(u16 *)(func_020b4044()+4),option);
func_020abf3c();commit=1;
}
}
}
else if(func_020abf5c(24,139,130,18,0)){
if(kind==3){
if(touch[0]!=23){
func_0210d27c(2);
*(s32 *)(menu+0x2aa8)=4;
option=(u8)(*(s32 *)(menu+0x2aa8)-2);
func_020b3be8(*(u16 *)(func_020b4044()+4),option);
touch[0]=23;
}else if(touch[2]==1){
*(s32 *)(menu+0x2aa8)=4;
option=(u8)(*(s32 *)(menu+0x2aa8)-2);
func_020b3be8(*(u16 *)(func_020b4044()+4),option);
func_020abf3c();commit=1;
}
}
}
if(func_020abf5c(234,3,18,18,1)){
*arg=0;func_020220b0(*(u16 *)(player+4),1);func_020ae50c(6);func_020ade30(2);func_020abf3c();func_0210d27c(5);func_020aea84();return 2;
}
if(func_020abf5c(194,156,52,16,1))commit=1;
if(commit){
*arg=0;
func_020220b0(func_020b39f4(func_020b3908(),(u8)*(s32 *)(menu+0x2aa8)),1);
if(kind==3)option=(u8)(*(s32 *)(menu+0x2aa8)-2);
func_020b3be8(*(u16 *)(player+4),option);
func_020b3924();func_020ae50c(6);func_020abf3c();func_020ade30(18);func_0210d27c(76);func_020aea84();return 2;
}
if(*(u16 *)(data_02162908+4)==0){touch[2]=1;touch[3]=0;touch[1]=0;}
else{
touch[2]=0;touch[3]=0;
if(touch[1]==0)touch[3]=1;
if(touch[1]>=20 && touch[1]%2==0)touch[3]=1;
touch[1]++;
if(touch[1]>100)touch[1]=20;
}
return 0;
}

s32 func_020ad26c(u8 *arg0) {
    u8 *p = func_020b442c();
    if (func_020abf5c(0, 0, 0x100, 0xC0, 1) != 0) {
        *arg0 = 0;
        func_020ae50c(6);
        func_020abf3c();
        return 2;
    }
    if (*(u16 *)(data_02162908 + 4) == 0) {
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 1;
    } else {
        *(s32 *)(p + 8) = 0;
    }
    return 0;
}

s32 func_020ad2dc(u8 *arg0) {
    u8 *p = func_020b442c();
    if (func_020abf5c(0, 0, 0x100, 0xC0, 1) != 0) {
        *arg0 = 0;
        func_020ae50c(6);
        func_020abf3c();
        return 2;
    }
    if (*(u16 *)(data_02162908 + 4) == 0) {
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 1;
    } else {
        *(s32 *)(p + 8) = 0;
    }
    return 0;
}

void func_020ade44(s32);
s32 func_020ad34c(u8 *arg) {
u8 *menu,*player;
s32 *touch;
s32 row=-1, tab=-1, dir=0, commit=0;
s32 end=0,start=0,te=0,ts=0,x=0,y=0;
s32 n,i;
menu=func_020b3fd8();player=func_020b3890();touch=(s32*)func_020b442c();
func_020b40a4(*(s32*)(menu+0x2aa4),&end,&start);
n=end-start;
if(func_020abf5c(18,54,200,15,0)&&n>=1){if(touch[0]!=10){touch[0]=10;row=0;}else if(touch[2]==1)commit=1;}
else if(func_020abf5c(18,72,200,15,0)&&n>=2){if(touch[0]!=11){touch[0]=11;row=1;}else if(touch[2]==1)commit=1;}
else if(func_020abf5c(18,90,200,15,0)&&n>=3){if(touch[0]!=12){touch[0]=12;row=2;}else if(touch[2]==1)commit=1;}
else if(func_020abf5c(18,108,200,15,0)&&n>=4){if(touch[0]!=13){touch[0]=13;row=3;}else if(touch[2]==1)commit=1;}
else if(func_020abf5c(18,126,200,15,0)&&n>=5){if(touch[0]!=14){touch[0]=14;row=4;}else if(touch[2]==1)commit=1;}
for(i=0;i<4;i++) if(func_020abf5c(12+20*i,28,18,18,0)){touch[0]=i+6;tab=i;}
if(func_020abf5c(226,54,14,14,0)){if(touch[3]==1)dir=-1;}
else if(func_020abf5c(226,133,14,14,0)){if(touch[3]==1)dir=1;}
if(end-start>5){
if(dir==0){
if(func_020abf5c(226,68,14,65,0)){
s32 offset,h,pos,delta;
func_020ade44(17);
h=53-(end-start-5)*4;if(h<=0)h=1;
pos=(*(s32*)(menu+0x2a98)-start)*(65-(h+12))/(end-start-5);
func_020ac094(&x,&y);
if(!func_020abf5c(226,pos+68,14,h+12,0)){
offset=*(s32*)(menu+0x2aa0)-*(s32*)(menu+0x2a98);
y-=68;
{ float f=(float)y/75.0f; delta=start+(s32)(f*(float)(end-start))-*(s32*)(menu+0x2a98); }
if(delta>0){func_0210d27c(2);(*(s32*)(menu+0x2a98))++;}
else if(delta<0){func_0210d27c(2);(*(s32*)(menu+0x2a98))--;}
if(*(s32*)(menu+0x2a98)>end-5)*(s32*)(menu+0x2a98)=end-5;
*(s32*)(menu+0x2aa0)=*(s32*)(menu+0x2a98)+offset;
func_020b4058(*(s32*)(menu+0x2aa0));
player[0x263]=func_020b3be8(*(u16*)(func_020b4044()+4),0);
if(player[0x263]!=1)func_020ae50c(5);
}
}
}else{
s32 old=*(s32*)(menu+0x2a98);
s32 off=*(s32*)(menu+0x2aa0)-old;
if(dir==1)(*(s32*)(menu+0x2a98))++;
else if(dir==-1)(*(s32*)(menu+0x2a98))--;
if(*(s32*)(menu+0x2a98)>end-5)*(s32*)(menu+0x2a98)=end-5;
if(*(s32*)(menu+0x2a98)<start)*(s32*)(menu+0x2a98)=start;
*(s32*)(menu+0x2aa0)=*(s32*)(menu+0x2a98)+off;
if(old!=*(s32*)(menu+0x2a98)){
if(dir==1)func_020ade44(16);else if(dir==-1)func_020ade44(15);
func_0210d27c(2);
func_020b4058(*(s32*)(menu+0x2aa0));
player[0x263]=func_020b3be8(*(u16*)(func_020b4044()+4),0);
if(player[0x263]!=1)func_020ae50c(5);
}
}
}
if(func_020abf5c(234,3,18,18,1)){func_020ade30(2);func_020abf3c();func_0210d27c(5);return 3;}
if(func_020abf5c(194,156,52,16,1))commit=1;
if(row!=-1){
*(s32*)(menu+0x2aa0)=*(s32*)(menu+0x2a98)+row;
func_020b4058(*(s32*)(menu+0x2aa0));
player[0x263]=func_020b3be8(*(u16*)(func_020b4044()+4),0);
if(player[0x263]!=1)func_020ae50c(5);
func_0210d27c(2);
}
if(tab!=-1){
row=*(s32*)(menu+0x2aa4);
func_020b3fb4(menu[0x2ab0],&te,&ts);
if(te-ts==1)row=3;
else if(te-ts==4){if(tab==0)row=3;else row=tab-1;}
else if(te-ts==3){if(tab!=3)row=tab;}
if(*(s32*)(menu+0x2aa4)!=row){
*(s32*)(menu+0x2aa4)=row;
func_020b40a4(row,&end,&start);
{s32 first=start; *(s32*)(menu+0x2a98)=first;*(s32*)(menu+0x2aa0)=first;
func_020b4058(first);}
player[0x263]=func_020b3be8(*(u16*)(func_020b4044()+4),0);
if(player[0x263]!=1)func_020ae50c(5);
func_0210d27c(1);
}
}
if(commit==1 && start>=0){*arg=1;func_020ade30(18);func_0210d27c(11);return 2;}
if(*(u16*)(data_02162908+4)==0){touch[2]=1;touch[3]=0;touch[1]=0;}
else{touch[2]=0;touch[3]=0;if(touch[1]==0)touch[3]=1;if(touch[1]>=20 && touch[1]%2==0)touch[3]=1;touch[1]++;if(touch[1]>100)touch[1]=20;}
return 0;
}

void func_020ade30(s32);
s32 func_020ada80(u8 *arg0) {
u8 *a,*p,*q,*touch;
s32 dir=0;
s32 count=0,first=0;
a=func_020b3890();p=func_020b4044();q=func_020b3fd8();touch=func_020b442c();
func_020b3f14(*(u16*)(p+4));
if(func_020abf5c(0xa5,0x3b,14,14,0)) {
if(*(s32*)(touch+12)==1) dir=-1;
} else if(func_020abf5c(0xe4,0x3b,14,14,0)) {
if(*(s32*)(touch+12)==1) dir=1;
}
s32 one=1;
if(func_020abf5c(0xc2,0x9c,0x34,16,one)) {
*(s32*)(a+0x258)+=*(s32*)p * *(s32*)(q+0x2aac);
if(*(s32*)(a+0x258)>9999999) *(s32*)(a+0x258)=9999999;
func_020220b0(*(u16*)(p+4),-*(s32*)(q+0x2aac));
func_020ae50c(6);func_020ae50c(7);
func_020b41b8(1);
func_020b40a4(*(s32*)(q+0x2aa4),&count,&first);
if(first>=0) {
if(count-first>=5 && *(s32*)(q+0x2a98)>count-5) *(s32*)(q+0x2a98)=count-5;
if(*(s32*)(q+0x2aa0)>=count) *(s32*)(q+0x2aa0)=count-1;
if(*(s32*)(q+0x2aa0)<first) *(s32*)(q+0x2aa0)=first;
}
s32 zero=0;
func_020aaf88((s32*)(q+0x2aa0),zero,first,count,one);
func_020b4058(*(s32*)(q+0x2aa0));
*(s32*)(q+0x2aac)=one;
*arg0=zero;
func_020ade30(18);func_0210d27c(15);
return 2;
}
if(func_020abf5c(0xea,3,18,18,one)) {
*arg0=0;*(s32*)(q+0x2aac)=one;
func_020ae50c(6);func_020ae50c(7);
s32 two=2;
func_020ade30(two);func_0210d27c(5);return two;
}
if(dir!=0) {
s32 old=*(s32*)(q+0x2aac);
func_020aaf88((s32*)(q+0x2aac),dir,1,p[8]+1,0);
if(old!=*(s32*)(q+0x2aac)) {
if(dir==1) func_020ade30(24); else func_020ade30(25);
func_0210d27c(2);
} else func_0210d490(7);
}
if(*(u16*)(data_02162908+4)==0) {
*(s32*)(touch+8)=1;
*(s32*)(touch+12)=0;
*(s32*)(touch+4)=0;
} else {
*(s32*)(touch+8)=0; *(s32*)(touch+12)=0;
if(*(s32*)(touch+4)==0) *(s32*)(touch+12)=1;
if(*(s32*)(touch+4)>=20 && *(s32*)(touch+4)%2==0) *(s32*)(touch+12)=1;
if(++*(s32*)(touch+4)>100) *(s32*)(touch+4)=20;
}
return 0;
}

u8 *func_020adda8(void) {
    return func_020b3880() + 0x3C;
}

s32 func_020addb8(void) {
    u8 *p = func_020adda8();
    func_02008f74(p, 0, 0x6CC);
    func_020adf34(p);
    func_020ae180(p);
    func_020ae560(p);
    func_020adf14();
    *(s32 *)(p + 0x6C0) = -1;
    *(s32 *)(p + 0x6BC) = -1;
    *(s32 *)(p + 0x6C4) = 0;
    return 1;
}

void func_020ade0c(void) {
    u8 *p = func_020adda8();
    func_020adfb4(p);
    func_020ae35c(p);
    func_020ae6e8(p);
}

void func_020ade30(s32 arg0) {
    u8 *p = func_020adda8();
    *(s32 *)(p + 0x6BC) = arg0;
}

void func_020ade44(s32 arg0) {
    u8 *p = func_020adda8();
    *(s32 *)(p + 0x6BC) = arg0;
    *(s32 *)(p + 0x6C0) = -1;
}

void *func_020ade60(s32 arg0) {
    if (arg0 >= 0 && arg0 < 5) {
        return func_020adda8() + 0xEC + arg0 * 0x10;
    }
    return NULL;
}

