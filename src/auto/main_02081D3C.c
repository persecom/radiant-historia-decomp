/* 9 functions from 0x02081D3C to 0x02082C70 (main), found by ds-decomp. */
#include "common.h"

typedef struct Block_02081f08 {
    u32 w0, w1, w2, w3;
} Block_02081f08;

typedef struct Data_02081f08 {
    Block_02081f08 b[6];
    u32 last;
} Data_02081f08;

extern u8 data_02148538[];
extern u8 data_02148570[], data_0214857c[];
void func_02081f08(u32 *,s32);
void func_0210d27c(s32);
void *func_020a94b8(void *);
void func_020a994c(void *);
extern u32 data_02162870;
extern u8 *data_0216010c;
extern u8 *data_02160204;
extern void func_0210968c(u32, u32, u32);
extern void func_02109790(u32);

void func_02081d3c(void) {
Data_02081f08 buf, temp;
u8 *state=*(u8 **)(data_0216010c+0x44);
void **obj;
if(state[2]!=0) return;
if(*(s16 *)(data_0216010c+0x50d4)==0) return;
func_02081f08((u32 *)&temp,data_0216010c[0x50d7]);
buf=temp;
if(*(s16 *)((u8 *)&buf+8)!=501 && *(s16 *)((u8 *)&buf+8)!=502) {
func_0210d27c(7);
return;
}
data_0216010c[0x50de]=0;
if(((u8 *)&buf)[10]==12) *(s8 *)(data_0216010c+0x50de)=-1;
else data_0216010c[0x50de]=0;
state[0]=2;
obj=*(void ***)(data_0216010c+0x58);
if(obj!=NULL && *obj!=NULL) func_020a9544(obj);
*(void **)(data_0216010c+0x58)=func_020a94b8(data_02148538);
func_0210d27c(11);
func_020a994c(data_0216010c+0x2a4);
*(s16 *)(data_0216010c+0x5382)|=4;
}

void func_02081e78(void) {
    u8 **p = &data_0216010c;
    u16 i;
    u8 **q;
    void *z;
    if (*(void **)(*p + 0x44) != NULL) {
        func_0210c5dc(*(void **)(*p + 0x44));
        *(void **)(*p + 0x44) = 0;
    }
    q = &data_0216010c;
    i = 0;
    *(void **)(*q + 0x44) = i;
    (*q)[0x3f] = i;
    func_02089a98();
    z = i;
    for (; i < 2; i++) {
        void **v = *(void ***)(*q + 0x48 + i * 4);
        if (v != NULL && *v != NULL) {
            func_020a9544(v);
            *(void **)(*q + 0x48 + i * 4) = z;
        }
    }
}

void func_02081f08(u32 *dst, s32 idx) {
    Data_02081f08 *src = (Data_02081f08 *)(data_0216010c + idx * 0x64 + 0x5570);
    Data_02081f08 *d = (Data_02081f08 *)dst;
    *d = *src;
}

u16 func_020824e0(void) {
    data_02162870 = 1;
    func_02082584();
    data_02162870 = 0;
    func_0210968c(3, 0, 6);
    func_02109790(3);
    if (*(u8 *)(data_0216010c + 0x5000 + 0xb4) == 0) {
        func_0210dc88();
    } else {
        data_02162870 = 1;
        func_0210968c(3, -16, 6);
        func_02109790(3);
        func_02082958();
        func_0210dc88();
    }
    return *(u16 *)(data_02160204 + 0x100 + 0x1a);
}

void func_02082b34(void) {
switch(data_0216010c[0x3f]) {
case 0: if(data_0216010c[0x50b4] != 1) func_02082c70(); break;
case 1: func_02080db8(); break;
case 3: func_02085f44(); break;
case 2: func_0207d3cc(); break;
case 4: func_02085234(); break;
case 5: func_02087e84(); break;
case 6: func_0208a678(); break;
case 7: case 8: case 9: data_0216010c[0x3f]++; break;
case 10:
*(void **)(data_0216010c+0x68)=func_020a94b8(data_02148570);
*(void **)(data_0216010c+0x6c)=func_020a94b8(data_0214857c);
data_0216010c[0x3f]++; break;
case 11:
func_020a31c8(4);
func_021167ac(data_0216010c+0x5f0,44);
func_021167ac(data_0216010c+0x5fc,44);
data_0216010c[0x3f]++; break;
case 12: func_02084828(); data_0216010c[0x3f]=0; break;
}
}

