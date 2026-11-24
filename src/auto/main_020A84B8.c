/* 19 functions from 0x020A84B8 to 0x020A94B8 (main), found by ds-decomp. */
#include "common.h"
void func_020a87b0(void *arg0);
extern void func_0210fd24();
extern void func_0210fd38();
extern void func_0210fd94();


extern void func_0210c5dc(void *);
extern void func_0210dba0(void *);
extern void (*data_02156154)(void *);
extern u32 data_02160148[];
u32 func_020a8828(u32 arg0);
extern u32 data_02155c3c;
extern u32 (*data_02156150)(s32, s32, s32);
void *func_0210c594(s32, u32);
void func_02008e68(s32, void *, u32);
void func_020a8ba4(void);
void func_020a8a50();
void func_020a899c(void *);
void func_020a8750(void *);
void func_020a9058(void);
void func_0210db70(void *);
void *func_020a84b8(s32 arg0, s32 arg1) {
    s32 w = 8 << arg0;
    s32 h = 8 << arg1;
    u8 *p = (u8 *)func_0210c594(0x54, data_02155c3c);
    u32 texKey;
    u32 rowBytes;
    u32 *buf;

    *(s32 *)(p + 0x14) = (w * h) >> 2;
    *(void **)(p + 0x10) = func_0210c594(*(s32 *)(p + 0x14), 0x10);
    texKey = data_02156150(*(s32 *)(p + 0x14), 0, 0);
    *(u32 *)(p + 0x34) = texKey;
    *(u32 *)(p + 0x38) = ((u16)texKey & ~0xE0000000) | 0x48000000 | (arg0 << 20) | (arg1 << 23) | 0x20000000;
    *(u32 *)(p + 0x3c) = (u16)data_02160148[0] & ~0xE0000000;
    *(s32 *)(p + 0x40) = 1;
    *(s32 *)(p + 0x18) = w;
    *(s32 *)(p + 0x1c) = h;
    *(void (**)(void))(p + 0x0) = func_020a8ba4;
    *(void (**)(void))(p + 0x4) = func_020a8a50;
    *(void (**)(void *))(p + 0x8) = func_020a899c;
    *(void (**)(void *))(p + 0xc) = func_020a8750;
    rowBytes = (((u32)(h + 0x1f)) >> 5) << 2;
    buf = (u32 *)func_0210c594((s32)(rowBytes + 8), data_02155c3c);
    buf[0] = (u32)h;
    buf[1] = rowBytes;
    *(u32 **)(p + 0x50) = buf;
    func_02008e68(-1, (u8 *)*(void **)(p + 0x50) + 8, *(u32 *)((u8 *)*(void **)(p + 0x50) + 4));
    func_020a899c(p);
    *(void (**)(void))(p + 0x20) = func_020a9058;
    *(s32 *)(p + 0x24) = 0x3ec;
    *(void **)(p + 0x28) = p;
    func_0210db70(p + 0x20);
    return p;
}

void func_0210dbd0(void *);
void *func_020a8604(s32 arg0, s32 arg1) {
    s32 w = 8 << arg0;
    s32 h = 8 << arg1;
    u8 *p = (u8 *)func_0210c594(0x54, data_02155c3c);
    u32 texKey;
    u32 rowBytes;
    u32 *buf;

    *(s32 *)(p + 0x14) = (w * h) >> 2;
    *(void **)(p + 0x10) = func_0210c594(*(s32 *)(p + 0x14), 0x10);
    texKey = data_02156150(*(s32 *)(p + 0x14), 0, 0);
    *(u32 *)(p + 0x34) = texKey;
    *(u32 *)(p + 0x38) = ((u16)texKey & ~0xE0000000) | 0x48000000 | (arg0 << 20) | (arg1 << 23) | 0x20000000;
    *(u32 *)(p + 0x3c) = (u16)data_02160148[0] & ~0xE0000000;
    *(s32 *)(p + 0x40) = 1;
    *(s32 *)(p + 0x18) = w;
    *(s32 *)(p + 0x1c) = h;
    *(void (**)(void))(p + 0x0) = func_020a8ba4;
    *(void (**)(void))(p + 0x4) = func_020a8a50;
    *(void (**)(void *))(p + 0x8) = func_020a899c;
    *(void (**)(void *))(p + 0xc) = func_020a87b0;
    rowBytes = (((u32)(h + 0x1f)) >> 5) << 2;
    buf = (u32 *)func_0210c594((s32)(rowBytes + 8), data_02155c3c);
    buf[0] = (u32)h;
    buf[1] = rowBytes;
    *(u32 **)(p + 0x50) = buf;
    func_02008e68(-1, (u8 *)*(void **)(p + 0x50) + 8, *(u32 *)((u8 *)*(void **)(p + 0x50) + 4));
    func_020a899c(p);
    *(void (**)(void))(p + 0x20) = func_020a9058;
    *(s32 *)(p + 0x24) = 0x3ec;
    *(void **)(p + 0x28) = p;
    func_0210dbd0(p + 0x20);
    return p;
}

void func_020a8750(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x50) != NULL) {
        func_0210c5dc(*(void **)(p + 0x50));
    }
    func_0210dba0(p + 0x20);
    data_02156154(*(void **)(p + 0x34));
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

extern void func_0210dbe8(void *);
void func_020a87b0(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x50) != NULL) {
        func_0210c5dc(*(void **)(p + 0x50));
    }
    func_0210dbe8(p + 0x20);
    data_02156154(*(void **)(p + 0x34));
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_020a8810(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 0x3C) = func_020a8828(arg1);
}

u32 func_020a8828(u32 arg0) {
    return (u16)data_02160148[arg0] & ~0xE0000000;
}

void func_020a8958(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x38) != NULL) {
        func_0210c5dc(*(void **)(p + 0x38));
    }
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_020a8a50(void *arg0) {
    u8 *p = arg0;
    func_02008e68(0, *(void **)(p + 0x10), *(u32 *)(p + 0x14));
    func_02008e68(-1, (u8 *)*(void **)(p + 0x50) + 8, *(u32 *)((u8 *)*(void **)(p + 0x50) + 4));
}

void func_020a8a84(void *arg0) {
    u8 *p = arg0;
    func_02008e68(0, *(void **)(p + 0x10), *(u32 *)(p + 0x14));
    func_02008e68(-1, (u8 *)*(void **)(p + 0x38) + 8, *(u32 *)((u8 *)*(void **)(p + 0x38) + 4));
}

extern void func_0210fd24(u32 *, u32);
extern void func_0210fd38(u32 *, u32, u32, u32);
extern void func_0210fd94(u32 *);
extern void func_020a9068(u32);
void func_020a9058(void) {
    func_020a9068(0x1f);
}

