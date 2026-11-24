/* 56 functions from 0x02117304 to 0x02118234 (main), found by ds-decomp. */
#include "common.h"
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
extern void func_021176d8(void *);
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
extern void func_021176d8(void *);
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
    Vec3_02117994 vec0;
    Vec3_02117994 vec2;
    Vec3_02117994 vec1;

    *(volatile u32 *)0x04000580 = 0xbfff0000;
    func_0200293c(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, 1, 0);
    *(volatile u32 *)0x0400044c = 0;
    vec0.x = 0;
    vec0.y = 0;
    vec0.z = 0;
    vec2 = data_02144d54;
    vec1 = data_02144d60;
    func_020029a0(&vec0, &vec2, &vec1, 1, 0);
    *(volatile u32 *)0x04000440 = 1;
}

extern u32 data_0216e22c[];
void func_02117a48(u32 arg0) {
    data_0216e22c[1] = arg0;
}

void func_02117a58(Struct60_02117a58 *arg0) {
    data_0216e234 = *arg0;
}

u32 func_02117bd4(u32 **a0) {
    return *a0[1];
}

extern void func_02117b9c(void);
void func_02117d74(void) {
    func_02117b9c();
}

void func_02117e5c(void *arg0, u32 arg1, u32 arg2) {
    func_02008e08(arg0, arg1 + 0x07000400, arg2);
}

extern void func_02008e08(void *, u32, u32);
extern void func_021178b4(u8 *);
void func_02117e70(void *arg0, u32 arg1, u32 arg2) {
    func_02008e08(arg0, arg1 + 0x07000000, arg2);
}

