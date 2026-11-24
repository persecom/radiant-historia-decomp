/* 27 functions from 0x02110518 to 0x02111498 (main), found by ds-decomp. */
#include "common.h"
extern void *data_02155c3c;
extern const struct Unk_02110b94Table { s16 v[2][10]; } data_02144c34;
typedef struct { u16 v[4]; } Unk_02110b94Small;
extern const u16 data_02144c00[4];
extern void func_0211137c(u8 *);
extern void func_02111594(u8 *);
extern u16 data_021626a6;
typedef struct { u16 v[5]; } Unk10;
extern const Unk10 data_02144bcc;
extern u8 *func_020c9b24(void *, u16, int);

extern void func_021107cc(u8 *, s32, s32);
extern void func_02110abc(void *);
extern void func_0211111c(void *, s32, s32);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9c10(void *, u16);
typedef struct { u16 v[20]; } Unk40;
extern const Unk40 data_02144bd8;
extern const u16 data_02144c1c[6];
extern u32 func_020c73c0(void *);
extern void func_020c9b64(void *);
extern void func_0211379c(u32, u16 *, u16 *);

extern void func_0210c5dc(void *);
extern void func_0211106c(void *);
extern s32 func_020c7408();
extern void func_021103a8(void *);
extern u8 *func_02113834(void);
void func_02110518(u8 *p) {
u8 old=p[0x39];
s32 count=func_020c9c34(*(void **)(p+0x30));
u16 i;
u8 *obj;
for(i=0;i<(u32)count;i++) {
obj=func_020c9c10(*(void **)(p+0x30),i);
if(!((s32 (*)(void *))(*(void **)(obj+0x18)))(obj) && func_020c73d8((u16 *)obj)) p[0x39]=i;
}
if(data_021626a6&16) {p[0x39]++;p[0x39]%=count;}
if(data_021626a6&32) {
if(p[0x39]) p[0x39]--;
else {if(count==0)p[0x39]=0;else p[0x39]=count-1;}
}
obj=func_020c9c10(*(void **)(p+0x30),p[0x39]);
if(obj && func_020c7408(obj))p[0x39]=old;
p[0x76]=old!=p[0x39];
if(p[0x76]) {
obj=func_020c9c10(*(void **)(p+0x30),p[0x39]);
if(obj) {func_021103a8(obj);func_0210d27c(1);}
}
obj=func_020c9c10(*(void **)(p+0x30),p[0x39]);
if(!obj)return;
switch(*(u16 *)(obj+0x3e)) {
case 1:case 2:if(func_02113834())func_02113834()[0x90]=1;break;
case 3:if(func_02113834())func_02113834()[0x90]=4;break;
case 0:case 4:if(func_02113834())func_02113834()[0x90]=2;break;
}
}

void func_021106cc(u8 *arg0, u8 *arg1) {
    typedef struct { u16 a, b, c, d; } S;
    S *src = (S *)arg1;
    u8 *sub = arg0 + 0x30;
    u16 i;
    for (i = 0; i < 5; i++) {
        *(S *)(sub + i * 8 + 0x1e) = src[i];
    }
}

void func_0211071c(u8 *arg0, u16 *arg1) {
    u8 *sub = arg0 + 0x30;
    u16 i;
    for (i = 0; i < 5; i++) {
        *(u16 *)(sub + i * 2 + 0xa) = arg1[i];
    }
    func_02110abc(arg0);
}

void func_02110754(u8 *arg0, u16 *arg1) {
    u8 *sub = arg0 + 0x30;
    u16 i;
    for (i = 0; i < 5; i++) {
        *(u16 *)(sub + i * 2 + 0x14) = arg1[i];
    }
    func_02110abc(arg0);
}

void func_0211078c(u8 *arg0) {
    Unk40 buf = data_02144bd8;
    func_021106cc(arg0, (u8 *)&buf);
}

void func_021107cc(u8 *arg0, s32 arg1, s32 arg2) {
    u16 i;
    s16 x;
    s16 y;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        x = arg1 + (*(s16 *)(obj + 0x38) - *(s16 *)(arg0 + 0x34));
        y = arg2 + (*(s16 *)(obj + 0x3a) - *(s16 *)(arg0 + 0x36));
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
    }
    *(s16 *)(arg0 + 0x34) = arg1;
    *(s16 *)(arg0 + 0x36) = arg2;
}

