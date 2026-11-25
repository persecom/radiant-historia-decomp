/* 1 function from 0x020AF2DC to 0x020B0B0C (main), found by ds-decomp. */
#include "common.h"
static inline s32 abs_020af2dc(s32 v) { if(v<0) v=-v;return v; }
static inline s16 next_row_020af2dc(s32 y) {return y+13;}
extern u8 *func_020b3908(void), *func_020b3914(void), *func_020ade60(s32);
extern void func_020ae004(s16,s16,s16,s16,s16,s16,s16,s16,s16);
extern void func_020ae0f0(u32,s16,s32,s16,s16,s16);
extern void func_02076380(void *);

void func_020af2dc(u8 *menu) {
s16 y=0;
u8 *other;
u8 *item=func_020b3908();
other=func_020b3914();
s32 x=*(s32 *)func_020ade60(3);
int value,delta;
func_02076380(*(void **)(menu+0xb8));
func_020ae004(101,0,0,49,11,x+10,50,49,11);
y+=13;
func_020ae004(101,0,y,20,11,x+10,y+50,20,11);
func_020ae004(101,21,y,1,11,x+30,y+50,120,11);
func_020ae004(101,102,y,4,11,x+150,y+50,4,11);
func_020ae004(102,59,y,5,11,x+84,y+50,5,11);
y+=13;
func_020ae004(101,0,y,20,11,x+10,y+50,20,11);
func_020ae004(101,21,y,1,11,x+30,y+50,120,11);
func_020ae004(101,102,y,4,11,x+150,y+50,4,11);
func_020ae004(102,59,y,5,11,x+84,y+50,5,11);
y+=13;
func_020ae004(101,0,y,34,11,x+10,y+50,34,11);
func_020ae004(101,35,y,1,11,x+34,y+50,72,11);
func_020ae004(101,59,y,4,11,x+106,y+50,4,11);
func_020ae004(101,65,y,34,11,x+115,y+50,34,11);
func_020ae004(101,100,y,1,11,x+139,y+50,72,11);
func_020ae004(101,124,y,4,11,x+211,y+50,4,11);
y+=13;
func_020ae004(101,0,y,34,11,x+10,y+50,34,11);
func_020ae004(101,35,y,1,11,x+34,y+50,72,11);
func_020ae004(101,59,y,4,11,x+106,y+50,4,11);
func_020ae004(101,65,y,34,11,x+115,y+50,34,11);
func_020ae004(101,100,y,1,11,x+139,y+50,72,11);
func_020ae004(101,124,y,4,11,x+211,y+50,4,11);
y+=13;
func_020ae004(101,0,y,34,11,x+10,y+50,34,11);
func_020ae004(101,35,y,1,11,x+34,y+50,72,11);
func_020ae004(101,59,y,4,11,x+106,y+50,4,11);
func_020ae004(101,65,y,34,11,x+115,y+50,34,11);
func_020ae004(101,100,y,1,11,x+139,y+50,72,11);
func_020ae004(101,124,y,4,11,x+211,y+50,4,11);
func_02076380(*(void **)(menu+0x6c));
func_020ae0f0(item[0x43],102,(s16)(x+38),50,8,10);
y=13;
func_020ae0f0(*(u16 *)(item+16),102,(s16)(x+72),y+50,8,10);
value=*(u16 *)(item+18)+*(s16 *)(item+36);
func_020ae0f0(value,102,(s16)(x+118),y+50,8,10);
delta=*(u16 *)(other+18)+*(s16 *)(other+36)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=100) shift=7;
else if((abs_020af2dc(delta))<10) shift=-7;
else shift=0;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,34,y+52,7,8);
func_020ae004(102,84,0,7,8,126,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,34,y+52,7,8);
func_020ae004(102,91,0,7,8,126,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+140),y+52,7,8);
}
func_02076380(*(void **)(menu+0x6c));
y+=13;
func_020ae0f0(*(u16 *)(item+20),102,(s16)(x+72),y+50,8,10);
value=*(u16 *)(item+22)+*(s16 *)(item+38);
func_020ae0f0(value,102,(s16)(x+118),y+50,8,10);
delta=*(u16 *)(other+22)+*(s16 *)(other+38)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=100) shift=7;
else if((abs_020af2dc(delta))<10) shift=-7;
else shift=0;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,x+34,y+52,7,8);
func_020ae004(102,84,0,7,8,x+126,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,x+34,y+52,7,8);
func_020ae004(102,91,0,7,8,x+126,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+140),y+52,7,8);
}
func_02076380(*(void **)(menu+0x6c));
y+=13;
value=*(u16 *)(item+24)+*(s16 *)(item+40);
if(value<0) {func_020ae0f0(0,102,(s16)(x+76),y+50,8,10);} else {func_020ae0f0(value,102,(s16)(x+76),y+50,8,10);}
delta=*(u16 *)(other+24)+*(s16 *)(other+40)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=10) shift=0;else shift=-7;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,x+46,y+52,7,8);
func_020ae004(102,84,0,7,8,x+84,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,x+46,y+52,7,8);
func_020ae004(102,91,0,7,8,x+84,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+98),y+52,7,8);
}
func_02076380(*(void **)(menu+0x6c));
value=*(u16 *)(item+26)+*(s16 *)(item+44);
if(value<0) {func_020ae0f0(0,103,(s16)(x+182),y+50,8,10);} else {func_020ae0f0(value,103,(s16)(x+182),y+50,8,10);}
delta=*(u16 *)(other+26)+*(s16 *)(other+44)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=10) shift=0;else shift=-7;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,x+151,y+52,7,8);
func_020ae004(102,84,0,7,8,x+189,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,x+151,y+52,7,8);
func_020ae004(102,91,0,7,8,x+189,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+203),y+52,7,8);
}
func_02076380(*(void **)(menu+0x6c));
y+=13;
value=*(u16 *)(item+28)+*(s16 *)(item+42);
if(value<0) {func_020ae0f0(0,103,(s16)(x+76),y+50,8,10);} else {func_020ae0f0(value,103,(s16)(x+76),y+50,8,10);}
delta=*(u16 *)(other+28)+*(s16 *)(other+42)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=10) shift=0;else shift=-7;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,x+46,y+52,7,8);
func_020ae004(102,84,0,7,8,x+84,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,x+46,y+52,7,8);
func_020ae004(102,91,0,7,8,x+84,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+98),y+52,7,8);
}
func_02076380(*(void **)(menu+0x6c));
value=*(u16 *)(item+30)+*(s16 *)(item+46);
if(value<0) {func_020ae0f0(0,103,(s16)(x+182),y+50,8,10);} else {func_020ae0f0(value,103,(s16)(x+182),y+50,8,10);}
delta=*(u16 *)(other+30)+*(s16 *)(other+46)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=10) shift=0;else shift=-7;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,x+151,y+52,7,8);
func_020ae004(102,84,0,7,8,x+189,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,x+151,y+52,7,8);
func_020ae004(102,91,0,7,8,x+189,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+203),y+52,7,8);
}
func_02076380(*(void **)(menu+0x6c));
y+=13;
value=*(u16 *)(item+32)+*(s16 *)(item+48);
if(value<0) {func_020ae0f0(0,102,(s16)(x+76),y+50,8,10);} else {func_020ae0f0(value,102,(s16)(x+76),y+50,8,10);}
delta=*(u16 *)(other+32)+*(s16 *)(other+48)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=10) shift=0;else shift=-7;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,x+46,y+52,7,8);
func_020ae004(102,84,0,7,8,x+84,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,x+46,y+52,7,8);
func_020ae004(102,91,0,7,8,x+84,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+98),y+52,7,8);
}
func_02076380(*(void **)(menu+0x6c));
value=*(u16 *)(item+34)+*(s16 *)(item+50);
if(value<0) {func_020ae0f0(0,102,(s16)(x+182),y+50,8,10);} else {func_020ae0f0(value,102,(s16)(x+182),y+50,8,10);}
delta=*(u16 *)(other+34)+*(s16 *)(other+50)-value;
if(delta!=0) {
int shift;
s16 left;
if((abs_020af2dc(delta))>=10) shift=0;else shift=-7;
left=shift+(s16)x;
if(delta>0) {
func_02076380(*(void **)(menu+0xbc));
func_020ae004(102,70,0,7,8,x+151,y+52,7,8);
func_020ae004(102,84,0,7,8,x+189,y+51,7,8);
} else {
func_02076380(*(void **)(menu+0xc4));
func_020ae004(102,77,0,7,8,x+151,y+52,7,8);
func_020ae004(102,91,0,7,8,x+189,y+51,7,8);
}
func_020ae0f0(abs_020af2dc(delta),102,(s16)(left+203),y+52,7,8);
}
func_020adfe8(31,0);
}
