/* 55 functions from 0x02004CD4 to 0x02005C90 (main), found by ds-decomp. */
#include "common.h"

extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern u8 data_027e0000[];
extern u8 data_027e0060[];
extern u8 data_0215cd7c[];
extern u16 data_02145ba8[];
extern u8 data_0215cd84[];
extern u8 data_0215cd80[];
extern void func_020059e4(u32);

extern u16 data_0215cd68;
extern u16 data_0215cd70;
extern u16 data_0215cd76;
extern u16 data_0215cd78;
extern u16 data_0215cd60[];
extern u16 data_0215cd22;
extern void func_02008390(u16, u16);
extern void func_02005bb0(s32, s32, s32, s32);
extern s32 func_02005398(u16 *);
extern void func_02004810(s32);
extern void func_020056c8(s32);
void func_02004cd4(s32 arg0) {
    data_0215cd60[0] = (data_0215cd60[0] | data_0215cd60[8]) & ~arg0;
    data_0215cd60[8] = arg0;
    switch (arg0) {
    case 0x20:
        *(volatile u32 *)0x04000000 |= 0x80000000;
        *(volatile u8 *)0x04000245 = 0x85;
        break;
    case 0x40:
        *(volatile u32 *)0x04000000 |= 0x80000000;
        *(volatile u8 *)0x04000246 = 0x85;
        break;
    case 0:
        *(volatile u32 *)0x04000000 &= ~0x80000000;
        break;
    }
    func_02004810(data_0215cd60[0]);
}

void func_020050c4(s32 arg0) {
    data_0215cd60[0] = (data_0215cd60[0] | data_0215cd60[3]) & ~arg0;
    data_0215cd60[3] = arg0;
    switch (arg0) {
    case 4:
        *(volatile u8 *)0x04000242 = 0x82;
        break;
    case 8:
        *(volatile u8 *)0x04000243 = 0x82;
        break;
    case 0xc:
        *(volatile u8 *)0x04000243 = 0x8a;
        *(volatile u8 *)0x04000242 = 0x82;
        break;
    case 0:
        break;
    }
    func_02004810(data_0215cd60[0]);
}

void func_02005168(s32 arg0) {
    data_0215cd60[0] |= (u16)arg0;
    func_02004810(arg0);
}

void func_0200518c(s32 arg0) {
    data_0215cd60[0] = (data_0215cd60[0] | data_0215cd60[9]) & ~arg0;
    data_0215cd60[9] = arg0;
    switch (arg0) {
    case 0x4:
        *(volatile u8 *)0x04000242 = 0x84;
        break;
    case 0x180:
        *(volatile u8 *)0x04000249 = 0x81;
    case 0x80:
        *(volatile u8 *)0x04000248 = 0x81;
        break;
    case 0:
    case 1:
        break;
    }
    func_02004810(data_0215cd60[0]);
}

void func_02005228(s32 arg0) {
    data_0215cd60[0] = (data_0215cd60[0] | data_0215cd60[10]) & ~arg0;
    data_0215cd60[10] = arg0;
    switch (arg0) {
    case 0x8:
        *(volatile u8 *)0x04000243 = 0x84;
        break;
    case 0x100:
        *(volatile u8 *)0x04000249 = 0x82;
        break;
    case 0:
        break;
    }
    func_02004810(data_0215cd60[0]);
}

void func_02005298(s32 arg0) {
    data_0215cd60[0] = (data_0215cd60[0] | data_0215cd60[11]) & ~arg0;
    data_0215cd60[11] = arg0;
    switch (arg0) {
    case 0x80:
        *(volatile u32 *)0x04001000 |= 0x40000000;
        *(volatile u8 *)0x04000248 = 0x82;
        break;
    case 0:
        *(volatile u32 *)0x04001000 &= ~0x40000000;
        break;
    }
    func_02004810(data_0215cd60[0]);
}

void func_02005318(s32 arg0) {
    data_0215cd60[0] = (data_0215cd60[0] | data_0215cd60[12]) & ~arg0;
    data_0215cd60[12] = arg0;
    switch (arg0) {
    case 0x100:
        *(volatile u32 *)0x04001000 |= 0x80000000;
        *(volatile u8 *)0x04000249 = 0x83;
        break;
    case 0:
        *(volatile u32 *)0x04001000 &= ~0x80000000;
        break;
    }
    func_02004810(data_0215cd60[0]);
}

s32 func_02005398(u16 *arg0) {
    s32 val = *arg0;
    *arg0 = 0;
    data_0215cd60[0] |= (u16)val;
    func_02004810(val);
    return val;
}

extern u16 data_0215cd6e;
s32 func_020053d0(void) {
    *(volatile u32 *)0x04000000 &= ~0x40000000;
    return func_02005398(&data_0215cd6e);
}

s32 func_020053f4(void) {
    *(volatile u32 *)0x04000000 &= ~0x80000000;
    return func_02005398(&data_0215cd70);
}

s32 func_02005418(void) {
    return func_02005398(&data_0215cd68);
}

extern u16 data_0215cd6a;
s32 func_0200542c(void) {
    return func_02005398(&data_0215cd6a);
}

extern u16 data_0215cd6c;
s32 func_02005440(void) {
    return func_02005398(&data_0215cd6c);
}

extern u16 data_0215cd72;
s32 func_02005454(void) {
    return func_02005398(&data_0215cd72);
}

extern u16 data_0215cd74;
s32 func_02005468(void) {
    return func_02005398(&data_0215cd74);
}

s32 func_0200547c(void) {
    *(volatile u32 *)0x04001000 &= ~0x40000000;
    return func_02005398(&data_0215cd76);
}

