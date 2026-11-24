/* 6 functions from 0x020451FC to 0x02045E60 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02162858[2],data_02162854,data_02162850;
extern u8 data_0216242c[20];
extern void *data_02155984;
extern void func_020eec70(void),func_020be844(void),func_020f4144(void),func_020a3b84(void),func_0203e6bc(void),func_020e9f44(void),func_020ec218(void),func_02107104(void),func_0210b894(void),func_02066f9c(void),func_020789ec(void),func_020f5798(void),func_02046bcc(void),func_02046600(void),func_0210f138(void);
extern void func_0210829c(s32,s32,s32),func_020f0090(s32),func_0203ef0c(s32),func_020eaa10(s32),func_020eb344(s32,s32),func_020bf414(s32),func_0210e290(s32);
extern void func_021168f8(void *,void *),func_0203be4c(void *),func_0210c5dc(void *),func_02046794(void *);
extern u8 *func_02044f70(void);

extern u8 *data_02160204;
extern u8 *data_021600b0;
extern void func_020a62d8(void *arg0);
extern void func_020a5ed4(void *arg0);
extern void func_020a0da8(void);
extern void func_020a0dc8(void *arg0);
extern void func_0210da14(void *arg0);
extern void func_0210dac8(void *arg0);
extern void func_0210dba0(void *arg0);
extern void func_0210dbe8(void *arg0);
extern void func_0210db10(void *arg0);
extern void func_0210db58(void *arg0);
extern void func_0209e85c(void);
extern void func_020a2898(void);
extern void func_020a2a50(void);
extern void func_0209df60(void *arg0);
extern u8 *data_021600ac;
extern void func_020a9544(void *arg0);
extern void func_020a994c(void *arg0);
extern void func_020a98a0(void *arg0);

void func_02045a78(void) {
    u8 **g = &data_021600b0;

    if (*g == NULL) {
        return;
    }
    func_020a62d8(*g + 0xa8);
    func_020a5ed4(*g + 0xb4);
    func_020a0da8();
    func_020a0dc8(*g + 0x1d4);
    func_0210da14(*g);
    func_0210da14(*g + 0x14);
    func_0210da14(*g + 0x28);
    func_0210dac8(*g + 0x3c);
    func_0210dba0(*g + 0x50);
    func_0210dbe8(*g + 0x64);
    func_0210db10(*g + 0x78);
    func_0210db58(*g + 0x8c);
    func_0209e85c();
    func_020a2898();
    func_020a2a50();
    func_0209df60(*(void **)(*g + 0x1c0));
    if (*g != NULL) {
        func_0210c5dc(*g);
        *g = NULL;
    }
}

void func_02045d84(void);
void func_02045b44(void) {
s32 zero,one;
u8 *next,*node;
func_020eec70();func_020be844();func_020f4144();
zero=0;
func_0210829c(zero,zero,zero);func_020a3b84();
one=1;
func_020f0090(one);func_0203e6bc();func_0203ef0c(one);
func_020eaa10(zero);func_020e9f44();func_020ec218();
func_020eb344(one,one);func_02107104();
func_020bf414(zero);func_0210e290(zero);
data_02162858[0]=zero;data_02162854=zero;
data_02155984=data_0216242c;data_02162850=one;
func_0210b894();data_02162850=zero;func_02066f9c();
node=*(u8 **)(data_021600ac+0x8ac);
while(node) {
next=*(u8 **)(node+0xc);
func_021168f8(data_021600ac+0x8ac,node);
func_0203be4c(*(void **)node);
if(node)func_0210c5dc(node);
node=next;
}
node=*(u8 **)(data_021600ac+0x384);
while(node) {
next=*(u8 **)(node+0x38);
func_021168f8(data_021600ac+0x384,node);
if(node)func_0210c5dc(node);
node=next;
}
if((*(u16 *)(data_021600ac+0x36e)&1)||(*(u16 *)(data_021600ac+0x36e)&2))func_020789ec();
if(*(void **)(data_021600ac+0x3a8)) {func_0210c5dc(*(void **)(data_021600ac+0x3a8));*(s32 *)(data_021600ac+0x3a8)=zero;}
if(*(void **)(data_021600ac+0x80)) {func_02046794(*(void **)(data_021600ac+0x80));data_021600ac[0x36c]=zero;}
*(s8 *)(data_02160204+0x86)=-1;func_020f5798();data_02160204[0x7a]=zero;
func_02046bcc();func_02046600();
if(data_021600ac) {
u8 *obj=*(u8 **)(data_021600ac+0x78);
(*(void (**)(void *))(obj+0xc))(obj);
func_02045d84();
if(data_021600ac) {func_0210c5dc(data_021600ac);data_021600ac=(u8 *)zero;}
}
func_0210f138();
if(data_02160204[0x7e]==1)data_02160204[0x7e]=zero;
if(!func_02044f70())return;
if(*(s32 *)func_02044f70()==4) {
*(u16 *)(data_02160204+0x74)=zero;*(u16 *)(data_02160204+0x76)=zero;
}
}

void func_02045d84(void) {
    typedef struct G {
        u8 pad0[0x9c];
        void *field_9c;
        void *field_a0;
        void *field_a4;
        void *field_a8;
        void *field_ac;
        void *field_b0;
        void *field_b4;
        u8 field_b8[1];
    } G;
    s32 i;
    s32 offset;
    void *obj;
    void (*fn)(void *);

    func_020a9544(((G *)data_021600ac)->field_9c);
    func_020a9544(((G *)data_021600ac)->field_a0);
    func_020a9544(((G *)data_021600ac)->field_a4);
    func_020a9544(((G *)data_021600ac)->field_a8);
    func_020a9544(((G *)data_021600ac)->field_ac);
    func_020a9544(((G *)data_021600ac)->field_b0);
    for (i = 0; i < 6; i++) {
        offset = i * 0x50;
        func_020a994c(((G *)data_021600ac)->field_b8 + offset);
        func_020a98a0(((G *)data_021600ac)->field_b8 + offset);
        obj = *(void **)((u8 *)data_021600ac + offset + 0xb4);
        fn = *(void (**)(void *))((u8 *)obj + 0xc);
        fn(obj);
    }
}

u32 func_02045e28(void) {
    u8 *p = data_02160204;
    return (p[0x7e] == 0 && *(u32 *)(data_021600ac + 0x10) == 0 && p[0x85] == 0) ? p[0x85] : p[0x7e];
}
