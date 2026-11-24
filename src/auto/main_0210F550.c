/* 36 functions from 0x0210F550 to 0x02110518 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02162b80;
extern void *data_02155c3c;
extern void func_020c9b64(void *);
extern void func_0210c5dc(void *);
extern void *func_0210c518(u32, void *);
extern void func_02125424(void *, u32);
extern void func_021254a8(u32, u32, u32, u32);

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

extern void func_020c9940(void *);
extern u8 data_02162b84[];
extern s32 func_0210feb8(u32, u32, u32, u32, u32);
void func_0210fd94(u32 *arg0) {
    if (arg0[3] != 0) {
        func_021254a8(arg0[0], arg0[1], arg0[2], arg0[3]);
        arg0[1] = 0;
        arg0[2] = 0;
        arg0[3] = 0;
    }
}

void func_0210fde8(void) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        *(u32 *)(data_02162b84 + i * 0x94) = 0;
        *(u32 *)(data_02162b84 + i * 0x94 + 4) = 0;
    }
}

s32 func_0210fe1c(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    return func_0210feb8(arg0, arg0, arg1, arg2, arg3);
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

