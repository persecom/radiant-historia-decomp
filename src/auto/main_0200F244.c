/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215f0a0[4];
extern void func_0200fa74(void *, s32);
extern u8 data_0215f120[1312];
extern void func_02006df4(void);
extern void func_02006e00(u32, u32);
extern s32 func_02006638(void *, s32);
extern void func_020065c8(void *);
extern u32 data_0213ea64[];
extern void func_02006d58(void);
extern void func_02006da8(u32, u32);
extern void func_02006d8c(u32, u32);
extern void func_02006de8(void);
extern void func_0200fddc(u8 *);
extern s32 func_0200fca4(void (*)(void *), s32);
extern u16 func_020081e0(void);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern void func_02006560(void *);
extern s32 func_0200fd64(u8 *, s32, u32, u32);
extern s32 func_02005da4(u16);
extern void func_0200851c(void *, s32);
extern void func_02007e58(void *, s32, s32, void *, void *);
u32 func_0200f684(u32 arg0) {
    u32 result = 0;
    s32 i;
    u32 mult;

    for (i = 0; i < 8; i++) {
        if (((arg0 >> (i << 2)) & 0xf) >= 10) {
            return 0;
        }
    }

    mult = 1;
    for (i = 0; i < 8; i++) {
        result += ((arg0 >> (i << 2)) & 0xf) * mult;
        mult *= 10;
    }

    return result;
}

s32 func_0200f6ec(void) {
    return func_0200f6fc(0x27);
}

s32 func_0200f6fc(s32 arg0) {
    s32 ret = 0;
    if (func_0200a6e4(5, (arg0 << 8) & 0x7f00, 0) >= 0) {
        ret = 1;
    }
    return ret;
}

s32 func_0200f728(s32 *arg0) {
    s32 month = arg0[1] - 2;
    s32 year = arg0[0] + 2000;
    s32 day = arg0[2];
    s32 century;
    s32 yearInCentury;
    s32 monthTerm;
    s32 total;
    if (month < 1) {
        year -= 1;
        month += 12;
    }
    century = year / 100;
    yearInCentury = year % 100;
    monthTerm = (month * 26 - 2) / 10;
    total = day + monthTerm + yearInCentury + yearInCentury / 4 + century / 4 + century * 5;
    return total % 7;
}

void func_0200f7e4(u8 *arg0) {
    if (((s32 (*)(void *))*(u32 *)(arg0 + 0x34))(*(void **)(arg0 + 0x38)) != 0) {
        func_0200851c(arg0, 1);
    } else {
        func_02007e58(arg0 + 0xc, 0xc0, 0xc0 + 0x47, (void *)func_0200f7e4, arg0);
    }
}

BOOL func_0200f83c(u16 *arg0) {
    return func_02005da4(*arg0) == 0;
}

extern u32 data_0215f760[];
void func_02009008(void *, void *, u32);
s32 func_0200fbc0(void);
void func_0200fd18(void);
void func_020062d8(void *, void (*)(void), u32, void *, u32, u32);
void func_0200fbe8(void);
void func_02010dc8(void);
void func_02010e4c(void);
void func_0200f974(u32);
void func_0200f858(void) {
u8 *p = data_0215f120;
if (*(u32 *)(p+4)) return;
*(u32 *)(p+4)=1;
if (func_020081e0()==1) func_02009008((void *)0x2fffe00,(void *)0x2fffa80,0x160);
*(u32 *)(p+0x4fc)=0;
*(u32 *)(p+0x500)=0;
*(u32 *)(p+0x504)=0;
*(u32 *)(p+0x508)=-1;
*(u32 *)(p+0x50c)=0;
*(u32 *)(p+0xc)=0x400;
*(u32 *)(p+0x10)=0x2400;
data_0215f760[0]=0;
*(u32 *)(p+8)=4;
func_0200fbc0();
*(u32 *)(p+0x4ec)=0;
*(u32 *)(p+0x4f0)=0;
*(u32 *)(p+0x4f8)=0;
*(u32 *)(p+0x4f4)=0;
func_020062d8(p+0x28,func_0200fd18,0,p+0x4e8,0x400,*(u32 *)(p+8));
func_020065c8(p+0x28);
func_0200fbe8();
func_02010dc8();
if (func_020081e0()==1) func_0200f974(1);
func_02010e4c();
}

