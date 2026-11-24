/* 22 functions from 0x020D8E5C to 0x020D9E48 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02151fc8;
extern u16 data_02151fca;
extern u32 data_02151fcc;
extern u32 *data_02155984;
extern u8 *data_02160258;
extern void func_020f40a4(void);
extern void func_020f4144(void);
extern void func_0210c5dc(void *);
extern void func_020d9018(void);
extern void func_020d9cc0(void *);
extern void func_020f4668(void *);
extern const s16 data_0213a394[];
extern u32 data_0216263c[3];

static inline u16 Rand16_020d9a08(u32 *ctx, u16 max) {
    ctx[0] = ctx[1] * ctx[0] + ctx[2];
    if (max == 0) {
        return (u16)(ctx[0] >> 16);
    } else {
        return (u16)(((ctx[0] >> 16) * max) >> 16);
    }
}

typedef struct {
    s32 unk0;
    s32 unk4;
} Unk2Words;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Unk3Words;

void func_020d8e5c(s32 arg0) {
    if (arg0 == 0) {
        func_020f40a4();
    } else if (arg0 == 1) {
        func_020f4144();
    }
}

extern u32 data_02155c3c;
extern u8 *func_0210c594(s32, u32);
void func_020d8e80(void) {
    u8 **pp = &data_02160258;
    u8 *p;
    if (*pp != NULL) {
        return;
    }
    *pp = func_0210c594(0x98, data_02155c3c);
    *(u32 *)(*pp + 0x5c) = 0;
    *(u32 *)(*pp + 0x60) = 0;
    *(u32 *)(*pp + 0x64) = 0;
    *(u16 *)(*pp + 0x68) = 0;
    *(u32 *)(*pp + 0x6c) = 0;
    *(u32 *)(*pp + 0x70) = 0;
    *(u32 *)(*pp + 0x7c) = 0;
    *(u16 *)(*pp + 0x76) = 0;
    *(u16 *)(*pp + 0x78) = 0;
    *(u32 *)(*pp + 0x54) = 0;
    p = *pp;
    *(u32 *)(p + 0x18) = 0;
    *(u32 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x20) = 0;
    p = *pp;
    *(u32 *)(p + 0x00) = 0;
    *(u32 *)(p + 0x04) = 0;
    *(u32 *)(p + 0x08) = 0;
    p = *pp;
    *(u32 *)(p + 0x0c) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    p = *pp;
    *(u32 *)(p + 0x24) = 0x220000;
    *(u32 *)(p + 0x28) = 0x30000;
    *(u32 *)(p + 0x2c) = 0x1e0000;
}

void func_020d8f50(void) {
    u8 **p = &data_02160258;
    if (*p != NULL) {
        func_0210c5dc(*p);
        *p = NULL;
    }
}

void func_020d8f78(void) {
    data_02151fc8 = 0x8000;
    data_02151fca = 0xccc;
    *(u16 *)(data_02160258 + 0x90) = 0x300;
    *(u16 *)(data_02160258 + 0x8e) = 0x2c0;
    *(u16 *)(data_02160258 + 0x92) = 0x100;
    *(u16 *)(data_02160258 + 0x94) = 0x80;
    data_02151fcc = *(u16 *)(data_02160258 + 0x90) << 12;
    data_02155984[0] = 0x165;
    data_02155984[1] = 0xff0;
    func_020d9018();
}

void func_020d9018(void) {
    *(u32 *)(data_02160258 + 0xc) = 0x200000;
    *(u32 *)(data_02160258 + 0x10) = 0x30000;
    *(u32 *)(data_02160258 + 0x14) = 0x200000;
    func_020d9cc0((u8 *)data_02160258 + 0xc);
    func_020f4668((u8 *)data_02160258 + 0xc);
}

void func_020d9058(Unk3Words *arg0) {
    u64 ab = *(u64 *)arg0;
    u32 c = arg0->unk8;
    u8 *p = data_02160258;
    *(u64 *)(p + 0xc) = ab;
    *(u32 *)(p + 0x14) = c;
}

void func_020d907c(u32 arg0) {
    *(u32 *)(data_02160258 + 0x54) = arg0;
}

void func_020d9090(void) {
    u8 *q = data_02160258;
    Unk3Words *p = *(Unk3Words **)(q + 0x54);
    if (p == NULL) {
    } else {
        s32 a = p->unk0;
        s32 b = p->unk4;
        s32 c = p->unk8;
        *(s32 *)(q + 0xc) = a;
        *(s32 *)(q + 0x10) = b;
        *(s32 *)(q + 0x14) = c;
    }
    return;
}

s32 func_020d90bc(s32 arg0) {
    u8 *p = data_02160258;
    u8 *q = *(u8 **)(p + 0x54);
    s32 dx = *(s32 *)q - *(s32 *)p;
    s32 dz = *(s32 *)(q + 8) - *(s32 *)(p + 8);
    if (arg0 == 0) {
        if (dx < 0) dx = -dx;
        if (dx < 0xa000) {
            if (dz < 0) dz = -dz;
            if (dz < 0xa000) {
                return 1;
            }
        }
    } else if (arg0 == 1) {
        if (dx < 0) dx = -dx;
        if (dx < 0x1000) {
            if (dz < 0) dz = -dz;
            if (dz < 0x1000) {
                return 1;
            }
        }
    }
    return 0;
}

void func_020d914c(s32 arg0) {
    Unk3Words v;
    switch (arg0) {
        case 0:
            v.unk0 = 0x260000;
            v.unk4 = 0x30000;
            v.unk8 = 0x1e0000;
            func_020d9058(&v);
            break;
        case 1:
            v.unk0 = 0x1f0000;
            v.unk4 = 0x30000;
            v.unk8 = 0x1e0000;
            func_020d9058(&v);
            break;
    }
}

extern u32 data_0216263c[3];
extern void func_020d9d8c(u32);
extern void func_020d9da8(u32);
extern void func_020d9ea8(u32, s32);
extern void func_020d914c(s32);
void func_020d91bc(s32 arg0) {
    s32 zero = 0;
    u8 **pp = &data_02160258;
    u8 *p;

    *(s32 *)(*pp + 0x5c) = arg0;
    *(s32 *)(*pp + 0x60) = zero;
    func_020d9d8c(0x40);

    switch (arg0) {
    case 2:
        p = *pp;
        *(s32 *)(p + 0x0) = 0x200000;
        *(s32 *)(p + 0x4) = 0x30000;
        *(s32 *)(p + 0x8) = 0x200000;
        p = *pp;
        *(s32 *)(p + 0xc) = 0x200000;
        *(s32 *)(p + 0x10) = 0x30000;
        *(s32 *)(p + 0x14) = 0x200000;
        break;
    case 3:
        func_020d9ea8(8, 0x30);
        *(s32 *)(*pp + 0x60) = zero;
        func_020d914c(1);
        break;
    case 4:
        *(s32 *)(*pp + 0x60) = zero;
        *(s32 *)(*pp + 0x64) = zero;
        p = *pp;
        *(s32 *)(p + 0x18) = zero;
        *(s32 *)(p + 0x1c) = zero;
        *(s32 *)(p + 0x20) = zero;
        {
            u32 x = data_0216263c[0];
            u32 mul = data_0216263c[1];
            u32 add = data_0216263c[2];
            x = mul * x + add;
            data_0216263c[0] = x;
            if ((u16)(((x >> 16) * 10) >> 16) > 5) {
                *(u32 *)(*pp + 0x64) |= 1;
            }
        }
        func_020d9da8(0x40);
        break;
    case 5:
        func_020d9ea8(0x80000000, zero);
        func_020d9ea8(1, 0x30);
        break;
    case 7:
        func_020d914c(1);
        break;
    case 8:
        p = *pp;
        *(Unk3Words *)(p + 0x30) = *(Unk3Words *)(p + 0x0);
        break;
    case 12:
        p = *pp;
        *(s32 *)(p + 0xc) = 0x200000;
        *(s32 *)(p + 0x10) = 0x30000;
        *(s32 *)(p + 0x14) = 0x1e0000;
        func_020d9ea8(8, 0x30);
        break;
    case 14:
        p = *pp;
        *(s32 *)(p + 0x0) = 0x1ae000;
        *(s32 *)(p + 0x4) = 0x30000;
        *(s32 *)(p + 0x8) = 0x200000;
        p = *pp;
        *(s32 *)(p + 0xc) = 0x1ae000;
        *(s32 *)(p + 0x10) = 0x30000;
        *(s32 *)(p + 0x14) = 0x200000;
        break;
    case 15:
        p = *pp;
        *(s32 *)(p + 0x0) = 0x294000;
        *(s32 *)(p + 0x4) = 0x30000;
        *(s32 *)(p + 0x8) = 0x200000;
        p = *pp;
        *(s32 *)(p + 0xc) = 0x294000;
        *(s32 *)(p + 0x10) = 0x30000;
        *(s32 *)(p + 0x14) = 0x200000;
        break;
    }
}

void func_020d9cc0(void *arg0) {
    s32 *p = (s32 *)arg0;
    if (func_020e27ec() != 0) {
        p[1] -= 0x5000;
        if ((p[1] >> 12) < 0x30) {
            p[1] = 0x30000;
        }
    } else {
        p[1] += 0x5000;
        if ((p[1] >> 12) > 0x41) {
            p[1] = 0x41000;
        }
    }
}

void func_020d9d10(u32 arg0, s16 arg1, s16 arg2) {
    u8 *p = data_02160258;
    *(s16 *)(p + 0x78) = 0;
    switch (arg0) {
        case 0:
            *(s16 *)(p + 0x76) = arg1;
            break;
        case 1:
            *(s16 *)(p + 0x76) += arg1;
            if (*(s16 *)(p + 0x76) > 0x1e) {
                *(s16 *)(p + 0x76) = 0x1e;
            }
            break;
        case 2:
            *(s16 *)(p + 0x76) = 0;
            break;
        case 3:
            *(s16 *)(p + 0x76) = -1;
            *(s16 *)(p + 0x78) = arg2;
            break;
    }
    if (arg2 == 0) {
        *(s16 *)(p + 0x78) = *(s16 *)(p + 0x76);
    }
}

void func_020d9d8c(u32 arg0) {
    *(u32 *)(data_02160258 + 0x7c) |= arg0;
}

void func_020d9da8(u32 arg0) {
    *(u32 *)(data_02160258 + 0x7c) &= ~arg0;
}

void func_020d9dc8(u32 arg0, u32 arg1, u16 arg2, u16 arg3) {
    u8 *p = data_02160258;
    *(u32 *)(p + 0x4c) = arg0;
    *(u32 *)(p + 0x80) = arg1;
    *(u16 *)(p + 0x50) = arg2;
    *(u16 *)(p + 0x74) = arg3;
    *(u32 *)(p + 0x58) = 0;
}

void *func_020d9df4(void) {
    return *(void **)(data_02160258 + 0x80);
}

extern s32 func_020e27ec(void);
void func_020d9e08(u32 arg0) {
    *(u32 *)(data_02160258 + 0x80) = arg0;
}

void func_020d9e1c(u32 arg0) {
    u8 *p = data_02160258;
    if (*(u32 *)(p + 0x58) == 0) {
        *(u32 *)(p + 0x58) = arg0;
    }
}

u16 func_020d9e38(void) {
    return data_02151fc8;
}
