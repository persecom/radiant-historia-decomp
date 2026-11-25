/* 38 functions from 0x021078D0 to 0x021088CC (main), found by ds-decomp. */
#include "common.h"

extern void func_021190bc(void *, void *);
extern void func_021190d4(void *, void *);
extern s32 func_021083d8(void *, u32, u32, u32, u32);
extern void *func_02117630(void *, s32);
extern void *func_0210c518(u32, u32);
extern void func_02008e68(s32, void *, u32);
extern void func_021086f8(void);
extern void func_02119000(void *, void *, void *);
extern void func_02108680(void *, s32, s32);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_0210c5dc(void *);
extern u32 data_02162860;
extern const s16 data_0213a394[];

static inline s16 FX_SinIdx(s32 idx) {
    return data_0213a394[(idx >> 4) * 2];
}

static inline s16 FX_CosIdx(s32 idx) {
    return data_0213a394[(idx >> 4) * 2 + 1];
}

static inline s32 FX_Mul12(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} VecFx32;

extern u32 data_0216263c[3];

static inline u16 rand_range_02107e4c(u16 max) {
    u32 x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    data_0216263c[0] = x;
    if (max == 0) {
        return (u16)(x >> 16);
    }
    return (u16)(((x >> 16) * max) >> 16);
}

extern void func_02107d84(u32, s32, s32, s32);
extern void func_02107e4c(void *);
extern void func_02002128(void *, void *, void *);
extern void func_02002274(void *, void *);
extern u32 data_02155984;
extern void func_02008f74(void *, s32, u32);
extern void func_02107cf4(void);
extern u8 data_0215599c[];
extern u8 data_02155988[];
extern u8 data_0216242c[];
extern u8 data_02162360[];
extern void func_0210dae0(void *);
extern void func_0210db40(void *);

extern void func_021254a8(void);
extern u8 data_02161088[28];
extern void func_02118178(void *, s32);
extern u8 data_021610a4[28];
extern void func_0211809c(void *, s32, s32);
extern void func_02119d48(void *);
extern void func_02119c80(void *);
extern void func_02119d38(void *, void *);
extern void func_02107860(void);

void func_02107d84(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
 u8 *p=(u8 *)arg0;
 s32 i=arg2>>4,j=arg3>>4;
 s32 sinA=data_0213a394[i*2+1], cosA=data_0213a394[i*2];
 s32 cosB=data_0213a394[j*2],sinB=data_0213a394[j*2+1];
 s32 a=(s32)(((s64)sinA*arg1+0x800)>>12);
 u32 x=(s32)(((s64)a*cosB+0x800)>>12);
 u32 y=(s32)(((s64)cosA*arg1+0x800)>>12);
 u32 z=(s32)(((s64)a*sinB+0x800)>>12);
 x=*(s32 *)(p+0x20)-x; y=*(s32 *)(p+0x24)+y; z=*(s32 *)(p+0x28)+z;
 *(s32 *)(p+0x14)=x; *(s32 *)(p+0x18)=y; *(s32 *)(p+0x1c)=z;
 *(s32 *)(p+0x90)=arg2; *(s32 *)(p+0x94)=arg3;
 func_02108240();
}

extern u32 data_02162834[];
extern u8 data_02170204[];
extern u32 data_021701fc[];
extern VecFx32 data_0217043c;
extern VecFx32 data_02170448;
extern u8 data_02170248[];
extern VecFx32 data_02170454;
extern void func_0210c398(void *);
extern void func_021205ec(s32, void *, s32);
extern void func_02001c50(s32, s32, s32, s32, s32, s32, void *);
extern void func_02108258(void *);
extern void func_02001720(VecFx32 *, VecFx32 *, VecFx32 *, void *);
extern void func_0211d7a4(void);
extern void func_02001134(void *, void *);
void func_02107e4c(void *arg0)
{
    u8 *p = (u8 *)arg0;
    VecFx32 pos = *(VecFx32 *)(p + 0x14);
    VecFx32 target = *(VecFx32 *)(p + 0x20);
    s32 mode;
    s32 mode2;

    if (*(s32 *)(p + 0x9c) != 0 || *(s32 *)(p + 0xa4) != 0) {
        s32 offset;
        *(u16 *)(p + 0xa8) += (u16)(*(s32 *)(p + 0xac) << data_02162834[0]);
        func_0210c398(p + 0x98);
        offset = FX_Mul12(FX_CosIdx(*(u16 *)(p + 0xa8)), *(s32 *)(p + 0x98));
        *(s32 *)(p + 0xb0) = offset;
        pos.y += offset;
        target.y += offset;
        if (*(s32 *)(p + 0x9c) == 0 && *(s32 *)(p + 0xa4) == 0) {
            *(u16 *)(p + 0xa8) = 0;
        }
    } else {
        *(s32 *)(p + 0xb0) = 0;
    }

    if (*(u8 *)(p + 0xc9) != 0) {
        s32 shake;
        shake = (*(u8 *)(p + 0xc8) != 0) ? ((s32)rand_range_02107e4c((u16)(*(u8 *)(p + 0xc8) * 2)) - *(u8 *)(p + 0xc8)) : 0;
        pos.x += shake << 12;
        shake = (*(u8 *)(p + 0xc8) != 0) ? ((s32)rand_range_02107e4c((u16)(*(u8 *)(p + 0xc8) * 2)) - *(u8 *)(p + 0xc8)) : 0;
        pos.y += shake << 12;
        shake = (*(u8 *)(p + 0xc8) != 0) ? ((s32)rand_range_02107e4c((u16)(*(u8 *)(p + 0xc8) * 2)) - *(u8 *)(p + 0xc8)) : 0;
        target.x += shake << 12;
        shake = (*(u8 *)(p + 0xc8) != 0) ? ((s32)rand_range_02107e4c((u16)(*(u8 *)(p + 0xc8) * 2)) - *(u8 *)(p + 0xc8)) : 0;
        target.y += shake << 12;
        (*(u8 *)(p + 0xc9))--;
    }

    mode = 0;
    func_021205ec(0x10, &mode, 1);
    func_021205ec(0x15, NULL, 0);
    func_02001c50(*(s32 *)(p + 0), *(s32 *)(p + 4), *(s32 *)(p + 8), *(s32 *)(p + 0xc), *(s32 *)(p + 0x10), 0x1000, data_02170204);
    data_021701fc[0x3f] &= ~0x50;
    mode2 = 0;
    func_021205ec(0x13, &mode2, 1);
    func_02108258(p);
    func_0210c398(p + 0x38);
    if (*(s32 *)(p + 0x38) != 0) {
        s32 dx = FX_Mul12(*(s32 *)(p + 0x5c), *(s32 *)(p + 0x38));
        s32 dz = FX_Mul12(-(*(s32 *)(p + 0x54)), *(s32 *)(p + 0x38));
        pos.x += dx;
        pos.z += dz;
        target.x += dx;
        target.z += dz;
    }

    data_0217043c = pos;
    data_02170448 = *(VecFx32 *)(p + 0x2c);
    data_02170454 = target;
    func_02001720(&pos, (VecFx32 *)(p + 0x2c), &target, data_02170248);
    data_021701fc[0x3f] &= ~0xe8;
    func_0211d7a4();
    func_02001134(data_02170248, p + 0x60);
}

