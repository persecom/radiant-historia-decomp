/* 14 functions from 0x02095874 to 0x02096740 (main), found by ds-decomp. */
#include "common.h"
extern void func_02094990(s32,s32);
extern void func_0209491c(s32,s32,s32);
extern u8 *data_02160090;

extern u8 *data_02160110;
extern void *func_02093658(u16);
extern void func_02093424(void *, s32);
extern u8 *func_02095198(void);
extern void func_02093358(u16, s32, s32);
extern void func_02093510(void *, s32);
extern u8 func_020329d8(void);
extern void func_0209353c(s32, s32, s16);
extern void *func_020936f8(s32, s32, s32, s32, s32, s32, s32);
extern void func_020938b0(void *, s32, s32);

void func_02095874(void) {
    u8 *p;
    u8 *node;
    u16 i = 0;
    node = func_02095198();
    while (node != NULL) {
        if (*(u8 *)(node + 0x15) == 1) {
            p = *(u8 **)(node + 8);
            if (*(s16 *)(p + 0xe) != i * 0x13) {
                func_02093358(*(u16 *)p, 0, -8);
                func_02093424(p, 1);
            }
            i++;
            if (i > 0x15) {
                return;
            }
        }
        node = *(u8 **)(node + 4);
    }
}

void func_0209368c(u16,s32,s32);
void func_020958f8(void) {
 u8 *node;
 u16 id=0;
 node=*(u8 **)(data_02160090+8);
 s32 lowY=-32,lowX=-64,zero=0,two=2,normal=0,one=1;
 while(node){
 u8 *entry=*(u8 **)(node+20);
 u8 *actor;
 s32 visible=0;
 actor=*(u8 **)node;
 if(entry){
 u8 *p=*(u8 **)(entry+8);
 if(p){
 s32 x=*(s16 *)(p+12),y=*(s16 *)(p+14);
 id=*(u16 *)p;
 if(x>lowX && x<256 && y>lowY && y<192)visible=1;
 }
 }
 if((node[0x41]&4)||(node[0x41]&2)){
 ++*(volatile s8 *)(node+0x42);
 *(volatile s8 *)(node+0x42)=*(volatile s8 *)(node+0x42)%20;
 }else node[0x42]=zero;
 if((node[0x41]&4)&&*(volatile s8 *)(node+0x42)>10){
 if(visible){
 func_0209368c(id,one,one);func_0209368c(id,one,2);func_0209368c(id,one,3);
 }
 }else if(!(node[0x41]&2)||*(volatile s8 *)(node+0x42)<=10){
 if(visible){
 if(**(u8 **)(actor+0x118)==0){
 func_0209368c(id,normal,1);func_0209368c(id,normal,2);func_0209368c(id,normal,3);
 }else{
 func_0209368c(id,two,1);func_0209368c(id,two,two);func_0209368c(id,two,3);
 }
 }
 }
 node=*(u8 **)(node+0x1c);
 }
}

void func_02095a9c(u8 *arg,u8 *a,s32 b,s32 c) {
s32 id; u16 i; s32 x,y; u8 *p; s32 type; s32 base;
if(!arg)return;
p=*(u8 **)(arg+8);id=*(u16 *)p;
if(arg[0x16]&1)return;
arg[0x16]|=1;
y=*(s16 *)(p+14);x=*(s16 *)(p+12);
func_020938b0(func_020936f8(0x53,id,x,(s16)(y-16),4,4,16),1,16);
func_020938b0(func_020936f8(0x54,id,x,y,4,4,18),1,18);
if(a[0]==2){if(c==1)type=0x21;else type=0x20;}
else if(a[0]==5)type=0x22;
else if(a[0]==3)type=0x23;
else if(a[0]==4||a[0]==1)type=0x25;
else if(a[0]==6)type=0x24;
else if(a[0]==0)type=0x24;
else if(a[0]==9)type=0x20;
func_020938b0(func_020936f8(type,id,x,y,3,4,7),1,7);
if(a[0]==2||a[0]==3||a[0]==4||a[0]==6){func_02094990(b,0);func_0209491c(b,*(u16 *)(a+32),1);}
else if(a[0]==5){func_02094990(b,1);func_0209491c(b,*(u16 *)(a+32),1);}
base=b*4+0x2b;
i=0;
do {s32 tag=i+0x77;void *obj;
obj=func_020936f8((u16)(i+base),id,x,y,3,4,(u16)tag);
func_020938b0(obj,1,(u32)tag & 0xffff);
i++;
}while(i<4);
}

