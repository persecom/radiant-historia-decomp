/* 9 functions from 0x02081D3C to 0x02082C70 (main), found by ds-decomp. */
#include "common.h"
void func_02082958(void);
void func_02082584(void);
extern u32 data_02162858;
extern u32 data_02162854;

typedef struct Block_02081f08 {
    u32 w0, w1, w2, w3;
} Block_02081f08;

typedef struct Data_02081f08 {
    Block_02081f08 b[6];
    u32 last;
} Data_02081f08;

extern u8 data_02148538[];
extern u8 data_02148570[], data_0214857c[];
void func_02081f08(u32 *,s32);
void func_0210d27c(s32);
void *func_020a94b8(void *);
void func_020a994c(void *);
extern u32 data_02162870;
extern u8 *data_0216010c;
extern u8 *data_02160204;
extern void func_0210968c(u32, u32, u32);
extern void func_02109790(u32);

void func_02081d3c(void) {
Data_02081f08 buf, temp;
u8 *state=*(u8 **)(data_0216010c+0x44);
void **obj;
if(state[2]!=0) return;
if(*(s16 *)(data_0216010c+0x50d4)==0) return;
func_02081f08((u32 *)&temp,data_0216010c[0x50d7]);
buf=temp;
if(*(s16 *)((u8 *)&buf+8)!=501 && *(s16 *)((u8 *)&buf+8)!=502) {
func_0210d27c(7);
return;
}
data_0216010c[0x50de]=0;
if(((u8 *)&buf)[10]==12) *(s8 *)(data_0216010c+0x50de)=-1;
else data_0216010c[0x50de]=0;
state[0]=2;
obj=*(void ***)(data_0216010c+0x58);
if(obj!=NULL && *obj!=NULL) func_020a9544(obj);
*(void **)(data_0216010c+0x58)=func_020a94b8(data_02148538);
func_0210d27c(11);
func_020a994c(data_0216010c+0x2a4);
*(s16 *)(data_0216010c+0x5382)|=4;
}

void func_02081e78(void) {
    u8 **p = &data_0216010c;
    u16 i;
    u8 **q;
    void *z;
    if (*(void **)(*p + 0x44) != NULL) {
        func_0210c5dc(*(void **)(*p + 0x44));
        *(void **)(*p + 0x44) = 0;
    }
    q = &data_0216010c;
    i = 0;
    *(void **)(*q + 0x44) = i;
    (*q)[0x3f] = i;
    func_02089a98();
    z = i;
    for (; i < 2; i++) {
        void **v = *(void ***)(*q + 0x48 + i * 4);
        if (v != NULL && *v != NULL) {
            func_020a9544(v);
            *(void **)(*q + 0x48 + i * 4) = z;
        }
    }
}

void func_02081f08(u32 *dst, s32 idx) {
    Data_02081f08 *src = (Data_02081f08 *)(data_0216010c + idx * 0x64 + 0x5570);
    Data_02081f08 *d = (Data_02081f08 *)dst;
    *d = *src;
}

