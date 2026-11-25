/* 16 functions from 0x0202DD04 to 0x0202EC9C (main), found by ds-decomp. */
#include "common.h"

static inline u8 *list_end_dd04(u8 *node) {
 u8 *p;
 if(node==NULL) return NULL;
 p=node;
 do { p=*(u8 **)(p+0xc); } while(p);
 return p;
}

extern u8 *data_02160a6c;
extern u8 **data_02160244;
extern u8 *func_0202c5a0(u8 *);
extern u32 func_0202e98c(u32, u32);

extern s32 func_0202d890(s32,u8);
extern s32 func_0202ef78(void *,s32,s32);
extern s32 func_0202ec9c(void *,s32,s32);
extern void func_0202dbc8(void *,void *,s32);
extern void func_021168f8(void *,void *);
s32 func_0202dd04(void) {
u8 *base=(u8 *)data_02160244;
u8 *node=*(u8 **)(base+0x44);
s32 result=0;
s32 one=1;
s32 minus=-1;
while(node) {
s8 index;
u8 *slot;
s32 old=*(s8 *)(node+2);
index=*(s8 *)node;
if(index==old && *(s8 *)(base+0x38+old)==minus) {
base[0x38+old]=one; *(s8 *)(node+3)=minus;
}else if(*(s8 *)((slot=base+index)+0x38)==minus) {
switch(*(s8 *)(node+1)) {
case 0:
if(!func_0202d890(index,(u8)*(s16 *)(node+0x24))) {slot[0x38]=one;node[2]=index;*(s8 *)(node+3)=minus;}
break;
case 1: {
s8 next=index+1;
if(index%3<=1 && *(s8 *)(slot+0x39)==minus &&
!func_0202d890(index,(u8)*(s16 *)(node+0x24)) &&
!func_0202d890(next,(u8)*(s16 *)(node+0x24))) {
base[0x38+*(s8 *)node]=one; base[0x38+next]=one;
node[2]=*(s8 *)node;*(s8 *)(node+3)=minus;
}
break;
}
case 2: {
s8 up=index-3;
u8 *upslot;
if(index/3>=1 && *(s8 *)((upslot=base+up)+0x38)==minus &&
!func_0202d890(index,(u8)*(s16 *)(node+0x24)) &&
!func_0202d890(up,(u8)*(s16 *)(node+0x24))) {
base[0x38+*(s8 *)node]=one; upslot[0x38]=one;
node[2]=*(s8 *)node;*(s8 *)(node+3)=minus;
}
break;
}
case 3: {
s8 up=index-3, diag=index-2, next=index+1;
u8 *upslot,*diagslot,*nextslot;
if(index/3>=1 && index%3<=1 &&
*(s8 *)((upslot=base+up)+0x38)==minus && *(s8 *)((diagslot=base+diag)+0x38)==minus && *(s8 *)((nextslot=base+next)+0x38)==minus &&
!func_0202d890(index,(u8)*(s16 *)(node+0x24)) &&
!func_0202d890(up,(u8)*(s16 *)(node+0x24)) &&
!func_0202d890(diag,(u8)*(s16 *)(node+0x24)) &&
!func_0202d890(next,(u8)*(s16 *)(node+0x24))) {
base[0x38+*(s8 *)node]=one;upslot[0x38]=one;diagslot[0x38]=one;nextslot[0x38]=one;
node[2]=*(s8 *)node;*(s8 *)(node+3)=minus;
}
break;
}
case 4: break;
}
}
node=*(u8 **)(node+0xc);
}
{
u8 *p;
node=*(u8 **)(base+0x44);
if(node && (p=node)) { do {p=*(u8 **)(p+0xc);}while(p);}
while(node) {
if(*(s8 *)(node+3)!=-1 &&
!func_0202ef78(node,255,0) &&
!func_0202ef78(node,0,1) &&
!func_0202ef78(node,1,1) &&
!func_0202ef78(node,2,1) &&
!func_0202ef78(node,0,2) &&
!func_0202ef78(node,1,2) &&
!func_0202ef78(node,2,2)) node[3]=26;
node=*(u8 **)(node+0xc);
}
node=*(u8 **)(base+0x44);
if(node && (p=node)) { do {p=*(u8 **)(p+0xc);}while(p);}
while(node) {
if(*(s8 *)(node+3)==26 &&
!func_0202ec9c(node,255,0) &&
!func_0202ec9c(node,0,1) &&
!func_0202ec9c(node,1,1) &&
!func_0202ec9c(node,2,1) &&
!func_0202ec9c(node,0,2) &&
!func_0202ec9c(node,1,2)) func_0202ec9c(node,2,2);
node=*(u8 **)(node+0xc);
}
}
node=*(u8 **)(base+0x44);
while(node) {
if(*(s8 *)(node+3)!=-1) func_0202dbc8(base,node,*(s8 *)node);
node=*(u8 **)(node+0xc);
}
node=*(u8 **)(base+0x44);
while(node) {
if(*(s8 *)(node+3)!=-1) result=1;
node=*(u8 **)(node+0xc);
}
node=*(u8 **)(base+0x44);
while(node) {
u8 *next=*(u8 **)(node+0xc);
func_021168f8((u8 *)data_02160244+0x44,node);
node=next;
}
node=*(u8 **)(base+0x44);while(node) node=*(u8 **)(node+0xc);
return result;
}

