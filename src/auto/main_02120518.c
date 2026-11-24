/* 27 functions from 0x02120518 to 0x02121494 (main), found by ds-decomp. */
#include "common.h"
extern u32 (*data_02156150)(u32, u32, u32);
extern u32 (*data_02156158)(u32, u32, u32);
u32 func_0211cd8c(void *);
u32 func_0211cda0(void *);
u32 func_0211ced0(void *);
void func_0211cdb4(void *, u32, u32);
void func_0211cee4(void *, u32);
void func_0211cdc8(void *, int);
void func_0211ceec(void *, int);
void func_0211d520(void *, void *);
extern const u8 data_02144f4c[], data_02144f4d[], data_02144f4e[], data_02144f4f[];
void func_02009138(void *);

extern void (*data_0215615c)(u32);
extern void (*data_02156154)(u32);
extern void func_0211d5d0(void *);
extern u32 func_0211cf3c(void *);
extern void func_0211ce80(void *, u32 *, u32 *);
extern u8 *func_02120f94(u8 *);
extern u8 *func_02120fa4(u8 *);

extern void func_02117478(void);
extern u8 data_02173164[12];
extern u32 data_02145ba4;
extern u32 data_02173168;
extern void func_021205ec(u32, void *, u32);
extern void func_021204a8(void);
extern void func_02008d08(u32, void *, u32, void (*)(u32 *), void *);
extern void func_02008b08(u32, void *, u32, void (*)(u32 *), void *);
extern s32 func_02002f3c(void *);
extern void func_02001860(void *, void *);
extern s32 func_02002f6c(void *);
extern void func_021206c8(void *, void *);
extern void *func_0211c9c8(void *, void *);
extern void func_02117464(void *, void *);
extern void func_02002c2c(void);
extern void func_0211d664(void);
extern void func_02120bbc(u8 *, u32, u32);
extern u32 data_02155edc;
extern void func_02008df0(u32, void *, u32);
extern void func_02121494(void *, u32, s32, void *);
extern u8 *func_02121104(u8 *, u32);

typedef struct {
    u8 *unk00;
    u8 pad04[0xd0];
    u8 *unkd4;
    u8 padD8[0x10];
    void (*unke8)(u8 *);
} Unk_02170460;

extern Unk_02170460 *data_02170460;

static u8 *get_node_021211f0(u8 *dict, u32 *entry) {
    if (entry == NULL) {
        return NULL;
    }
    return dict + *entry;
}
void func_02120518(u32 *arg0) {
    *arg0 = 0;
}

void func_02120524(s32 arg0) {
    *(s32 *)(data_02173164 + 8) = arg0;
}

void func_02120534(u32 *arg0, u32 arg1) {
    if (arg1 < 0x100 || data_02145ba4 == (u32)-1) {
        func_021205ec(*arg0, arg0 + 1, (arg1 >> 2) - 1);
    } else {
        func_021204a8();
        *(u32 *)(data_02173164 + 4) = 1;
        if (*(s32 *)(data_02173164 + 8) != 0) {
            func_02008d08(data_02145ba4 <= 3 ? data_02145ba4 : (u32)-1, arg0, arg1, func_02120518, &data_02173168);
        } else {
            func_02008b08(data_02145ba4 <= 3 ? data_02145ba4 : (u32)-1, arg0, arg1, func_02120518, &data_02173168);
        }
    }
}

