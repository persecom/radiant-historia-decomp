/* 1 function from 0x020333B8 to 0x0203447C (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74;
extern u32 data_02160244;
extern u32 data_02160204;
extern u32 data_02160258;
extern u32 data_02160a6c;

typedef struct {
    u16 unk0;
    s16 unk2;
    u8 pad[4];
    u16 unk8;
} RHState;

typedef struct {
    u8 pad[0x8c];
    RHState *state;
} RHObj;

typedef struct {
    u8 pad[0x128];
    RHObj *obj;
} RHArg;

extern void func_020d9ea8(u32, s32);
extern void func_020d907c(void *);
extern void func_020331d0(void *, s32, s32);
extern void func_020dd810(void *, s32, s32);
extern void func_02033274(void *, s32, s32, s32);
extern void func_0210d27c(s32);
extern s32 func_020331f0(void *);
extern s32 func_020d2af4(s32, s32, s32, s32, s32);
extern u8 *func_020f0a5c(u16);
extern void func_020df3f4(void *, s32);
extern void func_020df56c(s32, s32);
extern void func_02036348(s32);
extern u8 *func_020c1370(s32, void *, s32, s32, s32);
extern s32 func_0205bcb0(void *, s32);
extern u8 *func_020ec950(s32);
extern s32 func_020332c8(u8 *);
extern void func_020ec548(u8 *);
s32 func_020333b8(RHArg *arg) {
    u8 *p = (u8 *)arg;
    u8 *s = (u8 *)arg->obj->state;
    s32 ret = 0;
    s32 vec[3];

    switch (*(u16 *)s) {
    case 0:
        func_020d9ea8(0x28, 0);
        *(u16 *)(*(u8 **)&data_02160a74 + 0x1e0) = 0;
        *(s32 *)(s + 0x18) = *(s32 *)(p + 0);
        *(s32 *)(s + 0x1c) = *(s32 *)(p + 4);
        *(s32 *)(s + 0x20) = *(s32 *)(p + 8);
        func_020d907c(s + 0x18);
        (*(u8 **)*(u8 **)&data_02160244)[0x6c] = 1;
        func_020d9ea8(0x80000000, 0);
        func_020d9ea8(8, 0x30);
        *(s16 *)(s + 2) = 0;
        ret = 1;
        break;

    case 1:
        *(s16 *)(s + 2) += 1;
        if (*(s16 *)(s + 2) > 10) {
            *(s16 *)(s + 2) = 0;
            ret = 2;
        }
        break;

    case 2:
        if (!(*(u16 *)(s + 8) & 1)) {
            func_020331d0(s, 1, 1);
            func_020dd810(p, 5, 0);
            *(s32 *)(p + 0x78) = 0x1000;
            func_02033274(p, *(s32 *)(p + 0) - 0x12c000, *(s32 *)(p + 4) + 0x64000, *(s32 *)(p + 8));
            func_0210d27c(0x60);
        }
        if (!(*(u16 *)(s + 8) & 2)) {
            if (func_020331f0(p) != 0) {
                func_020331d0(s, 2, 1);
            }
        }
        if (!(*(u16 *)(s + 8) & 4)) {
            if (func_020d2af4(0, 1, 0x1f, 1, 0x21c) != 0) {
                u8 *e = func_020f0a5c(*(u16 *)(*(u8 **)&data_02160204 + 0x7c));
                *(u32 *)(e + 0x14) &= ~1;
                func_020df3f4(p, 1);
                func_020df56c(0, 1);
                func_02036348(0);
                p[0x192] = 0x64;
                *(u16 *)(*(u8 **)&data_02160a74 + 0x1e0) = 0;
                func_020331d0(s, 4, 1);
            }
        }
        if ((*(u16 *)(s + 8) & 2) && (*(u16 *)(s + 8) & 4)) {
            vec[0] = 0x80000;
            vec[1] = 0x60000;
            vec[2] = 0;
            func_020c1370(1, vec, 0x7e7, 1, 0);
            vec[0] = 0x80000;
            vec[1] = 0x60000;
            vec[2] = 0;
            func_020c1370(2, vec, 0x7e7, 2, 0x200);
            *(s16 *)(s + 0x30) = 0;
            s[0x32] = 0;
            ret = 3;
        }
        break;

    case 3:
        if (!(*(u16 *)(s + 8) & 1)) {
            *(s32 *)(p + 0) = *(s32 *)(*(u8 **)&data_02160258 + 0) + 0x6c000;
            *(s32 *)(p + 4) = *(s32 *)(*(u8 **)&data_02160258 + 4) - 0x23000;
            *(s32 *)(p + 8) = *(s32 *)(*(u8 **)&data_02160258 + 8);
            func_0210d27c(0x75);
            func_020331d0(s, 1, 1);
        }
        if (!(*(u16 *)(s + 8) & 2)) {
            *(s16 *)(s + 2) += 1;
            *(s32 *)(p + 0) += 0x1000;
            *(s32 *)(p + 4) += 0x2555;
            if (*(s16 *)(s + 2) >= 15) {
                *(s16 *)(s + 2) = 0;
                func_020331d0(s, 2, 1);
            }
        }
        if (*(u16 *)(s + 8) & 2) {
            *(s16 *)(s + 2) += 1;
            if (*(s16 *)(s + 2) > 30) {
                ret = 9;
            }
        }
        break;

    case 9:
        if (!(*(u16 *)(s + 8) & 1)) {
            func_020dd810(p, 0xe, 0);
            func_020331d0(s, 1, 1);
        }
        if ((func_0205bcb0(p, 2) & 1) && !(*(u16 *)(s + 8) & 2)) {
            func_020331d0(s, 2, 1);
            s[0x32] = 1;
            vec[0] = 0x80000;
            vec[1] = 0x60000;
            vec[2] = 0;
            func_020c1370(3, vec, 0x7e7, 0, 0x340);
        }
        if (!(*(u16 *)(s + 8) & 4)) {
            u8 *e = func_020ec950(3);
            if (e != 0 && func_020332c8(e) == 0x1d) {
                func_020dd810(p, 0xf, 0);
                s[0x32] = 0;
                *(s16 *)(s + 0x30) = 0;
                func_020331d0(s, 4, 1);
            }
        }
        if (s[0x32] == 1) {
            *(s16 *)(s + 0x30) += 1;
            if (*(s16 *)(s + 0x30) % 3 == 0) {
                func_0210d27c(0x71);
            }
        }
        if ((*(u16 *)(s + 8) & 2) && !(*(u16 *)(s + 8) & 8)) {
            u8 *e = func_020ec950(3);
            if (*(s32 *)(*(u8 **)e + 0x20) != 0) {
                func_020ec548(e);
                func_020331d0(s, 8, 1);
            }
        }
        if ((*(u16 *)(s + 8) & 8) && !(*(u16 *)(s + 8) & 0x10)) {
            if (p[0x104] == 0xf && (func_0205bcb0(p, 4) & 1)) {
                func_0210d27c(0x60);
            }
            *(s16 *)(s + 2) += 1;
            if (*(s16 *)(s + 2) > 15) {
                *(s16 *)(s + 2) = 0;
                func_020ec548(func_020ec950(1));
                func_020ec548(func_020ec950(2));
                func_020331d0(s, 0x10, 1);
            }
        }
        if (*(u16 *)(s + 8) & 0x10) {
            *(s16 *)(s + 2) += 1;
            if (*(s16 *)(s + 2) > 15) {
                s[0x32] = 0;
                *(s16 *)(s + 0x30) = 0;
                ret = 10;
            }
        }
        break;

    case 10:
        if (!(*(u16 *)(s + 8) & 1)) {
            func_020dd810(p, 0x10, 0);
            vec[0] = 0x80000; vec[1] = 0x60000; vec[2] = 0;
            func_020c1370(4, vec, 0x7e7, 3, 0);
            vec[0] = 0x80000; vec[1] = 0x60000; vec[2] = 0;
            func_020c1370(5, vec, 0x7e7, 4, 0x140);
            vec[0] = 0x80000; vec[1] = 0x60000; vec[2] = 0;
            func_020c1370(6, vec, 0x7e7, 6, 0x280);
            func_020331d0(s, 1, 1);
        }
        if ((func_0205bcb0(p, 0x1c) & 1) && !(*(u16 *)(s + 8) & 2)) {
            u8 *e;
            func_020331d0(s, 2, 1);
            vec[0] = 0x80000; vec[1] = 0x60000; vec[2] = 0;
            e = func_020c1370(0, vec, 0x7e8, 2, 0x4c0);
            *(s32 *)(e + 0x20) = 0x800;
            *(s32 *)(e + 0x24) = 0x800;
            vec[0] = 0x80000; vec[1] = 0x60000; vec[2] = 0;
            func_020c1370(7, vec, 0x7e7, 7, 0x400);
        }
        if (func_0205bcb0(p, 0) & 1) func_0210d27c(0x77);
        if (func_0205bcb0(p, 0x1b) & 1) func_0210d27c(0x7f);
        if ((func_0205bcb0(p, 0x20) & 1) && !(*(u16 *)(s + 8) & 4)) {
            *(s32 *)(p + 0xf8) = 1;
            func_020331d0(s, 4, 1);
        }
        if (!(*(u16 *)(s + 8) & 8)) {
            u8 *e = func_020ec950(0);
            if (e != 0) {
                *(s32 *)(e + 0x20) += 0x200;
                *(s32 *)(e + 0x24) += 0x200;
                (*(u8 **)(*(u8 **)e + 8))[0x71] -= 3;
                if ((*(u8 **)(*(u8 **)e + 8))[0x71] < 2) {
                    (*(u8 **)(*(u8 **)e + 8))[0x71] = 0;
                    func_020ec548(e);
                    func_020331d0(s, 8, 1);
                }
            }
        }
        break;

    case 24:
        ret = 1;
        break;
    }
    return ret;
}
