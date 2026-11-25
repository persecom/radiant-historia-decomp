/* 8 functions from 0x0205A83C to 0x0205B710 (main), found by ds-decomp. */
#include "common.h"
extern void func_0206ea84(s32,u16,s32);
extern void func_020676c4(s32,u16);
extern void func_020de0a8(void *);
extern const s16 data_0213a394[];
extern s32 data_02162814[],data_02162884[];
void func_020dd810(void *,int,int);
void func_020ddfd0(void *,int);
s32 func_020d9e38(void);
void func_0210d27c(int);
void func_020d0a40(int);

extern u8 *data_02160a74;
extern void func_020bfd78(s32, s32, u32, s32, s32, void *, u16, s32);
extern void func_020da8c0(void *, s32);
extern u8 **data_02160244;
extern u8 *data_02160080;
extern u8 *data_02160a6c;

extern void func_020d90bc(s32);

s32 func_0205a83c(void) {
    u8 *p = *data_02160244;
    s32 i;
    for (i = 0; i < *(s8 *)(p + 0x39); i++) {
        u8 *q = ((u8 **)(p + 0x10))[i];
        u8 *r = *(u8 **)q;
        u8 *s = *(u8 **)(r + 0x128);
        if (*(u32 *)(s + 0x24) != 0) {
            return 0;
        }
    }
    {
        u8 *g = data_02160080;
        if (*(u16 *)(g + 0x14) == 1) {
            return 0;
        }
        if (*(u16 *)(g + 0x16) != 0) {
            return 0;
        }
    }
    if (*(u8 *)(p + 0x7a) != 0) {
        return 0;
    }
    return 1;
}

extern void func_02025f84(void *, u16);
extern void func_020263b4(void *, u16);
void func_0205a8c8(void) {
    u8 *cur = *(u8 **)(data_02160a6c + 0x70);

    while (cur != NULL) {
        u8 *sub = *(u8 **)(cur + 0x118);
        if (*(u32 *)(sub + 0x70) != 0) {
            u8 *list = *(u8 **)(sub + 0x60);
            if (*(u16 *)list >= 1) {
                u8 *node = *(u8 **)(list + 4);
                while (node != NULL) {
                    u8 *next = *(u8 **)(node + 0x14);
                    switch (*(u16 *)node) {
                    case 0x8c:
                    case 0x8d:
                    case 0x8e:
                    case 0x8f:
                    case 0x90:
                    case 0x91:
                    case 0x92:
                    case 0x93:
                    case 0x94:
                    case 0x95:
                    case 0x96:
                    case 0x97:
                    case 0x98:
                    case 0x99:
                    case 0x9a:
                    case 0x9b:
                    case 0x9c:
                    case 0x9d:
                    case 0x9e:
                    case 0x9f:
                    case 0xa0:
                    case 0xa1:
                    case 0xa5:
                    case 0xad:
                    case 0xae:
                        if ((node[0xe] & 1) == 0) {
                            ((s8 *)node)[0xa]--;
                            if (((s8 *)node)[0xa] <= 0) {
                                func_02025f84(cur, *(u16 *)node);
                            }
                        }
                        break;
                    case 0xa2:
                    case 0xa3:
                    case 0xa4:
                    case 0xa7:
                    case 0xa8:
                    case 0xa9:
                        if ((node[0xe] & 1) == 0) {
                            ((s8 *)node)[0xa]--;
                            if (((s8 *)node)[0xa] <= 0) {
                                func_020263b4(cur, *(u16 *)node);
                            }
                        }
                        break;
                    }
                    node = next;
                }
            }
        }
        cur = *(u8 **)(cur + 0x13c);
    }
}

void func_0205b01c(void) {
u8 *p;
s32 zero=0;
if(((u8 *)data_02160244)[0x10d]==1)return;
p=*(u8 **)(data_02160a6c+0xb8);
while(p) {
u8 *q=*(u8 **)(p+0x124);
if(q[0x12]==0) switch(*(u16 *)q) {
case 3:
if(*(s16 *)(q+2)*(s16)88==176){*(u32 *)(q+8)|=4;*(u16 *)q=7;}break;
case 7:
*(u16 *)q=2;*(s32 *)(q+12)=0x1400;
if(*(u32 *)(q+8)&4){--*(s16 *)(q+2);if(*(s16 *)(q+2)<0)*(s16 *)(q+2)=zero;}else *(s16 *)(q+2)=zero;
func_0206ea84(107,*(u16 *)(p+0x90),1);break;
case 2: {
s32 target;
*(s32 *)(q+12)*=2;
*(s32 *)(p+4)-=*(s32 *)(q+12);
if(!(*(u32 *)(q+8)&4))target=0x20000;
else target=(*(s16 *)(q+2)*(s16)88+32)<<12;
if(*(s32 *)(p+4)<=target){
func_020676c4(107,*(u16 *)(p+0x90));
*(s32 *)(p+4)=target;*(s32 *)(q+12)=zero;
if(*(s16 *)(q+2)==0){
*(u16 *)q=4;*(u32 *)(p+0x80)|=128;p[0xa6]=zero;
}else if(*(u32 *)(q+8)&4){*(u32 *)(q+8)&=~4;*(u16 *)q=3;}
*(s16 *)(q+4)=zero;
*(s32 *)(p+12)=*(s32 *)p;*(s32 *)(p+16)=*(s32 *)(p+4);*(s32 *)(p+20)=*(s32 *)(p+8);
}break;}
case 4:
++*(s16 *)(q+4);
if(*(s16 *)(q+4)==1 && p && *(u8 **)(p+0x118))func_0210d27c(128);
if(*(s16 *)(q+4)>10){
*(s16 *)(q+4)=zero;*(u16 *)q=zero;
*(s32 *)(p+36)=*(s32 *)p;*(s32 *)(p+40)=*(s32 *)(p+4);*(s32 *)(p+44)=*(s32 *)(p+8);
*(s32 *)(p+24)=*(s32 *)p;*(s32 *)(p+28)=*(s32 *)(p+4);*(s32 *)(p+32)=*(s32 *)(p+8);
func_020de0a8(p);
}break;
case 5:
*(u16 *)q=6;*(u32 *)(q+8)&=~64;*(s16 *)(q+2)=zero;*(u32 *)(p+0x80)|=128;p[0xa6]=zero;
case 6:
++*(s16 *)(q+4);if(*(s16 *)(q+4)==1)func_0210d27c(128);
if(*(s16 *)(q+4)>10){*(s16 *)(q+4)=zero;*(u16 *)q=zero;}
break;
}
p=*(u8 **)(p+0x174);
}
}

