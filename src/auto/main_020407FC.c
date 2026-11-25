/* 5 functions from 0x020407FC to 0x020416D4 (main), found by ds-decomp. */
#include "common.h"

extern void *data_021600a8[];
extern u8 *data_02160204;
extern void func_0207b214(void);
extern void func_02046bcc(void);
extern void func_02046600(void);
extern void func_0210c5dc(void *);
void func_020407fc(void)
{
    typedef struct {
        s32 x, y, z;
    } Vec407fc;
    extern void *data_021600a8[];
    extern u8 *data_02160204;
    extern u32 data_02155c3c;
    extern u8 *data_02161084;
    extern u32 *data_02161070[];
    extern u8 *data_021600bc;
    extern u8 *data_02155984;
    extern u8 data_02146354[];
    extern u8 data_0213f19c[];
    extern u8 data_02146324[];
    extern u8 data_0214635c[];
    extern u8 data_02146368[];
    extern u8 data_02146370[];
    extern u8 data_02146378[];
    extern void func_020a2c20(void);
    extern void func_02002fb0(u32, u32, u32, u32, u32);
    extern void func_021091b4(void);
    extern void *func_0210c594(u32, s32);
    extern void func_020f4928(void);
    extern void func_020ec9d0(u32, s32);
    extern void func_02120524(s32);
    extern void func_021070c4(void);
    extern void func_02066eac(s32);
    extern void func_02046b6c(void);
    extern void *func_02046f90(u16, u16);
    extern void *func_020e9fe8(void *, u16);
    extern void func_02052240(u8 *);
    extern void func_020477dc(void *, s32, s32);
    extern void *func_02047820(u16);
    extern void func_02047490(void *);
    extern void func_021168f8(void *, void *);
    extern void func_0210c5dc(void *);
    extern void func_020544d8(void *, s32);
    extern u16 func_0204680c(s32, u16);
    extern void func_0203d8a8(u32 *);
    extern void func_02107168(s32, s32, s32, s32, s32);
    extern void *func_020a84b8(s32, s32);
    extern void *func_020a94b8(s32);
    extern void func_020a8810(void *, u32);
    extern void func_020a9830(void *, void *, s32, s32, s32, s32);
    extern void func_020a9610(void *, void *, s32, void *, s32, s32);
    extern void func_020468b0(u32);
    extern void func_021167ac(void *, s32);
    extern void func_02056d10(void);
    extern void func_02055804(s32);
    extern void func_02108ffc(void);
    extern void func_0206713c(s32, s32);
    extern void func_020fcbec(s32);
    s16 slot;
    s32 i;
    u8 *p, *q, *obj, *aux;
    s32 moved;
    s32 z, x;
    u16 id;
    s32 mode;
    s32 inside;

    func_020a2c20();
    func_02002fb0(0, 31, 0x7fff, 0, 0);
    *(volatile u16 *)0x04000304 &= ~0x8000;
    func_021091b4();
    if (data_02160204[0x7a] == 0 && ((u8 **)(void *)&data_021600a8)[1] == NULL) {
        ((u8 **)(void *)&data_021600a8)[1] = func_0210c594(0x908, data_02155c3c);
    }
    func_020f4928();
    func_020ec9d0(1006, 0);
    func_02120524(1);
    func_021091b4();
    p = func_0210c594(8, data_02155c3c);
    *(u8 **)((u8 **)(void *)&data_021600a8)[1] = p;
    p = ((u8 **)(void *)&data_021600a8)[1];
    q = *(u8 **)p;
    data_02161084 = q;
    data_02161070[0] = (u32 *)q;
    *(u32 *)(p + 0x35c) = 0;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x360) = 0;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x354) = 0;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x358) = 0;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x34c) = 0;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x350) = 0;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x364) = 0;
    *(volatile u16 *)0x04001008 = (*(volatile u16 *)0x04001008 & ~3) | 2;
    *(u16 *)(((u8 **)(void *)&data_021600a8)[1] + 0x348) = 13;
    ((u8 **)(void *)&data_021600a8)[1][0x3ac] |= 0x20;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0xc) = 0;
    for (slot = 0; slot < 7; ++slot) {
        ((u8 **)(void *)&data_021600a8)[1][slot * 0xa4 + 0x3b0] = 0;
    }
    func_021070c4();
    func_02066eac(2);
    func_021091b4();
    func_02046b6c();
    func_021091b4();
    if (data_02160204[0x7e] == 0) {
        if (data_02160204[0x7a] == 0) {
            obj = func_02046f90(1, 0);
            aux = func_020e9fe8((void *)6001, 3001);
            *(u32 *)(aux + 0x1c) = 0;
            *(u32 *)(aux + 0x20) = 0;
            *(u32 *)(aux + 0x24) = 0x32000;
            *(u32 *)(aux + 0x18) &= ~1;
            aux = func_020e9fe8((void *)6011, 13001);
            *(u32 *)(aux + 0x1c) = 0;
            *(u32 *)(aux + 0x20) = 0;
            *(u32 *)(aux + 0x24) = 0x32000;
            *(u32 *)(aux + 0x18) &= ~1;
            data_02160204[0x84] = 9;
            *(u16 *)(obj + 0x92) = *(u16 *)(data_02160204 + 0x78);
            *(s32 *)(obj + 0) = (s32)*(s16 *)(data_02160204 + 0x74) << 12;
            *(s32 *)(obj + 8) = (s32)*(s16 *)(data_02160204 + 0x76) << 12;
            if (data_02160204[0x85] == 1) {
                u8 *node = *(u8 **)(data_021600bc + 0x94);
                *(Vec407fc *)(obj + 0x24) = *(Vec407fc *)obj;
                *(Vec407fc *)(data_02155984 + 0x20) = *(Vec407fc *)obj;
                moved = 0;
                while (node != NULL) {
                    x = *(s32 *)(obj + 0);
                    z = *(s32 *)(obj + 8);
                    if (x < *(s32 *)(node + 0)) goto outside_rect;
                    if (x > *(s32 *)(node + 8)) goto outside_rect;
                    if (z < *(s32 *)(node + 4)) goto outside_rect;
                    if (z <= *(s32 *)(node + 0xc)) {
                        inside = 1;
                        goto test_inside;
                    }
                outside_rect:
                    inside = 0;
                test_inside:
                    if (inside != 0) {
                        switch (node[0x10]) {
                        case 1:
                            *(s32 *)(data_02160204 + 0x80) = *(volatile s32 *)(node + 0xc) - z + 0x8000;
                            (*(s32 *)(obj + 0x2c)) += 0x4b000;
                            moved = 1;
                            break;
                        case 2:
                            *(s32 *)(data_02160204 + 0x80) = *(volatile s32 *)(node + 8) - x + 0x8000;
                            (*(s32 *)(obj + 0x24)) += 0x30000;
                            moved = 1;
                            break;
                        case 3:
                            *(s32 *)(data_02160204 + 0x80) = *(volatile s32 *)(node + 4) - z - 0x8000;
                            (*(s32 *)(obj + 0x2c)) -= 0x40000;
                            moved = 1;
                            break;
                        case 4:
                            *(s32 *)(data_02160204 + 0x80) = *(volatile s32 *)(node + 0) - x - 0x8000;
                            (*(s32 *)(obj + 0x24)) -= 0x30000;
                            moved = 1;
                            break;
                        default:
                            moved = 0;
                            *(s32 *)(data_02160204 + 0x80) = 0;
                            break;
                        }
                    }
                    node = *(u8 **)(node + 0x18);
                }
                if (moved != 0) {
                    *(u32 *)(obj + 0xac) |= 0xc04;
                    data_02160204[0x85] = 2;
                } else {
                    *(u16 *)(obj + 0x92) = *(u16 *)(data_02160204 + 0x78);
                    data_02160204[0x85] = 0;
                }
            }
            func_02052240(obj);
            *(u32 *)(obj + 0x58) = 0x1000;
            func_020477dc(obj, 2, 0);
            *(u32 *)(obj + 0x78) = 3;
        } else {
            p = *(u8 **)(data_02160204 + 0x6c);
            if (p != NULL) {
                u8 *cur = *(u8 **)p;
                while (cur != NULL) {
                    u8 *next = *(u8 **)(cur + 0xc);
                    if (cur[0] != 20) {
                        obj = func_02047820(*(u16 *)(cur + 4));
                        if (obj != NULL) {
                            func_02047490(obj);
                        }
                    }
                    func_021168f8(*(u8 **)(data_02160204 + 0x6c), cur);
                    if (cur != NULL) {
                        func_0210c5dc(cur);
                    }
                    cur = next;
                }
                p = *(u8 **)(data_02160204 + 0x6c);
                if (p != NULL) {
                    func_0210c5dc(p);
                }
                *(u8 **)(data_02160204 + 0x6c) = NULL;
            }
            mode = data_02160204[0xd6];
            if (mode == 9 || mode == 1 || mode == 30) {
                obj = *(u8 **)(data_021600bc + 0x40);
                while (obj != NULL) {
                    id = *(u16 *)(obj + 0x8e);
                    if (id > 100 && id < 700) {
                        *(u32 *)(obj + 0x80) = *(u32 *)(obj + 0x84);
                        func_020544d8(obj, 0);
                    }
                    *(u16 *)(*(u8 **)(obj + 0xb0) + 4) = 0;
                    obj = *(u8 **)(obj + 0x13c);
                }
            }
            if (data_02160204[0x85] == 5) {
                *(s32 *)(data_02160204 + 0x80) *= -1;
                data_02160204[0x85] = 6;
            }
        }
        *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x68) = NULL;
        obj = func_02047820(0);
        *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x68) = obj;
        p = *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x68);
        if (*(u32 *)(p + 0xac) & 2) {
            *(u32 *)(p + 0xac) &= ~2;
        }
        p = *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x68);
        if (*(u32 *)(p + 0xac) & 0x40) {
            *(u32 *)(p + 0xac) &= ~0x40;
        }
    } else {
        func_0204680c((s32)data_02146354, 1001);
    }
    obj = func_02047820(0);
    if (data_02160204[0x7e] == 0) {
        if (obj != NULL) {
            func_0203d8a8((u32 *)obj);
        }
    } else {
        func_0203d8a8((u32 *)data_0213f19c);
    }
    func_021091b4();
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x10) = 0;
    *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x14) = 0;
    ((u8 **)(void *)&data_021600a8)[1][0x334] = 0;
    func_02107168(0, 0, 24, 24, 0);
    func_02107168(208, 168, 48, 24, 1);
    ((u8 **)(void *)&data_021600a8)[1][0x338] = 0;
    ((u8 **)(void *)&data_021600a8)[1][0x368] = 0;
    *(u16 *)(((u8 **)(void *)&data_021600a8)[1] + 0x36a) = 0;
    ((u8 **)(void *)&data_021600a8)[1][0x36c] = 0;
    ((u8 **)(void *)&data_021600a8)[1][0x36d] = 0;
    ((u8 **)(void *)&data_021600a8)[1][0x8de] = 0;
    *(u32 *)(data_02146324 + 0xc) = 1;
    if (data_02160204[0x7e] != 0) {
        data_021600bc[0x29] = 1;
    }
    p = func_020a84b8(5, 3);
    *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x78) = p;
    *(u32 *)(*(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x78) + 0x40) = 0;
    *(u32 *)(*(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x78) + 0x4c) = 0x2bc000;
    p = func_020a94b8((s32)data_0214635c);
    *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x9c) = p;
    for (i = 0; i < 5; ++i) {
        *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + i * 0x50 + 0xb4) = func_020a84b8(4, 3);
        *(u32 *)(*(u8 **)(((u8 **)(void *)&data_021600a8)[1] + i * 0x50 + 0xb4) + 0x40) = 0;
        func_020a8810(*(u8 **)(((u8 **)(void *)&data_021600a8)[1] + i * 0x50 + 0xb4), 3);
        p = ((u8 **)(void *)&data_021600a8)[1];
        func_020a9830(p + 0xb8 + i * 0x50, p + 0xec + i * 0x50, 240, 16, 0, 0);
        p = ((u8 **)(void *)&data_021600a8)[1];
        func_020a9610(p + 0xec + i * 0x50, *(u8 **)(p + 0x9c), 1, *(u8 **)(p + i * 0x50 + 0xb4), 0, 0);
    }
    p = func_020a94b8((s32)data_02146368);
    *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0xa0) = p;
    p = func_020a84b8(5, 3);
    *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x244) = p;
    *(u32 *)(*(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x244) + 0x40) = 0;
    func_020a8810(*(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0x244), 0);
    p = ((u8 **)(void *)&data_021600a8)[1];
    func_020a9830(p + 0x248, p + 0x27c, 240, 16, 0, 0);
    p = ((u8 **)(void *)&data_021600a8)[1];
    func_020a9610(p + 0x27c, *(u8 **)(p + 0xa0), 1, *(u8 **)(p + 0x244), 0, 0);
    p = func_020a94b8((s32)data_02146370);
    *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0xa4) = p;
    p = func_020a94b8((s32)data_02146378);
    *(u8 **)(((u8 **)(void *)&data_021600a8)[1] + 0xa8) = p;
    if (data_02160204[0x7a] != 0) {
        func_020468b0(0);
    }
    if (data_02160204[0x7a] == 0) {
        func_021167ac(((u8 **)(void *)&data_021600a8)[1] + 0x398, 12);
    }
    if (*(u16 *)(data_02160204 + 0x72) != 897) {
        func_02056d10();
    }
    if (data_02160204[0xd6] == 4) {
        func_02055804(((s32)*(u16 *)(data_02160204 + 0x72) - 1) / 20 + 1);
    }
    data_02160204[0x7a] = 0;
    func_021167ac(((u8 **)(void *)&data_021600a8)[1] + 0x8ac, 8);
    func_021167ac(((u8 **)(void *)&data_021600a8)[1] + 0x384, 0x34);
    func_02108ffc();
    if (data_02160204[0x11d] & 1) {
        data_02160204[0x11d] = 0;
        *(u32 *)(((u8 **)(void *)&data_021600a8)[1] + 0x10) = 13;
        *(u16 *)(((u8 **)(void *)&data_021600a8)[1] + 0x8e0) = 6;
        func_0206713c(74, 1);
    }
    func_020fcbec(0);
    func_02108ffc();
}