extern void func_02008eb4(void *, void *, u32);
extern void func_02120500(void);
extern void func_02008e50(void *, volatile void *, u32);
void func_021205ec(u32 arg0, void *arg1, u32 arg2) {
    u32 *buf = *(u32 **)(data_02173164 + 0);

    if (buf != NULL) {
        if (*(volatile u32 *)(data_02173164 + 4) != 0 && buf[0] + 1 + arg2 <= 0xc0) {
            u32 idx = buf[0];
            buf[0] = idx + 1;
            ((u32 *)((u8 *)(*(u32 **)(data_02173164 + 0)) + 4))[idx] = arg0;
            if (arg2 == 0) {
                return;
            }
            buf = *(u32 **)(data_02173164 + 0);
            func_02008eb4(arg1, &buf[1] + buf[0], arg2 * 4);
            (*(u32 **)(data_02173164 + 0))[0] += arg2;
            return;
        }
        if (buf[0] != 0) {
            func_021204a8();
        } else if (*(volatile u32 *)(data_02173164 + 4) != 0) {
            func_02120500();
        }
    } else if (*(volatile u32 *)(data_02173164 + 4) != 0) {
        func_02120500();
    }
    *(volatile u32 *)0x04000400 = arg0;
    func_02008e50(arg1, (volatile void *)0x04000400, arg2 * 4);
}

void func_021206c8(void *arg0, void *arg1) {
    u8 mtx[0x40];
    func_021204a8();
    *(volatile u32 *)0x4000440 = 0;
    *(volatile u32 *)0x4000444 = 0;
    *(volatile u32 *)0x4000454 = 0;
    if (arg0 != NULL) {
        u8 *p = mtx;
        while (func_02002f3c(p) != 0) {}
        func_02001860(p, arg0);
    }
    if (arg1 != NULL) {
        while (func_02002f6c(arg1) != 0) {}
    }
    *(volatile u32 *)0x4000448 = 1;
    *(volatile u32 *)0x4000440 = 2;
}

