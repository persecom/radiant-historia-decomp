/* 4 functions from 0x02097358 to 0x02098268 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 v[10]; } Draw_02097fb4;
typedef struct { u16 f0,f1,f2,f3,f4,f5,f6,f7,f8,f9; } DrawFields_02097fb4;
extern const Draw_02097fb4 data_02141fb0;
extern u8 *data_02160a74;
void func_020e1bc4(s32, s32);
void func_020a3bbc(s32);
void func_021098ac(void *);
void func_020e3f30(s32, s32, s32);

extern u8 *data_0216011c;
void func_02097fb4(void) {
u8 *base=data_0216011c;
u8 *a=*(u8 **)(base+0x30), *b=*(u8 **)(base+0x34);
Draw_02097fb4 d=data_02141fb0;
u16 i;
switch(*(u16 *)(base+0x2a)) {
case 0: return;
case 1:
func_020e1bc4(0x2d2,0);
*(volatile u32 *)0x40004a4=0x1f0080;
func_020a3bbc(0x5f);
for(i=0;i<2;i++) {
if(a[3+i]) {
if(a[2]==i) {
if(*(u16 *)(data_02160a74+0x1be)==0) func_020a3bbc(0x60);
else func_020a3bbc(0x61);
} else func_020a3bbc(0x5f);
d.v[5]=*(s32 *)(a+8+4*i)>>12;
d.v[6]=192-(2-i)*23;
d.v[7]=0x2d3;
func_021098ac(&d);
}
}
*(volatile u32 *)0x40004a4=0x1f0080;
func_020a3bbc(0x5e);
d.v[1]=0; d.v[2]=1; d.v[3]=1; d.v[4]=33; d.v[8]=163; d.v[9]=33;
d.v[5]=*(s32 *)(b+0x9c)>>12;
d.v[6]=*(s32 *)(b+0xa0)>>12;
d.v[7]=0x2d3; func_021098ac(&d);
d.v[2]=1; ((volatile Draw_02097fb4 *)&d)->v[3]=10; ((volatile Draw_02097fb4 *)&d)->v[8]=10; d.v[4]=33; d.v[9]=33; d.v[1]=54;
d.v[5]=(*(s32 *)(b+0x9c)>>12)+163;
d.v[6]=*(s32 *)(b+0xa0)>>12;
d.v[7]=0x2d3; func_021098ac(&d);
break;
case 2:
if(!(*(u16 *)(base+0x28)&2)) func_020e1bc4(0x2d2,0);
if(*(u16 *)(base+0x28)&0x20) {
*(volatile u32 *)0x40004a4=0x1f0080;
func_020e3f30(0,-96,0x2d3);
}
break;
}
}

s32 func_020981fc(u16 arg0) {
    u8 *p = data_0216011c;
    if (p == NULL) {
        return 0;
    }
    if ((*(u16 *)(p + 0x28) & 4) != 0 &&
        *(u16 *)(p + 0x38) == arg0 &&
        *(u16 *)(p + 0x42) == 0 &&
        *(u8 *)(p + 0x45) == 0) {
        return 1;
    }
    return 0;
}

void func_02098248(s32 arg0) {
    if (arg0 != 0 && data_0216011c != NULL) {
        *(u16 *)(data_0216011c + 0x42) = 0;
    }
}
