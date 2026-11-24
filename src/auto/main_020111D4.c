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
extern void *data_02145c24;
extern void func_02009008(void *, void *, s32);
extern void func_02008f74(void *, s32, s32);
extern void func_020062d8(void *, void *, void *, void *, s32, s32);
extern void func_020065c8(void *);
extern void func_02011ef4(void *);
extern void func_02011714(void *);
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

void func_020112a4(s32 arg0)
{
  int new_var;
  s32 x = arg0;
  u32 val = func_02008128();
  s32 size;
  s32 n = 8;
  data_0215fa2c = (u32) x;
  if (func_02010ff8() == 0)
  {
    goto end;
  }
  size = 0x1000;
  new_var = 0xf000;
  if (x == 0)
  {
    size = 0x5000;
  }
  func_02007504(new_var, size);
  if (x != 0)
  {
    func_02006d58();
    func_02006de8();
    func_020074d4(n);
    func_020074f4(n);
    func_02007528(n);
  }
  else
  {
    func_020074c4(n);
    func_020074e4(n);
    func_02007518(n);
  }
  end:
  func_0200813c(val);

}

void func_02011334(void) {
    u32 *p = data_0215fa34;
    s32 val = 1;
    s32 mode = 0xd;
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

extern void func_02006510(void *);
extern void func_020063c8(void);
void func_02011714(void *arg0)
{
    typedef struct {
        u32 func0;
        u32 func1;
        u32 result;
        u32 rest[6];
    } Work;

    u8 *ctx = arg0;
    s32 z0 = 0;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 z3 = 0;
    Work buf;
    u32 saved;
    u32 saved2;
    u32 cb;

    for (;;) {
        func_02008f74(&buf, z3, 0x24);
        saved = func_02008128();
        if (*(u32 *)(ctx + 0xc0) == 0) {
            do {
                func_02006510(z0);
            } while (*(u32 *)(ctx + 0xc0) == 0);
        }
        buf = *(Work *)*(u32 **)(ctx + 0xc0);
        func_0200813c(saved);
        if (buf.func0 != 0) {
            buf.result = ((u32 (*)(Work *))buf.func0)(&buf);
        }
        saved2 = func_02008128();
        cb = buf.func1;
        *(u8 *)((u8 *)&data_0215fc08 + 0x26) = z2;
        if (cb != 0) {
            ((void (*)(Work *))cb)(&buf);
        }
        if (data_0215fc08 != 0) {
            *(u32 *)(ctx + 0xc0) = z1;
            func_0200813c(saved2);
        } else {
            break;
        }
    }
    func_020063c8();
}

void func_02011804(u8 *a0) {
    s32 a = *(s32 *)(a0 + 0x2c);
    s32 b;
    s32 zero;

    zero = 0;
    b = *(s32 *)(a0 + 0x4c);
    *(s32 *)(a0 + 0x2c) = zero;
    *(s32 *)(a0 + 0x4c) = zero;
    func_02011ef4(a0);
    *(s32 *)(a0 + 0x2c) = a;
    *(s32 *)(a0 + 0x4c) = b;
}

void func_02011830(u8 *ctx, u8 *src, u32 len) {
    u32 zero = 0;

    if (len == 0) {
        return;
    }
    do {
        u32 off = *(u32 *)(ctx + 0x54);
        u32 chunk = 0x40 - off;
        if (chunk > len) {
            chunk = len;
        }
        func_02008f74(ctx + 0x14 + off, src, chunk);
        len -= chunk;
        *(u32 *)(ctx + 0x54) = *(u32 *)(ctx + 0x54) + chunk;
        if (*(u32 *)(ctx + 0x54) >= 0x40) {
            ((void (*)(u8 *))data_02145c24)(ctx);
            *(u32 *)(ctx + 0x54) = zero;
            if (++*(u32 *)(ctx + 0x58) == 0) {
                ++*(u32 *)(ctx + 0x5c);
            }
        }
    } while (len != 0);
}

u32 func_020118c0(u32 arg0) {
    u32 old = data_02160030;
    data_02160030 = arg0;
    if (arg0 != 0) {
        data_02145c24 = (void *)func_02011804;
    } else {
        data_02145c24 = (void *)func_02011ef4;
    }
    return old;
}

void func_020118fc(u8 *a0) {
    *(u32 *)(a0 + 0x58) = 0;
    *(u32 *)(a0 + 0x5c) = 0;
    *(u32 *)(a0 + 0x54) = 0;
    *(u32 *)(a0 + 0x0) = 0x67452301;
    *(u32 *)(a0 + 0x4) = 0xefcdab89;
    *(u32 *)(a0 + 0x8) = 0x98badcfe;
    *(u32 *)(a0 + 0xc) = 0x10325476;
    *(u32 *)(a0 + 0x10) = 0xc3d2e1f0;
}

void func_02011950(u8 *ctx, u8 *src, u32 len) {
    u32 zero = 0;

    if (len == 0) {
        return;
    }
    do {
        u32 off = *(u32 *)(ctx + 0x54);
        u32 chunk = 0x40 - off;
        if (chunk > len) {
            chunk = len;
        }
        func_02009008(src, ctx + 0x14 + off, chunk);
        src += chunk;
        len -= chunk;
        *(u32 *)(ctx + 0x54) = *(u32 *)(ctx + 0x54) + chunk;
        if (*(u32 *)(ctx + 0x54) >= 0x40) {
            ((void (*)(u8 *))data_02145c24)(ctx);
            *(u32 *)(ctx + 0x54) = zero;
            if (++*(u32 *)(ctx + 0x58) == 0) {
                ++*(u32 *)(ctx + 0x5c);
            }
        }
    } while (len != 0);
}

extern void func_020119e4(void);
extern s32 func_02011c70(s32, s32, s32, s32, s32, void *);
s32 func_02011bdc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 buf1[0x60];
    u8 buf2[0x14];
    u32 ctx[7] = { 0x14, 0x40 };
    ctx[2] = (u32)buf1;
    ctx[3] = (u32)buf2;
    ctx[4] = (u32)func_020118fc;
    ctx[5] = (u32)func_02011950;
    ctx[6] = (u32)func_020119e4;
    return func_02011c70(arg0, arg1, arg2, arg3, arg4, ctx);
}

void func_02011e20(u16 *ctx, const void *buf, u32 len) {
    s32 odd = 0;
    u32 sum = 0;
    const u8 *p = (const u8 *)buf;

    if ((u32)p & 1) {
        sum += (*p++) << 8;
        len--;
        odd = 1;
    }

    while ((len >> 17) != 0) {
        u32 n = 0x10000;
        len -= 0x20000;
        do {
            sum += *(const u16 *)p;
            p += 2;
        } while (--n != 0);
        sum = (sum >> 16) + (sum & 0xffff);
        sum = (u16)(sum + (sum >> 16));
    }

    {
        u32 n = len >> 1;
        if (n != 0) {
            do {
                sum += *(const u16 *)p;
                p += 2;
            } while (--n != 0);
        }
    }

    if (len & 1) {
        sum += *p;
    }

    sum = (sum >> 16) + (sum & 0xffff);
    sum = (sum >> 16) + (sum & 0xffff);

    if (odd) {
        sum = ((sum << 24) | (sum << 8)) >> 16;
    }

    {
        u32 total = sum + *ctx;
        total += (total >> 16);
        *ctx = (u16)total;
    }
}

