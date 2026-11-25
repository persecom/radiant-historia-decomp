/* 3 functions from 0x02014994 to 0x02015994 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 padding,sign,unk2,alternate,unk4,conversion; u16 unk6; s32 width,precision; } FormatSpec;
typedef struct { u8 sign,pad; s16 exponent; u8 length; u8 digits[35]; } Decimal_02014994;
typedef struct { u8 c[5]; } FormatText5;
typedef struct { u8 c[4]; } FormatText4;
extern u8 data_02145e54[],data_02145e5c[],data_02145e64[],data_02145e68[],data_02145e6c[],data_02145e74[],data_02145e7c[],data_02145e80[];
extern const u16 data_0213eb14[];
extern void func_02019580(void *,double,void *);
extern void func_02014880(u8 *,s32);

typedef struct {
    u8 *field_0;
    u32 field_4;
    u32 field_8;
} Unk_02015950;
extern void func_02013858(u8 *, void *, s32);

u8 *func_02014994(double value,u8 *end,FormatSpec spec) {
u8 fmt[4],num[40];
s32 sign,alternate,conversion,precision;
precision=spec.precision;conversion=spec.conversion;alternate=spec.alternate;sign=spec.sign;
u8 *p=0,*q;
s32 zero=0,pad=32,i,j,exp,frac,whole;
if(precision>509)return p;
fmt[0]=0;*(s16*)(fmt+2)=pad;
func_02019580(fmt,value,num);
q=num+5+num[4];
while(num[4]>1 && *--q=='0'){num[4]--;(*(s16*)(num+2))++;}
pad='0';
switch(num[5]){
case '0':*(s16*)(num+2)=0;break;
case 'I':
if(value<0.0){p=end-5;if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText5*)p=*(FormatText5*)data_02145e54;return p;}else{*(FormatText5*)p=*(FormatText5*)data_02145e5c;return p;}}
p=end-4;if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText4*)p=*(FormatText4*)data_02145e64;return p;}else{*(FormatText4*)p=*(FormatText4*)data_02145e68;return p;}
case 'N':
if(num[0]){p=end-5;if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText5*)p=*(FormatText5*)data_02145e6c;return p;}else{*(FormatText5*)p=*(FormatText5*)data_02145e74;return p;}}
p=end-4;if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText4*)p=*(FormatText4*)data_02145e7c;return p;}else{*(FormatText4*)p=*(FormatText4*)data_02145e80;return p;}

}
*(s16*)(num+2)+=(s16)(num[4]-1);
p=end-1;*p=0;
switch(conversion){
case 'g':case 'G':
if(num[4]>precision)func_02014880(num,precision);
exp=*(s16*)(num+2);
if(exp<-4 || exp>=precision){
if(alternate)precision--;else precision=num[4]-1;
if(conversion=='g')conversion='e';else conversion='E';
goto scientific;
}
if(alternate)precision-=exp+1;
else {precision=num[4]-(exp+1);if(precision<0)precision=0;}
goto fixed;
case 'e':case 'E':
scientific:
if(num[4]>precision+1)func_02014880(num,precision+1);
exp=*(s16*)(num+2);j='+';i=0;
if(exp<0){exp=-exp;j='-';}
do{*--p='0'+exp%10;exp/=10;i++;}while(exp!=0 || i<2);
*--p=j;*--p=conversion;
if(precision+(end-p)>509)return 0;
pad='0';
if(num[4]<precision+1){i=precision+2-num[4];while(--i)*--p=pad;}
i=num[4];q=num+5+i;
while(--i)*--p=*--q;
if(precision||alternate)*--p='.';
*--p=num[5];
if(num[0])*--p='-';else if(sign==1)*--p='+';else if(sign==2)*--p=' ';
break;
case 'f':case 'F':
fixed:
exp=*(s16*)(num+2);j=num[4];
frac=j-exp-1;if(frac<0)frac=0;
if(frac>precision){
func_02014880(num,j-(frac-precision));
exp=*(s16*)(num+2);j=num[4];frac=j-exp-1;if(frac<0)frac=0;
}
whole=exp+1;if(whole<0)whole=0;
if(whole+frac>509)return 0;
q=num+5+j;
for(i=0;i<precision-frac;i++)*--p=pad;
pad='0';
for(i=0;i<frac && i<num[4];i++)*--p=*--q;
for(;i<frac;i++)*--p=pad;
if(precision||alternate)*--p='.';
if(whole){
for(i=0;i<whole-num[4];i++)*--p=pad;
for(;i<whole;i++)*--p=*--q;
}else *--p=pad;
if(num[0])*--p='-';else if(sign==1)*--p='+';else if(sign==2)*--p=' ';
break;
}
return p;
}

s32 func_02015950(Unk_02015950 *arg0, void *arg1, u32 arg2) {
    if (arg0->field_8 + arg2 > arg0->field_4) {
        arg2 = arg0->field_4 - arg0->field_8;
    }
    func_02013858(arg0->field_0 + arg0->field_8, arg1, arg2);
    arg0->field_8 += arg2;
    return 1;
}
