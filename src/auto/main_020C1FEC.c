/* 19 functions from 0x020C1FEC to 0x020C2E80 (main), found by ds-decomp. */
#include "common.h"
extern void func_020c32e8(void *,s16,u8);
extern void func_020c30b4(u8,u8);
void *func_020c2a98(u8,u32);
void *func_020c2adc(u8);
void *func_020c2b20(u8);

extern u32 data_02155c3c;
extern u32 data_0216263c[3];

extern u8 *func_0210c594(u32,u32);
extern s32 func_020330b8(void *);
extern s32 func_02064cb8(void *,s32);
extern s32 func_02032294(void *);

extern u8 *data_02160090;
extern u8 *data_02160a6c;
extern void func_020dde88(u8 *);
extern s32 func_020dda2c(s32);
extern s32 func_020c09b0(u8 *, s32, s32);
extern void func_020c0a58(u8 *);
extern s32 func_020c0954(u8 *);

extern u8 *func_020c2584(u8 *, u32);
extern u8 *func_020ddb90(u16);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020c27b4(u8, s8, u32);
extern void func_021167f0(u8 *, u8 *);
extern void func_02108ffc(void);

void func_020c2734(u8 arg0, s8 arg1, u32 arg2);
void func_020c1fec(void) {
    s32 zero = 0;
    s32 one = 1;
    u8 *g = data_02160a6c;
    u8 *r7;
    u8 *r8, *r9;
    u16 angle;
    s32 a, b;

    if (g == NULL) return;
    r7 = *(u8 **)(g + 0xa0);
    if (r7 == NULL) return;

    a = 0xbbb - 0x430;
    b = 0x461 - 0x430;
    {
        s32 c = 0x461 - 0x28;
        s32 d = 0x461 - 0x5a;
        s32 e = 0x461 - 0x1d;
        s32 f = 0x461 - 0x1e;
        s32 g1 = 0x584 + 0xa;
        s32 h = 0x584 - 1;
        s32 i = 0x58c + 0xa20;
        s32 j = 0xd50 - 0xbbb;
        s32 k = 0xbbb - 0xcf0;
        s32 l = 0x460 - 0x461;

        func_020dde88(r7);
        angle = *(u16 *)(r7 + 0x8e);
        if (angle > a) {
            if (angle > 0x461) goto tail;
            r9 = *(u8 **)(r7 + 0x19c);
            if (r9 != NULL) {
                if (func_020c0954(r7) == *(s16 *)(r9 + 0xc)) {
                    if (*(s16 *)(r9 + 0xe) != 0) func_0210d27c(0);
                    *(s16 *)(r9 + 0xe) = zero;
                    *(s16 *)(r9 + 0) = one;
                    func_020c0a58(r7);
                } else if (angle - i <= 0xb) {
                    r8 = func_020dda2c(*(s16 *)(r7 + 0x90) + k);
                }
            }
        } else if (angle >= b) {
            if (angle >= c) {
                r9 = *(u8 **)(r7 + 0x19c);
                if (r9 != NULL && (*(u16 *)(r9 + 2) & 1) && func_020c09b0(r7, 5, 5)) {
                    *(s16 *)(r9 + 0) = one;
                    r7[0xa5] = one;
                    if (*(s16 *)(r9 + 0xe) != 0) func_0210d27c(0);
                    *(s16 *)(r9 + 0xe) = zero;
                    func_020c0a58(r7);
                }
            }
        } else if (angle > c) {
            r9 = *(u8 **)(r7 + 0x19c);
        } else if (angle >= c) {
            if (angle > e) goto tail;
            if (angle < f) goto tail;
            if (angle == f || angle == e) goto tail;
        } else if (angle == d) {
            goto tail;
        }
        if (r7[0x104] == 0x12) {
            r8 = func_020dda2c(*(u16 *)(r7 + 0x90) - 0x96);
            if (r8 != NULL) {
                *(u32 *)(r7 + 0) = *(u32 *)(r8 + 0);
                *(u32 *)(r7 + 4) = *(u32 *)(r8 + 4);
                *(u32 *)(r7 + 8) = *(u32 *)(r8 + 8);
            }
        }
    }
tail:
    r7[0xa5] = one;
    r7 = *(u8 **)(r7 + 0x154);
    if (r7 != NULL) goto tail;
}

