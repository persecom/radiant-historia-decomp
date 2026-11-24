/* 73 functions from 0x02006C38 to 0x02007C2C (main), found by ds-decomp. */
#include "common.h"

extern void func_02006e48(void);
extern void func_0200a56c(void);
extern void func_02006e90(void);
extern void func_02005ae0(void);
extern void func_02006fac(void);
extern void func_020057d0(void);
extern void func_02005a40(void);
extern void func_020075fc(void);
extern void func_020094a8(void);
extern void func_02007d18(void);
extern void func_0200835c(void);
extern void func_0200617c(void);
extern void func_020081fc(void);
extern void func_02011334(void);
extern void func_0200f858(void);
extern void func_0200e384(void);
extern void func_02006e1c(void);
extern u32 func_02006940(void);
extern u32 data_0215d058[2];
extern void (*data_02145bc0[])(u32);
extern u8 *data_0215d060[];
extern u32 data_0215d084[3];
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void *func_02007250(void *, void *);
extern void *func_02007278(void *, void *);
extern void func_02007538(s32, u32);
typedef struct UnkStruct_0215d128 {
    u16 unk00;
    u16 unk02;
    u32 unk04;
    u64 unk08;
} UnkStruct_0215d128;

extern u16 data_0215d124;
extern u16 data_0215d128;
extern u16 data_0215d138;
extern void func_020077f8(s32);
extern void func_0200789c(void);
extern void func_020057e8(u32, void (*)(void));
extern void func_020059b4(u32);
extern void func_02005944(u32, void (*)(void), u32);
extern void func_02007674(void);
extern u32 func_0200701c(s32);
extern void func_020071a0(s32, u32);
extern u32 func_020070fc(s32);
extern void func_020071b4(s32, u32);
extern void func_020075d4(s32, u32, s32);
void func_02006d10(u8 *arg0, u8 *arg1) {
    u8 *tail = *(u8 **)(arg0 + 0x8c);
    if (tail == NULL) {
        *(u8 **)(arg0 + 0x88) = arg1;
    } else {
        *(u8 **)(tail + 0x10) = arg1;
    }
    *(u8 **)(arg1 + 0x14) = tail;
    *(u8 **)(arg1 + 0x10) = NULL;
    *(u8 **)(arg0 + 0x8c) = arg1;
}

void func_02006d34(u8 *arg0, u8 *arg1) {
    u8 *next = *(u8 **)(arg1 + 0x10);
    u8 *prev = *(u8 **)(arg1 + 0x14);
    if (next == NULL) {
        *(u8 **)(arg0 + 0x8c) = prev;
    } else {
        *(u8 **)(next + 0x14) = prev;
    }
    if (prev == NULL) {
        *(u8 **)(arg0 + 0x88) = next;
    } else {
        *(u8 **)(prev + 0x10) = next;
    }
}

void func_02006e1c(void) {
    volatile u8 *io = (volatile u8 *)0x04000000;
    u32 ime = *(volatile u32 *)(io + 0x208);
    *(volatile u32 *)(io + 0x208) = (u32)io;
    do {
    } while (*(volatile u16 *)(io + 0x6) != 0);
    *(volatile u32 *)(io + 0x208) = ime;
}

void func_02006e3c(void) {
    func_02006e48();
}

void func_02006e48(void) {
    func_0200a56c();
    func_02006e90();
    func_02005ae0();
    func_02006fac();
    func_020057d0();
    func_02005a40();
    func_020075fc();
    func_020094a8();
    func_02007d18();
    func_0200835c();
    func_0200617c();
    func_020081fc();
    func_02011334();
    func_0200f858();
    func_0200e384();
    func_02006e1c();
}

u32 func_02006ff4(s32 arg0) {
    return ((u32 *)0x02fffdc4)[arg0];
}

u32 func_02007008(s32 arg0) {
    return ((u32 *)0x02fffda0)[arg0];
}

u32 func_020070fc(s32 arg0) {
    switch (arg0) {
    case 0:
        return 0x02178600;
    case 2:
        if (data_0215d058[1] == 0) {
            return 0;
        }
        if ((func_02006940() & 0xf) == 1) {
            return 0;
        }
        return 0x023e0000;
    case 3:
        return 0x01ff8540;
    case 4:
        return 0x027e0080;
    case 5:
        return 0x02fff000;
    case 6:
        return 0x037f8000;
    default:
        return 0;
    }
}

