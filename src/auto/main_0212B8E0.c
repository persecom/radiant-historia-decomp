/* 40 functions from 0x0212B8E0 to 0x0212C824 (main), found by ds-decomp. */
#include "common.h"
extern void *memset(void *, int, unsigned long);
extern u32 data_02173df4[5];
typedef struct { s8 active; u8 rest[0xb3]; } UnkSlot_0212c660;
extern u8 data_02173e08[720];
extern s32 func_02137d44(void *);
extern s32 func_02137dbc(void *);
extern s32 func_02137e34(void *);
extern u8 *func_02129cac(u32,u32,u32,u32);
extern void func_0212caec(void);
extern void func_0212a1c8(void *,void (*)(void),void *);
extern void func_0212c624(void *);

extern u8 data_021739ac[256];
extern u32 data_02173984[2];
extern u8 data_02156b60[8];
extern u8 data_02156b68[8];
extern s8 data_0217398c[32];
extern u8 data_02156b70[4];
extern u32 data_02173aac[5];
extern u8 data_02156c28[48];
extern u8 data_02156c58[28];
extern u8 data_02156c74[48];
extern void func_02013878(void *, s32, u32);
extern void func_021380bc(void *);
extern void func_02132c08(void *, s32, void *, s32);
extern void func_02132c2c(void *, s32, void *, s32);
extern s32 func_02016da4(void *);

extern void func_0212a9f4(void);
extern void func_0212a9f8(void);
extern void func_0212c3d4(void *, void *);
extern void func_0212c3ec(u8 *, void *, s32, s32);
extern u8 data_02156ca4[52];
extern u32 data_02173de4[4];
extern u32 data_02156cd8[4];
extern void func_02132bf8(void *, s32, void *);
extern void func_0212e5fc(u32);
extern void func_0212e60c(u32, s32);
extern void func_0212e600(void);
extern s32 func_0212c54c(u32);
extern s32 func_0212c520(void);
extern void func_021384f0(void);
extern void func_02138500(void);
extern void func_02138510(void);
extern void func_0212c464(void);
extern void func_0212bfb8(void);
extern void func_0212a9dc(void);
extern void func_0212a9e8(void);
extern void func_02129d80(u8 *);
extern void func_021299c0(void *, u32);
extern void func_0212e514(void);
extern void func_0212e4a0(void);
extern void func_0212e5d0(void);
extern void func_0212e534(void);
extern void func_021281b0(void);
extern void func_02128030(void *, u32);
extern void func_0212e608(u32, s32);
extern void func_0212e5f8(u32);
extern void func_02128880(void *, s32);
extern u8 data_021458c8[68];
extern void *data_02156b74;
extern u8 data_02156b7c[16];
extern u8 data_02156b8c[16];
extern u8 data_02156b9c[20];
extern void func_02132be0(void);
extern void func_0212a98c(void);
extern void func_02137eac(void);
extern void func_02137294(void);
extern void func_02136a24(void);
extern void func_0212bd48(void);
extern void func_0212d714(void);
extern void func_0212c56c(void);
extern void func_0212e5c8(void);
extern void func_0212eac8(void);
extern void func_0212e5dc(void);
extern void func_021385d4(void);
extern void func_0212eae0(void *, s32);
extern void func_0212e5ec(void *, s32);
extern void func_021382fc(s32, s32, void *, s32, void *);
extern s32 func_02138190(s32, void *, s32, void *);
extern void func_02128580(s32);
extern s32 data_02173ac0[];
extern s8 data_02173ad4[4][196];
extern s32 func_0212b72c(u8 *, s32, u8 *, u8 *);
s32 func_0212b8e0(u8 *p, s32 len, s32 *arg2, s16 *arg3, s16 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg8) {
    u8 type;
    u8 other;
    s32 err;
    s32 minLen;
    s32 off;
    u16 v;
    s16 sv;
    s16 sw;
    s32 w;
    u8 *q;

    *arg3 = 0;
    err = func_0212b72c(p, len, &type, &other);
    if (err != 0) {
        return err;
    }

    minLen = 0x18;
    minLen += 0x18;
    if (type == 4) {
        minLen += 0xc;
    }
    if (len < minLen) {
        return -1;
    }

    v = *(u16 *)p;
    sw = ((v >> 8) & 0xff) | ((v << 8) & 0xff00);
    if ((u16)sw != 0x8000) {
        return -2;
    }

    sv = *(s16 *)(p + 2);
    sw = ((sv >> 8) & 0xff) | ((sv << 8) & 0xff00);
    if (sw < minLen - 4) {
        return -1;
    }

    off = 0x14;
    if (type == 4) {
        off += 0xc;
    }
    q = p + off;

    sv = *(s16 *)q;
    *arg2 = (s16)(((sv >> 8) & 0xff) | ((sv << 8) & 0xff00));

    sv = *(s16 *)(q + 2);
    *arg3 = ((sv >> 8) & 0xff) | ((sv << 8) & 0xff00);
    if (*arg3 != 1) {
        return -2;
    }

    sv = *(s16 *)(q + 6);
    *arg4 = ((sv >> 8) & 0xff) | ((sv << 8) & 0xff00);

    w = *(s32 *)(q + 8);
    *arg5 = ((w >> 24) & 0xff) | ((w >> 8) & 0xff00) | ((w << 8) & 0xff0000) | (w << 24);

    w = *(s32 *)(q + 0xc);
    *arg6 = ((w >> 24) & 0xff) | ((w >> 8) & 0xff00) | ((w << 8) & 0xff0000) | (w << 24);

    w = *(s32 *)(q + 0x10);
    *arg7 = ((w >> 24) & 0xff) | ((w >> 8) & 0xff00) | ((w << 8) & 0xff0000) | (w << 24);

    w = *(s32 *)(q + 0x14);
    *arg8 = ((w >> 24) & 0xff) | ((w >> 8) & 0xff00) | ((w << 8) & 0xff0000) | (w << 24);

    return 0;
}