extern const u16 data_02140c50[];
extern const u16 data_02140c5e[];
s32 func_02085110(u8);
u8 *func_02021f10(s32);
void func_02022088(u16, u8);
void func_02089bb0(s32, s32);
s32 func_02082328(s32);
s32 func_02081f4c(s32 arg0) {
    struct Char {
        u8 pad_00[0x10];
        u16 hp;
        u16 max_hp;
        u16 mp;
        u16 max_mp;
        u8 pad_18[0xc];
        s16 bonus_hp;
        s16 bonus_mp;
    };
    struct Item {
        u16 id;
        u8 count;
        u8 pad_03[3];
        s16 val;
        s16 type;
        u8 target;
        u8 pad_0b[0x59];
    };
    struct Mgr {
        u8 pad_00[0x44];
        u8 *state;
        u8 pad_48[0x5cc];
        u8 party_count;
        u8 pad_615[0x4ac2];
        u8 unk_50d7;
        u8 pad_50d8[6];
        u8 target_idx;
        u8 pad_50df[0x2a3];
        s16 flags_5382;
        u8 pad_5384[0x1ec];
        struct Item items[1];
    };
    u8 *r4 = ((struct Mgr *)data_0216010c)->state;
    s32 all_full = 1;

    if (((struct Mgr *)data_0216010c)->items[arg0].type == 501) {
        if (((struct Mgr *)data_0216010c)->items[arg0].target == 12) {
            s16 i;
            for (i = 0; i < ((struct Mgr *)data_0216010c)->party_count; i++) {
                struct Char *ch = (struct Char *)func_02021f10(func_02085110((u8)i));
                if (ch->hp != ch->max_hp + ch->bonus_hp) {
                    all_full = 0;
                }
            }
            if (all_full == 1) {
                return 0;
            }
            for (i = 0; i < ((struct Mgr *)data_0216010c)->party_count; i++) {
                struct Char *ch = (struct Char *)func_02021f10(func_02085110((u8)i));
                ch->hp += data_02140c50[((struct Mgr *)data_0216010c)->items[arg0].val - 1];
                if (ch->hp > ch->max_hp + ch->bonus_hp) {
                    ch->hp = ch->max_hp + ch->bonus_hp;
                }
            }
        } else {
            struct Char *ch = (struct Char *)func_02021f10(func_02085110(((struct Mgr *)data_0216010c)->target_idx));
            if (ch->hp == ch->max_hp + ch->bonus_hp) {
                return 0;
            }
            ch->hp += data_02140c50[((struct Mgr *)data_0216010c)->items[arg0].val - 1];
            if (ch->hp > ch->max_hp + ch->bonus_hp) {
                ch->hp = ch->max_hp + ch->bonus_hp;
            }
        }
    } else if (((struct Mgr *)data_0216010c)->items[arg0].type == 502) {
        if (((struct Mgr *)data_0216010c)->items[arg0].target == 12) {
            s16 i;
            for (i = 0; i < ((struct Mgr *)data_0216010c)->party_count; i++) {
                struct Char *ch = (struct Char *)func_02021f10(func_02085110((u8)i));
                if (ch->mp != ch->max_mp + ch->bonus_mp) {
                    all_full = 0;
                }
            }
            if (all_full == 1) {
                return 0;
            }
            for (i = 0; i < ((struct Mgr *)data_0216010c)->party_count; i++) {
                struct Char *ch = (struct Char *)func_02021f10(func_02085110((u8)i));
                ch->mp += data_02140c5e[((struct Mgr *)data_0216010c)->items[arg0].val - 1];
                if (ch->mp > ch->max_mp + ch->bonus_mp) {
                    ch->mp = ch->max_mp + ch->bonus_mp;
                }
            }
        } else {
            struct Char *ch = (struct Char *)func_02021f10(func_02085110(((struct Mgr *)data_0216010c)->target_idx));
            if (ch->mp == ch->max_mp + ch->bonus_mp) {
                return 0;
            }
            ch->mp += data_02140c5e[((struct Mgr *)data_0216010c)->items[arg0].val - 1];
            if (ch->mp > ch->max_mp + ch->bonus_mp) {
                ch->mp = ch->max_mp + ch->bonus_mp;
            }
        }
    } else {
        return 0;
    }

    func_0210d27c(0x10);
    if (((struct Mgr *)data_0216010c)->items[arg0].count == 1) {
        func_02022088(((struct Mgr *)data_0216010c)->items[arg0].id, 0);
        func_02089bb0(0, 1);
        r4[0x36] = 1;
    } else {
        s32 off;
        r4[0x36] = r4[0];
        off = arg0 * 0x64;
        ((u8 *)((u32)data_0216010c + 0x5572))[off]--;
        func_02022088(*(u16 *)((u32)data_0216010c + off + 0x5570), *(u8 *)((u32)data_0216010c + off + 0x5572));
        if (func_02082328(((struct Mgr *)data_0216010c)->unk_50d7) == 1) {
            ((struct Mgr *)data_0216010c)->flags_5382 |= 1;
        } else {
            ((struct Mgr *)data_0216010c)->flags_5382 &= ~1;
        }
    }
    return 1;
}

extern s32 func_02085110(u8);
extern u8 *func_02021f10(s32);
s32 func_02082328(s32 arg0) {
    u8 buf[0x64];
    s32 zero = 0;
    s16 who;
    s32 all = 1;
    u8 *p;
    s16 kind;

    func_02081f08((u32 *)buf, (u8)arg0);
    kind = *(s16 *)(buf + 8);
    if (kind == 501) {
        if (buf[0xa] == 0xc) {
            for (who = 0; who < data_0216010c[0x614]; who++) {
                p = func_02021f10(func_02085110((u8)who));
                if (*(u16 *)(p + 0x10) != *(u16 *)(p + 0x12) + *(s16 *)(p + 0x24)) {
                    all = zero;
                }
            }
            if (all == 1) {
                return 0;
            } else {
                return 1;
            }
        }
        p = func_02021f10(func_02085110(data_0216010c[0x50de]));
        if (*(u16 *)(p + 0x10) == *(u16 *)(p + 0x12) + *(s16 *)(p + 0x24)) {
            all = zero;
        }
        return all;
    }
    if (kind == 502) {
        if (buf[0xa] == 0xc) {
            for (who = 0; who < data_0216010c[0x614]; who++) {
                p = func_02021f10(func_02085110((u8)who));
                if (*(u16 *)(p + 0x14) != *(u16 *)(p + 0x16) + *(s16 *)(p + 0x26)) {
                    all = zero;
                }
            }
            if (all == 1) {
                return 0;
            } else {
                return 1;
            }
        }
        p = func_02021f10(func_02085110(data_0216010c[0x50de]));
        if (*(u16 *)(p + 0x14) == *(u16 *)(p + 0x16) + *(s16 *)(p + 0x26)) {
            all = zero;
        }
        return all;
    }
    return zero;
}

