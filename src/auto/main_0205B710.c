/* 17 functions from 0x0205B710 to 0x0205C65C (main), found by ds-decomp. */
#include "common.h"
extern void func_020ddd5c(void *);
typedef struct { s32 x,y,z; } Vec5C04C;
extern s16 data_0213a394[];

typedef struct Unk0205B710_Sub {
    u8 *unk00;
    u8 pad04[0x2a];
    s16 unk2e;
    u8 pad30[0x22];
    s16 unk52;
} Unk0205B710_Sub;

typedef struct Unk0205B710 {
    u8 pad00[0x4];
    s32 unk04;
    u8 pad08[0x20];
    s32 unk28;
    u8 pad2c[0x4];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    u8 pad3c[0xec];
    Unk0205B710_Sub *unk128;
} Unk0205B710;

extern void func_020d4eb8();
extern void func_020d2b78(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern void *func_02022494(void *arg0, s32 arg1);
extern s32 func_020dddfc(void *arg0, void *arg1, s32 arg2);
extern void func_020020f8(void *arg0, void *arg1, void *arg2);
extern void func_020bfd78(s32, s32, s32, s32, s32, void *, s32, s32);
extern u8 *data_02160a6c;
extern u32 data_0216263c[3];
extern u8 *func_02022558();
extern void func_02025f84(void *, s32);
s32 func_0205b710(u8 *arg0, s32 arg1)
{
    u8 *p;
    u8 *sub;

    if (arg0 == NULL) {
        return 0;
    }
    sub = *(u8 **)(arg0 + 0x118);
    if (*(u32 *)(sub + 0x70) == 0) {
        return 0;
    }
    p = func_02022558(*(void **)(sub + 0x60));
    if (p != NULL) {
        switch (*(u16 *)p) {
        case 0x98: {
            s32 val;
            val = ((*(s8 *)(p + 2) + (*(s16 *)(p + 4) + (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2c) / 5))) * (s32)((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * 4) >> 16) + 0x62)) / 100;
            if (val >= *(s16 *)(p + 6)) {
                val = (*(s16 *)(p + 6) * (s32)((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * 4) >> 16) + 0x62)) / 100;
            } else {
                val = (val * (s32)((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * 4) >> 16) + 0x62)) / 100;
            }
            *(s32 *)(*(u8 **)(arg0 + 0x118) + 4) += val;
            if (*(s32 *)(*(u8 **)(arg0 + 0x118) + 4) > *(s32 *)(*(u8 **)(arg0 + 0x118) + 8)) {
                *(s32 *)(*(u8 **)(arg0 + 0x118) + 4) = *(s32 *)(*(u8 **)(arg0 + 0x118) + 8);
            }
            func_020bfd78(0x80, 0x60, 1, 7, val, arg0, *(u16 *)(arg0 + 0x90), 0);
            return 1;
        }

        case 0x99: {
            s32 val;
            val = (((*(s8 *)(p + 2) / 10) + (*(s16 *)(p + 4) + (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2c) / 50))) * (s32)((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * 4) >> 16) + 0x62)) / 100;
            if (val >= *(s16 *)(p + 6)) {
                val = (*(s16 *)(p + 6) * (s32)((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * 4) >> 16) + 0x62)) / 100;
            } else {
                val = (val * (s32)((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * 4) >> 16) + 0x62)) / 100;
            }
            *(s16 *)(*(u8 **)(arg0 + 0x118) + 0xc) += (s16)val;
            if (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0xc) > *(s16 *)(*(u8 **)(arg0 + 0x118) + 0xe)) {
                *(s16 *)(*(u8 **)(arg0 + 0x118) + 0xc) = *(s16 *)(*(u8 **)(arg0 + 0x118) + 0xe);
            }
            func_020bfd78(0x80, 0x60, 1, 8, val, arg0, *(u16 *)(arg0 + 0x90), 0);
            return 1;
        }

        case 0x9c:
        case 0x9d:
        case 0x9e: {
            s32 ret = 1;
            if (*(s16 *)(p + 4) < 1) {
                ret = 0;
            }
            *(s16 *)(p + 4) -= 1;
            if (*(s16 *)(p + 4) <= 0) {
                func_02025f84(arg0, arg1);
            }
            return ret;
        }

        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8a:
            return 1;
        }
    }

    return 0;
}

