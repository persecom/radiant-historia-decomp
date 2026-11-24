/* 27 functions from 0x02110518 to 0x02111498 (main), found by ds-decomp. */
#include "common.h"

extern void func_021107cc(u8 *, s32, s32);
extern void func_02110abc(void *);
extern void func_0211111c(void *, s32, s32);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9c10(void *, u16);
typedef struct { u16 v[20]; } Unk40;
extern const Unk40 data_02144bd8;

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

void func_02110868(u8 *arg0, s32 arg1) {
    func_021107cc(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_0211104c(void *arg0) {
    func_0211106c(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_0211128c(u8 *arg0, s32 arg1) {
    func_0211111c(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

