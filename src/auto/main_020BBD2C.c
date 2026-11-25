/* 6 functions from 0x020BB558 to 0x020BC394 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk_020bbb1c_10;
typedef struct { s16 data[18]; } Unk_020bbb1c_18;
extern const Unk_020bbb1c_10 data_02143c90;
extern const Unk_020bbb1c_18 data_02143cec;
extern const Unk_020bbb1c_10 data_02143c68;
extern const Unk_020bbb1c_18 data_02143d34;

void func_020bbd2c(u8 *arg0) {
    u16 i;
    register u8 one asm("r1");
    one = 1;
    arg0[0x42] = 0;
    *(u16 *)(arg0 + 0x10) = 0;
    *(u16 *)(arg0 + 0x12) = 0;
    *(u16 *)(arg0 + 0x14) = 0;
    *(u16 *)(arg0 + 0x16) = 0;
    *(u16 *)(arg0 + 0x18) = 0;
    *(u16 *)(arg0 + 0x1a) = 0;
    *(u16 *)(arg0 + 0x1c) = 0;
    *(u16 *)(arg0 + 0x1e) = 0;
    *(u16 *)(arg0 + 0x20) = 0;
    *(u16 *)(arg0 + 0x22) = 0;
    arg0[0x43] = 0;
    arg0[0x45] = 0;
    for (i = 0; i < 8; i++) {
        u8 *p = arg0 + i;
        p[0x46] = 0;
    }
    *(u16 *)(arg0 + 0x28) = 0;
    *(u16 *)(arg0 + 0x2a) = 0;
    *(u16 *)(arg0 + 0x2c) = 0;
    *(u16 *)(arg0 + 0x2e) = 0;
    *(u16 *)(arg0 + 0x34) = 0;
    arg0[0x44] = one;
    *(u32 *)(arg0 + 0x0) = 0;
    *(u32 *)(arg0 + 0x4) = 0;
    *(u32 *)(arg0 + 0x8) = 0;
    *(u16 *)(arg0 + 0x38) = 0;
    *(u16 *)(arg0 + 0x3a) = 0;
    *(u16 *)(arg0 + 0x30) = 0;
    *(u16 *)(arg0 + 0x32) = 0;
    for (i = 0; i < 3; i++) {
        u8 *p = arg0 + i * 2;
        *(u16 *)(p + 0x3c) = 0;
    }
    for (i = 0; i < 30; i++) {
        u8 *p = arg0 + i;
        p[0x4e] = 0;
    }
    for (i = 0; i < 15; i++) {
        u8 *p = arg0 + i;
        p[0x6c] = 0;
    }
}

extern const char data_0215104c[];
extern u8 *data_02160078;
extern u8 *data_02160204;
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(const char *);
extern s32 func_02092ab0(void *, u32);
extern s32 func_02092994(void *, s32);
extern void func_021093b0(void *);
void func_020bbe20(u32 arg0, u32 arg1) {
    struct Entry {
        u8 pad0[0x44];
        u32 f44;
        u16 f48;
        u16 f4a;
        u16 f4c;
        u16 f4e;
        u16 f50;
        u16 f52;
        u16 f54;
        u16 f56;
        u16 f58;
        u16 f5a;
        u8 pad5c[4];
        u16 f60;
        u16 f62;
        u16 f64;
        u16 f66;
        u16 f68;
        u16 f6a;
        u16 f6c;
        u16 f6e;
        u16 f70;
        u16 f72;
        u8 pad74[6];
        u8 f7a;
        u8 f7b;
        u8 f7c;
        u8 f7d;
        u8 f7e[8];
        u8 f86[30];
        u8 fa4[15];
        u8 padb3[0x128 - 0xb3];
    };
    char buf[0x20];
    void *file;
    u16 i;
    u16 j;
    u16 k;

    func_02005e80(buf, data_0215104c);
    file = func_021092d8(buf);
    if (func_02092ab0(file, arg1) != 0xff) {
        ((struct Entry *)data_02160078)[arg0].f7a = arg1;
        ((struct Entry *)data_02160078)[arg0].f7b = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f48 = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f4a = ((struct Entry *)data_02160078)[arg0].f48;
        ((struct Entry *)data_02160078)[arg0].f4c = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f4e = ((struct Entry *)data_02160078)[arg0].f4c;
        ((struct Entry *)data_02160078)[arg0].f50 = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f52 = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f54 = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f56 = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f58 = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f5a = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f7d = func_02092994(file, 0);
        for (i = 0; i < 8; i++) {
            ((struct Entry *)data_02160078)[arg0].f7e[i] = func_02092994(file, 0);
        }
        ((struct Entry *)data_02160078)[arg0].f44 = func_02092994(file, 0);
        ((struct Entry *)data_02160078)[arg0].f60 = 0;
        ((struct Entry *)data_02160078)[arg0].f64 = 0;
        ((struct Entry *)data_02160078)[arg0].f62 = 0;
        ((struct Entry *)data_02160078)[arg0].f66 = 0;
        ((struct Entry *)data_02160078)[arg0].f68 = 0;
        ((struct Entry *)data_02160078)[arg0].f6a = 0;
        ((struct Entry *)data_02160078)[arg0].f6e = 0;
        ((struct Entry *)data_02160078)[arg0].f86[0] = 0xb;

        if (data_02160204[0x135] == 1) {
            switch (arg1) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 7:
                case 8:
                    j = 0;
                    k = 0;
                    for (i = 0; i < 30; i++) {
                        ((struct Entry *)data_02160078)[arg0].f86[j] = i + 11;
                        j++;
                    }
                    for (i = 0; i < 15; i++) {
                        ((struct Entry *)data_02160078)[arg0].fa4[k] = i + 101;
                        k++;
                    }
                    break;
            }
        } else if (data_02160204[0x135] == 0) {
            u32 mask1 = ((struct Entry *)data_02160078)[arg0].f44;
            j = 0;
            for (i = 0; i < 30; i++) {
                if (mask1 & (1 << i)) {
                    ((struct Entry *)data_02160078)[arg0].f86[j] = i + 11;
                    j++;
                }
            }
            i = 0;
            mask1 = ((struct Entry *)data_02160078)[arg0].f6e;
            for (k = 0; k < 15; k++) {
                if (mask1 & (1 << k)) {
                    ((struct Entry *)data_02160078)[arg0].fa4[i] = k + 101;
                    i++;
                }
            }
        }

        switch (arg1) {
            case 1:
                ((struct Entry *)data_02160078)[arg0].f70 = 0x12d;
                ((struct Entry *)data_02160078)[arg0].f72 = 0x231;
                break;
            case 2:
                ((struct Entry *)data_02160078)[arg0].f70 = 0x141;
                ((struct Entry *)data_02160078)[arg0].f72 = 0x209;
                break;
            case 3:
                ((struct Entry *)data_02160078)[arg0].f70 = 0x155;
                ((struct Entry *)data_02160078)[arg0].f72 = 0x21d;
                break;
            case 4:
                ((struct Entry *)data_02160078)[arg0].f70 = 0x169;
                ((struct Entry *)data_02160078)[arg0].f72 = 0x231;
                break;
            case 5:
                ((struct Entry *)data_02160078)[arg0].f70 = 0x17d;
                ((struct Entry *)data_02160078)[arg0].f72 = 0x245;
                break;
            case 7:
                ((struct Entry *)data_02160078)[arg0].f70 = 0x196;
                ((struct Entry *)data_02160078)[arg0].f72 = 0x231;
                break;
            case 8:
                ((struct Entry *)data_02160078)[arg0].f70 = 0x191;
                ((struct Entry *)data_02160078)[arg0].f72 = 0x231;
                break;
        }
    }
    if (file != NULL) {
        func_021093b0(file);
    }
}

void func_020bc2c4(u8 *arg0, u8 arg1) {
    u8 i;
    u8 found = 0;
    if (arg1 <= 100) {
        for (i = 0; i < 30; i++) {
            u8 *p = arg0 + i;
            if (arg1 == p[0x4e]) {
                found = 1;
            }
        }
        if (found) return;
        for (i = 0; i < 30; i++) {
            u8 *p = arg0 + i;
            if (p[0x4e] == 0) {
                p[0x4e] = arg1;
                return;
            }
        }
        return;
    }
    if (arg1 >= 101) {
        for (i = 0; i < 15; i++) {
            u8 *p = arg0 + i;
            if (arg1 == p[0x6c]) {
                found = 1;
            }
        }
        if (found) return;
        for (i = 0; i < 15; i++) {
            u8 *p = arg0 + i;
            if (p[0x6c] == 0) {
                p[0x6c] = arg1;
                return;
            }
        }
    }
}