void func_0205b2ac(void){
 s32 zero=0;
 u8 *first,*r,*q;
 u8 *p=*data_02160244;
 if(p[0x3c]==0){
 u8 *node;
 p[0x9c]=zero;
 for(first=*(u8 **)(data_02160a6c+0xb8);first;first=*(u8 **)(first+0x174)){
 r=*(u8 **)(first+0x128);
 q=*(u8 **)(r+0x54);
 if(*(s8 *)(q+3)==-1){q[3]=zero;func_0202c328(first,q[2]);*(s32 *)(r+0x24)=0x13ee;r[0x7c]=zero;}q[4]=zero;
 }
 p[0x3c]=1;
 }else if(p[0x3c]==1){
 u8 count;
 u8 *node;
 if(p[0x9c]==1){
 s32 v[3];
 func_020d9ea8(8,48);
 v[0]=0x230000;v[1]=0x30000;v[2]=0x200000;
 func_020d907c(v);func_020d9090();
 }
 count=0;
 for(node=*(u8 **)(data_02160a6c+0xb8);node;node=*(u8 **)(node+0x174)){
 if(node && *(u8 **)(node+0x118)){
 u8 *q=*(u8 **)(node+0x118);
 if(*(s32 *)(q+4)>=1 && *(s32 *)(*(u8 **)(node+0x128)+0x24))count++;
 }
 }
 if(count)return;
 if((*data_02160244)[0x9c]==1){
 if(!func_020da060(48))return;
 for(node=*(u8 **)(data_02160a6c+0xb8);node;node=*(u8 **)(node+0x174)){
 if(node && *(u8 **)(node+0x118))func_02030b7c(node,5,511);
 }
 (*data_02160244)[0x9c]=2;
 (*data_02160244)[0x9d]=zero;
 }else if((*data_02160244)[0x9c]==2){
 (*data_02160244)[0x9d]++;
 if((*data_02160244)[0x9d]>16){(*data_02160244)[0x9d]=zero;(*data_02160244)[0x9c]=zero;}
 }else if((*data_02160244)[0x9c]==0)*(s32 *)(p+12)=26;
 }
}

void func_0205b4e0(void) {
    u8 *p = *data_02160244;
    if (*(u8 *)(p + 0x3c) == 0) {
        *(u8 *)(p + 0x3c) += 1;
        return;
    }
    if (*(u8 *)(p + 0x3c) == 1) {
        func_020d90bc(1);
        *(u32 *)(p + 0x4) = 0;
    }
}

void func_0205b524(void) {
u8 *p=*data_02160244;
if(*(u32 *)(p+4)==0) {
u8 *cur=*(u8 **)(data_02160a6c+0xac);
int one=1,zero=0;
while(cur) {
if(*(u32 *)(*(u8 **)(cur+0x118)+0x70)) {
func_020dd810(cur,one,zero);
func_020ddfd0(cur,one);
}
cur=*(u8 **)(cur+0x16c);
}
} else if(*(u32 *)(p+4)<15) {
u8 *cur=*(u8 **)(data_02160a6c+0xac);
while(cur) {
if(*(u32 *)(*(u8 **)(cur+0x118)+0x70)) {
*(s32 *)cur+=((const s16 (*)[2])data_0213a394)[func_020d9e38()>>4][1]*3;
*(s32 *)(cur+8)+=data_0213a394[(func_020d9e38()>>4)*2]*3;
}
cur=*(u8 **)(cur+0x16c);
}
if(*(u32 *)(p+4)%6==0)func_0210d27c(35);
} else if(*(u32 *)(p+4)<30) func_020d0a40(12);
if(*(u32 *)(p+4)>5) {
data_02162814[0]-=2;
if(data_02162814[0]<-16)data_02162814[0]=-16;
data_02162884[0]-=2;
if(data_02162884[0]<-16)data_02162884[0]=-16;
}
(*(u32 *)(p+4))++;
}

void func_0205b6bc(void) {
    u8 *p = *data_02160244;
    if (*(u8 *)(p + 0x3a) == 0) {
        *(u32 *)(data_02160a6c + 0x100) = 0;
        *(u8 *)(p + 0x3a) = 1;
    }
    {
        u8 *q = *(u8 **)(p + 0x60);
        u8 *r = *(u8 **)(q + 0x128);
        if (*(u32 *)(r + 0x24) == 0) {
            *(u32 *)(p + 0xc) = 0xc;
        }
    }
}

