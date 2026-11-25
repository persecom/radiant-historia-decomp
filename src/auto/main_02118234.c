/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 pad[0x100]; u16 entries[128][4]; u8 tail[0x40]; } UnkOamBuffer;
extern u8 data_0216e274[];
typedef struct { u32 type; u16 first, last, unk_08, affineFirst, affineLast, affineLimit; u32 unk_10, full; } OamManager_2118234;
typedef void (*OamFn)(void *, u32, u32);
extern OamFn data_02155e9c[5];
extern void func_02003770(void *, u32, u32);
extern void func_020037d4(void *, u32, u32);
extern void func_02006dc4(void *, u32);
static inline u8 *GetOamEntries(u32 index) { return ((UnkOamBuffer *)data_0216e274)[index].pad + 0x100; }
extern u32 data_02145ba4;
extern void func_02006d8c(void *,u32);
extern void func_02008568(u32,void *,u32,u32,u32);
extern void func_02008e24(u32,void *,u32);

extern void func_02118234(void *);
extern void func_02118430(void *);
void func_02118234(void *arg0) {
    u16 start,end,size,offset,count;
    u8 *dst,*oam;
    u32 type;
    OamFn fn;
    u16 i;
    OamManager_2118234 *p=arg0;
    if (p->full != 0) {
        type = p->type;
        start = p->first;
        end = p->last;
        size = (end - start + 1) * 8;
        offset = start * 8;
        oam = GetOamEntries(type);

        func_02006dc4(oam + start * 8, size);
        switch (type) {
        case 0:
            func_02003770(oam + start * 8, offset, size);
            break;
        case 1:
            func_020037d4(oam + start * 8, offset, size);
            break;
        }
        return;
    } else {
        type = p->type;
        start = p->first;
        end = p->last;
        oam = GetOamEntries(type);
        dst = oam + start * 8;
        offset = start * 8;
        start = end - start + 1;
        count = start;
        fn = data_02155e9c[type];
        for (i = 0; i < count; i++) {
            fn(dst, offset, 6);
            offset += 8;
            dst += 8;
        }
    }
    {
        s32 t = 0;
        if (p->affineLimit <= p->affineLast + 1) {
            if (p->affineFirst <= p->affineLast) {
                t = 1;
            }
        }
        if (t == 0) {
            return;
        }
    }
    {
        type = p->type;
        oam = GetOamEntries(type);
        start = p->affineFirst;
        offset = start * 32;
        dst = oam + start * 32;
        start = p->affineLast - start + 1;
        count = start;
        fn = data_02155e9c[type];
        for (i = 0; i < count; i++) {
            fn(dst + 6, offset + 6, 2);
            fn(dst + 14, offset + 14, 2);
            fn(dst + 22, offset + 22, 2);
            fn(dst + 30, offset + 30, 2);
            offset += 32;
            dst += 32;
        }
    }
}

#pragma scheduling off
void func_02118430(void *arg0) {
    u8 *p = arg0;
    if (*(u32 *)(p + 0x14)) {
        u32 size;
        u8 *dst;
        s32 valid = 0;
        u32 channel;
        if (*(u16 *)(p + 8) <= *(u16 *)(p + 6) + 1 && *(u16 *)(p + 4) <= *(u16 *)(p + 6)) {
            valid = 1;
        }
        if (!valid) {
            size = 0;
        } else {
            size = (u16)(*(u16 *)(p + 6) - *(u16 *)(p + 4) + 1) * 8;
        }
        dst = data_0216e274 + *(volatile u32 *)p * 0x540 + 0x100 + *(u16 *)(p + 4) * 8;
        func_02006d8c(dst, size);
        channel = data_02145ba4;
        if (channel > 3) {
            channel = -1;
        }
        if (channel != -1) {
            func_02008568(channel, dst, 0xc0, size, 1);
        } else {
            func_02008e24(0xc0, dst, size);
        }
    } else {
        u16 count = *(u16 *)(p + 6) - *(u16 *)(p + 4) + 1;
        u8 *dst = data_0216e274 + *(volatile u32 *)p * 0x540 + 0x100 + *(u16 *)(p + 4) * 8;
        u16 i;
        for (i = 0; i < count; i++) {
            *(u16 *)dst = 0xc0;
            dst += 8;
        }
    }
    *(u16 *)(p + 8) = *(u16 *)(p + 4);
    *(u16 *)(p + 0xe) = *(u16 *)(p + 0xa);
}
#pragma scheduling on
void func_02118570(void *arg0) {
    func_02118234(arg0);
    func_02118430(arg0);
}

u16 func_02118588(u16 *arg0, s32 arg1) {
    return arg0[arg1];
}

void func_02118594(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i] = -1;
    }
}

void func_021185b0(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1] = arg2;
}

s32 func_021185b8(s32 *arg0, s32 arg1) {
    return arg0[arg1];
}

s32 func_021185c0(s32 *arg0, s32 arg1) {
    return arg0[arg1] != -1;
}

void func_021185d4(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i + 2] = -1;
    }
}

void func_021185f4(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 8 + arg1 * 4) = arg2;
}

s32 func_02118600(u8 *arg0, s32 arg1) {
    return *(s32 *)(arg0 + 8 + arg1 * 4);
}

s32 func_0211860c(u8 *arg0, s32 arg1) {
    return *(s32 *)(arg0 + arg1 * 4 + 8) != -1;
}

extern void func_02006dc4(void *, u32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02003830(void *, u32, u32);
extern void func_02003894(void *, u32, u32);
