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
extern s32 func_02022068(u16);


#pragma scheduling on
s32 func_020ac0b0(u8 *self) {
s32 *state=func_020b442c(self);
s32 width=108,height=18,zero=0,x=148;
s32 y=111;
if(func_020abf5c(x,height*6+3,width,height,zero)) {
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
#pragma scheduling off
extern void func_020b40a4(s32, s32 *, s32 *);
extern void func_020ade44(s32);
extern void func_020ac094(s32 *, s32 *);
extern void func_020b4058(s32);
extern u8 func_020b3be8(u16, s32);
extern void func_020b3fb4(u8, s32 *, s32 *);
extern s32 func_020b3d88(void);
extern void func_020b38c0(u8);
#pragma optimization_level 4
s32 func_020ac2c4(u8 *arg) {
    u8 *menu, *player, *item;
    s32 *touch;
    s32 row = -1, tab = -1, dir = 0, page_dir = 0, commit = 0;
    s32 end = 0, start = 0, te = 0, ts = 0, x = 0, y = 0;
    s32 n, i;

    menu = func_020b3fd8();
    player = func_020b3890();
    touch = ((s32 *(*)(void))func_020b442c)();
    item = func_020b4044();
    func_020b40a4(*(s32 *)(menu + 0x2aa4), &end, &start);
    n = end - start;

    if (func_020abf5c(18, 54, 200, 15, 0) && n >= 1) {
        if (touch[0] != 10) { touch[0] = 10; row = 0; }
        else if (touch[2] == 1) commit = 1;
    } else if (func_020abf5c(18, 72, 200, 15, 0) && n >= 2) {
        if (touch[0] != 11) { touch[0] = 11; row = 1; }
        else if (touch[2] == 1) commit = 1;
    } else if (func_020abf5c(18, 90, 200, 15, 0) && n >= 3) {
        if (touch[0] != 12) { touch[0] = 12; row = 2; }
        else if (touch[2] == 1) commit = 1;
    } else if (func_020abf5c(18, 108, 200, 15, 0) && n >= 4) {
        if (touch[0] != 13) { touch[0] = 13; row = 3; }
        else if (touch[2] == 1) commit = 1;
    } else if (func_020abf5c(18, 126, 200, 15, 0) && n >= 5) {
        if (touch[0] != 14) { touch[0] = 14; row = 4; }
        else if (touch[2] == 1) commit = 1;
    }

    for (i = 0; i < 4; i++) {
        if (func_020abf5c(12 + 20 * i, 28, 18, 18, 0)) {
            touch[0] = i + 6;
            tab = i;
        }
    }

    if (func_020abf5c(11, 6, 14, 14, 1)) {
        page_dir = -1;
    } else if (func_020abf5c(119, 6, 14, 14, 1)) {
        page_dir = 1;
    }

    if (func_020abf5c(226, 54, 14, 14, 0)) {
        if (touch[3] == 1) dir = -1;
    } else if (func_020abf5c(226, 133, 14, 14, 0)) {
        if (touch[3] == 1) dir = 1;
    }

    if (end - start > 5) {
        s32 offset, old;
        if (dir == 0) {
            if (func_020abf5c(226, 68, 14, 65, 0)) {
                s32 h, pos, delta;
                func_020ade44(17);
                h = 53 - (end - start - 5) * 4;
                if (h <= 0) h = 1;
                pos = (*(s32 *)(menu + 0x2a98) - start) * (65 - (h + 12)) / (end - start - 5);
                func_020ac094(&x, &y);
                if (!func_020abf5c(226, pos + 68, 14, h + 12, 0)) {
                    offset = *(s32 *)(menu + 0x2aa0) - *(s32 *)(menu + 0x2a98);
                    y -= 68;
                    {
                        float f = (float)y / 75.0f;
                        delta = start + (s32)(f * (float)(end - start)) - *(s32 *)(menu + 0x2a98);
                    }
                    if (delta > 0) { func_0210d27c(2); (*(s32 *)(menu + 0x2a98))++; }
                    else if (delta < 0) { func_0210d27c(2); (*(s32 *)(menu + 0x2a98))--; }
                    if (*(s32 *)(menu + 0x2a98) > end - 5) *(s32 *)(menu + 0x2a98) = end - 5;
                    *(s32 *)(menu + 0x2aa0) = *(s32 *)(menu + 0x2a98) + offset;
                    func_020b4058(*(s32 *)(menu + 0x2aa0));
                    player[0x263] = func_020b3be8(*(u16 *)(func_020b4044() + 4), 0);
                    if (player[0x263] != 1) func_020ae50c(5);
                }
            }
        } else {
            old = *(s32 *)(menu + 0x2a98);
            offset = *(s32 *)(menu + 0x2aa0) - old;
            if (dir == 1) (*(s32 *)(menu + 0x2a98))++;
            else if (dir == -1) (*(s32 *)(menu + 0x2a98))--;
            if (*(s32 *)(menu + 0x2a98) > end - 5) *(s32 *)(menu + 0x2a98) = end - 5;
            if (*(s32 *)(menu + 0x2a98) < start) *(s32 *)(menu + 0x2a98) = start;
            *(s32 *)(menu + 0x2aa0) = *(s32 *)(menu + 0x2a98) + offset;
            if (old != *(s32 *)(menu + 0x2a98)) {
                if (dir == 1) func_020ade44(16);
                else if (dir == -1) func_020ade44(15);
                func_0210d27c(2);
                func_020b4058(*(s32 *)(menu + 0x2aa0));
                player[0x263] = func_020b3be8(*(u16 *)(func_020b4044() + 4), 0);
                if (player[0x263] != 1) func_020ae50c(5);
            }
        }
    }

    if (func_020abf5c(234, 3, 18, 18, 1)) {
        func_020ade30(2);
        func_020abf3c();
        func_0210d27c(5);
        return 3;
    }
    if (func_020abf5c(194, 156, 52, 16, 1)) commit = 1;

    if (row != -1) {
        *(s32 *)(menu + 0x2aa0) = *(s32 *)(menu + 0x2a98) + row;
        func_020b4058(*(s32 *)(menu + 0x2aa0));
        player[0x263] = func_020b3be8(*(u16 *)(func_020b4044() + 4), 0);
        if (player[0x263] != 1) func_020ae50c(5);
        func_0210d27c(2);
    }

    if (tab != -1) {
        s32 old_tab = *(s32 *)(menu + 0x2aa4);
        s32 new_tab = old_tab;
        func_020b3fb4(menu[0x2ab0], &te, &ts);
        if (te - ts == 1) new_tab = 3;
        else if (te - ts == 4) { if (tab == 0) new_tab = 3; else new_tab = tab - 1; }
        else if (te - ts == 3) { if (tab != 3) new_tab = tab; }
        if (*(s32 *)(menu + 0x2aa4) != new_tab) {
            *(s32 *)(menu + 0x2aa4) = new_tab;
            func_020b40a4(new_tab, &end, &start);
            {
                s32 first = start;
                *(s32 *)(menu + 0x2a98) = first;
                *(s32 *)(menu + 0x2aa0) = first;
                func_020b4058(first);
            }
            player[0x263] = func_020b3be8(*(u16 *)(func_020b4044() + 4), 0);
            if (player[0x263] != 1) func_020ae50c(5);
            func_0210d27c(1);
            func_020ae50c(4);
            func_020ae50c(0);
            func_020ae50c(3);
            if ((old_tab == 2 || old_tab == 3) && (*(s32 *)(menu + 0x2aa4) == 0 || *(s32 *)(menu + 0x2aa4) == 1)) {
                func_020ade8c(3);
            }
        }
    }

    if (page_dir != 0 && func_020b3d88() != 0) {
        s32 old_p = *(s32 *)(player + 0x250);
        func_020aaf88((s32 *)(player + 0x250), page_dir, 0, *(s32 *)(player + 0x254), 1);
        if (old_p != *(s32 *)(player + 0x250)) {
            func_020b38c0((u8)*(s32 *)(player + 0x250));
            player[0x263] = func_020b3be8(*(u16 *)(func_020b4044() + 4), 0);
            if (player[0x263] != 1) func_020ae50c(5);
            if (page_dir == 1) func_020ade44(5);
            else func_020ade44(4);
            func_0210d27c(1);
        }
    }

    if (commit == 1) {
        if (*(s32 *)(player + 0x258) - *(s32 *)item >= 0) {
            if ((u32)func_02022068(*(u16 *)(item + 4)) >= 99) {
                *arg = 4;
                func_0210d27c(7);
            } else {
                *arg = 1;
                func_0210d27c(11);
            }
        } else {
            func_0210d27c(7);
            *arg = 3;
        }
        func_020abf3c();
        func_020ade30(18);
        return 2;
    }

    if (data_02162908[2] == 0) {
        touch[2] = 1;
        touch[3] = 0;
        touch[1] = 0;
    } else {
        touch[2] = 0;
        touch[3] = 0;
        if (touch[1] == 0) touch[3] = 1;
        if (touch[1] >= 20 && touch[1] % 2 == 0) touch[3] = 1;
        touch[1]++;
        if (touch[1] > 100) touch[1] = 20;
    }
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
