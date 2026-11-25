/* 1 function from 0x020996E0 to 0x0209A548 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160120;
extern u16 data_021628f8;
extern u16 data_021626a8;
extern u32 data_0216263c[3];
extern u16 data_021626a6;
extern void func_0209b1c4(void);
extern void func_0209b2b4(void);
extern void func_0209b328(void);
extern void func_0209b570(void);
extern void func_0209b5fc(void);
extern void func_0209b7e4(void);
extern void func_0209b194(s32);
extern void func_0209c970(void);
extern void func_0210d27c(s32);
extern void *func_0209c14c(u16);
extern void func_0209ca18(void *, void *, s32, s32, s16, s32);
extern void func_020a8810(void *, s32);
extern void func_020a899c(void *);
extern s32 func_020a97e4(void *, u16);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020eb0f8(void);
extern s32 func_0209cb14(s32, s32);
extern s32 func_02064b3c(s32, s32, s32, s32);
void func_020996e0(void) {
    typedef struct {
        s16 x;
        s16 y;
        u16 touch;
        u16 validity;
    } Touch;
    extern Touch data_02162908;
    extern u16 data_021628fa;
    extern void *func_0209c8dc(u32);
    register u8 *work;
    register s32 sixteen;
    register u8 *entry;
    register s32 alpha;
    register s32 y;
    register s32 y2;
    register s32 row;

    work = data_02160120;
    alpha = 20;
    sixteen = 16;

    switch (*(u16 *)(work + 0x60)) {
    case 0:
        func_0209b1c4();
        break;
    case 1:
        func_0209b2b4();
        break;
    case 2:
        func_0209b328();
        break;
    case 3:
        break;
    case 4:
        func_0209b570();
        break;
    case 5:
        func_0209b5fc();
        break;
    case 6:
        func_0209b7e4();
        break;
    case 7:
        switch (*(u16 *)(work + 0x78e)) {
        case 0: {
            u8 *node = *(u8 **)(work + 0x6ec);
            s32 found = 0;
            s32 id;
            s32 ypos;
            s32 x;
            s32 lower;
            u8 *p;
            while (node != NULL) {
                if (node != NULL) {
                    found = 1;
                    break;
                }
                node = *(u8 **)(node + 8);
            }
            if (!found) {
                *(u16 *)(work + 0x78e) = 3;
                break;
            }
            id = 0x9a;
            *(u16 *)(work + 0x78e) = 1;
            *(u16 *)(work + 0x7a8) = 0;
            func_0210d27c(id);
            *(u16 *)((u8 *)func_0209c14c(id) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c(0x9b) + 2) |= 1;
            ypos = 0x9c;
            *(u16 *)((u8 *)func_0209c14c(ypos) + 2) |= 1;
            if (*(u16 *)(node + 2) == 0) {
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), node[0], 12, ypos, id + 0x22c);
                func_020a8810(*(void **)(work + 0x79c), 20);
                p = *(u8 **)(work + 0x7a0);
                (*(void (**)(void *))(p + 4))(p);
                func_020a899c(*(void **)(work + 0x7a0));
                p = *(u8 **)(work + 0x7a4);
                (*(void (**)(void *))(p + 4))(p);
                func_020a899c(*(void **)(work + 0x7a4));
            } else {
                lower = id + 0x22c;
                x = 12;
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), (u16)(node[0] + 10), x, ypos, lower);
                func_020a8810(*(void **)(work + 0x79c), alpha);
                ypos = 0xac;
                func_0209ca18(*(void **)(work + 0x7a0), *(void **)(work + 0x6a0), *(u16 *)(node + 2), x, ypos, lower);
                func_020a8810(*(void **)(work + 0x7a0), alpha);
                x = (s16)(func_020a97e4(*(void **)(work + 0x6a0), *(u16 *)(node + 2)) + 12);
                func_0209ca18(*(void **)(work + 0x7a0), *(void **)(work + 0x798), *(u16 *)(node + 2), x, ypos, lower);
                func_020a8810(*(void **)(work + 0x7a0), alpha);
            }
            break;
        }
        case 1:
            *(u16 *)(work + 0x7a8) += 1;
            if (*(volatile u16 *)(work + 0x7a8) > 0x40) {
                u8 *node;
                *(u16 *)(work + 0x7a8) = 0;
                node = *(u8 **)(work + 0x6ec);
                if (node != NULL) {
                    func_021168f8(work + 0x6ec, node);
                    if (node != NULL) {
                        func_0210c5dc(node);
                    }
                }
                if (*(u16 *)(work + 0x6f4) == 0) {
                    *(u16 *)(work + 0x78e) = 3;
                } else {
                    *(u16 *)(work + 0x78e) = 2;
                }
            }
            break;
        case 2: {
            u8 *node = *(u8 **)(work + 0x6ec);
            s32 found = 0;
            s32 id;
            s32 lower;
            s32 x;
            s32 ypos;
            u8 *p;
            while (node != NULL) {
                if (node != NULL) {
                    found = 1;
                    break;
                }
                node = *(u8 **)(node + 8);
            }
            if (!found) {
                *(u16 *)(work + 0x78e) = 3;
                break;
            }
            *(u16 *)(work + 0x78e) = 1;
            id = 0x9a;
            *(u16 *)(work + 0x7a8) = 0;
            func_0210d27c(id);
            if (*(u16 *)(node + 2) == 0) {
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), node[0], 12, 0x9c, id + 0x22c);
                func_020a8810(*(void **)(work + 0x79c), 20);
                p = *(u8 **)(work + 0x7a0);
                (*(void (**)(void *))(p + 4))(p);
                func_020a899c(*(void **)(work + 0x7a0));
                p = *(u8 **)(work + 0x7a4);
                (*(void (**)(void *))(p + 4))(p);
                func_020a899c(*(void **)(work + 0x7a4));
            } else {
                lower = id + 0x22c;
                x = 12;
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), (u16)(node[0] + 10), x, 0x9c, lower);
                func_020a8810(*(void **)(work + 0x79c), alpha);
                ypos = 0xac;
                func_0209ca18(*(void **)(work + 0x7a0), *(void **)(work + 0x6a0), *(u16 *)(node + 2), x, ypos, lower);
                func_020a8810(*(void **)(work + 0x7a0), alpha);
                x = (s16)(func_020a97e4(*(void **)(work + 0x6a0), *(u16 *)(node + 2)) + 12);
                func_0209ca18(*(void **)(work + 0x7a4), *(void **)(work + 0x798), 100, x, ypos, lower);
                func_020a8810(*(void **)(work + 0x7a4), alpha);
            }
            break;
        }
        case 3: {
            u8 *p;
            s32 mask = 0xfffe;
            p = *(u8 **)(work + 0x79c);
            (*(void (**)(void *))(p + 4))(p);
            func_020a899c(*(void **)(work + 0x79c));
            p = *(u8 **)(work + 0x7a0);
            (*(void (**)(void *))(p + 4))(p);
            func_020a899c(*(void **)(work + 0x7a0));
            p = *(u8 **)(work + 0x7a4);
            (*(void (**)(void *))(p + 4))(p);
            func_020a899c(*(void **)(work + 0x7a4));
            *(u16 *)((u8 *)func_0209c14c(0x9a) + 2) &= mask;
            *(u16 *)((u8 *)func_0209c14c(0x9b) + 2) &= mask;
            *(u16 *)((u8 *)func_0209c14c(0x9c) + 2) &= mask;
            func_0209b194(8);
            break;
        }
        }
        break;
    case 8:
        if (*(s32 *)(work + 0x784) != 0) {
            if (work[0x788] == 0) {
                work[0x788] |= 1;
            } else if (work[0x788] & 1) {
                *(s16 *)(work + 0x78a) += 10;
                if (*(volatile s16 *)(work + 0x78a) > 50) {
                    *(s16 *)(work + 0x78a) = 31;
                    work[0x788] = 0;
                    *(s32 *)(work + 0x780) += *(s32 *)(work + 0x784);
                    if (*(s32 *)(work + 0x780) > 99999) {
                        *(s32 *)(work + 0x780) = 99999;
                    }
                    work[0x788] |= 2;
                }
            } else if (work[0x788] & 2) {
                *(s16 *)(work + 0x78a) -= 7;
                if (*(volatile s16 *)(work + 0x78a) < 1) {
                    *(s16 *)(work + 0x78a) = 0;
                    *(s32 *)(work + 0x784) = 0;
                }
            }
        } else {
            func_0209b194(9);
        }
        break;
    case 9:
        *(s16 *)(work + 0x740) += 1;
        if (*(u16 *)(work + 0x714) <= 7) {
            if (data_021628f8 != 0 || (data_021626a8 & 1)) {
                func_0209b194(10);
                func_0209c970();
                *(s32 *)(work + 0x3c) = 1;
                func_0210d27c(11);
            }
        }
        break;
    }

    if (*(s16 *)(work + 0x5a) < sixteen && *(s16 *)(work + 0x5a) != 0) {
        u32 r;
        *(s16 *)(work + 0x5c) = 0;
        *(s16 *)(work + 0x5e) = 0;
        r = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
        data_0216263c[0] = r;
        *(s16 *)(work + 0x5c) = (s16)(((u16)(((r >> 16) * 8) >> 16)) - 4);
        r = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
        data_0216263c[0] = r;
        *(s16 *)(work + 0x5e) = (s16)(((u16)(((r >> 16) * 8) >> 16)) - 4);
        *(s16 *)(work + 0x5a) += 1;
        if (*(volatile s16 *)(work + 0x5a) >= sixteen) {
            *(s16 *)(work + 0x5a) = sixteen;
            *(s16 *)(work + 0x5c) = 0;
            *(s16 *)(work + 0x5e) = 0;
        }
    }

    func_020eb0f8();
    if (*(u16 *)(work + 0x714) < 8) {
        return;
    }

    if (func_0209cb14(3, 0x1e) == 0) {
        if (data_021626a6 & 0x40) {
            *(s16 *)(work + 0x734) -= 1;
            if (*(volatile s16 *)(work + 0x734) < 0) {
                *(s16 *)(work + 0x734) = 0;
            }
            func_0209cb14(1, 1);
        } else {
            func_0209cb14(2, 1);
        }
    }

    if (func_0209cb14(3, 0x1d) == 0) {
        if (data_021626a6 & 0x80) {
            *(s16 *)(work + 0x734) += 1;
            if (*(volatile s16 *)(work + 0x734) > *(u16 *)(work + 0x714) - 7) {
                *(s16 *)(work + 0x734) = *(u16 *)(work + 0x714) - 7;
            }
            func_0209cb14(1, 2);
        } else {
            func_0209cb14(2, 2);
        }
    }

    if (func_0209cb14(3, 0x1b) == 0) {
        if (func_02064b3c(0xce, 0x23, 0xe, 0xe) != 0) {
            func_0209cb14(1, 4);
            if (*(s16 *)(work + 0x73a) == 0 || *(s16 *)(work + 0x73a) == 10) {
                *(s16 *)(work + 0x734) -= 1;
                if (*(volatile s16 *)(work + 0x734) < 0) {
                    *(s16 *)(work + 0x734) = 0;
                }
            }
            *(s16 *)(work + 0x73a) += 1;
            if (*(volatile s16 *)(work + 0x73a) > 10) {
                *(s16 *)(work + 0x73a) = 10;
            }
        } else {
            func_0209cb14(2, 4);
            *(s16 *)(work + 0x73a) = 0;
        }
    } else {
        func_0209cb14(2, 4);
    }

    if (func_0209cb14(3, 4) != 0) {
        *(u16 *)((u8 *)func_0209c14c(0x59) + 4) = 0x13;
    } else {
        *(u16 *)((u8 *)func_0209c14c(0x59) + 4) = 0x12;
    }

    if (func_0209cb14(3, 0x17) == 0) {
        if (func_02064b3c(0xce, 0x96, 0xe, 0xe) != 0) {
            func_0209cb14(1, 8);
            if (*(s16 *)(work + 0x73a) == 0 || *(s16 *)(work + 0x73a) == 10) {
                *(s16 *)(work + 0x734) += 1;
                if (*(volatile s16 *)(work + 0x734) > *(u16 *)(work + 0x714) - 7) {
                    *(s16 *)(work + 0x734) = *(u16 *)(work + 0x714) - 7;
                }
            }
            *(s16 *)(work + 0x73a) += 1;
            if (*(volatile s16 *)(work + 0x73a) > 10) {
                *(s16 *)(work + 0x73a) = 10;
            }
        } else {
            func_0209cb14(2, 8);
            *(s16 *)(work + 0x73a) = 0;
        }
    } else {
        func_0209cb14(2, 8);
    }

    if (func_0209cb14(3, 4) != 0) {
        *(u16 *)((u8 *)func_0209c14c(0x59) + 4) = 0x13;
    } else {
        *(u16 *)((u8 *)func_0209c14c(0x59) + 4) = 0x12;
    }
    if (func_0209cb14(3, 8) != 0) {
        *(u16 *)((u8 *)func_0209c14c(0x5b) + 4) = 0x13;
    } else {
        *(u16 *)((u8 *)func_0209c14c(0x5b) + 4) = 0x12;
    }

    *(s16 *)(work + 0x73e) = (s16)(0x299 / *(u16 *)(work + 0x714));
    *(s16 *)(work + 0x73c) = (s16)(((0x5f - *(s16 *)(work + 0x73e)) * *(s16 *)(work + 0x734)) / (*(u16 *)(work + 0x714) - 7));

    if (func_0209cb14(3, 0xf) == 0) {
        if (func_02064b3c(0xce, 0x31, 0xe, 0x64) != 0) {
            func_0209cb14(1, 0x10);
        }
        if (func_0209cb14(3, 0x10) != 0) {
            u32 yy = (u16)data_02162908.y;
            if (yy <= 0x31u) {
                *(s16 *)(work + 0x73c) = 0;
            } else if ((s32)yy > 0x90 - *(s16 *)(work + 0x73e)) {
                *(s16 *)(work + 0x73c) = (s16)(0x5f - *(s16 *)(work + 0x73e));
            } else {
                *(s16 *)(work + 0x73c) = (s16)(yy - 0x31);
            }
            *(s16 *)(work + 0x734) = (s16)((*(s16 *)(work + 0x73c) * (*(u16 *)(work + 0x714) - 7)) / (0x5f - *(s16 *)(work + 0x73e)));
        }
    } else {
        func_0209cb14(2, 0x10);
    }

    sixteen = 0x10;
    if (func_0209cb14(3, sixteen) != 0 && data_021628fa != 0) {
        func_0209cb14(2, sixteen);
    }

    if (*(u16 *)(work + 0x60) == 9) {
        if (func_0209cb14(3, 0x1f) == 0) {
            if (data_021628f8 != 0 || (data_021626a8 & 1)) {
                func_0209b194(10);
                func_0209c970();
                func_0210d27c(11);
                *(s32 *)(work + 0x3c) = 1;
            }
        }
    }

    {
        u8 * volatile scroll = work + 0x700;
        volatile s32 index = *(s16 *)(scroll + 0x34);
        row = 0;
        s32 max1 = 0x1a9;
        s32 max3 = 0x31e;
        s32 min1;
        s32 min3;
        s32 max4;
        if (index == *(s16 *)(scroll + 0x36)) {
            return;
        }
        if (index < *(u16 *)(scroll + 0x14)) {
            sixteen = 0xfffe;
            min1 = max1 - 0x7c;
            min3 = max3 - 0x61;
            max4 = max1 - 0x9a;
            do {
                entry = (u8 *)func_0209c8dc((u8)index);
                if (entry != NULL) {
                    s32 a, b, c, d, f, g, h;
                    register s32 e;
                    register s32 last;
                    u8 *p;
                    a = row + 0x62;
                    p = (u8 *)func_0209c14c((u16)a);
                    alpha = row * 0x13;
                    y = alpha + 0x23;
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y;
                    b = row + 0x69;
                    p = (u8 *)func_0209c14c((u16)b);
                    c = row + 0x70;
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y;
                    p = (u8 *)func_0209c14c((u16)c);
                    d = row + 0x77;
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y;
                    p = (u8 *)func_0209c14c((u16)d);
                    y2 = alpha + 0x29;
                    e = row + 0x7e;
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y2;
                    p = (u8 *)func_0209c14c((u16)e);
                    f = row + 0x85;
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y;
                    p = (u8 *)func_0209c14c((u16)f);
                    g = row + 0x8c;
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y;
                    p = (u8 *)func_0209c14c((u16)g);
                    h = row + 0x93;
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y;
                    p = (u8 *)func_0209c14c((u16)h);
                    *(u16 *)(p + 2) &= sixteen;
                    *(s32 *)(p + 0x14) = y2;

                    if (entry[6] == 0) {
                        p = (u8 *)func_0209c14c((u16)a);
                        *(u16 *)(p + 2) |= 1;
                        y = (s32)((u32)row * 0x13u + 0x23u);
                        *(s32 *)(p + 0x14) = y;
                        p = (u8 *)func_0209c14c((u16)b);
                        *(u16 *)(p + 2) |= 1;
                        *(s32 *)(p + 0x14) = y;
                        p = (u8 *)func_0209c14c((u16)c);
                        last = d;
                        goto enable_last_pair;
                    } else if (entry[6] == 1) {
                        p = (u8 *)func_0209c14c((u16)e);
                        *(u16 *)(p + 2) |= 1;
                        y = (s32)((u32)row * 0x13u + 0x23u);
                        *(s32 *)(p + 0x14) = y;
                        p = (u8 *)func_0209c14c((u16)f);
                        *(u16 *)(p + 2) |= 1;
                        *(s32 *)(p + 0x14) = y;
                        p = (u8 *)func_0209c14c((u16)g);
                        last = h;
enable_last_pair:
                        *(u16 *)(p + 2) |= 1;
                        *(s32 *)(p + 0x14) = y;
                        p = (u8 *)func_0209c14c((u16)last);
                        *(u16 *)(p + 2) |= 1;
                        *(s32 *)(p + 0x14) = y2;
                    }
                    y = *(u16 *)(entry + 2);
                    y2 = 0;
                    if ((u32)y >= 1 && (u32)y <= 0x33) {
                    } else if ((u32)y >= (u32)min1 && (u32)y <= (u32)max1) {
                        y2 = 1;
                    } else if ((u32)y >= 0x208 && (u32)y <= 0x26c) {
                        y2 = 2;
                    } else if ((u32)y >= (u32)min3 && (u32)y <= (u32)max3) {
                        y2 = 3;
                    } else if ((u32)y >= 0xc9 && (u32)y <= (u32)max4) {
                        y2 = 4;
                    }
                    if (entry[6] == 0) {
                        func_020a8810(*(void **)(work + row * 4 + 0x718), 20);
                    } else {
                        func_020a8810(*(void **)(work + row * 4 + 0x718), 32);
                    }
                    func_0209ca18(*(void **)(work + row * 4 + 0x718), *(void **)(work + y2 * 4 + 0x6a4), y, 0x3c, (s16)(alpha + 0x24), 0x11);
                }
                row = (s16)(row + 1);
                if (row >= 7) {
                    break;
                }
                index = (s16)(index + 1);
            } while (index < *(u16 *)(scroll + 0x14));
        }
        *(s16 *)(work + 0x736) = *(s16 *)(work + 0x734);
    }
}
