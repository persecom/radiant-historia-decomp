/* 5 functions from 0x020139A4 to 0x02014994 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_02145e54[],data_02145e5c[],data_02145e64[],data_02145e68[],data_02145e6c[],data_02145e74[],data_02145e7c[],data_02145e80[];
extern void func_02019580(void *,double,void *);
extern double func_0201e014(double);
extern char *strcpy(char *,const char *);
typedef struct { u8 c[5]; } FormatText5;
typedef struct { u8 c[4]; } FormatText4;
static inline u8 *copy_format5(u8 *d,const u8 *s) { *(FormatText5 *)d=*(const FormatText5 *)s;return d; }
static inline u8 *copy_format4(u8 *d,const u8 *s) { *(FormatText4 *)d=*(const FormatText4 *)s;return d; }

typedef struct {
    u8 padding, sign, unk2, alternate, unk4, conversion;
    u16 unk6;
    s32 width, precision;
} FormatSpec;

u8 *func_02013eb0(s32 value, u8 *end, FormatSpec spec) {
    u32 base;
    u8 *p = end;
    s32 negative = 0;
    s32 count = 0;
    s32 precision = spec.precision;
    u32 width;
    s32 alternate = spec.alternate;
    s32 conversion = spec.conversion;
    s32 sign = spec.sign;
    width = spec.width;
    *--p = 0;
    if (value == 0 && precision == 0) {
        if (!alternate || conversion != 'o') return p;
    }
    switch (conversion) {
    case 'd': case 'i':
        base = 10;
        if (value < 0) {
            if ((s64)value != (-9223372036854775807LL - 1)) value = -value;
            negative = 1;
        }
        break;
    case 'o': base = 8; sign = 0; break;
    case 'u': base = 10; sign = 0; break;
    case 'x': case 'X': base = 16; sign = 0; break;
    }
    do {
        s32 digit = (u32)value % base;
        value = (u32)value / base;
        if (digit < 10) digit += '0';
        else if (conversion == 'x') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
        count++;
    } while (value != 0);
    if (base == 8 && alternate && *p != '0') {
        *--p = '0'; count++;
    }
    if (spec.padding == 2) {
        precision = width;
        if (negative || sign) precision--;
        if (base == 16 && alternate) precision -= 2;
    }
    if (precision + (end - p) > 509) return 0;
    while (count < precision) { *--p = '0'; count++; }
    if (base == 16 && alternate) { *--p = conversion; *--p = '0'; }
    if (negative) *--p = '-';
    else if (sign == 1) *--p = '+';
    else if (sign == 2) *--p = ' ';
    return p;
}

u8 *func_02014100(s64 value, u8 *end, FormatSpec spec) {
    u64 base;
    u8 *p = end;
    s32 negative = 0;
    s32 count = 0;
    s32 precision = spec.precision;
    s32 sign;
    u32 width;
    s32 alternate;
    s32 conversion;
    alternate=spec.alternate;
    width = spec.width;
    sign=spec.sign;
    conversion=spec.conversion;
    *--p = 0;
    if (value == 0 && precision == 0) {
        if (!alternate || conversion != 'o') return p;
    }
    switch (conversion) {
    case 'd': case 'i':
        base = 10;
        if (value < 0) {
            if ((s64)value != (-9223372036854775807LL - 1)) value = -value;
            negative = 1;
        }
        break;
    case 'o': base = 8; sign = 0; break;
    case 'u': base = 10; sign = 0; break;
    case 'x': case 'X': base = 16; sign = 0; break;
    }
    do {
        s32 digit = (u64)value % base;
        value = (u64)value / base;
        if (digit < 10) digit += '0';
        else if (conversion == 'x') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
        count++;
    } while (value != 0);
    if (base == 8 && alternate && *p != '0') {
        *--p = '0'; count++;
    }
    if (spec.padding == 2) {
        precision = width;
        if (negative || sign) precision--;
        if (base == 16 && alternate) precision -= 2;
    }
    if (precision + (end - p) > 509) return 0;
    while (count < precision) { *--p = '0'; count++; }
    if (base == 16 && alternate) { *--p = conversion; *--p = '0'; }
    if (negative) *--p = '-';
    else if (sign == 1) *--p = '+';
    else if (sign == 2) *--p = ' ';
    return p;
}

u8 *func_020143d4(double value,u8 *end,FormatSpec spec){
double original=value;
u8 fmt[4];
FormatSpec dec;
u8 num[40];
s32 sign;
s32 conversion;
s32 precision;
u8 *p=0;
s32 exponent;
s32 i;
s32 bit;
s32 alternate;
u8 digit;
precision=spec.precision;conversion=spec.conversion;alternate=spec.alternate;sign=spec.sign;
u8 *bytes;
if(precision>509)return p;
p=end;
fmt[0]=0;exponent=32;*(u16 *)(fmt+2)=exponent;
func_02019580(fmt,original,num);
switch(num[5]){
case '0':*(s16 *)(num+2)=0;break;
case 'I':
if(num[0]){
p=(u8 *)((u32)p-5);if(conversion=='A'){*(FormatText5 *)p=*(FormatText5 *)data_02145e54;return p;}else {*(FormatText5 *)p=*(FormatText5 *)data_02145e5c;return p;}
}
p=(u8 *)((u32)p-4);if(conversion=='A'){*(FormatText4 *)p=*(FormatText4 *)data_02145e64;return p;}else {*(FormatText4 *)p=*(FormatText4 *)data_02145e68;return p;}
case 'N':
if(num[0]){
p=(u8 *)((u32)p-5);if(conversion=='A'){*(FormatText5 *)p=*(FormatText5 *)data_02145e6c;return p;}else {*(FormatText5 *)p=*(FormatText5 *)data_02145e74;return p;}
}
p=(u8 *)((u32)p-4);if(conversion=='A'){*(FormatText4 *)p=*(FormatText4 *)data_02145e7c;return p;}else {*(FormatText4 *)p=*(FormatText4 *)data_02145e80;return p;}
}
dec.padding=1;dec.sign=1;dec.unk2=0;dec.alternate=0;dec.unk4=0;dec.width=0;dec.precision=1;dec.conversion='d';
bytes=(u8 *)&value;
for(i=0;i<4;i++){u8 temp=bytes[i];bytes[i]=bytes[7-i];bytes[7-i]=temp;}
exponent=(((u32)((u8 *)&value)[1]<<17)|((u32)((u8 *)&value)[0]<<25))>>21;
exponent&=0x7ff;
if(exponent)exponent+=-1023;else exponent=0;
p=func_02013eb0(exponent,end,dec)-1;
if(conversion=='a')*p='p';else *p='P';
bytes=(u8 *)&value;
for(i=precision,bit=precision*4+11;i>=1;i--,bit-=4){
if(bit<64){
digit=bytes[bit>>3]>>(7-(bit&7));
if((bit&~7)!=((bit-4)&~7))digit|=(u8)((bytes[(bit>>3)-1]<<8)>>(7-(bit&7)));
digit&=15;
if(digit<10)digit+='0';else if(conversion=='a')digit+=87;else digit+=55;
}else digit='0';
*--p=digit;
}
if(precision||alternate)*--p='.';
*--p=func_0201e014(original)!=0.0?'1':'0';
if(conversion=='a')*--p='x';else *--p='X';
*--p='0';
if(num[0])*--p='-';else if(sign==1)*--p='+';else if(sign==2)*--p=' ';
return p;
}

