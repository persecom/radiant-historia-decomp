/* 27 functions from 0x02110518 to 0x02111498 (main), found by ds-decomp. */
#include "common.h"

extern void func_021107cc(u8 *, s32, s32);
extern void func_02110abc(void *);
extern void func_0211111c(void *, s32, s32);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9c10(void *, u16);
typedef struct { u16 v[20]; } Unk40;
extern const Unk40 data_02144bd8;
extern const u16 data_02144c1c[6];
extern u32 func_020c73c0(void *);
extern void func_020c9b64(void *);
extern void func_0211379c(u32, u16 *, u16 *);

extern void func_0210c5dc(void *);
extern void func_0211106c(void *);
void func_021106cc(u8 *arg0, u8 *arg1) {
    typedef struct { u16 a, b, c, d; } S;
    S *src = (S *)arg1;
    u8 *sub = arg0 + 0x30;
    u16 i;
    for (i = 0; i < 5; i++) {
        *(S *)(sub + i * 8 + 0x1e) = src[i];
    }
}

void func_0211071c(u8 *arg0, u16 *arg1) {
    u8 *sub = arg0 + 0x30;
    u16 i;
    for (i = 0; i < 5; i++) {
        *(u16 *)(sub + i * 2 + 0xa) = arg1[i];
    }
    func_02110abc(arg0);
}

void func_02110754(u8 *arg0, u16 *arg1) {
    u8 *sub = arg0 + 0x30;
    u16 i;
    for (i = 0; i < 5; i++) {
        *(u16 *)(sub + i * 2 + 0x14) = arg1[i];
    }
    func_02110abc(arg0);
}

void func_0211078c(u8 *arg0) {
    Unk40 buf = data_02144bd8;
    func_021106cc(arg0, (u8 *)&buf);
}

void func_021107cc(u8 *arg0, s32 arg1, s32 arg2) {
    u16 i;
    s16 x;
    s16 y;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        x = arg1 + (*(s16 *)(obj + 0x38) - *(s16 *)(arg0 + 0x34));
        y = arg2 + (*(s16 *)(obj + 0x3a) - *(s16 *)(arg0 + 0x36));
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
    }
    *(s16 *)(arg0 + 0x34) = arg1;
    *(s16 *)(arg0 + 0x36) = arg2;
}

void func_02110868(u8 *arg0, s32 arg1) {
    func_021107cc(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_02110878(u8 *arg0, s32 arg1) {
    func_021107cc(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

void func_0211088c(u8 *arg0, u8 arg1) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        s32 delta = obj[0x3c] - arg0[0x38];
        ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + delta);
    }
    arg0[0x38] = arg1;
}

void func_02110a28(u8 *arg0) {
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    u8 *obj;
    u16 i;
    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        {
            s32 flag = func_020c73d8((u16 *)obj);
            s32 on = func_020c7408() == 0 ? 1 : 0;
            flag = flag & on;
            if (flag != 0) {
                ((void (*)(u8 *, s32, s32))(*(void **)(obj + 0x24)))(obj, 1, 1);
            } else {
                ((void (*)(u8 *, s32, s32))(*(void **)(obj + 0x24)))(obj, 0, 0);
            }
        }
    }
}

void func_02110abc(void *arg0) {
    register u8 *p = (u8 *)arg0;
    register u16 i;
    register u32 count = func_020c9c34(*(void **)(p + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(p + 0x30), i);
        *(u8 **)(obj + 0x34) = p;
        func_021103c0(obj, (u8)(i == p[0x39]));
    }
}

extern s32 func_020c73d8(u16 *);
extern BOOL func_020c7408(void);
u16 func_02110b20(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), arg0[0x39]);
    return *(u16 *)(obj + 0x3e);
}

u8 func_02110b38(u16 arg0) {
    u8 i;
    u16 lo;
    u16 hi;
    for (i = 0; i < 5; i++) {
        func_0211379c(i, &hi, &lo);
        if (arg0 >= hi && arg0 < lo) {
            return i;
        }
    }
    return 5;
}

void func_0211104c(void *arg0) {
    func_0211106c(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020c9940(void *);
void func_0211106c(void *arg0) {
    if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)((u8 *)arg0 + 0x30));
        if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)((u8 *)arg0 + 0x30));
            *(void **)((u8 *)arg0 + 0x30) = NULL;
        }
        *(void **)((u8 *)arg0 + 0x30) = NULL;
    }
}

s32 func_021110a8(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 2;
    }
    func_020c9b64(*(void **)(arg0 + 0x30));
    return 0;
}

void func_021111f4(u8 *arg0, u32 arg1, u32 arg2) {
    u16 vals[6];
    u16 *dst = vals;
    u16 i;
    u8 *obj;
    vals[0] = data_02144c1c[0];
    vals[1] = data_02144c1c[1];
    vals[2] = data_02144c1c[2];
    vals[3] = data_02144c1c[3];
    vals[4] = data_02144c1c[4];
    vals[5] = data_02144c1c[5];
    for (i = 0; i < 6; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x30), dst[i]);
        if (obj != NULL) {
            ((void (*)(u8 *, u32, u32))(*(void **)(obj + 0x24)))(obj, arg1, arg2);
        }
    }
}

void func_0211128c(u8 *arg0, s32 arg1) {
    func_0211111c(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_0211129c(u8 *arg0, s32 arg1) {
    func_0211111c(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

void func_02111374(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0x48) = arg1;
}

