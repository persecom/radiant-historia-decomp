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
    u8 *work = data_02160120;

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
            *(u16 *)(work + 0x7a8) = 0;
            func_0210d27c(0x9a);
            *(u16 *)((u8 *)func_0209c14c(0x9a) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c(0x9b) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c(0x9c) + 2) |= 1;
            if (*(u16 *)(node + 2) == 0) {
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), *(u8 *)(node + 0), 12, 0x9c, 0x2c6);
                func_020a8810(*(void **)(work + 0x79c), 20);
                {
                    u8 *p = *(u8 **)(work + 0x7a0);
                    (*(void (**)(void *))(p + 4))(p);
                }
                func_020a899c(*(void **)(work + 0x7a0));
                {
                    u8 *p = *(u8 **)(work + 0x7a4);
                    (*(void (**)(void *))(p + 4))(p);
                }
                func_020a899c(*(void **)(work + 0x7a4));
            } else {
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), (u16)(*(u8 *)(node + 0) + 10), 12, 0x9c, 0x2c6);
                func_020a8810(*(void **)(work + 0x79c), 20);
                func_0209ca18(*(void **)(work + 0x7a0), *(void **)(work + 0x6a0), *(u16 *)(node + 2), 12, 0xac, 0x2c6);
                func_020a8810(*(void **)(work + 0x7a0), 20);
                {
                    s16 w = (s16)(func_020a97e4(*(void **)(work + 0x6a0), *(u16 *)(node + 2)) + 12);
                    func_0209ca18(*(void **)(work + 0x7a0), *(void **)(work + 0x798), *(u16 *)(node + 2), w, 0xac, 0x2c6);
                }
                func_020a8810(*(void **)(work + 0x7a0), 20);
            }
            break;
        }
        case 1:
            *(u16 *)(work + 0x7a8) += 1;
            if (*(u16 *)(work + 0x7a8) > 0x40) {
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
            *(u16 *)(work + 0x7a8) = 0;
            func_0210d27c(0x9a);
            if (*(u16 *)(node + 2) == 0) {
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), *(u8 *)(node + 0), 12, 0x9c, 0x2c6);
                func_020a8810(*(void **)(work + 0x79c), 20);
                {
                    u8 *p = *(u8 **)(work + 0x7a0);
                    (*(void (**)(void *))(p + 4))(p);
                }
                func_020a899c(*(void **)(work + 0x7a0));
                {
                    u8 *p = *(u8 **)(work + 0x7a4);
                    (*(void (**)(void *))(p + 4))(p);
                }
                func_020a899c(*(void **)(work + 0x7a4));
            } else {
                func_0209ca18(*(void **)(work + 0x79c), *(void **)(work + 0x794), (u16)(*(u8 *)(node + 0) + 10), 12, 0x9c, 0x2c6);
                func_020a8810(*(void **)(work + 0x79c), 20);
                func_0209ca18(*(void **)(work + 0x7a0), *(void **)(work + 0x6a0), *(u16 *)(node + 2), 12, 0xac, 0x2c6);
                func_020a8810(*(void **)(work + 0x7a0), 20);
                {
                    s16 w = (s16)(func_020a97e4(*(void **)(work + 0x6a0), *(u16 *)(node + 2)) + 12);
                    func_0209ca18(*(void **)(work + 0x7a4), *(void **)(work + 0x798), 100, w, 0xac, 0x2c6);
                }
                func_020a8810(*(void **)(work + 0x7a4), 20);
            }
            break;
        }
        case 3: {
            u8 *p;
            p = *(u8 **)(work + 0x79c);
            (*(void (**)(void *))(p + 4))(p);
            func_020a899c(*(void **)(work + 0x79c));
            p = *(u8 **)(work + 0x7a0);
            (*(void (**)(void *))(p + 4))(p);
            func_020a899c(*(void **)(work + 0x7a0));
            p = *(u8 **)(work + 0x7a4);
            (*(void (**)(void *))(p + 4))(p);
            func_020a899c(*(void **)(work + 0x7a4));
            *(u16 *)((u8 *)func_0209c14c(0x9a) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c(0x9b) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c(0x9c) + 2) &= ~1;
            func_0209b194(8);
            break;
        }
        }
        break;
    case 8:
        if (*(s32 *)(work + 0x784) != 0) {
            if (*(u8 *)(work + 0x788) == 0) {
                *(u8 *)(work + 0x788) |= 1;
            } else if (*(u8 *)(work + 0x788) & 1) {
                *(s16 *)(work + 0x78a) += 10;
                if (*(s16 *)(work + 0x78a) > 50) {
                    *(s16 *)(work + 0x78a) = 31;
                    *(u8 *)(work + 0x788) = 0;
                    *(s32 *)(work + 0x780) += *(s32 *)(work + 0x784);
                    if (*(s32 *)(work + 0x780) > 9999999) {
                        *(s32 *)(work + 0x780) = 9999999;
                    }
                    *(u8 *)(work + 0x788) |= 2;
                }
            } else if (*(u8 *)(work + 0x788) & 2) {
                *(s16 *)(work + 0x78a) -= 7;
                if (*(s16 *)(work + 0x78a) < 1) {
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

    if (*(s16 *)(work + 0x5a) < 16 && *(s16 *)(work + 0x5a) != 0) {
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
        if (*(s16 *)(work + 0x5a) >= 16) {
            *(s16 *)(work + 0x5a) = 16;
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
            if (*(s16 *)(work + 0x734) < 0) {
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
            if (*(s16 *)(work + 0x734) > *(u16 *)(work + 0x714) - 7) {
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
                if (*(s16 *)(work + 0x734) < 0) {
                    *(s16 *)(work + 0x734) = 0;
                }
            }
            *(s16 *)(work + 0x73a) += 1;
            if (*(s16 *)(work + 0x73a) > 10) {
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
}
