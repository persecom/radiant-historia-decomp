/* 10 functions from 0x020F36B0 to 0x020F46A0 (main), found by ds-decomp. */
#include "common.h"
static inline s32 positionSide(const s32 *target, const s32 *current) {
s32 z = target[2]-current[2]>=0;
s32 x = target[0]-current[0]>=0;
s32 y = target[1]-current[1]>=0;
return x | (y<<1) | (z<<2);
}

typedef struct UnkF_020f36b0 {
    u8 unk00[4];
    u16 unk04;
} UnkF_020f36b0;

typedef struct UnkE_020f36b0 {
    u16 count;
    u8 unk02[2];
    UnkF_020f36b0 *items;
} UnkE_020f36b0;

extern s32 func_0201f884(s32);
extern s32 func_02020888(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);

extern void func_020f4668(void *);
extern s32 func_020f3fcc(u8 *, s32, s32);
extern void *func_0210c518(u32, void *);
extern void func_02008e68(s32, void *, s32);
extern s32 func_02107d58(u32, u16, u16);
extern void func_0210d9e4(void *);
extern void func_0210da14(void *);
extern void func_0210c5dc(void *);

extern u32 data_02155c3c;
extern u8 *data_02155984;

typedef struct { u32 a, b, c; } Trip;

typedef struct {
    u16 field_0;
    u16 field_2;
    u32 field_4;
} Unk_02151fc8;

extern u8 data_02151fc8[];

typedef struct {
    u8 field_0;
    u8 pad[3];
    void *field_4;
} Unk_02160c34;

extern Unk_02160c34 data_02160c34;