s32 func_020054a4(void) {
    *(volatile u32 *)0x04001000 &= ~0x80000000;
    return func_02005398(&data_0215cd78);
}

s32 func_020054cc(u16 *arg0) {
    u32 val = *arg0;
    *arg0 = 0;
    if (val & 0x1) {
        *(volatile u8 *)0x04000240 = 0;
    }
    if (val & 0x2) {
        *(volatile u8 *)0x04000241 = 0;
    }
    if (val & 0x4) {
        *(volatile u8 *)0x04000242 = 0;
    }
    if (val & 0x8) {
        *(volatile u8 *)0x04000243 = 0;
    }
    if (val & 0x10) {
        *(volatile u8 *)0x04000244 = 0;
    }
    if (val & 0x20) {
        *(volatile u8 *)0x04000245 = 0;
    }
    if (val & 0x40) {
        *(volatile u8 *)0x04000246 = 0;
    }
    if (val & 0x80) {
        *(volatile u8 *)0x04000248 = 0;
    }
    if (val & 0x100) {
        *(volatile u8 *)0x04000249 = 0;
    }
    func_02008390((u16)val, data_0215cd22);
    return val;
}

u32 func_0200558c(void) {
    return func_020054cc(data_0215cd60);
}

u16 func_020055a0(void) {
    return data_0215cd60[7];
}

void func_020055b0(const u32 *src, volatile u32 *dst) {
    s32 i;
    for (i = 0; i < 12; i++) {
        *dst = src[i];
    }
}

void func_020055d4(const u32 *src, volatile u32 *dst) {
    s32 i;
    for (i = 0; i < 16; i++) {
        *dst = src[i];
    }
}

void func_020055f0(void) {
    data_0215cd60[0] = 0;
    data_0215cd60[1] = 0;
    data_0215cd60[2] = 0;
    data_0215cd60[3] = 0;
    data_0215cd60[4] = 0;
    data_0215cd60[5] = 0;
    data_0215cd60[6] = 0;
    data_0215cd60[7] = 0;
    data_0215cd60[8] = 0;
    data_0215cd60[9] = 0;
    data_0215cd60[10] = 0;
    data_0215cd60[11] = 0;
    data_0215cd60[12] = 0;
    *(volatile u32 *)0x04000240 = 0;
    *(volatile u8 *)0x04000244 = 0;
    *(volatile u8 *)0x04000245 = 0;
    *(volatile u8 *)0x04000246 = 0;
    *(volatile u16 *)0x04000248 = 0;
}

void func_02005650(s32 clear, u32 irqFlags) {
    u32 ime = func_02008128();
    if (clear) {
        *(volatile u32 *)((u32)data_027e0000 + 0x3ff8) &= ~irqFlags;
    }
    func_0200813c(ime);
    while (!(irqFlags & *(volatile u32 *)((u32)data_027e0000 + 0x3ff8))) {
        func_02006510(data_027e0060);
    }
}

void func_020056c4(void) {
}

void func_020056c8(s32 index) {
    u32 bit = 1 << data_02145ba8[index];
    void (*fp)(void *) = *(void (**)(void *))(data_0215cd7c + index * 12);
    *(void (**)(void *))(data_0215cd7c + index * 12) = NULL;
    if (fp != NULL) {
        fp(*(void **)(data_0215cd84 + index * 12));
    }
    *(volatile u32 *)((u32)data_027e0000 + 0x3ff8) |= bit;
    if (*(u32 *)(data_0215cd80 + index * 12) == 0) {
        func_020059e4(bit);
    }
}

void func_02005750(void) {
    func_020056c8(0);
}

extern void func_020056c8(s32);
void func_02005760(void) {
    func_020056c8(1);
}

void func_02005770(void) {
    func_020056c8(2);
}

void func_02005780(void) {
    func_020056c8(3);
}

extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern u8 data_027e0000[];
extern u8 data_027e0060[];
extern u8 data_0215cd7c[];
extern u16 data_02145ba8[];
extern u8 data_0215cd84[];
extern u8 data_0215cd80[];
extern void func_020059e4(u32);
void func_02005790(void) {
    func_020056c8(4);
}

void func_020057a0(void) {
    func_020056c8(5);
}

void func_020057b0(void) {
    func_020056c8(6);
}

void func_020057c0(void) {
    func_020056c8(7);
}

void func_020057d0(void) {
    *(u32 *)(data_027e0060 + 4) = 0;
    *(u32 *)data_027e0060 = 0;
}

u32 func_020059b4(u32 arg0) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    u32 old = *(volatile u32 *)(0x04000208 + 8);
    *(volatile u32 *)(0x04000208 + 8) = old | arg0;
    (void)*(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
    return old;
}

extern u32 data_0215cdac[];
extern u32 data_0215cdb0[];
extern u32 data_0215cdb4[];
u32 func_02005a14(u32 arg0) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    u32 old = *(volatile u32 *)(0x04000208 + 0xc);
    *(volatile u32 *)(0x04000208 + 0xc) = arg0;
    (void)*(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
    return old;
}

extern u16 data_0215cddc;
u16 func_02005a74(void) {
    return data_0215cddc;
}

void func_02005bfc(s32 arg0, s32 arg1, s32 arg2) {
    func_02005bb0(arg0, arg1, arg2, 0);
}

extern void func_02005c0c(s32, s32, s32, s32);
void func_02005c80(s32 arg0, s32 arg1, s32 arg2) {
    func_02005c0c(arg0, arg1, arg2, 0);
}

