/* 11 functions from 0x020CFC10 to 0x020D0A40 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a6c;
extern const s16 data_0213a394[];
extern s32 func_020d9e38(void);

extern void func_0210c5dc(void *);
extern s32 data_02155c3c;
extern u8 *data_02160244;
extern u8 *data_02160a74;
extern void *func_0210c594(s32, s32);
extern void func_021168f8(void *, void *);
extern s32 func_0202bd60(u8, u8);
extern void func_0202bfa8(void *, u8);
extern void func_02030b7c(void *, s32, s32);
extern void func_020dd810(void *, s32, s32);
extern void func_0202bd08(void *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_020cf5bc(void *);
extern void func_02031d2c(void);
void *func_0202c5a0(void *);
extern u8 *data_021601e8;
s32 func_020cfc10(u8 *p) {
 s32 zero=0;
 u8 *node;
 s32 *base;
 s32 radius;
 if(*(u16 *)(p+0x10)!=1)return zero;
 switch(*(u16 *)(p+0x12)) {
 case 0:
 if(++*(s32 *)(p+4)>10) {*(u16 *)(p+0x12)=1; *(s32 *)(p+4)=10;}
 *(s32 *)(p+0x14)=(*(s32 *)(p+4)*82/10+430)<<12;
 *(s32 *)(p+0x18)=0x30000;*(s32 *)(p+0x1c)=0x200000;
 func_020d907c(p+0x14);func_020d9090();
 for(node=*(u8 **)(data_02160a6c+0xac);node;node=*(u8 **)(node+0x16c)) {
 base=func_0202c5a0(node);
 radius=162-*(s32 *)(p+4)*162/10;
 {s32 trig=((const s16 (*)[2])data_0213a394)[func_020d9e38()>>4][1];
 radius=-radius;*(s32 *)node=base[0]-radius*trig;}
 *(s32 *)(node+4)=base[1];
 *(s32 *)(node+8)=base[2]-data_0213a394[(func_020d9e38()>>4)*2]*radius;
 }
 if(*(u16 *)(p+0x12)!=0)*(s32 *)(p+4)=zero;
 break;
 case 1:
 if(!(*(u32 *)p&1)) {
 *(u32 *)p|=1;
 for(node=*(u8 **)(data_02160a6c+0xac);node;node=*(u8 **)(node+0x16c))func_020dd810(node,8,zero);
 }
 if(!(*(u32 *)p&2)) {
 *(u32 *)p|=2;
 for(node=*(u8 **)(data_02160a6c+0xb8);node;node=*(u8 **)(node+0x174)) {
 *(u32 *)(node+0x80)|=0x4000;
 if(func_020d0200(node))*(s32 *)(node+0xf8)=1;
 }
 }
 if(++*(s32 *)(p+4)>10){*(s32 *)(p+4)=zero;*(u16 *)(p+0x12)=2;}
 break;
 case 2: {
 u8 *q=*(u8 **)(data_021601e8+0x14);
 if(!(*(u32 *)p&4)) {
 *(u32 *)p|=4;
 *(u32 *)(q+0x108)|=16;*(s32 *)(q+0x104)=1;
 *(s32 *)(*(u8 **)(q+8)+0x4c)=0x2bd000;
 *(s32 *)(*(u8 **)(q+8)+0x44)=0x4a000;
 *(s32 *)(*(u8 **)(q+8)+0x48)=0x7000;
 func_020bb294(q,2);func_020a8810(*(u8 **)(q+8),22);
 func_020a994c(q+0x80);
 func_020a98ac(q+0x80);func_020a98f4(q+0x80);
 }
 if(++*(s32 *)(p+4)>=20){
 *(u32 *)(q+0x108)&=~16;
 func_020a994c(q+0x80);
 *(s32 *)(p+4)=zero;*(u16 *)(p+0x12)=3;
 }
 break;}
 case 3: {
 s16 time=++*(s32 *)(p+4);
 if(time>10)time=10;
 *(s32 *)(p+0x14)=(time*80/10+512)<<12;
 *(s32 *)(p+0x18)=0x30000;*(s32 *)(p+0x1c)=0x200000;
 func_020d907c(p+0x14);func_020d9090();
 if(*(s32 *)(p+4)>16){*(s32 *)(p+4)=zero;*(u16 *)(p+0x12)=4;}
 break;}
 case 4:
 if(!(*(u32 *)p&8)){
 *(u32 *)p|=8;
 for(node=*(u8 **)(data_02160a6c+0xb8);node;node=*(u8 **)(node+0x174)){
 *(u32 *)(node+0x80)&=~0x4000;
 if(func_020d0200(node)){*(s32 *)(node+0xf8)=zero;func_020ddfd0(node,zero);}
 }
 }
 if(++*(s32 *)(p+4)>=20)func_020e26f0(7,0,999);
 if(*(s32 *)(p+4)>25){*(s32 *)(p+4)=25;return 1;}
 break;
 }
 return 0;
}

s32 func_020d0000(u8 *arg0) {
    u8 *p = arg0;
    s32 zero = 0;
    u8 *node;
    s32 *base;
    s32 radius;
    if (*(u16 *)(p + 0x10) != 0) return zero;
    {
        *(s32 *)(p + 8) -= *(s32 *)(p + 0xc);
        *(s32 *)(p + 0xc) += 0x480;
        if (*(s32 *)(p + 8) < 0) *(s32 *)(p + 8) = zero;
    }
    if (!(*(u32 *)p & 1)) {
        for (node = *(u8 **)(data_02160a6c + 0xac); node; node = *(u8 **)(node + 0x16c)) {
            base = func_0202c5a0(node);
            radius = 90 - *(s32 *)(p + 4) * 90 / 20;
            { s32 trig = ((const s16 (*)[2])data_0213a394)[func_020d9e38() >> 4][1];
            radius = -radius;
            *(s32 *)node = base[0] - radius * trig; }
            *(s32 *)(node + 4) = base[1] + *(s32 *)(p + 8);
            *(s32 *)(node + 8) = base[2] - data_0213a394[(func_020d9e38() >> 4) * 2] * radius;
        }
    }
    if (++*(s32 *)(p + 4) > 20) {
        *(s32 *)(data_02160a6c + 0x100) = 1;
        if (!(*(u32 *)p & 1)) {
            *(u32 *)p |= 1;
            for (node = *(u8 **)(data_02160a6c + 0xac); node; node = *(u8 **)(node + 0x16c))
                func_020dd810(node, 8, zero);
        }
    }
    if (*(u32 *)p & 1) {
        s16 time = *(s32 *)(p + 4);
        if (time > 30) time = 30;
        *(s32 *)(p + 0x14) = (time * 160 / 30 + 430) << 12;
        *(s32 *)(p + 0x18) = 0x30000;
        *(s32 *)(p + 0x1c) = 0x200000;
        func_020d907c(p + 0x14);
        func_020d9090();
    }
    if (*(s32 *)(p + 4) >= 45) func_020e26f0(7, 0, 999);
    if (*(s32 *)(p + 4) > 50) {
        *(s32 *)(p + 4) = 50;
        return 1;
    }
    return 0;
}

s32 func_020d0200(u8 *p){switch(*(u16 *)(p+0x8e)){case 391:case 392:case 393:case 394:case 395:case 401:case 402:case 403:case 404:case 405:case 411:case 412:case 413:case 414:case 415:case 421:case 422:case 423:case 424:case 425:case 426:case 451:case 452:case 453:case 454:case 461:case 462:case 463:case 464:case 471:case 481:case 491:case 501:case 511:case 521:case 531:case 541:case 542:case 543:case 661:return 0;default:return 1;}}

extern void func_020d0a40(s32);
extern void func_021167ac(void *, s32);
extern void func_020d3cec(void);
extern void *func_0202bc44(u8);
extern void *func_020d0808(void);
extern void func_021167f0(void *, void *);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_02031c64(void);
extern void func_0202bab8(void);
extern void func_020d0d1c(void);
extern void func_020d4200(void);
extern void func_020d30d4(void);
extern void func_020d28e4(void);
void func_020d0418(void) {
    u8 *p;
    s32 i;

    if (data_02160244 != NULL) {
        return;
    }

    data_02160244 = (u8 *)func_0210c594(0x174, data_02155c3c);

    p = (u8 *)func_0210c594(0xa0, data_02155c3c);
    *(s32 *)(p + 0x4) = 0;
    *(u16 *)(p + 0x8) = 0;
    *(s32 *)(p + 0xc) = 0;
    *(u8 *)(p + 0x3a) = 0;
    *(u8 *)(p + 0x3b) = 0;
    *(s32 *)(p + 0x64) = 0;
    *(s32 *)(p + 0x68) = 0;
    for (i = 0; i < 10; i++) {
        *(s32 *)(p + 0x10 + i * 4) = 0;
    }
    *(s32 *)(p + 0x5c) = 0;
    *(void **)data_02160244 = p;

    func_020d0a40(0x18);

    p = (u8 *)func_0210c594(0x18, data_02155c3c);
    *(u8 *)(p + 0x12) = 0;
    *(u16 *)(p + 0x2) = 0;
    *(u16 *)(p + 0x4) = 0;
    *(s32 *)(p + 0x14) = 0;
    *(void **)(data_02160244 + 0x4) = p;

    func_021167ac(data_02160244 + 0x120, 0xc);
    func_020d3cec();
    func_021167ac(data_02160244 + 0x12c, 0x10);

    for (i = 0; i < 12; i++) {
        ((void **)(data_02160244 + 0x8))[i] = func_0202bc44((u8)i);
    }

    func_021167ac(data_02160244 + 0x160, 4);
    *(void **)(data_02160244 + 0xfc) = func_020d0808();
    *(void **)(data_02160244 + 0x100) = func_020d0808();
    func_021167ac(data_02160244 + 0x44, 8);
    func_021167ac(data_02160244 + 0x50, 0x10);
    func_021167ac(data_02160244 + 0x150, 8);

    for (i = 0; i < 3; i++) {
        p = (u8 *)func_0210c594(0x10, data_02155c3c);
        *(u8 *)(p + 6) = i;
        func_021167f0(data_02160244 + 0x150, p);
    }

    *(void **)(data_02160244 + 0x84) = (void *)func_020d0d1c;
    *(s32 *)(data_02160244 + 0x88) = 0x3f1;
    func_0210d9e4(data_02160244 + 0x84);

    *(void **)(data_02160244 + 0x98) = (void *)func_020d4200;
    *(s32 *)(data_02160244 + 0x9c) = 0x3f2;
    func_0210d9e4(data_02160244 + 0x98);

    *(void **)(data_02160244 + 0xd4) = (void *)func_020d30d4;
    *(s32 *)(data_02160244 + 0xd8) = 0x3f9;
    func_0210d9e4(data_02160244 + 0xd4);

    *(void **)(data_02160244 + 0xac) = (void *)func_020d28e4;
    *(s32 *)(data_02160244 + 0xb0) = 0x3e9;
    func_0210db70(data_02160244 + 0xac);

    *(s32 *)(data_02160244 + 0xf0) = 0;
    func_02031c64();
    func_0202bab8();

    p = (u8 *)func_0210c594(0x40, data_02155c3c);
    *(void **)(data_02160244 + 0x148) = p;
    *(u8 *)(p + 0x0) = 9;
    *(u16 *)(p + 0x18) = 0x60;
    *(u16 *)(p + 0x20) = 999;
}

void func_020d069c(void) {
 extern void func_020d0838(void);
 extern void func_020d0884(void);
 extern void func_020d0824(void *);
 s32 i;
 if(!data_02160244)return;
#define FIELD(off) (*(void **)(data_02160244+(off)))
 if(FIELD(0)){func_0210c5dc(FIELD(0));FIELD(0)=NULL;}
 if(FIELD(4)){func_0210c5dc(FIELD(4));FIELD(4)=NULL;}
 for(i=0;i<3;i++){if((*(void **)(data_02160244+i*4+0x60))){func_0210c5dc((*(void **)(data_02160244+i*4+0x60)));(*(void **)(data_02160244+i*4+0x60))=NULL;}}
 for(i=0;i<12;i++)func_0202bd08((*(void **)(data_02160244+i*4+8)));
 func_020d0838();func_020d0884();
 func_020d0824(FIELD(0xfc));func_020d0824(FIELD(0x100));
 func_0210da14(data_02160244+0x84);
 func_0210da14(data_02160244+0x98);
 func_0210da14(data_02160244+0xd4);
 func_0210dba0(data_02160244+0xac);
 if(FIELD(0x104)){func_020cf5bc(FIELD(0x104));FIELD(0x104)=NULL;}
 if(FIELD(0x13c))func_0210c5dc(FIELD(0x13c));
 FIELD(0x13c)=NULL;
 if(FIELD(0x148)){func_0210c5dc(FIELD(0x148));FIELD(0x148)=NULL;}
 FIELD(0x148)=NULL;
 if(data_02160244){func_0210c5dc(data_02160244);data_02160244=NULL;}
 func_02031d2c();
#undef FIELD
}

void *func_020d0808(void) {
    return func_0210c594(4, data_02155c3c);
}

void func_020d0824(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020d0838(void) {
    void *node;
    while ((node = *(void **)(data_02160244 + 0x150)) != NULL) {
        func_021168f8(data_02160244 + 0x150, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020d0884(void) {
    void *node;
    while ((node = *(void **)(data_02160244 + 0x160)) != NULL) {
        func_021168f8(data_02160244 + 0x160, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020d09d8(u8 *);
void func_020d08d0(void) {
 u8 *p;
 *(s32 *)(data_02160a6c+0x100)=0;
 data_02160a6c[0x104]=16;
 for(p=*(u8 **)(data_02160a6c+0xac);p;p=*(u8 **)(p+0x16c)) {
 u8 *q;
 u16 id=*(u16 *)(p+0x90);
 q=*(u8 **)(p+0x128);
 *(s32 *)(q+0x54)=func_0202bd60(id+9U,0);
 func_0202bfa8(p,id+9);
 func_020dd810(p,1,0);
 *(s32 *)(p)=*(s32 *)(p)-((const s16 (*)[2])data_0213a394)[func_020d9e38()>>4][1]*-90;
 *(s32 *)(p+4)+=0x1a000;
 *(s32 *)(p+8)=*(s32 *)(p+8)-data_0213a394[(func_020d9e38()>>4)*2]*-90;
 }
 for(p=*(u8 **)(data_02160a6c+0xb8);p;p=*(u8 **)(p+0x174))func_020d09d8(p);
}

void func_020d09d8(u8 *arg0) {
    u8 *r4 = *(u8 **)(arg0 + 0x128);
    *(s32 *)(r4 + 0x54) = func_0202bd60(*(u8 *)(arg0 + 0x1a0), *(u8 *)(*(u8 **)(arg0 + 0x118) + 0x54));
    func_0202bfa8(arg0, *(u8 *)(arg0 + 0x1a0));
    if (*(u8 *)(data_02160a74 + 0x1e3) != 1) {
        func_02030b7c(arg0, 1, 0x1ff);
    }
    func_020dd810(arg0, 0, 0);
}

