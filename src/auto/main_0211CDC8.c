/* 24 functions from 0x0211CDC8 to 0x0211DDAC (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021701fc[];
extern u8 data_0217032c[];
extern u8 data_02170248[];
extern u8 data_021702fc[];
extern u8 data_021702b8[];
extern u8 data_0217035c[];
extern void func_02001194(u8 *, u8 *);
extern void func_02001508(u8 *, u8 *, u8 *);
extern void func_02001160(u8 *, u8 *, u32, u32, u32);
extern void func_0211d814(void);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02004588(void);
extern void func_020045bc(void *, u32, u32);
extern void func_0200462c(void);
extern void func_021205ec(u32, void *, s32);
extern s32 func_0211d144(void *, void *);
extern s32 func_0211d3a0(void *, void *);
void func_0211d238(u8 *);
void func_0211d49c(u8 *arg0);

static inline u8 *get_material_0211cf5c(u8 *base, u32 idx);
static inline void *get_res_data_by_idx(const u8 *dict, u32 idx) {
    if (dict != NULL && idx < *(const u8 *)(dict + 1)) {
        u16 ofs = *(const u16 *)(dict + 6);
        u16 unit = *(const u16 *)(dict + ofs);
        return (void *)((dict + ofs + 4) + unit * idx);
    }
    return NULL;
}
static inline u8 *get_material_0211cf5c(u8 *base, u32 idx) {
 if (base) { u32 *entry=get_res_data_by_idx(base+4,idx); if(entry) return base+*entry; }
 return NULL;
}
void func_0211cdc8(u8 *arg0, BOOL arg1) {
    u32 sz;

    if (arg1) {
        func_0200439c();
    }
    sz = (u32)*(u16 *)(arg0 + 0xc) << 3;
    if (sz != 0) {
        func_020043f8(arg0 + *(u32 *)(arg0 + 0x14), (*(u32 *)(arg0 + 8) & 0xffff) << 3, sz);
        *(u16 *)(arg0 + 0x10) |= 1;
    }
    {
        u32 ofs;
        u32 sz2 = (u32)*(u16 *)(arg0 + 0x1c) << 3;
        u32 addr;
        if (sz2 != 0) {
            addr = (*(u32 *)(arg0 + 0x18) & 0xffff) << 3;
            ofs = *(u32 *)(arg0 + 0x28);
            func_020043f8(arg0 + *(u32 *)(arg0 + 0x24), addr, sz2);
            func_020043f8(arg0 + ofs, 0x20000 + ((addr & 0x1ffff) >> 1) + ((addr & 0x40000) >> 2), sz2 >> 1);
            *(u16 *)(arg0 + 0x20) |= 1;
        }
    }
    if (arg1) {
        func_02004544();
    }
}

void func_0211ce80(u8 *arg0, u32 *arg1, u32 *arg2) {
    if (arg1 != NULL) {
        u32 key = *(u32 *)(arg0 + 8);
        *(u16 *)(arg0 + 0x10) &= ~1;
        *arg1 = key;
        *(u32 *)(arg0 + 8) = 0;
    }
    if (arg2 != NULL) {
        u32 key = *(u32 *)(arg0 + 0x18);
        *(u16 *)(arg0 + 0x20) &= ~1;
        *arg2 = key;
        *(u32 *)(arg0 + 0x18) = 0;
    }
}

u32 func_0211ced0(u8 *arg0) {
    if (arg0 != NULL) {
        return (u32)*(u16 *)(arg0 + 0x30) << 3;
    }
    return 0;
}

void func_0211cee4(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0x2c) = arg1;
}

void func_0211ceec(u8 *arg0, BOOL arg1) {
    u32 a, b;
    if (arg1) {
        func_02004588();
        a = *(u32 *)(arg0 + 0x2c);
        b = *(u16 *)(arg0 + 0x30);
        a = (a & 0xffff) << 3;
        b = b << 3;
        func_020045bc(arg0 + *(u32 *)(arg0 + 0x38), a, b);
    }
    *(u16 *)(arg0 + 0x32) |= 1;
    if (arg1) {
        func_0200462c();
    }
}

#pragma schedule off
u32 func_0211cf3c(u8 *arg0) {
u32 key;
*(u16 *)(arg0+0x32)&=~1;
key=*(u32 *)(arg0+0x2c);
*(u32 *)(arg0+0x2c)=0;
return key;
}

s32 func_02001fb0(s32,s32);
#pragma schedule on
void func_0211cf5c(void *arg0,void *arg1,void *arg2,void *arg3){
 u8 *base=arg0,*desc=arg1,*tex=arg2;
 u32 *info=arg3;
 u32 i;
 u32 addr;
 u8 *indices=base+*(u16 *)desc;
 u32 key;
 if((info[0]&0x1c000000)!=0x14000000)key=*(u32 *)(tex+8);
 else key=*(u32 *)(tex+0x18);
 addr=(u16)key;
 addr &=~0xe0000000;
 i=0;
 for(;i<desc[2];i++){
 u32 h;
 u8 *mat;
 u32 idx=indices[i];
 mat=get_material_0211cf5c(base,idx);
 *(u32 *)(mat+0x14)|=info[0]+addr;
 {u32 wh=info[1];u32 w=wh&0x7ff;h=(wh&0x3ff800)>>11;
 *(u32 *)(mat+0x24)=w==*(u16 *)(mat+0x20)?0x1000:func_02001fb0(w<<12,*(u16 *)(mat+0x20)<<12);
 }
 *(u32 *)(mat+0x28)=h==*(u16 *)(mat+0x22)?0x1000:func_02001fb0(h<<12,*(u16 *)(mat+0x22)<<12);
 }
 desc[3]|=1;
}
void func_0211d08c(u8 *arg0, u8 *arg1) {
    u16 ofs = *(u16 *)arg1;
    u8 *base = arg0 + ofs;
    u32 n = *(u8 *)(arg1 + 2);
    u32 i;
    if (n <= 0) goto done;
    for (i = 0; i < n; i++) {
        u8 v = *(u8 *)(base + i);
        u8 *p = NULL;
        if (arg0 != NULL && arg0 + 4 != NULL && v < *(u8 *)(arg0 + 5)) {
            u16 idx = *(u16 *)(arg0 + 0xa);
            u8 *b2 = arg0 + 4 + idx;
            p = *(u16 *)b2 * v + b2 + 4;
        }
        if (p != NULL) {
            u8 *q = arg0 + *(u32 *)p;
            *(u32 *)(q + 0x14) &= 0xc00f0000;
            *(u32 *)(q + 0x24) = 0x1000;
            *(u32 *)(q + 0x28) = 0x1000;
        }
    }
done:
    *(u8 *)(arg1 + 3) &= ~1;
}

void *func_02120c74(void *, void *);
void func_0211cf5c(void *, void *, void *, void *);
#pragma opt_propagation off
#pragma opt_common_subs off
#pragma opt_strength_reduction off
s32 func_0211d144(void *arg0, void *arg1) {
s32 zero=0;
u8 *dict;
u32 i;
s32 result;
u8 *p;
if(arg0 && *(u32 *)((u8 *)arg0+8)) p=(u8 *)arg0+*(u32 *)((u8 *)arg0+8);
else p=NULL;
dict=p+*(u16 *)p;
result=1;
for(i=0;i<dict[1];i++){
u8 *name;
void *found;
if(dict && i<dict[1]) {
u8 *base=dict+*(u16 *)(dict+6);
name=base+*(u16 *)(base+2)+i*16;
} else name=(u8 *)zero;
if(arg1) found=func_02120c74((u8 *)arg1+0x3c,name);
else found=(void *)zero;
if(found){
u8 *entry;
if(dict && i<dict[1]) { u16 unit; entry=dict+*(u16 *)(dict+6); unit=*(u16 *)entry; entry=entry+4+unit*i; }
else entry=(u8 *)zero;
if(!(entry[3]&1)) func_0211cf5c(p,entry,arg1,found);
} else result=zero;
}
return result;
}
#pragma opt_strength_reduction on
#pragma opt_common_subs on
#pragma opt_propagation on
void func_0211d238(u8 *arg0) {
    u32 i;
    u8 *p, *name, *q;
    if (arg0 != NULL && *(u32 *)(arg0 + 8) != 0) {
        p = arg0 + *(u32 *)(arg0 + 8);
    } else {
        p = NULL;
    }
    q = p + *(u16 *)p;
    if (*(u8 *)(q + 1) <= 0) return;
    for (i = 0; i < *(u8 *)(q + 1); i++) {
        name = NULL;
        if (i < *(u8 *)(q + 1)) {
            u8 *base = q + *(u16 *)(q + 6);
            name = *(u16 *)base * i + (base + 4);
        }
        if (*(u8 *)(name + 3) & 1) {
            func_0211d08c(p, name);
        }
    }
}

#pragma scheduling off
void func_0211d2c4(u8 *arg0, u8 *arg1, u8 *arg2, u16 *arg3) {
u16 ofs, key;
BOOL flag;
u8 *indices;
u32 i;
key = (u16)*(u32 *)(arg2 + 0x2c);
flag = arg3[1] & 1;
key &= ~0xe0000000;
ofs = arg3[0];
indices = arg0 + *(u16 *)arg1;
if (!flag) { ofs >>= 1; key >>= 1; }
for (i=0; i<arg1[2]; i++) {
u8 *mat;
u32 idx = indices[i];
if (arg0 != NULL) {
u32 *entry = (u32 *)get_res_data_by_idx(arg0+4,idx);
if (entry != NULL) { mat=arg0+*entry; goto got_mat; }
}
mat=NULL;
got_mat:
*(u16 *)(mat+0x1c) = ofs + key;
}
arg1[3] |= 1;
}

s32 func_0211d3a0(void *arg0_v, void *arg1_v) {
    u8 *arg0 = (u8 *)arg0_v;
    u8 *arg1 = (u8 *)arg1_v;
    u8 *r8 = (arg0 != NULL && *(u32 *)(arg0 + 8) != 0) ? (arg0 + *(u32 *)(arg0 + 8)) : NULL;
    u8 *r5 = r8 + *(u16 *)(r8 + 2);
    u32 i;
    s32 ret = 1;

    for (i = 0; i < r5[1]; i++) {
        u8 *name;
        u16 *res;
        if (r5 != NULL && i < *(volatile u8 *)(r5 + 1)) {
            u8 *p = r5 + *(u16 *)(r5 + 6);
            name = (p + *(u16 *)(p + 2)) + (i << 4);
        } else {
            name = NULL;
        }
        res = (arg1 != NULL && *(u16 *)(arg1 + 0x34) != 0) ? (u16 *)func_02120c74(arg1 + *(u16 *)(arg1 + 0x34), name) : NULL;
        if (res != NULL) {
            u8 *entry;
            if (r5 != NULL && i < r5[1]) {
                u16 stride = *(u16 *)(r5 + *(u16 *)(r5 + 6));
                entry = (r5 + *(u16 *)(r5 + 6) + 4) + stride * i;
            } else {
                entry = NULL;
            }
            if (!(entry[3] & 1)) {
                func_0211d2c4(r8, entry, arg1, res);
            }
        } else {
            ret = 0;
        }
    }
    return ret;
}

#pragma scheduling reset
void func_0211d49c(u8 *arg0) {
    u8 *mat = (arg0 != NULL && *(u32 *)(arg0 + 8) != 0) ? (arg0 + *(u32 *)(arg0 + 8)) : NULL;
    u8 *dict = mat + *(u16 *)(mat + 2);
    u32 i;
    for (i = 0; i < *(u8 *)(dict + 1); i++) {
        u8 *entry = (u8 *)get_res_data_by_idx(dict, i);
        if (entry[3] & 1) {
            entry[3] &= ~1;
        }
    }
}

s32 func_0211d520(u8 *arg0, void *arg1) {
    u32 i;
    s32 ret = 1;
    for (i = 0; i < *(u8 *)(arg0 + 9); i++) {
        u8 *mdl = NULL;
        if (arg0 != NULL) {
            u32 *entry = (u32 *)get_res_data_by_idx(arg0 + 8, i);
            if (entry != NULL) {
                mdl = arg0 + *entry;
                goto got_mdl;
            }
        }
        mdl = NULL;
    got_mdl:
        ret &= func_0211d144(mdl, arg1);
        ret &= func_0211d3a0(mdl, arg1);
    }
    return ret;
}

void func_0211d5d0(u8 *arg0) {
    u32 i;
    for (i = 0; i < *(u8 *)(arg0 + 9); i++) {
        u8 *mdl;
        if (arg0 != NULL) {
            u32 *entry = (u32 *)get_res_data_by_idx(arg0 + 8, i);
            if (entry != NULL) {
                mdl = arg0 + *entry;
                goto got_mdl;
            }
        }
        mdl = NULL;
    got_mdl:
        func_0211d238(mdl);
        func_0211d49c(mdl);
    }
}

extern u8 data_02170204[];
extern void func_020010d8(void *);
extern void func_02001834(void *);
extern void func_02000cb4(void *);
void func_0211d664(void) {
    u8 *p = data_021701fc;
    *(u32 *)(p + 0x00) = 0x17101610;
    *(u32 *)(p + 0x04) = 0;
    *(u32 *)(p + 0x48) = 2;
    *(u32 *)(p + 0x7c) = 0x32323232;
    *(u32 *)(p + 0x90) = 0x60293130;
    *(u32 *)(p + 0xa4) = 0x33333333;
    *(u32 *)(p + 0xb8) = 0x002a1b19;
    func_020010d8(data_02170248);
    func_02001834(data_02170204);
    *(u32 *)(p + 0x80) = 0x2d8b62d8;
    *(u32 *)(p + 0x84) = 0x40000200;
    *(u32 *)(p + 0x88) = 0x800001ff;
    *(u32 *)(p + 0x8c) = 0xc0080000;
    *(u32 *)(p + 0x94) = 0x4210c210;
    *(u32 *)(p + 0x98) = 0x4210c210;
    *(u32 *)(p + 0x9c) = 0x001f008f;
    *(u32 *)(p + 0xa0) = 0xbfff0000;
    *(u32 *)(p + 0xa8) = 0x00007fff;
    *(u32 *)(p + 0xac) = 0x4000001f;
    *(u32 *)(p + 0xb0) = 0x800003e0;
    *(u32 *)(p + 0xb4) = 0xc0007c00;
    *(u32 *)(p + 0xe0) = 0;
    *(u32 *)(p + 0xe4) = 0;
    *(u32 *)(p + 0xe8) = 0;
    func_02000cb4(data_021702b8);
    *(u32 *)(p + 0xec) = 0x1000;
    *(u32 *)(p + 0xf0) = 0x1000;
    *(u32 *)(p + 0xf4) = 0x1000;
    *(u32 *)(p + 0xf8) = 0;
    *(u32 *)(p + 0xfc) = 0;
    *(u32 *)(p + 0x248) = 0;
    *(u32 *)(p + 0x244) = 0;
    *(u32 *)(p + 0x240) = 0;
    *(u32 *)(p + 0x254) = 0;
    *(u32 *)(p + 0x24c) = 0;
    *(u32 *)(p + 0x250) = 0x1000;
    *(u32 *)(p + 0x25c) = 0;
    *(u32 *)(p + 0x258) = 0;
    *(u32 *)(p + 0x260) = -0x1000;
}

void func_0211d7a4(void) {
    u32 *p = (u32 *)data_021701fc;
    func_021205ec(p[0], p + 1, 0x3e);
    p[0x3f] &= ~1;
    p[0x3f] &= ~2;
}

void *func_0211d7d4(void) {
    u8 *p = data_021701fc;
    if ((*(u32 *)(p + 0xfc) & 0x8) == 0) {
        func_02001194(data_02170248, data_021702fc);
        *(u32 *)(p + 0xfc) |= 0x8;
    }
    return data_021702fc;
}

void func_0211d814(void) {
    u8 *const p = data_0217032c;
    func_02001508(data_021702b8, data_02170248, p);
    func_02001160(p, p, *(u32 *)(data_021701fc + 0xec), *(u32 *)(data_021701fc + 0xf0), *(u32 *)(data_021701fc + 0xf4));
    func_02001194(p, data_0217035c);
}

void *func_0211d878(void) {
    u8 *p = data_021701fc;
    if ((*(u32 *)(p + 0xfc) & 0x80) == 0) {
        func_0211d814();
        *(u32 *)(p + 0xfc) |= 0x80;
    }
    return data_0217032c;
}

extern u8 data_0217035c[];
void *func_0211d8ac(void) {
    u8 *p = data_021701fc;
    if ((*(u32 *)(p + 0xfc) & 0x80) == 0) {
        func_0211d814();
        *(u32 *)(p + 0xfc) |= 0x80;
    }
    return data_0217035c;
}

extern u8 data_02170248[];
extern u8 data_021702fc[];
extern void func_02001194(u8 *, u8 *);
extern u8 data_021702b8[];
extern void func_02001508(u8 *, u8 *, u8 *);
extern void func_02001160(u8 *, u8 *, u32, u32, u32);
s32 func_0211d8e0(u32 *arg0, u8 *arg1, u32 arg2) {
    s32 ret = 0;
    while (arg1 != NULL) {
        if (arg2 < *(u8 *)(arg1 + 0x19)) {
            u16 val = *(u16 *)(arg1 + 0x1A + arg2 * 2);
            if ((val & 0x300) == 0x100) {
                void (*fn)(u32 *, u8 *, u32) = *(void (**)(u32 *, u8 *, u32))(arg1 + 0xC);
                if (fn != NULL) {
                    fn(arg0, arg1, val & 0xFF);
                    ret = 1;
                }
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
    return ret;
}

void func_0211d94c(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        volatile s32 *v = arg0;
        s32 b = v[1];
        s32 c = v[2];
        s32 a = v[0];
        v[1] = b + arg2;
        v[2] = c + arg2;
        v[0] = a + arg2;
    } else {
        s32 p0 = arg1[0] * arg2;
        s32 p1 = arg1[1] * arg2;
        s32 p2 = arg1[2] * arg2;
        arg0[0] += p0 >> 12;
        arg0[1] += p1 >> 12;
        arg0[2] += p2 >> 12;
    }
}

