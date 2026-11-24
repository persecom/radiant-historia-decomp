/* 7 functions from 0x0205FA44 to 0x020607F4 (main), found by ds-decomp. */
#include "common.h"
static inline s32 movement_speed(s32 state) {
 if(state==0x13ee) return 1200;
 return 2400;
}
extern u8 *data_02160244;
extern s32 *func_0202c5a0(u8 *);
extern s32 func_0202c5d8(u8 *);
extern s16 func_020265cc(void *);
extern void func_020d2bf0(u8 *, s32 *, s32, s32);

extern u8 *data_02160a6c;
extern u8 *data_02160a74;
extern void func_02025f84(u8 *, s32);
extern s32 func_0201fb1c(s32, s32);
extern void func_020d907c(u32);
extern void func_020d9090(void);
extern u8 *data_02160260;

extern void func_02060408(u8 *);
extern void func_020dd810(u8 *, s32, s32);
void func_02060328(u8 *arg0)
{
    u8 *r4 = *(u8 **)(arg0 + 0x128);
    u32 flags = *(u32 *)(arg0 + 0x80);
    s32 zero = 0;

    if (flags & 0x20000) {
        *(u32 *)(arg0 + 0x80) = flags & ~0x20000;
        *(u16 *)(*(u8 **)(arg0 + 0x118) + 0xbc) = zero;
    }
    if (*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) != 0) {
        func_02060408(arg0);
        *(u16 *)(arg0 + 0x8a) = 0x7fff;
        func_020dd810(arg0, 6, zero);
        *(u32 *)(arg0 + 0xf8) = zero;
    }
    if (*(data_02160260 + 0x8c) != 1 || *(u16 *)(arg0 + 0x8c) != 1) {
        if (*(u8 *)(arg0 + 0x104) != 6) {
            *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x70) = 1;
            func_020dd810(arg0, 6, zero);
            *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x70) = zero;
        }
    }
    *(u32 *)(r4 + 0x18) &= ~2;
    *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x70) = zero;
    *(u32 *)(*(u8 **)(arg0 + 0x118) + 4) = zero;
}

void func_02060408(u8 *arg0) {
func_02025f84(arg0,0x85);
func_02025f84(arg0,0x86);
func_02025f84(arg0,0x87);
func_02025f84(arg0,0x88);
func_02025f84(arg0,0x89);
func_02025f84(arg0,0x8a);
func_02025f84(arg0,0x8c);
func_02025f84(arg0,0x8d);
func_02025f84(arg0,0x8e);
func_02025f84(arg0,0x8f);
func_02025f84(arg0,0x90);
func_02025f84(arg0,0x91);
func_02025f84(arg0,0x92);
func_02025f84(arg0,0x93);
func_02025f84(arg0,0x94);
func_02025f84(arg0,0x95);
func_02025f84(arg0,0x96);
func_02025f84(arg0,0x97);
func_02025f84(arg0,0x98);
func_02025f84(arg0,0x99);
func_02025f84(arg0,0x9a);
func_02025f84(arg0,0x9b);
func_02025f84(arg0,0x9c);
func_02025f84(arg0,0x9e);
func_02025f84(arg0,0x9d);
func_02025f84(arg0,0xa5);
func_02025f84(arg0,0xad);
func_02025f84(arg0,0xae);
}

void func_02060560(u8 *arg0) {
    func_02025f84(arg0, 0x85);
    func_02025f84(arg0, 0x86);
    func_02025f84(arg0, 0x87);
    func_02025f84(arg0, 0x88);
    func_02025f84(arg0, 0x89);
    func_02025f84(arg0, 0x8d);
    func_02025f84(arg0, 0x8f);
    func_02025f84(arg0, 0x91);
    func_02025f84(arg0, 0x93);
    func_02025f84(arg0, 0x95);
    func_02025f84(arg0, 0x97);
    func_02025f84(arg0, 0x9b);
    func_02025f84(arg0, 0xae);
}

void func_02060604(void) {
    s32 x, y, z;
    u8 *node;
    s16 n;

    if (*(u16 *)(data_02160a6c + 0xc0) == 0) {
        return;
    }

    node = *(u8 **)(data_02160a6c + 0xb8);
    x = 0;
    y = 0;
    z = 0;
    n = 0;
    while (node != NULL) {
        n++;
        x += *(s32 *)(node + 0x0);
        y += *(s32 *)(node + 0x4);
        z += *(s32 *)(node + 0x8);
        node = *(u8 **)(node + 0x174);
    }

    node = data_02160a74;
    *(s32 *)(node + 0x1e8) = func_0201fb1c(x, n);
    *(s32 *)(node + 0x1ec) = func_0201fb1c(y, n) + 0x8000;
    *(s32 *)(node + 0x1f0) = func_0201fb1c(z, n);
    func_020d907c((u32)(data_02160a74 + 0x1e8));
    func_020d9090();
}

void func_020606bc(u8 *arg0) {
 u8 *p=*(u8 **)(arg0+0x128);
 s32 pos[3]; s32 *src; s32 dir; s32 y;
 if(data_02160244[0x10d]==1) return;
 src=func_0202c5a0(arg0);
 pos[0]=src[0]; pos[1]=src[1]; pos[2]=src[2];
 if(*(s32 *)(p+0x24)==0x13ee) {*(s32 *)(arg0+0x78)=1200; func_020ddd5c(arg0);}
 else {*(s32 *)(arg0+0x78)=2400; func_020ddd5c(arg0);}
 dir=func_0202c5d8(arg0);
 if(dir==0) dir=1;
 y=(dir*8192)%65536;
 if(dir==0) func_020d2bf0(arg0,pos,0,0);
 else func_020d2bf0(arg0,pos,y,16);
 y=(func_020265cc(*(void **)(arg0+0x124))*88+32)<<12;
 pos[1]=y;
 if(*(s32 *)(arg0+4)!=y) {
 if(*(s32 *)(arg0+4)<y) {
 func_0206ea84(107,*(u16 *)(arg0+0x90),0);
 func_020265d4(*(void **)(arg0+0x124),(*(s32 *)(arg0+4)>>12)-32);
 } else {
 func_0206ea84(107,*(u16 *)(arg0+0x90),1);
 func_02026608(*(void **)(arg0+0x124));
 }
 }
 *(s32 *)(p+0x24)=0x13ed;
}

