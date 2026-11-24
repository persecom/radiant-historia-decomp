/* 26 functions from 0x02138E00 to 0x02139CDC (main), found by ds-decomp. */
#include "common.h"

extern char data_0215cab0[];
extern char data_0215cae0[];
extern char data_0215cb10[];
extern char data_0215cb40[];
extern char data_0215cb70[];
extern char data_0215cba0[];
extern char data_0215cbd4[];
extern char data_0215cc04[];
extern void func_02126c20(const char *);
extern void *func_02138fd0(void *, s32);
extern void *func_02138f34(void *, s32);
extern void func_02130880(void *, u8 *, u32);
extern void func_021309c8(void *);
extern s32 func_02126c88(void *);
extern void func_021396e8(u8 *, u32);
extern void func_02126c98(void *, s32);
extern void func_02126cb0(void *, u32, u32, u32, u32);
extern void func_02126e50(void *, void *, void *, s32);
extern void func_02126e60(void *, void *, void *, s32);
extern void func_02139a9c();
extern void func_02126c00(void);
extern void func_02126c0c(void);
extern void func_0213937c(void *, void *);
extern void func_02139450(u8 *, u8 *, s32, u8);
extern void func_02126c00(void);
extern void func_02126c0c(void);
extern void func_02139804(void *);
extern void func_021398d0(void *);
extern void func_0213999c(u8 *, u8 *);
extern char data_0215cc64[];
extern void (*data_0215cc6c[])(void *, s32, void *);
extern s32 func_020138b8(const void *, const void *, u32);
extern u32 func_02126c90(void *);
extern void func_02130b48(s32, s32, void *);
typedef void (*Fn3)(void *, s32, u32);
typedef void (*Fn2)(void *, s32);
typedef struct { u8 pad[0x38]; Fn3 f38; } Vt3;
typedef struct { u8 pad[0x30]; Fn2 f30; } Vt2;

extern void func_0212a9f4(void);
extern void func_02139be8(u32, u32, u32);
extern void func_0212a9f8(void);
void func_02138e00(u8 *arg0) {
    s32 i;
    void *p;
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cab0);
        return;
    }
    if (*(u32 *)(arg0 + 0xa0) == 0) {
        func_02126c20(data_0215cae0);
        return;
    }
    for (i = 0; i < *(s32 *)(arg0 + 0xa8); i++) {
        if (*(s32 *)(arg0 + 0x9c) == 1) {
            func_02138fd0(arg0, i);
        } else {
            p = func_02138f34(arg0, i);
        }
        func_02130880(p, *(u8 **)(arg0 + 0x74) + i * 0x1800, 0x1800);
    }
}

void func_02138ea4(u8 *arg0) {
    s32 i;
    void *p;
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cb10);
        return;
    }
    if (*(u32 *)(arg0 + 0xa0) == 0) {
        func_02126c20(data_0215cb40);
        return;
    }
    for (i = 0; i < *(s32 *)(arg0 + 0xa8); i++) {
        if (*(s32 *)(arg0 + 0x9c) == 1) {
            func_02138fd0(arg0, i);
        } else {
            p = func_02138f34(arg0, i);
        }
        func_021309c8(p);
    }
}

void *func_02138f34(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;
    void *obj;
    if (*(u32 *)(p + 0x58) == 0) {
        func_02126c20(data_0215cb70);
        return NULL;
    }
    if (*(s32 *)(p + 0x9c) == 1) {
        return NULL;
    }
    if (arg1 < 0 || arg1 >= *(s32 *)(p + 0xa8)) {
        return NULL;
    }
    obj = ((void **)p)[arg1];
    return (*(void *(**)(void *))(*(u8 **)obj + 0x44))(obj);
}

s32 func_02138f98(u8 *arg0) {
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cba0);
        return 0;
    }
    if (*(s32 *)(arg0 + 0x9c) == 1) {
        return 0;
    }
    return *(s32 *)(arg0 + 0xa8);
}

