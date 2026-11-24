/* 10 functions from 0x020D3160 to 0x020D413C (main), found by ds-decomp. */
#include "common.h"
typedef struct ObjectList_020d3fe8 { void *object; u8 pad[0x14]; struct ObjectList_020d3fe8 *next; } ObjectList_020d3fe8;
static inline s32 HasObject(u8 *entry, void *obj) {
while(entry) { if (*(void **)entry == obj) return 1; entry=*(u8 **)(entry+8); }
return 0;
}

typedef struct Node120_020d3160 {
    u8 unk_0;
    u8 pad_1[0xf];
    struct Node120_020d3160 *next;
} Node120_020d3160;

typedef struct Node12c_020d3160 {
    s16 unk_0;
    u8 pad_2[0x12];
    struct Node12c_020d3160 *next;
} Node12c_020d3160;

typedef struct Node_020d3fac {
    u8 pad_0[6];
    u8 unk_6;
    u8 pad_7[5];
    struct Node_020d3fac *next;
} Node_020d3fac;

typedef struct Mgr_020d3160 {
    u8 pad_00[4];
    void *unk_4;
    u8 pad_08[0xe4];
    s32 unk_ec;
    u8 pad_f0[0x30];
    Node120_020d3160 *unk_120;
    u8 pad_124[0x8];
    Node12c_020d3160 *unk_12c;
    u8 pad_130[0x14];
    u8 unk_144;
    u8 pad_145[0xb];
    Node_020d3fac *unk_150;
    u8 pad_154[0xc];
    void *unk_160;
    u32 unk_164;
    u16 unk_168;
} Mgr_020d3160;

extern Mgr_020d3160 *data_02160244;
extern u8 *data_02160a74;

void func_021168f8(void *, void *);
void func_0210c5dc(void *);

void func_020d3c98(s32 arg0) {
    Mgr_020d3160 *mgr = data_02160244;
    if (mgr != NULL) {
        mgr->unk_ec = arg0;
    }
}

void *func_020d3cb0(s32 arg0) {
    Node12c_020d3160 *node = data_02160244->unk_12c;
    while (node != NULL) {
        if (node->unk_0 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

extern void func_02005e80(void *, void *);
extern void *func_021092d8(void *);
extern void *func_0210c594(s32, void *);
extern s32 func_02092994(void *, s32);
extern void func_021167f0(void *, void *);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern u8 data_02151390[];
extern void *data_02155c3c;
void func_020d3cec(void) {
    u8 buf[0x40];
    void *file;

    func_02005e80(buf, data_02151390);
    file = func_021092d8(buf);
    do {
        u8 *entry = func_0210c594(0x14, data_02155c3c);
        *(u8 *)(entry + 0x0) = func_02092994(file, 0);
        *(u16 *)(entry + 0x2) = func_02092994(file, 0);
        *(u16 *)(entry + 0x4) = func_02092994(file, 0);
        *(u16 *)(entry + 0x6) = func_02092994(file, 0);
        *(u16 *)(entry + 0x8) = func_02092994(file, 0);
        *(u16 *)(entry + 0xa) = func_02092994(file, 0);
        func_021167f0(&data_02160244->unk_120, entry);
    } while (func_02109444(file) != 0);
    if (file != NULL) {
        func_021093b0(file);
    }
}

void func_020d3dd8(void) {
    while (data_02160244->unk_120 != NULL) {
        Node120_020d3160 *node = data_02160244->unk_120;
        func_021168f8(&data_02160244->unk_120, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    while (data_02160244->unk_12c != NULL) {
        Node12c_020d3160 *node = data_02160244->unk_12c;
        func_021168f8(&data_02160244->unk_12c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void *func_020d3e60(u32 arg0) {
    Node120_020d3160 *node = data_02160244->unk_120;
    while (node != NULL) {
        if (node->unk_0 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_020d3e9c(s32 arg0, u32 arg1) {
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);
    if (arg0 == 0) {
        func_020b52f4(one);
        func_020a5ce4(p);
        func_020a9544(*(void **)p);
        func_020e1ec8(p, 0xe);
        func_020a8810(*(void **)((u8 *)p + 4), 0x10);
        func_020e24bc(p, 0, 8, arg1, one);
    } else if (arg0 == 1) {
        func_020b52f4(0);
        func_020a5ce4(p);
    }
}

void func_020d3f38(u8 arg0) {
    Mgr_020d3160 *mgr = data_02160244;
    if (mgr->unk_144 != 4 && arg0 == 4 && *(u8 *)(mgr->unk_4 + 0x12) == 0) {
        u32 zero;
        func_020d0884();
        zero = 0;
        func_020d3160(7, zero, zero, zero);
        func_020d3160(zero, zero, zero, zero);
    }
    data_02160244->unk_144 = arg0;
}

void *func_020d3fac(u8 arg0) {
    Node_020d3fac *node = data_02160244->unk_150;
    while (node != NULL) {
        if (node->unk_6 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_020d3fe8(u8 *p,u8 *list,u8 *arg2) {
s32 found=0;
u8 *node=list;
Mgr_020d3160 *mgr;
u16 count;
func_020d3160(6,**(u8 **)(p+0x118),0,*(u16 *)(p+0x90)&255);
mgr=data_02160244;
count=mgr->unk_168;
if (node) do {
void *obj=*(void **)node;
if(obj) {
u8 *entry=mgr->unk_160;
while(entry) {
if(*(void **)entry==obj) {found=1;break;}
entry=*(u8 **)(entry+8);
}
}
if(found) break;
node=*(u8 **)(node+0x18);
} while(node);
if(arg2[7]!=8) {
func_020d0884();
while(list) {
void *obj=*(void **)list;
if(obj) {
u8 *entry=func_0210c594(12,data_02155c3c);
*(void **)entry=obj;
func_021167f0((u8 *)data_02160244+0x160,entry);
}
list=*(u8 **)(list+0x18);
}
}
mgr=data_02160244;
if(mgr->unk_144==4 && count==0) found=1;
if(found) mgr->unk_144=*(s16 *)(arg2+0x16);
else {
s32 value=*(s16 *)(arg2+0x16);
s32 zero=0;
mgr->unk_144=value;
func_020d3160(7,zero,zero,zero);
func_020d3160(zero,zero,zero,zero);
}
}

