/* 22 functions from 0x020D8E5C to 0x020D9E48 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02151fc8;
extern u16 data_02151fca;
extern u32 data_02151fcc;
extern u32 *data_02155984;
extern u8 *data_02160258;
extern void func_020f40a4(void);
extern void func_020f4144(void);
extern void func_0210c5dc(void *);
extern void func_020d9018(void);
extern void func_020d9cc0(void *);
extern void func_020f4668(void *);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Unk3Words;

void func_020d8e5c(s32 arg0) {
    if (arg0 == 0) {
        func_020f40a4();
    } else if (arg0 == 1) {
        func_020f4144();
    }
}

void func_020d8f50(void) {
    u8 **p = &data_02160258;
    if (*p != NULL) {
        func_0210c5dc(*p);
        *p = NULL;
    }
}

void func_020d8f78(void) {
    data_02151fc8 = 0x8000;
    data_02151fca = 0xccc;
    *(u16 *)(data_02160258 + 0x90) = 0x300;
    *(u16 *)(data_02160258 + 0x8e) = 0x2c0;
    *(u16 *)(data_02160258 + 0x92) = 0x100;
    *(u16 *)(data_02160258 + 0x94) = 0x80;
    data_02151fcc = *(u16 *)(data_02160258 + 0x90) << 12;
    data_02155984[0] = 0x165;
    data_02155984[1] = 0xff0;
    func_020d9018();
}

void func_020d9018(void) {
    *(u32 *)(data_02160258 + 0xc) = 0x200000;
    *(u32 *)(data_02160258 + 0x10) = 0x30000;
    *(u32 *)(data_02160258 + 0x14) = 0x200000;
    func_020d9cc0(data_02160258 + 0xc);
    func_020f4668(data_02160258 + 0xc);
}

void func_020d9058(Unk3Words *arg0) {
    s32 a = arg0->unk0;
    s32 b = arg0->unk4;
    s32 c = arg0->unk8;
    u8 *p = data_02160258;
    *(s32 *)(p + 0xc) = a;
    *(s32 *)(p + 0x10) = b;
    *(s32 *)(p + 0x14) = c;
}

void func_020d907c(u32 arg0) {
    *(u32 *)(data_02160258 + 0x54) = arg0;
}

void func_020d9090(void) {
    u8 *q = data_02160258;
    Unk3Words *p = *(Unk3Words **)(q + 0x54);
    if (p != NULL) {
        s32 a = p->unk0;
        s32 b = p->unk4;
        s32 c = p->unk8;
        *(s32 *)(q + 0xc) = a;
        *(s32 *)(q + 0x10) = b;
        *(s32 *)(q + 0x14) = c;
    }
}

s32 func_020d90bc(s32 arg0) {
    u8 *p = data_02160258;
    u8 *q = *(u8 **)(p + 0x54);
    s32 dx = *(s32 *)q - *(s32 *)p;
    s32 dz = *(s32 *)(q + 8) - *(s32 *)(p + 8);
    if (arg0 == 0) {
        if (dx < 0) dx = -dx;
        if (dx < 0xa000) {
            if (dz < 0) dz = -dz;
            if (dz < 0xa000) {
                return 1;
            }
        }
    } else if (arg0 == 1) {
        if (dx < 0) dx = -dx;
        if (dx < 0x1000) {
            if (dz < 0) dz = -dz;
            if (dz < 0x1000) {
                return 1;
            }
        }
    }
    return 0;
}

void func_020d914c(s32 arg0) {
    Unk3Words v;
    switch (arg0) {
        case 0:
            v.unk0 = 0x260000;
            v.unk4 = 0x30000;
            v.unk8 = 0x1e0000;
            func_020d9058(&v);
            break;
        case 1:
            v.unk0 = 0x1f0000;
            v.unk4 = 0x30000;
            v.unk8 = 0x1e0000;
            func_020d9058(&v);
            break;
    }
}

void *func_020d9df4(void) {
    return *(void **)(data_02160258 + 0x80);
}

extern s32 func_020e27ec(void);
void func_020d9e08(u32 arg0) {
    *(u32 *)(data_02160258 + 0x80) = arg0;
}

u16 func_020d9e38(void) {
    return data_02151fc8;
}
