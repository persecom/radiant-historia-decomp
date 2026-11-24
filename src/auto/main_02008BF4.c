/* 52 functions from 0x02008BF4 to 0x02009B24 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
} Triple0215;

extern u16 data_0215d1a0;
extern s32 data_0215d19c;
extern u32 *data_0215d1b8[9];
extern s32 func_02006afc(u16 *);
extern s32 func_02006b4c(u16 *);
typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
    u32 field_14;
    u32 field_18;
    u32 field_1c;
} Data_215d17c;
extern Data_215d17c data_0215d17c;
extern void func_020058fc(u32, u32, u32);
extern void func_01ff845c(u32, u32, u32, u32, u32);
extern void func_02005a14(u32);
extern void func_020059e4(u32);
extern void func_020057e8(u32, u32);
extern void func_02008a28(u32, u32);
extern void func_02008ab4(u32, u32, u32, u32);
extern void func_0200893c(u32);
extern void func_02008ca8(void);
extern void func_02008dc4(void);
typedef void (*Fn_U32)(u32);
extern void func_02008558(s32);
extern void func_02008998(s32);
extern void func_020097a8(u32, s32, s32, s32);
extern void func_020097f0(u32, u32, u32, u32, u32);
extern u32 *func_02009a64(s32);
extern void func_02009aec(u32 *);
typedef struct { u32 a[8]; } Copy32B;
typedef struct { u32 a[9]; } Copy36B;
typedef struct { u32 a[12]; } Copy48B;
typedef struct { u32 f0, f4, f8, fc; } Queue;

void func_02008bf4(void) {
    u32 base;
    u32 size;
    u32 remaining;
    size = data_0215d17c.field_c;
    if (size == 0) return;
    base = data_0215d17c.field_8;
    if (size >= 0x1d8) size = 0x1d8;
    remaining = data_0215d17c.field_c - size;
    data_0215d17c.field_c = remaining;
    data_0215d17c.field_8 = base + size;
    if (remaining == 0) {
        func_020058fc(data_0215d17c.field_4, (u32)func_02008ca8, 0);
        func_01ff845c(data_0215d17c.field_4, base, 0x4000400, (-0x3bc00000) | (size >> 2), 0);
    } else {
        func_01ff845c(data_0215d17c.field_4, base, 0x4000400, 0x84400000 | (size >> 2), 0);
    }
    func_02005a14(0x200000);
}

void func_02008ca8(void) {
    Fn_U32 fn;
    u32 arg;
    func_020059e4(0x200000);
    *(volatile u32 *)0x04000600 = (*(volatile u32 *)0x04000600 & 0x3fffffff) | (data_0215d17c.field_18 << 30);
    func_020057e8(0x200000, data_0215d17c.field_1c);
    data_0215d17c.field_0 = 0;
    fn = (Fn_U32)data_0215d17c.field_10;
    arg = data_0215d17c.field_14;
    if (fn != NULL) {
        fn(arg);
    }
}

void func_02008d08(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    if (arg2 == 0) {
        if (arg3 != 0) {
            ((Fn_U32)arg3)(arg4);
        }
        return;
    }
    if (data_0215d17c.field_0 != 0) goto done;
    data_0215d17c.field_0 = 1;
    data_0215d17c.field_4 = arg0;
    data_0215d17c.field_10 = arg3;
    data_0215d17c.field_14 = arg4;
    func_02008a28(arg0, 0x38000000);
    func_02008ab4(arg0, arg1, arg2, 0);
    func_0200893c(arg0);
    func_020058fc(arg0, (u32)func_02008dc4, 0);
    func_01ff845c(arg0, arg1, 0x4000400, (-0x3c00000) | (arg2 >> 2), 0);
done:
    return;
}

void func_02008dc4(void) {
    void (*cb)(u32);
    u32 arg;
    data_0215d17c.field_0 = 0;
    cb = (void (*)(u32))data_0215d17c.field_10;
    arg = data_0215d17c.field_14;
    if (cb != NULL) {
        cb(arg);
    }
}

void func_02008df0(u16 val, u8 *dst, s32 size) {
    s32 i = 0;
    while (i < size) {
        *(u16 *)(dst + i) = val;
        i += 2;
    }
}

void func_02008e08(u8 *src, u8 *dst, s32 size) {
    s32 i = 0;
    while (i < size) {
        *(u16 *)(dst + i) = *(u16 *)(src + i);
        i += 2;
    }
}

void func_02008e24(u32 value, u32 *dst, u32 bytes) {
    u32 *end = (u32 *)((u8 *)dst + bytes);
    do {
        if ((s32)dst < (s32)end) {
            *dst = value;
            dst = (u32 *)((u8 *)dst + 4);
        }
    } while ((s32)dst < (s32)end);
}

void func_02008e38(const u32 *src, u32 *dst, u32 size) {
    u32 *end = (u32 *)((u8 *)dst + size);
    while (dst < end) {
        *dst++ = *src++;
    }
}

void func_02008e50(u32 *src, u32 *dst, s32 size) {
    u32 *end = (u32 *)((u8 *)src + size);
    while (1) {
        if ((s32)src >= (s32)end) {
            return;
        }
        *dst = *src++;
    }
}

void func_02008eec(const Copy32B *src, Copy32B *dst) {
    *dst = *src;
}

void func_02008f08(const Copy36B *src, Copy36B *dst) {
    *dst = *src;
}

void func_02008f24(const Copy48B *src, Copy48B *dst) {
    *dst = *src;
}

void func_02008f48(const void *src, void *dst) {
    typedef struct { u32 a[16]; } Copy64B;
    const Copy64B *s = (const Copy64B *)src;
    Copy64B *d = (Copy64B *)dst;
    *d = *s;
}

void func_02009138(u32 *dst) {
    u32 i;
    for (i = 0; i < 9; i++) {
        dst[i] = 0;
    }
}

extern u32 __swp(u32, u32 *);
u32 func_02009148(u32 val, u32 *ptr) {
    return __swp(val, ptr);
}

void func_0200942c(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_02008a28(arg0, ~0u);
    func_02008ab4(arg0, arg1, arg3, 0x1000000);
    if (arg3 == 0) {
        return;
    }
    {
        volatile u32 *reg = (volatile u32 *)(0x04000000 + 0xb0 + ((arg0 * 3) + 2) * 4);
        while (*reg & 0x80000000) {
        }
        func_01ff845c(arg0, arg1, arg2, 0xaf000001, 0);
    }
}

void func_020094a8(void) {
    func_02008558(3);
    func_02008998(0);
}

void func_020094c0(u32 arg0) {
    func_020097f0(1, arg0, 0, 0, 0);
}

void func_020094e0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_020097f0(2, arg0, arg1, arg2, arg3);
}

void func_02009508(u32 arg0) {
    func_020097f0(3, arg0, 0, 0, 0);
}

void func_02009528(u32 arg0, s32 arg1) {
    func_020097a8(arg0, 6, arg1, 2);
}

void func_02009540(u32 arg0, u32 arg1) {
    func_020097a8(arg0, 4, arg1, 1);
}

void func_02009558(u32 arg0, u32 arg1, u32 arg2) {
    func_020097f0(9, arg0, arg1, arg2, 0);
}

void func_02009580(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_020097f0(0xc, arg0, arg1, arg2, arg3);
}

extern void func_02009fac(s32);
void func_020095a8(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 i;
    u32 mask = arg2;
    for (i = 0; i < 8 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            func_02009fac(i);
        }
    }
    func_020097f0(0xd, arg0, arg1, arg2, arg3);
}

void func_0200960c(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 ret = func_02009fcc(arg0, arg3, arg4);
    func_020097f0(0x12, arg0, arg1, arg2, ret);
}

void func_0200964c(u32 arg0, u32 arg1) {
    func_020097f0(0x1a, arg0, arg1, 0, 0);
}

void func_0200966c(u32 arg0, u32 arg1) {
    func_020097f0(0x1b, arg0, arg1, 0, 0);
}

void func_0200968c(u32 arg0, u32 arg1, u32 arg2) {
    func_020097f0(0x14, arg0, arg1, arg2, 0);
}

void func_020096b4(u32 arg0, u32 arg1) {
    func_020097f0(0x15, arg0, arg1, 0, 0);
}

void func_020096d4(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, u32 arg9) {
    u32 v4 = (arg3 << 26) | (arg1 << 24) | (arg9 << 16) | arg4;
    u32 v3 = (arg6 << 24) | (arg7 << 22) | arg5;
    u32 v1 = arg0 | (arg8 << 16);
    func_020097f0(0xe, v1, arg2, v3, v4);
}

void func_02009720(u32 arg0, u32 arg1) {
    func_020097f0(0x1e, arg0, arg1, 0, 0);
}

void func_02009740(u32 arg0, u32 arg1) {
    func_020097f0(0x1f, arg0, arg1, 0, 0);
}

void func_02009760(u32 arg0, u32 arg1) {
    func_020097f0(0x20, arg0, arg1, 0, 0);
}

void func_02009780(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_020097f0(0x19, arg0, arg1, arg2, arg3);
}

void func_020097a8(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020097f0(6, arg0, arg1, arg2, arg3);
}

void func_020097d0(u32 arg0) {
    func_020097f0(0x16, arg0, 0, 0, 0);
}

void func_020097f0(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 *cmd = func_02009a64(1);
    if (cmd == NULL) {
        return;
    }
    cmd[1] = arg0;
    cmd[2] = arg1;
    cmd[3] = arg2;
    cmd[4] = arg3;
    cmd[5] = arg4;
    func_02009aec(cmd);
}

extern void func_02006ad8(u16 *);
extern void func_02009894(void);
extern void func_02009f74(void);
extern s32 func_02009f34(void);
extern u32 *func_02009eec(void);
extern s32 func_02009e20(void);
extern s32 func_02009964(s32);
extern void func_02009b24(s32);
extern void func_02009ec4(void);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_02009834(void) {
    if (data_0215d19c != 0) {
        return;
    }
    data_0215d19c = 1;
    func_02006ad8(&data_0215d1a0);
    func_02009894();
    func_02009f74();
}

s32 func_0200986c(void) {
    return func_02006afc(&data_0215d1a0);
}

s32 func_02009880(void) {
    return func_02006b4c(&data_0215d1a0);
}

u32 *func_02009a64(s32 arg0) {
    u32 *cmd;
    if (!func_02009f34()) {
        return NULL;
    }
    cmd = func_02009eec();
    if (cmd != NULL) {
        return cmd;
    }
    if (!(arg0 & 1)) {
        return NULL;
    }
    if (func_02009e20() > 0) {
        while (func_02009964(0) != 0) {
        }
        cmd = func_02009eec();
        if (cmd != NULL) {
            return cmd;
        }
    } else {
        func_02009b24(1);
    }
    func_02009ec4();
    do {
        func_02009964(1);
        cmd = func_02009eec();
    } while (cmd == NULL);
    return cmd;
}

void func_02009aec(u32 *arg0)
{
  s32 irq = func_02008128();
  u32 **q = data_0215d1b8;
  u32 *tail = q[3];
  if (tail == NULL)
  {
    q[2] = arg0;
  }
  else
  {
  }
  tail[0] = (u32) arg0;
  q[3] = arg0;
  arg0[0] = 0;
  func_0200813c(irq);
}

