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
extern u32 func_020059b4(u32);
typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} UnkCD;
extern UnkCD data_0215cdac[];
extern UnkCD data_0215cdb0[];
extern UnkCD data_0215cdb4[];

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
extern s32 func_0200a6e4(s32, u32, s32);
extern u16 data_0215cddc;
extern void func_02008414(void);
extern s32 func_02005c90(s32, s32, s32, s32);
extern void WaitByLoop(s32);
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

void func_020057e8(u32 arg0, u32 arg1) {
    u8 (*base)[12] = (u8 (*)[12])data_0215cd7c;
    s32 i;
    for (i = 0; i < 0x16; i++) {
        if (arg0 & 1) {
            u8 *rec = NULL;
            if (i >= 8 && i <= 0xb) {
                rec = base[i - 8];
            } else if (i >= 3 && i <= 6) {
                rec = base[i + 1];
            }
            *(u32 *)(data_027e0000 + i * 4) = arg1;
            if (rec != NULL) {
                *(u32 *)(rec + 0) = arg1;
                *(u32 *)(rec + 8) = 0;
                *(u32 *)(rec + 4) = 1;
            }
        }
        arg0 >>= 1;
    }
}

u32 func_02005870(u32 arg0) {
    s32 i;
    u32 *p = (u32 *)data_027e0000;
    for (i = 0; i < 0x16; i++) {
        if (arg0 & 1) {
            if (i >= 8 && i <= 0xb) {
                return *(u32 *)(data_0215cd7c + (i - 8) * 12);
            }
            if (i >= 3 && i <= 6) {
                return *(u32 *)(data_0215cd7c + (i + 1) * 12);
            }
            return *p;
        }
        arg0 >>= 1;
        p++;
    }
    return 0;
}

void func_020058fc(u32 index, u32 arg1, u32 arg2) {
    u32 offset = index * 12;
    u32 bit = 1 << (index + 8);
    *(u32 *)(data_0215cd7c + offset) = arg1;
    *(u32 *)(data_0215cd84 + offset) = arg2;
    *(u32 *)(data_0215cd80 + offset) = func_020059b4(bit) & bit;
}

void func_02005944(s32 arg0, u32 arg1, u32 arg2) {
    data_0215cdac[arg0].unk0 = arg1;
    data_0215cdb4[arg0].unk0 = arg2;
    func_020059b4(1 << (arg0 + 3));
    data_0215cdb0[arg0].unk0 = 1;
}

u32 func_02005988(u32 arg0) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    u32 old = *(volatile u32 *)0x04000210;
    *(volatile u32 *)0x04000210 = arg0;
    *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
    return old;
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

u32 func_02005a14(u32 arg0) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    u32 old = *(volatile u32 *)(0x04000208 + 0xc);
    *(volatile u32 *)(0x04000208 + 0xc) = arg0;
    (void)*(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
    return old;
}

void func_02005a40(void) {
    u32 dtcm = (u32)data_027e0000;
    *(volatile u32 *)(dtcm + 0x3f7c) = 0xfddb597d;
    *(volatile u32 *)(dtcm + 0x3f80 - 0x400) = 0x7bf9dd5b;
}

extern u16 data_0215cddc;
u16 func_02005a74(void) {
    return data_0215cddc;
}

void func_02005a84(u32 arg0, s32 arg1) {
    if ((u16)((arg1 & 0x7f00) >> 8) == 0x10) {
        data_0215cddc = 1;
        return;
    }
    func_02008414();
}

void func_02005ab4(u32 arg0) {
    while (func_0200a6e4(0xc, arg0 << 8, 0) != 0) {}
}

void func_02005bb0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    while (func_02005c90(arg0, arg1, arg2, arg3) > 0) {
        WaitByLoop(0x400);
    }
}

void func_02005bfc(s32 arg0, s32 arg1, s32 arg2) {
    func_02005bb0(arg0, arg1, arg2, 0);
}

extern u32 func_02008154(void);
extern void func_02008168(u32);
s32 func_02005c0c(u32 arg0, void *arg1, void (*arg2)(void), BOOL arg3) {
    u32 r4;
    if (arg0 != *(u16 *)((u8 *)arg1 + 4)) {
        return -2;
    }
    if (arg3) {
        r4 = func_02008154();
    } else {
        r4 = func_02008128();
    }
    *(u16 *)((u8 *)arg1 + 4) = 0;
    if (arg2 != NULL) {
        arg2();
    }
    *(u32 *)arg1 = 0;
    if (arg3) {
        func_02008168(r4);
    } else {
        func_0200813c(r4);
    }
    return 0;
}

extern s32 func_02005c0c();
void func_02005c80(s32 arg0, s32 arg1, s32 arg2) {
    func_02005c0c(arg0, arg1, arg2, 0);
}

