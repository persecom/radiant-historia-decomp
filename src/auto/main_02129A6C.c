/* 57 functions from 0x02129A6C to 0x0212A9FC (main), found by ds-decomp. */
#include "common.h"
extern char data_02156a84[], data_02156aa4[], data_02156ac4[], data_02156ae4[];
extern void func_0212be08(void *,void *);
extern s32 func_0212b5ac(void *,s32,void *,void *,void *,void *,void *,void *,void *,void *);
extern s32 func_0212b72c(void *,s32,void *,void *);
extern s32 func_0212b69c(void *,s32,void *);
extern s32 func_0212b7ac(void *,s32,void *,void *);
extern s32 func_0212b8e0(void *,s32,void *,void *,void *,void *,void *,void *,void *);
extern s32 func_0212bad8(void *,s32,void *,void *,void *,void *);
extern void func_02129708(void *,s32,s32);
extern void func_0212bda8(char *);
extern s32 data_02156a80;
extern char data_02156b30[];
extern char data_02156b38[];
extern void func_02132c40(void *,s32,const char *,...);
extern s16 data_02145088[];

extern void func_021297c0(void *, u32, u32, u32, u32);
extern void func_021297f8(void *, u32, u32, u32, u32);
extern void func_02129830(void *);
extern void func_0212a71c(u16 *, s16 *, s32);

extern void func_0213807c(void);
extern void func_02129624(void);
extern void func_02129a50(void);
extern void func_02129798(void *);
extern void func_02013878(void *, s32, u32);
extern void func_0212a0e4();
extern void *memset(void *, int, unsigned long);
extern u32 data_021735a4[244];
extern u8 data_0217358c[12];
extern volatile u32 data_02173974[2];
extern s32 func_02129db4(void *, void *, u32);
s32 func_02129a6c(s8 *buf,s32 len,s16 *out1,s16 *out2,s16 *out3) {
int i; s16 a,b,c;
if(*(s32 *)(data_0217358c+12)==0)func_02129a50();
*out1=0;*out2=0;*out3=0;
if(!buf && len<=0)return 0;
a=0x4a1d;
for(i=0;i<len;i++)a=data_02145088[(a*data_02145088[buf[i]+128])%1024];
b=0x53ff;
for(i=0;i<len;i++)b=data_02145088[(b*data_02145088[buf[i]+128])%1024];
c=0x5dc1;
for(i=0;i<len;i++)c=data_02145088[(c*data_02145088[buf[i]+128])%1024];
*out1=a;*out2=b;*out3=c;return 0;
}

void func_02129bb8(s32 arg0) {
    *(s32 *)(data_0217358c + 8) = arg0;
}

u32 func_02129bc8(void) {
    return *(u32 *)(data_0217358c + 8);
}

#pragma intrinsics on
void func_02129bd8(void) {
    func_02129624();
    func_02129a50();
    memset(data_021735a4, 0, 0x3d0);
    func_02129bb8(0);
}
#pragma intrinsics off
u32 func_02129c20(u8 *arg0, u32 *arg1, u32 *arg2, u32 *arg3) {
    *arg1 = *(u32 *)(arg0 + 0x8c);
    *arg2 = *(u32 *)(arg0 + 0x40) - *(u32 *)(arg0 + 0x8c);
    *arg3 = *(u32 *)(arg0 + 0x18) - *(u32 *)(arg0 + 0x88);
    return *(u32 *)(arg0 + 0x3c);
}

void func_02129c50(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0x8c) += arg2;
    *(s32 *)(arg0 + 0x88) += arg2;
}

