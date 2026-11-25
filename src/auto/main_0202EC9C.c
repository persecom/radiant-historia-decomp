/* 14 functions from 0x0202EC9C to 0x0202FB50 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02160084;
extern void *data_02160088;
extern void *data_02155c3c;

void *func_020224cc(void);
void func_02022508(void *);
void func_02030574(void *);

typedef struct Node_0202f5fc {
    u8 pad0[4];
    struct Node_0202f5fc *next;
    s32 unk8;
    u8 unkc;
    u8 padD[3];
    void *unk10;
} Node_0202f5fc;

void *func_0210c594(u32, void *);
void func_0210c5dc(void *);
void func_021167ac(void *, u32);
void func_021167f0(void *, void *);
void func_021168f8(void *, void *);
void func_0202f4d8(void *);

extern u8 *data_02160244;
s32 func_0202ec9c(s8 *arg0, s32 arg1, s32 arg2) {
    s32 drow = 0;
    s32 dcol = 0;
    s32 src_col = arg0[0] % 3;
    s32 dst_col = arg0[2] % 3;
    s32 src_row = arg0[0] / 3;
    s32 dst_row = arg0[2] / 3;
    u8 *r7 = data_02160244;
    s32 cell;

    switch (arg1) {
        case 0: {
            s32 diff = dst_row - src_row;
            s32 abs_d;
            if (diff == 0) {
                return 0;
            }
            abs_d = diff;
            if (diff < 0) {
                abs_d = -diff;
            }
            if (abs_d >= arg2) {
                if (diff < 0) {
                    drow = -arg2;
                } else {
                    drow = arg2;
                }
            } else {
                return 0;
            }
            break;
        }
        case 1: {
            s32 diff = dst_col - src_col;
            s32 abs_d;
            if (diff == 0) {
                return 0;
            }
            abs_d = diff;
            if (diff < 0) {
                abs_d = -diff;
            }
            if (abs_d >= arg2) {
                if (diff < 0) {
                    dcol = -arg2;
                } else {
                    dcol = arg2;
                }
            } else {
                return 0;
            }
            break;
        }
        case 2: {
            s32 abs_r;
            s32 abs_c;
            drow = dst_row - src_row;
            dcol = dst_col - src_col;
            if (drow == 0 || dcol == 0) {
                return 0;
            }
            abs_r = drow;
            if (drow < 0) {
                abs_r = -drow;
            }
            abs_c = dcol;
            if (dcol < 0) {
                abs_c = -dcol;
            }
            if (abs_r < arg2 && abs_c < arg2) {
                return 0;
            }
            if (abs_r >= arg2) {
                if (drow < 0) {
                    drow = -arg2;
                } else {
                    drow = arg2;
                }
            }
            if (abs_c >= arg2) {
                if (dcol < 0) {
                    dcol = -arg2;
                } else {
                    dcol = arg2;
                }
            }
            break;
        }
    }

    cell = (src_row + drow) * 3 + (src_col + dcol);
    switch (arg0[1]) {
        case 0:
            if (cell >= 0 && cell <= 8 && ((s8 *)(r7 + 0x38))[cell] == -1) {
                ((s8 *)(r7 + 0x38))[cell] = 1;
                arg0[2] = cell;
                arg0[3] = -1;
                return 1;
            }
            break;
        case 1:
            if (cell >= 0 && cell <= 8 && cell != 2 && cell != 5 && cell != 8) {
                if (((s8 *)(r7 + 0x38))[cell] == -1 && ((s8 *)(r7 + 0x38))[cell + 1] == -1) {
                    ((s8 *)(r7 + 0x38))[cell] = 1;
                    ((s8 *)(r7 + 0x38))[cell + 1] = 1;
                    arg0[2] = cell;
                    arg0[3] = -1;
                    return 1;
                }
            }
            break;
        case 2:
            if (cell >= 0 && cell <= 8 && cell >= 3 && cell <= 8) {
                if (((s8 *)(r7 + 0x38))[cell] == -1 && ((s8 *)(r7 + 0x38))[cell - 3] == -1) {
                    ((s8 *)(r7 + 0x38))[cell] = 1;
                    ((s8 *)(r7 + 0x38))[cell - 3] = 1;
                    arg0[2] = cell;
                    arg0[3] = -1;
                    return 1;
                }
            }
            break;
        case 3:
            if (cell == 3 || cell == 4 || cell == 6 || cell == 7) {
                if (((s8 *)(r7 + 0x38))[cell] == -1 && ((s8 *)(r7 + 0x38))[cell - 3] == -1 &&
                    ((s8 *)(r7 + 0x38))[cell - 2] == -1 && ((s8 *)(r7 + 0x38))[cell + 1] == -1) {
                    ((s8 *)(r7 + 0x38))[cell] = 1;
                    ((s8 *)(r7 + 0x38))[cell - 3] = 1;
                    ((s8 *)(r7 + 0x38))[cell - 2] = 1;
                    ((s8 *)(r7 + 0x38))[cell + 1] = 1;
                    arg0[2] = cell;
                    arg0[3] = -1;
                    return 1;
                }
            }
            break;
    }

    return 0;
}

void func_0202f388(void) {
    void **p = &data_02160084;
    if (*p != NULL) {
        return;
    }
    *p = func_0210c594(0xC, data_02155c3c);
    func_021167ac(*p, 0x14);
}

void func_0202f3c4(void) {
    void **p = &data_02160084;
    if (*p == NULL) {
        return;
    }
    while (*(void **)*p != NULL) {
        func_0202f4d8(*(void **)*p);
    }
    if (*p != NULL) {
        func_0210c5dc(*p);
        data_02160084 = NULL;
    }
}

void func_0202f41c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6) {
    u8 *node = func_0210c594(0x20, data_02155c3c);
    *(s32 *)(node + 0x0) = arg0;
    *(s32 *)(node + 0x4) = arg1;
    *(s32 *)(node + 0x8) = arg2;
    *(s32 *)(node + 0xc) = arg3;
    *(s32 *)(node + 0x10) = arg4;
    *(u8 *)(node + 0x1c) = arg5;
    *(u8 *)(node + 0x1d) = arg6;
    func_021167f0(data_02160084, node);
}

void *func_0202f484(s32 arg0, s32 arg1) {
    u8 *node = *(u8 **)data_02160084;
    while (node != NULL) {
        if (arg0 == 0 && *(s32 *)(node + 0) == arg1) {
            return node;
        }
        if (arg0 == 1 && *(s32 *)(node + 4) == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x18);
    }
    return NULL;
}

void func_0202f4d8(void *arg0) {
    void **p = &data_02160084;
    func_021168f8(*p, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_0202f508(void) {
    u16 i;
    if (data_02160088 != NULL) {
        return;
    }
    data_02160088 = func_0210c594(0x10, data_02155c3c);
    func_021167ac(data_02160088, 0);
    for (i = 0; i < 0x40; i++) {
        u8 *node = func_0210c594(0x18, data_02155c3c);
        *(u32 *)(node + 8) = 0;
        *(u32 *)(node + 0x10) = 0;
        *(u8 *)(node + 0xc) = 0;
        func_021167f0(data_02160088, node);
    }
    *(u16 *)((u8 *)data_02160088 + 0xc) = 0;
}

void func_0202f594(void) {
    if (data_02160088 == NULL) {
        return;
    }
    while (*(void **)data_02160088 != NULL) {
        void *node = *(void **)data_02160088;
        func_021168f8(data_02160088, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (data_02160088 == NULL) {
        return;
    }
    func_0210c5dc(data_02160088);
    data_02160088 = NULL;
}

void *func_0202f5fc(u32 arg0) {
    void **p = &data_02160088;
    Node_0202f5fc *base = *(Node_0202f5fc **)p;
    Node_0202f5fc *node = *(Node_0202f5fc **)base;
    while (node != NULL) {
        if (arg0 == 0 && node->unk10 == NULL) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_0202f63c(Node_0202f5fc *arg0) {
    void **p = &data_02160088;
    Node_0202f5fc *base = *(Node_0202f5fc **)p;
    Node_0202f5fc *node = *(Node_0202f5fc **)base;
    while (node != NULL) {
        if (node->unk10 != NULL && node != arg0) {
            if (arg0->unk8 <= node->unk8) {
                arg0->unkc++;
            } else {
                node->unkc++;
            }
        }
        node = node->next;
    }
}

extern u8 *data_02160a6c;
extern u8 *data_0216008c;
extern u8 *data_02155984;
extern s32 func_0210c2f4(void *, void *);
void func_0202f698(void) {
    u8 *r9 = *(u8 **)(data_02160a6c + 0x70);
    u8 *r10;
    u8 *node;

    while (r9 != NULL) {
        *(s32 *)(r9 + 0x74) = 600 - (*(s32 *)(r9 + 8) >> 12);
        switch (*(u16 *)(r9 + 0x8e)) {
            case 0xfb:
            case 0xfc:
            case 0xfd:
            case 0x1a5:
            case 0x1a6:
            case 0x1a7:
            case 0x1a8:
            case 0x1a9:
            case 0x1aa:
                break;
            case 0x1d7:
            case 0x1e1:
                *(s32 *)(r9 + 0x74) -= 2;
                break;
            case 0x1c3:
            case 0x1c4:
            case 0x1c5:
            case 0x1c6:
                *(s32 *)(r9 + 0x74) -= 2;
                break;
            case 0x1cd:
            case 0x1ce:
            case 0x1cf:
            case 0x1d0:
                *(s32 *)(r9 + 0x74) -= 2;
                break;
            case 0x1e2:
            case 0x1eb:
            case 0x1f5:
                break;
            case 0x1ff:
            case 0x200:
                *(s32 *)(r9 + 0x74) -= 2;
                break;
        }
        node = (u8 *)func_0202f5fc(0);
        if (node != NULL) {
            (*(u16 *)((u8 *)data_02160088 + 0xc))++;
            *(s32 *)(node + 8) = *(s32 *)(r9 + 0x74);
            *(void **)(node + 0x10) = r9;
            *(u8 *)(node + 0xc) = 1;
            *(u8 *)(node + 0x14) = 1;
            func_0202f63c((Node_0202f5fc *)node);
        }
        r9 = *(u8 **)(r9 + 0x13c);
    }

    r10 = *(u8 **)(data_0216008c + 0x2c);
    while (r10 != NULL) {
        s32 dist = func_0210c2f4(data_02155984 + 0x14, r10 + 0xc);
        *(s32 *)(r10 + 0x1c) = 500 - ((dist >> 12) / 10);
        node = (u8 *)func_0202f5fc(0);
        if (node != NULL) {
            (*(u16 *)((u8 *)data_02160088 + 0xc))++;
            *(s32 *)(node + 8) = *(s32 *)(r10 + 0x1c);
            *(void **)(node + 0x10) = r10;
            *(u8 *)(node + 0xc) = 1;
            *(u8 *)(node + 0x14) = 2;
            func_0202f63c((Node_0202f5fc *)node);
        }
        r10 = *(u8 **)(r10 + 4);
    }

    node = *(u8 **)data_02160088;
    while (node != NULL) {
        u8 *obj = *(u8 **)(node + 0x10);
        if (obj != NULL) {
            u8 type = *(u8 *)(node + 0x14);
            if (type == 1) {
                u8 *p128 = *(u8 **)(obj + 0x128);
                if (obj != NULL && p128 != NULL) {
                    *(u8 *)(p128 + 0xa8) = *(u16 *)((u8 *)data_02160088 + 0xc) - *(u8 *)(node + 0xc);
                }
                if (*(u16 *)((u8 *)data_02160088 + 0xc) > 6) {
                    *(s32 *)(obj + 0x74) = ((*(u16 *)((u8 *)data_02160088 + 0xc) - *(u8 *)(node + 0xc)) * 16) + 0x4c;
                } else {
                    *(s32 *)(obj + 0x74) = ((*(u16 *)((u8 *)data_02160088 + 0xc) - *(u8 *)(node + 0xc)) * 40) + 0x4c;
                }
            } else if (type == 2) {
                *(s32 *)(obj + 0x1c) = ((*(u16 *)((u8 *)data_02160088 + 0xc) - *(u8 *)(node + 0xc)) * 12) + 0x4c;
            }
            *(s32 *)(node + 8) = 0;
            *(void **)(node + 0x10) = NULL;
            *(u8 *)(node + 0xc) = 0;
            *(u8 *)(node + 0x14) = 0;
        }
        node = *(u8 **)(node + 4);
    }
    *(u16 *)((u8 *)data_02160088 + 0xc) = 0;
}

