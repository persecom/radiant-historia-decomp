/* 10 functions from 0x020D3160 to 0x020D413C (main), found by ds-decomp. */
#include "common.h"

typedef struct Node120_020d3160 {
    u8 unk_0;
    u8 pad_1[0xf];
    struct Node120_020d3160 *next;
} Node120_020d3160;

typedef struct Node12c_020d3160 {
    s16 unk_0;
    u8 pad_2[0x12];
    struct Node12c_020d3160 *next;
} Node12c_020d3160;

typedef struct Node_020d3fac {
    u8 pad_0[6];
    u8 unk_6;
    u8 pad_7[5];
    struct Node_020d3fac *next;
} Node_020d3fac;

typedef struct Mgr_020d3160 {
    u8 pad_00[4];
    void *unk_4;
    u8 pad_08[0xe4];
    s32 unk_ec;
    u8 pad_f0[0x30];
    Node120_020d3160 *unk_120;
    u8 pad_124[0x8];
    Node12c_020d3160 *unk_12c;
    u8 pad_130[0x14];
    u8 unk_144;
    u8 pad_145[0xb];
    Node_020d3fac *unk_150;
} Mgr_020d3160;

extern Mgr_020d3160 *data_02160244;
extern u8 *data_02160a74;

void func_021168f8(void *, void *);
void func_0210c5dc(void *);

void func_020d3c98(s32 arg0) {
    Mgr_020d3160 *mgr = data_02160244;
    if (mgr != NULL) {
        mgr->unk_ec = arg0;
    }
}

void *func_020d3cb0(s32 arg0) {
    Node12c_020d3160 *node = data_02160244->unk_12c;
    while (node != NULL) {
        if (node->unk_0 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_020d3dd8(void) {
    while (data_02160244->unk_120 != NULL) {
        Node120_020d3160 *node = data_02160244->unk_120;
        func_021168f8(&data_02160244->unk_120, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    while (data_02160244->unk_12c != NULL) {
        Node12c_020d3160 *node = data_02160244->unk_12c;
        func_021168f8(&data_02160244->unk_12c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void *func_020d3e60(u32 arg0) {
    Node120_020d3160 *node = data_02160244->unk_120;
    while (node != NULL) {
        if (node->unk_0 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_020d3e9c(s32 arg0, u32 arg1) {
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);
    if (arg0 == 0) {
        func_020b52f4(one);
        func_020a5ce4(p);
        func_020a9544(*(void **)p);
        func_020e1ec8(p, 0xe);
        func_020a8810(*(void **)((u8 *)p + 4), 0x10);
        func_020e24bc(p, 0, 8, arg1, one);
    } else if (arg0 == 1) {
        func_020b52f4(0);
        func_020a5ce4(p);
    }
}

void func_020d3f38(u8 arg0) {
    Mgr_020d3160 *mgr = data_02160244;
    if (mgr->unk_144 != 4 && arg0 == 4 && *(u8 *)(mgr->unk_4 + 0x12) == 0) {
        u32 zero;
        func_020d0884();
        zero = 0;
        func_020d3160(7, zero, zero, zero);
        func_020d3160(zero, zero, zero, zero);
    }
    data_02160244->unk_144 = arg0;
}

void *func_020d3fac(u8 arg0) {
    Node_020d3fac *node = data_02160244->unk_150;
    while (node != NULL) {
        if (node->unk_6 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