#pragma opt_propagation off
void func_02129c6c(u8 *arg0) {
    u8 z = 0;
    u32 i;
    u8 *p;
    *(u32 *)(arg0 + 0xc4) = 0;
    *(s16 *)(arg0 + 0xd8) = 0;
    *(s16 *)(arg0 + 0xda) = -0x80;
    *(s16 *)(arg0 + 0xdc) = -0x80;
    p = arg0 + 0xc8;
    i = 4;
    do {
        p[0] = z;
        p[1] = z;
        p[2] = z;
        p[3] = z;
        p += 4;
    } while (--i != 0);
}
#pragma opt_propagation on
void *func_0212965c(void);
void func_02129d80(u8 *);
u8 *func_02129cac(u32 arg0,u32 arg1,u32 arg2,u32 arg3) {
s32 i;
u8 *p;
for (i=0;i<4;i++) { if (*(s16 *)((u8 *)data_021735a4+i*0xf4)==0) break; }
if (i==4) return NULL;
p = (u8 *)data_021735a4+i*0xf4;
func_02013878(p,0,0xf4);
*(s16 *)p=1;
*(void **)(p+8)=func_0212965c();
if (*(void **)(p+8)==NULL) { func_02129d80(p); return NULL; }
*(u32 *)(p+0x38)=arg0;
*(u32 *)(p+0x3c)=arg1;
*(u32 *)(p+0x40)=arg2;
*(u32 *)(p+0x44)=arg3;
*(void **)(p+0x78)=(void *)func_02129c20;
*(void **)(p+0x7c)=p;
*(void **)(p+0x80)=(void *)func_02129c50;
*(void **)(p+0x84)=p;
func_02129c6c(p);
return p;
}

void func_02129d80(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    {
        void *p = *(void **)(arg0 + 8);
        *(void **)(arg0 + 8) = NULL;
        func_02129798(p);
    }
    func_02013878(arg0, 0, 0xf4);
    *(u16 *)(arg0 + 0) = 0;
}

void func_02129724(void *,void *,void *);
void func_0212976c(void *,s32,s32,s32);
s32 func_0212a2dc(u8 *,u32,s16 *,s16 *,s16 *);
s32 func_02129db4(void *arg0,void *arg1,u32 len) {
u8 *p=arg0; u32 outa,outb; s16 params[4]; s16 ret,a,b,c;
s32 zero=0;
if(((u32)arg1&1)&&!func_02129bc8()){func_0212be08(data_02156a84,data_02156aa4);return -1;}
*(s16*)(p+2)=1;
if(func_0212b5ac(arg1,len,&ret,p+12,p+13,p+15,p+14,p+20,p+24,p+16)<0)return 0;
if(*(s8*)(p+12)>4){
if(!*(u32*)(p+0xb8)){func_0212be08(data_02156ac4,data_02156ae4);return -1;}
p[13]=8;p[15]=*(s8*)(p+14)*192;*(u32*)(p+16)=96;
*(s16*)(p+0x98)=10;
*(s16*)(p+0x1c)=zero;*(s16*)(p+0x24)=zero;*(s16*)(p+0x26)=zero;
*(u32*)(p+0x20)=zero;*(u32*)(p+0x28)=zero;*(u32*)(p+0x2c)=zero;*(u32*)(p+0x30)=zero;*(u32*)(p+0x34)=zero;*(u32*)(p+0x88)=zero;
if(func_0212b72c(arg1,len,p+0xde,p+0xdf)<0)return 0;
params[0]=zero;
if(func_0212a2dc(p,*(u32*)(p+24),&params[1],&params[2],&params[3])<0)return -1;
if(*(void (**)(void *,void *))(data_0217358c+20))
(*(void (**)(void *,void *))(data_0217358c+20))(*(void**)(p+0xb8),params);
}else{
if(func_0212b72c(arg1,len,p+0xde,p+0xdf)<0)return 0;
if(func_0212a2dc(p,*(u32*)(p+24),&a,&b,&c)<0)return -1;
func_0212976c(*(void**)(p+8),a,b,c);
if(func_0212b69c(arg1,len,p+0x1c)<0)return 0;
if(func_0212b7ac(arg1,len,&outa,&outb)<0)return 0;
func_02129708(*(void**)(p+8),*(s32*)(p+20),*(s16*)(p+0x1c));
func_02129724(*(void**)(p+8),&outa,&outb);
func_0212b8e0(arg1,len,p+0x20,p+0x24,p+0x26,p+0x28,p+0x2c,p+0x30,p+0x34);
func_0212bad8(arg1,len,p+0xc4,p+0xc8,p+0xd8,p+0xda);
*(s16*)(p+0x98)=zero;
}
*(s32*)(p+0x50)=*(s8*)(p+14);
*(s32*)(p+0x54)=*(s8*)(p+15);
*(s32*)(p+0x58)=*(s32*)(p+16);
*(u32*)(p+0x5c)=*(u32*)(p+0x3c);
*(u32*)(p+0x60)=*(u32*)(p+0x40);
*(u32*)(p+0x64)=*(u32*)(p+0x44);
*(u32*)(p+0x8c)=0;
return ret;
}

