/* 8 functions from 0x0207B398 to 0x0207C328 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x;
    s32 unk4;
    s32 y;
} Vec3;

extern u8 *data_021600f0;
extern u8 *data_021600ac;
extern s32 func_0201f884(s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);
extern void func_020477dc(void *, s32, s32);
extern void *func_02021f10(u32);
extern void func_0210d27c(s32);

extern u8 data_02170248[];
extern u8 data_02170204[];
extern u8 *data_02160200;
extern u8 *data_021600bc;
extern u8 *data_02160204;
extern u8 data_0214846c[];
extern u32 data_0216263c[];
extern u8 data_02148494[];
extern u8 data_021484ac[];
extern u8 data_021484c4[];
extern s32 func_0207b35c(void *);
extern s32 func_0207bee0(u8 *);
extern s32 func_02043964(u16);
extern void func_02055240(void *);
extern void func_02052844(void *, s32, s32);
extern void func_0206e8f0(s32, void *, s32);
extern void func_02047490(void *);
extern void func_02002028(s32);
extern u64 func_02001fd0(void);
extern s32 func_0207bff0(u8 *, f32);
extern void *func_020f0aa4(u16);
extern void func_020f09d4(void *);
extern void func_0204487c(void *);
extern void func_0210eb98(void *, s32, u16, u16);
extern u8 *func_020f57e8(void);
extern void func_020522d4(void *, s32, s32);
extern void func_020468b0(s32);
extern void func_02052904(s32);
extern void func_0205443c(s32);
void func_0207b398(void) {
    u8 *s = *(u8 **)(data_021600f0 + 4);
    u8 *player = *(u8 **)(data_021600ac + 0x68);

    if (s[0] != 0 && *(u16 *)(s + 2) != 0) {
        (*(u16 *)(s + 2))--;
    }
    if (s[0] == 0) {
        return;
    }
    if (s[0] == 1) {
        if (*(u16 *)(s + 2) == 0xe) {
            u8 *node = *(u8 **)(s + 4);
            s32 hit = 0;
            while (node != NULL) {
                u8 *obj = *(u8 **)(node + 0x2c);
                u16 id = *(u16 *)(obj + 0x8e);
                u16 uid = *(u16 *)(obj + 0x90);
                node = *(u8 **)(node + 0x3c);
                if (id > 100 && id < 700) {
                    if (id != 2000 && !func_0207b35c(obj)) {
                        switch ((*(u8 **)(obj + 0xb0))[0x25]) {
                        case 1:
                            if (func_0207bee0(obj) && func_02043964(*(u16 *)(obj + 0x90)) && !(*(u32 *)(obj + 0xac) & 0x4000)) {
                                Vec3 pos;
                                func_02055240(obj);
                                {
                                    u8 *d0 = *(u8 **)(obj + 0xd0);
                                    d0[1] = 7;
                                    *(u16 *)(d0 + 4) = 0;
                                    if (d0[0x25] != 0x47 && d0[0x25] != 0x51) {
                                        *(u16 *)(d0 + 6) = 0;
                                    }
                                    d0[0xd] = 0;
                                }
                                func_02052844(obj, 0, -1);
                                pos = *(Vec3 *)obj;
                                pos.x -= 0x10000;
                                func_0206e8f0(8, &pos, 2);
                                func_0206e8f0(1, &pos, 2);
                                func_0210d27c(0x28);
                            }
                            break;
                        case 2:
                            hit = 1;
                            break;
                        default:
                            if (func_0207bee0(obj)) {
                                func_02047490(obj);
                                hit = 1;
                            }
                            break;
                        }
                    }
                } else {
                    s32 vx = *(s32 *)(obj + 0);
                    s32 vy = *(s32 *)(obj + 4);
                    s32 vz = *(s32 *)(obj + 8);
                    s32 *m = (s32 *)data_02170248;
                    s32 *p = (s32 *)data_02170204;
                    s32 tx = m[9] + (s32)(((s64)vy * m[3] + (s64)vx * m[0] + (s64)vz * m[6]) >> 12);
                    s32 ty = m[10] + (s32)(((s64)vy * m[4] + (s64)vx * m[1] + (s64)vz * m[7]) >> 12);
                    s32 tz = m[11] + (s32)(((s64)vy * m[5] + (s64)vx * m[2] + (s64)vz * m[8]) >> 12);
                    s32 pw = p[15] + (s32)(((s64)ty * p[7] + (s64)tx * p[3] + (s64)tz * p[11]) >> 12);
                    s32 px, py;
                    u64 inv;
                    func_02002028(pw);
                    px = p[12] + (s32)(((s64)ty * p[4] + (s64)tx * p[0] + (s64)tz * p[8]) >> 12);
                    py = p[13] + (s32)(((s64)ty * p[5] + (s64)tx * p[1] + (s64)tz * p[9]) >> 12);
                    inv = func_02001fd0();
                    {
                        s32 sx = (s32)((((s64)inv * px + 0x80000000LL) >> 32) + 0x1000) >> 1;
                        s32 sy = (s32)((((s64)inv * py + 0x80000000LL) >> 32) + 0x1000) >> 1;
                        *(s32 *)(obj + 0xfc) = ((sx << 8) + 0x800) >> 12;
                        *(s32 *)(obj + 0x100) = 0xc0 - ((sy * 0xc0 + 0x800) >> 12);
                    }
                    if (func_0207bff0(obj, 1.0f)) {
                        void *e = func_020f0aa4(*(u16 *)(obj + 0x90));
                        Vec3 pos = *(Vec3 *)obj;
                        pos.x -= 0x10000;
                        func_0206e8f0(8, &pos, 2);
                        func_0206e8f0(1, &pos, 2);
                        id = *(u16 *)(obj + 0x8e);
                        if (id == 0x2ee) {
                            func_0210d27c(0x79);
                            s[0] = 4;
                            func_02047490(obj);
                            if (e != NULL) {
                                func_020f09d4(e);
                            }
                            hit = 1;
                        } else if (id == 0x2bc) {
                            s16 bit;
                            func_0210d27c(0x4d);
                            bit = *(s16 *)(*(u8 **)(obj + 0xb0) + 0xe);
                            if (((u32 *)data_02160200)[bit / 32] & (1 << (bit % 32))) {
                                s[0] = 6;
                            } else if (!(*(u32 *)(data_02160200 + 0x15c) & 0x20000000)) {
                                s[0] = 6;
                            } else {
                                s[0] = 5;
                                bit = *(s16 *)(*(u8 **)(obj + 0xb0) + 0xe);
                                ((u32 *)data_02160200)[bit / 32] |= (1 << (bit % 32));
                            }
                            hit = 1;
                        } else if (id == 0x3a2) {
                            if (*(u32 *)(data_02160200 + 0x34) & 0x40) {
                                s16 bit = *(s16 *)(*(u8 **)(obj + 0xb0) + 0x18);
                                if (bit >= 1) {
                                    ((u32 *)data_02160200)[bit / 32] |= (1 << (bit % 32));
                                    func_0210d27c(0x49);
                                }
                            }
                            func_0210d27c(0x28);
                            func_02047490(obj);
                            if (e != NULL) {
                                func_020f09d4(e);
                            }
                            hit = 1;
                        } else if (id == 0x370 || (*(u32 *)(data_02160200 + 0x15c) & 0x20000000)) {
                            func_0210d27c(0x28);
                            func_02047490(obj);
                            if (e != NULL) {
                                func_020f09d4(e);
                            }
                            hit = 1;
                        } else {
                            func_0210d27c(0x4d);
                            hit = 1;
                        }
                    }
                }
                if (hit != 0) {
                    u8 *it = *(u8 **)(data_021600bc + 0xc4);
                    while (it != NULL) {
                        if (*(u16 *)(it + 0x16) == uid) {
                            s[0] = 3;
                            *(u8 **)(s + 0x14) = it;
                            break;
                        }
                        it = *(u8 **)(it + 0x1c);
                    }
                }
            }
        }
        if (*(u16 *)(s + 2) == 0) {
            s[0] = 0;
            *(u32 *)(player + 0xac) &= ~0x800;
        }
    }
    if (s[0] == 2 && *(u16 *)(s + 2) == 0) {
        s[0] = 0;
        *(u32 *)(player + 0xac) &= ~0x800;
        if (*(void **)(s + 0x14) != NULL) {
            func_0204487c(*(void **)(s + 0x14));
        }
    }
    if (s[0] == 3) {
        u8 *ev = *(u8 **)(s + 0x14);
        s[0] = 0;
        *(u32 *)(player + 0xac) &= ~0x800;
        if (ev != NULL) {
            u8 *p;
            func_0210eb98(data_0214846c, ((s32)*(u16 *)(data_02160204 + 0x72) - 1) / 20 + 1, *(u16 *)(data_02160204 + 0x72), *(u16 *)(ev + 0x10));
            p = func_020f57e8();
            if (p != NULL) {
                p[0x1c1] = 4;
                *(u32 *)(data_021600ac + 0x10) = 3;
                func_020522d4(player, 0, 0);
                func_020468b0(1);
                func_02052904(2);
                func_0205443c(1);
            }
            *(u16 *)(ev + 0x14) = 0;
            *(u16 *)(ev + 0x16) = 0;
        }
    }
}

#pragma opt_propagation off
s32 func_0207be40(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 x = func_0201ff0c(func_020201f4(func_0201f884(arg0[0] - arg1[0]), arg2));
    s32 y = func_0201ff0c(func_020201f4(func_0201f884(arg0[2] - arg1[2]), arg3));
    s64 sum = (s64)x * x;
    sum += (s64)y * y;
    *(volatile u16 *)0x40002b0 = 1;
    *(volatile u64 *)0x40002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x40002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x40002b4 + 1) >> 1;
}
#pragma opt_propagation on
extern const s16 data_0213a394[];
s32 func_0207bee0(u8 *arg0) {
    u8 *r4 = *(u8 **)(data_021600ac + 0x68);
    s32 scale = 0x18;
    s32 param = 0x3f800000;
    Vec3 v0;
    Vec3 v1;

    if (*(u16 *)(r4 + 0x92) == 0x8000) {
        scale = 0x12;
        param = 0x3f8ccccd;
    }

    v0.x = (*(s32 *)(r4 + 0xfc) << 12) - data_0213a394[((*(u16 *)(r4 + 0x92) % 0x10000) >> 4) * 2] * 0x18;
    v0.y = (*(s32 *)(r4 + 0x100) << 12) - scale * data_0213a394[((*(u16 *)(r4 + 0x92) % 0x10000) >> 4) * 2 + 1];
    v1.x = *(s32 *)(arg0 + 0xfc) << 12;
    v1.y = *(s32 *)(arg0 + 0x100) << 12;

    if (func_0207be40(&v0.x, &v1.x, 0x3f19999a, param) < ((*(u8 *)(arg0 + 0x9d) + 0x1c) << 12)) {
        s32 y0 = *(s32 *)(arg0 + 4);
        s32 y1 = *(s32 *)(r4 + 4);
        if (y1 <= y0 + 0x20000 && y1 >= y0 - 0x20000) {
            return 1;
        }
    }
    return 0;
}

s32 func_0207bff0(u8 *arg0, f32 arg1) {
    u8 *r4 = *(u8 **)(data_021600ac + 0x68);
    s32 scale = 0x18;
    s32 param = 0x3f800000;
    Vec3 v0;
    Vec3 v1;

    if (*(u16 *)(r4 + 0x92) == 0x8000) {
        scale = 0x12;
        param = 0x3f8ccccd;
    }

    v0.x = (*(s32 *)(r4 + 0xfc) << 12) - data_0213a394[((*(u16 *)(r4 + 0x92) % 0x10000) >> 4) * 2] * 0x18;
    v0.y = (*(s32 *)(r4 + 0x100) << 12) - scale * data_0213a394[((*(u16 *)(r4 + 0x92) % 0x10000) >> 4) * 2 + 1];
    v1.x = *(s32 *)(arg0 + 0xfc) << 12;
    v1.y = *(s32 *)(arg0 + 0x100) << 12;

    if ((f32)func_0207be40(&v0.x, &v1.x, 0x3f19999a, param) < (f32)((*(u8 *)(arg0 + 0x9d) + 0x1c) << 12) * arg1) {
        s32 y0 = *(s32 *)(arg0 + 4);
        s32 y1 = *(s32 *)(r4 + 4);
        if (y1 <= y0 + 0x20000 && y1 >= y0 - 0x20000) {
            return 1;
        }
    }
    return 0;
}

void func_0207c124(void) {
    u8 *node = *(u8 **)(data_021600f0 + 4);
    u8 *obj = *(u8 **)(data_021600ac + 0x68);
    if (*(u8 *)(node + 0) == 0) {
        return;
    }
    *(u16 *)(node + 2) = 0;
    *(u8 *)(node + 0) = 0;
    *(u32 *)(obj + 0xac) &= ~0x800;
    func_020477dc(obj, 2, 1);
}

void func_0207c17c(void) {
    u8 *p = *(u8 **)(data_021600f0 + 0x10);
    void *res = func_02021f10(0);
    u8 *node;
    s32 v;
    if (*(u8 *)(p + 0) == 1) {
        return;
    }
    v = *(u16 *)((u8 *)res + 0x14);
    if (v >= 0) {
        *(u16 *)(p + 2) = 0x1c2;
        *(u8 *)(p + 0) = 1;
        node = *(u8 **)(p + 4);
        while (node != NULL) {
            u8 *r1 = *(u8 **)(node + 0x2c);
            if (r1 != NULL) {
                *(u32 *)(r1 + 0xac) &= ~0x80000;
            }
            node = *(u8 **)(node + 0x54);
        }
    } else {
        func_0210d27c(6);
    }
}

extern s32 func_0210c2f4(void *, void *);
extern s32 func_020bdba0(u16);
void func_0207c200(void) {
    u8 *p = *(u8 **)(data_021600f0 + 0x10);
    u8 *r5;
    u8 *obj;
    u8 *node;

    if (*(u8 *)(p + 0) == 0) {
        return;
    }
    obj = *(u8 **)(data_021600ac + 0x68);
    *(u16 *)(p + 2) = *(u16 *)(p + 2) - 1;
    if (*(volatile u16 *)(p + 2) == 0) {
        *(u16 *)(p + 2) = 0x1c2;
    }
    node = *(u8 **)(p + 4);
    if (node == NULL) {
        return;
    }
    while (node != NULL) {
        r5 = *(u8 **)(node + 0x2c);
        if (r5 != NULL) {
            if (*(u16 *)(*(u8 **)(obj + 0xb0) + 4) == 0 &&
                *(u16 *)(r5 + 0x8e) == 0x14c9) {
                if (func_0210c2f4(r5, obj) < 0x20000) {
                    if (func_020bdba0(*(u16 *)(*(u8 **)(r5 + 0xb0) + 0x22)) == 0) {
                        *(u16 *)(*(u8 **)(obj + 0xb0) + 4) = *(u16 *)(r5 + 0x90);
                    }
                }
            }
            if (*(u16 *)(p + 2) == 0) {
                *(u32 *)(r5 + 0xac) |= 0x80000;
            }
        }
        node = *(u8 **)(node + 0x54);
    }
}

void func_0207c2dc(void) {
    u8 *p = *(u8 **)(data_021600f0 + 0x10);
    u8 *node;
    *(u8 *)(p + 0) = 0;
    *(u16 *)(p + 2) = 0;
    node = *(u8 **)(p + 4);
    while (node != NULL) {
        u8 *r1 = *(u8 **)(node + 0x2c);
        if (r1 != NULL) {
            *(u32 *)(r1 + 0xac) |= 0x80000;
        }
        node = *(u8 **)(node + 0x54);
    }
}

