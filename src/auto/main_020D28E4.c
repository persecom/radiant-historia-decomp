/* 13 functions from 0x020D28E4 to 0x020D3160 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[7];
} Unk14;

typedef struct {
    u8 unk0;
    s8 unk1;
    s16 unk2;
} Unk3;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 pad[0xc];
    s32 unk18;
    s32 unk1c;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2c;
    u8 pad2[0x62];
    u16 unk92;
} UnkA;

typedef struct {
    u8 pad[0x1a8];
    s32 unk1a8;
    s32 unk1ac;
    s32 unk1b0;
} UnkB;

extern const Unk14 data_02144910;
typedef struct {
    u8 pad[0xfc];
    u8 *ptrFc;
    u8 *ptr100;
} UnkC;

extern UnkC *data_02160244;

typedef struct {
    u8 pad[0x64];
    s32 unk64;
} UnkD;

typedef struct {
    u8 pad[0x68];
    s32 unk68;
    u8 pad2[4];
    u16 unk70;
} UnkE;

extern UnkD *data_02160a6c;
extern UnkE *data_02160110[3];
extern void func_020d2f44(void);
extern const s16 data_0213a394[];
extern void func_021099f8(void *);
extern s16 func_020ddcb0(void *, void *);
extern void func_020ddd8c(void *);

void func_020d2a44(s8 arg0, u8 arg1, s16 arg2) {
    Unk14 buf = data_02144910;
    if (arg1 == 0) {
        buf.unk[6] = 0x7fff;
    } else if (arg1 == 1) {
        buf.unk[6] = 0;
    }
    *(volatile u32 *)0x040004A4 = (arg0 << 16) | 0xc0;
    buf.unk[3] = arg2;
    func_021099f8(&buf);
}

void func_020d2ac4(Unk3 *arg) {
    if (arg == NULL) return;
    if (arg->unk1 < 1 || arg->unk1 > 0x1f) return;
    func_020d2a44(arg->unk1, arg->unk0, arg->unk2);
}

s32 func_020d2af4(s32 arg0, s32 arg1, s8 arg2, u8 arg3, s16 arg4) {
    u8 *p = NULL;
    s8 cur;
    if (arg0 == 0) {
        p = data_02160244->ptrFc;
    } else if (arg0 == 1) {
        p = data_02160244->ptr100;
    }
    p[0] = arg3;
    *(s16 *)(p + 2) = arg4;
    cur = (s8)p[1];
    p[1] = cur + (s8)arg1;
    cur = *(volatile s8 *)(p + 1);
    if (arg1 > 0) {
        if (cur > arg2) {
            p[1] = arg2;
            return 1;
        }
    } else {
        if (cur < arg2) {
            p[1] = arg2;
            return 1;
        }
    }
    return 0;
}

void func_020d2b78(UnkA *a, UnkB *b, s32 c, s32 d) {
    s32 idx = c >> 4;
    a->unk18 = a->unk0;
    a->unk1c = a->unk4;
    a->unk20 = a->unk8;
    a->unk24 = b->unk1a8 + d * data_0213a394[idx * 2 + 1];
    a->unk28 = b->unk1ac;
    a->unk2c = b->unk1b0 + d * data_0213a394[idx * 2];
    a->unk92 = func_020ddcb0(a, &a->unk24);
    func_020ddd8c(a);
}

void func_020d2bf0(UnkA *a, Unk_020895a0 *b, s32 c, s32 d) {
    s32 idx = c >> 4;
    a->unk24 = b->unk0 + d * data_0213a394[idx * 2 + 1];
    a->unk28 = b->unk4;
    a->unk2c = b->unk8 + d * data_0213a394[idx * 2];
    a->unk92 = func_020ddcb0(a, &a->unk24);
    func_020ddd8c(a);
}

void func_020d2c54(UnkA *a, Unk_020895a0 *b) {
    a->unk24 = b->unk0;
    a->unk28 = b->unk4;
    a->unk2c = b->unk8;
    a->unk92 = func_020ddcb0(a, &a->unk24);
    func_020ddd8c(a);
}

s32 func_020d2e14(s32 arg0, s32 arg1) {
    UnkE *g = data_02160110[0];
    switch (arg0) {
    case 2:
        if (g->unk68 & arg1) return 1;
        break;
    case 3: {
        u16 mask = ~arg1;
        g->unk70 &= mask;
        break;
    }
    case 4:
        g->unk70 |= (u16)arg1;
        break;
    case 5:
        if (g->unk70 & arg1) return 1;
        break;
    }
    return 0;
}

void func_020d30a0(void) {
    while (data_02160a6c->unk64 != 0) {
        func_020d2f44();
    }
}

extern void func_020c3020(void *);
extern void func_02026578(void *);
void func_020d30d4(void) {
    u8 *node;
    u8 *next;

    if (data_02160a6c == NULL) {
        return;
    }
    node = (u8 *)data_02160a6c->unk64;
    while (node != NULL) {
        next = *(u8 **)(node + 0x134);
        if (*(u8 *)(node + 0xa5) == 1) {
            if (*(u32 *)(node + 0x80) & 1) {
                *(u32 *)((u8 *)data_02160a6c + 0x124) += *(u32 *)(*(u8 **)(node + 0x118) + 0x50);
                *(u32 *)((u8 *)data_02160a6c + 0x128) += *(u32 *)(*(u8 **)(node + 0x118) + 0x80);
            }
            ((void (*)(void *))func_020d2f44)(node);
            func_020c3020(node);
        }
        node = next;
    }
}

