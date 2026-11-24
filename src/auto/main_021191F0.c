/* 15 functions from 0x021191F0 to 0x0211A178 (main), found by ds-decomp. */
#include "common.h"
static inline s32 palette_021194cc(u8 *p) { return (*(volatile u16 *)(p+0x3c)&0xf000)>>12; }
static inline void attr_021194cc(u8 *p,s32 palette,u32 mode) { u32 attr; u16 word; word=*(u16 *)(p+0x3c); attr=*(u32 *)(p+0x38); attr=(attr&~0xc00)|(mode<<10); word=(word&~0xf000)|(palette<<12); *(u32 *)(p+0x38)=attr; *(u16 *)(p+0x3c)=word; }
typedef struct {
    u16 f0;
    u16 f2;
    u32 f4;
    u32 f8;
    u32 fc;
} Struct0216f234;

typedef struct {
    u16 f0;
    u16 f2;
    u16 f4;
    u16 f6;
} Struct0216f2c4;

typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
} Struct16;

typedef struct {
    u32 f0[4];
    u8 f10[0x10];
} Struct0216f9c4;

extern Struct0216f234 data_0216f234;
extern Struct0216f2c4 data_0216f2c4[];
extern Struct0216f9c4 data_0216f9c4[];
extern u8 data_0216f6c4[];
extern u8 data_0216f3c4[];
extern u8 data_0216f3d4[];
extern u8 data_02155eb0[];
extern u8 data_0216f3d8[];
extern u32 data_02155eb8[];
extern void func_02008e68(s32, void *, s32);
extern void func_02008df0(u32, void *, u32);
typedef void (*Cb4_02119448)(void *, void *, s32, void *);
typedef void (*Cb5_02119694)(void *, void *, s32, s32, void *);

extern void func_0211c4ec(void *);
extern void func_02119150(void);
extern void func_0211c738(void);
extern void *func_0211ab38(void);
extern void func_0211ab04(u32);
extern void func_0211ab28(void *);
extern void func_0211ab14(void);
extern void func_02119b34(u32);
extern void func_02119334(u8 *, s32);
extern void func_02119448();
extern void func_021194cc(u8 *,s32,s32);
typedef struct { u32 low:10; u32 mode:2; u32 palette:4; u32 high:16; } Bits021194cc;
extern void *func_0211a4cc(u32);
extern u32 func_02118588(void *,u16);
extern void func_02119694();

static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    func_02008e68((s32)data, dest, (s32)size);
}

static inline s32 is_valid_id(s32 id) {
    if (id != -1) {
        return 1;
    }
    return 0;
}

void func_021191f0(void) {
    Struct0216f2c4 *entry;
    u16 f2;
    u16 f0;
    u32 *src;
    u32 (*tbl)[8];
    u16 k;
    s32 i;
    s32 idx;
    s32 ok;
    u8 *fill;

    entry = &data_0216f2c4[(u16)data_0216f234.fc];
    ok = (entry->f4 == 1 || entry->f4 == 2);
    if (!ok) {
        return;
    }

    f2 = entry->f2;
    f0 = data_0216f234.f0;
    if (f0 < 0x1f) {
        data_0216f234.f0 = f0 + 1;
    }
    entry->f0 = f0;
    fill = (u8 *)&data_0216f9c4[f0];
    func_02008e68(-1, fill + 0x10, 0x10);

    idx = data_0216f234.fc;
    if (data_0216f234.f4 == 0) {
        src = (u32 *)(data_0216f6c4 + idx * 0x18);
    } else {
        *(volatile u32 *)(data_02155eb0 + 0x18) = *(volatile u32 *)(data_0216f3d4 + idx * 0x18);
        *(volatile u32 *)(data_02155eb0 + 0x1c) = *(volatile u32 *)(data_0216f3d8 + idx * 0x18);
        src = data_02155eb8;
    }

    tbl = (u32 (*)[8])data_0216f9c4;
    k = data_0216f2c4[(u16)idx].f0;
    tbl[k][0] = src[0];
    tbl[k][1] = src[1];
    i = (u16)data_0216f234.fc;
    tbl[k][2] = src[2];
    tbl[k][3] = src[3];

    while (i >= 0) {
        if (f2 != data_0216f2c4[i].f2) {
            return;
        }
        data_0216f2c4[i].f4 = 3;
        data_0216f2c4[i].f0 = f0;
        i--;
    }
}

