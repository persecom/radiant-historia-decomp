/* 15 functions from 0x020CEC8C to 0x020CFC10 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_021626a8;
extern void func_0210968c(s32, s32, s32);
extern void func_02109790(s32);
extern u8 *data_02160200;
extern void func_020bd574(void);
extern void func_020bd690(void);
extern void func_0207afc8(void);

extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u8 *data_02160238;
extern u32 data_0216023c;
extern u8 data_021512f0;
extern u8 *func_020cda08(u32, u16);
extern void func_020ccc30();
extern void func_02021a3c(void);
extern void func_0210dc88(void);
extern s32 func_02021a50(void);
extern void func_020bdd88(void);
extern void func_02021c7c(void);
extern void func_020cf110(void);
extern u32 data_02160240;
extern void *data_02160204;
extern void *data_02160078;
extern u8 *func_020bd438(u32);
extern void func_020bd2fc(u32, u16, u8, u8);
extern void func_020bd8c8(void);
extern void func_02021a28(void);
extern void func_020cf3b4(void);
void func_020cec8c(void) {
    u8 *p = data_02160238;
    switch (p[0]) {
    case 0:
        p[0x771] = 1;
        break;
    case 1:
    case 6:
        {
            u8 v = 0;
            func_020ccc30();
            p[0] = v;
        }
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    default:
        break;
    }
}

void func_020cecfc(void) {
u8 *p=data_02160238;
switch(p[0x774]){
case 0: {
u32 v=p[0x773]+1;
if((v&0xff)>=0xff){p[0x773]=v;p[0x774]=1;}else{p[0x773]=v;}
}break;
case 1:{
u32 v=p[0x773]-1;p[0x773]=v;
if((v&0xff)==0)p[0x774]=0;
}break;
default:break;
}
}

void func_020ced5c(void) {
 u8 *p=data_02160238;
 s32 zero,one;
 if(data_021512f0==0){
 one=1;
 func_020ccc30(one);
 zero=0;
 func_020cda64(zero,0x12000,0x2d000,30,zero,one,zero,zero,zero);
 func_020cda64(one,0x92000,0x86000,30,zero,0x65,zero,zero,zero);
 func_020cda64(2,0x92000,0x9a000,30,zero,0x66,zero,zero,zero);
 *(s32 *)(*(u8 **)(data_02160238+0x60)+0x40)=one;
 *(s32 *)(*(u8 **)(data_02160238+0xb0)+0x40)=one;
 *(s32 *)(*(u8 **)(data_02160238+0x100)+0x40)=one;
 p[0]=one;
 func_0210d27c(11);
 return;
 }
 if((p+p[0x708]*16)[0x710]){
 func_0210d27c(11);
 ((u8 *)data_02160204)[0x7f]=p[0x708];
 func_02021a3c();
 zero=0;
 func_020cda64(zero,0x12000,0x2d000,30,zero,9,zero,zero,zero);
 *(s32 *)(*(u8 **)(data_02160238+0x60)+0x40)=1;
 func_020ccc30(1);
 func_020cda08(2,7)[2]=zero;
 func_020cda08(2,8)[2]=zero;
 p[0]=5;
 }else func_0210d27c(7);
}

void func_020cef00(void) {
u8 *p=data_02160238;
if (p[0x70a]==0) {
func_0210d27c(11);
if (data_021512f0 != 0) return;
func_020cda64(0,0x12000,0x2d000,30,0,2,0,0,0);
*(u32 *)(*(u8 **)(data_02160238+0x60)+0x40)=1;
func_020a994c(p+0xb4);
func_020a994c(p+0x104);
func_020cda08(2,7)[2]=0;
func_020cda08(2,8)[2]=0;
p[0x70b]=4;
p[0]=2;
} else {
((void (*)(s32))func_020ccc30)(0);
p[0x70b]=0;
p[0]=0;
func_0210d27c(5);
}
}

extern void func_020ccb10(void);
void func_020cefe4(void) {
    u8 *p = data_02160238;
    switch (p[0x70a]) {
    case 0:
        func_0210d27c(11);
        if (p[0x70b] == 0) {
            func_020cda64(0, 0x12000, 0x2d000, 30, 0, 5, 0, 0, 0);
            *(u32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            p[0x70b] = 1;
            p[0x70a] = 1;
            func_020ccb10();
        } else {
            func_020cda64(0, 0x12000, 0x2d000, 30, 0, 11, 0, 0, 0);
            *(u32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            func_020a994c(p + 0xb4);
            func_020a994c(p + 0x104);
            func_020cda08(2, 7)[2] = 0;
            func_020cda08(2, 8)[2] = 0;
            p[0] = 7;
        }
        break;
    case 1:
        ((void (*)(s32))func_020ccc30)(0);
        p[0] = 0;
        func_0210d27c(5);
        break;
    }
}

#pragma optimization_level 0
void func_020cf110(void) {
func_020bd574();
*(s16 *)((u8 *)data_02160204+0xf6)=*(s16 *)((u8 *)data_02160078+0x30);
*(u16 *)((u8 *)data_02160204+0x14a)=*(u16 *)((u8 *)data_02160078+0x20);
func_020bd690();func_0207afc8();
*((u8 *)data_02160204+0x7a)=0;
*((u8 *)data_02160204+0x7e)=0;
*((u8 *)data_02160204+0x11d)=0;
*((u8 *)data_02160204+0x85)=0;
*((u8 *)data_02160204+0xde)=0;
*(u16 *)((u8 *)data_02160204+0xda)=0;
*(u16 *)((u8 *)data_02160204+0xdc)=0;
if(*(u32 *)(data_02160200+0x160)&0x80) {
*(u32 *)(data_02160200+0x160)&=~0x80;
} else {
*(u16 *)((u8 *)data_02160204+0x74)=0;
*(u16 *)((u8 *)data_02160204+0x76)=0;
}
}
#pragma optimization_level 4

void func_020cf228(void) {
    s32 x = 0;
    func_02021a3c();
    goto check;
loop:
    func_0210dc88();
check:
    if (func_02021a50() == 1) {
        goto loop;
    }
    if (func_02021a50() != 0) {
        func_020bdd88();
        func_02021c7c();
        data_0216023c = 2;
    } else {
        func_020cf110();
        data_0216023c = 1;
    }
    (void)x;
}

s32 func_020cf284(void) {
func_0210968c(3,0,30);
data_0216023c=0;
for (;;) {
func_0210dc88();
if (data_021626a8 & 1) {
if(data_0216023c) data_0216023c=0;
else {func_020bdd88();func_02021c7c();func_020cf228();}
} else if(data_021626a8 & 2) break;
if(data_0216023c) continue;
if(data_021626a8 & 16) {
((u8 *)data_02160204)[0x7f]++;
((u8 *)data_02160204)[0x7f] %= 3;
} else if(data_021626a8 & 32) {
((u8 *)data_02160204)[0x7f]--;
((u8 *)data_02160204)[0x7f] %= 3;
}
}
func_0210968c(3,-16,1);func_02109790(3);
*(u16 *)((u8 *)data_02160204+0x102)=1;
return 36;
}

void func_020cf3b4(void) {
    u8 i;
    u8 *src;
    void **pp1;
    void **pp2;
    for (i = 0; i < 3; i++) {
        src = func_020bd438(i);
        func_020bd2fc(i, *(u16 *)src, *(u8 *)(src + 2), *(u8 *)(src + 3));
    }
    pp1 = &data_02160204;
    pp2 = &data_02160078;
    *(s16 *)((u8 *)*pp2 + 0x30) = *(s16 *)((u8 *)*pp1 + 0xf6);
    *(u16 *)((u8 *)*pp2 + 0x20) = *(u16 *)((u8 *)*pp1 + 0x14a);
    func_020bd8c8();
}

void func_020cf424(void) {
    func_020cf3b4();
    func_02021a28();
    do {
        func_0210dc88();
    } while (func_02021a50() == 1);
    if (func_02021a50() == 0) {
        *(u32 *)&data_02160240 = 1;
    } else {
        *(u32 *)&data_02160240 = 2;
    }
}

extern void func_020cf424(void);
extern s32 data_0215138c;
s32 func_020cf464(void) {
    func_0210968c(3, 0, 30);
    data_02160240 = 0;

    while (1) {
        func_0210dc88();
        if (data_021626a8 & 1) {
            if (data_02160240 != 0) {
                data_02160240 = 0;
            } else {
                func_020cf424();
            }
        } else if (data_021626a8 & 2) {
            if (*(s16 *)((u8 *)data_02160204 + 0xf6) != 0) {
                data_0215138c = 4;
            }
            break;
        }

        if (data_02160240 == 0) {
            if (data_021626a8 & 0x10) {
                ((u8 *)data_02160204)[0x7f]++;
                ((u8 *)data_02160204)[0x7f] %= 3;
            } else if (data_021626a8 & 0x20) {
                ((u8 *)data_02160204)[0x7f]--;
                ((u8 *)data_02160204)[0x7f] %= 3;
            }
        }
    }

    func_0210968c(3, -16, 30);
    func_02109790(3);
    return data_0215138c;
}

void *func_020cf5a0(void) {
    return func_0210c594(0x20, data_02155c3c);
}

void func_020cf5bc(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern u8 *data_02160a6c;
extern const s16 data_0213a394[];
extern void func_020d91bc(s32);
extern s32 func_020d0200(void *);
extern void func_020ddfd0(void *, s32);
extern s32 *func_0202c5a0(void *);
extern s32 func_020d9e38(void);
extern void func_020d907c(void *);
extern void func_020d9090(void);
extern void func_020dd810(void *, s32, s32);
void func_020cf5d0(u8 *arg0, s32 arg1) {
    s32 one = 1;
    if (arg0 == NULL) {
        return;
    }
    switch (arg1) {
    case 0:
        *(u16 *)(arg0 + 0x10) = 0;
        *(s32 *)(arg0 + 4) = one;
        *(s32 *)(arg0 + 8) = 0xa000;
        *(s32 *)(arg0 + 0xc) = -0x2000;
        func_020d91bc(2);
        break;
    case 1: {
        u8 *it;
        *(u16 *)(arg0 + 0x10) = one;
        it = *(u8 **)(data_02160a6c + 0xb8);
        while (it != NULL) {
            if (func_020d0200(it) != 0) {
                func_020ddfd0(it, one);
            }
            it = *(u8 **)(it + 0x174);
        }
        it = *(u8 **)(data_02160a6c + 0xac);
        while (it != NULL) {
            s32 *pos = func_0202c5a0(it);
            *(s32 *)(it + 0) = pos[0] - ((const s16 (*)[2])data_0213a394)[func_020d9e38() >> 4][1] * (s16)-0xa4;
            *(s32 *)(it + 4) = pos[1];
            *(s32 *)(it + 8) = pos[2] - ((const s16 (*)[2])data_0213a394)[func_020d9e38() >> 4][0] * (s16)-0xa4;
            *(u32 *)(it + 0x80) |= 2;
            it = *(u8 **)(it + 0x16c);
        }
        *(s32 *)(arg0 + 0x14) = 0x1ae000;
        *(s32 *)(arg0 + 0x18) = 0x30000;
        *(s32 *)(arg0 + 0x1c) = 0x200000;
        func_020d91bc(0xe);
        func_020d907c(arg0 + 0x14);
        func_020d9090();
        func_020d91bc(6);
        break;
    }
    case 2: {
        u8 *it;
        *(u16 *)(arg0 + 0x10) = 2;
        it = *(u8 **)(data_02160a6c + 0xb8);
        while (it != NULL) {
            if (func_020d0200(it) != 0) {
                s32 *pos = func_0202c5a0(it);
                *(s32 *)(it + 0) = pos[0] - ((const s16 (*)[2])data_0213a394)[func_020d9e38() >> 4][1] * (s16)0x94;
                *(s32 *)(it + 4) = pos[1];
                *(s32 *)(it + 8) = pos[2] - ((const s16 (*)[2])data_0213a394)[func_020d9e38() >> 4][0] * (s16)0x94;
                func_020dd810(it, one, 0);
            }
            *(u32 *)(it + 0x80) |= 2;
            it = *(u8 **)(it + 0x174);
        }
        it = *(u8 **)(data_02160a6c + 0xac);
        while (it != NULL) {
            s32 *pos = func_0202c5a0(it);
            *(s32 *)(it + 0) = pos[0];
            *(s32 *)(it + 4) = pos[1];
            *(s32 *)(it + 8) = pos[2];
            func_020ddfd0(it, 1);
            func_020dd810(it, 0, 0);
            it = *(u8 **)(it + 0x16c);
        }
        *(s32 *)(arg0 + 0x14) = 0x294000;
        *(s32 *)(arg0 + 0x18) = 0x30000;
        *(s32 *)(arg0 + 0x1c) = 0x200000;
        func_020d91bc(0xf);
        func_020d907c(arg0 + 0x14);
        func_020d9090();
        func_020d91bc(6);
        break;
    }
    }
}

extern u8 *data_021601e8;
extern void func_020a8810(void *, s32);
extern void func_020bb294(void *, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_020e26f0(s32, s32, s32);
s32 func_020cf884(u8 *p)
{
    s32 zero = 0;
    u8 *node;
    s32 *base;
    s32 radius;

    if (*(u16 *)(p + 0x10) != 2) {
        return zero;
    }

    switch (*(u16 *)(p + 0x12)) {
    case 0:
        if (++*(s32 *)(p + 4) > 16) {
            *(u16 *)(p + 0x12) = 1;
            *(s32 *)(p + 4) = 16;
        }
        *(s32 *)(p + 0x14) = (*(s32 *)(p + 4) * (-0x94) / 16 + 0x294) << 12;
        *(s32 *)(p + 0x18) = 0x30000;
        *(s32 *)(p + 0x1c) = 0x200000;
        func_020d907c(p + 0x14);
        func_020d9090();
        for (node = *(u8 **)(data_02160a6c + 0xb8); node; node = *(u8 **)(node + 0x174)) {
            if (func_020d0200(node) != 0) {
                base = func_0202c5a0(node);
                radius = *(s32 *)(p + 4) * 0x94 / 16 - 0x94;
                {
                    s32 trig = ((const s16 (*)[2])data_0213a394)[func_020d9e38() >> 4][1];
                    radius = -radius;
                    *(s32 *)node = base[0] - radius * trig;
                }
                *(s32 *)(node + 4) = base[1];
                *(s32 *)(node + 8) = base[2] - data_0213a394[(func_020d9e38() >> 4) * 2] * radius;
            }
            *(u32 *)(node + 0x80) |= 2;
        }
        if (*(u16 *)(p + 0x12) != 0) {
            *(s32 *)(p + 4) = zero;
        }
        break;

    case 1:
        if (!(*(u32 *)p & 1)) {
            *(u32 *)p |= 1;
            for (node = *(u8 **)(data_02160a6c + 0xb8); node; node = *(u8 **)(node + 0x174)) {
                if (func_020d0200(node) != 0) {
                    func_020dd810(node, zero, zero);
                }
                *(u32 *)(node + 0x80) |= 2;
            }
        }
        if (!(*(u32 *)p & 2)) {
            *(u32 *)p |= 2;
            for (node = *(u8 **)(data_02160a6c + 0xac); node; node = *(u8 **)(node + 0x16c)) {
                *(u32 *)(node + 0x80) |= 0x4000;
                *(s32 *)(node + 0xf8) = 1;
            }
        }
        if (++*(s32 *)(p + 4) >= 10) {
            *(u16 *)(p + 0x12) = 2;
            *(s32 *)(p + 4) = zero;
        }
        break;

    case 2: {
        u8 *q = *(u8 **)(data_021601e8 + 0x14);
        if (!(*(u32 *)p & 4)) {
            *(u32 *)p |= 4;
            *(u32 *)(q + 0x108) |= 0x10;
            *(s32 *)(q + 0x104) = 2;
            *(s32 *)(*(u8 **)(q + 8) + 0x4c) = 0x2bd000;
            *(s32 *)(*(u8 **)(q + 8) + 0x44) = 0x50000;
            *(s32 *)(*(u8 **)(q + 8) + 0x48) = 0x7000;
            func_020a8810(*(u8 **)(q + 8), 0x16);
            func_020bb294(q, 2);
            func_020a994c(q + 0x80);
            func_020a98ac(q + 0x80);
            func_020a98f4(q + 0x80);
        }
        if (++*(s32 *)(p + 4) >= 20) {
            *(u32 *)(q + 0x108) &= ~0x10;
            func_020a994c(q + 0x80);
            *(s32 *)(p + 4) = zero;
            *(u16 *)(p + 0x12) = 3;
        }
        break;
    }

    case 3:
        if (!(*(u32 *)p & 8)) {
            *(u32 *)p |= 8;
            for (node = *(u8 **)(data_02160a6c + 0xac); node; node = *(u8 **)(node + 0x16c)) {
                *(u32 *)(node + 0x80) &= ~0x4000;
                func_020ddfd0(node, zero);
                *(s32 *)(node + 0xf8) = zero;
            }
        }
        if (++*(s32 *)(p + 4) >= 20) {
            func_020e26f0(7, 0, 999);
        }
        if (*(s32 *)(p + 4) > 25) {
            *(s32 *)(p + 4) = 25;
            return 1;
        }
        break;
    }

    return 0;
}

