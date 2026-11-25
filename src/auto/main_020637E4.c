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
void func_02063f68(void) {
    u8 *g = data_02160a6c;
    if (g == NULL) return;
    if (*(u8 **)(g + 0xac) != NULL) func_020de0a8(*(void **)(g + 0xac));
}

