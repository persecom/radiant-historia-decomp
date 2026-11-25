/* 13 functions from 0x020DAA60 to 0x020DB864 (main), found by ds-decomp. */
#include "common.h"

extern void func_020321cc(s32);
extern void func_020951b4(void);
extern s32 func_020deaf0(void *, s32, s32);
extern s32 func_0202e548(u8);
extern void func_02030878(void *, void *, s32, s32, s32, s32);
extern void func_020db35c(void *, s32);
extern void func_020de0a8(void *);
extern u8 *data_02160a6c;

extern void func_020dd810(void *, s32, s32);

extern void func_0206e7a0(u8, void *, void *, u16);
extern void func_0210d27c(s32);

extern void func_0205b710(void *, s32);
extern void func_020bfd78(s32, s32, s32, s32, s32, void *, s32, s32);
extern void func_020da8c0(void *, s32);

#pragma optimization_level 2
void func_020db6f0(u8 *arg0, s32 arg1) {
    u8 *sub = *(u8 **)(arg0 + 0x128);
    *(s32 *)(*(u8 **)(arg0 + 0x118) + 4) -= arg1;
    if (*(s32 *)(*(u8 **)(arg0 + 0x118) + 4) < 0) {
        *(s32 *)(*(u8 **)(arg0 + 0x118) + 4) = 0;
    }
    if ((*(u32 *)(arg0 + 0x80) & 0x800) != 0) {
        if (*(s32 *)(*(u8 **)(arg0 + 0x118) + 4) <= 0) {
            *(s32 *)(*(u8 **)(arg0 + 0x118) + 4) = 1;
        }
    }
    if ((*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x800000) != 0) {
        func_0205b710(arg0, 0x9c);
        if ((*(u32 *)(sub + 0x18) & 2) == 0) {
            struct {
                u32 f0;
                u32 f4;
                u32 f8;
                u8 fc;
                u16 fe;
                u8 f10;
                u16 f12;
                u8 f14;
            } st;
            st.fc = 0;
            st.fe = 0;
            st.f10 = 0;
            st.f12 = 0;
            st.f14 = 1;
            st.f0 = 0;
            st.f4 = 0;
            st.f8 = 0;
            func_0206e7a0(6, arg0, &st, 0);
            func_0210d27c(0x13);
            func_020bfd78(0x80, 0x60, 1, 1, arg1, arg0, *(u16 *)(arg0 + 0x90), 2);
            func_020da8c0(arg0, 9);
        }
    }
}
#pragma optimization_level 4
void func_020db7ec(u8 *arg0) {
    u8 sp[0x18];
    if (*(u32 *)(*(u8 **)(arg0 + 0x128) + 0x18) & 2) {
        return;
    }
    *(u8 *)(sp + 0xc) = 0;
    *(u16 *)(sp + 0xe) = 0;
    *(u8 *)(sp + 0x10) = 0;
    *(u16 *)(sp + 0x12) = 0;
    *(u8 *)(sp + 0x14) = 1;
    *(u32 *)(sp + 0x0) = 0;
    *(u32 *)(sp + 0x4) = 0;
    *(u32 *)(sp + 0x8) = 0;
    func_0206e7a0(6, arg0, sp, 0);
    func_0210d27c(0x13);
}

void func_020db850(void) {
    func_020321cc(0);
    func_020951b4();
}
