/* 1 function from 0x0203AAE4 to 0x0203BAE4 (main), found by ds-decomp. */
#include "common.h"

typedef struct { s32 x, y, z; } Vec3;
/* shared epilogue templates:
if (ret != 0) {
if (ret == 0) {
func_020331b0(r8, ret);
return ret;
}
*/

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
extern s32 func_020331b0(void *, s32);
extern s32 unk_const_ffc;
#pragma push
#pragma opt_propagation off
s32 func_0203aae4(u8 *arg0) {
    u8 *r7 = *(u8 **)(arg0 + 0x128);
    u8 *r8 = *(u8 **)(r7 + 0x8c);
    u8 *r5 = *(u8 **)(r7 + 0x0);
    s32 ret = 0;
    Vec3 v1 = {0, 0, 0};
    struct { u8 a; u16 b; u8 c; u16 d; u8 e; } v3;
    Vec3 v2;
    v3.a = 0;
    v3.b = 0;
    v3.c = 2;
    v3.d = 0x258;
    v3.e = 0;

    switch (*(u16 *)(r8 + 0)) {
    case 0: {
        u8 *it;
        func_020d9ea8(8, 0);
        *(Vec3 *)(r8 + 0x24) = *(Vec3 *)r5;
        *(Vec3 *)(r8 + 0x18) = *(Vec3 *)arg0;
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
            if (*(u16 *)(r5 + 0x8e) == v3.d + 0xfb) {
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
            *(Vec3 *)r5 = *(Vec3 *)(r8 + 0x24);
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
            v2 = *(Vec3 *)(r8 + 0x24);
            v2.y += 0xa000;
            func_020d9058(&v2);
            *(Vec3 *)data_02160258 = v2;
            func_0210d27c(0x75);
            func_020331d0(r8, 1, 1);
        }
        if ((*(u16 *)(r8 + 8) & 1) != 0) {
            ret = 4;
        }
        break;
    case 4:
        if ((*(u16 *)(r8 + 8) & 0x10) == 0 && func_020d2af4(ret, ret - 3, ret, 1, 0x2bc) != 0) {
            func_020331d0(r8, 0x10, 1);
        }
        if ((*(u16 *)(r8 + 8) & 1) == 0) {
            if (*(s32 *)(r5 + 0) < *(s32 *)(r8 + 0x24)) {
                *(s32 *)(r5 + 0) += 0x7000;
            } else {
                *(u32 *)(arg0 + 0x80) |= 2;
                func_020dd810(arg0, 1, 0);
                *(s32 *)(r5 + 0) = *(s32 *)(r8 + 0x24);
                func_020331d0(r8, 1, 1);
            }
        }
        if ((*(u16 *)(r8 + 8) & 1) != 0 && (*(u16 *)(r8 + 8) & 2) == 0) {
            s32 x = *(s32 *)(r5 + 0) - 0x28000;
            if (*(s32 *)(arg0 + 0) <= x) {
                *(s32 *)(arg0 + 0) += 0x8000;
            } else {
                *(s32 *)(arg0 + 0) = x;
                func_0210d27c(0x60);
            }
            func_020dd810(arg0, 8, 0);
            func_020331d0(r8, 2, 1);
        }
        if ((*(u16 *)(r8 + 8) & 2) != 0 && (*(u16 *)(r8 + 8) & 4) == 0) {
            s32 state = arg0[0x104];
            if (state == 8 || (state == 0 && (func_0205bcb0(arg0, 1) & 2) != 0)) {
                func_020dd810(arg0, 0xe, 0);
                func_020331d0(r8, 4, 1);
            }
        }
        if ((*(u16 *)(r8 + 8) & 4) != 0 && arg0[0x104] == 0xe) {
            *(s16 *)(r8 + 2) += 1;
            if (*(volatile s16 *)(r8 + 2) > 2) {
                if ((*(u16 *)(r8 + 8) & 0x10) == 0 && (func_0205bcb0(arg0, 4) & 1) != 0) {
                    *(s32 *)(r5 + 0) += 0x10000;
                    func_020dd810(r5, 9, 0);
                    func_0205db90(arg0, r5, 3, 8);
                    func_0206e7a0(0xc, r5, &v1, 0);
                    func_0210d27c(0x72);
                }
                func_020331d0(r8, 0x10, 1);
                if ((*(u16 *)(r8 + 8) & 0x20) == 0 && (func_0205bcb0(arg0, 8) & 1) != 0) {
                    func_0205db90(arg0, r5, 3, 8);
                    func_0210d27c(0x72);
                    func_0206e7a0(0xc, r5, &v1, 0);
                }
                func_020331d0(r8, 0x20, 1);
                if ((*(u16 *)(r8 + 8) & 0x40) == 0 && (func_0205bcb0(arg0, 0xc) & 1) != 0) {
                    func_0205db90(arg0, r5, 3, 8);
                    func_0210d27c(0x72);
                    func_0206e7a0(0xc, r5, &v1, 0);
                }
                func_020331d0(r8, 0x40, 1);
                if ((*(u16 *)(r8 + 8) & 0x80) == 0 && (func_0205bcb0(arg0, 0x11) & 1) != 0) {
                    func_0205db90(arg0, r5, 3, 8);
                    func_0210d27c(0x72);
                    func_0206e7a0(0xc, r5, &v1, 0);
                }
                func_020331d0(r8, 0x80, 1);
                if ((*(u16 *)(r8 + 8) & 0x100) == 0 && (func_0205bcb0(arg0, 0x1a) & 1) != 0) {
                    func_0205db90(arg0, r5, 3, 8);
                    func_0210d27c(0x72);
                    func_0206e7a0(0xc, r5, &v1, 0);
                }
                func_020331d0(r8, 0x100, 1);
                if ((func_0205bcb0(arg0, 0) & 2) != 0) {
                    func_020dd810(arg0, 0xf, 0);
                    ret = 5;
                }
            }
        }
        break;
    case 5:
        if ((*(u16 *)(r8 + 8) & 1) == 0 && (func_0205bcb0(arg0, 4) & 1) != 0) {
            func_0205db90(arg0, r5, 3, 8);
            func_0210d27c(0x6e);
            func_0206e7a0(0xc, r5, &v1, 0);
            *(s32 *)(r5 + 0) += 0x10000;
            *(s32 *)(arg0 + 0) -= 0x18000;
            func_020331d0(r8, 1, 1);
        }
        if ((func_0205bcb0(arg0, 0) & 2) != 0) {
            func_020dd810(arg0, 0x10, 0);
            ret = 6;
        }
        break;
    case 6:
        if ((*(u16 *)(r8 + 8) & 1) == 0 && (func_0205bcb0(arg0, 4) & 1) != 0) {
            func_0205db90(arg0, r5, 3, 8);
            func_0206e7a0(0xc, r5, &v1, 0);
            func_0210d27c(0x73);
            v2.x = 0xae000;
            v2.y = 0x60000;
            v2.z = 0x263000;
            func_020c1370(3, &v2, 0x7dd, 0, 0x200);
            *(s32 *)(r5 + 4) += 0x18000;
            *(s32 *)(arg0 + 0) -= 0x28000;
            *(s32 *)(arg0 + 4) += 0x18000;
            func_020331d0(r8, 1, 1);
        }
        if ((func_0205bcb0(arg0, 0) & 2) != 0) {
            func_020dd810(arg0, 0x11, 0);
            ret = 7;
        }
        break;
    case 7: {
        u8 *p;
        if ((*(u16 *)(r8 + 8) & 0x20) == 0 && (func_0205bcb0(arg0, 2) & 1) != 0) {
            func_0210d27c(0x68);
            func_020331d0(r8, 0x20, 1);
        }
        p = func_020ec950(3);
        if (p != NULL && (func_020ec9a0(*(void **)p, 0) & 2) != 0) {
            func_020ec548(p);
        }
        if ((*(u16 *)(r8 + 8) & 1) == 0 && (func_0205bcb0(arg0, 8) & 1) != 0) {
            func_0205db90(arg0, r5, 3, 8);
            func_0210d27c(0x90);
            func_0206e7a0(0xc, r5, &v1, 0);
            v2.x = 0xa0000;
            v2.y = 0x60000;
            v2.z = 0x263000;
            func_020c1370(4, &v2, 0x7dd, 1, 0xa00);
            *(s32 *)(r5 + 4) -= 0x20000;
            func_020331d0(r8, 1, 1);
        }
        if ((*(u16 *)(r8 + 8) & 1) != 0) {
            *(s32 *)(arg0 + 4) -= 0x4000;
            if (*(s32 *)(arg0 + 4) <= 0xc000) {
                *(s32 *)(arg0 + 4) = 0xc000;
            }
            *(s32 *)(r5 + 4) -= 0x4000;
            if (*(s32 *)(r5 + 4) <= *(s32 *)(r5 + 0xd8)) {
                *(s32 *)(r5 + 4) = *(s32 *)(r5 + 0xd8);
            }
            if ((*(u16 *)(r8 + 8) & 4) == 0) {
                v2.x = 0x58000;
                v2.y = 0x80000;
                v2.z = 0x280000;
                func_020c1370(5, &v2, 5 + 0x820, 1, 0x1200);
                v2.x = 0x58000;
                v2.y = 0x80000;
                v2.z = 0x280000 - 0x1000;
                func_020c1370(6, &v2, 5 + 0x820, 2, 0x1a40);
                func_020dd810(r5, 9, 0);
                func_0206e7a0(0xc, r5, &v1, 0);
                func_020331d0(r8, 4, 1);
                p = func_020ec950(5);
                if (p != NULL) {
                    s32 *q = (s32 *)p;
                    q[8] += 0x100;
                    q[9] += 0x200;
                    if (q[9] > 0x2000) {
                        u8 *obj = *(u8 **)(*(u8 **)p + 8);
                        u8 state = obj[0x71];
                        state -= 2;
                        obj[0x71] = state;
                        if ((*(u8 **)(*(u8 **)p + 8))[0x71] < 2)
                            (*(u8 **)(*(u8 **)p + 8))[0x71] = 0;
                    }
                    func_020ec548(p);
                }
                func_020331d0(r8, 8, 1);
                p = func_020ec950(6);
                if (p != NULL) {
                    s32 *q = (s32 *)p;
                    q[8] += 0x200;
                    q[9] += 0x200;
                    if (q[8] > 0x2000) {
                        u8 *obj = *(u8 **)(*(u8 **)p + 8);
                        u8 state = obj[0x71];
                        state -= 2;
                        obj[0x71] = state;
                        if ((*(u8 **)(*(u8 **)p + 8))[0x71] < 2)
                            (*(u8 **)(*(u8 **)p + 8))[0x71] = 0;
                    }
                    func_020ec548(p);
                }
                func_020331d0(r8, 0x10, 1);
                p = func_020ec950(4);
                if (p != NULL && (func_020ec9a0(*(void **)p, 0) & 2) != 0) {
                    func_020ec548(p);
                }
                if ((*(u16 *)(r8 + 8) & 2) == 0 && (func_0205bcb0(arg0, 0) & 2) != 0) {
                    func_020dd810(arg0, 0, 0);
                    func_020331d0(r8, 2, 1);
                }
            }
        }
        if ((*(u16 *)(r8 + 8) & 2) != 0 && (*(u16 *)(r8 + 8) & 8) != 0 && (*(u16 *)(r8 + 8) & 0x10) != 0) {
            if (func_020d2af4(1, 1, 0x1f, 0, 0x2bc) != 0) {
                u8 *it = func_0205bad4(r7);
                while (it != NULL) {
                    u8 *obj = *(u8 **)it;
                    if (obj != NULL && *(void **)(obj + 0x118) != NULL) {
                        *(s32 *)(obj + 0) = *(s32 *)(obj + 0xd4);
                        *(s32 *)(obj + 4) = *(s32 *)(obj + 0xd8);
                        *(s32 *)(obj + 8) = *(s32 *)(obj + 0xdc);
                    }
                    it = *(u8 **)(it + 0x18);
                }
            }
            ret = 8;
        }
        break;
    }
    case 8:
        if ((*(u16 *)(r8 + 8) & 1) == 0) {
            u8 *o = func_020f0a5c(*(u16 *)(data_02160204 + 0x7c));
            *(u32 *)(o + 0x14) |= 1;
            func_020df3f4((s32)arg0, 0);
            arg0[0x192] = 0;
            r5[0x192] = 0;
            func_02035c3c(r5, 1);
            (*data_02160244)[0x10d] = 0;
            func_0205db90(arg0, r5, 4, 8);
            func_020a2c38(*(u16 *)(data_02160260 + 0x48), 0);
            *(s32 *)(arg0 + 4) = 0x20000;
            *(Vec3 *)r5 = *(Vec3 *)(r8 + 0x24);
            (*data_02160244)[0x6c] = 0;
            *(u8 **)(r5 + 0xf8) = NULL;
            func_020df56c(0, 0);
            if (func_020ec950(1) != NULL) {
                func_020ec548(NULL);
            }
            if (func_020ec950(2) != NULL) {
                func_020ec548(NULL);
            }
            func_020331d0(r8, 1, 1);
        }
        if ((*(u16 *)(r8 + 8) & 1) != 0) {
            if (func_020d2af4(1, -1, 0, 0, 0x2bc) != 0) {
                ret = 0x1a;
            }
        }
        break;
    }
    if (ret == 0) return ret;
    func_020331b0(r8, ret);
    return ret;
}
#pragma pop
