/* 40 functions from 0x02127E74 to 0x02128B80 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s8 field_0;
    u8 field_1[0xc3];
} Unk_02173ad4;

extern Unk_02173ad4 data_02173ad4[4];
extern void func_02127e74(u8 *);

typedef struct {
    u8 f0;
    u8 f1;
    s8 f2;
    s8 f3;
    void *f4;
    void *f8;
    u8 padc[4];
    void *f10;
    u32 f14;
    void *arr[4];
    u8 pad28[0x14];
    s16 f3c;
    s16 f3e;
    u8 pad40[0xc];
    u32 f4c;
    u8 pad50[0x21];
    u8 f71;
    u8 pad72[2];
    void *f74;
    u8 pad78[0x14];
    u32 f8c;
    u32 f90;
    u8 pad94[8];
    u32 f9c;
    u32 fa0;
    u32 fa4;
    u8 padA8[0x18];
    u32 fc0;
} Unk_02128030;

extern void *data_02173ac0;
extern void *data_0215677c;
extern void func_0212c7b8(void *, void *);
extern void func_0212c7f0(void *);
extern void func_0212e5b8(void *);
extern void func_0212e538(void *, s32, s32);
extern void func_0212ddf0(void *, void *);
extern void func_0212ddb8(void *, u32, u32);
extern void func_0212dc14(void *, void *);
extern void func_0212dce4(void *);
extern void func_0212db28(void *);
extern void func_0212da70(void *, u32, u32, u32, u64);
extern s32 func_0212dc94(void *);
extern void func_0212ebb0(void *);
extern void func_0212a9dc(void);
extern void func_0212eb10(void *, s32);
extern void func_0212eb1c(void *, s32);
extern void func_0212c808(void *);
extern void func_0212a9e8(void);
extern void func_0212bda8(void *);
extern void func_0212d4d0(void);
extern void func_0212eb50(void);
extern void func_02129588(void *);
extern u8 data_02173428[];
extern u8 data_0215687c[];
extern u8 data_02156934[];
extern u8 data_02156960[];
extern s32 func_0212d5b0(void *);
extern s32 func_0212d64c(void *);
extern void func_0212eb74(void *, s32);
extern void func_0212e5fc(void *);
extern u8 data_0215682c[40];
extern u8 data_02156854[40];
extern void func_0212d558(void *);
extern u8 data_021569b8[];
extern s32 func_0212eba4(void *);
extern s32 func_0212d5b0(void *);

extern void func_0212869c(void *, void *);
extern void func_0212a9f4(void);
extern void func_021281cc(void *);
extern void func_0212a9f8(void);
extern void func_02127ff4(void);
void func_02127fe0(void) {
    func_0212a9f4();
    func_02127ff4();
    func_0212a9f8();
}

void func_02127ff4(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_02173ad4[i].field_0 == 1) {
            func_02127e74((u8 *)&data_02173ad4[i]);
        }
    }
}

void func_02128030(Unk_02128030 *arg0, void *arg1) {
    s32 i;
    for (i = 0; i < (s8)arg0->f3; i++) {
        void *obj = arg0->arr[i];
        ((void (**)(void *))*(void **)obj)[5](obj);
    }
    func_0212c7b8(arg0->f4, arg1);
    arg0->f14 = (u32)arg1;
    func_0212c7f0(arg0->f4);
    arg0->f1 = 1;
    arg0->f4c = 0;
    arg0->f71 = 0;
    arg0->f8c = 0x7fffffff;
    arg0->f90 = -1;
    arg0->f9c = 0;
    arg0->fa4 = 0;
    arg0->fa0 = (u32)data_02173ac0;
    arg0->fc0 = 0;
    if (arg0->f2 == 4) {
        func_0212869c(arg0, 0);
    }
    if (arg0->f74 != NULL) {
        func_0212e5b8(arg0->f74);
    }
}

void func_021280f0(Unk_02128030 *arg0, u32 arg1, u32 arg2, u32 arg3, s32 arg4) {
    func_0212e538(arg0->f8, (s16)arg0->f3e << 11, (s16)arg0->f3c << 11);
    func_0212ddf0(arg0->f8, data_0215677c);
    func_0212ddb8(arg0->f8, 0, 0);
    func_0212dc14(arg0->f8, 0);
    func_0212dce4(arg0->f8);
    func_0212db28(arg0->f8);
    func_0212da70(arg0->f8, arg1, arg2, arg3, (u64)((s64)arg4 << 11));
    func_0212dc94(arg0->f8);
    func_02128030(arg0, arg0->f10);
}

void func_021281b0(void *arg0) {
    func_0212a9f4();
    func_021281cc(arg0);
    func_0212a9f8();
}

void func_021281cc(void *arg0) {
    Unk_02128030 *a = (Unk_02128030 *)arg0;
    void *p;
    func_0212a9dc();
    func_0212eb10(*(void **)((u8 *)a + 0xc), 0);
    func_0212eb1c(*(void **)((u8 *)a + 0xc), 0);
    func_0212c808(a->f4);
    if (a->f2 != 2 || a->f14 == 0) {
        goto tail;
    }
    p = (void *)a->f14;
    a->f14 = 0;
    ((void (**)(void *))*(void **)p)[3](p);
    if (a->f74 != NULL) {
        func_0212e5bc(a->f74);
        goto tail;
    }
tail:
    a->f14 = 0;
    a->f1 = 0;
    *(u8 *)((u8 *)a + 0xa8) = 0;
    func_0212a9e8();
}

extern void func_02128268(void *);
void func_0212824c(void *arg0) {
    func_0212a9f4();
    func_02128268(arg0);
    func_0212a9f8();
}

void func_02128268(void *arg0) {
    Unk_02128030 *a = (Unk_02128030 *)arg0;
    void *p;
    if (arg0 == NULL) {
        func_0212bda8(data_0215682c);
    } else {
        if (a->f8 != NULL) {
            func_0212db28(a->f8);
        }
        if (a->f2 == 4) {
            func_0212e5fc(*(void **)((u8 *)a + 0x94));
            if (a->f14 != 0) {
                p = (void *)a->f14;
                ((void (**)(void *))*(void **)p)[5](p);
                func_021281cc(arg0);
            }
        }
    }
}

extern void *func_021282f0(void *);
void *func_021282cc(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_021282f0(arg0);
    func_0212a9f8();
    return ret;
}

void *func_021282f0(void *arg0) {
    if (arg0 != NULL) {
        return (void *)(s32)*(s8 *)((u8 *)arg0 + 1);
    }
    func_0212bda8(data_02156854);
    return (void *)-1;
}

extern void *func_02128338(void *);
void *func_02128314(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_02128338(arg0);
    func_0212a9f8();
    return ret;
}

void *func_02128338(void *arg0) {
    if (arg0 == NULL) {
        func_0212bda8(data_0215687c);
        return (void *)-1;
    }
    if (*(s8 *)((u8 *)arg0 + 1) < 2) {
        return NULL;
    }
    return (void *)func_0212d5b0(*(void **)((u8 *)arg0 + 4));
}

extern void func_021283a0(u32, u32, u32);
void func_02128374(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_021283a0(arg0, arg1, arg2);
    func_0212a9f8();
}

extern void func_021284e0(u8 *, s16);
void func_021284bc(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021284e0)(arg0, arg1);
    func_0212a9f8();
}

void func_021284e0(u8 *arg0, s16 arg1) {
    s32 offset;
    if (arg0 == NULL) {
        func_0212bda8(data_02156934);
        return;
    }
    *(s16 *)(arg0 + 0x40) = arg1;
    if (*(s8 *)(arg0 + 0xa9) == 1) {
        offset = func_0212d64c(*(void **)(arg0 + 4));
    } else {
        offset = 0;
    }
    func_0212eb74(*(void **)(arg0 + 0xc), *(s16 *)(arg0 + 0x40) + offset);
}

extern void *func_02128554(void *);
void *func_02128530(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_02128554(arg0);
    func_0212a9f8();
    return ret;
}

void *func_02128554(void *arg0) {
    if (arg0 != NULL) {
        return (void *)(s32)*(s16 *)((u8 *)arg0 + 0x40);
    }
    func_0212bda8(data_02156960);
    return NULL;
}

void func_02128578(u8 *arg0, u8 arg1) {
    arg0[0xa9] = arg1;
}

extern void func_0212859c(void *);
void func_02128580(void *arg0) {
    func_0212a9f4();
    func_0212859c(arg0);
    func_0212a9f8();
}

void func_0212859c(void *arg0) {
    *(void **)(data_02173428 + 0x14) = arg0;
    *(void **)(data_02173428 + 0x10) = arg0;
}

extern void func_021285c4(void);
void func_021285b0(void) {
    func_0212a9f4();
    func_021285c4();
    func_0212a9f8();
}

void func_021285c4(void) {
    func_0212a9dc();
    if (*(u32 *)(data_02173428 + 0x18) != 0) {
        func_0212a9e8();
        return;
    }
    *(u32 *)(data_02173428 + 0x18) = 1;
    func_0212a9e8();
    if (*(void **)(data_02173428 + 0x3c) != NULL) {
        ((void (*)(u32))*(void **)(data_02173428 + 0x3c))(*(u32 *)(data_02173428 + 0x38));
    }
    func_0212d4d0();
    *(u32 *)(data_02173428 + 0x18) = 2;
    {
        s32 i;
        for (i = 0; i < 4; i++) {
            if (data_02173ad4[i].field_0 == 1) {
                func_02129588(&data_02173ad4[i]);
            }
        }
    }
    *(u32 *)(data_02173428 + 0x18) = 3;
    if (*(void **)(data_02173428 + 0x2c) != NULL) {
        ((void (*)(u32))*(void **)(data_02173428 + 0x2c))(*(u32 *)(data_02173428 + 0x28));
    }
    func_0212eb50();
    if (*(void **)(data_02173428 + 0x24) != NULL) {
        ((void (*)(u32))*(void **)(data_02173428 + 0x24))(*(u32 *)(data_02173428 + 0x20));
    }
    *(u32 *)(data_02173428 + 0x18) = 0;
    if (*(void **)(data_02173428 + 0x34) != NULL) {
        ((void (*)(u32))*(void **)(data_02173428 + 0x34))(*(u32 *)(data_02173428 + 0x30));
    }
}

extern void func_021286c0(Unk_02128030 *, s32);
extern s32 func_0212d63c(void *);
extern s32 func_0201fb1c(s32, s32);
extern u8 data_0215698c[44];
void func_0212869c(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021286c0)(arg0, arg1);
    func_0212a9f8();
}

void func_021286c0(Unk_02128030 *arg0, s32 arg1) {
    s32 ra, sum, rb, span;
    if (arg0 == NULL) {
        func_0212bda8(data_0215698c);
        return;
    }
    s32 r4;
    void *obj = arg0->f14;
    if (obj == NULL) {
        r4 = 0;
    } else {
        void **vt = *(void ***)obj;
        r4 = ((s32 (*)(void *, s32))vt[9])(obj, 1);
    }
    if (arg0->f2 != 4 && *(s8 *)((u8 *)arg0 + 0x6c) == 1 && arg1 == 0) {
        s32 base = func_0212d540(arg0->f4);
        s32 a, b;
        sum = r4 + base;
        a = func_0212d610(arg0->f4);
        ra = (a + 2047) / 2048;
        b = func_0212d63c(arg0->f4);
        rb = ((b + 2047) / 2048) * 2048;
        span = rb - ra * 2048;
        if (span <= 0) {
            *(s32 *)((u8 *)arg0 + 0xc0) = 0;
        } else {
            s32 q = func_0201fb1c(sum - ra * 2048, span);
            *(s32 *)((u8 *)arg0 + 0xc0) = span * q + ra * 2048;
        }
    }
    *(s8 *)((u8 *)arg0 + 0x6c) = arg1;
}

extern void func_021287c0(void *);
void func_0212879c(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021287c0)(arg0, arg1);
    func_0212a9f8();
}

void func_021287c0(void *arg0) {
    func_0212ebb0(*(void **)((u8 *)arg0 + 0xc));
}

extern void *func_021287f4(void *);
void *func_021287d0(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_021287f4(arg0);
    func_0212a9f8();
    return ret;
}

void *func_021287f4(void *arg0) {
    if (arg0 == NULL) {
        func_0212bda8(data_021569b8);
        return NULL;
    }
    return (void *)func_0212eba4(*(void **)((u8 *)arg0 + 0xc));
}

extern void func_02128878(u32, u32, u32);
void func_02128820(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_02128878(arg0, arg1, arg2);
    func_0212a9f8();
}

extern void func_0212887c(u32, u32, u32);
void func_0212884c(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_0212887c(arg0, arg1, arg2);
    func_0212a9f8();
}

void func_02128878(u32 arg0, u32 arg1, u32 arg2) {
}

void func_0212887c(u32 arg0, u32 arg1, u32 arg2) {
}

extern void func_021288a4(u8 *, u8);
void func_02128880(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021288a4)(arg0, arg1);
    func_0212a9f8();
}

void func_021288a4(u8 *arg0, u8 arg1) {
    arg0[0x98] = arg1;
    if (*(void **)(arg0 + 4) != NULL) {
        func_0212d558(*(void **)(arg0 + 4));
    }
}

extern void func_0212d558(void *);
extern u8 data_021569b8[];
extern s32 func_0212eba4(void *);
extern s32 func_0212d600(void *);
extern s32 func_0212d610(void *);
extern s32 func_0212d62c(void *);
extern void func_0212d6ec(void *);
extern void func_0212d580(void *, s32);
extern void func_0212d578(void *, s32);
extern void func_0212d588(void *, s32);
extern void func_0212d550(void *, s32);
extern void func_0212d56c(void *, void *, void *);
extern void func_02128944(void);
extern s32 func_0212d540(void *);
void func_021288c0(u8 *arg0) {
    void *p = *(void **)(arg0 + 4);
    s32 a = func_0212d600(p);
    s32 b = func_0212d610(p);
    s32 c = func_0212d62c(p);
    s32 d;
    func_0212d6ec(p);
    func_0212d580(p, 0);
    d = c - a;
    *(s32 *)(arg0 + 0x90) = d;
    func_0212d578(p, d);
    func_0212d588(p, b);
    func_0212d550(p, a);
    func_0212d56c(p, (void *)func_02128944, arg0);
}

void func_02128ab0(Unk_02128030 *arg0) {
    void *a = arg0->f4;
    void *b = arg0->f8;
    s32 val;
    if (b == NULL || a == NULL) {
        return;
    }
    val = func_0212d610(a);
    if (arg0->f2 == 4) {
        func_0212ddf0(arg0->f8, (void *)0x7fffffff);
        return;
    }
    if (*(s8 *)((u8 *)arg0 + 0x6c) == 0) {
        if (func_0212d540(arg0->f4) >= (s32)arg0->fc0) {
            func_0212d578(arg0->f4, -1);
        }
        func_0212ddf0(arg0->f8, (void *)0x7fffffff);
        return;
    }
    func_0212dc14(b, (void *)(val / 2048));
}

void func_02128b3c(void *arg0) {
    if (func_0212d5b0(*(void **)((u8 *)arg0 + 4)) == 1) {
        func_02128374((u32)arg0, 0, *(s16 *)((u8 *)arg0 + 0x42));
    } else {
        func_02128374((u32)arg0, 0, *(s16 *)((u8 *)arg0 + 0x42));
        func_02128374((u32)arg0, 1, *(s16 *)((u8 *)arg0 + 0x44));
    }
}

