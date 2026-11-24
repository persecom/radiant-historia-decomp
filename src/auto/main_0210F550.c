/* 36 functions from 0x0210F550 to 0x02110518 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02162b80;
extern void *data_02155c3c;
extern void func_020c9b64(void *);
extern void func_0210c5dc(void *);
extern void *func_0210c518(u32, void *);
extern void func_02125424(void *, u32);
extern void func_021254a8(u32, u32, u32, u32);
extern void func_020c6d78(void *);
extern void func_020c992c(void);
extern void *func_0210c594(u32, void *);

extern void func_020bdf38(void);
extern void func_020a8440(void);
s32 func_020a47c8(void);
void func_0210fcd4(u32 arg0) {
    if (data_02162b80 != NULL) {
        func_0210c5dc(data_02162b80);
        data_02162b80 = NULL;
    }
    data_02162b80 = func_0210c518(arg0 << 4, data_02155c3c);
    func_02125424(data_02162b80, arg0);
}

void func_0210fd24(u32 *arg0, u32 arg1) {
    arg0[0] = arg1;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
}

void func_0210fd38(u32 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    u32 len = arg0[3];
    if (len != 0) {
        u32 off = arg0[2];
        u32 end = off + len;
        if (end == arg2 && arg1 == arg0[1] + len) {
            arg0[3] = len + arg3;
            return;
        }
        func_021254a8(arg0[0], arg0[1], off, len);
    }
    arg0[2] = arg2;
    arg0[1] = arg1;
    arg0[3] = arg3;
}

extern void *func_020c9c10(void *, u32);
extern void func_020c7090(void *);
extern u32 func_020c73b8(void *);
extern void func_020c738c(void *, u32, u32);
extern u8 *func_0210fdc4(u8 *, u32, s32);
typedef struct {
    u32 field_0;
    u32 field_4;
    u8 field_8[0x80];
    u32 field_88;
    u32 field_8c;
    u32 field_90;
} Entry_94;

typedef struct {
    u16 a;
    u16 b;
} Pair_021103c0;

extern void func_020c9940(void *);
extern Entry_94 data_02162b84[];
extern u8 data_02162b88[];
extern u8 data_02162c0c[];
extern u8 data_02162c10[];
extern s32 func_0210feb8(u32, u32, u32, u32, u32);
void func_0210fd94(u32 *arg0) {
    if (arg0[3] != 0) {
        func_021254a8(arg0[0], arg0[1], arg0[2], arg0[3]);
        arg0[1] = 0;
        arg0[2] = 0;
        arg0[3] = 0;
    }
}

u8 *func_0210fdc4(u8 *dst, u32 src, s32 size) {
    u8 *p = dst;
    const s8 *s = (const s8 *)src;
    while (size > 0) {
        *p++ = *s++;
        size--;
    }
    return dst;
}

void func_0210fde8(void) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        ((Entry_94 *)data_02162b84)[i].field_0 = 0;
        ((Entry_94 *)data_02162b84)[i].field_4 = 0;
    }
}

s32 func_0210fe1c(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    return func_0210feb8(arg0, arg0, arg1, arg2, arg3);
}

void func_0210fe40(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        if (data_02162b84[i].field_0 == 0) {
            data_02162b84[i].field_0 = 1;
            data_02162b84[i].field_4 = arg0;
            data_02162b84[i].field_88 = arg1;
            data_02162b84[i].field_8c = arg2;
            func_0210fdc4(data_02162b84[i].field_8, arg3, 0x80);
            return;
        }
    }
}

void func_021100c4(void) {
}

s32 func_021100c8(void) {
    func_020a8440();
    return func_020a47c8();
}

void func_021100d8(void) {
    func_020bdf38();
}

extern void func_0210c5dc(void *);
extern void func_021101ec(void *);
void func_021101cc(void *arg0) {
    func_021101ec(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_021101ec(void *arg0) {
    if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)((u8 *)arg0 + 0x30));
        if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)((u8 *)arg0 + 0x30));
            *(void **)((u8 *)arg0 + 0x30) = NULL;
        }
        *(void **)((u8 *)arg0 + 0x30) = NULL;
    }
}

s32 func_02110228(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

s32 func_0211023c(void *arg0) {
    volatile u32 pad = 0;
    void *p = func_020c9c10(*(void **)((u8 *)arg0 + 0x30), 0);
    s32 result = ((s32 (*)(void *))(*(void **)((u8 *)p + 0x18)))(p);
    func_020c738c(arg0, func_020c73b8(p), 2);
    return result;
}

void func_02110288(void *arg0, u32 arg1, u32 arg2) {
    volatile u16 i = 0;
    u8 *obj = func_020c9c10(*(void **)((u8 *)arg0 + 0x30), i);
    ((void (*)(u8 *, u32, u32))(*(void **)(obj + 0x24)))(obj, arg1, arg2);
}

void func_021102bc(u8 *arg0, u32 arg1, u32 arg2) {
    volatile u16 i = 0;
    s16 x;
    s16 y;
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
    x = arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(arg0 + 0x38));
    y = arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(arg0 + 0x3a));
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
    *(s16 *)(arg0 + 0x38) = arg1;
    *(s16 *)(arg0 + 0x3a) = arg2;
}

void func_02110340(u8 *arg0, u32 arg1) {
    func_021102bc(arg0, arg1, *(s16 *)(arg0 + 0x3a));
}

void func_02110350(u8 *arg0, u32 arg1) {
    func_021102bc(arg0, *(s16 *)(arg0 + 0x38), arg1);
}

void func_02110364(u8 *arg0, u32 arg1) {
    volatile u16 i = 0;
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
    ((void (*)(u8 *, u32))(*(void **)(obj + 0x1c)))(obj, (u8)(arg1 + (obj[0x43] - arg0[0x3c])));
    arg0[0x3c] = arg1;
}

void func_021103a8(void *arg0) {
    func_020c7090(func_020c9c10(*(void **)((u8 *)arg0 + 0x30), 0));
}

void func_021103c0(u8 *arg0, s32 arg1) {
    u8 *base = *(u8 **)(arg0 + 0x34) + 0x30;
    u8 *obj;
    u8 *entry;
    arg0[0x3d] = arg1;
    u16 *table = (arg1 & 0xff) ? (u16 *)(base + 0x14) : (u16 *)(base + 0xa);
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x30) = table[*(u16 *)(arg0 + 0x3e)];
    entry = base + *(u16 *)(arg0 + 0x3e) * 8;
    *(Pair_021103c0 *)(obj + 0x32) = *(Pair_021103c0 *)(entry + 0x1e);
    *(Pair_021103c0 *)(obj + 0x36) = *(Pair_021103c0 *)(entry + 0x22);
}

u32 func_02110428(u8 *arg0) {
    func_020c6d78(arg0);
    if (*(u32 *)(arg0 + 0x30) == 0) {
        *(u32 *)(arg0 + 0x30) = (u32)func_0210c594(8, data_02155c3c);
        func_020c992c();
    }
    return 0;
}

extern void func_02110484(void *);
void func_02110464(void *arg0) {
    func_02110484(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02110484(void *arg0) {
    if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)((u8 *)arg0 + 0x30));
        if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)((u8 *)arg0 + 0x30));
            *(void **)((u8 *)arg0 + 0x30) = NULL;
        }
        *(void **)((u8 *)arg0 + 0x30) = NULL;
    }
}

s32 func_021104c0(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