u8 *func_020c2584(u8 *arg0,u32 arg1) {
 u8 *p; s32 val=0; s16 sum;
 p=func_0210c594(0x2c,data_02155c3c);
 *(u8 **)(p+4)=arg0;
 p[1]=255;p[0]=0;p[0x14]=0;p[0x1a]=1;
 if(arg1==0) {
 u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
 u16 random=((seed>>16)*3)>>16;
 data_0216263c[0]=seed;
 *(s16 *)(p+0x12)=random+1;
 }
 p[2]=1;
 if(*(s32 *)(*(u8 **)(arg0+0x118)+0x70)!=0) p[2]=0;
 if((*(u8 **)(arg0+0x118))[0]==0) val=func_020330b8(arg0);
 else if((*(u8 **)(arg0+0x118))[0]==1) val=func_02064cb8(*(void **)(arg0+0x11c),11);
 *(s32 *)(p+8)=val;
 sum=*(s16 *)(p+0x12)+(*(s16 *)(*(u8 **)(arg0+0x118)+0x18)+*(s16 *)(*(u8 **)(arg0+0x118)+0xa6)+1);
 *(s16 *)(p+0x10)=func_02032294(arg0)+sum;
 *(s16 *)(p+0x28)=*(volatile s16 *)(p+0x10);
 return p;
}

void func_020c2694(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xac);
    while (node != NULL) {
        ((s8 *)data_02160090)[0x7d]++;
        node = *(u8 **)(node + 0x16c);
    }
    node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        ((s8 *)data_02160090)[0x7d]++;
        node = *(u8 **)(node + 0x174);
    }
}

void func_020c2708(u8 arg0) {
    func_020c2734(arg0, 0, 0);
    func_020c27b4(arg0, 3, 0);
}

void func_020c2734(u8 arg0, s8 arg1, u32 arg2) {
    u8 *node = *(u8 **)(data_02160a6c + 0xac);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0) {
            u8 *res = func_020c2584(node, arg2);
            res[0] = arg0;
            res[0x14] = arg1;
            func_021167f0(data_02160090 + 0x48, res);
            arg1++;
        }
        node = *(u8 **)(node + 0x16c);
    }
}

void func_020c27b4(u8 arg0, s8 arg1, u32 arg2) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *res = func_020c2584(node, arg2);
        res[0] = arg0;
        res[0x14] = arg1;
        func_021167f0(data_02160090 + 0x48, res);
        arg1++;
        node = *(u8 **)(node + 0x174);
    }
}

void func_020c2824(u8 arg0, u8 arg1, u32 arg2, u16 arg3) {
    u8 *node = func_020ddb90(arg3);
    if (node != NULL) {
        u8 *res = func_020c2584(node, arg2);
        res[0] = arg0;
        res[0x14] = arg1;
        func_021167f0(data_02160090 + 0x48, res);
    }
}

