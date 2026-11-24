/* 19 functions from 0x02091CD8 to 0x02092CA0 (main), found by ds-decomp. */
#include "common.h"
typedef struct {
 u8 pad[0x53ba];
 s16 unk_ba, unk_bc, unk_be;
 u8 pad_c0[0xf];
 u8 unk_cf;
 s16 unk_d0, unk_d2;
} Unk_02092010;
extern u8 *data_0216010c;
typedef struct { s16 data[10]; } Unk_02092194;
extern const Unk_02092194 data_02140f2c;
extern const Unk_02092194 data_02140f40;
extern const s16 data_0213a394[];
extern const Unk_02092194 data_02140f18;
extern const Unk_02092194 data_02141224;
extern const Unk_02092194 data_021412ec;
extern const Unk_02092194 data_021413dc;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

extern u8 *data_02160110;
extern void func_0210c5dc(void *);
extern void *data_02155c3c;
extern void *func_0210c594(u32, void *);
extern void func_02094700(void);
extern void func_021167ac(void *, s32);
extern void func_020949f4(void);
extern void func_02094aec(void);
extern void func_02094cc0(void);
extern void func_0210d9e4(void *);
extern void func_02092cec(void);
extern void func_02096e94(void);
extern void func_020947e8(void);
extern void func_02094774(void);
extern void func_020951b4(void);
extern void func_020934ac(void);
extern void func_02092c54(void);
extern void func_02092ca0(void);
extern void func_020948ac(void);
extern void func_0210da14(void *);

extern u8 data_0214874c[4];
extern s32 func_021093f0(void *);

extern void func_02012590(const char *, const char *, ...);
void func_02092010(s32 arg0, s32 arg1) {
switch(arg0) {
case 1:
if (!(((Unk_02092010 *)data_0216010c)->unk_d0 & 8)) {
((Unk_02092010 *)data_0216010c)->unk_d0 |= 1;
((Unk_02092010 *)data_0216010c)->unk_d0 |= 8;
((Unk_02092010 *)data_0216010c)->unk_d0 |= 0x10;
((Unk_02092010 *)data_0216010c)->unk_d0 |= 0x40;
*(s16 *)(data_0216010c+0x53d2)=0;
*(s16 *)(data_0216010c+0x53bc)=0x104;
*(s16 *)(data_0216010c+0x53ba)=arg1;
((Unk_02092010 *)data_0216010c)->unk_d0 &= ~0x20;
} else {
((Unk_02092010 *)data_0216010c)->unk_d0 |= 0x20;
data_0216010c[0x53cf]=arg1;
}
break;
case 2:
*(s16 *)(data_0216010c+0x53be)=*(s16 *)(data_0216010c+0x53bc);
((Unk_02092010 *)data_0216010c)->unk_d0 |= 1;
((Unk_02092010 *)data_0216010c)->unk_d0 |= 8;
((Unk_02092010 *)data_0216010c)->unk_d0 &= ~0x10;
((Unk_02092010 *)data_0216010c)->unk_d0 &= ~0x40;
*(s16 *)(data_0216010c+0x53d2)=0;
break;
case 3:
((Unk_02092010 *)data_0216010c)->unk_d0 &= ~1;
*(s16 *)(data_0216010c+0x53d2)=0;
break;
}
}

void func_02092190(void) {
}

void func_02092194(s32 id,s32 x,s32 y,s32 w,s16 h,s16 tw,s16 th,s16 z,s32 edge,volatile s16 mid){
Unk_02092194 buf=data_02140f2c;
func_020a3bbc(id);
buf.data[8]=edge;
buf.data[2]=0;buf.data[1]=0;buf.data[3]=buf.data[8];buf.data[4]=th;buf.data[9]=h;
buf.data[5]=x;buf.data[6]=y;buf.data[7]=z;
func_021098ac(&buf);
buf.data[8]=(s16)(-2*edge+w);
buf.data[1]=mid;buf.data[2]=0;buf.data[3]=edge;buf.data[4]=th;buf.data[9]=h;
buf.data[5]=x+edge;buf.data[6]=y;buf.data[7]=z;
func_021098ac(&buf);
buf.data[8]=edge;
buf.data[2]=0;buf.data[1]=(s16)tw-edge;buf.data[3]=buf.data[8];buf.data[4]=th;buf.data[9]=h;
buf.data[5]=x+w-edge;buf.data[6]=y;buf.data[7]=z;
func_021098ac(&buf);
}

void func_020922bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7) {
    func_02092194(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, 5, 5);
}

