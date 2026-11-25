/* 4 functions from 0x0205DF48 to 0x0205EE3C (main), found by ds-decomp. */
#include "common.h"
extern s8 func_0202c658(void *);
extern u8 *func_0202c7d8(s32);
extern u8 *func_0202e2e8(void);
extern u8 *func_0202e260(u32);
extern int func_0202e468(void);
extern int func_02065c44(void *);
extern void func_0202c950(u32,void *,s32);
extern void func_0202ccec(u32,void *);
extern void func_0202bcd4(u32 *,s32);

extern u8 *data_02160a74;
extern u8 *func_0205bad4(void);
extern void func_020d3c98(void *);
extern void func_020e24bc(void *, s32, s32, s32, s32);
extern void func_020d9dc8(void *, s32, s32, s32);
extern u8 **data_02160244;
extern void func_020d9da8(s32);
extern void func_020d9ea8(s32, s32);
extern void func_0206e990(s32, u32);
extern void func_0210d27c(s32);
extern void func_020d0884(void);
extern void func_020d3160(s32, s32, s32, s32);
#pragma push
void func_0205df48(u8 *arg0) {
u8 *q=*(u8 **)(arg0+0x128);
u8 *p=*(u8 **)(q+8);
u8 *list=*(u8 **)(q+12);
u8 *target=*(u8 **)(list+4);
int enabled=1;
u32 v[3];
if(p[0]==3) enabled=0;
else if(p[0]==4) enabled=0;
else if(p[0]==9) enabled=0;
else if(*(u32 *)(q+0x18)&8) enabled=0;
else if(*(u16 *)(list+14)&0x200) enabled=0;
if(enabled) {
if(p[6]==7 || (u8)(p[6]+0xf4)<=4) {
switch(p[6]) {
case 7: {
int two=2;
*(u32 *)q=0;
if(func_02065c44(p)==1) {
func_0202c950(*(u16 *)(p+0x38),list,-1);
position7:
q[0x75]=1;
func_0202bcd4(v,p[0x3a]);
*(u32 *)(q+0x80)=v[0]; *(u32 *)(q+0x84)=v[1]; *(u32 *)(q+0x88)=v[2];
q[0x75]=two;
} else if(func_02065c44(p)==0) {func_0202ccec(*(u16 *)(p+0x38),list); q[0x75]=0;}
break;
}
case 12:
func_0202ccec(0xe00,list); q[0x75]=0; break;
case 13: {
int two=2;
if(target && *(u32 *)(*(u8 **)(target+0x118)+0x70) && *(s32 *)(*(u8 **)(target+0x118)+4)>=0) {
int n=func_0202c658(target);
if(list[0x4e]==0) p[0x3b]=n;
else {if(n%3!=2) p[0x3b]=n+1; else p[0x3b]=n;}
} else {
int empty=0;
if((int)p[0x3b]%3==0) {if(!func_0202c7d8(0) && !func_0202c7d8(3) && !func_0202c7d8(6)) empty=1;}
else if((int)p[0x3b]%3==1) {if(!func_0202c7d8(1) && !func_0202c7d8(4) && !func_0202c7d8(7)) empty=1;}
else if((int)p[0x3b]%3==2) {if(!func_0202c7d8(2) && !func_0202c7d8(5) && !func_0202c7d8(8)) empty=1;}
if(empty) {
void *obj;
if(func_0202e468()) obj=func_0202e2e8(); else obj=func_0202e260(0);
p[0x3b]=func_0202c658(obj);
}
}
*(u32 *)q=0;
if(func_02065c44(p)==1) {
if((int)p[0x3b]%3==0) {func_0202c950(73,list,-1);p[0x3a]=0;}
else if((int)p[0x3b]%3==1) {func_0202c950(146,list,-1);p[0x3a]=1;}
else if((int)p[0x3b]%3==2) {func_0202c950(292,list,-1);p[0x3a]=2;}goto position7;
q[0x75]=1;
func_0202bcd4(v,p[0x3a]);
*(u32 *)(q+0x80)=v[0]; *(u32 *)(q+0x84)=v[1]; *(u32 *)(q+0x88)=v[2];
q[0x75]=two;
} else {func_02065c44(p);}
break;
}
case 14: {
int two=2;
if(target && *(u32 *)(*(u8 **)(target+0x118)+0x70) && *(s32 *)(*(u8 **)(target+0x118)+4)>=0) {
int n=func_0202c658(target);
if(list[0x4e]==0) p[0x3b]=n;
else {if(n>=3) p[0x3b]=n-3; else p[0x3b]=n;}
} else {
int empty=0;
if((int)p[0x3b]/3==0) {if(!func_0202c7d8(0) && !func_0202c7d8(1) && !func_0202c7d8(2)) empty=1;}
else if((int)p[0x3b]/3==1) {if(!func_0202c7d8(3) && !func_0202c7d8(4) && !func_0202c7d8(5)) empty=1;}
else if((int)p[0x3b]/3==2) {if(!func_0202c7d8(6) && !func_0202c7d8(7) && !func_0202c7d8(8)) empty=1;}
if(empty) {
void *obj;
if(func_0202e468()) obj=func_0202e2e8(); else obj=func_0202e260(0);
p[0x3b]=func_0202c658(obj);
}
}
*(u32 *)q=0;
if(func_02065c44(p)==1) {
if((int)p[0x3b]/3==0) {func_0202c950(7,list,-1);p[0x3a]=1;}
else if((int)p[0x3b]/3==1) {func_0202c950(56,list,-1);p[0x3a]=4;}
else if((int)p[0x3b]/3==2) {func_0202c950(448,list,-1);p[0x3a]=7;}q[0x75]=1;
func_0202bcd4(v,p[0x3a]);
*(u32 *)(q+0x80)=v[0]; *(u32 *)(q+0x84)=v[1]; *(u32 *)(q+0x88)=v[2];
q[0x75]=two;
} else {func_02065c44(p);}
break;
}
case 15: {
int two=2;
if(target && *(u32 *)(*(u8 **)(target+0x118)+0x70) && *(s32 *)(*(u8 **)(target+0x118)+4)>=0) {
int n=func_0202c658(target);
if(list[0x4e]==0) p[0x3b]=n;
else {if(n>=3) p[0x3b]=n-3; else p[0x3b]=n;}
} else {
int empty=0;
if((int)p[0x3b]/3==0) { if(!func_0202c7d8(0) && !func_0202c7d8(1) && !func_0202c7d8(2) && !func_0202c7d8(3) && !func_0202c7d8(4) && !func_0202c7d8(5)) empty=1; }
else {if(!func_0202c7d8(3) && !func_0202c7d8(4) && !func_0202c7d8(5) && !func_0202c7d8(6) && !func_0202c7d8(7) && !func_0202c7d8(8)) empty=1;}
if(empty) {
void *obj;
if(func_0202e468()) obj=func_0202e2e8(); else obj=func_0202e260(0);
p[0x3b]=func_0202c658(obj);
}
}
*(u32 *)q=0;
if(func_02065c44(p)==1) {
if((int)p[0x3b]/3==0) {func_0202c950(63,list,-1);p[0x3a]=1;}
else  {func_0202c950(504,list,-1);p[0x3a]=4;}q[0x75]=1;
func_0202bcd4(v,p[0x3a]);
*(u32 *)(q+0x80)=v[0]; *(u32 *)(q+0x84)=v[1]; *(u32 *)(q+0x88)=v[2];
q[0x75]=two;
} else {func_02065c44(p);}
break;
}
case 16: {
int two=2;
if(target && *(u32 *)(*(u8 **)(target+0x118)+0x70) && *(s32 *)(*(u8 **)(target+0x118)+4)>=0) {
int n=func_0202c658(target);
int delta=((s8 *)list)[0x44];
if(delta==0) p[0x3b]=n;
else if(delta==1) p[0x3b]=n+1;
else if(delta==-3) p[0x3b]=n-3;
else if(delta==-2) p[0x3b]=n-2;
} else {
int n=((s8 *)list)[0x4e];
s16 count=0;
int empty=0;
if(func_0202c7d8(n)) count++;
if((n+1)/3==n/3 && func_0202c7d8((s8)(n+1))) count++;
if((n-1)/3==n/3 && func_0202c7d8((s8)(n-1))) count++;
if((n+3)%3==n%3 && func_0202c7d8((s8)(n+3))) count++;
if((n-3)%3==n%3 && func_0202c7d8((s8)(n-3))) count++;
if(count==0) empty=1; else p[0x3b]=n;
if(empty) {
void *obj;
if(func_0202e468()) obj=func_0202e2e8(); else obj=func_0202e260(0);
p[0x3b]=func_0202c658(obj);
}
}
*(u32 *)q=0;
if(func_02065c44(p)==1) {
int n=((s8 *)p)[0x3b];
u32 mask=0;
mask|=1<<n;
if((n+1)/3==n/3) mask|=1<<(n+1);
if((n-1)/3==n/3) mask|=1<<(n-1);
if((n+3)%3==n%3) mask|=1<<(n+3);
if((n-3)%3==n%3) mask|=1<<(n-3);
func_0202c950(mask,list,-1);
p[0x3a]=n;
q[0x75]=1;
func_0202bcd4(v,p[0x3a]);
*(u32 *)(q+0x80)=v[0]; *(u32 *)(q+0x84)=v[1]; *(u32 *)(q+0x88)=v[2];
q[0x75]=two;
} else func_02065c44(p);
break;
}
}
} else {
int valid=1;
int zero=0;
if(p[7]!=8) {
q[0x75]=zero;
if(list[0x41]&8) {
int kind=**(u8 **)(arg0+0x118);
if(kind==1) {
if(!target) valid=0;
else if(!*(u32 *)(*(u8 **)(target+0x118)+0x70)) valid=0;
else if(*(s32 *)(*(u8 **)(target+0x118)+4)<=0) valid=0;
if(!valid) {
if(p[7]==9) valid=1;
else if((u8)(p[7]+251)<=1) {valid=1; target=func_0202e260(1);}
else {
if(!func_0202e468()) target=func_0202e260(0); else target=func_0202e2e8();
if(target) {list[0x12]=0;valid=1;}
}
}
} else if(kind==0) {
if(!func_0202e468()) target=func_0202e260(0); else target=func_0202e2e8();
list[0x12]=0;valid=1;
}
}
if(!target) {
if(!func_0202e468()) target=func_0202e260(0); else target=func_0202e2e8();
if(target) p[0x3b]=zero;
if(target) {list[0x44]=zero;list[0x12]=zero;valid=1;}
} else if(!*(u32 *)(*(u8 **)(target+0x118)+0x70) && p[7]!=5 && p[7]!=9 && p[7]!=6 && p[7]!=11) {
if(!func_0202e468()) target=func_0202e260(0); else target=func_0202e2e8();
if(target) {list[0x44]=zero;list[0x12]=zero;valid=1;}
} else if(p[7]==5 || p[7]==9 || p[7]==6 || p[7]==11) valid=1;
if(valid) {
u8 *info;
int n;
u32 mask;
*(u8 **)q=target;
info=*(u8 **)(target+0x124);
n=func_0202c658(target);
mask=func_020deaf0(p,(u8)(n+((s8 *)list)[0x44]),**(u8 **)(target+0x118));
switch(((s8 *)list)[0x12]) {
case 1:mask|=1<<(n+1);break;
case 2:mask|=1<<(n-3);break;
case 3:mask|=1<<(n-3);mask|=1<<(n+1);mask|=1<<(n-2);break;
case 4:mask=0x1ff;break;
default:break;
}
if(**(u8 **)(target+0x118)==1) func_0202c950(mask,list,*(s16 *)(info+2));
else if(**(u8 **)(target+0x118)==0) {
if(p[7]==9 || p[7]==5 || p[7]==6 || p[7]==11) func_0202ccec(mask,list);
}
}
} else {*(u32 *)q=zero;q[0x75]=0;}
}
}
*(u32 *)(q+0x24)=60;
func_0205deb4(list);
}
#pragma pop
void func_0205ebb0(u8 *arg0) {
    u8 *r4 = *(u8 **)(arg0 + 0x128);
    s32 state;
    (*data_02160244)[0x6c] = 2;
    state = *(s16 *)(r4 + 0x1c);
    if (state == 0) {
        func_020d9da8(0x20);
        func_020d9ea8(8, 0x30);
        *(s16 *)(r4 + 0x1c) = 1;
        func_0206e990(7, *(u16 *)(arg0 + 0x90));
        func_0210d27c(0x6a);
    } else if (state == 1) {
        func_020d0884();
        func_020d3160(7, 0, 0, 0);
        func_020d3160(0, 0, 0, 0);
        *(u32 *)(r4 + 0x18) |= 2;
        *(u32 *)(r4 + 0x18) &= ~0x10;
        *(u16 *)(r4 + 0x1e) |= 0x100;
        *(s32 *)(r4 + 0x24) = 0x12b;
    }
}

