/* 14 functions from 0x020E4A78 to 0x020E5968 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74[];
extern void *data_02160a6c;

u8 func_020e55d8();
s32 func_02064cb8(void *, s32);
s32 func_020bd490(s32, s32);
u8 *func_02021f10(s32);
s32 func_02032c80(void *, s32);
void func_0202eac4(s32, u16);
s32 func_02065c44(void *);
u32 func_020deaf0(void *, u8, s32);
void *func_0202c820(u8);
void *func_0202c920(u8);

typedef struct {
    u8 unk0;
    u8 pad1;
    s8 unk2;
    s8 unk3;
    u8 unk4;
    u8 unk5;
    u8 pad6[3];
    u8 unk9;
} Node_020e4a78;

static inline void func_020e4a78_set(Node_020e4a78 *p) {
    u8 v = p->unk9;
    p->unk5 = 2;
    if (v == 2) {
        p->unk5 = 3;
    }
    p->unk4 = 0;
}

void func_020e4a78(Node_020e4a78 *p) {
    if (p->unk0 & 1) return;
    if (p->unk9 == 0 || p->unk9 == 2) {
        p->unk5 = 2;
        if (p->unk9 == 2) p->unk5 = 3;
        p->unk4 = 0;
        return;
    }
    if (p->unk9 == 1) {
        p->unk5 = 3;
        p->unk4 = 3;
        p->unk2 = 3;
    }
}

s16 func_020e4ad4(void) {
    s16 ret = -1;
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xb8);
    if (*p & 1) {
        return ret;
    }
    if (*(p + 9) == 0) {
        return (s16)(3 * (2 - *(s8 *)(p + 2)) + (2 - *(s8 *)(p + 3)));
    }
    if (*(p + 9) == 1) {
        return (s16)(*(s8 *)(p + 3) + 9);
    }
    if (*(p + 9) == 2) {
        s8 x = *(s8 *)(p + 2);
        if (x <= 2) {
            return (s16)(3 * (2 - x) + (2 - *(s8 *)(p + 3)));
        }
        if (x == 3) {
            ret = (s16)(*(s8 *)(p + 3) + 8);
        }
    }
    return ret;
}

u8 func_020e4b88(void) {
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xc0);
    if (p != NULL) {
        return *(u8 *)(p + 6);
    }
    return 1;
}

u16 func_020e4ba8(void) {
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xc0);
    if (p != NULL) {
        return *(u16 *)(p + 0x38);
    }
    return 1;
}

void func_020e4bc8(void) {
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xb8);
    if (*(s16 *)(p + 0x12) == 0) {
        *(s16 *)(p + 0x10) += 1;
        if (*(s16 *)(p + 0x10) > 0x1f) {
            *(s16 *)(p + 0x10) = 0x1f;
            *(s16 *)(p + 0x12) = 1;
        }
    } else if (*(s16 *)(p + 0x12) == 1) {
        *(s16 *)(p + 0x10) -= 1;
        if (*(s16 *)(p + 0x10) < 0) {
            *(s16 *)(p + 0x10) = 0;
            *(s16 *)(p + 0x12) = 0;
        }
    }
}

void func_020e4c38(void) {
    u8 *node = *(u8 **)((u8 *)data_02160a6c + 0x70);
    while (node != NULL) {
        *(u32 *)(node + 0x80) &= ~0x1000;
        func_0202eac4(1, *(u16 *)(node + 0x8e));
        node = *(u8 **)(node + 0x13c);
    }
}

void func_020e4c80(void *arg0, s32 arg1) {
    func_020e4c38();
    if (*((u8 *)arg0 + 7) == 8) {
        return;
    }
    if (func_02065c44(arg0) != 0) {
        u32 mask = func_020deaf0(arg0, (u8)arg1, 1);
        u16 i;
        for (i = 0; i < 9; i++) {
            if (mask & (1 << i)) {
                u8 *obj = func_0202c820((u8)i);
                if (obj != NULL) {
                    *(u32 *)(obj + 0x80) |= 0x1000;
                    func_0202eac4(0, *(u16 *)(obj + 0x8e));
                }
            }
        }
    } else {
        u8 *obj = func_0202c920((u8)arg1);
        if (obj != NULL) {
            *(u32 *)(obj + 0x80) |= 0x1000;
            func_0202eac4(0, *(u16 *)(obj + 0x8e));
        }
    }
}

void func_020e57e8(void *arg0) {
    s32 val = func_020e55d8((u8)*(u16 *)((u8 *)arg0 + 0x90));
    func_02064cb8(*(void **)((u8 *)arg0 + 0x11c), val);
}

