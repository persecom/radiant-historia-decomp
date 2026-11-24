/* 16 functions from 0x021221E4 to 0x021231B0 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155ee8;
extern void *data_02155ed8;
extern u16 *func_02120c74(u8 *);
extern void *func_02121090(void *, u16, u16);
extern u8 func_02121040(void *, u8);
extern void func_02122fa0(void *, u8, u8 *);
extern u8 func_02121068(void *);
void func_02008df0(u8, void *, u32);
s32 func_02120e30(void *, void *);
void func_021228d0(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 *r8;

    if (arg2 != NULL && *(u32 *)(arg2 + 8) != 0) {
        r8 = arg2 + *(u32 *)(arg2 + 8);
    } else {
        r8 = NULL;
    }

    *(void **)(arg0 + 0xc) = data_02155ee8;
    arg0[0x19] = arg2[0x18];
    func_02008df0(0, arg0 + 0x1a, (u32)arg0[0x19] * 2);

    for (i = 0; i < arg1[9]; i++) {
        void *name;
        s32 idx;
        if ((arg1 + 8) != NULL && i < *(u8 *)(arg1 + 9)) {
            u8 *p = (arg1 + 8) + *(u16 *)((arg1 + 8) + 6);
            name = p + *(u16 *)(p + 2) + i * 0x10;
        } else {
            name = NULL;
        }
        if (r8 == NULL) {
            idx = -1;
        } else {
            idx = func_02120e30(r8 + 4, name);
        }
        if (idx >= 0) {
            *(u16 *)(arg0 + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}

extern void *data_02155ee0;
void func_02122da4(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 *r8;

    if (arg2 != NULL && *(u32 *)(arg2 + 8) != 0) {
        r8 = arg2 + *(u32 *)(arg2 + 8);
    } else {
        r8 = NULL;
    }

    *(void **)(arg0 + 0xc) = data_02155ee0;
    arg0[0x19] = arg2[0x18];
    func_02008df0(0, arg0 + 0x1a, (u32)arg0[0x19] * 2);

    for (i = 0; i < arg1[9]; i++) {
        void *name;
        s32 idx;
        if ((arg1 + 8) != NULL && i < *(u8 *)(arg1 + 9)) {
            u8 *p = (arg1 + 8) + *(u16 *)((arg1 + 8) + 6);
            name = p + *(u16 *)(p + 2) + i * 0x10;
        } else {
            name = NULL;
        }
        if (r8 == NULL) {
            idx = -1;
        } else {
            idx = func_02120e30(r8 + 4, name);
        }
        if (idx >= 0) {
            *(u16 *)(arg0 + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}

extern void func_02122ca8(u8 *arg0, u16 arg1, s32 arg2, u32 *arg3);
void func_02122e70(u32 *arg0, u8 *arg1, u32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;

    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    func_02122ca8(ptr, (u16)arg2, frame >> 12, arg0);

    arg0[4] = (arg0[4] & ~0xc0000000u) | 0x40000000u;
    arg0[0] |= 0x8;
}

extern void *data_02155ee4;
void func_02122ed0(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 *r8;

    if (arg2 != NULL && *(u32 *)(arg2 + 8) != 0) {
        r8 = arg2 + *(u32 *)(arg2 + 8);
    } else {
        r8 = NULL;
    }

    *(void **)(arg0 + 0xc) = data_02155ee4;
    arg0[0x19] = arg2[0x18];
    *(void **)(arg0 + 8) = arg1;
    func_02008df0(0, arg0 + 0x1a, (u32)arg0[0x19] * 2);

    for (i = 0; i < arg1[0xd]; i++) {
        void *name;
        s32 idx;
        if ((arg1 + 0xc) != NULL && i < *(u8 *)(arg1 + 0xd)) {
            u8 *p = (arg1 + 0xc) + *(u16 *)((arg1 + 0xc) + 6);
            name = p + *(u16 *)(p + 2) + i * 0x10;
        } else {
            name = NULL;
        }
        if (r8 == NULL) {
            idx = -1;
        } else {
            idx = func_02120e30(r8 + 4, name);
        }
        if (idx >= 0) {
            *(u16 *)(arg0 + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}

void func_02123074(u8 *arg0, void *arg1, u32 *arg2) {
    u32 off = (arg0 != NULL) ? *(u16 *)(arg0 + 0x34) : 0;
    u32 result;
    u16 *p;
    u32 v, w;
    if (off == 0) {
        result = 0;
    } else {
        p = func_02120c74(arg0 + off);
        v = p[0];
        w = (u16)(((u16)*(u32 *)(arg0 + 0x2c)) & ~0xe0000000u);
        if ((p[1] & 1) == 0) {
            v = (v << 15) >> 16;
            w = (w << 15) >> 16;
        }
        result = v + w;
    }
    arg2[5] = result;
}

void func_021230d8(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    u32 frame = *(u32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;
    u8 *r;
    if ((s32)frame >= limit) {
        frame = limit - 1;
    } else if ((s32)frame < 0) {
        frame = 0;
    }
    r = func_02121090(ptr, (u16)arg2, (u16)(frame << 4));
    func_02122fa0(*(void **)(arg1 + 0x14), func_02121040(ptr, *(u8 *)(r + 2)), arg0);
    if (*(u8 *)(r + 3) != 0xff) {
        func_02123074(*(void **)(arg1 + 0x14), func_02121068(ptr), arg0);
    }
}

void func_02123168(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 count = arg2[0x17];
    void *d = data_02155ed8;
    u32 i = 0;
    *(void **)(arg0 + 0xc) = d;
    arg0[0x19] = count;
    *(void **)(arg0 + 8) = arg1;
    for (i = 0; i < arg0[0x19]; i++) {
        *(u16 *)(arg0 + 0x1a + i * 2) = (u16)(i | 0x100);
    }
}