s32 func_0205ba98(void *arg0, s32 arg1) {
    if (func_020dddfc(arg0, (u8 *)arg0 + 0x24, arg1 << 12) != 0) {
        return 1;
    }
    func_020020f8(arg0, (u8 *)arg0 + 0x30, arg0);
    return 0;
}

void *func_0205bad4(void *arg0) {
    u8 *p = func_02022494(arg0, 0);
    if (p != NULL) {
        p = *(u8 **)(p + 4);
        if (p != NULL) {
            return *(void **)(p + 0x28);
        }
    }
    return NULL;
}

void func_0205baf8(s32 *arg0) {
s32 distance = func_0210c2f4(arg0, arg0 + 9);
s32 dy = arg0[10] - arg0[1];
s32 a,b,t,aa,bb;
if (distance <= 0xa000) {
s32 angle = func_02002404(distance, dy);
s32 cosine = data_0213a394[((angle >> 4) * 2) + 1];
s32 scale = arg0[19];
arg0[13] = ((long long)cosine * scale + 0x800) >> 12;
return;
}
a = arg0[12]; b = arg0[14];
aa = a; if (a < 0) aa = -a;
bb = b; if (b < 0) bb = -b;
if (bb < aa) t = _s32_div_f(arg0[9] - arg0[0], a);
else t = _s32_div_f(arg0[11] - arg0[2], b);
if (t < 0) t = -t;
arg0[13] = _s32_div_f(dy, t);
if (t <= 8) arg0[13] = dy / 8;
}

void func_0205bbd8(void *arg0) {
    u8 *p = *(u8 **)(data_02160a6c + 0xb8);
    while (p != NULL) {
        u16 *ptr = *(u16 **)(p + 0x124);
        if (*ptr != 0) {
            *ptr = 7;
        }
        p = *(u8 **)(p + 0x174);
    }
    p = func_0205bad4(arg0);
    while (p != NULL) {
        u8 *obj = *(u8 **)p;
        u8 *a = *(u8 **)(obj + 0x118);
        u16 *b = *(u16 **)(obj + 0x124);
        if (*a == 1) {
            if (*(s16 *)(b + 1) != 0 && *b != 0) {
                *b = 3;
            }
        }
        p = *(u8 **)(p + 0x18);
    }
}

void func_0205bc60(s32 *arg0, u8 *arg1, s32 arg2) {
    if (func_020dddfc(arg0, arg0 + 9, arg2 << 12) == 0) {
        return;
    }
    arg0[0xc] = 0;
    arg0[0xe] = 0;
    (*arg1)++;
    if (arg0[0xd] == 0) {
        (*arg1)++;
    }
}

extern s32 func_020dd9b4(void *, s32 *);
extern s32 func_02117d80(s32);
u32 func_0205bcb0(void *arg0, s32 arg1) {
    s32 p;
    u32 ret = 0;
    s32 a = func_020dd9b4(arg0, &p);
    if (p != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80(a)) {
        ret |= 1;
    }
    return ret;
}