s32 func_0202e260(u32 arg0) {
    u32 i;
    u32 start = (arg0 == 0) ? 0 : 9;
    u32 end = (arg0 == 0) ? 9 : 12;
    for (i = start; i < end; i++) {
        u8 *entry = data_02160244[2 + i];
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL) {
            u8 *a = *(u8 **)(sub + 0);
            if (a != NULL && *(u8 **)(a + 0x118) != NULL) {
                if (*(u8 **)(*(u8 **)(a + 0x118) + 0x70) != NULL) {
                    return (s32)a;
                }
            }
            if (*(u8 **)(sub + 0xc) != NULL) {
                return (s32)a;
            }
        }
    }
    return 0;
}

u8 *func_0202e2e8(void) {
{
u8 *node;
u8 *result = NULL;
s32 best = 999999999;
u32 i;
for (i = 0; i < 3; i++) {
node = *(u8 **)(data_02160244[2+i]+0x10);
while(node != NULL) {
u8 *obj = *(u8 **)node;
if(obj != NULL && *(u8 **)(obj+0x118) != NULL) {
u8 *p = *(u8 **)(obj+0x118);
s32 value = *(s32 *)(p+4);
if(value <= best && value >= 1 && *(u32 *)(p+0x70) != 0) { best=value; result=obj; }
}
node = *(u8 **)(node+0xc);
}
}
if(result != NULL) return result;
}
{
u8 *node;
u8 *result = NULL;
s32 best = 999999999;
u32 i;
for (i = 3; i < 6; i++) {
node = *(u8 **)(data_02160244[2+i]+0x10);
while(node != NULL) {
u8 *obj = *(u8 **)node;
if(obj != NULL && *(u8 **)(obj+0x118) != NULL) {
u8 *p = *(u8 **)(obj+0x118);
s32 value = *(s32 *)(p+4);
if(value <= best && value >= 1 && *(u32 *)(p+0x70) != 0) { best=value; result=obj; }
}
node = *(u8 **)(node+0xc);
}
}
if(result != NULL) return result;
}
{
u8 *node;
u8 *result = NULL;
s32 best = 999999999;
u32 i;
for (i = 6; i < 9; i++) {
node = *(u8 **)(data_02160244[2+i]+0x10);
while(node != NULL) {
u8 *obj = *(u8 **)node;
if(obj != NULL && *(u8 **)(obj+0x118) != NULL) {
u8 *p = *(u8 **)(obj+0x118);
s32 value = *(s32 *)(p+4);
if(value <= best && value >= 1 && *(u32 *)(p+0x70) != 0) { best=value; result=obj; }
}
node = *(u8 **)(node+0xc);
}
}
if(result != NULL) return result;
}
return NULL;
}

s32 func_0202e468(void) {
    u32 i;
    for (i = 0; i < 9; i++) {
        u8 *entry = data_02160244[2 + i];
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL) {
            u8 *a = *(u8 **)(sub + 0);
            if (a != NULL && *(u8 **)(a + 0x118) != NULL) {
                if (*(s32 *)(*(u8 **)(a + 0x118) + 4) >= 1) {
                    return (s32)a;
                }
            }
            if (*(u8 **)(sub + 0xc) != NULL) {
                return (s32)a;
            }
        }
    }
    return 0;
}

