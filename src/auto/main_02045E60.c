/* 17 functions from 0x02045E60 to 0x02046E30 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_0216020c, *data_02160aec;
extern u16 data_02162908[];
extern u32 data_0216281c;
extern u8 *func_020becfc(void);
extern u8 *func_02044f70(void);
extern u8 *func_020f0aa4(s32);
extern void func_020581b8(void), func_02058a08(void), func_02059128(void), func_02058e08(void), func_02059700(void);
extern s32 func_02059abc(void), func_0205a464(void);
extern void func_020bdcc0(s32),func_020bdd84(s32),func_02108eec(s32,s32),func_020a18f8(void);


extern u32 data_02155c3c;
extern u8 *data_021600b8;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_02046760(u8 *);
extern void func_020f58c0(void *);
typedef struct {
    u16 unk[7];
} Unk14;
extern const Unk14 data_0213f2e4;
typedef struct {
    u16 unk[10];
} Unk20;
extern const Unk20 data_0213f308;
extern u8 *data_02160204;
extern u8 data_021464f8[36];
extern u8 *data_021600ac;
extern void func_0210eb98(void *, u16, u16);
extern u16 func_020f57e8(void);
extern void func_021167f0(void *, void *);
extern void func_021098ac(void *);
extern u8 *data_021600bc;
extern void func_0204798c(void);
extern void func_02051ef4(void);
extern void func_0210d9e4(void *);
extern void func_0210dae0(void *);

extern u8 *data_021600b0;
extern const Unk20 data_0213f2f4;
extern void func_0209dfdc(void);
extern void func_020a3bbc(s32);
extern void func_020a2574(void);
extern void func_021099f8(void *);
extern void func_020469ac(void);
extern void func_0204690c(u32, s32);
extern void func_020a2534(void);
void func_02045e60(void) {
s32 zero;
u8 *mode;
s32 *pos;
u8 *system;
u8 *state=data_021600ac;
pos=*(s32 **)(state+0x68);
system=func_020becfc();
mode=func_02044f70();
zero=0;
u8 *obj;
if(data_02160204[0x7e]) goto done;
*(s32 *)(data_021600b0+0xa0)=zero;
switch(*(u32 *)(state+0x10)){
case 0:case 1:case 2:case 3:case 5:case 6:case 8:case 9:case 10:case 11:break;
case 4: if(data_02162908[2]==0) *(s32 *)(state+0x10)=zero;break;
case 7: *(u32 *)(data_021600b0+0xa0)|=1;break;
case 12:
if(*(s32 *)(mode+4)==2000)func_020581b8();
else if(*(s32 *)(mode+4)==2001) {
if(*(u32 *)(mode+12)&2)func_02058a08();
else if(*(u32 *)(mode+12)&4)func_02059128();
}break;
}
if(*(s32 *)(mode+4)==2001 && !(*(u32 *)(mode+12)&2) && !(*(u32 *)(mode+12)&4) && !(*(u32 *)(mode+12)&8))func_02058e08();
if(*(s32 *)(mode+4)==2000){
obj=data_0216020c;
if(obj[0xd0]&1){
if(obj[0xd0]&2){
*(volatile s16 *)(obj+0xd2)+=4;
*(s32 *)(obj+0xd4)=*(volatile s16 *)(obj+0xd2)+0x8000;
if(*(s32 *)(obj+0xd4)>0x8300){obj[0xd0]&=0xfd;obj[0xd0]|=4;}
}else if(obj[0xd0]&4){
*(volatile s16 *)(obj+0xd2)-=4;
*(s32 *)(obj+0xd4)=*(volatile s16 *)(obj+0xd2)+0x8000;
if(*(s32 *)(obj+0xd4)<0x7e80){obj[0xd0]&=0xfb;obj[0xd0]|=2;}
}
}
}else if(*(s32 *)(mode+4)==2001){
u8 *entry; s32 *anim;
*(s32 *)(data_0216020c+0xd4)=0x8000;
entry=func_020f0aa4(501);
if(entry){
u32 i=0;
*(s32 *)(entry+28)=i;
anim=*(s32 **)(*(u8 **)entry+256);
if(anim && !(*(u16 *)(func_020becfc()+216)&1)){
for(;i<data_0216281c;i++) *anim+=4096;
if(*anim>=0x6a4000)*anim=zero;
}
}
if(*(u32 *)(mode+12)&2){if(!(*(u16 *)(system+216)&1))func_02059700();}
else if(*(u32 *)(mode+12)&4){
if(!func_02059abc()){
*(s32 *)mode=2;data_02160204[216]=2;
func_02108eec(0,1000);func_02108eec(1,1000);*(s32 *)(data_021600ac+12)=1;
}
}else if(*(u32 *)(mode+12)&8){
if(!func_0205a464()){
func_020bdcc0(2);func_020bdd84(2);data_02160204[216]=2;data_02160204[285]|=1;
func_02108eec(0,1000);func_02108eec(1,1000);*(s32 *)(data_021600ac+12)=1;
}
}
}
*(s32 *)(data_02160aec+0x58d28)=pos[0];
*(s32 *)(data_02160aec+0x58d2c)=pos[1];
*(s32 *)(data_02160aec+0x58d30)=pos[2];
{
u8 *camera=data_0216020c;
if(camera){
s32 x=*(s32 *)(camera+0xac),z=*(s32 *)(camera+0xb4),y=*(s32 *)(camera+0xb0);
if(*(s32 *)(mode+4)!=2001){
*(s32 *)(camera+0xa0)=x-0x8000;*(s32 *)(camera+0xa4)=z-0xa000;*(s32 *)(camera+0xa8)=y+0x80000;
}else{
*(s32 *)(camera+0xa0)=x<<12;*(s32 *)(camera+0xa4)=z<<12;*(s32 *)(camera+0xa8)=y<<12;
}
}
}
done: func_020a18f8();
}

void func_02046238(void) {
    if (data_021600ac[0x334] == 1 || data_021600ac[0x335] != 0) {
        Unk14 buf = data_0213f2e4;
        if (data_021600ac[0x334] != 0) {
            data_021600ac[0x335]++;
            if (data_021600ac[0x335] > 8) {
                data_021600ac[0x335] = 8;
            }
        } else {
            data_021600ac[0x335]--;
        }
        *(volatile u32 *)0x040004a4 = 0x1f0080;
        buf.unk[4] = 0x100;
        buf.unk[6] = 0;
        buf.unk[1] = 0;
        buf.unk[5] = 0x10;
        buf.unk[2] = data_021600ac[0x335] * 2 - 0x10;
        func_021099f8(&buf);
        buf.unk[1] = 0;
        buf.unk[2] = 0xc0 - data_021600ac[0x335] * 2;
        func_021099f8(&buf);
    }
    func_020469ac();
    func_0204690c(*(u16 *)(data_021600b8 + 0x1a), data_021600b8[0x18]);
    func_020a2534();
}

void func_02046370(void)
{
    Unk20 buf;
    u32 val;

    if (*(u32 *)(data_021600b0 + 0xa0) & 1) {
        func_0209dfdc();
    }
    buf = data_0213f2f4;
    val = *(u8 *)(data_02160204 + 0x121);
    if (val & 1) {
        if ((val & 2) == 0) {
            func_020a3bbc(0xa);
        } else {
            func_020a3bbc(0xb);
        }
        buf.unk[1] = 0;
        buf.unk[2] = 0;
        buf.unk[3] = 0x28;
        buf.unk[4] = 0xe;
        buf.unk[7] = 0x2bc;
        buf.unk[8] = 0x28;
        buf.unk[9] = 0xe;
        buf.unk[5] = 0xd8;
        buf.unk[6] = 4;
        func_021098ac(&buf);
        *(u8 *)(data_02160204 + 0x121) = 0;
    }
    func_020a2574();
}

extern u8 data_021464ac[];
extern u8 data_021464b4[];
extern u8 data_021464bc[];
extern u8 data_021464c4[];
extern u8 data_021464d0[];
extern u8 data_021464d8[];
extern u8 data_021464e4[];
extern u8 data_021464ec[];
extern u16 func_0204680c(s32, u16);
extern void func_020bdf24(void *);
void func_02046448(void) {
    u8 *ptr;

    *(u32 *)(data_021600ac + 0x10) = 3;
    ptr = data_02160204;
    switch (ptr[0x110]) {
    case 1:
        switch (ptr[0xd6]) {
        case 2:
        case 7:
            if (*(u16 *)(ptr + 0x70) != 0 && *(u16 *)(ptr + 0xd4) != 0) {
                ((u8 *)(u32)func_0204680c((s32)data_021464ac, *(u16 *)(ptr + 0x70)))[0x1c1] = 3;
            }
            break;
        case 0x13:
        case 0x1d:
            *(u16 *)(ptr + 0xd4) = 0xc8;
            ((u8 *)(u32)func_0204680c((s32)data_021464b4, 0x64))[0x1c1] = 3;
            break;
        case 0x12:
            ((u8 *)(u32)func_0204680c((s32)data_021464bc, *(u16 *)(ptr + 0x70)))[0x1c1] = 3;
            break;
        }
        func_020bdf24(data_021464c4);
        break;
    case 0:
        *(u16 *)(ptr + 0xd4) = 0xc8;
        ((u8 *)(u32)func_0204680c((s32)data_021464d0, 0x65))[0x1c1] = 3;
        func_020bdf24(data_021464d8);
        break;
    case 2:
        *(u16 *)(ptr + 0xd4) = 0xc8;
        ((u8 *)(u32)func_0204680c((s32)data_021464e4, 0x67))[0x1c1] = 3;
        func_020bdf24(data_021464ec);
        break;
    }
}

void func_02046594(void) {
    data_021600b8 = func_0210c594(0x2c, data_02155c3c);
    func_021167ac(data_021600b8, 0x1d8);
    func_021167ac(data_021600b8 + 0xc, 0x1e0);
    func_021167ac(data_021600b8 + 0x20, 0x1ec);
    *(u8 *)(data_021600b8 + 0x18) = 0;
    *(u16 *)(data_021600b8 + 0x1a) = 0;
    *(u16 *)(data_021600b8 + 0x1c) = 0;
}

extern void func_020466f4(void);
extern void func_0210c5dc(void *);
void func_02046600(void) {
    u8 *node;
    if (data_021600b8 == NULL) {
        return;
    }
    while ((node = *(u8 **)data_021600b8) != NULL) {
        if (*(u32 *)(node + 0x128) != 0) {
            *(u32 *)(node + 0x178) += 1;
            func_020a994c(node + 0x144);
            func_020a98a0(node + 0x144);
        }
        func_021168f8(data_021600b8, node);
        func_020f58c0(node);
    }
    while ((node = *(u8 **)(data_021600b8 + 0xc)) != NULL) {
        if (*(u32 *)(node + 0x128) != 0) {
            *(u32 *)(node + 0x178) += 1;
            func_020a994c(node + 0x144);
            func_020a98a0(node + 0x144);
        }
        func_021168f8(data_021600b8 + 0xc, node);
        func_020f58c0(node);
    }
    func_020466f4();
    if (data_021600b8 != NULL) {
        func_0210c5dc(data_021600b8);
        data_021600b8 = NULL;
    }
}

void func_020466f4(void) {
    if (data_021600b8 == NULL) {
        return;
    }
    while (*(u8 **)(data_021600b8 + 0x20) != NULL) {
        u8 *node = *(u8 **)(data_021600b8 + 0x20);
        if (*(void **)(node + 0x128) != NULL) {
            *(u32 *)(node + 0x178) += 1;
            func_020a994c(node + 0x144);
            func_020a98a0(node + 0x144);
        }
        func_02046760(node);
        func_020f58c0(node);
    }
}

void func_02046760(u8 *arg0) {
    if (data_021600b8 != NULL) {
        func_021168f8(data_021600b8 + 0x20, arg0);
        *(u8 *)(arg0 + 0x1f4) = 0;
    }
}

void func_02046794(void) {
    u8 *node;
    while ((node = *(u8 **)(data_021600b8 + 0xc)) != NULL) {
        if (*(u8 **)(node + 0x128) != NULL && *(u32 *)*(u8 **)(node + 0x128) != 0) {
            *(u32 *)(node + 0x178) += 1;
            func_020a994c(node + 0x144);
            func_020a98a0(node + 0x144);
        }
        func_021168f8(data_021600b8 + 0xc, node);
        func_020f58c0(node);
    }
}

u16 func_0204680c(s32 arg0, u16 arg1) {
    u16 ret;
    func_0210eb98(data_021464f8, *(u16 *)(data_02160204 + 0xd4), arg1);
    ret = func_020f57e8();
    *(u16 *)(data_02160204 + 0x100 + 0x26) = *(u16 *)(data_02160204 + 0xd4);
    *(u16 *)(data_02160204 + 0x100 + 0x28) = arg1;
    if (ret == 0) {
        return 0;
    }
    func_021167f0(data_021600b8, (void *)ret);
    *(u16 *)(data_02160204 + 0x70) = arg1;
    {
        u8 *node = data_021600ac;
        if (node != NULL) {
            u8 *child = *(u8 **)(node + 0x68);
            if (child != NULL) {
                *(u32 *)(child + 0xac) &= 0xfffffbb5;
            }
        }
    }
    return ret;
}

void func_020468b0(u32 arg0) {
    u8 *node = *(u8 **)data_021600b8;
    while (node != NULL) {
        *(u32 *)(*(u8 **)(node + 0x14) + 8) = arg0;
        node = *(u8 **)(node + 0x1dc);
    }
}

void func_020468e0(u8 arg0) {
    u8 *node = *(u8 **)data_021600b8;
    while (node != NULL) {
        *(u8 *)(node + 0x1e8) = arg0;
        node = *(u8 **)(node + 0x1dc);
    }
}

void func_0204690c(u32 arg0, s32 arg1) {
    Unk20 buf;
    if (arg1 == 0) {
        return;
    }
    buf = data_0213f308;
    *(volatile u32 *)0x040004A4 = 0x3000080 | (arg0 << 16);
    *(volatile u32 *)0x04000480 = 0x7fff;
    buf.unk[1] = 0;
    buf.unk[2] = 0;
    buf.unk[3] = 0x100;
    buf.unk[4] = 0xc0;
    buf.unk[8] = 0x100;
    buf.unk[9] = 0xc0;
    buf.unk[5] = 0;
    buf.unk[6] = 0;
    *(volatile u32 *)0x040004A8 = 0;
    func_021098ac(&buf);
}

void func_020469ac(void) {
    u16 cur = *(u16 *)(data_021600b8 + 0x1a);
    u16 target = *(u16 *)(data_021600b8 + 0x1c);
    if (target < cur) {
        *(u16 *)(data_021600b8 + 0x1a) = cur - 1;
    } else if (target > cur) {
        *(u16 *)(data_021600b8 + 0x1a) = cur + 1;
    }
    if (*(u16 *)(data_021600b8 + 0x1a) == 0) {
        *(u8 *)(data_021600b8 + 0x18) = 0;
    }
}

void func_020469f4(void) {
    if (data_021600bc != NULL) {
        return;
    }
    data_021600bc = func_0210c594(0xe8, data_02155c3c);
    func_021167ac(data_02160204 + 0xe8, 0x130);
    func_021167ac(data_021600bc + 0x4c, 0x148);
    func_021167ac(data_021600bc + 0x40, 0x138);
    func_021167ac(data_021600bc + 0x58, 0x150);
    func_021167ac(data_021600bc + 0x70, 0x178);
    func_021167ac(data_021600bc + 0x64, 0x160);
    func_021167ac(data_021600bc + 0x88, 0x24);
    func_021167ac(data_021600bc + 0x94, 0x14);
    func_021167ac(data_021600bc + 0xa0, 0x4);
    func_021167ac(data_021600bc + 0xac, 0x14);
    func_021167ac(data_021600bc + 0xb8, 0x2c);
    func_021167ac(data_021600bc + 0xc4, 0x18);
    func_021167ac(data_021600bc + 0xd0, 0x188);
    func_021167ac(data_021600bc + 0xdc, 0xc);
    func_021167ac(data_021600bc + 0x7c, 0x2c);
    if (data_02160204[0x7e] == 0) {
        data_021600bc[0x28] = 0;
    } else {
        data_021600bc[0x28] = 1;
    }
    data_021600bc[0x29] = 1;
    *(u16 *)(data_021600bc + 0x2a) = 0;
    data_021600bc[0x2c] = 0xf0;
}

void func_02046b6c(void) {
    *(void **)data_021600bc = (void *)func_0204798c;
    *(u32 *)(data_021600bc + 4) = 0x3ed;
    func_0210d9e4(data_021600bc);
    *(void **)(data_021600bc + 0x14) = (void *)func_02051ef4;
    *(u32 *)(data_021600bc + 0x18) = 0x3eb;
    func_0210dae0(data_021600bc + 0x14);
}

void func_02046bcc(void) {
u8 *node; u8 *outer; u8 *list; u8 *inner;
if(!data_021600bc) return;
while(*(u32 *)(data_02160204+0xe8)) func_02047490();
if(!data_02160204[0x7a]) {
func_0210da14(data_021600bc);func_0210db10(data_021600bc+0x14);
}
while((node=*(u8 **)(data_021600bc+136))!=0) { func_021168f8(data_021600bc+136,node); if(node) func_0210c5dc(node); }
while((node=*(u8 **)(data_021600bc+148))!=0) { func_021168f8(data_021600bc+148,node); if(node) func_0210c5dc(node); }
while((outer=*(u8 **)(data_021600bc+0xa0))!=0) {
func_021168f8(data_021600bc+0xa0,outer);
list=*(u8 **)outer;
if(list) {
while((inner=*(u8 **)list)!=0) {
func_021168f8(list,inner); if(inner) func_0210c5dc(inner);
}
}
if(*(u8 **)outer) {func_0210c5dc(*(u8 **)outer); *(u8 **)outer=0;}
if(outer) func_0210c5dc(outer);
}
while((node=*(u8 **)(data_021600bc+172))!=0) { func_021168f8(data_021600bc+172,node); if(node) func_0210c5dc(node); }
while((node=*(u8 **)(data_021600bc+184))!=0) { func_021168f8(data_021600bc+184,node); if(node) func_0210c5dc(node); }
while((node=*(u8 **)(data_021600bc+196))!=0) { func_021168f8(data_021600bc+196,node); if(node) func_0210c5dc(node); }
while((node=*(u8 **)(data_021600bc+220))!=0) { func_021168f8(data_021600bc+220,node); if(node) func_0210c5dc(node); }
func_020789ec();
if(data_021600bc) {func_0210c5dc(data_021600bc);data_021600bc=0;}
}