#pragma opt_propagation off
void func_02095cb8(u8 *arg,s32 a,s32 b) {
s32 id; u16 i; s32 x,y; u8 *p;
if(!arg)return;
p=*(u8 **)(arg+8); id=*(u16 *)p;
if(arg[0x16]&1)return;
arg[0x16]|=1;arg[0x16]|=4;arg[0x18]=a;
y=*(s16 *)(p+0xe);x=*(s16 *)(p+0xc);
func_020938b0(func_020936f8(0x53,id,x,(s16)(y-16),4,4,16),1,16);
func_020938b0(func_020936f8(0x54,id,x,y,4,4,18),1,18);
func_020938b0(func_020936f8(0x26,id,x,y,3,4,7),1,7);
i=0;
func_02094990(a,0);func_0209491c(a,b,1);
do {s32 tag=i+0x77;void *obj;
obj=func_020936f8((u16)(i+(a*4+0x2b)),id,x,y,3,4,(u16)tag);
func_020938b0(obj,1,(u16)(i+0x77));
i++;
}while(i<4);
}
#pragma opt_propagation on
extern void func_02094990(s32,s32);
extern void func_0209491c(s32,s32,s32);
#pragma opt_propagation off
void func_02095e34(u8 *arg) {
s32 id; u16 i; s32 x,y; u8 *p;
if(!arg)return;
p=*(u8 **)(arg+8);id=*(u16 *)p;
arg[0x16]&=0xfb;
x=*(s16 *)(p+0xc);y=*(s16 *)(p+0xe);
func_02093510(p,7);func_02093510(p,0x77);func_02093510(p,0x78);func_02093510(p,0x79);func_02093510(p,0x7a);
func_020938b0(func_020936f8(0x20,id,x,y,3,4,7),1,7);
i=0;
func_02094990(arg[0x18],0);func_0209491c(arg[0x18],0x6f,1);
do {
s32 tag=i+0x77; void *obj;
obj=func_020936f8((u16)(i+(arg[0x18]*4+0x2b)),id,x,y,3,4,(u16)tag);
func_020938b0(obj,1,(u16)(i+0x77));
i++;
}while(i<4);
}
#pragma opt_propagation on
void func_02095f68(u8 *arg0) {
    u8 *p;
    if (arg0 == NULL) {
        return;
    }
    p = *(u8 **)(arg0 + 8);
    if ((*(u8 *)(arg0 + 0x16) & 1) == 0) {
        return;
    }
    func_02093510(p, 0x10);
    func_02093510(p, 0x12);
    func_02093510(p, 7);
    func_02093510(p, 0x77);
    func_02093510(p, 0x78);
    func_02093510(p, 0x79);
    func_02093510(p, 0x7a);
    *(u8 *)(arg0 + 0x16) &= 0xfe;
}

void func_02095fe8(u8 *arg0) {
    u8 *r4 = *(u8 **)arg0;
    u8 *r5 = *(u8 **)(*(u8 **)(arg0 + 0x14) + 8);
    s32 zero = 0;
    s32 val = 0x7b;
    s16 r8, r9;

    *(u16 *)(data_02160110 + 0xce) = *(u16 *)r5;
    data_02160110[0xd0] = r4[0x114];
    data_02160110[0xd1] = ((u8 (*)(u8 *))func_020329d8)(arg0);
    func_02093510(r5, 0xd);
    func_02093510(r5, 6);
    func_02093510(r5, 2);
    func_0209353c(0x1e, zero, (s16)(*(s16 *)(r5 + 0xe) - 2));
    r5 = func_02093658(0x1e);
    r8 = *(s16 *)(r5 + 0xc);
    r9 = *(s16 *)(r5 + 0xe);
    func_02093424(r5, 1);
    func_02093510(r5, val);
    func_020938b0(func_020936f8((u16)(*(u16 *)(r4 + 0x90) + 7), 0x1e, r8, r9, zero, 4, val), 0xf, val);
}

void func_020960dc(void) {
    func_02093424(func_02093658(0x1e), 0);
}

void func_020960f4(void) {
u8 *p; s32 y,x; s32 id=*(s16 *)(data_02160110+0xce);
if(id==-1) return;
p=func_02093658((u16)id);
if(p) {
x=*(s16 *)(p+0xc); y=*(s16 *)(p+0xe);
func_020938b0(func_020936f8(14,*(u16 *)(data_02160110+0xce),x,y,3,2,13),1,13);
func_020938b0(func_020936f8(16,*(u16 *)(data_02160110+0xce),x,y,4,4,2),1,2);
func_020938b0(func_020936f8((u16)(data_02160110[0xd0]+1),*(u16 *)(data_02160110+0xce),x,y,2,4,6),1,6);
}
*(s16 *)(data_02160110+0xce)=-1;
}

void func_020961f8(u8 *arg0) {
    u8 *p = *(u8 **)(*(u8 **)(arg0 + 0x14) + 8);
    u8 *q = *(u8 **)arg0;
    *(u16 *)(data_02160110 + 0xce) = *(u16 *)p;
    *(u8 *)(data_02160110 + 0xd0) = *(u8 *)(q + 0x114);
    *(u8 *)(data_02160110 + 0xd1) = func_020329d8();
    func_02093510(p, 0xd);
    func_02093510(p, 6);
    func_02093510(p, 2);
}

