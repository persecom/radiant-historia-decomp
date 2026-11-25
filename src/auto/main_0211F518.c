/* 7 functions from 0x0211F518 to 0x02120518 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02155f70[], data_02155f7c[];
extern u32 data_02155f74[], data_02155fa0[];
extern u8 data_021702dc[];
extern void *func_0211d7d4(void);
extern void func_021204a8(void);
extern s32 func_02002f3c(void *);
extern u8 data_021701fc[],data_02170248[],data_021702b8[];
extern void func_021206c8(s32, void *);

extern u8 data_02173164[12];
extern void func_02120500(void);

typedef struct {
    s32 m0;
    s32 m4;
    s32 m8;
} DataStruct;
extern void func_021205ec(s32, void *, s32);
static inline u32 texcoord_0211fda4(s16 s,s16 t) {
return (u16)s|((u32)(u16)t<<16);
}
static inline s32 texfixed_021200f4(s32 v) { return (v << 8) >> 16; }
static inline u32 texcoord_021200f4(s32 s,s32 t) {
u16 y=texfixed_021200f4(t), x=texfixed_021200f4(s);
return x | ((u32)y << 16);
}
static inline u8 *dict_entry_0211fda4(u8 *dict,u32 index) {
if(dict && index<dict[1]){
u16 offset=*(u16 *)(dict+6);
u16 unit=*(u16 *)(dict+offset);
return dict+offset+4+unit*index;
}
return 0;
}
static inline u8 *material_0211fda4(u8 *base,u32 index) {
if(base){u32 *entry=(u32 *)dict_entry_0211fda4(base+4,index);if(entry)return base+*entry;}
return 0;
}
extern void func_02008e50(void *, u32, u32);

extern void func_02120534(u32 *, u32);
void func_0211fc60(u8 *arg0) {
    s32 mode;
    s32 r1;
    u8 *p;
    u32 off;
    u32 val;

    mode = (*(void (**)(u8 *))(arg0 + 0x34) != NULL) ? *(u8 *)(arg0 + 0x96) : 0;
    if (mode == 1) {
        {
            void (*fn)(u8 *) = *(void (**)(u8 *))(arg0 + 0x34);
            *(u32 *)(arg0 + 8) &= ~0x40;
            fn(arg0);
        }
        mode = (*(void (**)(u8 *))(arg0 + 0x34) != NULL) ? *(u8 *)(arg0 + 0x96) : 0;
        r1 = *(u32 *)(arg0 + 8) & 0x40;
    } else {
        r1 = 0;
    }
    if (!(*(u32 *)(arg0 + 8) & 0x100) && r1 == 0) {
        p = *(u8 **)(arg0 + 0);
        off = (u32)p[1] | ((u32)p[2] << 8) | ((u32)p[3] << 16) | ((u32)p[4] << 24);
        val = (u32)p[5] | ((u32)p[6] << 8) | ((u32)p[7] << 16) | ((u32)p[8] << 24);
        func_02120534((u32 *)(p + off), val);
    }
    if (mode == 3) {
        void (*fn)(u8 *) = *(void (**)(u8 *))(arg0 + 0x34);
        *(u32 *)(arg0 + 8) &= ~0x40;
        fn(arg0);
    }
    *(u8 **)(arg0 + 0) += 9;
}

void func_0211fd3c(u8 *arg0, s32 arg1) {
    s32 flags = *(s32 *)(arg0 + 8);
    s32 arr[3];
    s32 val;

    if (flags & 0x100) goto end;
    if (flags & 0x200) goto end;

    val = arg1 == 0 ? *(s32 *)(arg0 + 0xe0) : *(s32 *)(arg0 + 0xe4);
    arr[0] = val;
    arr[1] = val;
    arr[2] = val;
    func_021205ec(0x1b, arr, 3);
    *(s32 *)arg0 += 1;
end:
    ;
}

void func_0211fda4(u8 *p){
s32 matrix[9];
s32 mode,skip;
if(!(*(u32 *)(p+8)&0x200) && (*(u32 *)(p+8)&1)){
u8 *material=*(u8 **)(p+0xb0);
if((*(u32 *)(material+0x10)&0xc0000000)!=0x80000000){
*(u32 *)(material+0x10)&=~0xc0000000;
*(u32 *)(*(u8 **)(p+0xb0)+0x10)|=0x80000000;
data_02155f70[3]=*(u32 *)(*(u8 **)(p+0xb0)+0x10);
func_021205ec(data_02155f70[2],data_02155f7c,1);
}
{u32 command=3;func_021205ec(0x10,&command,1);}
mode=*(void **)(p+0x3c)?p[0x98]:0;
if(mode==1){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(u8 *))(p+0x3c))(p);
mode=*(void **)(p+0x3c)?p[0x98]:0;
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(skip==0){
s32 scale[3];
s32 width,height;
height=*(u16 *)(*(u8 **)(p+0xb0)+0x2e);
width=*(u16 *)(*(u8 **)(p+0xb0)+0x2c);
scale[0]=width<<15;scale[1]=-height<<15;scale[2]=0x10000;
func_021205ec(0x1b,scale,3);
{u32 packed=texcoord_0211fda4((s16)(width<<3),(s16)(height<<3));func_021205ec(0x22,&packed,1);}
}
if(mode==2){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(u8 *))(p+0x3c))(p);
mode=*(void **)(p+0x3c)?p[0x98]:0;
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(skip==0){
u8 *data=material_0211fda4(*(u8 **)(p+0xd8),(*(u8 **)p)[1]);
{
u16 flags=*(u16 *)(data+0x1e);
if(flags&0x2000){
u8 *mtx=data+0x2c;
if(!(flags&2))mtx+=8;
if(!(flags&4))mtx+=4;
if(!(flags&8))mtx+=8;
func_021205ec(0x18,mtx,16);
}}
}
if(mode==3){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(u8 *))(p+0x3c))(p);

skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(skip==0){
{u32 command=2;func_021205ec(0x10,&command,1);}
func_021206c8(0,matrix);
{u32 command=3;func_021205ec(0x10,&command,1);}
if(*(u32 *)(data_021701fc+0xfc)&1){
func_021205ec(0x1a,data_02170248,9);
func_021205ec(0x1a,data_021702b8,9);
func_021205ec(0x1a,matrix,9);
}else if(*(u32 *)(data_021701fc+0xfc)&2){
func_021205ec(0x1a,data_02170248,9);
func_021205ec(0x1a,matrix,9);
}else func_021205ec(0x1a,matrix,9);
}
{u32 command=2;func_021205ec(0x10,&command,1);}
}
*(u8 **)p+=3;
}

void func_021200f4(u8 *p){
s32 matrix[12];
s32 clip[16];
s32 zero=0;
s32 mode,skip;
if(!(*(u32 *)(p+8)&0x200) && (*(u32 *)(p+8)&1)){
u8 *material;
func_021206c8((s32)matrix,0);
{u32 command=30;func_021205ec(0x13,&command,1);}
material=*(u8 **)(p+0xb0);
if((*(u32 *)(material+0x10)&0xc0000000)!=0xc0000000){
*(u32 *)(material+0x10)&=~0xc0000000;
*(u32 *)(*(u8 **)(p+0xb0)+0x10)|=0xc0000000;
data_02155f70[1]=*(u32 *)(*(u8 **)(p+0xb0)+0x10);
func_021205ec(data_02155f70[0],data_02155f74,1);
}
mode=*(void **)(p+0x40)?p[0x99]:0;
if(mode==1){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(u8 *))(p+0x40))(p);
mode=*(void **)(p+0x40)?p[0x99]:0;
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(skip==0){
s32 width,height;
height=*(u16 *)(*(u8 **)(p+0xb0)+0x2e);
width=*(u16 *)(*(u8 **)(p+0xb0)+0x2c);
data_02155fa0[0]=width<<15;
data_02155fa0[5]=-height<<15;
data_02155fa0[12]=width<<15;
data_02155fa0[13]=height<<15;
func_021205ec(0x16,data_02155fa0,16);
}
if(mode==2){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(u8 *))(p+0x40))(p);
mode=*(void **)(p+0x40)?p[0x99]:0;
skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(skip==0){
u8 *data=material_0211fda4(*(u8 **)(p+0xd8),(*(u8 **)p)[1]);
{
u16 flags=*(u16 *)(data+0x1e);
if(flags&0x2000){
u8 *mtx=data+0x2c;
if(!(flags&2))mtx+=8;
if(!(flags&4))mtx+=4;
if(!(flags&8))mtx+=8;
func_021205ec(0x18,mtx,16);
}}
}
if(mode==3){
*(u32 *)(p+8)&=~0x40;
(*(void (**)(u8 *))(p+0x40))(p);

skip=*(u32 *)(p+8)&0x40;
}else skip=0;
if(skip==0){
if(*(u32 *)(data_021701fc+0xfc)&1){
func_021205ec(0x1c,data_021702dc,3);
func_021205ec(0x1a,data_021702b8,9);
func_021205ec(0x19,matrix,12);
}else if(*(u32 *)(data_021701fc+0xfc)&2){
func_021205ec(0x19,matrix,12);
}else {
func_021205ec(0x19,func_0211d7d4(),12);
func_021205ec(0x19,matrix,12);
}
func_021204a8();
*(volatile u32 *)0x4000440=zero;
*(volatile u32 *)0x4000444=zero;
*(volatile u32 *)0x4000454=zero;
while(func_02002f3c(clip)!=0){}
*(volatile u32 *)0x4000448=1;
*(volatile u32 *)0x4000440=3;
func_021205ec(0x16,clip,16);
{u32 packed=texcoord_021200f4(clip[13]>>4,clip[12]>>4);func_021205ec(0x22,&packed,1);}
}
{u32 command=2;func_021205ec(0x10,&command,1);}
{u32 command=30;func_021205ec(0x14,&command,1);}
}
*(u8 **)p+=3;
}

void func_021204a8(void) {
    u8 *p;

    if (*(s32 *)(data_02173164 + 4) != 0) {
        func_02120500();
    }
    p = *(u8 **)data_02173164;
    if (p == 0 || *(s32 *)p == 0) return;
    func_02008e50(p + 4, (void *)0x4000400, *(s32 *)p * 4);
    *(s32 *)p = 0;
}

void func_02120500(void) {
    while (((volatile DataStruct *)data_02173164)->m4 != 0) {
    }
}
