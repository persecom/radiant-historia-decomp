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

void func_020d7e7c(s32 arg0, s32 arg1) {
    char buf[0x40];
    s32 idx;
    u8 **list_head;
    u8 *node;
    u8 *skill_obj;
    u8 *skill_tmp;
    u32 pos_mask;
    s32 pos;

    func_02005e80(buf, data_02151488, arg0, arg1);
    idx = 0;
    list_head = *(u8 ***)(data_02160204 + 0x6c);
    node = *list_head;
    while (node != NULL) {
        if (*(s8 *)(node + 0x10) == 1) {
            void *fp = func_021092d8(buf);
            s32 i;
            for (i = 0; i <= 0x200; i++) {
                if (*(u16 *)(node + 2) != i) {
                    func_02109444(fp);
                } else if (*(u16 *)(node + 2) == i) {
                    break;
                }
            }
            if (i != 0x200) {
                s32 id = 0;
                char *tok;
                func_02092994(fp, 0);
                func_02092994(fp, 0);
                tok = func_02092a40(fp, 0);
                if (tok != NULL) {
                    if (func_02092a28(tok, data_021514b0) != 0) {
                        pos = func_02092994(fp, 0);
                        s32 unit_id = func_02092994(fp, 0);
                        s32 skill_id = func_02092994(fp, 0);
                        u8 *actor = NULL;
                        skill_tmp = NULL;
                        skill_obj = NULL;

                        u32 mask;
                        u16 cell_idx;

                        if (skill_id != 0) {
                            skill_tmp = func_02065298(NULL, (u16)skill_id, 0xb, 0, NULL);
                        }
                        pos_mask = 1 << pos;
                        mask = ((u32 (*)(void *,u8,s32))func_020deaf0)(skill_tmp, (u8)pos, 1);
                        for (cell_idx = 0; cell_idx < 9; cell_idx++) {
                            if (mask & (1 << cell_idx)) {
                                u8 *cell = func_0202e548((u8)cell_idx);
                                if (cell[0x1c] == 0) {
                                    if (unit_id != 0) {
                                        actor = (u8 *)func_0210c594(0x1c8, data_02155c3c);
                                        *(u8 **)(actor + 0x118) = func_0202fb50(unit_id, 0);
                                    }
                                    if (skill_id != 0) {
                                        skill_obj = func_02065298(NULL, (u16)skill_id, 0xb, 0, NULL);
                                        func_02022fb0(**(void ***)(skill_obj + 0x2c));
                                    }
                                    cell[0x30] |= 3;
                                    func_02030878(actor, skill_obj, cell, mask, pos_mask, 0);
                                }
                                func_0202c7d8((s8)cell_idx);
                            }
                        }
                        func_02064c80(skill_tmp);
                    } else if (func_02092a28(tok, data_021514b4) != 0) {
                        s32 target_id = func_02092994(fp, 0);
                        pos = func_02092994(fp, 0);
                        s32 skill_id = func_02092994(fp, 0);
                        skill_tmp = NULL;
                        skill_obj = NULL;
                        void *actor = func_020ddbcc((u16)target_id);
                        if (actor != NULL) {
                            s8 pos8 = (s8)pos;
    
                            u32 mask;
                            u16 cell_idx;
                            if (skill_id != 0) {
                                skill_tmp = func_02065298(NULL, (u16)skill_id, 0xb, 0, NULL);
                            }
                            pos_mask = 1 << pos8;
                            mask = ((u32 (*)(void *,u8,s32))func_020deaf0)(skill_tmp, (u8)pos8, 1);
                            for (cell_idx = 0; cell_idx < 9; cell_idx++) {
                                if (mask & (1 << cell_idx)) {
                                    u8 *cell = func_0202e548((u8)cell_idx);
                                    if (cell[0x1c] == 0) {
                                        func_0202e874(cell);
                                        if (skill_id != 0) {
                                            skill_obj = func_02065298(NULL, (u16)skill_id, 0xb, 0, NULL);
                                            func_02022fb0(**(void ***)(skill_obj + 0x2c));
                                        }
                                        cell[0x30] |= 2;
                                        func_02030878(actor, skill_obj, cell, mask, pos_mask, 0);
                                    }
                                    func_0202c7d8((s8)cell_idx);
                                }
                            }
                            func_02064c80(skill_tmp);
                        }
                    } else {
                        id = func_02092a70(tok, 0);
                    }
                }
                if (id >= 0x65) {
                    s32 ai_id = func_02092994(fp, 0);
                    u8 *unit;
                    u8 *actor;
                    void *disp;
                    u16 model_id;
                    func_02092994(fp, 0);
                    unit = func_0202fb50(id, 0);
                    unit[0] = 1;
                    actor = func_020dce1c(*(u16 *)(unit + 0x4c), 0, 0);
                    *(u16 *)(actor + 0x92) = 0;
                    *(u32 *)(actor + 0x0) = 0x1000;
                    *(u32 *)(actor + 0x4) = 0x20000;
                    *(u32 *)(actor + 0x8) = 0x1000;
                    *(u16 *)(actor + 0x8c) = (u16)id;
                    *(u16 *)(actor + 0x90) = (u16)(node[0] + 0x65);
                    actor[0x1a0] = node[0];
                    *(u8 **)(actor + 0x118) = unit;
                    *(u32 *)(actor + 0x78) = 0x640;
                    disp = func_020de160();
                    *(void **)(actor + 0x1a4) = disp;
                    func_020de190(disp, *(u16 *)(actor + 0x8e));
                    func_020ddd5c(actor);
                    func_020dd810(actor, 0, 0);
                    model_id = *(u16 *)(actor + 0x8e);
                    if (model_id < 0x320 || model_id > 0x383) {
                        s32 *p = **(s32 ***)(actor + 0x108);
                        *p += (idx % 4) * 8;
                    }
                    *(void **)(actor + 0x128) = func_020d413c();
                    *(void **)(actor + 0x11c) = func_02064be8();
                    if (*(u16 *)(unit + 0x40) != 0) {
                        u8 *item = func_02065298(*(void **)(actor + 0x11c), *(u16 *)(unit + 0x40), 0xb, 0, unit);
                        item[1] = 0xb;
                    }
                    if (*(u16 *)(unit + 0x42) != 0) {
                        u8 *item = func_02065298(*(void **)(actor + 0x11c), *(u16 *)(unit + 0x42), 0xb, 0, unit);
                        item[1] = 0xc;
                    }
                    if (*(u16 *)(unit + 0x44) != 0) {
                        u8 *item = func_02065298(*(void **)(actor + 0x11c), *(u16 *)(unit + 0x44), 0xb, 0, unit);
                        item[1] = 0xd;
                    }
                    if (*(u16 *)(unit + 0x46) != 0) {
                        u8 *item = func_02065298(*(void **)(actor + 0x11c), *(u16 *)(unit + 0x46), 0xb, 0, unit);
                        item[1] = 0xe;
                    }
                    if (*(u16 *)(unit + 0x48) != 0) {
                        u8 *item = func_02065298(*(void **)(actor + 0x11c), *(u16 *)(unit + 0x48), 0xb, 0, unit);
                        item[1] = 0xf;
                    }
                    if (*(u16 *)(unit + 0x4a) != 0) {
                        u8 *item = func_02065298(*(void **)(actor + 0x11c), *(u16 *)(unit + 0x4a), 0xb, 0, unit);
                        item[1] = 0x10;
                    }
                    *(void **)(actor + 0x12c) = func_02026e40((u16)ai_id);
                    *(void **)(actor + 0x124) = func_02026548();
                    func_021167f0(data_02160a6c + 0xb8, actor);
                }
            }
            if (fp != NULL) {
                func_021093b0(fp);
            }
        }
        node = *(u8 **)(node + 0xc);
        idx++;
    }

    node = *list_head;
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 0xc);
        if (node[0] == 0x63) {
            func_021168f8(list_head, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
        node = next;
    }
}

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
#define BID 0xea67
p=func_020ddbcc(BID);
if(p){
*(u16 *)(state+0x112)=0;*(u16 *)(state+0x114)=0;
func_020d91bc(6);func_020d9e7c();
node=*(u8 **)(data_02160090+8);
while(node){if(*(u8 **)(node+20))func_02093424(*(void **)(*(u8 **)(node+20)+8),zero);node=*(u8 **)(node+28);}
state[0xe8]=one;func_02060408(p);func_020d0a40(28);return;
}
id=BID-2;
p=func_020ddbcc(id);
if(p){func_02060408(p);found=one;}
else {
id=BID-1;p=func_020ddbcc(id);
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
if(id==BID-2)*(u16 *)(state+0x116)=BID-1;
else if(id==BID-1)*(u16 *)(state+0x116)=BID;
func_020d0a40(26);
*(u16 *)(state+0x112)=0;*(u16 *)(state+0x114)=0;*(u16 *)(state+0x118)=0;
state[0xe8]=one;
*(u16 *)(data_02160110[0]+0x72)&=(0xf800-one);
#undef BID
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

