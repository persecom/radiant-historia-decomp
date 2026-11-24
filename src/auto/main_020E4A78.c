/* 14 functions from 0x020E4A78 to 0x020E5968 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74[];
extern void *data_02160a6c;

s32 func_020e55d8(u8);
void func_02064cb8(void *, s32);
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
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xb8);
    s16 ret = -1;
    if (*p & 1) {
        return ret;
    }
    if (*(p + 9) == 0) {
        return (s16)((2 - *(s8 *)(p + 3)) + 3 * (2 - *(s8 *)(p + 2)));
    }
    if (*(p + 9) == 1) {
        return (s16)(*(s8 *)(p + 3) + 9);
    }
    if (*(p + 9) == 2) {
        s8 x = *(s8 *)(p + 2);
        s8 y = *(s8 *)(p + 3);
        if (x <= 2) {
            return (s16)((2 - y) + 3 * (2 - x));
        }
        if (x == 3) {
            return (s16)(y + 8);
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

