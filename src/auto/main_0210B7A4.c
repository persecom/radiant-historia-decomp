/* 29 functions from 0x0210B7A4 to 0x0210C6E0 (main), found by ds-decomp. */
#include "common.h"
extern const s16 data_0213a394[];
extern const u32 data_02144b70[];
extern void func_020010d8(void *);
extern void func_02000da0(void *, s32, s32);
extern void func_02000dbc(void *, s32, s32);
extern void func_02000dd8(void *, s32, s32);
extern void func_02000df0(void *, void *, s32, s32);
extern void func_02000f44(const void *, const void *, void *);

typedef struct { u16 active:1; u16 reserved:7; u16 removed:1; u16 rest:7; } ObjectFlags;
extern u8 data_02162618[];
extern u8 data_02162624[];
extern void func_02116844(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210b4cc(void *);
extern void func_0210c5dc(void *);
extern void func_0210b860(void **);
extern void func_0210db10(void *, void *, u32);
extern void *data_02162638;
extern u32 data_02155c2c;
extern u32 data_02162648[];
extern u8 data_02144b94[];
extern u32 func_02007008(u32);
extern u32 func_02006ff4(u32);
extern u32 func_020071c8(u32, u32, u32);
extern u32 func_02116fd0(u32, u32, u32);
extern void func_0211748c(u32 *, u32, u32);
extern void *func_0210c518(u32, s32);
extern void func_02002c2c(void);
extern void func_02002dc0(void);
extern void func_02120800(void);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern void func_0210be4c(void);
extern void func_02109af8(void);
extern void func_0210ebd4(void);
extern void func_0210d86c(void);
extern void func_021097f4(void);
extern void func_0210f550(void);
extern void func_0210fcd4(u32);
extern void func_0210e694(void);
extern void func_02107d20(void);
extern void func_0210b750(u32);
extern void func_0210e67c(void);
extern void func_0210cf10(void);
extern void func_0210e7ac(void);
extern void func_02011e20(u16 *, void *, u32, u32);
extern void func_02002128(void *, void *, void *);
extern void func_02002194(void *, void *, void *);
extern u32 data_02162834[];
extern u32 data_0216281c;

static inline void *GetResDataByIdx(u8 *dict, u32 idx) {
    if (dict && idx < dict[1]) {
        u8 *p = dict + *(u16 *)(dict + 6);
        return (p + 4) + *(u16 *)p * idx;
    }
    return NULL;
}

static inline void *GetMdlByIdx(u8 *res, u32 idx) {
    if (res) {
        u32 *entry = (u32 *)GetResDataByIdx(res + 8, idx);
        if (entry) {
            return res + *entry;
        }
    }
    return NULL;
}

void func_0210b7a4(void) {
 u8 *p = *(u8 **)data_02162618;
 u8 *cur = NULL;
 u8 *next;
 while (p != NULL) {
  u8 *obj = *(u8 **)p;
  next = p ? *(u8 **)(p + *(u16 *)(data_02162618+10)+4) : *(u8 **)data_02162618;
  if (((ObjectFlags *)(obj+0x1a4))->removed) func_0210b860((void **)p);
  p=next;
 }
 goto advance;
 while(cur) {
  p=*(u8 **)cur;
  if (((ObjectFlags *)(p+0x1a4))->active) {
   void (*cb)(void *)=*(void (**)(void *))(p+0x1a8);
   if(cb) cb(p);
  }
 advance:
  cur = cur ? *(u8 **)(cur+*(u16 *)(data_02162618+10)+4) : *(u8 **)data_02162618;
 }
}

void func_0210b848(s32 arg0) {
    func_02116844(data_02162618, arg0);
}

void func_0210b860(void **arg0) {
    func_021168f8(data_02162618, arg0);
    func_0210b4cc(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_0210b894(void) {
 void *p=*(void **)data_02162618;
 while(p!=NULL) {
 void *q;
 if(p!=NULL) q=*(void **)((u8 *)p+*(u16 *)(data_02162618+0xa)+4);
 else q=*(void **)data_02162618;
 func_0210b860(p);
 p=q;
 }
 if(*(void **)(data_02162618+0xc)!=NULL) {
 *(void **)(data_02162618+0xc)=NULL;
 func_0210db10(data_02162624,data_02162618,0);
 }
}

extern u32 data_02155bac;
extern void *func_02109b14(u32, u32 *);
extern void func_02120828(void *);
extern void func_0210e3dc(void);
extern void func_02108ffc(void);
extern u8 *func_02120f94(void *);
extern void *func_02120fa4(void *);
extern void func_0211d520(void *, void *);
#pragma optimization_level 0
void func_0210b8f8(u8 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    u8 *p = arg0;
    u32 sp4;
    u32 sp0;
    void *r6 = NULL;
    void *r5 = NULL;

    data_02155bac = 0;
    r5 = func_02109b14(arg2, &sp0);
    data_02155bac = 1;
    func_02120828(r5);
    func_0210e3dc();
    func_02108ffc();

    data_02155bac = 0;
    r6 = func_02109b14(arg1, &sp4);
    data_02155bac = 1;
    func_02120828(r6);
    func_0210e3dc();
    func_02108ffc();

    *(void **)(p + 0x54) = GetMdlByIdx(func_02120f94(r6), arg3);

    *(void **)(p + 0x58) = func_02120fa4(r5);
    if (*(void **)(p + 0x58)) {
        func_0211d520(func_02120f94(r6), *(void **)(p + 0x58));
    }
    *(void **)(p + 0x118) = r6;
    *(u32 *)(p + 0x11c) = 0;
    if (r5) {
        func_0210c5dc(r5);
        r5 = NULL;
    }
}

extern s32 data_02155c3c;
extern void *func_0210c594(u32, s32);
extern void func_02009354(void *, void *);
#pragma optimization_level 4
void func_0210ba48(u8 *p, u32 a, u32 b, u32 index) {
    u32 x;
    u32 y;
    struct {
        u32 compType : 8;
        u32 destSize : 24;
    } hdr;
    void *first;
    void *tmp;
    void *second;
    void *uncomp;
    void *res;
    u8 *base;
    u8 *dict;
    u8 *entry;
    u8 *value;

    tmp = func_0210c594(0x14, data_02155c3c);
    data_02155bac = 0;
    first = func_02109b14(a, &x);
    second = func_02109b14(b, &y);
    data_02155bac = 1;

    hdr.destSize = *(u32 *)second >> 8;
    uncomp = func_0210c594(hdr.destSize, data_02155c3c);
    func_02009354(second, uncomp);
    func_02108ffc();
    if (second) {
        func_0210c5dc(second);
    }

    func_02120828(first);
    func_0210e3dc();
    func_02108ffc();
    func_02120828(uncomp);
    func_0210e3dc();
    func_02108ffc();

    base = func_02120f94(first);
    if (base) {
        dict = base + 8;
        if (dict && index < base[9]) {
            entry = dict + *(u16 *)(base + 14);
            entry = entry + 4 + *(u16 *)entry * index;
        } else {
            entry = 0;
        }
        if (entry) {
            value = base + *(u32 *)entry;
            goto found;
        }
    }
    value = 0;
found:
    *(void **)(p + 0x54) = value;
    res = func_02120fa4(uncomp);
    *(void **)(p + 0x58) = res;
    if (res) {
        func_0211d520(func_02120f94(first), res);
    }
    *(void **)(p + 0x118) = first;
    *(u32 *)(p + 0x11c) = 0;
    if (uncomp) {
        func_0210c5dc(uncomp);
    }
    if (tmp) {
        func_0210c5dc(tmp);
    }
}
void *func_02109b14(u32, u32 *);
u8 *func_02120f94(void *);
void *func_02120fa4(void *);
void func_0210bbc8(u8 *p,u32 a,u32 b,u32 index){
u32 x,y; void *first,*second,*res; u8 *base,*dict,*entry,*value;
first=func_02109b14(a,&x);
second=func_02109b14(b,&y);
func_02120828(first);func_0210e3dc();
if(!func_02109f84(second)) func_0210f2a8(b,second);
base=func_02120f94(first);
if(base){
dict=base+8;
if(dict && index<base[9]){
entry=dict+*(u16 *)(base+14);
entry=entry+4+*(u16 *)entry*index;
}else entry=0;
if(entry) {value=base+*(u32 *)entry; goto found;}
}
value=0;
found:
*(void **)(p+0x54)=value;
res=func_02120fa4(second);
*(void **)(p+0x58)=res;
if(res) func_0211d520(func_02120f94(first),res);
*(void **)(p+0x118)=first;
*(u32 *)(p+0x11c)=0;
if(second) func_0210c5dc(second);
}

void func_0210bcc8(u8 *p) {
u32 a[9], b[9], c[9], d[9];
func_020010d8(p+0xa0);
*(u32 *)(p+0xa0)=*(u32 *)(p+0x78); *(u32 *)(p+0xb0)=*(u32 *)(p+0x7c); *(u32 *)(p+0xc0)=*(u32 *)(p+0x80);

if(*(u32 *)(p+0xf8)) {
func_02000da0(b,data_0213a394[(*(u16 *)(p+0x98)>>4)*2],data_0213a394[(*(u16 *)(p+0x98)>>4)*2+1]);
func_02000dbc(c,data_0213a394[(*(u16 *)(p+0x94)>>4)*2],data_0213a394[(*(u16 *)(p+0x94)>>4)*2+1]);
func_02000dd8(d,data_0213a394[(*(u16 *)(p+0x9c)>>4)*2],data_0213a394[(*(u16 *)(p+0x9c)>>4)*2+1]);
func_02000df0(a,p+0x84,data_0213a394[(*(u16 *)(p+0x90)>>4)*2],data_0213a394[(*(u16 *)(p+0x90)>>4)*2+1]);
func_02000f44(b,c,b); func_02000f44(b,d,b); func_02000f44(b,a,b);
func_02000f44(data_02144b70,b,p+0xd0);
func_02000f44(p+0xa0,p+0xd0,p+0xa0);
} else func_02000f44(p+0xa0,p+0xd0,p+0xa0);
*(u32 *)(p+0xc4)=*(u32 *)(p+0x6c); *(u32 *)(p+0xc8)=*(u32 *)(p+0x70); *(u32 *)(p+0xcc)=*(u32 *)(p+0x74);
*(u32 *)(p+0xf4)=0;
}

void func_02008e68(u32, void *, u32);
void func_0210be4c(void) {
    func_02006e3c();
    func_02002594();
    func_02002598();
    func_0210e7d0();
    func_0200d7c0(-1);
    func_0210c6e0();
    func_02005168(0x1ff);
    func_02008e68(0, (void *)0x6800000, 0xa4000);
    func_0200558c();
    func_02008e68(0xc0, (void *)0x7000000, 0x400);
    func_02008e68(0xc0, (void *)0x7000400, 0x400);
    func_02008e68(0, (void *)0x5000000, 0x400);
    func_02008e68(0, (void *)0x5000400, 0x400);
    func_0200781c();
    func_02007a2c();
    func_0200617c();
    func_0200f1d8();
    ((u32 *)&data_02162638)[1] = 1;
    ((u32 *)&data_02162638)[2] = 0x5d588b65;
    ((u32 *)&data_02162638)[3] = 0x269ec3;
    *(u64 *)((u8 *)&data_02162638 + 0x20) = 1;
    *(u64 *)((u8 *)&data_02162638 + 0x28) = 0x5d588b656c078965ULL;
    *(u64 *)((u8 *)&data_02162638 + 0x30) = 0x269ec3;
}

void func_0210bf38(void *arg0, u32 arg1) {
    func_0210c518(arg1, *(s32 *)((u8 *)arg0 + 8));
}

void func_0210bf50(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    func_0210c5dc(arg1);
}

void func_0210bf68(void) {
    u32 zero = 0;
    u32 r4 = func_02007008(zero);
    u32 size = (func_02006ff4(zero) & ~0xf) - ((r4 + 0xf) & ~0xf);
    u32 r1 = func_02116fd0(func_020071c8(zero, size, 0x10), size, zero);
    data_02162638 = (void *)r1;
    data_02155c2c = size;
    func_0211748c(data_02162648, r1, 0x4);
    *(u32 *)((u8 *)&data_02162638 + 0x10) = (u32)data_02144b94;
}

void func_0210bfec(void) {
    func_02002c2c();
    func_02002dc0();
    func_02120800();
    *(u32 *)0x04000540 = 0;
}

void func_0210c010(void) {
    func_0210be4c();
    func_0210bf68();
    func_0210bfec();
    func_02109af8();
    func_0210ebd4();
    func_0210d86c();
    func_021097f4();
    func_0210f550();
    func_0210fcd4(0x40);
    func_0210e694();
    func_02107d20();
    func_0210b750(0x3ee);
    func_0210e67c();
    func_0210cf10();
    func_0210e7ac();
}

u16 func_0210c060(void *arg0, u32 arg1) {
    u16 sum = 0;
    func_02011e20(&sum, arg0, arg1, 0);
    return ~sum;
}

void func_0210c094(void *arg0, void *arg1, void *arg2, void *arg3) {
    Vec a;
    Vec b;
    func_02002128(arg1, arg0, &a);
    func_02002128(arg2, arg0, &b);
    func_02002194(&a, &b, arg3);
}

extern s32 func_02001fb0(s32, s32);
s32 func_0210c0e8(Vec *arg0, Vec *arg1, Vec *arg2, Vec *arg3, Vec *arg4) {
    Vec v;
    s32 d1;
    s32 d2;
    s32 t;
    s64 x, y, z;
    s32 sx, sy, sz;
    s32 ax, ay, az;

    func_02002128(arg2, arg0, &v);
    d1 = func_02002158(&v, arg3);
    d2 = func_02002158(arg1, arg3);
    if (0.0 == (double)d2) {
        return 0;
    }
    t = func_02001fb0(d1, d2);
    x = (s64)arg1->x * t;
    y = (s64)arg1->y * t;
    z = (s64)arg1->z * t;
    sx = (s32)((x + 0x800) >> 12);
    sy = (s32)((y + 0x800) >> 12);
    sz = (s32)((z + 0x800) >> 12);
    ax = arg0->x;
    ay = arg0->y;
    ax += sx;
    az = arg0->z;
    ay += sy;
    az += sz;
    arg4->x = ax;
    arg4->y = ay;
    arg4->z = az;
    return 1;
}

extern void func_0210c094(void *, void *, void *, void *);
s32 func_0210c1dc(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    s32 vec[3];
    func_0210c094(arg3, arg0, arg1, vec);
    if (func_02002158(vec, arg4) < 0) {
        return 0;
    }
    func_0210c094(arg3, arg1, arg2, vec);
    if (func_02002158(vec, arg4) < 0) {
        return 0;
    }
    func_0210c094(arg3, arg2, arg0, vec);
    if (func_02002158(vec, arg4) >= 0) {
        return 1;
    }
    return 0;
}

s32 func_0210c28c(s32 *arg0, s32 *arg1) {
    s32 dx = arg0[0] - arg1[0];
    s32 dy = arg0[1] - arg1[1];
    s64 sum = (s64)dx * dx;
    sum += (s64)dy * dy;
    *(volatile u16 *)0x040002b0 = 1;
    *(volatile u64 *)0x040002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x040002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x040002b4 + 1) >> 1;
}

s32 func_0210c2f4(s32 *arg0, s32 *arg1) {
    s32 dx = arg0[0] - arg1[0];
    s32 dz = arg0[2] - arg1[2];
    s64 sum = (s64)dx * dx;
    sum += (s64)dz * dz;
    *(volatile u16 *)0x040002b0 = 1;
    *(volatile u64 *)0x040002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x040002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x040002b4 + 1) >> 1;
}

extern s32 func_02002080(s32, s32);
extern s32 func_02002158(void *, void *);
void func_0210c35c(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0[1] = arg2;
    arg0[3] = arg3;
    if (arg3 == 0) {
        arg0[0] = arg2;
        arg0[2] = 0;
        return;
    }
    arg0[0] = arg1;
    arg0[2] = func_02002080(arg2 - arg1, arg3);
}

s32 func_0210c398(u32 *arg0) {
    s32 remain = arg0[3];
    if (remain == 0) {
        return 0;
    }
    arg0[0] += arg0[2] << data_02162834[0];
    remain -= data_0216281c;
    arg0[3] = remain;
    if (remain <= 0) {
        arg0[0] = arg0[1];
        arg0[3] = 0;
    }
    return 1;
}

void func_0210c3f8(s32 *arg0) {
    s32 a;
    s32 b;
    b = arg0[3];
    a = arg0[1];
    if (a > b) {
        arg0[1] = b;
        arg0[3] = a;
    }
    b = arg0[2];
    a = arg0[0];
    if (a > b) {
        arg0[0] = b;
        arg0[2] = a;
    }
}

extern u32 func_0200698c(void);
extern u32 func_0200e280(void);
extern u32 *data_0216267c;
extern u32 data_02162834[];
extern u32 data_0216281c;
extern u8 func_02117090(void);
extern void func_02109f24(void *);
u32 func_0210c424(void) {
    u32 val;
    u32 base;
    if (func_0200698c() != 0) {
        return 0;
    }
    val = func_0200e280();
    base = data_0216267c[0];
    if (val < base || val >= base + 0x400) {
        return 0;
    }
    return val - base;
}

extern u32 func_0210c424(void);
void func_0210c470(void) {
    u32 *obj;
    u8 *str;
    u32 offset;
    u32 idx;
    s32 count;

    if (func_0200698c() != 0) {
        return;
    }
    obj = data_0216267c;
    if (obj == NULL || obj[8] == 0 || obj[9] == 0) {
        *(u32 *)((u8 *)&data_0216267c + 4) = 0;
        return;
    }
    str = (u8 *)obj[0];
    offset = func_0210c424();
    idx = (offset - 0x40) & 0x3ff;
    count = 0;
    if (idx == offset) {
        goto done;
    }
    do {
        s8 c = (s8)str[idx];
        if (c >= 123) {
            goto inc;
        }
        if (c >= -123) {
            goto advance;
        }
    inc:
        count++;
    advance:
        idx = (idx + 1) & 0x3ff;
    } while (idx != offset);
done:
    *(u32 *)((u8 *)&data_0216267c + 4) = (count > 0x18);
}

void* func_0210c518(u32 size, s32 arg1)
{
    extern u8 data_02162684;
    extern u16 data_02162688;
    extern void* data_02162638;

    extern u32 func_02008128(void);
    extern void func_0200813c(u32);
    extern s32 func_02006afc(u16*);
    extern void func_02006b4c(void*);
    extern void* func_02117008(void*, u32, s32);
    extern void func_021091b4(void);

    void* ptr;
    u32 irq;

    if (data_02162684 != 0) {
        irq = func_02008128();
        func_02006afc(&data_02162688);
    }

    ptr = func_02117008(data_02162638, size, arg1);

    if (data_02162684 != 0) {
        func_02006b4c(&data_02162688);
        func_0200813c(irq);
    }

    func_021091b4();

    return ptr;
}

void* func_0210c594(u32 size, s32 arg1)
{
    extern void* func_0210c518(u32, s32);
    extern void func_02008f74(void*, u32, u32);
    extern void func_02008e68(u32, void*, u32);
    extern void func_021091b4(void);

    void* ptr = func_0210c518(size, arg1);

    if (ptr != NULL) {
        if (size & 3) {
            func_02008f74(ptr, 0, size);
        } else {
            func_02008e68(0, ptr, size);
        }
    }

    func_021091b4();

    return ptr;
}

void func_0210c5dc(void *arg0) {
    extern u8 data_02162684;
    extern u16 data_02162688;
    extern void *data_02162638;
    extern u32 func_02008128(void);
    extern void func_0200813c(u32);
    extern s32 func_02006afc(u16 *);
    extern void func_02006b4c(void *);
    extern void func_02117038(void *, void *);
    extern void func_021091b4(void);
    extern void func_02109f24(void *);

    struct { u8 bit : 1; } flag;
    u32 irq;
    u32 result = func_02117090();

    if (data_02162684 != 0) {
        irq = func_02008128();
        func_02006afc(&data_02162688);
    }
    *(u8 *)&flag = (u8)result;
    if (flag.bit) {
        func_02109f24(arg0);
    } else {
        func_02117038(data_02162638, arg0);
    }
    if (data_02162684 != 0) {
        func_02006b4c(&data_02162688);
        func_0200813c(irq);
    }
    func_021091b4();
}

void func_0210c674(void *ptr) {
    extern u8 data_02162684;
    extern u16 data_02162688;
    extern void *data_02162638;

    extern u32 func_02008128(void);
    extern void func_0200813c(u32);
    extern s32 func_02006afc(u16 *);
    extern void func_02006b4c(void *);
    extern void func_02117038(void *, void *);
    extern void func_021091b4(void);

    u32 irq;

    if (data_02162684 != 0) {
        irq = func_02008128();
        func_02006afc(&data_02162688);
    }

    func_02117038(data_02162638, ptr);

    if (data_02162684 != 0) {
        func_02006b4c(&data_02162688);
        func_0200813c(irq);
    }

    func_021091b4();
}

