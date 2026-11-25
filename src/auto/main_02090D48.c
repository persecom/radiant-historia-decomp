/* 5 functions from 0x02090D48 to 0x02091CD8 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[10];
} Unk20;

typedef struct {
    s16 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9;
} Unk20s;

extern const Unk20 data_02140f54;
extern const Unk20 data_02140f68;
extern const Unk20 data_02141120;
extern const Unk20 data_02140fb8;

extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern const Unk20 data_02140fa4, data_02140f90;
extern u8 *data_0216010c;
extern void func_02092814(s32, s32, s16, s16, s16, s16, s16);
extern void func_0209250c(s16, s32, s16, s16, s16, s16, s16, s16, s16, s16, s16, s16, s16);
extern void func_020895a0(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_0208dc14(s16, s16, s16, s16, s32);
extern void func_020a30c4(u16);
extern void func_020a8810(void *, s32);
extern void func_020a994c(void *);
extern s32 func_02085110(u8);
extern u8 *func_02021f10(s32);
void func_02090d48(s32 kind,s16 x,s16 y,s16 w,s16 w2,s16 z) {
Unk20 b=data_02140fb8;
s32 extra=0;
func_020a3bbc(0x40);
((s16 *)b.unk)[7]=z;
((s16 *)b.unk)[2]=((s16 *)b.unk)[1]=0;((s16 *)b.unk)[8]=2;((s16 *)b.unk)[3]=2;((s16 *)b.unk)[5]=x;((s16 *)b.unk)[6]=y;
func_021098ac(&b);
s32 px=x+2;
((s16 *)b.unk)[1]=1;((s16 *)b.unk)[2]=0;((s16 *)b.unk)[3]=2;((s16 *)b.unk)[5]=px;((s16 *)b.unk)[6]=y;((s16 *)b.unk)[8]=w;
func_021098ac(&b);
if(kind==1) {
((s16 *)b.unk)[2]=0;extra=7;((s16 *)b.unk)[1]=4;((s16 *)b.unk)[8]=extra;((s16 *)b.unk)[3]=extra;((s16 *)b.unk)[5]=px+w;((s16 *)b.unk)[6]=y;func_021098ac(&b);
} else if(kind==2) {
((s16 *)b.unk)[2]=0;extra=5;((s16 *)b.unk)[1]=11;((s16 *)b.unk)[8]=extra;((s16 *)b.unk)[3]=extra;((s16 *)b.unk)[5]=px+w;((s16 *)b.unk)[6]=y;func_021098ac(&b);
}
s32 end=extra+(px+w);
((s16 *)b.unk)[1]=1;((s16 *)b.unk)[2]=0;((s16 *)b.unk)[3]=2;((s16 *)b.unk)[5]=end;((s16 *)b.unk)[6]=y;((s16 *)b.unk)[8]=w2;func_021098ac(&b);
((s16 *)b.unk)[1]=2;((s16 *)b.unk)[2]=0;((s16 *)b.unk)[8]=2;((s16 *)b.unk)[3]=2;((s16 *)b.unk)[5]=w2+end;((s16 *)b.unk)[6]=y;func_021098ac(&b);
}

void func_020a3bbc(s32);
void func_020922f8(s32, s32, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s16);
void func_02090ea8(s16 x, s16 y, s16 z) {
    struct S50 { u8 pad[0x50]; };
    struct UnkP {
        u8 pad[0x38];
        u16 unk38;
        u16 unk3a;
        u16 unk3c[3];
    };
    struct UnkG {
        u8 pad[0x539c];
        s16 unk539c;
    };
    Unk20 a = data_02140fa4;
    Unk20 b = data_02140f90;
    u8 *g = data_0216010c;
    struct UnkP *p = (struct UnkP *)func_02021f10(func_02085110(g[0x50dc]));
    s32 i;

    func_02092814(6, 0, x, y, 180, 128, z);
    func_02092814(30, 1, (s16)(x + 3), (s16)(y + 0x16), 173, 41, (s16)(z + 1));
    func_02092814(30, 1, (s16)(x + 3), (s16)(y + 0x40), 173, 62, (s16)(z + 1));
    func_020a8810(*(void **)(data_0216010c + 0x70), 0x16);
    func_020895a0(0, (x + 0x22) << 12, (y + 5) << 12, 0x5a, 4, (u16)(func_02085110(data_0216010c[0x50dc]) + 1), 0, 0, 0);

    if (!(((struct UnkG *)data_0216010c)->unk539c & 4)) {
        ((struct UnkG *)data_0216010c)->unk539c &= ~1;
    }

    if (g[0x50dd] == 0) {
        func_0209250c(0x30, 1, (s16)(x + 0x1a), (s16)(y + 0x18), 155, 19, 8, 16, 4, 2, 4, 4, (s16)(z + 2));
        func_020a8810(*(void **)(data_0216010c + 0xc0), 0x13);
        if (p->unk38 != 0) {
            ((struct UnkG *)data_0216010c)->unk539c |= 1;
        }
    } else {
        func_0209250c(0x2f, 1, (s16)(x + 0x1a), (s16)(y + 0x18), 155, 19, 8, 16, 4, 2, 4, 4, (s16)(z + 2));
        func_020a8810(*(void **)(data_0216010c + 0xc0), 0x14);
    }
    func_0208dc14(1, (s16)(x + 6), (s16)(y + 0x18), (s16)(z + 2), 0);
    if (p->unk38 != 0) {
        func_020895a0(1, (x + 0x32) << 12, (y + 0x1a) << 12, 0x5a, 0, p->unk38, 0, 0, 0);
        ((s16 *)b.unk)[5] = x + 0x1c;
        ((s16 *)b.unk)[6] = y + 0x19;
        ((s16 *)b.unk)[7] = z + 3;
        func_020a30c4(p->unk38);
        func_021098ac(&b);
    } else {
        func_020a994c(data_0216010c + 0xc4);
    }

    if (g[0x50dd] == 1) {
        func_0209250c(0x30, 1, (s16)(x + 0x1a), (s16)(y + 0x2c), 155, 19, 8, 16, 4, 2, 4, 4, (s16)(z + 2));
        func_020a8810(*(void **)(data_0216010c + 0x110), 0x13);
        if (p->unk3a != 0) {
            ((struct UnkG *)data_0216010c)->unk539c |= 1;
        }
    } else {
        func_0209250c(0x2f, 1, (s16)(x + 0x1a), (s16)(y + 0x2c), 155, 19, 8, 16, 4, 2, 4, 4, (s16)(z + 2));
        func_020a8810(*(void **)(data_0216010c + 0x110), 0x14);
    }
    func_0208dc14(2, (s16)(x + 6), (s16)(y + 0x2c), (s16)(z + 2), 0);
    if (p->unk3a != 0) {
        func_020895a0(2, (x + 0x32) << 12, (y + 0x2e) << 12, 0x5a, 0, p->unk3a, 0, 0, 0);
        ((s16 *)b.unk)[5] = x + 0x1c;
        ((s16 *)b.unk)[6] = y + 0x2d;
        ((s16 *)b.unk)[7] = z + 3;
        func_020a30c4(p->unk3a);
        func_021098ac(&b);
    } else {
        func_020a994c(data_0216010c + 0x114);
    }

    for (i = 0; i < 3; i++) {
        if (g[0x50dd] == i + 2) {
            func_0209250c(0x30, 1, (s16)(x + 0x1a), (s16)(y + 0x42 + i * 0x14), 155, 19, 8, 16, 4, 2, 4, 4, (s16)(z + 2));
            func_020a8810(*(void **)(&((struct S50 *)data_0216010c)[i].pad[0x160]), 0x13);
            if (p->unk3c[i] != 0) {
                ((struct UnkG *)data_0216010c)->unk539c |= 1;
            }
        } else {
            func_0209250c(0x2f, 1, (s16)(x + 0x1a), (s16)(y + 0x42 + i * 0x14), 155, 19, 8, 16, 4, 2, 4, 4, (s16)(z + 2));
            func_020a8810(*(void **)(&((struct S50 *)data_0216010c)[i].pad[0x160]), 0x14);
        }
        if (p->unk3c[i] != 0) {
            func_020895a0((u16)(i + 3), (x + 0x32) << 12, (y + 0x44 + i * 0x14) << 12, 0x5a, 0, p->unk3c[i], 0, 0, 0);
            ((s16 *)b.unk)[5] = x + 0x1c;
            ((s16 *)b.unk)[6] = y + 0x44 + i * 0x14;
            ((s16 *)b.unk)[7] = z + 3;
            func_020a30c4(p->unk3c[i]);
            func_021098ac(&b);
        } else {
            func_020a994c(&((struct S50 *)(data_0216010c + 0x74))[i + 3]);
        }
        func_0208dc14(3, (s16)(x + 6), (s16)(y + 0x42 + i * 0x14), (s16)(z + 2), 0);
    }

    if ((*(s16 *)(data_0216010c + 0x534e) & 2) || (*(s16 *)(data_0216010c + 0x534e) & 4)) {
        func_020a3bbc(0x38);
        *(s16 *)(data_0216010c + 0x534e) &= ~4;
    } else {
        func_020a3bbc(0x37);
    }
    ((s16 *)a.unk)[1] = 0;
    ((s16 *)a.unk)[2] = 0;
    ((s16 *)a.unk)[5] = x + 0xa;
    ((s16 *)a.unk)[6] = y + 4;
    ((s16 *)a.unk)[7] = z + 1;
    func_021098ac(&a);

    if ((*(s16 *)(data_0216010c + 0x531a) & 2) || (*(s16 *)(data_0216010c + 0x531a) & 4)) {
        func_020a3bbc(0x38);
        *(s16 *)(data_0216010c + 0x531a) &= ~4;
    } else {
        func_020a3bbc(0x37);
    }
    ((s16 *)a.unk)[1] = 0x10;
    ((s16 *)a.unk)[2] = 0;
    ((s16 *)a.unk)[5] = x + 0x57;
    ((s16 *)a.unk)[6] = y + 4;
    ((s16 *)a.unk)[7] = z + 1;
    func_021098ac(&a);

    func_020922f8(8, 0, (s16)(x + 0x1a), (s16)(y + 4), 0x3c, 0xf, 8, 0xe, 4, 4, 4, 4, (s16)(z + 1));
}

void func_02091814(s16 mode, s16 x, s16 y, s16 w, s16 h, s16 arg5, s16 arg6, s16 z, s16 arg8, s16 arg9, s16 arg10, s16 arg11) {
    Unk20 b = data_02140f68;
    s16 i;
    s16 px;

    *(volatile u32 *)0x040004A4 = 0x000C00C0;
    func_020a3bbc(0x4d);
    ((s16 *)b.unk)[7] = z;

    for (i = 0; i < 2; i++) {
        ((s16 *)b.unk)[1] = 0x12;
        ((s16 *)b.unk)[2] = i * (arg6 - arg8);
        ((s16 *)b.unk)[3] = ((s16 *)b.unk)[8] = arg8;
        ((s16 *)b.unk)[4] = ((s16 *)b.unk)[9] = arg10;
        ((s16 *)b.unk)[5] = x;
        ((s16 *)b.unk)[6] = y + i * (h - arg10);
        func_021098ac(&b);

        ((s16 *)b.unk)[1] = arg5 + 0x12 - arg8;
        ((s16 *)b.unk)[2] = i * (arg6 - arg8);
        ((s16 *)b.unk)[3] = ((s16 *)b.unk)[8] = arg8;
        ((s16 *)b.unk)[4] = ((s16 *)b.unk)[9] = arg10;
        ((s16 *)b.unk)[5] = x + w - arg8;
        ((s16 *)b.unk)[6] = y + i * (h - arg10);
        func_021098ac(&b);

        ((s16 *)b.unk)[1] = i * (arg5 - arg8) + 0x12;
        ((s16 *)b.unk)[2] = arg11;
        ((s16 *)b.unk)[3] = arg8;
        ((s16 *)b.unk)[4] = arg10;
        ((s16 *)b.unk)[8] = arg8;
        ((s16 *)b.unk)[9] = h - arg10 * 2;
        ((s16 *)b.unk)[5] = x + i * (w - arg8);
        ((s16 *)b.unk)[6] = y + arg10;
        func_021098ac(&b);
    }

    px = x + arg8;
    if (mode == 0) {
        ((s16 *)b.unk)[1] = arg8 + 0x12;
        ((s16 *)b.unk)[2] = 0;
        ((s16 *)b.unk)[3] = arg9;
        ((s16 *)b.unk)[4] = arg6;
        ((s16 *)b.unk)[5] = px;
        ((s16 *)b.unk)[6] = y;
        ((s16 *)b.unk)[8] = w - arg8 * 2;
        ((s16 *)b.unk)[9] = h;
        func_021098ac(&b);
    } else {
        ((s16 *)b.unk)[1] = arg9 + 0x12;
        ((s16 *)b.unk)[2] = 0;
        ((s16 *)b.unk)[3] = arg8;
        ((s16 *)b.unk)[4] = arg10;
        ((s16 *)b.unk)[5] = px;
        ((s16 *)b.unk)[6] = y;
        ((s16 *)b.unk)[8] = w - arg8 * 2;
        ((s16 *)b.unk)[9] = arg10;
        func_021098ac(&b);

        if (w > arg8 * 2 && h > arg10 * 2) {
            ((s16 *)b.unk)[1] = arg9 + 0x12;
            ((s16 *)b.unk)[3] = arg9;
            ((s16 *)b.unk)[2] = ((s16 *)b.unk)[4] = arg11;
            ((s16 *)b.unk)[5] = px;
            ((s16 *)b.unk)[6] = y + arg10;
            ((s16 *)b.unk)[8] = w - arg8 * 2;
            ((s16 *)b.unk)[9] = h - arg10 * 2;
            func_021098ac(&b);
        }

        ((s16 *)b.unk)[1] = arg9 + 0x12;
        ((s16 *)b.unk)[2] = arg6 - arg10;
        ((s16 *)b.unk)[3] = arg8;
        ((s16 *)b.unk)[4] = arg10;
        ((s16 *)b.unk)[5] = px;
        ((s16 *)b.unk)[6] = y + h - arg10;
        ((s16 *)b.unk)[8] = w - arg8 * 2;
        ((s16 *)b.unk)[9] = arg10;
        func_021098ac(&b);
    }

    *(volatile u32 *)0x040004A4 = 0x001F00C0;
}

void func_02091b38(s32 kind, s16 x, s16 y, s16 dx, s16 dy, s16 z) {
 Unk20 b = data_02141120;
 s16 w, h;
 func_020a3bbc(0x4d);
 ((s16 *)b.unk)[7]=z;
 if(kind == 1) { ((s16 *)b.unk)[1]=18; h=8; ((s16 *)b.unk)[2]=h; w=7; }
 else { w=17; h=11; ((s16 *)b.unk)[1]=((s16 *)b.unk)[2]=0; }
 ((s16 *)b.unk)[5]=x; ((s16 *)b.unk)[6]=y;
 ((s16 *)b.unk)[3]=w; ((s16 *)b.unk)[4]=h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h;
 func_021098ac(&b);
 ((s16 *)b.unk)[3]=w; ((s16 *)b.unk)[4]=-h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h; ((s16 *)b.unk)[5]=x; ((s16 *)b.unk)[6]=y+dy;
 func_021098ac(&b);
 ((s16 *)b.unk)[3]=-w; ((s16 *)b.unk)[4]=h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h; ((s16 *)b.unk)[5]=x+dx; ((s16 *)b.unk)[6]=y;
 func_021098ac(&b);
 ((s16 *)b.unk)[3]=-w; ((s16 *)b.unk)[4]=-h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h; ((s16 *)b.unk)[5]=x+dx; ((s16 *)b.unk)[6]=y+dy;
 func_021098ac(&b);
}

void func_02091c54(u16 arg0, u16 arg1, u16 arg2) {
    Unk20 buf = data_02140f54;
    func_020a3bbc(0x4e);
    buf.unk[7] = arg2;
    buf.unk[5] = arg0;
    buf.unk[6] = arg1;
    func_021098ac(&buf);
    *(s16 *)&buf.unk[4] = -0x18;
    buf.unk[5] = arg0;
    buf.unk[6] = arg1 + 0x18;
    func_021098ac(&buf);
}
