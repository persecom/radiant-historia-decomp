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
