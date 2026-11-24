/* 34 functions from 0x020101F8 to 0x020111D4 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_0215cdf0[4];
extern void func_0201088c(void);

extern s32 func_0200a6e4(s32, s32, s32);
extern void WaitByLoop(s32);

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
extern void func_02010f58();
extern void func_02010f20(void);
extern void func_0200fc34(u32, u32);
extern void func_0200e8a8(void);
extern void func_02010fa8(s32, s32);
extern void func_0201082c(u32);
extern void func_0200fddc();
typedef struct { u32 field_0; } ZeroTarget_0215f120;
static inline void set_zero_0210b10(ZeroTarget_0215f120 *p, u32 v) { p->field_0 = v; }
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

void func_0201076c(void) {
    u32 zero = 0;
    func_020106b8(0xb8, zero);
    {
        u32 v = *(volatile u32 *)0x2fffae0;
        v = (v & ~0x07000000) | 0xa7000000;
        *(volatile u32 *)0x40001a4 = v & (zero - 0x2000);
    }
    while ((*(volatile u32 *)0x40001a4 & 0x800000) == 0) {
    }
    (void)*(volatile u32 *)0x4100010;
}

u32 func_020107c4(void) {
    u32 zero = 0;
    u32 *p = (u32 *)0x2fffc00;
    if ((*(volatile u32 *)p & 0x20000000) == 0) {
        return 0x20;
    }
    func_020106b8(0xd6, zero);
    {
        u32 v = *(volatile u32 *)(p - 0x48);
        v = (v & ~0x07000000) | 0xa7000000;
        *(volatile u32 *)0x40001a4 = v & (zero - 0x2000);
    }
    while ((*(volatile u32 *)0x40001a4 & 0x800000) == 0) {
    }
    return *(volatile u32 *)0x4100010;
}

void func_0201082c(u32 arg0)
{
  unsigned int new_var;
  u32 status = func_020107c4();
  if ((arg0 & status) == 0)
  {
    return;
  }
  func_0201088c();
  status = func_020107c4();
  if (status & 0x20)
  {
    if (!data_0215cdf0)
    {
    }
    return;
  }
  {
    u32 one = 1;
    new_var = 0;
    while (1)
    {
 do { if (data_0215cdf0[new_var] == new_var) { break; } if (func_02007a68() == new_var) { break; } func_020066e0(one); } while (0);
      status = func_020107c4();
      if (status & 0x20)
      {
        break;
      }
    }

  }
}

void func_0201088c(void) {
    u32 zero = 0;
    u32 mask = zero - 0x2000;
    func_020106b8(0xb5, zero);
    do {
        *(volatile u32 *)0x40001a4 = ((*(volatile u32 *)0x2fffae0 & ~0x07000000) | 0xa0000000) & mask;
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

#pragma peephole off
void func_02010b10(void) {
    func_0201076c();
    func_02010f58();
    func_0201082c(8);
    *(u32 *)*(u32 **)data_0215f120 = 0;
    func_0200fddc(data_0215f120);
}
s32 func_02010b40(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 ret = 0;
    s32 ok2 = 0;
    s32 ok1 = 0;
    if ((arg0 <= 3) && (arg3 != 0) && ((arg1 & 0x1f) == 0)) {
        s32 in_itcm = 1;
        if ((arg1 + arg3 > (u32)func_01ff8000) && (arg1 < 0x02000000)) {
            in_itcm = 0;
        }
        if (in_itcm) {
            ok1 = 1;
        }
    }
    if (ok1) {
        s32 in_dtcm = 1;
        if ((arg1 + arg3 > func_02007490()) && (arg1 < func_02007490() + 0x4000)) {
            in_dtcm = 0;
        }
        if (in_dtcm) {
            ok2 = 1;
        }
    }
    if (ok2) {
        if (((arg2 | arg3) & 0x1ff) == 0) {
            ret = 1;
        }
    }
    return ret;
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
extern void func_02010e80();
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

void func_02010e80(u32 arg0, u32 arg1, u32 arg2) {
    s32 ret;
    u32 code = arg1 & 0x3f;
    if (code == 0x11) {
        if (data_0215fa20[1] != 0) {
            return;
        }
        ret = 1;
        data_0215fa20[1] = 1;
        func_0200fc34(1, 0);
        if (data_0215fa20[2] != 0) {
            ret = ((s32 (*)(void))data_0215fa20[2])();
        }
        if (ret == 0) {
            return;
        }
        func_02010f20();
    } else if (code == 0x2) {
        data_0215fa20[0] += 1;
        data_0215fa20[1] = 0;
        func_0200fc34(2, 0);
    } else {
        func_02008414();
    }
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

void func_02010f20(void) {
    if ((*(volatile u16 *)0x02ffffa8 & 0x8000) >> 15) {
        func_0200e8a8();
    }
    func_02010fa8(1, 1);
    func_02008a00();
    func_02008414();
}

void func_02010f58(u32 arg0) {
    volatile u32 id = *(u32 *)0x02fffc00;
    if (arg0 == id) {
        return;
    }
    {
        u32 bak = func_02008128();
        func_02010e80(0xe, 0x11, 0);
        func_0200813c(bak);
    }
}

void func_02010fa8(s32 arg0, s32 arg1) {
    while (func_0200a6e4(0xe, arg0, 0) != 0) {
        WaitByLoop(arg1);
    }
}

s32 func_02010ff8(void) {
    return (*(volatile u16 *)0x2fffc30 != 0xffff) ? 1 : 0;
}

extern u8 data_0215fa30[4];
extern u8 data_0215fa2c[4];
extern void CpuSet(const void *, void *, u32);
extern s32 func_0200a6e4(s32, s32, s32);
extern void WaitByLoop(s32);
void func_0201101c(void) {
    u32 zero = 0;
    CpuSet(&zero, data_0215fa30, 0x05000001);
    *(u16 *)(data_0215fa2c + 6) = func_02005df8();
}

void func_02011158(s32 *arg0) {
    arg0[0] = (*(volatile u16 *)0x4000204 & 0xc) >> 2;
    arg0[1] = (*(volatile u16 *)0x4000204 & 0x10) >> 4;
    *(volatile u16 *)0x4000204 = (*(volatile u16 *)0x4000204 & ~0xc) | 0xc;
    *(volatile u16 *)0x4000204 = *(volatile u16 *)0x4000204 & ~0x10;
}

s32 func_020111a0(u32 *arg0) {
    s32 out;
    volatile u16 *p = (volatile u16 *)0x4000204;
    *p = (arg0[0] << 2) | (*p & ~0xc);
    out = (arg0[1] << 4) | (*p & ~0x10);
    *p = out;
    return out;
}