void func_02119334(u8 *arg0, s32 arg1) {
    u8 *sub = *(u8 **)((u8 *)data_0216f234.f8 + 0x74);
    void *ctx;
    if (*(s32 (**)(s32, void *, void *))(sub + 0x34) != NULL) {
        if (data_0216f234.f4 != 0) {
            s32 idx = data_0216f234.fc;
            *(volatile u32 *)(data_02155eb0 + 0x18) = *(volatile u32 *)(data_0216f3d4 + idx * 0x18);
            *(volatile u32 *)(data_02155eb0 + 0x1c) = *(volatile u32 *)(data_0216f3d8 + idx * 0x18);
            ctx = data_02155eb8;
        } else {
            ctx = data_0216f3c4 + data_0216f234.fc * 0x18;
        }
        if ((*(s32 (**)(s32, void *, void *))(sub + 0x34))(arg1, ctx, sub) == 0) {
            *(u32 *)(arg0 + 0x30) = 0;
            return;
        }
        *(u32 *)(arg0 + 0x30) = 1;
    }
    if (*(Cb4_02119448 *)(sub + 0x38) == NULL) return;
    if (data_0216f234.f4 != 0) {
        s32 idx = data_0216f234.fc;
        *(volatile u32 *)(data_02155eb0 + 0x18) = *(volatile u32 *)(data_0216f3d4 + idx * 0x18);
        *(volatile u32 *)(data_02155eb0 + 0x1c) = *(volatile u32 *)(data_0216f3d8 + idx * 0x18);
        ctx = data_02155eb8;
    } else {
        ctx = data_0216f3c4 + data_0216f234.fc * 0x18;
    }
    (*(Cb4_02119448 *)(sub + 0x38))((void *)data_0216f234.f8, sub, arg1, ctx);
}

void func_02119448(void *arg0, s32 arg1) {
    u8 *p = (u8 *)data_0216f234.f8;
    u8 *sub = *(u8 **)(p + 0x74);
    void *ctx;
    if (*(Cb4_02119448 *)(sub + 0x3c) == NULL) {
        return;
    }
    if (data_0216f234.f4 != 0) {
        s32 idx = data_0216f234.fc;
        *(volatile u32 *)(data_02155eb0 + 0x18) = *(volatile u32 *)(data_0216f3d4 + idx * 0x18);
        *(volatile u32 *)(data_02155eb0 + 0x1c) = *(volatile u32 *)(data_0216f3d8 + idx * 0x18);
        ctx = data_02155eb8;
    } else {
        ctx = data_0216f3c4 + data_0216f234.fc * 0x18;
    }
    (*(Cb4_02119448 *)(sub + 0x3c))(p, sub, arg1, ctx);
}

