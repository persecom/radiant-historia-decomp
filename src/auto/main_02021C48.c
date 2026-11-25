/* 22 functions from 0x02021C48 to 0x02022A48 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160078;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_02005e80(char *, const char *, ...);
extern const char data_02145fdc[];
extern u32 func_021092d8(char *);
extern u32 func_02092994(u32, u32);
extern void func_02022088(u32, u32);
extern s32 func_02109444(void *);
extern void func_0210c970(void *);
u8 *func_02021c48(void) {
    u8 *p = func_0210c594(0x1698, data_02155c3c);
    data_02160078 = (u32)p;
    *(u16 *)(p + 0x22) = 0;
    return p;
}

extern void func_02008e68(s32, void *, s32);
extern u8 *func_02021f10(s32);
extern void func_020bbd2c(void);
extern void func_020bbe20(s32, s32);
extern void func_020bc394(void);
extern void func_020bd2fc(s32, s32, s32, s32);
extern void func_020bd574(void);
extern void func_02021e78(void);
extern void func_020bddb0(void *);
extern void func_0210e620(s32);
void func_02021c7c(void) {
    u8 *p;
    s32 i;
    s32 j;
    s32 k;

    func_02008e68(0, (void *)data_02160078, 0x1698);
    *(u8 *)(data_02160078 + 0x10) &= ~7;
    *(u8 *)(data_02160078 + 0x11) |= 0x40;
    *(u8 *)(data_02160078 + 0x10) = (*(u8 *)(data_02160078 + 0x10) & ~0x38) | 0x10;

    for (i = 0; i < 8; i++) {
        p = func_02021f10(i);
        func_020bbd2c();
        for (j = 0; j < 0x1e; j++) {
            p[0x4e + j] = 0;
        }
        for (j = 0; j < 0xf; j++) {
            p[0x6c + j] = 0;
        }
    }

    func_020bbe20(0, 1);
    func_020bbe20(1, 2);
    func_020bbe20(2, 3);
    func_020bbe20(3, 4);
    func_020bbe20(4, 5);
    func_020bbe20(5, 6);
    func_020bbe20(6, 7);
    func_020bbe20(7, 8);
    func_020bc394();
    func_020bd2fc(0, 1, 0, 0);
    func_020bd2fc(1, 0, 0, 0);
    func_020bd2fc(2, 0, 0, 0);
    func_020bd574();
    func_02021e78();
    func_020bddb0((u8 *)data_02160078 + 0x14ec);
    for (k = 0; k < 0x2e; k++) {
        *(u32 *)(data_02160078 + 0x14f4 + k * 4) = 0;
    }
    *(u32 *)(data_02160078 + 0x28) = 0;
    func_0210e620(0);
    *(s8 *)(data_02160078 + 0x34) = -1;
    *(u8 *)(data_02160078 + 0x35) = 0;
    *(u32 *)(data_02160078 + 0x00) = 0x6d63;
    *(u32 *)(data_02160078 + 0x04) = 0;
    *(u16 *)(data_02160078 + 0x0c) = 0;
    *(u16 *)(data_02160078 + 0x0e) = 0x1698;
}