s32 func_02120754(u8 *arg0, void *arg1, void *arg2, u32 arg3) {
    u8 *dict = *(u8 **)(arg0 + 4) + 0x40;
    u8 *node;
    u32 val;
    if (dict != NULL) {
        u32 *entry;
        if (dict != NULL && arg3 < *(u8 *)(dict + 1)) {
            u16 off = *(u16 *)(dict + 6);
            u16 size = *(u16 *)(dict + off);
            entry = (u32 *)(dict + off + 4 + size * arg3);
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
    val = ((u32)(*(u16 *)node & 0xf800)) >> 11;
    if (val != 0x1f) {
        u32 cmd = val;
        func_021205ec(0x14, &cmd, 1);
        if (arg1 != NULL || arg2 != NULL) {
            func_021206c8(arg1, arg2);
        }
        return 1;
    }
    return 0;
}

void func_02120800(void) {
    func_02002c2c();
    func_0211d664();
    *(volatile u32 *)0x4000600 = (*(volatile u32 *)0x4000600 & ~0xc0000000) | 0x80000000;
}

void func_02120a68(u8 *arg0) {
u8 *mdl;
u8 *tex;
u32 key;
u32 key1,key2;
switch(*(u32 *)arg0) {
case 0x30415442: break;
case 0x30414d42: break;
case 0x30415642: break;
case 0x30505442: break;
case 0x30444d42:
mdl=func_02120f94(arg0);
if(func_02120fa4(arg0)!=NULL) func_0211d5d0(mdl);
case 0x30585442:
tex=func_02120fa4(arg0);
if(tex!=NULL) {
key=func_0211cf3c(tex);
func_0211ce80(tex,&key1,&key2);
if(key!=0) data_0215615c(key);
if(key2!=0) data_02156154(key2);
if(key1!=0) data_02156154(key1);
}
break;
}
}

void func_02120b8c(void *arg0, void *arg1, void *arg2) {
    func_02117464(arg0, func_0211c9c8(arg1, arg2));
}

void func_02120bb0(void) {
    func_02117478();
}

void func_02120bbc(u8 *arg0, u32 arg1, u32 arg2) {
    u8 *matInfo;
    u8 *mat;
    if (arg0 != NULL && *(u32 *)(arg0 + 8) != 0) {
        matInfo = arg0 + *(u32 *)(arg0 + 8);
    } else {
        matInfo = NULL;
    }
    if (matInfo != NULL) {
        u8 *dict = matInfo + 4;
        u32 *entry;
        if (dict != NULL && arg1 < *(u8 *)(matInfo + 5)) {
            u16 off = *(u16 *)(matInfo + 10);
            u16 size = *(u16 *)(dict + off);
            entry = (u32 *)(dict + off + 4 + size * arg1);
        } else {
            entry = NULL;
        }
        if (entry != NULL) {
            mat = matInfo + *entry;
            goto got_mat;
        }
    }
    mat = NULL;
got_mat:
    *(u32 *)(mat + 0xc) = (*(u32 *)(mat + 0xc) & ~0x3f000000) | (arg2 << 24);
}

void func_02120c34(u8 *arg0, u32 arg1) {
    u32 i;
    for (i = 0; i < *(u8 *)(arg0 + 0x18); i++) {
        func_02120bbc(arg0, i, arg1);
    }
}

void *func_02120c74(u8 *dict, u32 *name) {
    u32 i;
    u32 *entry;
    if (name == NULL) return NULL;
    if (dict[1] < 16) {
        u32 a = name[0], b = name[1], c = name[2], d = name[3];
        i = 0;
        if (i < (u32)dict[1]) do {
            if (dict != NULL && i < *(volatile u8 *)(dict + 1)) {
                u8 *p = dict + *(u16 *)(dict + 6);
                entry = (u32 *)(p + *(u16 *)(p + 2) + i * 16);
            } else {
                entry = NULL;
            }
            if (entry[0] == a && entry[1] == b && entry[2] == c && entry[3] == d) {
                if (dict != NULL && i < dict[1]) {
                    u8 *p = dict + *(u16 *)(dict + 6);
                    return p + 4 + *(u16 *)p * i;
                }
                return NULL;
            }
            i++;
        } while (i < *(volatile u8 *)(dict + 1));
    } else {
        u8 *nodes = dict + 8;
        u8 *prev;
        u32 idx = nodes[1];
        u8 *node;
        s32 bit;
        if (idx != 0) {
            node = nodes + idx * 4;
            bit = node[0];
            prev = nodes;
            while (prev[0] > (u32)bit) {
                idx = node[1 + ((name[bit >> 5] >> (bit & 31)) & 1)];
                prev = node;
                node = nodes + idx * 4;
                bit = node[0];
            }
            i = node[3];
            if (dict != NULL && i < dict[1]) {
                u8 *p = dict + *(u16 *)(dict + 6);
                entry = (u32 *)(p + *(u16 *)(p + 2) + i * 16);
            } else {
                entry = NULL;
            }
            if (entry[0] == name[0] && entry[1] == name[1] && entry[2] == name[2] && entry[3] == name[3]) {
                if (dict != NULL && i < dict[1]) {
                    u8 *p = dict + *(u16 *)(dict + 6);
                    return p + 4 + *(u16 *)p * i;
                }
                return NULL;
            }
        }
    }
    return NULL;
}

s32 func_02120e30(u8 *dict, u32 *name) {
u32 i;
u32 *entry;
if(name==NULL) return -1;
if(dict[1]<16) {
u32 a=name[0], b=name[1], c=name[2], d=name[3];
i=0;
if(i < (u32)dict[1]) do {
if(dict!=NULL && i<*(volatile u8 *)(dict+1)) {
u8 *p=dict+*(u16 *)(dict+6);
entry=(u32 *)(p+*(u16 *)(p+2)+i*16);
} else entry=NULL;
if(entry[0]==a && entry[1]==b && entry[2]==c && entry[3]==d) return i;
i++;
} while(i<*(volatile u8 *)(dict+1));
} else {
u8 *nodes=dict+8;
u8 *prev;
u32 idx=nodes[1];
u8 *node;
s32 bit;
if(idx!=0) {
node=nodes+idx*4;
bit=node[0];
prev=nodes;
while(prev[0]>(u32)bit) {
idx=node[1+((name[bit>>5]>>(bit&31))&1)];
prev=node;
node=nodes+idx*4;
bit=node[0];
}
i=node[3];
if(dict!=NULL && i<dict[1]) {
u8 *p=dict+*(u16 *)(dict+6);
entry=(u32 *)(p+*(u16 *)(p+2)+i*16);
} else entry=NULL;
if(entry[0]==name[0] && entry[1]==name[1] && entry[2]==name[2] && entry[3]==name[3]) return i;
}
}
return -1;
}

extern u32 data_02145ba4;
extern u32 data_02173168;
extern void func_021205ec(u32, void *, u32);
extern void func_021204a8(void);
extern void func_02008d08(u32, void *, u32, void (*)(u32 *), void *);
extern void func_02008b08(u32, void *, u32, void (*)(u32 *), void *);
extern s32 func_02002f3c(void *);
extern void func_02001860(void *, void *);
extern s32 func_02002f6c(void *);
u8 *func_02120f94(u8 *arg0) {
    u16 off = *(u16 *)(arg0 + 0xc);
    return arg0 + *(u32 *)(arg0 + off);
}

u8 *func_02120fa4(u8 *arg0) {
    u32 *offs = (u32 *)(arg0 + *(u16 *)(arg0 + 0xc));
    if (*(u16 *)(arg0 + 0xe) == 1) {
        if (*(u32 *)arg0 == 0x30585442) {
            return arg0 + offs[0];
        }
        return NULL;
    }
    return arg0 + offs[1];
}

u8 *func_02120fe4(u8 *arg0, u32 arg1) {
    if (arg0 != NULL) {
        u8 *mdlSet = arg0 + *(u32 *)(arg0 + *(u16 *)(arg0 + 0xc));
        u8 *dict = mdlSet + 8;
        u32 *entry;
        if (dict != NULL && arg1 < *(u8 *)(mdlSet + 9)) {
            u16 off = *(u16 *)(mdlSet + 0xe);
            u16 size = *(u16 *)(dict + off);
            entry = (u32 *)(dict + off + 4 + size * arg1);
        } else {
            entry = NULL;
        }
        if (entry != NULL) {
            return mdlSet + *entry;
        }
    }
    return NULL;
}

u8 *func_02121040(u8 *arg0, u32 arg1) {
    if (arg0 != NULL && arg1 < *(u8 *)(arg0 + 6)) {
        return arg0 + *(u16 *)(arg0 + 8) + (arg1 << 4);
    }
    return NULL;
}

u8 *func_02121068(u8 *arg0, u32 arg1) {
    if (arg0 != NULL && arg1 < *(u8 *)(arg0 + 7)) {
        return arg0 + *(u16 *)(arg0 + 0xa) + (arg1 << 4);
    }
    return NULL;
}

void *func_02121090(u8 *arg0, u16 arg1, u16 arg2) {
    u8 *p = func_02121104(arg0, arg1);
    s16 scale = *(s16 *)(p + 4);
    u16 n = *(u16 *)(p + 6);
    u8 *arr = arg0 + n;
    u32 v = (u32)(scale * (s32)arg2) >> 12;
    u16 count;

    while (v != 0 && *(u16 *)(arr + v * 4) >= arg2) {
        v--;
    }
    count = *(u16 *)(p + 0);
    while (v + 1 < count && *(u16 *)(arr + v * 4 + 4) <= arg2) {
        v++;
    }
    return arr + v * 4;
}

u8 *func_02121104(u8 *arg0, u32 arg1) {
    u8 *p = arg0 + 0xc;
    if (p == NULL) {
        goto fail;
    }
    if (arg1 >= *(u8 *)(arg0 + 0xd)) {
        goto fail;
    }
    {
        u32 off = *(u16 *)(arg0 + 0x12);
        u32 entry = *(u16 *)(p + off);
        return (u8 *)(p + off + 4) + entry * arg1;
    }
fail:
    return NULL;
}

void func_02121138(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 val;
    u8 *table;
    *(u32 *)(arg0 + 8) = (u32)arg1;
    val = *(u8 *)(arg2 + 0x17);
    ((u32 *)arg0)[3] = data_02155edc;
    arg0[0x19] = val;
    func_02008df0(0, arg0 + 0x1a, (u32)val * 2);
    table = arg1 + 0x14;
    for (i = 0; i < *(u16 *)(arg1 + 6); i++) {
        u16 idx = *(u16 *)(table + i * 2);
        *(u16 *)(arg0 + 0x1a + i * 2) = (*(u32 *)(arg1 + idx) >> 24) | 0x100;
    }
}

void func_021211b4(u32 *arg0, u8 *arg1, u32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;

    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    func_02121494(ptr, arg2, frame, arg0);
}

void func_021211f0(u8 *arg0) {
    Unk_02170460 *p = data_02170460;
    u8 index = *(u8 *)(p->unk00 + 1);
    u8 *dict = p->unkd4;
    u8 *node;
    u16 flags;
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
    flags = *(u16 *)node;
    if (flags & 1) {
        *(u32 *)arg0 |= 4;
        return;
    }
    *(u32 *)(arg0 + 0x4c) = *(u32 *)(node + 4);
    *(u32 *)(arg0 + 0x50) = *(u32 *)(node + 8);
    *(u32 *)(arg0 + 0x54) = *(u32 *)(node + 0xc);
}

void func_02121284(void) {
    u8 index = *(u8 *)(data_02170460->unk00 + 1);
    u8 *dict = data_02170460->unkd4;
    u8 *node;
    u16 flags;
    u8 *v;
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
    flags = *(u16 *)node;
    node += 4;
    v = node;
    if (!(flags & 1)) {
        v += 0xc;
    }
    if (!(flags & 2)) {
        if (flags & 8) {
            v += 4;
        } else {
            v += 0x10;
        }
    }
    data_02170460->unke8(v);
}

void func_02121314(u8 *arg0) {
u8 index=data_02170460->unk00[1];
u8 *dict=data_02170460->unkd4;
s32 axis;
u8 *node;
u16 flags;
s16 *v;
if(dict!=NULL) {
u32 *entry;
if(dict!=NULL && index<dict[1]) {
u16 off=*(u16 *)(dict+6);
u16 size=*(u16 *)(dict+off);
entry=(u32 *)(dict+off+4+size*index);
} else entry=NULL;
if(entry!=NULL) { node=dict+*entry; goto got_node; }
}
node=NULL;
got_node:
flags=*(u16 *)node;
v=(s16 *)(node+4);
if(!(flags&1)) v+=6;
if(!(flags&2)) {
if(flags&8) {
axis=(flags&0xf0)>>4;
s32 b;
s32 a=v[0];
b=v[1];
s32 unit;
func_02009138(arg0+0x28);
unit=(*(u16 *)node&0x100) ? -0x1000 : 0x1000;
*(s32 *)(arg0+axis*4+0x28)=unit;
*(s32 *)(arg0+data_02144f4c[axis*4]*4+0x28)=a;
*(s32 *)(arg0+data_02144f4d[axis*4]*4+0x28)=b;
if(*(u16 *)node&0x200) b=-b;
*(s32 *)(arg0+data_02144f4e[axis*4]*4+0x28)=b;
if(*(u16 *)node&0x400) a=-a;
*(s32 *)(arg0+data_02144f4f[axis*4]*4+0x28)=a;
} else {
*(s32 *)(arg0+0x28)=*(s16 *)(node+2);
*(s32 *)(arg0+0x2c)=v[0];
*(s32 *)(arg0+0x30)=v[1];
*(s32 *)(arg0+0x34)=v[2];
*(s32 *)(arg0+0x38)=v[3];
*(s32 *)(arg0+0x3c)=v[4];
*(s32 *)(arg0+0x40)=v[5];
*(s32 *)(arg0+0x44)=v[6];
*(s32 *)(arg0+0x48)=v[7];
}
} else *(u32 *)arg0|=2;
}

