/* 2 functions from 0x0209F684 to 0x020A033C (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Draw_020a00ec;
typedef struct { s16 f0,f1,f2,f3,f4,f5,f6,f7,f8,f9; } Fields_020a00ec;
typedef struct { s16 x,y,z; } Pos_020a00ec;
extern const Draw_020a00ec data_02142ccc, data_02142c18;
extern const Draw_020a00ec data_02142c68, data_02142c7c, data_02142c90, data_02142ca4, data_02142cb8, data_02142ce0, data_02142d1c;
typedef struct { s16 x, y; } Coord_9f684;
void func_020a3bbc(s32);
void func_021098ac(void *);

extern u8 *data_021600b0;
extern void func_020a3bbc(s32);
extern void func_020a1234(s32, s32, s32, s32);
#pragma optimization_level 3
void func_0209f684(s32 arg0, Pos_020a00ec pos, s32 arg3)
{
    extern void func_020a1564(s32, s32);
    extern void func_020a00ec(s32, s16, s16, Pos_020a00ec, s16);
    s32 x = (s16)pos.x;
    s32 col;
    s32 row;
    s32 start = -x / 40;
    u8 *g = data_021600b0;
    Draw_020a00ec tile = data_02142cb8;
    Draw_020a00ec icon = data_02142ca4;
    Draw_020a00ec cursor;
    Draw_020a00ec indicator;
    Draw_020a00ec panel;
    Draw_020a00ec digit;
    Draw_020a00ec selected;
    Draw_020a00ec highlight;
    s32 end;
    s32 y;
    s32 n;

    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_020a3bbc(8);
    cursor = data_02142c90;
    if (arg0 == 0) {
        s16 z = *(volatile s16 *)&cursor.v[7];
        register s16 * p = (s16 *)(g + 0x100);
        cursor.v[5] = p[0x66];
        cursor.v[6] = p[0x67];
        cursor.v[7] = z + 2;
        func_021098ac(&cursor);
    }

    func_020a1234(0, 0x10e, 0xa3, 0xae);
    func_020a1234(1, 0x10e, 0xa3, 0x9c);
    if (*(u16 *)(g + 0xde) == 4) {
        register s16 px = pos.x;
        *(s32 *)(g + 0x224) = 1;
        if (px == 0) {
            *(s32 *)(g + 0x224) = 0;
        }
        *(s32 *)(g + 0x230) = 1;
        if (start + (((s8 *)g)[0x1fa] + 1) > *(s16 *)(g + 0x1f8)) {
            *(s32 *)(g + 0x230) = 0;
        }
        func_020a1564(*(s32 *)(g + 0x230), *(s32 *)(g + 0x224));
        indicator = data_02142c7c;
        func_020a3bbc((((s8 *)g)[0x21e] & 2) ? 7 : 6);
        func_021098ac(&indicator);
    }

    panel = data_02142c68;
    digit = data_02142d1c;
    func_020a3bbc(0x21);
    func_021098ac(&panel);
    func_020a3bbc(9);

    n = g[0x1f2];
    digit.v[5] = 0x11;
    digit.v[1] = (n % 10) * 7;
    digit.v[6] = 0xa9;
    func_021098ac(&digit);

    n = *(s16 *)(g + 0x1f0);
    digit.v[5] = 0x2b;
    digit.v[6] = 0xb3;
    digit.v[1] = (n % 10) * 7;
    func_021098ac(&digit);

    {
        u32 digit_count = g[0x1f2];
        if (digit_count >= 10) {
            n = (s32)digit_count;
            digit.v[1] = (n / 10 % 10) * 7;
            digit.v[5] = 0xa;
            digit.v[6] = 0xa9;
            func_021098ac(&digit);
        }
    }
    n = *(s16 *)(g + 0x1f0);
    if (n >= 10) {
        digit.v[1] = (n / 10 % 10) * 7;
        digit.v[5] = 0x24;
        digit.v[6] = 0xb3;
        func_021098ac(&digit);
    }
    {
        u32 digit_count = g[0x1f2];
        if (digit_count >= 100) {
            n = (s32)digit_count;
            digit.v[1] = (n / 100 % 10) * 7;
            digit.v[5] = 3;
            digit.v[6] = 0xa9;
            func_021098ac(&digit);
        }
    }
    n = *(s16 *)(g + 0x1f0);
    if (n >= 100) {
        digit.v[1] = (n / 100 % 10) * 7;
        digit.v[5] = 0x1d;
        digit.v[6] = 0xb3;
        func_021098ac(&digit);
    }

    start--;
    if (start < 0) {
        start = 0;
    }
    end = start + 8;
    if (end >= *(s16 *)(g + 0x1f8)) {
        end = *(s16 *)(g + 0x1f8) + 1;
    }
    y = (s16)pos.y;
    row = 0;
    highlight = data_02142ce0;

    do {
        col = start;
        if (col < end) {
            u8 *rowBase = g + row * 40;
            do {
                register s32 linear = (col << 2) + col;
                u8 *record = rowBase + linear * 40;
                u8 *entry = record + 0x200;
                s32 type;
                s32 style;
                s16 tileX;
                s16 tileY;

                if (*(s16 *)(entry + 0x46) == -1 ||
                    !(*(s16 *)(entry + 0x4e) & 0x40)) {
                    continue;
                }

                tile.v[5] = x + (*(s16 *)(entry + 0x3c) * 40 + 0xc);
                tile.v[6] = ((s16)((s8 *)entry)[0x3e] * 28 + 0x5b) + y;
                tileX = tile.v[5];
                icon.v[8] = 8;
                icon.v[5] = tileX + 8;
                tileY = tile.v[6];
                icon.v[6] = tileY + 7;

                if (arg3 == *(s16 *)(entry + 0x46)) {
                    selected = highlight;
                    selected.v[5] = tileX - 6;
                    selected.v[6] = tileY - 7;
                    func_020a3bbc(0x16);
                    func_021098ac(&selected);
                }

                entry = record + 0x200;
                type = ((s8 *)entry)[0x3a];
                switch (type) {
                case 1:
                    if (tile.v[5] + tile.v[8] <= 0 || tile.v[5] >= 256) {
                        break;
                    }
                    tile.v[5]++;
                    tile.v[8] = 0x14;
                    tile.v[6]--;
                    tile.v[9] = 0x15;
                    tile.v[3] = tile.v[8];
                    tile.v[4] = tile.v[9];
                    if (*(s16 *)(entry + 0x4e) & 0x100) {
                        func_020a3bbc(0xd);
                    } else {
                        func_020a3bbc(0xc);
                    }
                    goto draw_tile;

                case 2:
                    if (tile.v[5] + tile.v[8] <= 0 || tile.v[5] >= 256) {
                        break;
                    }
                    tile.v[5]++;
                    tile.v[8] = 0x14;
                    tile.v[6] -= 3;
                    tile.v[9] = 0x15;
                    tile.v[3] = tile.v[8];
                    tile.v[4] = tile.v[9];
                    if (*(s16 *)(entry + 0x4e) & 0x100) {
                        func_020a3bbc(0xf);
                    } else {
                        func_020a3bbc(0xe);
                    }
                    goto draw_tile;

                case 3:
                    if (tile.v[5] + tile.v[8] <= 0 || tile.v[5] >= 256) {
                        break;
                    }
                    tile.v[5]++;
                    tile.v[8] = 0x11;
                    tile.v[6]++;
                    tile.v[9] = 0x10;
                    tile.v[3] = tile.v[8];
                    tile.v[4] = tile.v[9];
                    func_020a3bbc(0x10);
                    goto draw_tile;
select_tile:
                    func_020a3bbc(style);
draw_tile:
                    func_021098ac(&tile);
                    break;

                case 4:
                    if (tile.v[5] + tile.v[8] <= 0 || tile.v[5] >= 256) {
                        break;
                    }
                    tile.v[8] = 0x14;
                    tile.v[6] -= 2;
                    tile.v[9] = 0x15;
                    tile.v[3] = tile.v[8];
                    tile.v[4] = tile.v[9];
                    style = 0x11;
                    goto select_tile;

                case 5:
                    if (tile.v[5] + tile.v[8] <= 0 || tile.v[5] >= 256) {
                        break;
                    }
                    tile.v[8] = 0x14;
                    tile.v[6] -= 2;
                    tile.v[9] = 0x14;
                    tile.v[3] = tile.v[8];
                    tile.v[4] = tile.v[9];
                    style = 0x12;
                    goto select_tile;

                case 8:
                    if (tile.v[5] + tile.v[8] <= 0 || tile.v[5] >= 256) {
                        break;
                    }
                    tile.v[8] = 0x14;
                    tile.v[6] -= 2;
                    tile.v[9] = 0x14;
                    tile.v[3] = tile.v[8];
                    tile.v[4] = tile.v[9];
                    style = 0x13;
                    goto select_tile;

                case 9:
                    if (icon.v[5] + icon.v[8] <= 0 || icon.v[5] >= 256) {
                        break;
                    }
                    icon.v[1] = (type - 9) * 8 + 0x10;
                    goto draw_icon;

                case 10:
                    icon.v[1] = (type - 9) * 8 + 0x10;
                    icon.v[5] = x + (*(s16 *)(entry + 0x3c) * 40 + 0x10);
                    icon.v[6] = y + ((s16)((s8 *)entry)[0x3e] * 28 + 0x5e);
                    {
                        s16 cx = *(volatile s16 *)&icon.v[5];
                        if (cx + icon.v[8] <= 0) {
                            break;
                        }
                        if (cx >= 256) {
                            break;
                        }
                    }
                    goto draw_icon;

                case 11:
                    icon.v[1] = (type - 9) * 8 + 0x10;
                    icon.v[5] -= 4;
                    if (*(volatile s16 *)&icon.v[5] + icon.v[8] <= 0 || icon.v[5] >= 256) {
                        break;
                    }
                    goto draw_icon;

                case 12:
                    icon.v[1] = (type - 9) * 8 + 0x10;
                    icon.v[6] -= 4;
                    {
                        s16 cx = *(volatile s16 *)&icon.v[5];
                        if (cx + icon.v[8] <= 0) {
                            break;
                        }
                        if (cx >= 256) {
                            break;
                        }
                    }
                    goto draw_icon;

                case 13:
                    icon.v[5] -= 3;
                    icon.v[6] -= 2;
                    icon.v[1] = 0;
                    icon.v[8] = 0xa;
                    if (icon.v[5] + icon.v[8] <= 0 || icon.v[5] >= 256) {
                        break;
                    }
draw_icon:
                    func_020a3bbc(0x14);
                    func_021098ac(&icon);
                    break;
                }
                record += 0x200;
                for (type = 0; type < 3; type++) {
                    s32 flags = *(s16 *)(record + 0x4e);
                    if (flags & (1 << type)) {
                        if (flags & (1 << (type + 3))) {
                            func_020a00ec((u8)type, *(s16 *)(record + 0x3c),
                                      ((s8 *)record)[0x3e], pos, 1);
                        } else {
                            func_020a00ec((u8)type, *(s16 *)(record + 0x3c),
                                      ((s8 *)record)[0x3e], pos, 0);
                        }
                    }
                }
            } while (++col < end);
        }
    } while (++row < 5);
}
void func_020a00ec(s32 mode, s16 x, s16 y, Pos_020a00ec pos, s16 arg5) {
s16 py=pos.y;
Draw_020a00ec a=data_02142ccc;
Draw_020a00ec b=data_02142c18;
func_020a3bbc(20);
switch(mode) {
case 0:
b.v[1]+=(s16)((1-arg5)*4);
b.v[5]=pos.x+(x*40+20);
b.v[6]=py+((y-1)*28+98);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
case 1:
a.v[2]-=(s16)((1-arg5)*4);
a.v[5]=pos.x+(x*40+27);
a.v[6]=py+(y*28+98);
if(a.v[5]+a.v[8]<=0) return;
if(a.v[5]>=256) return;
func_021098ac(&a); break;
case 2:
b.v[1]+=(s16)((1-arg5)*4);
b.v[5]=pos.x+(x*40+20);
b.v[6]=py+(y*28+98);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
}
}
