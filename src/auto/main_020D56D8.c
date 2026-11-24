/* 10 functions from 0x020D56D8 to 0x020D655C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 pad_0[0x52];
    s16 unk_52;
} Struct020d64c8;

typedef struct {
    u8 pad_0[0x120];
    void *unk_120;
} Struct020d5fd0;

extern s16 *func_02022494(void *, u32);
extern void *func_02026c60(void *, s32);
extern void func_02026cac(void *);
extern void func_02026c94(void *);
extern u8 *data_02160a74;
extern void func_020b52f4(s32);
extern void func_020b532c(s32);
extern void func_020a5ce4(void *);
extern void func_020a9544(void *);
extern void func_020e1ec8(void *, s32);
extern void func_020a8810(void *, u32);
extern void func_020e24bc(void *, s32, s32, s32, s32);

void func_020d5fd0(Struct020d5fd0 *arg0) {
    s32 one = 1;
    s32 zero = 0;
    s32 flag;
    void *node;

    do {
        flag = zero;
        node = func_02026c60(arg0->unk_120, one);
        if (node != NULL) {
            switch (*(u16 *)node) {
            case 6:
            case 7:
            case 8:
            case 0x18:
                func_02026cac(arg0->unk_120);
                func_02026c94(arg0->unk_120);
                flag = one;
                break;
            default:
                break;
            }
        }
    } while (flag != zero);
}

void func_020d6048(s32 arg0) {
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);

    func_020b52f4(one);
    func_020a5ce4(p);
    func_020a9544(*(void **)p);
    {
        s32 zero = 0;
        *(u32 *)p = zero;
        func_020e1ec8(p, zero);
        func_020a8810(*(void **)((u8 *)p + 4), 0x10);
        func_020e24bc(p, zero, 7, arg0, one);
    }
}

void func_020d60b8(s32 arg0) {
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);

    func_020b532c(one);
    func_020a5ce4(p);
    func_020a9544(*(void **)p);
    {
        s32 zero = 0;
        func_020e1ec8(p, zero);
        func_020a8810(*(void **)((u8 *)p + 4), 0x10);
        func_020e24bc(p, zero, 7, arg0, one);
        func_020b52f4(zero);
    }
}

void func_020d64c8(Struct020d64c8 *arg0) {
    s16 *p = func_02022494(arg0, 0);
    arg0->unk_52 = *p;
}
