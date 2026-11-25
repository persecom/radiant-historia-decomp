/* 3 functions from 0x02014994 to 0x02015994 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_02145e84[],data_02145e88[];
extern u8 *func_02016f8c(const u8 *,int);
extern int func_02016da4(const u8 *);
extern u8 *func_020139a4(u8 *,u8 **,void *);
extern void func_02016d78(int,int,int);
extern int func_020137e0(u8 *,void *,int);
extern u8 *func_0201388c(u8 *,int,int);
typedef struct { u8 padding,sign,unk2,alternate,unk4,conversion; u16 unk6; s32 width,precision; } FormatSpec;
typedef struct { u8 sign,pad; s16 exponent; u8 length; u8 digits[35]; } Decimal_02014994;
static inline int format_secure(int v) { return v; }
static inline int format_arg_ptrdiff(u8 **p) { *p+=4;return *(int *)(*p-4); }
static inline unsigned int format_arg_size(u8 **p) { *p+=4;return *(unsigned int *)(*p-4); }
static inline long format_arg_long(u8 **p) { *p+=4;return *(long *)(*p-4); }
static inline int format_arg_int(u8 **p) { *p+=4;return *(int *)(*p-4); }
static inline unsigned long format_arg_ulong(u8 **p) { *p+=4;return *(unsigned long *)(*p-4); }
static inline unsigned int format_arg_uint(u8 **p) { *p+=4;return *(unsigned int *)(*p-4); }
static inline long long format_arg_ll(u8 **p) { *p+=8;return *(long long *)(*p-8); }
static inline unsigned long long format_arg_ull(u8 **p) { *p+=8;return *(unsigned long long *)(*p-8); }
static inline double format_arg_double(u8 **p) { *p+=8;return *(double *)(*p-8); }
static inline long double format_arg_ldouble(u8 **p) { *p+=8;return *(long double *)(*p-8); }
typedef struct { u8 c[5]; } FormatText5;
typedef struct { u8 c[4]; } FormatText4;
static inline void format_copy5(u8 *dst,u8 *src) { *(FormatText5*)dst=*(FormatText5*)src; }
static inline void format_copy4(u8 *dst,u8 *src) { *(FormatText4*)dst=*(FormatText4*)src; }
extern u8 data_02145e54[],data_02145e5c[],data_02145e64[],data_02145e68[],data_02145e6c[],data_02145e74[],data_02145e7c[],data_02145e80[];
extern const u16 data_0213eb14[];
static inline s32 format_upper(s32 c) { if ((u32)c>=128) return 0; return data_0213eb14[c]&0x200; }
extern void func_02019580(void *,double,void *);
extern void func_02014880(u8 *,s32);

typedef struct {
    u8 *field_0;
    u32 field_4;
    u32 field_8;
} Unk_02015950;
extern void func_02013858(u8 *, void *, s32);

u8 *func_02014994(double value,u8 *end,FormatSpec spec) {
u8 fmt[4]; Decimal_02014994 num;
s32 sign,alternate,conversion,precision;
precision=spec.precision;conversion=spec.conversion;alternate=spec.alternate;sign=spec.sign;
u8 *p=0,*q;
s32 zero=0,pad=32,i,j,whole,frac,exp;
if(precision>509)return p;
fmt[0]=0;*(s16*)(fmt+2)=pad;
func_02019580(fmt,value,&num);
q=num.digits+num.length;
while(num.length>1 && *--q=='0'){num.length--;(num.exponent)++;}
pad='0';
switch(num.digits[0]){
case '0':num.exponent=0;break;
case 'I':
if(value<0.0){p=(u8*)((u32)end-5);if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText5*)p=*(FormatText5*)data_02145e54;return p;}else{*(FormatText5*)p=*(FormatText5*)data_02145e5c;return p;}}
p=(u8*)((u32)end-4);if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText4*)p=*(FormatText4*)data_02145e64;return p;}else{*(FormatText4*)p=*(FormatText4*)data_02145e68;return p;}
case 'N':
if(num.sign){p=(u8*)((u32)end-5);if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText5*)p=*(FormatText5*)data_02145e6c;return p;}else{*(FormatText5*)p=*(FormatText5*)data_02145e74;return p;}}
p=(u8*)((u32)end-4);if((u32)conversion>=128?0:data_0213eb14[conversion]&0x200){*(FormatText4*)p=*(FormatText4*)data_02145e7c;return p;}else{*(FormatText4*)p=*(FormatText4*)data_02145e80;return p;}

}
num.exponent+=(s16)(num.length-1);
p=end;*--p=0;
switch(conversion){
case 'g':case 'G':
if(num.length>precision)func_02014880((u8*)&num,precision);
exp=num.exponent;
if(exp<-4 || exp>=precision){
if(alternate)precision--;else precision=num.length-1;
if(conversion=='g')conversion='e';else conversion='E';
goto scientific;
}
if(alternate)precision-=exp+1;
else {precision=num.length-(exp+1);if(precision<0)precision=0;}
goto fixed;
case 'e':case 'E':
scientific:
if(num.length>precision+1)func_02014880((u8*)&num,precision+1);
exp=num.exponent;j='+';i=0;
if(exp<0){exp=-exp;j='-';}
while(exp!=0 || i<2){*--p='0'+exp%10;exp/=10;i++;}
*--p=j;*--p=conversion;
if(precision+(end-p)>509)return 0;
pad='0';
if(num.length<precision+1){i=precision+2-num.length;while(--i)*--p=pad;}
i=num.length;q=num.digits+i;
while(--i)*--p=*--q;
if(precision||alternate)*--p='.';
*--p=num.digits[0];
if(num.sign)*--p='-';else if(sign==1)*--p='+';else if(sign==2)*--p=' ';
break;
case 'f':case 'F':
fixed:
exp=num.exponent;j=num.length;
frac=j-exp-1;if(frac<0)frac=0;
if(frac>precision){
func_02014880((u8*)&num,j-(frac-precision));
exp=num.exponent;j=num.length;frac=j-exp-1;if(frac<0)frac=0;
}
whole=exp+1;if(whole<0)whole=0;
if(whole+frac>509)return 0;
q=num.digits+j;
for(i=0;i<precision-frac;i++)*--p=pad;
pad='0';
for(i=0;i<frac && i<num.length;i++)*--p=*--q;
for(;i<frac;i++)*--p=pad;
if(precision||alternate)*--p='.';
if(whole){
for(i=0;i<whole-num.length;i++)*--p=pad;
for(;i<whole;i++)*--p=*--q;
}else *--p=pad;
if(num.sign)*--p='-';else if(sign==1)*--p='+';else if(sign==2)*--p=' ';
break;
}
return p;
}

u8 *func_02014100(s64, u8 *, FormatSpec);
u8 *func_02013eb0(s32, u8 *, FormatSpec);
u8 *func_020143d4(double, u8 *, FormatSpec);
s32 func_020150a4(s32 (*write)(void *, const u8 *, u32),void *ctx,const u8 *fmt,u8 *ap,s32 secure) {
    u8 buf[512];
    FormatSpec spec;
    u8 pad=' ';
    u8 space;
    s64 wide;
    s32 value;
    s32 total=0,field;
    s32 len;
    u8 *text,*mark;
    long double v;
    secure=secure;
    while(*fmt) {
        mark=func_02016f8c(fmt,'%');
        if(!mark) {
            len=func_02016da4(fmt);
            total+=len;
            if(len && !write(ctx,fmt,len))return -1;
            break;
        }
        len=mark-fmt;
        total+=len;
        if(len && !write(ctx,fmt,len))return -1;
        fmt=func_020139a4(mark,&ap,&spec);
        switch(spec.conversion) {
case 255:goto invalid;

        case 'd':case 'i':
            if(spec.unk4==3) {value=format_arg_long(&ap);}
            else if(spec.unk4==4) {wide=format_arg_ll(&ap);}
            else if(spec.unk4==6) {wide=format_arg_ll(&ap);}
            else if(spec.unk4==7) {value=format_arg_ptrdiff(&ap);}
            else if(spec.unk4==8) {value=format_arg_long(&ap);}
            else {value=format_arg_int(&ap);}
            if(spec.unk4==2)value=(s16)value;
            if(spec.unk4==1)value=(s8)value;
            if(spec.unk4==4 || spec.unk4==6) {text=func_02014100(wide,buf+512,spec);if(!text)goto invalid;}
            else {text=func_02013eb0(value,buf+512,spec);if(!text)goto invalid;}
            len=buf+511-text;
            break;
        case 'o':case 'u':case 'x':case 'X':
            if(spec.unk4==3) {value=format_arg_ulong(&ap);}
            else if(spec.unk4==4) {wide=format_arg_ull(&ap);}
            else if(spec.unk4==6) {wide=format_arg_ull(&ap);}
            else if(spec.unk4==7) {value=format_arg_ptrdiff(&ap);}
            else if(spec.unk4==8) {value=format_arg_long(&ap);}
            else {value=format_arg_uint(&ap);}
            if(spec.unk4==2)value=(u16)value;
            if(spec.unk4==1)value=(u8)value;
            if(spec.unk4==4 || spec.unk4==6) {text=func_02014100(wide,buf+512,spec);if(!text)goto invalid;}
            else {text=func_02013eb0(value,buf+512,spec);if(!text)goto invalid;}
            len=buf+511-text;
            break;
        case 'f':case 'F':case 'e':case 'E':case 'g':case 'G': {
            if(spec.unk4==9) {v=format_arg_ldouble(&ap);}
            else {v=format_arg_double(&ap);}
            text=func_02014994(v,buf+512,spec);
            if(!text)goto invalid;
            len=buf+511-text;break;
        }
        case 'a':case 'A': {
            if(spec.unk4==9) {v=format_arg_ldouble(&ap);}
            else {v=format_arg_double(&ap);}
            text=func_020143d4(v,buf+512,spec);
            if(!text)goto invalid;
            len=buf+511-text;break;
        }
        case 's':
            if(spec.unk4==5) {
                u8 *str;
                ap+=4;str=*(u8 **)(ap-4);
                if(secure && !str) {total=-1;func_02016d78(0,0,total);return total;}
                if(!str)str=data_02145e84;
                text=buf;
                if(func_020137e0(text,str,512)<0)goto invalid;
            } else {ap+=4;text=*(u8 **)(ap-4);}
            if(secure && !text) {total=-1;func_02016d78(0,0,total);return total;}
            if(!text)text=data_02145e88;
            if(spec.alternate) {
                len=*text++;
                if(spec.unk2 && len>spec.precision)len=spec.precision;
            } else if(spec.unk2) {
                u8 *end;
                len=spec.precision;
                end=func_0201388c(text,0,len);
                if(end)len=end-text;
            } else len=func_02016da4(text);
            break;
        case 'n': {
            void *ptr;
            ap+=4;ptr=*(void **)(ap-4);
            if(secure) {total=-1;func_02016d78(0,0,total);return total;}
            switch(spec.unk4) {
            case 0:*(int *)ptr=total;break;
            case 2:*(short *)ptr=total;break;
            case 3:*(long *)ptr=total;break;
            case 6:*(long long *)ptr=total;break;
            case 7:*(int *)ptr=total;break;
            case 8:*(int *)ptr=total;break;
            case 4:*(long long *)ptr=total;break;
            }
            continue;
        }
        case 'c':
            ap+=4;buf[0]=*(int *)(ap-4);text=buf;len=1;break;
        case '%':
            buf[0]='%';text=buf;len=1;break;
        default:
        invalid:
            len=func_02016da4(mark);total+=len;
            if(len && !write(ctx,mark,len))return -1;
            return total;
        }
        field=len;
        if(spec.padding) {
            pad=spec.padding==2?'0':' ';
            if((*text=='+' || *text=='-' || *text==' ') && pad=='0') {
                if(!write(ctx,text,1))return -1;
                text++;len--;
            }
            if(spec.padding==2 && (spec.conversion=='a'||spec.conversion=='A')) {
                if(len<2)return -1;
                if(!write(ctx,text,2))return -1;
                len-=2;text+=2;
            }
            while(field<spec.width) {
                if(!write(ctx,&pad,1))return -1;
                field++;
            }
        }
        if(len && !write(ctx,text,len))return -1;
        if(!spec.padding) {
            while(field<spec.width) {
                space=' ';
                if(!write(ctx,&space,1))return -1;
                field++;
            }
        }
        total+=field;
    }
    return total;
}

s32 func_02015950(Unk_02015950 *arg0, void *arg1, u32 arg2) {
    if (arg0->field_8 + arg2 > arg0->field_4) {
        arg2 = arg0->field_4 - arg0->field_8;
    }
    func_02013858(arg0->field_0 + arg0->field_8, arg1, arg2);
    arg0->field_8 += arg2;
    return 1;
}