void func_02110868(u8 *arg0, s32 arg1) {
    func_021107cc(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_02110878(u8 *arg0, s32 arg1) {
    func_021107cc(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

void func_0211088c(u8 *arg0, u8 arg1) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        s32 delta = obj[0x3c] - arg0[0x38];
        ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + delta);
    }
    arg0[0x38] = arg1;
}

void func_021108f0(u8 *arg0, u32 flags) {
Unk10 table = data_02144bcc;
u16 count=0;
u16 i;
u16 n;
u8 *obj;
u32 mask;
u16 bit;
for(i=0;i<5;i++) { if(flags & (1 << table.v[i])) count++; }
func_020c9980(*(void **)(arg0+0x30));
func_020c9a04(*(void **)(arg0+0x30),count);
n=0;
for(i=0;i<5;i++) {
bit=table.v[i]; mask=1 << bit;
if(flags & mask) {
obj=func_020c9b24(*(void **)(arg0+0x30),n,14);
*(u16 *)(obj+0x3e)=bit;
((void (*)(u8 *, s32))(*(void **)(obj+0x10)))(obj,(s16)(*(s16 *)(arg0+0x34)+n*20));
((void (*)(u8 *, s32))(*(void **)(obj+0x14)))(obj,*(s16 *)(arg0+0x36));
if(!(mask & 31)) func_020c738c(obj,4,4);
n++;
}
}
}

void func_02110a28(u8 *arg0) {
    u8 *obj;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    u16 i;
    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        {
            s32 flag = func_020c73d8((u16 *)obj);
            s32 on = func_020c7408((u16 *)obj) == 0 ? 1 : 0;
            flag = flag & on;
            if (flag != 0) {
                ((void (*)(u8 *, s32, s32))(*(void **)(obj + 0x24)))(obj, 1, 1);
            } else {
                ((void (*)(u8 *, s32, s32))(*(void **)(obj + 0x24)))(obj, 0, 0);
            }
        }
    }
}

void func_02110abc(void *arg0)
{
  u8 *p = (u8 *) arg0;
  u32 count = func_020c9c34(*((void **) (p + 0x30)));
  u16 i;
  for (i = 0; i < count; i++)
  {
    u8 *obj = func_020c9c10(*((void **) (p + 0x30)), i);
    *((u8 **) (obj + 0x34)) = p;
    func_021103c0(obj, (u8) (i == p[0x39]));
  }

}

extern s32 func_020c73d8(u16 *);
extern BOOL func_020c7408(void);
u16 func_02110b20(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), arg0[0x39]);
    return *(u16 *)(obj + 0x3e);
}

u8 func_02110b38(u16 arg0) {
    u8 i;
    u16 lo;
    u16 hi;
    for (i = 0; i < 5; i++) {
        func_0211379c(i, &hi, &lo);
        if (arg0 < hi) {
            continue;
        }
        if (arg0 >= lo) {
            continue;
        }
        return i;
    }
    return 5;
}

extern void func_020c6d78(void *);
extern void *func_0210c594(u32,void *);
extern void func_020c992c(void *);
extern void func_020c7894(void *,u8);
extern void func_020c8344(void *,s32,s32);
extern void func_020c8640(void *,s32);
extern void func_020c8598(void *,s32);
s32 func_02110b94(u8 *p) {
struct Unk_02110b94Table table;
u16 vals[4];
u8 *obj;
u16 i;
func_020c6d78(p);
if(!*(void **)(p+0x30)) {
*(void **)(p+0x30)=func_0210c594(8,data_02155c3c);
func_020c992c(*(void **)(p+0x30));
}
*(u32 *)(p+0x40)=0;p[0x44]=0;
*(void (**)(u8 *))(p+0x4c)=func_0211137c;
*(void (**)(u8 *))(p+0x50)=func_02111594;
func_020c9a04(*(void **)(p+0x30),6);
table=data_02144c34;
for(i=0;i<2;i++) {
s16 *row=table.v[i];
s16 kind=row[1];
obj=func_020c9b24(*(void **)(p+0x30),(u16)row[0],(u8)kind);
*(s16 *)(obj+0x32)=row[2];
*(s16 *)(obj+0x34)=row[3];
*(s16 *)(obj+0x36)=row[4];
*(s16 *)(obj+0x38)=row[5];
*(s16 *)(obj+0x3e)=row[6];
*(s16 *)(obj+0x40)=row[7];
obj[0x43]+=(u8)row[9];
if(kind==5)func_020c7894(obj,(u8)row[8]);
}
{ s32 one=1,kind=25,four=4;
obj=func_020c9b24(*(void **)(p+0x30),one,kind);
((void (*)(void *,u8))(*(void **)(obj+0x1c)))(obj,obj[0x43]+2);
((void (*)(void *,s32))(*(void **)(obj+0x10)))(obj,one);
((void (*)(void *,s32))(*(void **)(obj+0x14)))(obj,-1);
vals[0]=data_02144c00[0];vals[1]=data_02144c00[1];vals[2]=data_02144c00[2];vals[3]=data_02144c00[3];
obj=func_020c9b24(*(void **)(p+0x30),vals[0],four);
((void (*)(void *,s32))(*(void **)(obj+0x10)))(obj,(s16)vals[1]);
((void (*)(void *,s32))(*(void **)(obj+0x14)))(obj,(s16)vals[2]);
func_020c8344(obj,four,one);
func_020c8640(obj,(s16)vals[3]);
func_020c8598(obj,one);
}
return 0;
}

