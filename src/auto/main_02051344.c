/* 6 functions from 0x02051344 to 0x02052328 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
extern s16 data_0213a394[];
extern u32 data_02162908[2];
extern s32 func_0210c2f4(u8 *, u8 *);
extern s32 func_020ef4c8();
extern u8 *data_021600bc, *data_021600ac;
extern u8 *func_02047820(u16);
extern void func_020477dc(void *, s32, s32);

typedef struct {
    u8 b0 : 1;
    u8 b1 : 1;
} Flags_02051344;

typedef struct {
    s32 x, y, z;
} Vec3_02051344;

static inline s32 check_active_02051344(u8 *other) {
    if ((*(u32 *)(other + 0xac) & 1) == 0) {
        return 0;
    }
    return 1;
}

static inline s32 check_id_02051344(u8 *a, u8 *b) {
    if (*(u16 *)(a + 0x8e) > 0x64 && *(u16 *)(a + 0x8e) < 0x2bc &&
        *(u16 *)(b + 0x8e) > 0x64 && *(u16 *)(b + 0x8e) < 0x2bc) {
        return 0;
    }
    return 1;
}

static inline void set_vec_02051344(s32 *dst, s32 x, s32 y, s32 z) {
    dst[0] = x;
    dst[1] = y;
    dst[2] = z;
}

static inline s32 check_hit_02051344(u8 *other, u8 *arg0) {
    if (!*(u32 *)(other + 0xb0) || !*(u32 *)(arg0 + 0xb0)) {
        return 0;
    }
    if (*(s32 *)(*(u8 **)(other + 0xb0)) != 0 && *(s32 *)(*(u8 **)(arg0 + 0xb0)) != 0) {
        s32 box0[4];
        s32 box1[4];
        s32 rad = 0;
        s32 ret;
        rad = *(s32 *)(*(u8 **)(other + 0xb0));
        box1[0] = *(s32 *)(other + 0) - rad;
        box1[2] = *(s32 *)(other + 0) + rad;
        box1[1] = *(s32 *)(other + 8) - rad;
        box1[3] = *(s32 *)(other + 8) + rad;
        rad = *(s32 *)(*(u8 **)(arg0 + 0xb0));
        box0[0] = *(s32 *)(arg0 + 0) - rad;
        box0[2] = *(s32 *)(arg0 + 0) + rad;
        box0[1] = *(s32 *)(arg0 + 8) - rad;
        box0[3] = *(s32 *)(arg0 + 8) + rad;
        if (box1[0] < box0[2] && box0[0] < box1[2] && box1[1] < box0[3] && box0[1] < box1[3]) {
            ret = 1;
        } else {
            ret = 0;
        }
        return ret;
    }
    if (*(u8 *)(other + 0x9d) != 0 && *(u8 *)(arg0 + 0x9d) != 0) {
        s32 ret;
        if (func_0210c2f4(other, arg0) < ((*(u8 *)(other + 0x9d) + *(u8 *)(arg0 + 0x9d)) << 12)) {
            ret = 1;
        } else {
            ret = 0;
        }
        return ret;
    }
    if (*(u8 *)(other + 0x9d) != 0 && *(s32 *)(*(u8 **)(arg0 + 0xb0)) != 0) {
        s32 box2[4];
        u8 i = 0;
        u8 r = 0;
        s32 rad = *(s32 *)(*(u8 **)(arg0 + 0xb0));
        box2[0] = *(s32 *)(arg0 + 0) - rad;
        box2[2] = *(s32 *)(arg0 + 0) + rad;
        box2[1] = *(s32 *)(arg0 + 8) - rad;
        box2[3] = *(s32 *)(arg0 + 8) + rad;
        r = *(u8 *)(other + 0x9d);
        for (i = 0; i < 8; i++) {
            u16 ang = (u16)(i << 13);
            s32 s = data_0213a394[(((s32)ang % 0x10000) >> 4) * 2];
            s32 px = *(s32 *)(other + 0) + r * s;
            s32 c = data_0213a394[(((s32)ang % 0x10000) >> 4) * 2 + 1];
            s32 pz = *(s32 *)(other + 8) + r * c;
            s32 hit;
            if (px >= box2[0] && px <= box2[2] && pz >= box2[1] && pz <= box2[3]) {
                hit = 1;
            } else {
                hit = 0;
            }
            if (hit) {
                return 1;
            }
        }
        return 0;
    }
    if (*(u8 *)(arg0 + 0x9d) != 0 && *(s32 *)(*(u8 **)(other + 0xb0)) != 0) {
        s32 box3[4];
        u8 i = 0;
        u8 r = 0;
        s32 rad = *(s32 *)(*(u8 **)(other + 0xb0));
        box3[0] = *(s32 *)(other + 0) - rad;
        box3[2] = *(s32 *)(other + 0) + rad;
        box3[1] = *(s32 *)(other + 8) - rad;
        box3[3] = *(s32 *)(other + 8) + rad;
        r = *(u8 *)(arg0 + 0x9d);
        for (i = 0; i < 8; i++) {
            u16 ang = (u16)(i << 13);
            s32 s = data_0213a394[(((s32)ang % 0x10000) >> 4) * 2];
            s32 px = *(s32 *)(arg0 + 0) + r * s;
            s32 c = data_0213a394[(((s32)ang % 0x10000) >> 4) * 2 + 1];
            s32 pz = *(s32 *)(arg0 + 8) + r * c;
            s32 hit;
            if (px >= box3[0] && px <= box3[2] && pz >= box3[1] && pz <= box3[3]) {
                hit = 1;
            } else {
                hit = 0;
            }
            if (hit) {
                return 1;
            }
        }
        return 0;
    }
    return 0;
}
#pragma optimization_level 0
void func_02051344(u8 *arg0) {
    u8 *other = NULL;
    u8 *info = NULL;
    s32 saved[3];
    s32 diff[3];

    info = *(u8 **)(arg0 + 0xb0);
    saved[0] = *(s32 *)(arg0 + 0xc);
    saved[1] = *(s32 *)(arg0 + 0x10);
    saved[2] = *(s32 *)(arg0 + 0x14);
    *(u32 *)(arg0 + 0xac) &= ~1;

    for (other = *(u8 **)(data_021600bc + 0x40); other; other = *(u8 **)(other + 0x13c)) {
        if (!check_active_02051344(other)) {
            continue;
        }
        if (!check_id_02051344(arg0, other)) {
            continue;
        }
        if (check_hit_02051344(other, arg0)) {
            diff[0] = *(s32 *)(arg0 + 0) - saved[0];
            diff[2] = *(s32 *)(arg0 + 8) - saved[2];
            *(s32 *)(arg0 + 0) -= diff[0];
            *(s32 *)(arg0 + 8) -= diff[2];
            if (*(u16 *)(arg0 + 0x90) == 0) {
                if (*(u16 *)(info + 4) == 0) {
                    *(u16 *)(info + 4) = *(u16 *)(other + 0x90);
                }
                if (*(u16 *)(other + 0x8e) != 0 && *(u16 *)(other + 0x8e) < 0x1388) {
                    *(u16 *)(info + 0xa) = *(u16 *)(*(u8 **)(other + 0xb0) + 0xa);
                    set_vec_02051344((s32 *)(arg0 + 0x24), *(s32 *)(arg0 + 0), *(s32 *)(arg0 + 4), *(s32 *)(arg0 + 8));
                }
            }
            if ((*(u16 *)(other + 0x90) == 0 && *(u16 *)(*(u8 **)(arg0 + 0xb0) + 8) != 0) ||
                *(u16 *)(arg0 + 0x8e) == 0x141 ||
                *(u16 *)(arg0 + 0x8e) == 0x1f5) {
                if (*(u16 *)(info + 4) == 0) {
                    *(u16 *)(info + 4) = *(u16 *)(other + 0x8e);
                }
                *(u16 *)(*(u8 **)(other + 0xb0) + 4) = *(u16 *)(arg0 + 0x90);
            }
            if (*(u32 *)(arg0 + 0xd0) != 0) {
                if (*(u16 *)(other + 0x90) == 0) {
                    *(u8 *)(arg0 + 0xa4) |= 1;
                } else {
                    *(u8 *)(arg0 + 0xa4) |= 2;
                }
            }
        } else {
            if (*(u16 *)(arg0 + 0x90) == 0) {
                if (*(u16 *)(*(u8 **)(other + 0xb0) + 4) == *(u16 *)(arg0 + 0x8e)) {
                    *(u16 *)(info + 4) = *(u16 *)(other + 0x90);
                }
            }
        }
    }
    *(u32 *)(arg0 + 0xac) |= 1;
}
void func_0205196c(u8 *arg0) {
    s32 savedx = *(s32 *)(arg0 + 0xc);
    s32 savedz = *(s32 *)(arg0 + 0x14);
    u8 *info = *(u8 **)(arg0 + 0xb0);
    u8 *other = *(u8 **)(*(u8 **)(data_021600bc) + 0x70);
    s32 radius;
    s32 ox0, ox1, oz0, oz1, ax0, ax1, az0, az1;
    s32 ok = 0, i, idx, px, pz;
    u16 ang;

    *(u32 *)(arg0 + 0xac) &= ~1;

    for (; other != NULL; other = *(u8 **)(other + 0x17c)) {
        ok = 0;
        if (!(*(u32 *)(other + 0xac) & 1)) continue;
        ang = *(u16 *)(arg0 + 0x8e);
        if (ang <= 100 || ang >= 0x2bc) continue;
        if (*(u16 *)(other + 0x8e) != 0x14b5) continue;

        if (*(u32 *)(other + 0xb0) != 0 && *(u32 *)(arg0 + 0xb0) != 0) {
            radius = *(s32 *)(*(u8 **)(other + 0xb0));
            ox0 = *(s32 *)(other) - radius;
            ox1 = *(s32 *)(other) + radius;
            oz0 = *(s32 *)(other + 8) - radius;
            oz1 = *(s32 *)(other + 8) + radius;
            radius = *(s32 *)(*(u8 **)(arg0 + 0xb0));
            ax0 = *(s32 *)(arg0) - radius;
            ax1 = *(s32 *)(arg0) + radius;
            az0 = *(s32 *)(arg0 + 8) - radius;
            az1 = *(s32 *)(arg0 + 8) + radius;
            if (ox0 < ax1 && ax0 < ox1 && oz0 < az1 && az0 < oz1) ok = 1;
            if (!ok) continue;
        } else if (*(u32 *)(other + 0xb0) == 0 || *(u32 *)(arg0 + 0xb0) == 0) {
            continue;
        }

        if (*(u8 *)(other + 0x9d) && *(u8 *)(arg0 + 0x9d)) {
            if (func_0210c2f4(other, arg0) < (*(u8 *)(other + 0x9d) + *(u8 *)(arg0 + 0x9d)) * 0x1000) {
                ok = 1;
                goto found;
            }
            continue;
        }

        if (*(u8 *)(other + 0x9d) && *(u32 *)(*(u8 **)(arg0 + 0xb0)) != 0) {
            for (i = 0; i < 8; i++) {
                idx = ((u16)(i << 13) % 0x10000) >> 4;
                px = *(s32 *)(arg0) + *(s8 *)(other + 0x9d) * data_0213a394[idx * 2] * 2;
                pz = *(s32 *)(arg0 + 8) + *(s8 *)(other + 0x9d) * data_0213a394[idx * 2 + 1] * 2;
                radius = *(s32 *)(*(u8 **)(other + 0xb0));
                ox0 = *(s32 *)(other) - radius;
                ox1 = *(s32 *)(other) + radius;
                oz0 = *(s32 *)(other + 8) - radius;
                oz1 = *(s32 *)(other + 8) + radius;
                if (px >= ox0 && px <= ox1 && pz >= oz0 && pz <= oz1) break;
            }
            if (i >= 8) continue;
            ok = 1;
            goto found;
        }

        if (*(u8 *)(arg0 + 0x9d) && *(u32 *)(*(u8 **)(other + 0xb0)) != 0) {
            for (i = 0; i < 8; i++) {
                idx = ((u16)(i << 13) % 0x10000) >> 4;
                px = *(s32 *)(other) + *(s8 *)(arg0 + 0x9d) * data_0213a394[idx * 2] * 2;
                pz = *(s32 *)(other + 8) + *(s8 *)(arg0 + 0x9d) * data_0213a394[idx * 2 + 1] * 2;
                radius = *(s32 *)(*(u8 **)(arg0 + 0xb0));
                ox0 = *(s32 *)(arg0) - radius;
                ox1 = *(s32 *)(arg0) + radius;
                az0 = *(s32 *)(arg0 + 8) - radius;
                az1 = *(s32 *)(arg0 + 8) + radius;
                if (px >= ox0 && px <= ox1 && pz >= az0 && pz <= az1) break;
            }
            if (i >= 8) continue;
            ok = 1;
            goto found;
        }
found:
        if (!ok) continue;
        *(s32 *)(arg0) -= savedx - *(s32 *)(arg0 + 0xc);
        *(s32 *)(arg0 + 8) -= savedz - *(s32 *)(arg0 + 0x14);
        if (*(u16 *)(info + 4) == 0) *(u16 *)(info + 4) = *(u16 *)(other + 0x90);
        if (*(u16 *)(arg0 + 0x90) == 0) {
            if (!(*(u32 *)(arg0 + 0xac) & 0x40) && (*(u32 *)(arg0 + 0xac) & 0x80) && *(u16 *)(data_02162908) == 0) {
                *(u32 *)(arg0 + 0xac) &= ~0x40;
                *(u32 *)(arg0 + 0xac) &= ~0x80;
            }
        }
        if (*(u32 *)(arg0 + 0xd0) != 0) *(u8 *)(arg0 + 0xa4) |= 4;
    }
    *(u32 *)(arg0 + 0xac) |= 1;
}

#pragma optimization_level 4
void func_02051ef4(void){
u8 *node,*obj;u32 size;
*(volatile u32 *)0x40004a4=0x31f00c0;
for(node=*(u8 **)(data_021600bc+0x7c);node;node=*(u8 **)(node+0x30)){
obj=*(u8 **)(node+0x28);
if(*(u32 *)(obj+0x80)&2){
*(volatile u32 *)0x40004a4=((data_021600bc[0x29]==0?10:31)<<16)|0x80;
func_020a3bbc(0);
if(data_021600bc[0x29]==0) *(volatile u32 *)0x4000480=0;
else *(volatile u32 *)0x4000480=0x294a;

*(volatile u32 *)0x4000444=0;
*(volatile u32 *)0x4000500=1;
size=obj[0x9d];
*(volatile u32 *)0x4000470=*(u32 *)obj;
*(volatile u32 *)0x4000470=func_020ef4c8(obj);
*(volatile u32 *)0x4000470=*(u32 *)(obj+8);
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x400046c=0x1000;
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x4000488=0;
*(volatile u32 *)0x4000490=0x3c0003c0;
*(volatile u32 *)0x4000488=0xf00000;
*(volatile u32 *)0x4000490=0x040003c0;
*(volatile u32 *)0x4000488=0xf000f0;
*(volatile u32 *)0x4000490=0x04000040;
*(volatile u32 *)0x4000488=0xf0;
*(volatile u32 *)0x4000490=0x3c000040;
*(volatile u32 *)0x4000504=0;
*(volatile u32 *)0x4000448=1;
}}
*(volatile u32 *)0x40004a4=0x31f00c0;
for(node=*(u8 **)(data_021600ac+0x384);node;node=*(u8 **)(node+0x38)){
obj=func_02047820((u16)(*(u16 *)(node+4)+0x2ee1));
if(obj){
*(volatile u32 *)0x40004a4=((data_021600bc[0x29]==0?10:31)<<16)|0x80;
func_020a3bbc(0);
if(data_021600bc[0x29]==0) *(volatile u32 *)0x4000480=0;
else *(volatile u32 *)0x4000480=0x294a;

size=obj[0x9d];
if(size){
*(volatile u32 *)0x4000444=0;
*(volatile u32 *)0x4000500=1;
*(volatile u32 *)0x4000470=*(u32 *)obj;
*(volatile u32 *)0x4000470=func_020ef4c8(obj);
*(volatile u32 *)0x4000470=*(u32 *)(obj+8);
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x400046c=0x1000;
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x4000488=0;
*(volatile u32 *)0x4000490=0x3c0003c0;
*(volatile u32 *)0x4000488=0xf00000;
*(volatile u32 *)0x4000490=0x040003c0;
*(volatile u32 *)0x4000488=0xf000f0;
*(volatile u32 *)0x4000490=0x04000040;
*(volatile u32 *)0x4000488=0xf0;
*(volatile u32 *)0x4000490=0x3c000040;
*(volatile u32 *)0x4000504=0;
*(volatile u32 *)0x4000448=1;
}
}
}
}

void func_02052240(u8 *arg0) {
    s32 val = func_020ef4c8();
    *(s32 *)(arg0 + 0x7c) = 0;
    *(s32 *)(arg0 + 0x4) = val;
    *(s32 *)(arg0 + 0x50) = val;
    if (data_02160aec != NULL && *(u8 **)(data_02160aec + 0x58be0) != NULL) {
        *(s32 *)(arg0 + 0x7c) = (*(u8 **)(data_02160aec + 0x58be0))[3];
    }
}

void func_02052284(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        func_020477dc(arg0, 2, 0);
        break;
    case 1:
        func_020477dc(arg0, 0, 0);
        break;
    case 2:
        func_020477dc(arg0, 1, 0);
        break;
    }
}

void func_020522d4(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        if (arg2 != 0) {
            if (arg0[0x9e] == 0) {
                *(s32 *)(arg0 + 0x78) = 6;
            }
            func_02052284(arg0, 2);
        } else {
            if (arg0[0x9e] == 0) {
                *(s32 *)(arg0 + 0x78) = 3;
            }
            func_02052284(arg0, 1);
        }
    } else {
        func_02052284(arg0, 0);
    }
}

