/* 15 functions from 0x0207A6B8 to 0x0207B398 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0216242c[];
s32 func_02052a54(void *, s32);
s32 func_0210c2f4(void *, void *);
void func_0207ae48(s32, s32);
void *func_02044180(u16);
void func_021168f8(void *, void *);
void func_0210c5dc(void *);
void func_02047820(u16);
void func_02047490(void);

extern void *data_021600ac;
extern void *data_02155c3c;
extern void *data_021600f0;
extern void *data_02160200;

void func_020477dc(void *, s32, s32);
void func_0206e8f0(s32, void *, s32);
void func_0210d27c(s32);

typedef struct {
    s32 x, y, z;
} Vec3_0207adbc;

extern void *data_021600bc;
extern void *data_02160a80[];
extern u8 data_02162908[];
extern void func_021167f0(void *, s32);
extern s32 func_02079720(s32);
extern void func_020ea5d4(void *, s32);
extern u16 data_021626a8;
extern s32 func_02052520(void);
extern void *func_0210c594(s32, void *);
extern s32 func_020ef4c8(void *);
extern u8 *func_02046f90(s32, u16);
extern void func_020ed2d0(void *, s32);
u8 *func_0207a6b8(u8 *arg0) {
    u8 *r5;
    u8 *r4;
    u8 *r1;

    r1 = *(u8 **)((u8 *)data_021600ac + 0x384);
    while (r1 != NULL) {
        if (*(u16 *)(r1 + 4) == *(u16 *)(arg0 + 0x10)) {
            return NULL;
        }
        r1 = *(u8 **)(r1 + 0x38);
    }

    r5 = (u8 *)func_0210c594(0x3c, data_02155c3c);
    *(u16 *)(r5 + 4) = *(u16 *)(arg0 + 0x10);
    *(u8 *)(r5 + 6) = *(u8 *)(arg0 + 0x12);
    *(u16 *)(r5 + 8) = *(u16 *)(arg0 + 0x14);
    *(u16 *)(r5 + 0xa) = *(u16 *)(arg0 + 0x16);
    *(u8 *)(r5 + 0xc) = *(u8 *)(arg0 + 0x18);

    if (*(s32 *)(arg0 + 0x20) != 0) {
        *(Vec3_0207adbc *)(r5 + 0x20) = *(Vec3_0207adbc *)(arg0 + 0x20);
    } else {
        *(Vec3_0207adbc *)(r5 + 0x20) = **(Vec3_0207adbc **)((u8 *)data_021600ac + 0x68);
    }
    *(Vec3_0207adbc *)(r5 + 0x10) = *(Vec3_0207adbc *)(r5 + 0x20);

    if (*(u8 *)(arg0 + 0x12) == 3 || *(u8 *)(arg0 + 0x12) == 4) {
        *(s32 *)(r5 + 0x10) += 0x80000;
    }
    *(s32 *)(r5 + 0x14) = func_020ef4c8(r5 + 0x20) + 0x80000;

    switch (*(u8 *)(arg0 + 0x12)) {
    case 3:
    case 4:
        *(u8 **)(r5 + 0) = func_02046f90(0x157e, *(u16 *)(r5 + 4));
        func_020ed2d0(*(void **)(*(u8 **)(r5 + 0) + 0x108), 0xb);
        *(u32 *)(*(u8 **)(r5 + 0) + 0x80) &= ~0x400;
        *(u8 *)(*(u8 **)(r5 + 0) + 0x9d) = 8;
        *(u32 *)(*(u8 **)(r5 + 0) + 0xac) &= ~1;
        break;
    case 2:
        r4 = func_02046f90(0x14ab, (u16)(*(u16 *)(arg0 + 0x10) + 0x2ee1));
        *(u32 *)(r4 + 0xac) &= ~1;
        *(u32 *)(r4 + 0x80) &= ~0x400;
        *(u8 *)(r4 + 0x9d) = 1;
        *(Vec3_0207adbc *)(r4 + 0) = *(Vec3_0207adbc *)(r5 + 0x10);
        *(s32 *)(r5 + 0x30) = func_020ef4c8(r4);
        func_020477dc(r4, 0, 0);
        *(u8 *)(r5 + 0x2c) |= 2;
        *(u8 **)(r5 + 0) = r4;
        break;
    }

    func_021167f0((u8 *)data_021600ac + 0x384, (s32)r5);
    if (*(u8 *)(arg0 + 0x12) == 3 || *(u8 *)(arg0 + 0x12) == 4) {
        func_021167f0((u8 *)data_021600bc + 0x40, *(s32 *)(r5 + 0));
    }
    return r5;
}

s32 func_0207ab34(s32 arg0) {
u8 *node;
u8 *obj;
u8 *base=data_021600ac;
obj=*(u8 **)(base+0x68);
if(data_021626a8&1) {
*(s32 *)(base+0x10)=8;
*(s32 *)(base+0x370)=arg0;
func_021167f0((u8 *)data_021600bc+0x40,arg0);
*(u32 *)(obj+0xac)|=0x2000000;
node=*(u8 **)((u8 *)data_02160a80[0]+0x3c);
while(node) {if(*(u32 *)(node+8)==0x32c9) goto found1;node=*(u8 **)(node+0x38);}
node=0;
found1:
if(node) {
s32 res=func_02079720(arg0);
if(res==4) return 0;
if(res==0 || res==2) func_020ea5d4(node,5); else func_020ea5d4(node,4);
}
return 1;
}
if(func_02052520()) {
base[0x374]=0;
*(s32 *)(base+0x10)=8;
*(s32 *)(base+0x370)=arg0;
func_021167f0((u8 *)data_021600bc+0x40,arg0);
*(u32 *)(obj+0xac)|=0x2000000;
obj=*(u8 **)((u8 *)data_02160a80[0]+0x3c);
while(obj) {if(*(u32 *)(obj+8)==0x32c9) goto found2;obj=*(u8 **)(obj+0x38);}
obj=0;
found2:
{
s32 res=func_02079720(arg0);
if(res==4) return 0;
if(res==0 || res==2) func_020ea5d4(obj,5); else func_020ea5d4(obj,4);
}
base[0x374]++;
if(*(u16 *)(data_02162908+4)==0) base[0x374]=0;
return 1;
}
return 0;
}

void func_0207ace8(s32 arg0) {
    u8 *r4 = (u8 *)data_021600ac;
    u8 *r6;
    s32 res;

    r4[0x374] = 0;
    *(s32 *)(r4 + 0x10) = 8;
    *(s32 *)(r4 + 0x370) = arg0;
    func_021167f0((u8 *)data_021600bc + 0x40, arg0);

    r6 = *(u8 **)((u8 *)data_02160a80[0] + 0x3c);
    while (r6 != NULL) {
        if (*(u32 *)(r6 + 8) == 0x32c9) {
            goto found;
        }
        r6 = *(u8 **)(r6 + 0x38);
    }
    r6 = NULL;
found:

    res = func_02079720(arg0);
    if (res == 4) {
        return;
    }
    if (res == 0 || res == 2) {
        func_020ea5d4(r6, 5);
    } else {
        func_020ea5d4(r6, 4);
    }
    r4[0x374]++;
    if (*(u16 *)(data_02162908 + 4) == 0) {
        r4[0x374] = 0;
    }
}

void func_0207adbc(void *arg0) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *q;
    p[0] = 1;
    *(u16 *)(p + 0x14) = *(u16 *)((u8 *)arg0 + 0x90);
    *(u16 *)(p + 2) = 0x18;
    func_0206e8f0(0x11, arg0, 2);
    q = *(u8 **)((u8 *)data_021600ac + 0x68);
    *(Vec3_0207adbc *)(q + 0x24) = *(Vec3_0207adbc *)q;
    *(s32 *)((u8 *)data_021600ac + 0x888) = 1;
    func_0210d27c(0x8d);
}

BOOL func_0207ae24(void) {
    return (*(u8 **)((u8 *)data_021600f0 + 8))[0] == 1;
}

void *func_020bd438(u8);
void *func_02021f10(u8);
void func_02057f5c(void);
void func_0207ae48(s32 mode, s32 amount) {
 u16 adjustment;
 u8 i;
 if (amount == 0) return;
 adjustment=(u16)amount;
 for(i=0;i<7;i++) {
  u8 *entry=func_020bd438(i);
  u8 *p;
  if(!entry || !(*(u16 *)entry & 1)) continue;
  p=func_02021f10(entry[2]);
  if(!p) continue;
  if(mode==0) {
   if(amount>0) {
    if(*(u16 *)(p+0x10)>amount) *(u16 *)(p+0x10)-=adjustment;
    else *(u16 *)(p+0x10)=1;
   } else {
    s32 max=*(u16 *)(p+0x12)+*(s16 *)(p+0x24);
    if(*(u16 *)(p+0x10)-amount>max) *(u16 *)(p+0x10)=max;
    else *(u16 *)(p+0x10)-=adjustment;
   }
  } else {
   s32 max=*(u16 *)(p+0x12)+*(s16 *)(p+0x24);
   s32 magnitude=amount;
   u16 delta;
   if(amount<0) magnitude=-amount;
   delta=max*magnitude/100;
   if(amount>0) {
    if(*(u16 *)(p+0x10)>delta) *(u16 *)(p+0x10)-=delta;
    else *(u16 *)(p+0x10)=1;
   } else {
    if(*(u16 *)(p+0x10)+delta>max) *(u16 *)(p+0x10)=max;
    else *(u16 *)(p+0x10)+=delta;
   }
  }
 }
 func_02057f5c();
}

void func_0207af60(void) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *q = *(u8 **)((u8 *)data_021600f0 + 4);
    u8 *ac;
    if (p[0] == 1) {
        *((u8 *)data_021600ac + 0x879) = 1;
    }
    p[0] = 0;
    *(u16 *)(p + 2) = 0;
    *(u16 *)(p + 0x14) = 0;
    q[0] = 0;
    ac = data_021600ac;
    if (ac != NULL) {
        u8 *sub = *(u8 **)(ac + 0x68);
        if (sub != NULL) {
            *(u32 *)(sub + 0xac) &= ~0x0a000000;
        }
    }
}

void func_0207b148(void);
extern void *data_02155c3c;
void *func_0210c594(s32, void *);
void func_021167ac(void *, s32);
void func_0207cc6c(void);
void func_0207ccb4(void);
void func_0207ccfc(void);
void func_0207cd44(void);
void func_0207cd8c(void);
void func_0207afc8(void) {
 if(data_021600f0) return;
 data_021600f0=func_0210c594(0x18,data_02155c3c);
 *(void **)((u8 *)data_021600f0+4)=func_0210c594(24,data_02155c3c);
 *(void **)((u8 *)data_021600f0+8)=func_0210c594(36,data_02155c3c);
 *(void **)((u8 *)data_021600f0+12)=func_0210c594(20,data_02155c3c);
 *(void **)((u8 *)data_021600f0+16)=func_0210c594(20,data_02155c3c);
 *(void **)((u8 *)data_021600f0+20)=func_0210c594(20,data_02155c3c);
 func_021167ac(*(u8 **)((u8 *)data_021600f0+4)+4,56);
 func_021167ac(*(u8 **)((u8 *)data_021600f0+8)+4,64);
 func_021167ac(*(u8 **)((u8 *)data_021600f0+12)+4,72);
 func_021167ac(*(u8 **)((u8 *)data_021600f0+16)+4,80);
 func_021167ac(*(u8 **)((u8 *)data_021600f0+20)+4,48);
 *(void (**)(void))(*(u8 **)((u8 *)data_021600f0+4)+16)=func_0207cc6c;
 *(void (**)(void))(*(u8 **)((u8 *)data_021600f0+8)+16)=func_0207ccb4;
 *(void (**)(void))(*(u8 **)((u8 *)data_021600f0+12)+16)=func_0207ccfc;
 *(void (**)(void))(*(u8 **)((u8 *)data_021600f0+16)+16)=func_0207cd44;
 *(void (**)(void))(*(u8 **)((u8 *)data_021600f0+20)+16)=func_0207cd8c;
 func_021167ac(*(u8 **)((u8 *)data_021600f0+8)+24,12);
 func_0207b148();
}

void func_0207b148(void) {
    if (data_021600f0 == NULL) {
        return;
    }
    *(u8 *)data_021600f0 = 0;
    if (*(u8 *)data_021600f0 == 0) {
        if ((*(u32 *)((u8 *)data_02160200 + 0x34) & 0x20) != 0) {
            return;
        }
    }
    (*(u8 *)data_021600f0)++;
    if (*(u8 *)data_021600f0 == 1) {
        if ((*(u32 *)((u8 *)data_02160200 + 0x34) & 0x10) != 0) {
            return;
        }
    }
    (*(u8 *)data_021600f0)++;
    if (*(u8 *)data_021600f0 == 2) {
        if ((*(u32 *)((u8 *)data_02160200 + 0x34) & 0x40) != 0) {
            return;
        }
    }
    (*(u8 *)data_021600f0)++;
    if (*(u8 *)data_021600f0 == 3) {
        if (data_02160200 != NULL) {
            return;
        }
    }
}

void func_0207b214(void) {
}

void func_0207b218(void) {
    u32 arr[4];
    u32 flags;
    if (data_021600f0 == NULL) {
        return;
    }
    flags = *(u32 *)((u8 *)data_02160200 + 0x34);
    arr[0] = flags & 0x10;
    arr[1] = flags & 0x8;
    arr[2] = flags & 0x20;
    arr[3] = flags & 0x40;
    if (arr[2] == 0 && arr[3] == 0 && arr[1] == 0 && arr[0] == 0) {
        return;
    }
    while (1) {
        u8 idx = *(u8 *)data_021600f0;
        if (arr[idx] != 0) {
            return;
        }
        if (idx != 0) {
            *(u8 *)data_021600f0 = idx - 1;
        } else {
            *(u8 *)data_021600f0 = 3;
        }
    }
}

void func_0207b2c0(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 4);
    u8 *obj = *(u8 **)((u8 *)data_021600ac + 0x68);
    func_020477dc(obj, 5, 1);
    *(u16 *)(node + 2) = 0x15;
    node[0] = 1;
    *(u32 *)(obj + 0xac) |= 0x800;
    *(u32 *)(obj + 0xac) &= ~0x40;
    *(Vec3_0207adbc *)(obj + 0x24) = *(Vec3_0207adbc *)obj;
    func_0210d27c(0x62);
}

void func_020477dc(void *, s32, s32);
BOOL func_0207b32c(void) {
    if (data_021600f0 == NULL) {
        return FALSE;
    }
    return (*(u8 **)((u8 *)data_021600f0 + 4))[0] != 0;
}

BOOL func_0207b35c(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0xd0);
    if (p == NULL) {
        return FALSE;
    }
    if (p[0x25] == 0x47 || p[0x25] == 0x51) {
        if (*(u16 *)(p + 6) == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

