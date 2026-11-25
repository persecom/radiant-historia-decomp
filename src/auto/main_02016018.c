/* 13 functions from 0x02016018 to 0x02016FC4 (main), found by ds-decomp. */
#include "common.h"
#include "scan_02015.h"
extern const u16 data_0213eb14[];
extern f32 data_02145c2c;
u8 *func_02015b74(u8 *,ScanSpec_02015 *);
s32 func_02017f74(s32,s32,void *,void *,s32 *,s32 *,s32 *);
u64 func_0201843c(s32,s32,void *,void *,s32 *,s32 *,s32 *);
f64 func_02016fc4(s32,void *,void *,s32 *,s32 *);
s32 func_0201375c(void *,const void *,u32);
static inline s32 scan_byte_space_02016018(s32 c) { return (c<0 || c>=128) ? 0 : data_0213eb14[c]&0x100; }
static inline s32 scan_space_02016018(s32 c) { s32 outside=1; if(c>=0 && c<128) outside=0; return outside ? 0 : data_0213eb14[c]&0x100; }


extern s32 func_02016cfc(s32, const char *, char *);
extern s32 func_02016018(void *, void *, const char *, void *, s32);
extern void (*data_02160038)(void);
extern void func_02016da0(void);
s32 func_02016018(void *arg0, void *arg1, const char *arg2, void *arg3, s32 arg4) {
 s32 (*read)(void *,s32,s32)=arg0;
 const u8 *fmt=(const u8 *)arg2;
 u8 *args=arg3, *dst;
 s32 c=*fmt, raw=0;
 s32 signedValue=0;u32 unsignedValue=0;
 s64 signedWide=0;u64 unsignedWide=0;
 s32 capacityOK=0;u32 capacity=0;s32 failed=0;
 s32 total=0,assigned=0,conversions=0;
 s32 scanned,negative,overflow;
 u8 byte;
 ScanSpec_02015 spec;
 while(c) {
 if(scan_space_02016018(c)) {
 do {c=*++fmt;}while(scan_space_02016018(c));
 if(!failed) {
 while(scan_space_02016018(byte=read(arg1,0,0))) total++;
 if((s32)byte==-1) {if(!arg4)goto done; failed=1;}
 read(arg1,byte,1);
 }
 } else if(c!='%' && !failed) {
 byte=read(arg1,0,0);
 if(c!=byte) {failed=1;read(arg1,byte,1);if(!arg4)goto done;}
 else total++;
 fmt++;
 } else {
 fmt=func_02015b74((u8 *)fmt,&spec);
 if(!spec.suppress && spec.conversion!='%') {args+=4;dst=*(u8 **)(args-4);}else dst=0;
 if(spec.conversion!='n'&&!failed&&read(arg1,0,2)) {if(!arg4)goto done;failed=1;}
 switch((s32)spec.conversion) {
 case 'd': c=10;goto signed_number;
 case 'i': c=0;
 signed_number:
 if(failed) {signedValue=0;signedWide=0;}
 else {
 if(spec.length==7||spec.length==4) unsignedWide=func_0201843c(c,spec.width,arg0,arg1,&scanned,&negative,&overflow);
 else unsignedValue=func_02017f74(c,spec.width,arg0,arg1,&scanned,&negative,&overflow);
 if(!scanned) {if(!arg4)goto done;failed=1;signedValue=0;signedWide=0;}
 else {total+=scanned;
 if(spec.length==7||spec.length==4) signedWide=negative?-unsignedWide:unsignedWide;
 else signedValue=negative?-unsignedValue:unsignedValue;
 }
 }
 if(dst) {
 switch(spec.length) {
 case 0:*(s32 *)dst=signedValue;break;
 case 1:*(s8 *)dst=signedValue;break;
 case 2:*(s16 *)dst=signedValue;break;
 case 3:*(s32 *)dst=signedValue;break;
 case 4:*(s64 *)dst=signedWide;break;
 case 5:*(s32 *)dst=signedValue;break;
 case 6:*(s32 *)dst=signedValue;break;
 case 7:*(s64 *)dst=signedWide;break;
 }
 if(!failed)assigned++;
 }
 conversions++;break;
 case 'o':c=8;goto unsigned_number;
 case 'u':c=10;goto unsigned_number;
 case 'x':case 'X':c=16;
 unsigned_number:
 if(failed){unsignedValue=0;unsignedWide=0;}
 else {
 if(spec.length==7||spec.length==4)unsignedWide=func_0201843c(c,spec.width,arg0,arg1,&scanned,&negative,&overflow);
 else unsignedValue=func_02017f74(c,spec.width,arg0,arg1,&scanned,&negative,&overflow);
 if(!scanned){if(!arg4)goto done;failed=1;unsignedValue=0;unsignedWide=0;}
 else {total+=scanned;if(negative){if(spec.length==7)unsignedWide=-unsignedWide;else unsignedValue=-unsignedValue;}}
 }
 if(dst){
 switch(spec.length){
 case 0:*(u32 *)dst=unsignedValue;break;
 case 1:*(u8 *)dst=unsignedValue;break;
 case 2:*(u16 *)dst=unsignedValue;break;
 case 3:*(u32 *)dst=unsignedValue;break;
 case 4:*(u64 *)dst=unsignedWide;break;
 case 5:*(u32 *)dst=unsignedValue;break;
 case 6:*(u32 *)dst=unsignedValue;break;
 case 7:*(u64 *)dst=unsignedWide;break;
 }
 if(!failed)assigned++;
 }conversions++;break;
 case 'a':case 'A':case 'e':case 'E':case 'f':case 'F':case 'g':case 'G':{
 f64 value;
 if(failed)value=data_02145c2c;
 else {
 value=func_02016fc4(spec.width,arg0,arg1,&scanned,&overflow);
 if(!scanned) {if(!arg4)goto done;failed=1;value=data_02145c2c;}else total+=scanned;
 }
 if(dst) {
 switch(spec.length){case 0:*(f32 *)dst=value;break;case 8:*(f64 *)dst=value;break;case 9:*(f64 *)dst=value;break;}
 if(!failed)assigned++;
 }conversions++;break;
 }
 case 'c':
 if(!spec.hasWidth)spec.width=1;
 if(dst){
 u8 *start;
 if(arg4){args+=4;capacity=*(u32 *)(args-4);capacityOK=1;}
 scanned=0;
 if(failed){if(capacity) *dst=0;break;}
 start=dst;
 while(spec.width-- && (!arg4 || (capacityOK=capacity>(u32)scanned)) && (raw=read(arg1,0,0))!=-1) {
 byte=raw;
 if(spec.length!=10)*dst++=(u8)raw;else {func_0201375c(dst,&byte,1);dst+=2;}
 scanned++;
 }
 byte=raw;
 if(!scanned || (arg4&&!capacityOK)){
 if(!arg4)goto done;failed=1;if(capacity)*start=0;break;
 }
 total+=scanned;assigned++;
 }else{
 scanned=0;
 while(spec.width-- && (raw=read(arg1,0,0))!=-1){byte=raw;scanned++;}
 byte=raw;
 if(!scanned)goto done;
 }
 conversions++;break;
 case '%':
 if(!failed) {
 while(scan_space_02016018(byte=read(arg1,0,0)))total++;
 if(byte!='%'){failed=1;read(arg1,byte,1);if(!arg4)goto done;}
 else total++;
 }break;
 case 's':
 if(!failed) {
 while(scan_space_02016018(byte=read(arg1,0,0)))total++;
 read(arg1,byte,1);
 }
 case '[':
 if(dst) {
 u8 *start;
 if(arg4){args+=4;capacity=*(u32 *)(args-4)-1;capacityOK=1;}
 scanned=0;
 if(failed){if(capacity)*dst=0;break;}
 start=dst;
 while(spec.width-- && (!arg4 || (capacityOK=capacity>=(u32)scanned)) && (raw=read(arg1,0,0))!=-1) {
 byte=raw;
 if(!(spec.set[(u8)raw>>3] & (1<<((u8)raw&7))))break;
 if(spec.length!=10)*dst++=(u8)raw;else{func_0201375c(dst,&byte,1);dst+=2;}
 scanned++;
 }
 byte=raw;
 if(!scanned || (arg4&&!capacityOK)) {
 failed=1;read(arg1,(u8)raw,1);if(!arg4)goto done;if(capacity)*start=0;break;
 }
 total+=scanned;
 if(spec.length==10)*(u16 *)dst=0;else *dst=0;
 assigned++;
 }else {
 scanned=0;
 while(spec.width-- && (raw=read(arg1,0,0))!=-1) {
 byte=raw;
 if(!(spec.set[(u8)raw>>3] & (1<<((u8)raw&7))))break;
 scanned++;
 }
 byte=raw;
 if(!scanned){read(arg1,(u8)raw,1);break;}
 total+=scanned;
 }
 if(spec.width>=0)read(arg1,byte,1);
 conversions++;break;
 case 'n':
 if(dst)switch(spec.length){
 case 0:*(s32 *)dst=total;break;
 case 2:*(s16 *)dst=total;break;
 case 3:*(s32 *)dst=total;break;
 case 1:*(s8 *)dst=total;break;
 case 7:*(s64 *)dst=total;break;
 }break;
 default:goto done;
 }
 }
 c=*fmt;
 }
 done:
 if(read(arg1,0,2)&&!conversions)return -1;
 return assigned;
}

