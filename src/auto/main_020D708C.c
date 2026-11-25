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
extern u32 func_020deaf0(void*,u8);
extern u8 *func_0202e548(u8);
extern u8 *func_0210c594(s32,u32);
extern void func_02022fb0(void*);
extern void func_02030878(void*,void*,void*,u32,u32,s32);
extern void func_0202c7d8(s8);
extern void func_02064c80(void*);
extern u8 *func_020ddbcc(u16);
extern void func_0202e874(void*,s32);
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
u16 func_020d708c(s32 a,s32 b,s32 c,u32 exclude){
char name[64];void *fp; s32 count,result;u8 *enemy=NULL; s32 zero,id,kind,position;
func_02005e80(name,data_021513f4,a,b);fp=func_021092d8(name);count=0;result=0;
do {if(func_02092ab0(fp,c)!=-1){
void *token;id=0;token=func_02092a40(fp,0);
if(token){
if(func_02092a28(token,data_0215141c)){
s32 effect;u8 *model=NULL,*action=NULL,*temp=NULL;u32 mask,bit;u16 i;
kind=func_02092994(fp,0);position=func_02092994(fp,0);effect=func_02092994(fp,0);
if(effect)temp=func_02065298(NULL,(u16)effect,11,0,NULL);
bit=1<<kind;mask=func_020deaf0(temp,(u8)kind);
for(i=0;i<9;i++){if(mask&(1<<i)){u8 *actor=func_0202e548((u8)i);if(actor[0x1c]==0){
if(position){model=func_0210c594(0x1c8,data_02155c3c);*(void**)(model+0x118)=func_0202fb50(position,0);}
if(effect){action=func_02065298(NULL,(u16)effect,11,0,NULL);func_02022fb0(**(void***)(action+0x2c));}
actor[0x30]|=3;func_02030878(model,action,actor,mask,bit,0);
}func_0202c7d8((s8)i);}}
func_02064c80(temp);
}else if(func_02092a28(token,data_02151420)){
s32 effect;u8 *model,*temp=NULL,*action=NULL;u32 mask,bit;u16 i;s8 target;
kind=func_02092994(fp,0);position=func_02092994(fp,0);effect=func_02092994(fp,0);
model=func_020ddbcc((u16)kind);
if(model){target=(s8)position;if(effect)temp=func_02065298(NULL,(u16)effect,11,0,NULL);
bit=1<<target;mask=func_020deaf0(temp,(u8)target);
for(i=0;i<9;i++){if(mask&(1<<i)){u8*actor=func_0202e548((u8)i);if(actor[0x1c]==0){
func_0202e874(actor,0);if(effect){action=func_02065298(NULL,(u16)effect,11,0,NULL);func_02022fb0(**(void***)(action+0x2c));}
actor[0x30]|=2;func_02030878(model,action,actor,mask,bit,0);
}func_0202c7d8((s8)i);}}func_02064c80(temp);}
}else if(!func_02092a28(token,data_02151428)){id=func_02092a70(token,0);}
}
if(id){kind=func_02092994(fp,0);position=func_02092994(fp,0);enemy=func_0202fb50(id,0);enemy[0]=1;if(exclude&func_0202e98c(enemy[0x54],(s16)position)){func_0202fad8(enemy);enemy=NULL;}}
if(id&&enemy){u8 *obj; s16 i;obj=func_020dce1c(*(u16*)(enemy+0x4c),0,0);*(u16*)(obj+0x92)=0;
*(s32*)obj=0x1000;*(s32*)(obj+4)=0x20000;*(s32*)(obj+8)=0x1000;*(u16*)(obj+0x8c)=id;*(u16*)(obj+0x90)=position+101;
for(i=0;i<9;i++){s32 slot=(position+i)%9+101;if(!func_020ddc44((u16)slot)){*(u16*)(obj+0x90)=slot;break;}}
obj[0x1a0]=position;*(void**)(obj+0x1a4)=func_020de160();func_020de190(*(void**)(obj+0x1a4),*(u16*)(obj+0x8e));
*(void**)(obj+0x118)=enemy;*(s32*)(obj+0x78)=1600;func_020ddd5c(obj);func_020dd810(obj,0,0);
{u32 n=*(u16*)(obj+0x8e);if(!((n>=800&&n<=899)||(n>=900&&n<=999))){s32 *v=**(s32***)(obj+0x108);*v+=(result%4)*8;}}
*(void**)(obj+0x128)=func_020d413c();*(void**)(obj+0x11c)=func_02064be8();
if(*(u16*)(enemy+64)){u8*e=func_02065298(*(void**)(obj+0x11c),*(u16*)(enemy+64),11,0,enemy);e[1]=11;}
if(*(u16*)(enemy+66)){u8*e=func_02065298(*(void**)(obj+0x11c),*(u16*)(enemy+66),11,0,enemy);e[1]=12;}
if(*(u16*)(enemy+68)){u8*e=func_02065298(*(void**)(obj+0x11c),*(u16*)(enemy+68),11,0,enemy);e[1]=13;}
if(*(u16*)(enemy+70)){u8*e=func_02065298(*(void**)(obj+0x11c),*(u16*)(enemy+70),11,0,enemy);e[1]=14;}
if(*(u16*)(enemy+72)){u8*e=func_02065298(*(void**)(obj+0x11c),*(u16*)(enemy+72),11,0,enemy);e[1]=15;}
if(*(u16*)(enemy+74)){u8*e=func_02065298(*(void**)(obj+0x11c),*(u16*)(enemy+74),11,0,enemy);e[1]=16;}
*(void**)(obj+0x12c)=func_02026e40((u16)kind);*(void**)(obj+0x124)=func_02026548();func_021167f0(data_02160a6c+0xb8,obj);
switch(*(u16*)(obj+0x8e)){
case 801:case 831:{s32 id1,id2;u8*child;if(*(u16*)(obj+0x8e)==801){id1=802;id2=803;}else if(*(u16*)(obj+0x8e)==831){id1=832;id2=833;}obj[0xa1]|=0x3a;child=func_020dce1c(id1,0,0);*(u16*)(child+0x92)=0;*(s32*)child=0x1000;*(s32*)(child+4)=0x20000;*(s32*)(child+8)=0x1000;child[0xa1]|=0x3a;*(u32*)(child+0x80)=(*(u32*)(child+0x80)&~1)|0x200;func_021168f8(data_02160a6c+0x70,child);func_021167f0(data_02160a6c+0xc4,child);child=func_020dce1c(id2,0,0);*(u16*)(child+0x92)=0;*(s32*)child=0x1000;*(s32*)(child+4)=0x20000;*(s32*)(child+8)=0x1000;child[0xa1]|=0x3a;*(u32*)(child+0x80)=(*(u32*)(child+0x80)&~1)|0x200;func_021168f8(data_02160a6c+0x70,child);func_021167f0(data_02160a6c+0xc4,child);break;}
case 811:case 821:case 841:case 861:{s32 id1;u8 *child;u16 n=*(u16*)(obj+0x8e);if(n==811)id1=813;else if(n==821)id1=823;else if(n==841)id1=843;else if(n==861)id1=863;obj[0xa1]|=0x3a;child=func_020dce1c(id1,0,0);*(u16*)(child+0x92)=0;*(s32*)child=0x1000;*(s32*)(child+4)=0x20000;*(s32*)(child+8)=0x1000;child[0xa1]|=0x3a;*(u32*)(child+0x80)=(*(u32*)(child+0x80)&~1)|0x200;func_021168f8(data_02160a6c+0x70,child);func_021167f0(data_02160a6c+0xc4,child);break;}
case 851:{s32 id1;u8 *child;if(*(u16*)(obj+0x8e)==851)id1=853;obj[0xa1]|=0x3a;*(s32*)(obj+0x58)=1;*(s32*)(obj+0x68)=0;*(s32*)(obj+0x70)=-110;child=func_020dce1c(852,0,0);*(u16*)(child+0x92)=0;*(s32*)child=0x1000;*(s32*)(child+4)=0x20000;*(s32*)(child+8)=0x1000;*(u32*)(child+0x80)=(*(u32*)(child+0x80)&~1)|0x200;child[0xa1]|=0x3a;func_021168f8(data_02160a6c+0x70,child);func_021167f0(data_02160a6c+0xc4,child);child=func_020dce1c(id1,0,0);*(u16*)(child+0x92)=0;*(s32*)child=0x1000;*(s32*)(child+4)=0x20000;*(s32*)(child+8)=0x1000;*(u32*)(child+0x80)=(*(u32*)(child+0x80)&~1)|0x200;child[0xa1]|=0x3a;func_021168f8(data_02160a6c+0x70,child);func_021167f0(data_02160a6c+0xc4,child);break;}
}count++;
}
}
func_02109444(fp);result++;
}while(result<512);
if(fp)func_021093b0(fp);return count;
}

