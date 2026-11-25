/* 9 functions from 0x02081D3C to 0x02082C70 (main), found by ds-decomp. */
#include "common.h"
void func_02082958(void);
void func_02082584(void);
extern u32 data_02162858;
extern u32 data_02162854;

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

extern s32 func_02085110(u8);
extern u8 *func_02021f10(s32);
s32 func_02082328(s32 arg0) {
    u8 buf[0x64];
    s32 zero = 0;
    s16 who;
    s32 all = 1;
    u8 *p;
    s16 kind;

    func_02081f08((u32 *)buf, (u8)arg0);
    kind = *(s16 *)(buf + 8);
    if (kind == 501) {
        if (buf[0xa] == 0xc) {
            for (who = 0; who < data_0216010c[0x614]; who++) {
                p = func_02021f10(func_02085110((u8)who));
                if (*(u16 *)(p + 0x10) != *(u16 *)(p + 0x12) + *(s16 *)(p + 0x24)) {
                    all = zero;
                }
            }
            if (all == 1) {
                return 0;
            } else {
                return 1;
            }
        }
        p = func_02021f10(func_02085110(data_0216010c[0x50de]));
        if (*(u16 *)(p + 0x10) == *(u16 *)(p + 0x12) + *(s16 *)(p + 0x24)) {
            all = zero;
        }
        return all;
    }
    if (kind == 502) {
        if (buf[0xa] == 0xc) {
            for (who = 0; who < data_0216010c[0x614]; who++) {
                p = func_02021f10(func_02085110((u8)who));
                if (*(u16 *)(p + 0x14) != *(u16 *)(p + 0x16) + *(s16 *)(p + 0x26)) {
                    all = zero;
                }
            }
            if (all == 1) {
                return 0;
            } else {
                return 1;
            }
        }
        p = func_02021f10(func_02085110(data_0216010c[0x50de]));
        if (*(u16 *)(p + 0x14) == *(u16 *)(p + 0x16) + *(s16 *)(p + 0x26)) {
            all = zero;
        }
        return all;
    }
    return zero;
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

extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a957c(void *);
extern void func_020a3b84(void);
extern void func_02107104(void);
extern void func_020a2e24(void);
extern void func_020ec218(void);
extern void func_020eb344(s32, s32);
extern void func_0210e290(s32);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210f138(void);
extern u32 data_02162858;
extern u32 data_02162854;
void func_02082958(void) {
    u8 *node;
    u8 *next;
    u8 i;

    node = *(u8 **)(data_0216010c + 0x5f0);
    while (node != NULL) {
        next = *(u8 **)(node + 0x30);
        func_021168f8(data_0216010c + 0x5f0, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }

    {
        u8 *next2;
        u8 *node2 = *(u8 **)(data_0216010c + 0x5fc);
        while (node2 != NULL) {
            next2 = *(u8 **)(node2 + 0x30);
            func_021168f8(data_0216010c + 0x5fc, node2);
            if (node2 != NULL) {
                func_0210c5dc(node2);
            }
            node2 = next2;
        }
    }

    node = *(u8 **)(data_0216010c + 0x608);
    while (node != NULL) {
        next = *(u8 **)(node + 0xc);
        func_021168f8(data_0216010c + 0x608, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }

    for (i = 0; i < 12; i++) {
        func_020a994c(data_0216010c + 0x74 + i * 0x50);
        func_020a98a0(data_0216010c + 0x74 + i * 0x50);
        {
            u8 *obj = *(u8 **)(data_0216010c + i * 0x50 + 0x70);
            ((void (*)(void *))(*(void **)(obj + 0xc)))(obj);
        }
    }

    for (i = 0; i < 10; i++) {
        if (*(void **)(data_0216010c + i * 4 + 0x48) != NULL) {
            func_020a957c(data_0216010c + 0x48 + i * 4);
        }
    }

    func_020a3b84();
    func_02107104();
    func_020a2e24();
    func_020ec218();
    func_020eb344(3, 1);
    func_0210e290(0);
    data_02162858 = 0;
    data_02162854 = 0;
    if (data_0216010c != NULL) {
        func_0210da14(data_0216010c);
        func_0210dba0(data_0216010c + 0x14);
        func_0210dbe8(data_0216010c + 0x28);
        if (data_0216010c != NULL) {
            func_0210c5dc(data_0216010c);
            data_0216010c = NULL;
        }
    }
    func_0210f138();
}

void func_02082b34(void) {
u8 **p=&data_0216010c;
s32 n;
switch((*p)[0x3f]) {
case 0: if((*p)[0x50b4] != 1) func_02082c70(); break;
case 1: func_02080db8(); break;
case 3: func_02085f44(); break;
case 2: func_0207d3cc(); break;
case 4: func_02085234(); break;
case 5: func_02087e84(); break;
case 6: func_0208a678(); break;
case 7: case 8: case 9: (*p)[0x3f]++; break;
case 10:
*(void **)(*p+0x68)=func_020a94b8(data_02148570);
*(void **)(*p+0x6c)=func_020a94b8(data_0214857c);
(*p)[0x3f]++; break;
case 11:
func_020a31c8(4);
n=44;
func_021167ac(*p+0x5f0,n);
func_021167ac(*p+0x5fc,n);
(*p)[0x3f]++; break;
case 12: func_02084828(); (*p)[0x3f]=0; break;
}
}