s32 func_02016c84(void *p, s32 ch, s32 act) {
    struct {
        u8 *str;
        s32 eof;
    } *isc = p;
    switch (act) {
        case 0: {
            u8 c = *isc->str;
            if (c == 0) {
                isc->eof = 1;
                return -1;
            } else {
                isc->str++;
                return c;
            }
        }
        case 1:
            if (isc->eof == 0) {
                isc->str--;
            } else {
                isc->eof = 0;
            }
            return ch;
        case 2:
            return isc->eof;
        default:
            return 0;
    }
}

s32 func_02016cfc(s32 s_arg, const char *fmt, char *arg) {
    const u8 *s = (const u8 *)s_arg;
    struct {
        const u8 *str;
        s32 eof;
    } isc;
    isc.str = s;
    if (s == NULL || *s == 0) {
        return -1;
    }
    isc.eof = 0;
    return func_02016018(func_02016c84, &isc, fmt, arg, 0);
}

void func_02016d50(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02016cfc(arg0, arg1, vlist);
}

void func_02016d78(s32 a, s32 b, s32 c) {
    void (*fn)(s32, s32, s32) = (void (*)(s32, s32, s32))data_02160038;
    if (fn != NULL) {
        fn(a, b, c);
    } else {
        func_02016da0();
    }
}

