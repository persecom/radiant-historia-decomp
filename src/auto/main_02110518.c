/* 27 functions from 0x02110518 to 0x02111498 (main), found by ds-decomp. */
#include "common.h"

extern void func_021107cc(void *, s32, s32);
extern void func_02110abc(void *);

extern void func_0210c5dc(void *);
extern void func_0211106c(void *);
void func_021106cc(u8 *arg0, u16 *arg1) {
    u8 *sub = arg0 + 0x30;
    u16 i;
    for (i = 0; i < 5; i++) {
        *(u16 *)(sub + i * 8 + 0x1e) = arg1[i * 4 + 0];
        *(u16 *)(sub + i * 8 + 0x20) = arg1[i * 4 + 1];
        *(u16 *)(sub + i * 8 + 0x22) = arg1[i * 4 + 2];
        *(u16 *)(sub + i * 8 + 0x24) = arg1[i * 4 + 3];
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

void func_02110868(u8 *arg0, s32 arg1) {
    func_021107cc(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_0211104c(void *arg0) {
    func_0211106c(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