void *func_02138fd0(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;
    void *obj;
    if (*(u32 *)(p + 0x58) == 0) {
        func_02126c20(data_0215cbd4);
        return NULL;
    }
    if (*(s32 *)(p + 0x9c) == 0) {
        return NULL;
    }
    if (arg1 < 0 || arg1 >= *(s32 *)(p + 0xa8)) {
        return NULL;
    }
    obj = ((void **)p)[arg1];
    return (*(void *(**)(void *))(*(u8 **)obj + 0x44))(obj);
}

void func_02139034(u32 *arg0, u32 arg1) {
    arg0[0x33] += arg1;
    arg0[0x34] = 1;
}

void func_0213904c(u32 *arg0) {
    arg0[0x33] = 0;
    arg0[0x34] = 0;
}

void func_0213905c(u8 *arg0) {
    s32 i;
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cc04);
        return;
    }
    func_02126c00();
    if (*(s8 *)(arg0 + 0xac) == 1) {
        func_02139804(arg0);
    }
    for (i = 0; i < *(s32 *)(arg0 + 0xa8); i++) {
        if (*(s32 *)(arg0 + 0xd0) == 1 || *(s8 *)(arg0 + i * 0xc + 0x1c) != 0) {
            func_0213999c(arg0, arg0 + 0x18 + i * 0xc);
        }
    }
    func_021398d0(arg0);
    func_02126c0c();
}

void func_0213937c(void *arg0, void *arg1) {
    u32 *p = arg1;
    void *obj;
    switch (p[0]) {
        case 0:
            obj = *(void **)((u8 *)arg0 + 8);
            (*(void (**)(void *, u32))(*(u8 **)obj + 8))(obj, p[1]);
            break;
        case 1:
            obj = *(void **)((u8 *)arg0 + 8);
            (*(void (**)(void *, u32))(*(u8 **)obj + 12))(obj, p[1]);
            break;
        case 2:
            obj = *(void **)((u8 *)arg0 + 8);
            (*(void (**)(void *, u32, u32, u32))(*(u8 **)obj + 16))(obj, p[1], p[8], p[9]);
            break;
        case 3:
            obj = *(void **)((u8 *)arg0 + 8);
            (*(void (**)(void *, u32, u32))(*(u8 **)obj + 20))(obj, p[2], p[3]);
            break;
        case 4:
            obj = *(void **)((u8 *)arg0 + 8);
            (*(void (**)(void *, u32, u32))(*(u8 **)obj + 24))(obj, p[4], p[5]);
            break;
        case 5:
            obj = *(void **)((u8 *)arg0 + 8);
            (*(void (**)(void *, u32, u32))(*(u8 **)obj + 28))(obj, p[6], p[7]);
            break;
    }
}

void func_02139450(u8 *arg0, u8 *arg1, s32 arg2, u8 arg3) {
    void *r5 = *(void **)(arg1 + 8);
    void *obj;
    func_021396e8(arg0, 1);
    obj = *(void **)(arg0 + 8);
    (*(void (**)(void *, s32))(*(u8 **)obj + 0x24))(obj, 1);
    *(u32 *)(arg0 + 0x6c) = 1;
    func_02126c98(r5, -0x3c0);
    func_02126cb0(r5, *(u32 *)(arg0 + 0xc4), *(u32 *)(arg0 + 0xb4), arg2, *(u32 *)(arg0 + 0xc0));
    func_02126e50(r5, (void *)func_02139a9c, arg0, 1);
    func_02126e60(r5, (void *)func_02139a9c, arg0, 4);
    arg1[5] = arg3;
    arg1[4] = 2;
}

void func_02139664(u8 *arg0, u8 *arg1, u32 arg2, u8 arg3, u32 arg4) {
    void *r5 = *(void **)(arg1 + 8);
    func_021396e8(arg0, 1);
    func_02126cb0(r5, arg4, *(u32 *)(arg0 + 0xb8), arg2, *(u32 *)(arg0 + 0xc0));
    func_02126e50(r5, (void *)func_02139a9c, arg0, 2);
    func_02126e60(r5, (void *)func_02139a9c, arg0, 5);
    arg1[5] = arg3;
    arg1[4] = 3;
}

void func_021396e8(u8 *arg0, u32 arg1) {
    *(u8 *)(arg0 + 0xac) = arg1;
}

