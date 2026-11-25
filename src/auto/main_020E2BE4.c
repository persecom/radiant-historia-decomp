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
#pragma push
#pragma optimization_level 3
s32 func_020e2be4(u8 ***arg0, u32 type, u32 flags) {
    u16 idx;
    s32 count;
    u16 i;
    UnkMenuState *g = (UnkMenuState *)data_02160a74;
    u8 *obj = **arg0;
    u8 *entry = NULL;
    u8 *node;
    u8 *item;

    count = 0;
    i = 0;
    while (i < 6) {
        g->unk_174[i] = -1;
        g->unk_182[i] = 0;
        g->unk_18e[i] = 0;
        i++;
    }

    idx = 0;
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
        node = *(u8 **)(*(u8 **)(obj + 0x11c) + 4);
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
        node = *(u8 **)(*data_021600c8 + 4);
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
                count++;
                idx++;
            }
            node = *(u8 **)(node + 0x34);
        }
        break;
    }
    case 6: {
        u16 k;
        g->unk_180 = 0x2f;
        for (idx = 0; idx < 6; idx++) {
            g->unk_174[idx] = -1;
            g->unk_18e[idx] = 0;
        }
        idx = 0;
        for (k = 0; k < 15; k++) {
            s32 id = func_020e55d8((u8)*(u16 *)(obj + 0x90), (u8)k);
            if (id != 0) {
                item = func_02064cb8(*(void **)(obj + 0x11c), id);
                if (item != NULL) {
                    u16 slot = idx - g->unk_ce;
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
                    idx++;
                }
            }
        }
        break;
    }
    }

    return (flags & 1) ? count : 0;
}
#pragma pop
void func_020e3310(void) {
    s16 x, y;
    u16 i;
    u8 *g = data_02160a74;
    MenuDrawParams params = *(const MenuDrawParams *)data_021449c0;
    s16 width;
    s32 one = 1;
    if (*(u32 *)(g+0x58)&0x800) return;
    *(volatile u32 *)0x40004a4=0x1f00c0;
    params.v[7]=0x2c8;
    for(i=0;i<6;i++) {
        y=0; x=0;
        if ((*(u32 *)(g+0x58)&4) && ((UnkMenuState *)g)->unk_174[i]!=-1) {
            if (((UnkMenuState *)g)->unk_b2==i) {
                if(func_020df38c(3,0x10)) {y=one;x=one;}
                if (((UnkMenuState *)g)->unk_174[i]==1 && (((UnkMenuState *)g)->unk_1b8&(one<<i))) func_020a3bbc(0x4e);
                else func_020a3bbc(0x50);
                func_020e3db4(params.v,x+4,y+(i*18+24));
            } else {
                if (((UnkMenuState *)g)->unk_174[i]==1 && (((UnkMenuState *)g)->unk_1b8&(one<<i))) func_020a3bbc(0x4d);
                else func_020a3bbc(0x4f);
                func_020e3db4(params.v,4,i*18+24);
            }
        }
        y=0;x=0;
        if(i<=*(s16 *)(g+0xb4)) {
            if(((UnkMenuState *)g)->unk_b2==i) {
                if(func_020df38c(3,0x10)) {y=one;x=one;}
            }
            if(((UnkMenuState *)g)->unk_182[i]) {
                func_020a3bbc(((UnkMenuState *)g)->unk_182[i]);
                func_020e43e4(params.v,x+6,y+(i*18+22),0x2cb);
            }
        }
    }
    func_020a3bbc(0x1a);
    if(*(s16 *)(g+0xbc)==3) {
        params.v[1]=0x47;params.v[2]=1;params.v[3]=7;params.v[4]=7;params.v[8]=7;params.v[9]=7;
        for(i=0;i<6;i++) {
            if(((UnkMenuState *)g)->unk_b2==i) {
                if(func_020df38c(3,0x10)) {y=1;x=1;}
                func_020a3bbc(0x19);
            } else {func_020a3bbc(0x1a);y=0;x=0;}
            if(((UnkMenuState *)g)->unk_174[i]!=0 && ((UnkMenuState *)g)->unk_174[i]!=-1) {
                params.v[5]=x+0x7f;params.v[6]=y+(i*18+0x1d);
                func_021098ac(params.v);
                func_020e3e2c(x+0x8e,y+(i*18+0x1c),((UnkMenuState *)g)->unk_18e[i]);
            }
        }
    } else {
        params.v[1]=0x51;params.v[2]=0;params.v[3]=12;params.v[8]=12;params.v[4]=8;params.v[9]=8;
        if(*(s16 *)(g+0xbc)==1) {
            for(i=0;i<6;i++) {
                if(((UnkMenuState *)g)->unk_b2==i) {
                    if(func_020df38c(3,0x10)) {y=1;x=y;}
                    func_020a3bbc(0x19);
                } else {func_020a3bbc(0x1a);y=0;x=0;}
                if(((UnkMenuState *)g)->unk_174[i]==2 || !(((UnkMenuState *)g)->unk_1b8&(one<<i))) func_020a3bbc(0x1b);
                if(((UnkMenuState *)g)->unk_174[i]!=0 && ((UnkMenuState *)g)->unk_174[i]!=-1) {
                    s32 row;
                    params.v[5]=x+0x79;row=y+(i*18+0x1c);params.v[6]=row;
                    func_021098ac(params.v);
                    func_020e3e2c(x+0x8d,row,((UnkMenuState *)g)->unk_18e[i]);
                }
            }
        }
    }
    params.v[7]=0x2c8;
    if(func_020df38c(3,0x20))func_020a3bbc(0x18);else func_020a3bbc(0x17);
    params.v[1]=0;params.v[2]=16;params.v[3]=14;params.v[4]=14;params.v[8]=14;params.v[9]=14;params.v[5]=0x9d;params.v[6]=24;
    func_021098ac(params.v);
    if(func_020df38c(3,0x40))func_020a3bbc(0x18);else func_020a3bbc(0x17);
    params.v[1]=16;params.v[2]=16;params.v[3]=14;params.v[4]=14;params.v[8]=14;params.v[9]=14;params.v[5]=0x9d;params.v[6]=0x73;
    func_021098ac(params.v);
    func_020a3bbc(0x25);
    if(func_020df38c(3,0x80))func_020a3bbc(0x26);else func_020a3bbc(0x25);
    params.v[1]=0;params.v[2]=0;params.v[3]=14;params.v[4]=3;params.v[8]=14;params.v[9]=3;params.v[5]=0x9d;params.v[6]=*(s16 *)(data_02160a74+0x150)+0x26;
    func_021098ac(params.v);
    params.v[2]=2;params.v[1]=0;params.v[4]=1;params.v[9]=*(u16 *)(g+0x1b2);params.v[6]=*(s16 *)(data_02160a74+0x150)+0x29;
    func_021098ac(params.v);
    params.v[2]=13;params.v[1]=0;params.v[4]=3;params.v[9]=3;params.v[6]=(*(u16 *)(g+0x1b2)+0x29)+*(s16 *)(data_02160a74+0x150);
    func_021098ac(params.v);
    func_020a3bbc(0x11);
    switch(*(s16 *)(g+0xbc)) {
        case 0:params.v[1]=0;params.v[2]=0;break;
        case 1:params.v[1]=18;params.v[2]=0;break;
        case 3:params.v[1]=36;params.v[2]=0;break;
        case 6:params.v[1]=18;params.v[2]=18;break;
        default:break;
    }
    params.v[3]=17;params.v[4]=17;params.v[8]=17;params.v[9]=17;params.v[5]=4;params.v[6]=3;
    func_021098ac(params.v);
    func_020a3bbc(0x51);
    params.v[1]=0;params.v[2]=0;params.v[3]=7;params.v[4]=17;params.v[8]=7;params.v[9]=17;params.v[5]=24;params.v[6]=4;
    func_021098ac(params.v);
    switch(*(s16 *)(g+0xbc)) {
        case 0:width=0x34;break;
        case 1:width=0x29;break;
        case 2:width=0x36;break;
        case 3:width=0x36;break;
        case 4:width=0x29;break;
        case 5:width=0x29;break;
        case 6:width=0x3d;break;
    }
    params.v[1]=13;params.v[2]=0;params.v[3]=1;params.v[8]=width;params.v[9]=17;params.v[5]=31;
    func_021098ac(params.v);
    params.v[1]=30;params.v[2]=0;params.v[3]=2;params.v[8]=2;params.v[9]=17;params.v[5]=width+31;
    func_021098ac(params.v);
    func_020a3bbc(0x52);
    params.v[1]=0;params.v[2]=*(s16 *)(g+0xbc)*13;params.v[3]=64;params.v[4]=13;params.v[8]=64;params.v[9]=13;params.v[5]=31;params.v[6]=6;
    func_021098ac(params.v);
}