u32 func_0200f94c(void) {
    return data_0215f0a0[0];
}

extern void func_02008414(void);
extern void func_02008460(void *);
extern void func_02007e44(void *);
extern s32 func_0200f83c(u16 *);
extern void func_0200f7e4(u8 *);
extern void func_02008474(void *, s32, s32, s32);
extern void func_02005d88(void);
extern void func_0200faec(u32, s32);
extern s32 func_020106ac(void);
extern void func_020106a0(void);
void func_0200f95c(void) {
    if (func_0200f94c() == 0) {
        func_02008414();
    }
}

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);
void func_0200f974(u32 arg0) {
    data_0215f0a0[0] = arg0;
}

u32 func_0200f984(void) {
    return **(u32 **)data_0215f120;
}

void *func_0200f998(void) {
    return (void *)0x02fffa80;
}

void *func_0200f9a4(void) {
    return (void *)0x02fffe00;
}

void func_0200f9b0(struct { u16 unk0; u16 unk2; u32 unk4[3]; } arg0) {
    u8 buf[0x40];
    func_0200fa74((void *)(u32)arg0.unk0, 1);
    func_02008460(buf);
    func_02007e44(buf + 0xc);
    *(void **)(buf + 0x34) = (void *)func_0200f83c;
    *(void **)(buf + 0x38) = &arg0;
    func_0200f7e4(buf);
    func_02008474(buf, 1, 0, 1);
}

void func_0200fa20(u32 arg0) {
    func_02005d88();
    func_0200faec(arg0, 1);
}

extern void func_0200fa74(void *, s32);
void func_0200fa3c(void *arg0) {
    func_0200fa74(arg0, 2);
}

void func_0200fa4c(u32 arg0) {
    if (func_020106ac() == 0) {
        func_020106a0();
    }
    func_0200faec(arg0, 2);
}

void func_0200fa74(void *arg0, s32 arg1) {
    u8 *p = data_0215f120;
    u32 state = func_02008128();
    u32 sentinel;
    if (*(u32 *)(p + 0x14) != (u32)arg0) {
        goto update;
    }
    if (*(u32 *)(p + 0x24) == (u32)arg1) {
        goto restore;
    }
    func_02008414();
    goto restore;
update:
    sentinel = (u32)-3;
    while (*(volatile u32 *)(p + 0x14) != sentinel) {
        func_02006510(p + 0x1c);
    }
    *(u32 *)(p + 0x14) = (u32)arg0;
    *(u32 *)(p + 0x24) = (u32)arg1;
    {
        u32 *cnt = (u32 *)(p + 0x18);
        *cnt = *cnt + 1;
    }
restore:
    func_0200813c(state);
}

void func_0200faec(u32 arg0, s32 arg1) {
    u8 *p = data_0215f120;
    u32 state = func_02008128();
    if (*(u32 *)(p + 0x14) == arg0) {
        if (*(u32 *)(p + 0x18) != 0) {
            goto check;
        }
    } else {
        goto check;
    }
    func_02008414();
    goto restore;
check:
    if (*(u32 *)(p + 0x24) != (u32)arg1) {
        func_02008414();
    }
    if (--*(u32 *)(p + 0x18) == 0) {
        *(u32 *)(p + 0x14) = (u32)-3;
        *(u32 *)(p + 0x24) = 0;
        func_02006560(p + 0x1c);
    }
restore:
    func_0200813c(state);
}

u32 func_0200fb6c(void) {
    return (func_020081e0() == 1) ? 7 : 3;
}

void func_0200fb84(void) {
    func_0200fd64(data_0215f120, 0, 0, 0);
}

extern u8 data_0215f0c0[];
extern void *data_0215f640[];
extern void func_02008e68(s32, void *, s32);
extern void func_02006dc4(void *, s32);
extern void func_0200a674(s32, void *);
extern void func_0200fedc(u32, u32, u32);
BOOL func_0200fba4(void) {
    return (*(u32 *)(data_0215f120 + 4) & 4) == 0;
}

