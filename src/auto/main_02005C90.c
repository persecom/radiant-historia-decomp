/* 59 functions from 0x02005C90 to 0x02006C38 (main), found by ds-decomp. */
#include "common.h"

extern u32 func_02008154(void);
extern s32 func_02005c80(u16, void *, void *);
extern void func_02005dd8(void);
extern u32 func_02008128(void);
extern s32 func_02009148(u16, void *);
extern void func_02008168(u32);
extern void func_0200813c(u32);
extern void func_02012e3c(void);
extern void func_02005d70(void);
extern s32 func_02005c0c(u16, void *, void (*)(void), BOOL);
extern s32 func_02005d0c(u16);
extern void func_02005ea8(s32, const char *, char *);
extern u32 data_0215cde4[];
extern void func_02007a78(u32 *);
extern void func_02007bb0(void *, u64, void (*)(void *), void **);
extern u16 func_020081e0(void);
extern u32 data_0213e508[];
extern u8 data_0215ce10[];
s32 func_02005c90(u16 arg0, void *arg1, void (*arg2)(void), BOOL arg3) {
    u32 r5;
    s32 r4;
    if (arg3) {
        r5 = func_02008154();
    } else {
        r5 = func_02008128();
    }
    r4 = func_02009148(arg0, arg1);
    if (r4 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        *(u16 *)((u8 *)arg1 + 4) = arg0;
    }
    if (arg3) {
        func_02008168(r5);
    } else {
        func_0200813c(r5);
    }
    return r4;
}

s32 func_02005cfc(u16 arg0, void *arg1, void *arg2) {
    return func_02005c90(arg0, arg1, (void (*)(void))arg2, 0);
}

s32 func_02005d0c(u16 arg0) {
    return func_02005c0c(arg0, (void *)0x02ffffe8, func_02005d70, 1);
}

extern void func_020063e8(void *, s32);
extern u32 data_02145bb8[2];
extern u32 func_02006974(void);
extern void func_02006844();

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC_0 : 24;
    u32 unkC_24 : 8;
} Unk6AD8;

typedef struct {
    u32 unk0[2];
    u32 unk8[2];
    void **msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} Unk69A4;
extern void func_020068fc(void *);
extern s32 func_020067d8(void);
extern void func_02006b5c(void *);
extern void func_02006560(void *, u32);
extern s32 func_02006808(void);
extern void func_02008414(void);
extern void func_02006478();
extern void func_02006510(void *);
extern void func_020060b8(void);
s32 func_02005d2c(u16 arg0) {
    s32 (*fp)(u16) = func_02005d0c;
    return fp(arg0);
}

extern void func_02005d58(void);
extern s32 func_02005d38(u16);
s32 func_02005d38(u16 arg0) {
    return func_02005c90(arg0, (void *)0x02ffffe8, func_02005d58, 1);
}

void func_02005d58(void) {
    *(volatile u16 *)0x04000204 &= ~0x80;
}

void func_02005d70(void) {
    *(volatile u16 *)0x04000204 |= 0x80;
}

s32 func_02005d88(u16 arg0) {
    return func_02005c80(arg0, (void *)0x02ffffe0, func_02005dd8);
}

extern s32 func_02005cfc(u16, void *, void *);
extern void func_02005dc0(void);
s32 func_02005da4(u16 arg0) {
    return func_02005cfc(arg0, (void *)0x02ffffe0, func_02005dc0);
}

void func_02005dc0(void) {
    *(volatile u16 *)0x04000204 &= ~0x800;
}

void func_02005dd8(void) {
    *(volatile u16 *)0x04000204 |= 0x800;
}

u16 func_02005df0(u8 *arg0) {
    return *(u16 *)(arg0 + 4);
}

s32 func_02005df8(void) {
    volatile u32 *p = (volatile u32 *)0x02ffffb0;
    u32 lz;
    s32 id;

    lz = __clz(*p);
    if (lz != 32) {
        id = 0x40;
    } else {
        p++;
        lz = __clz(*p);
        if (lz == 32) {
            return -3;
        }
        id = 0x60;
    }
    id += lz;
    *p &= ~(0x80000000U >> lz);
    return id;
}

void func_02005e50(s32 id) {
    volatile u32 *p = (volatile u32 *)0x02ffffb0;
    if (id >= 0x60) {
        p++;
        id -= 0x60;
    } else {
        id -= 0x40;
    }
    *p |= (0x80000000U >> id);
}

void func_02005e80(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02005ea8(arg0, arg1, vlist);
}

