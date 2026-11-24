/* 8 functions from 0x0205C65C to 0x0205D644 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a6c;

extern void func_0205bc60(void *, u8 *, s32);
extern void func_020dd810(void *, s32, s32);
extern void func_0205aa34(void *, s32);
extern void func_020020f8(void *, void *, void *);
extern void *func_0205bad4(void *);
extern s32 func_020dde4c(s32);
extern void func_02060110(void *, void *, void *, s32, void *);
extern void func_020d4eb8(void *);
void func_0205c65c(u8 *p, s32 state) {
u8 *n; s32 ready;
switch(state){
case 910:
(*(volatile u16 *)(p+0x10))++;
if(*(volatile u16 *)(p+0x10)>20){*(volatile u16 *)(p+0x10)=0; *(s32 *)(p+0x24)=911;} break;
case 911:
*(u16 *)(p+0x1e)&=0xfff7;
n=*(u8 **)(data_02160a6c+0xb8); ready=1;
while(n){if(n && *(s32 *)(n+0x1c0)==1) ready=0; n=*(u8 **)(n+0x174);}
if(ready) *(s32 *)(p+0x24)=299;
break;
case 912: *(s32 *)(p+0x24)=299; break;
case 913:
ready=1; n=func_0205bad4(p);
while(n){if(*(u16 *)(n+0x10)!=0)ready=0; n=*(u8 **)(n+0x18);}
if(ready){*(u16 *)(p+0x1e)&=0xffef; *(s32 *)(p+0x24)=300;}
break;
}
}

void func_0205ca14(u8 *arg0) {
 u8 *p=*(u8 **)(arg0+0x128);
 u8 *n;
 u8 *q=*(u8 **)(p+8);
 s32 base, i, count;
 n=func_0205bad4(p);
 base=*(u16 *)(arg0+0x90)*10; i=0; count=0;
 s32 zero=0, one=1;
 while(n) {
 if(func_020dde4c((u16)(i+0x276+base)) == 0) {
 u8 *v=*(u8 **)n;
 if(**(u8 **)(v+0x118)==1) {
 if (!(*(u32 *)(q+8)&1)) func_02060110(v,q,n,one,p);
 else func_02060110(v,q,n,zero,p);
 }
 } else {count++;}
 n=*(u8 **)(n+0x18); i++;
 }
 if(count) return;
 *(u32 *)(p+0x14)=0;
 *(u16 *)(p+0x1e)|=0x100;
 func_020d4eb8(arg0);
}

void func_0205cafc(s32 *arg0) {
u8 count = 0;
u8 *p = *(u8 **)((u8 *)arg0 + 0x128);
s32 dy;
func_0205bc60(arg0, &count, 20);
dy = (arg0[10] - arg0[1]) >> 12;
if (dy < 0) dy = -dy;
if (dy < 10) { arg0[13] = 0; count++; }
if (count >= 2) {
s32 zero = 0;
arg0[0] = arg0[6]; arg0[1] = arg0[7]; arg0[2] = arg0[8];
arg0[12] = zero; arg0[13] = zero; arg0[14] = zero;
if (((u8 *)arg0)[0x104]) func_020dd810(arg0,zero,zero);
func_0205aa34(arg0,2);
*(s32 *)(p+0x24)=0;
} else func_020020f8(arg0, arg0 + 12, arg0);
}

extern s32 func_0205bcb0(void *, u16);
extern void *func_020c17bc(void *, u16, u16, s32, s32);
extern void func_020d2bf0(void *, void *, s32, s32);
extern void func_0205baf8(void *);
void func_0205cbc0(u8 *p) {
u8 *r;
u8 *q=*(u8 **)(p+0x128);
r=*(u8 **)q;
u8 *v=*(u8 **)(r+0x118);
s32 flags;
if((v[0x64]&2)||(*(u32 *)(v+0x8c)&0x20)) {
*(u32 *)(r+0x1c0)=1;
*(u32 *)(r+0xec)=*(u32 *)r;*(u32 *)(r+0xf0)=*(u32 *)(r+4);*(u32 *)(r+0xf4)=*(u32 *)(r+8);
}
flags=func_0205bcb0(p,(u16)*(u32 *)(q+0x30));
if((flags&1)&&!*(s16 *)(q+0x1c)) {
s32 pos[3];u8 *obj;s32 zero=0;
*(s16 *)(q+0x1c)=1;
pos[0]=*(s32 *)p+0x1e000;pos[1]=*(s32 *)(p+4)+0x1e000;pos[2]=*(s32 *)(p+8);
obj=func_020c17bc(pos,(u16)*(u32 *)(q+0x34),(u16)(*(u16 *)(p+0x90)+600),14,0);
*(u32 *)(obj+0x78)=64;
pos[0]=*(s32 *)(r+0x1a8);pos[1]=*(s32 *)(r+0x1ac)+0x10000;pos[2]=*(s32 *)(r+0x1b0);
func_020d2bf0(obj,pos,zero,zero);func_0205baf8(obj);
if(*(u16 *)(p+0x8e)!=32) *(u32 *)(obj+0x80)&=~2;
q[0xa6]=0;
}
if(flags&2) {if(*(u16 *)(p+0x8e)==32)func_0210d27c(39);func_020d4eb8(p);}
if(*(u16 *)(p+0x8e)!=91)return;
(*(volatile s8 *)(q+0xa6))++;
if(*(s8 *)(q+0xa6)==1) {func_0210d27c(98);return;}
if(*(s8 *)(q+0xa6)>5) q[0xa6]=0;
}

extern s32 func_020dddfc(void *, void *, s32);
void func_0205cd64(u8 *p) {
    u8 *r;
    u8 *q = *(u8 **)(p + 0x128);
    u8 *obj;
    u16 i;
    s32 zero = 0;

    r = *(u8 **)q;

    if (*(u16 *)(p + 0x8e) == 91) {
        (*(volatile s8 *)(q + 0xa6))++;
        if (*(s8 *)(q + 0xa6) == 1) {
            func_0210d27c(97);
        }
    } else if (*(u16 *)(p + 0x8e) == 81) {
        (*(volatile s8 *)(q + 0xa6))++;
        if (*(s8 *)(q + 0xa6) == 1) {
            func_0210d27c(99);
        }
    } else if (*(u16 *)(p + 0x8e) == 32) {
        (*(volatile s8 *)(q + 0xa6))++;
        if (*(s8 *)(q + 0xa6) == 1) {
            func_0210d27c(120);
        }
    }

    obj = (u8 *)func_020dde4c(*(u16 *)(p + 0x90) + 600);
    if (!obj) return;

    *(u32 *)(obj + 0x80) |= 2;
    if (func_020dddfc(obj, obj + 0x24, 0xa000)) {
        func_020d4eb8(p);
        return;
    }

    (*(u16 *)*(u8 **)(obj + 0x19c))++;
    func_020020f8(obj, obj + 0x30, obj);

    (*(s32 *)(q + 0x14))++;
    if (*(s32 *)(q + 0x14) > 1) {
        *(s32 *)(q + 0x14) = zero;
    }
    if (*(s32 *)(q + 0x14) == 0) {
        s32 pos[3];
        pos[0] = *(s32 *)p + 0x1e000;
        pos[1] = *(s32 *)(p + 4) + 0x1e000;
        pos[2] = *(s32 *)(p + 8);
        if (*(s16 *)(q + 0x1c) < 7) {
            u8 *obj2;
            u16 *sub;
            if ((*(s16 *)(q + 0x1c) % 2) == 0) {
                obj2 = func_020c17bc(pos, (u16)*(u32 *)(q + 0x34), (u16)(*(s16 *)(q + 0x1c) + 1100), 12, zero);
            } else {
                obj2 = func_020c17bc(pos, (u16)*(u32 *)(q + 0x34), (u16)(*(s16 *)(q + 0x1c) + 1100), 13, zero);
            }
            sub = *(u16 **)(obj2 + 0x19c);
            pos[0] = *(s32 *)(r + 0x1a8);
            pos[1] = *(s32 *)(r + 0x1ac) + 0x10000;
            pos[2] = *(s32 *)(r + 0x1b0);
            *(u32 *)(obj2 + 0x78) = 64;
            *sub = 0;
            func_020d2bf0(obj2, pos, 0, 0);
            func_0205baf8(obj2);
            (*(s16 *)(q + 0x1c))++;
        }
    }

    for (i = 0; i < 7; i++) {
        u8 *e = (u8 *)func_020dde4c(i + 1100);
        if (e) {
            (*(u16 *)*(u8 **)(e + 0x19c))++;
            func_020020f8(e, e + 0x30, e);
        }
    }
}

extern u8 **data_02160244;
extern void func_020d9d10(s32, s32, s32);
extern void func_020d907c(void *);
extern void func_020dd9b4(void *, s32 *);
void func_0205cfa8(u8 *p) {
    u8 *r;
    u8 *q = *(u8 **)(p + 0x128);
    s32 zero = 0;

    r = *(u8 **)q;

    if (*(s16 *)(q + 0x1c) == 0) {
        u8 *obj;
        u16 i;
        s32 neg1 = -1;

        *(s16 *)(q + 0x1c) = 1;
        func_020d9d10(zero, 2, zero);
        func_020dd810(r, 9, zero);

        if (*(u16 *)(p + 0x8e) == 32) {
            func_0210d27c(108);
        } else if (*(u16 *)(p + 0x8e) == 81) {
            func_0210d27c(108);
        } else if (*(u16 *)(p + 0x8e) == 91) {
            func_0210d27c(112);
        }

        obj = (u8 *)func_020dde4c(*(u16 *)(p + 0x90) + 600);
        *(s32 *)(obj + 0x30) *= neg1;
        *(s32 *)(obj + 0x38) *= neg1;
        *(s32 *)(obj + 0x34) *= neg1;

        for (i = 0; i < 7; i++) {
            u8 *e = (u8 *)func_020dde4c(i + 1100);
            if (e) {
                *(s32 *)(e + 0x30) *= neg1;
                *(s32 *)(e + 0x38) *= neg1;
                *(s32 *)(e + 0x34) *= neg1;
            }
        }
    } else if (*(s16 *)(q + 0x1c) == 1) {
        s32 sp0;
        u16 *sub;
        u16 i;
        u8 *obj;
        s32 one = 1;

        (*data_02160244)[0x6c] = 1;
        func_020d907c(r);
        func_020dd9b4(p, &sp0);
        if (sp0 && p[0x104] == 0x16) {
            func_020dd810(p, 0x17, zero);
        }

        for (i = 0; i < 7; i++) {
            u8 *e = (u8 *)func_020dde4c(i + 1100);
            if (e) {
                sub = *(u16 **)(e + 0x19c);
                func_020020f8(e, e + 0x30, e);
                (*(volatile u16 *)sub)--;
                if (*sub == 0) {
                    e[0xa5] = one;
                }
            }
        }

        obj = (u8 *)func_020dde4c(*(u16 *)(p + 0x90) + 600);
        if (obj) {
            s32 vec[3];
            sub = *(u16 **)(obj + 0x19c);
            func_020020f8(obj, obj + 0x30, obj);
            vec[0] = *(s32 *)(obj + 0x30);
            vec[1] = *(s32 *)(obj + 0x34);
            vec[2] = *(s32 *)(obj + 0x38);
            vec[1] = zero;
            if (*sub > 1) {
                func_020020f8(r, vec, r);
            }
            (*(volatile u16 *)sub)--;
            if (*sub == 0) {
                obj[0xa5] = 1;
            }
        } else {
            *(u16 *)(q + 0x1e) |= 0x100;
            func_020d4eb8(p);
        }
    }
}

