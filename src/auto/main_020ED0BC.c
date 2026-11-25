/* 5 functions from 0x020ED0BC to 0x020EE098 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkF_020ed3a4 {
    u8 unk00[4];
    u16 unk04;
} UnkF_020ed3a4;

typedef struct UnkE_020ed3a4 {
    u16 count;
    u8 unk02[2];
    UnkF_020ed3a4 *items;
} UnkE_020ed3a4;

extern s32 func_0201f884(s32);
extern s32 func_02020888(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);
extern u8 *data_02155984;
extern u8 *data_021600bc;
extern u32 data_02162834;
extern u8 *data_02160210;
extern u32 data_02162860;
extern void func_020ed4c4(void *, void *, u32, u32, u32, u32);

extern s32 func_020ed270(void *, u16, s32);
void func_020ed0bc(void) {
    s32 pos[2];
    u8 *p = NULL;

    pos[0] = *(s32 *)(data_02155984 + 0x20) / 0x10000;
    pos[1] = *(s32 *)(data_02155984 + 0x28) / 0x10000;

    if (data_021600bc != NULL) {
        u32 flag = 0;
        if (*(u16 *)(data_021600bc + 0x2a) == 1) {
            flag = 0x80;
        }
        *(volatile u32 *)0x040004a4 = 0x31f00c0;
        *(volatile u32 *)0x04000480 = 0x7fff;

        while ((p = (p != NULL) ? *(u8 **)(p + *(u16 *)(data_021600bc + 0x6e) + 4) : *(u8 **)(data_021600bc + 0x64)) != NULL) {
            if (*(u32 *)(p + 0x80) & 0x40000) {
                *(volatile u32 *)0x040004a4 = 0x30000c0 | (*(s16 *)(p + 0x9a) << 16);
            } else {
                *(volatile u32 *)0x040004a4 = 0x31f00c0;
            }
            func_020ed4c4(p, pos, *(u16 *)(data_021600bc + 0x32), flag, 1, data_02162834);
            *(volatile u32 *)0x04000504 = 0;
        }
    }

    if (data_02160210 != NULL) {
        *(volatile u32 *)0x040004a4 = 0x31f00c0;
        *(volatile u32 *)0x04000480 = 0x7fff;

        while ((p = (p != NULL) ? *(u8 **)(p + *(u16 *)(data_02160210 + 0x56) + 4) : *(u8 **)(data_02160210 + 0x4c)) != NULL) {
            if (data_02162860 == 0) {
                func_020ed4c4(p, pos, 0, 0, 3, 0);
            } else {
                func_020ed4c4(p, pos, 0, 0, 2, 0);
            }
            *(volatile u32 *)0x04000504 = 0;
        }
    }
}

extern s32 func_021086d4(void *, s32);
extern void func_02108680(void *, u32, s32);
s32 func_020ed270(void *arg0, u16 arg1, s32 arg2) {
    u8 *obj = *(u8 **)arg0;
    u8 *table = *(u8 **)(obj + 0x58);
    s32 invalid;

    if (**(u16 **)(table + 0xc) <= (u32)arg1) {
        return 0;
    }

    invalid = (func_021086d4(obj, arg1) == 0);

    if (invalid != 0) {
        return 0;
    }

    func_02108680(*(u8 **)arg0, arg1, arg2);

    return 1;
}

s32 func_020ed2d0(u8 *arg0,s32 arg1){
u8 *p=*(u8 **)(arg0+0x10);s32 cmd;
if(*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0+0x58)+0xc))<=arg1*2)return 0;
cmd=p[arg1*4];
if(cmd>14)goto high;
if(cmd>=14)goto fourteen;
if(cmd>4)goto done;
if(cmd<0)goto done;
if(cmd==0)goto zero;
if(cmd==4)goto four;
goto done;
high:if(cmd==15)goto fifteen;
goto done;
zero:return 0;
four:*(u16 *)(arg0+12)=0xffff;return func_020ed270(arg0,*(u16 *)(p+arg1*4+2)+2,1);
fourteen:*(u16 *)(arg0+12)=0xffff;return func_020ed270(arg0,*(u16 *)(p+arg1*4+2)+2,1);
fifteen:*(u16 *)(arg0+12)=0xffff;return func_020ed270(arg0,*(u16 *)(p+arg1*4+2),1);
done:return 0;
}

void func_020ed3a4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 j;
    s32 v;
    UnkF_020ed3a4 *f;

    for (i = 0; i < *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4)); i++) {
        for (j = 0; j < (*(UnkE_020ed3a4 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].count; j++) {
            f = &(*(UnkE_020ed3a4 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            f->unk04 += (u16)(arg1 + (arg2 << 5));
            f = &(*(UnkE_020ed3a4 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            v = func_0201ff0c(func_020201f4(0x42000000, func_02020888(func_0201f884((f->unk04 % 0x1000 % 0x400) / 0x10), 0x40000000)));
            f->unk04 += (u16)(v - (arg1 + (arg2 << 5)));
        }
    }
}

extern s32 data_02170248[];
extern s32 data_02170204[];
extern void func_02001134(void *, void *);
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
extern u16 data_02151fc8;
extern u8 data_02144a60[];
extern u32 data_02144a64[];
extern u8 data_02144a80[];
extern u32 data_02144a84[];
extern u8 *data_02151c88;
extern const u16 data_02144d84[3][4];
extern const u16 data_02144d6c[3][4];
extern s32 func_02001fb0(s32, s32);
extern s32 func_02001fc0(s32);
extern void func_02008f24(void *, void *);
extern void func_02001508(void *, void *, void *);
extern void func_02001160(void *, void *, s32, s32, s32);
extern void func_020055b0(void *);
void func_020ed4c4(void *arg0, void *arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    u8 *p0 = (u8 *)arg0;
    s32 *p1 = (s32 *)arg1;
    u8 *r7 = *(u8 **)(p0 + 0x108);
    u8 *r9 = *(u8 **)r7;
    struct Vec3_020ed4c4 { s32 x, y, z; } pos;
    s32 mtx1[9];
    s32 vec[3];
    s32 mtx2[12];
    s32 cam[3];
    s32 x, z;
    s32 flag10, flag28, r8;

    pos = *(struct Vec3_020ed4c4 *)p0;
    func_02001134(data_02170248, mtx1);
    cam[0] = *(s32 *)(data_02155984 + 0x48);
    cam[1] = *(s32 *)(data_02155984 + 0x4c);
    cam[2] = *(s32 *)(data_02155984 + 0x50);
    x = *(s32 *)(p0 + 0) / 0x10000;
    z = *(s32 *)(p0 + 8) / 0x10000;
    flag10 = 1;
    *(volatile u32 *)0x04000440 = flag10;
    if (*(s32 *)(p0 + 0xf8) != 0) {
        flag10 = 0;
    }
    if (*(u32 *)(p0 + 0x80) & 2) {
        flag28 = 1;
    } else {
        *(u32 *)(p0 + 0x80) &= ~4;
        flag28 = 0;
    }
    if ((p1[0] + 0x20 > x && p1[0] - 0x20 < x && p1[1] + 0x20 > z && p1[1] - 0x20 < z) || (arg4 & 2)) {
        const s32 *m = data_02170248;
        const s32 *p = data_02170204;
        s32 vx = m[9] + (s32)(((s64)pos.x * m[0] + (s64)pos.y * m[3] + (s64)pos.z * m[6]) >> 12);
        s32 vy = m[10] + (s32)(((s64)pos.x * m[1] + (s64)pos.y * m[4] + (s64)pos.z * m[7]) >> 12);
        s32 vz = m[11] + (s32)(((s64)pos.x * m[2] + (s64)pos.y * m[5] + (s64)pos.z * m[8]) >> 12);
        s32 px, py, sx, sy;
        s64 inv;
        func_02002028(p[15] + (s32)(((s64)vx * p[3] + (s64)vy * p[7] + (s64)vz * p[11]) >> 12));
        px = p[12] + (s32)(((s64)vx * p[0] + (s64)vy * p[4] + (s64)vz * p[8]) >> 12);
        py = p[13] + (s32)(((s64)vx * p[1] + (s64)vy * p[5] + (s64)vz * p[9]) >> 12);
        inv = func_02001fd0();
        sy = (s32)((inv * py + 0x80000000LL) >> 32);
        sy = (sy + 4096) >> 1;
        sy = ((sy << 7) + (sy << 6) + 2048) >> 12;
        sy = 192 - sy;
        *(s32 *)(p0 + 0x100) = sy;
        sx = (s32)((inv * px + 0x80000000LL) >> 32);
        sx = ((((sx + 4096) >> 1) << 8) + 2048) >> 12;
        *(s32 *)(p0 + 0xfc) = sx;
        r8 = 0;
        if (sx >= -0x30 && sx <= 0x130 && sy >= -0x10 && sy <= 0xf0) {
            *(u32 *)(p0 + 0x80) |= 4;
        } else {
            r8 = 1;
            *(u32 *)(p0 + 0x80) &= ~4;
        }
    } else {
        r8 = 1;
        flag28 = 0;
        *(u32 *)(p0 + 0x80) &= ~4;
        *(u32 *)(p0 + 0x80) &= ~4;
    }

    if (flag28 != 0 && r8 == 0) {
        if ((*(u32 *)(p0 + 0x80) & 1) && *(s32 *)(r7 + 8) != 0 && p0[0x104] != 0xff) {
            u8 *entry = *(u8 **)(r7 + 0x10) + p0[0x104] * 4;
            u16 angle = *(u16 *)(p0 + 0x92) + data_02151fc8;
            u32 dir = *(u16 *)(r7 + 0xc) & 0xff;
            switch (entry[0]) {
            case 0:
                break;
            case 4:
                dir = 2;
                if (angle <= 0x7fff) {
                    r9[0x70] |= 2;
                } else {
                    r9[0x70] &= ~2;
                }
                break;
            case 14: {
                u32 idx = (u16)(angle + 0xe00c) >> 14;
                r9[0x70] = (r9[0x70] & ~2) | ((data_02144a64[idx * 2] & 1) << 1);
                dir = data_02144a60[idx * 8];
                break;
            }
            case 15: {
                u32 idx = (u16)(angle + 0xe00c) >> 14;
                r9[0x70] = (r9[0x70] & ~2) | ((data_02144a84[idx * 2] & 1) << 1);
                dir = data_02144a80[idx * 8];
                break;
            }
            default:
                dir = *(u16 *)(r7 + 0xc) & 0xff;
                break;
            }
            if (*(u16 *)(r7 + 0xc) != dir) {
                *(u16 *)(r7 + 0xc) = dir;
                func_020ed270(r7, (u16)(*(u16 *)(entry + 2) + dir), 0);
            }
        }
        if ((r9[0x70] >> 1) & 1) {
            *(u32 *)(data_02151c88 + 0x24) |= 1;
        } else {
            *(u32 *)(data_02151c88 + 0x24) &= ~1;
        }
        if (arg2 == 0) {
            s32 s = func_02001fb0(0x1000, 0x1000);
            s32 t = (s32)(((s64)(s << 7) * 0xff0 + 0x800) >> 12);
            s32 u = func_02001fc0(t);
            s32 d, q, scale;
            func_02008f24(data_02170248, mtx2);
            vec[0] = pos.x - (cam[0] << 2);
            vec[1] = pos.y - (cam[1] << 2);
            vec[2] = pos.z - (cam[2] << 2);
            func_02001508(mtx1, mtx2, mtx2);
            d = data_02170248[11]
                + (s32)(((s64)data_02170248[8] * vec[2] + 0x800) >> 12)
                + (s32)(((s64)data_02170248[2] * vec[0] + 0x800) >> 12)
                + (s32)(((s64)data_02170248[5] * vec[1] + 0x800) >> 12);
            q = func_02001fb0(-d, t);
            scale = (u * q - 0x400) >> 1;
            func_02001160(mtx2, mtx2, scale, scale, -0x800);
        }
        {
            u8 *list = *(u8 **)(r9 + 0x30);
            u16 count = *(u16 *)(list + 0);
            u8 *state = data_02151c88;
            u32 i;
            *(volatile u32 *)0x040004a8 = *(u32 *)(*(u8 **)(*(u8 **)(r9 + 0x58) + 0x10) + 0x2c);
            for (i = 0; i < count; i++) {
                u16 *ent = (u16 *)(*(u8 **)(list + 4) + i * 6);
                s32 oy, ox;
                *(u16 *)(state + 0x38) = ent[0];
                *(u16 *)(state + 0x3a) = ent[1];
                *(u16 *)(state + 0x3c) = ent[2];
                *(volatile u32 *)0x040004ac = (*(u32 *)(*(u8 **)(*(u8 **)(r9 + 0x58) + 0x14) + 0x1c) + (((*(u32 *)(state + 0x3c) & 0xf000) >> 12) << 5)) >> 4;
                *(volatile u32 *)0x04000444 = 0;
                *(volatile u32 *)0x04000400 = 0x17;
                func_020055b0(mtx2);
                oy = *(u32 *)(state + 0x38) & 0xff;
                if (oy > 127) oy |= 0xffffff00;
                if (*(u32 *)(data_02151c88 + 0x24) != 0) {
                    u32 attr = *(u32 *)(state + 0x38);
                    u32 shape = attr & 0xc000c000;
                    s32 tx = (attr >> 16) & 0x1ff;
                    if (tx > 255) tx |= 0xffffff00;
                    ox = (s16)-(tx + data_02144d84[(shape & 0xc000) >> 14][(shape & 0xc0000000) >> 30]);
                    {
                        u32 flipx = ((*(u32 *)(data_02151c88 + 0x24) & 1) != 0) ^ ((*(u32 *)(state + 0x38) >> 28) & 1);
                        *(u32 *)(state + 0x38) = (*(u32 *)(state + 0x38) & ~0x10000000) | (flipx << 28);
                    }
                } else {
                    ox = (*(u32 *)(state + 0x38) >> 16) & 0x1ff;
                    if (ox > 255) ox |= 0xffffff00;
                }
                (void)ox;
                (void)oy;
            }
        }
    }
    (void)flag10;
    (void)arg3;
    (void)arg5;
}