extern void func_02005ec0(void);
void func_02005ea8(s32 arg0, const char *arg1, char *arg2) {
    ((void (*)(s32, s32, const char *, char *))func_02005ec0)(arg0, 0x7fffffff, arg1, arg2);
}

void func_02005ec0(void) {
    func_02012e3c();
}

u32 func_02005ecc(void) {
    return ++data_0215cde4[6];
}

void func_02005ee4(void **arg0, u8 *arg1) {
    u8 *node = (u8 *)arg0[0];
    while (node != NULL && *(u32 *)(node + 0x70) <= *(u32 *)(arg1 + 0x70)) {
        if (node == arg1) {
            return;
        }
        node = *(u8 **)(node + 0x80);
    }
    if (node == NULL) {
        u8 *tail = (u8 *)arg0[1];
        if (tail == NULL) {
            arg0[0] = arg1;
        } else {
            *(u8 **)(tail + 0x80) = arg1;
        }
        *(u8 **)(arg1 + 0x7c) = tail;
        *(u8 **)(arg1 + 0x80) = NULL;
        arg0[1] = arg1;
    } else {
        u8 *prev = *(u8 **)(node + 0x7c);
        if (prev == NULL) {
            arg0[0] = arg1;
        } else {
            *(u8 **)(prev + 0x80) = arg1;
        }
        *(u8 **)(arg1 + 0x7c) = prev;
        *(u8 **)(arg1 + 0x80) = node;
        *(u8 **)(node + 0x7c) = arg1;
    }
}

void *func_02005f5c(void **arg0) {
    void *r2 = arg0[0];
    if (r2 != NULL) {
        void *r1 = *(void **)((u8 *)r2 + 0x80);
        arg0[0] = r1;
        if (r1 != NULL) {
            *(void **)((u8 *)r1 + 0x7c) = NULL;
        } else {
            arg0[1] = NULL;
            *(void **)((u8 *)r2 + 0x78) = NULL;
        }
    }
    return r2;
}

void *func_02005f90(void **arg0, void *arg1) {
    void *r2 = arg0[0];
    while (r2 != NULL) {
        void *r3 = *(void **)((u8 *)r2 + 0x80);
        if (r2 == arg1) {
            void *r12 = *(void **)((u8 *)r2 + 0x7c);
            if (arg0[0] == r2) {
                arg0[0] = r3;
            } else {
                *(void **)((u8 *)r12 + 0x80) = r3;
            }
            if (arg0[1] == r2) {
                arg0[1] = r12;
            } else {
                *(void **)((u8 *)r3 + 0x7c) = r12;
            }
            break;
        }
        r2 = r3;
    }
    return r2;
}

void *func_02005fe4(void **arg0) {
    void *r2 = arg0[0];
    if (r2 != NULL) {
        void *r1 = *(void **)((u8 *)r2 + 0x10);
        arg0[0] = r1;
        if (r1 != NULL) {
            *(void **)((u8 *)r1 + 0x14) = NULL;
        } else {
            arg0[1] = NULL;
        }
    }
    return r2;
}

void func_02006014(void *arg0) {
    void *cur;
    void *prev = NULL;
    void *head = (void *)data_0215cde4[9];

    cur = head;
    while (cur != NULL && *(u32 *)((u8 *)cur + 0x70) < *(u32 *)((u8 *)arg0 + 0x70)) {
        prev = cur;
        cur = *(void **)((u8 *)cur + 0x68);
    }

    if (prev == NULL) {
        *(void **)((u8 *)arg0 + 0x68) = head;
        data_0215cde4[9] = (u32)arg0;
    } else {
        *(void **)((u8 *)arg0 + 0x68) = *(void **)((u8 *)prev + 0x68);
        *(void **)((u8 *)prev + 0x68) = arg0;
    }
}

void func_02006070(u8 *arg0) {
    u8 *prev = NULL;
    u8 *cur = (u8 *)data_0215cde4[9];

    while (cur != NULL && cur != arg0) {
        prev = cur;
        cur = *(u8 **)(cur + 0x68);
    }

    if (prev == NULL) {
        data_0215cde4[9] = (u32)*(u8 **)(arg0 + 0x68);
    } else {
        *(u8 **)(prev + 0x68) = *(u8 **)(arg0 + 0x68);
    }
}

extern u32 data_0215cdf0[4];
extern s32 func_02005c80(u16, void *, void *);
extern void func_02005dd8(void);
u32 func_020062c8(void) {
    return data_0215cdf0[0];
}

void func_020063c8(void) {
    func_02008128();
    func_020063e8((void *)data_0215cde4[8], 0);
}

