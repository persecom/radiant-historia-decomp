/* 48 functions from 0x02007C2C to 0x02008BF4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_04000247;
extern u8 data_0215d144[20];
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
extern void func_02007ee4(void);
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

void func_02007dd4(u8 *arg0) {
    u8 *p = data_0215d144;
    u32 zero = 0;
    u8 *tail = *(u8 **)(p + 0x10);
    *(u32 *)(arg0 + 0x14) = (u32)tail;
    *(u32 *)(arg0 + 0x18) = zero;
    *(u32 *)(p + 0x10) = (u32)arg0;
    if (tail != NULL) {
        *(u32 *)(tail + 0x18) = (u32)arg0;
        return;
    }
    *(u32 *)(p + 0xc) = (u32)arg0;
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

void func_02007e58(u8 *alarm, s16 count, s16 delay, void *handler, void *arg) {
    u32 enabled = func_02008128();
    u32 vcount;
    u32 frame;

    if (alarm == NULL || *(void **)alarm != NULL) {
        func_02008414();
    }

    vcount = *(volatile u16 *)0x04000006;
    frame = func_020080d8(vcount);
    if (count <= (s32)vcount) {
        frame++;
    }

    *(u32 *)(alarm + 0x1c) = 0;
    *(u32 *)(alarm + 0x0c) = frame;
    *(s16 *)(alarm + 0x10) = count;
    *(s16 *)(alarm + 0x12) = delay;
    *(void **)(alarm + 0x00) = handler;
    *(void **)(alarm + 0x04) = arg;
    *(u32 *)(alarm + 0x24) = 0;

    func_02007d58(alarm);
    func_0200813c(enabled);
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

u16 func_020081e0(void) {
    return *(u16 *)func_020081f0();
}

u32 func_020081f0(void) {
    return 0x2fffc40;
}

u32 func_02008354(u32 x) {
    return __builtin_clz(x);
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

void func_02008558(u8 arg0) {
    data_04000247 = arg0;
}

