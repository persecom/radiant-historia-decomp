/* 32 functions from 0x02135F40 to 0x02136E94 (main), found by ds-decomp. */
#include "common.h"

extern void func_02136958(void);
extern void func_02136a3c(void);
extern s16 *func_02136210(void *, void *, u32);
extern void func_02135f0c(void *, u16 *, u16 *);

extern void func_0213807c(void);
void func_021369a8(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_021369b4(void) {
    func_0213808c();
}

extern void func_02138130(void);
void func_021369c0(void) {
    func_02138130();
}

void func_02136a24(void) {
    func_02136958();
    func_021369a8();
    func_02136a3c();
    func_021369b4();
}

extern s32 func_02136b34(void *, void *);
s32 func_02136b08(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02136b34(arg0, arg1);
    func_021369b4();
    return ret;
}

extern void func_02136be4(void *);
void func_02136bc8(void *arg0) {
    func_021369a8();
    func_02136be4(arg0);
    func_021369b4();
}

extern void *func_02136c68(void *);
void *func_02136c44(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02136c68(arg0);
    func_021369b4();
    return ret;
}

extern void func_02136ce8(u32, u32, u32);
void func_02136cbc(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02136ce8(arg0, arg1, arg2);
    func_021369b4();
}

extern void func_02136d54(void *);
void func_02136d38(void *arg0) {
    func_021369a8();
    func_02136d54(arg0);
    func_021369b4();
}

extern s32 func_02136dd8(void *, void *);
s32 func_02136dac(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02136dd8(arg0, arg1);
    func_021369b4();
    return ret;
}