extern void func_020d3e9c(s32,u16);
void func_0205ec78(u8 *p) {
u8 *q=*(u8 **)(p+0x128);
s32 state;
(*data_02160244)[0x6c]=2;
state=*(s16 *)(q+0x1c);
if(state==0) {
s32 zero=0;
u32 flags;
*(s16 *)(q+0x1c)=1;
*(s32 *)(q+0x14)=zero;
((u8 *)data_02160244)[0x144]=zero;
func_020d3160(7,zero,zero,zero);
func_020d3160(zero,zero,zero,zero);
flags=*(u32 *)(*(u8 **)(p+0x118)+0x78);
if(flags&0x20) func_020d3e9c(zero,(u16)(*(u16 *)(p+0x8c)+30));
else if(flags&0x10) func_020d3e9c(zero,(u16)(*(u16 *)(p+0x8c)+20));
else if(flags&4) func_020d3e9c(zero,12);
} else if(state==1) {
if (++*(s32 *)(q+0x14)>30) {
s32 one=1;
func_020d3e9c(one,0);
*(u16 *)(q+0x1e)|=0x100;
*(s32 *)(q+0x24)=300-one;
}
}
}

void func_0205ed94(void) {
    u8 *node = func_0205bad4();
    while (node != NULL) {
        u8 *obj = *(u8 **)node;
        if (**(u8 **)(obj + 0x118) == 1) {
            func_020d3c98(obj);
            *(u16 *)(data_02160a74 + 0x1e0) = 0;
            func_020e24bc(*(void **)(data_02160a74 + 0x78), 5, 0xaa, *(u16 *)(*(u8 **)(obj + 0x118) + 0x74), 0);
            *(u32 *)(*(u8 **)(*(u8 **)(data_02160a74 + 0x78) + 4) + 0x4c) = 0x28a000;
            func_020d9dc8(obj + 0x1a8, *(u16 *)(obj + 0x90), -4, 0);
            return;
        }
        node = *(u8 **)(node + 0x18);
    }
}