extern void func_020f4210(void);
void func_020f36b0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 j;
    s32 v;
    UnkF_020f36b0 *f;

    for (i = 0; i < *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4)); i++) {
        for (j = 0; j < (*(UnkE_020f36b0 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].count; j++) {
            f = &(*(UnkE_020f36b0 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            f->unk04 += (u16)(arg1 + (arg2 << 5));
            f = &(*(UnkE_020f36b0 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            v = func_0201ff0c(func_020201f4(0x42000000, func_02020888(func_0201f884((f->unk04 % 0x1000 % 0x400) / 0x10), 0x40000000)));
            f->unk04 += (u16)(v - (arg1 + (arg2 << 5)));
        }
    }
}

s32 func_020f402c(u8 *arg0, s32 arg1) {
    u8 *r2 = *(u8 **)arg0;
    u8 *r3 = *(u8 **)(arg0 + 0x10);
    if (*(u16 *)(*(u8 **)(*(u8 **)(r2 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
    case 0:
        return 0;
    case 1:
        return func_020f3fcc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    case 3:
        return func_020f3fcc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    default:
        return 0;
    }
}

void func_020f40a4(void) {
    void *p;

    if (data_02160c34.field_4 != NULL) {
        return;
    }
    p = func_0210c518(0x50, (void *)data_02155c3c);
    data_02160c34.field_4 = p;
    func_02008e68(0, p, 0x50);
    *(u32 *)(data_02151fc8 + 4) = 0x226000;
    *(u16 *)(data_02151fc8 + 2) = 0x1555;
    *(u16 *)data_02151fc8 = 0x2000;
    data_02160c34.field_0 = 0;
    func_02107d58(0x226000, 0x1555, 0x2000);
    *(void **)data_02160c34.field_4 = func_020f4210;
    *(u32 *)((u8 *)data_02160c34.field_4 + 4) = 0x3f8;
    func_0210d9e4(data_02160c34.field_4);
}

void func_020f4144(void) {
    func_0210da14(data_02160c34.field_4);
    if (data_02160c34.field_4 != NULL) {
        func_0210c5dc(data_02160c34.field_4);
        data_02160c34.field_4 = NULL;
    }
}

void func_020f4174(void) {
    u8 *p = ((u8 *)data_02160c34.field_4);
    u32 v = *(u32 *)(p + 0x2c) | *(u32 *)(p + 0x30) | *(u32 *)(p + 0x34);

    if (v != 0) {
        *(Trip *)(data_02155984 + 0x20) = *(Trip *)(p + 0x20);
        *(u32 *)(p + 0x2c) = 0;
        *(u32 *)(p + 0x30) = 0;
        *(u32 *)(p + 0x34) = 0;
    }

    p = ((u8 *)data_02160c34.field_4);
    if (*(u16 *)(p + 0x1a) != 0) {
        *(u16 *)(p + 0x1a) = 0;
        *(u16 *)data_02151fc8 = *(u16 *)(((u8 *)data_02160c34.field_4) + 0x18);
    }
    func_02107d58(*(u32 *)(data_02151fc8 + 4), *(u16 *)(data_02151fc8 + 2), *(u16 *)data_02151fc8);
}

extern void func_020020f8(void *,void *,void *);
extern void func_020f4774(u32,u8);
void func_020f4210(void){
s32 before=0,after=0,zero=0,changed=0;
u8 *q;
u8 *p=data_02160c34.field_4;
Unk_02151fc8 *c;
s32 side;
if(*(u16 *)(p+0x38)==0){
{u32 moving=*(u32 *)(p+0x2c)|*(u32 *)(p+0x30)|*(u32 *)(p+0x34);if(moving!=0){
q=data_02155984;
changed=((s32)(*(u32 *)(p+0x20)-*(u32 *)(q+0x20))>=0) | (((s32)(*(u32 *)(p+0x24)-*(u32 *)(q+0x24))>=0)<<1) | (((s32)(*(u32 *)(p+0x28)-*(u32 *)(q+0x28))>=0)<<2);
func_020020f8(q+0x20,p+0x2c,data_02155984+0x20);
p=data_02160c34.field_4;q=data_02155984;
side=((s32)(*(u32 *)(p+0x20)-*(u32 *)(q+0x20))>=0) | (((s32)(*(u32 *)(p+0x24)-*(u32 *)(q+0x24))>=0)<<1) | (((s32)(*(u32 *)(p+0x28)-*(u32 *)(q+0x28))>=0)<<2);
if(changed!=side){p=data_02160c34.field_4;*(Trip *)(q+0x20)=*(Trip *)(p+0x20);*(u32 *)(p+0x2c)=before;*(u32 *)(p+0x30)=before;*(u32 *)(p+0x34)=before;}changed=1;
}}
}else if(*(u16 *)(p+0x38)&1){
func_020f4774(*(u32 *)(p+0x3c),p[0x40]);
p=data_02160c34.field_4;
{u32 moving=*(u32 *)(p+0x2c)|*(u32 *)(p+0x30)|*(u32 *)(p+0x34);if(moving!=0){
s32 distance=0,d;
q=data_02155984;
before=((s32)(*(u32 *)(p+0x20)-*(u32 *)(q+0x20))>=0) | (((s32)(*(u32 *)(p+0x24)-*(u32 *)(q+0x24))>=0)<<1) | (((s32)(*(u32 *)(p+0x28)-*(u32 *)(q+0x28))>=0)<<2);
func_020020f8(q+0x20,p+0x2c,data_02155984+0x20);
p=data_02160c34.field_4;q=data_02155984;
side=((s32)(*(u32 *)(p+0x20)-*(u32 *)(q+0x20))>=0) | (((s32)(*(u32 *)(p+0x24)-*(u32 *)(q+0x24))>=0)<<1) | (((s32)(*(u32 *)(p+0x28)-*(u32 *)(q+0x28))>=0)<<2);
d=*(s32 *)(p+32)-*(s32 *)(q+32);distance+=(d<0?-d:d);
d=*(s32 *)(p+36)-*(s32 *)(q+36);distance+=(d<0?-d:d);
d=*(s32 *)(p+40)-*(s32 *)(q+40);distance+=(d<0?-d:d);
if(before!=side || distance<0x2000){
p=data_02160c34.field_4;*(Trip *)(q+0x20)=*(Trip *)(p+0x20);*(u32 *)(p+0x2c)=after;*(u32 *)(p+0x30)=after;*(u32 *)(p+0x34)=after;
p=data_02160c34.field_4;*(u16 *)(p+0x38)&=0xfffe;
p=data_02160c34.field_4;*(u32 *)(p+0x3c)=after;
}changed=1;
}}
}
p=data_02160c34.field_4;
c=(Unk_02151fc8 *)data_02151fc8;
if(*(u16 *)(p+0x4c)){
c->field_4+=*(u32 *)(p+0x48);
--*(u16 *)(p+0x4c);
p=data_02160c34.field_4;
if(*(u16 *)(p+0x4c)==0){c->field_4=*(u32 *)(p+0x48);*(u32 *)(p+0x44)=zero;}
}
p=data_02160c34.field_4;
if(*(u16 *)(p+26)){
s32 step=*(u16 *)(p+26),next;
u16 target=*(u16 *)(p+24),current=c->field_0;
if(current<target){if(target-current>=0x8000)goto negate0;}else{if(current-target<0x8000){
negate0:
step=-step;}}
c->field_0+=(u16)step;
{u8 *n=data_02160c34.field_4;
current=c->field_0;target=*(u16 *)(n+24);next=*(u16 *)(n+26);
if(current<target){if(target-current>=0x8000)goto negate1;}else{if(current-target<0x8000){
negate1:
next=-next;}}
}
if(step!=next){*(u16 *)(p+26)=zero;p=data_02160c34.field_4;c->field_0=*(u16 *)(p+24);}
changed=1;
}
if(*(u16 *)(p+30)){
s32 step=*(u16 *)(p+30),next;
u16 target=*(u16 *)(p+28),current=c->field_2;
if(current<target){if(target-current>=0x8000)goto negate2;}else{if(current-target<0x8000){
negate2:
step=-step;}}
c->field_2+=(u16)step;
{u8 *n=data_02160c34.field_4;
current=c->field_2;target=*(u16 *)(n+28);next=*(u16 *)(n+30);
if(current<target){if(target-current>=0x8000)goto negate3;}else{if(current-target<0x8000){
negate3:
next=-next;}}
}
if(step!=next){*(u16 *)(p+30)=zero;p=data_02160c34.field_4;c->field_2=*(u16 *)(p+28);}
changed=1;
}
if(changed)func_02107d58(c->field_4,c->field_2,c->field_0);
}

void func_020f4640(void) {
    u32 buf[3] = {0, 0, 0};
    func_020f4668(buf);
}

void func_020f4668(void *arg0) {
    *(Trip *)(data_02155984 + 0x20) = *(Trip *)arg0;
    func_02107d58(*(u32 *)(data_02151fc8 + 4), *(u16 *)(data_02151fc8 + 2), *(u16 *)data_02151fc8);
}

