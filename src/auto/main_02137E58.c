/* 53 functions from 0x02137E58 to 0x02138E00 (main), found by ds-decomp. */
#include "common.h"

extern void func_021390fc(void *);
extern void func_0213807c(void);
extern void func_0213808c(void);
extern void func_02138280(void);
extern void func_02137fc8(s32);
extern void func_02136958(void);
extern void func_02137ec4(void);
extern void func_02137f34(void);
extern void func_0213841c(s32);
extern void func_02137250(void *, void *);
extern u8 data_0215c604[12];
extern u8 data_0215c610[28];
extern u8 data_0215c62c[12];
extern u8 data_0215c638[32];
extern s32 data_02176400;
extern u32 data_02176404[144];
extern void *memset(void *, int, unsigned long);
void *func_02137e58(void *arg0) {
    if (arg0 == NULL) {
        func_02137250(data_0215c604, data_0215c610);
        return NULL;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_02137250(data_0215c62c, data_0215c638);
        return NULL;
    }
    return *(void **)((u8 *)arg0 + 0x24);
}

void func_02137eac(void) {
    func_02136958();
    func_021369a8();
    func_02137ec4();
    func_021369b4();
}

void func_02137ec4(void) {
    if (data_02176400 == 0) {
        memset(data_02176404, 0, sizeof(data_02176404));
    }
    data_02176400++;
}

void func_02137f1c(void) {
    func_021369a8();
    func_02137f34();
    func_021369b4();
    func_02136980();
}

void func_02137f34(void) {
    data_02176400--;
    if (data_02176400 == 0) {
        memset(data_02176404, 0, sizeof(data_02176404));
    }
}

void func_02137f80(s32 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 ptr = *(volatile s32 *)arg0;
    s32 len = *(volatile s32 *)(arg0 + 1);
    s32 rem;
    *(volatile s32 *)arg2 = ptr;
    *(volatile s32 *)(arg2 + 1) = len;
    arg3[1] = len;
    if (arg2[1] > arg1) {
        arg2[1] = arg1;
    }
    rem = arg3[1] - arg2[1];
    arg3[1] = rem;
    arg3[0] = (rem == 0) ? 0 : (arg2[0] + arg2[1]);
}

void func_0213807c(void) {
    func_02137fc8(1);
}

extern void func_0213800c(s32);
void func_0213808c(void) {
    func_0213800c(1);
}

void func_0213809c(void) {
    func_02137fc8(3);
}

void func_021380ac(void) {
    func_0213800c(3);
}

extern s32 func_021381cc(u8 *, s32, s32, s32 *);
s32 func_02138190(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 ret;
    func_0213807c();
    ret = func_021381cc(arg0, arg1, arg2, arg3);
    func_0213808c();
    return ret;
}

void func_0213825c(void *arg0, void *arg1) {
    func_0213807c();
    ((void (*)(void *, void *))func_02138280)(arg0, arg1);
    func_0213808c();
}

void func_021384a0(void) {
    func_0213841c(0);
}

extern void func_0213841c(s32);
void func_021384b0(void) {
    func_0213841c(1);
}

void func_021384c0(void) {
    func_0213841c(2);
}

void func_021384d0(void) {
    func_0213841c(3);
}

void func_021384e0(void) {
    func_0213841c(4);
}

void func_021384f0(void) {
    func_0213841c(5);
}

void func_02138500(void) {
    func_0213841c(6);
}

void func_02138510(void) {
    func_0213841c(7);
}

void func_021386f0(void *arg0) {
    if (arg0 != NULL) {
        func_021390fc(arg0);
    }
}

u32 func_02138ae8(u8 *arg0) {
    return *(u32 *)(arg0 + 0x58);
}

s8 func_02138d60(u8 *arg0) {
    return *(s8 *)(arg0 + 0x94);
}

void func_02138dd8(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb0) = arg1;
}

void func_02138de0(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb4) = arg1;
}

void func_02138de8(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb8) = arg1;
}

void func_02138df0(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0xbc) = arg1;
}