void func_021194cc(u8 *arg0,s32 arg1,s32 arg2) {
void *v=func_0211a4cc(data_0216f234.f8);
u8 *p,*sub;
void *ctx;
if(v) ((Bits021194cc *)(arg0+0x3c))->palette=func_02118588(v,(u16)((*(u16 *)(arg0+0x3c)&0xf000)>>12));
p=(u8 *)data_0216f234.f8;
if(*(volatile u32 *)(p+0x84)){
if(*(u32 *)(p+0x84)&1) ((Bits021194cc *)(arg0+0x3c))->mode=*(u16 *)(p+0x88);
p=(u8 *)data_0216f234.f8;
if(*(u32 *)(p+0x84)&2) ((Bits021194cc *)(arg0+0x3c))->palette=*(u16 *)(p+0x8a);
p=(u8 *)data_0216f234.f8;
if(*(u32 *)(p+0x84)&0x10) ((Bits021194cc *)(arg0+0x3c))->palette+=*(u16 *)(p+0x94);
p=(u8 *)data_0216f234.f8;
if(*(u32 *)(p+0x84)&4) {
if(*(u32 *)(p+0x90)) *(u32 *)(arg0+0x38)|=0x1000;
else *(u32 *)(arg0+0x38)&=~0x1000;
}
p=(u8 *)data_0216f234.f8;
if(*(u32 *)(p+0x84)&8) {
attr_021194cc(arg0,*(u32 *)(p+0x8c),palette_021194cc(arg0));
}
}
p=(u8 *)data_0216f234.f8;
sub=*(u8 **)(p+0x74);
if(*(Cb5_02119694 *)(sub+0x40)==0)return;
if(data_0216f234.f4==0) ctx=data_0216f3c4+data_0216f234.fc*0x18;
else {
s32 idx=data_0216f234.fc;
*(volatile u32 *)(data_02155eb0+0x18)=*(volatile u32 *)(data_0216f3d4+idx*0x18);
*(volatile u32 *)(data_02155eb0+0x1c)=*(volatile u32 *)(data_0216f3d8+idx*0x18);
ctx=data_02155eb8;
}
(*(Cb5_02119694 *)(sub+0x40))(p,sub,arg1,arg2,ctx);
}

void func_02119694(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)data_0216f234.f8;
    u8 *sub = *(u8 **)(p + 0x74);
    void *ctx;
    if (*(Cb5_02119694 *)(sub + 0x44) == NULL) {
        return;
    }
    if (data_0216f234.f4 != 0) {
        s32 idx = *(volatile u32 *)&data_0216f234.fc;
        *(volatile u32 *)(data_02155eb0 + 0x18) = *(volatile u32 *)(data_0216f3d4 + idx * 0x18);
        *(volatile u32 *)(data_02155eb0 + 0x1c) = *(volatile u32 *)(data_0216f3d8 + idx * 0x18);
        ctx = data_02155eb8;
    } else {
        ctx = data_0216f3c4 + *(volatile u32 *)&data_0216f234.fc * 0x18;
    }
    (*(Cb5_02119694 *)(sub + 0x44))(p, sub, arg1, arg2, ctx);
}

extern s16 data_0213a394[];
extern void func_02119728(u32);
extern void func_02119f1c(void);
extern s32 func_0211c5d4(u32);
extern s32 func_0211c5e8(u32);
extern void func_0211a178(s32, s32, s32);
extern void func_0211a3ac(s32, s32);
extern void func_0211a26c(s32, s32, s32);
extern void func_0211a128();
void func_02119b34(u32 arg0) {
    u8 *p = (u8 *)arg0;
    u32 f30 = *(u32 *)(p + 0x30);

    if (*(u16 *)(p + 0x4e) == 0) {
        s32 f38 = *(s32 *)(p + 0x38);
        switch (f38 != -1) {
        default:
            *(s32 *)(data_02155eb0 + 4) = f38;
            func_02119728(f30);
            *(s32 *)(data_02155eb0 + 4) = -1;
            return;
        case 0:
            func_02119728(f30);
            return;
        }
    }

    func_02119f1c();

    if (*(u16 *)(p + 0x4e) & 8) {
        s32 x;
        s32 y;
        y = *(s16 *)(p + 0x4a);
        x = *(s16 *)(p + 0x48);
        if (func_0211c5d4(data_0216f234.f8) != 0) {
            x = -x;
        }
        if (func_0211c5e8(data_0216f234.f8) != 0) {
            y = -y;
        }
        func_0211a178(x << 12, y << 12, 0);
    }

    if (*(u16 *)(p + 0x4e) & 4) {
        s32 idx = ((s32)*(u16 *)(p + 0x4c) >> 4) * 2;
        func_0211a3ac(data_0213a394[idx], data_0213a394[idx + 1]);
    }

    if (*(u16 *)(p + 0x4e) & 2) {
        func_0211a26c(*(s32 *)(p + 0x40), *(s32 *)(p + 0x44), 0x1000);
    }

    {
        s32 f38 = *(s32 *)(p + 0x38);
        switch (f38 != -1) {
        default:
            *(s32 *)(data_02155eb0 + 4) = f38;
            func_02119728(f30);
            *(s32 *)(data_02155eb0 + 4) = -1;
            break;
        case 0:
            func_02119728(f30);
            break;
        }
    }

    func_0211a128(1);
}

