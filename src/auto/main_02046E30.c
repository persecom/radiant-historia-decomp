/* 10 functions from 0x02046E30 to 0x0204798C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;
extern void *data_02155c3c;
extern void func_02108ffc(void);
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, u32);
extern void func_02047278(u8 *);

typedef struct Obj_02046e30 {
    u8 pad_00[0xb4];
    u8 unk_b4;
    u8 pad_b5[3];
    void *unk_b8;
    u8 pad_bc[0x48];
    u8 unk_104;
    u8 pad_105[3];
    void *unk_108;
} Obj_02046e30;

typedef struct Mgr_02046e30 {
    u8 pad_00[0xa0];
    u8 unk_a0;
} Mgr_02046e30;

extern Mgr_02046e30 *data_021600bc;

void func_021167f0(void **, void *);
void func_021168f8(void **, void *);
void func_0210c5dc(void *);
void *func_020eca60(void);
void func_020ecd10(void *, u32, void *);
void func_020ecac8(void *, u32);
s32 func_020ed2d0(void *, u8, s32);

void func_02047490(void *);
void func_020ecaa4(void *);
void func_0210da14(void *);
void func_0210db10(void *);
void func_02046e30(void) {
 void *outer;
 void *zero=NULL;
 u8 *node;
 u8 *prev;
 node = *(u8 **)(data_02160204+0xe8);
 while(node) {
  if(*(u16 *)(node+0x90)>12000 && *(u16 *)(node+0x90)<=13000) {
   prev=*(u8 **)(node+0x130);
   func_02047490(node);
   node=prev;
  } else if(*(void **)(node+0x108)) {
   func_020ecaa4(*(void **)(node+0x108));
   *(void **)(node+0x108)=NULL;
  }
  node=*(u8 **)(node+0x134);
 }
 while(*(void **)((u8 *)data_021600bc+0xa0)) {
  outer=*(void **)((u8 *)data_021600bc+0xa0);
  func_021168f8((void **)((u8 *)data_021600bc+0xa0),outer);
  prev=*(u8 **)outer;
  if(prev) {
   while((node=*(u8 **)prev)!=NULL) {
    func_021168f8((void **)prev,node);
    if(node) func_0210c5dc(node);
   }
  }
  if(*(void **)outer) {func_0210c5dc(*(void **)outer); *(void **)outer=zero;}
  if(outer) func_0210c5dc(outer);
 }
 while(*(void **)((u8 *)data_021600bc+0xb8)) {
  void *p=*(void **)((u8 *)data_021600bc+0xb8);
  func_021168f8((void **)((u8 *)data_021600bc+0xb8),p);
  if(p) func_0210c5dc(p);
 }
 func_0210da14(data_021600bc);
 func_0210db10((u8 *)data_021600bc+0x14);
}

void *func_02046f90(u16 arg0, u16 arg1) {
    u32 r6 = 2;
    void *r7 = NULL;
    u8 *r8;

    func_02108ffc();
    if (arg0 > 0 && arg0 < 700) {
        r7 = func_020eca60();
        func_020ecd10(r7, arg0, (u8 *)data_021600bc + 0xa0);
        r6 |= 1;
    } else if (arg0 > 5000 && arg0 < 6000) {
        r7 = func_020eca60();
        func_020ecac8(r7, arg0);
    } else if (arg0 > 1000 && arg0 < 5000 && arg0 != 2000) {
        r7 = func_020eca60();
        func_020ecd10(r7, arg0, (u8 *)data_021600bc + 0xa0);
        r6 |= 1;
    }
    func_02108ffc();
    r8 = (u8 *)func_0210c594(0x1c8, data_02155c3c);
    func_02108ffc();

    if (arg0 > 0 && arg0 < 700) {
        func_021167f0((void **)((u8 *)data_021600bc + 0x40), r8);
        func_021167f0((void **)((u8 *)data_021600bc + 0x64), r8);
    } else if (arg0 > 5000 && arg0 < 6000) {
        if (arg0 > 5500) {
            func_021167f0((void **)((u8 *)data_021600bc + 0x4c), r8);
        } else {
            func_021167f0((void **)((u8 *)data_021600bc + 0x70), r8);
        }
        func_021167f0((void **)((u8 *)data_021600bc + 0x64), r8);
    } else if (arg0 > 1000 && arg0 < 5000 && arg0 != 2000) {
        func_021167f0((void **)((u8 *)data_021600bc + 0x40), r8);
        func_021167f0((void **)((u8 *)data_021600bc + 0x64), r8);
    } else if (arg0 == 2000) {
        func_021167f0((void **)((u8 *)data_021600bc + 0x40), r8);
        r6 = 0x400;
    } else if (arg0 > 10000 && arg0 < 11009) {
        func_021167f0((void **)((u8 *)data_021600bc + 0x70), r8);
        r6 = 0;
    }

    if (arg1 > 4000 && arg1 < 5000) {
        func_021167f0((void **)((u8 *)data_021600bc + 0xd0), r8);
    }
    func_021167f0((void **)(data_02160204 + 0xe8), r8);

    *(u16 *)(r8 + 0x8e) = arg0;
    *(u32 *)(r8 + 0x80) = r6;
    *(void **)(r8 + 0x108) = r7;
    r8[0x104] = 0xe7;
    *(u16 *)(r8 + 0x90) = arg1;
    *(u32 *)(r8 + 0x64) = 0;
    *(u32 *)(r8 + 0xc8) = 0;
    *(u32 *)(r8 + 0x118) = 0;
    *(u16 *)(r8 + 0xcc) = 0;
    *(u32 *)(r8 + 0xac) |= 1;
    *(u32 *)(r8 + 0xb0) = 0;
    func_021167ac(r8 + 0xb8, 0x24);
    func_02047278(r8);
    return r8;
}

void func_020471b8(Obj_02046e30 *obj, u32 arg1) {
    if (arg1 == 2000) {
        return;
    }
    if (arg1 != 0 && arg1 < 700) {
        void *r6 = func_020eca60();
        func_020ecd10(r6, arg1, &data_021600bc->unk_a0);
        obj->unk_108 = r6;
    } else if (arg1 > 5000 && arg1 < 6000) {
        void *r6 = func_020eca60();
        func_020ecac8(r6, arg1);
        obj->unk_108 = r6;
    } else if (arg1 > 1000 && arg1 < 5000 && arg1 != 2000) {
        void *r4 = func_020eca60();
        func_020ecd10(r4, arg1, &data_021600bc->unk_a0);
        obj->unk_108 = r4;
    }
}

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_02108ffc(void);
extern void *func_0210957c(s32);
extern s32 func_020f685c(void *, s32);
extern void func_0207cbfc(s32, void *);
extern void func_0205440c(void *, s32);
extern s32 func_02109444(void *);
void func_02047278(u8 *arg0) {
    s32 zero = 0;
    u8 *r5 = (u8 *)func_0210c594(0x58, data_02155c3c);
    void *r6;
    s32 i;

    func_02108ffc();
    for (i = zero; i < 10; i++) {
        *(u16 *)(r5 + 0xe + i * 2) = zero;
    }
    r5[0x24] = zero;
    *(u8 **)(r5 + 0x2c) = arg0;

    r6 = func_0210957c(1);
    if (r6 != NULL) {
        do {
            if (*(u16 *)(arg0 + 0x8e) == func_020f685c(r6, zero)) {
                s32 v = func_020f685c(r6, zero);
                if (v != 0) {
                    *(s32 *)(r5 + 0) = v << 12;
                }
                v = func_020f685c(r6, 0);
                if (v != 0) {
                    arg0[0x9d] = v;
                }
                {
                    s32 v2 = func_020f685c(r6, zero);
                    if (v2 != 0) {
                        func_0207cbfc(zero, r5);
                        r5[0x25] = v2;
                    }
                }
                if (func_020f685c(r6, 0) != 0) {
                    r5[0x26] |= 1;
                    func_0207cbfc(1, r5);
                }
                if (func_020f685c(r6, zero) != 0) {
                    func_0205440c(arg0, zero);
                    func_0207cbfc(3, r5);
                }
                if (func_020f685c(r6, 0) != 0) {
                    r5[0x26] |= 0x40;
                    func_0207cbfc(4, r5);
                }
                break;
            }
        } while (func_02109444(r6) != 0);
    }

    if ((r5[0x26] & 1) || (r5[0x26] & 2)) {
        switch (*(u16 *)(arg0 + 0x8e)) {
        case 0x148d:
        case 0x2712:
        case 0x2713:
        case 0x2714:
        case 0x2727:
        case 0x2728:
            *(u16 *)(r5 + 0x28) = 0xf;
            break;
        case 0x141f:
        case 0x1483:
        case 0x271c:
            *(u16 *)(r5 + 0x28) = 0xd;
            break;
        }
    }
    *(u8 **)(arg0 + 0xb0) = r5;
}

void func_02047778(Obj_02046e30 *obj) {
    while (obj->unk_b8 != NULL) {
        void *node = obj->unk_b8;
        func_021168f8(&obj->unk_b8, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    obj->unk_b4 = 0;
}

void func_020477c0(Obj_02046e30 *obj, void *arg1) {
    obj->unk_b4++;
    func_021167f0(&obj->unk_b8, arg1);
}

void func_020477dc(Obj_02046e30 *obj, u8 arg1, s32 arg2) {
    void *r0 = obj->unk_108;
    if (r0 == NULL || obj->unk_104 == arg1) {
        return;
    }
    if (arg2 == 0) {
        arg2 = 1;
    }
    if (arg2 != 0 && func_020ed2d0(r0, arg1, arg2) != 0) {
        obj->unk_104 = arg1;
    }
}

extern u8 *data_02160204;
void *func_02047820(u16 arg0) {
    u8 *node = *(u8 **)(data_02160204 + 0xe8);
    while (node != NULL) {
        if (*(u16 *)(node + 0x90) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x134);
    }
    return NULL;
}

void *func_0204785c(u32 type,u32 id) {
 u8 *node=NULL;
 if(type!=0 && type<700) node=*(u8 **)((u8 *)data_021600bc+0x40);
 else if(type>5000 && type<6000) {
  if(type>5500) node=*(u8 **)((u8 *)data_021600bc+0x4c);
  else node=*(u8 **)((u8 *)data_021600bc+0x70);
 } else if(type>1000 && type<5000) node=*(u8 **)((u8 *)data_021600bc+0x40);
 else if(type>10000 && type<11000) node=*(u8 **)((u8 *)data_021600bc+0x70);
 while(node) {
  if(*(u16 *)(node+0x90)==id) return node;
  if(type!=0 && type<700) node=*(u8 **)(node+0x13c);
  else if(type>5000 && type<6000) {
   if(type>5500) node=*(u8 **)(node+0x14c);
   else node=*(u8 **)(node+0x17c);
  } else if(type>1000 && type<5000) node=*(u8 **)(node+0x13c);
  else if(type>10000 && type<11000) node=*(u8 **)(node+0x17c);
 }
 return NULL;
}