void func_021168f8(void *, void *);
void func_02047490(void *);
void func_020414f8(void);
void func_02041160(void) {
extern u8 *data_021600bc;
extern u8 data_02146324[];
s32 zero=0,one;
u8 *next,*node;
if(data_02160204[0xd8]==0x12)func_0207c2dc();
func_020eec70();func_020f4144();func_0210829c(zero,zero,zero);
func_020eca2c(zero);func_02056f2c();func_020a3b84();func_020f4a24();func_020f0090(zero);func_0203d800();func_0203e6bc();func_0203ef0c(zero);func_020ec218();
one=1;func_020eb344(one,zero);func_02107104();func_02066f9c();
func_021075fc(*(void **)data_021600a8[1],zero);func_021075fc(zero,one);
node=*(u8 **)((u8 *)data_021600a8[1]+0x8ac);
while(node){next=*(u8 **)(node+0xc);func_021168f8((u8 *)data_021600a8[1]+0x8ac,node);func_0203be4c(*(void **)node);if(node)func_0210c5dc(node);node=next;}
node=*(u8 **)((u8 *)data_021600a8[1]+0x384);
while(node){next=*(u8 **)(node+0x38);func_021168f8((u8 *)data_021600a8[1]+0x384,node);if(node)func_0210c5dc(node);node=next;}
if((*(u16 *)((u8 *)data_021600a8[1]+0x36e)&1)||(*(u16 *)((u8 *)data_021600a8[1]+0x36e)&2))func_020789ec();
if(*(void **)((u8 *)data_021600a8[1]+0x3a8)){func_0210c5dc(*(void **)((u8 *)data_021600a8[1]+0x3a8));*(void **)((u8 *)data_021600a8[1]+0x3a8)=(void *)zero;}
if(data_02160204[0x7a]==0){
{void *obj=*(void **)((u8 *)((void *volatile *)data_021600a8)[1]+0x80);if(obj)func_02046794(obj);}
node=*(u8 **)((u8 *)data_021600a8[1]+0x398);
while(node){next=*(u8 **)(node+0x10);func_021168f8((u8 *)data_021600a8[1]+0x398,node);if(node)func_0210c5dc(node);node=next;}
func_02046bcc();func_02046600();func_0207cbac();
if(data_021600a8[1]){
if(data_02160204[0xd7]!=3){func_0210da14((u8 *)data_021600a8[1]+0x18);func_0210da14((u8 *)data_021600a8[1]+0x2c);func_0210dba0((u8 *)data_021600a8[1]+0x40);}
{u8 *obj=*(u8 **)((u8 *)data_021600a8[1]+0x78);(*(void (**)(void *))(obj+0xc))(obj);}
func_020414f8();
if(data_021600a8[1]){func_0210c5dc(data_021600a8[1]);data_021600a8[1]=(void *)zero;}
}
}else{
func_02046e30();
if(*(s8 *)(data_02160204+0xe0)==1){
node=*(u8 **)(data_021600bc+0x40);
while(node){if(*(s32 *)(node+0xc8))func_02047490(node);node=*(u8 **)(node+0x13c);}
}
func_020466f4();
if(data_021600a8[1]){
func_0210da14((u8 *)data_021600a8[1]+0x18);func_0210da14((u8 *)data_021600a8[1]+0x2c);func_0210dba0((u8 *)data_021600a8[1]+0x40);
{u8 *obj=*(u8 **)((u8 *)data_021600a8[1]+0x78);(*(void (**)(void *))(obj+0xc))(obj);}
func_020414f8();
}
}
func_020e9f44();*(s8 *)(data_02160204+0x86)=-1;func_020558b4();func_020fcd54();func_0210f138();
func_02008e68(zero,func_02003454(),0x10000);func_02008e68(zero,func_020031bc(),0x4000);
if(data_02160204[0x7e]==1)data_02160204[0x7e]=zero;
if(*(s32 *)(data_02146324+0xc)==4){*(u16 *)(data_02160204+0x74)=zero;*(u16 *)(data_02160204+0x76)=zero;}
}

