/* 34 functions from 0x020101F8 to 0x020111D4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215f78c[148];
extern void func_01ff8000(void);
extern u32 func_02007490(void);
extern void func_020108d8(u32, void *, u32, u32);
extern s32 func_020081e0(void);
extern u8 *func_0200f9a4(void);
extern s32 func_02005df8(void);
extern void func_0200f9b0(u16);
extern void func_0200fa20(u16);
extern void func_02005e50(u16);

extern void func_0201076c(void);
extern void func_02010f58(void);
extern void func_0201082c(u32);
extern void func_0200fddc(void);
extern void func_020059e4(u32);
extern void func_02005a14(u32);
extern void func_020059b4(u32);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_020057e8(u32, void *);
extern u8 data_0215f760[16];

extern u32 data_0215fa20[3];
extern u8 data_0215f660[256];
extern u8 data_0215f120[1312];
extern void func_0200ff10(void *, s32, s32);
extern void func_02000b64(void *);
extern void func_0200f95c(void);
extern u32 func_0200fb6c(void);
extern void func_02008414(void);
extern void func_0200fd64(void *, s32, u32, u32);
extern void func_02010060(void);
extern void func_0200fca4(void (*)(void), u32);
extern void func_020101f8(void *);

extern void func_0200fb84(void);
void func_02010540(u32 **arg0) {
    func_0200ff10(arg0, 2, 1);
    (*arg0)[3] = 0;
    (*arg0)[4] = (u32)data_0215f660;
    (*arg0)[5] = 1;
    func_0200ff10(arg0, 6, 1);
}

void func_02010590(u32 arg0, u32 arg1, u32 arg2) {
    func_02000b64((void *)0x02000bac);
    func_0200f95c();
    if ((arg0 & func_0200fb6c()) != arg0) {
        func_02008414();
    }
    func_0200fd64(data_0215f120, 1, arg1, arg2);
}

void func_020105e0(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8) {
    u32 flags = 1;
    if (arg8 != 0) {
        flags = 2;
    }
    func_02010590(flags, arg3, arg4);
    *(u32 *)(data_0215f120 + 0x4fc) = arg0;
    *(u32 *)(data_0215f120 + 0x500) = arg1;
    *(u32 *)(data_0215f120 + 0x504) = arg2;
    *(u32 *)(data_0215f120 + 0x510) = arg6;
    *(u32 *)(data_0215f120 + 0x514) = arg7;
    *(u32 *)(data_0215f120 + 0x518) = arg8;
    func_0200fca4(func_02010060, arg5);
}

void func_0201064c(void *arg0) {
    if (arg0 == NULL) {
        func_02008414();
    }
    func_02010590(0, 0, 0);
    func_020101f8(arg0);
    func_0200fca4((void (*)(void))func_02010540, 0);
}

extern void func_020101f8(void *);
u32 func_0201068c(void) {
    return *(u32 *)(*(u8 **)data_0215f120 + 0x1c);
}

void func_020106a0(void) {
    func_0200fb84();
}

extern void func_0200fba4(void);
void func_020106ac(void) {
    func_0200fba4();
}

void func_020106b8(u32 arg0, u32 arg1) {
    u32 cmd0 = (arg1 >> 8) | (arg0 << 24);
    u32 cmd1 = arg1 << 24;
    while (*(volatile u32 *)0x40001a4 & 0x80000000) {
    }
    *(volatile u16 *)0x40001a0 = (*(volatile u16 *)0x40001a0 & ~0x2000) | 0xc000;
    *(volatile u32 *)0x40001a8 = ((cmd0 & 0xff000000) >> 24) | ((cmd0 & 0x00ff0000) >> 8) | ((cmd0 & 0x0000ff00) << 8) | (cmd0 << 24);
    *(volatile u32 *)0x40001ac = ((cmd1 & 0xff000000) >> 24) | ((cmd1 & 0x00ff0000) >> 8) | ((cmd1 & 0x0000ff00) << 8) | (cmd1 << 24);
}

void func_02010738(u32 arg0) {
    func_020106b8(0xb7, arg0);
    *(volatile u32 *)0x40001a4 = (*(volatile u32 *)0x2fffae0 & ~0x07000000) | 0xa1000000;
}

void func_0201088c(void) {
    u32 zero = 0;
    func_020106b8(0xb5, zero);
    do {
        *(volatile u32 *)0x40001a4 = (*(volatile u32 *)0x2fffae0 & ~0x07000000 | 0xa0000000) & (zero - 0x2000);
    } while (*(volatile u32 *)0x40001a4 & 0x80000000);
}

void func_020109f4(void) {
    u32 *p = *(u32 **)(data_0215f760 + 8);
    if (p == NULL) {
        return;
    }
    p[3] += 0x200;
    p[4] += 0x200;
    p[5] -= 0x200;
    if (p[5] != 0) {
        func_02010738(p[3]);
        return;
    }
    {
        void (**fn)(u32) = *(void (***)(u32))(data_0215f120 + 0x50c);
        fn[1](*(u32 *)(data_0215f120 + 0x508));
    }
    func_020059e4(0x80000);
    func_02005a14(0x80000);
    *(u32 **)(data_0215f760 + 8) = NULL;
    func_0201076c();
    func_02010f58();
    if (p[1] != 0) {
        ((void (*)(u32))p[1])(p[2]);
    }
}

void func_02010a94(u8 *arg0) {
    u32 bak = func_02008128();
    *(u32 **)(data_0215f760 + 8) = arg0;
    func_020057e8(0x80000, func_020109f4);
    func_02005a14(0x80000);
    func_020059b4(0x80000);
    func_0200813c(bak);
    {
        void (**fn)(u32, u32, u32, u32) = *(void (***)(u32, u32, u32, u32))(data_0215f120 + 0x50c);
        fn[0](*(u32 *)(data_0215f120 + 0x508), 0x4100010, *(u32 *)(arg0 + 0x10), 0x200);
    }
    func_02010738(*(u32 *)(arg0 + 0xc));
}

void func_02010b10(void) {
    func_0201076c();
    func_02010f58();
    func_0201082c(8);
    {
        u32 **p = (u32 **)data_0215f120;
        **p = 0;
    }
    func_0200fddc();
}

s32 func_02010b40(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    return (arg0 <= 3) && (arg3 != 0) && ((arg1 & 0x1f) == 0) &&
           (((arg1 + arg3) <= (u32)func_01ff8000) || (arg1 >= 0x02000000)) &&
           (((arg1 + arg3) <= func_02007490()) || (arg1 >= func_02007490() + 0x4000)) &&
           (((arg2 | arg3) & 0x1ff) == 0);
}

void func_02010bf4(u8 *arg0) {
    ((void (*)(u32, u32, u32, u32))((u32 *)data_0215f760)[3])(0, *(u32 *)(arg0 + 0x500), *(u32 *)(arg0 + 0x4fc), *(u32 *)(arg0 + 0x504));
    func_0201076c();
    func_02010f58();
    func_0201082c(8);
    **(u32 **)data_0215f120 = 0;
}

void func_02010dc8(void) {
    ((u32 *)data_0215f760)[3] = (u32)func_020108d8;
    if (func_020081e0() == 1) {
        if (*(u32 *)(func_0200f9a4() + 0x80) != 0) {
            u16 id = (u16)func_02005df8();
            func_0200f9b0(id);
            func_020108d8(0, data_0215f78c, *(u32 *)(func_0200f9a4() + 0x80), 0x88);
            func_0200fa20(id);
            func_02005e50(id);
        }
    }
}

void func_02010e40(void) {
    func_0200fb84();
}

extern u8 data_0215f78c[148];
extern void func_0200a56c(void);
extern void func_0200a674(s32, void (*)(void));
extern void func_02010e80(void);
extern void func_01ff8000(void);
extern u32 func_02007490(void);
extern void func_020108d8(u32, void *, u32, u32);
extern s32 func_020081e0(void);
extern u8 *func_0200f9a4(void);
extern s32 func_02005df8(void);
extern void func_0200f9b0(u16);
extern void func_0200fa20(u16);
extern void func_02005e50(u16);
void func_02010e4c(void) {
    func_0200a56c();
    data_0215fa20[0] = 0;
    data_0215fa20[1] = 0;
    func_0200a674(0xe, func_02010e80);
    data_0215fa20[2] = 0;
}

extern u32 data_0215fa20[3];
extern u8 data_0215f660[256];
extern u8 data_0215f120[1312];
extern void func_0200ff10(void *, s32, s32);
extern void func_02000b64(void *);
extern void func_0200f95c(void);
extern u32 func_0200fb6c(void);
extern void func_02008414(void);
extern void func_0200fd64(void *, s32, u32, u32);
extern void func_02010060(void);
extern void func_0200fca4(void (*)(void), u32);
u32 func_02010f10(void) {
    return data_0215fa20[1];
}

