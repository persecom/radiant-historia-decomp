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
extern const s16 data_0213a394[];
extern u32 data_0216263c[3];

static inline u16 Rand16_020d9a08(u32 *ctx, u16 max) {
    ctx[0] = ctx[1] * ctx[0] + ctx[2];
    if (max == 0) {
        return (u16)(ctx[0] >> 16);
    } else {
        return (u16)(((ctx[0] >> 16) * max) >> 16);
    }
}

typedef struct {
    s32 unk0;
    s32 unk4;
} Unk2Words;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Unk3Words;

extern u32 data_02155c3c;
extern u8 *func_0210c594(s32, u32);

extern u32 data_0216263c[3];
extern void func_020d9d8c(u32);
extern void func_020d9da8(u32);
extern void func_020d9ea8(u32, s32);
extern void func_020d914c(s32);

void func_020d9cc0(void *arg0) {
    s32 *p = (s32 *)arg0;
    if (func_020e27ec() != 0) {
        p[1] -= 0x5000;
        if ((p[1] >> 12) < 0x30) {
            p[1] = 0x30000;
        }
    } else {
        p[1] += 0x5000;
        if ((p[1] >> 12) > 0x41) {
            p[1] = 0x41000;
        }
    }
}

void func_020d9d10(u32 arg0, s16 arg1, s16 arg2) {
    u8 *p = data_02160258;
    *(s16 *)(p + 0x78) = 0;
    switch (arg0) {
        case 0:
            *(s16 *)(p + 0x76) = arg1;
            break;
        case 1:
            *(s16 *)(p + 0x76) += arg1;
            if (*(s16 *)(p + 0x76) > 0x1e) {
                *(s16 *)(p + 0x76) = 0x1e;
            }
            break;
        case 2:
            *(s16 *)(p + 0x76) = 0;
            break;
        case 3:
            *(s16 *)(p + 0x76) = -1;
            *(s16 *)(p + 0x78) = arg2;
            break;
    }
    if (arg2 == 0) {
        *(s16 *)(p + 0x78) = *(s16 *)(p + 0x76);
    }
}

void func_020d9d8c(u32 arg0) {
    *(u32 *)(data_02160258 + 0x7c) |= arg0;
}

void func_020d9da8(u32 arg0) {
    *(u32 *)(data_02160258 + 0x7c) &= ~arg0;
}

void func_020d9dc8(u32 arg0, u32 arg1, u16 arg2, u16 arg3) {
    u8 *p = data_02160258;
    *(u32 *)(p + 0x4c) = arg0;
    *(u32 *)(p + 0x80) = arg1;
    *(u16 *)(p + 0x50) = arg2;
    *(u16 *)(p + 0x74) = arg3;
    *(u32 *)(p + 0x58) = 0;
}

void *func_020d9df4(void) {
    return *(void **)(data_02160258 + 0x80);
}

extern s32 func_020e27ec(void);
void func_020d9e08(u32 arg0) {
    *(u32 *)(data_02160258 + 0x80) = arg0;
}

void func_020d9e1c(u32 arg0) {
    u8 *p = data_02160258;
    if (*(u32 *)(p + 0x58) == 0) {
        *(u32 *)(p + 0x58) = arg0;
    }
}

u16 func_020d9e38(void) {
    return data_02151fc8;
}