u16 func_020824e0(void) {
    data_02162870 = 1;
    func_02082584();
    data_02162870 = 0;
    func_0210968c(3, 0, 6);
    func_02109790(3);
    for (;;) {
        if (*(u8 *)(data_0216010c + 0x5000 + 0xb4) != 0) {
            break;
        }
        func_0210dc88();
    }
    data_02162870 = 1;
    func_0210968c(3, -16, 6);
    func_02109790(3);
    func_02082958();
    func_0210dc88();
    return *(u16 *)(data_02160204 + 0x100 + 0x1a);
}

extern u32 data_02155c3c;
extern s32 data_02162868;
extern u8 data_02148540[];
extern u8 data_02148548[];
extern u8 data_02148554[];
extern u8 *data_02160200;
extern const char data_02148560[];
extern void func_020a2c20(void);
extern void func_021070c4(void);
extern u8 *func_0210c594(u32, u32);
extern void func_0210f6d4(void);
extern void func_02089550(void);
extern void func_02089578(void);
extern void func_02082b34(void);
extern void func_0210d9e4(void *);
extern void func_02083078(void);
extern void func_0210db70(void *);
extern void func_02083580(void);
extern void func_0210dbd0(void *);
extern void func_02108ffc(void);
extern void func_020a31c8(s32);
extern void func_020a2dd0(void);
extern void func_020a2e8c(void);
extern void func_021167ac(void *, s32);
extern void func_02084d70(void);
extern void func_02084828(void);
extern void func_02088e90(void);
extern void func_020eb180(s32, s32);
extern void func_020ec12c(void);
extern void *func_020a8604(s32, s32);
extern void *func_020a84b8(s32, s32);
extern void func_020a8810(void *, s32);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern void func_020a9610(void *, void *, s32, void *, s32, s32);
extern void func_02005e80(char *, const char *, s32);
extern void func_020220b0(s32, s32);
void func_02082584(void)
{
    s16 i;
    char buf[0x20];

    func_020a2c20();
    func_021070c4();
    data_0216010c = func_0210c594(0x8450, data_02155c3c);
    func_0210f6d4();
    data_02162858 = (u32)func_02089550;
    data_02162854 = (u32)func_02089578;
    *(void (**)(void))(data_0216010c + 0) = func_02082b34;
    *(s32 *)(data_0216010c + 4) = 0x3f3;
    func_0210d9e4(data_0216010c);
    *(void (**)(void))(data_0216010c + 0x14) = func_02083078;
    *(s32 *)(data_0216010c + 0x18) = 0x3e8;
    func_0210db70(data_0216010c + 0x14);
    *(void (**)(void))(data_0216010c + 0x28) = func_02083580;
    *(s32 *)(data_0216010c + 0x2c) = 0x3e8;
    func_0210dbd0(data_0216010c + 0x28);
    func_02108ffc();
    func_020a31c8(4);
    func_020a2dd0();
    func_020a2e8c();
    func_021167ac(data_0216010c + 0x5f0, 0x2c);
    func_021167ac(data_0216010c + 0x5fc, 0x2c);
    func_021167ac(data_0216010c + 0x608, 8);
    func_02084d70();
    func_02108ffc();
    func_02084828();
    func_02088e90();
    func_020eb180(3, 1);
    func_020ec12c();
    data_02162868 = 1;
    data_0216010c[0x3f] = 0;
    *(void **)(data_0216010c + 0x48) = func_020a94b8(data_02148540);
    *(void **)(data_0216010c + 0x68) = func_020a94b8(data_02148548);
    *(void **)(data_0216010c + 0x6c) = func_020a94b8(data_02148554);

    for (i = 0; i < 0xc; i++) {
        if (i < 8) {
            *(void **)(data_0216010c + 0x70 + i * 0x50) = func_020a8604(4, 1);
        } else if (i == 8) {
            *(void **)(data_0216010c + 0x70 + i * 0x50) = func_020a84b8(5, 3);
        } else if (i == 10) {
            *(void **)(data_0216010c + 0x70 + i * 0x50) = func_020a84b8(5, 3);
        } else {
            *(void **)(data_0216010c + 0x70 + i * 0x50) = func_020a84b8(4, 2);
        }
        func_020a8810(*(void **)(data_0216010c + 0x70 + i * 0x50), 0x16);
        func_020a9830(data_0216010c + 0x74 + i * 0x50, data_0216010c + 0xa8 + i * 0x50, 0xf0, 0x10, 0, 0);
        func_020a9610(data_0216010c + 0xa8 + i * 0x50, *(void **)(data_0216010c + 0x48), 1, *(void **)(data_0216010c + 0x70 + i * 0x50), 0, 0);
    }

    for (i = 0; i < 0x20; i++) {
        if (*(u32 *)(data_02160200 + 0x1c) & (1 << i)) {
            break;
        }
    }
    if (i == 0x20) {
        i = 0;
    }
    func_02005e80(buf, data_02148560, i + 1);
    *(void **)(data_0216010c + 0x60) = func_020a94b8(buf);

    if (*(u32 *)(data_02160200 + 0x160) & 0x200) {
        for (i = 1; i < 0x33; i++) {
            func_020220b0(i, 1);
        }
        for (i = 0xc9; i < 0x10f; i++) {
            func_020220b0(i, 1);
        }
        for (i = 0x12d; i < 0x1a9; i++) {
            func_020220b0(i, 1);
        }
        for (i = 0x208; i < 0x26c; i++) {
            func_020220b0(i, 1);
        }
        for (i = 0x2bd; i < 0x31e; i++) {
            func_020220b0(i, 1);
        }
    }
}

extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a957c(void *);
extern void func_020a3b84(void);
extern void func_02107104(void);
extern void func_020a2e24(void);
extern void func_020ec218(void);
extern void func_020eb344(s32, s32);
extern void func_0210e290(s32);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210f138(void);
extern u32 data_02162858;
extern u32 data_02162854;
void func_02082958(void) {
    u8 *node;
    u8 *next;
    u8 i;

    node = *(u8 **)(data_0216010c + 0x5f0);
    while (node != NULL) {
        next = *(u8 **)(node + 0x30);
        func_021168f8(data_0216010c + 0x5f0, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }

    {
        u8 *next2;
        u8 *node2 = *(u8 **)(data_0216010c + 0x5fc);
        while (node2 != NULL) {
            next2 = *(u8 **)(node2 + 0x30);
            func_021168f8(data_0216010c + 0x5fc, node2);
            if (node2 != NULL) {
                func_0210c5dc(node2);
            }
            node2 = next2;
        }
    }

    node = *(u8 **)(data_0216010c + 0x608);
    while (node != NULL) {
        next = *(u8 **)(node + 0xc);
        func_021168f8(data_0216010c + 0x608, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }

    for (i = 0; i < 12; i++) {
        func_020a994c(data_0216010c + 0x74 + i * 0x50);
        func_020a98a0(data_0216010c + 0x74 + i * 0x50);
        {
            u8 *obj = *(u8 **)(data_0216010c + i * 0x50 + 0x70);
            ((void (*)(void *))(*(void **)(obj + 0xc)))(obj);
        }
    }

    for (i = 0; i < 10; i++) {
        if (*(void **)(data_0216010c + i * 4 + 0x48) != NULL) {
            func_020a957c(data_0216010c + 0x48 + i * 4);
        }
    }

    func_020a3b84();
    func_02107104();
    func_020a2e24();
    func_020ec218();
    func_020eb344(3, 1);
    func_0210e290(0);
    data_02162858 = 0;
    data_02162854 = 0;
    if (data_0216010c != NULL) {
        func_0210da14(data_0216010c);
        func_0210dba0(data_0216010c + 0x14);
        func_0210dbe8(data_0216010c + 0x28);
        if (data_0216010c != NULL) {
            func_0210c5dc(data_0216010c);
            data_0216010c = NULL;
        }
    }
    func_0210f138();
}

void func_02082b34(void) {
u8 **p=&data_0216010c;
s32 n;
switch((*p)[0x3f]) {
case 0: if((*p)[0x50b4] != 1) func_02082c70(); break;
case 1: func_02080db8(); break;
case 3: func_02085f44(); break;
case 2: func_0207d3cc(); break;
case 4: func_02085234(); break;
case 5: func_02087e84(); break;
case 6: func_0208a678(); break;
case 7: case 8: case 9: (*p)[0x3f]++; break;
case 10:
*(void **)(*p+0x68)=func_020a94b8(data_02148570);
*(void **)(*p+0x6c)=func_020a94b8(data_0214857c);
(*p)[0x3f]++; break;
case 11:
func_020a31c8(4);
n=44;
func_021167ac(*p+0x5f0,n);
func_021167ac(*p+0x5fc,n);
(*p)[0x3f]++; break;
case 12: func_02084828(); (*p)[0x3f]=0; break;
}
}

