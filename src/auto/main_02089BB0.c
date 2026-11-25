/* 9 functions from 0x02089BB0 to 0x0208A678 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_021486a4[];
extern u8 data_021486bc[];
extern u8 data_021486d0[];
extern void *func_021092d8(void *);
extern u32 func_02022068(s32);
extern void func_021093f0(void *);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern int func_02089b38(const void *, const void *);
extern void func_02015a3c(void *, u32, u32, int (*)(const void *, const void *));

extern u8 *data_021600b0;
extern u8 *data_0216010c;
extern s32 func_02092ab0();
extern u32 func_02092994(void *, s32);
extern void func_020a3b84(void);
extern void func_020a0da8(void);
extern void func_020a0dc8(void *);
extern void func_0210c5dc(void *);
extern void func_020a9544(void *);
extern void *data_02155c3c;
extern u8 data_021486e4[28];
extern u8 data_02148700[28];
extern u8 data_0214871c[24];
extern void *func_0210c594(s32, void *);
extern void *func_020a94b8(void *);
extern void func_020a994c(void *);
extern void func_02108ffc(void);
extern void func_02013878(void *, s32, u32);
extern u8 data_0214860c[];
extern u8 data_02148628[];
extern u8 data_02148630[];
extern u8 data_02148638[];
extern u8 data_02148650[];
extern u8 data_0214865c[];
extern u8 data_0214866c[];
extern u8 data_02148674[];
extern u8 data_02148680[];
extern u8 data_02148688[];
extern u8 data_02148694[];
extern u8 data_0214869c[];
extern void func_021091b4(void);
s32 func_02089f94(u8 *, s32, s32, u32 *);
void func_0208a168(u8 *, s32, s32, u32 *);
void func_0208a1a0(s32);
void func_02089bb0(s32 mode, s32 arg1) {
    u16 i;
    void *stream;

    *(u16 *)(data_0216010c + 0x50d4) = 0;
    data_0216010c[0x50d6] = 0;
    data_0216010c[0x50d7] = data_0216010c[0x50d6];

    if (arg1 == 1) {
        void **p = *(void ***)(data_0216010c + 0x48);
        if (p != NULL && *p != NULL) func_020a9544(p);
        p = *(void ***)(data_0216010c + 0x4c);
        if (p != NULL && *p != NULL) func_020a9544(p);
    }

    func_02108ffc();
    func_02013878(data_0216010c + 0x5570, 0, 0x2ee0);

    switch (mode) {
    case 0:
        stream = func_021092d8(data_0214860c);
        for (i = 1; i < 0x33; i++) {
            if (func_02022068(i) != 0) {
                u8 *p = data_0216010c;
                *(u16 *)(p + *(s16 *)(p + 0x50d4) * 100 + 0x5570) = i;
                {
                    u8 *q = data_0216010c;
                    u32 result = func_02022068(i);
                    *(u8 *)(q + *(s16 *)(q + 0x50d4) * 100 + 0x5572) = result;
                }
                func_02089f94(data_0216010c + *(s16 *)(data_0216010c + 0x50d4) * 100 + 0x5574, i, 5, stream);
                (*(s16 *)(data_0216010c + 0x50d4))++;
            }
        }
        if (stream != 0) func_021093b0(stream);
        func_02015a3c(data_0216010c + 0x5570, *(s16 *)(data_0216010c + 0x50d4), 100, func_02089b38);
        if (arg1 == 1) {
            *(void **)(data_0216010c + 0x48) = func_020a94b8(data_02148628);
            *(void **)(data_0216010c + 0x4c) = func_020a94b8(data_02148630);
        }
        break;
    case 1:
        stream = func_021092d8(data_02148638);
        for (i = 0xc9; i < 0x10f; i++) {
            if (func_02022068(i) != 0) {
                u8 *p = data_0216010c;
                *(u16 *)(p + *(s16 *)(p + 0x50d4) * 100 + 0x5570) = i;
                {
                    u8 *q = data_0216010c;
                    u32 result = func_02022068(i);
                    *(u8 *)(q + *(s16 *)(q + 0x50d4) * 100 + 0x5572) = result;
                }
                func_0208a168(data_0216010c + *(s16 *)(data_0216010c + 0x50d4) * 100 + 0x5574, i, 5, stream);
                (*(s16 *)(data_0216010c + 0x50d4))++;
            }
        }
        if (stream != 0) func_021093b0(stream);
        func_02015a3c(data_0216010c + 0x5570, *(s16 *)(data_0216010c + 0x50d4), 100, func_02089b38);
        if (arg1 == 1) {
            *(void **)(data_0216010c + 0x48) = func_020a94b8(data_02148650);
            *(void **)(data_0216010c + 0x4c) = func_020a94b8(data_0214865c);
        }
        break;
    case 2:
        func_0208a1a0(0);
        if (arg1 == 1) {
            *(void **)(data_0216010c + 0x48) = func_020a94b8(data_0214866c);
            *(void **)(data_0216010c + 0x4c) = func_020a94b8(data_02148674);
        }
        break;
    case 3:
        func_0208a1a0(1);
        if (arg1 == 1) {
            *(void **)(data_0216010c + 0x48) = func_020a94b8(data_02148680);
            *(void **)(data_0216010c + 0x4c) = func_020a94b8(data_02148688);
        }
        break;
    case 4:
        func_0208a1a0(2);
        if (arg1 == 1) {
            *(void **)(data_0216010c + 0x48) = func_020a94b8(data_02148694);
            *(void **)(data_0216010c + 0x4c) = func_020a94b8(data_0214869c);
        }
        break;
    }

    if (*(s16 *)(data_0216010c + 0x50d4) <= 6) {
        data_0216010c[0x50d8] = 0x4e;
    } else {
        data_0216010c[0x50d8] = 0x1d4 / *(s16 *)(data_0216010c + 0x50d4);
        if (data_0216010c[0x50d8] < 8) data_0216010c[0x50d8] = 8;
    }

    func_02108ffc();
}

s32 func_02089f94(u8 *arg0, s32 arg1, s32 arg2, u32 *arg3) {
s32 id, value;
arg3[2]=arg3[0];
id=func_02092ab0(arg3);
if(id!=-1) {
value=func_02092994(arg3,0);
while(value!=arg2) {
func_02109444(arg3);
id=func_02092ab0(arg3,arg1);
if(id==-1) break;
value=(u16)func_02092994(arg3,0);
}
}
if(id!=arg1 || value!=arg2) return 0;
func_021091b4();
*(u8 *)(arg0+0)=func_02092994(arg3,0);
*(u16 *)(arg0+2)=func_02092994(arg3,0);
*(u16 *)(arg0+4)=func_02092994(arg3,0);
*(u8 *)(arg0+6)=func_02092994(arg3,0);
*(u8 *)(arg0+7)=func_02092994(arg3,0);
*(u16 *)(arg0+22)=func_02092994(arg3,0);
*(u16 *)(arg0+24)=func_02092994(arg3,0);
*(u8 *)(arg0+26)=func_02092994(arg3,0);
*(u16 *)(arg0+28)=func_02092994(arg3,0);
*(u8 *)(arg0+20)=func_02092994(arg3,0);
*(u32 *)(arg0+8)=func_02092994(arg3,0);
*(u16 *)(arg0+4)=func_02092994(arg3,0);
*(u16 *)(arg0+2)=func_02092994(arg3,0);
*(u8 *)(arg0+30)=func_02092994(arg3,0);
*(u8 *)(arg0+36)=func_02092994(arg3,0);
*(u16 *)(arg0+32)=func_02092994(arg3,0);
*(u16 *)(arg0+34)=func_02092994(arg3,0);
{u32 v=func_02092994(arg3,0); arg0[1]=arg1; *(u16 *)(arg0+38)=v;} *(u16 *)(arg0+56)=0; arg0[58]=0;
}

void func_0208a168(u8 *arg0, s32 arg1, s32 arg2, u32 *arg3) {
    arg3[2] = arg3[0];
    if (func_02092ab0(arg3, arg1) == -1) {
        return;
    }
    *(u16 *)(arg0 + 0x26) = func_02092994(arg3, 0);
}

void func_0208a1a0(s32 arg0) {
void *stream;
if(arg0==0) stream=func_021092d8(data_021486a4);
else if(arg0==1) stream=func_021092d8(data_021486bc);
else stream=func_021092d8(data_021486d0);
do {
s16 i=0;
s16 id=(u16)func_02092994(stream,0);
if(func_02022068(id)>=1 && id>0) {
func_021093f0(stream);func_021093f0(stream);func_021093f0(stream);
func_021093f0(stream);func_021093f0(stream);
do {
func_021093f0(stream);
i++;
}while(i<15);
*(s16 *)(data_0216010c+*(s16 *)(data_0216010c+0x50d4)*100+0x5570)=id;
{
u8 *p=data_0216010c;
u32 result=func_02022068(id);
*(u8 *)(p+*(s16 *)(p+0x50d4)*100+0x5572)=result;
}
{
u8 *p=data_0216010c;
u16 result=func_02092994(stream,0);
*(u16 *)(p+*(s16 *)(p+0x50d4)*100+0x559a)=result;
}
*(s16 *)(data_0216010c+0x50d4)+=1;
}
}while(func_02109444(stream)!=0);
func_021093b0(stream);
func_02015a3c(data_0216010c+0x5570,*(s16 *)(data_0216010c+0x50d4),100,func_02089b38);
}

s32 func_0208a318(s32 arg0) {
    switch (arg0) {
    case 1: return 0x1f41;
    case 2: return 0x1f55;
    case 3: return 0x1f91;
    case 4: return 0x1f5f;
    case 5: return 0x1f69;
    case 7: return 0x1f4b;
    case 8: return 0x1f9b;
    default: return 0;
    }
}

void func_020a8810(void *, s32);
void func_020895a0(s32,s32,s32,s32,s32,u16,s32,s32,s32);
void func_0208a3a4(u16 arg0) {
if((s8)data_0216010c[0x556d]==-1) {
func_020a994c(data_0216010c+0x3e4); return;
}
func_020a8810(*(void **)(data_0216010c+0x3e0),0x18);
func_020895a0(11,*(s16 *)(data_0216010c+0x50e4)<<12,0x23000,20,4,(u16)(arg0+1),0,0,0);
if(*(s16 *)(data_0216010c+0x50f8)&8) {
*(s16 *)(data_0216010c+0x50e4)=0x100+(*(s16 *)(data_0216010c+0x50fa)*-166)/10;
*(s16 *)(data_0216010c+0x50fa)+=1;
if(*(s16 *)(data_0216010c+0x50fa)>10) *(s16 *)(data_0216010c+0x50f8)&=~8;
}
}

void func_0208a4ac(void) {
    *(s16 *)(data_0216010c + 0x50e4) = 0x100;
    *(s16 *)(data_0216010c + 0x50fa) = 0;
    *(s16 *)(data_0216010c + 0x50f8) = 0;
    *(s16 *)(data_0216010c + 0x50f8) |= 8;
}

void func_0208a4f8(void) {
    s16 i;
    data_021600b0 = (u8 *)func_0210c594(0x4a1c, data_02155c3c);
    for (i = 0; i < 3; i++) {
        void **p = *(void ***)(data_0216010c + 0x64 + i * 4);
        if (p != NULL && *p != NULL) {
            func_020a9544(p);
            *(void **)(data_0216010c + 0x64 + i * 4) = NULL;
        }
    }
    *(void **)(data_0216010c + 0x64) = func_020a94b8(data_021486e4);
    *(void **)(data_0216010c + 0x68) = func_020a94b8(data_02148700);
    *(void **)(data_0216010c + 0x6c) = func_020a94b8(data_0214871c);
    for (i = 0; i < 12; i++) {
        func_020a994c(data_0216010c + 0x74 + i * 0x50);
    }
}

void func_0208a5e0(void) {
    s16 i;
    func_020a3b84();
    func_020a0da8();
    func_020a0dc8(data_021600b0 + 0x1d4);
    if (data_021600b0 != NULL) {
        func_0210c5dc(data_021600b0);
    }
    data_021600b0 = NULL;
    data_0216010c[0x3f] = 7;
    for (i = 0; i < 3; i++) {
        void **p = *(void ***)(data_0216010c + 0x64 + i * 4);
        if (p != NULL && *p != NULL) {
            func_020a9544(p);
            *(void **)(data_0216010c + 0x64 + i * 4) = NULL;
        }
    }
}

