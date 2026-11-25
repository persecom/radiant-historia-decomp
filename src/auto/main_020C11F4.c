/* 3 functions from 0x020C11F4 to 0x020C1FEC (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 a,b; } Unk_020c11f4;
extern const Unk_020c11f4 data_02143e44;
extern u32 data_02155c3c;
typedef struct Entry_020c11f4 { u16 id; u16 pad; struct Entry_020c11f4 *prev,*next; } Entry_020c11f4;
typedef struct { u32 count; Entry_020c11f4 *head,*tail; u32 offset; } List_020c11f4;
extern List_020c11f4 *data_02160218[2];
extern u8 *data_02160a6c;
extern void *func_0210c594(u32,u32);
extern void func_021167ac(void *,int);
extern void func_021167f0(void *,void *);
extern void func_020c0d98(void);
extern void func_020c0e08(void);
extern void func_0210c5dc(void *);

void func_020c11f4(void) {
Unk_020c11f4 buf=data_02143e44;
u8 *node;
data_02160218[1]=func_0210c594(16,data_02155c3c);
func_021167ac(&data_02160218[1]->head,4);
data_02160a6c[0x121]=0;
data_02160218[1]->count=0;
node=*(u8 **)(data_02160a6c+0x70);
for(;node;node=*(u8 **)(node+0x13c)) {
if(*(u16 *)(node+0x8e)==buf.a) {
Entry_020c11f4 *entry;
if(data_02160218[1]->count==0) {
entry=func_0210c594(12,data_02155c3c);
entry->id=buf.b;
func_021167f0(&data_02160218[1]->head,entry);
++data_02160218[1]->count;
} else {
Entry_020c11f4 *cur=data_02160218[1]->head;
int absent=1;
for(;cur;cur=cur->next) {
if(cur->id==buf.b) absent=0;
}
if(absent) {
entry=func_0210c594(12,data_02155c3c);
entry->id=buf.b;
func_021167f0(&data_02160218[1]->head,entry);
++data_02160218[1]->count;
}
}
}
}
data_02160a6c[0x121]=data_02160218[1]->count;
func_020c0d98();
func_020c0e08();
if(data_02160218[1]) {
func_0210c5dc(data_02160218[1]);
data_02160218[1]=0;
}
}

extern u32 *func_020ec294(int, int, int, int);
extern void func_020ec88c(void *, int, int);
u32 *func_020c1370(int a, u32 *pos, int id, int variant, int arg) {
int size;
u32 *p;
switch(id) {
case 0x822: size=0x1800; break;
case 0x823: size=0x940; break;
case 0x824: size=0xcc0; break;
case 0x7d2: case 0x7d4: case 0x7e8: case 0x7fc: case 0x825: size=0x3000; break;
case 2003: switch(variant) {
case 0: size=3776; break;
case 1: size=3968; break;
case 2: size=128; break;
case 3: size=384; break;
case 4: size=384; break;
case 5: size=256; break;
case 6: size=384; break;
case 7: size=384; break;
case 8: size=384; break;
case 9: size=4096; break;
} break;
case 2033: switch(variant) {
case 0: size=896; break;
case 1: size=3456; break;
case 2: size=128; break;
case 3: size=384; break;
case 4: size=256; break;
case 5: size=256; break;
case 6: size=256; break;
case 7: size=1024; break;
case 8: size=1024; break;
case 9: size=1664; break;
case 10: size=2432; break;
case 11: size=3072; break;
case 12: size=3072; break;
} break;
case 2043: switch(variant) {
case 0: size=640; break;
case 1: size=384; break;
case 2: size=256; break;
case 3: size=128; break;
case 4: size=2688; break;
case 5: size=640; break;
case 6: size=640; break;
case 7: size=640; break;
case 8: size=2944; break;
case 9: size=512; break;
case 10: size=384; break;
case 11: size=2176; break;
case 12: size=128; break;
case 13: size=768; break;
case 14: size=768; break;
case 15: size=768; break;
case 16: size=1920; break;
case 17: size=384; break;
case 18: size=1920; break;
case 19: size=512; break;
case 20: size=640; break;
case 21: size=640; break;
case 22: size=1024; break;
case 23: size=1024; break;
case 24: size=256; break;
} break;
case 2023: switch(variant) {
case 0: size=2304; break;
case 1: size=512; break;
case 2: size=320; break;
case 3: size=320; break;
case 4: size=320; break;
case 5: size=3520; break;
case 6: size=384; break;
case 7: size=192; break;
case 8: size=2816; break;
} break;
case 0: switch(variant) {
case 0: size=2048; break;
case 1: size=2048; break;
case 2: size=128; break;
case 3: size=384; break;
} break;
case 2093: switch(variant) {
case 0: size=256; break;
case 1: size=256; break;
case 2: size=128; break;
case 3: size=384; break;
case 4: size=384; break;
case 5: size=4736; break;
case 6: size=4736; break;
} break;
}
p=func_020ec294(id,a,size,arg);
p[5]=pos[0]; p[6]=pos[1]; p[7]=pos[2]; p[8]=0x1000; p[9]=0x1000; p[1]|=1;
func_020ec88c(p,variant,0); return p;
}

