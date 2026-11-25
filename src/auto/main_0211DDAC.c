/* 13 functions from 0x0211DDAC to 0x0211EA84 (main), found by ds-decomp. */
#include "common.h"
typedef struct {u32 x,y;} Pair_0211e3ec;
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

#pragma peephole off
void func_0211e3ec(u8 *ctx,u32 command,u8 *mat,u32 idx) {
u32 stage,handled;
u32 zero=0;
u8 *out;
u32 packets[7];
*(u32 *)(ctx+8)|=8;
stage=*(void **)(ctx+0x1c)?ctx[0x90]:zero;
ctx[0xad]=idx;
*(u8 **)(ctx+0xb0)=ctx+0xf4;
if(stage==1) {
*(u32 *)(ctx+8)&=~0x40;
(*(void (**)(void *))(ctx+0x1c))(ctx);
stage=*(void **)(ctx+0x1c)?ctx[0x90]:0;
handled=*(u32 *)(ctx+8)&0x40;
} else handled=0;
if(!handled) {
u8 *cache=*(u8 **)(*(u8 **)(ctx+4)+0x38);
if(cache && !(*(u32 *)(ctx+8)&0x80)) out=cache+idx*0x38;
else if((command==0x20 || command==0x40) && (*(u32 *)(ctx+0xbc+(idx>>5)*4)&(1<<(idx&31)))) {
if(cache) out=cache+idx*0x38;
else out=data_02170464+idx*0x38;
} else {
u8 *tbl,*entry,*source;
u16 flags;
u32 maska,maskb,a,b;
if(cache) {
*(u32 *)(ctx+0xbc+(idx>>5)*4)|=1<<(idx&31);
out=*(u8 **)(*(u8 **)(ctx+4)+0x38)+idx*0x38;
} else if(command==0x40) {
*(u32 *)(ctx+0xbc+(idx>>5)*4)|=1<<(idx&31);
out=data_02170464+idx*0x38;
} else out=ctx+0xf4;
*(u32 *)out=zero;
tbl=*(u8 **)(ctx+0xd8);
if(tbl) {
u8 *dict=tbl+4;
if(dict && idx<tbl[5]) {
u16 offset=*(u16 *)(tbl+10);
entry=dict+offset+4+idx**(u16 *)(dict+offset);
} else entry=0;
if(entry) {source=tbl+*(u32 *)entry; goto source_done;} source=0;
} else source=0;
source_done:
flags=*(u16 *)(mat+0x1e);
if(*(u16 *)(source+0x1e)&0x20) *(u32 *)out|=0x20;
maska=data_02144f08[(flags>>6)&7];
a=*(u32 *)(mat+4);
maskb=data_02144f08[(flags>>9)&7];
b=*(u32 *)(mat+8);
*(u32 *)(out+4)=(*(u32 *)(data_021701fc+0x94)&~maska)|(a&maska);
*(u32 *)(out+8)=(*(u32 *)(data_021701fc+0x98)&~maskb)|(b&maskb);
*(u32 *)(out+12)=(*(u32 *)(data_021701fc+0x9c)&~*(u32 *)(mat+16))|(*(u32 *)(mat+12)&*(u32 *)(mat+16));
{u32 a=*(u32 *)(mat+20), b=*(u16 *)(mat+28);
*(u32 *)(out+16)=a;
*(u32 *)(out+20)=b;}
if(flags&1) {
u8 *p=mat+0x2c;
if(!(flags&2)) {*(Pair_0211e3ec *)(out+24)=*(Pair_0211e3ec *)p; p+=8;}
else *(u32 *)out|=1;
if(!(*(u16 *)(mat+30)&4)) {s32 a=*(s16 *)p,b=*(s16 *)(p+2); p+=4; *(s16 *)(out+32)=a; *(s16 *)(out+34)=b;}
else *(u32 *)out|=2;
if(!(*(u16 *)(mat+30)&8)) {*(Pair_0211e3ec *)(out+36)=*(Pair_0211e3ec *)p;}
else *(u32 *)out|=4;
*(u32 *)out|=8;
}
{
u8 *obj=*(u8 **)(ctx+4);
void *anim=*(void **)(obj+8);
if(anim && (*(u32 *)(obj+0x3c+(idx>>5)*4)&(1<<(idx&31))))
(*(void (**)(void *,void *,u32))(obj+12))(out,anim,idx);
}
if(*(u32 *)out&0x18) {
u32 b=*(u16 *)(mat+34),a=*(u16 *)(mat+32);
u32 c=*(u32 *)(mat+36);
*(u16 *)(out+44)=a; *(u16 *)(out+46)=b;
{u32 d=*(u32 *)(mat+40); *(u32 *)(out+48)=c; *(u32 *)(out+52)=d;}
}
}
*(u8 **)(ctx+0xb0)=out;
}
if(stage==2) {
*(u32 *)(ctx+8)&=~0x40;
(*(void (**)(void *))(ctx+0x1c))(ctx);
stage=*(void **)(ctx+0x1c)?ctx[0x90]:0;
handled=*(u32 *)(ctx+8)&0x40;
} else handled=0;
if(!handled) {
out=*(u8 **)(ctx+0xb0);
if(*(u32 *)(out+12)&0x1f0000) {
if(*(u32 *)out&0x20) *(u32 *)(out+12)&=~0x1f0000;
*(u32 *)(ctx+8)&=~2;
if(!(*(u32 *)(ctx+8)&0x100)) {
packets[0]=0x293130;
packets[1]=*(u32 *)(out+4);
packets[2]=*(u32 *)(out+8);
packets[3]=*(u32 *)(out+12);
packets[4]=0x2b2a;
packets[5]=*(u32 *)(out+16);
packets[6]=*(u32 *)(out+20);
func_021205ec(packets[0],packets+1,6);
if(*(u32 *)out&0x18) (*(void (**)(void *))(ctx+0xf0))(out);
}
} else *(u32 *)(ctx+8)|=2;
}
if(stage==3) {
*(u32 *)(ctx+8)&=~0x40;
(*(void (**)(void *))(ctx+0x1c))(ctx);
}
}
#pragma peephole on
void func_0211e860(u8 *arg0, u32 arg1) {
u32 flags=*(u32 *)(arg0+8);u8 *p;u8 idx;u8 *tbl;u8 *node;
if(flags&0x200)goto advance;
p=*(u8 **)arg0;idx=p[1];
if(flags&1)goto parse;
if(!(flags&8))goto parse;
if(idx==arg0[0xad])goto advance;
parse:
tbl=*(u8 **)(arg0+0xd8);
if(tbl!=NULL){
u8 *dict=tbl+4;u32 *entry;
if(dict!=NULL && idx<tbl[5]){
u16 off=*(u16 *)(tbl+10);
u16 size=*(u16 *)(dict+off);
entry=(u32 *)(dict+off+4+size*idx);
}else entry=NULL;
if(entry!=NULL){node=tbl+*entry;goto got_node;}
}
node=NULL;
got_node:
((void (*)(void *,u32,void *,u32))data_02155f80[*(u16 *)node])(arg0,arg1,node,idx);
advance:
*(u8 **)arg0+=2;
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

void func_0211e9e4(u8 *arg0, u32 arg1) {
    u32 flags = *(u32 *)(arg0 + 8);
    if (!(flags & 0x200) && (flags & 1) && !(flags & 2)) {
        u8 *base = *(u8 **)arg0;
        u8 index = base[1];
        u8 *dict = *(u8 **)(arg0 + 0xdc);
        u8 *node;
        if (dict != NULL) {
            u32 *entry;
            if (dict != NULL && index < *(u8 *)(dict + 1)) {
                u16 off = *(u16 *)(dict + 6);
                u16 size = *(u16 *)(dict + off);
                entry = (u32 *)(dict + off + 4 + size * index);
            } else {
                entry = NULL;
            }
            if (entry != NULL) {
                node = dict + *entry;
                goto got_node;
            }
        }
        node = NULL;
got_node:
        ((void (*)(u8 *, u32, u8 *, u8))data_02155f90[*(u16 *)node])(arg0, arg1, node, index);
    }
    *(u8 **)arg0 += 2;
}

