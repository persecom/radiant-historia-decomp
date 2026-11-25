/* 5 functions from 0x020EEEA4 to 0x020EFC58 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
extern void func_0211d7a4(void);
void func_020eeea4(void) {
    extern const s16 data_02144aa0[];
    extern const s16 data_02144b60[];
    typedef struct { u8 type, unused, shape, height; u8 rest[8]; } Tile;
    typedef struct { u16 letter, value; u16 rest[3]; } Mark;
    u8 *map;
    register u8 *tiles;
    s32 xmin, xmax, zmax;
    s32 cx, cz;
    s32 oldz;
    register s32 y;
    s32 oldx;
    register s32 x;
    s32 oldh;

    if (*(u16 *)(data_02160aec + 0xc) == 0) return;
    func_0211d7a4();
    oldh = 0;
    *(volatile u32 *)0x040004a4 = 0x001f0080;
    *(volatile u32 *)0x04000444 = oldh;
    *(volatile u32 *)0x04000470 = oldh;
    *(volatile u32 *)0x04000470 = oldh - 0x880;
    *(volatile u32 *)0x04000470 = oldh;
    *(volatile u32 *)0x0400046c = 0x10000;
    *(volatile u32 *)0x0400046c = 0x8000;
    *(volatile u32 *)0x0400046c = 0x10000;
    *(volatile u32 *)0x040004c0 = (u32)oldh - 0x80000001u;
    *(volatile u32 *)0x040004c4 = 0x7fff7fff;
    *(volatile u32 *)0x04000484 = oldh;
    map = data_02160aec;

    oldx = oldh;
    cx = *(s32 *)(map + 0x58d28);
    cz = *(s32 *)(map + 0x58d30);
    xmin = (cx / 0x10000) - 16;
    y = (cz / 0x10000) - 16;
    xmax = xmin + 32;
    zmax = y + 32;
    oldz = oldh;
    if (xmin < *(s32 *)(map + 0x58bc8)) xmin = *(s32 *)(map + 0x58bc8);
    if (xmax >= *(s32 *)(map + 0x58bcc)) xmax = *(s32 *)(map + 0x58bcc);
    if (y < *(s32 *)(map + 0x58bd0)) y = *(s32 *)(map + 0x58bd0);
    if (zmax >= *(s32 *)(map + 0x58bd4)) zmax = *(s32 *)(map + 0x58bd4);
    *(volatile u32 *)0x040004a4 = 0x000c0080;
    for (; y <= zmax; ++y) {
        x = xmin;
        if (x <= xmax) do {
            const s16 *v;
            s32 index, h, type;
            u32 shape;
            s32 dx, dz, dh;
            u32 p0, pnext;
            s32 vertex_word;
            u32 tex, pal, uv;
            volatile Tile *cell;
            register u32 *texwords;
            Mark *mark;
            u32 mask = 0x3ff;
            u32 x7fe0 = mask << 5;
            u32 xz = 0x04000480 - 0x440;
            u32 chosen_color;
            tiles = data_02160aec;
            dx = x - oldx;
            dz = y - oldz;
            index = y * *(s16 *)(tiles + 0x58d36) + x;
            cell = (volatile Tile *)(tiles + 0x3c8 + 0x800) + index;
            mark = &((Mark *)(tiles + 0x30bc8))[index];
            h = ((volatile u8 *)cell)[3];
            dh = h - oldh;
            *(volatile u32 *)0x04000470 = (u32)dx << 12;
            *(volatile u32 *)0x04000470 = (u32)dh << 12;
            *(volatile u32 *)0x04000470 = (u32)dz << 12;
            oldx = x;
            oldh = h;
            shape = ((volatile u8 *)cell)[2];
            if (shape >= 13) shape = 0;
            if (shape != 0) v = data_02144aa0 + (shape - 1) * 8;
            else v = data_02144b60;
            texwords = (u32 *)data_02160aec;
            *(volatile u32 *)0x04000480 = 0x3e0;
            type = cell->type;
            oldz = y;
            if (type != 0) {
                switch (type) {
                case 1: case 6: case 7: case 8: case 9: case 10: case 26:
                    switch (type) {
                        case 1:
                            chosen_color = 0x7c00;
                            goto color_write;
                            break;
                        case 6:
                            chosen_color = x7fe0;
                            goto color_write;
                            break;
                        case 7:
                            chosen_color = mask;
                            goto color_write;
                            break;
                        case 8: case 9: case 10:
                            chosen_color = 0x7c1f;
                            goto color_write;
                            break;
                        case 26:
                            *(volatile u32 *)0x04000480 = 0x1f;
                            break;
                        default: break;
                    }
                    goto color_done;
color_write:
                    *(volatile u32 *)0x04000480 = chosen_color;
color_done:
                    tex = texwords[4];
                    vertex_word = v[4];
                    *(volatile u32 *)0x040004a8 = tex;
                    tex = texwords[5];
                    p0 = (((u32)((s32)vertex_word >> 6) << 22) >> 12);
                    *(volatile u32 *)0x040004ac = tex;
                    *(volatile u32 *)0x04000500 = 1;
                    uv = texwords[6];
                    vertex_word = (u16)v[5];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((u16)vertex_word) | 0x10000000u);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[7];
                    vertex_word = v[6];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((((u32)((s32)vertex_word >> 6) << 22) >> 12)) | xz);
                    *(volatile u32 *)0x0400049c = p0;
                    p0 = pnext;
                    uv = texwords[8];
                    vertex_word = (u16)v[7];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (u16)vertex_word;
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[9];
                    *(volatile u32 *)0x04000488 = uv;
                    *(volatile u32 *)0x0400049c = p0;
                    break;
                case 2:
                    tex = texwords[4];
                    vertex_word = v[4];
                    *(volatile u32 *)0x040004a8 = tex;
                    tex = texwords[5];
                    p0 = (((u32)((s32)vertex_word >> 6) << 22) >> 12);
                    *(volatile u32 *)0x040004ac = tex;
                    *(volatile u32 *)0x04000500 = 0;
                    uv = texwords[7];
                    vertex_word = v[5];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((((u32)((s32)vertex_word >> 6) << 22) >> 12)) | 0x4000000u);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[8];
                    vertex_word = v[6];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((((u32)((s32)vertex_word >> 6) << 22) >> 12)) | 0x40u);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[9];
                    *(volatile u32 *)0x04000488 = uv;
                    *(volatile u32 *)0x04000490 = p0;
                    break;
                case 3:
                    vertex_word = v[7];
                    tex = texwords[4];
                    *(volatile u32 *)0x040004a8 = tex;
                    tex = texwords[5];
                    p0 = (((((u32)(vertex_word >> 6) & 0x3ffu) << 10)) | xz);
                    *(volatile u32 *)0x040004ac = tex;
                    *(volatile u32 *)0x04000500 = 0;
                    uv = texwords[7];
                    vertex_word = v[6];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((((u32)(vertex_word >> 6) & 0x3ffu) << 10)) | 0x40u);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[8];
                    vertex_word = v[4];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((u32)(vertex_word >> 6) & 0x3ffu) << 10);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[9];
                    *(volatile u32 *)0x04000488 = uv;
                    *(volatile u32 *)0x04000490 = p0;
                    break;
                case 4:
                    tex = texwords[4];
                    vertex_word = v[6];
                    *(volatile u32 *)0x040004a8 = tex;
                    pal = texwords[5];
                    p0 = (((((u32)((s32)vertex_word >> 6) << 22) >> 12)) | 0x40u);
                    *(volatile u32 *)0x040004ac = pal;
                    *(volatile u32 *)0x04000500 = 0;
                    uv = texwords[7];
                    vertex_word = v[5];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((((u32)((s32)vertex_word >> 6) << 22) >> 12)) | 0x4000000u);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[8];
                    vertex_word = v[7];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((((u32)((s32)vertex_word >> 6) << 22) >> 12)) | xz);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[9];
                    *(volatile u32 *)0x04000488 = uv;
                    *(volatile u32 *)0x04000490 = p0;
                    break;
                case 5:
                    vertex_word = v[5];
                    tex = texwords[4];
                    *(volatile u32 *)0x040004a8 = tex;
                    tex = texwords[5];
                    p0 = (((((u32)(vertex_word >> 6) & 0x3ffu) << 10)) | 0x4000000u);
                    *(volatile u32 *)0x040004ac = tex;
                    *(volatile u32 *)0x04000500 = 0;
                    uv = texwords[7];
                    vertex_word = v[7];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((((u32)(vertex_word >> 6) & 0x3ffu) << 10)) | xz);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[8];
                    vertex_word = v[4];
                    *(volatile u32 *)0x04000488 = uv;
                    pnext = (((u32)(vertex_word >> 6) & 0x3ffu) << 10);
                    *(volatile u32 *)0x04000490 = p0;
                    p0 = pnext;
                    uv = texwords[9];
                    *(volatile u32 *)0x04000488 = uv;
                    *(volatile u32 *)0x04000490 = p0;
                    break;
                default:
                    goto overlay;
                }
                *(volatile u32 *)0x04000504 = 0;
            }
overlay:
            if (mark->letter >= 0x41 && mark->letter <= 0x5a) {
                if (mark->value != 0xff && mark->value != 0) {
                    *(volatile u32 *)0x04000480 = 0x79fe;
                } else {
                    *(volatile u32 *)0x04000480 = 0x2de;
                }
                tex = texwords[4];
                vertex_word = v[4];
                *(volatile u32 *)0x040004a8 = tex;
                tex = texwords[5];
                p0 = (((u32)((s32)vertex_word >> 6) << 22) >> 12);
                *(volatile u32 *)0x040004ac = tex;
                *(volatile u32 *)0x04000500 = 1;
                uv = texwords[6];
                vertex_word = (u16)v[5];
                *(volatile u32 *)0x04000488 = uv;
                pnext = (((u16)vertex_word) | 0x10000000u);
                *(volatile u32 *)0x04000490 = p0;
                p0 = pnext;
                uv = texwords[7];
                vertex_word = v[6];
                *(volatile u32 *)0x04000488 = uv;
                pnext = (((((u32)((s32)vertex_word >> 6) << 22) >> 12)) | xz);
                *(volatile u32 *)0x0400049c = p0;
                p0 = pnext;
                uv = texwords[8];
                vertex_word = (u16)v[7];
                *(volatile u32 *)0x04000488 = uv;
                pnext = (u16)vertex_word;
                *(volatile u32 *)0x04000490 = p0;
                p0 = pnext;
                uv = texwords[9];
                *(volatile u32 *)0x04000488 = uv;
                *(volatile u32 *)0x0400049c = p0;
                *(volatile u32 *)0x04000504 = 0;
            }
            *(volatile u32 *)0x04000480 = 0x1f;
        } while (++x <= xmax);
    }
    *(volatile u32 *)0x04000448 = 1;
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

