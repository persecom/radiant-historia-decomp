/* 1 function from 0x02062578 to 0x020637E4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160244;
extern u8 *data_02160258;
extern u8 *data_02160a74;
extern u32 data_0216263c[3];
extern u8 *data_02160080;
extern u8 *data_02160a6c;
extern void func_020d3c98(s32);
extern void func_020a5ce4(void *);
extern void func_02062530(void);
extern void func_020d2e98(void);
extern void func_020d9ea8(s32, s32);
extern void func_0202b398(void);
extern void func_0202b41c(void);
extern void func_0202b6ec(void);
extern void func_0202b754(void);
extern void func_0202b928(void);
extern void func_0202b864(void);
extern void func_020de888(void);
extern u8 *func_02032240(void);
extern s32 func_020d3160(s32, s32, s32, s32);
extern void func_02096504(void *, s32, u16, s32);
extern void func_020d91bc(s32);
extern u8 *func_02062568(void *);
extern void func_020223bc(void *, void *, s16);
extern u8 *func_020e1ccc(void *);
extern void func_020d9058(void *);
extern void func_020d907c(void *);
extern void func_020d2c8c(void *, s8);
extern void func_020d612c(s32, s32, s32);
extern void func_020de0a8(void *);
extern void func_020d9e08(s32);
void func_02062578(void) {
    extern u8 *data_0216011c;
    extern u8 *data_02160090;
    extern u8 *data_02160260;
    extern const s16 data_0213a394[];
    extern s32 data_02151fcc;
    extern s32 func_02062570(s32 *);
    extern void func_020dd810(void *, s32, s32);
    extern void *func_020ddb90(u16);
    extern void *func_020ddb00(u8);
    extern void *func_020ddab4(u8);
    extern void *func_020dda2c(u16);
    extern void func_020d9090(void);
    extern s32 func_0205a83c(void);
    extern s32 func_020981fc(u16);
    extern void func_020db56c(void);
    extern void func_020d6048(s32);
    extern void func_02031498(void);
    extern void func_02031fbc(void *, s32, s32);
    extern void func_020b52f4(u32);
    extern void func_020db4fc(void);
    extern void func_020637e4(void);
    extern void func_0205b2ac(void);
    extern s32 func_020db630(void);
    extern void func_020db680(void);
    extern void func_0210d27c(s32);
    extern void func_020c3020(void *);
    extern void func_020d0a40(s32);
    extern void func_02032a1c(void);
    extern s32 func_020d2e14(s32, s32);
    extern void func_02030748(s32);
    extern s32 func_020329a0(void);
    extern void func_0205a8c8(void);
    extern void func_0205b6bc(void);
    extern void func_0205b4e0(void);
    extern void func_0205b524(void);
    extern void func_0205b01c(void);
    extern void *func_020d3fac(u8);
    extern void func_020e26f0(u32, s32, s32);

    register u8 **pw;
    register s32 zero;
    register u8 *work;
    register s32 two;
    register s32 one;
    register u8 **pg;
    s32 i;
    s32 transition, delay;

    pg = &data_02160244;
    one = 1;
    work = *(u8 **)*pg;
    pw = &data_02160258;
    zero = 0;

    if (*(u32 *)(work + 0xc) == 1) {
        register s32 flag;
        register s32 index;
        func_020d3c98(zero);
        func_020a5ce4(*(void **)(data_02160a74 + 0x78));
        *(u32 *)(data_02160a74 + 0x58) &= ~0x4000;
        func_02062530();
        func_020d2e98();
        func_020d9ea8(8, 0x30);
        if ((*pg)[0x10e] == 1) {
            func_0202b398();
            func_0202b41c();
            func_0202b6ec();
            func_0202b754();
            func_0202b928();
            func_0202b864();
            work[0x39] = one;
        }
        func_020de888();
        flag = 0;
        if ((*pg)[0x10e] == 0) {
            u8 *o = func_02032240();
            if (o != NULL) {
                s8 v = *(s8 *)(*(u8 **)(o + 8) + 0x1a);
                if ((u8)(s8)(v - 2) <= 1) {
                    func_020d3160(5, flag, flag, flag);
                    flag = one;
                }
            }
        }
        if (flag == 0) {
            func_020d3160(7, zero, zero, zero);
            func_020d3160(zero, zero, zero, zero);
        }
        if (flag == 1 && func_020d3160(2, zero, zero, zero) == 0) {
            func_020d3160(1, 1, zero, zero);
        }
        func_0202b398();
        func_0202b41c();
        for (index = 0; index < 10; index++) {
            u8 *e = *(u8 **)(work + 0x10 + index * 4);
            if (e != NULL) {
                u8 *obj = *(u8 **)e;
                if ((*(u8 **)(obj + 0x118))[0] == 1) {
                    func_02096504(*(void **)(e + 0x14), zero, (u16)index, zero);
                    if (*(u32 *)(*(u8 **)(obj + 0x118) + 0x78) & 4) {
                        u32 addend = *(volatile u32 *)&data_0216263c[2];
                        u32 multiplier = *(volatile u32 *)&data_0216263c[1];
                        u32 seed = *(volatile u32 *)&data_0216263c[0];
                        u32 r = multiplier * seed + addend;
                        *(volatile u32 *)&data_0216263c[0] = r;
                        if ((u16)(((r >> 16) * 100) >> 16) < 0x19) {
                            *(u16 *)(e + 0xe) |= 0x200;
                            continue;
                        }
                    }
                    *(u32 *)(*(u8 **)(obj + 0x128) + 0x18) &= ~8;
                }
            }
        }
        func_020d91bc(6);
        if (work[0x38] == 0) {
            if (data_02160080 != NULL) {
                data_02160080[0x40] = zero;
            }
            for (flag = 0; flag < *(s8 *)(work + 0x39); flag++) {
                func_02062568(*(void **)(work + 0x10 + flag * 4));
            }
        }
        for (index = 0; index < *(s8 *)(work + 0x39); index++) {
            u8 *e = *(u8 **)(work + 0x10 + index * 4);
            u8 *o = func_02062568(e);
            func_020223bc(*(void **)(o + 0x128), e, (s16)(index + 1));
            (*pg)[0x10e] = (*(u8 **)(o + 0x118))[0];
            *(u16 *)(*pg + 0x110) = (*(u8 **)(e + 8))[0];
        }
        {
            u8 *manager = data_02160244;
            if (manager[0x14c] == 0) {
                u8 *it = *(u8 **)(manager + 0x50);
                while (it != NULL) {
                    it[4] = zero;
                    it[3] = zero;
                    it[2] = *(s8 *)(it + 0);
                    it = *(u8 **)(it + 0x14);
                }
            } else {
                manager[0x14c] = zero;
            }
        }
        if ((*pg)[0x10e] == 1) {
            u8 *it = *(u8 **)(data_02160a6c + 0xac);
            while (it != NULL) {
                u8 *o = func_020e1ccc(it);
                if (o != NULL) {
                    *(u16 *)(o + 4) = zero;
                    *(u16 *)(o + 6) = zero;
                    *(u16 *)(o + 8) = zero;
                }
                it = *(u8 **)(it + 0x16c);
            }
        } else if ((*pg)[0x10e] == 0) {
            u8 *e = *(u8 **)(work + 0x10);
            if (*(s8 *)(*(u8 **)(e + 8) + 0x1a) != 0) {
                u8 *o = func_02062568(e);
                func_020d9058(o);
                func_020d907c(o);
            }
        }
        *(u32 *)(work + 0xc) = 0x18;
    }

    two = 2;
    if (*(u32 *)(work + 0xc) != 0x12 && *(u32 *)(work + 0xc) != 0x15 &&
        *(u32 *)(work + 0xc) != 0x16 && *(u32 *)(work + 0xc) != 0x10 &&
        *(u32 *)(work + 0xc) != 0x13 && *(void **)(work + 0x10) != NULL) {
        func_020d2c8c(*(void **)(work + 0x10), *(s8 *)(work + 0x39));
    }
    if (*(s16 *)(work + 0x40) > 0) {
        *(s16 *)(work + 0x40) -= 1;
        if (*(volatile s16 *)(work + 0x40) < 0) {
            *(s16 *)(work + 0x40) = zero;
        }
    }

    switch (*(u32 *)(work + 0xc)) {
    case 0x18:
        *(u32 *)(work + 0xc) = two;
        if (((*pg)[0x10a] & 1) == 0) {
            func_0202b754();
            if (*(u32 *)(*pg + 0xf0) != 0) {
                (*pg)[0x10b] = zero;
                *(u32 *)(work + 0xc) = 0x1c;
            }
        }
        break;

    case 0x1c: {
        u8 *cam = *pw;
        *(s32 *)(cam + 0xc) = 0x244000;
        *(s32 *)(cam + 0x10) = 0x30000;
        *(s32 *)(cam + 0x14) = 0x200000;
        func_020d612c(1, 9, 0x200000);
        (*pg)[0x10b]++;
        if ((*pg)[0x10b] > 0x20) {
            (*pg)[0x10b] = zero;
            (*pg)[0x10a] |= 1;
            *(u32 *)(work + 0xc) = two;
        }
        break;
    }

    case 2: {
        s32 cnt = 0;
        register s32 index = cnt;
        for (; index < *(s8 *)(work + 0x39); index++) {
            u8 *o = func_02062568(*(void **)(work + 0x10 + index * 4));
            u8 st = o[0x104];
            u8 *info;
            if (st == 0 || st == 7 || st == 0xc || st == 0x13) {
                if (*(u32 *)(*(u8 **)(o + 0x118) + 0x6c) == 0) {
                    cnt++;
                    continue;
                }
            }
            info = *(u8 **)(o + 0x118);
            if (*(u32 *)(info + 0x70) != 0 && *(u32 *)(info + 0x6c) == 0 && st == 0xd) {
                u8 *ctx = *(u8 **)(o + 0x128);
                if (*(u32 *)(ctx + 0x18) & 2) {
                    *(u32 *)(ctx + 0x18) &= ~2;
                }
                func_020de0a8(o);
            } else if (st == 0x13) {
                *(u32 *)(info + 0x6c) = zero;
            } else if (st == 0x12) {
                u32 flags = *(u32 *)(info + 0x78);
                u8 *ctx = *(u8 **)(o + 0x128);
                u8 *e = *(u8 **)(work + 0x10 + index * 4);
                if ((flags & 0x30) == 0 && (*(u16 *)(e + 0xe) & 0x200) == 0 &&
                    (*(u32 *)(ctx + 0x18) & 8) == 0) {
                    cnt++;
                }
            }
        }
        two = 1;
        if (*(u16 *)(data_02160080 + 0x16) == 0 && *(s8 *)(work + 0x39) == cnt) {
            u8 *o;
            u8 *e;
            u8 *info;
            register s32 j = 0;
            u8 *ui = data_0216011c;
            register s32 normal = two;
            register s32 invalid = (s32)0x80000000;
            if (ui != NULL && ui[0x45] != 0) {
                ui[0x45]--;
            }
            work[0x3b] = j;
            work[0x3a] = j;
            *(u32 *)(work + 0x60) = j;
            *(u16 *)(data_02160a74 + 0x1e0) = j;
            *(u16 *)(*pw + 0x48) = j;
            *(u32 *)(*pw + 0x7c) &= ~1;
            func_020d9ea8(invalid, j);
            invalid = -1;
            *(u32 *)(*pw + 0x58) = j;
            func_020d9e08(invalid);
            *(u32 *)(work + 0xc) = 0xc;
            {
                register s32 wait = 1000;
                for (; j < *(s8 *)(work + 0x39); j++) {
                    u8 *ctx;
                    o = func_02062568(*(void **)(work + 0x10 + j * 4));
                    e = *(u8 **)(work + 0x10 + j * 4);
                    ctx = *(u8 **)(o + 0x128);
                    if ((*(u8 **)(e + 8))[0x1e] & 1) {
                        work[0x6c] = normal;
                    }
                    if (work[0x38] == 0) {
                        *(u32 *)(ctx + 0x24) = normal;
                    } else if (work[0x38] == 1) {
                        *(u32 *)(ctx + 0x24) = wait;
                    }
                    *(s16 *)(ctx + 0x52) = invalid;
                    *(u32 *)(ctx + 0x0) = zero;
                    *(s16 *)(ctx + 0x1c) = zero;
                    *(s16 *)(ctx + 0x22) = zero;
                }
            }
            two = 2;
            pw = &data_02160258;
            *(u8 **)(work + 0x60) = func_02062568(*(void **)(work + 0x10));
            o = (u8 *)func_02062570(*(s32 **)(work + 0x10));
            if (o != NULL) {
                if ((*(u8 **)(o + 0x118))[0] == 0) {
                    work[0x6c] = two;
                } else if ((*(u8 **)(o + 0x118))[0] == 1) {
                    work[0x6c] = 6;
                }
            }
            if (work[0x38] == 0) {
                *(u32 *)(work + 0xc) = 7;
            } else if (work[0x38] == 1) {
                *(u32 *)(work + 0xc) = 9;
            }
            o = func_02062568(*(void **)(work + 0x10));
            if ((*(u8 **)(o + 0x118))[0] == 0) {
                e = *(u8 **)(work + 0x10);
                info = *(u8 **)(e + 8);
                if (info[0] == 3 || info[0] == 4 || info[0] == 9 || info[0] == 5) {
                    *(s32 *)(*pw + 0x3c) = 0x1e0000;
                    *(s32 *)(*pw + 0x40) = 0x30000;
                    *(s32 *)(*pw + 0x44) = 0x200000;
                    {
                        u8 *cam = *pw;
                        *(void **)(cam + 0x54) = cam + 0x3c;
                    }
                    work[0x6c] = two;
                } else if (info[0x1e] & 2) {
                    work[0x6c] = two;
                }
            } else if ((*(u8 **)(o + 0x118))[0] == 1) {
                e = *(u8 **)(work + 0x10);
                info = *(u8 **)(e + 8);
                if (info[7] == 0xa) {
                    func_020d9058(o);
                    func_020d907c(o);
                    work[0x6c] = 6;
                } else if (info[0x14] == 1) {
                    if (info[0x1e] & 2) {
                        func_020d9058(o);
                        func_020d907c(o);
                        work[0x6c] = one;
                    } else if (info[0x1e] & 4) {
                        func_020d9058(o);
                        func_020d907c(o);
                        work[0x6c] = 9;
                        (*pw)[0x96] = zero;
                    } else {
                        func_020d9058(o);
                        func_020d907c(o);
                        work[0x6c] = 6;
                    }
                } else if (info[0x1e] & 1) {
                    work[0x6c] = two;
                } else if (func_02062570((s32 *)e) == 0) {
                    work[0x6c] = 6;
                }
            }
        }
        break;
    }

    case 7: {
        u8 *info = *(u8 **)(*(u8 **)(work + 0x10) + 8);
        u8 *ctx = *(u8 **)(*(u8 **)(work + 0x60) + 0x128);
        if (info != NULL) {
            if (info[0] == 5) {
                work[0x6c] = one;
            } else {
                work[0x6c] = info[0x1e];
            }
        }
        if (work[0x6c] == 0) {
            if (work[0x3b] == 0) {
                work[0x3b] = one;
            }
            if (*(u32 *)(ctx + 0x24) == 0x3c) {
                *(u32 *)(work + 0xc) = 4;
            }
        } else {
            *(u32 *)(work + 0xc) = 4;
        }
        break;
    }

    case 4:
        switch (work[0x6c]) {
        case 0: {
            s32 invalid = -1;
            if (*(s32 *)(*pw + 0x80) != invalid) {
                if (func_020ddb90((u16)*(s32 *)(*pw + 0x80)) != NULL) {
                    u8 *cam = *pw;
                    s32 *pos = *(s32 **)(cam + 0x4c);
                    if (pos != NULL) {
                        s32 angle = (*(u16 *)(cam + 0x48) >> 4) * 2;
                        s32 y = pos[1] + 0x10000;
                        s32 distance = *(s16 *)(cam + 0x50);
                        s32 x = distance * data_0213a394[angle + 1] + pos[0];
                        s32 z;
                        s32 *override;
                        if ((y >> 12) < 0x30) y = 0x30000;
                        z = distance * data_0213a394[angle] + pos[2];
                        override = *(s32 **)(*(u8 *volatile *)pw + 0x58);
                        if (override != NULL) {
                            x = override[0];
                            y = override[1];
                            y += 0x10000;
                            if ((y >> 12) < 0x30) y = 0x30000;
                            z = override[2];
                        }
                        if (*(u32 *)(cam + 0x7c) & 1) {
                            if (x < 0x200000) x = 0x200000;
                        } else if (x > 0x200000) {
                            *(u32 *)(cam + 0x7c) |= 1;
                        }
                        cam = *pw;
                        *(s32 *)(cam + 0xc) = x;
                        *(s32 *)(cam + 0x10) = y;
                        *(s32 *)(cam + 0x14) = z;
                        func_020d9ea8(0, y >> 12);
                    }
                } else if (*(void **)(*(u8 *volatile *)pw + 0x4c) != NULL) {
                    *(void **)(work + 0x60) = NULL;
                    *(void **)(*pw + 0x58) = NULL;
                    *(void **)(*pw + 0x4c) = NULL;
                    *(s32 *)(*pw + 0x80) = invalid;
                    *(u16 *)(*pw + 0x48) = zero;
                }
            }
            break;
        }
        case 1:
            *(s32 *)(*pw + 0x10) = 0x30000;
            func_020d9090();
            break;
        case 2: {
            u8 *cam = *pw;
            *(s32 *)(cam + 0xc) = 0x1e0000;
            *(s32 *)(cam + 0x10) = 0x30000;
            *(s32 *)(cam + 0x14) = 0x200000;
            break;
        }
        case 4: {
            u8 *cam = *pw;
            *(s32 *)(cam + 0xc) = 0x243000;
            *(s32 *)(cam + 0x10) = 0x30000;
            *(s32 *)(cam + 0x14) = 0x200000;
            break;
        }
        case 5: {
            u8 *cam = *pw;
            *(s32 *)(cam + 0xc) = 0x1cc000;
            *(s32 *)(cam + 0x10) = 0x30000;
            *(s32 *)(cam + 0x14) = 0x200000;
            break;
        }
        case 6: {
            u8 *cam = *pw;
            *(s32 *)(cam + 0xc) = 0x230000;
            *(s32 *)(cam + 0x10) = 0x30000;
            *(s32 *)(cam + 0x14) = 0x200000;
            break;
        }
        case 3:
        case 7:
        case 8:
        default:
            break;
        }
        if (func_0205a83c() != 0) {
            if (func_020981fc(4) == 0) {
                if (func_020d3160(7, zero, zero, zero) != 0) {
                    *(u32 *)(work + 0xc) = 0xc;
                } else {
                    *(u16 *)(*pg + 0x138) = zero;
                    *(u32 *)(work + 0xc) = 0x17;
                }
            } else {
                goto enable_window;
            }
        }
        break;

    case 0x17:
        (*(u16 *)(*pg + 0x138))++;
        if (*(u16 *)(*pg + 0x138) > 10) {
            *(u16 *)(*pg + 0x138) = zero;
            *(u32 *)(work + 0xc) = 0xc;
        }
        break;

    case 9:
        *(u32 *)(work + 0xc) = 6;
        break;

    case 6:
        switch (work[0x6c]) {
        case 2: {
            u8 *cam = *pw;
            *(s32 *)(cam + 0xc) = 0x1e0000;
            *(s32 *)(cam + 0x10) = 0x30000;
            *(s32 *)(cam + 0x14) = 0x200000;
            break;
        }
        case 3: {
            u8 *cam = *pw;
            *(s32 *)(cam + 0xc) = 0x1e0000;
            *(s32 *)(cam + 0x10) = 0x30000;
            *(s32 *)(cam + 0x14) = 0x200000;
            data_02151fcc += 0x1e000;
            if (data_02151fcc > 0x500000) {
                data_02151fcc = 0x500000;
            }
            break;
        }
        case 6: {
            u8 *cam = *pw;
            *(s32 *)(cam + 0xc) = 0x230000;
            *(s32 *)(cam + 0x10) = 0x30000;
            *(s32 *)(cam + 0x14) = 0x200000;
            break;
        }
        case 1:
            *(s32 *)(*pw + 0x10) = 0x30000;
            func_020d9090();
            if (*(s32 *)(*pw + 0xc) < 0x212000) {
                work[0x6c] = two;
            }
            break;
        case 9:
            *(s32 *)(*pw + 0x10) = 0x30000;
            func_020d9090();
            (*pw)[0x96]++;
            if ((*pw)[0x96] > 0x10) {
                (*pw)[0x96] = 0x10;
                work[0x6c] = two;
            }
            break;
        case 0:
        case 4:
        case 5:
        case 7:
        case 8:
        default: {
            s32 invalid = -1;
            if (*(u16 *)(*pw + 0x48) == 0) {
                *(u16 *)(*pw + 0x48) = 0x8000;
            }
            if (*(s32 *)(*pw + 0x80) != invalid) {
                if (func_020ddb90((u16)*(s32 *)(*pw + 0x80)) != NULL) {
                    u8 *cam = *pw;
                    s32 *pos = *(s32 **)(cam + 0x4c);
                    if (pos != NULL) {
                        s32 angle = (*(u16 *)(cam + 0x48) >> 4) * 2;
                        s32 y = pos[1] + 0x10000;
                        s32 x = *(s16 *)(cam + 0x50) * data_0213a394[angle + 1] + pos[0];
                        s32 z = *(s16 *)(cam + 0x50) * data_0213a394[angle] + pos[2];
                        if (y < 0x30000) y = 0x30000;
                        if (*(u32 *)(cam + 0x7c) & 1) {
                            if (x > 0x1e0000) x = 0x1e0000;
                            if (z != 0x200000) z = 0x200000;
                            if (y != 0x30000) y = 0x30000;
                        } else if (x < 0x200000) {
                            *(u32 *)(cam + 0x7c) |= 1;
                        }
                        cam = *pw;
                        *(s32 *)(cam + 0xc) = x;
                        *(s32 *)(cam + 0x10) = y;
                        *(s32 *)(cam + 0x14) = z;
                    }
                } else if (*(void **)(*(u8 *volatile *)pw + 0x4c) != NULL) {
                    *(void **)(work + 0x60) = NULL;
                    *(void **)(*pw + 0x58) = NULL;
                    *(void **)(*pw + 0x4c) = NULL;
                    *(s32 *)(*pw + 0x80) = invalid;
                    *(u16 *)(*pw + 0x48) = zero;
                }
            }
            break;
        }
        }
        if (func_0205a83c() != 0) {
            if (func_020981fc(5) == 0) {
                *(u32 *)(work + 0xc) = 0xc;
                break;
            }
        enable_window:
            *(u16 *)(data_0216011c + 0x28) |= 8;
        }
        break;

    case 0xc: {
        s32 count = 0;
        u8 *o = *(u8 **)(data_02160a6c + 0xb8);
        while (o != NULL) {
            if (*(s32 *)(*(u8 **)(o + 0x118) + 4) >= 0) {
                u8 *ctx = *(u8 **)(o + 0x124);
                if (*(u16 *)ctx == 3) {
                    *(u16 *)ctx = 7;
                }
                if (*(u16 *)ctx != 0) {
                    count++;
                }
            }
            o = *(u8 **)(o + 0x174);
        }
        if (count != 0) {
            u8 *cam = *pw;
            s32 *pos = *(s32 **)(cam + 0x4c);
            if (pos != NULL) {
                s32 y = pos[1] + 0x10000;
                s32 z = *(s32 *)(cam + 0x14);
                s32 x = *(s32 *)(cam + 0xc);
                *(volatile s32 *)(cam + 0xc) = x;
                *(s32 *)(cam + 0x10) = y;
                *(s32 *)(cam + 0x14) = z;
            }
        } else {
            u16 pending = 0;
            func_020db56c();
            o = *(u8 **)(data_02160a6c + 0xb8);
            while (o != NULL) {
                if (o[0xa2] != 0 && (o[0xa2] & 0x10) == 0) {
                    pending++;
                }
                o = *(u8 **)(o + 0x174);
            }
            if (pending == 0) {
                func_0202b754();
                if (*(u32 *)(*pg + 0xf0) != 0 && ((*pg)[0x10a] & 1) == 0) {
                    (*pg)[0x10b] = zero;
                    *(u32 *)(work + 0xc) = 0x11;
                } else {
                    *(u32 *)(work + 0xc) = 0xf;
                }
            }
        }
        break;
    }

    case 0x11: {
        u8 *cam = *pw;
        *(s32 *)(cam + 0xc) = 0x244000;
        *(s32 *)(cam + 0x10) = 0x30000;
        *(s32 *)(cam + 0x14) = 0x200000;
        func_020d6048(9);
        (*pg)[0x10b]++;
        if ((*pg)[0x10b] > 0x20) {
            (*pg)[0x10b] = zero;
            (*pg)[0x10a] |= 1;
            *(u32 *)(work + 0xc) = 0xf;
        }
        break;
    }

    case 0xf:
        func_02031498();
        for (i = 0; i < *(s8 *)(work + 0x39); i++) {
            u8 *e = *(u8 **)(work + 0x10 + i * 4);
            if (e != NULL) {
                func_02031fbc(e, zero, one);
                *(void **)(work + 0x10 + i * 4) = NULL;
                (*(s16 *)(work + 8))++;
            }
        }
        func_020b52f4(zero);
        func_020a5ce4(*(void **)(data_02160a74 + 0x94));
        func_020d3160(4, zero, zero, zero);
        func_020d3160(zero, zero, zero, zero);
        (*pg)[0x144] = zero;
        func_020db4fc();
        if (*(u16 *)(data_02160090 + 0x1c) == 0) {
            *(u32 *)(work + 0xc) = 0x19;
        } else {
            u8 *o = **(u8 ***)(data_02160090 + 0x14);
            if ((*(u8 **)(o + 0x118))[0] == 0) {
                (*pg)[0x14c] = one;
            }
            *(u32 *)(work + 0xc) = 0x1a;
        }
        break;

    case 0x19:
        func_020637e4();
        break;
    case 0x10:
        func_0205b2ac();
        break;
    case 0x1a:
        if (func_020db630() != 0) {
            u8 *o;
            func_02031498();
            func_020db680();
            *(u32 *)(work + 0xc) = 0x13;
            o = *(u8 **)(data_02160a6c + 0xac);
            while (o != NULL) {
                if (*(s32 *)(*(u8 **)(o + 0x118) + 4) <= 0 &&
                    (*(u32 *)(o + 0x80) & 0x800) == 0 && o[0x104] != 6) {
                    if (!(data_02160260[0x8c] == 1 && *(u16 *)(o + 0x8c) == 1)) {
                        func_0210d27c(0x29);
                        func_020dd810(o, 6, zero);
                    }
                    func_020c3020(o);
                }
                o = *(u8 **)(o + 0x16c);
            }
            if (func_020ddb00(0) == NULL || func_020ddab4(1) == NULL) {
                *(u16 *)(*(u8 **)*pg + 2) = 9;
                func_020d0a40(0xd);
            }
            func_02032a1c();
            func_020d2e14(3, 0x20);
            transition = 4;
            delay = 0x10;
        final_transition:
            func_020d2e14(transition, delay);
        }
        break;

    case 0x13:
        *(u32 *)(work + 0xc) = 0x12;
        *(u32 *)(work + 4) = zero;
        func_02030748(1);
        func_0202b754();
        if (func_020329a0() == 0) {
            u8 *o;
            func_02030748(zero);
            func_0205a8c8();
            o = *(u8 **)(data_02160a6c + 0x70);
            while (o != NULL) {
                o = *(u8 **)(o + 0x13c);
            }
            *(u16 *)(*(u8 **)*pg + 2) = 9;
            func_020d0a40(0xd);
            transition = 6;
            delay = 0;
            goto final_transition;
        }
        break;

    case 0x12:
        *(volatile u32 *)(work + 0xc) = one;
        break;
    case 0x14:
        func_0205b6bc();
        break;
    case 0x15:
        func_0205b4e0();
        break;
    case 0x16:
        func_0205b524();
        break;
    case 0x1b:
    case 0:
    case 1:
    case 3:
    case 5:
    case 8:
    case 0xa:
    case 0xb:
    case 0xd:
    case 0xe:
        break;
    default:
        break;
    }
    func_0205b01c();
    for (i = 0; i < 3; i++) {
        u8 *entry = func_020d3fac((u8)i);
        if (entry[7] & 1) {
            u8 *o = func_020dda2c(i);
            if (o != NULL) {
                u8 *info = *(u8 **)(o + 0x118);
                *(s16 *)(info + 0x5a) += 3;
                info = *(u8 **)(o + 0x118);
                if (*(s16 *)(info + 0x5a) > 100) {
                    *(s16 *)(info + 0x5a) = 100;
                    *(s16 *)(entry + 4) = zero;
                }
                *(s16 *)(entry + 4) -= 3;
                if (*(volatile s16 *)(entry + 4) <= 0) {
                    *(s16 *)(entry + 4) = zero;
                    entry[7] = zero;
                }
            }
            func_020e26f0(one << i, zero, 999);
        }
    }
}
