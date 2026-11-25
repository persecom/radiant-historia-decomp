/* 12 functions from 0x020A18F8 to 0x020A28E0 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02160124;
extern u8 *data_021600b0;
extern void func_0209ee60(s32);
extern void func_0209ed58(s32, s32);
extern void func_0209f010(s32);
extern void func_0209edc8(s32, s32);
extern void func_020ec548(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);

static inline BOOL in_rect_020a2664(s32 x, s32 y, s32 x0, s32 y0, s32 x1, s32 y1) {
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1) {
        return TRUE;
    }
    return FALSE;
}
extern u16 data_021626b0[];
extern u16 data_02162908[];
extern u16 data_021626a8;
extern u8 data_02148aa8[];
extern s32 func_0209f424(s32);
extern void func_020a1750(s32);
extern void func_020a18c8(s32);
extern void func_0210d27c(s32);
extern s32 func_020a2754(s32, s32, s32, s32);
extern s32 func_02064b84(s32, s32, s32, s32);
extern s32 func_0210c28c(void *, void *, void *);
extern s32 func_020a1734(s32);
extern void func_0209ebec(u32, u32, u32, u32, u32);
extern void func_0210eb98(const u8 *, s32);
extern u8 *func_020f57e8(void);
void func_020a18f8(void) {
    s32 zero = 0;
    u8 *p = data_021600b0;
    switch (*(u16 *)(p + 0xde)) {
    case 12: {
        *(u16 *)(p + 0x1a8) += 1;
        if (*(u16 *)(p + 0x1a8) > 2) {
            func_020a1750(*(u16 *)(p + 0x1a6));
            *(u16 *)(p + 0x1a8) = zero;
        }
        *(s32 *)(p + 0xd0) = (*(s32 *)(p + 0xd0) + 1) % 10;
        *(s32 *)(p + 0xd4) = (*(s32 *)(p + 0xd4) + 1) % 10;
        return;
    }
    case 2: {
        s32 v = 4;
        if (func_0209f424(zero) == 0) return;
        func_020a1750(v);
        {
            if (*(s16 *)(p + 0x1ec) <= 4) {
                *(s16 *)(p + 0x1e0) = zero;
                *(s16 *)(p + 0x1cc) = *(s16 *)(p + 0x1ec) * 0x28 + 0x19;
            } else {
                *(s16 *)(p + 0x1e0) = (*(s16 *)(p + 0x1ec) - 3) * (v - 0x2c);
                *(s16 *)(p + 0x1cc) = 0x91;
                if (*(s16 *)(p + 0x1ec) == 0x58) {
                    *(s16 *)(p + 0x1e0) = (*(s16 *)(p + 0x1ec) - 4) * (0x91 - 0xb9);
                    *(s16 *)(p + 0x1cc) = 0xb9;
                }
            }
            {
            u8 *q = p + 0x100;
            *(s16 *)(q + 0xce) = *(s16 *)(q + 0xee) * 0x1c + 0x57;
            *(s16 *)(q + 0xc6) = (*(s16 *)(q + 0xcc) - *(s16 *)(q + 0xe0)) / 40;
            *(s16 *)(q + 0xc8) = (*(s16 *)(q + 0xce) - (*(s16 *)(q + 0xe2) + 28)) / 28;
            p[0x1fa] = 3;
            if (*(s16 *)(q + 0xf8) == 0x58) p[0x1fa] = 4;
            *(u16 *)(q + 0xe8) = zero;
            }
        }
        return;
    }
    case 5:
        if (func_0209f424(1) == 0) return;
        func_020a1750(zero);
        return;
    case 4: {
        s8 *fp = (s8 *)p;
        volatile u16 pos[4];
        u16 tx, ty, touchState, extra;
        s32 flag = 1;
        s32 x6 = zero;
        s32 x7 = zero;
        s32 moved = zero;
        s16 ix = zero;
        s16 iy = zero;
        fp[0x21e] &= ~2;
        if (data_021626b0[0] & 2) {
            fp[0x21e] |= 2;
            func_020a25fc(1, 1);
            func_020a18c8(5);
            func_0210d27c(5);
            return;
        }
        if (data_02162908[2] != 0) {
            if (func_020a2754(0xe8, -10, 30, 30) == 1) {
                fp[0x21e] |= 2;
                func_020a25fc(1, 1);
                func_020a18c8(5);
                func_0210d27c(5);
                return;
            }
            fp[0x212] &= ~2;
            if ((fp[0x212] & 1) != 0) {
                if (func_020a2754(0xa3, 0x9c, 0x50, 0x14) == 1) {
                    fp[0x212] |= 2;
                    flag = zero;
                } else if (!(p[0x1f3] & 2)) {
                u16 *touch = data_02162908;
                    u8 *q = p + 0x100;
                    s32 dx = touch[0] - *(s16 *)(q + 0xe0);
                    s32 dy = touch[1] - (*(s16 *)(q + 0xe2) + 28);
                    s16 cx = dx / 40;
                    s16 cy = dy / 28;
                    if ((s16)(cx * 5 + cy) == *(s16 *)(p + 0x1e8)) {
                    fp[0x212] |= 2;
                    flag = zero;
                }
            }
            }
            if ((fp[0x206] & 1) != 0) {
                if (func_02064b84(0xa3, 0xae, 0x50, 0x14) != 0) {
                    fp[0x206] |= 4;
                } else if (!(p[0x1f3] & 2)) {
                    u16 *touch = data_02162908;
                    u8 *q = p + 0x100;
                    s32 dx = touch[0] - *(s16 *)(q + 0xe0);
                    s32 dy = touch[1] - (*(s16 *)(q + 0xe2) + 28);
                    s16 cy = dy / 28;
                    s16 cx = dx / 40;
                    s16 idx = cx * 5 + cy;
                    if (idx == *(s16 *)(p + 0x1e8)) {
                        fp[0x206] |= 4;
                        flag = zero;
                    }
                }
            }
            fp[0x22a] &= ~2;
            if (*(s32 *)(p + 0x224) == 1 &&
                func_020a2754(0xa, 0x50, 0xe, 0xe) == 1) {
                fp[0x22a] |= 2;
                flag = zero;
            }
            fp[0x236] &= ~2;
            if (*(s32 *)(p + 0x230) == 1 &&
                func_020a2754(0xe9, 0x50, 0xe, 0xe) == 1) {
                fp[0x236] |= 2;
                flag = zero;
            }
        } else {
        p[0x1f3] &= ~2;
        if ((fp[0x212] & 2) != 0) {
            fp[0x212] &= ~2;
            x7 = flag;
            flag = zero;
        }
        if ((fp[0x22a] & 2) != 0) {
            flag = zero;
            *(s16 *)(p + 0x1e0) += 0xc8;
            if (*(s16 *)(p + 0x1e0) > 0) *(s16 *)(p + 0x1e0) = zero;
            fp[0x22a] &= ~2;
            func_0210d27c(2);
        }
        if ((fp[0x236] & 2) != 0) {
            *(s16 *)(p + 0x1e0) -= 0xc8;
            if ((s16)(-*(s16 *)(p + 0x1e0) / 40) + 6 >= (s16)*(s16 *)(p + 0x1f8)) {
                *(s16 *)(p + 0x1e0) = (s16)(*(s16 *)(p + 0x1f8) - (s8)p[0x1fa]) * -40;
            }
            flag = 0;
            fp[0x236] &= ~2;
            func_0210d27c(2);
        }
        }
        if (flag == 1 && (fp[0x212] & 1) != 0 && (data_021626a8 & 0x800)) {
            fp[0x212] |= 4;
            flag = zero;
            x7 = 1;
        }
        fp[0x206] &= ~2;
        if ((fp[0x206] & 1) != 0 && ((data_021626b0[0] & 1) || (fp[0x206] & 4))) {
            fp[0x206] |= 2;
            func_020a25fc(1, 0x10);
            func_020a18c8(6);
            flag = zero;
            func_0210d27c(0xb);
        }
        fp[0x206] &= ~4;
        {
        s32 sound;
        if (flag != 1) goto selection;
        touchState = data_02162908[2];
        tx = data_02162908[0];
        ty = data_02162908[1];
        extra = data_02162908[3];
        pos[0] = tx;
        pos[1] = ty;
        pos[2] = touchState;
        pos[3] = extra;
        if (touchState == 1) {
            p[0x1f3] |= 2;
            ix = (s16)tx;
            iy = (s16)ty;
            x6 = 1;
        } else {
            if ((data_021626a8 & 0x100) && *(s32 *)(p + 0x230) == 1) {
                *(s16 *)(p + 0x1e0) -= 0xc8;
                if ((s16)(-*(s16 *)(p + 0x1e0) / 40) + 6 >= (s16)*(s16 *)(p + 0x1f8)) {
                    *(s16 *)(p + 0x1e0) = (s16)(*(s16 *)(p + 0x1f8) - (s8)p[0x1fa]) * -40;
                }
                sound = 2;
                fp[0x236] |= 4;
                goto scroll_sound;
            } else if ((data_021626a8 & 0x200) && *(s32 *)(p + 0x224) == 1) {
                *(s16 *)(p + 0x1e0) += 0xc8;
                if (*(s16 *)(p + 0x1e0) > 0) *(s16 *)(p + 0x1e0) = zero;
                sound = 2;
                fp[0x22a] |= 4;
            scroll_sound:
                func_0210d27c(sound);
            } else {
                s16 oldx = *(s16 *)(p + 0x1cc);
                s16 oldy = *(s16 *)(p + 0x1ce);
                u16 keys = data_021626b0[0];
                ix = oldx;
                iy = oldy;
                if (keys & 0x10) { x6 = 1; moved = x6; ix = oldx + p[0x238]; }
                if (keys & 0x20) { x6 = 1; moved = x6; ix = oldx - p[0x238]; }
                if (keys & 0x40) { x6 = 1; moved = x6; iy = oldy - p[0x238]; }
                if (keys & 0x80) { x6 = 1; moved = x6; iy = oldy + p[0x238]; }
            }
        }
        }
        if (moved == 1) {
            p[0x239] = (p[0x239] + 1) & 0xff;
            if (p[0x239] >= 0x1e) {
                p[0x238] = (p[0x238] + 1) & 0xff;
                p[0x239] = zero;
                if (p[0x238] >= 0xf) p[0x238] = 0xf;
            }
        } else {
            p[0x239] = zero;
            p[0x238] = 8;
        }
        if (func_020a2664(ix, iy, x6) == 0) {
            s32 a[2] = { *(s16 *)(p + 0x1cc), *(s16 *)(p + 0x1ce) };
            s32 b[2] = { ix, iy };
            if (func_0210c28c(a, b, p + 0x100) <= 2) {
                ix = *(s16 *)(p + 0x1cc);
                iy = *(s16 *)(p + 0x1ce);
            }
            *(s16 *)(p + 0x1cc) = ix;
            *(s16 *)(p + 0x1ce) = iy;
            if (iy >= 0x12 && iy <= 0x9e) {
                *(s16 *)(p + 0x1c6) = (*(s16 *)(p + 0x1cc) - *(s16 *)(p + 0x1e0)) / 40;
                *(s16 *)(p + 0x1c8) = (*(s16 *)(p + 0x1ce) - (*(s16 *)(p + 0x1e2) + 28)) / 28;
            }
        }
        if (*(s16 *)(p + 0x1ce) < 4) {
                *(s16 *)(p + 0x1ce) = 4;
            } else if (*(s16 *)(p + 0x1ce) > 0xbc) {
                *(s16 *)(p + 0x1ce) = 0xbc;
            }
            if (*(s16 *)(p + 0x1cc) < 0x20) {
                *(s16 *)(p + 0x1cc) = 0x20;
            } else if (*(s16 *)(p + 0x1ce) > 0xe6) {
                *(s16 *)(p + 0x1cc) = 0xe6;
            }
            if (*(s16 *)(p + 0x1ce) >= 0x12 && *(s16 *)(p + 0x1ce) <= 0x9e) {
                *(s16 *)(p + 0x1c6) = (*(s16 *)(p + 0x1cc) - *(s16 *)(p + 0x1e0)) / 40;
                *(s16 *)(p + 0x1c8) = (*(s16 *)(p + 0x1ce) - (*(s16 *)(p + 0x1e2) + 28)) / 28;
            }
            if (*(s32 *)(p + 0x224) == 1) {
                func_02064b84(0xa, 0x50, 0xe, 0xe);
            }
        selection: {
                s16 val;
                s32 idx, off;
                s32 changed = zero;
                s8 v;
                u8 *types;
                u8 *entry;
                idx = *(s16 *)(p + 0x1c8) + *(s16 *)(p + 0x1c6) * 5;
                val = idx;
                off = val * 40;
                entry = p + off;
                *(u32 *)(p + 0x200) = zero;
                *(u32 *)(p + 0x20c) = zero;
                *(s16 *)(p + 0x24e + off) &= ~0x100;
                if (!(*(s16 *)(p + 0x24e + off) & 0x40)) return;
                types = p + 0x23a;
                if (func_020a1734(types[off]) != 1) return;
                if (*(s16 *)(p + 0x254 + off) != 0) *(u32 *)(p + 0x20c) = 1;
                if (x7 == 1) {
                    v = *(s8 *)(p + 0x1e6);
                    if (v == 2) {
                        p[0x1e6] = zero;
                    } else {
                        s32 vv = v + 1;
                        if (*(s16 *)(p + 0x250 + off + vv * 4) != 0) {
                            p[0x1e6] = vv;
                        } else {
                            p[0x1e6] = zero;
                        }
                    }
                    changed = 1;
                    func_0210d27c(0xb);
                }
                if (*(s16 *)(p + 0x1e8) != val) {
                    *(s16 *)(p + 0x1e8) = val;
                    changed = 1;
                    p[0x1e6] = zero;
                }
                if (changed == 1) {
                    u16 *items;
                    v = *(s8 *)(p + 0x1e6);
                    entry = p + off;
                    items = (u16 *)(p + 0x250 + off);
                    func_0209ebec(entry[0x248], *(u16 *)(entry + 0x24a),
                                  items[v * 2], *(s8 *)(entry + 0x25c + v * 2),
                                  items[v * 2 + 1]);
                }
                if ((u8)(s8)(*(s8 *)(types + off) - 1) > 1) return;
                *(s16 *)(data_021600b0 + 0xc0) = *(s16 *)(p + 0x24c + off);
                *(u32 *)(p + 0x200) = 1;
            }
        return;
    }
    case 6: {
        u8 *obj;
        func_0210eb98(data_02148aa8, *(s16 *)(p + 0xc0));
        obj = func_020f57e8();
        {
            u8 *entry = p + *(s16 *)(p + 0x1e8) * 40;
            data_02160124 = func_020a27a8(entry[0x248]);
        }
        *(u32 *)(p + 0x200) = zero;
        *(u32 *)(p + 0x20c) = zero;
        if (obj == NULL) {
            func_020a1750(4);
        } else {
            obj[0x1c1] = 5;
            func_020a1750(1);
        }
        return;
    }
    }
}

void func_020a2534(void) {
    u8 *r4 = data_021600b0;
    if (*(u16 *)(r4 + 0xe0) & 1) {
        func_0209ee60(0xa);
    }
    if (*(u16 *)(r4 + 0xe0) & 2) {
        func_0209ed58(0, 0);
    }
}

void func_020a2574(void) {
    u8 *r4 = data_021600b0;
    if (*(u16 *)(r4 + 0xe0) & 1) {
        func_0209f010(0xa);
    }
    if (*(u16 *)(r4 + 0xe0) & 2) {
        func_0209edc8(0, 0);
    }
    if (*(u16 *)(r4 + 0xe0) & 4) {
        func_0209f010(0x74);
    }
}

void func_020a25c8(void) {
    u8 *r4 = data_021600b0;
    if (*(void **)(r4 + 0x19c) != NULL) {
        func_020ec548(*(void **)(r4 + 0x19c));
        *(void **)(r4 + 0x19c) = NULL;
        *(u16 *)(r4 + 0x198) = 0;
    }
}

s32 func_020a25fc(s32 arg0, u32 arg1) {
    u8 *base = data_021600b0;
    if (arg0 == 0) {
        *(u32 *)(base + 0x1a0) = 0;
        goto end;
    }
    if (arg0 == 1) {
        *(u32 *)(base + 0x1a0) |= arg1;
        goto end;
    }
    if (arg0 == 2) {
        *(u32 *)(base + 0x1a0) &= ~arg1;
        goto end;
    }
    if (arg0 == 3) {
        if (*(u32 *)(base + 0x1a0) & arg1) {
            return 1;
        }
    }
end:
    return 0;
}

s32 func_020a2664(s32 arg0, s32 arg1, s32 arg2) {
    u8 *r3 = data_021600b0;
    if (arg2 == 0) {
        return 1;
    }
    *(s16 *)(r3 + 0x1ce) = arg1;
    if (in_rect_020a2664(arg0, arg1, 0, -0x14, 0x20, 0xd4)) {
        if (*(s32 *)(r3 + 0x224) == 1) {
            *(s16 *)(r3 + 0x1e0) += r3[0x238];
            if (*(s16 *)(r3 + 0x1e0) > 0) {
                *(s16 *)(r3 + 0x1e0) = 0;
            }
        }
        return 1;
    }
    if (in_rect_020a2664(arg0, arg1, 0xe6, -0x14, 0x106, 0xd4)) {
        if (*(s32 *)(r3 + 0x230) == 1) {
            *(s16 *)(r3 + 0x1e0) -= r3[0x238];
        }
        return 1;
    }
    return 0;
}

s32 func_020a2754(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 x1 = arg0 + arg2;
  u16 x;
  s32 y1 = arg1 + arg3;
  int new_var;
  u16 y = data_02162908[1];
  s32 ret;
  x = data_02162908[0];
  new_var = x >= arg0;
  if (((new_var && (x <= x1)) && (y >= arg1)) && (y <= y1))
  {
    ret = 1;
  }
  else
  {
    ret = 0;
  }
  return !(!ret);
}

s32 func_020a27a8(s32 arg0) {
    switch (arg0) {
    case 1:
        return 0;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        return 1;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        return 2;
    default:
        return 0;
    }
}

u8 func_020a2814(void) {
    return data_02160124;
}

void func_020a2824(u16 arg0) {
    void *p = func_0210c594(0x14, data_02155c3c);
    *(u16 *)p = arg0;
    *(u8 *)((u8 *)p + 4) = 0;
}

void func_020a2850(void) {
    u16 i;
    u8 *base = data_021600b0;
    for (i = 0; i < 0x20; i++) {
        func_021167f0(base + 0x134, ((void *(*)(u16))func_020a2824)((u16)(i + 1)));
    }
}

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_020a2898(void) {
    u8 *r4 = data_021600b0;
    void *r5;
    while ((r5 = *(void **)(r4 + 0x134)) != NULL) {
        func_021168f8(r4 + 0x134, r5);
        if (r5 != NULL) {
            func_0210c5dc(r5);
        }
    }
}