void *func_020d7a68(u32 arg0, u8 *arg1, u32 arg2) {
    u8 *p = func_02021f10(arg0);
    if (p != NULL) {
        *(u16 *)(p + 0x10) = *(u32 *)(*(u8 **)(arg1 + 0x118) + 4);
        *(s16 *)(p + 0x14) = *(s16 *)(*(u8 **)(arg1 + 0x118) + 0xc);
        *(s16 *)(p + 0x34) = *(s16 *)(*(u8 **)(arg1 + 0x118) + 0x5a);
        *(u32 *)(p + 8) = arg2;
        *(u8 *)(p + 0x44) = *(u32 *)(*(u8 **)(arg1 + 0x118) + 0x70);
    }
    return p;
}

u16 func_020d7ab8(int a, int b, int c) {
char name[64]; u8 weights[20]; int zero=0; void *p; char *buf=name; int active; u16 chosen,total,count; int result; int i; u16 roll;
{u8 *q=weights; u32 n=5; do {q[0]=zero;q[1]=zero;q[2]=zero;q[3]=zero;q+=4;} while(--n);}
func_02005e80(buf,data_0215142c,a,b);
p=func_021092d8(buf);
result=0; chosen=0; total=0; count=0; active=1;
while(result<512) {
while(active) {
result=func_02092ab0(p,c);
if(result!=-1) {
chosen=(u16)func_02092994(p,zero);
if(chosen<=19 && weights[chosen]==0) {
u16 value=(u16)func_02092994(p,zero);
weights[chosen]=value; count++;
if(value<=100) total+=value;
}
} else {result=513;active=zero;}
if(total>=100) {result=513;active=zero;}
if(result<512) func_02109444(p);
}
}
if(p) func_021093b0(p);
{u32 next=data_0216263c[1]*data_0216263c[0]+data_0216263c[2]; data_0216263c[0]=next; roll=(u16)(((next>>16)*100)>>16);}
if(roll==0 || roll>99) roll=10;
total=0;
for(i=0;i<=count;i++) {total+=weights[i]; if(roll<total) {chosen=(u16)i; break;}}
return chosen;
}

extern s32 func_02092a28(void *,void *);
extern s32 func_021094a4(void *,void *);
extern u8 *func_0202fb50(s32,s32);
extern void func_0202fad8(void *);
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
 if(active) {
 zero=0;
 do {
 result=func_02092ab0(fp,c);
 if(result!=-1) {
 if(match==(u16)func_02092994(fp,zero)) {
 if(func_02092a28(*(void **)(fp+8),data_0215147c)) {
 if(index==count) {
special:
 value=99;
 active=zero;
 result=513;
 *text=func_021094a4(fp,*(void **)(fp+8));
 }
 } else if(func_02092a28(*(void **)(fp+8),data_02151484)) {
 if(index==count) {
 goto special;
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
 }while(active);
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

