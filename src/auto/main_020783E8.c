/* 9 functions from 0x020783E8 to 0x02079374 (main), found by ds-decomp. */
#include "common.h"

typedef struct Vec3_02078d8c {
    s32 x;
    s32 y;
    s32 z;
} Vec3_02078d8c;

typedef struct Obj_02078d8c {
    Vec3_02078d8c pos;
    u8 pad_0c[0x91];
    u8 unk_9d;
} Obj_02078d8c;

typedef struct Mgr_02078d8c {
    u8 pad_00[0x68];
    Obj_02078d8c *unk_68;
} Mgr_02078d8c;

typedef struct Node_020789ec {
    u8 pad_00[0x28];
    void *unk_28;
} Node_020789ec;

typedef struct Mgr_020789ec {
    u8 pad_00[0x7c];
    Node_020789ec *unk_7c;
} Mgr_020789ec;

extern Mgr_020789ec *data_021600bc;
extern Mgr_02078d8c *data_021600ac;

void func_021168f8(Node_020789ec **, Node_020789ec *);
void func_02047490(void *);
void func_0210c5dc(void *);
s32 func_0210c2f4(Obj_02078d8c *, Vec3_02078d8c *);

void func_020789ec(void) {
    while (data_021600bc->unk_7c != NULL) {
        Node_020789ec *node = data_021600bc->unk_7c;
        func_021168f8(&data_021600bc->unk_7c, node);
        func_02047490(node->unk_28);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

s32 func_02078d8c(Obj_02078d8c *obj, s32 arg1) {
    Obj_02078d8c *target = data_021600ac->unk_68;
    Vec3_02078d8c pos = obj->pos;
    pos.z -= ((u32)obj->unk_9d >> 1) << 12;

    if (obj != NULL && target != NULL) {
        if (func_0210c2f4(target, &pos) <= ((target->unk_9d + arg1) << 12) &&
            obj->pos.y <= target->pos.y + 0x10000) {
            if (obj->pos.y >= target->pos.y) {
                return 1;
            }
        }
    }
    return 0;
}

