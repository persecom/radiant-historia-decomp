/* 14 functions from 0x020BC394 to 0x020BD38C (main), found by ds-decomp. */
#include "common.h"
extern char data_02151064[], data_0215107c[];
extern void *func_021092d8(void *);
extern s32 func_020f685c(void *, s32);
extern s32 func_021093f0(void *);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);

typedef struct UnkStruct_02160134 {
    void *unk00;
    void *unk04;
} UnkStruct_02160134;


extern UnkStruct_02160134 data_021601f8;
extern void func_0210c5dc(void *);
extern u8 *data_02160078;
extern u32 data_02155c3c;
extern u8 data_021510fc[];
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, u32);
extern void func_021091b4(void);
extern void *func_02109b14(void *, void *);
void func_020bc794(void) {
    data_021601f8.unk00 = func_0210c594(0x64, data_02155c3c);
    func_021167ac((u8 *)data_021601f8.unk00 + 4, 0xc);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x10, 0x18);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x1c, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x28, 0x14);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x34, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x40, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x4c, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x58, 0x14);
    func_021091b4();
}

extern void func_021168f8(void *, void *);
void func_020bc844(void) {
    u8 *node;
    u8 *next;

    if (data_021601f8.unk00 == NULL) {
        return;
    }
    node = *(u8 **)((u8 *)data_021601f8.unk00 + 4);
    while (node != NULL) {
        next = *(u8 **)(node + 0x10);
        switch (node[6]) {
        case 0:
            func_021168f8((u8 *)data_021601f8.unk00 + 0x10, node);
            break;
        case 1:
            func_021168f8((u8 *)data_021601f8.unk00 + 0x1c, node);
            break;
        case 2:
            func_021168f8((u8 *)data_021601f8.unk00 + 0x28, node);
            break;
        case 3:
            func_021168f8((u8 *)data_021601f8.unk00 + 0x34, node);
            break;
        case 4:
            func_021168f8((u8 *)data_021601f8.unk00 + 0x40, node);
            break;
        case 5:
            func_021168f8((u8 *)data_021601f8.unk00 + 0x4c, node);
            break;
        case 6:
            func_021168f8((u8 *)data_021601f8.unk00 + 0x58, node);
            break;
        }
        func_021168f8((u8 *)data_021601f8.unk00 + 4, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }
    if (data_021601f8.unk00 != NULL) {
        func_0210c5dc(data_021601f8.unk00);
        data_021601f8.unk00 = NULL;
    }
}

u32 func_020bc954(u32 arg0) {
    if (arg0 >= 1 && arg0 <= 0x33) return 0;
    if (arg0 >= 0x65 && arg0 <= 0xc8) return 1;
    if (arg0 >= 0xc9 && arg0 <= 0x10f) return 2;
    if (arg0 >= 0x12d && arg0 <= 0x1a9) return 3;
    if (arg0 >= 0x208 && arg0 <= 0x26c) return 4;
    if (arg0 >= 0x2bd && arg0 <= 0x31e) return 5;
    if (arg0 >= 0x321 && arg0 <= 0x384) return 6;
    return 0xff;
}

extern s32 func_02092994(void *, s32);
void func_020bca10(u8 *arg0, void *arg1) {
    s32 i;
    *(u16 *)(arg0 + 0x0) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x2) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x4) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x6) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x8) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xa) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xc) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xe) = func_02092994(arg1, 0);
    for (i = 0; i < 3; i++) {
        arg0[0x16 + i] = func_02092994(arg1, 0);
        if (arg0[0x16 + i] == 0) {
            return;
        }
        *(u16 *)(arg0 + 0x10 + i * 2) = func_02092994(arg1, 0);
    }
}

void func_020bcae4(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x0) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x2) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x4) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x6) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x8) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xa) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xc) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xe) = func_02092994(arg1, 0);
    arg0[0x19] = func_02092994(arg1, 0);
    arg0[0x1a] = func_02092994(arg1, 0);
    arg0[0x1b] = func_02092994(arg1, 0);
    arg0[0x1c] = func_02092994(arg1, 0);
    arg0[0x1d] = func_02092994(arg1, 0);
    arg0[0x1e] = func_02092994(arg1, 0);
    arg0[0x1f] = func_02092994(arg1, 0);
    arg0[0x20] = func_02092994(arg1, 0);
}

