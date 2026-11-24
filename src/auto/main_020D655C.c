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

s32 func_020d655c(u8 *arg0, u8 *arg1) {
    u16 v = *(u16 *)(arg0 + 0x8e);

    switch (v) {
    case 1:
        if (*(u16 *)(arg1 + 0x18) == 7 || *(u16 *)(arg1 + 0x18) == 0xa) {
            return 1;
        }
        if (*(u16 *)(arg1 + 0x18) == 0x18) {
            return 1;
        }
        break;
    case 0xb:
        if (*(u16 *)(arg1 + 0x18) == 2 || *(u16 *)(arg1 + 0x18) == 9) {
            return 1;
        }
        if (*(u16 *)(arg1 + 0x18) == 0x15) {
            return 1;
        }
        break;
    case 0x15:
        if (*(u16 *)(arg1 + 0x18) == 4) {
            return 1;
        }
        break;
    case 0x29:
        if (*(u16 *)(arg1 + 0x18) == 0x12) {
            return 1;
        }
        break;
    case 0x51:
        switch (*(u16 *)(arg1 + 0x18)) {
        case 4:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xf:
            return 1;
        }
        if (*(u16 *)(arg1 + 0x18) == 0x12 || *(u16 *)(arg1 + 0x18) == 0x15) {
            return 1;
        }
        break;
    case 0x20:
        switch (*(u16 *)(arg1 + 0x18)) {
        case 2:
        case 4:
        case 6:
        case 7:
        case 0xe:
        case 0xf:
            return 1;
        }
        if (*(u16 *)(arg1 + 0x18) == 0x14) {
            return 1;
        }
        break;
    case 0x5b:
        if (*(u16 *)(arg1 + 0x18) == 0xb) {
            return 1;
        }
        break;
    }
    return 0;
}
