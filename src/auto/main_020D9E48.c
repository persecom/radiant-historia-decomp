/* 15 functions from 0x020D9E48 to 0x020DAA60 (main), found by ds-decomp. */
#include "common.h"
u8 *func_02064cb8(u32,s32);
u8 *func_02026d70(u8 *,u8 *,s32);
extern u8 *data_02160080;

extern u8 *data_02160258;
extern s32 data_02151fcc;
extern u32 data_0216263c[3];
extern s32 func_02002404(s32, s32);
extern void func_020dd810(void *, s32, s32);
extern u8 *data_02160080;
extern void func_020d626c(void *, void *);
extern void func_020223f8(void *, s32);
extern void func_02026ddc(void *);

void func_020d9e48(u32 *arg0, u32 *arg1) {
    s32 dx = (s32)arg1[0] - (s32)arg0[0];
    s32 dy = (s32)arg1[2] - (s32)arg0[2];
    *(u16 *)(data_02160258 + 0x48) = func_02002404(dy, dx);
}

void func_020d9e7c(void) {
    u8 *p = data_02160258;
    *(u32 *)(p + 0x7c) &= ~1;
    *(u32 *)(p + 0x88) &= ~2;
    *(u32 *)(p + 0x88) &= ~8;
}

BOOL func_020da008(s32);
BOOL func_020d9ea8(u32 flags,s32 arg1) {
u8 *p=data_02160258;
if(flags) *(u32 *)(p+0x88)|=flags;
if(*(u32 *)(p+0x88)&0x80000000) *(u32 *)(p+0x88)=0;
if(*(u32 *)(p+0x88)&2) *(u32 *)(p+0x88)&=~1;
if(*(u32 *)(p+0x88)&0x10) *(u32 *)(p+0x88)&=~8;
if(arg1!=0) {
s32 value=0;
if(arg1>=0x30) {
if(arg1>0x30 && arg1<=0x88) value=*(u16 *)(data_02160258+0x90)+*(u16 *)(data_02160258+0x94);
else if(arg1>0x88) value=*(u16 *)(data_02160258+0x90)+*(u16 *)(data_02160258+0x92);
}
if(*(u32 *)(p+0x88)&0x10) {
if(arg1==0x30) value=*(u16 *)(data_02160258+0x90);
}
if(value!=0 && !(*(u32 *)(p+0x88)&0x20)) {
func_020da008(value);
*(u32 *)(p+0x88)|=0x10;
}
}
if(*(u32 *)(p+0x88)&1) {
data_02151fcc-=0x20000;
if((data_02151fcc>>12)<0x200) {
data_02151fcc=0x200000;
*(u32 *)(p+0x88)&=~1;
}
} else if(*(u32 *)(p+0x88)&8) {
data_02151fcc+=0x20000;
if((data_02151fcc>>12)>*(u16 *)(data_02160258+0x90)) {
data_02151fcc=*(u16 *)(data_02160258+0x90)<<12;
*(u32 *)(p+0x88)&=~8;
}
}
return (*(u32 *)(p+0x88)&flags)!=0;
}

BOOL func_020da008(s32 arg0) {
    s32 val = data_02151fcc;
    if (val - arg0 < 0) {
        val += 0x20000;
        data_02151fcc = val;
        if (val > (arg0 << 12)) {
            val = arg0 << 12;
            data_02151fcc = val;
        }
    } else {
        val -= 0x20000;
        data_02151fcc = val;
        if (val < (arg0 << 12)) {
            val = arg0 << 12;
            data_02151fcc = val;
        }
    }
    return val == (arg0 << 12);
}

BOOL func_020da060(s32 arg0) {
    s32 *p = (s32 *)data_02160258;
    s32 dx = p[0] - p[3];
    s32 dy;
    s32 dz;
    if (dx < 0) dx = -dx;
    dy = p[1] - p[4];
    if (dy < 0) dy = -dy;
    dz = p[2] - p[5];
    if (dx < 0x5000 && dy <= (arg0 << 12)) {
        if (dz < 0) dz = -dz;
        if (dz < 0x5000) {
            return TRUE;
        }
    }
    return FALSE;
}