void func_020922f8(s32 id,s32 mode,s32 x,s32 y,s16 w,s16 h,s16 tw,s16 th,s16 bx,s16 cw,s16 by,s16 ch,s16 z) {
Unk_02092194 a=data_02141224;
func_020a3bbc(id);
a.data[7]=z;
if(mode!=1){
a.data[8]=bx;a.data[9]=by;
a.data[1]=a.data[2]=0;a.data[3]=a.data[8];a.data[4]=a.data[9];a.data[5]=x;a.data[6]=y;func_021098ac(&a);
a.data[9]=h-by*2;a.data[8]=bx;a.data[1]=0;a.data[2]=ch;a.data[3]=cw;a.data[4]=ch;a.data[5]=x;a.data[6]=y+by;func_021098ac(&a);
a.data[8]=bx;a.data[9]=by;a.data[1]=0;a.data[2]=th-by;a.data[3]=a.data[8];a.data[4]=a.data[9];a.data[5]=x;a.data[6]=y+h-by;func_021098ac(&a);
}
a.data[1]=cw;a.data[2]=ch;a.data[3]=cw;a.data[4]=ch;a.data[8]=w-bx*2;a.data[9]=h;a.data[5]=x+bx;
if(mode==1)a.data[5]=x;
a.data[6]=y;func_021098ac(&a);
if(mode!=2){
mode=x+w-bx;
x=-bx;
a.data[1]=0;a.data[2]=0;a.data[3]=x;a.data[8]=bx;a.data[4]=th;a.data[9]=by;a.data[5]=mode;a.data[6]=y;func_021098ac(&a);
a.data[3]=x;a.data[1]=0;a.data[2]=th-by;a.data[8]=bx;a.data[4]=by;a.data[9]=by;a.data[5]=mode;a.data[6]=y+h-by;func_021098ac(&a);
a.data[1]=0;a.data[2]=ch;a.data[3]=cw;a.data[4]=ch;a.data[8]=bx;a.data[9]=h-by*2;a.data[5]=mode;a.data[6]=y+by;func_021098ac(&a);
}
}

void func_0209250c(s32 id, s32 mode, s16 x, s16 y, s16 w, s16 h, s16 tw, s16 th, s16 bx, s16 cw, s16 by, s16 ch, s16 z) {
Unk_02092194 b=data_02140f18;
s16 i; s16 px;
func_020a3bbc(id);
b.data[7]=z;
for(i=0;i<2;i++){
b.data[1]=0;b.data[2]=i*(th-bx);
b.data[3]=b.data[8]=bx;b.data[4]=b.data[9]=by;
b.data[5]=x;b.data[6]=y+i*(h-by);func_021098ac(&b);
b.data[1]=tw-bx;b.data[2]=i*(th-bx);
b.data[3]=b.data[8]=bx;b.data[4]=b.data[9]=by;
b.data[5]=x+w-bx;b.data[6]=y+i*(h-by);func_021098ac(&b);
b.data[1]=i*(tw-bx);b.data[2]=ch;
b.data[3]=bx;b.data[4]=by;b.data[8]=bx;b.data[9]=h-by*2;
b.data[5]=x+i*(w-bx);b.data[6]=y+by;func_021098ac(&b);
}
px=x+bx;
if(mode==0){
b.data[1]=bx;b.data[2]=0;b.data[3]=cw;b.data[4]=th;
b.data[5]=px;b.data[6]=y;b.data[8]=w-bx*2;b.data[9]=h;func_021098ac(&b);
}else{
b.data[1]=cw;b.data[2]=0;b.data[3]=bx;b.data[4]=by;
b.data[5]=px;b.data[6]=y;b.data[8]=w-bx*2;b.data[9]=by;func_021098ac(&b);
if(w>bx*2&&h>by*2){
b.data[1]=b.data[3]=cw;b.data[2]=b.data[4]=ch;
b.data[5]=px;b.data[6]=y+by;b.data[8]=w-bx*2;b.data[9]=h-by*2;func_021098ac(&b);
}
b.data[1]=cw;b.data[2]=th-by;b.data[3]=bx;b.data[4]=by;
b.data[5]=px;b.data[6]=y+h-by;b.data[8]=w-bx*2;b.data[9]=by;func_021098ac(&b);
}
}

