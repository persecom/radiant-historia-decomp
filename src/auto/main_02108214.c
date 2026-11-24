/* 38 functions from 0x021078D0 to 0x021088CC (main), found by ds-decomp. */
#include "common.h"
extern char data_021559b0[], data_021559b8[];
extern u8 data_02161198[], data_021612c8[], data_02161230[];
extern u32 data_02162834[];
typedef struct { unsigned char bit0:1; unsigned char flip:1; unsigned char visible:1; unsigned char rest:5; } RenderFlags;

extern void func_021190bc(void *, void *);
extern void func_021190d4(void *, void *);
extern s32 func_021083d8(void *, u32, u32, u32, u32);
extern void *func_02117630(void *, s32);
extern void *func_0210c518(u32, u32);
extern void func_02008e68(s32, void *, u32);
extern void func_021086f8(u8 *);
extern void func_02119000(void *, void *, void *);
extern void func_02108680(void *, s32, s32);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_0210c5dc(void *);
extern u32 data_02162860;
extern s16 data_0213a394[];

static inline s16 FX_SinIdx(s32 idx) {
    return data_0213a394[(idx >> 4) * 2];
}

static inline s16 FX_CosIdx(s32 idx) {
    return data_0213a394[(idx >> 4) * 2 + 1];
}

