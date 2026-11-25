/* 2 functions from 0x02077688 to 0x020783E8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 x,y,z; } Vec_02077688;
typedef struct { u8 *head; u8 *tail; u16 count,offset; } List_02077688;
extern u8 *data_021600ac;
extern u32 data_02155c3c,data_0216263c[3];
extern void *func_0210c594(u32,u32);
extern u16 func_02043964(u16);
extern u8 *func_02047820(u16);
extern s32 func_020ddc8c(void*,void*),func_0210c2f4(void*,void*);
extern u16 func_020d7ab8(s32,s32,s32);
extern s32 func_020d7c8c(s32,s32,s32,u32,u16,s16*,s32*);

extern u8 *data_02160204;
extern u16 data_021626aa;
extern s16 data_0213a394[];
extern u16 data_02151fc8;
extern u16 data_02151fca;
#pragma optimization_level 4
void func_02077688(void) {
List_02077688 a,b,c;
Vec_02077688 pos,other;

u16 ids[3]={0,0,0};
s16 cell;
s32 value;
u8 order=0,count=0,groups=0;
u8 *player=*(u8**)(data_021600ac+0x68),*actor,*node,*next,*scan;
List_02077688 *result=func_0210c594(12,data_02155c3c);
s32 angle;
func_021167ac(&a,20);func_021167ac(&b,20);func_021167ac(&c,20);func_021167ac(result,8);
for(actor=*(u8**)(data_02160204+0xe8);actor;actor=*(u8**)(actor+0x134)){
if(*(u16*)(actor+0x90) && *(u8**)(actor+0xd0) && func_02043964(*(u16*)(actor+0x90))){
pos=*(Vec_02077688*)player;other=*(Vec_02077688*)actor;
angle=(func_020ddc8c(player,actor)%65536)>>4;
pos.x+=player[0x9d]*data_0213a394[angle*2];pos.z+=player[0x9d]*data_0213a394[angle*2+1];
angle=(func_020ddc8c(actor,player)%65536)>>4;
other.x+=actor[0x9d]*data_0213a394[angle*2];other.z+=actor[0x9d]*data_0213a394[angle*2+1];
if(func_0210c2f4(&pos,&other)<0x50000){
node=func_0210c594(28,data_02155c3c);
*(u16*)(node+2)=*(u16*)(actor+0x90);*(u16*)node=*(u16*)(actor+0x8e);
*(u16*)(node+4)=(*(u8**)(actor+0xd0))[0x18];
*(u16*)(node+10)=func_02043964(*(u16*)(actor+0x90));
*(s32*)(node+12)=func_0210c2f4(&pos,&other);
func_021167f0(&a,node);count++;
}}}
while(count){
s32 nearest=0;u32 id=0;
for(scan=a.head;scan;scan=*(u8**)(scan+24)){
if(nearest){if(*(s32*)(scan+12)<nearest){nearest=*(s32*)(scan+12);id=*(u16*)(scan+2);}}
else {id=*(u16*)(scan+2);nearest=*(s32*)(scan+12);}
}
for(node=a.head;node;node=next){
next=*(u8**)(node+24);
if(*(u16*)(node+2)==id){node[16]=order;func_021168f8(&a,node);func_021167f0(&b,node);break;}
}
order++;count--;
}
order=0;
if(data_02160204[0x8d]!=1){
actor=func_02047820(*(u16*)(b.head+2));
if(actor){
s32 x=*(u16*)(player+0x92)/182,y=*(u16*)(actor+0x92)/182;
s32 d=x-y,ad=d<0?-d:d;
if(ad<90 || ((d=x+360-y)<0?-d:d)<90 || ((d=x-y-360)<0?-d:d)<90){
angle=func_020ddc8c(player,actor);
x=*(u16*)(player+0x92)/182;
if(x>=120 && x<240){
if(angle>((*(u16*)(player+0x92)+0x5550)%65536) || angle<((*(u16*)(player+0x92)+0xaaa0)%65536))data_02160204[0x8d]=2;
}else if(angle>((*(u16*)(player+0x92)+0x5550)%65536) && angle<((*(u16*)(player+0x92)+0xaaa0)%65536))data_02160204[0x8d]=2;
}}}
for(node=b.head;node;node=*(u8**)(node+24)){
if(groups==0)ids[groups++]=*(u16*)node;
else {
u8 matches=0,i;
for(i=0;i<groups;i++)if(ids[i]==*(u16*)node)matches++;
if(!matches)ids[groups++]=*(u16*)node;
}
if(groups>=3)break;
}
for(node=b.head;node;node=next){next=*(u8**)(node+24);
if(ids[0]!=*(u16*)node && ids[1]!=*(u16*)node && ids[2]!=*(u16*)node){
func_021168f8(&b,node);if(node)func_0210c5dc(node);
}}
for(node=b.head;node;node=next){next=*(u8**)(node+24);func_021168f8(&b,node);func_021167f0(&c,node);}
{
u16 total=0,entry;
u32 choice;u8 i;
u8 occupied[9]={0,0,0,0,0,0,0,0,0};
for(node=c.head;node;node=next){
next=*(u8**)(node+24);*(u16*)(node+6)=0;
if(total==0){
total=1;
choice=func_020d7ab8((u16)((*(u16*)(data_02160204+0x72)-1)/20+1),0,*(u16*)(node+10));
if(choice==0)choice=1;else if(choice>=10)choice=1;
for(entry=1;entry<9;entry++){
u16 shape;u32 placed;
cell=0;value=0;
shape=func_020d7c8c((u16)((*(u16*)(data_02160204+0x72)-1)/20+1),0,*(u16*)(node+10),choice,entry,&cell,&value);
placed=0;
if(value){
if(cell==9){
data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
cell=(u8)(u16)(((data_0216263c[0]>>16)*9)>>16);
}
if(shape==99)cell=-1;
if(cell!=-1){
switch(shape){
case 0:
i=0;do{
if(!occupied[cell]){occupied[cell]++;placed=1;}
else cell=(s16)(cell+1)%9;
i++;
}while(i<=9 && !placed);break;
case 1:
i=0;do{
if(!occupied[cell] && !occupied[cell+1] && cell%3!=2){occupied[cell]++;occupied[cell+1]++;placed=1;}
else cell=(s16)(cell+1)%9;
i++;
}while(i<=9 && !placed);break;
case 2:
i=0;do{
if(!occupied[cell] && !occupied[cell-3] && cell>=3){occupied[cell]++;occupied[cell-3]++;placed=1;}
else cell=(s16)(cell+1)%9;
i++;
}while(i<=9 && !placed);break;
case 3:
i=0;do{
if(cell>=3 && cell%3<2 && !occupied[cell] && !occupied[cell+1] && !occupied[cell-3] && !occupied[cell-2]){
occupied[cell]++;occupied[cell-3]++;occupied[cell+1]++;occupied[cell-2]++;placed=1;
}else cell=(s16)(cell+1)%9;
i++;
}while(i<=9 && !placed);break;
}
if(placed){
scan=func_0210c594(20,data_02155c3c);scan[0]=cell;*(u16*)(scan+2)=value-1;scan[16]=1;*(u16*)(scan+4)=*(u16*)(node+2);func_021167f0(result,scan);
}
}else if(shape==99){
scan=func_0210c594(20,data_02155c3c);scan[0]=99;*(u16*)(scan+2)=value-1;scan[16]=1;*(u16*)(scan+4)=99;func_021167f0(result,scan);
}
}
}
func_021168f8(&c,node);if(node)func_0210c5dc(node);
}else{
if(total<9){
scan=func_0210c594(20,data_02155c3c);scan[0]=0;*(u16*)(scan+2)=0;scan[16]=0;*(u16*)(scan+4)=*(u16*)(node+2);func_021167f0(result,scan);
}
total++;
}
}
}
for(node=a.head;node;node=next){next=*(u8**)(node+24);if(node)func_0210c5dc(node);}
for(node=b.head;node;node=next){next=*(u8**)(node+24);if(node)func_0210c5dc(node);}
for(node=c.head;node;node=next){next=*(u8**)(node+24);if(node)func_0210c5dc(node);}
*(List_02077688**)(data_02160204+0x6c)=result;
}
void func_020781b0(u8 *arg0, u16 *arg1, u32 *arg2) {
    u32 r12 = 0;
    u16 keys;
    s32 angle;

    if (data_02160204[0x12a] & 8) {
        return;
    }

    keys = data_021626aa;
    if (keys & 0x40) r12 |= 0x10;
    if (keys & 0x80) r12 |= 0x4;
    if (keys & 0x20) r12 |= 0x2;
    if (keys & 0x10) r12 |= 0x8;

    if (keys & 2) {
        *(u32 *)(arg0 + 0xac) |= 0x10;
    } else {
        *(u32 *)(arg0 + 0xac) &= ~0x10;
    }

    if (r12 != 0) {
        if ((r12 & 0x10) && (r12 & 4)) {
            r12 &= ~0x14;
        }
        if ((r12 & 2) && (r12 & 8)) {
            r12 &= ~0xa;
        }

        switch (r12) {
        case 0x12: angle = 0xa000; break;
        case 0x18: angle = 0xe000; break;
        case 0x6:  angle = 0x6000; break;
        case 0xc:  angle = 0x2000; break;
        case 0x10: angle = 0xc000; break;
        case 0x4:  angle = 0x4000; break;
        case 0x2:  angle = 0x8000; break;
        case 0x8:  angle = 0x0; break;
        case 0x0:
        default:   r12 |= 1; break;
        }

        if (!(r12 & 1)) {
            u16 baseAngle;
            s32 idx;
            s16 sinv, cosv;

            *(s32 *)(arg0 + 0x30) = 0;
            *(s32 *)(arg0 + 0x34) = 0;
            *(s32 *)(arg0 + 0x38) = 0;

            if (*arg2 == r12) {
                baseAngle = *arg1;
            } else {
                baseAngle = data_02151fc8;
            }

            angle = (u16)((baseAngle + angle) % 0x10000);
            idx = angle >> 4;
            cosv = data_0213a394[idx * 2 + 1];
            sinv = data_0213a394[idx * 2];
            *(s32 *)(arg0 + 0x38) = *(s32 *)(arg0 + 0x78) * sinv;
            *(s32 *)(arg0 + 0x30) = *(s32 *)(arg0 + 0x78) * cosv;

            if (data_02151fca / 182 == 21) {
                *(s32 *)(arg0 + 0x38) += (*(s32 *)(arg0 + 0x38) * 5) / 10;
            }

            *(u32 *)(arg0 + 0xac) &= ~0x40;
            *(u32 *)(arg0 + 0xac) &= ~0x80;
            *(u32 *)(arg0 + 0xac) |= 2;
        }
    } else {
        *(u32 *)(arg0 + 0xac) &= ~2;
    }

    if (*arg2 != r12) {
        *arg2 = r12;
        *arg1 = data_02151fc8;
    }
}
#pragma opt_propagation on
