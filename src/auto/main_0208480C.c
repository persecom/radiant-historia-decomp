/* 17 functions from 0x0208480C to 0x02085328 (main), found by ds-decomp. */
#include "common.h"

extern void func_02085328(void);
extern u8 *data_0216010c;
extern s16 *func_02116984(void *, u16);
extern void *data_02155c3c;
extern u8 data_021485a0[8];
extern void *func_0210c594(s32, void *);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);
extern void func_02080d30(void);
extern void func_0210c5dc(void *);
extern void func_02089a98(void);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

typedef struct UnkNode_02084a70 {
    u8 pad00[2];
    u8 unk02;
    u8 unk03;
    s16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0a;
    s16 unk0c;
    s16 unk0e;
    s16 unk10;
    s16 unk12;
    s32 unk14;
    s32 unk18;
    s32 unk1c;
    s32 unk20;
    s16 unk24;
    u8 unk26;
    u8 pad27[3];
    s8 unk2a;
    u8 pad2b[5];
    struct UnkNode_02084a70 *next;
} UnkNode_02084a70;

typedef struct {
    u8 pad[0x44];
    void *field_44;
    u8 pad2[0x10];
    void *field_58;
} G_020852a0;
void func_0208480c(void) {
    data_0216010c[0x50b4] = 1;
}

void func_02084a70(UnkNode_02084a70 *arg0) {
    UnkNode_02084a70 *node;
    s16 sp[10];

    node = arg0;
    if (node == NULL) {
        return;
    }
    do {
        if (node->unk02 != 0 && node->unk26 != 0) {
            *(volatile u32 *)0x040004a4 = (u32)(node->unk26 << 16) | 0xc0;
            func_020a3bbc(node->unk03);
            sp[0] = 1;
            sp[1] = node->unk04;
            sp[2] = node->unk06;
            sp[3] = node->unk08;
            sp[4] = node->unk0a;
            sp[5] = node->unk0c + (node->unk14 >> 12) + node->unk2a;
            sp[6] = node->unk0e + (node->unk18 >> 12) + node->unk2a;
            sp[7] = node->unk24;
            sp[8] = node->unk10 + (node->unk1c >> 12);
            sp[9] = node->unk12 + (node->unk20 >> 12);
            func_021098ac(sp);
        }
        node = node->next;
    } while (node != NULL);
}

u8 func_02084f80(u16 arg0) {
    return ((u8 *)func_02116984(data_0216010c + 0x608, arg0))[0];
}

u8 func_02084fa8(u16 arg0) {
    return ((u8 *)func_02116984(data_0216010c + 0x608, arg0))[1];
}

u8 func_02085110(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return ptr[0x618];
}

u8 func_02085128(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return ptr[0x619];
}

u32 func_02085140(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return *(u32 *)(ptr + 0x61c);
}

s32 func_02085158(u32 arg0) {
    s16 i;
    for (i = 0; i < *(u8 *)(data_0216010c + 0x614); i++) {
        if (func_02085110((u8)i) == arg0) return func_02085140((u8)(i & 0xff));
    }
    return 0;
}

s32 func_020851bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 sum = arg0 + arg1;
    s32 ret;
    if (arg4 == 0) return (s16)sum;
    if (arg2 < sum) {
        ret = arg2;
        if (arg4 != 1) ret = arg3;
        return ret;
    } else {
        return (s16)sum;
    }
}

s32 func_020851f8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 diff = arg0 - arg1;
    if (arg4 == 0) {
        return (s16)diff;
    }
    if (arg2 > diff) {
        return (arg4 == 1) ? arg2 : arg3;
    }
    return (s16)diff;
}

void func_02085234(void) {
    func_02085328();
}

void func_02085240(void) {
    s32 i = 0;
    u8 unused[4];
    *(void **)(data_0216010c + 0x44) = func_0210c594(0x1c, data_02155c3c);
    if (*(void **)(data_0216010c + 0x58)) {
        if (**(void ***)(data_0216010c + 0x58)) {
            func_020a9544(*(void **)(data_0216010c + 0x58));
        }
    }
    *(void **)(data_0216010c + 0x58) = func_020a94b8(data_021485a0);
}

void func_020852a0(void) {
    G_020852a0 **g = (G_020852a0 **)&data_0216010c;
    if ((*g)->field_58 != NULL && *(void **)(*g)->field_58 != NULL) {
        func_020a9544((*g)->field_58);
        (*g)->field_58 = NULL;
    }
    func_02080d30();
    g = (G_020852a0 **)&data_0216010c;
    if ((*g)->field_44 != NULL) {
        func_0210c5dc((*g)->field_44);
        (*g)->field_44 = NULL;
    }
    {
        void *zero = NULL;
        u8 *p = data_0216010c;
        *(void **)(p + 0x44) = zero;
    }
    {
        u8 zero = 0;
        u8 *p = data_0216010c;
        *(u8 *)(p + 0x3f) = zero;
    }
    func_02089a98();
}

