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
    typedef struct {
        s32 x, y, z;
    } Vec3_020ed4c4;
    typedef struct {
        u16 attr0, attr1, attr2;
    } Attr_020ed4c4;
    typedef struct {
        u16 count;
        u16 pad;
        Attr_020ed4c4 *items;
    } Cell_020ed4c4;
    typedef struct {
        u8 *data;
        u16 duration;
        u16 pad;
    } Frame_020ed4c4;
    typedef struct {
        u16 count;
        u16 start;
        unsigned int flags;
        s32 mode;
        Frame_020ed4c4 *frames;
    } Sequence_020ed4c4;
    typedef struct {
        Frame_020ed4c4 *frame;
        u32 unk_4;
        s32 reverse;
        s32 playing;
        s32 elapsed;
        s32 speed;
        s32 mode;
        Sequence_020ed4c4 *sequence;
        u8 pad_20[0x10];
        Cell_020ed4c4 *cell;
        void *bank;
    } Anim_020ed4c4;
    extern s32 func_02117be0(void *, s32);
    extern void *func_021176b0(void *, u32);
    extern void func_02118eec(void *, s32);
    extern void func_02118e94(void *, s16, s16);
    register s32 role10;
    register u8 *link;
    register u8 *sprite;
    u8 *actor = (u8 *)arg0;
    s32 *center = (s32 *)arg1;
    s32 advance;
    s32 screenY;
    s32 visible;
    s32 outside;
    Vec3_020ed4c4 pos;
    s32 mtx2[12];
    s32 mtx1[12];
    s32 cam[3];
    s32 x, z;

    link = *(u8 **)(actor + 0x108);
    sprite = *(u8 **)link;
    pos = *(Vec3_020ed4c4 *)actor;
    func_02001134(data_02170248, mtx1);
    {
        u8 *camera = data_02155984;
        s32 positionX = *(volatile s32 *)(actor + 0x0);
        cam[0] = *(s32 *)(camera + 0x48);
        x = positionX / 0x10000;
        cam[1] = *(s32 *)(camera + 0x4c);
        cam[2] = *(s32 *)(camera + 0x50);
        advance = 1;
        z = *(volatile s32 *)(actor + 0x8) / 0x10000;
        *(volatile u32 *)0x04000500 = advance;
    }
    if (*(s32 *)(actor + 0xf8) != 0) {
        advance = 0;
    }
    if (*(u32 *)(actor + 0x80) & 2) {
        visible = 1;
    } else {
        *(u32 *)(actor + 0x80) &= ~4u;
        visible = 0;
    }

    if ((center[0] + 0x20 > x && center[0] - 0x20 < x &&
         center[1] + 0x20 > z && center[1] - 0x20 < z) || (arg4 & 2)) {
        const s32 *m = data_02170248;
        const s32 *p = data_02170204;
        register s32 vx, vy, vz;
        s32 sx;
        volatile s32 py;
        s64 inv;

        vx = (s32)(((s64)pos.y * data_02170248[3] + (s64)pos.x * data_02170248[0] + (s64)pos.z * data_02170248[6]) >> 12) + data_02170248[9];
        vy = (s32)(((s64)pos.y * data_02170248[4] + (s64)pos.x * data_02170248[1] + (s64)pos.z * data_02170248[7]) >> 12) + data_02170248[10];
        vz = (s32)(((s64)pos.y * data_02170248[5] + (s64)pos.x * data_02170248[2] + (s64)pos.z * data_02170248[8]) >> 12) + data_02170248[11];
        func_02002028((s32)(((s64)vy * data_02170204[7] + (s64)vx * data_02170204[3] + (s64)vz * data_02170204[11]) >> 12) + data_02170204[15]);
        role10 = (s32)(((s64)vy * data_02170204[4] + (s64)vx * data_02170204[0] + (s64)vz * data_02170204[8]) >> 12) + data_02170204[12];
        py = (s32)(((s64)vy * data_02170204[5] + (s64)vx * data_02170204[1] + (s64)vz * data_02170204[9]) >> 12) + data_02170204[13];
        inv = func_02001fd0();
        {
            u32 lo = (u32)inv;
            u32 hi = (u32)((u64)inv >> 32);
            u64 prod = (u64)lo * (u32)py;
            u32 upper;
            upper = (u32)(prod >> 32) + lo * (u32)(py >> 31) + hi * (u32)py;
            screenY = (s32)(upper + ((u32)prod >> 31));
        }
        screenY = (screenY + 0x1000) >> 1;
        screenY = (s32)((((u32)screenY << 6) + (screenY << 7) + 0x800) & 0xffffffffu) >> 12;
        screenY = 0xc0 - screenY;
        *(s32 *)(actor + 0x100) = screenY;
        {
            u32 lo = (u32)inv;
            u32 hi = (u32)((u64)inv >> 32);
            u64 prod = (u64)lo * (u32)role10;
            u32 upper;
            upper = (u32)(prod >> 32) + lo * (u32)(role10 >> 31) + hi * (u32)role10;
            sx = (s32)(upper + ((u32)prod >> 31));
        }
        sx = (sx + 0x1000) >> 1;
        sx = (s32)(((u32)sx << 8) + 0x800) >> 12;
        outside = 0;
        *(s32 *)(actor + 0xfc) = sx;
        if (sx < -0x30 || sx > 0x130 || screenY < -0x10 || screenY > 0xf0) {
            outside = 1;
            *(u32 *)(actor + 0x80) &= ~4u;
        } else {
            *(u32 *)(actor + 0x80) |= 4;
        }
    } else {
        outside = 1;
        visible = 0;
        *(u32 *)(actor + 0x80) = (*(u32 *)(actor + 0x80) & ~4u) & ~4u;
    }

    if (visible != 0 && outside == 0) {
        u32 action;
        if ((*(u32 *)(actor + 0x80) & 1) && *(s32 *)(link + 8) != 0 &&
            (action = actor[0x104]) != 0x3e7) {
            u8 *entry = *(u8 **)(link + 0x10) + action * 4;
            u16 angle = (u16)(*(u16 *)(actor + 0x92) + data_02151fc8);
            s32 dir;
            switch ((s32)entry[0]) {
            case 4: {
                u8 flags = sprite[0x70];
                dir = 2;
                if (angle > 0x7fff) {
                    flags &= (u8)~2;
                } else {
                    flags |= 2;
                }
                sprite[0x70] = flags;
                break;
            }
            case 14: {
                u32 idx = ((u32)(angle + 0xe00c) << 16) >> 30;
                u32 flags = (u8)((const u32 (*)[2])data_02144a64)[idx][0];
                dir = data_02144a60[idx * 8];
                sprite[0x70] = (sprite[0x70] & ~2u) | ((flags & 1) << 1);
                break;
            }
            case 15: {
                u32 idx = ((u32)(angle + 0xe00c) << 16) >> 30;
                u32 flags = (u8)((const u32 (*)[2])data_02144a84)[idx][0];
                dir = data_02144a80[idx * 8];
                sprite[0x70] = (sprite[0x70] & ~2u) | ((flags & 1) << 1);
                break;
            }
            case 0:
            default:
                dir = *(u16 *)(link + 0xc) & 0xff;
                break;
            }
            if (*(u16 *)(link + 0xc) != dir) {
                func_020ed270(link, (u16)(*(u16 *)(entry + 2) + dir), 0);
                *(u16 *)(link + 0xc) = (u16)dir;
            }
        }
        if ((sprite[0x70] >> 1) & 1) {
            *(u32 *)(data_02151c88 + 0x24) |= 1;
        } else {
            *(u32 *)(data_02151c88 + 0x24) &= ~1u;
        }
        if (arg2 == 0) {
            s32 factor = func_02001fb0(0x1000, 0x165);
            s32 focal = (s32)(((s64)(s32)((u32)factor << 7) * 0xff0 + 0x800) >> 12);
            s32 inverse = func_02001fc0(focal);
            s32 depth, q, scale;

            func_02008f24(data_02170248, mtx2);
            ((volatile s32 *)mtx1)[9] = pos.x - (s32)((u32)cam[0] << 2);
            ((volatile s32 *)mtx1)[10] = pos.y - (s32)((u32)cam[1] << 2);
            ((volatile s32 *)mtx1)[11] = pos.z - (s32)((u32)cam[2] << 2);
            func_02001508(mtx1, mtx2, mtx2);
            depth = (s32)(((s64)data_02170248[8] * ((volatile s32 *)mtx1)[11] + 0x800) >> 12)
                + ((s32)(((s64)data_02170248[2] * ((volatile s32 *)mtx1)[9] + 0x800) >> 12)
                + (s32)(((s64)data_02170248[5] * ((volatile s32 *)mtx1)[10] + 0x800) >> 12))
                + data_02170248[11];
            q = func_02001fb0(-depth, focal);
            scale = (inverse * q - 0x400) >> 1;
            func_02001160(mtx2, mtx2, scale, scale, -0x800);
        }
        {
            Cell_020ed4c4 *cell = *(Cell_020ed4c4 **)(sprite + 0x30);
            u32 count = cell->count;
            u16 i = 0;
            u8 *state;
            *(volatile u32 *)0x040004a8 = *(u32 *)(*(u8 **)(*(u8 **)(sprite + 0x58) + 0x10) + 0x2c);
            state = data_02151c88;
            if (count != 0) {
                volatile u32 *translate = (volatile u32 *)0x04000470;
                volatile u32 *scale = (volatile u32 *)0x0400046c;
                volatile u32 *texcoord = (volatile u32 *)0x04000488;
                volatile u32 *vertex = (volatile u32 *)0x04000490;
                volatile u32 *restore = (volatile u32 *)0x04000448;
                volatile u32 *matrixMode = (volatile u32 *)0x04000444;
                volatile u32 *fifo = (volatile u32 *)0x04000400;
                volatile s32 signMask = -0x100;
                do {
                    Attr_020ed4c4 *ent = &cell->items[i];
                    s32 ox;
                    u32 shape, attr, shift;
                    s32 tile;
                    s32 height, width;
                    s32 u0, u1, v0, v1;
                    s32 widthFixed, scaleY;
                    volatile s32 depth;
                    volatile s32 scaleX;
                    u16 tu0, tu1, tv0, tv1;
                    u32 flip;
                    u32 quadIndex;

                    *(u16 *)(state + 0x38) = ent->attr0;
                    *(u16 *)(state + 0x3a) = ent->attr1;
                    *(u16 *)(state + 0x3c) = ent->attr2;
                    *(volatile u32 *)0x040004ac = (*(u32 *)(*(u8 **)(*(u8 **)(sprite + 0x58) + 0x14) + 0x1c) + (((u32)*(volatile u32 *)(state + 0x3c) << 16 >> 28) << 5)) >> 4;
                    *matrixMode = 0;
                    *fifo = 0x17;
                    ((void (*)(void *, volatile u32 *))func_020055b0)(mtx2, fifo);

                    role10 = (u8)*(volatile u32 *)(state + 0x38);
                    if (role10 > 0x7f) {
                        role10 |= signMask;
                    }
                    flip = *(u32 *)(data_02151c88 + 0x24);
                    if (flip != 0) {
                        attr = *(volatile u32 *)(state + 0x38);
                        shape = attr & 0xc000c000u;
                        ox = (attr << 7) >> 23;
                        if (0xff < ox) {
                            ox |= signMask;
                        }
                        ox = (s16)-(ox + data_02144d84[(shape & 0xc000) >> 14][shape >> 30]);
                        attr = *(volatile u32 *)(state + 0x38);
                        *(volatile u32 *)(state + 0x38) = (attr & ~0x10000000u) | ((((flip & 1) != 0) ^ ((attr >> 28) & 1)) << 28);
                    } else {
                        ox = (*(volatile u32 *)(state + 0x38) << 7) >> 23;
                        if (ox > 0xff) {
                            ox |= signMask;
                        }
                    }

                    attr = *(volatile u32 *)(state + 0x38);
                    shape = attr & 0xc000c000u;
                    shift = *(u32 *)(*(u8 **)(*(u8 **)(sprite + 0x58) + 0x10) + 0xc);
                    height = data_02144d6c[(shape & 0xc000) >> 14][shape >> 30];
                    width = data_02144d84[(shape & 0xc000) >> 14][shape >> 30];
                    tile = (s32)((*(volatile u32 *)(state + 0x3c) << 22) >> 22);
                    u0 = (s32)((tile & ((1u << shift) - 1)) << 15);
                    v0 = (s32)((tile >> shift) << 15);
                    widthFixed = width << 12;
                    u1 = u0 + widthFixed;
                    role10 = (s16)(role10 + *(s16 *)(sprite + 0x4a));
                    if (attr & 0x10000000u) {
                        s32 tmp = u0;
                        u0 = u1 - 1;
                        u1 = tmp - 1;
                    }
                    v1 = v0 + (height << 12);
                    if (*(volatile u32 *)(state + 0x38) & 0x20000000u) {
                        s32 tmp = v0;
                        v0 = v1 - 1;
                        v1 = tmp - 1;
                    }
                    if ((sprite[0x70] >> 1) & 1) {
                        ox = (s16)(ox - *(s16 *)(sprite + 0x48));
                    } else {
                        ox = (s16)(ox + *(s16 *)(sprite + 0x48));
                    }
                    *translate = (u32)ox << 12;
                    *translate = (u32)-role10 << 12;
                    quadIndex = i;
                    if (*(u16 *)(actor + 0x8e) == 0x457 && *(u16 *)(link + 0xc) == 1 && i == 2) {
                        quadIndex = 1;
                    }
                    depth = (s32)((quadIndex - arg3) << 12);
                    scaleX = widthFixed + 0x120;
                    scaleY = -(height << 12) - 0x120;
                    tv1 = ((u32)v1 << 8) >> 16;
                    tu0 = ((u32)u0 << 8) >> 16;
                    tu1 = ((u32)u1 << 8) >> 16;
                    tv0 = ((u32)v0 << 8) >> 16;
                    {
                        u32 priority = (*(volatile u32 *)(state + 0x3c) << 20) >> 30;
                        u32 packed0 = tu0 | ((u32)tv1 << 16);
                        u32 packed1 = tu1 | ((u32)tv1 << 16);
                        u32 packed2 = tu1 | ((u32)tv0 << 16);
                        u32 packed3 = tu0 | ((u32)tv0 << 16);
                        *translate = depth + priority;
                    *scale = scaleX;
                    *scale = scaleY;
                    *scale = 0x1000;
                    *texcoord = packed0;
                    *vertex = 0x10000;
                    *texcoord = packed1;
                    *vertex = 0x10040;
                    *texcoord = packed2;
                    *vertex = 0x40;
                    *texcoord = packed3;
                    *vertex = 0;
                    *restore = 1;
                    }
                    i++;
                } while (i < count);
            }
        }
    }

    {
        register s32 one = 1;
        register s32 zero = 0;
        s32 changed;
        register u32 update;
        Anim_020ed4c4 *anim = (Anim_020ed4c4 *)sprite;
        s32 delta;
        if (advance == 0) {
            return;
        }
        update = arg4 & 1;
        if (update == 0) {
            return;
        }
        delta = (s32)(*(u32 *)(sprite + 0x60) << arg5);
        changed = zero;
        *(s32 *)(link + 0x14) = changed;
        if (anim->playing != 0) {
            s32 step = (s32)(((s64)anim->speed * delta + 0x800) >> 12);
            if (step < 0) {
                step = -step;
            }
            anim->elapsed += step;
            while (anim->playing != 0 && anim->elapsed >= (anim->frame->duration << 12)) {
                Sequence_020ed4c4 *seq;
                Frame_020ed4c4 *cur;
                s32 end;
                anim->elapsed -= anim->frame->duration << 12;
                changed = one;
                anim->frame += 1;
                seq = anim->sequence;
                cur = anim->frame;
                if ((anim->speed > 0 ? 1 : 0) ^ anim->reverse) {
                    end = (u32)cur >= (u32)(seq->frames + seq->count);
                } else {
                    end = (u32)cur <= (u32)(seq->frames + seq->start - 1);
                }
                if (link != NULL) {
                    *(s32 *)(link + 0x14) = end;
                }
                if (end != 0) {
                    s32 mode = anim->mode;
                    if (mode == 0) {
                        mode = anim->sequence->mode;
                    }
                    if (mode == 2 || mode == 4) {
                        seq = anim->sequence;
                        anim->frame = seq->frames + seq->start;
                        anim->elapsed = zero;
                        func_02117be0(anim, zero);
                    } else {
                        anim->playing = zero;
                    }
                    seq = anim->sequence;
                    cur = anim->frame;
                    if ((u32)cur > (u32)(seq->frames + seq->count - 1)) {
                        anim->frame = seq->frames + seq->count - 1;
                    } else if ((u32)cur < (u32)seq->frames) {
                        anim->frame = seq->frames;
                    }
                }
            }
        }
        if (changed != 0 && update != 0 && anim->frame->duration != 0) {
            u8 *frame = anim->frame->data;
            s32 flags;
            anim->cell = (Cell_020ed4c4 *)func_021176b0(anim->bank, *(u16 *)frame);
            flags = anim->sequence->flags & 0xff;
            func_02118eec(sprite + 0x3c, one);
            if (flags != 0) {
                func_02118e94(sprite + 0x3c, *(s16 *)(frame + 4), *(s16 *)(frame + 6));
            }
        }
    }
}

