/* 5 functions from 0x020637E4 to 0x02064590 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600c4;
extern u8 **data_02160244;
extern u32 data_02155c3c;
extern void func_0210da14(void *);
extern void func_0210c5dc(void *);
extern void *func_0210c594(u32, u32);
extern void func_0210d9e4(void *);
extern void func_02063f68(void);
extern void func_02064590(void);
extern void func_02064a30(void);
extern void func_0202d444(void *);
extern s32 func_0202dd04(void *);
s16 func_02063e18(void);
void func_020637e4(void) {
    typedef struct {
        s8 f0;
        s8 f1;
        s8 f2;
        s8 f3;
        u8 f4;
    } Info020637e4;
    typedef struct {
        u8 *p0;
        u32 unk4;
        u8 *cells[9];
        u8 unk2c[0xc];
        s8 flags[9];
        u8 pad41[3];
        u8 *list;
    } Mgr020637e4;
    u8 *p0 = ((Mgr020637e4 *)data_02160244)->p0;
    s32 saved[9];
    s32 i;
    s32 count;
    u8 *list;

    *(s32 *)(p0 + 0xc) = 0x1a;
    ((s16 (*)(s32))func_02063e18)(0);
    for (i = 0; i < 9; i++) {
        ((Mgr020637e4 *)data_02160244)->flags[i] = -1;
    }

    for (i = 0; i < 9; i++) {
        saved[i] = -1;
    }

    count = 0;
    for (i = 0; i < 9; i++) {
        u8 *cell = ((Mgr020637e4 *)data_02160244)->cells[i];
        u8 *node = *(u8 **)(cell + 0x10);
        while (node != NULL && node[4] == 0) {
            u8 *unit = *(u8 **)(node + 0);
            node = *(u8 **)(node + 0xc);
            if (unit != NULL) {
                saved[count] = (*(Info020637e4 **)(*(u8 **)(unit + 0x128) + 0x54))->f2;
                count++;
            }
        }
    }

    for (i = 0; i < 9; i++) {
        u8 *cell = ((Mgr020637e4 *)data_02160244)->cells[i];
        u8 *node = *(u8 **)(cell + 0x10);
        while (node != NULL && node[4] == 0) {
            u8 *unit = *(u8 **)(node + 0);
            if (unit != NULL) {
                Info020637e4 *info = *(Info020637e4 **)(*(u8 **)(unit + 0x128) + 0x54);
                info->f4 = 0;
                if (info->f0 == info->f2) {
                    info->f4 |= 1;
                    ((Mgr020637e4 *)data_02160244)->flags[i] = 1;
                    switch (info->f1) {
                    case 0:
                    case 4:
                        break;
                    case 1:
                        if ((u8)cell[0] == info->f0) {
                            s8 idx = (s8)(i + 1);
                            if (idx >= 0 && idx <= 8) {
                                ((Mgr020637e4 *)data_02160244)->flags[idx] = 1;
                            }
                        }
                        break;
                    case 2:
                        if ((u8)cell[0] == info->f0) {
                            s8 idx = (s8)(i - 3);
                            if (idx >= 0 && idx <= 8) {
                                ((Mgr020637e4 *)data_02160244)->flags[idx] = 1;
                            }
                        }
                        break;
                    case 3:
                        if ((u8)cell[0] == info->f0) {
                            s8 idx1 = (s8)(i - 3);
                            s8 idx2 = (s8)(i + 1);
                            s8 idx3 = (s8)(i - 2);
                            if (idx1 >= 0 && idx1 <= 8) {
                                ((Mgr020637e4 *)data_02160244)->flags[idx1] = 1;
                            }
                            if (idx2 >= 0 && idx2 <= 8) {
                                ((Mgr020637e4 *)data_02160244)->flags[idx2] = 1;
                            }
                            if (idx3 >= 0 && idx3 <= 8) {
                                ((Mgr020637e4 *)data_02160244)->flags[idx3] = 1;
                            }
                        }
                        break;
                    }
                } else if (info->f0 != info->f2 && info->f1 != 0) {
                    if (info->f1 == 1) {
                        if ((i + 1) / 3 == i / 3 && i + 1 <= 8) {
                            u8 *c1 = ((Mgr020637e4 *)data_02160244)->cells[i + 1];
                            if (*(u16 *)(cell + 0x18) == 1 && *(u16 *)(c1 + 0x18) == 1) {
                                info->f4 |= 1;
                                info->f2 = info->f0;
                                info->f3 = -1;
                                ((Mgr020637e4 *)data_02160244)->flags[i] = 1;
                                ((Mgr020637e4 *)data_02160244)->flags[i + 1] = 1;
                            }
                        }
                    } else if (info->f1 == 2) {
                        if ((i - 3) % 3 == i % 3 && i - 3 >= 0) {
                            u8 *c1 = ((Mgr020637e4 *)data_02160244)->cells[i - 3];
                            if (*(u16 *)(cell + 0x18) == 1 && *(u16 *)(c1 + 0x18) == 1) {
                                info->f4 |= 1;
                                info->f2 = info->f0;
                                info->f3 = -1;
                                ((Mgr020637e4 *)data_02160244)->flags[i] = 1;
                                ((Mgr020637e4 *)data_02160244)->flags[i - 3] = 1;
                            }
                        }
                    } else if (info->f1 == 3) {
                        if ((i - 3) % 3 == i % 3 && i - 3 >= 0 && (i + 1) / 3 == i / 3 && i + 1 <= 8) {
                            u8 *c1 = ((Mgr020637e4 *)data_02160244)->cells[i - 3];
                            u8 *c2 = ((Mgr020637e4 *)data_02160244)->cells[i + 1];
                            u8 *c3 = ((Mgr020637e4 *)data_02160244)->cells[i - 2];
                            if (*(u16 *)(cell + 0x18) == 1 &&
                                *(u16 *)(c1 + 0x18) == 1 &&
                                *(u16 *)(c2 + 0x18) == 1 &&
                                *(u16 *)(c3 + 0x18) == 1) {
                                info->f4 |= 1;
                                info->f2 = info->f0;
                                info->f3 = -1;
                                ((Mgr020637e4 *)data_02160244)->flags[i] = 1;
                                ((Mgr020637e4 *)data_02160244)->flags[i - 3] = 1;
                                ((Mgr020637e4 *)data_02160244)->flags[i + 1] = 1;
                                ((Mgr020637e4 *)data_02160244)->flags[i - 2] = 1;
                            }
                        }
                    }
                }
            }
            node = *(u8 **)(node + 0xc);
        }
    }

    for (i = 0; i < 9; i++) {
        u8 *cell = ((Mgr020637e4 *)data_02160244)->cells[i];
        s32 flag = 1;
        if (*(u16 *)(cell + 0x18) == 1) {
            u8 *node = *(u8 **)(cell + 0x10);
            if (node != NULL && node[4] == 0) {
                switch ((*(Info020637e4 **)(*(u8 **)(*(u8 **)(node + 0) + 0x128) + 0x54))->f1) {
                case 0:
                    break;
                case 4:
                    flag = 0;
                    break;
                case 1:
                    if (((Mgr020637e4 *)data_02160244)->cells[i + 1][2] == 1) {
                        flag = 0;
                    }
                    break;
                case 2:
                    if (((Mgr020637e4 *)data_02160244)->cells[i - 3][2] == 1) {
                        flag = 0;
                    }
                    break;
                case 3:
                    if (((Mgr020637e4 *)data_02160244)->cells[i - 3][2] == 1) {
                        flag = 0;
                    }
                    if (((Mgr020637e4 *)data_02160244)->cells[i + 1][2] == 1) {
                        flag = 0;
                    }
                    if (((Mgr020637e4 *)data_02160244)->cells[i - 2][2] == 1) {
                        flag = 0;
                    }
                    break;
                }
            }
        } else if (*(u16 *)(cell + 0x18) == 0) {
            flag = 0;
        }
        if (flag != 0) {
            func_0202d444(cell);
        }
    }

    list = ((Mgr020637e4 *)data_02160244)->list;
    if (list != NULL) {
        u8 *cur = list;
        while (cur != NULL) {
            cur = *(u8 **)(cur + 0xc);
        }
    }
    if (list == NULL) {
        return;
    }
    if (func_0202dd04(list) != 0) {
        count = 0;
        for (i = 0; i < 9; i++) {
            u8 *cell = ((Mgr020637e4 *)data_02160244)->cells[i];
            u8 *node = *(u8 **)(cell + 0x10);
            while (node != NULL && node[4] == 0) {
                u8 *unit = *(u8 **)(node + 0);
                if (unit != NULL) {
                    Info020637e4 *info = *(Info020637e4 **)(*(u8 **)(unit + 0x128) + 0x54);
                    info->f2 = (s8)saved[count++];
                    info->f3 = -1;
                }
                node = *(u8 **)(node + 0xc);
            }
        }
    }
    *(s32 *)(p0 + 0xc) = 0x10;
    p0[0x3c] = 0;
}

s16 func_02063e18(void) {
    u8 *entry;
    s32 ret = 0;
    u8 i;
    for (i = 0; i < 9; i++) {
        entry = *(u8 **)((u8 *)data_02160244 + i * 4 + 8);
        u16 val = *(u16 *)(entry + 0x18);
        if (val != 0) {
            if (val >= 2) {
                ret = 1;
            }
        }
        {
            u8 *node = *(u8 **)(entry + 0x10);
            while (node != NULL) {
                node = *(u8 **)(node + 0xc);
            }
        }
    }
    return ret;
}

void func_02063e84(void) {
    data_021600c4 = (u8 *)func_0210c594(0x3c, data_02155c3c);
    *(void **)(data_021600c4 + 0x0) = (void *)func_02063f68;
    *(u32 *)(data_021600c4 + 0x4) = 0x3ed;
    func_0210d9e4(data_021600c4);
    *(void **)(data_021600c4 + 0x14) = (void *)func_02064590;
    *(u32 *)(data_021600c4 + 0x18) = 0x3fc;
    func_0210d9e4(data_021600c4 + 0x14);
    *(void **)(data_021600c4 + 0x28) = (void *)func_02064a30;
    *(u32 *)(data_021600c4 + 0x2c) = 0x3e8;
    func_0210d9e4(data_021600c4 + 0x28);
}

void func_02063f20(void) {
    func_0210da14(data_021600c4);
    func_0210da14(data_021600c4 + 0x14);
    func_0210da14(data_021600c4 + 0x28);
    if (data_021600c4 != NULL) {
        func_0210c5dc(data_021600c4);
        data_021600c4 = NULL;
    }
}

extern u8 *data_02160a6c;
extern void func_020de0a8(void *);
extern const s16 data_0213a394[];
extern u16 data_02151fc8;
extern u32 data_0216263c[3];
extern s32 func_020dd9b4(void *, s32 *);
extern s32 func_02117d80(s32);
extern void func_020dd810(void *, s32, s32);
extern void func_021168f8(void *, void *);
extern void func_0210d27c(s32);
extern void func_020ddf2c(void *);
extern void func_020dde88(void *);
extern void func_020f1dd4(void *, s32);
extern void *func_02030630(u8 *, u16);
void func_02063f68(void) {
    u8 *p, *q, *n;
    s32 done = 0;
    if (data_02160a6c == NULL) return;
    for (p = *(u8 **)(data_02160a6c + 0xac); p; p = *(u8 **)(p + 0x16c)) {
        if (p[0x104] != 4) *(u16 *)(p + 0x88) = 0x7fff;
        switch (p[0x104]) {
        case 1: case 2: case 4: case 5: case 7: case 8: break;
        case 3: case 9:
            *(u16 *)(p + 0x88) = 0x7fff;
            if (++p[0x9c] < 6 && (s32)p[0x9c] % 4 < 2)
                *(u16 *)(p + 0x88) = *(u16 *)(p + 0x8a);
            break;
        case 0:
            if (((u8 *)data_02160244)[0x10c] == 0) func_020de0a8(p);
            break;
        case 6:
            q = *(u8 **)(p + 0x128);
            if (*(u32 *)(q + 0x24) == 0) {
                while ((n = *(u8 **)(q + 0x58)) != NULL) {
                    func_021168f8(q + 0x58, n);
                    if (n) func_0210c5dc(n);
                }
            }
            break;
        }
    }
    for (p = *(u8 **)(data_02160a6c + 0xb8); p; p = *(u8 **)(p + 0x174)) {
        *(u16 *)(p + 0x88) = 0x7fff;
        if (p[0x104] == 3 || p[0x104] == 9) {
            p[0x9c]++;
            if (p[0x9c] < 6 && (s32)p[0x9c] % 4 < 2)
                *(u16 *)(p + 0x88) = *(u16 *)(p + 0x8a);
        }
        if (p[0x104] == 3) {
            s32 anim;
            done = 0;
            anim = func_020dd9b4(p, &done);
            switch (*(u16 *)(p + 0x8e)) {
            case 0x12d: case 0x12e: case 0x12f: case 0x130:
                if (!(*(u32 *)(*(u8 **)(p + 0x118) + 0x78) & 0x30) && done)
                    func_020dd810(p, 0, 0);
                break;
            default:
                if (!(*(u32 *)(*(u8 **)(p + 0x118) + 0x78) & 0x20)) {
                    if (func_02117d80(anim) == 1 && *(u32 *)(*(u8 **)(p + 0x118) + 0x6c) == 0) {
                        s32 angle = ((data_02151fc8 + 0x8000) % 0x10000) >> 4;
                        s16 x = data_0213a394[angle * 2 + 1];
                        s16 z = data_0213a394[angle * 2];
                        *(s32 *)(p + 0) += x * 30;
                        *(s32 *)(p + 8) += z * 30;
                        *(u32 *)(*(u8 **)(p + 0x118) + 0x6c) = 1;
                    }
                    if (done) func_020dd810(p, 1, 0);
                }
                break;
            }
        } else if (p[0x104] != 3 && *(u32 *)(*(u8 **)(p + 0x118) + 0x6c) != 0) {
            s32 angle = ((data_02151fc8 + 0x8000) % 0x10000) >> 4;
            s16 x = data_0213a394[angle * 2 + 1];
            s16 z = data_0213a394[angle * 2];
            *(s32 *)(p + 0) -= x * 6;
            *(s32 *)(p + 8) -= z * 6;
            ++*(u32 *)(*(u8 **)(p + 0x118) + 0x6c);
            if (*(u32 *)(*(u8 **)(p + 0x118) + 0x6c) > 5) {
                *(u32 *)(*(u8 **)(p + 0x118) + 0x6c) = 0;
                func_020de0a8(p);
            }
        }
        if (p[0xa2] & 1) {
            u16 color;
            p[0x9c] += 4;
            if (p[0x9c] > 31) p[0x9c] = 31;
            if (!(p[0xa2] & 0x20)) {
                func_0210d27c(0x2b);
                p[0xa2] |= 0x20;
            }
            color = 31 - p[0x9c];
            *(u16 *)(p + 0x88) = color | (color << 5) | (color << 10);
            *(s16 *)(p + 0x9a) -= 4;
            if (*(volatile s16 *)(p + 0x9a) <= 1) {
                p[0xa2] |= 0x10;
                *(s16 *)(p + 0x9a) = 1;
            }
        }
    }
    for (p = *(u8 **)(data_02160a6c + 0x70); p; p = *(u8 **)(p + 0x13c)) {
        if (p[0xa2] & 4) {
            --*(s16 *)(p + 0x98);
            if (*(volatile s16 *)(p + 0x98) < 0) *(s16 *)(p + 0x98) = 0;
            if (*(volatile s16 *)(p + 0x98) == 0) {
                done = 0;
                func_020dd9b4(p, &done);
                if (done) {
                    if (*(u32 *)(*(u8 **)(p + 0x128) + 0x18) & 2)
                        func_020dd810(p, 13, 0);
                    else func_020de0a8(p);
                    p[0xa2] &= 0xfb;
                }
            }
        }
        if (*(u32 *)(p + 0x80) & 0x80) {
            u32 v;
            v = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = v;
            *(u32 *)(p + 0x3c) = (u16)(((v >> 16) * 6) >> 16);
            v = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = v;
            *(u32 *)(p + 0x44) = (u16)(((v >> 16) * 6) >> 16);
            if (++p[0xa6] > 10) {
                p[0xa6] = 0;
                *(u32 *)(p + 0x3c) = 0;
                *(u32 *)(p + 0x44) = 0;
                *(u32 *)(p + 0x80) &= ~0x80;
            }
        }
        if (*(u16 *)(p + 0x8e) == 0x353) func_020ddf2c(p);
        else func_020dde88(p);
    }
    for (p = *(u8 **)(data_02160a6c + 0x94); p; p = *(u8 **)(p + 0x198)) {
        if (*(u32 *)(*(u8 **)(p + 0x118) + 0x70)) {
            q = *(u8 **)(p + 0x108);
            *(u32 *)(q + 0x14) |= 1;
            {
            u32 x = *(u32 *)p, y = *(u32 *)(p + 4), z = *(u32 *)(p + 8);
            n = *(u8 **)q;
            *(u32 *)(n + 0x6c) = x;
            *(u32 *)(n + 0x70) = y;
            *(u32 *)(n + 0x74) = z;
            }
            *(u32 *)(n + 0xf4) = 1;
            func_020f1dd4(q, 1);
        }
    }
    for (n = *(u8 **)(data_02160a6c + 0xac); n; n = *(u8 **)(n + 0x16c)) {
        q = *(u8 **)(n + 0x118);
        p = *(u8 **)(q + 0xa0);
        if (*(u16 *)(p + 2)) {
            ++*(s16 *)p;
            if (*(volatile s16 *)p > 64) {
                u8 *v;
                *(s16 *)p = 0;
                v = *(u8 **)((u8 *)func_02030630(p, *(u16 *)(p + 2)) + 8);
                if (!v) v = *(u8 **)(p + 8);
                *(u16 *)(p + 2) = *(u16 *)v;
            }
        } else if (*(u32 *)(q + 0x78) && (q = *(u8 **)(p + 8)) != NULL) {
            *(s16 *)p = 0;
            *(u16 *)(p + 2) = *(u16 *)q;
        }
    }
}

