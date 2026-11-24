/* 12 functions from 0x02066D84 to 0x02067744 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 ids[6]; } IdList6_6713c;
typedef struct { u32 ids[18]; } IdList18_6713c;
extern const IdList6_6713c data_0213fc8c;
extern const IdList18_6713c data_0213fca4;
extern const u32 data_0213fc74;
extern u8 data_021477a0[];
extern void func_02067354(void *,s32);
extern void *func_02067294(void *,u32);
extern void func_021091b4(void);
extern u8 *data_021600e0[];
extern const s16 data_0213a394[];
typedef struct { s32 x,y,z; } UnkVec66;

extern void *func_0210c594(u32, u32);
extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_0210c5dc(void *);
extern void func_021167ac(void *, s32);
extern u32 data_02155c3c;
extern u8 *data_021600e8;
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0206713c(s32, s32);
extern void func_0206ed38(void);
extern void func_02067744(void);
s32 func_0210c2f4(void *,void *);
s32 func_02002404(s32,s32);
void func_02066d84(void) {
u8 *p=data_021600e0[1];
switch(p[0xe0]) { case 3: case 4:
*(s32 *)(p+0xfc)=*(s32 *)(p+0x16c);
*(s32 *)(p+0x100)=*(s32 *)(p+0x174);
if(func_0210c2f4(p+0x16c,p+0x160)>3) {
s32 a=func_02002404(*(s32 *)(p+0x160)-*(s32 *)(p+0x16c),*(s32 *)(p+0x168)-*(s32 *)(p+0x174));
a=(a%65536)>>4;
s32 x=data_0213a394[a*2], y=data_0213a394[a*2+1];
*(s32 *)(p+0x16c)+=(x*3)>>12;
*(s32 *)(p+0x174)+=(y*3)>>12;
} else {
*(UnkVec66 *)(p+0x16c)=*(UnkVec66 *)(p+0x160);
(*(void (**)(void))(p+0x178))();
}
break; default:
*(UnkVec66 *)(p+0xfc)=*(UnkVec66 *)(p+0x50);
}
*(s32 *)(p+0x44)=(*(s32 *)(p+0xfc) * *(s32 *)(p+0x6c))/4096+160;
*(s32 *)(p+0x48)=(*(s32 *)(p+0x100) * *(s32 *)(p+0x6c))/4096+88;
}

void func_02066eac(s32 arg0) {
    s32 val = 0x3f6;
    if (data_021600e8 != NULL) {
        return;
    }
    data_021600e8 = (u8 *)func_0210c594(0x60, data_02155c3c);
    func_021167ac(data_021600e8 + 0x3c, 8);
    func_021167ac(data_021600e8 + 0x48, 0x60);
    func_021167ac(data_021600e8 + 0x54, 0x24);
    *(void (**)(void))data_021600e8 = func_0206ed38;
    *(s32 *)(data_021600e8 + 4) = val;
    func_0210d9e4(data_021600e8);
    *(void (**)(void))(data_021600e8 + 0x14) = func_02067744;
    *(s32 *)(data_021600e8 + 0x18) = val - 0xc;
    func_0210db70(data_021600e8 + 0x14);
    if (arg0 == 0x12) {
        *(void (**)(void))(data_021600e8 + 0x28) = func_02067744;
        *(s32 *)(data_021600e8 + 0x2c) = val - 0xc;
        func_0210dbd0(data_021600e8 + 0x28);
    } else {
        *(void (**)(void))(data_021600e8 + 0x28) = NULL;
    }
    func_0206713c(arg0, 0);
}