s32 func_0200fbc0(void) {
    *(s32 *)(data_0215f120 + 0x14) = -3;
    *(u32 *)(data_0215f120 + 0x18) = 0;
    *(u32 *)(data_0215f120 + 0x24) = 0;
    *(u32 *)(data_0215f120 + 0x20) = 0;
    *(u32 *)(data_0215f120 + 0x1c) = 0;
    return 0;
}

void func_0200fbe8(void) {
    *(void **)data_0215f120 = data_0215f0c0;
    func_02008e68(0, data_0215f0c0, 0x60);
    func_02006dc4(data_0215f0c0, 0x60);
    func_0200a674(0xb, (void *)func_0200fedc);
}

void func_0200fc34(u32 arg0, u32 arg1) {
    u32 irq = func_02008128();
    void **node = (void **)data_0215f640[0];
    void **volatile *prev = (void **volatile *)&data_0215f640[0];
    while (node != NULL) {
        void (*cb)(void *, u32, u32) = (void (*)(void *, u32, u32))node[2];
        if (cb != NULL) {
            cb(node[1], arg0, arg1);
        }
        {
            void **cur = *prev;
            if (cur == node) {
                prev = (void **volatile *)cur;
            }
        }
        node = *prev;
    }
    func_0200813c(irq);
}

s32 func_0200fca4(void (*cb)(void *), s32 arg1) {
    u8 *base = data_0215f120;
    if (arg1 != 0) {
        func_02006638(base + 0x28, *(u32 *)(base + 8));
        *(void (**)(void *))(base + 0x4e8) = cb;
        *(u32 *)(base + 4) |= 8;
        func_020065c8(base + 0x28);
    } else {
        cb(base);
        func_0200fddc(base);
    }
    if (arg1 != 0) {
        return 1;
    }
    return **(u32 **)base == 0;
}

void func_0200fd18(void) {
    s32 zero = 0;
    u8 *base = data_0215f120;
    u32 token = func_02008128();
    if (*(u32 *)(base + 4) & 8) {
        func_0200813c(token);
        func_0200fca4(*(void (**)(void *))(base + 0x4e8), zero);
    } else {
        func_02006510((void *)zero);
    }
}

s32 func_0200fd64(u8 *arg0, s32 arg1, u32 arg2, u32 arg3) {
    u32 token = func_02008128();
    u32 flags = *(u32 *)(arg0 + 4);
    if (flags & 4) {
        func_02006510(arg0 + 0xf4 + 0x400);
        flags = *(u32 *)(arg0 + 4);
    }
    if (!(flags & 4) && arg1 != 0) {
        *(u32 *)(arg0 + 0x4ec) = arg2;
        *(u32 *)(arg0 + 4) |= 4;
        *(u32 *)(arg0 + 0x4f0) = arg3;
    }
    func_0200813c(token);
    return **(u32 **)arg0 == 0;
}

void func_0200fddc(u8 *arg0) {
    void (*cb)(u32) = *(void (**)(u32))(arg0 + 0x4ec);
    u32 cbarg = *(u32 *)(arg0 + 0x4f0);
    u32 state = func_02008128();
    *(u32 *)(arg0 + 4) &= ~0x4c;
    func_02006560(arg0 + 0x4f4);
    func_0200813c(state);
    if (cb != NULL) {
        cb(cbarg);
    }
}

u32 func_0200fe28(u32 arg0) {
    u32 flag = (arg0 & 0x10) != 0;
    u32 result = 0;
    arg0 &= ~0x10;
    if (arg0 > 3) {
        goto end;
    }
    if (flag == 0) {
        result = (u32)data_0213ea64;
        goto end;
    }
    func_02008414();
end:
    return result;
}

void func_0200fe64(u32 arg0, u32 arg1, u32 arg2) {
    if (arg1 >= arg2) {
        func_02006df4();
    } else {
        func_02006e00(arg0, arg1);
    }
}

void func_0200fe80(u32 arg0, u32 arg1, u32 arg2) {
    u32 rem;
    u32 base;
    if (arg1 >= arg2) {
        func_02006d58();
        return;
    }
    rem = arg0 & 0x1f;
    if (rem == 0) {
        goto end;
    }
    base = arg0 - rem;
    func_02006da8(base, 0x20);
    func_02006da8(base + arg1, 0x20);
    arg1 += 0x20;
    func_02006d8c(base, arg1);
    func_02006de8();
end:
    return;
}

#pragma peephole off
