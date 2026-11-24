/* 11 functions from 0x020ACE8C to 0x020ADE8C (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020b442c(void);
extern s32 func_020abf5c(s32, s32, s32, s32, s32);
extern void func_020ae50c(s32);
extern void func_020abf3c(void);
extern u8 *func_020b3880(void);
extern void func_02008f74(void *, s32, u32);
extern void func_020adf34(void *);
extern void func_020ae180(void *);
extern void func_020ae560(void *);
extern void func_020adf14(void);
extern void func_020adfb4(void *);
extern void func_020ae35c(void *);
extern void func_020ae6e8(void *);
extern u8 data_02162908[];
u8 *func_020adda8(void);
s32 func_020ad26c(u8 *arg0) {
    u8 *p = func_020b442c();
    if (func_020abf5c(0, 0, 0x100, 0xC0, 1) != 0) {
        *arg0 = 0;
        func_020ae50c(6);
        func_020abf3c();
        return 2;
    }
    if (*(u16 *)(data_02162908 + 4) == 0) {
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 1;
    } else {
        *(s32 *)(p + 8) = 0;
    }
    return 0;
}

s32 func_020ad2dc(u8 *arg0) {
    u8 *p = func_020b442c();
    if (func_020abf5c(0, 0, 0x100, 0xC0, 1) != 0) {
        *arg0 = 0;
        func_020ae50c(6);
        func_020abf3c();
        return 2;
    }
    if (*(u16 *)(data_02162908 + 4) == 0) {
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 1;
    } else {
        *(s32 *)(p + 8) = 0;
    }
    return 0;
}

u8 *func_020adda8(void) {
    return func_020b3880() + 0x3C;
}

s32 func_020addb8(void) {
    u8 *p = func_020adda8();
    func_02008f74(p, 0, 0x6CC);
    func_020adf34(p);
    func_020ae180(p);
    func_020ae560(p);
    func_020adf14();
    *(s32 *)(p + 0x6C0) = -1;
    *(s32 *)(p + 0x6BC) = -1;
    *(s32 *)(p + 0x6C4) = 0;
    return 1;
}

void func_020ade0c(void) {
    u8 *p = func_020adda8();
    func_020adfb4(p);
    func_020ae35c(p);
    func_020ae6e8(p);
}

void func_020ade30(s32 arg0) {
    u8 *p = func_020adda8();
    *(s32 *)(p + 0x6BC) = arg0;
}

void func_020ade44(s32 arg0) {
    u8 *p = func_020adda8();
    *(s32 *)(p + 0x6BC) = arg0;
    *(s32 *)(p + 0x6C0) = -1;
}

void *func_020ade60(s32 arg0) {
    if (arg0 >= 0 && arg0 < 5) {
        return func_020adda8() + 0xEC + arg0 * 0x10;
    }
    return NULL;
}

