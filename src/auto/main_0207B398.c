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
    extern void func_020f5714(s32, s32);
    typedef u8 *(*CreateEvent)(void *);
    typedef void *(*FormatEvent)(void *, ...);
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
            volatile s32 hit = 0;
            register u8 *node = *(u8 **)(s + 4);
            while (node != NULL) {
                register u8 *obj = *(u8 **)(node + 0x2c);
                u16 uid;
                u16 id;
                node = *(u8 **)(node + 0x3c);
                id = *(u16 *)(obj + 0x8e);
                uid = *(u16 *)(obj + 0x90);
                if (id > 100 && id < 700) {
                    if (id == 2000 || func_0207b35c(obj)) {
                        goto check_event;
                    }
                    switch ((*(u8 **)(obj + 0xb0))[0x25]) {
                    case 1:
                        if (func_0207bee0(obj) &&
                            func_02043964(*(u16 *)(obj + 0x90)) &&
                            !(*(u32 *)(obj + 0xac) & 0x4000)) {
                            Vec3 pos;
                            switch ((s32)*(u16 *)(obj + 0x8e)) {
                            case 0x1a5:
                            case 0x1a6:
                            case 0x1a7:
                            case 0x1a8:
                            case 0x1a9:
                            case 0x1c3:
                            case 0x1c4:
                            case 0x1c5:
                            case 0x1c6:
                            case 0x1cd:
                            case 0x1ce:
                            case 0x1cf:
                            case 0x1d0:
                            case 0x1d7:
                            case 0x1e1:
                            case 0x1e2:
                            case 0x1eb:
                            case 0x1f5:
                            case 0x1ff:
                            case 0x200:
                            case 0x213:
                                break;
                            default:
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
                                break;
                            }
                            pos = *(Vec3 *)obj;
                            pos.x -= 0x10000;
                            func_0206e8f0(8, &pos, 2);
                            func_0206e8f0(1, &pos, 2);
                            func_0210d27c(0x28);
                        }
                        goto check_event;
                    case 2:
                        goto mark_hit;
                    default:
                        if (func_0207bee0(obj)) {
                            func_02047490(obj);
                            goto mark_hit;
                        }
                        goto check_event;
                    }
                } else {
                    s32 *m = (s32 *)data_02170248;
                    s32 vy = *(s32 *)(obj + 4);
                    s32 vx = *(s32 *)(obj + 0);
                    s32 vz = *(s32 *)(obj + 8);
                    s64 acc;
                    s32 tx, ty, tz;
                    s32 px, py;
                    s32 sx, sy;
                    u64 inv;
                    u16 special;
                    void *e;
                    Vec3 pos;

                    acc = (s64)vy * m[3];
                    acc += (s64)vx * m[0];
                    acc += (s64)vz * m[6];
                    tx = m[9] + (s32)(acc >> 12);
                    acc = (s64)vy * m[4];
                    acc += (s64)vx * m[1];
                    acc += (s64)vz * m[7];
                    ty = m[10] + (s32)(acc >> 12);
                    acc = (s64)vy * m[5];
                    acc += (s64)vx * m[2];
                    acc += (s64)vz * m[8];
                    tz = m[11] + (s32)(acc >> 12);

                    acc = (s64)ty * ((s32 *)data_02170204)[7];
                    acc += (s64)tx * ((s32 *)data_02170204)[3];
                    acc += (s64)tz * ((s32 *)data_02170204)[11];
                    func_02002028(((s32 *)data_02170204)[15] + (s32)(acc >> 12));
                    acc = (s64)ty * ((s32 *)data_02170204)[4];
                    acc += (s64)tx * ((s32 *)data_02170204)[0];
                    acc += (s64)tz * ((s32 *)data_02170204)[8];
                    px = ((s32 *)data_02170204)[12] + (s32)(acc >> 12);
                    acc = (s64)ty * ((s32 *)data_02170204)[5];
                    acc += (s64)tx * ((s32 *)data_02170204)[1];
                    acc += (s64)tz * ((s32 *)data_02170204)[9];
                    py = ((s32 *)data_02170204)[13] + (s32)(acc >> 12);
                    inv = func_02001fd0();
                    sy = ((s32)(((s64)inv * py + 0x80000000LL) >> 32) + 0x1000) >> 1;
                    sy = (sy << 6) + (sy << 7);
                    sx = (s32)(((s64)inv * px + 0x80000000LL) >> 32);
                    sy = (sy + 0x800) >> 12;
                    sx = (sx + 0x1000) >> 1;
                    *(s32 *)(obj + 0xfc) = ((sx << 8) + 0x800) >> 12;
                    *(s32 *)(obj + 0x100) = 0xc0 - sy;

                    if (!func_0207bff0(obj, 0.8f)) {
                        goto check_event;
                    }
                    e = func_020f0aa4(*(u16 *)(obj + 0x90));
                    pos = *(Vec3 *)obj;
                    pos.x -= 0x10000;
                    func_0206e8f0(8, &pos, 2);
                    func_0206e8f0(1, &pos, 2);
                    special = *(u16 *)(obj + 0x8e);
                    if (special == 0x141f) {
                        func_0210d27c(0x79);
                        s[0] = 4;
                        func_02047490(obj);
                        if (e == NULL) {
                            goto mark_hit;
                        }
                    remove_event:
                        func_020f09d4(e);
                        goto mark_hit;
                    } else if (special == 0x13ed) {
                        s32 bit;
                        u32 *flags;
                        func_0210d27c(0x4d);
                        bit = *(s16 *)(*(u8 **)(obj + 0xb0) + 0xe);
                        flags = (u32 *)data_02160200;
                        if (flags[bit / 32] & (1u << (bit % 32))) {
                            s[0] = 6;
                            goto mark_hit;
                        }
                        if (!(flags[0x15c / 4] & 0x20000000)) {
                            s[0] = 6;
                            goto mark_hit;
                        }
                        s[0] = 5;
                        bit = *(s16 *)(*(u8 **)(obj + 0xb0) + 0xe);
                        ((u32 *)data_02160200)[bit / 32] |= 1u << (bit % 32);
                        goto mark_hit;
                    } else if (special == 0x14d3) {
                        u32 *flags = (u32 *)data_02160200;
                        if (flags[0x34 / 4] & 0x40) {
                            s32 bit = *(s16 *)(*(u8 **)(obj + 0xb0) + 0x18);
                            if (bit >= 1) {
                                flags[bit / 32] |= 1u << (bit % 32);
                                func_0210d27c(0x49);
                            }
                        }
                        func_0210d27c(0x28);
                        func_02047490(obj);
                        if (e != NULL) {
                            goto remove_event;
                        }
                        goto mark_hit;
                    } else if (special == 0x14a1 ||
                               (*(u32 *)(data_02160200 + 0x15c) & 0x20000000)) {
                        func_0210d27c(0x28);
                        func_02047490(obj);
                        if (e != NULL) {
                            goto remove_event;
                        }
                        goto mark_hit;
                    } else {
                        func_0210d27c(0x4d);
                    }
                }
            mark_hit:
                hit = 1;
            check_event:
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
            u16 map = *(u16 *)(data_02160204 + 0x72);
            p = ((CreateEvent)func_020f57e8)(
                ((FormatEvent)func_0210eb98)(data_0214846c,
                    ((s32)map - 1) / 20 + 1, map, *(u16 *)(ev + 0x10)));
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
    if (s[0] == 4) {
        u32 rnd;
        u8 *p;
        s[0] = 0;
        *(u32 *)(player + 0xac) &= ~0x800;
        func_020f5714(0, 1);
        rnd = data_0216263c[0] * data_0216263c[1] + data_0216263c[2];
        data_0216263c[0] = rnd;
        func_020f5714(1, (u16)(((rnd >> 16) * 10u) >> 16) + 5);
        func_020f5714(2, 1);
        func_020f5714(3, 1);
        p = ((CreateEvent)func_020f57e8)(data_02148494);
        p[0x1c1] = 4;
        *(u32 *)(data_021600ac + 0x10) = 3;
        if (*(u32 *)(player + 0xac) & 2) {
            *(u32 *)(player + 0xac) &= ~2u;
        }
        func_020522d4(player, 0, 1);
        func_020468b0(1);
        func_02052904(2);
        func_0205443c(1);
    }
    if (s[0] == 5) {
        u32 rnd = data_0216263c[0] * data_0216263c[1] + data_0216263c[2];
        u16 roll = (u16)(((rnd >> 16) * 1000u) >> 16);
        s32 reward;
        u8 *p;
        data_0216263c[0] = rnd;
        s[0] = 0;
        *(u32 *)(player + 0xac) &= ~0x800;
        if (roll < 150) {
            func_020f5714(0, 2);
            reward = 0xf8;
        } else {
            func_020f5714(0, 0);
            reward = 0x32;
        }
        func_020f5714(1, reward);
        func_020f5714(2, 1);
        func_020f5714(3, 1);
        p = ((CreateEvent)func_020f57e8)(data_021484ac);
        p[0x1c1] = 4;
        *(u32 *)(data_021600ac + 0x10) = 3;
        if (*(u32 *)(player + 0xac) & 2) {
            *(u32 *)(player + 0xac) &= ~2u;
        }
        func_020522d4(player, 0, 1);
        *(u32 *)(**(u8 ***)(player + 0x108) + 0x18) = 2;
        func_020468b0(1);
        func_02052904(2);
        func_0205443c(1);
    }
    if (s[0] == 6) {
        u8 *p;
        s32 flag = 0;
        s[0] = 0;
        *(u32 *)(player + 0xac) &= ~0x800;
        if (!(*(u32 *)(data_02160200 + 0x15c) & 0x20000000)) {
            flag = 1;
        }
        func_020f5714(1, flag);
        p = ((CreateEvent)func_020f57e8)(data_021484c4);
        p[0x1c1] = 4;
        if (*(u32 *)(player + 0xac) & 2) {
            *(u32 *)(player + 0xac) &= ~2u;
        }
        func_020522d4(player, 0, 1);
        *(u32 *)(data_021600ac + 0x10) = 3;
        func_020468b0(1);
        func_02052904(2);
        func_0205443c(1);
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