void func_0209625c(void) {
u8 *node; u16 i=0; node=*(u8 **)(data_02160090+8);
while(node) {
u8 *q=*(u8 **)(node+0x14);
if(q) {
u8 *p=*(u8 **)(q+8);
s32 x,y; u16 id;
func_02093510(p,0x7c);func_02093510(p,0x7d);
x=*(s16 *)(p+0xc);y=*(s16 *)(p+0xe);id=*(u16 *)p;
if(i+1<=9) func_020938b0(func_020936f8((u16)((i+1)%10+0x55),id,x,y,0,4,0x7c),1,0x7c);
else func_020938b0(func_020936f8(0x5f,id,x,y,0,4,0x7d),1,0x7d);
}
i++;node=*(u8 **)(node+0x1c);
}
}

extern u8 *func_020935ec(void *, s32);
void func_02096360(s32 arg0) {
    u8 *node = *(u8 **)(data_02160090 + 8);

    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x14);
        if (sub != NULL) {
            u8 *obj = *(u8 **)(sub + 8);
            s16 x = *(s16 *)(obj + 0xc);
            s16 y = *(s16 *)(obj + 0xe);
            u16 id = *(u16 *)(obj + 0);

            if (arg0 != 0) {
                if (*(u32 *)(*(u8 **)node + 0x80) & 0x1000) {
                    u8 *res = (u8 *)func_020936f8(0x60, id, x, y, 0, 4, 0x7e);
                    func_020938b0(res, 1, 0x7e);
                    if (func_020935ec(res, 0x77) != NULL) {
                        *(u32 *)(func_020935ec(res, 0x77) + 0x20) = 0;
                        *(u32 *)(func_020935ec(res, 0x78) + 0x20) = 0;
                        *(u32 *)(func_020935ec(res, 0x79) + 0x20) = 0;
                        *(u32 *)(func_020935ec(res, 0x7a) + 0x20) = 0;
                        *(u32 *)(func_020935ec(res, 0x10) + 0x20) = 0;
                        *(u32 *)(func_020935ec(res, 0x12) + 0x20) = 0;
                    }
                }
            } else {
                func_02093510(obj, 0x7e);
                if (func_020935ec(obj, 0x77) != NULL) {
                    u8 *p;
                    *(u32 *)(func_020935ec(obj, 0x77) + 0x20) = 1;
                    *(u32 *)(func_020935ec(obj, 0x78) + 0x20) = 1;
                    *(u32 *)(func_020935ec(obj, 0x79) + 0x20) = 1;
                    *(u32 *)(func_020935ec(obj, 0x7a) + 0x20) = 1;
                    *(u32 *)(func_020935ec(obj, 0x10) + 0x20) = 1;
                    p = func_020935ec(obj, 0x12);
                    if (p != NULL) {
                        *(u32 *)(p + 0x20) = 1;
                    }
                }
            }
        }
        node = *(u8 **)(node + 0x1c);
    }
}

#pragma opt_propagation on
void func_02096504(u8 *arg, s32 unused, s32 index) {
 u8 *p; s32 id; u16 i; s32 x, y;
 if(!arg) return;
 p=*(u8 **)(arg+8); id=*(u16 *)p;
 if(arg[0x16]&1) return;
 arg[0x16]|=1;
 y=*(s16 *)(p+0xe); x=*(s16 *)(p+0xc);
 func_020938b0(func_020936f8(0x53,id,x,(s16)(y-16),4,4,16),1,16);
 func_020938b0(func_020936f8(0x54,id,x,y,4,4,18),1,18);
 func_020938b0(func_020936f8(0x25,id,x,y,3,4,7),1,7);
 i=0;
 func_02094990(index,0);
 func_0209491c(index,8,1);
 do {
 u32 tag=i+0x77;
 void *obj=func_020936f8((u16)(i+(index*4+0x2b)),id,x,y,3,4,(u16)(tag & 0xffff));
 func_020938b0(obj,1,(u16)tag);
 i++;
 }while(i<4);
}
#pragma opt_propagation on
extern void *func_020936f8(s32, s32, s32, s32, s32, s32, s32);
extern void func_020938b0(void *, s32, s32);
extern void func_020932a8(s32, s16);
extern void func_02093444(s32);
void func_02096670(s32 arg0, s16 arg1) {
    if (arg0 == 0) {
        void *p;
        p = func_020936f8(0x61, 0x24, 0x56, 0, 0, 2, 0x7f);
        func_020938b0(p, 5, 0x7f);
        p = func_020936f8(0x62, 0x24, 0x56, 0, 0, 4, 0x80);
        func_020938b0(p, 5, 0x80);
    } else if (arg0 == 1) {
        func_020932a8(0x24, (s16)(arg1 + 0x56));
    } else if (arg0 == 2) {
        func_02093444(0x24);
    }
}

