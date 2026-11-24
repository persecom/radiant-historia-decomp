/* 40 functions from 0x02127E74 to 0x02128B80 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s8 field_0;
    u8 field_1[0xc3];
} Unk_02173ad4;

extern Unk_02173ad4 data_02173ad4[4];
extern void func_02127e74(u8 *);

typedef struct {
    u8 f0;
    u8 f1;
    s8 f2;
    s8 f3;
    void *f4;
    void *f8;
    u8 padc[4];
    void *f10;
    u32 f14;
    void *arr[4];
    u8 pad28[0x14];
    s16 f3c;
    s16 f3e;
    u8 pad40[0xc];
    u32 f4c;
    u8 pad50[0x21];
    u8 f71;
    u8 pad72[2];
    void *f74;
    u8 pad78[0x14];
    u32 f8c;
    u32 f90;
    u8 pad94[8];
    u32 f9c;
    u32 fa0;
    u32 fa4;
    u8 padA8[0x18];
    u32 fc0;
} Unk_02128030;

extern void *data_02173ac0;
extern void *data_0215677c;
extern void func_0212c7b8(void *, void *);
extern void func_0212c7f0(void *);
extern void func_0212e5b8(void *);
extern void func_0212e538(void *, s32, s32);
extern void func_0212ddf0(void *, void *);
extern void func_0212ddb8(void *, u32, u32);
extern void func_0212dc14(void *, void *);
extern void func_0212dce4(void *);
extern void func_0212db28(void *);
extern void func_0212da70(void *, u32, u32, u32, u64);
extern s32 func_0212dc94(void *);

extern void func_0212a9f4(void);
extern void func_021281cc(void *);
extern void func_0212a9f8(void);
extern void func_02127ff4(void);
void func_02127fe0(void) {
    func_0212a9f4();
    func_02127ff4();
    func_0212a9f8();
}

void func_02127ff4(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_02173ad4[i].field_0 == 1) {
            func_02127e74((u8 *)&data_02173ad4[i]);
        }
    }
}

void func_021280f0(Unk_02128030 *arg0, u32 arg1, u32 arg2, u32 arg3, s32 arg4) {
    func_0212e538(arg0->f8, (s16)arg0->f3e << 11, (s16)arg0->f3c << 11);
    func_0212ddf0(arg0->f8, data_0215677c);
    func_0212ddb8(arg0->f8, 0, 0);
    func_0212dc14(arg0->f8, 0);
    func_0212dce4(arg0->f8);
    func_0212db28(arg0->f8);
    func_0212da70(arg0->f8, arg1, arg2, arg3, (u64)((s64)arg4 << 11));
    func_0212dc94(arg0->f8);
    func_02128030(arg0, arg0->f10);
}

void func_021281b0(void *arg0) {
    func_0212a9f4();
    func_021281cc(arg0);
    func_0212a9f8();
}

extern void func_02128268(void *);
void func_0212824c(void *arg0) {
    func_0212a9f4();
    func_02128268(arg0);
    func_0212a9f8();
}

extern void *func_021282f0(void *);
void *func_021282cc(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_021282f0(arg0);
    func_0212a9f8();
    return ret;
}

extern void *func_02128338(void *);
void *func_02128314(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_02128338(arg0);
    func_0212a9f8();
    return ret;
}

extern void func_021283a0(u32, u32, u32);
void func_02128374(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_021283a0(arg0, arg1, arg2);
    func_0212a9f8();
}

extern void func_021284e0(void);
void func_021284bc(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021284e0)(arg0, arg1);
    func_0212a9f8();
}

extern void *func_02128554(void *);
void *func_02128530(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_02128554(arg0);
    func_0212a9f8();
    return ret;
}

extern void func_0212859c(void *);
void func_02128580(void *arg0) {
    func_0212a9f4();
    func_0212859c(arg0);
    func_0212a9f8();
}

extern void func_021285c4(void);
void func_021285b0(void) {
    func_0212a9f4();
    func_021285c4();
    func_0212a9f8();
}

extern void func_021286c0(void);
void func_0212869c(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021286c0)(arg0, arg1);
    func_0212a9f8();
}

extern void func_021287c0(void);
void func_0212879c(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021287c0)(arg0, arg1);
    func_0212a9f8();
}

extern void *func_021287f4(void *);
void *func_021287d0(void *arg0) {
    void *ret;
    func_0212a9f4();
    ret = func_021287f4(arg0);
    func_0212a9f8();
    return ret;
}

extern void func_02128878(u32, u32, u32);
void func_02128820(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_02128878(arg0, arg1, arg2);
    func_0212a9f8();
}

extern void func_0212887c(u32, u32, u32);
void func_0212884c(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_0212887c(arg0, arg1, arg2);
    func_0212a9f8();
}

void func_02128878(u32 arg0, u32 arg1, u32 arg2) {
}

void func_0212887c(u32 arg0, u32 arg1, u32 arg2) {
}

extern void func_021288a4(void);
void func_02128880(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_021288a4)(arg0, arg1);
    func_0212a9f8();
}

