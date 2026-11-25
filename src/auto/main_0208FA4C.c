/* 1 function from 0x0208FA4C to 0x02090D48 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 data[10];
} Unk14;

extern u8 *data_0216010c;
extern u8 *data_02160204;
extern const Unk14 data_02140f7c;
extern const Unk14 data_0214110c;
extern const Unk14 data_02140ff4;
extern const Unk14 data_02140fe0;
extern const Unk14 data_02140fcc;

extern u8 func_02085110(u8);
extern u8 *func_02021f10(u8);
extern void func_02090d48(s32, s16, s16, s16, s16, s16);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_0208db04(s16, s32, s16, s16, s16, s16, u8, s16);
extern void func_0208da7c(s16, s32, s16, s16, s16, s16, s16);
extern s16 func_020806e8(u8, s32, u8, u8);

void func_0208fa4c(s16 x, s16 y, s16 z, s32 mode) {
    s32 off_34 = 0;
    s32 off_6c = 0;
    s32 off_r5 = 0;
    u8 actor = func_02085110(data_0216010c[0x50dc]);
    Unk14 s = data_02140f7c;
    u8 *ch;
    s32 diff;

    s.data[7] = z + 1;
    ch = func_02021f10(func_02085110(data_0216010c[0x50dc]));
    if (mode == 1) {
        off_34 = 0x1e;
        off_6c = 6;
        off_r5 = 8;
    }

    func_02090d48(0, x, y, 0x17, 0x16, z);
    func_020a3bbc(0x3f);
    s.data[1] = 0;
    s.data[2] = 0;
    s.data[8] = 0x10;
    s.data[3] = 0x10;
    s.data[9] = 9;
    s.data[4] = 9;
    s.data[5] = x + 3;
    s.data[6] = y + 1;
    func_021098ac(&s);
    func_0208db04(0x41, ch[0x43], x + 0x21, y, 8, 10, 8, z + 1);

    if (mode == 0) {
        func_02090d48(2, x, y + 0xd, 0x3c, 0x2b, z);
    } else {
        func_02090d48(2, x, y + 0xd, off_r5 + 0x40, 0x40, z);
        diff = func_020806e8(0, data_0216010c[0x50dd], actor, data_0216010c[0x50d7]);
        if (diff > 0) {
            func_0208da7c(0x43, 10, x + 0x18, y + 0xf, 7, 8, z + 1);
            func_0208da7c(0x43, 12, x + 0x70, y + 0xe, 7, 8, z + 1);
            if (diff >= 100) {
                func_0208db04(0x43, diff, x + 0x88, y + 0xf, 7, 8, 8, z + 1);
            } else if (diff >= 10) {
                func_0208db04(0x43, diff, x + 0x80, y + 0xf, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x43, diff, x + 0x78, y + 0xf, 7, 8, 8, z + 1);
            }
        } else if (diff < 0) {
            func_0208da7c(0x42, 11, x + 0x18, y + 0xf, 7, 8, z + 1);
            func_0208da7c(0x42, 13, x + 0x70, y + 0xe, 7, 8, z + 1);
            if (diff <= -100) {
                func_0208db04(0x42, -diff, x + 0x88, y + 0xf, 7, 8, 8, z + 1);
            } else if (diff <= -10) {
                func_0208db04(0x42, -diff, x + 0x80, y + 0xf, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x42, -diff, x + 0x78, y + 0xf, 7, 8, 8, z + 1);
            }
        }
    }

    func_020a3bbc(0x3f);
    s.data[1] = 0x10;
    s.data[8] = 0x10;
    s.data[3] = 0x10;
    s.data[2] = 0;
    s.data[9] = 9;
    s.data[4] = 9;
    s.data[5] = x + 4;
    s.data[6] = y + 0xf;
    func_021098ac(&s);
    func_0208db04(0x41, *(u16 *)(ch + 0x10), x + 0x31 + off_r5, y + 0xd, 8, 10, 8, z + 1);
    func_0208db04(0x41, *(u16 *)(ch + 0x12) + *(s16 *)(ch + 0x24), x + 0x60 + off_r5, y + 0xd, 8, 10, 8, z + 1);

    if (mode == 0) {
        func_02090d48(2, x, y + 0x1a, 0x3c, 0x2b, z);
    } else {
        func_02090d48(2, x, y + 0x1a, off_r5 + 0x40, 0x40, z);
        diff = func_020806e8(1, data_0216010c[0x50dd], actor, data_0216010c[0x50d7]);
        if (diff > 0) {
            func_0208da7c(0x43, 10, x + 0x18, y + 0x1c, 7, 8, z + 1);
            func_0208da7c(0x43, 12, x + 0x70, y + 0x1b, 7, 8, z + 1);
            if (diff >= 100) {
                func_0208db04(0x43, diff, x + 0x88, y + 0x1c, 7, 8, 8, z + 1);
            } else if (diff >= 10) {
                func_0208db04(0x43, diff, x + 0x80, y + 0x1c, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x43, diff, x + 0x78, y + 0x1c, 7, 8, 8, z + 1);
            }
        } else if (diff < 0) {
            func_0208da7c(0x42, 11, x + 0x18, y + 0x1c, 7, 8, z + 1);
            func_0208da7c(0x42, 13, x + 0x70, y + 0x1b, 7, 8, z + 1);
            if (diff <= -100) {
                func_0208db04(0x42, -diff, x + 0x88, y + 0x1c, 7, 8, 8, z + 1);
            } else if (diff <= -10) {
                func_0208db04(0x42, -diff, x + 0x80, y + 0x1c, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x42, -diff, x + 0x78, y + 0x1c, 7, 8, 8, z + 1);
            }
        }
    }
}
