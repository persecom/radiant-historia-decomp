/* 9 functions from 0x020D7E7C to 0x020D8E5C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160090;
extern u8 *data_02160110[];
extern void *func_020ddbcc(u32);
extern void func_02060408(void *);
extern void func_02093424(void *,s32);
extern void func_0202fad8(void *),func_02064c18(void *),func_02026e64(void *);
extern u8 *func_0202fb50(u32,s32);
extern void *func_02064be8(void),*func_02026e40(u32);
extern u8 *func_02065298(void *,s32,s32,s32,void *);
extern const char data_02151488[];
extern u8 *data_02160204;
extern const char data_021514b0[];
extern const char data_021514b4[];
extern u8 *data_02160a6c;
extern void func_02005e80(char *, const char *, s32, s32);
extern void *func_021092d8(char *);
extern void func_02109444(void *);
extern s32 func_02092994(void *, s32);
extern char *func_02092a40(void *, s32);
extern s32 func_02092a28(char *, const char *);
extern u32 func_020deaf0(void *, u8);
extern u8 *func_0202e548(u8);
extern void func_02022fb0(void *);
extern void func_02030878(void *, void *, void *, u32, u32, s32);
extern void func_0202c7d8(s8);
extern void func_02064c80(void *);
extern void func_0202e874(void *);
extern s32 func_02092a70(char *, s32);
extern u8 *func_020dce1c(u16, s32, s32);
extern void *func_020de160(void);
extern void func_020de190(void *, u16);
extern void func_020ddd5c(void *);
extern void func_020dd810(void *, s32, s32);
extern void *func_020d413c(void);
extern void *func_02026548(void);
extern void func_021093b0(void *);


typedef struct UnkNode_020d60248 {
    void *unk00;
    u8 unk04[8];
    void *unk0c;
} UnkNode_020d60248;

typedef struct UnkStruct_020d60248 {
    u8 unk00[8];
    UnkNode_020d60248 *unk08;
} UnkStruct_020d60248;

extern UnkStruct_020d60248 data_02160248;
extern u32 data_02155c3c;
extern s32 data_02162814;
extern s32 data_02162884;
extern u8 *data_02160260;
extern u8 *data_02160244;

void func_020d850c(void) {
    UnkStruct_020d60248 *p = &data_02160248;
    if (p->unk08 != NULL) {
        return;
    }
    p->unk08 = func_0210c594(0x18, data_02155c3c);
    func_021167ac(p->unk08, 0xc);
    func_021167ac((u8 *)p->unk08 + 0xc, 8);
}

void func_020d8558(void) {
    while (data_02160248.unk08->unk00 != NULL) {
        void *node = data_02160248.unk08->unk00;
        func_021168f8(&data_02160248.unk08->unk00, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    while (data_02160248.unk08->unk0c != NULL) {
        void *node = data_02160248.unk08->unk0c;
        func_021168f8(&data_02160248.unk08->unk0c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (data_02160248.unk08 != NULL) {
        func_0210c5dc(data_02160248.unk08);
        data_02160248.unk08 = NULL;
    }
}

void func_020d85f4(u16 *arg) {
    u16 *dst = func_0210c594(0x14, data_02155c3c);
    u16 i;
    for (i = 0; i < 3; i++) {
        dst[i] = arg[i];
        dst[i + 3] = arg[i + 3];
    }
    func_021167f0(data_02160248.unk08, dst);
}

u16 *func_020d865c(u16 *arg) {
    u16 *dst = func_0210c594(0x10, data_02155c3c);
    u16 i;
    for (i = 0; i < 2; i++) {
        dst[i] = arg[i];
        dst[i + 2] = arg[i + 2];
    }
    func_021167f0(&data_02160248.unk08->unk0c, dst);
    return dst;
}

void func_020d86d0(void) {
s32 zero=0,found=0,id;
u8 one=1;
u8 *state=data_02160244;
u8 *base=*(u8 **)state;
u8 *node,*p;
p=func_020ddbcc(0xea67);
if(p){
*(u16 *)(state+0x112)=0;*(u16 *)(state+0x114)=0;
func_020d91bc(6);func_020d9e7c();
node=*(u8 **)(data_02160090+8);
while(node){if(*(u8 **)(node+20))func_02093424(*(void **)(*(u8 **)(node+20)+8),zero);node=*(u8 **)(node+28);}
state[0xe8]=one;func_02060408(p);func_020d0a40(28);return;
}
id=0xea65;
p=func_020ddbcc(id);
if(p){func_02060408(p);found=one;}
else {
id=0xea66;p=func_020ddbcc(id);
if(p){func_02060408(p);found=one;}
}
if(!found)return;
p=func_020ddbcc((u16)id);
*(u32 *)(p+0x80)&=~0x10000;
if(*(void **)(p+0x118)){func_0202fad8(*(void **)(p+0x118));*(void **)(p+0x118)=0;}
if(*(void **)(p+0x11c)){func_02064c18(*(void **)(p+0x11c));*(void **)(p+0x11c)=0;}
if(*(void **)(p+0x12c)){func_02026e64(*(void **)(p+0x12c));*(void **)(p+0x12c)=0;}
*(u16 *)(p+0x8c)=(u16)(id+1);
*(u8 **)(p+0x118)=func_0202fb50((u16)(id+1),one);
(**(u8 **)(p+0x118))=one;
*(void **)(p+0x11c)=func_02064be8();
{u8 *unit=*(u8 **)(p+0x118);s32 item=*(u16 *)(unit+64);if(item){u8 *itemp=func_02065298(*(void **)(p+0x11c),item,11,0,unit);itemp[1]=11;}}
{u8 *unit=*(u8 **)(p+0x118);s32 item=*(u16 *)(unit+66);if(item){u8 *itemp=func_02065298(*(void **)(p+0x11c),item,11,0,unit);itemp[1]=12;}}
{u8 *unit=*(u8 **)(p+0x118);s32 item=*(u16 *)(unit+68);if(item){u8 *itemp=func_02065298(*(void **)(p+0x11c),item,11,0,unit);itemp[1]=13;}}
{u8 *unit=*(u8 **)(p+0x118);s32 item=*(u16 *)(unit+70);if(item){u8 *itemp=func_02065298(*(void **)(p+0x11c),item,11,0,unit);itemp[1]=14;}}
{u8 *unit=*(u8 **)(p+0x118);s32 item=*(u16 *)(unit+72);if(item){u8 *itemp=func_02065298(*(void **)(p+0x11c),item,11,0,unit);itemp[1]=15;}}
{u8 *unit=*(u8 **)(p+0x118);s32 item=*(u16 *)(unit+74);if(item){u8 *itemp=func_02065298(*(void **)(p+0x11c),item,11,0,unit);itemp[1]=16;}}
*(void **)(p+0x12c)=func_02026e40((u16)(id+1));
node=*(u8 **)(data_02160090+20);
while(node){u8 *next=*(u8 **)(node+36);func_021168f8(data_02160090+20,node);node=next;}
func_02033060();func_02032de8();func_02033010();func_02032f34();
*(u16 *)data_02160090=0;
func_020327b4();func_0202b754();func_02094bf4();*(u16 *)(base+8)=0;func_020df9c8(0);
node=*(u8 **)(data_02160090+8);
while(node){if(*(u8 **)(node+20))func_02093424(*(void **)(*(u8 **)(node+20)+8),0);node=*(u8 **)(node+28);}
if(id==0xea65)*(u16 *)(state+0x116)=0xea66;
else if(id==0xea66)*(u16 *)(state+0x116)=0xea67;
func_020d0a40(26);
*(u16 *)(state+0x112)=0;*(u16 *)(state+0x114)=0;*(u16 *)(state+0x118)=0;
state[0xe8]=one;
*(u16 *)(data_02160110[0]+0x72)&=(0xf800-one);
}

void *func_020ddbcc(u32);
void func_020d8a5c(void) {
    u8 *p = data_02160244;
    u8 *node;
    s32 timer;
    if (!(*(u16 *)(p + 0x112) & 1)) {
        *(u16 *)(p + 0x114) = 0;
        func_020d91bc(6);
        func_020d9e7c();
        *(u16 *)(p + 0x112) |= 1;
    }
    node = func_020ddbcc(*(u16 *)(p + 0x116));
    func_020d907c();
    func_020d9090();
    ++*(s16 *)(p + 0x114);
    timer = *(volatile s16 *)(p + 0x114);
    if ((u32)timer < 30) return;
    if (timer >= 30 && timer <= 90) {
        if (timer % 7 == 0) func_0210d27c(0x91);
        *(u32 *)(node + 0x80) |= 0x80;
        if (!(*(u16 *)(p + 0x112) & 2)) {
            if (++data_02162814 > 16) {
                data_02162814 = 16;
                *(u16 *)(p + 0x112) |= 2;
            }
        } else {
            if (--data_02162814 < 0) {
                data_02162814 = 0;
                *(u16 *)(p + 0x112) &= 0xfffd;
            }
        }
        if (*(u16 *)(p + 0x116) == 0xea66) {
            ++*(u16 *)(p + 0x118);
            *(s32 *)(node + 0x70) = *(volatile u16 *)(p + 0x118) / 2 - 110;
            if (*(s32 *)(node + 0x70) > -60) {
                *(s32 *)(node + 0x70) = -60;
                func_020d0a40(27);
            }
        } else if (*(u16 *)(p + 0x116) == 0xea67) {
            ++*(u16 *)(p + 0x118);
            *(s32 *)(node + 0x70) = *(volatile u16 *)(p + 0x118) / 2 - 60;
            if (*(s32 *)(node + 0x70) > 60) {
                *(s32 *)(node + 0x70) = 60;
                func_020d0a40(27);
            }
        }
    } else {
        *(s16 *)(p + 0x114) = 30;
    }
}

s32 func_020d8c30(void) {
    s32 v = --data_02162814;
    if (v >= 0) {
        return v;
    }
    data_02162814 = 0;
    data_02160244[0xe8] = 0;
    return func_020d0a40(3);
}

void func_020d8c70(void) {
    u8 *p = data_02160244;
    u8 *node = func_020ddbcc(*(u16 *)(p + 0x116));
    s32 timer;
    func_020d907c();
    func_020d9090();
    if (!(*(u16 *)(p + 0x112) & 1)) {
        *(u16 *)(p + 0x114) = 0;
        func_020d9d10(3, 0, 5);
        *(u32 *)(node + 0x80) |= 0x80;
        *(u16 *)(p + 0x112) |= 1;
    }
    if (*(s16 *)(p + 0x114) == 90) func_0210d27c(0x92);
    else if (*(s16 *)(p + 0x114) == 105) func_0210d27c(0x92);
    else if (*(s16 *)(p + 0x114) == 120) func_0210d27c(0x93);
    ++*(s16 *)(p + 0x114);
    timer = *(volatile s16 *)(p + 0x114);
    if (timer < 120) {
        if (timer % 7 == 0 && timer < 60) func_0210d27c(0x91);
        if (!(*(u16 *)(p + 0x112) & 2)) {
            if (++data_02162814 > 16) {
                data_02162814 = 16;
                *(u16 *)(p + 0x112) |= 2;
            }
        } else {
            if (--data_02162814 < 0) {
                data_02162814 = 0;
                *(u16 *)(p + 0x112) &= 0xfffd;
            }
        }
    } else {
        if (++data_02162884 > 16) data_02162884 = 16;
        if (++data_02162814 > 16) data_02162814 = 16;
        if (data_02162814 == 16 && data_02162884 == 16) {
            *(u16 *)(*(u8 **)p + 2) = 14;
            func_020d0a40(13);
            data_02160260[0x94] = 1;
            *(u32 *)(data_02160260 + 0x60) |= 0x20;
        }
    }
}

