/* 10 functions from 0x020A3814 to 0x020A47C8 (main), found by ds-decomp. */
#include "common.h"
extern void *func_0203be10(s32);
extern void func_0210fe1c(void *, u32, char *, s32);
extern void func_02108ffc(void);
extern void func_020a37f0(void *, void *, u32);
extern void func_0210e9e8(void *, s32, u32, void *);
extern void func_0210ea6c(void *, s32, u32, void *);

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkc;
    u32 unk10;
    u32 unk14;
    u32 unk18;
} UnkStruct_020a3bbc;

extern void **data_0216012c;
extern void func_0203c168(void *);
extern void func_0210c5dc(void *);
extern void func_021098ac(void *);

typedef struct {
    u16 unk0;
    u16 unk2;
} UnkPair_021430cc;

typedef struct {
    void *unk0;
    u32 unk4;
    void *unk8;
    u32 unkc;
} UnkStruct_020a473c;

extern UnkPair_021430cc data_021430cc[5];
extern u32 data_02155c3c;
extern UnkStruct_020a473c *data_02160130;
extern char data_0214fe18[];
extern char data_0214fe38[];
extern char data_0214fe40[];
extern void *func_0210c594(s32, u32);
extern void *func_02109c60(char *, u32 *);
extern void func_02005e80(char *, const char *, ...);
extern u16 data_021430c8[2];
extern u8 *data_02160204;
extern void func_020a3ce8(s16 *);
extern void func_020a48d0(s32, s32, s32, s32, s32, s32, s32);

static inline void draw_quad_020a3d8c(s16 a0, s16 a1, s16 a2, s16 a3, s16 a4, s16 a5, s16 a6, s16 a7, s16 a8) {
    s16 buf[9];
    buf[0] = a0;
    buf[1] = a1;
    buf[2] = a2;
    buf[3] = a3;
    buf[4] = a4;
    buf[5] = a5;
    buf[6] = a6;
    buf[7] = a7;
    buf[8] = a8;
    func_020a3ce8(buf);
}

void *func_020a3814(void *arg0,s32 arg1,char *arg2) {
u32 size;
u8 skip[256], header[256];
u8 *result;
u8 *file;
u8 *a,*p;
s32 i;
u32 *entry;
result=func_0203be10(arg1);
a=result;
file=func_02109c60(arg2,&size);
func_0210fe1c(file,size,arg2,1);
func_02108ffc();
p=file;
for(i=0;i<arg1;i++) {
if(i!=0) {
func_020a37f0(skip,p,256);
p=p+256+((*(s32 *)(skip+252)+63)/64)*64;
}
func_020a37f0(header,p,256);
if(p+256==0) return 0;
entry=(u32 *)((u8 *)arg0+i*20);
func_0210e9e8(p+256,*(s32 *)(header+252),entry[0],a);
func_020a37f0(skip,p,256);
p=p+256+((*(s32 *)(skip+252)+63)/64)*64;
func_020a37f0(header,p,256);
if(entry[1]==0) {
if(p+256==0) return 0;
func_0210ea6c(p+256,*(s32 *)(header+252),entry[0],a+8);
} else {
if(p+256==0) return 0;
func_0210ea6c(p+256,*(s32 *)(header+252),entry[1],a+8);
}
*(u32 *)(a+16)=entry[2];
*(u32 *)(a+20)=entry[3];
*(u32 *)(a+24)=entry[4];
a+=28;
}
func_02108ffc();
if(file) func_0210c5dc(file);
return result;
}

