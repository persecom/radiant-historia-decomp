/* 10 functions from 0x02046E30 to 0x0204798C (main), found by ds-decomp. */
#include "common.h"

typedef struct Obj_02046e30 {
    u8 pad_00[0xb4];
    u8 unk_b4;
    u8 pad_b5[3];
    void *unk_b8;
    u8 pad_bc[0x48];
    u8 unk_104;
    u8 pad_105[3];
    void *unk_108;
} Obj_02046e30;

typedef struct Mgr_02046e30 {
    u8 pad_00[0xa0];
    u8 unk_a0;
} Mgr_02046e30;

extern Mgr_02046e30 *data_021600bc;

void func_021167f0(void **, void *);
void func_021168f8(void **, void *);
void func_0210c5dc(void *);
void *func_020eca60(void);
void func_020ecd10(void *, u32, void *);
void func_020ecac8(void *, u32);
s32 func_020ed2d0(void *, u8, s32);

void func_020471b8(Obj_02046e30 *obj, u32 arg1) {
    if (arg1 == 2000) {
        return;
    }
    if (arg1 != 0 && arg1 < 700) {
        void *r6 = func_020eca60();
        func_020ecd10(r6, arg1, &data_021600bc->unk_a0);
        obj->unk_108 = r6;
    } else if (arg1 > 5000 && arg1 < 6000) {
        void *r6 = func_020eca60();
        func_020ecac8(r6, arg1);
        obj->unk_108 = r6;
    } else if (arg1 > 1000 && arg1 < 5000 && arg1 != 2000) {
        void *r4 = func_020eca60();
        func_020ecd10(r4, arg1, &data_021600bc->unk_a0);
        obj->unk_108 = r4;
    }
}

void func_02047778(Obj_02046e30 *obj) {
    while (obj->unk_b8 != NULL) {
        void *node = obj->unk_b8;
        func_021168f8(&obj->unk_b8, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    obj->unk_b4 = 0;
}

void func_020477c0(Obj_02046e30 *obj, void *arg1) {
    obj->unk_b4++;
    func_021167f0(&obj->unk_b8, arg1);
}
