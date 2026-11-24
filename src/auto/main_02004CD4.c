/* 55 functions from 0x02004CD4 to 0x02005C90 (main), found by ds-decomp. */
#include "common.h"

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

void func_02005750(void) {
    func_020056c8(0);
}

extern void func_020056c8(s32);
void func_02005760(void) {
    func_020056c8(1);
}

void func_02005780(void) {
    func_020056c8(3);
}

extern u16 data_0215cddc;
u16 func_02005a74(void) {
    return data_0215cddc;
}

void func_02005bfc(s32 arg0, s32 arg1, s32 arg2) {
    func_02005bb0(arg0, arg1, arg2, 0);
}