extern void func_0203be60(void *, u32, u32);
extern void func_021091b4(void);
void *func_020a39ac(void *arg0,s32 arg1,char *arg2) {
u32 size;
u8 skip[256], header[256];
u8 *result;
u8 *file;
u8 *a,*p;
s32 i;
u32 *entry;
result=func_0203be10(arg1);
a=result;
file=func_02109c60(arg2,&size);
func_0210fe1c(file,size,arg2,1);
func_02108ffc();
p=file;
for(i=0;i<arg1;i++) {
if ((u32)(i-134)<=2) {
entry=(u32 *)((u8 *)arg0+i*20);
if(entry[1]==0) func_0203be60(a,entry[0],entry[0]);
else func_0203be60(a,entry[0],entry[1]);
} else {
if(i!=0) {
func_020a37f0(skip,p,256);
p=p+256+((*(s32 *)(skip+252)+63)/64)*64;
}
func_020a37f0(header,p,256);
if(p+256==0) return 0;
entry=(u32 *)((u8 *)arg0+i*20);
func_0210e9e8(p+256,*(s32 *)(header+252),entry[0],a);
func_020a37f0(skip,p,256);
p=p+256+((*(s32 *)(skip+252)+63)/64)*64;
func_020a37f0(header,p,256);
if(entry[1]==0) {
if(p+256==0) return 0;
func_0210ea6c(p+256,*(s32 *)(header+252),entry[0],a+8);
} else {
if(p+256==0) return 0;
func_0210ea6c(p+256,*(s32 *)(header+252),entry[1],a+8);
}
}
*(u32 *)(a+16)=entry[2];
*(u32 *)(a+20)=entry[3];
*(u32 *)(a+24)=entry[4];
a+=28;
}
func_021091b4();
if(file) func_0210c5dc(file);
return result;
}

void func_020a3b84(void) {
    func_0203c168(*data_0216012c);
    if (data_0216012c != NULL) {
        func_0210c5dc(data_0216012c);
        data_0216012c = NULL;
    }
}

void func_020a3bb8(void) {
}

void func_020a3bbc(s32 arg0) {
    UnkStruct_020a3bbc *base = *(UnkStruct_020a3bbc **)((u8 *)*data_0216012c + 0x30);
    *(volatile u32 *)0x040004a8 = (base[arg0].unk4 >> 3) | (base[arg0].unk18 << 26) |
                                  0x40000000 | (base[arg0].unk10 << 20) |
                                  (base[arg0].unk14 << 23) | 0x20000000;
    *(volatile u32 *)0x040004ac = base[arg0].unkc >> (4 - (base[arg0].unk18 == 2));
    *(volatile u32 *)0x04000480 = 0x7fff;
}

void func_020a3c54(s32 arg0) {
    UnkStruct_020a3bbc *base = *(UnkStruct_020a3bbc **)((u8 *)*data_0216012c + 0x30);
    *(volatile u32 *)0x040004a8 = (base[arg0].unk4 >> 3) | (base[arg0].unk18 << 26) |
                                  0x40000000 | (base[arg0].unk10 << 20) |
                                  (base[arg0].unk14 << 23);
    *(volatile u32 *)0x040004ac = base[arg0].unkc >> (4 - (base[arg0].unk18 == 2));
    *(volatile u32 *)0x04000480 = 0x7fff;
}

void func_020a3ce8(s16 *arg0) {
    s16 sp[10];
    sp[1] = arg0[0];
    sp[2] = arg0[1];
    sp[3] = arg0[2];
    sp[4] = arg0[3];
    sp[5] = arg0[4];
    sp[6] = arg0[5];
    sp[7] = arg0[6];
    if ((arg0[7] != 0 && arg0[7] != arg0[2]) || (arg0[8] != 0 && arg0[8] != arg0[3])) {
        sp[0] = 1;
        sp[8] = arg0[7];
        sp[9] = arg0[8];
    } else {
        sp[0] = 0;
        sp[8] = arg0[2];
        sp[9] = arg0[3];
    }
    func_021098ac(sp);
}

