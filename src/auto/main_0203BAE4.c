/* 23 functions from 0x0203BAE4 to 0x0203C998 (main), found by ds-decomp. */
#include "common.h"
extern void func_020a2c20(void),func_0210f7b0(void),func_020f40a4(void),func_020dcad8(void),func_020d6d88(void);
extern void func_020eb180(s32,s32),func_020eaaa0(s32),func_020a31c8(s32);
extern void func_0210d9e4(void *),func_021167ac(void *,s32),func_021167f0(void *,void *);
extern s32 func_020bd490(s32,s32);
extern s32 data_02162830,data_02162834[3],data_0216281c,data_02162820[4];
extern u32 data_02162868[2], data_0216bf84;
extern u8 *data_02160204;
extern u16 data_021628f8, data_021626a8;
typedef struct { s16 unk[10]; } Unk20_0203c824;
extern const Unk20_0203c824 data_0213eedc;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern u8 *data_02160a74;
extern u8 *data_02160a6c;
extern u8 *func_020e84c0(s32);
extern void func_020df3f4(void *,s32);
extern s32 func_020e8410(s32,s32,s32);
extern void func_020e25fc(s32,s32,s32);
extern void func_020e26f0(s32,s32,s32);
extern void func_020e86c0(s32);
extern void func_020e2be4(void *,s32,s32);
typedef struct { u32 kind : 8; u32 size : 24; } Unk_0203bfdc;
extern char data_021462b0[12];
extern char data_021462bc[8];
extern u8 *data_02160094;
typedef struct { u32 kind : 8; u32 size : 24; } ResourceHeader;
extern char data_0214629c[12];
extern char data_021462a8[8];
extern void *func_02109b14(void *, void *);

extern void *data_02155c3c;
extern u8 *data_02162880;
extern void *func_0210c594(u32, void *);
extern void func_0210c5dc(void *);
extern void func_0210db70(void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_020a98a0(void *);
extern void *func_0210c518(u32, void *);
extern void func_02008e68(s32, void *, u32);
extern void func_02005e80(char *, const char *, ...);
extern void func_02108ffc(void);
extern void *func_0210e7f0(s32, s32);
extern s32 func_0210e848(void *, void *);
extern void func_021091b4(void);
extern char data_0214628c[8];
extern char data_02146294[8];
typedef struct {
    u32 f0;
    u8 pad[0x14];
    u32 f18;
    u32 f1c;
    u32 f20;
} Unk_0203c1f0;
void func_0203c1f0(u8 *, s32);
void func_0203bd68(u8 *, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0203be60(u8 *, s32, s32);
void func_0203bc74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6);
void func_0203c0f4(u8 *arg0);
void func_0203c20c(void);
extern s32 func_02064cb8(void *,s32);
extern void func_02094c74(void *,s32);
extern void func_0203305c(void *);
extern void func_0210d27c(s32);
void func_0203bae4(void) {
 u8 *p=data_02160a74;
 s32 result=0;
 u8 *obj=**(u8 ***)(p+0xa0);
 u8 *inner=*(u8 **)obj;
 if(*(s16 *)(p+0xbc)==4) {
 result=func_02064cb8(*(void **)(inner+0x11c),3);
 if(result) func_02094c74(obj,3);
 } else if(*(s16 *)(p+0xbc)==5) {
 result=func_02064cb8(*(void **)(inner+0x11c),4);
 if(result) func_02094c74(obj,4);
 }
 *(u16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4))|=2;
 *(u16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+2)=*(s16 *)(p+0xbc);
 *(u16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+4)=*(s16 *)(p+0xce);
 *(u16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+6)=*(s16 *)(p+0xb2);
 *(s32 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+8)=result;
 *(s32 *)(p+0xc0)=result;
 data_02160a74[0x1c2]&=0xf7;
 *(u32 *)(data_02160a74+0x58)|=0x800;
 func_020e25fc(8,0,0);
 *(u32 *)(p+0x58)&=~0x2000;
 *(u32 *)(p+0x58)&=~0x4000;
 func_0203305c(**(void ***)(p+0xa0));
 if(*(s16 *)(p+0xbc)!=4 && *(s16 *)(p+0xbc)!=5) func_0210d27c(11);
 func_020e86c0(7);
}

