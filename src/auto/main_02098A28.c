/* 2 functions from 0x02098A28 to 0x020996E0 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160120, *data_02160204;
extern u32 data_02162858[2], data_02162854;

extern void func_020a2c20(void);
extern void func_0210f6d4(void);
extern void func_020a31c8(void);
extern void func_020a2dd0(void);
extern void func_020a2e64(void);
extern void func_020eb180(u32, u32);
extern s32 func_020bd490(s32, u32);
extern void func_0209c510(u32, u8);
extern u8 *func_02021f10(s32);
extern u32 data_02162854;
extern u32 data_02162858[2];
extern u32 data_02160a6c;
extern u32 data_021488c4[3];
void func_02098a28(void) {
    s32 a = 2, b = 3, c = 1, zero = 0;
    s16 i;
    u8 *p;

    func_020a2c20();
    func_0210f6d4();
    data_02162854 = data_021488c4[0];
    data_02162858[0] = data_021488c4[0];
    *(u16 *)&data_02160a6c |= 0x8000;
    func_020a31c8();
    func_020a2dd0();
    func_020a2e64();
    for (i = 0; i < 3; i++) {
        func_020eb180(zero, zero);
        if (func_020bd490(zero, (u8)i) == 0) {
            if (func_020bd490(a, (u8)i) == 0) {
                func_020bd490(c, (u8)i) - 1;
            } else {
                func_020bd490(b, (u8)i);
            }
        } else {
            p = func_02021f10(func_020bd490(b, (u8)i));
            if (p != 0) func_0209c510((u16)i, p[0x42]);
        }
    }
}

void func_02099480(void) {
s32 zero; u8 *node; s32 i;
func_020eaacc();func_020f25dc();func_020a3b84();func_02112ed8();func_020a2e24();
zero=0; func_020eb344(zero,zero);func_020dcca4();
if(data_02160120) {
func_0209c0fc(*(void **)(data_02160120+0x704)); *(s32 *)(data_02160120+0x704)=zero;
while((node=*(u8 **)(data_02160120+0x6d4))!=0) {
u8 *p;
func_0209c920(node);func_021168f8(data_02160120+0x6d4,node);
p=*(u8 **)(node+0x30); (*(void (**)(void *))(p+12))(p);
if(node) func_0210c5dc(node);
}
while((node=*(u8 **)(data_02160120+0x708))!=0) {
func_021168f8(data_02160120+0x708,node); if(node) func_0210c5dc(node);
}
for(i=0;i<7;i++) {
u8 *p=*(u8 **)(data_02160120+0x718+4*i);
if(p) { (*(void (**)(void *))(p+12))(p); *(s32 *)(data_02160120+0x718+4*i)=zero; }
}
for(i=0;i<5;i++) {
func_020a9544(*(void **)(data_02160120+0x6a4+4*i));
func_020a9544(*(void **)(data_02160120+0x6bc+4*i));
}
func_020a9544(*(void **)(data_02160120+0x6a0));
while((node=*(u8 **)(data_02160120+0x6ec))!=0) {
func_021168f8(data_02160120+0x6ec,node); if(node) func_0210c5dc(node);
}
func_020a9544(*(void **)(data_02160120+0x794));
func_020a9544(*(void **)(data_02160120+0x798));
{u8 *p=*(u8 **)(data_02160120+0x79c); (*(void (**)(void *))(p+12))(p);}
{u8 *p=*(u8 **)(data_02160120+0x7a0); (*(void (**)(void *))(p+12))(p);}
{u8 *p=*(u8 **)(data_02160120+0x7a4); (*(void (**)(void *))(p+12))(p);}
func_0210da14(data_02160120);func_0210dbe8(data_02160120+0x14);func_0210dba0(data_02160120+0x28);
if(data_02160120) {func_0210c5dc(data_02160120);data_02160120=0;}
}
func_0210e290(zero);
data_02162858[0]=zero;data_02162854=zero;
data_02160204[0x140]=zero;*(u16 *)(data_02160204+0x142)=zero;*(u16 *)(data_02160204+0x144)=zero;
func_0210f138();
}
