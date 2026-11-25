/* 7 functions from 0x020A033C to 0x020A1234 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk14;
typedef struct { s16 data[18]; } Unk24;
extern const Unk14 data_02142c04, data_02142c2c;
extern const Unk24 data_02142d30;
extern s8 *data_021600b0;
void func_020a3bbc(s32);
void func_021098ac(void *);

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern s16 *func_02116984(void *, u16);

extern void *func_021092d8(const char *);
extern void func_02109444(void *);
extern s32 func_0210cd20(void *, s32);
extern s32 func_0210cdfc(void *, s32);
extern u8 *data_02160200;
extern u8 *data_02160204;
void func_020a033c(s32 id) {
    s32 i;
    s32 zero = 0;
    void *fp;
    s8 *g;
    s32 buf[10];
    s32 v[24];
    s16 a[5], b[5];
    s32 pad[16];

    g = (s8 *)data_02160204;
    fp = func_021092d8((const char *)data_02160200);
    if (fp == 0) return;
    func_02109444(fp);
    for (i = 0; i < 10; i++) buf[i] = 0;
    *(u16 *)((u8 *)g + 0x100 + 0xec) = 1;
    *(u16 *)((u8 *)g + 0x100 + 0xee) = 0;
    *(u8 *)((u8 *)g + 0x238) = 8;
    for (i = 0; i < 16; i++) v[i] = (s16)func_0210cdfc(fp, 0);
    for (i = 0; i < 5; i++) {
        a[i] = (s16)func_0210cdfc(fp, 0);
        b[i] = (s16)func_0210cdfc(fp, 0);
    }
    (void)id; (void)zero; (void)func_0210cd20; (void)pad; (void)b; (void)a; (void)v;
}

void func_020a0da8(void) {
}

void *func_020a0dac(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020a0dc8(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

s32 func_020a0e08(void *arg0,s32 arg1) {
s32 i=0;
do {
s16 *ptr=func_02116984(arg0,(u16)i);
if(ptr[0]==arg1) return ptr[1];
i++;
} while(func_02116984(arg0,(u16)i)!=NULL);
return 0;
}

extern s32 func_020123f0(const char *, const char *);
extern char data_02148a18[];
extern char data_02148a24[];
extern char data_02148a2c[];
extern char data_02148a34[];
extern char data_02148a40[];
extern char data_02148a48[];
extern char data_02148a54[];
extern char data_02148a60[];
extern char data_02148a6c[];
extern char data_02148a78[];
extern char data_02148a84[];
extern char data_02148a90[];
extern char data_02148a9c[];
s32 func_020a0e5c(const char *arg0) {
    if (func_020123f0(data_02148a18, arg0) == 0) {
        return 1;
    }
    if (func_020123f0(data_02148a24, arg0) == 0) {
        return 2;
    }
    if (func_020123f0(data_02148a2c, arg0) == 0) {
        return 3;
    }
    if (func_020123f0(data_02148a34, arg0) == 0) {
        return 4;
    }
    if (func_020123f0(data_02148a40, arg0) == 0) {
        return 5;
    }
    if (func_020123f0(data_02148a48, arg0) == 0) {
        return 6;
    }
    if (func_020123f0(data_02148a54, arg0) == 0) {
        return 7;
    }
    if (func_020123f0(data_02148a60, arg0) == 0) {
        return 8;
    }
    if (func_020123f0(data_02148a6c, arg0) == 0) {
        return 9;
    }
    if (func_020123f0(data_02148a78, arg0) == 0) {
        return 10;
    }
    if (func_020123f0(data_02148a84, arg0) == 0) {
        return 11;
    }
    if (func_020123f0(data_02148a90, arg0) == 0) {
        return 12;
    }
    if (func_020123f0(data_02148a9c, arg0) != 0) {
        return 0;
    }
    return 13;
}

void func_020a0fd4(s32 x,s32 y) {
Unk14 a=data_02142c04;
s8 *p=data_021600b0;
if(!(*(s16 *)(p+*(s16 *)(p+0x1e8)*40+0x24e)&0x40))return;
*(volatile u32 *)0x40004a4=0x1f00c0;
func_020a3bbc(21);
a.data[1]=0;a.data[2]=0;a.data[3]=128;a.data[4]=18;a.data[5]=64;a.data[6]=8;a.data[8]=128;a.data[9]=18;
func_021098ac(&a);
*(volatile u32 *)0x40004a4=0x1f00c0;
switch(*(s8 *)(p+*(s16 *)(p+0x1e8)*40+0x23a)) {
case 1:func_020a3bbc(36);break;
case 2:func_020a3bbc(36);break;
case 3:func_020a3bbc(5);break;
case 4:func_020a3bbc(35);break;
case 5:func_020a3bbc(34);break;
case 6:func_020a3bbc(36);break;
case 7:func_020a3bbc(36);break;
case 8:func_020a3bbc(34);break;
}
{
Unk24 table=data_02142d30;
u16 i;
for(i=0;i<2;i++) {
u16 k=i*9;
a.data[1]=table.data[k];a.data[2]=table.data[k+1];
a.data[3]=table.data[k+2];a.data[4]=table.data[k+3];
a.data[5]=x+table.data[k+4];a.data[6]=y+table.data[k+5];
a.data[7]=table.data[k+6];a.data[8]=table.data[k+7];a.data[9]=table.data[k+8];
func_021098ac(&a);
}
}
{
Unk14 b=data_02142c2c;
if((*(s16 *)(p+*(s16 *)(p+0x1e8)*40+0x24e)&0x80) && *(s8 *)(p+*(s16 *)(p+0x1e8)*40+0x23a)==8) {
func_020a3bbc(29);func_021098ac(&b);
}
}
}

