/* 31 functions from 0x02134134 to 0x02134F44 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0215be68[];
extern void *func_02135d9c(s32,s32,u8);
extern u8 data_0215bd44[], data_0215bd5c[], data_0215bd80[], data_0215bda4[];
void func_02134cb4(u8 *, s32, s32);
void func_02134c00(u8 *, s32);
BOOL func_02134edc(u8 *);

extern void func_02135c78(void);
extern s32 func_02136930(void *);
extern void func_0200baa4(void *);
extern void func_02013878(void *, u32, u32);
extern s32 func_020138b8(void *, u32, u32);
extern s32 func_02016d50(u32, void *, u32 *, u32 *, u32 *);
extern u8 data_0215bc4c[];
extern u8 data_0215bc54[];
extern void func_0213807c(void);
extern void func_0213808c(void);
extern void func_0200bb10(void *, s32, s32);
extern void func_0200b8b4(void *);
extern s32 func_02133dd0(s32, void *);
extern u8 data_021756d8[];
extern u32 data_021756d4;
extern u8 data_02175998[];
extern u8 data_021759a0[];
typedef struct {
    u8 pad[0x2bc];
    s32 count;
    u8 pad2[8];
    u8 flags[8];
    void (*cb)(u8 *);
} Mgr_02134884;
extern void func_0200b888(u32 *);
extern s32 func_0200bc08(u32 *, u32);
extern s32 func_0200bc18(u32 *);
extern void func_0200baa4(void *);
extern void func_02134b34(u8 *);
extern void func_02135d20(void);
extern void func_02135c48(void);
extern void func_02135c18(void);
extern void func_02135ccc(void);
extern u8 data_02145aa4[];
extern void *data_0215be64;
extern u8 data_0215bd14[];
extern u8 data_0215bd2c[];
extern u8 data_0215bdd0[];
extern u8 data_0215be00[];
extern u8 data_0215be18[];
extern u8 data_0215be30[];
extern u8 data_0215be4c[];
BOOL func_02134c94(u8 *arg0);
s32 func_021343a0(u8 *, s32, s32);
s32 func_0213443c(u8 *);
void func_02134544(u8 *);
s32 func_02134134(u8 *arg0) {
    return *(s32 *)(arg0 + 0x5c);
}

s32 func_0213413c(u32 arg0, u32 *arg1, u32 *arg2, u32 *arg3) {
    if (func_020138b8(data_0215bc4c, arg0, 7) != 0) goto fail;
    if (func_02016d50(arg0, data_0215bc54, arg1, arg2, arg3) != 3) goto fail;
    if (*arg3 == 0) *arg3 = 7 - (s32)0x80000008;
    return 1;
fail:
    *arg1 = 0;
    *arg2 = 0;
    *arg3 = 0;
    return 0;
}

extern u8 data_0215bc6c[];
extern u8 data_0215bc94[];
extern u8 data_02174f9c[];
extern u8 data_0215bcbc[];
extern u8 data_0215bcf0[];
extern void func_02133e54(void *, const void *);
void *func_021341cc(const void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x200];
    u32 sp8;
    u32 sp4;
    u32 sp0;
    s32 i;
    u8 *entry;
    s32 size;
    s32 rem;
    s32 q;

    if (arg0 == NULL) {
        func_02133dd0(0, data_0215bc6c);
        return NULL;
    }
    if (arg2 != 0) {
        func_02133dd0(0, data_0215bc94);
        return NULL;
    }

    for (i = 0; i < 10; i++) {
        entry = &data_02174f9c[i * 0x84];
        if ((s8)entry[0] == 0) {
            break;
        }
    }
    if (i == 10) {
        func_02133dd0(0, data_0215bcbc);
        return NULL;
    }

    *(s32 *)(entry + 0x7c) = i;
    func_02133e54(buf, arg0);

    if (func_0213413c((u32)arg0, &sp8, &sp4, &sp0) == 1) {
        *(u32 *)(entry + 0x4c) = sp8;
        *(u32 *)(entry + 0x80) = sp4;
        size = sp0;
    } else {
        func_0200b888((u32 *)(entry + 4));
        *(void **)(entry + 0x4c) = entry + 4;
        if (func_0200bc08((u32 *)(entry + 4), (u32)buf) == 0) {
            func_02133dd0(0, data_0215bcf0);
            return NULL;
        }
        *(u32 *)(entry + 0x80) = 0;
        size = func_0200bc18(*(u32 **)(entry + 0x4c));
    }

    *(s32 *)(entry + 0x5c) = size;
    *(s32 *)(entry + 0x58) = 0x800;
    rem = (*(s32 *)(entry + 0x5c) % *(s32 *)(entry + 0x58) > 0) ? 1 : 0;
    q = *(s32 *)(entry + 0x5c) / *(s32 *)(entry + 0x58);
    *(s32 *)(entry + 0x60) = q + rem;
    *(s32 *)(entry + 0x64) = 0;
    *(s32 *)(entry + 0x54) = 0;
    *(s32 *)(entry + 0x6c) = 0;
    *(s32 *)(entry + 0x68) = 0;
    entry[1] = 0;
    entry[0] = 1;
    *(s32 *)(entry + 0x50) = 0;
    return entry;
}

void func_02134368(u8 *arg0) {
    if (arg0 == NULL) return;
    if (*(void **)(arg0 + 0x4c) == arg0 + 4) {
        func_0200baa4(*(void **)(arg0 + 0x4c));
    }
    *(u8 *)arg0 = 0;
    func_02013878(arg0, 0, 0x84);
}

s32 func_021343a0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 val = 0;
    s32 max;
    if (arg0 == NULL) {
        func_02133dd0(0, data_0215bd14);
        return 0;
    }
    func_0213807c();
    if (arg2 == 0) {
        val = arg1;
    } else if (arg2 == 2) {
        val = *(s32 *)(arg0 + 0x60) + arg1;
    } else if (arg2 == 1) {
        val = *(s32 *)(arg0 + 0x64) + arg1;
    }
    max = *(s32 *)(arg0 + 0x60);
    if (val >= max) {
        val = max;
    }
    if (val <= 0) {
        val = 0;
    }
    *(s32 *)(arg0 + 0x64) = val;
    func_0213808c();
    func_0200bb10(*(void **)(arg0 + 0x4c), *(s32 *)(arg0 + 0x80) + *(s32 *)(arg0 + 0x64) * *(s32 *)(arg0 + 0x58), 0);
    return *(s32 *)(arg0 + 0x64);
}

s32 func_0213443c(u8 *arg0) {
    if (arg0 != NULL) {
        return *(s32 *)(arg0 + 0x64);
    }
    func_02133dd0(0, data_0215bd2c);
    return 0;
}

s32 func_02134468(u8 *p,s32 count,void *buf) {
 register s32 zero=0;
 if(!p) {func_02133dd0(zero,data_0215bd44);return zero;}
 if(count<0) {func_02133dd0((s32)p,data_0215bd5c);return zero;}
 if(!buf) {func_02133dd0((s32)p,data_0215bd80);return zero;}
 if(count>=0x100000) {func_02133dd0((s32)p,data_0215bda4);return zero;}
 if(*(s32 *)(p+0x50)==2)return zero;
 if(count==0) {p[1]=1;return zero;}
 func_0213807c();
 *(s32 *)(p+0x6c)=count;
 *(s32 *)(p+0x74)=count**(s32 *)(p+0x58);
 *(s32 *)(p+0x50)=1;
 *(void **)(p+0x54)=buf;
 p[1]=2;
 func_0213808c();
 return *(s32 *)(p+0x6c);
}

void func_02134544(u8 *arg0) {
    s8 flag;
    if (arg0 == NULL) {
        func_02133dd0(0, data_0215bdd0);
        return;
    }
    flag = *(s8 *)(arg0 + 1);
    func_0213807c();
    arg0[1] = 0;
    *(u32 *)(arg0 + 0x50) = 0;
    func_0213808c();
    if (flag != 2) {
        return;
    }
    func_0200b8b4(*(void **)(arg0 + 0x4c));
}

extern u8 data_0215bde8[24];
s32 func_02134590(void *arg0) {
    if (arg0 != NULL) {
        return *(s8 *)((u8 *)arg0 + 1);
    }
    func_02133dd0(0, data_0215bde8);
    return 0;
}

s32 func_021345bc(u8 *arg0) {
    if (arg0 != NULL) {
        return *(s32 *)(arg0 + 0x58);
    }
    func_02133dd0(0, data_0215be00);
    return 0;
}

s32 func_021345e8(u8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return func_02133dd0(0, data_0215be18);
    }
    if (arg1 % 32 != 0) {
        return func_02133dd0(0, data_0215be30);
    }
    s32 off = *(s32 *)(arg0 + 0x64) * *(s32 *)(arg0 + 0x58);
    s32 total = *(s32 *)(arg0 + 0x5c);
    *(s32 *)(arg0 + 0x58) = arg1;
    *(s32 *)(arg0 + 0x60) = total / arg1 + (total % arg1 > 0);
    *(s32 *)(arg0 + 0x64) = off / *(s32 *)(arg0 + 0x58);
    s32 v = *(s32 *)(arg0 + 0x6c) * *(s32 *)(arg0 + 0x58);
    *(s32 *)(arg0 + 0x68) = v;
    return v;
}

s32 func_02134690(u8 *arg0) {
    if (arg0 != NULL) {
        return *(s32 *)(arg0 + 0x68);
    }
    func_02133dd0(0, data_0215be4c);
    return 0;
}

s32 func_021346bc(void) {
    return 0;
}

s32 func_021346c4(u8 *arg0) {
    return *(s32 *)(arg0 + 0x68);
}

s32 func_021346cc(u32 arg0) {
    u32 a, b, c;
    u32 buf[18];
    s32 res;
    if (func_0213413c(arg0, &a, &b, &c) == 1) {
        arg0 = c;
    } else {
        func_0200b888(buf);
        if (func_0200bc08(buf, arg0) == 0) {
            return 0;
        }
        res = func_0200bc18(buf);
        func_0200baa4(buf);
        arg0 = (u32)res;
    }
    return (s32)arg0;
}

void func_0213473c(void) {
    func_02135c78();
}

void *memset(void *, int, unsigned long);
#pragma intrinsic on
void func_02134748(void) {
    data_0215be64 = data_02145aa4;
    if (data_021756d4 == 0) {
        func_02135c18();
        { u64 *p = (u64 *)data_021756d8; u32 i = 90; do { *p++ = 0; } while (--i); *(u32 *)p=0; }
        func_02135ccc();
        *(u32 *)(data_021756d8 + 0x2bc) = 2;
        data_021756d8[0x2c0] = 4;
        data_021756d8[0x2c1] = 5;
        *(u32 *)(data_021756d8 + 0x2b4) = 0;
    }
    data_021756d4++;
}
void func_021347e8(void) {
    s32 i;
    u8 *p;
    if (--data_021756d4 != 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        p = data_021756d8 + i * 0xac;
        if (*(s8 *)p == 1) {
            func_02134b34(p);
        }
    }
    func_02135d20();
    func_02135c48();
}

void func_02134844(u8 *arg0, s32 arg1) {
    if (arg1 > 8) {
        return;
    }
    *(s32 *)(data_021756d8 + 0x2bc) = arg1;
    if (arg1 <= 0) {
        return;
    }
    if (arg0 == NULL) {
        return;
    }
    func_02013858(data_02175998, arg0, arg1);
}

u8 func_02134884(void) {
    u8 result = 0xff;
    void (*cb)(u8 *) = *(void **)(data_021756d8 + 0x2d0);
    if (cb != NULL) {
        cb(&result);
    } else {
        s32 count = *(s32 *)(data_021756d8 + 0x2bc);
        s32 i;
        for (i = 0; i < count; i++) {
            if (*(u8 *)(data_021756d8 + i + 0x2c8) == 0) {
                data_021759a0[i] = 1;
                result = data_02175998[i];
                break;
            }
        }
    }
    return result;
}

u8 *func_02134908(void **items,s32 count,s32 arg){
 s32 zero=0;
 u8 *p;
 s32 slot,i;
 u8 ids[2];
 if(count<=0)return (u8 *)zero;
 if(!items)return (u8 *)zero;
 for(i=zero;i<count;i++)if(!items[i])return 0;
 for(slot=0;slot<4;slot++)if(!*(s8 *)(data_021756d8+slot*0xac))break;
 if(slot==4){func_02135c8c(data_0215be68);return 0;}
 p=data_021756d8+slot*0xac;
 p[3]=count;p[2]=*(s8 *)(p+3);
 for(i=0;i<*(s8 *)(p+2);i++)*(void **)(p+0x10+i*4)=items[i];
 *(u16 *)(p+0x18)=0;
 for(i=0;i<count;i++){s32 v=func_02134884();if(v==255){func_02134b34(p);return 0;}ids[i]=v;}
 func_02114420(p+0x34);
 if(!func_02114494(p+0x34,count,ids)){func_02134b34(p);return 0;}
 for(i=0;i<count;i++){
 void *v=func_02135d9c(i,arg,ids[i]);
 if(!v){func_02134b34(p);return 0;}
 *(void **)(p+0x20+i*4)=v;
 }
 func_02135558(p,*(s8 *)(p+3));
 func_02135564(p,0x7fd8);
 func_02135724(p,16);
 func_02135650(p,zero);
 if(*(s8 *)(p+2)==2){func_02135698(p,zero,zero-15);func_02135698(p,1,15);}else func_02135698(p,zero,zero);
 p[1]=zero;p[0]=1;p[4]=zero;p[5]=zero;p[6]=zero;p[7]=zero;
 *(s32 *)(p+0x9c)=zero;*(u16 *)(p+0x98)=zero;
 return p;
}

void func_02134b34(u8 *p){
s32 i=0,j; s32 zero=0;
if(!p)return;
func_02134cb4(p,0,1);func_02134c00(p,0);
for(i=0;i<*(s8 *)(p+2);i++){
for(j=0;j<*(s32 *)(data_021756d8+0x2bc);j++){
if(data_021756d8[0x2c0+j]==*(s16 *)(*(u8 **)(p+4*i+0x20)+2)){
data_021756d8[0x2c8+j]=zero;break;
}}
if(**(u16 **)(p+4*i+0x20)!=0){
*(u32 *)(*(u8 **)(p+4*i+0x20)+0x30)=zero;
**(u16 **)(p+4*i+0x20)=zero;
}
}
func_021144f0(p+0x34);p[0]=0;
}

extern void func_021146b8(void *);
void func_02134bf0(u8 *arg0) {
    func_021146b8(arg0 + 0x34);
}

void func_02134cb4(u8 *,s32,s32);
void func_02134c00(u8 *p,s32 flag){
if(!p)return;
if(flag==func_02134c94(p))return;
if(flag==1){
func_02135c00();func_021359e4(p);func_02134d50(p);
p[6]=2;p[1]|=1;func_02135c0c();
*(u16 *)(p+0x2e)=0;*(u16 *)(p+0x30)=0;*(u16 *)(p+0x2c)=0;*(u16 *)(p+0xa8)=0;
if(*(void **)(p+0x9c))func_02013878(*(void **)(p+0x9c),0,*(u16 *)(p+0x98)*2);
}else if(flag==0) p[1]^=1;
}

BOOL func_02134c94(u8 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return (arg0[1] & 1) != 0;
}

void func_02134cb4(u8 *p,s32 flag,s32 sync){
if(!p)return;
if(sync)func_02135a80(p);
if(flag==func_02134edc(p))return;
if(flag==1){
if((p[1]&8)==8)return;
func_02134bf0(p);p[1]=(p[1]|2)&0xfb;
}else if(flag==0){
func_021359e4(p);func_02134d50(p);
if(sync)func_02135a80(p);
p[1]^=2;
}
}

extern void func_02008e68(s32, void *, u32);
extern void func_021357e8(void);
extern s32 func_02114518(void *, s32, void *, u32, u32, s32, void *, void *);
extern void func_021147e8(void *, s32, u32);
extern void func_02114728(void *, s32);
extern void func_02114794(void *, s32, s32);
s32 func_02134d50(u8 *arg0) {
    struct {
        u8 pad0[2];
        s8 f2;
        s8 f3;
        s8 f4;
        u8 pad5[0x13];
        s16 f18;
        u8 pad1a[6];
        u8 *ch[4];
        u8 pad30[4];
        u8 f34[1];
    } *s = (void *)arg0;
    s32 i;
    s32 count;
    s32 ret;

    if (s->f4 >= 1 && s->f3 == 1 && s->f2 == 2) {
        count = 2;
    } else {
        count = s->f3;
    }

    for (i = 0; i < count; i++) {
        u16 ime;
        if (*(u16 *)s->ch[i] & 8) {
            return 0;
        }
        func_02008e68(0, *(void **)(s->ch[i] + 4), *(u16 *)(s->ch[i] + 0x18));
        ime = *(volatile u16 *)0x04000208;
        *(volatile u16 *)0x04000208 = 0;
        *(u16 *)(s->ch[i] + 0x1a) = 0;
        *(u16 *)(s->ch[i] + 0x1e) = 0x1800;
        *(u16 *)(s->ch[i] + 0x1c) = 0;
        *(u32 *)(s->ch[i] + 0xc) = 0;
        *(u32 *)(s->ch[i] + 0x10) = 0;
        *(u16 *)(s->ch[i]) &= 0xfffd;
        (void)*(volatile u16 *)0x04000208;
        *(volatile u16 *)0x04000208 = ime;
    }

    {
        u8 *ch0 = s->ch[0];
        ret = func_02114518(
            s->f34,
            1,
            *(void **)(ch0 + 4),
            *(u16 *)(ch0 + 0x18) * s->f2,
            *(u32 *)(ch0 + 8),
            *(s16 *)(ch0 + 0x2c),
            (void *)func_021357e8,
            s
        );
    }

    for (i = 0; i < count; i++) {
        func_021147e8(s->f34, i, *(u16 *)(s->ch[i] + 0x20));
        func_02114728(s->f34, s->f18);
        func_02114794(s->f34, i, 0);
        *(u16 *)(s->ch[i] + 0x2a) = 0;
        *(u16 *)(s->ch[i]) |= 8;
    }

    return ret;
}

