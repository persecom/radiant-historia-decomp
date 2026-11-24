/* 6 functions from 0x020D655C to 0x020D708C (main), found by ds-decomp. */
#include "common.h"

extern const char data_021513a8[];
extern u8 *data_02160204;

extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092994(void *, s32);
extern void func_020bd2fc(u32, u16, u8, u8);
extern void func_021093b0(void *);
extern void func_020bd574(void);

void func_020d6724(void) {
    char buf[0x30];
    void *r5;
    u16 i;
    func_02005e80(buf, data_021513a8);
    r5 = func_021092d8(buf);
    for (i = 0; i < 3; i++) {
        u32 x = (u16)func_02092994(r5, 0);
        s32 y = (s8)data_02160204[i + 0x12b];
        u32 v;
        u16 flag;
        if (y != 0) {
            goto y_nonzero;
        }
        if (x == 0) {
            goto zero;
        }
        v = x - 1;
        flag = 1;
        goto call;
    zero:
        v = 0;
        flag = 0;
        goto call;
    y_nonzero:
        v = y - 1;
        flag = 1;
    call:
        func_020bd2fc((u8)i, flag, v, 0);
    }
    if (r5 != NULL) {
        func_021093b0(r5);
        func_020bd574();
    }
}
