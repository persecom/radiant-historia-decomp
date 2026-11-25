/* 1 function from 0x02042634 to 0x020437F0 (main), found by ds-decomp. */
#include "common.h"

s32 func_02021f10(s32);
void func_020a5138(void);
void func_020a3bbc(s32);
void func_021098ac(void *);
extern u8 data_021600a8[];
extern u32 data_02160204;
extern const u16 data_0213f294[10];
extern u32 data_021600f0;
extern u32 data_021600b8;
void func_021099f8(void *, s32);
extern const u16 data_0213f1a8[10];
extern u32 data_021600f0, data_021600b8, data_02160200;
void func_02042634(void) {
    u16 work[10];
    u16 sub[10];
    s32 local_00;
    s32 i;
    u32 r8v;
    u8 *st;
    u8 *sp;
    u8 *g6;
    u32 lit;

    local_00 = func_02021f10(0);
    st = (u8 *)data_02160204;
    g6 = data_021600a8;
    if (!(*(u8 *)(st + 0x12a) & 2)) {
        func_020a5138();
        if (*(u8 *)(st + 0x7e) == 0) {
            sp = *(u8 **)(g6 + 4);
            r8v = *(u32 *)(sp + 0x7c);
            for (i = 0; i < 5; i++) {
                work[2 * i] = data_0213f294[2 * i];
                work[2 * i + 1] = data_0213f294[2 * i + 1];
            }
            if (*(u32 *)(sp + 0x10) == 6 && r8v == 0) {
                func_020a3bbc(4);
                for (i = 0; i < 4; i++) {
                    if (*(u8 *)(sp + 0x36c) != i) {
                        *(u32 *)&data_021600f0 = (u32)&data_021600b8;
                    } else {
                        *(u32 *)&data_021600f0 = 0;
                    }
                    work[13] = i * 55 + 0x14;
                    work[14] = 0x18;
                    func_021098ac(work);
                }
            }
        }
        *(u32 *)&data_02160200 = *(u32 *)&data_021600f0;
        sp = *(u8 **)(g6 + 4);
        work[9] = 0x32;
        work[10] = 2;
        work[11] = 9;
        work[12] = 0xc;
        work[15] = 0x294 - 9;
        work[16] = 9;
        work[17] = 0xc;
        work[13] = *(u8 *)(sp + 0x36c) * 0x37 + 0x29;
        work[14] = 0x2e;
        func_021098ac(work);
        if (*(u8 *)(sp + 0x334) != 1) {
            if (*(u8 *)(sp + 0x335) == 0) {
                *(u8 *)(sp + 0x335) = *(u8 *)(sp + 0x335) - 1;
            } else {
                *(u8 *)(sp + 0x335) = *(u8 *)(sp + 0x335) + 1;
                if (*(u8 *)(sp + 0x335) > 8) {
                    *(u8 *)(sp + 0x335) = 8;
                }
            }
            *(u32 *)&data_02160200 = *(u32 *)&data_021600b8;
        }
        work[5] = 0x100;
        work[6] = 0x10;
        work[7] = 0;
        work[2] = 0;
        work[3] = (*(u8 *)(sp + 0x335) * 2) - 0x10;
        func_021099f8(&work[1], *(u8 *)(sp + 0x335));
        work[2] = 0;
        work[3] = 0xc0 - (*(u8 *)(sp + 0x335) * 2);
        func_021099f8(&work[1], *(u8 *)(sp + 0x335));
        for (i = 0; i < 5; i++) {
            sub[2 * i] = data_0213f1a8[2 * i];
            sub[2 * i + 1] = data_0213f1a8[2 * i + 1];
        }
    }
}