extern u32 func_0202e84c(void *);
extern void func_020daefc(void *,void *,void *,s32,void *,s32,s32);
extern void func_0206e990(s32,u16);
void func_0205bce4(u8 *arg0) {
u8 *sub=*(u8 **)(arg0+0x128);
s32 zero=0;
u32 mask=zero;
u8 *info=*(u8 **)(sub+8);
if(*(u16 *)(sub+0x1e)&0x200) return;
if(*(u32 *)(info+8)&0x40) {
u8 *p=*(u8 **)(data_02160a6c+0xb8);
if(p) {
do {
if(p && *(u8 **)(p+0x118)) {
if(*(u16 *)(*(u8 **)(p+0x128)+0x1e)&0x400) return;
}
p=*(u8 **)(p+0x174);
} while(p);
}
}
if(*(s16 *)(sub+0x1c)==0) {
*(s16 *)(sub+0x1c)=1;
if(info[0]!=4) {
u8 *node=func_0205bad4(sub);
while(node) {
u8 *p=*(u8 **)node;
if(p) {
if((*(u32 *)(*(u8 **)(p+0x118)+0x8c)&4) && (*(u16 *)(node+4)&0x20)) mask|=func_0202e84c(p);
if(p && *(u32 *)(p+0x1c0)==1) {
if(!(*(u32 *)(*(u8 **)(p+0x118)+0x8c)&0x20)) {
*(u32 *)(p+0x1c0)=zero;
*(u32 *)p=*(u32 *)(p+0xec);
*(u32 *)(p+8)=*(u32 *)(p+0xf4);
}
}
}
node=*(u8 **)(node+0x18);
}
{
u8 *p; u8 *node; u8 *info2=*(u8 **)(sub+8);
node=func_0205bad4(sub);
while(node) {
p=*(u8 **)node;
if(p && (mask&func_0202e84c(p)) && (*(u16 *)(node+4)&0x20)) {
func_020daefc(arg0,p,info2,zero,node,zero,zero);
if(*(u32 *)(*(u8 **)(p+0x118)+0x8c)&4) {
func_0206e990(18,*(u16 *)(p+0x90));
*(u32 *)(*(u8 **)(p+0x118)+4)=zero;
}
}
node=*(u8 **)(node+0x18);
}
}
}
if(mask==0) {
*(u32 *)(sub+0x24)=300;
*(s16 *)(sub+0x1c)=0;
}
} else {
(*(s16 *)(sub+0x1c))++;
if(*(volatile s16 *)(sub+0x1c)>10) {
*(u32 *)(sub+0x24)=300;
*(s16 *)(sub+0x1c)=zero;
}
}
}

extern u8 **data_02160244;
extern void func_02032208(void *, u32);
extern void func_020d626c(void *);
extern void func_020bfd78(s32, s32, s32, s32, s32, void *, s32, s32);
extern void func_020bfff4(u16);
void func_0205bed4(u8 *arg0) {
    u8 *sub = *(u8 **)(arg0 + 0x128);
    u8 *p = *(u8 **)(sub + 0xc);

    if ((sub[0x20] & 2) == 0) {
        sub[0x20] |= 2;
    }
    if (*(u16 *)(sub + 0x1e) & 0x10) {
        *(u16 *)(sub + 0x1e) &= 0xffef;
        *(u32 *)(sub + 0x24) = 0x391;
        return;
    }
    if (*(u16 *)(sub + 0x1e) & 8) {
        *(u32 *)(sub + 0x24) = 0x38d;
        return;
    }
    if (*(u16 *)(sub + 0x1e) & 0x20) {
        u8 *p2;
        *(u16 *)(sub + 0x1e) &= 0xffdf;
        p2 = *(u8 **)(sub + 0xc);
        *(u16 *)(p2 + 0xe) &= 0xfffb;
        func_02032208(p2, *(u32 *)(p2 + 0x28));
        func_020d626c(arg0);
        func_020bfd78(0, 0, 0, 0xb, 0, arg0, 0, 0);
        return;
    }
    sub[0x20] = 0;
    *(u32 *)(sub + 0x24) = 0x38a;
    func_020bfff4(*(u16 *)(arg0 + 0x90));
    {
        u8 *q = *(u8 **)(arg0 + 0x118);
        if ((*(u32 *)(q + 0x78) & 1) || (*(u32 *)(q + 0x78) & 2) || (*(u32 *)(q + 0x78) & 8) || (*(u32 *)(q + 0x8c) & 0x400)) {
            if ((*(u16 *)(p + 0xe) & 0x200) == 0) {
                *(u16 *)(sub + 0x1e) |= 0x80;
                return;
            }
            (*(u16 *)(*data_02160244 + 0x3e))++;
            return;
        }
    }
    (*(u16 *)(*data_02160244 + 0x3e))++;
}

