/* 48 functions from 0x02007C2C to 0x02008BF4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_04000247;
extern u8 data_0215d144[20];
extern u32 data_0215d15c;
extern u16 data_0215d160[10];
extern u32 func_02008354(u32);
extern void *data_0215d174[2];
extern void func_02008444(void);
extern void func_02006510(void *);
extern u16 data_0215d158;
extern void func_02009008(u32, u32, u32);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_02005a84(void);
extern u32 func_02005df8(void);
extern void func_0200f9b0(u32);
extern void func_02005988(u32);
extern void func_02005a14(s32);
extern void func_02008a00(void);
extern void func_02005ab4(s32);
extern u32 func_02007664(void);
extern void func_01ff81b8(void);
extern void func_02008e08(void *, void *, u32);
extern u32 func_02008128(void);
extern void func_02008454(void);
extern void func_020081a4(u32);
extern u32 func_020081f0(void);
extern void func_020059e4(u32);
extern void func_02007ee4();
extern void func_02008414(void);
extern u32 func_020080d8(u32 arg0);
extern void func_0200813c(u32 arg0);
extern void func_020057e8(u32 irq, void (*handler)(void));
extern void func_020026e0(s32 count);
extern void func_020059b4(u32 irq);
extern void func_02007f24(void);
extern void func_02007dd4(u8 *);
void func_02007d18(void) {
    u8 *p = data_0215d144;
    u32 zero = 0;
    u32 one = 1;
    if (*(u16 *)p == 0) {
        *(u16 *)p = one;
        zero = 0;
        *(u32 *)(p + 0xc) = zero;
        *(u32 *)(p + 0x10) = zero;
        func_020059e4(4);
        *(u32 *)(p + 8) = zero;
        *(u32 *)(p + 4) = zero;
    }
}

void func_02007d58(u8 *arg0) {
    u8 *cur = *(u8 **)(data_0215d144 + 0xc);
    u8 *prev;
    u32 key;
    u32 curkey;
    if (cur != NULL) {
        key = *(u32 *)(arg0 + 0xc);
        while (1) {
            curkey = *(u32 *)(cur + 0xc);
            if (curkey < key) goto next;
            if (curkey != key) goto insert;
            if (*(s16 *)(cur + 0x10) <= *(s16 *)(arg0 + 0x10)) goto next;
insert:
            prev = *(u8 **)(cur + 0x14);
            *(u8 **)(arg0 + 0x14) = prev;
            *(u8 **)(arg0 + 0x18) = cur;
            *(u8 **)(cur + 0x14) = arg0;
            if (prev != NULL) {
                *(u8 **)(prev + 0x18) = arg0;
                return;
            }
            *(u8 **)(data_0215d144 + 0xc) = arg0;
            func_02007ee4();
            return;
next:
            cur = *(u8 **)(cur + 0x18);
            if (cur == NULL) goto append;
        }
    } else {
append:
        func_02007dd4(arg0);
    }
}

void func_02007dd4(u8 *arg0)
{
  u8 *new_var2;
  u8 *p = data_0215d144;
  u8 *tail = *((u8 **) (p + 0x10));
  u8 *new_var;
  *((u8 **) (arg0 + 0x14)) = tail;
  *((u8 **) (arg0 + 0x18)) = NULL;
  *((u8 **) (p + 0x10)) = arg0;
  new_var2 = p;
  if (tail != NULL)
  {
    *((u8 **) (tail + 0x18)) = arg0;
    return;
  }
  new_var = new_var2;
  *((u8 **) (new_var + 0xc)) = arg0;
  func_02007ee4();
}

void func_02007e0c(u8 *alarm) {
    u8 *next;
    u8 *prev;
    if (alarm == NULL) {
        return;
    }
    next = *(u8 **)(alarm + 0x14);
    prev = *(u8 **)(alarm + 0x18);
    if (prev != NULL) {
        *(u8 **)(prev + 0x14) = next;
    } else {
        *(u8 **)(data_0215d144 + 0x10) = next;
    }
    if (next != NULL) {
        *(u8 **)(next + 0x18) = prev;
    } else {
        *(u8 **)(data_0215d144 + 0x0c) = prev;
    }
}

void func_02007e44(u32 *arg0) {
    arg0[0] = 0;
    arg0[2] = 0;
    arg0[8] = 0;
}

extern void func_02008ab4(int, u32, u32, u32);
extern void func_01ff845c(u32, const void *, void *, u32, u32);
void func_02007e58(u8 *alarm, s16 count, s16 delay, void *handler, void *arg) {
    u32 enabled = func_02008128();
    u32 vcount;
    u32 frame;

    if (alarm == NULL || *(void **)alarm != NULL) {
        func_02008414();
    }

    vcount = *(volatile u16 *)0x04000006;
    frame = func_020080d8(vcount);
    *(u32 *)(alarm + 0x1c) = 0;
    if (count <= (s32)vcount) {
        frame++;
    }

    *(u32 *)(alarm + 0x0c) = frame;
    *(s16 *)(alarm + 0x10) = count;
    *(s16 *)(alarm + 0x12) = delay;
    *(void **)(alarm + 0x00) = handler;
    *(void **)(alarm + 0x04) = arg;
    *(u32 *)(alarm + 0x24) = 0;

    func_02007d58(alarm);
    func_0200813c(enabled);
}

s32 func_0200808c(u8 *arg0, s32 arg1, s32 arg2) {
    s32 a = arg1 - *(s32 *)(arg0 + 0xc);
    s32 b = arg2 - *(s16 *)(arg0 + 0x10);
    if (a >= 0) {
        if (a != 0 || b >= 0) {
            return 2;
        }
        return 0;
    }
    if (b < 0) {
        a = b + 7;
        b = a + 0x100;
    }
    if (b <= *(s16 *)(arg0 + 0x12)) {
        return 1;
    }
    return 2;
}

u32 func_020080d8(u32 arg0) {
    u32 irq = func_02008128();
    u32 *p = (u32 *)data_0215d144;
    if (arg0 < p[1]) {
        p[2]++;
    }
    {
        u32 *q = (u32 *)data_0215d144;
        q[1] = arg0;
        func_0200813c(irq);
        return q[2];
    }
}

u32 func_02008198(u32 x) {
    do {
        x -= 4;
    } while (x >= 4);
    return x;
}

extern void WaitByLoop(s32);
extern void func_02005650(s32, u32);
void func_020081a4(u32 arg0) {
    u32 x = arg0 << 1;
    if (x > 0x10) {
        func_02008198(x - 0x10);
    }
}

void func_020081c0(void) {
    s32 i;
    for (i = 1; i < 2; i++) {
        WaitByLoop(i);
        func_02005650(i, i);
    }
}

u16 func_020081e0(void) {
    return *(u16 *)func_020081f0();
}

u32 func_020081f0(void) {
    return 0x2fffc40;
}

void func_020081fc(void) {
    s32 c = 0xc;
    s32 one = 1;
    if (data_0215d158 == 0) {
        data_0215d158 = 1;
        func_0200a56c();
        if (func_0200a6c0(c, one) != 0) {
            func_0200a674(c, func_02005a84);
        }
    }
}

void func_02008250(u32 arg0) {
    if (*(u16 *)0x2fffc40 != 2) {
        return;
    }
    func_02008414();
    func_0200f9b0((u16)func_02005df8());
    func_02005988(0x40000);
    func_02005a14(-1);
    func_02008a00();
    {
        u32 *dst = (u32 *)0x2fffc20;
        *dst = arg0;
        func_02005ab4(0x10);
        dst[0xdf] = func_02007664();
    }
    func_01ff81b8();
}

extern void func_02009008(u32, u32, u32);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_02005a84(void);
extern u32 func_02005df8(void);
extern void func_0200f9b0(u32);
extern void func_02005988(u32);
extern void func_02005a14(s32);
extern void func_02008a00(void);
extern void func_02005ab4(s32);
extern u32 func_02007664(void);
extern void func_01ff81b8(void);
extern void func_02008e08(void *, void *, u32);
void func_020082b8(u32 arg0) {
    void *p = (void *)0x2fffcf4;
    ((void (*)(void *, u32, s32))func_02009008)(p, arg0, 6);
}

void func_020082d4(u8 *arg0) {
    u8 *p = (u8 *)0x2fffc80;
    *(u8 *)arg0 = (u32)(*(u16 *)(p + 0x64) << 29) >> 29;
    *(u8 *)(arg0 + 1) = (u32)(*(u8 *)(p + 2) << 28) >> 28;
    *(u8 *)(arg0 + 2) = *(u8 *)(p + 3);
    *(u8 *)(arg0 + 3) = *(u8 *)(p + 4);
    *(u16 *)(arg0 + 0x1a) = *(u8 *)(p + 0x1a);
    *(u16 *)(arg0 + 0x52) = *(u8 *)(p + 0x50);
    func_02008e08(p + 6, arg0 + 4, 0x14);
    func_02008e08(p + 0x1c, arg0 + 0x1c, 0x34);
    *(u16 *)(arg0 + 0x18) = 0;
    *(u16 *)(arg0 + 0x50) = 0;
}

u32 func_02008354(u32 x) {
    return __builtin_clz(x);
}

void func_0200835c(void) {
    s32 i;
    data_0215d15c = 0;
    for (i = 0; i < 9; i++) {
        data_0215d160[i] = 0;
    }
}

void func_02008390(u16 bank, u16 lockId) {
    u32 workMap;
    u32 enabled = func_02008128();
    workMap = bank & data_0215d15c & 0x1ff;
    while (1) {
        s32 zeroBits = 31 - func_02008354(workMap);
        u32 mask;
        if (zeroBits < 0) {
            break;
        }
        mask = ~(1 << zeroBits);
        workMap &= mask;
        if (data_0215d160[zeroBits] == lockId) {
            data_0215d160[zeroBits] = 0;
            data_0215d15c &= mask;
        }
    }
    func_0200813c(enabled);
}

void func_02008414(void) {
    void (*fn)(void *) = (void (*)(void *))data_0215d174[0];
    if (fn != NULL) {
        data_0215d174[0] = NULL;
        fn(data_0215d174[1]);
    }
    func_02008444();
}

void func_02008444(void) {
    func_02008128();
    while (1) {
        func_02008454();
    }
}

extern void func_02008414(void);
extern u32 func_020080d8(u32 arg0);
extern void func_0200813c(u32 arg0);
extern void func_020057e8(u32 irq, void (*handler)(void));
extern void func_020026e0(s32 count);
extern void func_020059b4(u32 irq);
extern void func_02007f24(void);
void func_02008460(u32 *arg0) {
    arg0[2] = 0;
    arg0[1] = 0;
    arg0[0] = 0;
}

u32 func_02008474(volatile u32 *event, u32 pattern, s32 mode, u32 clearBitPattern) {
    u32 ret = 0;
    u32 enabled = func_02008128();

    switch (mode) {
    case 0:
        while ((*event & pattern) != pattern) {
            func_02006510((void *)(event + 1));
        }
        ret = *event;
        break;
    case 1:
        while ((*event & pattern) == 0) {
            func_02006510((void *)(event + 1));
        }
        ret = *event;
        break;
    }

    if (ret != 0) {
        *event &= ~clearBitPattern;
    }

    func_0200813c(enabled);
    return ret;
}

void func_02008558(u8 arg0) {
    data_04000247 = arg0;
}

extern void func_02008998(u32);
void func_02008a00(void) {
    func_02008998(0);
    func_02008998(1);
    func_02008998(2);
    func_02008998(3);
}

void func_02008a28(s32 arg0, u32 arg1) {
    s32 i;
    for (i = 0; i < 3; i++) {
        u32 v = *(u32 *)(0x4000000 + i * 0xc + 0xb8);
        u32 mode;
        if ((v & 0x80000000) == 0) {
            continue;
        }
        mode = v & 0x38000000;
        if (mode == arg1) {
            continue;
        }
        if (mode == 0x8000000 && arg1 == 0x10000000) {
            continue;
        }
        if (mode == 0x10000000 && arg1 == 0x8000000) {
            continue;
        }
        if (mode != 0x18000000 && mode != 0x20000000 && mode != 0x28000000 && mode != 0x30000000 && mode != 0x38000000 && mode != 0x8000000 && mode != 0x10000000) {
            continue;
        }
        func_02008414();
    }
}

void func_02008ab4(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    u32 hi;
    u32 hi2;
    if (arg0 == 0) {
        return;
    }
    hi = arg1 & 0xff000000;
    if (arg3 != 0) {
        if (arg3 == 0x800000) {
            arg1 -= arg2;
        }
    } else {
        arg1 += arg2;
    }
    if (hi == 0x4000000) {
        return;
    }
    if (hi >= 0x8000000) {
        return;
    }
    hi2 = arg1 & 0xff000000;
    if (hi2 == 0x4000000 || hi2 >= 0x8000000) {
        return;
    }
    func_02008414();
}

