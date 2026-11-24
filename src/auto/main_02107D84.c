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
extern s16 data_0213a394[];

static inline s16 FX_SinIdx(s32 idx) {
    return data_0213a394[(idx >> 4) * 2];
}

static inline s16 FX_CosIdx(s32 idx) {
    return data_0213a394[(idx >> 4) * 2 + 1];
}

static inline s32 FX_Mul12(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

extern void func_02107d84(u32, u32, u32, u32);
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

void func_02107d84(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    u8 *p = (u8 *)arg0;
    s32 i = (s32)arg2 >> 4;
    s32 j = (s32)arg3 >> 4;
    s32 sinA = data_0213a394[i * 2 + 1];
    s32 cosA = data_0213a394[i * 2];
    s32 cosB = data_0213a394[j * 2];
    s32 sinB = data_0213a394[j * 2 + 1];
    s32 a = (s32)(((s64)sinA * (s32)arg1 + 0x800) >> 12);
    s32 x = (s32)(((s64)a * cosB + 0x800) >> 12);
    s32 y = (s32)(((s64)cosA * (s32)arg1 + 0x800) >> 12);
    s32 z = (s32)(((s64)a * sinB + 0x800) >> 12);
    *(s32 *)(p + 0x14) = *(s32 *)(p + 0x20) - x;
    *(s32 *)(p + 0x18) = *(s32 *)(p + 0x24) + y;
    *(s32 *)(p + 0x1c) = *(s32 *)(p + 0x28) + z;
    *(u32 *)(p + 0x90) = arg2;
    *(u32 *)(p + 0x94) = arg3;
    func_02108240();
}