void func_0212a0d0(u8 *arg0) {
    s16 v = *(s16 *)(arg0 + 0x9a);
    *(s16 *)(arg0 + 0x98) = v;
    func_0212a0e4(arg0, v);
}

void func_0212a0e4(u8 *p) {
*(u16 *)(p+2)=1;
*(u32 *)(p+20)=48000;
*(u8 *)(p+14)=2;
*(u8 *)(p+13)=16;
*(u32 *)(p+24)=2147483647;
*(u8 *)(p+15)=127;
*(u32 *)(p+16)=1024;
*(u32 *)(p+80)=2;
*(u32 *)(p+84)=127;
*(u32 *)(p+88)=1024;
*(u32 *)(p+92)=*(u32 *)(p+60);
*(u32 *)(p+96)=*(u32 *)(p+64);
*(u32 *)(p+100)=*(u32 *)(p+68);
*(u32 *)(p+140)=0;
*(u16 *)(p+28)=0;
*(u16 *)(p+36)=0;
*(u16 *)(p+38)=0;
*(u32 *)(p+32)=0;
*(u32 *)(p+40)=0;
*(u32 *)(p+44)=0;
*(u32 *)(p+48)=0;
*(u32 *)(p+52)=0;
*(u32 *)(p+136)=0;
*(u8 *)(p+222)=0;
*(u8 *)(p+223)=0;
}

s32 func_0212a180(void *arg0, u8 *arg1, u32 arg2) {
    u16 v;
    func_02129c6c(arg0);
    v = (arg1[0] << 8) | arg1[1];
    if (v != 0x8000) {
        return -1;
    }
    return func_02129db4(arg0, arg1, arg2);
}

void func_0212a1c8(u8 *arg0, u32 arg1, u32 arg2) {
    *(u32 *)(arg0 + 0x78) = arg1;
    *(u32 *)(arg0 + 0x7c) = arg2;
}

u32 func_0212a1d4(u8 *arg0) {
    return *(u32 *)(arg0 + 0x3c);
}

s16 func_0212a1dc(u8 *arg0) {
    return *(s16 *)(arg0 + 0x98);
}

u32 func_0212a1e4(u8 *arg0) {
    return *(u32 *)(arg0 + 0x14);
}

s32 func_0212a1ec(u8 *arg0) {
    extern char data_02156b08[];
    extern void func_0212bda8(char *);
    if (arg0 != NULL) {
        return *(s8 *)(arg0 + 0xe);
    }
    func_0212bda8(data_02156b08);
    return -1;
}

s8 func_0212a210(s8 *a0) {
    return a0[0xd];
}

s32 func_0212a218(void) {
    return 0x10;
}