extern void func_02031498(void *);
extern void func_020223f8(void *,s32);
extern void func_020dd810(void *,s32,s32);
extern Vec5C04C *func_0202c5a0(void *);
extern u16 func_020ddcb0(void *,void *);
extern void func_020ddd8c(void *);
void func_0205c04c(u8 *arg0) {
u8 *sub=*(u8 **)(arg0+0x128);
s32 zero=0;
func_02031498(arg0);
(*(s8 *)(sub+0x50))--;
if(*(volatile s8 *)(sub+0x50)<=0) {
func_020223f8(sub,zero);
if(*(s32 *)arg0==*(s32 *)(arg0+0x18) && *(s32 *)(arg0+8)==*(s32 *)(arg0+0x20) && *(s32 *)(arg0+4)==0x20000) {
if(*(u16 *)(sub+0x1e)&0x100) func_0205aa34(arg0,20);
*(s32 *)(sub+0x24)=zero;
return;
}
*(s32 *)(arg0+0x78)=0xaf0;
func_020ddd5c(arg0);
func_020dd810(arg0,5,zero);
{
Vec5C04C *v=func_0202c5a0(arg0);
*(s32 *)(arg0+0x18)=v->x;
*(s32 *)(arg0+0x1c)=v->y;
*(s32 *)(arg0+0x20)=v->z;
*(s32 *)(arg0+0x24)=*(s32 *)(arg0+0x18);
*(s32 *)(arg0+0x28)=*(s32 *)(arg0+0x1c);
*(s32 *)(arg0+0x2c)=*(s32 *)(arg0+0x20);
}
*(u16 *)(arg0+0x92)=func_020ddcb0(arg0,arg0+0x24);
*(s32 *)(arg0+0x30)=zero;
*(s32 *)(arg0+0x34)=zero;
*(s32 *)(arg0+0x38)=zero;
func_020ddd8c(arg0);
if(*(s32 *)(arg0+4)!=*(s32 *)(arg0+0x28)) func_0205baf8((s32 *)arg0);
*(s32 *)(sub+0x24)=0x389;
} else {
func_020223f8(sub,zero);
func_020d626c(arg0);
if(*(u16 *)(*(u8 **)(sub+12)+14)&1) {*(s32 *)(sub+0x24)=0x390;return;}
if(!(*(u32 *)(*(u8 **)(arg0+0x118)+0x78)&0x30)) func_020dd810(arg0,5,zero);
{
Vec5C04C *v=func_0202c5a0(arg0);
*(s32 *)(arg0+0x18)=v->x;
*(s32 *)(arg0+0x1c)=v->y;
*(s32 *)(arg0+0x20)=v->z;
*(s32 *)(arg0+0x24)=*(s32 *)(arg0+0x18);
*(s32 *)(arg0+0x28)=*(s32 *)(arg0+0x1c);
*(s32 *)(arg0+0x2c)=*(s32 *)(arg0+0x20);
}
*(u16 *)(arg0+0x92)=func_020ddcb0(arg0,arg0+0x24);
*(s32 *)(arg0+0x30)=zero;
*(s32 *)(arg0+0x34)=zero;
*(s32 *)(arg0+0x38)=zero;
func_020ddd8c(arg0);
if(*(s32 *)(arg0+4)!=*(s32 *)(arg0+0x28)) func_0205baf8((s32 *)arg0);
*(s32 *)(sub+0x24)=0x393;
}}

void func_0205c21c(s32 *arg0) {
u8 *p = *(u8 **)((u8 *)arg0 + 0x128);
u8 count = 0;
s32 dy;
func_0205bc60(arg0, &count, 20);
dy = (arg0[10] - arg0[1]) >> 12;
if (dy < 0) dy = -dy;
if (dy < 10) { arg0[13] = 0; count++; }
if (count >= 2) {
s32 zero = 0;
arg0[0] = arg0[6]; arg0[1] = arg0[7]; arg0[2] = arg0[8];
arg0[12] = zero; arg0[13] = zero; arg0[14] = zero;
func_020de0a8(arg0);
*(s32 *)(p + 0x24) = 20;
if (*(u16 *)(p + 0x1e) & 0x40) {
*(u16 *)(p + 0x1e) &= 0xffbf;
func_0205aa34(arg0, zero);
}
if (*(u16 *)(p + 0x1e) & 0x100) func_0205aa34(arg0, 30);
} else func_020020f8(arg0, arg0 + 12, arg0);
}

void func_0205c314(void) {
    func_020d4eb8();
}

