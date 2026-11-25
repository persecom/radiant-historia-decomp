/* 7 functions from 0x02056D10 to 0x02057AE4 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0214656c[], data_0214658c[], data_021465b4[], data_021465dc[], data_02146608[], data_0214662c[];
extern void *func_021092d8(void *);
extern int func_020f685c(void *, int);
extern int func_02109444(void *);
extern void func_021093b0(void *);
extern void func_02005e80(void *, void *, ...);
extern void func_020f2524(void *, void *, int, void *, void *);

extern u8 *data_021600ac;
extern u8 *func_02057764(u16, s32, s16, s16, s16, s8, u16, u8, s32);
extern void func_021168f8(void **, void *);
extern void func_0210c5dc(void *);
extern void func_020f4f04(void *);
extern void func_02056fbc(void);
extern s32 func_020a2c5c(s32, s32, s32, s32, s32);
extern s32 func_020a8844(s32, s32, s32, s32);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern void func_020a9610(void *, s32, s32, s32, s32, s32);
extern void func_02044820(u32);
extern void func_021167ac(void *, s32);
extern u8 *func_020bd438(s32);
extern u8 *func_02021f10(s32);
extern void func_02057244(void);
extern u32 data_02160204;
extern u32 data_02160078;
extern u32 data_02155c3c;
extern u8 data_02146568;
extern u8 *func_0210c594(s32, s32);
extern u8 *func_020f4d40(s32);
extern u8 *func_020f4c2c(s32);
extern u8 *func_020f4ec4(void);
extern s32 func_020f50bc(void *, void *, void *, ...);
typedef struct { s32 v[5]; } SpriteParams_02057244;
typedef struct { s32 v[546]; } SpriteTable_02057244;
extern const SpriteParams_02057244 data_0213f3c4;
extern const SpriteTable_02057244 data_0213f3d8;
extern f32 func_0201f8cc(u32),func_0201f884(s32);
extern f32 func_02020888(f32,f32),func_020201f4(f32,f32),func_02020604(f32,f32);
extern s32 func_0201ff0c(f32);
extern void func_0208c788(s32,s32,s32 *,s32 *);
extern void func_020f5114(void *, s32);
extern void func_021167f0(void *, void *);

void func_02056d10(void) {
    u8 i;
    s32 n;
    func_02056fbc();
    i = 0;
    if (func_020a2c5c(5, 0xe, i, 0x7d0, 7) == 0) {
        return;
    }
    *(u32 *)(data_021600ac + 0x2e4) = func_020a8844(0x20, 0x1c0, 0x20, 2);
    func_020a9830(data_021600ac + 0x300, data_021600ac + 0x2e8, i, i, i, i);
    func_020a9610(data_021600ac + 0x2e8, *(u32 *)(data_021600ac + 0xa8), 1, *(u32 *)(data_021600ac + 0x2e4), i, i);
    func_02044820(*(u16 *)((u8 *)data_02160204 + 0x72));
    func_021167ac(data_021600ac + 0x8c4, 0x4c);
    func_021167ac(data_021600ac + 0x8d0, 0x20);
    for (; i < 3; i++) {
        u8 *e = func_020bd438(i);
        if (e == 0) {
            continue;
        }
        if ((*(u16 *)e & 1) == 0) {
            continue;
        }
        u8 *tbl = func_02021f10(*(u8 *)(e + 2));
        func_02057764(i * 0x64 + 0xc9, tbl[0x43], i * 0x51 + 0x4f, 0x88, 1, 5, 0x160, 1, 1);
        func_02057764(i * 0x64 + 0xca, *(u16 *)(tbl + 0x10), i * 0x51 + 0x4f, 0x91, 1, 5, 0x160, 1, 1);
        func_02057764(i * 0x64 + 0xcb, *(u16 *)(tbl + 0x14), i * 0x51 + 0x4f, 0x9e, 1, 5, 0x160, 1, 1);
    }
    n = 1;
    func_02057244();
    func_02057764(0x3e8 - n, *(s32 *)((u8 *)data_02160078 + 0x28), 0xe2, 0x75, n, 8, 0x120, n, 0);
}

void func_02056f2c(void) {
    u8 *node = *(u8 **)(data_021600ac + 0x8d0);
    while (node != NULL) {
        u8 *child = *(u8 **)(node + 0x14);
        u8 *next = *(u8 **)(node + 0x24);
        while (child != NULL) {
            void *v = *(void **)(child + 4);
            u8 *child_next = *(u8 **)(child + 0xc);
            func_020f4f04(v);
            func_021168f8((void **)(node + 0x14), child);
            if (child != NULL) func_0210c5dc(child);
            child = child_next;
        }
        func_021168f8((void **)(data_021600ac + 0x8d0), node);
        if (node != NULL) func_0210c5dc(node);
        node = next;
    }
}

void func_02056fbc(void) {
void *a[3], *b[3];
u8 i;
u8 value=0;
u8 *p;
void *f;
func_021167ac(a,0x114);
func_021167ac(b,0x114);
p=func_0210c594(0x11c,data_02155c3c);
f=func_021092d8(data_0214656c);
if (!f) return;
for(i=0;i<(*(u16 *)((u8 *)data_02160204+0x72)-1)/20+1;i++){
value=func_020f685c(f,0);
if(!func_02109444(f)) break;
}
func_021093b0(f);
if(value){
func_02005e80(p,data_0214658c,value);
*(u16 *)(p+0x102)=12;
func_021167f0(a,p);
}else if(p) func_0210c5dc(p);
for(i=0;i<3;i++){
u8 *e=func_020bd438(i);
u8 *q;
if(!e) continue;
if(!(*(u16 *)e&1)) continue;
q=func_0210c594(0x11c,data_02155c3c);
func_02005e80(q,data_021465b4,e[2]);
*(u16 *)(q+0x100)=i*5+1;
func_021167f0(a,q);
q=func_0210c594(0x11c,data_02155c3c);
func_02005e80(q,data_021465dc,e[2]);
*(u16 *)(q+0x102)=i+13;
func_021167f0(b,q);
}
func_020f2524(data_02146608,data_0214662c,2,a,b);
while((p=a[0])!=0){func_021168f8(a,p);if(p)func_0210c5dc(p);}
while((p=b[0])!=0){func_021168f8(b,p);if(p)func_0210c5dc(p);}
}

void func_02057244(void) {
SpriteParams_02057244 params=data_0213f3c4;
SpriteTable_02057244 table=data_0213f3d8;
s32 zero=0;
u8 *obj,*tex,*actor;
u16 i;
u32 j;
f32 ratio,value;
for(i=0;i<3;i++){
u8 *e=func_020bd438((u8)i);
if(!e)continue;
if(!(*(u16 *)e&1))continue;
for(j=0;j<23;j=(u16)(j+1)){
u16 index=(j+i*23)*7;
s32 bonus,maximum;
obj=func_020f4ec4();
*(s32 *)(obj+8)=table.v[index];
*(s32 *)(obj+12)=table.v[index+1];
*(u16 *)(obj+0x44)=table.v[index+4];
*(s32 *)(obj+0x48)=table.v[index+6];
params.v[1]=table.v[index+2];
params.v[2]=table.v[index+3];
params.v[3]=table.v[index+5];
actor=func_02021f10(e[2]);
switch(j){
case 7:
tex=func_020f4d40(i+1);
if(!tex){tex=func_020f4c2c(i+1);*(s32 *)(tex+0x20)=0x1000;*(s32 *)(tex+0x24)=0x1000;}
if(*(u16 *)(actor+0x10)==0){*(s32 *)(obj+0x20)=zero;break;}
value=func_0201f8cc(*(u16 *)(actor+0x10));
maximum=*(u16 *)(actor+0x12);bonus=*(s16 *)(actor+0x24);
goto stat_ratio;
case 8:
tex=func_020f4d40(i+4);
if(!tex){tex=func_020f4c2c(i+4);*(s32 *)(tex+0x20)=0x1000;*(s32 *)(tex+0x24)=0x1000;}
if(*(u16 *)(actor+0x14)==0){*(s32 *)(obj+0x20)=zero;break;}
value=func_0201f8cc(*(u16 *)(actor+0x14));
maximum=*(u16 *)(actor+0x16);bonus=*(s16 *)(actor+0x26);
stat_ratio:
ratio=func_02020888(value,func_0201f884(maximum+bonus));
*(s32 *)(tex+0x20)=func_0201ff0c(func_020201f4(4096.0f,ratio));
value=func_0201f884(i*81+52);
*(s32 *)(obj+8)=func_0201ff0c(func_02020604(value,func_02020888(func_02020604(32.0f,func_020201f4(32.0f,ratio)),2.0f)));
break;
case 20:{
s32 needed,previous;
tex=func_020f4d40(i+7);
if(!tex){tex=func_020f4c2c(i+7);*(s32 *)(tex+0x20)=0x1000;*(s32 *)(tex+0x24)=0x1000;}
needed=zero;previous=zero;
func_0208c788(actor[0x42],actor[0x43],&needed,&previous);
if(*(u32 *)(actor+4)!=0){
value=func_0201f8cc(*(u32 *)(actor+4)-previous);
ratio=func_02020888(value,func_0201f884(needed));
if(actor[0x43]==99)ratio=1.0f;
if(0.0f==ratio){*(s32 *)(obj+0x20)=zero;break;}
*(s32 *)(tex+0x20)=func_0201ff0c(func_020201f4(4096.0f,ratio));
value=func_0201f884(i*81+29);
*(s32 *)(obj+8)=func_0201ff0c(func_02020604(value,func_02020888(func_02020604(64.0f,func_020201f4(64.0f,ratio)),2.0f)));
}else *(s32 *)(obj+0x20)=zero;
break;
}
default:
tex=func_020f4d40(zero);
if(!tex){tex=func_020f4c2c(zero);*(s32 *)(tex+0x20)=0x1000;*(s32 *)(tex+0x24)=0x1000;}
break;
}
if(j>=9 && j<=19){
if(*((u8 *)data_02160204+0x11c)){
s32 n=*(u16 *)(actor+0x34);
if(n==100)*(s32 *)(obj+0x20)=1;
else if((s32)j-9<(n%100)/9)*(s32 *)(obj+0x20)=1;
else *(s32 *)(obj+0x20)=zero;
}else *(s32 *)(obj+0x20)=zero;
}
if(*((u8 *)data_02160204+0x11c)==0){
if(j==21)*(s32 *)(obj+0x20)=1;
if(j==22)*(s32 *)(obj+0x20)=1;
}else{
if(j==21)*(s32 *)(obj+0x20)=zero;
if(j==22)*(s32 *)(obj+0x20)=zero;
}
if(!func_020f50bc(obj,&params,tex))return;
func_020f5114(obj,*(s32 *)(obj+0x20));
func_021167f0(data_021600ac+0x8c4,obj);
}
}
{
u8 *tex=func_020f4d40(0);
u16 j;
for(j=69;j<78;j=(u16)(j+1)){
u16 index=j*7;
u8 *obj=func_020f4ec4();
*(s32 *)(obj+8)=table.v[index];
*(s32 *)(obj+12)=table.v[index+1];
*(u16 *)(obj+0x44)=table.v[index+4];
*(s32 *)(obj+0x48)=table.v[index+6];
params.v[1]=table.v[index+2];
params.v[2]=table.v[index+3];
params.v[3]=table.v[index+5];
if(!func_020f50bc(obj,&params,tex))return;
func_020f5114(obj,1);
func_021167f0(data_021600ac+0x8c4,obj);
}
}
}

#pragma push
#pragma scheduling off
u8 *func_02057764(u16 a0, s32 a1, s16 a2, s16 a3, s16 a4, s8 a5, u16 a6, u8 a7, s32 a8) {
    u8 *p;
    u8 *buf;
    s32 v = a1;
    u8 j;
    u8 count = 0;
    u8 *result;
    u8 *node;
    u8 digit;
    u32 local[5] = {0, 0, 0, 0, 0};

    p = func_0210c594(0x28, data_02155c3c);
    func_021167ac(p + 0x14, 8);
    *(u16 *)(p + 0) = a0;
    *(u32 *)(p + 4) = a1;
    *(u16 *)(p + 8) = a2;
    *(u16 *)(p + 0xa) = a3;
    *(s16 *)(p + 0xc) = a4;
    *(u8 *)(p + 0xe) = a5;
    *(u16 *)(p + 0x10) = a6;
    *(u8 *)(p + 0x12) = a7;
    for (;;) {
        if (v == 0) break;
        count++;
        v /= 10;
    }
    if (count == 0) {
        count = 1;
    }
    buf = func_020f4d40(0);
    if (buf == 0) {
        buf = func_020f4c2c(0);
        *(u32 *)(buf + 0x20) = 0x1000;
        *(u32 *)(buf + 0x24) = 0x1000;
    }
    for (j = 0; j < count; j++) {
        result = func_020f4ec4();
        node = func_0210c594(0x10, data_02155c3c);
        digit = (u8)(a1 % 10);
        a1 /= 10;
        *(s32 *)(result + 8) = (a7 != 0) ? (a2 - j * a5) : (a5 * (count - 1 - j) + a2);
        *(s32 *)(result + 0xc) = (a8 == 0) ? (a3 - 1) : a3;
        *(u16 *)(result + 0x44) = a4;
        *(u32 *)(result + 0x48) = a0;
        if (a8 == 0) {
            local[1] = 0x8000;
        } else {
            local[1] = 0;
        }
        local[3] = 0;
        local[2] = a6 + digit * data_02146568;
        if (func_020f50bc(result, local, buf, local[2]) == 0) {
            return 0;
        }
        func_020f5114(result, 1);
        *(u32 *)(node + 4) = result;
        *(u8 *)(node + 0) = j;
        func_021167f0(p + 0x14, node);
    }
    func_021167f0(data_021600ac + 0x8d0, p);
    return p;
}
#pragma pop
void *func_020579dc(u16 arg0) {
    u8 *node = *(u8 **)(data_021600ac + 0x8d0);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void func_02057a18(u16 arg0, s32 arg1, s32 arg2) {
    u8 *node = (u8 *)func_020579dc(arg0);
    if (node != NULL) {
        u8 *child = *(u8 **)(node + 0x14);
        while (child != NULL) {
            void *v = *(void **)(child + 4);
            u8 *child_next = *(u8 **)(child + 0xc);
            func_020f4f04(v);
            func_021168f8((void **)(node + 0x14), child);
            if (child != NULL) func_0210c5dc(child);
            child = child_next;
        }
        func_021168f8((void **)(data_021600ac + 0x8d0), node);
        func_02057764(
            *(u16 *)node,
            arg1,
            *(s16 *)(node + 8),
            *(s16 *)(node + 0xa),
            *(s16 *)(node + 0xc),
            *(s8 *)(node + 0xe),
            *(u16 *)(node + 0x10),
            *(u8 *)(node + 0x12),
            arg2
        );
        if (node != NULL) func_0210c5dc(node);
    }
}

