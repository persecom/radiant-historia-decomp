/* 8 functions from 0x02058A08 to 0x02059888 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 x,y,z; } Vec3_02059888;
extern u8 *data_02160204;
extern void *func_020bf308(s32);
extern void func_020bf344(void *, Vec3_02059888 *, Vec3_02059888 *, s32);
extern u8 *data_021600bc;
extern s32 data_02162884[],data_02162814[];
extern u8 *func_02044f70(void);
extern void func_02044f80(void);
extern u8 *func_020f0a5c(s32);
extern u8 *func_020f0aa4(s32);
extern void func_020f0154(s32);
extern void func_020f0898(Vec3_02059888,s32,u16);
extern void func_020bebc8(u16);
extern void func_020bec04(u16);
extern void func_020bec90(u16);
extern void func_020bedb4(u8 *, s32, u16, u16, s32, s32);
extern u8 *func_020befb4(void);
extern void func_0210d27c(s32);
extern void func_020468e0(u8);
extern u8 *data_02160af0;
extern u8 *data_0216020c;
extern u8 *data_021600ac;

extern s32 func_020bf3a0(void *, f32);
extern void func_020bf330(void *);
extern s32 *func_020bed24(void);
extern s32 func_020bf118(s32 *, u8 *, s32, f32);
extern void func_020befc4(void *);
extern void func_020bed54(s32, s32);
extern u8 *func_020bed94(void);
extern s32 func_020bedf8(void);
extern u8 *func_020becfc(void);
void func_020befd8(void *,void *,s32);
void func_02058a08(void) {
 Vec3_02059888 points[4];
 u8 *obj,*p,*node=0;
 s32 one=1;
 switch(*(u16 *)(data_0216020c+0xbe)){
 case 0:
 *(s32*)(data_0216020c+148)=0;
 *(s32*)(*(u8* volatile*)&data_0216020c+152)=0x15a000;
 *(s32*)(*(u8* volatile*)&data_0216020c+0)=0xbe000;
 *(s32*)(*(u8* volatile*)&data_0216020c+16)=0;
 *(s32*)(*(u8* volatile*)&data_0216020c+8)=0x17c000;
 *(u16*)(*(u8* volatile*)&data_0216020c+142)=1495;
 *(s32*)(*(u8* volatile*)&data_0216020c+128)=160;
 *(s32*)(*(u8* volatile*)&data_0216020c+132)=29;
 *(s32*)(*(u8* volatile*)&data_0216020c+172)=0;
 *(s32*)(*(u8* volatile*)&data_0216020c+180)=0;
 *(s32*)(*(u8* volatile*)&data_0216020c+176)=0;
 func_020bec90(*(u16 *)(data_0216020c+0x8e));
 func_020bebc8((u16)*(s32 *)(data_0216020c+0x80));
 func_020bec04((u16)*(s32 *)(data_0216020c+0x84));
 data_0216020c[0xd8]=one;
 func_020bed24()[0]=0x77000;func_020bed24()[1]=0xe1000;func_020bed24()[2]=-0x3a3000;
 func_020beda0(func_020bed94());func_020befc4(func_020befb4());
 points[0].x=119;points[0].y=225;points[0].z=-931;
 points[1].x=40;points[1].y=380;points[1].z=-900;
 points[2].x=120;points[2].y=450;points[2].z=-880;
 points[3].x=-259;points[3].y=719;points[3].z=-850;
 func_020befd8(func_020befb4(),points,700);
 obj=func_020f0a5c(0x3e4);obj[0x45]=2;
 func_020f0154(0x2764);func_020f0898(*(Vec3_02059888*)(obj+4),0x2764,0x1f5);
 obj=func_020f0aa4(0x1f5);*(u32*)(obj+20)|=0x11;
 goto next;
 loop:
 if(*(u16*)(node+0x90)==0x1f5){*(s32*)(node+0)=0x10f000;*(s32*)(node+4)=0x43000;*(s32*)(node+8)=0xf7000;}
 if(*(u16*)(node+0x90)==0x1f6){*(s32*)(node+0)=0xa4000;*(s32*)(node+4)=0x4d000;*(s32*)(node+8)=0xed000;}
 next:
 node=node ? *(u8**)(node+*(u16*)(data_021600bc+0x6e)+4):*(u8**)(data_021600bc+0x64);
 if(node)goto loop;
 *(s16 *)(data_0216020c+0xba)=0;
 *(u16 *)(*(u8* volatile*)&data_0216020c+0xbe)=4;
 func_020bed54(4,1);break;
 case 2:obj=func_020f0aa4(0x1f5);*(u32 *)(obj+20)|=0x11;func_02109828();*(u16 *)(data_0216020c+0xbe)=one;break;
 case 3:*(s16 *)(data_0216020c+0xba)=0;*(u16 *)(*(u8* volatile*)&data_0216020c+0xbe)=4;break;
 case 4:func_020468e0(one);*(u16 *)(data_0216020c+0xbe)=7;break;
 case 5:
 ++*(s16 *)(data_0216020c+0xba);
 p=*(u8* volatile*)&data_0216020c;
 if(*(s16 *)(p+0xba)>60)*(s16 *)(p+0xba)=60;
 p=data_0216020c;
 data_02162884[0]=(*(s16 *)(p+0xba)*16)/60-16;
 data_02162814[0]=(*(s16 *)(p+0xba)*16)/60-16;
 if(*(s16 *)(p+0xba)==60){*(s16 *)(p+0xba)=0;*(u16 *)(*(u8* volatile*)&data_0216020c+0xbe)=2;}break;
 case 6:data_02160204[0x11f]=data_0216020c[0xc1];*(s32 *)(data_021600ac+0xc)=one;data_02160204[0xd8]=18;break;
 case 7:func_020f0a5c(0x3e4)[0x45]=one;*(u16 *)(data_0216020c+0xbe)=5;break;
 }
}

void func_02058e08(void) {
u8 *node=0; u8 *state=func_02044f70(); u8 *obj;
switch(*(u32*)(state+16)){
case 0:
*(s32*)(*(u8* volatile*)&data_0216020c+148)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+152)=1417216;
*(s32*)(*(u8* volatile*)&data_0216020c+0)=778240;
*(s32*)(*(u8* volatile*)&data_0216020c+16)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+8)=1556480;
*(u16*)(*(u8* volatile*)&data_0216020c+142)=1495;
*(s32*)(*(u8* volatile*)&data_0216020c+128)=160;
*(s32*)(*(u8* volatile*)&data_0216020c+132)=29;
*(s32*)(*(u8* volatile*)&data_0216020c+172)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+180)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+176)=0;
obj=func_020f0a5c(0x3e4);func_020f0154(0x2764);func_020f0898(*(Vec3_02059888*)(obj+4),0x2764,0x1f5);
obj=func_020f0aa4(0x1f5);*(u32*)(obj+20)|=0x11;
if(*(u8**)(*(u8**)obj+0x100)) **(s32**)(*(u8**)obj+0x100)=0x320000;
func_020bed54(1,1);
*(s16*)(data_0216020c+0xba)=0;*(u32*)(state+16)=4;
*(u8*)(data_0216020c+0xd8)=1;
func_020bebc8((u16)*(u32*)(data_0216020c+0x80));
func_020bec04((u16)*(u32*)(data_0216020c+0x84));
func_020bec90(*(u16*)(data_0216020c+0x8e));
goto next;
loop:
*(s32*)(node+0)=0xd3000;*(s32*)(node+4)=0xa000;*(s32*)(node+8)=0xc1000;
if(*(u16*)(node+0x90)==0x1f5){*(s32*)(node+0)=0x10f000;*(s32*)(node+4)=0x43000;*(s32*)(node+8)=0xf7000;}
if(*(u16*)(node+0x90)==0x1f6){*(s32*)(node+0)=0xa4000;*(s32*)(node+4)=0x4d000;*(s32*)(node+8)=0xed000;}
next:
node = node ? *(u8**)(node+*(u16*)(data_021600bc+0x6e)+4) : *(u8**)(data_021600bc+0x64);
if(node) goto loop;
func_020468e0(1);break;
case 2:*(u32*)(data_021600ac+16)=7;*(u32*)(state+16)=1;break;
case 3:*(s16*)(data_0216020c+0xba)=30;*(u32*)(state+16)=4;break;
case 4:func_020468e0(0);*(u32*)(data_021600ac+16)=12;*(u32*)(state+16)=5;break;
case 5:
++*(s16*)(*(u8* volatile*)&data_0216020c+0xba);
obj=*(u8* volatile*)&data_0216020c;
if(*(s16*)(obj+0xba)>30) *(s16*)(obj+0xba)=30;
obj=data_0216020c;
data_02162884[0]=(*(s16*)(obj+0xba)*16)/30-16;
data_02162814[0]=(*(s16*)(obj+0xba)*16)/30-16;
if(*(s16*)(obj+0xba)==30){*(s16*)(obj+0xba)=0;*(u32*)(state+16)=2;}
break;
case 6:func_02044f80();*(u32*)(state+16)=1;break;
}
}

void func_02059128(void){
Vec3_02059888 points[4];
u8 *obj,*p;
s32 one=1;
switch(*(u16 *)(data_0216020c+0xbe)){
case 0:
*(s32*)(data_0216020c+148)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+152)=0x15a000;
*(s32*)(*(u8* volatile*)&data_0216020c+0)=0xbe000;
*(s32*)(*(u8* volatile*)&data_0216020c+16)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+8)=0x17c000;
*(u16*)(*(u8* volatile*)&data_0216020c+142)=1495;
*(s32*)(*(u8* volatile*)&data_0216020c+128)=160;
*(s32*)(*(u8* volatile*)&data_0216020c+132)=29;
*(s32*)(*(u8* volatile*)&data_0216020c+172)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+180)=0;
*(s32*)(*(u8* volatile*)&data_0216020c+176)=0;
data_0216020c[0xd8]=one;
points[0].x=211;points[0].y=10;points[0].z=193;points[1].x=247;points[1].y=252;points[1].z=612;
func_020bf344(func_020bf308(0),&points[0],&points[1],150);
points[0].x=-126;points[0].y=354;points[0].z=-931;points[1].x=-126;points[1].y=488;points[1].z=-931;
func_020bf344(func_020bf308(one),&points[0],&points[1],60);
func_020bed24()[0]=-0x7e000;
func_020bed24()[1]=0x162000;
func_020bed24()[2]=-0x3a3000;
obj=func_020f0a5c(0x3e4);func_020f0154(0x2764);func_020f0898(*(Vec3_02059888*)(obj+4),0x2764,0x1f5);
obj=func_020f0aa4(0x1f5);*(u32*)(obj+20)|=0x11;
p=*(u8 **)(*(u8 **)obj+0x100);if(p) *(s32 *)p=0x320000;
data_02162884[0]=0;data_02162814[0]=0;
*(s32 *)(func_020becfc()+0x100)=200;
*(u16 *)(data_0216020c+0xbe)=one;
break;
case 2:
func_020f0a5c(0x3e4)[0x45]=one;
*(s32 *)(data_021600ac+0x10)=0;func_020468e0(0);
*(u16 *)(data_0216020c+0xbe)=3;break;
case 3:*(s16 *)(data_0216020c+0xba)=60;break;
case 4:func_020468e0(one);*(u16 *)(data_0216020c+0xbe)=5;break;
case 5:
--*(s16 *)(data_0216020c+0xba);
p=*(u8* volatile*)&data_0216020c;
if(*(s16 *)(p+0xba)<0)*(s16 *)(p+0xba)=0;
p=data_0216020c;
data_02162884[0]=(*(s16 *)(p+0xba)*16)/60-16;
data_02162814[0]=(*(s16 *)(p+0xba)*16)/60-16;
if(*(s16 *)(p+0xba)==0)*(u16 *)(p+0xbe)=6;
break;
case 6:data_02160204[0x11f]=data_0216020c[0xc1];*(s32 *)(data_021600ac+0xc)=one;data_02160204[0xd8]=18;break;
}}

s32 func_02059460(u8 *arg0) {
    if (*(f32 *)(arg0 + 4) < 1.0f) {
        *(f32 *)(arg0 + 4) += 1.0f / *(f32 *)(arg0 + 0);
        if (*(f32 *)(arg0 + 4) > 1.0f) {
            *(f32 *)(arg0 + 4) = 1.0f;
        }
        if (func_020bf118(func_020bed24(), arg0 + 8, 4, *(f32 *)(arg0 + 4)) != 0) {
            func_020bed24()[0] <<= 0xc;
            func_020bed24()[1] <<= 0xc;
            func_020bed24()[2] <<= 0xc;
        }
    } else {
        func_020befc4(arg0);
        func_020bed54(4, 0);
        return 0;
    }
    return 1;
}

s32 func_0205951c(void) {
    u8 *p;
    if (*(s32 *)((p = func_020bed94()) + 0x18) > 0) {
        if (func_020bedf8() == 1) {
            s32 x, y;
            if (*(u16 *)(func_020becfc() + 0xd8) & 4) {
                x = func_020bed24()[0] + (*(s16 *)(p + 0xc) << 0xc);
                y = func_020bed24()[1] + (*(s16 *)(p + 0xe) << 0xc);
            } else {
                x = *(s32 *)(p + 0) + (*(s16 *)(p + 0xc) << 0xc);
                y = *(s32 *)(p + 4) + (*(s16 *)(p + 0xe) << 0xc);
            }
            func_020bed24()[0] = x;
            func_020bed24()[1] = y;
        } else {
            func_020bed54(2, 0);
            return 0;
        }
    }
    return 1;
}

s32 func_020595c0(u8 *arg0, s32 *arg1) {
    if (*(f32 *)(arg0 + 4) < 1.0f) {
        *(f32 *)(arg0 + 4) += 1.0f / *(f32 *)(arg0 + 0);
        if (*(f32 *)(arg0 + 4) > 1.0f) {
            *(f32 *)(arg0 + 4) = 1.0f;
        }
        if (func_020bf3a0(arg0, *(f32 *)(arg0 + 4)) != 0) {
            arg1[0] = *(s32 *)(arg0 + 0x20) << 0xc;
            arg1[1] = *(s32 *)(arg0 + 0x24) << 0xc;
            arg1[2] = *(s32 *)(arg0 + 0x28) << 0xc;
        }
    } else {
        func_020bf330(arg0);
        return 0;
    }
    return 1;
}

s32 func_0205965c(u8 *arg0) {
    if (*(f32 *)(arg0 + 4) < 1.0f) {
        *(f32 *)(arg0 + 4) += 1.0f / *(f32 *)(arg0 + 0);
        if (*(f32 *)(arg0 + 4) > 1.0f) {
            *(f32 *)(arg0 + 4) = 1.0f;
        }
        if (func_020bf3a0(arg0, *(f32 *)(arg0 + 4)) != 0) {
            func_020bed24()[0] = *(s32 *)(arg0 + 0x20) << 0xc;
            func_020bed24()[1] = *(s32 *)(arg0 + 0x24) << 0xc;
            func_020bed24()[2] = *(s32 *)(arg0 + 0x28) << 0xc;
        }
    } else {
        func_020bf330(arg0);
        return 0;
    }
    return 1;
}

s32 func_02059700(void) {
    u32 vec[3];
    u8 *A, *p, *p1, *p2;
    u8 *r4;
    s32 value;

    func_020becfc();
    A = data_02160af0;
    r4 = data_0216020c;
    p = *(u8 **)(A + 0x64);
    if (p != NULL && *(u32 *)(p + 0x10) == 0x3e4) {
        p1 = *(u8 **)(p + 0);
        if (p1 != NULL && (p2 = *(u8 **)(p1 + 0xfc)) != NULL) {
            value = *(s32 *)(p2 + 0) >> 12;
            if (value == 0x21c) {
                vec[0] = *(u32 *)(r4 + 0xac);
                vec[1] = *(u32 *)(r4 + 0xb4);
                vec[2] = *(u32 *)(r4 + 0xb0);
                func_020bedb4(func_020bed94(), (s32)vec, 10, 10, 0, 0xc);
            } else if (value == 0x2ac) {
                vec[0] = *(u32 *)(r4 + 0xac);
                vec[1] = *(u32 *)(r4 + 0xb4);
                vec[2] = *(u32 *)(r4 + 0xb0);
                func_020bedb4(func_020bed94(), (s32)vec, 10, 10, 0, 0x8);
            } else {
                goto flags;
            }
            func_020bed54(2, 1);
            func_0210d27c(0x18);
        }
    }
flags:
    if (*(u16 *)(func_020becfc() + 0xd8) & 4) {
        func_02059460(func_020befb4());
    }
    if (*(u16 *)(func_020becfc() + 0xd8) & 2) {
        ((s32 (*)(u8 *))func_0205951c)(r4);
    }
    if (*(u16 *)(func_020becfc() + 0xd8) & 2) goto ret1;
    if (*(u16 *)(func_020becfc() + 0xd8) & 4) goto ret1;
    func_020bed54(1, 1);
    *(u16 *)(r4 + 0xba) = 0;
    *(u32 *)(data_021600ac + 0x10) = 0xc;
    func_020468e0(0);
    return 0;
ret1:
    return 1;
}

