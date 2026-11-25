/* 2 functions from 0x020E2BE4 to 0x020E3A9C (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 v[10]; } MenuDrawParams;
extern const u16 data_021449c0[10];
extern int func_020df38c(int, int);
extern void func_020a3bbc(int);
extern void func_020e3db4(void *, s16, s16);
extern void func_020e43e4(void *, s16, s16, int);
extern void func_020e3e2c(s16, s16, int);
extern void func_021098ac(void *);

typedef struct {
    u8 pad_00[0x60];
    u8 *unk_60[6];
    u8 pad_78[0x3a];
    s16 unk_b2;
    u8 pad_b4[0x14];
    s16 unk_c8;
    u8 pad_ca[0x4];
    s16 unk_ce;
    u8 pad_d0[0xa4];
    s16 unk_174[6];
    u16 unk_180;
    u16 unk_182[6];
    s16 unk_18e[6];
    u8 pad_19a[0x1e];
    u16 unk_1b8;
} UnkMenuState;

extern u8 *data_02160a74;
extern u8 **data_021600c8;
extern u8 *func_02064cb8(void *, s32);
extern void func_020a8810(void *, s32);
extern void func_020e24bc(void *, s32, s32, s32, s32);
extern s32 func_020e5630(u8, u8 *, u8);
extern s32 func_02022068(u8);
extern s32 func_020a30d4(u8);
extern s32 func_020e55d8(u8, u8);
s32 func_020e2be4(u8 ***arg0, u32 type, u32 flags) {
    u8 *obj = **arg0;
    u8 *entry = NULL;
    UnkMenuState *g = (UnkMenuState *)data_02160a74;
    s32 count = 0;
    u16 i;
    u16 idx = 0;

    for (i = 0; i < 6; i++) {
        g->unk_174[i] = -1;
        g->unk_182[i] = 0;
        g->unk_18e[i] = 0;
    }

    g->unk_180 = 0x2d;

    switch (type) {
    case 0:
        g->unk_180 = 0x2d;
        func_02064cb8(*(void **)(obj + 0x11c), 0xb);
        break;
    case 4:
    case 5:
        if (type == 4) {
            g->unk_180 = 0x30;
            entry = func_02064cb8(*(void **)(obj + 0x11c), 3);
        } else if (type == 5) {
            g->unk_180 = 0x30;
            entry = func_02064cb8(*(void **)(obj + 0x11c), 4);
        }
        if (entry != NULL && (flags & 2)) {
            if (g->unk_b2 == 0) {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0x13);
            } else {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0x14);
            }
            g->unk_174[0] = 1;
            g->unk_182[0] = 0x30;
            if (g->unk_174[0] == 2) {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0xf);
            }
            if (g->unk_b2 == 0 && g->unk_174[0] == 2) {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0x17);
            }
            func_020e24bc(g->unk_60[0], 0, 0, *(u16 *)(entry + 0x20), 0);
        }
        count++;
        break;
    case 1: {
        u8 *node = *(u8 **)(*(u8 **)(obj + 0x11c) + 4);
        while (node != NULL) {
            if (*(s16 *)(node + 0x26) != 0 && *(s16 *)(node + 0x3c) != -1 && *(s16 *)(node + 0x3c) < 100) {
                u16 slot = idx - g->unk_ce;
                if ((flags & 2) && slot < 6) {
                    g->unk_174[slot] = 1;
                    if (*(s16 *)(*(u8 **)(obj + 0x118) + 0xc) < *(s16 *)(node + 0x1c)) {
                        g->unk_174[slot] = 2;
                    }
                    if (func_020e5630((u8)type, obj, (u8)idx) == 0) {
                        g->unk_174[slot] = 2;
                    }
                    if (((UnkMenuState *)data_02160a74)->unk_c8 >= 9 && *(u16 *)(node + 0x20) == 0x15) {
                        g->unk_174[slot] = 2;
                    }
                    if (g->unk_b2 == slot) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x13);
                    } else {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x14);
                    }
                    if (!(g->unk_1b8 & (1 << slot))) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                    }
                    if (g->unk_174[slot] == 2) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                    }
                    if (g->unk_b2 == slot && g->unk_174[slot] == 2) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x17);
                    }
                    if (*(u8 *)(node + 0x28) == 0) {
                        g->unk_182[slot] = 0x2d;
                    } else if (*(u8 *)(node + 0x28) == 1) {
                        g->unk_182[slot] = 0x2e;
                    } else if (*(u8 *)(node + 0x28) == 2) {
                        g->unk_182[slot] = 0x2f;
                    } else if (*(u8 *)(node + 0x28) == 3) {
                        g->unk_182[slot] = 0x30;
                    }
                    g->unk_18e[slot] = *(s16 *)(node + 0x1c);
                    func_020e24bc(g->unk_60[slot], 0, 0, *(u16 *)(node + 0x20), 0);
                }
                count++;
                idx++;
            }
            node = *(u8 **)(node + 0x34);
        }
        break;
    }
    case 3: {
        u8 *node = *(u8 **)(*data_021600c8 + 4);
        while (node != NULL) {
            if (func_02022068(*(u8 *)(node + 1)) != 0) {
                u16 slot = idx - g->unk_ce;
                if ((flags & 2) && slot < 6) {
                    if (g->unk_b2 == slot) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x13);
                    } else {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x14);
                    }
                    g->unk_174[slot] = 1;
                    g->unk_18e[slot] = func_02022068(*(u8 *)(node + 1));
                    {
                        u16 v = func_020a30d4(*(u8 *)(node + 1)) + 0x30;
                        if (v >= 0x31 && v <= 0x41) {
                            g->unk_182[slot] = v;
                        } else {
                            g->unk_182[slot] = 0x42;
                        }
                    }
                    func_020e24bc(g->unk_60[slot], 0, 0, *(u16 *)(node + 0x20), 0);
                }
                idx++;
                count++;
            }
            node = *(u8 **)(node + 0x34);
        }
        break;
    }
    case 6: {
        u16 k;
        u16 idx2 = 0;
        g->unk_180 = 0x2f;
        for (idx = 0; idx < 6; idx++) {
            g->unk_174[idx] = -1;
            g->unk_18e[idx] = 0;
        }
        for (k = 0; k < 15; k++) {
            s32 id = func_020e55d8((u8)*(u16 *)(obj + 0x90), (u8)k);
            if (id != 0) {
                u8 *item = func_02064cb8(*(void **)(obj + 0x11c), id);
                if (item != NULL) {
                    u16 slot = idx2 - g->unk_ce;
                    if ((flags & 2) && slot < 6) {
                        g->unk_174[slot] = 1;
                        if (func_020e5630((u8)type, obj, (u8)k) == 0) {
                            g->unk_174[slot] = 2;
                        }
                        if (((UnkMenuState *)data_02160a74)->unk_c8 >= 9 && *(u8 *)(item + 1) == 0x67) {
                            g->unk_174[slot] = 2;
                        }
                        if (g->unk_b2 == slot) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x13);
                        } else {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x14);
                        }
                        if (!(g->unk_1b8 & (1 << slot))) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                        }
                        if (g->unk_174[slot] == 2) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                        }
                        if (g->unk_b2 == slot && g->unk_174[slot] == 2) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x17);
                        }
                        if (*(u8 *)(item + 0x28) == 0) {
                            g->unk_182[slot] = 0x2d;
                        } else if (*(u8 *)(item + 0x28) == 1) {
                            g->unk_182[slot] = 0x2e;
                        } else if (*(u8 *)(item + 0x28) == 2) {
                            g->unk_182[slot] = 0x2f;
                        } else if (*(u8 *)(item + 0x28) == 3) {
                            g->unk_182[slot] = 0x30;
                        }
                        func_020e24bc(g->unk_60[slot], 0, 0, *(u16 *)(item + 0x20), 0);
                    }
                    count++;
                    idx2++;
                }
            }
        }
        break;
    }
    }

    if (!(flags & 1)) {
        count = 0;
    }
    return count;
}

void func_020e3310(void) {
    u8 *g = data_02160a74;
    u16 p[10];
    s32 x, y;
    u16 i;
    s32 width;
    s32 one = 1;
    for (i=0;i<10;i++) p[i]=data_021449c0[i];
    if (*(u32 *)(g+0x58)&0x800) return;
    *(volatile u32 *)0x40004a4=0x1f00c0;
    p[7]=0x2c8;
    for(i=0;i<6;i++) {
        x=0; y=0;
        if ((*(u32 *)(g+0x58)&4) && ((UnkMenuState *)g)->unk_174[i]!=-1) {
            if (((UnkMenuState *)g)->unk_b2==i) {
                if(func_020df38c(3,0x10)) {y=one;x=one;}
                if (((UnkMenuState *)g)->unk_174[i]==1 && (((UnkMenuState *)g)->unk_1b8&(one<<i))) func_020a3bbc(0x4e);
                else func_020a3bbc(0x50);
                func_020e3db4(p,x+4,y+(i*18+24));
            } else {
                if (((UnkMenuState *)g)->unk_174[i]==1 && (((UnkMenuState *)g)->unk_1b8&(one<<i))) func_020a3bbc(0x4d);
                else func_020a3bbc(0x4f);
                func_020e3db4(p,4,i*18+24);
            }
        }
        x=0;y=0;
        if(i<=*(s16 *)(g+0xb4)) {
            if(((UnkMenuState *)g)->unk_b2==i) {
                if(func_020df38c(3,0x10)) {x=one;y=one;}
            }
            if(((UnkMenuState *)g)->unk_182[i]) {
                func_020a3bbc(((UnkMenuState *)g)->unk_182[i]);
                func_020e43e4(p,y+6,x+(i*18+22),0x2cb);
            }
        }
    }
    func_020a3bbc(0x1a);
    if(*(s16 *)(g+0xbc)==3) {
        p[1]=0x47;p[2]=1;p[3]=7;p[4]=7;p[8]=7;p[9]=7;
        for(i=0;i<6;i++) {
            if(((UnkMenuState *)g)->unk_b2==i) {
                if(func_020df38c(3,0x10)) {x=1;y=1;}
                func_020a3bbc(0x19);
            } else {func_020a3bbc(0x1a);x=0;y=0;}
            if(((UnkMenuState *)g)->unk_174[i]!=0 && ((UnkMenuState *)g)->unk_174[i]!=-1) {
                p[5]=y+0x7f;p[6]=x+(i*18+0x1d);
                func_021098ac(p);
                func_020e3e2c(y+0x8e,x+(i*18+0x1c),((UnkMenuState *)g)->unk_18e[i]);
            }
        }
    } else {
        p[1]=0x51;p[2]=0;p[3]=12;p[8]=12;p[4]=8;p[9]=8;
        if(*(s16 *)(g+0xbc)==1) {
            for(i=0;i<6;i++) {
                if(((UnkMenuState *)g)->unk_b2==i) {
                    if(func_020df38c(3,0x10)) {x=1;y=x;}
                    func_020a3bbc(0x19);
                } else {func_020a3bbc(0x1a);x=0;y=0;}
                if(((UnkMenuState *)g)->unk_174[i]==2 || !(((UnkMenuState *)g)->unk_1b8&(one<<i))) func_020a3bbc(0x1b);
                if(((UnkMenuState *)g)->unk_174[i]!=0 && ((UnkMenuState *)g)->unk_174[i]!=-1) {
                    s32 row=x+(i*18+0x1c);
                    p[5]=y+0x79;p[6]=row;
                    func_021098ac(p);
                    func_020e3e2c(y+0x8d,row,((UnkMenuState *)g)->unk_18e[i]);
                }
            }
        }
    }
    p[7]=0x2c8;
    if(func_020df38c(3,0x20))func_020a3bbc(0x18);else func_020a3bbc(0x17);
    p[1]=0;p[2]=16;p[3]=14;p[4]=14;p[8]=14;p[9]=14;p[5]=0x9d;p[6]=24;
    func_021098ac(p);
    if(func_020df38c(3,0x40))func_020a3bbc(0x18);else func_020a3bbc(0x17);
    p[1]=16;p[2]=16;p[3]=14;p[4]=14;p[8]=14;p[9]=14;p[5]=0x9d;p[6]=0x73;
    func_021098ac(p);
    func_020a3bbc(0x25);
    if(func_020df38c(3,0x80))func_020a3bbc(0x26);else func_020a3bbc(0x25);
    p[1]=0;p[2]=0;p[3]=14;p[4]=3;p[8]=14;p[9]=3;p[5]=0x9d;p[6]=*(s16 *)(data_02160a74+0x150)+0x26;
    func_021098ac(p);
    p[2]=2;p[1]=0;p[4]=1;p[9]=*(u16 *)(g+0x1b2);p[6]=*(s16 *)(data_02160a74+0x150)+0x29;
    func_021098ac(p);
    p[2]=13;p[1]=0;p[4]=3;p[9]=3;p[6]=(*(u16 *)(g+0x1b2)+0x29)+*(s16 *)(data_02160a74+0x150);
    func_021098ac(p);
    func_020a3bbc(0x11);
    switch(*(s16 *)(g+0xbc)) {
        case 0:p[1]=0;p[2]=0;break;
        case 1:p[1]=18;p[2]=0;break;
        case 3:p[1]=36;p[2]=0;break;
        case 6:p[1]=18;p[2]=18;break;
        default:break;
    }
    p[3]=17;p[4]=17;p[8]=17;p[9]=17;p[5]=4;p[6]=3;
    func_021098ac(p);
    func_020a3bbc(0x51);
    p[1]=0;p[2]=0;p[3]=7;p[4]=17;p[8]=7;p[9]=17;p[5]=24;p[6]=4;
    func_021098ac(p);
    switch(*(s16 *)(g+0xbc)) {
        case 0:width=0x34;break;
        case 2:case 3:width=0x36;break;
        case 1:case 4:case 5:width=0x29;break;
        case 6:width=0x3d;break;
    }
    p[1]=13;p[2]=0;p[3]=1;p[8]=width;p[9]=17;p[5]=31;
    func_021098ac(p);
    p[1]=30;p[2]=0;p[3]=2;p[8]=2;p[9]=17;p[5]=width+31;
    func_021098ac(p);
    func_020a3bbc(0x52);
    p[1]=0;p[2]=*(s16 *)(g+0xbc)*13;p[3]=64;p[4]=13;p[8]=64;p[9]=13;p[5]=31;p[6]=6;
    func_021098ac(p);
}