void func_020c2870(u8 id) {
s16 count=0,sum=0,average,i,order;
u8 *node=*(u8 **)(data_02160090+0x48),*next,*p;
s32 zero=0,clear=0;
while(node) {
if(node[0]==id && !(*(u16 *)(node+24)&1)) { sum+=*(s16 *)(node+16);count++; }
node=*(u8 **)(node+36);
}
average=sum/count;
for(i=0;i<20;i++) {
node=func_020c2adc(id);
if(node) {
void *obj=*(void **)(node+4);
*(s16 *)(node+22)=*(s16 *)(node+16)-average;
if(*(volatile s16 *)(node+22)<0)*(s16 *)(node+22)=zero;
func_020c32e8(obj,*(s16 *)(node+22),node[0]);
node[26]=clear;*(s16 *)(node+22)=clear;
}
}
order=1;
rank_next:
node=func_020c2b20(id);
if(node) {node[1]=order;order++;goto rank_next;}
func_020c30b4(id,254);
node=*(u8 **)(data_02160090+0x6c);
while(node) {
s16 insert;
u16 range;
u32 random,seed;
next=*(u8 **)(node+36);
func_021168f8(data_02160090+0x6c,node);
i=0;
p=*(u8 **)(data_02160090+0x48);
while(p) {if(p[0]==node[0])i++;p=*(u8 **)(p+36);}
range=i+1;
seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
data_0216263c[0]=seed;
if(range)random=((seed>>16)*range)>>16;
else random=seed>>16;
insert=(u16)random+1;
p=*(u8 **)(data_02160090+0x48);
while(p) {
if(p[0]==node[0] && p[1]>=insert)p[1]++;
p=*(u8 **)(p+36);
}
node[1]=insert;
func_021167f0(data_02160090+0x48,node);
node=next;
}
for(order=1;order<10;order++)func_020c2a98(id,order);
}

void *func_020c2a98(u8 arg0, u32 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void *func_020c2adc(u8 arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[0x1a] == 1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void *func_020c2b20(u8 arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    u8 *best = NULL;
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == 0xff) {
            if (best == NULL) {
                best = node;
            } else if (*(s16 *)(node + 0x10) == *(s16 *)(best + 0x10)) {
                if (*(s8 *)(node + 0x14) < *(s8 *)(best + 0x14)) {
                    best = node;
                }
            } else if (*(s16 *)(node + 0x10) > *(s16 *)(best + 0x10)) {
                best = node;
            }
        }
        node = *(u8 **)(node + 0x24);
    }
    return best;
}

void func_020c2b98(void) {
    void *node;
    while ((node = *(void **)(data_02160090 + 0x48)) != NULL) {
        func_021168f8(data_02160090 + 0x48, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020c2be4(void) {
    void *node;
    while ((node = *(void **)(data_02160090 + 0x60)) != NULL) {
        func_021168f8(data_02160090 + 0x60, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020c2c30(void) {
    void *node;
    while ((node = *(void **)(data_02160090 + 0x6c)) != NULL) {
        func_021168f8(data_02160090 + 0x6c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

u8 func_020c2c7c(void) {
 s16 ids[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
 u16 i,used;
 u32 count=0;
 u8 *node=*(u8 **)(data_02160090+0x48);
 while(node) {
 u8 id=node[0]; s32 found=0;
 for(i=0;i<10;i++) {
 if(id==ids[i]) {found=1;break;}
 }
 if(!found) {
 ids[count]=id; count=(u16)(count+1);
 if(count>10) break;
 }
 node=*(u8 **)(node+0x24);
 }
 used=0;
 for(i=0;i<10;i++) if(ids[i]!=-1) used++;
 return used;
}

void *func_020c2d80(void) {
    return *(void **)(data_02160090 + 0x48);
}

void *func_020c2d94(u8 arg0, u8 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void func_020c2dd8(u16 arg0) {
    u16 x;
    u16 y;
    u16 count;
    s16 i;
    i = 0;
    x = 0;
    count = 0;
    y = 1;
    while (1) {
        if (++i > 50) {
            i = 0;
            func_02108ffc();
        }
        if (func_020c2d94((u8)x, (u8)y) != NULL) {
            if (count == arg0) return;
            count = (u16)(count + 1);
            y = (u16)(y + 1);
        } else {
            y = (u16)(y + 1);
            if (y > 30) {
                x = (u16)(x + 1);
                y = 1;
                if (x > 30) x = 0;
            }
        }
    }
}