s32 func_0212bad8(u8 *p, s32 len, s32 *out, u8 *dst, s16 *a, s16 *b) {
u8 type, flag;
s32 n, off, v, ret;
u32 i;
u16 h;
s16 sh;
u8 *src;
*out = 0;
ret = func_0212b72c(p,len,&type,&flag);
if(ret) return ret;
n=0x18; n+=0x24;
if(type==4)n+=12;
if(len<n)return -1;
h=*(u16 *)p;
sh=((h>>8)&255)|((h<<8)&0xff00);
if((u16)sh!=0x8000)return -2;
n-=4;
v=*(s16 *)(p+2);
sh=((v>>8)&255)|((v<<8)&0xff00);
if(sh<n)return -1;
off=20;
if(type==4)off+=12;
v=*(s16 *)(p+off+2);
off+=4;
if((s16)(((v>>8)&255)|((v<<8)&0xff00)))off+=20;
src=p+off;
if(((src[0]<<24)|(src[1]<<16)|(src[2]<<8)|src[3])!=0x41494e46)return -2;
v=*(s32 *)(src+4);
*out=((v>>24)&255)|((v>>8)&0xff00)|((v<<8)&0xff0000)|(v<<24);
src=p+(off+8);
i=8; do {u8 x=src[0],y=src[1];src+=2;dst[1]=y;dst[0]=x;dst+=2;}while(--i);
p+=off;
v=*(s16 *)(p+24);*a=((v>>8)&255)|((v<<8)&0xff00);
v=*(s16 *)(p+28);b[0]=((v>>8)&255)|((v<<8)&0xff00);
v=*(s16 *)(p+30);b[1]=((v>>8)&255)|((v<<8)&0xff00);
return 0;
}

s32 func_0212bcd0(s16 *arg0, s32 arg1, s16 *arg2) {
    u16 v0;
    s16 swapped;
    s16 v1;

    if (arg1 < 0x10) {
        return -1;
    }
    v0 = (u16)arg0[0];
    swapped = ((v0 >> 8) & 0xff) | ((v0 << 8) & 0xff00);
    if ((u16)swapped != 0x8001) {
        return -2;
    }
    v1 = arg0[1];
    *arg2 = ((v1 >> 8) & 0xff) | ((v1 << 8) & 0xff00);
    *arg2 += 4;
    return 0;
}

void func_0212bd48(void) {
    func_02013878(data_021739ac, 0, 0x100);
    data_02173984[0] = 0;
    data_02173984[1] = 0;
}

void func_0212bd78(void) {
    func_02013878(data_021739ac, 0, 0x100);
    data_02173984[0] = 0;
    data_02173984[1] = 0;
}

