/* 15 functions from 0x02052328 to 0x0205317C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
} Vec2_02052844;

extern u8 *data_02160a80;
static inline u8 *find_node_02052844(u16 id) {
    u8 *node = *(u8 **)(data_02160a80 + 0x3c);
    while (node != NULL) {
        if (*(u32 *)(node + 8) == id) {
            return node;
        }
        node = *(u8 **)(node + 0x38);
    }
    return NULL;
}

extern s32 func_020dd9b4(void *, s32 *);
extern s32 func_02117d80();
extern u32 *data_02155984;
extern u8 *data_02160a80;
extern u8 *data_021600bc;
static void func_020526f0(Vec2_02052844, u16, s32, s32);
extern void func_020477dc(void *, s32, s32);
extern void *func_02047820(s32);
extern s32 func_020ddc8c(void *, s32);
void func_02052328(void) {
    data_02155984[0] = 0x165;
    data_02155984[1] = 0xff0;
}

extern void func_020ea5d4(void *, s32);
static void func_020526f0(Vec2_02052844 pos, u16 id, s32 mode, s32 enable) {
 u8 *node = find_node_02052844(id);
 if (!node) return;
 *(s32 *)(node+0x1c)=pos.x<<12;
 *(s32 *)(node+0x20)=(pos.y-48)<<12;
 if (*(u32 *)(node+0x18)&1) {
 void *obj = *(void **)node;
 if(mode==0) {if(func_02117d80(obj)==9) *(u32 *)(node+0x18)&=~1;}
 else if(mode==1) {if(func_02117d80(obj)==10) *(u32 *)(node+0x18)&=~1;}
 else if(mode==2) {if(func_02117d80(obj)==12) *(u32 *)(node+0x18)&=~1;}
 else if(mode==3) {if(func_02117d80(obj)==15) *(u32 *)(node+0x18)&=~1;}
 } else if(enable) {*(u32 *)(node+0x18)|=1; func_020ea5d4(node,mode);}
}

void func_02052844(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *node;

    func_020526f0(*(Vec2_02052844 *)(arg0 + 0xfc), (u16)(*(u16 *)(arg0 + 0x90) + 0xbb9), arg1, 1);
    node = find_node_02052844(*(u16 *)(arg0 + 0x90) + 0xbb9);
    if (node == NULL) {
        return;
    }
    if (arg2 == 1) {
        *(u32 *)(node + 0x18) &= ~8;
        return;
    }
    if (arg2 == 0) {
        *(u32 *)(node + 0x18) |= 8;
        return;
    }
    if (arg2 == -1) {
        *(u32 *)(node + 0x18) &= ~1;
    }
}

void func_02052904(s32 arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0x40);
    while (node != NULL) {
        if (*(u16 *)(node + 0x8e) != 0x7d0 && *(s32 *)(node + 0xd0) != 0) {
            func_020477dc(node, arg0, 0);
        }
        node = *(u8 **)(node + 0x13c);
    }
}

void func_0205295c(void) {
    u8 *p = func_02047820(0);
    if (p != NULL) {
        *(u32 *)(p + 0xac) |= 0x2000;
        *(u8 *)(p + 0xa3) = 0x2d;
    }
}

void func_02052984(u8 val) {
    u8 *p = func_02047820(0);
    if (p != NULL) {
        *(u32 *)(p + 0xac) |= 0x2000;
        *(u8 *)(p + 0xa3) = val;
    }
}

s32 func_020529ac(void *arg0, s32 arg1, s32 arg2) {
    s32 base = func_020ddc8c(arg0, arg2);
    s16 lo = (s16)(base + 0x3ffc);
    if ((u32)base >= 0x3ffc) {
        if (arg1 >= lo) {
            if (arg1 > base - 0x3ffc) return 1;
            if ((u32)base > 0xc004) {
                if (arg1 > base + (s16)0xc004) return 1;
            }
            return 0;
        }
        return arg1 > base - 0x3ffc ? 1 : 0;
    }
    if (arg1 < base + 0x3ffc) return 0;
    if (arg1 <= base + (s16)0xc004) return 0;
    return 1;
}

u32 func_02052a54(void *arg0, s32 arg1) {
    s32 p;
    u32 ret = 0;
    s32 a = func_020dd9b4(arg0, &p);
    if (p != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80(a)) {
        ret |= 1;
    }
    return ret;
}
extern void func_02053824(void *);
extern void func_02052d30(void *);
static void func_02053038(void *);
extern void func_0205317c(void *);
extern void func_0205366c(void *);
extern void func_02053d90(void *);
extern void func_02053f6c(void *);
extern void func_02053f94(void *);
u32 func_02052a88(u8 *arg0, s32 arg1) {
    u8 *p = *(u8 **)(arg0 + 0x108);
    s32 a = *(s32 *)(p + 0x14);
    void *b = *(void **)p;
    u32 ret = 0;
    if (a != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80(b)) {
        ret |= 1;
    }
    return ret;
}

void func_02052abc(u8 *arg0) {
    u8 *p;
    if (arg0 == NULL || (p = *(u8 **)(arg0 + 0xd0)) == NULL) {
        return;
    }
    if (*(u8 *)(p + 1) != 0) {
        func_02053824(arg0);
    }
    switch (*(u8 *)(p + 1)) {
        case 1:
            func_02052d30(arg0);
            break;
        case 2:
            func_02053038(arg0);
            break;
        case 3:
            func_0205317c(arg0);
            break;
        case 4:
            func_0205366c(arg0);
            break;
        case 5:
            func_02053d90(arg0);
            break;
        case 7:
            func_02053f6c(arg0);
            break;
        case 8:
            func_02053f94(arg0);
            break;
    }
}

extern u8 *data_021600ac;
extern u8 *data_02160204;
extern u8 *data_02160200;
extern s32 func_0210c2f4(void *, void *);
extern void func_0206e8f0(s32, void *, s32);
extern void func_0207ae48(s32, s32);
extern void func_0210d27c(s32);
extern void func_0205440c(void *, s32);
extern void func_02047490(void *);
void func_02052b68(void) {
    u8 *p8;
    u8 *p9 = *(u8 **)(data_021600ac + 0x68);

    if (p9 == NULL) {
        return;
    }
    p8 = *(u8 **)(data_02160204 + 0xe8);
    while (p8 != NULL) {
        u16 id = *(u16 *)(p8 + 0x90);
        if (id > 4000 && id < 5000) {
            switch (*(u16 *)(p8 + 0x96)) {
            case 0:
                break;
            case 1:
                if (*(u32 *)(p9 + 0xac) & 0x2000) {
                    return;
                }
                if (func_0210c2f4(p9, p8) < 0x10000) {
                    u8 *tmp = func_02047820((u16)(*(u16 *)(p8 + 0x90) - 0xfa1));
                    struct {
                        s32 x;
                        s32 y;
                        s32 z;
                    } pos;
                    if (tmp != NULL) {
                        *(u16 *)(*(u8 **)(tmp + 0xd0) + 6) = 0;
                    }
                    pos = *(typeof(pos) *)p8;
                    pos.x -= 0x10000;
                    func_0206e8f0(8, &pos, 2);
                    func_0206e8f0(1, &pos, 2);
                    func_02052984(10);
                    func_0207ae48(0, 30);
                    func_0210d27c(0x2b);
                    func_0210d27c(0x27);
                    *(u32 *)(p9 + 0xac) |= 0x800;
                    if (*(u32 *)(data_02160200 + 0x34) & 0x40) {
                        *(u16 *)(p8 + 0x96) = 2;
                    } else {
                        func_0205440c(p8, 1);
                        *(u16 *)(p8 + 0x96) = 2;
                    }
                }
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                *(u32 *)(p9 + 0xac) |= 0x800;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                *(u16 *)(p8 + 0x96) += 1;
                break;
            case 12:
                func_02047490(p8);
                *(u32 *)(p9 + 0xac) &= ~0x800;
                break;
            }
        }
        p8 = *(u8 **)(p8 + 0x134);
    }
}