extern void func_020a46cc(s16, s16, s16, s16, s16, s16, s16);
void func_020a3d8c(u8 *arg0, u8 *arg1) {
    s16 arr[2];
    s32 i;
    s32 v34, hp, maxHp, mp, maxMp, gauge;
    s16 w;
    u16 icon;

    if (arg1 == NULL) {
        return;
    }

    *(volatile u32 *)0x04000444 = 0;
    {
        s32 x = *(s16 *)(arg0 + 0x18) << 12;
        s32 z = *(s16 *)(arg0 + 0x1c) << 12;
        s32 y = *(s16 *)(arg0 + 0x1a) << 12;
        *(volatile u32 *)0x04000470 = x;
        *(volatile u32 *)0x04000470 = y;
        *(volatile u32 *)0x04000470 = z;
    }

    if (*(s32 *)(arg0 + 0x20) == 0) {
        func_020a3bbc(*(s32 *)(arg0 + 0xc));
    } else if (*(s32 *)(arg0 + 0x20) == 1) {
        func_020a3bbc(*(s32 *)(arg0 + 0x10));
    }

    draw_quad_020a3d8c(0, 0, 2, 2, 0, 0, 1, 2, 2);
    draw_quad_020a3d8c(0x1e, 0, 2, 2, 0x4e, 0, 1, 2, 2);
    draw_quad_020a3d8c(0, 0x1e, 2, 2, 0, 0x1d, 1, 2, 2);
    draw_quad_020a3d8c(0x1e, 0x1e, 2, 2, 0x4e, 0x1d, 1, 2, 2);
    draw_quad_020a3d8c(3, 0, 1, 1, 0, 2, 1, 2, 0x1b);
    draw_quad_020a3d8c(3, 0, 1, 1, 0x4e, 2, 1, 2, 0x1b);
    draw_quad_020a3d8c(3, 0, 1, 1, 2, 0, 1, 0x4c, 0x1f);

    func_020a3bbc(*(s32 *)(arg0 + 4));
    draw_quad_020a3d8c(0xa, 0, 1, 1, 2, 2, 3, 0x2a, 1);
    draw_quad_020a3d8c(0xa, 0, 1, 1, 2, 0x16, 3, 0x2a, 1);
    draw_quad_020a3d8c(0xa, 0, 1, 1, 2, 2, 3, 1, 0x15);
    draw_quad_020a3d8c(0xa, 0, 1, 1, 0x2b, 2, 3, 1, 0x15);
    draw_quad_020a3d8c(4, 7, 1, 1, 3, 3, 2, 0x28, 0x13);

    func_020a3c54(*(s32 *)(arg0 + 4));
    arr[0] = data_021430c8[0];
    arr[1] = data_021430c8[1];
    for (i = 0; i < 2; i++) {
        draw_quad_020a3d8c(0, 0xb, 1, 4, 0x2d, arr[i], 2, 0, 0);
        draw_quad_020a3d8c(1, 0xb, 1, 4, 0x2e, arr[i], 2, 0x1f, 4);
        draw_quad_020a3d8c(0, 0xb, 1, 4, 0x4d, arr[i], 2, 0, 0);
    }

    if (data_02160204[0x11c] == 1) {
        s32 flag = 0;
        s8 v;
        func_020a3bbc(0);
        v = *(s8 *)(arg0 + 0x28);
        if (v != 0 && (v % 6) > 2) {
            flag = 1;
        }
        if (flag == 0) {
            for (i = 0; i < 25; i++) {
                func_020a46cc(0, 7, 4, 4, (s16)(i * 3 + 2), 25, 2);
            }
        } else {
            for (i = 0; i < 25; i++) {
                func_020a46cc(8, 7, 4, 4, (s16)(i * 3 + 2), 25, 2);
            }
        }
    }

    func_020a3bbc(*(s32 *)(arg0 + 4));
    draw_quad_020a3d8c(1, 0, 9, 7, 2, 0x10, 4, 0, 0);
    draw_quad_020a3d8c(0xa, 0, 0xb, 6, 0x2d, 3, 2, 0, 0);
    draw_quad_020a3d8c(0x15, 0, 0xb, 5, 0x2d, 0xe, 2, 0, 0);

    func_020a3bbc(*(s32 *)(arg0 + 0));
    draw_quad_020a3d8c(2, 1, 0x28, 0x13, 3, 3, 3, 0, 0);

    if (*(s16 *)(arg1 + 0xbc) != 0) {
        func_020a3bbc(*(s32 *)(arg0 + 8));
        *(volatile u32 *)0x040004a4 = 0x1480c0;
        draw_quad_020a3d8c(0, 5, 1, 1, 3, 3, 4, 0x28, 0x13);
        *(volatile u32 *)0x040004a4 = 0x1f0080;
    }

    v34 = *(s16 *)(arg1 + 0x34);
    hp = *(s32 *)(arg1 + 4);
    maxHp = *(s32 *)(arg1 + 8);
    mp = *(s16 *)(arg1 + 0xc);
    maxMp = *(s16 *)(arg1 + 0xe);
    gauge = *(s16 *)(arg1 + 0x5a);

    func_020a3bbc(*(s32 *)(arg0 + 8));
    if (hp != 0) {
        w = (hp * 31) / maxHp;
    } else {
        w = 0;
    }
    if (w != 0) {
        draw_quad_020a3d8c(0, 1, 0x1f, 2, 0x2e, 9, 3, w, 2);
    } else if (hp != 0) {
        draw_quad_020a3d8c(0, 1, 0x1f, 2, 0x2e, 9, 3, 1, 2);
    }

    if (mp != 0) {
        w = (mp * 31) / maxMp;
    } else {
        w = 0;
    }
    if (w != 0) {
        draw_quad_020a3d8c(4, 3, 2, 2, 0x2e, 0x14, 3, w, 2);
    } else if (mp != 0) {
        draw_quad_020a3d8c(4, 3, 2, 2, 0x2e, 0x14, 3, 1, 2);
    }

    if (data_02160204[0x11c] == 1) {
        s32 k;
        s32 cnt;
        if (gauge >= 100) {
            gauge = 100;
        }
        cnt = (gauge * 25) / 100;
        func_020a3bbc(*(s32 *)(arg0 + 8));
        for (k = 0; k < 25; k++) {
            if (k < cnt) {
                draw_quad_020a3d8c(0, 3, 2, 2, (s16)((k + 1) * 3), 0x1a, 4, 2, 2);
            }
        }
    }

    func_020a3bbc(3);
    func_020a48d0(v34, 2, 0x10, 0x10, 4, 5, 0);
    func_020a48d0(hp, 4, 0x48, 2, 2, 5, 0);
    func_020a48d0(mp, 3, 0x48, 0xd, 2, 5, 0);

    icon = *(u16 *)(*(u8 **)(arg1 + 0xa0) + 2);
    if (icon != 0) {
        func_020a3bbc(icon);
        draw_quad_020a3d8c(0, 0, 0xc, 0xc, 2, 2, 4, 0xc, 0xc);
    }

    *(volatile u32 *)0x04000448 = 1;
}

void func_020a46cc(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    typedef struct {
        s16 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9;
    } Unk;
    Unk sp;
    sp = *(Unk *)data_021430cc;
    sp.f1 = arg0;
    sp.f2 = arg1;
    sp.f3 = arg2;
    sp.f4 = arg3;
    sp.f5 = arg4;
    sp.f6 = arg5;
    sp.f7 = arg6;
    sp.f8 = arg2;
    sp.f9 = arg3;
    func_021098ac(&sp);
}

void func_020a473c(void) {
    u32 sp0;
    char buf[0x1c];
    UnkStruct_020a473c *p = func_0210c594(0x24, data_02155c3c);
    data_02160130 = p;
    data_02160130->unk0 = func_02109c60(data_0214fe18, &p->unk4);
    func_02005e80(buf, data_0214fe38, data_0214fe40, 1);
    data_02160130->unk8 = func_02109c60(buf, &sp0);
    data_02160130->unkc = sp0;
}

