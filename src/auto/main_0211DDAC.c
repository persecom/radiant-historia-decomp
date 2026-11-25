/* 13 functions from 0x0211DDAC to 0x0211EA84 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_02170464[];
extern const u32 data_02144f08[];
extern u8 data_021701fc[];
extern void *data_02170460;
extern void func_02008e24(u32, void *, u32);
extern void func_02008e68(void *, u32, u32);
extern u32 data_02155f54[];
extern u32 data_02155f48[];
extern u32 data_02155f60[];
extern void func_0211de7c(void *, void *);

extern void (*data_02156070[])(void *, u32);
extern void (*data_02155f80[])(void *);
extern void (*data_02155f90[])(void *);
s32 func_0211ddac(u32 *arg0, u8 *arg1, u32 arg2) {
    s32 ret = 0;
    *arg0 = 0;
    do {
        if (arg2 < *(u8 *)(arg1 + 0x19)) {
            u16 val = *(u16 *)(arg1 + 0x1A + arg2 * 2);
            if ((val & 0x300) == 0x100) {
                void (*fn)(u32 *, u8 *, u32) = *(void (**)(u32 *, u8 *, u32))(arg1 + 0xC);
                if (fn != NULL) {
                    u32 tmp;
                    fn(&tmp, arg1, val & 0xFF);
                    *arg0 |= tmp;
                    ret = 1;
                }
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    } while (arg1 != NULL);
    return ret;
}

void func_0211de34(u8 *arg0) {
    do {
        u8 cmd;
        *(u32 *)(arg0 + 8) &= ~0x40;
        cmd = **(u8 **)arg0;
        data_02156070[cmd & 0x1F](arg0, cmd & 0xE0);
    } while ((*(u32 *)(arg0 + 8) & 0x20) == 0);
}

void func_0211de7c(void *arg0, void *arg1) {
    func_02008e68(0, arg0, 0x188);
    *(u32 *)((u8 *)arg0 + 0xc4) = 1;
    *(u32 *)((u8 *)arg0 + 8) = 1;
    if (*(u32 *)((u8 *)arg1 + 0x30) == 0) {
        u8 *t = *(u8 **)((u8 *)arg1 + 4);
        *(u32 *)((u8 *)arg0 + 0) = (u32)(t + *(u32 *)(t + 4));
    } else {
        *(u32 *)((u8 *)arg0 + 0) = *(u32 *)((u8 *)arg1 + 0x30);
    }
    *(u32 *)((u8 *)arg0 + 4) = (u32)arg1;
    *(u32 *)((u8 *)arg0 + 0xd4) = (u32)(*(u8 **)((u8 *)arg1 + 4) ? *(u8 **)((u8 *)arg1 + 4) + 0x40 : 0);
    {
        u32 val;
        if (*(u8 **)((u8 *)arg1 + 4) != 0 && *(u32 *)(*(u8 **)((u8 *)arg1 + 4) + 8) != 0) {
            val = (u32)(*(u8 **)((u8 *)arg1 + 4) + *(u32 *)(*(u8 **)((u8 *)arg1 + 4) + 8));
        } else {
            val = 0;
        }
        *(u32 *)((u8 *)arg0 + 0xd8) = val;
    }
    {
        u32 val;
        if (*(u8 **)((u8 *)arg1 + 4) != 0 && *(u32 *)(*(u8 **)((u8 *)arg1 + 4) + 0xc) != 0) {
            val = (u32)(*(u8 **)((u8 *)arg1 + 4) + *(u32 *)(*(u8 **)((u8 *)arg1 + 4) + 0xc));
        } else {
            val = 0;
        }
        *(u32 *)((u8 *)arg0 + 0xdc) = val;
    }
    *(u32 *)((u8 *)arg0 + 0xe8) = data_02155f54[*(u8 *)(*(u8 **)((u8 *)arg1 + 4) + 0x15)];
    *(u32 *)((u8 *)arg0 + 0xec) = data_02155f48[*(u8 *)(*(u8 **)((u8 *)arg1 + 4) + 0x15)];
    *(u32 *)((u8 *)arg0 + 0xf0) = data_02155f60[*(u8 *)(*(u8 **)((u8 *)arg1 + 4) + 0x16)];
    *(u32 *)((u8 *)arg0 + 0xe0) = *(u32 *)(*(u8 **)((u8 *)arg1 + 4) + 0x1c);
    *(u32 *)((u8 *)arg0 + 0xe4) = *(u32 *)(*(u8 **)((u8 *)arg1 + 4) + 0x20);
    if (*(u32 *)((u8 *)arg1 + 0x20) != 0 && *(u8 *)((u8 *)arg1 + 0x24) < 0x20) {
        *(u32 *)((u8 *)arg0 + 0xc + *(u8 *)((u8 *)arg1 + 0x24) * 4) = *(u32 *)((u8 *)arg1 + 0x20);
        *(u8 *)((u8 *)arg0 + 0x8c + *(u8 *)((u8 *)arg1 + 0x24)) = *(u8 *)((u8 *)arg1 + 0x25);
    }
    if (*(u32 *)((u8 *)arg1 + 0) & 1) *(u32 *)((u8 *)arg0 + 8) |= 0x80;
    if (*(u32 *)((u8 *)arg1 + 0) & 2) *(u32 *)((u8 *)arg0 + 8) |= 0x100;
    if (*(u32 *)((u8 *)arg1 + 0) & 4) *(u32 *)((u8 *)arg0 + 8) |= 0x200;
    if (*(u32 *)((u8 *)arg1 + 0) & 8) *(u32 *)((u8 *)arg0 + 8) |= 0x400;
    if (*(u32 *)((u8 *)arg1 + 0x28) != 0) {
        ((void (*)(u8 *))(*(u32 *)((u8 *)arg1 + 0x28)))(arg0);
    }
    func_0211de34(arg0);
    *(u32 *)((u8 *)arg1 + 0) &= ~1;
}

void func_0211e014(u32 *arg0, u8 *arg1) {
    while (arg1 != NULL) {
        s32 i;
        for (i = 0; i < *(u8 *)(arg1 + 0x19); i++) {
            if (*(u16 *)(arg1 + 0x1A + i * 2) & 0x100) {
                arg0[i >> 5] |= 1 << (i & 0x1F);
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
}

void func_0211e078(u8 *arg0) {
 u8 temp[0x188];
 if((*(u32 *)arg0&0x10)==0x10) {
 s32 zero=0, size=8;
 func_02008e24(zero,arg0+0x3c,size);
 func_02008e24(zero,arg0+0x44,size);
 func_02008e24(zero,arg0+0x4c,size);
 if(*(void **)(arg0+8)) func_0211e014((u32 *)(arg0+0x3c),*(u8 **)(arg0+8));
 if(*(void **)(arg0+0x10)) func_0211e014((u32 *)(arg0+0x44),*(u8 **)(arg0+0x10));
 if(*(void **)(arg0+0x18)) func_0211e014((u32 *)(arg0+0x4c),*(u8 **)(arg0+0x18));
 *(u32 *)arg0&=~0x10;
 }
 if(data_02170460) func_0211de7c(data_02170460,arg0);
 else {
 data_02170460=temp;
 func_0211de7c(temp,arg0);
 data_02170460=NULL;
 }
}

void func_0211e158(u8 *arg0) {
    void (*fn)(void *) = *(void (**)(void *))(arg0 + 0xC);
    if (fn != NULL) {
        fn(arg0);
    }
    *(u8 **)arg0 += 1;
}

void func_0211e180(u8 *arg0)
{
  void (*fn)(void *) = *((void (**)(void *)) (arg0 + 0x10));
  if (fn != NULL)
  {
    fn(arg0);
  }
  *((u32 *) (arg0 + 8)) |= 0x20;
}

void func_0211e1a8(u8 *arg0) {
    u32 flags = *(u32 *)(arg0 + 8);
    if (!(flags & 0x200)) {
        u32 idx = (*(u8 **)arg0)[1];
        u32 mode;
        u32 handled;

        arg0[0xac] = (u8)idx;
        *(u32 *)(arg0 + 8) = flags | 4;
        *(u32 *)(arg0 + 0xb8) = (u32)(arg0 + 0x184);

        mode = *(void **)(arg0 + 0x14) != NULL ? arg0[0x8e] : 0;
        if (mode == 1) {
            *(u32 *)(arg0 + 8) &= ~0x40;
            (*(void (**)(void *))(arg0 + 0x14))(arg0);
            mode = *(void **)(arg0 + 0x14) != NULL ? arg0[0x8e] : 0;
            handled = *(u32 *)(arg0 + 8) & 0x40;
        } else {
            handled = 0;
        }
        if (!handled) {
            u8 *ctx = *(u8 **)(arg0 + 4);
            void *p = *(void **)(ctx + 0x18);
            if (p == NULL || !(*(u32 *)(ctx + 0x4c + (idx >> 5) * 4) & (1 << (idx & 0x1f))) ||
                !(*(s32 (**)(void *, void *, u32))(ctx + 0x1c))(*(void **)(arg0 + 0xb8), p, idx)) {
                **(u32 **)(arg0 + 0xb8) = (*(u8 **)arg0)[2] & 1;
            }
        }
        if (mode == 2) {
            *(u32 *)(arg0 + 8) &= ~0x40;
            (*(void (**)(void *))(arg0 + 0x14))(arg0);
            mode = *(void **)(arg0 + 0x14) != NULL ? arg0[0x8e] : 0;
            handled = *(u32 *)(arg0 + 8) & 0x40;
        } else {
            handled = 0;
        }
        if (!handled) {
            if (**(u32 **)(arg0 + 0xb8) != 0) {
                *(u32 *)(arg0 + 8) |= 1;
            } else {
                *(u32 *)(arg0 + 8) &= ~1;
            }
        }
        if (mode == 3) {
            *(u32 *)(arg0 + 8) &= ~0x40;
            (*(void (**)(void *))(arg0 + 0x14))(arg0);
        }
    }
    *(u8 **)arg0 += 3;
}

extern void func_021205ec(u32, void *, u32);
void func_0211e320(u8 *arg0) {
 u32 flags=*(u32 *)(arg0+8);
 if(!(flags&0x200) && (flags&1)) {
 u32 mode=*(void **)(arg0+0x18) != NULL ? arg0[0x8f]:0;
 u32 handled;
 if(mode==1) {
 *(u32 *)(arg0+8)&=~0x40;
 (*(void (**)(void *))(arg0+0x18))(arg0);
 mode=*(void **)(arg0+0x18) != NULL ? arg0[0x8f]:0;
 handled=*(u32 *)(arg0+8)&0x40;
 } else handled=0;
 if(!handled) {
 u32 value=(*(u8 **)arg0)[1];
 if(!(*(u32 *)(arg0+8)&0x100)) func_021205ec(0x14,&value,1);
 }
 if(mode==3) {
 *(u32 *)(arg0+8)&=~0x40;
 (*(void (**)(void *))(arg0+0x18))(arg0);
 }
 }
 *(u8 **)arg0+=2;
}

void func_0211e860(u8 *arg0) {
    u32 flags = *(u32 *)(arg0 + 8);
    u8 *p;
    u8 idx;
    u8 *tbl;
    u16 cmd;
    if (flags & 0x200) goto advance;
    p = *(u8 **)arg0;
    idx = p[1];
    if (flags & 1) goto parse;
    if (!(flags & 8)) goto parse;
    if (idx == *(u8 *)(arg0 + 0xad)) goto advance;
parse:
    tbl = *(u8 **)(arg0 + 0xd8);
    if (tbl == NULL) goto advance;
    if (idx >= tbl[5]) goto advance;
    {
        u16 off = *(u16 *)(tbl + 0xa);
        u16 size = *(u16 *)(tbl + 4 + off);
        u32 *ptr = (u32 *)(tbl + 8 + off + size * idx);
        cmd = *(u16 *)(tbl + *ptr);
        data_02155f80[cmd](arg0);
    }
advance:
    *(u8 **)arg0 += 2;
}

extern void func_02120534(void *, u32);
void func_0211e910(u8 *arg0, u32 arg1, u8 *arg2) {
    u32 mode = *(void **)(arg0 + 0x20) != NULL ? arg0[0x91] : 0;
    u32 handled;

    (void)arg1;
    if (mode == 1) {
        *(u32 *)(arg0 + 8) &= ~0x40;
        (*(void (**)(void *))(arg0 + 0x20))(arg0);
        mode = *(void **)(arg0 + 0x20) != NULL ? arg0[0x91] : 0;
        handled = *(u32 *)(arg0 + 8) & 0x40;
    } else {
        handled = 0;
    }
    if (!handled) {
        if (!(*(u32 *)(arg0 + 8) & 0x100)) {
            func_02120534(arg2 + *(u32 *)(arg2 + 8), *(u32 *)(arg2 + 0xc));
        }
    }
    if (mode == 2) {
        *(u32 *)(arg0 + 8) &= ~0x40;
        (*(void (**)(void *))(arg0 + 0x20))(arg0);
        mode = *(void **)(arg0 + 0x20) != NULL ? arg0[0x91] : 0;
    }
    if (mode == 3) {
        *(u32 *)(arg0 + 8) &= ~0x40;
        (*(void (**)(void *))(arg0 + 0x20))(arg0);
    }
}

void func_0211e9e4(u8 *arg0) {
    u32 flags = *(u32 *)(arg0 + 8);
    u8 *p;
    u8 idx;
    u8 *tbl;
    u16 cmd;
    if (flags & 0x200) goto advance;
    if (!(flags & 1)) goto advance;
    if (flags & 2) goto advance;
    p = *(u8 **)arg0;
    idx = p[1];
    tbl = *(u8 **)(arg0 + 0xdc);
    if (tbl == NULL) goto advance;
    if (idx >= tbl[1]) goto advance;
    {
        u16 off = *(u16 *)(tbl + 6);
        u16 size = *(u16 *)(tbl + 4 + off);
        u32 *ptr = (u32 *)(tbl + 8 + off + size * idx);
        cmd = *(u16 *)(tbl + *ptr);
        data_02155f90[cmd](arg0);
    }
advance:
    *(u8 **)arg0 += 2;
}

