/* 6 functions from 0x020CB1F4 to 0x020CC09C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160238;

void func_020cb1f4(void) {
}

void func_020cb1f8(void) {
}

extern u8 *data_02160234;
extern u8 *data_0216020c;
extern s32 data_02162884;
extern s32 data_02162814;
extern void func_020bec04(u16);
extern void func_020bebc8(u16);
void func_020cb1fc(void) {
    u8 *p = data_02160234;
    *(s16 *)(p + 0x8e) += 1;
    if (*(s16 *)(p + 0x8e) > 18) {
        *(s16 *)(p + 0x8e) = 18;
    }
    func_020bec04(*(u32 *)(data_0216020c + 0x84));
    func_020bebc8(*(u32 *)(data_0216020c + 0x80));
    if (*(s16 *)(p + 0x8e) <= 6) {
        data_02162884 = (*(s16 *)(p + 0x8e) * 16) / 6 - 16;
        data_02162814 = (*(s16 *)(p + 0x8e) * 16) / 6 - 16;
    } else if (*(s16 *)(p + 0x8e) > 8 && *(s16 *)(p + 0x8e) <= 12) {
        data_02162884 = 0;
        data_02162814 = 0;
    } else if (*(s16 *)(p + 0x8e) > 12) {
        data_02162884 = -((*(s16 *)(p + 0x8e) - 12) * 16) / 6;
        data_02162814 = -((*(s16 *)(p + 0x8e) - 12) * 16) / 6;
    }
}

extern u8 *data_02160200;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020c6d4c(void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a957c(void *);
extern void func_020a9544(void *);
extern void func_020a3b84(void);
extern void func_02107104(void);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210f138(void);
void func_020cbd20(void) {
    u8 *node;
    u8 i;
    u8 j;
    u8 k;
    s32 off;

    while ((node = *(u8 **)(data_02160238 + 0x740)) != NULL) {
        func_021168f8(data_02160238 + 0x740, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    while ((node = *(u8 **)(data_02160238 + 0x74c)) != NULL) {
        func_021168f8(data_02160238 + 0x74c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    while ((node = *(u8 **)(data_02160238 + 0x758)) != NULL) {
        func_021168f8(data_02160238 + 0x758, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    while ((node = *(u8 **)(data_02160238 + 0x764)) != NULL) {
        func_021168f8(data_02160238 + 0x764, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    for (j = 0; j < 4; j++) {
        func_020c6d4c(*(void **)(data_02160238 + j * 4 + 0x6f0));
        *(void **)(data_02160238 + j * 4 + 0x6f0) = NULL;
    }

    for (i = 0; i < 16; i++) {
        off = i * 0x50;
        func_020a994c(data_02160238 + 0x64 + off);
        func_020a98a0(data_02160238 + 0x64 + off);
        {
            u8 *obj = *(u8 **)(data_02160238 + off + 0x60);
            ((void (*)(void *))(*(void **)(obj + 0xc)))(obj);
        }
    }

    for (i = 0; i < 8; i++) {
        u8 *p = *(u8 **)(data_02160238 + i * 4 + 0x40);
        if (p != NULL && *(void **)p != NULL) {
            func_020a957c(data_02160238 + 0x40 + i * 4);
        }
    }

    for (k = 0; k < 4; k++) {
        off = k * 0x64;
        {
            u8 *obj = *(u8 **)(data_02160238 + off + 0x560);
            ((void (*)(void *))(*(void **)(obj + 0xc)))(obj);
        }
        func_020a98a0(data_02160238 + 0x564 + off);
    }

    func_020a9544(*(void **)(data_02160238 + 0x700));
    func_020a9544(*(void **)(data_02160238 + 0x704));

    if (*(u32 *)(data_02160200 + 0x160) & 0x80) {
        *(u32 *)(data_02160200 + 0x160) &= ~0x80;
    }

    func_020a3b84();
    func_02107104();

    if (data_02160238 != NULL) {
        func_0210da14(data_02160238 + 0x4);
        func_0210dba0(data_02160238 + 0x18);
        func_0210dbe8(data_02160238 + 0x2c);
        if (data_02160238 != NULL) {
            func_0210c5dc(data_02160238);
            data_02160238 = NULL;
        }
    }

    func_0210f138();
}

extern u32 data_02162868;
extern u8 data_0215137c[16];
extern u8 *data_02160238;
extern u8 *data_02160204;
extern u8 data_021512f0;
extern void func_02108e54(s32);
extern void func_020cb320(void);
extern s32 func_020bdf24(const char *, ...);
extern void func_0210968c(s32, s32, s32);
extern void func_02109790(s32);
extern void func_020cbd20(void);
extern void func_0210dc88(void);
extern void func_02008250(u32);
s32 func_020cbfa8(void) {
    s32 zero = 0;
    s32 one = 1;
    data_02162868 = one;
    func_02108e54(zero);
    func_02108e54(one);
    func_020cb320();
    func_020bdf24(data_0215137c);
    func_0210968c(3, zero, 10);
    if (*(u8 *)(data_02160238 + 0x771) == zero) {
        func_0210dc88();
    } else {
        func_0210968c(3, -16, 20);
        func_02109790(3);
        func_020cbd20();
        func_0210dc88();
    }
    data_02162868 = zero;
    if (*(u8 *)(data_02160204 + 0xd6) == 0x1f) {
        if (data_021512f0 == zero) {
            func_02008250(*(u32 *)0x02fffc20 + one);
        } else {
            return 2;
        }
    }
    return *(u8 *)(data_02160204 + 0xd6);
}