void func_0202e4cc(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *src = func_0202c5a0(node);
        *(u32 *)(node + 0) = *(u32 *)(src + 0);
        *(u32 *)(node + 4) = *(u32 *)(src + 4);
        *(u32 *)(node + 8) = *(u32 *)(src + 8);
        node = *(u8 **)(node + 0x174);
    }
}

extern void func_0202bcd4();
extern void func_0202eac4(u32, u16);
void func_0202e518(u8 *arg0, s32 arg1) {
    u8 *p = *(u8 **)(*(u8 **)(arg0 + 0x128) + 0x54);
    if (arg0 != NULL && **(u8 **)(arg0 + 0x118) == 0) {
        func_0202bcd4(p + 0x18, arg1);
    }
}

u8 *func_0202e548(u32 arg0) {
    return (arg0 <= 11) ? *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8) : NULL;
}

void func_0202e568(u32 arg0) {
    u8 *node;
    u32 i;
    for (i = 0; i < 9; i++) {
        if (arg0 & (1 << i)) {
            node = *(u8 **)(data_02160244[2 + i] + 0x10);
            while (node != NULL) {
                u8 *obj = *(u8 **)(node + 0);
                *(u32 *)(obj + 0x80) |= 0x1000;
                func_0202eac4(0, *(u16 *)(obj + 0x8e));
                node = *(u8 **)(node + 0xc);
            }
        }
    }
}

extern void func_0202fad8(u32);
extern void func_0210c5dc(void *);
extern void func_02064c80(u32);
extern void func_02031534(u8 *);
extern void func_02030b7c(void *, s32, s32);
void func_0202e5d8(u32 arg0) {
    u8 *node;
    u32 i;
    for (i = 9; i < 12; i++) {
        if (arg0 & (1 << i)) {
            node = *(u8 **)(data_02160244[2 + i] + 0x10);
            while (node != NULL) {
                u8 *obj = *(u8 **)(node + 0);
                *(u8 *)(obj + 0x192) = 0;
                *(u32 *)(obj + 0x80) |= 0x1000;
                node = *(u8 **)(node + 0xc);
            }
        }
    }
}

extern s32 func_0202b3b0(u8);
s32 func_0202e63c(u8 *arg0, u32 arg1) {
    u8 *r3 = *(u8 **)(*(u8 **)(arg0 + 0x128) + 0x54);
    u8 count;
    u32 mask;

    if (arg0 == NULL) {
        return 0;
    }
    switch (*(s8 *)(r3 + 1)) {
    case 0:
        return func_0202b3b0((u8)arg1);
    case 1:
        mask = *(u32 *)((u8 *)data_02160244 + 0x70);
        count = 0;
        mask &= ~(1 << *(s8 *)(r3 + 0));
        mask &= ~(1 << (*(s8 *)(r3 + 0) + 1));
        if (!(mask & (1 << arg1))) {
            count++;
        }
        if ((arg1 % 3) <= 1) {
            if (!(mask & (1 << (arg1 + 1)))) {
                count++;
            }
        }
        if (count == 2) {
            return 1;
        }
        break;
    case 2:
        mask = *(u32 *)((u8 *)data_02160244 + 0x70);
        count = 0;
        mask &= ~(1 << *(s8 *)(r3 + 0));
        mask &= ~(1 << (*(s8 *)(r3 + 0) - 3));
        if (!(mask & (1 << arg1))) {
            count++;
        }
        if ((arg1 / 3) >= 1) {
            if (!(mask & (1 << (arg1 - 3)))) {
                count++;
            }
        }
        if (count == 2) {
            return 1;
        }
        break;
    case 3:
        mask = *(u32 *)((u8 *)data_02160244 + 0x70);
        count = 0;
        mask &= ~(1 << *(s8 *)(r3 + 0));
        mask &= ~(1 << (*(s8 *)(r3 + 0) - 3));
        mask &= ~(1 << (*(s8 *)(r3 + 0) + 1));
        mask &= ~(1 << (*(s8 *)(r3 + 0) - 2));
        if (!(mask & (1 << arg1))) {
            count++;
        }
        if ((arg1 % 3) <= 1) {
            if (!(mask & (1 << (arg1 + 1)))) {
                count++;
            }
        }
        if ((arg1 / 3) >= 1) {
            if (!(mask & (1 << (arg1 - 3)))) {
                count++;
            }
        }
        if ((arg1 / 3) >= 1 && (arg1 % 3) <= 1) {
            if (!(mask & (1 << (arg1 - 2)))) {
                count++;
            }
        }
        if (count == 4) {
            return 1;
        }
        break;
    case 4:
        return 0;
    }
    return 0;
}

