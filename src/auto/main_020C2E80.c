/* 24 functions from 0x020C2E80 to 0x020C3DF4 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_021626a8,data_021628f8;

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160090;
extern u8 *data_02160140;
extern u8 *data_0216013c;
extern void func_021167ac(void *, u32);
extern void func_021167f0(void *, void *);
extern void *func_020c2dd8(u32);
struct UnkB0 {
    s16 data[88];
};
extern const struct UnkB0 data_02144318;
struct Unk108 { s16 data[132]; };
extern const struct Unk108 data_021443c8;
extern void *func_020c3d24(void *);
extern void func_02116844(void *, void *);
extern void func_02116894(void *, void *, void *);
void func_020c2e80(u8 *a, u8 *b) {
    u8 *next = NULL;
    s32 adjacent;

    if (a == NULL || b == NULL) {
        return;
    }
    if (a[0] == b[0]) {
        u8 tmp = a[1];
        a[1] = b[1];
        b[1] = tmp;
    } else {
        u8 tmp1, tmp0;
        *(u16 *)(a + 0x18) |= 1;
        *(u16 *)(b + 0x18) |= 1;
        tmp1 = a[1];
        a[1] = b[1];
        b[1] = tmp1;
        tmp0 = a[0];
        a[0] = b[0];
        b[0] = tmp0;
    }
    adjacent = 0;
    if (a == *(u8 **)(b + 0x20) || a == *(u8 **)(b + 0x24)) {
        adjacent = 1;
    }
    if (adjacent == 1) {
        u8 *p;
        next = *(u8 **)(b + 0x24);
        func_021168f8(data_02160090 + 0x48, b);
        p = data_02160090;
        if (a == NULL) {
            func_021167f0(p + 0x48, b);
        } else if (a == *(u8 **)(p + 0x48)) {
            func_02116844(p + 0x48, b);
        } else {
            func_02116894(p + 0x48, a, b);
        }
    } else if (adjacent == 0) {
        u8 *p;
        next = *(u8 **)(b + 0x24);
        func_021168f8(data_02160090 + 0x48, b);
        p = data_02160090;
        if (a == NULL) {
            func_021167f0(p + 0x48, b);
        } else if (a == *(u8 **)(p + 0x48)) {
            func_02116844(p + 0x48, b);
        } else {
            func_02116894(p + 0x48, a, b);
        }
    }
    if (adjacent != 0) {
        return;
    }
    {
        u8 *p;
        func_021168f8(data_02160090 + 0x48, a);
        p = data_02160090;
        if (next == NULL) {
            func_021167f0(p + 0x48, a);
        } else if (next == *(u8 **)(p + 0x48)) {
            func_02116844(p + 0x48, a);
        } else {
            func_02116894(p + 0x48, next, a);
        }
    }
}

void func_020c3020(void *arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    u8 *next;
    u8 *p;
    while (node != NULL) {
        next = *(u8 **)(node + 0x24);
        if (*(void **)(node + 4) == arg0 || *(void **)(node + 4) == NULL) {
            p = *(u8 **)(data_02160090 + 8);
            while (p != NULL) {
                if (*(void **)(p + 0x48) == node) {
                    *(void **)(p + 0x48) = NULL;
                }
                p = *(u8 **)(p + 0x1c);
            }
            func_021168f8((void **)(data_02160090 + 0x48), node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
        node = next;
    }
}

void *func_020c30b4(u8 arg0, u8 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void func_020c30f8(void) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    u8 i = 0;
    while (node != NULL) {
        i++;
        if (i > 9) {
            return;
        }
        node = *(u8 **)(node + 0x24);
    }
}

void func_020c3134(void *arg0) {
    u8 i;
    u8 *node;
    func_021168f8((void **)(data_02160090 + 0x48), arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
    i = 0;
    node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        i++;
        node = *(u8 **)(node + 0x24);
        if (i > 15) {
            return;
        }
    }
}

void func_020c319c(u8 *arg0, u8 *arg1) {
    u8 *node;
    u8 i;
    *(u32 *)(arg0 + 4) = *(u32 *)(arg1 + 4);
    *(u32 *)(arg0 + 8) = *(u32 *)(arg1 + 8);
    *(u32 *)(arg0 + 0xc) = *(u32 *)(arg1 + 0xc);
    node = *(u8 **)(data_02160090 + 0x48);
    i = 0;
    while (node != NULL) {
        i++;
        node = *(u8 **)(node + 0x24);
        if (i > 10) {
            return;
        }
    }
}

void func_020c31f0(void) {
    u8 *node;
    u8 zero = 0;
    do {
        node = func_020c2dd8(zero);
        if (node != NULL) {
            func_021168f8((void **)(data_02160090 + 0x48), node);
            func_021167f0((void **)(data_02160090 + 0x54), node);
        }
    } while (*(u16 *)(data_02160090 + 0x50) != 0);
}

void func_020c3244(u8 arg0) {
    u8 *node;
    s8 v = -1;
    u8 flag;
    if (*(u16 *)(data_02160090 + 0x5c) == 0) {
        return;
    }
    do {
        node = *(u8 **)(data_02160090 + 0x54);
        node[0] -= arg0;
        if (v == -1) {
            flag = 1;
            v = (s8)node[0];
        } else if (v != node[0]) {
            v = (s8)node[0];
            flag = 1;
        }
        node[1] = flag;
        flag++;
        func_021168f8((void **)(data_02160090 + 0x54), node);
        func_021167f0((void **)(data_02160090 + 0x48), node);
    } while (*(u16 *)(data_02160090 + 0x5c) != 0);
}

extern void *func_020c2584(void *, s32);
void func_020c32e8(void *arg0, s16 arg1, u8 arg2) {
    u8 *node = *(u8 **)(data_02160090 + 0x60);

    while (node != NULL) {
        if (*(void **)(node + 4) == arg0) {
            break;
        }
        node = *(u8 **)(node + 0xc);
    }

    if (node == NULL) {
        node = (u8 *)func_0210c594(0x10, data_02155c3c);
        *(s16 *)node = arg1;
        *(void **)(node + 4) = arg0;
        func_021167f0((void **)(data_02160090 + 0x60), node);
    } else {
        *(u16 *)node = *(s16 *)node + arg1;
        if (*(s16 *)node > 0x32) {
            *(s16 *)node -= 0x32;
            if (data_02160090[0x80] != 1) {
                u8 *p = (u8 *)func_020c2584(arg0, 0);
                p[0] = arg2;
                p[0x14] = 0;
                p[0x1a] = 0;
                *(u16 *)(p + 0x18) |= 1;
                func_021167f0((void **)(data_02160090 + 0x6c), p);
            }
        }
    }
}

void func_020c33d4(void) {
}

void func_020c33d8(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, u32 arg6) {
    u32 a = (arg1 << 8) >> 16;
    u32 c = ((arg1 + arg3) << 20) >> 16;
    u32 v0 = arg0[0];
    u32 v1 = arg0[1];
    u32 v2 = arg0[2];
    *(volatile u32 *)0x4000444 = 0;
    *(volatile u32 *)0x4000470 = v0;
    *(volatile u32 *)0x4000470 = v1;
    *(volatile u32 *)0x4000470 = v2;
    *(volatile u32 *)0x400046c = arg5 << 12;
    *(volatile u32 *)0x400046c = 0x1000;
    *(volatile u32 *)0x400046c = arg6 << 12;
    *(volatile u32 *)0x4000500 = 1;
    *(volatile u32 *)0x4000488 = (u16)a | ((u32)(u16)((arg2 << 8) >> 16) << 16);
    *(volatile u32 *)0x4000490 = 0x3c0003c0;
    *(volatile u32 *)0x4000488 = (u16)a | ((u32)(u16)(((arg2 + arg4) << 20) >> 16) << 16);
    *(volatile u32 *)0x4000490 = 0x040003c0;
    *(volatile u32 *)0x4000488 = (u16)c | ((u32)(u16)(((arg2 + arg4) << 20) >> 16) << 16);
    *(volatile u32 *)0x4000490 = 0x04000040;
    *(volatile u32 *)0x4000488 = (u16)c | ((u32)(u16)((arg2 << 8) >> 16) << 16);
    *(volatile u32 *)0x4000490 = 0x3c000040;
    *(volatile u32 *)0x4000504 = 0;
    *(volatile u32 *)0x4000448 = 1;
}

void func_020c34c8(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, u32 arg6, u16 arg7) {
    s32 a = (arg1 << 8) >> 16;
    s32 b = (arg2 << 8) >> 16;
    s32 c = ((arg1 + arg3) << 20) >> 16;
    s32 d = ((arg2 + arg4) << 20) >> 16;
    u32 v0 = arg0[0];
    u32 v1 = arg0[1];
    u32 v2 = arg0[2];
    *(volatile u32 *)0x4000444 = 0;
    *(volatile u32 *)0x4000470 = v0;
    *(volatile u32 *)0x4000470 = v1;
    *(volatile u32 *)0x4000470 = v2;
    *(volatile u32 *)0x400046c = arg5 << 12;
    *(volatile u32 *)0x400046c = 0x1000;
    *(volatile u32 *)0x400046c = arg6 << 12;
    *(volatile u32 *)0x4000500 = 1;
    *(volatile u32 *)0x4000480 = arg7;
    *(volatile u32 *)0x4000488 = (u16)a | ((u32)(u16)b << 16);
    *(volatile u32 *)0x4000490 = 0x3c0003c0;
    *(volatile u32 *)0x4000488 = (u16)a | ((u32)(u16)d << 16);
    *(volatile u32 *)0x4000490 = 0x040003c0;
    *(volatile u32 *)0x4000488 = (u16)c | ((u32)(u16)d << 16);
    *(volatile u32 *)0x4000490 = 0x04000040;
    *(volatile u32 *)0x4000488 = (u16)c | ((u32)(u16)b << 16);
    *(volatile u32 *)0x4000490 = 0x3c000040;
    *(volatile u32 *)0x4000504 = 0;
    *(volatile u32 *)0x4000448 = 1;
}

void func_020c35c4(u32 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 unused, u32 arg4, u32 arg5, u16 arg6, u32 arg7) {
    u32 v0 = arg0[0];
    u32 v1 = arg0[1];
    u32 v2 = arg0[2];
    *(volatile u32 *)0x40004a8 = 0;
    *(volatile u32 *)0x4000444 = 0;
    *(volatile u32 *)0x4000470 = v0;
    *(volatile u32 *)0x4000470 = v1;
    *(volatile u32 *)0x4000470 = v2;
    *(volatile u32 *)0x400046c = arg4 << 12;
    *(volatile u32 *)0x400046c = 0x1000;
    *(volatile u32 *)0x400046c = arg5 << 12;
    *(volatile u32 *)0x4000500 = 1;
    *(volatile u32 *)0x4000480 = arg6;
    *(volatile u32 *)0x4000490 = 0x3c0003c0;
    *(volatile u32 *)0x4000490 = 0x040003c0;
    *(volatile u32 *)0x4000490 = 0x04000040;
    *(volatile u32 *)0x4000490 = 0x3c000040;
    *(volatile u32 *)0x4000504 = 0;
    *(volatile u32 *)0x4000448 = 1;
}

void func_020c3738(void *arg0) {
    struct UnkB0 buf = data_02144318;
    u16 i;

    for (i = 0; i < 8; i++) {
        u16 idx = i * 11;
        u8 *p = (u8 *)func_020c3d24(arg0);
        *(s16 *)(p + 0x22) = buf.data[idx + 0];
        *(s16 *)(p + 0x24) = buf.data[idx + 1];
        *(s16 *)(p + 0x26) = buf.data[idx + 2];
        *(s16 *)(p + 0x28) = buf.data[idx + 3];
        *(s32 *)(p + 0x00) = buf.data[idx + 4];
        *(s32 *)(p + 0x04) = buf.data[idx + 5];
        *(s32 *)(p + 0x08) = buf.data[idx + 6];
        *(s16 *)(p + 0x1e) = buf.data[idx + 7];
        *(s16 *)(p + 0x20) = buf.data[idx + 8];
        *(s16 *)(p + 0x14) = buf.data[idx + 9];
        *(s16 *)(p + 0x16) = buf.data[idx + 10];
        p[0x18] = 0x1f;
    }
}

void *func_020c3810(u16 arg0) {
    u8 **head = *(u8 ***)(data_02160140 + 0x3c);
    u8 *node = *head;
    while (node != NULL) {
        if (*(u16 *)(node + 0x16) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return node;
}

extern void func_020c3da4(void *,u16,s32);
void func_020c3850(u8 *self) {
int five=5,zero=0,one=1;
u8 *p;
if(*(u32 *)(self+4)>=1 && *(u32 *)(self+4)<=6 && self[0x25]==0) {
if((data_021626a8&1) || (data_021626a8&8) || data_021628f8!=0) self[0x25]=one;
}
if(self[0x25]==1 && *(u32 *)(self+4)<=6 && *(u32 *)(self+4)>=3) {
*(u32 *)(self+4)=11; self[0x25]=2; *(u32 *)(data_02160140+0x4c)=one;
}
switch(*(u32 *)(self+4)) {
case 0:
func_020c3da4(func_020c3810(4),11,zero);
func_020c3da4(func_020c3810(6),9,zero);
(*(volatile s16 *)(self+0x1c))++;
if(*(volatile s16 *)(self+0x1c)>2) {*(volatile s16 *)(self+0x1c)=zero; *(u32 *)(self+4)=one;}
break;
case 1:
func_020c3da4(func_020c3810(0),3,zero);
func_020c3da4(func_020c3810(5),11,zero);
func_020c3da4(func_020c3810(3),1,zero);
func_020c3da4(func_020c3810(7),9,zero);
*(u32 *)(self+4)=2;
break;
case 2: {
int step=1;
if(self[0x25]==1) step=3;
p=func_020c3810(5);
step*=2;
*(volatile s8 *)(p+0x18)-=(s8)step;
if(*(volatile s8 *)(p+0x18)<=1) {
func_020c3da4(p,1,1); *(u32 *)(self+4)=3;
}
p=func_020c3810(7);
*(volatile s8 *)(p+0x18)-=(s8)step;
if(*(volatile s8 *)(p+0x18)<=1) func_020c3da4(p,1,1);
break;
}
case 3:
(*(volatile s16 *)(self+0x1c))++;
if(*(volatile s16 *)(self+0x1c)>70) {*(volatile s16 *)(self+0x1c)=zero; *(u32 *)(self+4)=4;}
break;
case 4:
p=func_020c3810(5);
*(volatile s8 *)(p+0x18)+=3;
if(*(volatile s8 *)(p+0x18)>=2) func_020c3da4(p,1,0);
if(*(volatile s8 *)(p+0x18)>=31) {
*(volatile s8 *)(p+0x18)=31;
func_020c3da4(func_020c3810(zero),3,one);
func_020c3da4(func_020c3810(3),one,one);
func_020c3da4(func_020c3810(one),3,zero);
func_020c3da4(func_020c3810(2),one,zero);
*(u32 *)(self+4)=five;
}
p=func_020c3810(7);
*(volatile s8 *)(p+0x18)+=3;
if(*(volatile s8 *)(p+0x18)>=2) func_020c3da4(p,1,0);
if(*(volatile s8 *)(p+0x18)>=31) *(volatile s8 *)(p+0x18)=31;
break;
case 5:
p=func_020c3810(5);
*(volatile s8 *)(p+0x18)-=3;
if(*(volatile s8 *)(p+0x18)<=1) {*(volatile s8 *)(p+0x18)=zero; func_020c3da4(p,1,1);}
p=func_020c3810(7);
*(volatile s8 *)(p+0x18)-=3;
if(*(volatile s8 *)(p+0x18)<=1) {*(volatile s8 *)(p+0x18)=zero; func_020c3da4(p,1,1); *(u32 *)(self+4)=6;}
break;
case 6:
(*(volatile s16 *)(self+0x1c))++;
if(*(volatile s16 *)(self+0x1c)>70) {*(volatile s16 *)(self+0x1c)=zero; *(u32 *)(self+4)=11;}
break;
case 11:
p=func_020c3810(5);
*(volatile s8 *)(p+0x18)+=3;
if(*(volatile s8 *)(p+0x18)>=31) *(volatile s8 *)(p+0x18)=31;
func_020c3da4(p,1,0);
p=func_020c3810(7);
*(volatile s8 *)(p+0x18)+=3;
if(*(volatile s8 *)(p+0x18)>=31) *(volatile s8 *)(p+0x18)=31;
func_020c3da4(p,one,zero);
(*(volatile s16 *)(self+0x1c))++;
if(*(volatile s16 *)(self+0x1c)>16) {*(volatile s16 *)(self+0x1c)=zero; *(u32 *)(data_02160140+0x4c)=one;}
break;
}
}

void *func_020c3c78(void) {
    return func_0210c594(0x28, data_02155c3c);
}

void func_020c3c94(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020c3ca8(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x2c);
    return ptr;
}

extern void func_021168f8(void *, void *);
void func_020c3cd4(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020c3d24(void *arg0) {
    void *p = func_0210c594(0x34, data_02155c3c);
    *(u32 *)((u8 *)p + 0xc) = 0x1000;
    *(u32 *)((u8 *)p + 0x10) = 0x1000;
    func_021167f0(arg0, p);
    return p;
}

void *func_020c3d64(u16 arg0) {
    u8 **head = *(u8 ***)(data_0216013c + 0x8c);
    u8 *node = *head;
    while (node != NULL) {
        if (*(u16 *)(node + 0x16) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return node;
}

void func_020c3da4(void *arg0, u16 arg1, s32 arg2) {
    if (arg0 == NULL) {
        return;
    }
    switch (arg2) {
    case 0:
        *(u16 *)((u8 *)arg0 + 0x2a) |= arg1;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0x2a) &= (u16)~arg1;
        break;
    case 2:
        *(u16 *)((u8 *)arg0 + 0x2a) = 0;
        break;
    }
}