void func_020da0c8(s32 arg0) {
    data_02151fcc = arg0 << 12;
}

extern s32 func_020d2e14(s32, s32);
extern void func_0202b6ec(void);
extern void func_0202b398(void);
extern void func_0202b41c(void);
extern void func_0202e4cc(void);
extern s32 func_020981fc(u16);
extern void func_02108ffc(void);
extern u16 func_020329d8(void *);
extern void func_020d0a40(s32);
extern u8 *data_0216011c;
extern u8 *data_02160244;
extern u8 *data_02160090;
void func_020da0dc(void) {
    u8 *node;
    u8 *obj;
    u8 flag;

    func_020d2e14(3, 1);
    func_0202b6ec();
    func_0202b398();
    func_0202b41c();
    func_0202e4cc();
    if (func_020981fc(6) != 0) {
        *(u16 *)(data_0216011c + 0x2c) = *(u16 *)(data_0216011c + 0x3e);
        *(u16 *)(data_0216011c + 0x38) = *(u16 *)(data_0216011c + 0x40);
    }
    *(u16 *)(data_02160244 + 0x108) = 0;
    *(u16 *)(data_02160244 + 0x108) = 1;
    func_02108ffc();
    node = *(u8 **)(data_02160090 + 0x30);
    while (node != NULL) {
        obj = *(u8 **)(node + 0);
        if (obj != NULL) {
            flag = *(u8 *)(obj + 0x17);
            if (flag == 0) {
                *(u16 *)(node + 4) = func_020329d8(*(void **)(obj + 0xc));
            } else if (flag == 3) {
                *(u16 *)(node + 4) = func_020329d8(*(void **)(obj + 0xc));
            } else {
                *(u16 *)(node + 4) = 99;
            }
        }
        node = *(u8 **)(node + 0xc);
    }
    func_020d0a40(4);
}

void func_020da1c0(void) {
    u8 *node;
    u8 *next;
    u8 **g = &data_02160080;
    s32 zero = 0;
    s32 two = 2;
    s32 c3f2 = 0x3f2;
    s32 one = 1;
    if (*(u16 *)(*g + 0x14) == 0) {
        return;
    }
    node = *(u8 **)(*g + 0x18);
    while (node != NULL) {
        u8 *obj = *(u8 **)(node + 0);
        u8 *sub;
        next = *(u8 **)(node + 0x18);
        if (obj != NULL && (sub = *(u8 **)(obj + 0x128)) != NULL) {
            switch (*(s16 *)(node + 0x10)) {
            case 0:
                *(u8 *)(sub + 0x76) |= 1;
                *(void **)(sub + 0x78) = node;
                *(s16 *)(node + 0x10) = one;
                break;
            case 1:
                if (*(u16 *)(*g + 0x14) == 2) {
                    *(u32 *)(sub + 0x24) = c3f2;
                    func_020d626c(obj, sub);
                    *(s16 *)(node + 0x10) = two;
                }
                break;
            case 2:
                if (*(u32 *)(sub + 0x24) == 0) {
                    *(void **)(sub + 0x78) = (void *)zero;
                    *(u8 *)(sub + 0x76) = zero;
                    if (*(u8 *)(node + 0x12) & 1) {
                        func_020223f8(sub, zero);
                    }
                    func_02026ddc(node);
                }
                break;
            }
        }
        node = next;
    }
    if (*(u16 *)(data_02160080 + 0x16) == 0) {
        *(u16 *)(data_02160080 + 0x14) = 0;
    }
}