void func_0212bda8(void *arg0) {
    if (arg0 == NULL) {
        func_021380bc(data_02156b60);
        return;
    }
    func_02132c08(data_021739ac, 0x100, arg0, 0xff);
    if (data_02173984[0] != 0) {
        ((void (*)(u32, void *))data_02173984[0])(data_02173984[1], data_021739ac);
    }
    func_021380bc(data_021739ac);
}

void func_0212be08(void *arg0, void *arg1) {
    if (arg0 == NULL || arg1 == NULL) {
        func_021380bc(data_02156b68);
        return;
    }
    func_02132c08(data_021739ac, 0x100, arg0, 0xff);
    func_02132c2c(data_021739ac, 0x100, arg1, 0xff);
    if (data_02173984[0] != 0) {
        ((void (*)(u32, void *))data_02173984[0])(data_02173984[1], data_021739ac);
    }
    func_021380bc(data_021739ac);
}

void func_0212be8c(s32 arg0, s8 *arg1, s32 arg2) {
    s32 i;
    s32 len;

    for (i = 0; i < 0x20; i++) {
        arg1[i] = arg0 % 10;
        arg0 /= 10;
        if (arg0 == 0) {
            arg1[i] = 0;
            break;
        }
    }
    len = func_02016da4(data_0217398c);
    if (len >= arg2 - 1) {
        len = arg2 - 1;
    }
    for (i = 0; i < len; i++) {
        arg1[i] = data_0217398c[len - 1 - i];
    }
    arg1[i] = 0;
}

void func_0212bf38(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    func_0212be8c(arg0, arg2, arg3);
    func_02132c2c(arg2, arg3, data_02156b70, arg3 - func_02016da4(arg2) - 1);
    func_0212be8c(arg1, arg2 + func_02016da4(arg2), 4 - func_02016da4(arg2));
}

void func_0212bfa4(void) {
    func_0212a9f4();
    func_0212bfb8();
    func_0212a9f8();
}

void func_0212bfb8(void) {
    func_0212a9dc();
    if (data_02173aac[3] != 0) {
        func_0212a9e8();
        return;
    }
    data_02173aac[3] = 1;
    func_0212a9e8();
    if (data_02173aac[2] != 0) {
        ((void (*)(u32))data_02173aac[2])(data_02173aac[1]);
    }
    data_02173aac[3] = 3;
    func_0212e514();
    data_02173aac[3] = 4;
    func_0212e4a0();
    data_02173aac[3] = 5;
    func_0212e5d0();
    data_02173aac[3] = 6;
    func_0212e4a0();
    data_02173aac[3] = 7;
    func_0212e514();
    data_02173aac[3] = 9;
    func_0212e534();
    data_02173aac[3] = 0;
    if (data_02173aac[0] != 0) {
        ((void (*)(u32))data_02173aac[0])(data_02173aac[4]);
    }
}

void func_0212c068(void *arg0, void *arg1) {
    func_0212bda8(arg1);
}

void func_0212c078(void *arg0, void *arg1) {
    func_0212bda8(arg1);
}

s32 func_0212c088(void) {
    func_0212c464();
    return 0;
}

extern void func_021285b0(void);
s32 func_0212c098(void) {
    func_021285b0();
    return 0;
}

extern void func_0212bfa4(void);
s32 func_0212c0a8(void) {
    func_0212bfa4();
    return 0;
}

void func_0212c0b8(void) {
    data_02156b74 = data_021458c8;
    func_02132be0();
    if (data_02173ac0[4] == 0) {
        typedef struct { u32 x[196]; } Zero784;
        static const Zero784 z = {0};
        func_0212a98c();
        func_0212a9dc();
        func_02137eac();
        func_02137294();
        func_02136a24();
        func_0212bd48();
        func_0212d714();
        func_0212c56c();
        func_0212e5c8();
        func_0212eac8();
        func_0212e5dc();
        func_021385d4();
        func_0212eae0(func_0212c068, 0);
        func_0212e5ec(func_0212c078, 0);
        *(Zero784 *)data_02173ad4 = (Zero784){0};
        func_021382fc(2, 1, func_0212c098, 0, data_02156b7c);
        data_02173ac0[1] = func_02138190(4, func_0212c0a8, 0, data_02156b8c);
        data_02173ac0[3] = func_02138190(5, func_0212c088, 0, data_02156b9c);
        data_02173ac0[0] = 0;
        data_02173ac0[2] = 0;
        func_02128580(0x3c);
        func_0212a9e8();
    }
    data_02173ac0[4]++;
}