void func_02016da0(void) {
}

extern s32 func_02016018(void *, void *, const char *, void *, s32);
extern void (*data_02160038)(void);
extern void func_02016da0(void);
u32 func_02016da4(const char *s) {
    u32 len = (u32)-1;
    const u8 *p = (const u8 *)s;
    do {
        len++;
    } while (*p++);
    return len;
}

void func_02016dc0(u8 *dst, u8 *src) {
    u8 *p = dst;
    s32 c;
    u32 align = (u32)src & 3;
    if (((u32)dst & 3) != align) {
        goto tail;
    }
    if (align != 0) {
        u32 n;
        c = *src;
        *dst = c;
        if ((c & 0xff) == 0) {
            return;
        }
        n = 3 - align;
        if (n == 0) {
            goto word;
        }
        do {
            c = *++src;
            if ((c & 0xff) == 0) {
                *++p = c;
                return;
            }
            *++p = c;
        } while (--n != 0);
        src++;
        p++;
    }
word:
    {
        u32 w = *(u32 *)src;
        u32 *wp;
        u32 *ws;
        if (((w + 0xfefefeffu) & ~w & 0x80808080u) != 0) {
            goto tail;
        }
        wp = (u32 *)p - 1;
        ws = (u32 *)src;
        do {
            *++wp = w;
            w = *++ws;
        } while (((w + 0xfefefeffu) & ~w & 0x80808080u) == 0);
        p = (u8 *)(wp + 1);
        src = (u8 *)ws;
    }
tail:
    do {
        c = *src;
        *p = c;
        if ((c & 0xff) == 0) {
            return;
        }
        c = *++src;
        *++p = c;
    } while ((c & 0xff) != 0);
}

char *func_02016e88(char *dst, const char *src, u32 n) {
    const u8 *p = (const u8 *)src;
    u8 *q = (u8 *)dst;
    while (n) {
        if (!(*q++ = *p++)) {
            while (--n) {
                *q++ = 0;
            }
            break;
        }
        n--;
    }
    return dst;
}

char *func_02016ed8(char *dst, const char *src) {
    const u8 *p = (const u8 *)src;
    u8 *q = (u8 *)dst;
    while (*q++) {}
    q--;
    while ((*q++ = *p++) != 0) {}
    return dst;
}

char *func_02016f08(char *dst, const char *src, u32 n) {
    const u8 *p = (const u8 *)src;
    u8 *q = (u8 *)dst;
    while (*q++) {}
    q--;
    while (n) {
        if (!(*q++ = *p++)) {
            q--;
            break;
        }
        n--;
    }
    *q = 0;
    return dst;
}

s32 func_02016f58(const char *str1, const char *str2, u32 n) {
    const u8 *p1 = (const u8 *)str1;
    const u8 *p2 = (const u8 *)str2;
    u8 c1, c2;
    while (n) {
        c2 = *p2++;
        c1 = *p1++;
        if (c1 != c2) {
            return c1 - c2;
        }
        if (c1 == 0) {
            break;
        }
        n--;
    }
    return 0;
}

char *func_02016f8c(const char *str, s32 chr) {
    const u8 *p = (const u8 *)str;
    u8 c = (u8)chr;
    u8 ch;
    while ((ch = *p++) != 0) {
        if (ch == c) {
            return (char *)(p - 1);
        }
    }
    return c ? NULL : (char *)(p - 1);
}

