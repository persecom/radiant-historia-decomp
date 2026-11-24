/* 21 functions from 0x020B8718 to 0x020B967C (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 values[8]; } Unk_020b8aacIds;
extern u16 data_021438e8[],data_021438fc[],data_021438dc[];
extern Unk_020b8aacIds data_021439a4;
extern void func_020b8c44(void);
extern void func_020b92d4(void);
extern void func_020b948c(void);
extern void func_020b9990(void);
extern void func_020b9ad8(void);
extern void func_020b9b78(void);
extern void func_020ba118(void);
extern u32 data_02162858[2];
extern u32 data_02162854;

extern u8 *data_021601ec;
extern u8 *data_02160204;
extern void func_020c9b64(void *);
extern void func_020c9bb8(void *);
extern void func_020b8ef4(void);
extern void func_020b9350(void);
extern void func_020b967c(void);
extern void func_020b99d8(void);
extern void func_020b9af0(void);
extern void func_020b9c84(void);
extern void func_020ba214(void);
extern void func_020ba3c0(void);
extern void func_020ba3f8(void);
extern void func_020b748c(void);
extern void func_020b7624(void);
extern void func_020b8944(void);
extern s32 func_020de3d8(void);
extern void *func_020c9c10(void *, s32);

extern void func_020c8488(void *);
extern s32 func_020b8dbc(void);
extern void func_02111ccc(void *);
extern void *func_02111d3c(void *);
extern u16 func_02110b38(u16);
extern void func_02112688(void *);
extern void func_021108f0(void *, s32);
extern void func_02112068(void *);
extern void func_02111bf0(void *);
extern void func_02111ff0(void *);
extern void *func_02112048(void *);
extern void func_020b9214(void *, u16, s32);
extern void func_020b9274(void *, u16, s32);
extern void func_020b92b0(void);
extern void func_020b9250(void);
extern void func_020c83f4(u8 *, s32, s32, s32);
extern void func_020c738c(void *, s32, s32);
extern u16 data_02143904[];
extern u16 data_021438f0[];
extern u16 data_02143908[];
extern void func_020ba63c(s32);
extern void *func_020c8adc(void *);
extern void func_020c93f4(void *, u16);
extern u16 func_020c94a8(void *);
extern s16 func_020c94b0(void *);

void func_020b8718(void) {
s32 zero=0;
u8 *p;
s32 i;
func_020a3b84();func_02107104();func_02112ed8();func_020a2e24();
p=data_021601ec;
if(p) {
for(i=0;i<5;i++) {
func_020a9544(*(void **)(p+0x60+i*4));
func_020a9544(*(void **)(p+0x74+i*4));
}
func_020a9544(*(void **)(p+0x88));
if(*(void **)(p+0x48)) {
func_020c9940(*(void **)(p+0x48));
if(*(void **)(p+0x48)) {func_0210c5dc(*(void **)(p+0x48));*(void **)(p+0x48)=0;}
*(void **)(p+0x48)=0;
}
if(*(void **)(p+0x4c)) {
func_020c9940(*(void **)(p+0x4c));
if(*(void **)(p+0x4c)) {func_0210c5dc(*(void **)(p+0x4c));*(void **)(p+0x4c)=0;}
*(void **)(p+0x4c)=0;
}
func_0210dba0(p+0x14);func_0210dbe8(p+0x28);func_0210da14(p);
if(data_021601ec) func_0210c5dc(data_021601ec);
data_021601ec=0;
}
if(*(void **)(data_02160204+0x10c)) {
func_020de29c(*(void **)(data_02160204+0x10c));
*(void **)(data_02160204+0x10c)=0;
}
func_0210e290(zero);
data_02162858[0]=0;data_02162854=0;
func_0210f138();
}

void func_020b8844(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020b886c(void) {
    func_020c9b64(*(void **)(data_021601ec + 0x48));
}

void func_020b8888(void) {
    func_020c9b64(*(void **)(data_021601ec + 0x4c));
}

void func_020b88a4(void) {
    u8 *root = data_021601ec;
    func_020c9bb8(*(void **)(root + 0x48));
    func_020c9bb8(*(void **)(root + 0x4c));
    switch (*(u32 *)(root + 0x40)) {
    case 0:
        func_020b8ef4();
        break;
    case 1:
        func_020b9350();
        break;
    case 2:
        func_020b967c();
        break;
    case 3:
        func_020b99d8();
        break;
    case 4:
        func_020b9af0();
        break;
    case 5:
        func_020b9c84();
        break;
    case 6:
        func_020ba214();
        func_020ba3c0();
        func_020ba3f8();
        func_020b748c();
        func_020b7624();
        func_020b8944();
        break;
    }
}

void func_020b8944(void) {
u8 *p=data_021601ec;
s32 v;
s16 pos=3;
u8 *obj;
switch(p[0x8c]) {
case 0:
*(s32 *)(p+0x90)=0x100000;
p[0x8c]=1;
break;
case 1:
v=(*(s32 *)(p+0x90)*80)/100;
*(s32 *)(p+0x90)=v;
pos+=(s16)(v>>12);
obj=func_020c9c10(*(void **)(p+0x4c),7);
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,pos);
((void (*)(u8 *,s32))(*(void **)(obj+0x14)))(obj,0xb1);
if(*(s32 *)(p+0x90)<0x400) {
*(s32 *)(p+0x90)=0;p[0x8c]=2;
}
break;
case 2:
(*(s32 *)(p+0x90))++;
if(*(s32 *)(p+0x90)>=60) {
*(s32 *)(p+0x90)=-4096;p[0x8c]=pos;
}
break;
case 3:
v=*(s32 *)(p+0x90);
v+=v*35/100;
*(s32 *)(p+0x90)=v;
pos+=(s16)(v>>12);
obj=func_020c9c10(*(void **)(p+0x4c),7);
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,pos);
((void (*)(u8 *,s32))(*(void **)(obj+0x14)))(obj,0xb1);
if(*(s32 *)(p+0x90)<-0x37000) {
*(s32 *)(p+0x90)=0;p[0x8c]=0;
}
break;
}
}

void func_020b8d94(void);
void func_020b90f0(void);
void func_020b91a8(void);
void func_020b8c44(void) {
    u8 *p = data_021601ec;
    u16 arr[3];
    u16 *q;
    u16 i;
    u8 *obj;

    arr[0] = *(u16 *)data_021438f0;
    func_020c738c(func_020c9c10(*(void **)(p + 0x4c), arr[0]), 0, 4);
    q = arr + 1;
    arr[1] = *(u16 *)data_02143908;
    arr[2] = *(u16 *)((u8 *)data_02143908 + 2);
    for (i = 0; i < 2; i++) {
        func_020c738c(func_020c9c10(*(void **)(p + 0x4c), q[i]), 0, 1);
    }
    func_020ba63c(1);
    obj = func_020c8adc(func_020c9c10(*(void **)(data_021601ec + 0x4c), 13));
    func_020c83f4(obj, *(void **)(data_021601ec + 0x88), 2, 0);
    func_020b8d94();
    func_020b90f0();
    if (func_020b8d60() != 0) {
        *(u32 *)(p + 0x40) = 7;
    }
    obj = func_020c9c10(*(void **)(p + 0x4c), 2);
    func_020c93f4(*(void **)(obj + 0x6c), *(u16 *)(p + 0x9c));
    *(u8 *)(p + 0x9a) = func_020c94a8(*(void **)(obj + 0x6c));
    *(u8 *)(p + 0x99) = func_020c94b0(*(void **)(obj + 0x6c));
    func_020b91a8();
}

s32 func_020b8d60(void) {
    if (*(u32 *)(data_02160204 + 0x10c) == 0) {
        return 1;
    }
    return func_020de3d8() == 0;
}

void func_020b8d94(void) {
    u8 *root = data_021601ec;
    if (root[0x44] == 0) {
        *(u32 *)(root + 0x5c) = 0x55000;
    }
    func_020b8dbc();
}

s32 func_020b8dbc(void) {
u8 *p=data_021601ec;
u8 *obj=func_020c9c10(*(void **)(p+0x4c),2);
s32 val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)(-(val>>12)));
((void (*)(u8 *,s32))(*(void **)(obj+0x14)))(obj,0x19);
obj=func_020c9c10(*(void **)(p+0x4c),0xd);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)(-5-(val>>12)));
obj=func_020c9c10(*(void **)(p+0x4c),0xf);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)(28-(val>>12)));
obj=func_020c9c10(*(void **)(p+0x4c),0xc);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)(5-(val>>12)));
return *(s32 *)(p+0x5c)>=0x800;
}

void func_020b90f0(void) {
    void *obj;
    u8 *item = NULL;
    u8 *p;
    void *node;
    obj = func_020c9c10(*(void **)(data_021601ec + 0x4c), 2);
    p = *(u8 **)(data_02160204 + 0x10c);
    if (p != NULL) {
        item = *(u8 **)p;
    }
    func_02111ccc(obj);
    if (item != NULL) {
        do {
            s32 v;
            node = func_02111d3c(obj);
            v = *(u16 *)(item + 8);
            *(u16 *)((u8 *)node + 2) = v;
            *(u16 *)((u8 *)node + 4) = func_02110b38(v);
            *(u32 *)((u8 *)node + 8) = *(u16 *)(item + 0xa);
            *((u8 *)node + 6) |= 4;
            item = *(u8 **)(item + 4);
        } while (item != NULL);
    }
    func_02112688(obj);
    func_021108f0(obj, 0);
    func_02112068(obj);
    func_02111bf0(obj);
    func_02111ff0(obj);
}

void func_020b91a8(void) {
    s32 zero = 0;
    u8 *root = data_021601ec;
    void *obj = func_020c9c10(*(void **)(root + 0x4c), 2);
    u8 *p = func_02112048(obj);
    if (p != NULL) {
        func_020b9214(*(void **)(root + *(u16 *)(p + 4) * 4 + 0x60), *(u16 *)(p + 2), zero);
        func_020b9274(*(void **)(root + *(u16 *)(p + 4) * 4 + 0x74), *(u16 *)(p + 2), zero);
    } else {
        func_020b9250();
        func_020b92b0();
    }
}

void func_020b9214(void *arg0, u16 arg1, s32 arg2) {
    u8 *obj = func_020c9c10(*(void **)(data_021601ec + 0x48), 10);
    func_020c83f4(obj, (s32)arg0, arg1, arg2 & 0xff);
}

void func_020b9250(void) {
    func_020c8488(func_020c9c10(*(void **)(data_021601ec + 0x48), 10));
}

void func_020b9274(void *arg0, u16 arg1, s32 arg2) {
    u8 *obj = func_020c9c10(*(void **)(data_021601ec + 0x48), 11);
    func_020c83f4(obj, (s32)arg0, arg1, arg2 & 0xff);
}

void func_020b92b0(void) {
    func_020c8488(func_020c9c10(*(void **)(data_021601ec + 0x48), 11));
}

void func_020b92d4(void) {
    u16 vals[2];
    u16 *dst = vals;
    u16 i;
    u8 *obj;
    u8 *root = data_021601ec;
    s32 flag = 0;
    vals[0] = data_02143904[0];
    vals[1] = data_02143904[1];
    for (i = 0; i < 2; i++) {
        obj = func_020c9c10(*(void **)(root + 0x4c), dst[i]);
        func_020c738c(obj, flag, 1);
    }
    *(u32 *)(root + 0x5c) = 0xfa000;
}

void func_020b9350(void) {
u8 *p=data_021601ec;
u8 *obj=func_020c9c10(*(void **)(p+0x4c),2);
s32 val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)((val>>12)-0xe6));
((void (*)(u8 *,s32))(*(void **)(obj+0x14)))(obj,0x19);
obj=func_020c9c10(*(void **)(p+0x4c),0xd);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)((val>>12)-0xe6));
obj=func_020c9c10(*(void **)(p+0x4c),0xf);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)((val>>12)-0xca));
obj=func_020c9c10(*(void **)(p+0x4c),0xc);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)((val>>12)-0xe1));
if(*(s32 *)(p+0x5c)<0x800) {
*(s32 *)(p+0x40)=2;
func_020b8aac();
}
}