static inline s32 FX_Mul12(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

extern void func_02107d84(u32, u32, u32, u32);
extern void func_02107e4c(void *);
extern void func_02002128(void *, void *, void *);
extern void func_02002274(void *, void *);
extern u32 data_02155984;
extern void func_02008f74(void *, s32, u32);
extern void func_02107cf4(void);
extern u8 data_0215599c[];
extern u8 data_02155988[];
extern u8 data_0216242c[];
extern u8 data_02162360[];
extern void func_0210dae0(void *);
extern void func_0210db40(void *);

extern void func_021254a8(void);
extern u8 data_02161088[28];
extern void func_02118178(void *, s32);
extern u8 data_021610a4[28];
extern void func_0211809c(void *, s32, s32);
extern void func_02119d48(void *);
extern void func_02119c80(void *);
extern void func_02119d38(void *, void *);
extern void func_02107860(void);

void func_02108214(void) {
    func_02107e4c((data_02162860 == 0) ? data_0216242c : data_02162360);
}

extern u32 data_02155984;
extern s32 func_02108258(u32);
s32 func_02108240(void) {
    return func_02108258(data_02155984);
}

s32 func_02108258(u32 arg0) {
    u8 *p = (u8 *)arg0;
    u8 *dst;
    u32 x, z;
    func_02002128(p + 0x20, p + 0x14, p + 0x48);
    func_02002274(p + 0x48, p + 0x48);
    dst = p + 0x54;
    x = *(u32 *)(p + 0x48);
    z = *(u32 *)(p + 0x50);
    *(u32 *)dst = x;
    *(u32 *)(dst + 8) = z;
    func_02002274(dst, dst);
}

extern void func_0210c35c(void *, u32, u32, u32);
extern void func_0210a76c(void *);
extern void func_0210aa14(void *);
void func_0210829c(u32 arg0, u32 arg1, u32 arg2) {
    u8 *p = (u8 *)data_02155984;
    func_0210c35c(p + 0x98, *(u32 *)(p + 0x98), arg0, arg2);
    *(u32 *)((u8 *)data_02155984 + 0xac) = arg1;
}

extern u8 data_0215599c[];
extern u8 data_02155988[];
extern u8 data_0216242c[];
extern u8 data_02162360[];
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
void *func_021082d0(void) {
    u8 *p = (u8 *)data_02155984;
    if (p != NULL) {
        return p + 0x14;
    }
    return NULL;
}

extern u32 data_02162860;
extern void func_02107d84(u32, u32, u32, u32);
extern void func_02107e4c(void *);
extern void func_02002128(void *, void *, void *);
extern void func_02002274(void *, void *);
void *func_021082ec(void) {
    u8 *p = (u8 *)data_02155984;
    if (p != NULL) {
        return p + 0x20;
    }
    return NULL;
}

void func_02108308(u8 *arg0) {
    *(u16 *)(arg0 + 0) = 0;
    *(u16 *)(arg0 + 2) = 0;
    *(u32 *)(arg0 + 4) = 0x1000;
    *(u32 *)(arg0 + 8) = 0x20000;
    *(u32 *)(arg0 + 0xc) = 0x20000;
    *(u32 *)(arg0 + 0x10) = 0;
    arg0[0x14] &= ~1;
    arg0[0x14] &= ~2;
    arg0[0x14] |= 4;
    *(u16 *)(arg0 + 0x16) = 0;
    arg0[0x15] = 0x1f;
}

void *func_0210835c(void) {
    return func_0210c594(0x18, data_02155c3c);
}

void func_02108378(void **arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_0210a76c(arg0[4]);
    func_0210aa14(arg0[5]);
    if (arg0[0] != NULL) {
        func_0210c5dc(arg0[0]);
        arg0[0] = NULL;
    }
    if (arg0[2] != NULL) {
        func_0210c5dc(arg0[2]);
        arg0[2] = NULL;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0210853c(void) {
    u8 *p = (u8 *)func_0210c518(0x88, data_02155c3c);
    func_02008e68(0, p, 0x88);
    *(u32 *)(p + 0x58) = 0;
    *(u32 *)(p + 0x78) = 0;
    *(void **)(p + 0x7c) = (void *)func_021086f8;
    func_02108308(p + 0x5c);
    return p;
}

void func_02108594(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (arg0[0x74] != 0) {
        func_02108378(*(void ***)(arg0 + 0x58));
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_021085c8(u8 *arg0) {
    u8 *r4;
    void *r0;
    func_02117630(*(void **)(*(u8 **)(arg0 + 0x58) + 0xc), 0);
    r4 = *(u8 **)(arg0 + 0x58);
    r0 = func_02117630(*(void **)(r4 + 0xc), 0);
    func_02119000(arg0, r0, *(void **)(r4 + 4));
    func_02108680(arg0, 0, 1);
    return 1;
}

s32 func_02108620(u8 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    *(u32 *)(arg0 + 0x78) = arg4;
    *(void **)(arg0 + 0x58) = func_0210835c();
    if (func_021083d8(*(void **)(arg0 + 0x58), arg1, arg2, arg3, arg4) == 0) {
        return 0;
    }
    arg0[0x74] = 1;
    return func_021085c8(arg0);
}

void func_02108680(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    u16 *r4 = (u16 *)func_02117630(*(void **)(*(u8 **)(p + 0x58) + 0xc), arg1);
    if (arg2 != 0) {
        func_021190bc(p, r4);
    } else {
        func_021190d4(p, r4);
    }
    *(u32 *)(p + 0xc) = 1;
    *(u16 *)(p + 0x5c) = arg1;
    *(u16 *)(p + 0x72) = r4[0];
}

extern void *func_02117630(void *, s32);
extern void *func_0210c518(u32, u32);
extern void func_02008e68(s32, void *, u32);
extern void func_021086f8(u8 *);
extern void func_02119000(void *, void *, void *);
extern void func_02108680(void *, s32, s32);
u16 func_021086d4(u8 *arg0, s32 arg1) {
    u8 *p = (u8 *)func_02117630(*(void **)(*(u8 **)(arg0 + 0x58) + 0xc), arg1);
    u16 idx = *(u16 *)(p + 2);
    return **(u16 **)(*(u8 **)(p + 0xc) + (idx << 3));
}

extern void func_02107aec(void);
extern void func_0211ad90(void (*)(void));
extern void func_0211a4d4(void *,void *,void *);
extern void func_02119da4(void *);
extern void func_02119f1c(void);
extern void func_0211a178(s32,s32,s32);
extern void func_0211a3ac(s32,s32);
extern void func_0211a26c(s32,s32,s32);
extern void func_02119eb8(void *);
extern void func_0211a128(void);
extern void func_02119e4c(void);
extern void func_02119110(void *,u32);
extern void func_0211ada0(void);
void func_021086f8(u8 *p) {
void *resource;
s32 flip=0,mode=2;
u8 alpha;
s32 scale;
switch(*(u32 *)(p+0x78)) {
case 0: resource=data_021612c8; break;
case 1: resource=data_02161230; break;
case 2: resource=data_02161198; break;
}
alpha=p[0x71];
if(!((RenderFlags *)(p+0x70))->visible || !alpha) return;
scale=0x1000;
if(((RenderFlags *)(p+0x70))->flip) {
scale*=-1; mode=3; flip=1;
func_0211ad90(func_02107aec);
}
*(volatile u32 *)0x40004a4=(alpha<<16)|(mode<<6);
func_0211a4d4(resource,*(void **)(*(u8 **)(p+0x58)+0x10),*(void **)(*(u8 **)(p+0x58)+0x14));
func_02119da4(resource);
func_02119f1c();
func_0211a178(*(s32 *)(p+0x64),*(s32 *)(p+0x68),*(s32 *)(p+0x6c));
func_0211a3ac(FX_SinIdx(*(u16 *)(p+0x5e)),FX_CosIdx(*(u16 *)(p+0x5e)));
func_0211a26c(scale,0x1000,0x1000);
func_02119eb8(p);
func_0211a128();
func_02119e4c();
func_02119110(p,*(u32 *)(p+0x60)<<data_02162834[0]);
if(flip) func_0211ada0();
}

void *func_02108844(void) {
    u8 *p = (u8 *)func_0210c518(0x88, data_02155c3c);
    func_02008e68(0, p, 0x88);
    *(u32 *)(p + 0x58) = 0;
    *(u32 *)(p + 0x78) = 0;
    *(u32 *)(p + 0x7c) = 0;
    func_02108308(p + 0x5c);
    *(void **)(p + 0x58) = func_0210835c();
    return p;
}

extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_02008f74(void *, s32, u32);
extern void func_02107cf4(void);
void *func_0210889c(u32 arg0) {
    return func_0210c594(arg0, data_02155c3c);
}

extern void func_0210c5dc(void *);
void func_021088b4(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_021088c8(void) {
    while (1) {
    }
}

