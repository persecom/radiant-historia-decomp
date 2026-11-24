/* 33 functions from 0x020C641C to 0x020C7408 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void *func_020c641c(void);
extern void func_020c738c(void *, s32, s32);
extern s32 func_020c73c0();
extern void func_021098ac(void *);
extern void func_020a3bbc(u16);
extern s16 data_02160220[10];
extern s16 data_02162908[4];
extern u16 data_021628f8;
extern u16 data_021626aa;
void func_020c6ef4(u8 *arg0);
s32 func_020c6e40(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
void func_020c6e2c(void *, void *);
void func_020c6d4c(u8 *arg0) {
    (*(void (**)(void *))(arg0 + 4))(arg0);
}

void *func_020c6d5c(void) {
    void *ptr = func_020c641c();
    (*(void (**)(void *))ptr)(ptr);
    return ptr;
}

s32 func_020c6d78(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    func_020c738c(arg0, 0, 0);
    return 0;
}

void func_020c6da0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6db4(void) {
    return 1;
}

s32 func_020c6dbc(u8 *arg0) {
    arg0[0x42] = 0x1f;
    arg0[0x43] = 0x2d;
    *(void **)(arg0 + 0x48) = (void *)func_020c6ef4;
    return 0;
}

void func_020c6de0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6df4(u8 *arg0) {
    u8 val = arg0[0x42];
    if (val == 0) {
        return 0;
    }
    *(volatile u32 *)0x040004a4 = (val << 16) | 0xc0;
    func_020c6e2c(arg0, arg0 + 0x30);
    return 0;
}

void func_020c6e2c(void *arg0, void *arg1) {
    func_020c6e40(arg0, arg1, 0, 0);
}

s32 func_020c6e40(void *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s16 v2, v4, v6, v8, va, vc, ve, v10;
    u8 v13, v14, v15;
    s32 s5, s6;
    if (func_020c73c0() == 0) {
        return 2;
    }
    (*(void (**)(void *))(arg1 + 0x18))(arg0);
    v2 = *(s16 *)(arg1 + 2);
    data_02160220[0] = 1;
    v4 = *(s16 *)(arg1 + 4);
    data_02160220[1] = v2;
    v6 = *(s16 *)(arg1 + 6);
    data_02160220[2] = v4;
    va = *(s16 *)(arg1 + 0xa);
    v14 = arg1[0x14];
    v8 = *(s16 *)(arg1 + 8);
    data_02160220[3] = v6;
    s5 = va + v14;
    vc = *(s16 *)(arg1 + 0xc);
    v15 = arg1[0x15];
    data_02160220[4] = v8;
    s5 = arg2 + s5;
    s6 = vc + v15;
    v13 = arg1[0x13];
    data_02160220[5] = s5;
    s6 = arg3 + s6;
    data_02160220[6] = s6;
    ve = *(s16 *)(arg1 + 0xe);
    data_02160220[7] = v13;
    v10 = *(s16 *)(arg1 + 0x10);
    data_02160220[8] = ve;
    data_02160220[9] = v10;
    func_021098ac(data_02160220);
    return 0;
}

void func_020c6ef4(u8 *arg0) {
    func_020a3bbc(*(u16 *)(arg0 + 0x30));
}

void func_020c6f04(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
}

void func_020c6f0c(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3c) = arg1;
}

extern s32 func_020c73d8();
extern s32 func_020c6fe4(u8 *);
extern s32 func_020c7048(u8 *);
extern void func_020c7090(u8 *);
s32 func_020c6f14(u8 *arg0) {
    u8 val = func_020c73d8(arg0);
    if (func_020c73d8(arg0) != 0) {
        if (func_020c7048(arg0) == 0) {
            return 1;
        }
        func_020c738c(arg0, 0, 2);
        func_020c738c(arg0, 0, 0x10);
        return 0;
    }
    if (data_021628f8 == 0) {
        return 1;
    }
    if (((u16 *)data_02162908)[2] == 0) {
        return 1;
    }
    if (func_020c6fe4(arg0) != 0) {
        goto two;
    }
    if (val == 0) {
        func_020c7090(arg0);
        func_020c738c(arg0, 0x10, 0x10);
    }
    return 0;
two:
    return 2;
}

s32 func_020c6fe4(u8 *arg0) {
    s32 y = *(s16 *)(arg0 + 0x3c);
    s32 y2 = y + *(s16 *)(arg0 + 0x40);
    s32 x = *(s16 *)(arg0 + 0x3a);
    s32 x2 = x + *(s16 *)(arg0 + 0x3e);
    s32 px = data_02162908[0];
    s32 py = data_02162908[1];
    u8 inside = (px >= x && px <= x2 && py >= y && py <= y2);
    return inside ? 0 : 1;
}

s32 func_020c7048(u8 *arg0) {
    if (arg0[0x46] != 0) {
        arg0[0x46]--;
    } else {
        return 1;
    }
    return 0;
}

void func_020c706c(u8 *arg0, u8 arg1) {
    arg0[0x42] = arg1;
}

void func_020c7074(u8 *arg0, u8 arg1, u8 arg2) {
    arg0[0x44] = arg1;
    arg0[0x45] = arg2;
}

s32 func_020c7080(void) {
    return 1;
}

void func_020c7088(u8 *arg0, u8 arg1) {
    arg0[0x43] = arg1;
}

void func_020c70a0(u8 *arg0, u8 arg1);
void func_020c7090(u8 *arg0) {
    func_020c70a0(arg0, 4);
}

void func_020c70a0(u8 *arg0, u8 arg1) {
    func_020c738c(arg0, 2, 2);
    arg0[0x46] = arg1;
}

s32 func_020c70c0(u8 *arg0, u32 arg1) {
    if (((u16 *)data_02162908)[2] == 0) {
        goto block_c;
    }
    if (data_021628f8 == 0) {
        goto block_a;
    }
    if (func_020c6fe4(arg0) != 0) {
        goto block_a;
    }
    func_020c7090(arg0);
    func_020c738c(arg0, 0x10, 0x10);
    arg0[0x47] = 0xc;
    return 1;
block_a:
    if (func_020c6fe4(arg0) != 0) {
        goto block_b;
    }
    if (arg0[0x47] != 0) {
        goto decrement;
    }
    if (func_020c73d8(arg0) == 0) {
        goto block_b;
    }
    return 1;
decrement:
    arg0[0x47]--;
    return 0;
block_c:
    if ((data_021626aa & arg1) != 0) {
        return 0;
    }
block_b:
    if (func_020c7048(arg0) != 0) {
        func_020c738c(arg0, 0, 2);
        func_020c738c(arg0, 0, 0x10);
    }
    return 0;
}

s32 func_020c71bc(u8 *arg0) {
    func_020c6dbc(arg0);
    *(s32 *)(arg0 + 0x4c) = 1;
    return 0;
}

void func_020c71d8(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c7384(void) {
    return 2;
}

void func_020c738c(void *arg0, s32 arg1, s32 arg2) {
    *(volatile u16 *)((u8 *)arg0 + 0x2c) &= (u16)~arg2;
    *(volatile u16 *)((u8 *)arg0 + 0x2c) |= (u16)(arg1 & arg2);
}

u16 func_020c73b8(u16 *arg0) {
    return arg0[0x16];
}

s32 func_020c73c0(u16 *arg0) {
    return (func_020c73b8(arg0) & 1) == 0;
}

s32 func_020c73d8(u16 *arg0) {
    return (func_020c73b8(arg0) & 2) != 0;
}

s32 func_020c73f0(u16 *arg0) {
    return (func_020c73b8(arg0) & 0x10) != 0;
}

