/* 2 functions from 0x02079874 to 0x0207A6B8 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204, *data_021600ac, *data_021600bc;
extern u8 *data_02160a80[4];
extern const s16 data_0213a394[];
extern u16 data_021626aa[3], data_02162908[4], data_02151fc8;
extern s32 data_02170248[], data_02170204[];
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
static inline int collision_02079874(u8 *a,u8 *b) {
s32 *ca=*(s32 **)(a+0xb0), *cb=*(s32 **)(b+0xb0);
if(ca && cb) {
int ra=*ca, rb=*cb;
if(ra && rb) {
int ax=*(s32 *)a, az=*(s32 *)(a+8), bx=*(s32 *)b, bz=*(s32 *)(b+8);
return ax-ra<bx+rb && bx-rb<ax+ra && az-ra<bz+rb && bz-rb<az+ra;
}
if(a[0x9d] && b[0x9d]) return func_0210c2f4(a,b)<((a[0x9d]+b[0x9d])<<12);
if(a[0x9d] && rb) {
int x=*(s32 *)a,z=*(s32 *)(a+8),x0=*(s32 *)b-rb,x1=*(s32 *)b+rb,z0=*(s32 *)(b+8)-rb,z1=*(s32 *)(b+8)+rb;
u8 i;
for(i=0;i<8;i++) {
int angle=(u16)(i<<13);
int idx=(angle%65536)>>4;
int px=x+a[0x9d]*data_0213a394[idx*2], pz=z+a[0x9d]*data_0213a394[idx*2+1];
int hit;
if(px>=x0 && px<=x1 && pz>=z0 && pz<=z1) hit=1;else hit=0;
if(hit) return 1;
}
} else if(b[0x9d] && ra) {
int x=*(s32 *)b,z=*(s32 *)(b+8),x0=*(s32 *)a-ra,x1=*(s32 *)a+ra,z0=*(s32 *)(a+8)-ra,z1=*(s32 *)(a+8)+ra;
u8 i;
for(i=0;i<8;i++) {
int angle=(u16)(i<<13);
int idx=(angle%65536)>>4;
int px=x+b[0x9d]*data_0213a394[idx*2], pz=z+b[0x9d]*data_0213a394[idx*2+1];
int hit;
if(px>=x0 && px<=x1 && pz>=z0 && pz<=z1) hit=1;else hit=0;
if(hit) return 1;
}
}
}
return 0;
}

void func_0207a6b4(void) {
}