void func_020071a0(s32 arg0, u32 arg1) {
    ((u32 *)0x02fffdc4)[arg0] = arg1;
}

void func_020071b4(s32 arg0, u32 arg1) {
    ((u32 *)0x02fffda0)[arg0] = arg1;
}

u32 func_020071c8(s32 arg0, u32 arg1, u32 arg2) {
    u32 lo = func_02007008(arg0);
    u32 aligned;
    u32 next;
    if (lo == 0) {
        return 0;
    }
    aligned = (lo + arg2 - 1) & ~(arg2 - 1);
    next = aligned + arg1;
    next = (next + arg2 - 1) & ~(arg2 - 1);
    if (next > func_02006ff4(arg0)) {
        return 0;
    }
    func_020071b4(arg0, next);
    return aligned;
}

void *func_02007234(void *arg0, void *arg1) {
    *(void **)((u8 *)arg1 + 4) = arg0;
    *(void **)arg1 = NULL;
    if (arg0 != NULL) {
        *(void **)arg0 = arg1;
    }
    return arg1;
}

void *func_02007250(void *arg0, void *arg1) {
    if (*(void **)((u8 *)arg1 + 4) != NULL) {
        *(void **)(*(void **)((u8 *)arg1 + 4)) = *(void **)arg1;
    }
    if (*(void **)arg1 == NULL) {
        return *(void **)((u8 *)arg1 + 4);
    }
    *(void **)((u8 *)*(void **)arg1 + 4) = *(void **)((u8 *)arg1 + 4);
    return arg0;
}

void *func_02007278(void *arg0, void *arg1) {
    u8 *p = NULL;
    u8 *cur = (u8 *)arg0;
    u32 x, y;

    if (arg0 != NULL) {
        while (1) {
            if ((u32)arg1 <= (u32)cur) break;
            p = cur;
            cur = *(u8 **)(cur + 4);
            if (cur == NULL) break;
        }
    }
    *(u8 **)arg1 = p;
    *(u8 **)((u8 *)arg1 + 4) = cur;
    if (cur != NULL) {
        *(u8 **)cur = arg1;
        x = *(u32 *)((u8 *)arg1 + 8);
        if ((u8 *)arg1 + x == cur) {
            x += *(u32 *)(cur + 8);
            *(u32 *)((u8 *)arg1 + 8) = x;
            cur = *(u8 **)(cur + 4);
            *(u8 **)((u8 *)arg1 + 4) = cur;
            if (cur != NULL) {
                *(u8 **)cur = arg1;
            }
        }
    }
    if (p == NULL) goto ret_new;
    *(u8 **)(p + 4) = arg1;
    y = *(u32 *)(p + 8);
    if ((u8 *)p + y != arg1) return arg0;
    *(u32 *)(p + 8) = y + *(u32 *)((u8 *)arg1 + 8);
    *(u8 **)(p + 4) = cur;
    if (cur != NULL) {
        *(u8 **)cur = p;
    }
    return arg0;
ret_new:
    return arg1;
}

void func_02007428(s32 arg0, s32 arg1, void *arg2) {
    u8 *arena;
    u8 *heap;
    u8 *cell;
    u32 cookie = func_02008128();
    arena = data_0215d060[arg0];
    if (arg1 < 0) {
        arg1 = *(s32 *)(arena + 0x0);
    }
    heap = *(u8 **)(arena + 0x10) + arg1 * 0xc;
    cell = (u8 *)arg2 - 0x20;
    *(void **)(heap + 0x8) = func_02007250(*(void **)(heap + 0x8), cell);
    *(void **)(heap + 0x4) = func_02007278(*(void **)(heap + 0x4), cell);
    func_0200813c(cookie);
}

void func_02007538(s32 arg0, u32 arg1) {
    data_02145bc0[arg0](arg1);
}

void func_020075d4(s32 arg0, u32 arg1, s32 arg2) {
    u32 mask = (u32)(-0x1000) << ((u32)(arg2 - 0x16) >> 1);
    func_02007538(arg0, arg2 | (arg1 & mask) | 1);
}

