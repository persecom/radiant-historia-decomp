/* 12 functions from 0x02065298 to 0x02065E78 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021600e0;
extern void **data_021600c8[6];
extern s32 data_02155c3c;
extern void func_02064c18(void *);
extern void func_0210c5dc(void *);
extern void **func_0210c594(s32, s32);
extern void *func_02064be8(void);
extern void func_02064ce4(void *, s32, s32, s32);

s32 func_02065840(s32 arg0, u32 arg1) {
    if (arg0 == 0) {
        switch (arg1) {
        case 2:
        case 5:
        case 6:
        case 7:
            return 1;
        }
    }
    return 0;
}

extern char data_02146690[];
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *, s32);
extern s32 func_02092994(void *, s32);
extern void func_02109444(void *);
extern void func_021093b0(void *);
u16 func_02065884(u8 *arg0, s32 arg1) {
    char buf[0x40];
    void *r6;
    s32 i;
    s32 ret;
    s32 v;

    func_02005e80(buf, data_02146690);
    r6 = func_021092d8(buf);
    if (func_02092ab0(r6, (s32)arg0) != -1) {
        v = func_02092994(r6, 0);
        if (v != arg1) {
            do {
                func_02109444(r6);
                if (func_02092ab0(r6, (s32)arg0) == -1) {
                    return 0;
                }
                v = func_02092994(r6, 0);
            } while (v != arg1);
        }
        for (i = 0; i < 0x13; i++) {
            ret = func_02092994(r6, 0);
        }
    }
    if (r6 != NULL) {
        func_021093b0(r6);
    }
    return (u16)ret;
}

extern char data_021466ac[];
u16 func_02065958(u8 *arg0, s32 arg1) {
    char buf[0x40];
    void *r6;
    s32 i;
    s32 ret;
    s32 v;

    func_02005e80(buf, data_021466ac);
    r6 = func_021092d8(buf);
    if (func_02092ab0(r6, (s32)arg0) != -1) {
        v = func_02092994(r6, 0);
        if (v != arg1) {
            do {
                func_02109444(r6);
                if (func_02092ab0(r6, (s32)arg0) == -1) {
                    return 0;
                }
                v = func_02092994(r6, 0);
            } while (v != arg1);
        }
        for (i = 0; i < 0x16; i++) {
            ret = (u16)func_02092994(r6, 0);
        }
    }
    if (r6 != NULL) {
        func_021093b0(r6);
    }
    return (u16)ret;
}

void func_02065b80(void) {
    if (data_021600c8[0] != NULL) {
        func_02064c18(*data_021600c8[0]);
        if (data_021600c8[0] != NULL) {
            func_0210c5dc(data_021600c8[0]);
            data_021600c8[0] = NULL;
        }
    }
}

void func_02065bbc(void) {
    data_021600c8[1] = func_0210c594(4, data_02155c3c);
    *data_021600c8[1] = func_02064be8();
    func_02064ce4(*data_021600c8[1], 0x63, 0x63, -1);
}

void func_02065c08(void) {
    if (data_021600c8[1] != NULL) {
        func_02064c18(*data_021600c8[1]);
        if (data_021600c8[1] != NULL) {
            func_0210c5dc(data_021600c8[1]);
            data_021600c8[1] = NULL;
        }
    }
}

s32 func_02065c44(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    switch (*(u8 *)((u8 *)arg0 + 7)) {
    case 8:
        return -1;
    case 1:
    case 2:
    case 3:
    case 4:
        return 1;
    case 5:
    case 6:
    case 9:
    case 11:
        return 0;
    case 7:
        return 2;
    default:
        return -1;
    }
}

void func_02065cb8(u8 arg0) {
    data_021600e0 = arg0;
}