void *func_0212a220(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

s32 func_0212a228(s32 *arg0) {
    return arg0[6];
}

s32 func_0212a230(s16 *arg0) {
    return arg0[0x12];
}

s32 func_0212a238(s32 *arg0) {
    return arg0[10];
}

u32 func_0212a240(u32 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return arg0[0xb];
}

extern void func_02129624(void);
extern void func_02129a50(void);
u32 func_0212a250(u8 *arg0) {
    return *(u32 *)(arg0 + 0x30);
}

s32 func_0212a258(s32 *arg0) {
    return arg0[13];
}

s32 func_0212a260(s32 *arg0) {
    return arg0[0x31];
}

s32 func_0212a268(s16 *arg0) {
    return arg0[0x6c];
}

s16 func_0212a270(u8 *a0, s32 a1) {
    return *(s16 *)(a0 + a1 * 2 + 0xda);
}

void func_0212a27c(u8 *arg0) {
    extern void func_02129748(void *, void *, void *);
    extern void func_0212977c(void *, void *, void *, void *);
    func_02129748(*(void **)(arg0 + 8), arg0 + 0xb0, arg0 + 0xb4);
    func_0212977c(*(void **)(arg0 + 8), arg0 + 0xa6, arg0 + 0xa8, arg0 + 0xaa);
}

void func_0212a2ac(u8 *arg0) {
    extern void func_02129724(void *, void *, void *);
    extern void func_0212976c(void *, s32, s32, s32);
    func_02129724(*(void **)(arg0 + 8), arg0 + 0xb0, arg0 + 0xb4);
    func_0212976c(*(void **)(arg0 + 8), *(s16 *)(arg0 + 0xa6), *(s16 *)(arg0 + 0xa8), *(s16 *)(arg0 + 0xaa));
}

s32 func_0212a2dc(u8 *p,u32 arg,s16 *x,s16 *y,s16 *z) {
s8 buf[16];
if(data_02156a80==0){
if(p[0xde]<4){*x=0;*y=0;*z=0;goto done;}
if(p[0xdf]>=16){func_02132c40(buf,16,data_02156b30,arg);func_02129a6c(buf,8,x,y,z);goto done;}
if(p[0xdf]>=8){
if(*(s16 *)(p+0xa0)==0 && *(s16 *)(p+0xa2)==0 && *(s16 *)(p+0xa4)==0){
*(s16 *)(p+0xa0)=*(s16 *)data_0217358c;
*(s16 *)(p+0xa2)=*(s16 *)(data_0217358c+2);
*(s16 *)(p+0xa4)=*(s16 *)(data_0217358c+4);
}
*x=*(s16 *)(p+0xa0);*y=*(s16 *)(p+0xa2);*z=*(s16 *)(p+0xa4);
goto done;
}
*x=0;*y=0;*z=0;goto done;
}
if(p[0xde]<4){
if(*(s16 *)(p+0xa0)==0 && *(s16 *)(p+0xa2)==0 && *(s16 *)(p+0xa4)==0 && *(s16 *)data_0217358c==0 && *(s16 *)(data_0217358c+2)==0 && *(s16 *)(data_0217358c+4)==0){*x=0;*y=0;*z=0;return 0;}
*x=-4096;*y=-32548;*z=32767;func_0212bda8(data_02156b38);return -1;
}
if(*(s16 *)(p+0xa0)==0 && *(s16 *)(p+0xa2)==0 && *(s16 *)(p+0xa4)==0){
*(s16 *)(p+0xa0)=*(s16 *)data_0217358c;
*(s16 *)(p+0xa2)=*(s16 *)(data_0217358c+2);
*(s16 *)(p+0xa4)=*(s16 *)(data_0217358c+4);
}
copy:
*x=*(s16 *)(p+0xa0);*y=*(s16 *)(p+0xa2);*z=*(s16 *)(p+0xa4);
done:return 0;
}

extern char data_02156b08[];
extern void func_0212bda8(char *);
extern void func_02129748(void *, void *, void *);
extern void func_0212977c(void *, void *, void *, void *);
extern void func_02129724(void *, void *, void *);
extern void func_0212976c(void *, s32, s32, s32);
void func_0212a4a4(u8 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *(s32 *)(arg0 + 0xac) = 0;
    } else {
        *(s32 *)(arg0 + 0xac) = 1;
    }
}

extern u64 _s32_div_f(s32, s32);

s32 func_0212a4b8(s32 *arg0) {
    return arg0[1];
}

void func_0212a4c0(u8 *arg0, s32 arg1, s32 arg2) {
    if (*(s16 *)(arg0 + 0x98) == 0) {
        *(s32 *)(arg0 + 0x48) = arg1;
        *(s32 *)(arg0 + 0x4c) = _s32_div_f(arg2, *(s8 *)(arg0 + 0xf));
        *(s32 *)(arg0 + 0x74) = 0;
    } else {
        *(s32 *)(arg0 + 0x48) = arg1;
        *(s32 *)(arg0 + 0x4c) = _s32_div_f(arg2, (*(s8 *)(arg0 + 0xd) / 8) * *(s8 *)(arg0 + 0xe));
        *(s32 *)(arg0 + 0x74) = 0;
    }
    *(s32 *)(arg0 + 0x90) = 0;
    *(s32 *)(arg0 + 0x94) = 0;
    *(s32 *)(arg0 + 0xe8) = 0;
    *(s32 *)(arg0 + 0xe4) = 0;
}

