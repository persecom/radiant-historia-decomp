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
