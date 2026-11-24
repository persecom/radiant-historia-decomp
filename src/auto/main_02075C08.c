/* 23 functions from 0x02075C08 to 0x0207698C (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02155c3c;
extern void func_02076dcc(void);
extern void func_02076d6c(void);
extern void func_020767a0(void);
extern void func_020767fc(void);
extern void func_020a2c20(void);
extern void func_021070c4(void);
extern void func_0210f6d4(void);
extern void *func_0210c594(u32, u32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0210dc00(void *);
extern void func_02077314(void);
extern void func_020774a4(void);
extern void func_02075ca4(void);
extern u8 data_0213a394[];
extern u32 func_020764e4(void);
typedef struct { u32 a, b, c; } Unk_02075c08;
extern void *func_02109b14(s32, void *);
extern void func_02006dc4(void *, u32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02004588(void);
extern void func_020045bc(u32, u32, u32);
extern void func_0200462c(void);
extern void func_0203be4c(void *);

extern void func_021168f8(void);
void func_02075c08(volatile u32 *arg0, volatile u32 *arg1) {
    u32 a = arg1[0];
    u32 b = arg1[1];
    u32 c = arg1[2];
    arg0[0] = a;
    arg0[1] = b;
    arg0[2] = c;
}

s32 func_02075c24(s32 arg0) {
    return *(s16 *)(data_0213a394 + (arg0 >> 4) * 4);
}

s32 func_02075c3c(s32 arg0) {
    s16 *p = (s16 *)data_0213a394;
    return p[(arg0 >> 4) * 2 + 1];
}

u16 func_02075c5c(u32 *arg0, u32 arg1) {
    u32 val = arg0[1] * arg0[0] + arg0[2];
    *arg0 = val;
    if (arg1 == 0) {
        return val >> 16;
    } else {
        return ((val >> 16) * arg1) >> 16;
    }
}

void func_02075c84(void) {
    func_021168f8();
}

s32 func_02075c90(void) {
    return 0;
}

extern void func_0207630c(void);
void func_02075c98(void) {
    func_0207630c();
}

void func_02075f18(s32 arg0, u8 *arg1) {
    u8 *r5 = (u8 *)func_020764e4();
    s32 sp0;
    void *p = func_02109b14(arg0, &sp0);
    func_02006dc4(p, sp0);
    *(u32 *)(r5 + 0x84) = (*(u32 *)(arg1 + 0) & 0xffff) << 3;
    *(void **)(r5 + 0x7c) = p;
    *(u32 *)(r5 + 0x8c) = sp0;
}

void func_02075f6c(s32 arg0, u8 *arg1) {
    u8 *r5 = (u8 *)func_020764e4();
    s32 sp0;
    void *p = func_02109b14(arg0, &sp0);
    func_02006dc4(p, sp0);
    *(u32 *)(r5 + 0x88) = (*(u32 *)(arg1 + 8) & 0xffff) << 3;
    *(void **)(r5 + 0x80) = p;
}

void func_0207628c(void) {
    u8 *r4 = (u8 *)func_020764e4();

    if (*(volatile u32 *)(r4 + 0x90) == 0) {
        return;
    }
    if (*(volatile void **)(r4 + 0x7c) != NULL) {
        func_0200439c();
        func_020043f8(*(void **)(r4 + 0x7c), *(u32 *)(r4 + 0x84), *(u32 *)(r4 + 0x8c));
        func_02004544();
        *(u32 *)(r4 + 0x94) = 1;
    }
    if (*(volatile u32 *)(r4 + 0x98) == 0) {
        return;
    }
    if (*(volatile void **)(r4 + 0x80) != NULL) {
        func_02004588();
        func_020045bc(*(u32 *)(r4 + 0x80), *(u32 *)(r4 + 0x88), 0x200);
        func_0200462c();
        *(u32 *)(r4 + 0x9c) = 1;
    }
}

extern u32 func_020764e4(void);
void func_0207630c(void) {
    u8 *r4 = (u8 *)func_020764e4();

    func_0203be4c(*(void **)(r4 + 0x58));
    func_0203be4c(*(void **)(r4 + 0x5c));
    func_0203be4c(*(void **)(r4 + 0x60));
    func_0203be4c(*(void **)(r4 + 0x64));
    func_0203be4c(*(void **)(r4 + 0x68));
    func_0203be4c(*(void **)(r4 + 0xac));
    func_0203be4c(*(void **)(r4 + 0xb0));
    func_0203be4c(*(void **)(r4 + 0xb4));
    *(u32 *)(r4 + 0x58) = 0;
    *(u32 *)(r4 + 0x5c) = 0;
    *(u32 *)(r4 + 0x60) = 0;
    *(u32 *)(r4 + 0x64) = 0;
    *(u32 *)(r4 + 0x68) = 0;
    *(u32 *)(r4 + 0xac) = 0;
    *(u32 *)(r4 + 0xb0) = 0;
    *(u32 *)(r4 + 0xb4) = 0;
}

extern void func_020772b8(void);
extern void func_02077180(s32, s32);
extern void func_02077110(s32);
extern void func_020763ec(u32);
extern void func_02107104(void);
extern void func_0210c5dc(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210da14(void *);
extern void func_0210dc2c(void *);
extern void func_0210e290(s32);
extern void func_0210f138(void);
extern u32 data_02162858;
extern u32 data_02162854;
extern void func_0207763c(void);
extern void func_02108ea4(s32, s32, s32);
extern void func_02075fb8(s32);
extern u16 data_021626a8;
extern s16 data_02162908[4];
extern u16 data_021628f8;
void func_02076380(u8 *arg0) {
    s32 shift;
    *(volatile u32 *)0x040004a8 = (*(u32 *)(arg0 + 4) >> 3) | (*(u32 *)(arg0 + 0x18) << 26) |
                                  0x40000000 | (*(u32 *)(arg0 + 0x10) << 20) |
                                  (*(u32 *)(arg0 + 0x14) << 23) | 0x20000000;
    shift = 1;
    if (*(u32 *)(arg0 + 0x18) != 2) {
        shift = 0;
    }
    *(volatile u32 *)0x040004ac = *(u32 *)(arg0 + 0xc) >> (4 - shift);
    *(volatile u32 *)0x04000480 = 0x7fff;
}

extern void func_020a49a4(s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_020763ec(u32 arg0) {
    u8 *r4 = (u8 *)func_020764e4();
    func_02076380(*(u32 *)(r4 + 0xb4));
    func_020a49a4(0x65, 0, 0, 0x20, 0x11, 0, 0x2a, 0xdc, 0x23);
    if (arg0 == 0) {
        func_02076380(*(u32 *)(r4 + 0xb0));
    } else {
        func_02076380(*(u32 *)(r4 + 0xac));
    }
    func_020a49a4(0x65, 0, 0, 0x20, 0x12, 0x8a, 0x84, 0x8c, 0x12);
    if (arg0 == 0) {
        func_02076380(*(u32 *)(r4 + 0xac));
    } else {
        func_02076380(*(u32 *)(r4 + 0xb0));
    }
    func_020a49a4(0x65, 0, 0, 0x20, 0x12, 0x8a, 0x98, 0x8c, 0x12);
}

extern u8 *data_021600ec;
extern void func_020766ec(void);
u32 func_020764e4(void) {
    return (u32)data_021600ec;
}

extern void func_0210968c(s32, s32, s32);
extern void func_02108eec(s32, s32);
extern s32 func_02109264(u32);
extern void func_021089e8(u32, s32, u32);
extern void func_0210dc88(void);
extern void func_02109790(s32);
extern void func_02008250(u32);
extern void func_020766ec(void);
u32 func_020764f4(u32 arg0) {
    s32 zero = 0;
    s32 one = 1;
    if (func_020765e4() != 0) {
        return arg0;
    }
    func_0210968c(3, zero, one);
    func_02108eec(zero, 1000);
    func_02108eec(one, 1000);
    *(u32 *)(data_021600ec + 0x50) = arg0;
    func_02109264(zero);
    func_021089e8(zero, 0x14, one);
    for (;;) {
        if (*(u8 *)(data_021600ec + 0x54) == 3) {
            break;
        }
        func_0210dc88();
    }
    arg0 = *(u32 *)(data_021600ec + 0x50);
    func_0210968c(3, 3 - 0x13, 0x10);
    func_02109790(3);
    func_020766ec();
    func_02108eec(0, 1000);
    func_02108eec(1, 1000);
    if (arg0 != 0x1d) {
        func_02008250(*(u32 *)0x02fffc20 + 1);
    }
    return arg0;
}
