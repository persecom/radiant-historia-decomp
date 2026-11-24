/* 36 functions from 0x0210D6D8 to 0x0210E694 (main), found by ds-decomp. */
#include "common.h"
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

