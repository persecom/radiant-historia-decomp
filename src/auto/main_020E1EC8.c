/* 11 functions from 0x020E1EC8 to 0x020E2BE4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74[];
extern void func_020a5ce4(void *);
extern void func_020a994c(void *);
extern void func_020a9610(void *, u32, u32, u32, u32, u32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_020e24bc(u32, u32, u32, u32, u32);
extern void func_020b52f4(u32);

extern void func_0203bc34(void *, void *, void *, s32, s32, s32);
extern void func_0203bcf8(void *, void *, void *, s32, s32, s32, s32, s32);
extern void func_020a899c(void *);
extern u32 data_0215152c[];
extern u32 data_02151538[];
extern u32 data_02151540[];
extern u32 data_02151548[];
extern u32 data_02151564[];
extern u32 data_02151574[];
extern u32 data_02151590[];
extern u32 data_021515ac[];
extern u32 data_021515c8[];
extern u32 data_021515e4[];
extern u32 data_02151600[];
extern u32 data_02151608[];
extern u32 data_02151620[];
extern u32 data_0215163c[];
extern u32 data_02151658[];
extern u32 data_02151674[];
extern u32 data_02151690[];
extern u32 data_021516ac[];
extern void *func_020a84b8(u32, u32);
extern void func_020a8810(void *, u32);
extern void *func_020a94b8(void *);
extern void func_020a9830(void *, void *, u32, u32, u32, u32);
void func_020e1ec8(u8 *arg0, u32 arg1) {
    u32 dark = 0x2d0000;
    u32 zero = 0;
    u8 *self = arg0;
    u32 mode = arg1;
    switch (mode) {
    case 0:
        if (*(u8 **)(self + 4) == NULL) {
            *(u8 **)(self + 4) = func_020a84b8(4, 1);
        }
        func_020a8810(*(u8 **)(self + 4), 20);
        *(u8 **)self = func_020a94b8(data_0215152c);
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = 0x2bc000;
        return;
    case 1:
        if (*(u8 **)(self + 4) == NULL) {
            *(u8 **)(self + 4) = func_020a84b8(4, 1);
        }
        func_020a8810(*(u8 **)(self + 4), 1);
        *(u8 **)self = func_020a94b8(data_02151538);
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = 0x2bc000;
        return;
    case 2:
        *(u8 **)(self + 4) = func_020a84b8(4, 1);
        func_020a8810(*(u8 **)(self + 4), 0x12);
        *(u8 **)self = func_020a94b8(data_02151540);
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = dark;
        return;
    case 3:
        *(u8 **)(self + 4) = func_020a84b8(4, 1);
        func_020a8810(*(u8 **)(self + 4), 0x16);
        *(u8 **)self = func_020a94b8(data_02151548);
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = dark;
        return;
    case 4:
        if (*(u8 **)(self + 4) == NULL) {
            *(u8 **)(self + 4) = func_020a84b8(5, 2);
        }
        func_020a8810(*(u8 **)(self + 4), 0x16);
        *(u8 **)self = func_020a94b8(data_02151564);
        if ((*(u16 *)(self + 0x5c) & 0x10) == 0) {
            func_020a9830(self + 0xc, self + 0x40, 0xf0, 0x20, zero, zero);
            func_020a9610(self + 0x40, *(u32 *)self, 0x3e9, *(u32 *)(self + 4), zero, zero);
            func_020a994c(self + 0xc);
            *(u16 *)(self + 0x5c) |= 0x10;
        }
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = 0x9000;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = 0x9e000;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = dark;
        *(u16 *)(self + 0x5c) |= 1;
        return;
    case 5: case 6: case 7: case 8: case 9:
        *(u8 **)(self + 4) = func_020a84b8(5, 2);
        func_020a8810(*(u8 **)(self + 4), 0x16);
        if (mode == 5) {
            *(u8 **)self = func_020a94b8(data_02151574);
        } else if (mode == 6) {
            *(u8 **)self = func_020a94b8(data_02151590);
        } else if (mode == 7) {
            *(u8 **)self = func_020a94b8(data_021515ac);
        } else if (mode == 8) {
            *(u8 **)self = func_020a94b8(data_021515c8);
        } else if (mode == 9) {
            *(u8 **)self = func_020a94b8(data_021515e4);
        }
        func_020a9830(self + 0xc, self + 0x40, 0xf0, 0x20, zero, zero);
        func_020a9610(self + 0x40, *(u32 *)self, 0x3e9, *(u32 *)(self + 4), zero, zero);
        func_020a994c(self + 0xc);
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = 0x17000;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = 0x43000;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = 0x2d4000;
        *(u16 *)(self + 0x5c) |= 1;
        return;
    case 10:
        if (*(u8 **)(self + 4) == NULL) {
            *(u8 **)(self + 4) = func_020a84b8(5, 2);
        }
        func_020a8810(*(u8 **)(self + 4), 0x16);
        *(u8 **)self = func_020a94b8(data_02151600);
        if ((*(u16 *)(self + 0x5c) & 0x10) == 0) {
            func_020a9830(self + 0xc, self + 0x40, 0xf0, 0x20, zero, zero);
            func_020a9610(self + 0x40, *(u32 *)self, 1, *(u32 *)(self + 4), zero, zero);
            func_020a994c(self + 0xc);
            *(u16 *)(self + 0x5c) |= 0x10;
        }
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = 0x9000;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = 0x9e000;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = dark;
        *(u16 *)(self + 0x5c) |= 1;
        return;
    case 11:
        if (*(u8 **)(self + 4) == NULL) {
            *(u8 **)(self + 4) = func_020a84b8(5, 2);
        }
        func_020a8810(*(u8 **)(self + 4), 0x16);
        *(u8 **)self = func_020a94b8(data_02151608);
        if ((*(u16 *)(self + 0x5c) & 0x10) == 0) {
            func_020a9830(self + 0xc, self + 0x40, 0xf0, 0x20, zero, zero);
            func_020a9610(self + 0x40, *(u32 *)self, 1, *(u32 *)(self + 4), zero, zero);
            func_020a994c(self + 0xc);
            *(u16 *)(self + 0x5c) |= 0x10;
        }
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = 0x9000;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = 0x9e000;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = dark;
        *(u16 *)(self + 0x5c) |= 1;
        return;
    case 12:
    case 13:
    case 15:
    case 16:
    case 17:
        if (*(u8 **)(self + 4) == NULL) {
            *(u8 **)(self + 4) = func_020a84b8(5, 2);
        }
        func_020a8810(*(u8 **)(self + 4), 0x16);
        if (mode == 12) {
            *(u8 **)self = func_020a94b8(data_02151620);
        } else if (mode == 13) {
            *(u8 **)self = func_020a94b8(data_0215163c);
        } else if (mode == 15) {
            *(u8 **)self = func_020a94b8(data_02151658);
        } else if (mode == 16) {
            *(u8 **)self = func_020a94b8(data_02151674);
        } else if (mode == 17) {
            *(u8 **)self = func_020a94b8(data_02151690);
        }
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = dark;
        return;
    case 14:
        if (*(u8 **)(self + 4) == NULL) {
            *(u8 **)(self + 4) = func_020a84b8(5, 2);
        }
        func_020a8810(*(u8 **)(self + 4), 0x16);
        *(u8 **)self = func_020a94b8(data_021516ac);
        *(u32 *)(*(u8 **)(self + 4) + 0x44) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x48) = zero;
        *(u32 *)(*(u8 **)(self + 4) + 0x4c) = dark;
        return;
    }
}

void func_020e24bc(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 mode) {
    u8 *self = (u8 *)arg0;
    u8 *obj = *(u8 **)(self + 4);
    u8 *f0 = *(u8 **)(self + 0);

    ((void (*)(void *))*(void **)(obj + 4))(obj);

    if (mode == 0) {
        func_0203bc34(f0, obj, (void *)arg3, 0, 0, 0);
    } else if (mode == 1) {
        func_0203bc34(f0, obj, (void *)arg3, 0x80, 0, 1);
    } else if (mode == 2) {
        func_0203bc34(f0, obj, (void *)arg3, 0x70, 0, 2);
    } else if (mode == 3) {
        func_0203bcf8(f0, obj, (void *)arg3, 0, 0, 0x100, 0x40, 0xe);
    }

    func_020a899c(obj);
    *(u32 *)(obj + 0x44) = arg1 << 12;
    *(u32 *)(obj + 0x48) = arg2 << 12;
    *(u32 *)(obj + 0x4c) = 0x2d0000;
}

void func_020e25c4(void) {
    s32 i;
    for (i = 0; i < 0xe; i++) {
        void **arr = (void **)data_02160a74[0];
        void *p = arr[i + 0x18];
        if (p != NULL) {
            func_020a5ce4(p);
        }
    }
}

s32 func_020e25fc(u32 arg0, u32 arg1, u32 arg2) {
    u8 *base = (u8 *)data_02160a74[0];
    u8 *p = *(u8 **)(base + (arg0 << 2) + 0x60);
    u8 *q = p + 0xc;
    if (arg2 != 0) {
        func_020a994c(q);
        func_020a9610(p + 0x40, *(u32 *)(p + 0), arg1, *(u32 *)(p + 4), 0, 0);
        func_020a98ac(q);
        func_020a98f4(q);
        *(u32 *)(p + 0x7c) = 1;
        return 1;
    }
    func_020a994c(q);
    *(u32 *)(p + 0x7c) = 0;
    return 0;
}

void func_020e267c(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    u8 *p = *(u8 **)((u8 *)arg0 + 4);
    *(u32 *)(p + 0x44) = arg1 << 12;
    *(u32 *)(p + 0x48) = arg2 << 12;
    *(u32 *)(p + 0x4c) = arg3 << 12;
}

void func_020e269c(u32 arg0, u8 *arg1, u32 arg2) {
    if (arg2 == 0) {
        u16 v = *(u16 *)(arg1 + 0x20);
        if (v == 5) {
            func_020b52f4(0);
        } else {
            func_020e24bc(arg0, 0, 7, v, 1);
        }
    } else {
        func_020e24bc(arg0, 0, 7, arg2, 1);
    }
}

void func_020e26f0(u32 arg0, s32 arg1, s32 arg2) {
    u8 *node = *(u8 **)((u8 *)data_02160a74[0] + 0x40);
    while (node != NULL) {
        if (*(u8 *)(node + 0x28) & arg0) {
            if (arg1 != 999) {
                *(s32 *)node = arg1;
                if (arg1 != 2 && arg1 != 3) {
                    *(s32 *)(*(u8 **)(node + 0x1c) + 0x20) = 0;
                } else if (arg1 == 2) {
                    *(s32 *)(*(u8 **)(node + 0x1c) + 0x20) = 1;
                } else if (arg1 == 3) {
                    *(s32 *)(*(u8 **)(node + 0x1c) + 0x20) = 1;
                }
            }
            if (arg2 != 999) {
                *(s16 *)(node + 8) = (s16)arg2;
            }
        }
        node = *(u8 **)(node + 0x24);
    }
}

void func_020e2788(u32 arg0, s32 arg1) {
    u8 *node = *(u8 **)((u8 *)data_02160a74[0] + 0x40);
    while (node != NULL) {
        if (*(u8 *)(node + 0x28) & arg0) {
            u8 *sub = *(u8 **)(node + 0x1c);
            if (arg1 == 0) {
                *(u8 *)(sub + 0x28) = 0;
                *(u8 *)(sub + 0x29) = 0;
            } else if (arg1 == 1) {
                *(u8 *)(sub + 0x28) = 0;
                *(u8 *)(sub + 0x29) = 1;
            }
        }
        node = *(u8 **)(node + 0x24);
    }
}

s32 func_020e27ec(void) {
    u8 *base = (u8 *)data_02160a74[0];
    u8 *node;
    if (base == NULL) {
        return 0;
    }
    node = *(u8 **)(base + 0x40);
    while (node != NULL) {
        if (*(s32 *)node == 0) {
            return 1;
        }
        node = *(u8 **)(node + 0x24);
    }
    return 0;
}

extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
void func_020e2834(u8 *arg0, u32 arg1, u32 arg2) {
    u8 *p;
    u8 *q;

    if (arg0 == NULL) {
        return;
    }

    p = func_0210c594(0x2c, data_02155c3c);
    q = func_0210c594(0x2c, data_02155c3c);

    *(u32 *)(p + 0x0) = 1;
    *(s32 *)(p + 0x4) = *(u16 *)(arg0 + 0x8c) - 1;
    *(u8 **)(p + 0x18) = arg0;

    *(u32 *)(q + 0x0) = arg2 + 0x86;
    *(u32 *)(q + 0x4) = 0;
    *(u32 *)(q + 0x8) = 4;
    *(u32 *)(q + 0xc) = 0x23;
    *(u32 *)(q + 0x10) = 0x24;
    *(u32 *)(q + 0x14) = arg1;
    *(u16 *)(q + 0x18) = 0;
    *(u16 *)(q + 0x1a) = 0;
    *(u16 *)(q + 0x1c) = 0;
    *(u32 *)(q + 0x20) = 0;
    *(u32 *)(q + 0x24) = 0x1f;

    *(u16 *)(p + 0x10) = 0;
    *(u16 *)(p + 0x12) = 0;
    *(u16 *)(p + 0x14) = 0;
    *(u16 *)(p + 0xa) = arg2 * 0x53 + 5;
    *(u16 *)(p + 0xc) = 0xc1;
    *(u16 *)(p + 0xe) = 0;
    *(u8 **)(p + 0x1c) = q;
    *(u8 *)(p + 0x28) = 1 << arg2;

    func_021167f0((u8 *)data_02160a74[0] + 0x40, p);
}

extern u32 data_0216263c[3];
void func_020e291c(void) {
    u8 *g = (u8 *)data_02160a74[0];
    u8 *p = *(u8 **)(g + 0x40);
    s32 flag = 1;

    while (p != NULL) {
        if (*(*(u8 **)(p + 0x1c) + 0x29) == 1) {
            flag = 1;
        }
        p = *(u8 **)(p + 0x24);
    }

    if (flag != 0) {
        *(s8 *)(g + 0x1e5) += 1;
        if (*(s8 *)(g + 0x1e5) < 0x5a) {
            *(s8 *)(g + 0x1e4) += 1;
            *(s8 *)(g + 0x1e4) = *(s8 *)(g + 0x1e4) % 4;
        } else {
            *(s8 *)(g + 0x1e5) = 0;
            *(s8 *)(g + 0x1e4) = 0;
            for (p = *(u8 **)(g + 0x40); p != NULL; p = *(u8 **)(p + 0x24)) {
                *(*(u8 **)(p + 0x1c) + 0x29) = 0;
            }
        }
    } else {
        *(s8 *)(g + 0x1e4) = 0;
        *(s8 *)(g + 0x1e5) = 0;
    }

    for (p = *(u8 **)(g + 0x40); p != NULL; p = *(u8 **)(p + 0x24)) {
        u8 *q = *(u8 **)(p + 0x1c);
        s32 mode = *(s32 *)(p + 0);
        if (mode == 0) {
            if (*(s16 *)(p + 0xc) != 0x9e) {
                if (*(s16 *)(p + 0xc) > 0x9e) {
                    *(s16 *)(p + 0xc) -= 10;
                    if (*(s16 *)(p + 0xc) < 0x9e) {
                        *(s16 *)(p + 0xc) = 0x9e;
                    }
                } else if (*(s16 *)(p + 0xc) < 0x9e) {
                    *(s16 *)(p + 0xc) += 10;
                    if (*(s16 *)(p + 0xc) > 0x9e) {
                        *(s16 *)(p + 0xc) = 0x9e;
                    }
                }
            }
        } else if (mode == 1) {
            if (*(s16 *)(p + 0xc) < 0xc1) {
                *(s16 *)(p + 0xc) += 10;
                if (*(s16 *)(p + 0xc) > 0xc1) {
                    *(s16 *)(p + 0xc) = 0xc1;
                }
            }
        } else if (mode == 2) {
            if (*(s16 *)(p + 0xc) > 0x94) {
                *(s16 *)(p + 0xc) -= 10;
                if (*(s16 *)(p + 0xc) < 0x94) {
                    *(s16 *)(p + 0xc) = 0x94;
                }
            }
        } else if (mode == 3) {
            if (*(s16 *)(p + 0xc) != 0x9e) {
                if (*(s16 *)(p + 0xc) > 0x9e) {
                    *(s16 *)(p + 0xc) -= 10;
                    if (*(s16 *)(p + 0xc) < 0x9e) {
                        *(s16 *)(p + 0xc) = 0x9e;
                    }
                } else if (*(s16 *)(p + 0xc) < 0x9e) {
                    *(s16 *)(p + 0xc) += 10;
                    if (*(s16 *)(p + 0xc) > 0x9e) {
                        *(s16 *)(p + 0xc) = 0x9e;
                    }
                }
            }
        }
        *(s16 *)(p + 0x10) = 0;
        *(s16 *)(p + 0x12) = 0;
        if (*(s16 *)(p + 8) != 0) {
            u32 seed;
            *(s16 *)(p + 8) -= 1;
            seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = seed;
            *(s16 *)(p + 0x10) += (s16)((u16)(((seed >> 16) * 8) >> 16) - 4);
            seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = seed;
            *(s16 *)(p + 0x12) += (s16)((u16)(((seed >> 16) * 8) >> 16) - 4);
        }
        *(s16 *)(p + 0xe) = 0x2bd;
        *(s16 *)(q + 0x18) = *(s16 *)(p + 0xa) + *(s16 *)(p + 0x10);
        *(s16 *)(q + 0x1a) = *(s16 *)(p + 0xc) + *(s16 *)(p + 0x12);
        *(s16 *)(q + 0x1c) = *(s16 *)(p + 0xe) + *(s16 *)(p + 0x14);
        if (*(u8 *)(q + 0x29) == 1) {
            *(s8 *)(q + 0x28) = *(s8 *)(g + 0x1e4);
        } else {
            *(s8 *)(q + 0x28) = 0;
        }
    }
}

