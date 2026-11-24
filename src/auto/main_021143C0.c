/* 43 functions from 0x021143C0 to 0x02115380 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0216cad0[4];
extern u8 data_0216c8f4[];
extern u8 data_0216c8f8[];
extern s32 func_0200a108(s32);
extern void func_0200968c(u32, u32, s32);
extern void func_020096b4(u32, s32);
extern void func_02115380(void *);
extern void func_02117210(void *);
extern void func_020095a8(void *, s32, u32, s32);
extern void func_0200f0e4(void *);
extern void func_0200f0fc(void *);
extern s32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(s32);
extern void func_0211488c(void *);
extern void func_02113a60(s32);
extern u8 data_0216c8a8[];
extern u32 data_0216c8b4[];
extern u32 func_0201fd28(u32, u32);
extern u8 data_0216c9bc[];
typedef struct {
    s32 unk_00;
    u32 unk_04;
    u32 unk_08;
    void *unk_0c;
    void *unk_10;
    u32 unk_14;
    u32 unk_18;
    s32 unk_1c;
    u32 unk_20;
    void *unk_24;
    s32 unk_28;
    s32 unk_2c;
} UnkStruct_0216c9bc;
extern void func_02008e24(s32, void *, u32);
extern void func_02006dc4(void *, u32);
typedef struct {
    u32 a;
    u32 b;
} UnkPair8;
extern s32 func_0200b8fc(void *, void *);
extern void func_0200b888(void *);
extern s32 func_0200b9c8(void *, UnkPair8);
extern s32 func_0200ba20(void *, void *, s32, s32);
extern s32 func_02114db8(void *, s32, s32);
typedef struct {
    u8 unk_00[0x28];
    u32 unk_28;
    u32 unk_2c;
    u32 unk_30;
    s32 unk_34;
    void (*unk_38)(s32, s32, u32 *, u32, u32, u32);
    u32 unk_3c;
    s32 unk_40;
    s32 unk_44;
    u8 unk_48[0x8];
    s32 unk_50;
    u8 unk_54[16];
} UnkStruct_02114728;
extern void func_021139d0(void *);
extern void func_02009580(void *, s32, u32, s32);
extern void func_0200f0a4(void *);
extern void func_0200f0c4(void *);
extern void func_02114818(void *);
extern void func_021148cc(u8 *, s32);
extern u8 data_0216bfd8[12];
extern u32 data_0216c8a4;
extern u8 data_0216c8a8[12];
extern void func_021167ac(u32, s32);
extern void func_021168f8(u32, u8 *);
extern void func_021141a8(void *, u8 *);
extern void func_021141f8(u8 *);
extern void func_0211497c(u8 *);
extern void func_021149c8(u8 *);
extern s32 func_0211398c(u32);
extern u8 data_0216c9bc[84];
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02114b44(void);

typedef struct {
    u8 unk_00[8];
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10[8];
    u32 unk_18;
    u32 unk_1c;
    u8 unk_20[0xc];
    u32 unk_2c;
    u8 unk_30[0x1c];
    u32 unk_4c;
    u32 unk_50;
} Unk_02114420;
void func_021143c0(u8 *arg0, u8 arg1) {
    u32 old = *(u32 *)(arg0 + 4);
    if (old != 0) {
        func_021168f8(old, arg0);
        *(u32 *)(arg0 + 4) = 0;
    }
    func_021168f8((u32)data_0216bfd8, arg0);
    arg0[0x3d] = arg1;
    if (old != 0) {
        func_021141a8((void *)old, arg0);
    }
    func_021141f8(arg0);
}

void func_02114420(u8 *arg0) {
    u32 *flag = &data_0216c8a4;
    u32 zero = 0;
    u32 flags;
    if (*flag != 0) {
        return;
    }
    func_021167ac((u32)data_0216c8a8, 0);
    *flag = 1;
    flags = *(u32 *)(arg0 + 0x2c) & ~1 & ~2;
    *(u32 *)(arg0 + 8) = (u32)func_0211497c;
    *(u32 *)(arg0 + 0xc) = (u32)arg0;
    *(u32 *)(arg0 + 0x18) = (u32)func_021149c8;
    *(u32 *)(arg0 + 0x1c) = (u32)arg0;
    *(u32 *)(arg0 + 0x4c) = zero;
    *(u32 *)(arg0 + 0x50) = zero;
    *(u32 *)(arg0 + 0x2c) = flags;
}

s32 func_02114494(u8 *arg0, s32 arg1, u8 *arg2) {
    u32 bits = 0;
    s32 i;
    for (i = 0; i < arg1; i++) {
        u8 c = arg2[i];
        arg0[0x54 + i] = c;
        bits |= 1 << c;
    }
    if (func_0211398c(bits) == 0) {
        return 0;
    }
    *(u32 *)(arg0 + 0x50) = arg1;
    *(u32 *)(arg0 + 0x4c) = bits;
    return 1;
}

void func_021144f0(u8 *arg0) {
    if (*(void **)(arg0 + 0x4c) != NULL) {
        func_021139d0(*(void **)(arg0 + 0x4c));
        *(void **)(arg0 + 0x4c) = NULL;
        *(void **)(arg0 + 0x50) = NULL;
    }
}

void func_021146b8(u8 *arg0) {
    func_02009580(*(void **)(arg0 + 0x4c), 0, 1u << *(s32 *)(arg0 + 0x48), 0);
    if (((*(s32 *)(arg0 + 0x2c) << 30) >> 31) != 0) {
        return;
    }
    func_0200f0a4(arg0 + 8);
    func_0200f0c4(arg0 + 0x18);
    *(u32 *)(arg0 + 0x2c) |= 2;
}

void func_0211470c(u8 *arg0) {
    if (((*(s32 *)(arg0 + 0x2c) << 31) >> 31) != 0) {
        func_02114818(arg0);
    }
}

void func_02114728(UnkStruct_02114728 *arg0, s32 arg1) {
    s32 i = 0;
    arg0->unk_44 = arg1;
    for (; i < arg0->unk_50; i++) {
        s32 ch = arg0->unk_54[i];
        s32 val = func_0200a108(arg0->unk_44 + *(s32 *)(data_0216c8f4 + ch * 8 + 4));
        func_0200968c(1u << ch, val & 0xff, val >> 8);
    }
}

void func_02114794(UnkStruct_02114728 *arg0, s32 arg1, s32 arg2) {
    s32 val;
    if (arg1 > arg0->unk_50 - 1) {
        return;
    }
    arg1 = arg0->unk_54[arg1];
    *(s32 *)(data_0216c8f8 + arg1 * 8) = arg2;
    val = func_0200a108(arg0->unk_44 + arg2);
    func_0200968c(1u << arg1, val & 0xff, val >> 8);
}

void func_021147e8(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg1 > *(s32 *)(arg0 + 0x50) - 1) {
        return;
    }
    func_020096b4(1u << (arg0 + arg1)[0x54], arg2);
}

void func_02114818(void *arg0p) {
    u8 *arg0 = (u8 *)arg0p;
    if (((*(s32 *)(arg0 + 0x2c) << 30) >> 31) != 0) {
        s32 tag;
        func_020095a8(*(void **)(arg0 + 0x4c), 0, 1u << *(s32 *)(arg0 + 0x48), 0);
        func_0200f0e4(arg0 + 8);
        func_0200f0fc(arg0 + 0x18);
        *(u32 *)(arg0 + 0x2c) &= ~2u;
        tag = func_02009d2c();
        func_02009b24(1);
        func_02009cc0(tag);
    }
    func_0211488c(arg0);
}

void func_0211488c(void *arg0p) {
    u8 *arg0 = (u8 *)arg0p;
    func_02113a60(*(s32 *)(arg0 + 0x48));
    func_021168f8((u32)data_0216c8a8, arg0);
    *(u32 *)(arg0 + 0x2c) &= ~1u;
}

void func_021148bc(u8 *arg0) {
    func_021148cc(arg0, 1);
}

void func_021148cc(u8 *arg0p, s32 arg1)
{
  UnkStruct_02114728 *arg0 = (UnkStruct_02114728 *) arg0p;
  u8 *new_var;
  u32 stride = func_0201fd28(arg0->unk_30, arg0->unk_34);
  u32 offset = stride * arg0->unk_40;
  s32 i;
  for (i = 0; i < arg0->unk_50; i++)
  {
    new_var = data_0216c8f4 + (arg0->unk_54[i] * 8);
    data_0216c8b4[i] = (*((u32 *) new_var)) + offset;
  }

  arg0->unk_38(arg1, arg0->unk_50, data_0216c8b4, stride, arg0->unk_28, arg0->unk_3c);
  arg0->unk_40++;
  if (arg0->unk_40 >= arg0->unk_34)
  {
    arg0->unk_40 = 0;
  }
}

void func_0211497c(u8 *arg0) {
    s32 one = 1;
    s32 v = *(s32 *)(arg0 + 0x2c);
    if (((v << 30) >> 31) == 0) {
        return;
    }
    func_020095a8((void *)(*(u32 *)(arg0 + 0x4c)), 0, one << *(u32 *)(arg0 + 0x48), 0);
    {
        s32 ret = func_02009d2c();
        func_02009b24(one);
        func_02009cc0(ret);
    }
}

void func_021149c8(u8 *arg0) {
    s32 one = 1;
    s32 v = *(s32 *)(arg0 + 0x2c);
    if (((v << 30) >> 31) == 0) {
        return;
    }
    if (*(u32 *)(arg0 + 0x40) != 0) {
        u32 irq = func_02008128();
        func_021148cc(arg0, one);
        func_0200813c(irq);
    }
    if (*(u32 *)(arg0 + 0x40) == 0) {
        func_02009580((void *)(*(u32 *)(arg0 + 0x4c)), 0, one << *(u32 *)(arg0 + 0x48), 0);
    }
}

void func_02114a38(void) {
    if (*(u32 *)data_0216c9bc != 0 && *(u32 *)(data_0216c9bc + 4) == 1) {
        func_02114b44();
    }
}

void func_02114c28(void) {
    UnkStruct_0216c9bc *p = (UnkStruct_0216c9bc *)data_0216c9bc;
    s32 tag;
    if (p->unk_00 == 0) {
        return;
    }
    func_020095a8(p->unk_24, p->unk_28, p->unk_2c >= 0 ? (1u << p->unk_2c) : 0, 0);
    tag = func_02009d2c();
    func_02009b24(1);
    func_02009cc0(tag);
}

void func_02114c80(void) {
    UnkStruct_0216c9bc *p = (UnkStruct_0216c9bc *)data_0216c9bc;
    if (p->unk_00 == 0) {
        return;
    }
    p->unk_1c = 0;
    func_02008e24(0, p->unk_0c, p->unk_14);
    func_02008e24(0, p->unk_10, p->unk_14);
    func_02006dc4(p->unk_0c, p->unk_14);
    func_02006dc4(p->unk_10, p->unk_14);
    func_02009580(p->unk_24, p->unk_28, p->unk_2c >= 0 ? (1u << p->unk_2c) : 0, 0);
}

void func_02114d00(u8 *arg0, void *arg1, s32 arg2, s32 arg3) {
    *(s32 *)(arg0 + 0x98) = 0;
    *(s32 *)(arg0 + 0x90) = 0;
    *(s32 *)(arg0 + 0x94) = 0;
    *(s32 *)(arg0 + 0x9c) = 0;
    *(s32 *)(arg0 + 0x84) = 0;
    *(s32 *)(arg0 + 0x88) = 0;
    *(s32 *)(arg0 + 0x8c) = 0;
    if (func_0200b8fc(arg0 + 0x7c, arg1) != 0) {
        func_0200b888(arg0 + 0x34);
        if (func_0200b9c8(arg0 + 0x34, *(UnkPair8 *)(arg0 + 0x7c)) == 0) {
            return;
        }
    } else {
        *(s32 *)(arg0 + 0x7c) = 0;
        *(s32 *)(arg0 + 0x80) = -1;
        if (func_0200ba20(arg0 + 0x34, arg1, 1, -1) == 0) {
            return;
        }
    }
    *(s32 *)(arg0 + 0x30) = 1;
    if (func_02114db8(arg0, arg2, arg3) != 0) {
        data_0216cad0[0] = (u32)arg0;
    }
}

u32 func_02114f58(u32 arg0) {
    u32 old = data_0216cad0[0];
    data_0216cad0[0] = arg0;
    return old;
}

u32 func_02114f70(void) {
    return data_0216cad0[0];
}

u32 func_02115174(u32 arg0) {
    u8 *p = *(u8 **)(data_0216cad0[0] + 0x90);
    if (arg0 >= *(u32 *)(p + 8)) {
        return 0;
    }
    return *(u32 *)(p + arg0 * 0x10 + 0x10);
}

u32 func_02115264(u32 arg0) {
    u8 *p = *(u8 **)(data_0216cad0[0] + 0x90);
    if (arg0 >= *(u32 *)(p + 8)) {
        return 0;
    }
    return *(u32 *)(p + arg0 * 0x10 + 0x14);
}

void func_0211528c(u32 arg0, u32 arg1) {
    u8 *base = *(u8 **)(data_0216cad0[0] + 0x90);
    *(u32 *)(base + arg0 * 0x10 + 0x14) = arg1;
}

void *func_021152a8(void) {
    return *(void **)(data_0216cad0[0] + 0x9c);
}

extern void func_021139d0(void *);
extern void func_02009580(void *, s32, u32, s32);
extern void func_0200f0a4(void *);
extern void func_0200f0c4(void *);
extern void func_02114818(void *);
void func_021152bc(u32 arg0) {
    *(u32 *)(data_0216cad0[0] + 0x9c) = arg0;
}

void func_021152d0(u32 arg0, u32 arg1, u8 *arg2) {
    *(u32 *)(arg2 + 0x98) = 0;
}

void func_021152dc(s32 a0, s32 a1, u8 *a2) {
    *(s32 *)(a2 + 0x90) = 0;
}

void func_021152e8(s32 a0, s32 a1, u8 *a2) {
    *(s32 *)(a2 + 0x94) = 0;
}

void func_02115368(void **arg0) {
    func_02115380(arg0);
    func_02117210(*arg0);
}

