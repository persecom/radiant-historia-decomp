/* 15 functions from 0x020437F0 to 0x020447A4 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_02146438[],data_02146460[];
extern u8 data_02146408[],data_02146410[];
extern void *data_021600b8;
extern u8 *func_0204680c(void *,u32);
extern void func_0210eb98(void *,s32,s32,s32);
extern u8 *func_020f57e8(void);
extern void func_021167f0();
extern u16 data_021626a8,data_021626a6;
extern void func_020447a4(void *);
extern void func_02046794(void);

extern u8 *data_021600bc;
extern u32 data_0216263c[3];

static inline s32 in_rect_02043de4(u8 *node, u8 *player) {
    s32 z = *(s32 *)(player + 8);
    s32 x = *(s32 *)(player + 0);
    if (x >= *(s32 *)(node + 0) && x <= *(s32 *)(node + 8) &&
        z >= *(s32 *)(node + 4) && z <= *(s32 *)(node + 0xc)) {
        return 1;
    }
    return 0;
}

static inline u16 rand_range_02043de4(u16 max) {
    u32 x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    data_0216263c[0] = x;
    if (max == 0) {
        return (u16)(x >> 16);
    }
    return (u16)(((x >> 16) * max) >> 16);
}
extern u8 *data_02160204;
extern u8 data_021600a8[8];
extern void func_0210f978(void);
extern void func_020eff5c(u32);
extern void func_020f40a4(void);
extern void func_0203d7c0(void);
extern void func_020eb180(u32, u32);
extern void func_020ec12c(void);
extern void func_0203e61c(void);
extern void func_0203ee20(u32);
extern void func_020f5760(void);
extern void func_020469f4(void);
extern void func_02046594(void);
extern void func_020e9eb0(void);
extern void func_020a31c8(u32);
extern void func_020f0090(u32);
extern void func_020f4144(void);
extern void func_0203d800(void);
extern void func_020eb344(u32, u32);
extern void func_020ec218(void);
extern void func_0203e6bc(void);
extern void func_0203ef0c(u32);
extern void func_020f5798(void);
extern void func_0210c5dc(void *);
extern void func_02046600(void);
extern void func_020e9f44(void);
extern void func_020a3b84(void);
extern void func_0210f138(void);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_020423f8(void);
extern void func_020415d0(void);
extern void func_02042634(void);
void func_020437f0(void) {
u32 zero=0;
func_0210f978(); func_020eff5c(zero); func_020f40a4(); func_0203d7c0(); func_020eb180(1,zero); func_020ec12c(); func_0203e61c(); func_0203ee20(zero); func_020f5760();
if(data_02160204[0x7a]==0){func_020469f4();func_02046594();}
func_020e9eb0();
if(data_02160204[0xd7]!=3) func_020a31c8(0);
}

void func_02043870(void) {
    u32 zero = 0;
    func_020f0090(zero);
    func_020f4144();
    func_0203d800();
    func_020eb344(1, zero);
    func_020ec218();
    func_0203e6bc();
    func_0203ef0c(zero);
    func_020f5798();
    {
        u8 **pp = &data_021600bc;
        if (*pp != NULL) {
            func_0210c5dc(*pp);
            *pp = NULL;
        }
    }
    func_02046600();
    func_020e9f44();
    func_020a3b84();
    func_0210f138();
}

void func_020438d8(void) {
    register u32 v = 0x3ec;
    *(void **)(*(u8 **)(data_021600a8 + 4) + 0x18) = (void *)func_020423f8;
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x1c) = 0x3f3;
    func_0210d9e4(*(u8 **)(data_021600a8 + 4) + 0x18);
    *(void **)(*(u8 **)(data_021600a8 + 4) + 0x2c) = (void *)func_020415d0;
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x30) = v;
    func_0210d9e4(*(u8 **)(data_021600a8 + 4) + 0x2c);
    *(void **)(*(u8 **)(data_021600a8 + 4) + 0x40) = (void *)func_02042634;
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x44) = v - 3;
    func_0210db70(*(u8 **)(data_021600a8 + 4) + 0x40);
}

extern s32 func_0210c2f4(void *, s32 *);
extern void func_02047820(u16);
extern void func_020522d4(void *, s32, s32);
extern void func_020468b0(s32);
extern void func_02052904(s32);
extern void func_0205443c(s32);
extern u8 *func_020f0aa4(void);
extern void func_02047490(void);
extern void func_0210d568(s32);
u16 func_02043964(u16 arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0x40);
    while (node != NULL) {
        if (*(u16 *)(node + 0x90) == arg0) {
            break;
        }
        node = *(u8 **)(node + 0x13c);
    }
    if (node != NULL) {
        return *(u16 *)(*(u8 **)(node + 0xb0) + 8);
    }
    return 0;
}

extern u32 data_02146324[4];
extern u16 data_02160098;
extern void func_0207af60(void);
extern void func_0207c2dc(void);
u32 func_020439a8(void) {
    u8 *node, *pos;
    u16 ret = 0;
    s32 one = 1;
    s32 zero = 0;

    pos = *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68);
    node = *(u8 **)(data_021600bc + 0x88);
    if (node == NULL) {
        goto end;
    }
    do {
        s32 z = *(s32 *)(pos + 8);
        s32 x = *(s32 *)(pos + 0);
        s32 hit;
        if (x >= *(s32 *)(node + 0) && x <= *(s32 *)(node + 8) &&
            z >= *(s32 *)(node + 4) && z <= *(s32 *)(node + 0xc)) {
            hit = 1;
        } else {
            hit = 0;
        }
        if (hit != 0) {
            u16 val = *(u16 *)(node + 0x14);
            if (val != 0 && val != *(u16 *)(data_02160204 + 0x72)) {
                *(u16 *)(data_02160204 + 0x72) = val;
                data_02146324[3] = 2;
                ret = one;
                *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0xc) = one;
                *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x10) = zero;
                *(u16 *)(data_02160204 + 0x74) = zero;
                *(u16 *)(data_02160204 + 0x76) = zero;
                *(u8 *)(data_02160204 + 0x7a) = zero;
                *(u8 *)(data_02160204 + 0x85) = one;
                goto call;
            } else {
                if (*(u16 *)(data_02160204 + 0x72) == 500 || val != 0) {
                    goto stores;
                }
                ret = 1;
                data_02146324[3] = 4;
                *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0xc) = ret;
call:
                func_0207af60();
stores:
                *(u16 *)(data_02160204 + 0x74) = *(u32 *)(node + 0x18);
                *(u16 *)(data_02160204 + 0x76) = *(u32 *)(node + 0x1c);
                data_02160098 = *(u16 *)(node + 0x12);
                *(u8 *)(data_02160204 + 0x7a) = zero;
                func_0207c2dc();
            }
        }
        node = *(u8 **)(node + 0x28);
    } while (node != NULL);
end:
    if (ret != 0) {
        *(u16 *)(data_02160204 + 0x78) = *(u16 *)(pos + 0x92);
    }
    return ret;
}

extern u8 *data_0216009c;
void func_02043b28(void) {
    u32 val = 9;
    u8 *pos = *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68);
    u8 *node = *(u8 **)(data_021600bc + 0x94);

    if (node != NULL) {
        s32 x, z;
        z = *(s32 *)(pos + 8);
        x = *(s32 *)(pos + 0);
        while (node != NULL) {
            s32 hit;
            if (x >= *(s32 *)(node + 0) && x <= *(s32 *)(node + 8) &&
                z >= *(s32 *)(node + 4) && z <= *(s32 *)(node + 0xc)) {
                hit = 1;
            } else {
                hit = 0;
            }
            if (hit != 0) {
                val = *(u8 *)(node + 0x10);
            }
            node = *(u8 **)(node + 0x18);
        }
    }

    if (val == 9) {
        *(u16 *)(data_0216009c + 0x60) = 0;
        return;
    }
    if (val == 1 || val == 3) {
        *(u16 *)(data_0216009c + 0x60) = 5;
        return;
    }
    if (val == 2 || val == 4) {
        *(u16 *)(data_0216009c + 0x60) = 6;
    }
}

s32 func_02043c10(void) {
 s32 ret=0;
 u8 *node;
 u8 *pos=*(u8 **)(*(u8 **)(data_021600a8+4)+0x68);
 s32 one=1,three=3,two=2;
 if(*(u32 *)(pos+0xac)&0x400)return ret;
 node=*(u8 **)(data_021600bc+0xac);
 while(node){
 s32 z=*(s32 *)(pos+8),x=*(s32 *)pos,hit;
 if(x>=*(s32 *)node && x<=*(s32 *)(node+8) && z>=*(s32 *)(node+4) && z<=*(s32 *)(node+12))hit=1;else hit=0;
 if(hit){
 ret=one;
 if(node[0x10]){
 u8 *p;
 *(u16 *)(data_02160204+0xd4)=node[0x10];
 p=func_0204680c(data_02146408,*(u16 *)(node+0x12));
 if(p)p[0x1c1]=7;
 data_02160204[0x7e]=1;
 func_020522d4(pos,0,0);
 func_02052904(2);
 func_0205443c(1);
 func_0207c2dc();func_0207af60();break;
 }
 *(u32 *)(*(u8 **)(data_021600a8+4)+0x10)=three;
 func_020522d4(pos,0,0);
 func_020468b0(one);func_02052904(two);func_0205443c(one);
 func_0210eb98(data_02146410,((s32)*(u16 *)(data_02160204+0x72)-1)/20+1,*(u16 *)(data_02160204+0x72),*(u16 *)(node+0x12));
 {u8 *p=func_020f57e8(); p[0x1c1]=two;
 func_021167f0(data_021600b8,p);}
 if(*(u8 **)(data_021600a8+4)){
 u8 *p=*(u8 **)(*(u8 **)(data_021600a8+4)+0x68);
 if(p){func_0207af60();*(u32 *)(p+0xac)&=~0x44a;}
 }
 func_0207c2dc();
 }
 node=*(u8 **)(node+0x18);
 }
 return ret;
}

extern u32 data_02155c3c;
extern void func_0207ae48(s32, u8);
extern s32 func_0207a6b8(void *);
extern u8 *func_02046f90(s32, u16);
extern void func_02052240();
extern u8 *func_0210c594(s32, u32);
extern void func_020477dc(void *, s32, s32);
void func_02043de4(void)
{
    u8 *node;
    u8 *player;

    player = *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68);
    node = *(u8 **)(data_021600bc + 0xb8);

    while (node != NULL) {
        switch (*(u8 *)(node + 0x12)) {
        case 1:
            if (in_rect_02043de4(node, player) != 0) {
                if (*(u16 *)(node + 0x1a) > *(u16 *)(node + 0x16) + *(u16 *)(node + 0x14)) {
                    func_0207ae48(1, *(u8 *)(node + 0x18));
                    *(u16 *)(node + 0x1a) = *(u16 *)(node + 0x14);
                }
                *(u16 *)(node + 0x1a) += 1;
            } else {
                *(u16 *)(node + 0x1a) = 0;
            }
            break;

        case 2:
            if (in_rect_02043de4(node, player) != 0) {
                if (*(u16 *)(node + 0x1a) >= *(u16 *)(node + 0x14)) {
                    if (func_0207a6b8(node) != 0) {
                        *(u16 *)(node + 0x1a) = *(u16 *)(node + 0x14);
                        *(s8 *)(node + 0x1d) = (*(u8 *)(node + 0x18) != 0) ? ((s32)rand_range_02043de4((u16)(*(u8 *)(node + 0x18) * 2)) - *(u8 *)(node + 0x18)) : 0;
                    }
                }
                *(u16 *)(node + 0x1a) += 1;
            } else {
                *(u8 *)(node + 0x1c) = 0;
                *(u16 *)(node + 0x1a) = 0;
            }
            break;

        case 3:
        case 4:
            if (in_rect_02043de4(node, player) != 0) {
                if (*(u16 *)(node + 0x1a) >= *(s8 *)(node + 0x1d) + (*(u16 *)(node + 0x14) + *(u16 *)(node + 0x16))) {
                    if (func_0207a6b8(node) != 0) {
                        *(u16 *)(node + 0x1a) = *(u16 *)(node + 0x14);
                        *(s8 *)(node + 0x1d) = (*(u8 *)(node + 0x18) != 0) ? ((s32)rand_range_02043de4((u16)(*(u8 *)(node + 0x18) * 2)) - *(u8 *)(node + 0x18)) : 0;
                    }
                }
                *(u16 *)(node + 0x1a) += 1;
            } else {
                *(u8 *)(node + 0x1c) = 0;
                *(u16 *)(node + 0x1a) = 0;
            }
            break;

        case 5:
            if (in_rect_02043de4(node, player) != 0 && *(u16 *)(node + 0x1a) == 0) {
                u8 *obj = func_02046f90(0x141, (u16)(*(u16 *)(node + 0x10) + 0x1770));
                *(u32 *)(obj + 0x18) = *(u32 *)(obj + 0) = *(u32 *)(node + 0x20);
                *(u32 *)(obj + 0x20) = *(u32 *)(obj + 8) = *(u32 *)(node + 0x28);
                func_02052240(obj);
                *(u8 **)(obj + 0xd0) = func_0210c594(0x3c, data_02155c3c);
                *(*(u8 **)(obj + 0xd0) + 0x19) = 3;
                *(*(u8 **)(obj + 0xd0) + 0x1b) = 0x1e;
                *(u16 *)(*(u8 **)(obj + 0xd0) + 0x1c) = *(u16 *)(node + 0x14);
                *(*(u8 **)(obj + 0xd0) + 0x25) = 2;
                *(*(u8 **)(obj + 0xd0) + 1) = 1;
                *(u32 *)(obj + 0xac) |= 0x200;
                func_020477dc(obj, 2, 0);
                *(u16 *)(node + 0x1a) = 1;
            }
            break;
        }
        node = *(u8 **)(node + 0x30);
    }
}

void *func_02044180(u16 arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0xb8);
    while (node != NULL) {
        if (*(u16 *)(node + 0x10) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

void func_020441bc(void) {
 u8 *node=*(u8 **)(data_021600bc+0xc4);
 u8 *p;
 if(!node)return;
 do {
 p=*(u8 **)(data_02160204+0xe8);
 while(p){
 if(*(u16 *)(p+0x8e)==*(u16 *)(node+0x12) || *(u16 *)(node+0x12)==0){
 if(*(u16 *)(node+0x14)==0 && *(u16 *)(node+0x16)==0){
 if(func_0210c2f4(node,p)<(node[12]<<12)){
 u8 *event;
 func_0210eb98(data_02146438,((s32)*(u16 *)(data_02160204+0x72)-1)/20+1,*(u16 *)(data_02160204+0x72),*(u16 *)(node+14));
 event=func_020f57e8();
 if(event){
 event[0x1c1]=4;
 *(u32 *)(*(u8 **)(data_021600a8+4)+16)=3;
 func_020522d4(p,0,0);func_020468b0(1);func_02052904(2);func_0205443c(1);
 }
 *(u16 *)(node+0x14)=*(u16 *)(p+0x8e);
 *(u16 *)(node+0x16)=*(u16 *)(p+0x90);
 break;
 }
 }else if(*(u16 *)(p+0x90)==*(u16 *)(node+0x16)){
 if(func_0210c2f4(node,p)>(node[12]<<12)){
 u8 *event;
 func_0210eb98(data_02146460,((s32)*(u16 *)(data_02160204+0x72)-1)/20+1,*(u16 *)(data_02160204+0x72),*(u16 *)(node+16));
 event=func_020f57e8();
 if(event){
 event[0x1c1]=4;
 *(u32 *)(*(u8 **)(data_021600a8+4)+16)=3;
 func_020522d4(p,0,0);func_020468b0(1);func_02052904(2);func_0205443c(1);
 }
 *(u16 *)(node+0x14)=0;
 *(u16 *)(node+0x16)=0;
 break;
 }
 }
 }
 p=*(u8 **)(p+0x134);
 }
 node=*(u8 **)(node+0x1c);
 }while(node);
}

BOOL func_020443a8(void *arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0xdc);
    if (arg0 == NULL) {
        return FALSE;
    }
    while (node != NULL) {
        s32 x = *(s32 *)(node + 0);
        s32 z = *(s32 *)(node + 4);
        s32 vec[3];
        vec[0] = x;
        vec[1] = 0;
        vec[2] = z;
        if (func_0210c2f4(arg0, vec) < (*(u8 *)(node + 8) << 12)) {
            return TRUE;
        }
        node = *(u8 **)(node + 0x10);
    }
    return FALSE;
}

void func_02044428(u16 arg0) {
    u8 *r6 = *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68);
    func_02047820(arg0);
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x10) = 3;
    func_020522d4(r6, 0, 0);
    func_020468b0(1);
    func_02052904(2);
    func_0205443c(1);
    if (*(u8 **)(data_021600a8 + 4) != NULL && *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68) != NULL) {
        u8 *p = *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68);
        *(u32 *)(p + 0xac) &= ~0x44a;
    }
}

extern void func_020a8810(void *, s32);
extern void func_020a994c(void *);
extern void func_020a9610(void *, void *, u32, void *, s32, s32);
extern u32 func_020a96f0(void *);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
u32 func_020444a0(u32 arg0) {
    u32 ret;

    func_020a8810(*(void **)(*(u8 **)(data_021600a8 + 4) + 0xb4), 0x11);
    *(s32 *)(*(u8 **)(*(u8 **)(data_021600a8 + 4) + 0xb4) + 0x40) = 1;
    func_020a994c(*(u8 **)(data_021600a8 + 4) + 0xb8);
    func_020a9610(
        *(u8 **)(data_021600a8 + 4) + 0xec,
        *(void **)(*(u8 **)(data_021600a8 + 4) + 0xa4),
        arg0,
        *(void **)(*(u8 **)(data_021600a8 + 4) + 0xb4),
        0,
        0
    );
    ret = func_020a96f0(*(void **)(*(u8 **)(data_021600a8 + 4) + 0xfc));
    func_020a98ac(*(u8 **)(data_021600a8 + 4) + 0xb8);
    func_020a98f4(*(u8 **)(data_021600a8 + 4) + 0xb8);
    *(s32 *)(*(u8 **)(*(u8 **)(data_021600a8 + 4) + 0xb4) + 0x4c) = 0x2bc000;
    *(s32 *)(*(u8 **)(*(u8 **)(data_021600a8 + 4) + 0xb4) + 0x44) = 0x18000;
    *(s32 *)(*(u8 **)(*(u8 **)(data_021600a8 + 4) + 0xb4) + 0x48) = 0x2000;
    return ret;
}

void func_02044568(void) {
    u8 *r5 = func_020f0aa4();
    u8 *r6 = *(u8 **)r5;
    *(s32 *)(r5 + 0x24) -= 0x6000;
    if (*(s32 *)(r5 + 0x24) < -0x76000) {
        *(s32 *)(r5 + 0x24) = -0x76000;
        *(u8 *)(*(u8 **)(data_021600a8 + 4) + 0x368) = 0;
        func_02047820((u16)*(s32 *)(r5 + 0x2c));
        func_02047490();
        *(u32 *)(*(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68) + 0xac) &= ~0x800;
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68) + 0xb0) + 4) = 0;
        func_0210d568(0x33);
        *(u8 *)(*(u8 **)(data_021600a8 + 4) + 0x8de) = 0;
    }
    *(s32 *)(r6 + 0x6c) = *(s32 *)(r5 + 0x20);
    *(s32 *)(r6 + 0x70) = *(s32 *)(r5 + 0x24);
    *(s32 *)(r6 + 0x74) = *(s32 *)(r5 + 0x28);
    *(u32 *)(r6 + 0xf4) = 1;
}

void func_02044618(void) {
 u8 *p=*(u8 **)(data_021600a8+4);
 u8 *next=*(u8 **)(p+0x80);
 u8 *old=*(u8 **)(p+0x7c);
 u16 pressed,held;
 if(!next)return;
 if(old && *(u32 *)(*(u8 **)(old+0x14)+8)){
 func_020447a4(old);
 *(u32 *)(*(u8 **)(data_021600a8+4)+0x10)=4;
 func_020468b0(0);
 }
 if(*(u32 *)(*(u8 **)(next+0x14)+8)){
 func_02046794();
 *(u32 *)(*(u8 **)(data_021600a8+4)+0x80)=0;
 if(*(s8 *)(data_02160204+0x86)==data_02160204[0x87]-1){
 *(u32 *)(*(u8 **)(data_021600a8+4)+0x10)=4;func_020468b0(0);
 }
 *(s8 *)(data_02160204+0x86)=-1;
 *(s8 *)(*(u8 **)(data_021600a8+4)+0x36c)=0;
 return;
 }
 pressed=data_021626a8;
 if(pressed&1){*(s8 *)(data_02160204+0x86)=*(s8 *)(*(u8 **)(data_021600a8+4)+0x36c);return;}
 held=data_021626a6;
 if(held&0x20){
 --*(s8 *)(*(u8 **)(data_021600a8+4)+0x36c);
 if(*(s8 *)(*(u8 **)(data_021600a8+4)+0x36c)<0)
 *(s8 *)(*(u8 **)(data_021600a8+4)+0x36c)=data_02160204[0x87]-1;
 return;
 }
 if(held&0x10){
 ++*(s8 *)(*(u8 **)(data_021600a8+4)+0x36c);
 if(*(s8 *)(*(u8 **)(data_021600a8+4)+0x36c)>data_02160204[0x87]-1)
 *(s8 *)(*(u8 **)(data_021600a8+4)+0x36c)=0;
 return;
 }
 if(pressed&2)data_02160204[0x86]=data_02160204[0x87]-1;
}

