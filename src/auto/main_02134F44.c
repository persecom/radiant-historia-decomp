/* 35 functions from 0x02134F44 to 0x02135F40 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021759b4[256];
extern u32 data_021759ac[2];
extern void func_02013878(void *, s32, u32);
extern void func_0213689c(void *);
extern s32 func_02134c94(u8 *);
extern void func_02134f44(u8 *);
extern s32 func_02134edc(u8 *);
extern s32 func_02136930(void *);
extern void func_02134cb4(u8 *, s32, s32);
extern s32 func_02135920();
extern s32 func_02135960(u8 *, s32, s32);
extern void func_02135984(u8 *, s32, s32);
extern u8 data_02175ab8[];
extern void func_021147e8(void *, s32, s32);
extern void func_0211470c(void *);
extern void func_02135f0c(void *, u16 *, u16 *);

typedef struct {
    s8 field_0;
    u8 field_1[0xab];
} Unk_021756d8;
extern Unk_021756d8 data_021756d8[4];

extern void func_0213807c(void);
void func_02013858(void *,void *,s32);
void func_0212761c(s16 *,s32,s16 *,s32);
u16 func_02135f7c(u8 *,u32,u16 *);
void func_02136138(void *,void *,u16);
void func_02135abc(u8 *,s16 *,s32);
void func_02135b1c(u8 *,s16 *,s32,s16 **);
void func_02137f80(void *,s32,void *,void *);
#pragma push
#pragma opt_tail_merge off
#pragma scheduling off
void func_02134f44(u8 *arg0){
struct {s16 *ptr;s32 len;} buf[2],rem[2];
s16 *out[2];
u16 count,ca,cb;
register u32 used;
register u32 samples;
register s32 len;
register u32 consumed;
register s16 *src=0;
register s32 n;
register u8 *p=arg0;
u32 ua,ub; u32 zero;
u16 i;
if(*(s8 *)(p+3)==1){
len=*(u16 *)(p+0x2c);
if((u32)len>=6){buf[0].ptr=0;src=*(s16 **)(p+0x28)+*(u16 *)(p+0x2e);}
else {
n=(*( s32 (**)(void *, s32))(*(u8 **)(*(void **)(p+0x10+0*4))+0x24))(*(void **)(p+0x10+0*4),1);
if(n>0){
(*( void (**)(void *, s32, s32, void *))(*(u8 **)(*(void **)(p+0x10+0*4))+0x18))(*(void **)(p+0x10+0*4),1,n,&buf[0]);
src=buf[0].ptr;len=buf[0].len;
if(p[5]){
if(n>=*(u16 *)(p+0x32)*2){
samples=*(u16 *)(p+0x32);
if(len>=(s32)(samples<<1))consumed=(u16)(samples*2);
else{
func_02013858(*(void **)((u8 *)data_021756d8+0x2b0),src,len);
(*( void (**)(void *, s32, void *))(*(u8 **)(*(void **)(p+0x10+0*4))+0x20))(*(void **)(p+0x10+0*4),0,&buf[0]);
consumed=(u16)((u32)samples*2-len);
(*( void (**)(void *, s32, s32, void *))(*(u8 **)(*(void **)(p+0x10+0*4))+0x18))(*(void **)(p+0x10+0*4),1,consumed,&buf[0]);
func_02013858(*(s16 **)((u8 *)data_021756d8+0x2b0)+len/2,buf[0].ptr,buf[0].len);
src=*(s16 **)((u8 *)data_021756d8+0x2b0);len=buf[0].len;
}
}else if(p[1]&4){samples=len/2;consumed=(u16)len;}else{src=0;len=0;consumed=0;}
if(len){
s32 size=((s32)(samples*p[5])/100)&~3;
len=size*2;
func_0212761c(src,samples,*(s16 **)(p+0x28)+*(u16 *)(p+0x30),size);
src=(s16 *)((u32)*(s16 **)(p+0x28)+2*(u32)*(u16 *)(p+0x2e));
*(u16 *)(p+0x30)+=(u16)size;
*(u16 *)(p+0x2c)+=(u16)len;

}
}
}else{
len=*(u16 *)(p+0x2c);if(len==0)return;
src=*(s16 **)(p+0x28)+*(u16 *)(p+0x2e);buf[0].ptr=0;
}
}
zero=0;
if(*(s8 *)(p+2)==2 && *(s8 *)(p+4)>=1){
used=func_02135f7c(*(u8 **)(p+0x20),len,&ca);
ub=func_02135f7c(*(u8 **)(p+0x24),len,&cb);
if(used>ub){used=ub;count=cb;}else{count=ca;}
if(count){
if(*(u16 *)(p+0x98)){
func_02135abc(p,src,used>>1);func_02135b1c(p,src,used>>1,out);
func_02136138(*(void **)(p+0x20),out[0],count);func_02136138(*(void **)(p+0x24),out[1],count);
}else{func_02136138(*(void **)(p+0x20),src,count);func_02136138(*(void **)(p+0x24),src,count);}
}
}else{
used=func_02135f7c(*(u8 **)(p+0x20),len,&count);
if(count)func_02136138(*(void **)(p+0x20),src,count);
}
if(p[5]){
if(*(u16 *)(p+0x2c)){
*(u16 *)(p+0x2c)-=used;*(u16 *)(p+0x2e)+=(u16)(used>>1);
if(*(u16 *)(p+0x2c)<6){
if(*(u16 *)(p+0x2c))func_02013858(*(void **)(p+0x28),*(s16 **)(p+0x28)+*(u16 *)(p+0x2e),*(u16 *)(p+0x2c));
*(u16 *)(p+0x2e)=zero;*(u16 *)(p+0x30)=(u32)*(u16 *)(p+0x2c)>>1;
}
}
}else consumed=used;
}else{
n=(*( s32 (**)(void *, s32))(*(u8 **)(*(void **)(p+0x10+0*4))+0x24))(*(void **)(p+0x10+0*4),1);
len=(*( s32 (**)(void *, s32))(*(u8 **)(*(void **)(p+0x10+1*4))+0x24))(*(void **)(p+0x10+1*4),1);
(*( void (**)(void *, s32, s32, void *))(*(u8 **)(*(void **)(p+0x10+0*4))+0x18))(*(void **)(p+0x10+0*4),1,n,&buf[0]);
(*( void (**)(void *, s32, s32, void *))(*(u8 **)(*(void **)(p+0x10+1*4))+0x18))(*(void **)(p+0x10+1*4),1,len,&buf[1]);
ua=func_02135f7c(*(u8 **)(p+0x20),buf[0].len,&ca);
ub=func_02135f7c(*(u8 **)(p+0x24),buf[1].len,&cb);
if(ua>ub){consumed=ub;count=cb;}else{consumed=ua;count=ca;}
if(count){func_02136138(*(void **)(p+0x20),buf[0].ptr,count);func_02136138(*(void **)(p+0x24),buf[1].ptr,count);}
}
if(buf[0].ptr){
for(i=0;i<*(s8 *)(p+3);i++){
if(consumed==buf[i].len){(*( void (**)(void *, s32, void *))(*(u8 **)(*(void **)(p+(u32)i*4+0x10))+0x20))(*(void **)(p+(u32)i*4+0x10),0,&buf[i]);}
else if(consumed==0){(*( void (**)(void *, s32, void *))(*(u8 **)(*(void **)(p+(u32)i*4+0x10))+0x1c))(*(void **)(p+(u32)i*4+0x10),1,&buf[i]);}
else{
func_02137f80(&buf[i],consumed,&buf[i],&rem[i]);
(*( void (**)(void *, s32, void *))(*(u8 **)(*(void **)(p+(u32)i*4+0x10))+0x20))(*(void **)(p+(u32)i*4+0x10),0,&buf[i]);
(*( void (**)(void *, s32, void *))(*(u8 **)(*(void **)(p+(s32)i*4+0x10))+0x1c))(*(void **)(p+(s32)i*4+0x10),1,&rem[i]);
}
}
}
}
#pragma scheduling on
#pragma pop
void func_0213545c(u8 *arg0) {
    s32 i = 0;
    s32 n = ((s8)arg0[4] >= 1 && (s8)arg0[3] == 1 && (s8)arg0[2] == 2) ? 2 : (s8)arg0[3];
    for (; i < n; i++) {
        func_0213689c(((void **)(arg0 + 0x20))[i]);
    }
}

void func_021354ac(u8 *arg0) {
    if (func_02134c94(arg0) == 1) {
        func_02134f44(arg0);
        return;
    }
    if (func_02134edc(arg0) != 1) {
        return;
    }
    if (*(u16 *)(arg0 + 0x2c) != 0) {
        func_02134f44(arg0);
    } else {
        func_0213545c(arg0);
    }
    if (func_02136930(*(void **)(arg0 + 0x20)) != 0) {
        return;
    }
    arg0[6] = 0;
    func_02134cb4(arg0, 0, 0);
}

void func_0213551c(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_021756d8[i].field_0 == 1) {
            func_021354ac((u8 *)&data_021756d8[i]);
        }
    }
}

void func_02135558(u8 *arg0, u8 arg1) {
    if (arg0 != 0) {
        arg0[3] = arg1;
    }
}

extern u8 data_0215be8c[];
extern s16 func_02135d94(u8 *);
extern void func_02135c8c(void *);
extern s32 func_02135e18(void *, s32);
void func_02135564(u8 *arg0, s32 arg1) {
    s32 i;
    if (arg0 == NULL) {
        return;
    }
    if (func_02135d94(*(u8 **)(arg0 + 0x20)) == 0) {
        arg0[7] = 0;
    } else if (arg1 == 0x7fd8) {
        arg0[7] = 0;
    } else if (arg1 == 0xffb || arg1 == 0x1ff6 || arg1 == 0x3fec || arg1 == 0x2ff1 || arg1 == 0x5fe2 || arg1 == 0x4fe7) {
        arg0[7] = arg1 / 4091;
    } else if (arg1 == 0x553a) {
        arg0[7] = 9;
    } else {
        arg0[7] = 0;
        func_02135c8c(data_0215be8c);
    }
    for (i = 0; i < *(s8 *)(arg0 + 2); i++) {
        *(u16 *)(arg0 + 0xc) = func_02135e18(*(void **)(arg0 + 0x20 + i * 4), arg1);
    }
}

void func_02135650(u8 *arg0) {
    s32 i;
    if (arg0 == NULL) {
        return;
    }
    func_02135920();
    for (i = 0; i < *(s8 *)(arg0 + 2); i++) {
        func_02135960(arg0, i, 0);
    }
}

void func_02135698(u8 *arg0, s32 arg1, s32 arg2) {
 s32 val;
 if(arg0 == NULL || arg1 >= *(s8 *)(arg0+2)) return;
 if(arg2 >= 15) arg2=15;
 val=(s16)arg2;
 if(-15 >= val) val=-15;
 ((s16 *)(arg0+0x1a))[arg1]=val;
 if(*(volatile s8 *)(arg0+4)>=1 && *(s8 *)(arg0+3)==1 && *(s8 *)(arg0+2)==2) {
 func_02135984(arg0,0,-15); func_02135984(arg0,1,15);
 } else { func_02135984(arg0,arg1,*(s16 *)(arg0+arg1*2+0x1a)); }
}

void func_02135724(u16 *arg0, u16 arg1) {
    if (arg0 != 0) {
        arg0[7] = arg1;
    }
}

void func_02135730(u8 *arg0) {
    if (arg0 != NULL) {
        arg0[1] |= 4;
    }
}

s32 func_02135744(u8 *arg0) {
    return (arg0[1] & 8) == 8;
}

extern void func_0212a9dc(void);
extern void func_0212a9e8(void);
extern void func_02114728(u8 *, s16);
void func_0213575c(u8 *arg0, s32 arg1) {
    u8 val;
    if (arg0 == NULL) {
        return;
    }
    val = arg0[6];
    if (arg1 == ((arg0[1] & 8) == 8)) {
        return;
    }
    func_0212a9dc();
    arg0[1] = (arg0[1] & ~8) | (arg1 << 3);
    func_0212a9e8();
    if (val != 2) {
        return;
    }
    if (arg1 == 1) {
        func_02134cb4(arg0, 0, 0);
    } else {
        func_02134cb4(arg0, 1, 0);
    }
}

void func_021357dc(u8 **arg0, u8 arg1) {
    arg0[3][4] = arg1;
}

void func_021357e8(s32 arg0, s32 count, s32 arg2, u32 arg3, s32 arg4, u8 **arg5) {
    s32 i = 0;
    s32 flag = 0;

    while (i < count) {
        if (arg0 == 1) {
            *(u32 *)(arg5[i + 8] + 0xc) += arg3;
            if (*(u16 *)(arg5[i + 8] + 0x1c) != 0) {
                if (arg3 > *(u16 *)(arg5[i + 8] + 0x1c)) {
                    arg3 = *(u16 *)(arg5[i + 8] + 0x1c);
                }
                *(u16 *)(arg5[i + 8] + 0x1c) -= (u16)arg3;
                *(u32 *)(arg5[i + 8] + 0x14) += arg3 >> 1;
            }
            if ((*(u16 *)(arg5[i + 8] + 0) & 2) == 0) {
                if (*(u32 *)(arg5[i + 8] + 0x10) < *(u32 *)(arg5[i + 8] + 0xc)) {
                    if (*(u32 *)(arg5[i + 8] + 0xc) - *(u32 *)(arg5[i + 8] + 0x10) < 0x80000000U) {
                        flag = 1;
                    }
                } else {
                    if (*(u32 *)(arg5[i + 8] + 0x10) - *(u32 *)(arg5[i + 8] + 0xc) >= 0x80000000U) {
                        flag = 1;
                    }
                }
                if (flag != 0) {
                    *(u16 *)(arg5[i + 8] + 0x1a) = (u16)(*(u32 *)(arg5[i + 8] + 0xc) % 0x1800U);
                    *(u32 *)(arg5[i + 8] + 0x10) = *(u32 *)(arg5[i + 8] + 0xc);
                }
            }
        } else {
            *(u32 *)(arg5[i + 8] + 0xc) += arg3;
            *(u16 *)(arg5[i + 8] + 0x1a) = (u16)(*(u32 *)(arg5[i + 8] + 0xc) % 0x1800U);
            *(u32 *)(arg5[i + 8] + 0x10) = *(u32 *)(arg5[i + 8] + 0xc);
        }
        *(u16 *)(arg5[i + 8] + 0x1e) = 0x1800 - *(u16 *)(arg5[i + 8] + 0x1c);
        i++;
    }
}

s32 func_02135920(u8 *arg0, s32 arg1) {
    s16 val = (arg1 >= 0) ? 0 : arg1;
    val = (-999 >= val) ? -999 : val;
    *(s16 *)(arg0 + 0x18) = val;
    func_02114728(arg0 + 0x34, val);
    return arg1;
}

extern void func_02114794(u8 *, s32, s32);
s32 func_02135960(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p = *(u8 **)(arg0 + 0x20 + arg1 * 4);
    *(s16 *)(p + 0x22) = arg2;
    func_02114794(arg0 + 0x34, arg1, arg2);
    return arg2;
}

void func_02135984(u8 *arg0, s32 arg1, s32 arg2) {
if(arg2==0) arg2=0x40;
else if(arg2==-15) arg2=0;
else if(arg2==15) arg2=0x7f;
else arg2=(arg2+15)*128/30;
u8 *p=*(u8 **)(arg0+arg1*4+0x20);
*(u16 *)(p+0x20)=arg2;
func_021147e8(arg0+0x34, arg1, arg2);
}

#pragma opt_common_subs off
void func_021359e4(u8 *arg0) {
    s32 i;
    u16 a;
    u16 b;
    func_0211470c(arg0 + 0x34);
    for (i = 0; i < *(s8 *)(arg0 + 2); i++) {
        u16 v = *(u16 *)(*(void **)(arg0 + i * 4 + 0x20));
        if ((v & 8) == 0) return;
        *(u16 *)(*(void **)(arg0 + i * 4 + 0x20)) = v & 0xfff7;
        func_02135f0c(*(void **)(arg0 + i * 4 + 0x20), &a, &b);
        if (b != 0) {
            *(u32 *)(*(void **)(arg0 + i * 4 + 0x20) + 0x14) += (u32)b >> 1;
        }
    }
}
#pragma opt_common_subs on
void func_02135a80(u8 *arg0)
{
    s32 i = 0;
    for (; i < *(s8 *)(arg0 + 2); i++) {
        *(u16 *)(((u8 **)(arg0 + 0x20))[i] + 0x24) = 0;
        *(s32 *)(((u8 **)(arg0 + 0x20))[i] + 0x14) = 0;
    }
}

void func_02135abc(u8 *arg0, s16 *arg1, s32 arg2) {
    s32 i;
    s32 idx = *(u16 *)(arg0 + 0xa8) + *(u16 *)(arg0 + 0x98);
    if (idx >= *(s32 *)(arg0 + 0xa4)) {
        idx -= *(s32 *)(arg0 + 0xa4);
    }
    for (i = 0; i < arg2; i++) {
        (*(s16 **)(arg0 + 0x9c))[idx] = arg1[i];
        idx++;
        if (idx == *(s32 *)(arg0 + 0xa4)) {
            idx = 0;
        }
    }
}

void func_02135b1c(u8 *arg0, s16 *arg1, s32 count, s16 **out)
{
  s16 *new_var2;
  s16 *left = *((s16 **) (((u8 *) data_021756d8) + 0x2b4));
  s16 *right;
  u8 *new_var;
  u16 pos;
  s32 i;
  out[0] = left;
  new_var2 = (*((s16 **) (((u8 *) data_021756d8) + 0x2b4))) + (*((s32 *) (arg0 + 0xa4)));
  right = new_var2;
  out[1] = right;
  pos = *((u16 *) (arg0 + ((unsigned long) 0xa8)));
  new_var = arg0 + 0xa8;
  for (i = 0; ((0, i)) < count; i++)
  {
    s32 v = ((3 * arg1[i]) + (2 * (*((s16 **) (arg0 + 0x9c)))[pos])) >> 2;
    if (v > 32767)
    {
      v = 32767;
    }
    else
      if (v < (-32768))
    {
      v = -32768;
    }
    left[i] = v;
    if ((arg0 && arg0) != 0)
    {
    }
    v = ((3 * arg1[i]) - (2 * (*((s16 **) (arg0 + 0x9c)))[pos])) >> 2;
    if (v > 32767)
    {
      v = 32767;
    }
    else
      if (v < (-32768))
    {
      v = -32768;
    }
    right[i] = v;
    pos++;
    if ((*((s32 *) (arg0 + 0xa4))) == pos)
    {
      pos = 0;
    }
  }

  *((u16 *) new_var) = pos;
}

void func_02135c00(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_02135c0c(void) {
    func_0213808c();
}

void func_02135c18(void) {
    func_02013878(data_021759b4, 0, 0x100);
    data_021759ac[1] = 0;
    data_021759ac[0] = 0;
}

void func_02135c48(void) {
    func_02013878(data_021759b4, 0, 0x100);
    data_021759ac[1] = 0;
    data_021759ac[0] = 0;
}

void func_02135c78(u32 arg0, u32 arg1) {
    data_021759ac[1] = arg0;
    data_021759ac[0] = arg1;
}

extern void func_02016e88(void *, void *, s32);
extern void func_02135d4c(s32, u16);
extern void func_02135d24(u16);
extern s32 data_02175ab4;
void func_02135c8c(void *arg0) {
    func_02016e88(data_021759b4, arg0, 0xff);
    if (data_021759ac[1] != 0) {
        ((void (*)(u32, void *))data_021759ac[1])(data_021759ac[0], data_021759b4);
    }
}

extern void *memset(void *, int, unsigned long);
void func_02135ccc(void) {
    memset(data_02175ab8, 0, 0x1a0);
    data_02175ab4 = 0;
    func_02135d4c(0, 1);
    func_02135d24(2);
}
void func_02135d20(void) {
}

void func_02135d24(u16 arg0) {
    s32 i;
    for (i = 0; i < 8; i++) {
        *(u16 *)((u8 *)data_02175ab8 + i * 0x34 + 0x2c) = arg0;
    }
}

#pragma push
#pragma opt_propagation off
void func_02135d4c(s32 arg0, u16 arg1)
{
  u16 eight = 8;
  u8 *new_var2;
  s32 stride;
  s32 i;
  if (arg0 == 0)
  {
    new_var2 = (u8 *)data_02175ab8;
    i = 0;
    stride = 0x34;
    do
    {
      u8 *entry = new_var2 + (i * stride);
      *((u16 *) (entry + 0x26)) = arg1;
      *((u16 *) (entry + 0x28)) = eight;
      i++;
    }
    while (i < 8);
    return;
  }
  *((u16 *) (((u8 *) arg0) + 0x26)) = arg1;
  *((u16 *) (((u8 *) arg0) + 0x28)) = eight;
}
#pragma pop
s16 func_02135d94(u8 *arg0) {
    return *(s16 *)(arg0 + 0x26);
}

u8 *func_02135d9c(s32 arg0, s32 arg1, u16 arg2) {
    s32 i;
    u8 *entry;
    for (i = 0; i < 8; i++) {
        if (*(u16 *)((u8 *)data_02175ab8 + i * 0x34) == 0) {
            break;
        }
    }
    if (i == 8) {
        return NULL;
    }
    entry = (u8 *)data_02175ab8 + i * 0x34;
    *(u32 *)(entry + 4) = arg0 * 0x1800 + arg1;
    *(u32 *)(entry + 8) = 0x10;
    *(u16 *)(entry + 0x18) = 0x1800;
    *(u16 *)(entry + 0) = 1;
    *(u16 *)(entry + 2) = arg2;
    *(u32 *)(entry + 0x14) = 0;
    return entry;
}

s32 func_0201f884(s32);
s32 func_02020888(s32,s32);
s32 func_020203d4(s32,s32);
s32 func_0201ff0c(s32);
s32 func_02135e18(void *arg0, s32 rate) {
u8 *p = arg0;
if (p == NULL) return 0;
if (*(s16 *)(p+0x26)) {
if (rate == 4091) { *(s16 *)(p+0x28)=1; rate=32728; }
else if (rate == 8182) { *(s16 *)(p+0x28)=2; rate=32728; }
else if (rate == 12273) { *(s16 *)(p+0x28)=3; rate=32728; }
else if (rate == 16364) { *(s16 *)(p+0x28)=4; rate=32728; }
else if (rate == 20455) { *(s16 *)(p+0x28)=5; rate=32728; }
else if (rate == 24546) { *(s16 *)(p+0x28)=6; rate=32728; }
else *(s16 *)(p+0x28)=8;
} else *(s16 *)(p+0x28)=8;
*(s32 *)(p+8)=func_0201ff0c(func_020203d4(0x3f000000,func_02020888(0x48ffb0e0,func_0201f884(rate))));
return rate;
}

void func_02135f0c(void *arg0, u16 *arg1, u16 *arg2) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    *arg1 = *(u16 *)((u8 *)arg0 + 0x1e);
    *arg2 = *(u16 *)((u8 *)arg0 + 0x1c);
    (void)*(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
}