void func_0211104c(void *arg0) {
    func_0211106c(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020c9940(void *);
void func_0211106c(void *arg0) {
    if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)((u8 *)arg0 + 0x30));
        if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)((u8 *)arg0 + 0x30));
            *(void **)((u8 *)arg0 + 0x30) = NULL;
        }
        *(void **)((u8 *)arg0 + 0x30) = NULL;
    }
}

s32 func_021110a8(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 2;
    }
    func_020c9b64(*(void **)(arg0 + 0x30));
    return 0;
}

extern const u16 data_02144c10[];
void func_0211111c(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    u16 vals[6];
    u16 *dst = vals;
    u16 i;
    u8 *obj;
    s16 x;
    s16 y;
    vals[0] = data_02144c10[0];
    vals[1] = data_02144c10[1];
    vals[2] = data_02144c10[2];
    vals[3] = data_02144c10[3];
    vals[4] = data_02144c10[4];
    vals[5] = data_02144c10[5];
    for (i = 0; i < 6; i++) {
        obj = func_020c9c10(*(void **)(p + 0x30), dst[i]);
        if (obj != NULL) {
            x = arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(p + 0x34));
            y = arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(p + 0x36));
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
        }
    }
    *(s16 *)(p + 0x34) = arg1;
    *(s16 *)(p + 0x36) = arg2;
}

void func_021111f4(u8 *arg0, u32 arg1, u32 arg2) {
    u16 vals[6];
    u16 *dst = vals;
    u16 i;
    u8 *obj;
    vals[0] = data_02144c1c[0];
    vals[1] = data_02144c1c[1];
    vals[2] = data_02144c1c[2];
    vals[3] = data_02144c1c[3];
    vals[4] = data_02144c1c[4];
    vals[5] = data_02144c1c[5];
    for (i = 0; i < 6; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x30), dst[i]);
        if (obj != NULL) {
            ((void (*)(u8 *, u32, u32))(*(void **)(obj + 0x24)))(obj, arg1, arg2);
        }
    }
}

void func_0211128c(u8 *arg0, s32 arg1) {
    func_0211111c(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_0211129c(u8 *arg0, s32 arg1) {
    func_0211111c(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

extern const u16 data_02144c28[];
extern u32 func_020c85cc(u8 *);
void func_021112b0(u8 *arg0, u8 arg1) {
    u16 vals[6];
    u16 *dst = vals;
    u8 *obj;
    u16 i;
    vals[0] = data_02144c28[0];
    vals[1] = data_02144c28[1];
    vals[2] = data_02144c28[2];
    vals[3] = data_02144c28[3];
    vals[4] = data_02144c28[4];
    vals[5] = data_02144c28[5];
    for (i = 0; i < 6; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x30), dst[i]);
        if (obj != NULL) {
            u32 val;
            if (((u32 (*)(u8 *))(*(void **)(obj + 0x28)))(obj) == 4) {
                val = func_020c85cc(obj);
            } else {
                val = *(u8 *)(obj + 0x43);
            }
            ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + (val - *(u8 *)(arg0 + 0x38)));
        }
    }
    *(u8 *)(arg0 + 0x38) = arg1;
}

void func_02111374(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0x48) = arg1;
}

void func_0211137c(u8 *arg0) {
u8 *p48 = *(u8 **)(arg0 + 0x48);
u32 r4 = 0;
u8 *r5;
u8 *sub = p48 + 0x30;
u32 index = 0;
u8 *v1;
u16 anim;
void *v7;
u8 *v6;
u32 value;
r5 = func_02111d7c(p48, *(u16 *)(arg0 + 0x3a));
if(r5 != NULL) r4 = func_02111dbc(p48, *(u16 *)(r5+4));
v1 = func_020c9c10(*(void **)(arg0+0x30),1);
if(r5 != NULL) { func_020c738c(v1,0,1); *(u16 *)(v1+0x4c)=*(u16 *)(r5+2); }
else func_020c738c(v1,1,1);
if(r5 != NULL && (r5[6]&1)) index=1;
if(*(u16 *)(arg0+0x3c)) anim=((u16 *)(sub+0x1a))[index];
else anim=((u16 *)(sub+0x1e))[index];
func_021115bc(arg0,anim);
v7=func_020c9c10(*(void **)(arg0+0x30),2);
if(*(u16 *)(arg0+0x3c)) value=((u32 *)(sub+0x2c))[index];
else value=((u32 *)(sub+0x34))[index];
if(r5 != NULL) {
v6=func_020c9c10(*(void **)(arg0+0x30),3);
func_020c83f4(v7,r4,*(u16 *)(r5+2),0);
func_020c738c(v6,1,1);
}
func_020c8640(v7,value);
}

