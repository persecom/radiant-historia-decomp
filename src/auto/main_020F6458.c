/* 6 functions from 0x020F6458 to 0x020F6990 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02160c74[2];
extern u8 *data_02160200;
extern u8 *data_021600ac;
extern u8 *data_021600a4;
extern char *func_0210cd50(void *);
extern s32 func_02018830(char *);
extern s32 func_02109754(u32);
extern void func_020f4174(void);
extern void func_0203fcc0(u32);
extern void func_020a994c(void *);
extern void func_0210d6f4(void *);
extern void func_0210d828(void);
extern void func_0210d648(s32, s32);
extern u8 data_0215204c[4];
extern s32 func_021093f0(void *);
extern void func_02012590(const char *, const char *, ...);

extern char data_02152048[];
extern void *func_0210cce4(s32);
extern void func_02005e80(char *, char *, void *);
s32 func_020f6458(void) {
    char buf[0x40] = { 0 };
    func_02005e80(buf, data_02152048, func_0210cce4(0));
    switch (buf[0]) {
        case '!':
            if (buf[1] == '=') {
                return 0xc;
            }
            break;
        case '%':
            return 5;
        case '&':
            return 7;
        case '*':
            return 3;
        case '+':
            return 1;
        case '-':
            return 2;
        case '/':
            return 4;
        case '<':
            return (buf[1] == '=') ? 0x10 : 0xf;
        case '=':
            return (buf[1] == '=') ? 0xb : 6;
        case '>':
            return (buf[1] == '=') ? 0xe : 0xd;
        case '^':
            return 9;
        case '|':
            return 8;
        case '~':
            return 0xa;
    }
    return 0;
}
