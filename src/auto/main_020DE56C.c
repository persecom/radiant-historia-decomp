/* 14 functions from 0x020DE56C to 0x020DF56C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160244,*data_02160260;
extern u32 data_0216263c[3];
static inline u16 random_020de888(u16 limit) {
u32 value=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
u16 result=(value>>16)*limit>>16;
data_0216263c[0]=value;
return result;
}
extern u8 *func_02032240(void);

extern u8 *func_0202c7d8(s32);
extern void *func_020de534(void *);
extern u8 *data_02160a6c;
extern u8 *data_02160a74;

void func_020220b0(u32, u32);
s32 func_02065c44(void *);
void *func_020de56c(void *);
void func_020df224(void *, u8 *);
void func_020e2788(u32);
u8 *func_020de810(void) {
    u8 i;
    for (i = 0; i < 9; i++) {
        u8 *res = func_0202c7d8((s8)i);
        if (res != NULL) {
            return res;
        }
    }
    return NULL;
}

u8 *func_020de844(s32 arg0) {
    if (arg0 == 0) {
        u8 i = 0;
        do {
            u8 *res = func_0202c7d8((s8)(u8)(i + 9));
            if (res != NULL) {
                return res;
            }
            i++;
        } while (i < 3);
    }
    return NULL;
}

void func_020de888(void) {
u8 *node;
u8 expected;
u8 *info,*base,*obj,*info2,*obj2,*state,*state2;
s32 index=0;
base=*(u8 **)data_02160244;
node=func_02032240();
while(node) {
if(index==0) {
*(u8 **)(base+0x10+index*4)=node;
obj=*(u8 **)node;
base[0x38]=**(u8 **)(obj+0x118);
info=*(u8 **)(node+8);
if(info[0]==4 && *(s32 *)(data_02160260+0x88)==0) {
s32 sum=0,other;
u16 random;
u8 *root=data_02160a6c;
u8 *p=*(u8 **)(root+0xac);
while(p) {sum+=*(s16 *)(*(u8 **)(p+0x118)+0xba);p=*(u8 **)(p+0x16c);}
other=0;
p=*(u8 **)(root+0xb8);
while(p) {other+=*(s16 *)(*(u8 **)(p+0x118)+0xba);p=*(u8 **)(p+0x174);}
other/=*(u16 *)(root+0xc0);
random=(u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*100)>>16);
if(sum/3-other*5+60 >= random) {
*(u32 *)(*(u8 **)(obj+0x128)+0x18)|=4;
}
}
if(*(u16 *)(node+0xe)&2)return;
state=*(u8 **)(obj+0x128);
(*(s8 *)(state+0x50))++;
*(u32 *)(state+0x18)|=1;
*(u32 *)(state+0x18)&=~0x10;
if(info[0]==3)*(u32 *)(state+0x18)|=0x10;
}else if(index>=1) {
s32 kind,valid,i;
obj2=*(u8 **)node;
expected=base[0x38];
info2=*(u8 **)(node+8);
kind=**(u8 **)(obj2+0x118);
if(kind!=expected)return;
if(kind==1 && info2[0x14]==1)return;
if(*(u16 *)(node+0xe)&2)return;
valid=1;
if(kind==1) {
for(i=0;i<*(s8 *)(base+0x39);i++) {
if(obj2==**(u8 ***)(base+0x10+i*4))valid=0;
}
}
if(!valid)return;
if(kind==expected) {
state2=*(u8 **)(obj2+0x128);
(*(s8 *)(state2+0x50))++;
*(u32 *)(state2+0x18)|=1;
*(u32 *)(state2+0x18)&=~0x10;
if(info2[0]==3)*(u32 *)(state2+0x18)|=0x10;
}
}
(*(s8 *)(base+0x39))++;
*(u8 **)(base+0x10+index*4)=node;
if(*(s8 *)(base+0x39)>=10)return;
index++;
node=*(u8 **)(node+0x24);
}
}

void *func_020defcc(u16 arg0) {
    u8 *root = data_02160a6c;
    u8 *node;
    if (root == NULL) {
        return NULL;
    }
    node = *(u8 **)(root + 0x70);
    while (node != NULL) {
        if (*(void **)(*(u8 **)(node + 0x118) + 0x70) != NULL) {
            if (*(u16 *)(node + 0x8c) == arg0) {
                if (func_020de534(node) == NULL) {
                    return node;
                }
            }
        }
        node = *(u8 **)(node + 0x13c);
    }
    return NULL;
}

BOOL func_020df03c(s32 arg0) {
    u8 *ptr = data_02160a74;
    volatile s16 *v = (volatile s16 *)(ptr + 0xae);
    if (arg0 == 0) {
        *v = *v + 0x10;
        if (*v <= 0x1e) {
            goto fail;
        }
        *v = 0x1e;
        return TRUE;
    }
    if (arg0 == 1) {
        *v = *v - 0x10;
        if (*v >= 0) {
            goto fail;
        }
        *v = 0;
        *(u32 *)(ptr + 0x58) &= ~0x2;
        *(u32 *)(ptr + 0x58) &= ~0x800;
        return TRUE;
    }
fail:
    return FALSE;
}

void func_020df0c0(void) {
    u8 **pp = &data_02160a74;
    u8 *base = *pp;
    *(s16 *)(base + 0xa4) = (s16)(*(s16 *)(base + 0xae) * 0x18 / 30 + 0x32);
    *(s16 *)(base + 0xa6) = (s16)(0x6 - *(s16 *)(base + 0xae) * 0x6 / 30);
    *(s16 *)(base + 0xaa) = (s16)(*(s16 *)(base + 0xae) * 0xb4 / 30);
    *(s16 *)(base + 0xac) = (s16)(*(s16 *)(base + 0xae) * 0x8e / 30);
}

void func_020df164(void) {
    u8 **pp = &data_02160a74;
    u8 *base = *pp;
    u8 *a;
    u8 *b;
    void *c;
    u32 *arr;
    *(s16 *)(base + 0xca) = -1;
    arr = **(u32 ***)(base + 0xa0);
    a = (u8 *)arr[0];
    b = (u8 *)arr[1];
    if (*(u8 *)(*(u8 **)(a + 0x118)) != 0) {
        return;
    }
    c = (void *)arr[2];
    if (b != NULL) {
        if (func_02065c44(c) == 0 && *(u8 *)(*(u8 **)(b + 0x118)) == 1) {
            arr[1] = (u32)a;
            return;
        }
        if (*(u8 *)(*(u8 **)(b + 0x118)) != 0) {
            return;
        }
        if (func_02065c44(c) == 0) {
            return;
        }
        arr[1] = (u32)func_020de56c(a);
    } else {
        if (func_02065c44(c) == 0) {
            arr[1] = (u32)a;
            return;
        }
        if (func_02065c44(c) == 0) {
            return;
        }
        arr[1] = (u32)func_020de56c(a);
    }
}

void func_020df224(void *arg0, u8 *arg1) {
    s16 delta;
    u8 *p;
    s16 max;
    if (arg1 != NULL && arg0 != NULL && *(s16 *)(arg1 + 0x1c) != 0) {
        delta = *(s16 *)(arg1 + 0x1c);
        p = *(u8 **)((u8 *)arg0 + 0x118);
        *(s16 *)(p + 0xc) += delta;
        p = *(u8 **)((u8 *)arg0 + 0x118);
        max = *(s16 *)(p + 0xe);
        if (*(s16 *)(p + 0xc) > max) {
            *(s16 *)(p + 0xc) = max;
        }
    }
}

void func_020df260(u8 *arg0, u8 *arg1) {
    u8 v;
    u8 *p;
    func_020df224(arg0, arg1);
    if (arg1[0] == 5) {
        func_020220b0(arg1[1], 1);
        return;
    }
    v = (u8)((s8)(*(s8 *)(arg1 + 0x1a) - 2));
    if (v > 1) {
        return;
    }
    p = *(u8 **)(arg0 + 0x118);
    *(s16 *)(p + 0x5a) += 100;
    p = *(u8 **)(arg0 + 0x118);
    if (*(s16 *)(p + 0x5a) <= 100) {
        return;
    }
    *(s16 *)(p + 0x5a) = 100;
    func_020e2788((s16)(1U << *(u16 *)(arg0 + 0x90)));
}

BOOL func_020df2ec(u8 *arg0, u8 *arg1) {
    u8 v;
    u8 *p;
    s16 mask;
    if (arg1[0] == 5) {
        if ((u32)func_02022068(arg1[1]) < 1) {
            return FALSE;
        }
        func_020220b0(arg1[1], -1);
        return TRUE;
    }
    v = (u8)((s8)(*(s8 *)(arg1 + 0x1a) - 2));
    if (v > 1) {
        goto done;
    }
    p = *(u8 **)(arg0 + 0x118);
    if (*(s16 *)(p + 0x5a) < 100) {
        return FALSE;
    }
    *(s16 *)(p + 0x5a) -= 100;
    mask = (s16)(1U << *(u16 *)(arg0 + 0x90));
    func_020e2788((u32)mask);
done:
    return TRUE;
}

extern void func_020220b0(u32, u32);
extern void func_020e2788(u32);
s32 func_020df38c(s32 arg0, u32 arg1) {
    u8 *base = data_02160a74;
    if (arg0 == 0) {
        *(u32 *)(base + 0x144) = 0;
        goto end;
    }
    if (arg0 == 1) {
        *(u32 *)(base + 0x144) |= arg1;
        goto end;
    }
    if (arg0 == 2) {
        *(u32 *)(base + 0x144) &= ~arg1;
        goto end;
    }
    if (arg0 == 3) {
        if (*(u32 *)(base + 0x144) & arg1) {
            return 1;
        }
    }
end:
    return 0;
}

extern u8 *func_020ddb90(u16);
void func_020df3f4(u8 *arg0, s32 arg1) {
    u8 *node;
    u8 *other;

    if (arg1 == 0) {
        for (node = *(u8 **)(data_02160a6c + 0xac); node != NULL; node = *(u8 **)(node + 0x16c)) {
            *(u32 *)(node + 0x80) |= 2;
            other = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x190));
            if (other != NULL) {
                *(u32 *)(other + 0x80) &= ~0x2000;
            }
        }
    } else if (arg1 == 1) {
        for (node = *(u8 **)(data_02160a6c + 0xac); node != NULL; node = *(u8 **)(node + 0x16c)) {
            if (arg0 != node) {
                *(u32 *)(node + 0x80) &= ~2;
                other = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x190));
                if (other != NULL) {
                    *(u32 *)(other + 0x80) |= 0x2000;
                }
            }
        }
    } else if (arg1 == 2) {
        for (node = *(u8 **)(data_02160a6c + 0xac); node != NULL; node = *(u8 **)(node + 0x16c)) {
            *(u32 *)(node + 0x80) &= ~2;
            other = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x190));
            if (other != NULL) {
                *(u32 *)(other + 0x80) |= 0x2000;
            }
        }
    } else if (arg1 == 3) {
        for (node = *(u8 **)(data_02160a6c + 0xac); node != NULL; node = *(u8 **)(node + 0x16c)) {
            other = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x190));
            if (other != NULL) {
                *(u32 *)(other + 0x80) |= 0x2000;
            }
        }
    }
}