void func_02092814(s32 arg0, s32 arg1, s16 x, s16 y, s16 w, s16 h, s16 z) {
    Unk_02092194 s1 = data_021412ec;
    Unk_02092194 s0 = data_021413dc;

    func_020a3bbc(arg0);
    s1.data[7] = z;
    s0.data[7] = z;
    if (arg1 != 2) {
        s1.data[6] = y;
        s1.data[5] = x + w;
        func_021098ac(&s1);

        s0.data[5] = x + w;
        s0.data[6] = y + 8;
        s0.data[8] = 8;
        s0.data[9] = h - 0x10;
        func_021098ac(&s0);

        s1.data[6] = (y + h) - 8;
        s1.data[4] = -8;
        func_021098ac(&s1);
    }
    if (arg1 != 0) {
        s1.data[3] = 8;
        s1.data[4] = 8;
        s1.data[5] = x;
        s1.data[6] = y;
        func_021098ac(&s1);

        s0.data[5] = x;
        s0.data[6] = y + 8;
        s0.data[8] = 8;
        s0.data[9] = h - 0x10;
        func_021098ac(&s0);

        s1.data[6] = (y + h) - 8;
        s1.data[4] = -8;
        func_021098ac(&s1);
    }
    s0.data[5] = x + 8;
    s0.data[6] = y;
    s0.data[8] = w - 8;
    s0.data[9] = h;
    if (arg1 == 0) {
        s0.data[5] = x;
        s0.data[8] = w;
    }
    func_021098ac(&s0);
}

s32 func_02092994(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    func_02012590(r4, (const char *)data_0214874c, &arg1);
    return arg1;
}

const char *func_020929f4(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (arg1 == 1 && !func_021093f0(arg0)) {
        return NULL;
    }
    if (*r4 == '\0') {
        return NULL;
    }
    return r4;
}

extern u8 data_02148750[4];
extern s32 func_020123f0(const char *, const char *);
extern s32 func_02109444(void *);
BOOL func_02092a28(const char *arg0, const char *arg1) {
    return func_020123f0(arg0, arg1) == 0;
}

const char *func_02092a40(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        r4 = arg1;
    }
    return r4;
}

s32 func_02092a70(const char *arg0, s32 arg1) {
    if (*arg0 == '\0') {
        return arg1;
    }
    func_02012590(arg0, (const char *)data_02148750, &arg1);
    return arg1;
}

s32 func_02092ab0(u8 *arg0, s32 arg1) {
    s32 val = func_02092994(arg0, 0);
    while (val != arg1) {
        if (func_02109444(arg0)) {
            val = func_02092994(arg0, 0);
        } else {
            return -1;
        }
    }
    return val;
}

void func_02092b04(void) {
    u8 *p;
    if (data_02160110 != NULL) {
        return;
    }
    p = func_0210c594(0x10c, data_02155c3c);
    data_02160110 = p;
    func_02094700();
    func_021167ac(p + 0x84, 0x3c);
    func_021167ac(p + 0x90, 0x18);
    func_021167ac(p + 0x9c, 0);
    func_020949f4();
    *(u32 *)(p + 0x6c) = 0;
    *(u16 *)(p + 0x70) = 0;
    *(s16 *)(p + 0xce) = -1;
    func_02094aec();
    *(void **)p = func_02094cc0;
    *(u32 *)(p + 4) = 0x3fa;
    func_0210d9e4(p);
    func_02092cec();
    func_02096e94();
    func_020947e8();
}

void func_02092bac(void) {
    if (data_02160110 == NULL) {
        return;
    }
    func_02094774();
    func_020951b4();
    if (*(void **)(data_02160110 + 0x104) != NULL) {
        func_020934ac();
    }
    func_02092c54();
    func_02092ca0();
    func_020948ac();
    if (data_02160110 != NULL) {
        func_0210da14(data_02160110);
        if (data_02160110 != NULL) {
            func_0210c5dc(data_02160110);
            data_02160110 = NULL;
        }
    }
}

extern void *data_02155c3c;
extern void *func_0210c594(u32, void *);
extern void func_02094700(void);
extern void func_021167ac(void *, s32);
extern void func_020949f4(void);
extern void func_02094aec(void);
extern void func_02094cc0(void);
extern void func_0210d9e4(void *);
extern void func_02092cec(void);
extern void func_02096e94(void);
extern void func_020947e8(void);
extern void func_02094774(void);
extern void func_020951b4(void);
extern void func_020934ac(void);
extern void func_02092c54(void);
extern void func_02092ca0(void);
extern void func_020948ac(void);
extern void func_0210da14(void *);
u32 func_02092c1c(void) {
    if (data_02160110 != NULL) {
        return *(u32 *)(data_02160110 + 0x84);
    }
    return 0;
}

u32 func_02092c38(void) {
    if (data_02160110 != NULL) {
        return *(u32 *)(data_02160110 + 0x90);
    }
    return 0;
}

extern u8 *data_02160110;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_02092c54(void) {
    u8 *base = data_02160110;
    void *node = *(void **)(base + 0x84);
    while (node != NULL) {
        func_021168f8(base + 0x84, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        base = data_02160110;
        node = *(void **)(base + 0x84);
    }
}