void func_0203bc34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    u8 local[0x18];
    func_0203bc74(local, arg0, arg1, arg2, arg3, arg4, arg5);
}

extern void func_020a9610(void *, s32, s32, s32, s32, s32);
void func_0203bc74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6) {
    u8 *p = arg0;
    s32 x;
    func_020a9610(p, arg1, arg3, arg2, arg4, arg5);
    if (arg6 == 1) {
        x = *(s32 *)(p + 8) - (func_020a96f0(*(void **)(p + 0x10)) >> 1);
    } else if (arg6 == 2) {
        x = *(s32 *)(p + 8) - func_020a96f0(*(void **)(p + 0x10));
    } else {
        goto done;
    }
    *(s32 *)(p + 8) = x & ~3;
done:
    while (func_020a9648(p) != 0) {
    }
}

void func_0203bcf8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 local[6] = { 0, 0, 0, 0, 0, 0 };
    func_0203bd68(local, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void func_0203bd68(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    u32 local[13] = { 0 };
    func_020a9610(arg0, arg1, arg3, arg2, 0, 0);
    func_020a9830(local, arg0, arg6, arg7, arg4, arg5);
    local[7] = arg8;
    func_020a98ac(local);
    func_020a98f4(local);
    func_020a98a0(local);
}

void *func_0203be10(s32 arg0) {
    s32 size = arg0 * 0x1c;
    void *p = func_0210c518(size, data_02155c3c);
    func_02008e68(0, p, size);
    return p;
}

void func_0203be4c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_0203be60(u8 *arg0, s32 arg1, s32 arg2) {
    char buf[0x64];
    char *p;
    func_02108ffc();
    p = buf;
    func_02005e80(p, data_0214628c, arg1);
    if (func_0210e7f0((s32)p, (s32)arg0) == 0) {
        return 0;
    }
    func_021091b4();
    func_02005e80(p, data_02146294, arg2);
    if (func_0210e848(p, arg0 + 8) == 0) {
        return 0;
    }
    func_021091b4();
    return 1;
}

s32 func_0203bef0(u8 *arg0, s32 arg1, s32 arg2) {
char buf[0x64]; ResourceHeader size; u32 info; void *src; void *dst; char *p;
func_02108ffc(); p = buf;
func_02005e80(p, data_0214629c, arg1);
src = func_02109b14(p, &info);
size.size = ((ResourceHeader *)src)->size;
dst = func_0210c594(size.size, data_02155c3c);
func_021091b4(); func_02009230(src, dst);
if (src != NULL) func_0210c5dc(src);
func_0210e8b4(dst, size.size, buf, arg0);
if (dst != NULL) func_0210c5dc(dst);
func_021091b4(); p = buf;
func_02005e80(p, data_021462a8, arg2);
if (func_0210e848(p, arg0 + 8) == 0) return 0;
return 1;
}

s32 func_0203bfdc(u8 *arg0, s32 arg1, s32 arg2) {
    char buf[0x64];
    ResourceHeader size;
    u32 info;
    void *src;
    void *dst;
    char *p;

    func_02108ffc();
    p = buf;
    func_02005e80(p, data_021462b0, arg1);
    src = func_02109b14(p, &info);
    size.size = ((ResourceHeader *)src)->size;
    dst = func_0210c594(size.size, data_02155c3c);
    func_02009354(src, dst);
    func_021091b4();
    if (src != NULL) {
        func_0210c5dc(src);
    }
    func_0210e8b4(dst, size.size, buf, arg0);
    func_0210e3dc();
    if (dst != NULL) {
        func_0210c5dc(dst);
    }
    func_021091b4();
    p = buf;
    func_02005e80(p, data_021462bc, arg2);
    if (func_0210e848(p, arg0 + 8) == 0) {
        return 0;
    }
    func_021091b4();
    return 1;
}

void *func_0203c0d8(void) {
    return ((void *(*)(u32, void *))func_0210c594)(0x40, data_02155c3c);
}

void func_0203c0f4(u8 *arg0) {
    s32 i;
    if (*(void **)(arg0 + 0x34) == NULL) {
        return;
    }
    for (i = 0; i < *(u16 *)(arg0 + 0x3c); i++) {
        u8 *elem = ((u8 **)(*(void **)(arg0 + 0x34)))[i];
        if (elem != NULL && *(void **)(elem + 0x14) != NULL) {
            ((void (*)(u8 *))(*(void **)(elem + 0x14)))(elem);
        }
    }
    if (*(void **)(arg0 + 0x34) != NULL) {
        func_0210c5dc(*(void **)(arg0 + 0x34));
        *(void **)(arg0 + 0x34) = NULL;
    }
    *(u16 *)(arg0 + 0x3c) = 0;
}

void func_0203c168(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_0203be4c(*(void **)(arg0 + 0x30));
    func_0203c0f4(arg0);
    if (*(void **)(arg0 + 4) != NULL) {
        func_0210da14(arg0 + 4);
    }
    if (*(void **)(arg0 + 0x18) != NULL) {
        func_0210dba0(arg0 + 0x18);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_0203c1c0(u8 *arg0, void *arg1, s32 arg2) {
    func_0203c1f0(arg0, arg2);
    *(void **)(arg0 + 4) = (void *)func_0203c20c;
    *(void **)(arg0 + 8) = arg1;
    *(void **)(arg0 + 0xc) = arg0;
    func_0210d9e4(arg0 + 4);
}

void func_0203c1f0(u8 *arg0, s32 arg1) {
    u32 v = *(u32 *)arg0;
    *(u32 *)(arg0 + 0x1c) = arg1;
    *(u32 *)(arg0 + 0x20) = (u32)arg0;
    *(u32 *)(arg0 + 0x18) = v;
    func_0210db70(arg0 + 0x18);
}

void func_0203c20c(void) {
    u8 *p = data_02162880;
    s32 count = 0;
    u8 *best;
    s32 i;
    s32 n;
    p[0x2c] = 0;
    *(void **)(p + 0x38) = NULL;
    if (p[0x2d] != 0) {
        return;
    }
    n = *(u16 *)(p + 0x3c);
    best = NULL;
    for (i = 0; i < n; i++) {
        u8 *elem = ((u8 **)(*(void **)(p + 0x34)))[i];
        if (elem[0xb] != 0) {
            continue;
        }
        if (*(void **)(elem + 0x10) == NULL) {
            continue;
        }
        if (((s32 (*)(u8 *))(*(void **)(elem + 0x10)))(elem) == 0) {
            continue;
        }
        count++;
        if (best == NULL || *(s16 *)(best + 4) < *(s16 *)(elem + 4)) {
            best = elem;
        }
    }
    if (count != 0) {
        p[0x2c] = 1;
        *(void **)(p + 0x38) = best;
    }
}

void func_0203c2b8(void) {
 u8 *p=data_02160a74;
 *(u32 *)(p+0x58)|=0x2000;
 func_020df3f4(func_020e84c0(0),1);
 *(u32 *)(p+0x58)|=6;
 if(func_020e8410(0,2,0)) {
 *(u32 *)(p+0x58)|=0x4000;
 *(u16 *)(p+0x170)=0;
 *(u16 *)(p+0x172)=9999;
 func_020e26f0(7,1,999);
 } else {
 *(u32 *)(p+0x58)&=~0x4000;
 func_020e25fc(8,0,0);
 func_020e26f0(7,0,999);
 func_020e26f0(1<<*(u16 *)(func_020e84c0(0)+0x90),3,999);
 }
 func_020e86c0(5);
 func_020e2be4(*(void **)(p+0xa0),*(u16 *)(p+0xbc),2);
 *(u32 *)(data_02160a6c+0x100)=0;
}

extern void func_0210968c(s32,s32,s32);
extern void func_02108e54(s32);
extern void func_020414b0(void);
extern s32 func_02047820(u16);
extern void func_02047490(void);
extern void func_021168f8(void *,void *);
extern void func_0203c570(void);
extern void func_02109264(s32);
extern void func_021089e8(s32,s32,s32);
extern void func_02109790(s32);
extern void func_02108eec(s32,s32);
extern void func_0203c780(void);
extern void func_0210dc88(void);
extern void func_02008250(s32);
static void func_0203c780(void);
extern void func_0203c780();
#pragma dont_inline on
s32 func_0203c3bc(void) {
s32 one=1,zero=0;
u8 *node,*next;
data_02162868[0]=one;data_0216bf84=zero;
func_0210968c(3,-16,one);
func_02108e54(zero);func_02108e54(one);
data_02160204[0x7a]=zero;
func_020414b0();
if(*(void **)(data_02160204+0x6c)) {
node=**(u8 ***)(data_02160204+0x6c);
while(node) {
next=*(u8 **)(node+0xc);
if(node[0]!=20 && func_02047820(*(u16 *)(node+4))) func_02047490();
func_021168f8(*(void **)(data_02160204+0x6c),node);
if(node)func_0210c5dc(node);
node=next;
}
if(*(void **)(data_02160204+0x6c))func_0210c5dc(*(void **)(data_02160204+0x6c));
*(void **)(data_02160204+0x6c)=0;
}
func_0203c570();
{ s32 z=0,three=3;
func_02109264(z);func_021089e8(z,19,three);func_0210968c(three,z,30);
}
for(;;) {if(data_021626a8&8)break; if((data_021626a8&1)||data_021628f8)break; func_0210dc88();}
{ s32 three=3,z=0;
func_0210968c(three,-16,30);func_02109790(three);
func_02108eec(z,1000);data_0216bf84=z;
func_0203c780();func_0210dc88();
func_02008250(*(u32 *)0x02fffc20+1);
data_02162868[0]=z;
return z-1;
}
}
void func_0203c780(void) {
void *p;
func_020eaacc(); func_020f4144(); func_020a3b84(); func_020dcca4(); func_020eb344(0,0);
while ((p = *(void **)(data_02160094 + 0x2c)) != NULL) {
func_021168f8(data_02160094 + 0x2c, p);
if (p != NULL) func_0210c5dc(p);
}
if (data_02160094 != NULL) {
func_0210da14(data_02160094);
func_0210dba0(data_02160094 + 0x14);
if (data_02160094 != NULL) {func_0210c5dc(data_02160094); data_02160094 = NULL;}
}
func_0210f138();
}

void func_0203c820(void) {
}

void func_0203c824(void) {
 u8 *p=data_02160094;
 Unk20_0203c824 buf=data_0213eedc;
 u8 *node;
 *(volatile u32 *)0x40004a4=0x1f00c0;
 func_020a3bbc(0);
 buf.unk[1]=0;buf.unk[2]=0;buf.unk[3]=256;buf.unk[4]=32;
 buf.unk[5]=0;buf.unk[6]=48;buf.unk[7]+=2;buf.unk[8]=256;buf.unk[9]=32;
 func_021098ac(&buf);
 *(volatile u32 *)0x40004a4=0x1f00c0;
 func_020a3bbc(1);
 node=*(u8 **)(p+0x2c);
 while(node) {
 u8 i;
 buf.unk[1]=0;buf.unk[2]=0;buf.unk[3]=64;buf.unk[4]=32;
 for(i=0;i<4;i++) {
 if(i%2==0) {buf.unk[8]=64;buf.unk[5]=*(s16 *)node-64;}
 else if(i%2==1) {buf.unk[8]=-64;buf.unk[5]=*(s16 *)node+64;}
 if((u32)i>>1==0) {buf.unk[9]=32;buf.unk[6]=*(s16 *)(node+2);}
 else if(((u32)i>>1)==1) {buf.unk[9]=-32;buf.unk[6]=*(s16 *)(node+2)+64;}
 func_021098ac(&buf);
 }
 node=*(u8 **)(node+8);
 }
}

void func_0203c994(void) {
}

