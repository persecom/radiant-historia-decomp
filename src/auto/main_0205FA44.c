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
extern s32 _s32_div_f(s32, s32);
extern void func_020d907c(u32);
extern void func_020d9090(void);
extern u8 *data_02160260;

extern void func_02060408(u8 *);
extern void func_020dd810(u8 *, s32, s32);
extern s32 func_0202cd5c(u8 *, u8 *, s32);
extern void func_02030b7c(u8 *, s32, s32);
extern void func_0202659c(u8 *, s32);
extern void func_02026608(u8 *);
extern void func_020d9da8(s32);
extern void func_020d9ea8(s32, s32);
extern s32 func_020230c8(u32, s32);
extern u8 *func_0205bad4(u8 *);
extern u32 func_0205bcb0(u8 *, u16);
extern u32 func_020db1f4(u8 *, u8 *, u8, s32);
extern void func_0210d27c(s32);
extern void func_020daefc(u8 *, u8 *, u8 *, s32, u8 *, s32, s32);
extern void func_020d3fe8(u8 *, u8 *, u8 *);
extern s32 func_020d3160(s32, s32, void *, s32);
extern void func_02030468(u8 *, s32);
extern void func_0206e7a0(s32, u8 *, void *, s32);
extern void func_020d56d8(u8 *, u8 *, s32, s32);
extern void func_020619c8(u32);
extern void func_020bfff4(u16);
void func_02060110(u8 *, u8 *, u8 *, s32, s32);
void func_0205fa44(u8 *a0) {
    s32 zero = 0;
    u8 *r6 = *(u8 **)(a0 + 0x128);
    u8 *r7;
    u8 *r8 = zero;
    u8 *r9;
    u8 *arg0 = a0;
    s32 one = 1;
    u8 *sp10;
    u32 sp0c;
    s16 hitCount;
    u8 *target;
    s32 ok;
    u8 *event;
    u16 count;
    s16 val;
    u8 *info;
    u8 *status;

    func_020d9da8(0x20);
    func_020d9ea8(8, 0x30);

    r9 = *(u8 **)(r6 + 8);
    sp10 = *(u8 **)(r6 + 0xc);
    r7 = NULL;

    if (*(s8 *)(r6 + 0xa7) < *(s32 *)(r6 + 0x3c)) {
        *(s8 *)(r6 + 0xa7) += 1;
    }

    if (func_020230c8(*(u32 *)(r9 + 0x2c), 0x96) != 0) {
        for (r8 = func_0205bad4(r6); r8 != NULL; r8 = *(u8 **)(r8 + 0x18)) {
            if (*(void **)(r6 + 0) == *(void **)(r8 + 0)) {
                r7 = *(u8 **)(sp10 + 4);
                break;
            }
        }
        if (r7 == NULL) {
            for (r8 = func_0205bad4(r6); r8 != NULL; r8 = *(u8 **)(r8 + 0x18)) {
                r7 = *(u8 **)(r8 + 0);
                if (r7 != NULL && *(void **)(r7 + 0x118) != NULL) {
                    break;
                }
            }
        }
    }

    if (*(s8 *)(r6 + 0xa7) == *(s32 *)(r6 + 0x3c)) {
        if (*(u8 *)(r9 + 7) != 8 && *(u8 *)(r9 + 7) != 0xa) {
            if (*(u16 *)(*(u8 **)data_02160244 + 0x7e) == 0) {
                for (r8 = func_0205bad4(r6); r8 != NULL; r8 = *(u8 **)(r8 + 0x18)) {
                    target = *(u8 **)(r8 + 0);
                    ok = zero;
                    if (target != NULL && *(void **)(target + 0x118) != NULL) {
                        if (r7 != NULL) {
                            if (target == r7) {
                                ok = one;
                            }
                        } else {
                            ok = one;
                        }
                    }
                    if (ok && target != NULL && *(void **)(*(u8 **)(target + 0x118) + 0x70) != NULL) {
                        u8 side = *(u8 *)(*(u8 **)(target + 0x118) + 0);
                        if (side == 0 && *(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 1) {
                            if (*(u16 *)(*(u8 **)data_02160244 + 0x7e) == 0) {
                                *(u8 *)(*(u8 **)data_02160244 + 0x6c) = 2;
                                goto set_7e;
                            }
                        } else if (side == 1 && *(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 0 &&
                                   *(u16 *)(*(u8 **)data_02160244 + 0x7e) == 0) {
                            func_020d907c((u32)(target + 0x1a8));
                            *(u8 *)(*(u8 **)data_02160244 + 0x6c) = one;
                        set_7e:
                            *(u16 *)(*(u8 **)data_02160244 + 0x7e) = one;
                        }
                    }
                }
                *(s16 *)(r6 + 0x1c) |= 2;
            }
        }
    }

    sp0c = func_0205bcb0(arg0, (u16)*(u32 *)(r6 + 0x34));
    if ((sp0c & 1) && !(*(s16 *)(r6 + 0x1c) & 1)) {
        *(s16 *)(r6 + 0x1c) |= 1;
        switch (*(u8 *)(r9 + 7)) {
        case 8:
            *(u32 *)(*(u8 **)data_02160244 + 0x84) = func_020db1f4(arg0, r9, *(u8 *)(sp10 + 0x43), 0x1ff);
            if (*(s16 *)(r6 + 0x90) != 0) {
                func_0210d27c(*(s16 *)(r6 + 0x90));
                *(s16 *)(r6 + 0x90) = zero;
            }
            *(u8 *)(*(u8 **)data_02160244 + 0x6c) = 4;
            *(u16 *)(*(u8 **)data_02160244 + 0x7e) = one;
            break;
        case 10:
            func_020daefc(arg0, arg0, r9, zero, r8, zero, zero);
            if (*(s16 *)(r6 + 0x90) != 0) {
                func_0210d27c(*(s16 *)(r6 + 0x90));
                *(s16 *)(r6 + 0x90) = zero;
            }
            break;
        default: {
            if (*(u8 *)(r9 + 0) != 5) {
                func_020d3fe8(arg0, func_0205bad4(r6), r9);
                func_020d3160(one, (u8)*(s16 *)(r9 + 0x16), sp10, (u8)*(u16 *)(arg0 + 0x90));
                val = (s16)func_020d3160(8, zero, NULL, zero);
                if (*(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 0 && val >= 2) {
                    func_02030468(*(u8 **)(arg0 + 0x118), 5);
                }
            }
            hitCount = zero;
            for (r8 = func_0205bad4(r6); r8 != NULL; r8 = *(u8 **)(r8 + 0x18)) {
                target = *(u8 **)(r8 + 0);
                ok = zero;
                if (target != NULL && *(void **)(target + 0x118) != NULL) {
                    if (r7 != NULL) {
                        if (target == r7) {
                            ok = one;
                        }
                    } else {
                        ok = one;
                    }
                }
                if (ok && target != NULL && *(void **)(*(u8 **)(target + 0x118) + 0x70) != NULL) {
                    if (*(u16 *)(r6 + 0x40) & 2) {
                        *(u16 *)(r8 + 4) |= 0x10;
                    }
                    func_020daefc(arg0, target, r9, zero, r8, zero, zero);
                    if (*(s16 *)(r6 + 0x90) != 0) {
                        func_0210d27c(*(s16 *)(r6 + 0x90));
                    }
                    if (*(u8 *)(r9 + 0) == 5) {
                        struct {
                            s32 f00;
                            s32 f04;
                            s32 f08;
                            u8 f0c;
                            u8 pad0d;
                            u16 f0e;
                            u8 f10;
                            u8 pad11;
                            u16 f12;
                            u8 f14;
                        } eff;
                        s16 id = *(s16 *)(r9 + 0x16);
                        u8 q;
                        eff.f14 = id % 10;
                        q = (u8)(u16)(id / 10);
                        eff.f0c = zero;
                        eff.f0e = zero;
                        eff.f10 = zero;
                        eff.f12 = zero;
                        eff.f00 = zero;
                        eff.f04 = zero;
                        eff.f08 = zero;
                        func_0206e7a0(q, target, &eff, zero);
                        if (*(u8 *)(r9 + 0x1e) & 1) {
                            func_0210d27c(*(u8 *)(r9 + 0x1e));
                        }
                    }
                    hitCount++;
                    func_020d56d8(arg0, target, zero, one);
                    func_020d56d8(arg0, target, zero, 2);
                    if (*(u8 *)(*(u8 **)(target + 0x118) + 0) == 1) {
                        func_02060110(target, r9, r8, one, (s32)r6);
                    }
                }
            }
            if (*(u8 *)(r9 + 0) != 5 && *(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 0 && hitCount != 0) {
                func_02030468(*(u8 **)(arg0 + 0x118), one);
            }
            if (*(s16 *)(r6 + 0x90) != 0) {
                *(s16 *)(r6 + 0x90) = zero;
            }
            break;
        }
        }
    }

    if (sp0c & 2) {
        func_020dd810(arg0, zero, zero);
        *(s16 *)(r6 + 0x1c) |= 4;
    }

    if (*(s16 *)(r6 + 0x1c) & 2) {
        func_020d9090();
        *(u16 *)(*(u8 **)data_02160244 + 0x7e) += 2;
        if (*(u16 *)(*(u8 **)data_02160244 + 0x7e) > 10) {
            *(u16 *)(*(u8 **)data_02160244 + 0x7e) = 10;
        }
        if (*(u32 *)(*(u8 **)data_02160244 + 0x84) != 0) {
            func_020619c8(*(u32 *)(*(u8 **)data_02160244 + 0x84));
            *(u32 *)(*(u8 **)data_02160244 + 0x84) = zero;
        }
    }

    if (*(s16 *)(r6 + 0x1c) & 4) {
        s16 wait = *(s16 *)(r6 + 0xa4);
        *(s32 *)(r6 + 0x14) += 1;
        if (wait == 0) {
            *(u16 *)(*(u8 **)data_02160244 + 0x7e) = zero;
            *(s8 *)(r6 + 0xa7) = zero;
            func_020bfff4(*(u16 *)(arg0 + 0x90));
            if (*(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 0) {
                *(u16 *)(r6 + 0x1e) |= 0x100;
                *(s32 *)(r6 + 0x24) = 0x12b;
            } else if (*(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 1) {
                *(s32 *)(r6 + 0x24) = 0x270f;
            }
        } else if (*(s32 *)(r6 + 0x14) > wait) {
            *(u16 *)(*(u8 **)data_02160244 + 0x7e) = zero;
            *(s8 *)(r6 + 0xa7) = zero;
            func_020bfff4(*(u16 *)(arg0 + 0x90));
            if (*(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 0) {
                *(u16 *)(r6 + 0x1e) |= 0x100;
                *(s32 *)(r6 + 0x24) = 0x12b;
            } else if (*(u8 *)(*(u8 **)(arg0 + 0x118) + 0) == 1) {
                *(s32 *)(r6 + 0x24) = 0x270f;
            }
            *(s32 *)(r6 + 0x14) = zero;
        }
    }
}

#pragma optimize_for_size off
void func_02060110(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u8 *r4 = *(u8 **)(arg0 + 0x124);
    u8 *r5 = *(u8 **)(arg0 + 0x128);
    s32 r6;

    if (r4 == NULL) {
        return;
    }

    r6 = 1;
    if (arg3 == 0 && *(s32 *)(*(u8 **)(arg0 + 0x118) + 4) >= 1 && (*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x8c) & 0x20)) {
        r6 = 0;
    }

    if (!(*(u8 *)(*(u8 **)(arg0 + 0x118) + 0x64) & 2) && func_0202cd5c(arg0, arg1, arg4) != 0 && r6 != 0) {
        *(s32 *)(r5 + 0x24) = 0x13ec;
        if (!(*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x20)) {
            func_020dd810(arg0, 9, 0);
        }
        if (*(u32 *)(arg1 + 8) & 0x40) {
            *(u16 *)(r5 + 0x1e) |= 0x400;
        }
        *(u16 *)(r5 + 0x1e) |= 0x10;
        *(u8 *)(r5 + 0x7c) = 0;
    } else {
        func_02030b7c(arg0, 1, 0x1ff);
    }

    if (!(*(u8 *)(*(u8 **)(arg0 + 0x118) + 0x64) & 1) && (*(u32 *)(arg1 + 8) & 1) && r6 != 0) {
        *(s32 *)(r5 + 0x24) = 0x13ec;
        if (!(*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x20)) {
            func_020dd810(arg0, 9, 0);
        }
        func_0202659c(r4, 1);
        *(u16 *)(r5 + 0x1e) |= 0x10;
    }

    if ((*(u32 *)(arg1 + 8) & 1) || *(u16 *)(r4 + 0) != 3) {
        return;
    }

    *(s32 *)(r5 + 0x24) = 0x13ec;
    func_02026608(r4);
    *(u16 *)(r5 + 0x1e) |= 0x10;

    if (*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x90) & 2) {
        return;
    }
    if (*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x800000) {
        *(s16 *)(r4 + 0x10) = 0;
        return;
    }
    if (arg2 == NULL) {
        return;
    }

    if (*(s16 *)(r4 + 2) == 1) {
        *(s16 *)(r4 + 0x10) = *(s32 *)(arg2 + 8) / 2;
    } else if (*(s16 *)(r4 + 2) >= 2) {
        *(s16 *)(r4 + 0x10) = (*(s32 *)(arg2 + 8) * 75) / 100;
    }

    if (data_02160244[0x10c] == 1) {
        *(s16 *)(r4 + 0x10) += (s16)(*(s16 *)(arg0 + 0x1c6) / 2);
    }
}

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

#pragma opt_propagation off
void func_02060604(void)
{
  s32 x;
  s32 y;
  s32 *new_var;
  s32 z;
  u8 *node;
  u8 *b;
  s16 n;
  if ((*((u16 *) (data_02160a6c + 0xc0))) == 0)
  {
    return;
  }
  node = *((u8 **) (data_02160a6c + 0xb8));
  x = 0;
  y = 0;
  z = 0;
  n = 0;
  while (node != NULL)
  {
    node = (s32 *) node;
    new_var = node;
    x += *new_var;
    y += *((s32 *) (node + 4));
    z += *((s32 *) (node + 8));
    node = *((u8 **) (node + 0x174));
    n++;
  }

  b = data_02160a74;
  *((s32 *) (b + 0x1e8)) = _s32_div_f(x, n);
  *((s32 *) (b + 0x1ec)) = _s32_div_f(y, n) + 0x8000;
  *((s32 *) (b + 0x1f0)) = _s32_div_f(z, n);
  func_020d907c((u32) (data_02160a74 + 0x1e8));
  func_020d9090();
}
#pragma opt_propagation on
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