void func_020075fc(void) {
    s32 inRange = 0;
    u32 v = *(volatile u32 *)0x02fffd9c;
    data_0215d084[2] = v;
    if (v >= 0x02600000 && v < 0x02800000) {
        inRange = 1;
    }
    if (!inRange) {
        v = 0;
    }
    data_0215d084[0] = v;
    if (v == 0) {
        *(volatile u32 *)0x02fffd9c = (u32)func_02007674;
        *(volatile u32 *)0x027ffd9c = (u32)func_02007674;
    }
    data_0215d084[3] = 0;
}

extern u32 data_0215d084[3];
u32 func_02007664(void) {
    return data_0215d084[2];
}

extern void func_020076fc(s32);
extern void func_0200777c(void);
s32 func_020076e8(s32 arg0) {
    func_020076fc(arg0);
    func_0200777c();
    return arg0;
}

void func_020077f8(s32 arg0) {
    data_0215d124 |= (u16)(1 << arg0);
}

void func_0200781c(void) {
    if (((UnkStruct_0215d128 *)&data_0215d128)->unk00 == 0) {
        ((UnkStruct_0215d128 *)&data_0215d128)->unk00 = 1;
        func_020077f8(0);
        ((UnkStruct_0215d128 *)&data_0215d128)->unk08 = 0;
        *(volatile u16 *)0x04000102 = 0;
        *(volatile u16 *)0x04000100 = 0;
        *(volatile u16 *)0x04000102 = 0xc1;
        func_020057e8(8, func_0200789c);
        func_020059b4(8);
        ((UnkStruct_0215d128 *)&data_0215d128)->unk04 = 0;
    }
}

extern u16 data_0215d128;
u16 func_0200788c(void) {
    return data_0215d128;
}

void func_0200789c(void) {
    UnkStruct_0215d128 *s = (UnkStruct_0215d128 *)&data_0215d128;
    s->unk08++;
    if (s->unk04 != 0) {
        *(volatile u16 *)0x04000102 = 0;
        *(volatile u16 *)0x04000100 = 0;
        *(volatile u16 *)0x04000102 = 0xc1;
        s->unk04 = 0;
    }
    func_02005944(0, func_0200789c, 0);
}

u64 func_02007904(void) {
    volatile u16 countL;
    volatile u64 countH;
    u32 cookie = func_02008128();
    countL = *(volatile u16 *)0x04000100;
    countH = *(volatile u64 *)((u8 *)&data_0215d128 + 8) & 0xffffffffffffULL;
    if ((*(volatile u32 *)0x04000214 & 8) != 0 && !(countL & 0x8000)) {
        countH++;
    }
    func_0200813c(cookie);
    return (countH << 16) | countL;
}

extern void func_020059e4(u32);
extern void func_02007c1c(void);
extern void func_02008414(void);
extern void func_02007a88(void *, u64);
void func_020079a4(u8 *arg0) {
    s64 delta;
    u16 count;
    volatile u16 *tmr;
    u64 now = func_02007904();

    *(volatile u16 *)0x04000106 = 0;
    delta = *(s64 *)(arg0 + 0xc) - (s64)now;
    func_02005944(1, func_02007c1c, 0);

    if (delta < 0) {
        count = 0xfffe;
    } else if (delta < 0x10000) {
        count = (u16)(~delta);
    } else {
        count = 0;
    }

    tmr = (volatile u16 *)0x04000104;
    tmr[0] = count;
    tmr[1] = 0xc1;
    func_020059b4(0x10);
}

extern u16 data_0215d138;
u16 func_02007a68(void) {
    return data_0215d138;
}

void func_02007a78(u32 *arg0) {
    arg0[0] = 0;
    arg0[2] = 0;
}

void func_02007bb0(u8 *arg0, u64 arg1, void *arg2, void *arg3) {
    u32 cookie;
    if (arg0 == NULL || *(void **)arg0 != NULL) {
        func_02008414();
    }
    cookie = func_02008128();
    *(u64 *)(arg0 + 0x1c) = 0;
    *(void **)arg0 = arg2;
    *(void **)(arg0 + 4) = arg3;
    func_02007a88(arg0, arg1 + func_02007904());
    func_0200813c(cookie);
}

void func_02007c2c(void);
void func_02007c1c(void) {
    func_02007c2c();
}