extern void func_02006440(void *);
extern void func_0200661c(void);
void func_020063e8(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;
    if (data_0215cde4[5] != 0) {
        func_02006844(p, func_02006440);
        *(u32 *)p = *(u32 *)p | 0x80;
        *(u32 *)(p + 4) = (u32)arg1;
        *(u32 *)(p + 0x64) = 1;
        func_020068fc(p);
    } else {
        func_02006440((void *)(u32)arg1);
    }
}

void func_02006440(void *arg0) {
    u8 **pp = (u8 **)data_0215cde4[2];
    u8 *p = *pp;
    void (*fn)(void *) = *(void (**)(void *))(p + 0xb4);
    if (fn != NULL) {
        *(void (**)(void *))(p + 0xb4) = NULL;
        fn(arg0);
        func_02008128();
    }
    func_02006478();
}

void func_02006478(void) {
    u8 *p = *(u8 **)data_0215cde4[2];
    func_020067d8();
    func_02006b5c(p);
    {
        void *head = *(void **)(p + 0x78);
        if (head != NULL) {
            func_02005f90(head, p);
        }
    }
    func_02006070(p);
    *(u32 *)(p + 0x64) = 2;
    func_02006560(p + 0x9c, 2);
    func_02006808();
    func_0200661c();
    func_02008414();
}

void func_020064d4(u8 *arg0) {
    u32 cookie = func_02008128();
    while (*(u32 *)(arg0 + 0x64) != 2) {
        func_02006510(arg0 + 0x9c);
    }
    func_0200813c(cookie);
}

void func_02006510(void *arg0) {
    u32 cookie = func_02008128();
    u8 *p = *(u8 **)data_0215cde4[2];
    if (arg0 != NULL) {
        *(void **)(p + 0x78) = arg0;
        func_02005ee4(arg0, p);
    }
    *(u32 *)(p + 0x64) = 0;
    func_020060b8();
    func_0200813c(cookie);
}

void func_02006560(void *arg0, u32 arg1) {
    u32 cookie = func_02008128();
    u8 **q = (u8 **)arg0;
    if (*q != NULL) {
        while (*q != NULL) {
            u8 *e = (u8 *)func_02005f5c(arg0);
            *(u32 *)(e + 0x64) = 1;
            *(u32 *)(e + 0x78) = 0;
            *(u32 *)(e + 0x80) = 0;
            *(u32 *)(e + 0x7c) = 0;
        }
        *(u32 *)((u8 *)arg0 + 4) = 0;
        *q = NULL;
        func_020060b8();
    }
    func_0200813c(cookie);
}

void func_020065c8(void *arg0) {
    u32 cookie = func_02008128();
    *(u32 *)((u8 *)arg0 + 0x64) = 1;
    func_020060b8();
    func_0200813c(cookie);
}

u8 *func_020065f0(void) {
    u8 *p = (u8 *)data_0215cde4[9];
    while (p != NULL && *(u32 *)(p + 0x64) != 1) {
        p = *(u8 **)(p + 0x68);
    }
    return p;
}

extern void func_020060b8(void);
void func_0200661c(void) {
    u32 r4 = func_02008128();
    func_020060b8();
    func_0200813c(r4);
}

s32 func_020067a0(s32 arg0) {
    u32 irq = func_02008128();
    s32 old = data_0215cde4[10];
    data_0215cde4[10] = arg0;
    func_0200813c(irq);
    return old;
}

extern void func_02008114(void);
extern void func_02008454(void);
extern u32 data_0215cde4[];
void func_020067c8(void) {
    func_02008114();
    while (1) {
        func_02008454();
    }
}

s32 func_020067d8(void) {
    u32 irq = func_02008128();
    u32 v = data_0215cde4[1];
    s32 ret;
    if (v < 0xFFFFFFFFu) {
        ret = v;
        data_0215cde4[1] = v + 1;
    }
    func_0200813c(irq);
    return ret;
}

s32 func_02006808(void) {
    u32 irq = func_02008128();
    u32 v = data_0215cde4[1];
    s32 ret = 0;
    if (v != 0) {
        ret = v;
        data_0215cde4[1] = v - 1;
    }
    func_0200813c(irq);
    return ret;
}

extern void func_02005ea8(s32, const char *, char *);
void func_0200683c(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb4) = arg1;
}

void func_02006844(u32 *arg0, u32 arg1, u32 arg2) {
    arg1 += 4;
    arg0[16] = arg1;
    arg0[17] = arg2;
    arg2 -= 0x40;
    if (arg2 & 4) {
        arg2 -= 4;
    }
    arg0[14] = arg2;
    arg0[0] = (arg1 & 1) ? 0x3f : 0x1f;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
    arg0[6] = 0;
    arg0[7] = 0;
    arg0[8] = 0;
    arg0[9] = 0;
    arg0[10] = 0;
    arg0[11] = 0;
    arg0[12] = 0;
    arg0[13] = 0;
    arg0[15] = 0;
}