s32 func_0202e84c(u8 *arg0) {
    u8 *p = *(u8 **)(*(u8 **)(arg0 + 0x128) + 0x54);
    if (arg0 == NULL) {
        return 0;
    }
    return func_0202e98c(*(s8 *)(p + 1), *(s8 *)(p + 0));
}

void func_0202e874(u8 *arg0) {
    u8 *node;
    u8 *sub;
    u32 flag;
    if (arg0 == NULL) {
        return;
    }
    if (arg0[0x30] & 1) {
        arg0[0x30] &= 0xfe;
        sub = *(u8 **)(arg0 + 0x20);
        func_0202fad8(*(u32 *)(sub + 0x118));
        if (sub != NULL) {
            func_0210c5dc(sub);
        }
    }
    if (arg0[0x30] & 2) {
        arg0[0x30] &= 0xfd;
        func_02064c80(*(u32 *)(arg0 + 0x24));
    }
    func_02031534(arg0);
    *(u16 *)(arg0 + 0x28) = 0;
    *(u16 *)(arg0 + 0x1e) = 0;
    *(u8 *)(arg0 + 0x1c) = 0;
    *(u32 *)(arg0 + 0x2c) = 0;
    *(u32 *)(arg0 + 0x20) = 0;
    *(u32 *)(arg0 + 0x24) = 0;
    *(u32 *)(arg0 + 0x34) = 0;
    *(u8 *)(arg0 + 0x38) = 0;
    node = *(u8 **)(arg0 + 0x10);
    if (node == NULL) {
        return;
    }
    flag = 1;
    while (node != NULL) {
        u32 val = *(u32 *)(node + 0);
        if (val != 0) {
            func_02030b7c((void *)val, flag, arg0[0]);
        }
        node = *(u8 **)(node + 0xc);
    }
}

s32 func_0202e930(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    s32 result = 0;
    while (node != NULL) {
        if (node != NULL && *(u8 **)(node + 0x118) != NULL && *(s32 *)(*(u8 **)(node + 0x118) + 4) >= 1) {
            result |= func_0202e84c(node);
        }
        node = *(u8 **)(node + 0x174);
    }
    return result;
}

u32 func_0202e98c(u32 arg0, u32 arg1) {
    switch (arg0) {
    case 0: {
        u32 mask = 0;
        mask |= 1 << arg1;
        return mask;
    }
    case 1: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 + 1);
        return mask;
    }
    case 2: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 - 3);
        return mask;
    }
    case 3: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 + 1);
        mask |= 1 << (arg1 - 3);
        mask |= 1 << (arg1 - 2);
        return mask;
    }
    case 4:
        return 0x1ff;
    default:
        return 0;
    }
}

u32 func_0202ea28(u32 arg0, u32 arg1) {
    switch (arg0) {
    case 0: {
        u32 mask = 0;
        mask |= 1 << arg1;
        return mask;
    }
    case 1: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 + 1);
        return mask;
    }
    case 2: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 - 3);
        return mask;
    }
    case 3: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 + 1);
        mask |= 1 << (arg1 - 3);
        mask |= 1 << (arg1 - 2);
        return mask;
    }
    case 4:
        return 0x1ff;
    default:
        return 0;
    }
}

extern u8 *func_020ddc08(s32);
void func_0202eac4(u32 arg0,u16 arg1) {
u8 *p;
switch(arg1) {
case 801:
p=func_020ddc08(802);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
p=func_020ddc08(803);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
break;
case 811:
p=func_020ddc08(813);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
break;
case 821:
p=func_020ddc08(823);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
break;
case 831:
p=func_020ddc08(832);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
p=func_020ddc08(833);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
break;
case 841:
p=func_020ddc08(843);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
break;
case 851:
p=func_020ddc08(852);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
p=func_020ddc08(853);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
break;
case 861:
p=func_020ddc08(863);
if(arg0==0) *(u32 *)(p+0x80)|=0x1000;
else *(u32 *)(p+0x80)&=~0x1000;
break;
}
}