extern s32 data_02173ac0[];
extern char data_02156bb0[];
extern char data_02156bfc[];
extern s8 data_02173ad4[4][0xc4];
extern void func_02138130(const char *);
extern void func_02127fe0(void);
extern void func_0212ead4(void);
extern void func_0212e5cc(void);
extern void func_0212d76c(void);
extern void func_0212e5e0(void);
extern void func_0213825c(s32, s32);
extern void func_02138618(void);
extern void func_0212c5cc(void);
extern void func_0212bd78(void);
extern void func_02136a9c(void);
extern void func_02137318(void);
extern void func_02137f1c(void);
extern void func_0212a9b4(void);
extern void func_02127e58(void *);
void func_0212c200(void) {
    s32 i;
    if (data_02173ac0[4] <= 0) {
        func_02138130(data_02156bb0);
        return;
    }
    data_02173ac0[4]--;
    if (data_02173ac0[4] != 0) {
        return;
    }
    func_02127fe0();
    func_0212ead4();
    func_0212e5cc();
    func_0212d76c();
    func_0212e5e0();
    func_0212a9dc();
    func_0213825c(2, 1);
    func_0213825c(4, data_02173ac0[1]);
    func_0213825c(5, data_02173ac0[3]);
    func_02138618();
    func_0212c5cc();
    func_0212bd78();
    func_02136a9c();
    func_02137318();
    func_02137f1c();
    func_0212a9e8();
    func_0212a9b4();
    for (i = 0; i < 4; i++) {
        if (data_02173ad4[i][0] != 0) {
            func_02138130(data_02156bfc);
            func_02127e58(data_02173ad4[i]);
        }
    }
}

void func_0212c2d8(u8 *arg0, void *arg1, u32 arg2, u32 arg3) {
    u32 x = *(u32 *)(arg0 + 0x94);
    if (arg0 == NULL) {
        func_0212bda8(data_02156c28);
        return;
    }
    if (func_0212e604(x, arg1, 0, arg2, arg3) < 0) {
        func_0212be08(data_02156c58, arg1);
    }
}

void func_0212c338(u8 *arg0) {
    u32 x = *(u32 *)(arg0 + 0x94);
    void *obj;
    if (arg0 == NULL) {
        func_0212bda8(data_02156c74);
        return;
    }
    func_021281b0();
    func_0212a9dc();
    *(u8 *)(arg0 + 2) = 4;
    func_02128030(arg0, *(u32 *)(arg0 + 0x10));
    obj = *(void **)(arg0 + 0x14);
    ((void (*)(void *))(*(u32 **)obj)[5])(obj);
    func_0212e608(x, *(s16 *)(arg0 + 0x3e) << 11);
    func_0212a9e8();
    func_0212e5f8(x);
    func_02128880(arg0, 1);
}

void func_0212c3b0(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_0212c3d4)(arg0, arg1);
    func_0212a9f8();
}

void func_0212c3d4(void *arg0, void *arg1) {
    func_0212c3ec((u8 *)arg0, arg1, 0, 0xfffff);
}

void func_0212c3ec(u8 *arg0, void *arg1, s32 arg2, s32 arg3) {
    u32 lock;
    if (arg0 == NULL || arg1 == NULL) {
        func_0212bda8(data_02156ca4);
        return;
    }
    func_02132bf8(*(void **)(arg0 + 0xac), 0x100, arg1);
    *(void **)(arg0 + 0xb0) = *(void **)(arg0 + 0xac);
    lock = *(u32 *)(arg0 + 0x94);
    func_0212e5fc(lock);
    func_0212c2d8(arg0, *(void **)(arg0 + 0xb0), arg2, arg3);
    func_0212e60c(lock, 1);
    func_0212c338(arg0);
}

extern void func_0212c478(void);
void func_0212c464(void) {
    func_0212a9f4();
    func_0212c478();
    func_0212a9f8();
}

void func_0212c478(void) {
    if (data_02173de4[2] != 0) {
        ((void (*)(u32))data_02173de4[2])(data_02173de4[1]);
    }
    func_0212e600();
    if (data_02173de4[0] != 0) {
        ((void (*)(u32))data_02173de4[0])(data_02173de4[3]);
    }
}

extern u32 data_02156cd8[4];
void func_0212c4b8(u32 arg0) {
    data_02156cd8[0] = arg0;
}