extern u64 _s32_div_f(s32, s32);
extern void func_0212984c(void *);
extern void func_02129878(void *);
void func_0212a528(u8 *arg0) {
    if (*(s32 *)(arg0 + 0x4) == 0) {
        *(s32 *)(arg0 + 0x4) = 1;
    }
}

void func_0212a53c(u8 *arg0) {
    func_0212984c(*(void **)(arg0 + 0x8));
    *(s32 *)(arg0 + 0x4) = 0;
}

void func_0212a558(u8 *arg0) {
    if (*(s32 *)(arg0 + 0x4) == 3) {
        func_02129878(*(void **)(arg0 + 0x8));
        *(s32 *)(arg0 + 0x8c) = 0;
        *(s32 *)(arg0 + 0x4) = 0;
    }
}

s32 func_0212a584(s32 *arg0) {
    return arg0[0x25];
}

void *func_0212a58c(u8 *arg0) {
    return *(void **)(arg0 + 0x90);
}

#pragma scheduling off
void func_0212a594(u8 *arg0, u32 arg1) { u8 *p = *(u8 * volatile *)(arg0 + 8); u32 v = *(u32 *)(arg0 + 0x5c) + *(volatile u32 *)(arg0 + 0x68) * 2; func_021297c0(p, *(u32 *)(arg0 + 0x48), arg1, v, 0); func_02129830(p); }
#pragma scheduling on
void func_0212a5d4(u8 *arg0, u32 arg1) {
    u8 *p = *(u8 **)(arg0 + 8);
    u32 v1 = *(u32 *)(arg0 + 0x5c) + *(u32 *)(arg0 + 0x68) * 2;
    u32 v2 = v1 + *(u32 *)(arg0 + 0x64) * 2;
    func_021297f8(p, *(u32 *)(arg0 + 0x48), arg1 * 2, v1, v2);
    func_02129830(p);
}

void func_0212a61c(u8 *p) {
s32 remaining, end, format;
format = *(s32 *)(p+0x50);
s32 count = *(s32 *)(p+0x4c) / format;
remaining = *(s32 *)(p+0x70);
s32 unit = *(s32 *)(p+0x58);
s32 start = *(s32 *)(p+0x68);
s32 length = *(s32 *)(p+0x6c);
s32 rounded = remaining + (u32)unit - 1;
s32 limit = rounded / unit;
s32 pad = unit - 1 - rounded % unit;
end = *(s32 *)(p+0x60);
s32 blocks = ((unsigned)unit + (end-start) - 1)/unit;
s32 span = blocks * unit;
s32 max;
if (limit < blocks) {
start += span;
if (start-pad < end) blocks++;
}
if (remaining < length) length += pad;
max = length/unit;
count = count <= max ? count : max;
count = count <= limit ? count : limit;
count = count <= blocks ? count : blocks;
if (format == 2) func_0212a5d4(p,count);
else func_0212a594(p,count);
}

void func_0212a71c(u16 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 > 0) {
        do {
            *arg0++ = *arg1++;
        } while (--arg2 > 0);
    }
}

extern s32 func_021297b8(u32);
extern void func_021298a8(u32);
extern void func_0212a61c(u8 *);
extern void func_0212a788(u8 *);
extern void func_02129a14(u8 *);
extern void func_0212a864(u8 *);
extern void func_0212a944(u8 *);
void func_0212a73c(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0212a71c(arg0, arg0 + arg1, arg3);
    func_0212a71c(arg0 + arg2, arg0 + (arg2 + arg1), arg3);
}

void func_0212a774(u16 *arg0, u32 arg1, u32 arg2, s32 arg3) {
    func_0212a71c(arg0, arg0 + arg1, arg3);
}

