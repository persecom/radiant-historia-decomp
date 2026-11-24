/* 15 functions from 0x020CEC8C to 0x020CFC10 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u8 *data_02160238;
extern u32 data_0216023c;
extern void func_020ccc30(void);
extern void func_02021a3c(void);
extern void func_0210dc88(void);
extern s32 func_02021a50(void);
extern void func_020bdd88(void);
extern void func_02021c7c(void);
extern void func_020cf110(void);
extern u32 data_02160240;
extern void *data_02160204;
extern void *data_02160078;
extern u8 *func_020bd438(u32);
extern void func_020bd2fc(u32, u16, u8, u8);
extern void func_020bd8c8(void);
extern void func_02021a28(void);
extern void func_020cf3b4(void);
void func_020cec8c(void) {
    u8 *p = data_02160238;
    switch (p[0]) {
    case 0:
        p[0x771] = 1;
        break;
    case 1:
    case 6:
        {
            u8 v = 0;
            func_020ccc30();
            p[0] = v;
        }
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    default:
        break;
    }
}

void func_020cecfc(void) {
    u8 *p = data_02160238;
    switch (p[0x774]) {
    case 0:
        {
            u32 v = p[0x773] + 1;
            if ((u8)v >= 0xff) {
                p[0x774] = 1;
            }
            p[0x773] = v;
        }
        break;
    case 1:
        {
            u32 v = p[0x773] - 1;
            p[0x773] = v;
            if ((v & 0xff) == 0) {
                p[0x774] = 0;
            }
        }
        break;
    default:
        break;
    }
}

void func_020cf228(void) {
    s32 x = 0;
    func_02021a3c();
    goto check;
loop:
    func_0210dc88();
check:
    if (func_02021a50() == 1) {
        goto loop;
    }
    if (func_02021a50() != 0) {
        func_020bdd88();
        func_02021c7c();
        data_0216023c = 2;
    } else {
        func_020cf110();
        data_0216023c = 1;
    }
    (void)x;
}

void func_020cf3b4(void) {
    u8 i;
    u8 *src;
    void **pp1;
    void **pp2;
    for (i = 0; i < 3; i++) {
        src = func_020bd438(i);
        func_020bd2fc(i, *(u16 *)src, *(u8 *)(src + 2), *(u8 *)(src + 3));
    }
    pp1 = &data_02160204;
    pp2 = &data_02160078;
    *(s16 *)((u8 *)*pp2 + 0x30) = *(s16 *)((u8 *)*pp1 + 0xf6);
    *(u16 *)((u8 *)*pp2 + 0x20) = *(u16 *)((u8 *)*pp1 + 0x14a);
    func_020bd8c8();
}

void func_020cf424(void) {
    func_020cf3b4();
    func_02021a28();
    do {
        func_0210dc88();
    } while (func_02021a50() == 1);
    if (func_02021a50() == 0) {
        *(u32 *)&data_02160240 = 1;
    } else {
        *(u32 *)&data_02160240 = 2;
    }
}

void *func_020cf5a0(void) {
    return func_0210c594(0x20, data_02155c3c);
}

void func_020cf5bc(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