extern void *func_021092d8(void *);
extern void func_021167f0(void *, void *);
extern int func_02109444(void *);
extern void func_0210c970(void *);
void func_020bcbf8(void *path, s32 first, s32 last) {
u32 type;
void **reader;
u8 *node;
u32 id,a,b,c,d;
s32 value;
reader=func_0210c594(0x60,data_02155c3c);
reader[0]=func_021092d8(path);
do {
node=0;
id=(u16)func_02092994(reader[0],0);
if((u32)first<=id && id<=(u32)last) {
type=func_020bc954(id);
value=func_02092994(reader[0],0);
a=(u8)func_02092994(reader[0],0);
b=(u8)func_02092994(reader[0],0);
c=(u8)func_02092994(reader[0],0);
d=(u8)func_02092994(reader[0],0);
func_021091b4();
switch(type) {
case 0:
node=func_0210c594(32,data_02155c3c);
*(u16*)(node+4)=id;
node[6]=type;
*(s32*)node=value;
node[7]=a; node[8]=b; node[9]=c; node[10]=d;
node[0x14]=func_02092994(reader[0],0);
node[0x15]=func_02092994(reader[0],0);
func_021167f0((u8*)data_021601f8.unk00+16,node); break;
case 1:
node=func_0210c594(64,data_02155c3c);
*(u16*)(node+4)=id;
node[6]=type;
*(s32*)node=value;
node[7]=a; node[8]=b; node[9]=c; node[10]=d;
func_020bca10(node+0x14,reader[0]);
func_021167f0((u8*)data_021601f8.unk00+28,node); break;
case 2:
node=func_0210c594(28,data_02155c3c);
*(u16*)(node+4)=id;
node[6]=type;
*(s32*)node=value;
node[7]=a; node[8]=b; node[9]=c; node[10]=d;
func_021167f0((u8*)data_021601f8.unk00+40,node); break;
case 3:
node=func_0210c594(64,data_02155c3c);
*(u16*)(node+4)=id;
node[6]=type;
*(s32*)node=value;
node[7]=a; node[8]=b; node[9]=c; node[10]=d;
func_020bcae4(node+0x14,reader[0]);
func_021167f0((u8*)data_021601f8.unk00+52,node); break;
case 4:
node=func_0210c594(64,data_02155c3c);
*(u16*)(node+4)=id;
node[6]=type;
*(s32*)node=value;
node[7]=a; node[8]=b; node[9]=c; node[10]=d;
func_020bcae4(node+0x14,reader[0]);
func_021167f0((u8*)data_021601f8.unk00+64,node); break;
case 5:
node=func_0210c594(64,data_02155c3c);
*(u16*)(node+4)=id;
node[6]=type;
*(s32*)node=value;
node[7]=a; node[8]=b; node[9]=c; node[10]=d;
func_020bcae4(node+0x14,reader[0]);
func_021167f0((u8*)data_021601f8.unk00+76,node); break;
case 6:
node=func_0210c594(28,data_02155c3c);
*(u16*)(node+4)=id;
node[6]=type;
*(s32*)node=value;
node[7]=a; node[8]=b; node[9]=c; node[10]=d;
func_021167f0((u8*)data_021601f8.unk00+88,node); break;
}
}
if(node) func_021167f0((u8*)data_021601f8.unk00+4,node);
if((u32)last<=id) break;
} while(func_02109444(reader[0]));
func_0210c970(reader);
}

extern u8 data_02151090[];
extern u8 data_021510a4[];
extern u8 data_021510bc[];
extern u8 data_021510d4[];
extern u8 data_021510e8[];
extern void func_020bcbf8(void *, s32, s32);
void func_020bcf78(u8 arg0) {
    u8 *p = *(u8 **)&data_021601f8;
    u8 prev = *p;
    *p |= arg0;
    if ((arg0 & ~prev) & 1) {
        func_020bcbf8(data_02151090, 1, 0x33);
    }
    if ((arg0 & 4) && !(prev & 4)) {
        func_020bcbf8(data_021510a4, 0xc9, 0x10f);
    }
    if ((arg0 & 8) && !(prev & 8)) {
        func_020bcbf8(data_021510bc, 0x12d, 0x1a9);
    }
    if ((arg0 & 0x10) && !(prev & 0x10)) {
        func_020bcbf8(data_021510d4, 0x208, 0x26c);
    }
    if ((arg0 & 0x20) && !(prev & 0x20)) {
        func_020bcbf8(data_021510e8, 0x2bd, 0x31e);
    }
}

