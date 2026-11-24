/* 15 functions from 0x020C0284 to 0x020C11F4 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s16 unk[10];
} Unk20;

static inline void SetRect_020c0660(Unk20 *p, s16 x, s16 y, s16 w, s16 h, s16 dw, s16 dh) {
p->unk[1]=x;p->unk[2]=y;p->unk[3]=w;p->unk[4]=h;p->unk[8]=dw;p->unk[9]=dh;
}
extern const Unk20 data_02143dcc;
extern const Unk20 data_02143e30;
extern const Unk20 data_02143df4;
extern const Unk20 data_02143e1c;
typedef struct {
    s32 data[16];
} Unk64;
extern const Unk64 data_02143e4c;
typedef struct {
    s32 data[286];
} Unk1144;
extern const Unk1144 data_02143e8c;
s32 _s32_div_f(s32,s32);
extern u8 *data_02160a6c;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *data_02160218;
extern void *func_0210c594(u32, u32);
extern s32 func_020dd9b4(void *, u32 *);
extern s32 func_02117d80();
extern s32 func_020dddfc(void *, void *, s32);
extern void func_020020f8(void *, void *, void *);
extern void func_020c1fec(void);
extern void func_0210d9e4(void *);
extern void func_021167ac(void *, s32);
extern void func_021167f0(void *, void *);
void func_020c0284(s32 x,s32 y,s32 arg2,s32 value,s16 size) {
s16 center,padding;
s32 divisor;
s16 index,width,height,digit;
s32 growth;
Unk20 buf=data_02143df4;
*(volatile u32 *)0x40004a4=0x1f0080;
if(value<=6)func_020a3bbc(0x70);
else if(value<=12)func_020a3bbc(0x71);
else if(value<=18)func_020a3bbc(0x72);
else if(value<=24)func_020a3bbc(0x73);
else func_020a3bbc(0x74);
growth=size*3; width=15+growth; height=16+growth;
buf.unk[1]=0;buf.unk[2]=0;
if(size==0){buf.unk[3]=width;buf.unk[4]=height;}
else {buf.unk[3]=15;buf.unk[4]=16;}
digit=value%10;
padding=growth;
center=y-(padding>>1);
buf.unk[9]=height;buf.unk[7]=arg2+0x2bf;buf.unk[8]=width;
divisor=1;index=0;
do {
s16 current;
if(divisor==1)current=digit;
else current=(value/divisor)%10;
buf.unk[1]=current*15;
buf.unk[5]=x-index*width-(padding>>1);
buf.unk[6]=center;
func_021098ac(&buf);
index++;
divisor=(s16)divisor*(s16)10;
if(value<divisor)divisor=-1;
}while(divisor>0);
}

void func_020c0454(u8 *arg0, s32 arg1) {
Unk20 buf=data_02143e1c;
s32 percent;
s32 width;
if(!arg1) return;
percent=_s32_div_f(*(s32 *)(*(u8 **)(arg0+0x118)+4)*100,*(s32 *)(*(u8 **)(arg0+0x118)+8));
*(volatile u32 *)0x40004a4=0x1f00c0;
func_020a3bbc(0x20);
buf.unk[1]=0;buf.unk[2]=0;buf.unk[3]=0xc2;buf.unk[4]=5;
buf.unk[8]=0xc2;buf.unk[9]=5;buf.unk[5]=4;buf.unk[6]=0xb7;
func_021098ac(&buf);
if(*(s32 *)(*(u8 **)(arg0+0x118)+4)<=0) return;
buf.unk[7]++;
width=percent*192/100;
buf.unk[1]=0;buf.unk[2]=5;buf.unk[3]=width;buf.unk[4]=3;
buf.unk[8]=width;buf.unk[9]=3;buf.unk[5]=5;buf.unk[6]=0xb8;
func_021098ac(&buf);
}

void func_020c0588(void) {
    Unk20 buf = data_02143dcc;
    *(volatile u32 *)0x040004a4 = 0x001f00c0;
    func_020a3bbc(0x64);
    buf.unk[1] = 0;
    buf.unk[2] = 0;
    buf.unk[3] = 0x20;
    buf.unk[4] = 0x20;
    buf.unk[8] = 0x20;
    buf.unk[9] = 0x20;
    {
        u8 *base = data_02160a6c;
        u8 *obj = *(u8 **)(base + 0x70);
        while (obj != NULL) {
            if (*(u32 *)(obj + 0x80) & 0x4000) {
                u32 a = *(u32 *)(obj + 0xfc);
                buf.unk[5] = a - 0x10;
                buf.unk[6] = *(u32 *)(obj + 0x100) - *(u32 *)(*(u8 **)(obj + 0x1a4) + 4) - 0x20;
            }
            func_021098ac(&buf);
            obj = *(u8 **)(obj + 0x13c);
        }
    }
}

void func_020c0660(u32 kind, s16 x, s16 y, s16 depth, u32 value, s16 size) {
Unk20 buf = data_02143e30;
s16 w,h;
*(volatile u32 *)0x40004a4=0x1f00c0;
switch(kind) {
case 0: case 1: case 2:
if(value<=6)func_020a3bbc(0x70);
else if(value<=12)func_020a3bbc(0x71);
else if(value<=18)func_020a3bbc(0x72);
else if(value<=24)func_020a3bbc(0x73);
else func_020a3bbc(0x74);
buf.unk[1]=0x97;buf.unk[2]=3;buf.unk[3]=21;buf.unk[4]=13;
buf.unk[8]=21;buf.unk[9]=13;
buf.unk[5]=x;buf.unk[6]=y;buf.unk[7]=depth+0x2bf;
func_021098ac(&buf);break;
case 3: case 4: case 5:
func_020c0284(x,y,depth,value,size);break;
case 6: case 7:
if(value<=6){func_020a3bbc(0x6b);w=0x35;goto height16;}
else if(value<=12){func_020a3bbc(0x6c);w=0x37;height16: h=0x10;}
else if(value<=18){func_020a3bbc(0x6d);w=0x67;goto height19;}
else if(value<=24){func_020a3bbc(0x6e);w=0x7a;height19: h=0x13;}
else {func_020a3bbc(0x6f);w=0x79;h=0x17;}
buf.unk[1]=0;buf.unk[2]=0;buf.unk[3]=w;buf.unk[4]=h;
buf.unk[8]=w;buf.unk[9]=h;
buf.unk[5]=x;buf.unk[6]=y;buf.unk[7]=depth+0x2bf;
func_021098ac(&buf);break;
case 8:
*(volatile u32 *)0x40004a4=0xd00c0;func_020a3bbc(0x75);
buf.unk[1]=0;buf.unk[2]=1;buf.unk[3]=-64;buf.unk[4]=25;
buf.unk[8]=64;buf.unk[9]=25;buf.unk[5]=x;buf.unk[6]=y;buf.unk[7]=703;
func_021098ac(&buf);
buf.unk[1]=0;buf.unk[2]=1;buf.unk[3]=28;buf.unk[4]=25;
buf.unk[8]=196;buf.unk[9]=25;buf.unk[5]=x+64;buf.unk[6]=y;buf.unk[7]=depth+0x2bf;
func_021098ac(&buf);
buf.unk[1]=28;buf.unk[2]=1;buf.unk[3]=36;buf.unk[4]=-25;
buf.unk[8]=36;buf.unk[9]=25;buf.unk[5]=x+260;buf.unk[6]=y;buf.unk[7]=depth+0x2bf;
func_021098ac(&buf);break;
}
}

void *func_020c0924(void) {
    return func_0210c594(0x10, data_02155c3c);
}

void func_020c0940(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s16 func_020c0954(u8 *arg0) {
    u32 tmp;
    s32 ret = func_020dd9b4(arg0, &tmp);
    if (*(s32 *)(*(u8 **)(arg0 + 0x108) + 0x14) != 0) {
        *(u32 *)(arg0 + 0x80) &= ~2;
        *(s32 *)(arg0 + 0xf8) = 1;
        arg0[0xa5] = 1;
        return -1;
    }
    return func_02117d80(ret);
}

s32 func_020c09b0(u8 *arg0, s32 arg1, s32 arg2) {
    u16 cnt = 0;
    s32 d;
    if (func_020dddfc(arg0, arg0 + 0x24, arg1 << 12) != 0) {
        *(s32 *)(arg0 + 0x30) = 0;
        *(s32 *)(arg0 + 0x38) = 0;
        cnt++;
        if (*(s32 *)(arg0 + 0x34) == 0) {
            cnt++;
        }
    }
    d = (*(s32 *)(arg0 + 0x28) - *(s32 *)(arg0 + 4)) >> 12;
    if (d < 0) {
        d = -d;
    }
    if (d < arg2) {
        *(s32 *)(arg0 + 4) = *(s32 *)(arg0 + 0x28);
        *(s32 *)(arg0 + 0x34) = 0;
        cnt++;
    }
    if (cnt >= 2) {
        return 1;
    }
    func_020020f8(arg0, arg0 + 0x30, arg0);
    return 0;
}

void func_020c0d1c(void) {
    data_02160218 = func_0210c594(0x14, data_02155c3c);
    *(void (**)(void))data_02160218 = func_020c1fec;
    *(u32 *)((u8 *)data_02160218 + 4) = 0x3ed;
    func_0210d9e4(data_02160218);
}

extern void func_0210da14(void *);
extern void *func_020dce1c(u16, s32, s32);
extern void func_020dde88(void *);
extern void func_020dd810(void *, s32, s32);
extern void func_020ddb54(u16);
extern void func_020dd51c(void);
extern void func_021168f8(void *, void *);
void func_020c0d68(void) {
    func_0210da14(data_02160218);
    if (data_02160218 != NULL) {
        func_0210c5dc(data_02160218);
        data_02160218 = NULL;
    }
}

void func_020c0d98(void) {
    u8 *p = *(u8 **)((u8 *)&data_02160218 + 4);
    u8 *q = *(u8 **)(p + 4);
    while (q != NULL) {
        u8 *obj = func_020dce1c(*(u16 *)q, 0, 0);
        *(u16 *)(obj + 0x90) = 0x100;
        *(u16 *)(obj + 0x92) = 0;
        *(u32 *)(obj + 0x0) = 0;
        *(u32 *)(obj + 0x8) = 0;
        *(u32 *)(obj + 0x4) = 0;
        func_020dde88(obj);
        func_020dd810(obj, 0, 0);
        q = *(u8 **)(q + 8);
    }
}

void func_020c0e08(void) {
    u8 *g = (u8 *)&data_02160218;
    u8 *q = *(u8 **)(*(u8 **)(g + 4) + 4);
    while (q != NULL) {
        u8 *next = *(u8 **)(q + 8);
        func_020ddb54(*(u16 *)q);
        func_020dd51c();
        func_021168f8(*(u8 **)(g + 4) + 4, q);
        if (q != NULL) {
            func_0210c5dc(q);
        }
        q = next;
    }
}

void func_020c0e64(void) {
    Unk1144 table = data_02143e8c;
    s32 i;
    u8 *mgr = (u8 *)func_0210c594(0x10, data_02155c3c);

    ((u8 **)&data_02160218)[1] = mgr;
    func_021167ac(mgr + 4, 4);
    data_02160a6c[0x11d] = 0;
    *(u32 *)(((u8 **)&data_02160218)[1]) = 0;

    for (i = 0; i < 0x8d; i++) {
        u8 *node = *(u8 **)(data_02160a6c + 0xb8);
        while (node != NULL) {
            if (*(u16 *)(node + 0x8e) == table.data[i * 2]) {
                u8 *list_mgr = ((u8 **)&data_02160218)[1];
                if (*(u32 *)list_mgr == 0) {
                    u8 *item = (u8 *)func_0210c594(0xc, data_02155c3c);
                    *(u16 *)item = table.data[i * 2 + 1];
                    func_021167f0(((u8 **)&data_02160218)[1] + 4, item);
                    *(u32 *)(((u8 **)&data_02160218)[1]) += 1;
                } else {
                    u8 *it = *(u8 **)(list_mgr + 4);
                    s32 add = 1;
                    while (it != NULL) {
                        if (*(u16 *)it == table.data[i * 2 + 1]) {
                            add = 0;
                        }
                        it = *(u8 **)(it + 8);
                    }
                    if (add != 0) {
                        u8 *item = (u8 *)func_0210c594(0xc, data_02155c3c);
                        *(u16 *)item = table.data[i * 2 + 1];
                        func_021167f0(((u8 **)&data_02160218)[1] + 4, item);
                        *(u32 *)(((u8 **)&data_02160218)[1]) += 1;
                    }
                }
                break;
            }
            node = *(u8 **)(node + 0x174);
        }
    }

    data_02160a6c[0x11d] = *(u32 *)(((u8 **)&data_02160218)[1]);
    func_020c0d98();
    func_020c0e08();
    if (((u8 **)&data_02160218)[1] != NULL) {
        func_0210c5dc(((u8 **)&data_02160218)[1]);
        ((u8 **)&data_02160218)[1] = NULL;
    }
}

extern void func_021167ac(void *, s32);
extern void func_021167f0(void *, void *);
void func_020c1038(void) {
    Unk64 table = data_02143e4c;
    s32 i;
    u8 *mgr = (u8 *)func_0210c594(0x10, data_02155c3c);

    ((u8 **)&data_02160218)[1] = mgr;
    func_021167ac(mgr + 4, 4);
    data_02160a6c[0x11f] = 0;
    *(u32 *)(((u8 **)&data_02160218)[1]) = 0;

    for (i = 0; i < 8; i++) {
        u8 *node = *(u8 **)(data_02160a6c + 0x70);
        while (node != NULL) {
            if (*(u16 *)(node + 0x8e) == table.data[i * 2] || table.data[i * 2] == -1) {
                u8 *list_mgr = ((u8 **)&data_02160218)[1];
                if (*(u32 *)list_mgr == 0) {
                    u8 *item = (u8 *)func_0210c594(0xc, data_02155c3c);
                    *(u16 *)item = table.data[i * 2 + 1];
                    func_021167f0(((u8 **)&data_02160218)[1] + 4, item);
                    *(u32 *)(((u8 **)&data_02160218)[1]) += 1;
                } else {
                    u8 *it = *(u8 **)(list_mgr + 4);
                    s32 add = 1;
                    while (it != NULL) {
                        if (*(u16 *)it == table.data[i * 2 + 1]) {
                            add = 0;
                        }
                        it = *(u8 **)(it + 8);
                    }
                    if (add != 0) {
                        u8 *item = (u8 *)func_0210c594(0xc, data_02155c3c);
                        *(u16 *)item = table.data[i * 2 + 1];
                        func_021167f0(((u8 **)&data_02160218)[1] + 4, item);
                        *(u32 *)(((u8 **)&data_02160218)[1]) += 1;
                    }
                }
            }
            node = *(u8 **)(node + 0x13c);
        }
    }

    data_02160a6c[0x11f] = *(u32 *)(((u8 **)&data_02160218)[1]);
    func_020c0d98();
    func_020c0e08();
    if (((u8 **)&data_02160218)[1] != NULL) {
        func_0210c5dc(((u8 **)&data_02160218)[1]);
        ((u8 **)&data_02160218)[1] = NULL;
    }
}

