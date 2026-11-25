/* 8 functions from 0x0205317C to 0x02054118 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02155984,*data_02160204;
extern s16 data_0213a394[];
int func_0205428c(void *);
int func_02054800(void *);
int func_02054a94(void *);
void func_0205530c(void *);
u16 func_020ddc8c(void *,void *);
int func_020ef4c8(void *);
void func_0205440c(void *,int);

extern s32 func_02054e14(void *);
extern s32 func_020552e4(void *);
typedef struct { s32 x, y, z; } Vec3_0205366c;
extern u8 *data_021600ac;
extern s32 func_0210c2f4(void *, void *);
extern void func_02052240(void *);
extern s32 func_02054330(void *);
extern s32 func_020541d8(void *);
extern void func_02054d5c(void *);
extern void func_020546c0(void *, s32);
extern void func_02055564(void *, s32);
extern void func_020477dc(void *, s32, s32);

void func_0205317c(u8 *p){
u8 *ctx=*(u8 **)(p+0xd0);int three=3,zero=0;
if(*(u16 *)(ctx+0x26)==22||*(u16 *)(ctx+0x26)==201)return;
if(!func_02054330(p)){if(func_0205428c(p)){ctx[1]=2;func_02054d5c(p);}else{ctx[1]=1;func_020477dc(p,2,1);}return;}
if(ctx[0xd])return;
switch(*(u16 *)(ctx+0x26)){
case 12:if(func_02054800(p)==1){*(u16 *)(ctx+4)=zero;*(u16 *)(ctx+6)=zero;ctx[1]=5;}break;
case 13:func_0205530c(p);break;
case 14:if(func_02054a94(p)==1){*(u16 *)(ctx+4)=zero;*(u16 *)(ctx+6)=zero;ctx[1]=5;}break;
case 32:case 33:case 34:
if(*(u16 *)(ctx+6)==0){
u16 angle=func_020ddc8c(*(void **)(data_021600ac+0x68),p);
if((u16)(angle+(u16)*(s32 *)(data_02155984+0x94))<0x8000){
*(s32 *)p=*(s32 *)(p+0x18)+data_0213a394[((*(s32 *)(data_02155984+0x94)+0x3ffc)%65536>>4)*2]*112;
*(s32 *)(p+8)=*(s32 *)(p+0x20)+data_0213a394[((*(s32 *)(data_02155984+0x94)+0x3ffc)%65536>>4)*2+1]*112;
}else{
*(s32 *)p=*(s32 *)(p+0x18)+data_0213a394[((*(s32 *)(data_02155984+0x94)+0xbff4)%65536>>4)*2]*112;
*(s32 *)(p+8)=*(s32 *)(p+0x20)+data_0213a394[((*(s32 *)(data_02155984+0x94)+0xbff4)%65536>>4)*2+1]*112;
}
*(s32 *)(p+4)=func_020ef4c8(p+0x18);*(s32 *)(ctx+0x10)=*(s32 *)(p+4);
*(s32 *)(ctx+0x14)=0xc000;func_0205440c(p,1);
*(u32 *)(p+0xac)&=~1;*(Vec3_0205366c *)(p+0x24)=*(Vec3_0205366c *)(p+0x18);
*(u16 *)(ctx+6)=1;
}else if(*(u16 *)(ctx+0x26)==34){if(func_02054a94(p)==1){*(u16 *)(ctx+4)=zero;ctx[1]=three;}}
else if(func_02054800(p)==1){*(u16 *)(ctx+4)=zero;ctx[1]=three;}break;
case 42:case 43:case 44:
if(*(u16 *)(ctx+6)==0){
s32 y=*(s32 *)(p+4)+0x60000;
*(s32 *)p=*(s32 *)(p+0x18);*(s32 *)(p+4)=y;*(s32 *)(p+8)=*(s32 *)(p+0x20);
func_0205440c(p,1);*(u32 *)(p+0xac)&=~1;*(s32 *)(ctx+0x10)=func_020ef4c8(p);*(u16 *)(ctx+6)=1;
}else if(*(u16 *)(ctx+0x26)==42){if(func_02054800(p)==1){*(u16 *)(ctx+4)=zero;ctx[1]=three;}}
else if(*(u16 *)(ctx+0x26)==44){if(func_02054a94(p)==1){*(u16 *)(ctx+4)=zero;ctx[1]=three;}}
else func_0205530c(p);break;
case 101:case 102:case 103:case 104:
if(*(u16 *)(ctx+6)==0){
u8 *q=*(u8 **)(data_02160204+0xe8);
while(q){
if(*(u8 **)(q+0xd0)&&q!=p){
if(func_0210c2f4(p,q)<(*(u16 *)(ctx+0x22)<<12)){
u8 *other=*(u8 **)(q+0xd0);
if(other[0x25]==71||other[0x25]==81){other[1]=three;*(Vec3_0205366c *)q=*(Vec3_0205366c *)p;}
}}
q=*(u8 **)(q+0x134);
}
*(u16 *)(ctx+6)=1;
}else if(*(u16 *)(ctx+0x26)==102){if(func_02054800(p)==1){*(u16 *)(ctx+4)=zero;*(u16 *)(ctx+6)=zero;ctx[1]=5;}}
else if(*(u16 *)(ctx+0x26)==104){if(func_02054a94(p)==1){*(u16 *)(ctx+4)=zero;*(u16 *)(ctx+6)=zero;ctx[1]=5;}}
else if(*(u16 *)(ctx+0x26)==103)func_0205530c(p);break;
case 51:break;case 52:break;case 53:break;case 61:break;case 71:break;case 72:break;case 81:break;case 91:break;case 92:break;case 111:break;case 121:break;case 122:break;case 131:break;case 62:break;case 73:break;case 82:break;case 83:break;case 93:break;case 112:break;case 123:break;case 132:break;
}
}

void func_0205366c(u8 *arg0) {
    u8 *r5 = *(u8 **)(arg0 + 0xd0);

    switch (r5[0x28]) {
        case 0:
            if (func_0210c2f4(arg0, *(void **)(data_021600ac + 0x68)) > 0x80000 ||
                func_0210c2f4(arg0 + 0x18, *(void **)(data_021600ac + 0x68)) > 0x80000) {
                *(Vec3_0205366c *)arg0 = *(Vec3_0205366c *)(arg0 + 0x18);
                func_02052240(arg0);
                r5[1] = 1;
                if (*(u16 *)(r5 + 0x26) == 0x20 || *(u16 *)(r5 + 0x26) == 0x21 ||
                    *(u16 *)(r5 + 0x26) == 0x2a || *(u16 *)(r5 + 0x26) == 0x2b) {
                    *(u16 *)(r5 + 6) = 0;
                }
            } else {
                r5[1] = 1;
            }
            break;

        case 1:
            if (func_02054330(arg0) != 0) {
                r5[1] = 3;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                return;
            }
            if (func_020541d8(arg0) != 0) {
                r5[1] = 2;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                func_02054d5c(arg0);
                return;
            }
            if (r5[8] == 0) {
                if (r5[0xb] == 0) {
                    *(Vec3_0205366c *)(arg0 + 0x24) = *(Vec3_0205366c *)(arg0 + 0x18);
                } else {
                    func_020546c0(arg0, *(u16 *)(r5 + 0x1c) / 3);
                }
                r5[0xb] = (u8)(r5[0xb] + 1) % 3;
            }
            func_02055564(arg0, r5[0x19]);
            if (func_0210c2f4(arg0, arg0 + 0x18) < (r5[0x19] << 12)) {
                func_020477dc(arg0, 2, 1);
                r5[1] = 1;
            }
            if (r5[8] == 0) {
                r5[1] = 1;
            }
            break;
    }
}

extern u8 *data_02160200;
extern void func_02052844(void *, s32, s32);
extern void func_02053fdc(void *);
extern void func_02054118(void *);
extern void func_02054018(void *);
void func_02053824(u8 *p) {
    u8 *ctx = *(u8 **)(p + 0xd0);
    u8 *g = data_02160200;
    int zero = 0, two = 2, one = 1;

    if (*(u32 *)(g + 0x160) & 0x400) return;
    if (*(u16 *)(p + 0x8e) == 0x1f5) return;

    if (ctx[0x25] == 0x51 && *(u16 *)(ctx + 6) == two) {
        if (ctx[0x25] == 0x47 && *(u16 *)(ctx + 6) == two) {
            if (ctx[0x25] != 0x16 && ctx[0x25] != 0x15) {
                if (ctx[0xd] == 1) {
                    *(u32 *)(ctx + 0x10) = *(u32 *)(p + 4);
                    *(u32 *)(ctx + 0x14) = 0x8000;
                    ctx[0xd] = two;
                    func_02052844(p, zero, -1);
                    func_02052844(p, zero, zero);
                } else {
                    *(u32 *)(p + 4) += *(u32 *)(ctx + 0x14);
                    *(u32 *)(ctx + 0x14) -= 0x1700;
                    if (*(s32 *)(p + 4) <= *(s32 *)(ctx + 0x10)) {
                        *(u32 *)(p + 4) = *(u32 *)(ctx + 0x10);
                        ctx[0xd] = zero;
                        *(u32 *)(ctx + 0x14) = 0;
                    }
                }
            }
        }
    }

    switch (*(u16 *)(ctx + 0x26)) {
    case 0x16:
        if (*(u16 *)(ctx + 6) == one) {
            u32 val = *(u32 *)(ctx + 0x14);
            *(u32 *)(p + 4) += val;
            *(u32 *)(ctx + 0x14) = val - 0x1700;
            if (*(s32 *)(p + 4) <= *(s32 *)(ctx + 0x10)) {
                *(u32 *)(p + 4) = *(u32 *)(ctx + 0x10);
                ctx[0xd] = zero;
                func_0205440c(p, one);
                *(u16 *)(ctx + 6) = two;
            }
        }
        return;
    case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e:
    case 0x2f: case 0x30: case 0x31: case 0x32: case 0x33: case 0x34: case 0x35:
        if (*(u16 *)(ctx + 6) == one) {
            u32 val = *(u32 *)(ctx + 0x14);
            *(u32 *)(p + 4) += val;
            *(u32 *)(ctx + 0x14) = val - 0x1700;
            if (*(s32 *)(p + 4) <= *(s32 *)(ctx + 0x10)) {
                *(u32 *)(p + 4) = *(u32 *)(ctx + 0x10);
                func_0205440c(p, one);
                *(u16 *)(ctx + 6) = two;
            }
        }
        return;
    case 0x20: case 0x21: case 0x22: case 0x3d: case 0x3e: case 0x49:
    case 0x51: case 0x5c: case 0x65: case 0x66: case 0x70: case 0x7a:
    case 0x83: case 0x85:
        return;
    case 0xc9:
        if (*(u16 *)(ctx + 6) == zero) {
            func_02052844(p, zero, zero);
            *(u16 *)(ctx + 6) = one;
            func_02053fdc(ctx);
            func_02054118(p);
            func_02054018(p);
        }
        return;
    }
}

void func_02053d90(u8 *arg0) {
    u8 *r5 = *(u8 **)(arg0 + 0xd0);

    switch (r5[0x28]) {
        case 0:
            if (func_0210c2f4(arg0, *(void **)(data_021600ac + 0x68)) > 0x80000 ||
                func_0210c2f4(arg0 + 0x18, *(void **)(data_021600ac + 0x68)) > 0x80000) {
                *(Vec3_0205366c *)arg0 = *(Vec3_0205366c *)(arg0 + 0x18);
                func_02052240(arg0);
                r5[1] = 1;
                if (*(u16 *)(r5 + 0x26) == 0x20 || *(u16 *)(r5 + 0x26) == 0x21 ||
                    *(u16 *)(r5 + 0x26) == 0x2a || *(u16 *)(r5 + 0x26) == 0x2b) {
                    *(u16 *)(r5 + 6) = 0;
                }
            } else {
                r5[1] = 1;
            }
            break;

        case 1:
            if (r5[0] >= 90) {
            if (func_02054330(arg0) != 0) {
                r5[1] = 3;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                r5[0] = 0;
                return;
            }
            if (func_020541d8(arg0) != 0) {
                r5[1] = 2;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                r5[0] = 0;
                func_02054d5c(arg0);
                return;
            }
            }
            if (r5[8] == 0) {
                if (r5[0xb] == 0) {
                    *(Vec3_0205366c *)(arg0 + 0x24) = *(Vec3_0205366c *)(arg0 + 0x18);
                } else {
                    func_020546c0(arg0, *(u16 *)(r5 + 0x1c) / 3);
                }
                r5[0xb] = (u8)(r5[0xb] + 1) % 3;
            }
            func_02055564(arg0, r5[0x19]);
            if (func_0210c2f4(arg0, arg0 + 0x18) < (r5[0x19] << 12)) {
                func_020477dc(arg0, 2, 1);
                r5[1] = 1;
            }
            if (r5[8] == 0) {
                r5[1] = 1;
            }
            break;
    }
    if (r5[0] <= 150) r5[0]++;
}