void func_0202b950(u8 *);
u8 *func_0202c7d8(s32);
void func_020da2c8(u8 *arg0) {
u8 *obj;
u8 *sub=*(u8 **)(arg0+0x128);
s32 state;
s8 i;
*(u16 *)(data_02160080+0x14)=1;
func_0202b950(arg0);
state=0;
for(i=0;i<9;i++) {
if(*(u16 *)(data_02160080+2+i*2)!=0) {
obj=func_0202c7d8(i);
if(obj!=NULL && !(*(u32 *)(*(u8 **)(obj+0x118)+0x78)&0x30)) {
if(*(u32 *)(*(u8 **)(obj+0x128)+0x24)==0 || arg0==obj) {
if(*(u32 *)(*(u8 **)(obj+0x12c)+0x10)&2) {
u8 *entry=func_02064cb8(*(u32 *)(obj+0x11c),*(u16 *)(data_02160080+2+i*2));
u8 *ret=func_02026d70(obj,entry,*(s32 *)sub);
if(obj==arg0) ret[0x12]|=1;
*(u32 *)(*(u8 **)(obj+0x128)+0x24)=0;
}
} else {state=1;}
} else {state=3; break;}
}
}
if(state==0) {*(u32 *)(sub+0x24)=0x1771; return;}
if(state==3) *(u32 *)(sub+0x24)=0x1774;
}

void func_0202ba04(u8 *);
void func_020de4ec(void);
u8 *func_020defcc(u32);
u8 *func_02064cb8(u32, s32);
u8 *func_02065298(u32,u32,s32,s32,s32);
u8 *func_02026d70(u8 *,u8 *,s32);
void func_020de4b4(u8 *);
void func_020da3e4(u8 *arg0) {
u8 *sub=*(u8 **)(arg0+0x128);
u8 *obj;
u8 i;
func_0202ba04(arg0);
*(u16 *)(data_02160080+0x42)=*(u16 *)(*(u8 **)(sub+8)+0x20);
*(u16 *)(data_02160080+0x14)=1;
func_020de4ec();
for(i=0;i<9;i++) {
u32 id=*(u16 *)(data_02160080+0x24+i*2);
if(id!=0) {
obj=func_020defcc(id);
if(obj!=NULL) {
u8 *entry=func_02064cb8(*(u32 *)(obj+0x11c),1);
u8 *ret;
if(entry==NULL) entry=func_02065298(*(u32 *)(obj+0x11c),*(u16 *)(*(u8 **)(obj+0x118)+0x4c),1,1,0);
(*(u8 **)(obj+0x128))[0x74]=i;
ret=func_02026d70(obj,entry,0);
if(obj==arg0) ret[0x12]|=1;
func_020de4b4(obj);
*(u32 *)(*(u8 **)(obj+0x128)+0x24)=0;
}
}
}
func_020de4ec();
*(u32 *)(sub+0x24)=0x1773;
}

BOOL func_020da4f0(u8 *arg0, s32 arg1) {
    u8 *p = *(u8 **)(arg0 + 0x118);
    s32 val;
    u32 x;
    u16 r;
    if (*p != 0) {
        val = 0;
    } else {
        val = *(s16 *)(p + 0xba) / 30 + *(s8 *)(p + 0x36) + arg1 + 5;
    }
    if (val >= 75) {
        val = 74;
    }
    x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    data_0216263c[0] = x;
    r = ((x >> 16) * 100) >> 16;
    return val >= r;
}

void func_020da870(u8 *arg0, s32 arg1) {
    *(u8 *)(arg0 + 0x9c) = 0;
    func_020dd810(arg0, arg1, 0);
    if (*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x10) {
        *(volatile s32 *)(arg0 + 0xf8) = 1;
    } else {
        *(volatile s32 *)(arg0 + 0xf8) = 0;
    }
}

void func_020da8a4(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x118);
    *(s32 *)(arg0 + 0xf8) = (*(u32 *)(p + 0x78) & 0x10) ? 1 : 0;
}

