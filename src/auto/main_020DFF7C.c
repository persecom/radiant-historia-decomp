/* 1 function from 0x020DFF7C to 0x020E13B0 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_02160244;

extern void func_020e18b4(void);
extern void func_020e1998(void);
extern void func_020e1b00(void);
extern s16 func_020e4ad4(void);
extern void func_020a3bbc(s32);
extern void func_020e13b0(s32, s32);
extern s32 func_020e4b88(void);
extern u32 func_020e4ba8(void);
extern u32 func_020deaf0(void *, u8, u8);
extern void func_020c34c8(s32 *, s32, s32, s32, s32, s32, s32, u16);

void func_020dff7c(void) {
    u8 *p5 = 0;
    u8 *p9 = 0;
    u32 flags;
    s32 one=1;
    u8 *actor;
    s32 pos[3];
    s16 r8;

    func_020e18b4();
    func_020e1998();
    if (data_02160a74 == 0) {
        return;
    }
    flags = *(u32 *)(data_02160a74 + 0x58);
    if ((flags & 0x40000) && !(flags & 0x80)) {
        func_020e1b00();
    }
    flags = *(u32 *)(data_02160a74 + 0x58);
    if ((flags & 0x80) != 0) {
        u8 *a0 = *(u8 **)(data_02160a74 + 0xa0);
        if (a0 != 0) {
            p5 = *(u8 **)(a0 + 0);
            if (p5 != 0) {
                p9 = *(u8 **)(p5 + 8);
            }
        }
    }
    if (p5 != 0) {
        actor = *(u8 **)(p5 + 4);
    }
    if (p5 == 0 || (flags & 0x80) == 0) {
        return;
    }
    if (1) {
    r8 = func_020e4ad4();

    if (r8 >= 0 && r8 <= 11) {
        *(volatile u32 *)0x040004a4 = 0x1f00c0;
        func_020a3bbc(0x1d);
        func_020e13b0(r8,0);
    }
    if (p9 != 0) {
        u8 *p6;
        *(volatile u32 *)0x040004a4 = 0x1f00c0;
        p6 = *(u8 **)(data_02160244 + (r8<<2) + 8);
        if (p6 != 0) {
            u32 f = *(u32 *)(p9+8);
            if (f & 4) {
func_020a3bbc(0x44);
pos[1]=0x26000;
pos[2]=*(s32 *)(p6+0xc)-0x8000;
if ((u8)(data_02160a74[0x1d2]+254)<=1) {
if (data_02160a74[0x1d2]==3) pos[2]=*(s32 *)(data_02160a74 + 0x1dc);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 17;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x2a8) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[0]=(*(s32 *)(data_02160a74 + 0x1d4)-0x20000)+((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else if (data_02160a74[0x1d2]==4) {
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 30;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x398) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[0]=(*(s32 *)(data_02160a74 + 0x1d4)-0x2c000)+((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else {
if (data_02160a74[0x1d2]==1) pos[2]=*(s32 *)(data_02160a74 + 0x1dc);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 12;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x154) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[0]=(*(s32 *)(p6+4)-0x14000)+((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
}
if (data_02160a74[0x1d3] != 0) { data_02160a74[0x1d3]++; if (data_02160a74[0x1d3] > 20) data_02160a74[0x1d3]=0; }
if (data_02160a74[0x1d3]==0) func_020c34c8(pos,0,0,63,63,12,12,0x7fff);
}
else if (f & 8) {
func_020a3bbc(0x44);
pos[1]=0x26000;
pos[2]=*(s32 *)(p6+0xc)-0x8000;
if ((u8)(data_02160a74[0x1d2]+254)<=1) {
if (data_02160a74[0x1d2]==3) pos[2]=*(s32 *)(data_02160a74 + 0x1dc);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 17;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x2a8) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[0]=(*(s32 *)(data_02160a74 + 0x1d4)+0x24000)-((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else if (data_02160a74[0x1d2]==4) {
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 30;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x398) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[0]=(*(s32 *)(data_02160a74 + 0x1d4)+0x2e000)-((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else {
if (data_02160a74[0x1d2]==1) pos[2]=*(s32 *)(data_02160a74 + 0x1dc);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 12;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x154) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[0]=(*(s32 *)(p6+4)+0x14000)-((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
}
if (data_02160a74[0x1d3] != 0) { data_02160a74[0x1d3]++; if (data_02160a74[0x1d3] > 20) data_02160a74[0x1d3]=0; }
if (data_02160a74[0x1d3]==0) func_020c34c8(pos,0,0,63,63,-12,12,0x7fff);
}
else if (f & 16) {
func_020a3bbc(0x43);
pos[0]=*(s32 *)(p6+4);
pos[1]=0x26000;
if (data_02160a74[0x1d2]==1 || data_02160a74[0x1d2]==3) {
if (data_02160a74[0x1d2]==3) pos[0]=*(s32 *)(data_02160a74 + 0x1d4);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 17;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x3c0) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[2]=(*(s32 *)(data_02160a74 + 0x1dc)-0x30000)+((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else if (data_02160a74[0x1d2]==4) {
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 30;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x528) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[2]=(*(s32 *)(data_02160a74 + 0x1dc)-0x48000)+((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else {
if (data_02160a74[0x1d2]==2) pos[0]=*(s32 *)(data_02160a74 + 0x1d4);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 12;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x1e0) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[2]=(*(s32 *)(p6+12)-0x1e000)+((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
}
if (data_02160a74[0x1d3] != 0) { data_02160a74[0x1d3]++; if (data_02160a74[0x1d3] > 20) data_02160a74[0x1d3]=0; }
if (data_02160a74[0x1d3]==0) func_020c34c8(pos,0,0,63,63,12,-12,0x7fff);
}
else if (f & 32) {
func_020a3bbc(0x43);
pos[0]=*(s32 *)(p6+4);
pos[1]=0x26000;
if (data_02160a74[0x1d2]==1 || data_02160a74[0x1d2]==3) {
if (data_02160a74[0x1d2]==3) pos[0]=*(s32 *)(data_02160a74 + 0x1d4);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 17;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x3c0) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[2]=(*(s32 *)(data_02160a74 + 0x1dc)+0x30000)-((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else if (data_02160a74[0x1d2]==4) {
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 30;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x528) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[2]=(*(s32 *)(data_02160a74 + 0x1dc)+0x40000)-((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
} else {
if (data_02160a74[0x1d2]==2) pos[0]=*(s32 *)(data_02160a74 + 0x1d4);
if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 12;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x1e0) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }
pos[2]=(*(s32 *)(p6+12)+0x14000)-((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
}
if (data_02160a74[0x1d3] != 0) { data_02160a74[0x1d3]++; if (data_02160a74[0x1d3] > 20) data_02160a74[0x1d3]=0; }
if (data_02160a74[0x1d3]==0) func_020c34c8(pos,0,0,63,63,12,12,0x7fff);
}

        }
    }
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    switch (func_020e4b88()) {
    case 2: {
        s32 next;
        next=r8+3;
        if (next<=8) func_020e13b0((s16)next,one);
        next=r8+6;
        if (next<=8) func_020e13b0((s16)next,one);
        break;
    }
    case 3: {
        s32 next;
        next=r8+1;
        if (r8/3==(next)/3) func_020e13b0((s16)next,one);
        next=r8-1;
        if (r8/3==(next)/3 && next>=0) func_020e13b0((s16)next,one);
        break;
    }
    case 4: {
        s32 next;
        next=r8+3;
        if (r8%3==(next)%3 && next<9) func_020e13b0((s16)next,one);
        next=r8-3;
        if (r8%3==(next)%3) func_020e13b0((s16)next,one);
        next=r8+1;
        if (r8/3==(next)/3) func_020e13b0((s16)next,one);
        next=r8-1;
        if (r8/3==(next)/3 && next>=0) func_020e13b0((s16)next,one);
        break;
    }
    case 5:
        if (p5 != 0) {
            u8 side = **(u8 **)(actor+0x118);
            if (side == 0) {
                u16 i;
                for (i=9;i<12;i++) if (one<<i) func_020e13b0((s16)i,one);
            } else if (side == 1) {
                u16 i;
                for (i=0;i<9;i++) if (one<<i) func_020e13b0((s16)i,one);
            }
        }
        break;
    case 7: {
        u32 mask;
        u16 i;
        func_020a3bbc(0x1d);
        mask = func_020e4ba8();
        for (i=0;i<12;i++) {
            if (mask & (one<<i)) {
                u8 *p6;
                func_020e13b0((s16)i,one);
                p6=*(u8 **)(data_02160244+i*4+8);
                if (*(u32 *)(p9+8)&4) {
                    func_020a3bbc(0x44);
                    pos[1]=0x26000; pos[2]=*(s32 *)(p6+12)-0x8000;
                    if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 4;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x154) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }

                    pos[0]=(*(s32 *)(p6+4)-0x14000)+((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
                    if (data_02160a74[0x1d3] != 0) { data_02160a74[0x1d3]++; if (data_02160a74[0x1d3] > 30) data_02160a74[0x1d3]=0; }

                    if (data_02160a74[0x1d3]==0) func_020c34c8(pos,0,0,63,63,12,12,0x7fff);
                } else if (*(u32 *)(p9+8)&8) {
                    func_020a3bbc(0x44);
                    pos[1]=0x26000; pos[2]=*(s32 *)(p6+12)-0x8000;
                    if (data_02160a74[0x1d3] == 0) *(u16 *)(data_02160a74 + 0x1d0) += 1;
if (*(u16 *)(data_02160a74 + 0x1d0) > 0x154) { *(u16 *)(data_02160a74 + 0x1d0)=0; data_02160a74[0x1d3]=1; }

                    pos[0]=(*(s32 *)(p6+4)+0x14000)-((*(u16 *)(data_02160a74 + 0x1d0)/10)<<12);
                    if (data_02160a74[0x1d3] != 0) { data_02160a74[0x1d3]++; if (data_02160a74[0x1d3] > 60) data_02160a74[0x1d3]=0; }

                    if (data_02160a74[0x1d3]==0) func_020c34c8(pos,0,0,63,63,-12,12,0x7fff);
                }
            }
        }
        break;
    }

    case 8: {
        s32 next;
        next=r8-3;
        if (r8%3==(next)%3) func_020e13b0((s16)next,one);
        next=r8-2;
        if (r8/3-1==(next)/3) func_020e13b0((s16)next,one);
        next=r8+1;
        if (r8/3==(next)/3) func_020e13b0((s16)next,one);
        break;
    }
    case 9: {
        s32 next;
        s32 upperRight;
        next=r8-3;
        if (r8%3==(next)%3) func_020e13b0((s16)next,one);
        upperRight=r8-2;
        if (r8/3-1==upperRight/3) func_020e13b0((s16)upperRight,one);
        next=r8+1;
        if (r8/3==(next)/3) func_020e13b0((s16)next,one);
        next=r8+3;
        if ((next)%3==r8%3) func_020e13b0((s16)next,one);
        if (r8%3<=1 && r8/3>=1) func_020e13b0((s16)upperRight,one);
        if (r8%3<=1 && r8/3<=1) func_020e13b0((s16)(r8+4),one);
        if (r8%3>=1 && r8/3<=1) func_020e13b0((s16)(r8+2),one);
        if (r8%3>=1 && r8/3>=1) func_020e13b0((s16)(r8-4),one);
        break;
    }
    case 10: {
        s32 next;
        next=r8+1;
        if (r8/3==(next)/3) func_020e13b0((s16)next,one);
        next=r8-1;
        if (r8/3==(next)/3 && next>=0) func_020e13b0((s16)next,one);
        next=r8+3;
        if ((next)%3==r8%3 && next<9) func_020e13b0((s16)next,one);
        if (r8%3>=1 && r8/3<=1) func_020e13b0((s16)(r8+2),one);
        if (r8%3<=1 && r8/3<=1) func_020e13b0((s16)(r8+4),one);
        break;
    }
    case 11: {
        s32 next;
        func_020e13b0(r8,2);
        next=r8+1;
        if (r8/3==(next)/3 && next<9) func_020e13b0((s16)next,2);
        break;
    }
    case 12: {
        u16 i;
        for(i=9;i<12;i++) if (one<<i) func_020e13b0((s16)i,one);
        break;
    }
    case 13:
        if (r8%3==0) {func_020e13b0(0,one);func_020e13b0(3,one);func_020e13b0(6,one);}
        else if (r8%3==1) {func_020e13b0(1,one);func_020e13b0(4,one);func_020e13b0(7,one);}
        else if (r8%3==2) {func_020e13b0(2,one);func_020e13b0(5,one);func_020e13b0(8,one);}
        break;
    case 14:
        if (r8/3==0) {func_020e13b0(0,one);func_020e13b0(1,one);func_020e13b0(2,one);}
        else if (r8/3==1) {func_020e13b0(3,one);func_020e13b0(4,one);func_020e13b0(5,one);}
        else if (r8/3==2) {func_020e13b0(6,one);func_020e13b0(7,one);func_020e13b0(8,one);}
        break;
    case 15:
        if (r8/3==0) {
            func_020e13b0(0,one);func_020e13b0(1,one);func_020e13b0(2,one);
            func_020e13b0(3,one);func_020e13b0(4,one);func_020e13b0(5,one);
        } else {
            func_020e13b0(3,one);func_020e13b0(4,one);func_020e13b0(5,one);
            func_020e13b0(6,one);func_020e13b0(7,one);func_020e13b0(8,one);
        }
        break;
    case 16: {
        s32 next;
        func_020e13b0(r8,one);
        next=r8+1;
        if ((next)/3==r8/3) func_020e13b0((s16)next,one);
        next=r8-1;
        if ((next)/3==r8/3) func_020e13b0((s16)next,one);
        next=r8+3;
        if ((next)%3==r8%3 && next<9) func_020e13b0((s16)next,one);
        next=r8-3;
        if ((next)%3==r8%3) func_020e13b0((s16)next,one);
        break;
    }
    }
    if (data_02160244 != 0) {
        s32 alpha;
        s32 index;
        u32 mask;
        u16 color;
        s16 i;
        *(volatile u32 *)0x040004a4=0x1f00c0;
        func_020a3bbc(0x27);
        if (*(s16 *)(data_02160a74 + 0x168)==0) {
            *(s16 *)(data_02160a74 + 0x16a)+=1;
            if (*(s16 *)(data_02160a74 + 0x16a)>31) {
                *(s16 *)(data_02160a74 + 0x16a)=31; *(s16 *)(data_02160a74 + 0x168)=1;
            }
        } else if (*(s16 *)(data_02160a74 + 0x168)==1) {
            *(s16 *)(data_02160a74 + 0x16a)-=1;
            if (*(s16 *)(data_02160a74 + 0x16a)<0) {
                *(s16 *)(data_02160a74 + 0x16a)=0; *(s16 *)(data_02160a74 + 0x168)=0;
            }
        }
        alpha=*(s16 *)(data_02160a74 + 0x16a);
        index=func_020e4ad4();
        if (actor==0) return;
        mask=func_020deaf0(*(void **)(data_02160a74+0xc0),(u8)index,**(u8 **)(actor+0x118));
        color=alpha|0x7fe0;
        for(i=0;i<12;i++) {
            u8 *p=*(u8 **)(data_02160244+i*4+8);
            if (p!=0) {
                pos[0]=*(s32 *)(p+4); pos[1]=0x22000; pos[2]=*(s32 *)(p+12);
                if (mask&(one<<i)) func_020c34c8(pos,0,0,63,63,17,24,0x2a1f);
                else func_020c34c8(pos,0,0,63,63,17,24,color);
            }
        }
    }
}
}
