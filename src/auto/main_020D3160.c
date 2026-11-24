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

typedef struct Mgr_020d3160 {
    u8 pad_00[0xec];
    s32 unk_ec;
    u8 pad_f0[0x30];
    Node120_020d3160 *unk_120;
    u8 pad_124[0x8];
    Node12c_020d3160 *unk_12c;
} Mgr_020d3160;

extern Mgr_020d3160 *data_02160244;

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

