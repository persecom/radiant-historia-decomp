/* 4 functions from 0x020D708C to 0x020D7E7C (main), found by ds-decomp. */
#include "common.h"
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
char name[64]; u8 weights[20]; int zero=0; void *p; int active; u16 chosen,total,count; int result; int i; u16 roll;
{u8 *q=weights; int n=5; do {q[0]=zero;q[1]=zero;q[2]=zero;q[3]=zero;q+=4;} while(--n);}
func_02005e80(name,data_0215142c,a,b);
p=func_021092d8(name);
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

