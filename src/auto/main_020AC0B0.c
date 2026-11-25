/* 3 functions from 0x020AC0B0 to 0x020ACE8C (main), found by ds-decomp. */
#include "common.h"
extern u16 data_02162908[];
extern s32 *func_020b442c(u8 *);
extern s32 func_020abf5c(s32,s32,s32,s32,s32);
extern void func_0210d27c(s32);
extern void func_020abf3c(void);
extern void func_020aed5c(s32);
extern void func_020ade30(s32);
extern u8 *func_020b3890(void);
extern u8 *func_020b4044(void);
extern u8 *func_020b3fd8(void);
extern void func_020ade8c(s32);
extern void func_020ae50c(s32);
extern void func_020aaf88(s32 *, s32, s32, s32, s32);


#pragma optimization_level 3
s32 func_020ac0b0(u8 *self) {
s32 *state=func_020b442c(self);
s32 x=148,zero=0,height=18,width=108;
if(func_020abf5c(x,111,width,height,zero)) {
if(state[0]!=0) {
func_0210d27c(2);*(s32 *)(self+0x3438)=0;state[0]=0;
} else if(state[2]==1) {
func_0210d27c(11);*(s32 *)(self+0x3438)=0;state[0]=-1;func_020abf3c();return 1;
}
} else if(func_020abf5c(x,131,width,height,zero)) {
if(state[0]!=1) {
func_0210d27c(2);*(s32 *)(self+0x3438)=1;state[0]=1;
} else if(state[2]==1) {
func_0210d27c(11);*(s32 *)(self+0x3438)=1;state[0]=-1;func_020abf3c();return 1;
}
} else {
s32 selected=2;
if(func_020abf5c(x,151,width,height,zero)) {
if(state[0]!=2) {
func_0210d27c(selected);*(s32 *)(self+0x3438)=selected;
if(*(s32 *)(self+0x3438)==2)func_020aed5c(0);
state[0]=selected;
} else if(state[2]==1) {
func_0210d27c(5);*(s32 *)(self+0x3438)=selected;state[0]=-1;func_020abf3c();return 3;
}
}
}
if(func_020abf5c(234,3,18,18,1)) {
*(s32 *)(self+0x3438)=2;state[0]=-1;func_020ade30(2);func_020abf3c();func_0210d27c(5);return 3;
}
if(!data_02162908[2]) { state[1]=0;state[2]=1; } else state[2]=0;
return 0;
}

extern u8 *func_020b3890(void);
extern u8 *func_020b4044(void);
extern u8 *func_020b3fd8(void);
extern s32 func_020b3f14(u16);
extern void func_020ade8c(s32);
extern void func_020220b0(u16, s32);
extern void func_020ae50c(s32);
extern void func_020aaf88(s32 *, s32, s32, s32, s32);
extern s32 func_02022068(u16);
extern void func_0210d490(s32);
s32 func_020acb74(u8 *arg0) {
    u8 *a;
    u8 *p;
    u8 *q;
    s32 *state;
    s32 type;
    s32 dir = 0;
    s32 amount = 0;

    a = func_020b3890();
    p = func_020b4044();
    q = func_020b3fd8();
    state = func_020b442c(q);
    type = func_020b3f14(*(u16 *)(p + 4));

    if (func_020abf5c(0xa5, 0x3b, 0xe, 0xe, 0)) {
        if (state[3] == 1) {
            dir = -1;
        }
    } else if (func_020abf5c(0xe4, 0x3b, 0xe, 0xe, 0)) {
        if (state[3] == 1) {
            dir = 1;
        }
    }

    if (func_020abf5c(0xc2, 0x9c, 0x34, 0x10, 1)) {
        *(s32 *)(a + 0x258) -= *(s32 *)p * *(s32 *)(q + 0x2aac);
        if (a[0x263] == 2) {
            if (type == 1) {
                *(s32 *)(q + 0x2aa8) = 0;
            } else if (type == 2) {
                *(s32 *)(q + 0x2aa8) = 1;
            } else {
                func_020ade8c(3);
                *(s32 *)(q + 0x2aa8) = 2;
            }
            func_020ade8c(4);
            *arg0 = 2;
        } else {
            func_020220b0(*(u16 *)(p + 4), *(s32 *)(q + 0x2aac));
            *arg0 = 0;
        }
        func_020ae50c(6);
        func_020ae50c(7);
        func_020abf3c();
        func_020ade30(0x12);
        *(s32 *)(q + 0x2aac) = 1;
        func_0210d27c(0xf);
        return 2;
    }

    if (func_020abf5c(0xea, 3, 0x12, 0x12, 1)) {
        *arg0 = 0;
        *(s32 *)(q + 0x2aac) = 1;
        func_020ae50c(6);
        func_020ae50c(7);
        func_020ade30(2);
        func_020abf3c();
        func_0210d27c(5);
        return 2;
    }

    if (dir != 0 && type == 0) {
        s32 old = *(s32 *)(q + 0x2aac);
        amount = old;
        func_020aaf88(&amount, dir, 1, 100, 0);
        {
            s32 money = *(s32 *)(a + 0x258) - *(s32 *)p * amount;
            if (old != amount) {
                if (money >= 0 && amount + func_02022068(*(u16 *)(p + 4)) <= 99) {
                    func_0210d27c(2);
                    *(s32 *)(q + 0x2aac) = amount;
                } else {
                    func_0210d490(7);
                }
                if (dir == 1) {
                    func_020ade30(0x18);
                } else {
                    func_020ade30(0x19);
                }
            } else {
                func_0210d490(7);
            }
        }
    }

    if (data_02162908[2] == 0) {
        state[2] = 1;
        state[3] = 0;
        state[1] = 0;
    } else {
        state[2] = 0;
        state[3] = 0;
        if (state[1] == 0) {
            state[3] = 1;
        }
        if (state[1] >= 20 && (state[1] % 2) == 0) {
            state[3] = 1;
        }
        state[1]++;
        if (state[1] > 100) {
            state[1] = 20;
        }
    }
    return 0;
}

#pragma optimization_level 4
