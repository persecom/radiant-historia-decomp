/* 14 functions from 0x0202C328 to 0x0202CD5C (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern void *func_0205bad4(void *);
extern u8 *func_02032b98(void *, void *, s32);
extern u8 *data_02160a6c;
extern u32 func_0202ea28(u8, s16);
static inline void mark_first_c950(u8 *node) {
 if(node) {
  u8 *p;
  *(u16 *)(node+4)|=0x20;
  p=*(u8 **)(*(u8 **)node+0x118);
  if(*(u32 *)(p+0x8c)&8) *(u32 *)(p+0x8c)|=0x800;
 }
}

u8 *func_0202c7d8(s32 arg0) {
    u8 *sub = NULL;
    if (arg0 >= 0) {
        if (arg0 <= 8) {
            u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
            sub = *(u8 **)(entry + 0x10);
        }
    }
    if (sub != NULL && *(u8 *)(sub + 4) == 0) {
        return *(u8 **)sub;
    }
    return NULL;
}

u8 *func_0202c820(u32 arg0) {
    u8 *sub = NULL;
    if (arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    return sub ? *(u8 **)sub : NULL;
}

u8 *func_0202c850(u32 arg0) {
    u8 *sub = NULL;
    if (arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    if (sub != NULL && *(u8 **)sub != NULL &&
        (*(u8 *)(*(u8 **)(*(u8 **)sub + 0x118) + 0x64) & 2)) {
        return *(u8 **)sub;
    }
    return NULL;
}

u32 func_0202c898(u32 arg0, void *arg1, u32 arg2) {
    u32 zero = 0;
    u8 *entry;
    u8 *node;
    u8 *p;
    u32 v;
    if (arg0 > 8) goto fail;
    entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
    node = *(u8 **)(entry + 0x10);
    if (node == NULL) goto fail;
    do {
        v = *(u32 *)(node + 0);
        p = func_0205bad4(arg1);
        while (p != NULL) {
            if (v == *(u32 *)(p + 0)) {
                v = zero;
            }
            p = *(u8 **)(p + 0x18);
        }
        if (v != 0 && v != arg2) {
            return v;
        }
        node = *(u8 **)(node + 0xc);
    } while (node != NULL);
fail:
    return 0;
}

u8 *func_0202c920(u32 arg0) {
    u8 *sub = NULL;
    if (arg0 <= 0xb) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    return sub ? *(u8 **)sub : NULL;
}

void func_0202c950(u32 mask, void *list, s32 filter) {
 u8 *node;
 u8 *actor=*(u8 **)(data_02160a6c+0xb8);
 u32 selected;
 u32 i,j;
 s32 zero=0;
 while(actor) {
 if(actor && *(u8 **)(actor+0x118)) {
 u8 *p=*(u8 **)(actor+0x118);
 *(u32 *)(p+0x8c)&=~0x800;
 }
 actor=*(u8 **)(actor+0x174);
 }
 selected=0;
 for(i=0;i<9;i++) {
 if(mask&(1<<i)) {
 node=*(u8 **)(data_02160244[i+2]+0x10);
 while(node) {
 u8 *obj=*(u8 **)node;
 if(obj) {
 if(node[4]==0) selected|=func_0202ea28((*(u8 **)(obj+0x118))[0x54],(s16)i);
 else if(node[4]==1) selected|=func_0202ea28((*(u8 **)(obj+0x118))[0x54],(s16)(i+3));
 else if(node[4]==2) selected|=func_0202ea28((*(u8 **)(obj+0x118))[0x54],(s16)(i-1));
 else if(node[4]==3) selected|=func_0202ea28((*(u8 **)(obj+0x118))[0x54],(s16)(i+2));
 else if(node[4]==4) selected|=0x1ff;
 }
 node=*(u8 **)(node+12);
 }
 }
 }
 for(j=0;j<9;j++) {
 u8 *first;
 s32 count=0;
 first=NULL;
 if(selected&(1<<j)) {
 node=*(u8 **)(data_02160244[j+2]+0x10);
 while(node) {
 u8 *obj=*(u8 **)node;
 u8 *info=*(u8 **)(obj+0x124);
 if(filter==-1) {
 if(obj) {
 if(count==0) first=func_02032b98(list,obj,zero);
 else { mark_first_c950(first);func_02032b98(list,obj,1); }
 count++;
 }
 } else {
 if(obj && *(s16 *)(info+2)==filter) {
 if(count==0) first=func_02032b98(list,obj,zero);
 else {mark_first_c950(first);func_02032b98(list,obj,1);}
 count++;
 }
 }
 node=*(u8 **)(node+12);
 }
 }
 }
}

void func_0202cbf8(u32 arg0, void *arg1) {
    u8 *sub;
    u32 i;
    u32 zero = 0;
    u32 one = 1;
    for (i = 9; i <= 0xb; i++) {
        if (arg0 & (one << i)) {
            sub = *(u8 **)(data_02160244[i + 2] + 0x10);
            while (sub != NULL) {
                u8 *obj = *(u8 **)(sub + 0);
                if (obj != NULL && *(void **)(*(u8 **)(obj + 0x118) + 0x70) != NULL) {
                    func_02032b98(arg1, obj, zero);
                }
                sub = *(u8 **)(sub + 0xc);
            }
        }
    }
}

u32 func_0202cc74(u32 arg0) {
    u8 *node;
    u32 i;
    u32 ret = 0;
    for (i = 9; i <= 11; i++) {
        if (arg0 & (1 << i)) {
            node = *(u8 **)(data_02160244[2 + i] + 0x10);
            while (node != NULL) {
                u8 *obj = *(u8 **)node;
                if (obj != NULL) {
                    u8 *p = *(u8 **)(obj + 0x118);
                    if (*(u32 *)(p + 0x70) != 0) {
                        ret |= (u16)(1 << (i - 9));
                    }
                }
                node = *(u8 **)(node + 0xc);
            }
        }
    }
    return ret;
}

void func_0202ccec(u32 arg0, void *arg1) {
    u8 *node;
    u32 i;
    for (i = 9; i <= 11; i++) {
        if (arg0 & (1 << i)) {
            node = *(u8 **)(data_02160244[2 + i] + 0x10);
            while (node != NULL) {
                void *obj = *(void **)node;
                if (obj != NULL) {
                    func_02032b98(arg1, obj, 0);
                }
                node = *(u8 **)(node + 0xc);
            }
        }
    }
}