s32 func_0212c4c8(void) {
    s32 v = func_0212c54c(data_02156cd8[0]);
    switch (v) {
    case -1:
    case 0:
        break;
    case 1:
        func_0212c520();
        break;
    case 2:
        func_021384f0();
        break;
    case 3:
        func_02138500();
        func_02138510();
        break;
    }
    return 0;
}

extern void func_021384a0(void);
extern void func_021384b0(void);
extern void func_021384c0(void);
extern void func_021384d0(void);
extern void func_021384e0(void);
s32 func_0212c520(void) {
    func_021384a0();
    func_021384b0();
    func_021384c0();
    func_021384d0();
    func_021384f0();
    func_02138500();
    func_02138510();
    func_021384e0();
    return 0;
}

extern s32 func_0212ea3c(void);
s32 func_0212c54c(u32 arg0) {
    if (arg0 != (u32)-1) {
        return arg0;
    }
    return func_0212ea3c() == 1 ? 2 : 1;
}

void func_0212c56c(void) { if (data_02173df4[4] == 0) { func_02129bd8(); {struct {u32 words[180];} zero={0}; memcpy(data_02173e08,&zero,720);} } data_02173df4[4]++; }

s32 func_0212c7b0(s8 *arg0) {
    return arg0[1];
}

extern void func_0212999c(void *, u32);
void func_0212c7b8(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 8) = arg1;
    func_0212999c(*(void **)((u8 *)arg0 + 4), arg1);
}

void func_0212c7cc(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0x38) = arg1;
    func_021299c0(*(void **)(arg0 + 4), arg1);
}

extern void func_02129a2c(void *);
void func_0212c7e0(void *arg0) {
    func_02129a2c(*(void **)((u8 *)arg0 + 4));
}

void func_0212c624(void *);
void func_0212a53c(void *);
void func_0212c7f0(u8 *arg0) {
    func_0212c624(arg0);
    arg0[1] = 1;
}

void func_0212c808(u8 *arg0) {
    func_0212a53c(*(void **)(arg0 + 4));
    arg0[1] = 0;
}

#pragma optimize_for_size off
extern void *memset(void *, int, unsigned long);
#pragma intrinsics on
void func_0212c5cc(void) {
 volatile u32 *p=data_02173df4;
 p[4]--;
 if(p[4]==0) {u32 zero[180]={0}; memcpy(data_02173e08,zero,sizeof zero);}
}
void func_0212c624(void *arg0) {
    u8 *p = (u8 *)arg0;
    *(u32 *)(p + 0xa0) = 0;
    *(u32 *)(p + 0x2c) = 0;
    *(u32 *)(p + 0x30) = 0;
    *(u32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0x7fffffff;
    *(s32 *)(p + 0x3c) = -1;
    *(u32 *)(p + 0x40) = 0;
    *(u32 *)(p + 0x44) = 0;
    *(u8 *)(p + 0x3) = 0;
    *(u32 *)(p + 0xa8) = 0;
    *(u32 *)(p + 0xac) = 0;
}

u8 *func_0212c660(u32 arg0,s32 count,void **items) {
 s32 width;
 u8 *p;
 s32 half;
 s32 zero=0;
 void *first=items[0];
 s32 i;
 for(i=0;i<4;i++)if(*(volatile s8 *)(i*0xb4+(u32)data_02173e08)==0)break;
 if(i==4)return NULL;
 p=data_02173e08+i*0xb4;
 width=func_02137d44(first);
 half=func_02137dbc(first)/2;
 *(u8 **)(p+4)=func_02129cac(count,width,half,half+func_02137e34(first)/2);
 if(!*(u8 **)(p+4))return NULL;
 func_0212a1c8(*(void **)(p+4),func_0212caec,p);
 *(u32 *)(p+8)=arg0;p[2]=count;
 for(i=0;i<count;i++)*(void **)(p+12+i*4)=items[i];
 p[1]=zero;
 func_0212c624(p);
 *(s32 *)(p+0x48)=zero;*(s32 *)(p+0x4c)=zero;*(s32 *)(p+0x58)=zero;*(s32 *)(p+0x5c)=zero;
 p[0]=1;
 return p;
}

void func_0212c770(u8 *arg0) {
    u8 *p;
    if (arg0 == NULL) {
        return;
    }
    p = *(u8 **)(arg0 + 4);
    if (p != NULL) {
        *(u32 *)(arg0 + 4) = 0;
        func_02129d80(p);
    }
    func_0212a9dc();
    func_02013878(arg0, 0, 0xb4);
    func_0212a9e8();
}

