/* 5 functions from 0x020EEEA4 to 0x020EFC58 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
extern void func_0211d7a4(void);
void func_020eeea4(void) {
    if (*(u16 *)(data_02160aec + 0xc) == 0) {
        return;
    }
    func_0211d7a4();
}

s32 func_020ef4c8(s32 *arg0) {
    extern u8 *data_02160aec;
    extern s32 func_0210c1dc(void *, void *, void *, void *, void *);
    extern s32 func_0210c0e8(void *, void *, void *, void *, void *);
    u8 *map = data_02160aec;
    s32 x, z, width;
    s32 offset = 0x58d36;
    u8 *cell;
    s32 height;
    s32 type;
    if (map == NULL) return 0;
    x = arg0[0];
    if (x < 0 || x >= (width = *(s16 *)(map + offset)) * 0x10000 ||
        (z = arg0[2]) < 0 || z >= *(s16 *)(map + offset + 2) * 0x10000) return 0;
    *(u8 **)(map + 0x58be0) = map + 0xbc8 + ((z / 0x10000) * width + x / 0x10000) * 12;
    cell = *(u8 **)(data_02160aec + 0x58be0);
    height = cell[3];
    if (height == 0) return 0;
    type = cell[2];
    if (type != 0) {
        switch (type) {
        case 1:
            return ((height - 1) << 15) + ((z % 0x10000) >> 2);
        case 3:
            return ((height - 1) << 15) + (0x4000 - ((z % 0x10000) >> 2));
        case 4:
            return ((height - 1) << 15) + ((x % 0x10000) >> 2);
        case 2:
            return ((height - 1) << 15) + (0x4000 - ((x % 0x10000) >> 2));
        case 13:
            return (((height - 1) << 15) + 0x4000) + ((z % 0x10000) >> 2);
        case 15:
            return (0x8000 - ((z % 0x10000) >> 2)) + ((height - 1) << 15);
        case 16:
            return (((height - 1) << 15) + 0x4000) + ((x % 0x10000) >> 2);
        case 14:
            return (0x8000 - ((x % 0x10000) >> 2)) + ((height - 1) << 15);
        case 9:
            return ((height - 2) << 15) + ((z % 0x10000) >> 1);
        case 11:
            return ((height - 2) << 15) + (0x4000 - ((z % 0x10000) >> 1));
        case 12:
            return ((height - 2) << 15) + ((x % 0x10000) >> 1);
        case 10:
            return (0x8000 - ((x % 0x10000) >> 1)) + ((height - 2) << 15);
        case 17:
            return (((height - 2) << 15) + 0x8000) + ((z % 0x10000) >> 1);
        case 19:
            return (((height - 2) << 15) + 0x8000) + (0x4000 - ((z % 0x10000) >> 1));
        case 20:
            return (((height - 2) << 15) + 0x8000) + ((x % 0x10000) >> 1);
        case 18:
            return (((height - 2) << 15) + 0xc000) + (0x4000 - ((x % 0x10000) >> 1));
        case 5: {
            s32 pos5[3];
            s32 dir5[3];
            s32 result5[3];
            pos5[0] = (x % 0x10000) >> 5;
            pos5[1] = 0;
            pos5[2] = (z % 0x10000) >> 5;
            dir5[0] = 0;
            dir5[1] = 0x80;
            dir5[2] = 0;
            if (func_0210c1dc((map + (offset - 0xc2)), (map + 0x58000 + 0xc80), (map + (offset - 0xaa)), (void *)pos5, (map + (offset - 0xce))) && func_0210c0e8((void *)pos5, (void *)dir5, (map + (offset - 0xc2)), (map + (offset - 0xce)), (void *)result5)) {
                return ((cell[3] - 1) << 15) + (result5[1] << 5);
            }
            return cell[4] << 15;
        }
        case 6: {
            s32 pos6[3];
            s32 dir6[3];
            s32 result6[3];
            pos6[0] = (x % 0x10000) >> 5;
            pos6[1] = 0;
            pos6[2] = (z % 0x10000) >> 5;
            dir6[0] = 0;
            dir6[1] = 0x80;
            dir6[2] = 0;
            if (func_0210c1dc((map + (offset - 0x92)), (map + 0x58000 + 0xcb0), (map + (offset - 0x7a)), (void *)pos6, (map + (offset - 0x9e))) && func_0210c0e8((void *)pos6, (void *)dir6, (map + (offset - 0x92)), (map + (offset - 0x9e)), (void *)result6)) {
                return ((cell[3] - 1) << 15) + (result6[1] << 5);
            }
            return cell[4] << 15;
        }
        case 7: {
            s32 pos7[3];
            s32 dir7[3];
            s32 result7[3];
            pos7[0] = (x % 0x10000) >> 5;
            pos7[1] = 0;
            pos7[2] = (z % 0x10000) >> 5;
            dir7[0] = 0;
            dir7[1] = 0x80;
            dir7[2] = 0;
            if (func_0210c1dc((map + (offset - 0x62)), (map + 0x58000 + 0xce0), (map + (offset - 0x4a)), (void *)pos7, (map + (offset - 0x6e))) && func_0210c0e8((void *)pos7, (void *)dir7, (map + (offset - 0x62)), (map + (offset - 0x6e)), (void *)result7)) {
                return ((cell[3] - 1) << 15) + (result7[1] << 5);
            }
            return cell[4] << 15;
        }
        case 8: {
            s32 pos8[3];
            s32 dir8[3];
            s32 result8[3];
            pos8[0] = (x % 0x10000) >> 5;
            pos8[1] = 0;
            pos8[2] = (z % 0x10000) >> 5;
            dir8[0] = 0;
            dir8[1] = 0x80;
            dir8[2] = 0;
            if (func_0210c1dc((map + (offset - 0x32)), (map + 0x58000 + 0xd10), (map + (offset - 0x1a)), (void *)pos8, (map + (offset - 0x3e))) && func_0210c0e8((void *)pos8, (void *)dir8, (map + (offset - 0x32)), (map + (offset - 0x3e)), (void *)result8)) {
                return ((cell[3] - 1) << 15) + (result8[1] << 5);
            }
            return cell[4] << 15;
        }
        default:
            break;
        }
    }
    return height << 15;
}

void *func_020efb74(s32 arg0, s32 arg1) {
    u8 *p = data_02160aec;
    s32 w;
    if (arg1 > *(s16 *)(p + 0x58D38) - 1 || arg1 < 0) {
        return NULL;
    }
    w = *(s16 *)(p + 0x58D36);
    if (arg0 > w - 1 || arg0 < 0) {
        return NULL;
    }
    return (p + 0xBC8) + (arg1 * w + arg0) * 0xC;
}

void *func_020efbe4(s32 arg0, s32 arg1) {
    u8 *p = data_02160aec;
    s32 w;
    if (arg1 > *(s16 *)(p + 0x58D38) - 1 || arg1 < 0) {
        return NULL;
    }
    w = *(s16 *)(p + 0x58D36);
    if (arg0 > w - 1 || arg0 < 0) {
        return NULL;
    }
    return (p + 0xBC8) + (arg1 * w + arg0) * 0xC;
}

void func_020efc54(void) {
}

