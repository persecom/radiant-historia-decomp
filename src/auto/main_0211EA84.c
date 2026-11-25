/* 3 functions from 0x0211EA84 to 0x0211F518 (main), found by ds-decomp. */
#include "common.h"
extern const u8 data_02144f28[],data_02144f29[],data_02144f2a[],data_02144f2b[];
extern void func_02009138(void *);
static inline u8 *dict_entry_0211ea84(u8 *dict,u32 index) {
if(dict && index<dict[1]){
u16 offset=*(u16 *)(dict+6);
u16 unit=*(u16 *)(dict+offset);
return dict+offset+4+unit*index;
}
return 0;
}
static inline u8 *node_0211ea84(u8 *base,u32 index) {
if(base){u32 *entry=(u32 *)dict_entry_0211ea84(base,index);if(entry)return base+*entry;}
return 0;
}
extern s32 data_02156010[3],data_0215601c[3];
extern u8 data_021701fc[],data_02170248[],data_02155fe4[],data_02155fec[],data_02155fe0[];
extern void func_021205ec(s32,void *,s32),func_021204a8(void);
extern s32 func_02002f3c(void *),func_02002214(void *);
extern void *func_0211d878(void),*func_0211d8ac(void),*func_0211d7d4(void);
extern void func_02001100(void *,void *),func_02001894(void *,void *,void *);
extern void func_02008e50(void *,void *,s32);

void func_0211ea84(u8 *p,s32 command){
u32 early,first,last;
s32 b,a;
s32 index=(*(u8 **)p)[1];
s32 zero=0,size=4;
s32 callback,skip;
u8 *result,*data,*cursor;
p[0xae]=index;*(u32 *)(p+8)|=0x10;
if(*(u32 *)(p+8)&0x400){
if(command==0x40||command==0x60)size++;
if(command==0x20||command==0x60){size++;if(!(*(u32 *)(p+8)&0x100)){early=(*(u8 **)p)[4];func_021205ec(0x14,&early,1);}}
*(u8 **)p+=size;return;
}
if(command==0x40||command==0x60){
if(command==0x40)first=(*(u8 **)p)[4];else first=(*(u8 **)p)[5];
size++;
if(!(*(u32 *)(p+8)&0x100))func_021205ec(0x14,&first,1);
}
*(void **)(p+0xb4)=p+0x12c;
callback=*(void **)(p+0x24)?p[0x92]:0;
if(callback==1){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(void *))(p+0x24))(p);
callback=*(void **)(p+0x24)?p[0x92]:0;
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(!skip){
u8 *obj=*(u8 **)(p+4);
u8 *table=*(u8 **)(obj+0x34);
s32 cached;
if(table){result=table+index*0x58;cached=(*(u32 *)(p+8)&0x80)?0:1;}
else {result=p+0x12c;cached=0;}
if(!cached){
*(u32 *)result=zero;
obj=*(u8 **)(p+4);
if(*(void **)(obj+0x10)){
if((*(s32 (**)(void *,void *,s32))(obj+0x14))(result,*(void **)(obj+0x10),index))goto done;
}
data=node_0211ea84(*(u8 **)(p+0xd4),index);
cursor=data+4;
if(*(u16 *)data&1)*(u32 *)result|=4;
else {
*(s32 *)(result+0x4c)=*(s32 *)cursor;
*(s32 *)(result+0x50)=*(s32 *)(cursor+4);
*(s32 *)(result+0x54)=*(s32 *)(cursor+8);cursor+=12;
}
if(*(u16 *)data&2)*(u32 *)result|=2;
else if(*(u16 *)data&8){
s32 pivot=(*(u16 *)data&0xf0)>>4;
a=*(s16 *)cursor;b=*(s16 *)(cursor+2);
func_02009138(result+0x28);
*(s32 *)(result+0x28+pivot*4)=(*(u16 *)data&0x100)?-4096:4096;
*(s32 *)(result+0x28+data_02144f28[pivot*4]*4)=a;
*(s32 *)(result+0x28+data_02144f29[pivot*4]*4)=b;
cursor+=4;
if(*(u16 *)data&0x200)b=-b;
*(s32 *)(result+0x28+data_02144f2a[pivot*4]*4)=b;
if(*(u16 *)data&0x400)a=-a;
*(s32 *)(result+0x28+data_02144f2b[pivot*4]*4)=a;
}else{
*(s32 *)(result+0x28)=*(s16 *)(data+2);
*(s32 *)(result+44)=*(s16 *)(cursor+0);
*(s32 *)(result+48)=*(s16 *)(cursor+2);
*(s32 *)(result+52)=*(s16 *)(cursor+4);
*(s32 *)(result+56)=*(s16 *)(cursor+6);
*(s32 *)(result+60)=*(s16 *)(cursor+8);
*(s32 *)(result+64)=*(s16 *)(cursor+10);
*(s32 *)(result+68)=*(s16 *)(cursor+12);
*(s32 *)(result+72)=*(s16 *)(cursor+14);
cursor+=16;
}
(*(void (**)(void *,void *,void *,u32))(p+0xe8))(result,cursor,*(void **)p,*(u16 *)data);
}
done: *(void **)(p+0xb4)=result;
}
if(callback==2){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(void *))(p+0x24))(p);
callback=*(void **)(p+0x24)?p[0x92]:0;
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(!skip&&!(*(u32 *)(p+8)&0x100)) (*(void (**)(void *))(p+0xec))(*(void **)(p+0xb4));
*(void **)(p+0xb4)=0;
if(callback==3){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(void *))(p+0x24))(p);

skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(command==0x20||command==0x60){size++;if(!skip&&!(*(u32 *)(p+8)&0x100)){last=(*(u8 **)p)[4];func_021205ec(0x13,&last,1);}}
*(u8 **)p+=size;
}

void func_0211eee0(u8 *p,s32 command){
s32 matrix[16],a[16],b[16];
u32 first,last;
s32 zero=0;
s32 size=2;
s32 *position=data_02156010,*scale=data_0215601c;
s32 callback,skip;
if(*(u32 *)(p+8)&0x200){
if(command==0x40||command==0x60)size++;
if(command==0x20||command==0x60)size++;
*(u8 **)p+=size;return;
}
if(command==0x40||command==0x60){
size++;
if(!(*(u32 *)(p+8)&0x100)){
if(command==0x40)first=(*(u8 **)p)[2];else first=(*(u8 **)p)[3];
func_021205ec(0x14,&first,1);
}
}
callback=*(void **)(p+0x28)?p[0x93]:0;
if(callback==1){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(void *))(p+0x28))(p);
callback=*(void **)(p+0x28)?p[0x93]:0;
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(!(*(u32 *)(p+8)&0x100)&&!skip){
func_021204a8();
*(volatile u32 *)0x4000400=0x151110;
*(volatile u32 *)0x4000400=zero;
*(volatile u32 *)0x4000400=zero;
while(func_02002f3c(matrix)!=0){}
if(*(u32 *)(data_021701fc+0xfc)&1){
func_02001100(func_0211d878(),a);
func_02001894(matrix,a,matrix);
}else if(*(u32 *)(data_021701fc+0xfc)&2){
func_02001100(data_02170248,b);
func_02001894(matrix,b,matrix);
}
position[0]=matrix[12];position[1]=matrix[13];position[2]=matrix[14];
scale[0]=func_02002214(matrix);scale[1]=func_02002214(matrix+4);scale[2]=func_02002214(matrix+8);
if(*(u32 *)(data_021701fc+0xfc)&1){
*(volatile u32 *)0x4000400=0x171012;
func_02008e50(data_02155fe4,(void *)0x4000400,8);
func_02008e50(func_0211d8ac(),(void *)0x4000400,0x30);
*(volatile u32 *)0x4000400=0x1b19;
func_02008e50(data_02155fec,(void *)0x4000400,0x3c);
}else if(*(u32 *)(data_021701fc+0xfc)&2){
*(volatile u32 *)0x4000400=0x171012;
func_02008e50(data_02155fe4,(void *)0x4000400,8);
func_02008e50(func_0211d7d4(),(void *)0x4000400,0x30);
*(volatile u32 *)0x4000400=0x1b19;
func_02008e50(data_02155fec,(void *)0x4000400,0x3c);
}else func_02008e50(data_02155fe0,(void *)0x4000400,0x48);
}
if(callback==3){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(void *))(p+0x28))(p);
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(command==0x20||command==0x60){
size++;
if(!skip&&!(*(u32 *)(p+8)&0x100)){
last=(*(u8 **)p)[2];func_021205ec(0x13,&last,1);
}
}
*(u8 **)p+=size;
}