extern void *func_0212988c(void *);
extern void func_0212a73c(u16 *, s32, s32, s32);
extern void func_0212a774(u16 *, u32, u32, s32);
void func_0212a788(u8 *self) {
 s32 f58=*(s32 *)(self+0x58);
 s32 b=*(s32 *)(self+0x54);
 s32 c;
 s32 a=*(s32 *)(self+0x70)+f58-1;
 s32 f68=*(s32 *)(self+0x68);
 s32 f5c=*(s32 *)(self+0x5c);
 s32 f40=*(s32 *)(self+0x40);
 s32 f44=*(s32 *)(self+0x44);
 s32 n,q1,q2;
 s32 r4;
 r4=f58-1-a%f58;
 n=(s32)func_0212988c(*(void **)(self+8));
 c=*(s32 *)(self+0x50);
 q1=n*f58/c;
 q2=a/f58;
 if(q2*c<=n) q1-=r4;
 *(s32 *)(self+0x90)=q1;
 *(s32 *)(self+0x94)=n*b;
 if(f68+q1<f40)return;
 f68+=q1; f68-=f40;
 if(*(s32 *)(self+0x50)==2)func_0212a73c((u16 *)f5c,f40,f44,f68);
 else func_0212a774((u16 *)f5c,f40,f44,f68);
}

void func_0212a864(u8 *arg0) {
    if (*(u32 *)(arg0 + 4) == 1) {
        if (func_021297b8(*(u32 *)(arg0 + 8)) == 0) {
            ((void (*)(u32, u8 *, u8 *, u8 *))(*(u32 *)(arg0 + 0x78)))(
                *(u32 *)(arg0 + 0x7c), arg0 + 0x68, arg0 + 0x6c, arg0 + 0x70);
            func_0212a61c(arg0);
            *(u32 *)(arg0 + 4) = 2;
        }
    }
    if (*(u32 *)(arg0 + 4) == 2) {
        func_021298a8(*(u32 *)(arg0 + 8));
        if (func_021297b8(*(u32 *)(arg0 + 8)) == 3) {
            func_0212a788(arg0);
            func_02129878((void *)*(u32 *)(arg0 + 8));
            ((void (*)(u32, u32, u32))*(u32 *)(arg0 + 0x80))(
                *(u32 *)(arg0 + 0x84), *(u32 *)(arg0 + 0x94), *(u32 *)(arg0 + 0x90));
            *(u32 *)(arg0 + 4) = 3;
        }
    }
}

void func_0212a904(u8 *arg0) {
    s16 val = *(s16 *)(arg0 + 0x98);
    if (val == 0) {
        func_0212a864(arg0);
    } else if (val == 10) {
        func_02129a14(arg0);
    }
    if (*(u32 *)(arg0 + 0xec) != 0) {
        func_0212a944(arg0);
    }
}

void func_0212a944(u8 *arg0) {
    u32 count = *(u32 *)(arg0 + 0x90);
    s32 delta = *(u32 *)(arg0 + 0x94) - *(u32 *)(arg0 + 0xe4);
    if (delta < 0) {
        delta = 0x7fffffff - *(u32 *)(arg0 + 0xe4) + *(u32 *)(arg0 + 0x94);
    }
    ((void (*)(u32, s32, u32))(*(u32 *)(arg0 + 0xec)))(
        *(u32 *)(arg0 + 0xf0), delta, *(s8 *)(arg0 + 0xe) * (count << 1));
    *(u32 *)(arg0 + 0xe4) = *(u32 *)(arg0 + 0x94);
}

void func_0212a98c(void) {
    data_02173974[1]++;
    if (data_02173974[1] == 1) {
        data_02173974[0] = 0;
    }
}

void func_0212a9b4(void) {
    data_02173974[1]--;
    if (data_02173974[1] == 0) {
        data_02173974[0] = 0;
    }
}

void func_0212a9dc(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_0212a9e8(void) {
    func_0213808c();
}

void func_0212a9f4(void) {
}

void func_0212a9f8(void) {
}

