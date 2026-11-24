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