void *func_020bd058(u32 id) {
    u8 *ret = NULL;
    if (id >= 0x1 && id <= 0x33) {
        u8 *p = *(u8 **)((u8 *)data_021601f8.unk00 + 0x10);
        while (p != NULL) {
            if (*(u16 *)(p + 4) == id) {
                ret = p;
                break;
            }
            p = *(u8 **)(p + 0x1c);
        }
    } else if (id >= 0x65 && id <= 0xc8) {
        u8 *p = *(u8 **)((u8 *)data_021601f8.unk00 + 0x1c);
        while (p != NULL) {
            if (*(u16 *)(p + 4) == id) {
                ret = p;
                break;
            }
            p = *(u8 **)(p + 0x3c);
        }
    } else if (id >= 0xc9 && id <= 0x10f) {
        u8 *p = *(u8 **)((u8 *)data_021601f8.unk00 + 0x28);
        while (p != NULL) {
            if (*(u16 *)(p + 4) == id) {
                ret = p;
                break;
            }
            p = *(u8 **)(p + 0x18);
        }
    } else if (id >= 0x12d && id <= 0x1a9) {
        u8 *p = *(u8 **)((u8 *)data_021601f8.unk00 + 0x34);
        while (p != NULL) {
            if (*(u16 *)(p + 4) == id) {
                ret = p;
                break;
            }
            p = *(u8 **)(p + 0x3c);
        }
    } else if (id >= 0x208 && id <= 0x26c) {
        u8 *p = *(u8 **)((u8 *)data_021601f8.unk00 + 0x40);
        while (p != NULL) {
            if (*(u16 *)(p + 4) == id) {
                ret = p;
                break;
            }
            p = *(u8 **)(p + 0x3c);
        }
    } else if (id >= 0x2bd && id <= 0x31e) {
        u8 *p = *(u8 **)((u8 *)data_021601f8.unk00 + 0x4c);
        while (p != NULL) {
            if (*(u16 *)(p + 4) == id) {
                ret = p;
                break;
            }
            p = *(u8 **)(p + 0x3c);
        }
    } else if (id >= 0x321 && id <= 0x384) {
        u8 *p = *(u8 **)((u8 *)data_021601f8.unk00 + 0x58);
        while (p != NULL) {
            if (*(u16 *)(p + 4) == id) {
                ret = p;
                break;
            }
            p = *(u8 **)(p + 0x18);
        }
    }
    return ret;
}

s32 func_020bd250(void) {
    u8 *p = (u8 *)&data_021601f8;
    volatile u32 buf;
    s32 ret = 0;
    if (*(void **)(p + 4) == NULL) {
        *(void **)(p + 4) = func_02109b14(data_021510fc, (void *)&buf);
        ret = 1;
    }
    return ret;
}

s32 func_020bd294(u32 arg0) {
    s32 ret = -1;
    u16 v;
    if (arg0 >= 0x385) goto done;
    v = *(u16 *)((u8 *)data_021601f8.unk04 + arg0 * 4);
    if (v == arg0) {
        ret = *(s16 *)((u8 *)data_021601f8.unk04 + arg0 * 4 + 2);
    }
done:
    return ret;
}

void func_020bd2cc(void) {
    if (data_021601f8.unk04 == NULL) {
        return;
    }
    if (data_021601f8.unk04 != NULL) {
        func_0210c5dc(data_021601f8.unk04);
    }
    data_021601f8.unk04 = NULL;
}

void func_020bd2fc(u32 arg0, u16 arg1, u8 arg2, u8 arg3)
{
  *((u16 *) ((data_02160078 + 0x14d0) + ((arg0 & 0xFFFFFFFFFFFFFFFFu) * 4))) = 0;
  *((u16 *) ((data_02160078 + 0x14d0) + (arg0 * 4))) |= arg1;
  *((u8 *) (((data_02160078 + 0x14d0) + (arg0 * 4)) + 2)) = arg2;
  *((u8 *) (((data_02160078 + 0x14d0) + (arg0 * 4)) + 3)) = arg3;
}

void func_020bd35c(u32 arg0, u16 arg1) {
    *(u16 *)(data_02160078 + 0x14d0 + arg0 * 4) &= (u16)~arg1;
}

