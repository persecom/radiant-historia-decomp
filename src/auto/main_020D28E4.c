/* 13 functions from 0x020D28E4 to 0x020D3160 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 unk[10]; } Unk20;
extern const Unk20 data_02144920;
extern u8 *data_02160260;
extern u8 *data_02160a74;
extern u8 *data_02160204;
extern void func_020a5138(void);
extern void func_020bb508(void *);
extern void func_020bb528(void *);
extern void func_020d3160(int,int,int,int);
extern void func_020c0454(void *,int);
extern void func_020c0588(void);
extern void func_020a3bbc(int);
extern void func_021098ac(void *);

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
extern void func_020d2f44();
extern const s16 data_0213a394[];
extern void func_021099f8(void *);
extern s16 func_020ddcb0(void *, void *);
extern void func_020ddd8c(void *);
extern void func_02026578(void *);

void func_020d2ac4(Unk3 *);
void func_020d28e4(void) {
UnkC *p=data_02160244;
Unk20 buf;
func_020a5138();
func_020bb508(*(void **)(data_02160260+0x4c));
func_020bb528(*(void **)(data_02160260+0x4c));
func_020d2ac4((Unk3 *)p->ptrFc);
func_020d2ac4((Unk3 *)p->ptr100);
func_020d3160(3,0,0,0);
if(p && !(*(u32 *)(data_02160a74+0x58)&0x4000) && !*(u16 *)(data_02160a74+0x1e0) && !data_02160a74[0x1e2]) {
void *q=*(void **)((u8 *)p+0xec);
if(q) func_020c0454(q,1);
}
func_020c0588();
if(data_02160204[0x121]&1) {
buf=data_02144920;
if(!(data_02160204[0x121]&2)) func_020a3bbc(0x67); else func_020a3bbc(0x68);
buf.unk[1]=0; buf.unk[2]=0; buf.unk[3]=40; buf.unk[4]=14;
buf.unk[7]=700; buf.unk[8]=40; buf.unk[9]=14; buf.unk[5]=216; buf.unk[6]=4;
func_021098ac(&buf);
data_02160204[0x121]=0;
}
}

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

void func_020d2e98(void) {
    u8 *node = *(u8 **)((u8 *)data_02160a6c + 0x70);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0) {
            u8 *p = *(u8 **)(node + 0x128);
            if (p != NULL) {
                *(u8 *)(p + 0x50) = 0;
                *(u32 *)(p + 0x18) &= ~1;
                *(u16 *)(p + 0x10) = 0;
                *(u16 *)(p + 0x1c) = 0;
                *(u16 *)(p + 0x28) = 0;
                *(u16 *)(p + 0x1e) = 0;
                *(u32 *)(p + 0x30) = 0;
                *(u32 *)(p + 0x34) = 0;
                *(u32 *)(p + 0x38) = 0;
                *(u32 *)(p + 0x3c) = 0;
                *(u16 *)(p + 0xaa) = 0;
                *(u16 *)(p + 0x40) = 0;
                *(u8 *)(p + 0x20) = 0;
                *(u32 *)(p + 0x44) = 0;
                *(u32 *)(p + 0x48) = 0;
                *(u32 *)(p + 0x4c) = 0;
            }
            func_02026578(*(void **)(node + 0x124));
            *(u32 *)(*(u8 **)(node + 0x118) + 0x8c) &= ~0x800;
        }
        node = *(u8 **)(node + 0x13c);
    }
}

extern u8 *data_02160080;
extern void func_021168f8(void *, void *);
extern void func_0202fad8(void *);
extern void func_020d4184(void *);
extern void func_02064c18(void *);
extern void func_02026c00(void *);
extern void func_02026564(void *);
extern void func_02026e64(void *);
extern void func_02093224(void *);
extern void func_020c0940(void *);
extern void func_020de17c(void *);
extern void func_020bffb8(void *);
extern void func_02067708(void *);
extern void func_020dd51c(void *);
void func_020d2f44(u8 *arg0) {
    if ((*(u32 *)(arg0 + 0x80) & 1) != 0) {
        if (**(u8 **)(arg0 + 0x118) == 0) {
            func_021168f8((u8 *)data_02160a6c + 0xac, arg0);
        }
        if (**(u8 **)(arg0 + 0x118) == 1) {
            func_021168f8((u8 *)data_02160a6c + 0xb8, arg0);
        }
    }
    if (*(void **)(arg0 + 0x118) != NULL) {
        func_0202fad8(*(void **)(arg0 + 0x118));
        *(void **)(arg0 + 0x118) = NULL;
    }
    if (*(void **)(arg0 + 0x128) != NULL) {
        func_020d4184(*(void **)(arg0 + 0x128));
        *(void **)(arg0 + 0x128) = NULL;
    }
    if (*(void **)(arg0 + 0x11c) != NULL) {
        func_02064c18(*(void **)(arg0 + 0x11c));
        *(void **)(arg0 + 0x11c) = NULL;
    }
    if (*(void **)(arg0 + 0x120) != NULL) {
        func_02026c00(*(void **)(arg0 + 0x120));
        *(void **)(arg0 + 0x120) = NULL;
    }
    if (*(void **)(arg0 + 0x124) != NULL) {
        func_02026564(*(void **)(arg0 + 0x124));
        *(void **)(arg0 + 0x124) = NULL;
    }
    if (*(void **)(arg0 + 0x12c) != NULL) {
        func_02026e64(*(void **)(arg0 + 0x12c));
        *(void **)(arg0 + 0x12c) = NULL;
    }
    func_02093224(arg0);
    if (data_02160080 != NULL) {
        if (*(u8 **)(data_02160080 + 0x38) == arg0) {
            *(void **)(data_02160080 + 0x38) = NULL;
        }
        if (*(u8 **)(data_02160080 + 0x3c) == arg0) {
            *(void **)(data_02160080 + 0x3c) = NULL;
        }
    }
    if (*(void **)(arg0 + 0x19c) != NULL) {
        func_020c0940(*(void **)(arg0 + 0x19c));
        *(void **)(arg0 + 0x19c) = NULL;
    }
    if (*(void **)(arg0 + 0x1a4) != NULL) {
        func_020de17c(*(void **)(arg0 + 0x1a4));
        *(void **)(arg0 + 0x1a4) = NULL;
    }
    func_020bffb8(arg0);
    func_02067708(arg0);
    func_020dd51c(arg0);
}

void func_020d30a0(void) {
    while (data_02160a6c->unk64 != 0) {
        func_020d2f44((u8 *)data_02160a6c->unk64);
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