extern s32 data_02156058[];
extern s32 data_02156064[];
extern s32 data_02156034[];
extern u32 data_0215602c[];
extern u32 data_02156028[];
extern void func_02002274(s32 *, s32 *);
extern void func_02002194(s32 *, s32 *, s32 *);
void func_0211f1cc(u8 *p, s32 command) {
    s32 matrix[16], a[16], b[16];
    u32 first, last;
    s32 zero = 0;
    s32 size = 2;
    s32 *position = data_02156058, *scale = data_02156064, *rot = data_02156034;
    s32 callback, skip;

    if (*(u32 *)(p + 8) & 0x200) {
        if (command == 0x40 || command == 0x60) size++;
        if (command == 0x20 || command == 0x60) size++;
        *(u8 **)p += size;
        return;
    }

    if (command == 0x40 || command == 0x60) {
        size++;
        if (!(*(u32 *)(p + 8) & 0x100)) {
            if (command == 0x40) first = (*(u8 **)p)[2];
            else first = (*(u8 **)p)[3];
            func_021205ec(0x14, &first, 1);
        }
    }

    callback = *(void **)(p + 0x2c) ? p[0x94] : 0;
    if (callback == 1) {
        *(u32 *)(p + 8) &= ~0x40;
        (*(void (**)(void *))(p + 0x2c))(p);
        callback = *(void **)(p + 0x2c) ? p[0x94] : 0;
        skip = *(u32 *)(p + 8) & 0x40;
    } else {
        skip = 0;
    }

    if (!(*(u32 *)(p + 8) & 0x100) && !skip) {
        func_021204a8();
        *(volatile u32 *)0x4000400 = 0x151110;
        *(volatile u32 *)0x4000400 = zero;
        *(volatile u32 *)0x4000400 = zero;
        while (func_02002f3c(matrix) != 0) {}
        if (*(u32 *)(data_021701fc + 0xfc) & 1) {
            func_02001100(func_0211d878(), a);
            func_02001894(matrix, a, matrix);
        } else if (*(u32 *)(data_021701fc + 0xfc) & 2) {
            func_02001100(data_02170248, b);
            func_02001894(matrix, b, matrix);
        }
        position[0] = matrix[12];
        position[1] = matrix[13];
        position[2] = matrix[14];
        scale[0] = func_02002214(matrix);
        scale[1] = func_02002214(matrix + 4);
        scale[2] = func_02002214(matrix + 8);

        rot[5] = matrix[6];
        rot[4] = matrix[5];
        rot[3] = matrix[4];
        rot[0] = rot[4];
        rot[2] = 0;
        rot[1] = -rot[3];
        func_02002274(rot, rot);
        func_02002274(rot + 3, rot + 3);
        func_02002194(rot, rot + 3, rot + 6);

        if (*(u32 *)(data_021701fc + 0xfc) & 1) {
            *(volatile u32 *)0x4000400 = 0x171012;
            func_02008e50(data_0215602c, (void *)0x4000400, 8);
            func_02008e50(func_0211d8ac(), (void *)0x4000400, 0x30);
            *(volatile u32 *)0x4000400 = 0x1b19;
            func_02008e50(data_02156034, (void *)0x4000400, 0x3c);
        } else if (*(u32 *)(data_021701fc + 0xfc) & 2) {
            *(volatile u32 *)0x4000400 = 0x171012;
            func_02008e50(data_0215602c, (void *)0x4000400, 8);
            func_02008e50(func_0211d7d4(), (void *)0x4000400, 0x30);
            *(volatile u32 *)0x4000400 = 0x1b19;
            func_02008e50(data_02156034, (void *)0x4000400, 0x3c);
        } else {
            func_02008e50(data_02156028, (void *)0x4000400, 0x48);
        }
    }

    if (callback == 3) {
        *(u32 *)(p + 8) &= ~0x40;
        (*(void (**)(void *))(p + 0x2c))(p);
        skip = *(u32 *)(p + 8) & 0x40;
    } else {
        skip = 0;
    }

    if (command == 0x20 || command == 0x60) {
        size++;
        if (!skip && !(*(u32 *)(p + 8) & 0x100)) {
            last = (*(u8 **)p)[2];
            func_021205ec(0x13, &last, 1);
        }
    }
    *(u8 **)p += size;
}

