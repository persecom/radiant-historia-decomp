/* 36 functions from 0x0210D6D8 to 0x0210E694 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u64 state, multiplier, increment; } Rng64_0210ddfc;
typedef struct { u32 attr; u32 tile; } Sprite_0210e290;
extern s32 data_02155c3c;
extern void func_0210c5dc(void *);
extern void *func_0210c518(s32, s32);
extern void func_02006dc4(void *, s32);
extern void func_020037d4(void *, s32, s32);
extern s32 data_0216281c;
extern s16 data_0216274c[8][2];
extern void *data_02160c74[2];
extern void func_021138c0(void);
extern void func_0210d5dc(s32);
extern void func_0210d6a8(void *, s16);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3_0210dd1c;

extern const Vec3_0210dd1c data_02144bac;
extern Vec3_0210dd1c data_02155c30;
extern Vec3_0210dd1c data_02162670;
extern void func_020029a0(Vec3_0210dd1c *, Vec3_0210dd1c *, Vec3_0210dd1c *, s32, s32);
extern void func_02001834(u32 *);
extern void func_02002ae0(u32 *);
extern void func_02002a28(u32 *);
extern void func_02117994(void);

extern u8 data_02162730[12];
extern s32 data_02162834[3];
extern u8 data_0216280c[];
extern u8 data_021628e0[12];
extern u8 data_021628d4[12];
extern u8 data_021628a4[12];
extern u8 data_021628c8[12];
extern u8 data_021628bc[12];
extern u8 data_021628b0[12];
extern u8 data_02162898[12];
extern u8 data_0216288c[12];
extern void func_021167ac(void *, s32);
extern void func_0210e640(void);
extern void func_0210ddfc(void);
extern void func_021167f0(void *, void *);
extern void func_02116844(void *, void *);
extern void func_02116894(void *, void *, void *);
extern void func_021168f8(void *, void *);
extern void func_02113d10(s32, s32, s32);
extern void func_02113b58(void *, s32);
extern void func_02113c18(void *);

extern u8 data_021628ec[];
extern u8 data_021626b0[];
extern u8 *data_02160204;
extern void func_02008250(u32);
extern void func_020081c0(void);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_0210d6d8(s32 arg0, s32 arg1, s32 arg2) {
    func_02113d10(arg0, arg1, arg2 >> data_02162834[0]);
}

void func_0210d6f4(void *arg0) {
    func_02113b58(arg0, 0);
    func_02113c18(arg0);
}

void func_0210d844(s16);
void func_0210d710(void) {
 s32 i; s16 step, id;
 func_021138c0();
 if (*(s32 *)(*(u8 **)data_02162730 + 8) > -1 && *(s32 *)(data_02162730 + 0x14) == 0)
 func_0210d5dc(*(s32 *)(*(u8 **)data_02162730 + 8));
 step = data_0216281c;
 for(i=0;i<8;i++) {
 if(data_0216274c[i][0] != -1) {
 data_0216274c[i][1] -= step;
 if(*(volatile s16 *)&data_0216274c[i][1] <= 0) {
 data_0216274c[i][1]=0; data_0216274c[i][0]=-1;
 }
 }
 }
 id=*(s16 *)(data_02162730+4);
 if(id==-1) return;
 if(*(s32 *)(data_02162730+8)!=0) return;
 if(id==0x33 || id==0x4f || id==0x51 || id==0x53 || id==0x54 || id==0x56 || id==0x57 || id==0x58 || id==0x59 || id==0x5a || id==0x5d || id==0x5f) {
 if(data_02160c74[0]==0) return;
 func_0210d6f4(data_02160c74[0]);
 func_0210d6a8(data_02160c74[0],*(s16 *)(data_02162730+4));
 func_0210d844(*(s16 *)(data_02162730+4));
 }
}

void func_0210d828(void) {
    *(s16 *)(data_02162730 + 4) = -1;
    *(s32 *)(data_02162730 + 8) = 0;
}

void func_0210d844(s16 arg0) {
    *(s16 *)(data_02162730 + 4) = arg0;
    *(s32 *)(data_02162730 + 8) = 1;
}

void func_0210d85c(s32 arg0) {
    *(s32 *)(data_02162730 + 8) = arg0;
}

void func_0210d86c(void) {
    func_021167ac(data_021628e0, 0xc);
    func_021167ac(data_021628d4, 0xc);
    func_021167ac(data_021628a4, 0xc);
    func_021167ac(data_021628c8, 0xc);
    func_021167ac(data_021628bc, 0xc);
    func_021167ac(data_021628b0, 0xc);
    func_021167ac(data_02162898, 0xc);
    func_021167ac(data_0216288c, 0xc);
    func_0210e640();
    *(s32 *)(data_0216280c + 0x24) = 0x3c;
    *(s32 *)(data_0216280c + 0x28) = 0;
    *(s32 *)(data_0216280c + 0x10) = 1;
    *(s32 *)(data_0216280c + 0x14) = 1;
    *(void (**)(void))(data_0216280c + 0x1c) = func_0210ddfc;
}

void func_0210d92c(u8 *arg0, u8 *arg1) {
    s32 val = *(s32 *)(arg1 + 4);
    u8 *cur = NULL;
    if (val < 0) {
        val = -val;
    }
    while ((cur = (cur != NULL) ? *(u8 **)(cur + *(u16 *)(arg0 + 0xa) + 4) : *(u8 **)arg0) != NULL) {
        s32 curVal = *(s32 *)(cur + 4);
        if (curVal < 0) {
            curVal = -curVal;
        }
        if (val < curVal) {
            break;
        }
    }
    if (cur == NULL) {
        func_021167f0(arg0, arg1);
    } else if (cur == *(u8 **)arg0) {
        func_02116844(arg0, arg1);
    } else {
        func_02116894(arg0, cur, arg1);
    }
}

void func_0210d9ac(void *arg0, u8 *arg1) {
    if (*(u8 **)(data_0216280c + 0x7c) == arg1) {
        *(u8 **)(data_0216280c + 0x30) = *(u8 **)(arg1 + 0x10);
    }
    if (*(u8 **)(data_0216280c + 0x30) == arg1) {
        *(u8 **)(data_0216280c + 0x30) = *(u8 **)(*(u8 **)(data_0216280c + 0x30) + 0x10);
    }
    func_021168f8(arg0, arg1);
}

void func_0210d9e4(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628e0 : data_021628b0;
    func_0210d92c(list, arg0);
}

void func_0210da14(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628e0 : data_021628b0;
    func_0210d9ac(list, arg0);
}

void func_0210da44(u8 *arg0) {
    u8 *node = *(s32 *)(data_0216280c + 0x44) == 0
        ? *(u8 **)(data_0216280c + 0xd4)
        : *(u8 **)(data_0216280c + 0xa4);
    while (node != NULL) {
        if (node == arg0) {
            func_0210d9ac(*(s32 *)(data_0216280c + 0x44) == 0 ? data_021628e0 : data_021628b0, arg0);
        }
        node = *(u8 **)(node + 0x10);
    }
}

void func_0210dab0(void *arg0) {
    func_0210d92c(data_021628b0, arg0);
}

void func_0210dac8(s32 arg0) {
    func_0210d9ac(data_021628b0, arg0);
}

void func_0210dae0(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628d4 : data_02162898;
    func_0210d92c(list, arg0);
}

void func_0210db10(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628d4 : data_02162898;
    func_0210d9ac(list, arg0);
}

void func_0210db40(s32 arg0) {
    func_0210d92c(data_02162898, arg0);
}

void func_0210db58(s32 arg0) {
    func_0210d9ac(data_02162898, arg0);
}

void func_0210db70(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628a4 : data_0216288c;
    func_0210d92c(list, arg0);
}

void func_0210dba0(u8 *arg0) {
    u8 *list = (*(s32 *)(data_0216280c + 0x44) == 0) ? data_021628a4 : data_0216288c;
    func_0210d9ac(list, arg0);
}

void func_0210dbd0(s32 arg0) {
    func_0210d92c(data_0216288c, arg0);
}

void func_0210dbe8(s32 arg0) {
    func_0210d9ac(data_0216288c, arg0);
}

extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern void func_021168f8(void *, void *);
void func_0210dc00(void *arg0) {
    s32 irq = func_02008128();
    func_0210d92c(data_021628c8, arg0);
    func_0200813c(irq);
}

void func_0210dc2c(void *arg0) {
    s32 irq = func_02008128();
    func_021168f8(data_021628c8, arg0);
    func_0200813c(irq);
}

void func_0210dc58(s32 arg0) {
    func_0210d92c(data_021628bc, arg0);
}

void func_0210dc70(s32 arg0) {
    func_021168f8(data_021628bc, arg0);
}

void func_0210dc88(void) {
    u16 val;
    if (*(s32 *)(data_0216280c + 0x6c) != 0) {
        return;
    }
    *(s32 *)(data_0216280c + 0x6c) = 1;
    ((void (*)(void))(*(void **)(data_0216280c + 0x1c)))();
    val = *(u16 *)data_021626b0;
    *(s32 *)(data_0216280c + 0x6c) = 0;
    if ((val & 8) == 0 || (val & 4) == 0 || (val & 0x200) == 0) {
        return;
    }
    if ((val & 0x100) != 0) {
        u32 b = data_02160204[0xd7];
        if (b == 0xc || b == 0xd || b == 0x1d || b == 0x27) {
            return;
        }
        func_02008250(*(u32 *)0x02fffc20 + 1);
    }
}

void func_0210dd1c(void) {
    Vec3_0210dd1c vec = data_02144bac;
    u32 mtx[16];

    func_020029a0(&vec, &data_02155c30, &data_02162670, 1, 0);
    func_02117994();
    *(volatile u32 *)0x4000440 = 3;
    func_02001834(mtx);
    func_02002ae0(mtx);
    func_02002a28(mtx);
    *(volatile u32 *)0x4000440 = 1;
    *(volatile u32 *)0x4000454 = 0;
    *(volatile u32 *)0x4000480 = 0x7fff;
    *(volatile u16 *)0x4000060 = (*(volatile u16 *)0x4000060 & ~0x3000) | 4;
    *(volatile u16 *)0x4000340 = 1;
    *(volatile u16 *)0x4000060 = (*(volatile u16 *)0x4000060 & ~0x3000) | 8;
    *(volatile u16 *)0x4000060 &= 0xffffcffd;
    *(volatile u32 *)0x40004c0 = 0x7fff7fff;
    *(volatile u32 *)0x40004c4 = 0x7fff7fff;
    *(volatile u32 *)0x4000484 = 0;
}

extern void func_02002d30(void);
extern void func_02002e58(void);
extern void func_02125448(void);
extern void func_02108ffc(void);
extern void func_02002858(void *, void *);
extern void func_02107820(void);
extern void func_02107840(void);
extern void func_0210763c(void);
extern void func_02107774(void);
extern void func_02109040(void);
extern void func_0210d710(void);
extern void func_0210c6e0(void);
extern void func_0210e740(void);
extern void func_0210c898(void);
extern void func_0210e6f0(void);
extern void func_0210c470(void);
extern void func_0210dd1c(void);
extern u8 data_02155c84[];
extern u32 data_02162b80;
extern u32 data_021624f8;
extern u32 data_021626f8;
extern u32 data_0216263c;
extern u32 data_02162658;
extern void *data_0216267c;
#pragma push
#pragma opt_propagation off
void func_0210ddfc(void) {
    u8 *cfg = data_02155c84;
    u8 *base = data_0216280c;
    u8 *null = 0;
    u8 *node, *list2, *list3, *list1, *p;
    s32 v;

    if (*(u8 *)base != 0 && *(s32 *)(base + 0x54) == 0 && *(void **)(base + 0x2c) != NULL) {
        if (((s32 (*)(void))*(void **)(base + 0x2c))() == 0) {
            func_020081c0();
            if (*(void **)(base + 0xc) != NULL)
                ((void (*)(void))*(void **)(base + 0xc))();
            return;
        }
    }

    if (*(s32 *)(base + 0x54) == 0) {
        list1 = data_021628e0; list2 = data_021628d4; list3 = data_021628a4;
    } else {
        list1 = data_021628b0; list2 = data_02162898; list3 = data_0216288c;
    }

    if (*(s32 *)(cfg + 4) != 0) {
        node = *(u8 **)list1;
        while (node != NULL) {
            *(u32 *)(base + 0x74) = *(u32 *)(node + 8);
            *(u8 **)(base + 0x7c) = node;
            if (*(s32 *)(node + 4) >= 0)
                ((void (*)(void))*(void **)node)();
            if (*(u8 **)(base + 0x30) == NULL)
                node = *(u8 **)(node + 0x10);
            else
                node = *(u8 **)(base + 0x30);
            *(u8 **)(base + 0x7c) = null;
            *(u8 **)(base + 0x30) = null;
        }
    }

    func_02002d30();
    func_02002e58();

    if (*(s32 *)(cfg + 8) != 0) {
        node = *(u8 **)list2;
        while (node != NULL) {
            *(u32 *)(base + 0x74) = *(u32 *)(node + 8);
            *(u8 **)(base + 0x7c) = node;
            if (*(s32 *)(node + 4) >= 0)
                ((void (*)(void))*(void **)node)();
            if (*(u8 **)(base + 0x30) == NULL)
                node = *(u8 **)(node + 0x10);
            else
                node = *(u8 **)(base + 0x30);
            *(u8 **)(base + 0x7c) = null;
            *(u8 **)(base + 0x30) = null;
        }
    }

    if (*(s32 *)cfg != 0) {
        func_0210dd1c();
        node = *(u8 **)list3;
        while (node != NULL) {
            *(u32 *)(base + 0x74) = *(u32 *)(node + 8);
            *(u8 **)(base + 0x7c) = node;
            if (*(s32 *)(node + 4) >= 0)
                ((void (*)(void))*(void **)node)();
            if (*(u8 **)(base + 0x30) == NULL)
                node = *(u8 **)(node + 0x10);
            else
                node = *(u8 **)(base + 0x30);
            *(u8 **)(base + 0x7c) = null;
            *(u8 **)(base + 0x30) = null;
        }
    }

    if (*(s32 *)(base + 0x58) == 0) {
        *(volatile u32 *)0x04000540 = *(u32 *)(cfg + 0xc);
        if (*(s32 *)(base + 0x5c) != 0) {
            func_020081c0();
            func_02125448();
            func_02108ffc();
            p = *(u8 **)(base + 0xb0);
            while (p != NULL) {
                *(u32 *)(base + 0x74) = *(u32 *)(p + 8);
                *(u8 **)(base + 0x7c) = p;
                if (*(s32 *)(p + 4) >= 0)
                    ((void (*)(void))*(void **)p)();
                if (*(u8 **)(base + 0x30) == NULL)
                    p = *(u8 **)(p + 0x10);
                else
                    p = *(u8 **)(base + 0x30);
                *(u8 **)(base + 0x7c) = null;
                *(u8 **)(base + 0x30) = null;
            }
        }
        func_020081c0();
        func_02125448();
        func_02108ffc();
        *(u8 **)(base + 0x60) = null;
    } else {
        v = func_02008128();
        if (*(u32 *)(base + 0x40) != *(u32 *)(base + 0x3c)) {
            if (*(s32 *)(base + 0x54) == 0) {
                if (*(u32 *)(base + 0x40) == 0) {
                    { u16 mask = 0xcfdf; *(volatile u16 *)0x04000060 &= mask; }
                } else { goto set; }
            } else {
                if (*(u32 *)(base + 0x3c) == 0) {
                    *(volatile u16 *)0x04000060 &= 0xcfdf;
                } else {
set:
                    *(volatile u16 *)0x04000060 = (*(volatile u16 *)0x04000060 & ~0x3000) | 0x20;
                }
            }
        }
        *(volatile u32 *)0x04000540 = *(u32 *)(cfg + 0xc);
        *(s32 *)(base + 0x50) = 1;
        func_0200813c(v);
        func_020081c0();
        func_02125448();
        func_02108ffc();
    }

    if (*(u8 *)base != 0 && *(void **)(base + 0xc) != NULL)
        ((void (*)(void))*(void **)(base + 0xc))();

    if (*(s32 *)(base + 0x58) == 0 || *(s32 *)(base + 0x54) != 0) {
        func_02002858((void *)0x0400006c, *(void **)(base + 8));
        func_02002858((void *)0x0400106c, *(void **)(base + 0x78));
    } else {
        func_02002858((void *)0x0400006c, *(void **)(base + 0x78));
        func_02002858((void *)0x0400106c, *(void **)(base + 8));
    }
    if (*(s32 *)(base + 0x58) != 0 && *(void **)(base + 0x38) != NULL)
        func_02107820();
    if (*(s32 *)(base + 0x58) == 0) {
        if (*(void **)(base + 0x38) != NULL) func_02107820();
        if (*(void **)(base + 0x34) != NULL) func_02107840();
    }
    func_0210763c();
    func_02107774();
    if (data_02162b80 != 0 && (*(s32 *)(base + 0x58) == 0 || *(s32 *)(base + 0x54) != 0))
        func_02125448();
    if (data_021624f8 != 0) func_02109040();
    if (*(u32 *)data_02162730 != 0) func_0210d710();
    if (*(s32 *)(base + 0x54) != 0) return;

    if (data_021626f8 == 0) {
        func_0210c6e0();
        func_0210e740();
    } else {
        func_0210c898();
        func_0210e6f0();
    }

    (*(s32 *)(base + 0x68))++;
    {
        u32 *q = &data_0216263c;
        q[0] = q[1] * q[0] + q[2];
    }
    {
        Rng64_0210ddfc *q = (Rng64_0210ddfc *)&data_02162658;
        q->state = q->state * q->multiplier + q->increment;
    }
    if (data_0216267c != NULL && *(void **)((u8 *)data_0216267c + 0x24) != NULL)
        func_0210c470();
}
#pragma pop
void func_0210e290(s32 arg0) {
 s32 i,x,y,z; Sprite_0210e290 *p;
 *(volatile s32 *)(data_0216280c+0x54)=0;
 *(volatile s32 *)(data_0216280c+0x50)=0;
 if(*(void **)(data_0216280c+0x20)) {
 func_0210c5dc(*(void **)(data_0216280c+0x20));
 *(void **)(data_0216280c+0x20)=0;
 }
 if(!arg0) {
 *(volatile s32 *)(data_0216280c+0x58)=0;
 *(volatile s32 *)(data_0216280c+0x40)=0;
 *(volatile s32 *)(data_0216280c+0x3c)=0;
 return;
 }
 *(volatile s32 *)(data_0216280c+0x58)=1;
 *(volatile s32 *)(data_0216280c+0x24)=30;
 *(volatile s32 *)(data_0216280c+0x28)=1;
 *(volatile s32 *)(data_0216280c+0x10)=2;
 *(volatile s32 *)(data_0216280c+0x14)=2;
 i=0;
 p=func_0210c518(0x400,*(volatile s32 *)&data_02155c3c);
 *(void **)(data_0216280c+0x20)=p;
 *(volatile u32 *)0x4001000=(*(volatile u32 *)0x4001000 & ~0x60)|0x20;
 for(z=0;z<128;z++) {p[z].attr=0;p[z].tile=0;}
 for(y=0;y<192;y+=64) {
 for(x=0;x<256;x+=64) {
 *(volatile u32 *)&p[i].attr=0xc0000c00 | (y&255) | ((x&511)<<16);
 *(volatile u16 *)&p[i].tile=0xf000 | (x/8+(y/8)*32);
 i++;
 }
 }
 func_02006dc4(p,0x400);
 func_020037d4(*(void **)(data_0216280c+0x20),0,0x400);
}

void func_0210e3dc(void) {
    s32 v = *(s32 *)(data_0216280c + 8);
    if (v <= -0x10 || v >= 0x10) {
        return;
    }
    func_020081c0();
}

extern void func_020081a4(s32);
extern void func_02005468(void);
extern void func_02005454(void);
extern void func_0200518c(s32);
extern void func_02005168(s32);
extern void func_02005228(s32);
extern void func_0200283c(s32);
extern void func_021091b0(void);
extern u8 data_027e0000[];
void func_0210e404(void) {
register u8 *node=0; u8 *base; base=data_0216280c;
if(*(volatile u32 *)(base+0x58)) {
if((s32)*(volatile u16 *)0x4000006<=193) func_020081a4(392);
if(!(*(volatile u32 *)0x4000600&0x8000000) && *(volatile u32 *)(base+0x50)) {
if(!*(volatile u32 *)(base+0x54)) {
*(volatile u16 *)0x4000304|=0x8000;
func_02005468(); func_0200518c(4); func_02005168(8);
*(volatile u32 *)0x4000064=0x80330010;
if(*(void (**)(void))(base+0x4c)) (*(void (**)(void))(base+0x4c))();
func_0200283c(5);
*(volatile u32 *)0x4001000=(*(volatile u32 *)0x4001000&~0x1f00)|0x400;
*(volatile u16 *)0x400100c=(*(volatile u16 *)0x400100c&0x43)|0x4084;
*(volatile u16 *)0x400100c&=~3;
*(volatile u16 *)0x400100c&=0xffbf;
} else {
*(volatile u16 *)0x4000304&=~0x8000;
func_02005454();func_02005228(8);func_02005168(4);
*(volatile u32 *)0x4000064=0x80320010;
if(*(void (**)(void))(base+0x48)) (*(void (**)(void))(base+0x48))();
func_0200283c(5);
*(volatile u32 *)0x4001000=(*(volatile u32 *)0x4001000&~0x1f00)|0x1000;
}
*(volatile u32 *)(base+0x50)=0;
*(volatile u32 *)(base+0x54)=!*(volatile u32 *)(base+0x54);
}
}
goto next;
loop: {
*(volatile u32 *)(base+0x70)=*(u32 *)(node+8);
(*(void (**)(void))node)();
}
next: if(!node) node=*(u8 **)(base+0xbc); else node=*(u8 **)(node+*(u16 *)(base+0xc6)+4); if(node) goto loop;
(*(volatile u32 *)(base+0x18))++;
(*(volatile u32 *)(base+0x60))++;
{ s32 count=*(volatile s32 *)(base+4); if(count!=-1) *(volatile s32 *)(base+4)=count+1; }
if(*(volatile u32 *)(base+0x64)==1) func_021091b0();
*(volatile u32 *)((u32)data_027e0000+0x3ff8)|=1;
}

s32 func_0210e600(void) {
    s32 irq = func_02008128();
    s32 v = *(s32 *)(data_0216280c + 4);
    func_0200813c(irq);
    return v;
}

extern void func_0210e404(void);
extern void func_020057e8(s32, void (*)(void));
extern void func_020059b4(s32);
extern void func_02002708(s32, u16);
void func_0210e620(s32 arg0) {
    s32 tmp = func_02008128();
    *(s32 *)(data_0216280c + 4) = arg0;
    func_0200813c(tmp);
}

void func_0210e640(void) {
    u16 ime;
    func_020057e8(1, func_0210e404);
    func_020059b4(1);
    ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 1;
    func_02002708(1, ime);
}

void func_0210e67c(void) {
    func_021167ac(data_021628ec, 8);
}

