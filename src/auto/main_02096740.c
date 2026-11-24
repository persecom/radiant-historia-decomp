/* 7 functions from 0x02096740 to 0x02097358 (main), found by ds-decomp. */
#include "common.h"
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