void func_0205c320(Unk0205B710 *arg0) {
    u8 flag = 0;
    func_0205bc60((s32 *)arg0, &flag, 0x14);
    arg0->unk04 += arg0->unk34;
    if (arg0->unk04 < arg0->unk28) {
        arg0->unk34 = 0;
        arg0->unk04 = arg0->unk28;
        flag++;
    } else {
        arg0->unk34 -= 0xa00;
    }
    if (flag >= 2) {
        func_020d4eb8(arg0);
    } else {
        func_020020f8(arg0, &arg0->unk30, arg0);
    }
}

void func_0205c39c(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    func_020d2b78(arg0, *(void **)p, (u16)((((*(s16 *)(p + 0x52) % 2) << 10) + 0x7000) % 0x10000), 10);
    *(s32 *)(arg0 + 0x28) = *(s32 *)(*(u8 **)p + 0x1ac);
    *(s32 *)(arg0 + 0x34) = -0x5000;
    func_020d4eb8(arg0);
}

void func_0205c404(Unk0205B710 *arg0) {
    u8 flag = 0;
    func_0205bc60((s32 *)arg0, &flag, 0x14);
    arg0->unk04 += arg0->unk34;
    if (arg0->unk04 >= arg0->unk28) {
        arg0->unk04 = arg0->unk28;
        arg0->unk34 = 0;
        flag++;
    } else {
        arg0->unk34 -= 0x840;
        if (arg0->unk34 < 0x600) {
            arg0->unk34 = 0x600;
        }
    }
    if (flag >= 2) {
        func_020d4eb8(arg0);
    } else {
        func_020020f8(arg0, &arg0->unk30, arg0);
    }
}

void func_0205c490(Unk0205B710 *arg0) {
    Unk0205B710_Sub *p = arg0->unk128;
    func_020d2b78(arg0, p->unk00, (((p->unk52 % 2) << 10) + 0x7000) % 0x10000, 100);
    arg0->unk28 += (p->unk2e << 12);
    arg0->unk34 = (arg0->unk28 - arg0->unk04) / 16;
    arg0->unk30 /= 2;
    arg0->unk38 /= 2;
    func_020d4eb8(arg0);
}

extern void func_0202bcd4(void *, u32);
extern s32 func_020dddf0(void *, void *);
extern void func_020ddd5c(void *);
extern void func_020d2bf0(void *, void *, s32, s32);
extern void func_02060604(void);
void func_0205c520(u8 *arg0) {
    u8 *sub = *(u8 **)(arg0 + 0x128);
    u8 flag = 0;
    s32 vec[3];
    s32 dy;

    if (*(s16 *)(sub + 0x1c) == 0) {
        s32 dist;
        *(s32 *)(arg0 + 0x30) = 0;
        *(s32 *)(arg0 + 0x34) = 0;
        *(s32 *)(arg0 + 0x38) = 0;
        func_0202bcd4(vec, *(u32 *)(sub + 0x30) & 0xff);
        vec[1] = *(s32 *)(arg0 + 4);
        *(s32 *)(sub + 0x44) = vec[0];
        *(s32 *)(sub + 0x48) = vec[1];
        *(s32 *)(sub + 0x4c) = vec[2];
        dist = func_020dddf0(sub + 0x44, arg0);
        if (**(u8 **)(arg0 + 0x118) != 0) {
            *(s32 *)(arg0 + 0x78) = *(s32 *)(sub + 0x34);
        } else {
            *(s32 *)(arg0 + 0x78) = dist / 140;
        }
        func_020ddd5c(arg0);
        func_020d2bf0(arg0, sub + 0x44, 0x8000, 0x14);
        *(s16 *)(sub + 0x1c) = 1;
    }
    func_02060604();
    func_0205bc60((s32 *)arg0, &flag, 0x14);
    dy = (*(s32 *)(arg0 + 0x28) - *(s32 *)(arg0 + 4)) >> 12;
    if (dy < 0) {
        dy = -dy;
    }
    if (dy < 10) {
        *(s32 *)(arg0 + 4) = *(s32 *)(arg0 + 0x28);
        *(s32 *)(arg0 + 0x34) = 0;
        flag++;
    }
    if (flag >= 2) {
        func_020d4eb8(arg0);
    } else {
        func_020020f8(arg0, arg0 + 0x30, arg0);
    }
}

