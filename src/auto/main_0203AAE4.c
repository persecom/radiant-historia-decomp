/* 1 function from 0x0203AAE4 to 0x0203BAE4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 **data_02160244;
extern u8 *data_02160204;
extern u8 *data_02160260;
extern u8 *data_02160258;
extern void func_020d9ea8(s32, s32);
extern u8 *func_0205bad4(void *);
extern void func_02033274(void *, s32, s32, s32);
extern void func_020dd810(void *, s32, s32);
extern void func_020d907c(void *);
extern void func_020331d0(void *, s32, s32);
extern s32 func_020331f0(void *);
extern s32 func_0205bcb0(void *, s32);
extern void func_0210d27c(s32);
extern s32 func_020d2af4(s32, s32, s32, s32, s32);
extern u8 *func_020f0a5c(u16);
extern void func_020df3f4(s32, s32);
extern void func_020df56c(s32, s32);
extern void func_020a2c38(u16, s32);
extern void func_02035c3c(void *, s32);
extern u8 *func_020ddc08(s32);
extern void func_020c1370(s32, void *, s32, s32, s32);
extern void func_020d9058(void *);
extern void func_0205db90(void *, void *, s32, s32);
extern void func_0206e7a0(s32, void *, void *, s32);
extern void *func_020ec950(s32);
extern s32 func_020ec9a0(void *, s32);
extern void func_020ec548(void *);
extern void func_020331b0(void *, s32);
extern s32 unk_const_ffc;
s32 func_0203aae4(u8 *arg0) {
    u8 *r7 = *(u8 **)(arg0 + 0x128);
    u8 *r8 = *(u8 **)(r7 + 0x8c);
    u8 *r5 = *(u8 **)(r7 + 0x0);
    s32 ret = 0;
    struct { s32 x, y, z; } v1 = {0, 0, 0};
    struct { s32 x, y, z; } v2;

    switch (*(u16 *)(r8 + 0)) {
    case 0: {
        u8 *it;
        func_020d9ea8(8, 0);
        *(s32 *)(r8 + 0x24) = *(s32 *)(r5 + 0);
        *(s32 *)(r8 + 0x28) = *(s32 *)(r5 + 4);
        *(s32 *)(r8 + 0x2c) = *(s32 *)(r5 + 8);
        *(s32 *)(r8 + 0x18) = *(s32 *)(arg0 + 0);
        *(s32 *)(r8 + 0x1c) = *(s32 *)(arg0 + 4);
        *(s32 *)(r8 + 0x20) = *(s32 *)(arg0 + 8);
        it = func_0205bad4(r7);
        while (it != NULL) {
            u8 *obj = *(u8 **)it;
            if (obj != NULL && *(void **)(obj + 0x118) != NULL) {
                *(s32 *)(obj + 0xd4) = *(s32 *)(obj + 0);
                *(s32 *)(obj + 0xd8) = *(s32 *)(obj + 4);
                *(s32 *)(obj + 0xdc) = *(s32 *)(obj + 8);
            }
            it = *(u8 **)(it + 0x18);
        }
        ret = 1;
        break;
    }
    case 1:
        if ((*(u16 *)(r8 + 8) & 1) == 0) {
            *(u32 *)(arg0 + 0x78) = 0x35c000;
            *(u16 *)(data_02160a74 + 0x1e0) = 0;
            func_02033274(arg0, *(s32 *)(r5 + 0) - 0x14000, *(s32 *)(r5 + 4), *(s32 *)(r5 + 8));
            func_020dd810(arg0, 1, 0);
            func_020d907c(arg0);
            (*data_02160244)[0x6c] = 1;
            func_020331d0(r8, 1, 1);
        }
        if (func_020331f0(arg0) != 0) {
            ret = 2;
        }
        break;
    case 2:
        if ((*(u16 *)(r8 + 8) & 1) == 0) {
            func_020dd810(arg0, 2, 0);
            func_020331d0(r8, 1, 1);
        }
        if ((*(u16 *)(r8 + 8) & 1) != 0 && (*(u16 *)(r8 + 8) & 2) == 0 && (func_0205bcb0(arg0, 3) & 1) != 0) {
            u8 *it;
            func_020331d0(r8, 2, 1);
            it = func_0205bad4(r7);
            while (it != NULL) {
                u8 *obj = *(u8 **)it;
                if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                    if ((*(u32 *)(*(u8 **)(obj + 0x118) + 0x78) & 0x20) == 0) {
                        func_020dd810(obj, 9, 0);
                    }
                }
                it = *(u8 **)(it + 0x18);
            }
            *(u16 *)(r8 + 0x30) = 0;
            func_0210d27c(0x6c);
        }
        if ((*(u16 *)(r8 + 8) & 1) != 0 && (*(u16 *)(r8 + 8) & 2) != 0 && (*(u16 *)(r8 + 8) & 8) == 0 && (func_0205bcb0(arg0, 5) & 2) != 0) {
            func_020dd810(arg0, 1, 0);
            func_020331d0(r8, 8, 1);
        }
        if ((*(u16 *)(r8 + 8) & 2) != 0) {
            u16 total = 0, done = 0;
            u8 *it = func_0205bad4(r7);
            while (it != NULL) {
                u8 *obj = *(u8 **)it;
                if (obj != NULL && *(void **)(obj + 0x118) != NULL) {
                    s32 x = *(s32 *)(obj + 0) + 0x8000;
                    total++;
                    *(s32 *)(obj + 0) = x;
                    if (x >= *(s32 *)(r8 + 0x24) + 0xc8000) {
                        *(s32 *)(obj + 0) = *(s32 *)(r8 + 0x24) + 0xc8000;
                        *(u32 *)(obj + 0x80) &= ~2;
                        done++;
                    }
                }
                it = *(u8 **)(it + 0x18);
            }
            if (total == done) {
                func_020331d0(r8, 4, 1);
            }
        }
        if ((*(u16 *)(r8 + 8) & 4) != 0 && (*(u16 *)(r8 + 8) & 8) != 0) {
            (*data_02160244)[0x6c] = 8;
            if (*(s16 *)(r8 + 0x30) == 0) {
                *(s16 *)(r8 + 0x30) += 1;
                func_0210d27c(0x60);
            }
            *(s32 *)(arg0 + 0) += 0x8000;
            if (*(s32 *)(arg0 + 0) >= *(s32 *)(r8 + 0x24) + 0xc8000) {
                func_020331d0(r8, 0x10, 1);
            }
        }
        if ((*(u16 *)(r8 + 8) & 0x10) != 0) {
            if (func_020d2af4(0, 2, 0x1f, 1, 0x21c) != 0) {
                u8 *o = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
                *(u32 *)(o + 0x14) &= ~1;
                func_020df3f4(0, 2);
                func_020df56c(0, 1);
                *(u16 *)(data_02160260 + 0x4a) = 0;
                func_020a2c38(*(u16 *)(data_02160260 + 0x4a), 0);
                ret = 3;
            }
        }
        break;
    case 3:
        if ((*(u16 *)(r8 + 8) & 1) == 0) {
            arg0[0x192] = 0x64;
            r5[0x192] = 0x64;
            func_02035c3c(r5, 0);
            if (*(u16 *)(r5 + 0x8e) == 0x353) {
                s32 id = 0x354;
                u8 *o = func_020ddc08(id);
                o[0x192] = 0x64;
                *(u32 *)(o + 0x64) = 0;
                o = func_020ddc08(id + 1);
                o[0x192] = 0x64;
                *(u32 *)(o + 0x64) = 0;
            }
            *(u32 *)(r5 + 0x64) = 0;
            arg0[0x192] = 0x78;
            *(s32 *)(r5 + 0) = *(s32 *)(r8 + 0x24);
            *(s32 *)(r5 + 4) = *(s32 *)(r8 + 0x28);
            *(s32 *)(r5 + 8) = *(s32 *)(r8 + 0x2c);
            *(s32 *)(r5 + 0) -= 0xc8000;
            *(s32 *)(arg0 + 0) = 0x1d4000;
            *(u32 *)(r5 + 0x80) |= 2;
            func_020dd810(r5, 0, 0);
            *(u32 *)(r5 + 0xf8) = 1;
            func_020d2af4(0, 0x1f, 0x1f, 1, 0x2bc);
            v2.x = 0x80000;
            v2.y = 0x60000;
            v2.z = 0x25a000;
            func_020c1370(1, &v2, 0x40000, 3, 0);
            v2.x = 0x80000;
            v2.y = 0x60000;
            v2.z = 0x259000;
            func_020c1370(2, &v2, 0x40000, 2, 0x180);
            v2.x = *(s32 *)(r8 + 0x24);
            v2.y = *(s32 *)(r8 + 0x28) + 0xa000;
            v2.z = *(s32 *)(r8 + 0x2c);
            func_020d9058(&v2);
            *(s32 *)(data_02160258 + 0) = v2.x;
            *(s32 *)(data_02160258 + 4) = v2.y;
            *(s32 *)(data_02160258 + 8) = v2.z;
            func_0210d27c(0x75);
            func_020331d0(r8, 1, 1);
        }
        if ((*(u16 *)(r8 + 8) & 1) != 0) {
            ret = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    }
    if (ret != 0) {
        func_020331b0(r8, ret);
    }
    return ret;
}
