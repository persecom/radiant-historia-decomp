/* 17 functions from 0x0205B710 to 0x0205C65C (main), found by ds-decomp. */
#include "common.h"

typedef struct Unk0205B710_Sub {
    u8 *unk00;
    u8 pad04[0x2a];
    s16 unk2e;
    u8 pad30[0x22];
    s16 unk52;
} Unk0205B710_Sub;

typedef struct Unk0205B710 {
    u8 pad00[0x4];
    s32 unk04;
    u8 pad08[0x20];
    s32 unk28;
    u8 pad2c[0x4];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    u8 pad3c[0xec];
    Unk0205B710_Sub *unk128;
} Unk0205B710;

extern void func_020d4eb8();
extern void func_020d2b78(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern void *func_02022494(void *arg0, s32 arg1);
extern s32 func_020dddfc(void *arg0, void *arg1, s32 arg2);
extern void func_020020f8(void *arg0, void *arg1, void *arg2);
extern u8 *data_02160a6c;
s32 func_0205ba98(void *arg0, s32 arg1) {
    if (func_020dddfc(arg0, (u8 *)arg0 + 0x24, arg1 << 12) != 0) {
        return 1;
    }
    func_020020f8(arg0, (u8 *)arg0 + 0x30, arg0);
    return 0;
}

void *func_0205bad4(void *arg0) {
    u8 *p = func_02022494(arg0, 0);
    if (p != NULL) {
        p = *(u8 **)(p + 4);
        if (p != NULL) {
            return *(void **)(p + 0x28);
        }
    }
    return NULL;
}

void func_0205bbd8(void *arg0) {
    u8 *p = *(u8 **)(data_02160a6c + 0xb8);
    while (p != NULL) {
        u16 *ptr = *(u16 **)(p + 0x124);
        if (*ptr != 0) {
            *ptr = 7;
        }
        p = *(u8 **)(p + 0x174);
    }
    p = func_0205bad4(arg0);
    while (p != NULL) {
        u8 *obj = *(u8 **)p;
        u8 *a = *(u8 **)(obj + 0x118);
        u16 *b = *(u16 **)(obj + 0x124);
        if (*a == 1) {
            if (*(s16 *)(b + 1) != 0 && *b != 0) {
                *b = 3;
            }
        }
        p = *(u8 **)(p + 0x18);
    }
}

void func_0205bc60(s32 *arg0, u8 *arg1, s32 arg2) {
    if (func_020dddfc(arg0, arg0 + 9, arg2 << 12) == 0) {
        return;
    }
    arg0[0xc] = 0;
    arg0[0xe] = 0;
    (*arg1)++;
    if (arg0[0xd] == 0) {
        (*arg1)++;
    }
}

extern s32 func_020dd9b4(void *, s32 *);
extern s32 func_02117d80(s32);
u32 func_0205bcb0(void *arg0, s32 arg1) {
    s32 p;
    u32 ret = 0;
    s32 a = func_020dd9b4(arg0, &p);
    if (p != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80(a)) {
        ret |= 1;
    }
    return ret;
}

void func_0205c314(void) {
    func_020d4eb8();
}

void func_0205c320(Unk0205B710 *arg0) {
    u8 flag = 0;
    func_0205bc60((s32 *)arg0, &flag, 0x14);
    arg0->unk04 += arg0->unk34;
    if (arg0->unk04 < arg0->unk28) {
        arg0->unk34 = 0;
        arg0->unk04 = arg0->unk28;
        flag++;
    } else {
        arg0->unk34 -= 0xa00;
    }
    if (flag >= 2) {
        func_020d4eb8(arg0);
    } else {
        func_020020f8(arg0, &arg0->unk30, arg0);
    }
}

void func_0205c39c(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    func_020d2b78(arg0, *(void **)p, (u16)((((*(s16 *)(p + 0x52) % 2) << 10) + 0x7000) % 0x10000), 10);
    *(s32 *)(arg0 + 0x28) = *(s32 *)(*(u8 **)p + 0x1ac);
    *(s32 *)(arg0 + 0x34) = -0x5000;
    func_020d4eb8(arg0);
}

void func_0205c404(Unk0205B710 *arg0) {
    u8 flag = 0;
    func_0205bc60((s32 *)arg0, &flag, 0x14);
    arg0->unk04 += arg0->unk34;
    if (arg0->unk04 >= arg0->unk28) {
        arg0->unk04 = arg0->unk28;
        arg0->unk34 = 0;
        flag++;
    } else {
        arg0->unk34 -= 0x840;
        if (arg0->unk34 < 0x600) {
            arg0->unk34 = 0x600;
        }
    }
    if (flag >= 2) {
        func_020d4eb8(arg0);
    } else {
        func_020020f8(arg0, &arg0->unk30, arg0);
    }
}

void func_0205c490(Unk0205B710 *arg0) {
    Unk0205B710_Sub *p = arg0->unk128;
    func_020d2b78(arg0, p->unk00, (((p->unk52 % 2) << 10) + 0x7000) % 0x10000, 100);
    arg0->unk28 += (p->unk2e << 12);
    arg0->unk34 = (arg0->unk28 - arg0->unk04) / 16;
    arg0->unk30 /= 2;
    arg0->unk38 /= 2;
    func_020d4eb8(arg0);
}

