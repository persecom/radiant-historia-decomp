/* 23 functions from 0x02075C08 to 0x0207698C (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0213a394[];
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
void func_02075c08(u32 *arg0, u32 *arg1) {
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

u32 func_02075c5c(u32 *arg0, u32 arg1) {
    u32 val = arg0[1] * arg0[0] + arg0[2];
    u32 res = val >> 16;
    *arg0 = val;
    if (arg1 != 0) {
        arg1 = arg1 * res;
        res = arg1 >> 16;
    }
    return (u16)res;
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

extern u8 *data_021600ec;
u32 func_020764e4(void) {
    return (u32)data_021600ec;
}

void func_020766ec(void) {
    func_02107104();
    func_02075c98();
    if (data_021600ec != NULL) {
        if (*(void **)(data_021600ec + 0x78) != NULL) {
            func_0210c5dc(*(void **)(data_021600ec + 0x78));
            *(void **)(data_021600ec + 0x78) = NULL;
        }
        func_0210dba0(data_021600ec + 0x14);
        func_0210dbe8(data_021600ec + 0x28);
        func_0210da14(data_021600ec);
        func_0210dc2c(data_021600ec + 0x3c);
        if (data_021600ec != NULL) {
            func_0210c5dc(data_021600ec);
        }
        data_021600ec = NULL;
    }
    func_0210e290(0);
    data_02162858 = 0;
    data_02162854 = 0;
    func_0210f138();
}

void func_020767a0(void) {
    u8 *r4 = (u8 *)func_020764e4();
    switch (*(u8 *)(r4 + 0x54)) {
    case 0:
        func_020772b8();
        if (*(s32 *)(r4 + 0x6c) <= 0x1cd4) {
            func_02077180(0, *(s32 *)(r4 + 0x70));
        }
        func_02077110(*(s32 *)(r4 + 0x6c));
        break;
    case 1:
    case 2:
    case 3:
        break;
    }
}

void func_020767fc(void) {
    u8 *r4 = (u8 *)func_020764e4();
    switch (*(u8 *)(r4 + 0x54)) {
    case 0:
        func_020772b8();
        if (*(s32 *)(r4 + 0x6c) <= 0x1cd4) {
            func_02077180(1, *(s32 *)(r4 + 0x70));
        }
        func_02077110(*(s32 *)(r4 + 0x6c) + 0xf2);
        break;
    case 1:
        break;
    case 2:
        func_020763ec(*(u32 *)(r4 + 0xa8));
        break;
    case 3:
        break;
    }
}

void func_02076868(void) {
    u8 *r4 = (u8 *)func_020764e4();
    s32 val = *(s32 *)(r4 + 0x6c);
    if (val <= 0x1fc2) {
        *(s32 *)(r4 + 0x6c) = val + 1;
    } else {
        func_0207763c();
        *(u8 *)(r4 + 0x54) = 2;
        return;
    }
    val = *(s32 *)(r4 + 0x6c);
    if (val < 180) {
        *(s32 *)(r4 + 0x70) = 0;
    } else {
        *(s32 *)(r4 + 0x70) = (val - 180) % 300;
    }
    if (data_021626a8 & 8) {
        *(u8 *)(r4 + 0x54) = 1;
        func_02108ea4(0, 1000, 1);
        return;
    }
    func_02075fb8(*(s32 *)(r4 + 0x6c));
}

u8 func_02076914(s32 arg0) {
    s32 y0, y1;
    s16 x, y;
    if (*(u16 *)((u8 *)data_02162908 + 4) == 0) {
        return 0;
    }
    if (data_021628f8 == 0) {
        return 0;
    }
    y0 = arg0 * 20 + 0x84;
    y1 = arg0 * 20 + 0x96;
    x = data_02162908[0];
    y = data_02162908[1];
    return (u8)(x >= 0x8a && x <= 0xff && y >= y0 && y <= y1);
}