u32 func_02006940(void) {
    if (data_02145bb8[1] != -1) {
        return data_02145bb8[1];
    }
    data_02145bb8[1] = 0x80000001;
    data_02145bb8[1] |= func_02006974();
    return data_02145bb8[1];
}

u32 func_02006974(void) {
    return data_0213e508[func_020081e0()];
}

extern u32 func_02006940(void);
BOOL func_0200698c(void) {
    return (func_02006940() & 0x10000000) != 0;
}

BOOL func_020069a4(Unk69A4 *arg0, void *arg1, s32 arg2) {
    u32 enabled = func_02008128();
    s32 lastIndex;

    while (arg0->msgCount <= arg0->usedCount) {
        if (!(arg2 & 1)) {
            func_0200813c(enabled);
            return 0;
        }
        func_02006510(arg0);
    }

    lastIndex = (arg0->firstIndex + arg0->usedCount) % arg0->msgCount;
    arg0->msgArray[lastIndex] = arg1;
    arg0->usedCount++;
    ((void (*)(void *))func_02006560)(&arg0->unk8);
    func_0200813c(enabled);
    return 1;
}

extern u32 data_0215ce00[];
extern void func_02006d10(u8 *, u8 *);
extern u64 func_0201fb1c(u32, u32);
s32 func_02006a38(Unk69A4 *arg0, u32 *arg1, u32 arg2) {
    u32 cookie = func_02008128();
    if (arg0->usedCount == 0) {
        arg2 %= 2;
        if (arg2 == 0) {
            func_0200813c(cookie);
            return 0;
        }
        func_02006510(&arg0->unk8);
        if (arg0->usedCount == 0) {
            func_0200813c(cookie);
            return 0;
        }
    }
    if (arg1 != NULL) {
        *arg1 = arg0->msgArray[arg0->firstIndex];
    }
    u32 next = func_0201fb1c(arg0->firstIndex + 1, arg0->msgCount) >> 32;
    arg0->firstIndex = next;
    arg0->usedCount -= 1;
    ((void (*)(void *))func_02006560)(arg0);
    func_0200813c(cookie);
    return 1;
}

extern u32 data_02145bb8[2];
extern u32 func_02006974(void);
void func_02006ad8(Unk6AD8 *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = 0;
    arg0->unk8 = 0;
    arg0->unkC_0 = 0;
    arg0->unkC_24 = 0;
}

void func_02006afc(u8 *arg0) {
    u32 cookie = func_02008128();
    u8 *p = (u8 *)data_0215ce00[1];
    void *zero = NULL;
    while (1) {
        if (func_02006ba4(arg0) != 0) break;
        *(void **)(p + 0x84) = arg0;
        func_02006510(arg0);
        *(void **)(p + 0x84) = zero;
    }
    func_0200813c(cookie);
}

extern void func_02006c38(void *, u32);
void func_02006b4c(void *arg0) {
    func_02006c38(arg0, 0x10000000);
}

void func_02006b5c(void *arg0) {
    while (*(void **)((u8 *)arg0 + 0x88) != NULL) {
        Unk6AD8 *p = func_02005fe4((void **)((u8 *)arg0 + 0x88));
        p->unkC_0 = 0;
        p->unk8 = 0;
        p->unkC_24 = 0;
        ((void (*)(void *))func_02006560)(p);
    }
}

BOOL func_02006ba4(u8 *arg0) {
    u32 cookie = func_02008128();
    u32 v = *(u32 *)(arg0 + 8);
    u32 p = data_0215ce00[1];
    BOOL ret;
    if (v == 0) {
        u32 c = *(u32 *)(arg0 + 0xc) & 0x00ffffff;
        c |= 0x10000000;
        *(u32 *)(arg0 + 8) = p;
        *(u32 *)(arg0 + 0xc) = (c & 0xff000000) | ((c + 1) & 0x00ffffff);
        func_02006d10((u8 *)p, arg0);
        ret = TRUE;
    } else if (v == p) {
        u32 c = *(u32 *)(arg0 + 0xc);
        *(u32 *)(arg0 + 0xc) = (c & 0xff000000) | ((c + 1) & 0x00ffffff);
        ret = TRUE;
    } else {
        ret = FALSE;
    }
    func_0200813c(cookie);
    return ret;
}

