/* 7 functions from 0x02096740 to 0x02097358 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02155c3c;
extern u8 *data_02160a74,*data_02160244;
extern void func_02097358(void);
extern void func_02097fb4(void);
extern void *func_0210c594(u32,u32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_020e1ec8(void *,int);
extern u8 *data_02160110;
extern u8 *func_020936f8(u16, int, int, int, int, int, int);
extern void func_020938b0(void *, int, int);
extern void func_020934ac(void *);
extern u8 *data_02160090;
extern void func_0209368c(u16, u8, int);

typedef struct {
    u8 pad[0x14];
    u8 *unk14;
    u8 pad18[0x18];
    void *unk30;
    void *unk34;
} Unk_0206011c;

extern Unk_0206011c *data_0216011c;
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210c5dc(void *);

void func_02096740(u8 *p, int mode) {
 u8 *base = *(u8 **)p;
 u16 id;
 u16 seen = 0;
 if (!p) p = *(u8 **)(data_02160090 + 8);
 while (p) {
  u8 *obj = *(u8 **)(p + 0x14);
  if (obj) {
   if (*(u8 **)p == base && seen == 0) seen++;
   else if (*(u8 **)p == base && seen == 1) {
    id = **(u16 **)(obj + 8);
    if (mode == 0) {
     func_0209368c(id,5,13); func_0209368c(id,5,2); func_0209368c(id,5,124); func_0209368c(id,5,125);
     func_0209368c(id,base[0x114]+6,6);
    } else if (mode == 1) {
     func_0209368c(id,0,13); func_0209368c(id,0,2); func_0209368c(id,0,124); func_0209368c(id,0,125);
     func_0209368c(id,base[0x114]+13,6);
    }
   }
  }
  p = *(u8 **)(p+0x1c);
 }
}

void func_02096ad4(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *r6;
    u16 r7;
    u16 r8 = 0;

    if (arg0 == NULL) {
        arg0 = *(u8 **)(data_02160090 + 8);
    }

    while (arg0 != NULL) {
        u8 *r1 = *(u8 **)(arg0 + 0x14);
        if (r1 != NULL && r8 != 0) {
            r6 = *(u8 **)arg0;
            if (**(u8 **)(r6 + 0x118) == 0) {
                r7 = **(u16 **)(r1 + 8);
                if (arg2 == 0 && arg1 != r6) {
                    func_0209368c(r7, 5, 0xd);
                    func_0209368c(r7, 5, 2);
                    func_0209368c(r7, 5, 0x7c);
                    func_0209368c(r7, 5, 0x7d);
                    func_0209368c(r7, *(u8 *)(r6 + 0x114) + 6, 6);
                } else if (arg2 == 1) {
                    func_0209368c(r7, 0, 0xd);
                    func_0209368c(r7, 0, 2);
                    func_0209368c(r7, 0, 0x7c);
                    func_0209368c(r7, 0, 0x7d);
                    func_0209368c(r7, *(u8 *)(r6 + 0x114) + 0xd, 6);
                } else if (arg2 == 2) {
                    func_0209368c(r7, 5, 0xd);
                    func_0209368c(r7, 5, 2);
                    func_0209368c(r7, 5, 0x7c);
                    func_0209368c(r7, 5, 0x7d);
                    func_0209368c(r7, *(u8 *)(r6 + 0x114) + 6, 6);
                }
            } else if (**(u8 **)(r6 + 0x118) == 1) {
                u16 id = **(u16 **)(r1 + 8);
                if (arg2 == 0) {
                    func_0209368c(id, 5, 4);
                    func_0209368c(id, 5, 5);
                    func_0209368c(id, 5, 0x7c);
                    func_0209368c(id, 5, 0x7d);
                } else if (arg2 == 1) {
                    func_0209368c(id, 0, 4);
                    func_0209368c(id, 0, 5);
                    func_0209368c(id, 0, 0x7c);
                    func_0209368c(id, 0, 0x7d);
                }
            }
        }
        r8++;
        arg0 = *(u8 **)(arg0 + 0x1c);
    }
}

void func_02096cfc(u8 *p){
u8 *node;
if(*(u8 **)(data_02160110+0x104)==0){
node=func_020936f8(14,0x321,0,0,3,2,13);
func_020938b0(node,1,13);
node=func_020936f8(16,0x321,0,0,4,4,2);
func_020938b0(node,1,2);
node=func_020936f8((u16)(p[0x114]+1),0x321,0,0,2,4,6);
func_020938b0(node,1,6);
*(u8 **)(node+8)=p;
*(u8 **)(data_02160110+0x104)=node;
}else{
func_020934ac(*(u8 **)(data_02160110+0x104));
node=func_020936f8(14,0x321,0,0,3,2,13);
func_020938b0(node,1,13);
node=func_020936f8(16,0x321,0,0,4,4,2);
func_020938b0(node,1,2);
node=func_020936f8((u16)(p[0x114]+1),0x321,0,0,2,4,6);
func_020938b0(node,1,6);
*(u8 **)(node+8)=p;
*(u8 **)(data_02160110+0x104)=node;
}
}

void func_02097114(void){
u8 *p;
u16 i;
if(data_0216011c)return;
data_0216011c=func_0210c594(0x48,data_02155c3c);
*(void (**)(void))data_0216011c=func_02097358;
*(u32 *)((u8 *)data_0216011c+4)=0x3f3;
func_0210d9e4(data_0216011c);
*(void (**)(void))((u8 *)data_0216011c+0x14)=func_02097fb4;
*(u32 *)((u8 *)data_0216011c+0x18)=0x3e9;
func_0210db70((u8 *)data_0216011c+0x14);
*(u16 *)((u8 *)data_0216011c+0x2a)=1;
*(u16 *)((u8 *)data_0216011c+0x2c)=0;
p=func_0210c594(0x9c,data_02155c3c);
for(i=0;i<2;i++){p[3+i]=1;p[0]++;}
data_0216011c->unk30=p;
data_0216011c->unk34=func_0210c594(0xa4,data_02155c3c);
func_020e1ec8(*(void **)(data_02160a74+0x88),3);
func_020e1ec8(*(void **)(data_02160a74+0x8c),3);
switch(*(u16 *)(data_02160244+0xf4)){
case 3:func_020e1ec8(*(void **)(data_02160a74+0x90),15);func_020e1ec8(*(void **)(data_02160a74+0x84),7);break;
case 4:func_020e1ec8(*(void **)(data_02160a74+0x90),16);func_020e1ec8(*(void **)(data_02160a74+0x84),8);break;
case 5:func_020e1ec8(*(void **)(data_02160a74+0x90),17);func_020e1ec8(*(void **)(data_02160a74+0x84),9);break;
}
*(u32 *)(data_02160a74+0x58)|=0x8000;
}

void func_020972cc(void) {
    Unk_0206011c **g = &data_0216011c;
    if (*g == NULL) {
        return;
    }
    func_0210da14(*g);
    func_0210dba0((u8 *)*g + 0x14);
    if ((*g)->unk30 != NULL) {
        func_0210c5dc((*g)->unk30);
        (*g)->unk30 = NULL;
    }
    g = &data_0216011c;
    if ((*g)->unk34 != NULL) {
        func_0210c5dc((*g)->unk34);
        (*g)->unk34 = NULL;
    }
    g = &data_0216011c;
    if (*g != NULL) {
        func_0210c5dc(*g);
        *g = NULL;
    }
}