void func_020414b0(void) {
    func_0207b214();
    func_02046bcc();
    func_02046600();
    if (data_021600a8[1] != NULL) {
        func_0210c5dc(data_021600a8[1]);
        data_021600a8[1] = NULL;
    }
    data_02160204[0x7a] = 0;
}

extern void func_020a957c(void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
void func_020414f8(void) {
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

    func_020a957c((u8 *)data_021600a8[1] + 0x9c);
    func_020a957c((u8 *)data_021600a8[1] + 0xa0);
    func_020a957c((u8 *)data_021600a8[1] + 0xa4);
    func_020a957c((u8 *)data_021600a8[1] + 0xa8);
    func_020a957c((u8 *)data_021600a8[1] + 0xac);
    func_020a957c((u8 *)data_021600a8[1] + 0xb0);
    for (i = 0; i < 6; i++) {
        offset = i * 0x50;
        func_020a994c(((G *)data_021600a8[1])->field_b8 + offset);
        func_020a98a0(((G *)data_021600a8[1])->field_b8 + offset);
        obj = *(void **)((u8 *)data_021600a8[1] + offset + 0xb4);
        fn = *(void (**)(void *))((u8 *)obj + 0xc);
        fn(obj);
    }
    func_020a994c((u8 *)data_021600a8[1] + 0x300);
    func_020a98a0((u8 *)data_021600a8[1] + 0x300);
    obj = *(void **)((u8 *)data_021600a8[1] + 0x2e4);
    if (obj == NULL) {
        return;
    }
    fn = *(void (**)(void *))((u8 *)obj + 0xc);
    fn(obj);
}

extern s32 data_0216bf84;
extern u8 *data_021600bc;
extern s32 func_02109754(s32);
extern u32 func_020a567c(void);
extern void func_020781b0(void *, void *, void *);
extern void func_020783e8(void *, void *);
extern s32 func_020443a8(void *);
void func_020415d0(void) {
    u8 *r4;
    u8 *r5;
    u16 val;
    r5 = (u8 *)data_021600a8[1];
    r4 = *(u8 **)(r5 + 0x68);
    if (data_02160204[0x7e] != 0 || data_0216bf84 != 1) {
        return;
    }
    if ((*(u32 *)(r4 + 0xac) & 0x800) != 0) {
        return;
    }
    if (func_02109754(3) == 1) {
        return;
    }
    if (func_020a567c() < 8) {
        return;
    }
    if (*(s32 *)(r5 + 0x10) == 0 && *(s32 *)(r5 + 0x900) == 0) {
        if (data_02160204[0x85] != 0) {
            return;
        }
        if ((*(u32 *)(r4 + 0xac) & 0x400) != 0) {
            return;
        }
        func_020781b0(r4, r5 + 0x6c, r5 + 0x74);
        func_020783e8(*(void **)((u8 *)data_021600a8[1] + 0x68), data_021600bc + 0x2c);
        *(u32 *)(r4 + 0xac) &= ~0x80000;
        if (func_020443a8(r4) != 0) {
            *(u32 *)(r4 + 0xac) |= 0x80000;
        }
    }
    val = *(u16 *)(*(u8 **)(r4 + 0xb0) + 4);
    if (val != 0) {
        *(u16 *)((u8 *)data_021600a8[1] + 0x396) = val;
    }
}

