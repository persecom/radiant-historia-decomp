/* 22 functions from 0x020111D4 to 0x02011EF4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215fa34[11];
extern u32 func_02008128(void);
extern u32 func_02005df0(void *);
extern s32 func_02005d38(s32);
extern void func_0200813c(u32);
extern void WaitByLoop(s32);
extern void func_02005d2c(s32);
extern s32 func_0200a6e4(s32, s32, s32);
extern void func_02008414(void);
extern u32 data_0215fa2c;
extern s32 func_02010ff8(void);
extern void func_02007504(u32, u32);
extern void func_02006d58(void);
extern void func_02006de8(void);
extern void func_020074d4(s32);
extern void func_020074f4(s32);
extern void func_02007528(s32);
extern void func_020074c4(s32);
extern void func_020074e4(s32);
extern void func_02007518(s32);
extern void func_0201101c(void);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_020113e4(void);
extern void func_02011674(void *);
extern u8 data_0215fb20[232];
extern u16 data_0215fa30;
extern void func_020115c8(u32, u32);
extern void func_020115f0(u32, u32);
extern void func_0201164c(void);
extern void func_02011700(void *);
extern void func_02011660(void);
extern void func_02008f74(void *, s32, s32);
extern void func_020062d8(void *, void *, void *, void *, s32, s32);
extern void func_020065c8(void *);
extern void func_02011ef4(void *);
extern void func_02011714(void);
extern void *data_0215fc08;
extern u8 data_0215fc0c[1060];
extern u32 data_02160030;
void func_020111d4(s32 arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = func_02008128();
        arg1[0] = func_02005df0((void *)0x02ffffe8) & 0x40;
        if (arg1[0] != 0) {
            break;
        }
        if (func_02005d38(arg0) == 0) {
            break;
        }
        func_0200813c(arg1[1]);
        WaitByLoop(1);
    }
}

void func_02011230(s32 arg0, u32 *arg1) {
    if (arg1[0] == 0) {
        func_02005d2c(arg0);
    }
    func_0200813c(arg1[1]);
}

void func_02011254(s32 arg0) {
    while (func_0200a6e4(0xd, arg0, 0) != 0) {
        WaitByLoop(1);
    }
}

void func_020112a4(u32 arg0) {
    u32 val = func_02008128();
    s32 size;
    data_0215fa2c = arg0;
    if (func_02010ff8() == 0) {
        goto end;
    }
    size = 0x1000;
    if (arg0 == 0) {
        size = 0x5000;
    }
    func_02007504(0xf000, size);
    if (arg0 != 0) {
        func_02006d58();
        func_02006de8();
        func_020074d4(8);
        func_020074f4(8);
        func_02007528(8);
    } else {
        func_020074c4(8);
        func_020074e4(8);
        func_02007518(8);
    }
end:
    func_0200813c(val);
}

void func_02011334(void) {
    u32 *p = data_0215fa34;
    s32 mode = 0xd;
    s32 val = 1;
    if (p[2] != 0) {
        return;
    }
    p[2] = 1;
    func_0201101c();
    p[3] = 0;
    func_0200a56c();
    if (func_0200a6c0(mode, val) == 0) {
        goto end;
    }
    func_0200a674(mode, (void *)func_020115c8);
    func_020113e4();
    val = 0;
    func_0200a674(mode, (void *)val);
    func_0200a674(mode, (void *)func_020115f0);
    p[6] = (u32)val;
    func_02011674(data_0215fb20);
    func_0200a674(0x11, (void *)func_02011660);
end:
    func_020112a4(val);
}

void func_020115c8(u32 arg0, u32 arg1) {
    if ((arg1 & 0x3f) != 1) {
        func_02008414();
        return;
    }
    data_0215fa30 = 1;
}

void func_020115f0(u32 arg0, u32 arg1) {
    if ((arg1 & 0x3f) == 0x11) {
        s32 ret;
        if (data_0215fa34[3] != 0) {
            return;
        }
        ret = 0;
        if (data_0215fa34[6] != 0) {
            ret = ((s32 (*)(void))data_0215fa34[6])();
        }
        if (ret != 0) {
            func_0201164c();
        }
        data_0215fa34[3] = 1;
    } else {
        func_02008414();
    }
}

void func_0201164c(void) {
    func_02011254(2);
    func_02008414();
}

void func_02011660(void) {
    data_0215fa34[1] = 0;
}

void func_02011674(void *arg0) {
    u8 *p = (u8 *)arg0;
    u32 saved = func_02008128();

    if (data_0215fc08 == NULL) {
        data_0215fc08 = arg0;
        func_02011700(p + 0xc4);
        func_02011700(data_0215fc0c);
        *(u32 *)(p + 0xc0) = 0;
        func_020062d8(arg0, func_02011714, arg0, &data_02160030, 0x400, 0x14);
        func_020065c8(arg0);
    }
    func_0200813c(saved);
}

void func_02011700(void *arg0) {
    func_02008f74(arg0, 0, 0x24);
}

void func_02011804(u8 *a0) {
    u32 a = *(u32 *)(a0 + 0x2c);
    u32 zero = 0;
    u32 b = *(u32 *)(a0 + 0x4c);

    *(u32 *)(a0 + 0x2c) = zero;
    *(u32 *)(a0 + 0x4c) = zero;
    func_02011ef4(a0);
    *(u32 *)(a0 + 0x2c) = a;
    *(u32 *)(a0 + 0x4c) = b;
}

