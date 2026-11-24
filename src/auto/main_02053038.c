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
extern void func_020526f0();
extern void func_020477dc(void *, s32, s32);
extern void *func_02047820(s32);
extern s32 func_020ddc8c(void *, s32);

extern void func_02053824(void *);
extern void func_02052d30(void *);
static void func_02053038(void *);
extern void func_0205317c(void *);
extern void func_0205366c(void *);
extern void func_02053d90(void *);
extern void func_02053f6c(void *);
extern void func_02053f94(void *);

void func_02053038(void *arg0) {
u8 *p=*(u8 **)((u8 *)arg0+0xd0);
u16 type=*(u16 *)(p+0x26);
if(type==0x16 || type==0xc9) return;
if(func_02054330(arg0)) {
if(*(u16 *)(p+0x26)>=20) { p[1]=3; return; }
}
if(!func_0205428c(arg0)) {
p[1]=1;
func_020477dc(arg0,2,1);
return;
}
if(p[0xd]!=0) return;
switch(*(u16 *)(p+0x26)%10) {
case 1: break;
case 2:
if(func_02054800(arg0)==1) {
*(u16 *)(p+4)=0;
if(p[0x25]!=0x47 && p[0x25]!=0x51) {
*(u16 *)(p+6)=0;
p[1]=5;
} else p[1]=3;
}
break;
case 3: func_0205530c(arg0); break;
case 4:
if(func_02054a94(arg0)==1) {
*(u16 *)(p+4)=0;
if(p[0x25]!=0x47 && p[0x25]!=0x51) {
*(u16 *)(p+6)=0;
p[1]=5;
} else p[1]=3;
}
break;
default:p[1]=1;break;
}
}
