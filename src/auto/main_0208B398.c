/* 3 functions from 0x0208B398 to 0x0208C250 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Draw_0208bda0;
typedef struct { s16 x,y,z; } Pos_0208bda0;
extern const Draw_0208bda0 data_02140e3c, data_02140d88;
extern const Draw_0208bda0 data_02140e28, data_02140e14, data_02140e00, data_02140dec, data_02140dd8, data_02140dc4, data_02140d38;
extern void func_0208c250(s32, s32);
extern void func_0208bff0(s32, s32, s32, s32);
extern void func_0208bda0(s32, s16, s16, Pos_0208bda0, s16);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern const Draw_0208bda0 data_02140d74;
extern u8 *data_021600b0;
typedef struct { s32 mode; s16 counter; s8 flags; u8 pad[5]; } Entry_0208bff0;
typedef struct { u8 pad[0x200]; Entry_0208bff0 entries[2]; } State_0208bff0;
extern void func_020922bc(s32,s32,s32,s32,s32,s32,s32,s32);

void func_0208b398(Pos_0208bda0 pos, s32 arg1) {
    s32 px = pos.x;
    s32 startCol = (-px) / 40;
    u8 *p = data_021600b0;
    s32 endCol;
    s32 py;
    s32 row, col, k;
    Draw_0208bda0 d_bc = data_02140e28;
    Draw_0208bda0 d_a8 = data_02140e14;
    Draw_0208bda0 d_94;
    Draw_0208bda0 d_80;
    Draw_0208bda0 d_6c;
    Draw_0208bda0 d_58;
    Draw_0208bda0 d_30;

    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_020a3bbc(0);
    d_94 = data_02140e00;
    d_94.v[5] = *(s16 *)(p + 0x1cc);
    d_94.v[6] = *(s16 *)(p + 0x1ce);
    d_94.v[7] += 2;
    func_021098ac(&d_94);

    func_0208bff0(1, 0x10e, 0xa3, 0xae);

    *(s32 *)(p + 0x224) = 1;
    if (pos.x == 0) {
        *(s32 *)(p + 0x224) = 0;
    }
    *(s32 *)(p + 0x230) = 1;
    if (startCol + (*(s8 *)(p + 0x1fa) + 1) > *(s16 *)(p + 0x1f8)) {
        *(s32 *)(p + 0x230) = 0;
    }
    func_0208c250(*(s32 *)(p + 0x230), *(s32 *)(p + 0x224));

    d_80 = data_02140dec;
    if (*(s8 *)(p + 0x21e) & 2) {
        func_020a3bbc(0x20);
    } else {
        func_020a3bbc(0x1f);
    }
    func_021098ac(&d_80);

    d_6c = data_02140dd8;
    d_58 = data_02140dc4;
    func_020a3bbc(0x19);
    func_021098ac(&d_6c);
    func_020a3bbc(4);

    d_58.v[1] = (*(u8 *)(p + 0x1f2) % 10) * 7;
    d_58.v[5] = 0x11;
    d_58.v[6] = 0xa9;
    func_021098ac(&d_58);

    d_58.v[1] = (*(s16 *)(p + 0x1f0) % 10) * 7;
    d_58.v[5] = 0x2b;
    d_58.v[6] = 0xb3;
    func_021098ac(&d_58);

    if (*(u8 *)(p + 0x1f2) >= 10) {
        d_58.v[1] = ((*(u8 *)(p + 0x1f2) / 10) % 10) * 7;
        d_58.v[5] = 0xa;
        d_58.v[6] = 0xa9;
        func_021098ac(&d_58);
    }
    if (*(s16 *)(p + 0x1f0) >= 10) {
        d_58.v[1] = ((*(s16 *)(p + 0x1f0) / 10) % 10) * 7;
        d_58.v[5] = 0x24;
        d_58.v[6] = 0xb3;
        func_021098ac(&d_58);
    }
    if (*(u8 *)(p + 0x1f2) >= 100) {
        d_58.v[1] = ((*(u8 *)(p + 0x1f2) / 100) % 10) * 7;
        d_58.v[5] = 3;
        d_58.v[6] = 0xa9;
        func_021098ac(&d_58);
    }
    if (*(s16 *)(p + 0x1f0) >= 100) {
        d_58.v[1] = ((*(s16 *)(p + 0x1f0) / 100) % 10) * 7;
        d_58.v[5] = 0x1d;
        d_58.v[6] = 0xb3;
        func_021098ac(&d_58);
    }

    startCol--;
    if (startCol < 0) {
        startCol = 0;
    }
    endCol = startCol + 8;
    if (endCol >= *(s16 *)(p + 0x1f8)) {
        endCol = *(s16 *)(p + 0x1f8) + 1;
    }

    py = pos.y;
    d_30 = data_02140d38;
    for (row = 0; row < 5; row++) {
        for (col = startCol; col < endCol; col++) {
            u8 *node = p + (col * 5 + row) * 0x28;
            if (*(s16 *)(node + 0x246) == -1) {
                continue;
            }
            if (!(*(s16 *)(node + 0x24e) & 0x40)) {
                continue;
            }

            d_bc.v[5] = px + (*(s16 *)(node + 0x23c) * 40 + 12);
            d_bc.v[6] = py + (*(s8 *)(node + 0x23e) * 28 + 91);
            d_a8.v[8] = 8;
            d_a8.v[5] = d_bc.v[5] + 8;
            d_a8.v[6] = d_bc.v[6] + 7;

            if (arg1 == *(s16 *)(node + 0x246)) {
                Draw_0208bda0 d_44 = d_30;
                d_44.v[5] = d_bc.v[5] - 6;
                d_44.v[6] = d_bc.v[6] - 7;
                func_020a3bbc(0x12);
                func_021098ac(&d_44);
            }

            switch (*(s8 *)(node + 0x23a)) {
            case 1:
            case 6:
                if (d_bc.v[5] + d_bc.v[8] > 0 && d_bc.v[5] < 256) {
                    d_bc.v[5] += 1;
                    d_bc.v[8] = 0x14;
                    d_bc.v[9] = 0x15;
                    d_bc.v[6] -= 1;
                    d_bc.v[4] = d_bc.v[9];
                    d_bc.v[3] = d_bc.v[8];
                    func_020a3bbc(8);
                    func_021098ac(&d_bc);
                }
                break;
            case 2:
            case 7:
                if (d_bc.v[5] + d_bc.v[8] > 0 && d_bc.v[5] < 256) {
                    d_bc.v[5] += 1;
                    d_bc.v[8] = 0x14;
                    d_bc.v[9] = 0x15;
                    d_bc.v[6] -= 3;
                    d_bc.v[4] = d_bc.v[9];
                    d_bc.v[3] = d_bc.v[8];
                    func_020a3bbc(0xb);
                    func_021098ac(&d_bc);
                }
                break;
            case 3:
                if (d_bc.v[5] + d_bc.v[8] > 0 && d_bc.v[5] < 256) {
                    d_bc.v[5] += 1;
                    d_bc.v[8] = 0x11;
                    d_bc.v[9] = 0x10;
                    d_bc.v[6] += 1;
                    d_bc.v[4] = d_bc.v[9];
                    d_bc.v[3] = d_bc.v[8];
                    func_020a3bbc(0xc);
                    func_021098ac(&d_bc);
                }
                break;
            case 4:
                if (d_bc.v[5] + d_bc.v[8] > 0 && d_bc.v[5] < 256) {
                    d_bc.v[8] = 0x14;
                    d_bc.v[9] = 0x15;
                    d_bc.v[6] -= 2;
                    d_bc.v[4] = d_bc.v[9];
                    d_bc.v[3] = d_bc.v[8];
                    func_020a3bbc(0xd);
                    func_021098ac(&d_bc);
                }
                break;
            case 5:
                if (d_bc.v[5] + d_bc.v[8] > 0 && d_bc.v[5] < 256) {
                    d_bc.v[8] = 0x14;
                    d_bc.v[9] = 0x14;
                    d_bc.v[6] -= 2;
                    d_bc.v[4] = d_bc.v[9];
                    d_bc.v[3] = d_bc.v[8];
                    func_020a3bbc(0xe);
                    func_021098ac(&d_bc);
                }
                break;
            case 8:
                if (d_bc.v[5] + d_bc.v[8] > 0 && d_bc.v[5] < 256) {
                    d_bc.v[8] = 0x14;
                    d_bc.v[9] = 0x14;
                    d_bc.v[6] -= 2;
                    d_bc.v[4] = d_bc.v[9];
                    d_bc.v[3] = d_bc.v[8];
                    func_020a3bbc(0xf);
                    func_021098ac(&d_bc);
                }
                break;
            case 9:
                if (d_a8.v[5] + d_a8.v[8] > 0 && d_a8.v[5] < 256) {
                    d_a8.v[1] = (*(s8 *)(node + 0x23a) - 9) * 8 + 16;
                    func_020a3bbc(0x10);
                    func_021098ac(&d_a8);
                }
                break;
            case 10:
                d_a8.v[1] = (*(s8 *)(node + 0x23a) - 9) * 8 + 16;
                d_a8.v[5] = px + (*(s16 *)(node + 0x23c) * 40 + 16);
                d_a8.v[6] = py + (*(s8 *)(node + 0x23e) * 28 + 94);
                if (d_a8.v[5] + d_a8.v[8] > 0 && d_a8.v[5] < 256) {
                    func_020a3bbc(0x10);
                    func_021098ac(&d_a8);
                }
                break;
            case 11:
                d_a8.v[1] = (*(s8 *)(node + 0x23a) - 9) * 8 + 16;
                d_a8.v[5] -= 4;
                if (d_a8.v[5] + d_a8.v[8] > 0 && d_a8.v[5] < 256) {
                    func_020a3bbc(0x10);
                    func_021098ac(&d_a8);
                }
                break;
            case 12:
                if (d_a8.v[5] + d_a8.v[8] > 0 && d_a8.v[5] < 256) {
                    d_a8.v[1] = (*(s8 *)(node + 0x23a) - 9) * 8 + 16;
                    d_a8.v[6] -= 4;
                    func_020a3bbc(0x10);
                    func_021098ac(&d_a8);
                }
                break;
            case 13:
                d_a8.v[5] -= 3;
                d_a8.v[6] -= 2;
                d_a8.v[1] = 0;
                d_a8.v[8] = 10;
                if (d_a8.v[5] + d_a8.v[8] > 0 && d_a8.v[5] < 256) {
                    func_020a3bbc(0x10);
                    func_021098ac(&d_a8);
                }
                break;
            }

            for (k = 0; k < 3; k++) {
                if (*(s16 *)(node + 0x24e) & (1 << k)) {
                    s16 flag = (*(s16 *)(node + 0x24e) & (1 << (k + 3))) ? 1 : 0;
                    func_0208bda0((u8)k, *(s16 *)(node + 0x23c), *(s8 *)(node + 0x23e), pos, flag);
                }
            }
        }
    }
}

void func_0208bda0(s32 mode, s16 x, s16 y, Pos_0208bda0 pos, s16 arg5) {
s16 py=pos.y;
Draw_0208bda0 a=data_02140e3c;
Draw_0208bda0 b=data_02140d88;
func_020a3bbc(16);
switch(mode) {
case 0:
b.v[1]+=(s16)((1-arg5)*4);
b.v[5]=pos.x+(x*40+20);
b.v[6]=py+((y-1)*28+98);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
case 1:
a.v[2]-=(s16)((1-arg5)*4);
a.v[5]=pos.x+(x*40+27);
a.v[6]=py+(y*28+98);
if(a.v[5]+a.v[8]<=0) return;
if(a.v[5]>=256) return;
func_021098ac(&a); break;
case 2:
b.v[1]+=(s16)((1-arg5)*4);
b.v[5]=pos.x+(x*40+20);
b.v[6]=py+(y*28+98);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
}
}

void func_0208bff0(s32 index,s32 start,s32 end,s32 y) {
Draw_0208bda0 d=data_02140d74;
u8 *p=data_021600b0;
s16 x;
*(s8*)(p+0x206+index*12)&=~1;
x=start+(end-start)* *(s16*)(p+0x204+index*12)/7;
if(*(s32*)(p+0x200+index*12)==1) {
if(*(s16*)(p+0x204+index*12)<7) ++*(s16*)(p+0x204+index*12);
else *(s8*)(p+0x206+index*12)|=1;
} else if(*(s32*)(p+0x200+index*12)==0) {
if(*(s16*)(p+0x204+index*12)>0) --*(s16*)(p+0x204+index*12);
}
s8 *flags=(s8*)(p+0x206);
if((flags[index*12]&2)||(flags[index*12]&4)) func_020922bc(34,x,y,86,16,32,16,55);
else func_020922bc(33,x,y,86,16,32,16,55);
if((flags[index*12]&2)||(flags[index*12]&4)) func_020a3bbc(36); else func_020a3bbc(35);
if(index==0) {d.v[2]=0;d.v[1]=0;}
else if(index==1) {d.v[1]=12;d.v[2]=11;}
d.v[3]=12;d.v[4]=11;
d.v[5]=x+2; s32 py=y+2; d.v[6]=py;
d.v[7]=56; d.v[8]=12; d.v[9]=11;
func_021098ac(&d);
if((flags[index*12]&2)||(flags[index*12]&4)) func_020a3bbc(20); else func_020a3bbc(19);
if(index==0) {d.v[1]=58;d.v[3]=57;d.v[5]=x+20;d.v[8]=57;}
else if(index==1) {d.v[1]=8;d.v[3]=45;d.v[5]=x+18;d.v[8]=45;}
d.v[2]=12;d.v[4]=12;d.v[6]=py;d.v[7]=56;d.v[9]=12;
func_021098ac(&d);
if(flags[index*12]&4) flags[index*12]&=~4;
}