void func_021396f0(u8 *arg0, u8 *arg1) {
    switch ((s8)arg1[5]) {
        case 0:
            break;
        case 1: {
            s32 diff;
            func_02126c00();
            diff = *(s32 *)(arg0 + 0xbc) - *(s32 *)(arg0 + 0xb0);
            if (*(s32 *)(arg0 + 0xbc) <= *(s32 *)(arg0 + 0xb0)) {
                diff = 0;
            }
            func_02139450(arg0, arg1, diff, 0);
            func_02126c0c();
            func_0213937c(arg0, arg0 + 0x30);
            break;
        }
        case 2: {
            void *obj = *(void **)arg1;
            (*(void (**)(void *))(*(u8 **)obj + 0x20))(obj);
            break;
        }
        case 3: {
            void *obj = *(void **)arg1;
            (*(void (**)(void *, s32))(*(u8 **)obj + 0x24))(obj, 1);
            break;
        }
    }
}

void func_02139784(u8 *arg0) {
    s32 idx;
    func_02126c00();
    if (*(s32 *)(arg0 + 0x68) == 0 && *(s32 *)(arg0 + 0x6c) == 1) {
        void **p = *(void ***)(arg0 + 8);
        (*(void (**)(void *, s32))(*(u8 **)p + 0x24))(p, 0);
    }
    idx = *(s32 *)(arg0 + 0x10);
    *(s32 *)(arg0 + 0x14) = idx;
    idx++;
    *(s32 *)(arg0 + 0x10) = idx;
    if (idx >= *(s32 *)(arg0 + 0xa8)) {
        *(s32 *)(arg0 + 0x10) = 0;
    }
    *(void **)(arg0 + 0xc) = *(void **)(arg0 + *(s32 *)(arg0 + 0x14) * 0xc + 0x18);
    *(void **)(arg0 + 8) = *(void **)(arg0 + *(s32 *)(arg0 + 0x10) * 0xc + 0x18);
    func_02126c0c();
}

extern void func_02126d40(void *);
void func_02139804(void *arg0) {
    u8 *self = (u8 *)arg0;
    s32 i;
    if (*(s32 *)(self + 0x68) == 1 || *(s32 *)(self + 0xdc) == 1) {
        return;
    }
    if (*(s32 *)(self + 0x6c) == 1) {
        if (func_02126c88(*(void **)(self + *(s32 *)(self + 0x10) * 0xc + 0x20)) != 1) {
            void *p = *(void **)(self + 8);
            if (((s32 (*)(void *))(*(void **)(*(u8 **)p + 0x2c)))(p) != 2) {
                return;
            }
            func_0213999c(self, self + 0x18 + *(s32 *)(self + 0x10) * 0xc);
            p = *(void **)(self + 8);
            ((void (*)(void *, s32))(*(void **)(*(u8 **)p + 0x24)))(p, 0);
            *(s32 *)(self + 0x6c) = 0;
        }
    }
    for (i = 0; i < *(s32 *)(self + 0xa8); i++) {
        u8 *entry = self + i * 0xc;
        if (*(s8 *)(entry + 0x1c) != 0) {
            func_02126d40(*(void **)(entry + 0x20));
        }
    }
}

void func_021398d0(void *arg) {
 u8 *arg0=arg; s32 i; u8 *p; void *obj,*state;
 if(*(s8 *)(arg0+0xac)!=1) return;
 for(i=0;i<*(s32 *)(arg0+0xa8);i++) {
 p=arg0+0x18+i*12; obj=((void **)arg0)[i]; state=*(void **)(p+8);
 if((*(s32 (**)(void *))(*(u8 **)obj+0x2c))(obj)==3) func_02126d1c(state);
 if(func_02126c88(state)==0 && *(s8 *)(p+4)!=0) {
 p[4]=0; func_021396f0(arg0,p);
 }
 }
 if(func_02139a34(arg0)!=1) return;
 if(*(void **)(arg0+0xe0)) (*(void (**)(void *,s32))(arg0+0xe0))(arg0,6);
 func_021396e8(arg0,0);
}