void func_02119c80(void *arg0) {
    struct {
        u8 pad[0x70];
        u32 f70;
        u32 f74;
        u32 f78;
        u32 f7c;
        u32 f80;
        u32 f84;
        u16 f88;
        u16 f8a;
        u32 f8c;
        u32 f90;
        u16 f94;
    } *p = arg0;
    s32 i;
    func_0211c4ec(arg0);
    p->f70 = 0;
    p->f74 = 0;
    p->f78 = 0;
    p->f7c = 0;
    p->f80 = 0;
    p->f84 = 0;
    p->f88 = 0;
    p->f8a = 0;
    p->f8c = 0;
    p->f90 = 0;
    p->f94 = 0;
    data_0216f234.fc = 0;
    *(u16 *)data_02155eb0 = 0xfffe;
    for (i = 0; i < 0x20; i++) {
        func_02008e68(-1, data_0216f9c4[i].f10, 0x10);
    }
    data_0216f234.f0 = 0;
    data_0216f234.f2 = 0;
    func_02008e68(0, data_0216f2c4, 0x100);
    data_0216f234.f4 = 0;
}

void func_02119d38(void *arg0, void **arg1) {
    arg1[0xc] = *(void **)((u8 *)arg0 + 0x70);
    *(void **)((u8 *)arg0 + 0x70) = arg1;
}

void func_02119d48(u8 *arg0) {
    func_02008df0(0, arg0, 0x48);
    *(s32 *)(arg0 + 0x10) = 1;
    *(s32 *)(arg0 + 0x14) = 3;
    *(void **)(arg0 + 0x18) = func_02119334;
    *(void **)(arg0 + 0x1c) = func_02119448;
    *(void **)(arg0 + 0x20) = func_021194cc;
    *(void **)(arg0 + 0x24) = func_02119694;
}

void func_02119da4(u32 arg0) {
    s32 i;
    data_0216f234.f8 = arg0;
    *(u16 *)data_02155eb0 = 0xfffe;
    data_0216f234.fc = 0;
    for (i = 0; i < (s32)data_0216f234.f0; i++) {
        MI_CpuFill32(data_0216f9c4[i].f10, 0xffffffff, 0x10);
    }
    data_0216f234.f0 = 0;
    data_0216f234.f2 = 0;
    MI_CpuFill32(&data_0216f2c4[0], 0, 0x100);
    *(u32 *)&data_0216f2c4[0] = 0;
    *(u32 *)&data_0216f2c4[2] = 0;
    func_02119150();
}

void func_02119e4c(void) {
    u32 flags;
    u8 *p;
    *(u32 *)0x4000448 = 1;
    p = (u8 *)data_0216f234.f8;
    flags = *(u32 *)(p + 0x7c);
    if (flags == 0) {
        goto done;
    }
    if (flags & 1) {
        data_0216f234.f4 = 0;
    }
    if (flags & 2) {
        *(u32 *)(p + 0x74) = 0;
        func_0211c738();
    }
    *(u32 *)((u8 *)data_0216f234.f8 + 0x7c) = 0;
done:
    data_0216f234.f8 = 0;
}

void func_02119eb8(u32 arg0) {
    void *x;
    if (*(void **)((u8 *)data_0216f234.f8 + 0x80) != NULL) {
        x = func_0211ab38();
        func_0211ab04(1);
        func_0211ab28(*(void **)((u8 *)data_0216f234.f8 + 0x80));
        func_02119b34(arg0);
        func_0211ab04(0);
        func_0211ab28(x);
        func_0211ab14();
        return;
    }
    func_02119b34(arg0);
}

void func_0211a128(void) {
    if ((*(volatile s32 *)&data_0216f234.fc <= 0) != 0) {
        return;
    }
    data_0216f234.fc--;
    if (*(u16 *)data_02155eb0 > (s32)data_0216f234.fc) {
        *(u16 *)data_02155eb0 = 0xfffe;
    }
}

