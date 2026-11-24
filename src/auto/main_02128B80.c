/* 32 functions from 0x02128B80 to 0x02129A6C (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02173478[4];
extern u32 data_02173488;
extern u32 data_0217357c[3];
extern u32 data_0217358c[4];

extern void func_0212a9f4(void);
extern void func_021295a4(void *);
extern void func_0212a9f8(void);
extern void func_0212bda8(void *);
extern void func_021293c0();
extern void func_02128eb4(void);
extern void func_0212926c(void);
extern void func_02129490();
extern void func_0212951c(void *);
extern void func_021294c8(void *);
extern void func_02013878(void *, s32, u32);
extern void func_0212b3f8(s32, s32, void *, void *);
extern void *memset(void *, int, unsigned long);
extern u8 data_0217348c[240];
extern u8 data_02156a54[];
void func_021293c0(arg0)
u8 *arg0;
{
s32 i, count;
if (*(s8 *)(arg0+0x6c)==0 && *(s32 *)(arg0+0xc0)!=0 && func_0212d540(*(u32 *)(arg0+4)) >= *(s32 *)(arg0+0xc0))
func_0212d578(*(u32 *)(arg0+4), -1);
if(func_0212c7b0(*(u32 *)(arg0+4)) != 3) return;
count=func_0212d5b0(*(u32 *)(arg0+4));
data_02173478[3]=count;
func_0212eb98(*(u32 *)(arg0+0xc));
for(i=0;i<count;i++){
void *p=*(void **)(arg0+0x18+i*4);
data_02173478[0]=(*(s32 (**)(void *,s32))(*(u8 **)p+0x24))(p,1);
if((s32)data_02173478[0]>=64) break;
}
if(i==count){func_0212eb10(*(u32 *)(arg0+0xc),0);arg0[1]=4;}
}

void func_02129490(arg0)
    u8 *arg0;
{
    data_02173478[1] = func_0212eb2c(*(u32 *)(arg0 + 0xc));
    if (func_0212eb44(*(u32 *)(arg0 + 0xc)) != 2) {
        arg0[1] = 5;
    }
}

void func_021294c4(void) {
}

void func_021294c8(void *arg0) {
    u8 *p = arg0;
    u32 p1 = *(u32 *)(p + 8);
    if (p1 != 0) {
        if (func_0212dbe8(p1) == 4) {
            *(s16 *)(p + 0x60) = -1;
            p[1] = 6;
        }
    }
    {
        u32 p2 = *(u32 *)(p + 0x94);
        if (p2 != 0) {
            if (func_0212e5f0(p2) == 3) {
                *(s16 *)(p + 0x60) = -1;
                p[1] = 6;
            }
        }
    }
}

void func_0212951c(void *arg0) {
    u8 *p = arg0;
    if (*(u32 *)(p + 8) == 0) return;
    if (func_021282cc(p) == 0) return;
    switch (*(s8 *)(p + 2)) {
    case 0:
    case 1:
        if (func_0212dbe8(*(u32 *)(p + 8)) == 3) {
            func_0212c7e0(*(u32 *)(p + 4));
        }
        break;
    case 2:
        func_0212c7e0(*(u32 *)(p + 4));
        break;
    case 3:
    case 4:
        break;
    }
}

void func_02129588(void *arg0) {
    func_0212a9f4();
    func_021295a4(arg0);
    func_0212a9f8();
}

void func_021295a4(void *arg0) {
    u8 *p = arg0;
    if (p == NULL) {
        func_0212bda8(data_02156a54);
        return;
    } else {
        s8 code = *(s8 *)(p + 1);
        if (code == 3) {
            func_021293c0();
        } else if (code == 1) {
            func_02128eb4();
        } else if (code == 2) {
            func_0212926c();
        } else if (code == 4) {
            func_02129490();
        } else if (code == 5) {
            func_021294c4();
        }
        func_0212951c(p);
        func_021294c8(p);
    }
}

void func_02129624(void) {
    u32 *p = (u32 *)data_0217348c;
    s32 i;
    for (i = 0; i < 15; i++) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        p += 4;
    }
}

u8 *func_0212965c(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(u32 *)(data_0217348c + i * 0x3c) == 0) {
            break;
        }
    }
    if (i == 4) {
        return 0;
    }
    {
        u8 *e = data_0217348c + i * 0x3c;
        func_02013878(e, 0, 0x3c);
        *(u32 *)(data_0217348c + i * 0x3c) = 1;
        *(u32 *)(e + 4) = i;
        *(u32 *)(e + 8) = 0;
        *(u32 *)(e + 0xc) = 0;
        func_0212b3f8(0x1f4, 0xac44, e + 0x30, e + 0x32);
        *(u8 *)(e + 0x28) = 0;
        *(u8 *)(e + 0x29) = 0;
        *(u8 *)(e + 0x2a) = 0;
        *(u8 *)(e + 0x2b) = 0;
        *(u8 *)(e + 0x2c) = 0;
        *(u8 *)(e + 0x2d) = 0;
        *(u8 *)(e + 0x2e) = 0;
        *(u8 *)(e + 0x2f) = 0;
        return e;
    }
}

void func_02129708(u8 *arg0, s32 arg1, s32 arg2) {
    func_0212b3f8(arg2, arg1, arg0 + 0x30, arg0 + 0x32);
}

void func_02129724(u8 *arg0, s16 *arg1, s16 *arg2) {
    *(s16 *)(arg0 + 0x28) = arg1[0];
    *(s16 *)(arg0 + 0x2a) = arg2[0];
    *(s16 *)(arg0 + 0x2c) = arg1[1];
    *(s16 *)(arg0 + 0x2e) = arg2[1];
}

void func_02129748(u8 *arg0, s16 *arg1, s16 *arg2) {
    arg1[0] = *(s16 *)(arg0 + 0x28);
    arg2[0] = *(s16 *)(arg0 + 0x2a);
    arg1[1] = *(s16 *)(arg0 + 0x2c);
    arg2[1] = *(s16 *)(arg0 + 0x2e);
}

void func_0212976c(u8 *arg0, u16 arg1, u16 arg2, u16 arg3) {
    *(u16 *)(arg0 + 0x34) = arg1;
    *(u16 *)(arg0 + 0x36) = arg2;
    *(u16 *)(arg0 + 0x38) = arg3;
}

void func_0212977c(u8 *arg0, s16 *arg1, s16 *arg2, s16 *arg3) {
    *arg1 = *(s16 *)(arg0 + 0x34);
    *arg2 = *(s16 *)(arg0 + 0x36);
    *arg3 = *(s16 *)(arg0 + 0x38);
}

void func_02129798(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    *(u32 *)arg0 = 0;
    func_02013878(arg0, 0, 0x3c);
}

u32 func_021297b8(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0xc);
}

s32 func_021297c0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (*(s32 *)(arg0 + 0xc) != 0) {
        return 0;
    }
    *(s32 *)(arg0 + 0x14) = 1;
    *(s32 *)(arg0 + 0x18) = arg1;
    *(s32 *)(arg0 + 0x1c) = arg2;
    *(s32 *)(arg0 + 0x20) = arg3;
    *(s32 *)(arg0 + 0x24) = arg4;
    return 1;
}

s32 func_021297f8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (*(s32 *)(arg0 + 0xc) != 0) {
        return 0;
    }
    *(s32 *)(arg0 + 0x14) = 2;
    *(s32 *)(arg0 + 0x18) = arg1;
    *(s32 *)(arg0 + 0x1c) = arg2;
    *(s32 *)(arg0 + 0x20) = arg3;
    *(s32 *)(arg0 + 0x24) = arg4;
    return 1;
}

void func_02129830(u8 *arg0) {
    if (*(s32 *)(arg0 + 0xc) == 0) {
        *(s32 *)(arg0 + 0x10) = 0;
        *(s32 *)(arg0 + 0xc) = 1;
    }
}

void func_0212984c(u8 *arg0) {
    *(s32 *)(arg0 + 0xc) = 0;
    *(u8 *)(arg0 + 0x28) = 0;
    *(u8 *)(arg0 + 0x29) = 0;
    *(u8 *)(arg0 + 0x2a) = 0;
    *(u8 *)(arg0 + 0x2b) = 0;
    *(u8 *)(arg0 + 0x2c) = 0;
    *(u8 *)(arg0 + 0x2d) = 0;
    *(u8 *)(arg0 + 0x2e) = 0;
    *(u8 *)(arg0 + 0x2f) = 0;
}

void func_02129878(u8 *arg0) {
    if (*(s32 *)(arg0 + 0xc) == 3) {
        *(s32 *)(arg0 + 0xc) = 0;
    }
}

void *func_0212988c(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

void func_02129894(void) {
    data_02173488 = 1;
}

void func_021298a8(u8 *p) {
s32 result;
if(*(s32 *)(p+0xc)==1) *(s32 *)(p+0xc)=2;
if(*(s32 *)(p+0xc)!=2) return;
if(*(s32 *)(p+0x14)==1){
*(s32 *)(p+0x10)=func_0212a9fc(*(u32 *)(p+0x18),*(u32 *)(p+0x1c),*(u32 *)(p+0x20),p+0x28,*(s16 *)(p+0x30),*(s16 *)(p+0x32),p+0x34,*(s16 *)(p+0x36),*(s16 *)(p+0x38));
} else {
result=func_0212b354(*(u32 *)(p+0x18),*(u32 *)(p+0x1c),*(u32 *)(p+0x20),p+0x28,*(u32 *)(p+0x24),p+0x2c,*(s16 *)(p+0x30),*(s16 *)(p+0x32),p+0x34,*(s16 *)(p+0x36),*(s16 *)(p+0x38));
*(s32 *)(p+0x10)=result;
if(result%2==1) func_02129894();
}
*(s32 *)(p+0xc)=3;
}

void func_0212999c(u8 *arg0, s32 arg1) {
    if (*(u32 *)(arg0 + 0xb8) != 0) {
        ((void (*)(u32, s32))data_0217357c[2]) (*(u32 *)(arg0 + 0xb8), arg1);
    }
}

void func_021299c0(u8 *arg0, s32 arg1) {
    if (*(s32 *)(arg0 + 0xb8) != 0) {
        ((void (*)(s32))data_0217357c[1])(*(s32 *)(arg0 + 0xb8));
    }
    {
        s32 val = arg1 / 0x60;
        *(s32 *)(arg0 + 0xc0) = val;
        *(s32 *)(arg0 + 0xbc) = arg1;
        if (val <= 0) {
            *(s32 *)(arg0 + 0xc0) = 1;
        }
    }
}

void func_02129a14(u8 *arg0) {
    ((void (*)(u8 *))data_0217357c[3])(arg0);
}

void func_02129a2c(u8 *arg0) {
    s32 val = *(s32 *)(arg0 + 0xb8);
    if (val != 0) {
        ((void (*)(s32))data_0217357c[0])(val);
    }
}

s32 func_02129a50(void) {
    data_0217358c[3]++;
    return 0;
}

