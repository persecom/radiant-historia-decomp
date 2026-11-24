/* 56 functions from 0x02117304 to 0x02118234 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0216e274[];
extern u16 data_0216e270;
extern void func_02008df0(s32, void *, s32);
extern s32 func_02117be0(void *);

extern void func_02117ddc(u32 *);
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3_02117994;
typedef struct {
    u32 data[15];
} Struct60_02117a58;
extern const Vec3_02117994 data_02144d54;
extern const Vec3_02117994 data_02144d60;
extern Struct60_02117a58 data_0216e234;
extern void func_0200293c(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_020029a0(Vec3_02117994 *, Vec3_02117994 *, Vec3_02117994 *, s32, s32);
extern void func_02008e08(void *, u32, u32);
extern void func_021178b4(u8 *);

extern s32 func_021174a8();
extern void *func_02117904(void *, u32);
extern void func_021177b0(u8 *);
extern void func_021174f0(void *);
extern void func_0211782c(u8 *);
extern void func_0211794c(void *);
extern void func_021176d8(u8 *);
extern void func_02117df4(void *);
extern void func_021178c4(u8 *);
extern const u32 data_02144d44[];
extern void func_02117038(void *);
extern void func_02008e24(s32, void *, u32);
BOOL func_02117304(void *arg0, u32 arg1) {
    u32 *r3 = *(u32 **)((u8 *)arg0 + 0x2c);
    if (arg1 != 0) {
        while (r3 != NULL) {
            if (r3[0] == arg1) {
                break;
            }
            r3 = (u32 *)r3[3];
        }
    }
    if (r3 == NULL) {
        return FALSE;
    }
    *(u32 *)((u8 *)arg0 + 0x24) = r3[1];
    *(u32 *)((u8 *)arg0 + 0x28) = r3[2];
    *(u32 *)((u8 *)arg0 + 0x2c) = r3[3];
    return TRUE;
}

void *func_02117358(void **arg0) {
    void *r2 = *arg0;
    if (r2 != NULL) {
        *arg0 = *(void **)r2;
    }
    return r2;
}

void *func_02117370(void *arg0) {
    void *r4 = func_02117358((void **)((u8 *)arg0 + 0x24));
    if (r4 != NULL) {
        u8 flags = *(u32 *)((u8 *)arg0 + 0x20);
        u32 r2 = *(u32 *)((u8 *)arg0 + 0x28);
        if (flags & 1) {
            func_02008e24(0, r4, r2);
        }
    }
    return r4;
}

void func_021173b0(void *arg0, void **arg1) {
    arg1[0] = *(void **)((u8 *)arg0 + 0x24);
    *(void **)((u8 *)arg0 + 0x24) = arg1;
}

extern void func_02117008(u32, u32, u32);
void func_021173c0(u32 *arg0, u32 arg1) {
    func_02117008(arg0[1], arg1, arg0[2]);
}

void func_021173d4(void *arg0) {
    func_02117038(*(void **)((u8 *)arg0 + 4));
}

extern void func_0211721c(u32, u32, u32);
void func_021173e4(u32 *arg0, u32 arg1) {
    func_0211721c(arg0[1], arg1, arg0[2]);
}

void func_021173f8(void) {
}

extern void func_02007320(u32, u32, u32);
extern void *func_02117370(void *);
void *func_021173fc(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 4);
    if (arg1 > *(u32 *)((u8 *)p + 0x28)) {
        return NULL;
    }
    return func_02117370(p);
}

extern void func_021173b0(void *, void **);
void func_0211741c(void *arg0, void **arg1) {
    func_021173b0(*(void **)((u8 *)arg0 + 4), arg1);
}

void func_0211742c(u32 *arg0, u32 arg1) {
    func_02007320(arg0[2], arg0[1], arg1);
}

extern void func_02007428(u32, u32, u32);
void func_02117448(u32 *arg0, u32 arg1) {
    func_02007428(arg0[2], arg0[1], arg1);
}

void func_02117464(void *arg0, void *arg1) {
    void *p = *(void **)arg0;
    (*(void (**)(void *, void *))p)(arg0, arg1);
}

void func_02117478(void *arg0, void *arg1) {
    void *p = *(void **)arg0;
    (*(void (**)(void *, void *))((u8 *)p + 4))(arg0, arg1);
}

void func_0211748c(u32 *arg0, u32 arg1, u32 arg2) {
    arg0[0] = (u32)data_02144d44;
    arg0[1] = arg1;
    arg0[2] = arg2;
    arg0[3] = 0;
}

s32 func_021174a8(arg0, arg1)
void *arg0;
void **arg1;
{
    u8 *r4 = func_02117904(arg0, 0x41424e4b);
    if (r4 != NULL) {
        func_021174f0(r4 + 8);
        *arg1 = r4 + 8;
        return 1;
    }
    *arg1 = NULL;
    return 0;
}

void func_021174e4(void) {
    func_021174a8();
}

void *func_02117630(u8 *arg0, u32 arg1) {
    if (*(u16 *)arg0 > arg1) {
        return *(u8 **)(arg0 + 4) + arg1 * 0x10;
    }
    return NULL;
}

void *func_02117648(u8 *arg0) {
    if (*(u16 *)(arg0 + 2) & 1) {
        return *(u8 **)(arg0 + 4) + (*(u16 *)arg0 << 4);
    }
    return *(u8 **)(arg0 + 4) + (*(u16 *)arg0 << 3);
}

void func_02117664(u8 *arg0) {
    func_0211794c(arg0 + 8);
}

s32 func_02117674(void *arg0, void **arg1) {
    u8 *r4 = func_02117904(arg0, 0x4345424b);
    if (r4 != NULL) {
        func_021176d8(r4 + 8);
        *arg1 = r4 + 8;
        return 1;
    }
    *arg1 = NULL;
    return 0;
}

void *func_021176b0(u8 *arg0, u32 arg1) {
    if (arg1 >= *(u16 *)arg0) {
        return NULL;
    }
    if (*(u16 *)(arg0 + 2) & 1) {
        return *(u8 **)(arg0 + 4) + (arg1 << 4);
    }
    return *(u8 **)(arg0 + 4) + (arg1 << 3);
}

void func_021176d8(u8 *arg0) {
    u8 *r4;
    u16 i;
    *(u32 *)(arg0 + 4) += (u32)arg0;
    r4 = func_02117648(arg0);
    for (i = 0; i < *(u16 *)arg0; i++) {
        u8 *node = func_021176b0(arg0, i);
        *(u32 *)(node + 4) += (u32)r4;
    }
    if (*(u32 *)(arg0 + 0xc) != 0) {
        u8 *p = *(u8 **)(arg0 + 0xc);
        p = (u8 *)p + (u32)arg0;
        *(u32 *)(arg0 + 0xc) = (u32)p;
        *(u32 *)(p + 4) += (u32)p;
        *(u32 *)(arg0 + 0xc) = (u32)p;
    }
    if (*(u32 *)(arg0 + 0x14) == 0) {
        return;
    }
    *(u32 *)(arg0 + 0x14) += (u32)arg0;
    func_02117664((void *)*(u32 *)(arg0 + 0x14));
}

s32 func_02117774(void *arg0, void **arg1) {
    u8 *r4 = func_02117904(arg0, 0x43484152);
    if (r4 != NULL) {
        func_021177b0(r4 + 8);
        *arg1 = r4 + 8;
        return 1;
    }
    *arg1 = NULL;
    return 0;
}

void func_021177b0(u8 *arg0) {
    *(u32 *)(arg0 + 0x14) += (u32)arg0;
}

extern void func_0211782c(u8 *);
extern void func_0211794c(void *);
s32 func_021177c0(void *arg0, void **arg1) {
    u8 *r4 = func_02117904(arg0, 0x43484152);
    if (r4 != NULL) {
        func_0211782c(r4 + 8);
        *arg1 = r4 + 8;
        return 1;
    }
    *arg1 = NULL;
    return 0;
}

s32 func_021177fc(void *arg0, void **arg1) {
    u8 *r0 = func_02117904(arg0, 0x43504f53);
    if (r0 != NULL) {
        *arg1 = r0 + 8;
        return 1;
    }
    *arg1 = NULL;
    return 0;
}

void func_0211782c(u8 *arg0) {
    *(u32 *)(arg0 + 0x14) += (u32)arg0;
}

s32 func_0211783c(void *arg0, void **arg1) {
    u8 *r4 = func_02117904(arg0, 0x504c5454);
    if (r4 == NULL) {
        *arg1 = NULL;
        return 0;
    }
    func_021178c4(r4 + 8);
    *arg1 = r4 + 8;
    return 1;
}

s32 func_02117878(void *arg0, void **arg1) {
    u8 *r4 = func_02117904(arg0, 0x50434d50);
    if (r4 != NULL) {
        func_021178b4(r4 + 8);
        *arg1 = r4 + 8;
        return 1;
    }
    *arg1 = NULL;
    return 0;
}

void func_021178b4(u8 *arg0) {
    *(u32 *)(arg0 + 0x4) += (u32)arg0;
}

void func_021178c4(u8 *arg0) {
    *(u32 *)(arg0 + 0xc) += (u32)arg0;
}

s32 func_021178d4(void *arg0, void **arg1) {
    u8 *r0 = func_02117904(arg0, 0x5343524e);
    if (r0 != NULL) {
        *arg1 = r0 + 8;
        return 1;
    }
    *arg1 = NULL;
    return 0;
}

void *func_02117904(void *arg0, u32 arg1) {
    u8 *p = (u8 *)arg0 + *(u16 *)((u8 *)arg0 + 0xc);
    u16 count = *(u16 *)((u8 *)arg0 + 0xe);
    u16 i;
    for (i = 0; i < count; i++) {
        if (*(u32 *)p == arg1) {
            return p;
        }
        p += *(u32 *)(p + 4);
    }
    return NULL;
}

void func_0211794c(void *arg0) {
    u16 i;
    *(u32 *)((u8 *)arg0 + 4) += (u32)arg0;
    for (i = 0; i < *(u16 *)arg0; i++) {
        u32 *arr = *(u32 **)((u8 *)arg0 + 4);
        arr[i] = (u32)((u8 *)arg0 + arr[i]);
    }
}

void func_02117994(void) {
    *(volatile u32 *)0x04000580 = 0xbfff0000;
    func_0200293c(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, 1, 0);
    *(volatile u32 *)0x0400044c = 0;
    {
        Vec3_02117994 vec0 = {0, 0, 0};
        Vec3_02117994 vec2 = data_02144d54;
        Vec3_02117994 vec1 = data_02144d60;
        func_020029a0(&vec0, &vec2, &vec1, 1, 0);
    }
    *(volatile u32 *)0x04000440 = 1;
}

extern u32 data_0216e22c[];
void func_02117a48(u32 arg0) {
    data_0216e22c[1] = arg0;
}

void func_02117a58(Struct60_02117a58 *arg0) {
    data_0216e234 = *arg0;
}

BOOL func_02117b9c(arg0, arg1)
void *arg0;
u32 arg1;
{
    u32 *t = *(u32 **)((u8 *)arg0 + 0x1c);
    if (arg1 < *(u16 *)t) {
        u8 *p = *(u8 **)(t + 3) + arg1 * 8;
        *(u8 **)arg0 = p;
        if (*(u16 *)(p + 4) != 0) {
            *(u8 **)((u8 *)arg0 + 4) = p;
        }
        return TRUE;
    }
    return FALSE;
}

u32 func_02117bd4(u32 **a0) {
    return *a0[1];
}

extern BOOL func_02117b9c();
void func_02117d74(void) {
    func_02117b9c();
}

s32 func_02117d80(void *arg0) {
    u32 *t = *(u32 **)((u8 *)arg0 + 0x1c);
    u32 diff = *(u32 *)arg0 - t[3];
    return (diff << 13) >> 16;
}

void func_02117d9c(void *arg0) {
    u32 *p = arg0;
    func_02117ddc(p + 8);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 1;
    p[4] = 0;
    p[5] = 0x1000;
    p[6] = 0;
    p[7] = 0;
}

void func_02117ddc(u32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    *(u16 *)(arg0 + 3) = 0;
}

void func_02117df4(void *arg0) {
    u8 *a = arg0;
    u8 *p = *(u8 **)(a + 0x1c);
    s32 cond = *(s32 *)(a + 0x14) > 0;
    u32 field8 = *(u32 *)(a + 8);
    u32 addr;
    if (cond != field8) {
        addr = *(u32 *)(p + 0xc) + (*(u16 *)(p + 2) << 3);
    } else {
        addr = *(u32 *)(p + 0xc) + (*(u16 *)(p + 0) << 3) - 8;
    }
    *(u32 *)(a + 0) = addr;
    *(u32 *)(a + 4) = addr;
    *(u32 *)(a + 0x10) = 0;
    func_02117be0(arg0);
}

void func_02117e4c(void *arg0, void *arg1) {
    *(void **)((u8 *)arg0 + 0x1c) = arg1;
    func_02117df4(arg0);
}

void func_02117e5c(void *arg0, u32 arg1, u32 arg2) {
    func_02008e08(arg0, arg1 + 0x07000400, arg2);
}

extern void func_02008e08(void *, u32, u32);
extern void func_021178b4(u8 *);
void func_02117e70(void *arg0, u32 arg1, u32 arg2) {
    func_02008e08(arg0, arg1 + 0x07000000, arg2);
}

extern u8 data_0216e374[];
extern u8 data_0216e8b4[];
extern u8 data_0216edf4[];
extern u8 data_0216e7b4[];
extern u8 data_0216ecf4[];
extern u8 data_0216e774[];
extern u8 data_0216ecb4[];
extern u8 data_0216f1f4[];
void func_02117e80(void) {
    func_02008df0(0xc0, data_0216e374, 0x400);
    func_02008df0(0xc0, data_0216e8b4, 0x400);
    func_02008df0(0xc0, data_0216edf4, 0x400);
    func_02008df0(0xffff, data_0216e274, 0x100);
    func_02008df0(0xffff, data_0216e7b4, 0x100);
    func_02008df0(0xffff, data_0216ecf4, 0x100);
    func_02008df0(0xffff, data_0216e774, 0x40);
    func_02008df0(0xffff, data_0216ecb4, 0x40);
    func_02008df0(0xffff, data_0216f1f4, 0x40);
}

s32 func_02117f54(u8 *arg0, u16 arg1, u16 arg2, s32 arg3) {
    u8 *row = data_0216e274 + arg3 * 0x540;
    u16 *p = (u16 *)(row + arg1 * 2);
    u16 *end = (u16 *)(row + arg2 * 2);
    s32 ok = 1;
    for (; p <= end; p++) {
        if (*p != 0xffff) {
            ok = 0;
            break;
        }
    }
    if (!ok) {
        return 0;
    }
    {
        u16 id = data_0216e270;
        data_0216e270 = id + 1;
        *(u16 *)(arg0 + 6) = arg2;
        *(u16 *)(arg0 + 0x10) = id;
        *(u16 *)(arg0 + 4) = arg1;
        *(u16 *)(arg0 + 8) = arg1;
        *(u16 *)(arg0 + 0xa) = 0x20;
        *(u16 *)(arg0 + 0xc) = 0;
        *(u32 *)(arg0 + 0) = arg3;
        *(u32 *)(arg0 + 0x14) = 0;
        func_02008df0(id, row + arg1 * 2, (arg2 - arg1 + 1) * 2);
    }
    return 1;
}

s32 func_02118008(u8 *arg0, u16 arg1, u16 arg2) {
    u8 *row = data_0216e274 + *(u32 *)(arg0 + 0) * 0x540 + 0x500;
    u16 *p = (u16 *)(row + arg1 * 2);
    u16 *end = (u16 *)(row + arg2 * 2);
    s32 ok = 1;
    for (; p <= end; p++) {
        if (*p != 0xffff) {
            ok = 0;
            break;
        }
    }
    if (!ok) {
        return 0;
    }
    {
        s32 count = arg2 - arg1 + 1;
        *(u16 *)(arg0 + 0xc) = arg2;
        *(u16 *)(arg0 + 0xa) = arg1;
        *(u16 *)(arg0 + 0xe) = arg1;
        *(u32 *)(arg0 + 0x14) = 0;
        func_02008df0(*(u16 *)(arg0 + 0x10), row + arg1 * 2, count * 2);
    }
    return 1;
}

s32 func_02118178(u8 *arg0, s32 *arg1) {
    u16 count = *(u16 *)(arg0 + 0xc);
    u16 idx = *(u16 *)(arg0 + 0xe);
    s32 room;
    if (idx > count + 1 || *(u16 *)(arg0 + 0xa) > count) {
        return 0xfffe;
    }
    room = (u16)(count - idx + 1);
    if (room < 1) {
        return 0xfffe;
    }
    {
        u32 bank = *(u32 *)(arg0 + 0);
        u8 *entry = data_0216e274 + bank * 0x540 + 0x100 + idx * 0x20;
        *(u16 *)(entry + 6) = arg1[0] >> 4;
        *(u16 *)(entry + 0xe) = arg1[1] >> 4;
        *(u16 *)(entry + 0x16) = arg1[2] >> 4;
        *(u16 *)(entry + 0x1e) = arg1[3] >> 4;
        *(u16 *)(arg0 + 0xe) = idx + 1;
        return idx;
    }
}

