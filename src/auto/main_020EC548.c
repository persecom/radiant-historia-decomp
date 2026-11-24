/* 19 functions from 0x020EC12C to 0x020ED0BC (main), found by ds-decomp. */
#include "common.h"
typedef struct ECModelFlags { u8 pad[0x70]; u8 unused:1; u8 flip:1; u8 rest:6; } ECModelFlags;
extern s32 data_02162860[];
extern u8 data_021612c8[];
static inline void ECSetPolygonAttr(s32 lights,s32 mode,s32 cull,s32 id,s32 alpha,s32 misc) {
 *(volatile u32 *)0x40004a4=(alpha<<16)|((cull<<6)|(mode<<4)|lights|(id<<24)|misc);
}

extern void func_02108594(void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160ab4;
extern void func_020ebc24(u8 *);
extern s32 func_020ebddc(void *, s32);
extern void func_021168f8(u8 *, u8 *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210dc70(void *);
void func_020ec548(u8 *arg0);

void func_020ec548(u8 *arg0) {
    if (arg0 == NULL) return;
    func_020ebc24(*(u8 **)arg0);
    func_021168f8(data_02160ab4 + 0x50, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020ec88c(u8 *,s32,s32);
void func_020ec8cc(u8 *,s32,u32);
void *func_020ec908(u32);
void func_02119130(void *);
void func_020ec588(void) {
u8 *node,*obj,*next;
s32 zero=0,one=1;
*(s32 *)(data_02160ab4+0x60)=0;
node=*(u8 **)(data_02160ab4+0x50);
if(!node)return;
do {
u32 flags=*(u32 *)(node+0x28);
obj=*(u8 **)node;
if(!(flags&1) || !(flags&2)) { if(!(flags&4)) goto advance; }
if(!*(s32 *)(obj+0x20)) goto advance;
next=func_020ec908(*(u32 *)(node+0x2c));
if(next) {
*(u32 *)(node+0x28)&=~2;
*(s32 *)(obj+0x20)=zero;
func_020ec8cc(node,zero,one);
func_02119130(*(void **)(obj+8));
*(u32 *)(next+0x28)|=2;
func_020ec8cc(next,one,zero);
func_020ec88c(next,zero,zero);
} else if(*(s32 *)(node+0x2c)!=0 && *(s32 *)(node+0x2c)==-1) {
*(u32 *)(node+0x28)&=~2;
*(s32 *)(obj+0x20)=0;
func_020ec8cc(node,0,1);
func_02119130(*(void **)(obj+8));
*(s32 *)(data_02160ab4+0x60)=1;
}
advance:
node=*(u8 **)(node+0x48);
}while(node);
}

void func_020ec6ac(void) {
    u8 *obj = *(u8 **)(data_02160ab4 + 0x50);
    s32 zero = 0;
    s32 one = 1;
    s32 arg;
    if (obj == NULL) return;
    while (obj != NULL) {
        arg = one;
        if (*(u32 *)(obj + 0x38) != 0) arg = zero;
        func_020ebddc(*(u8 **)(obj + 0x0), arg);
        obj = *(u8 **)(obj + 0x48);
    }
}

extern void func_0211a4d4(void *,s32,s32);
extern void func_02119da4(void *);
extern void func_02119f1c(void);
extern void func_0211a178(s32,s32,s32);
extern void func_0211a26c(s32,s32,s32);
extern void func_02119eb8(void *);
extern void func_0211a128(void);
extern void func_02119e4c(void);
#pragma optimization_level 0
#pragma peephole off
void func_020ec6f8(void) {
 u8 *node=0;
 u8 *obj;
 s32 scale;
 s32 visible;
 s32 cull;
 s32 flip=0;
 if(!data_02160ab4) goto done;
 if(data_02162860[0]==0) {
  if(*(s32 *)(data_02160ab4+0x64)!=0) goto draw;
  goto done;
 } else {
  if(*(s32 *)(data_02160ab4+0x64)!=0) goto done;
 }
draw:
 node=*(u8 **)(data_02160ab4+0x50);
 while(node) {
  obj=*(u8 **)(*(u8 **)node+8);
  if((*(u32 *)(node+4)&1)==0) {
   *(u32 *)(node+4)&=~2;
   visible=0;
  } else {
   *(u32 *)(node+4)|=2;
   visible=1;
  }
  if(visible) {
   cull=2;
   scale=*(s32 *)(node+0x20);
   flip=0;
   if(((ECModelFlags *)obj)->flip) {
    scale=scale*-1;
    cull=1;
    flip=1;
   }
   *(volatile u32 *)0x40004a4=(obj[0x71]<<16)|(0 | (0 | (0 | (cull<<6))));
   *(volatile u32 *)0x4000480=*(u16 *)(node+0x3c);
   func_0211a4d4(data_021612c8,*(s32 *)(*(u8 **)(obj+0x58)+0x10),*(s32 *)(*(u8 **)(obj+0x58)+0x14));
   func_02119da4(data_021612c8);
   func_02119f1c();
   func_0211a178(*(s32 *)(node+0x14),*(s32 *)(node+0x18),*(s32 *)(node+0x1c));
   func_0211a26c(scale,*(s32 *)(node+0x24),0x1000);
   func_02119eb8(obj);
   func_0211a128();
   func_02119e4c();
  }
  node=*(u8 **)(node+0x48);
 }
done:;
}
#pragma peephole on
#pragma optimization_level 4

void func_020ec88c(u8 *arg0, s32 arg1, s32 arg2) {
    if (*(s32 *)(arg0 + 0x40) == arg1) {
        return;
    }
    if (arg2 == 0) {
        arg2 = 1;
    }
    if (arg2 != 0 && func_020ebd5c(*(void **)arg0, arg1, arg2) != 0) {
        *(s32 *)(arg0 + 0x40) = arg1;
    }
}

void func_020ec8cc(u8 *arg0, s32 arg1, u32 arg2) {
    if (arg0 == NULL) {
        return;
    }
    if (arg1 == 1) {
        *(u32 *)(arg0 + 0x38) = arg2;
        *(u32 *)(arg0 + 0x4) |= 1;
        return;
    }
    if (arg1 == 0) {
        *(u32 *)(arg0 + 0x4) &= ~1;
        *(u32 *)(arg0 + 0x38) = 1;
    }
}

void *func_020ec908(u32 arg0) {
    u8 *node = *(u8 **)(data_02160ab4 + 0x50);
    while (node != NULL) {
        if (*(u32 *)(node + 0x8) == arg0 && (*(u32 *)(node + 0x4) & 1) == 0) {
            return node;
        }
        node = *(u8 **)(node + 0x48);
    }
    return NULL;
}

extern u8 data_02160ad8[];
extern u8 data_02160ac4[];
extern u8 data_02160ab8[];
extern void *data_02155c3c;
extern void func_0210db10(void *);
extern void func_0210db58(void *);
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
extern void func_020ed0bc(void);
extern void *func_0210c594(s32, void *);
extern void *func_0210853c(void);
void *func_020ec950(u32 arg0) {
    u8 *node = *(u8 **)(data_02160ab4 + 0x50);
    while (node != NULL) {
        if (*(u32 *)(node + 0xc) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x48);
    }
    return NULL;
}

void func_020ec98c(u32 arg0) {
    *(u32 *)(data_02160ab4 + 0x64) = arg0;
}

extern s32 func_02117d80(void *);
extern s32 func_020ebd5c(void *, s32, s32);
u32 func_020ec9a0(u8 *arg0, s32 arg1) {
    s32 a = *(s32 *)(arg0 + 0x20);
    void *b = *(void **)(arg0 + 8);
    u32 ret = 0;
    if (a != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80(b)) {
        ret |= 1;
    }
    return ret;
}

void func_020ec9d0(u32 arg0, s32 arg1) {
    if (arg1 == 0) {
        *(void **)(data_02160ab8 + 0x20) = (void *)func_020ed0bc;
        *(u32 *)(data_02160ab8 + 0x24) = arg0;
        func_0210dae0(data_02160ad8);
    } else if (arg1 == 1) {
        *(void **)(data_02160ab8 + 0xc) = (void *)func_020ed0bc;
        *(u32 *)(data_02160ab8 + 0x10) = arg0;
        func_0210db40(data_02160ac4);
    }
}

void func_020eca2c(s32 arg0) {
    if (arg0 == 0) {
        func_0210db10(data_02160ad8);
    } else if (arg0 == 1) {
        func_0210db58(data_02160ac4);
    }
}

void *func_020eca60(void) {
    u8 *r4 = (u8 *)func_0210c594(0x18, data_02155c3c);
    *(u32 *)(r4 + 8) = 1;
    *(u16 *)(r4 + 0xc) = 0xffff;
    *(u32 *)(r4 + 0x10) = 0;
    *(void **)(r4 + 0) = func_0210853c();
    return r4;
}

void func_020ecaa4(void **arg0) {
    func_02108594(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
