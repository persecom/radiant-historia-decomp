/* 10 functions from 0x0212A9FC to 0x0212B8E0 (main), found by ds-decomp. */
#include "common.h"
extern f64 func_02020058(f64);
extern f64 func_0201dea0(f64);
extern f32 func_0201f884(s32);
extern f32 func_020201f4(f32,f32), func_02020888(f32,f32), func_02020604(f32,f32), func_020203d4(f32,f32);
extern f64 func_0201f800(f32);
extern f32 func_0201f114(f64);
extern s32 func_0201ff0c(f32);

extern s32 data_0217397c;
extern s32 data_02173980;
extern const s32 data_02145888[];

s32 func_0212abac(s8 *, s32, s16 *, s16 *, s16 *, s16 *, s16, s16, s16 *, s16, s16);
s32 func_0212a9fc(s8 *src, s32 nblk, s16 *dst, s16 *dly, s16 coef1, s16 coef2, s16 *xor_key, s16 mult, s16 inc) {
    s32 s0, d;
    
    s32 s1, s2;
    s32 i, j;
    s16 scale;

    s1 = dly[0];
    s2 = dly[1];

    for (i = 0; i < nblk; i++) {
        scale = *(s16 *)src;
        scale = (s16)(((scale >> 8) & 0xff) | ((scale << 8) & 0xff00));
        if (scale & 0x8000) {
            return i;
        }
        src += 2;
        scale = (s16)(((scale ^ *xor_key) & 0x1fff) + 1);
        *xor_key = *xor_key * mult + inc;
        *xor_key &= 0x7fff;

        for (j = 0; j < 32; j += 2) {
            s0 = coef1 * s1 + coef2 * s2;
            d = *src++;
            s2 = ((d >> 4) * scale) + (s0 >> 12);
            s2 += data_02173980;
            if (s2 > 0x7fff || s2 < -0x8000) {
                if (s2 < -0x8000) {
                    s2 = -0x8000;
                } else if (s2 > 0x7fff) {
                    s2 = 0x7fff;
                }
            }
            *dst++ = s2;

            s0 = coef2 * s1 + coef1 * s2;
            s1 = data_02145888[d & 0xf] * scale + (s0 >> 12);
            s1 += data_02173980;
            if (s1 > 0x7fff || s1 < -0x8000) {
                if (s1 < -0x8000) {
                    s1 = -0x8000;
                } else if (s1 > 0x7fff) {
                    s1 = 0x7fff;
                }
            }
            *dst++ = s1;
        }
    }

    dly[0] = s1;
    dly[1] = s2;
    return nblk;
}

s32 func_0212abac(s8 *src, s32 nblk, s16 *dst, s16 *dly, s16 *dstR, s16 *dlyR, s16 coef1, s16 coef2, s16 *xor_key, s16 mult, s16 inc)
{
  s32 lowR;
  s32 s0;
  s16 *out;
  register s32 s2;
  register s32 t1;
  register s32 s1;
  register s32 mix;
  register s32 t2;
  s32 j;
  s32 i;
  s32 d;
  s32 e;
  s32 blocks = nblk / 2;
  s1 = dly[0];
  s2 = dly[1];
  t1 = dlyR[0];
  t2 = dlyR[1];
  for (i = 0; i < blocks; i++)
  {
    register s16 scale = *((s16 *) src);
    register s16 scaleR;
    scale = (s16) (((scale >> 8) & 255) | ((scale << 8) & 0xff00));
    if (scale & 0x8000)
    {
      return i * 2;
    }
    scale = (s16) (((scale ^ (*xor_key)) & 0x1fff) + 1);
    *xor_key = ((*xor_key) * mult) + inc;
    *((volatile s16 *) xor_key) &= 0x7fff;
    scaleR = *((s16 *) (src + 18));
    scaleR = (s16) (((scaleR >> 8) & 255) | ((scaleR << 8) & 0xff00));
    if (scaleR & 0x8000)
    {
      return i * 2;
    }
    e = ((*xor_key) * mult) + inc;
    src += 2;
    scaleR = (s16) (((scaleR ^ (*xor_key)) & 0x1fff) + 1);
    *xor_key = e;
    *((volatile s16 *) xor_key) &= 0x7fff;
    for (j = 0; j < 32; j += 2)
    {
      s32 min = -0x8000;
      d = *src;
      e = src[18];
      src++;
      s2 = ((d >> 4) * scale) + (((coef1 * s1) + (coef2 * s2)) >> 12);
      if ((s2 > 0x7fff) || (s2 < min))
      {
        if (s2 < min)
        {
          s2 = min;
        }
        else
          if (s2 > 0x7fff)
        {
          s2 = 0x7fff;
        }
      }
      t2 = ((e >> 4) * scaleR) + (((coef1 * t1) + (coef2 * t2)) >> 12);
      if ((t2 > 0x7fff) || (t2 < min))
      {
        if (t2 < min)
        {
          t2 = min;
        }
        else
          if (t2 > 0x7fff)
        {
          t2 = 0x7fff;
        }
      }
      mix = ((s2 + t2) * 7) / 10;
      if ((mix > 0x7fff) || (mix < min))
      {
        if (mix < min)
        {
          mix = min;
        }
        else
          if (mix > 0x7fff)
        {
          mix = 0x7fff;
        }
      }
      *(dstR++) = mix;
      {
        d = data_02145888[d & 15];
        lowR = data_02145888[e & 15];
        *(dst++) = *((volatile s16 *) (dstR - 1));
        s1 = (d * scale) + (((coef1 * s2) + (coef2 * s1)) >> 12);
        if ((s1 > 0x7fff) || (s1 < min))
        {
          if (s1 < min)
          {
            s1 = min;
          }
          else
            if (s1 > 0x7fff)
          {
            s1 = 0x7fff;
          }
        }
        t1 = (lowR * scaleR) + (((coef1 * t2) + (coef2 * t1)) >> 12);
        if ((t1 > 0x7fff) || (t1 < min))
        {
          if (t1 < min)
          {
            t1 = min;
          }
          else
            if (t1 > 0x7fff)
          {
            t1 = 0x7fff;
          }
        }
        s0 = ((s1 + t1) * 7) / 10;
        s0 += data_02173980;
        if ((s0 > 0x7fff) || (s0 < min))
        {
          if (s0 < min)
          {
            s0 = min;
          }
          else
            if (s0 > 0x7fff)
          {
            s0 = 0x7fff;
          }
        }
        out = dstR++;
        *out = s0;
        *(dst++) = *((volatile s16 *) out);
      }
    }

    src += 18;
  }

  dly[0] = s1;
  dly[1] = s2;
  dlyR[0] = t1;
  dlyR[1] = t2;
  return nblk;
}

s32 func_0212afc0(s8 *src,s32 nblk,s16 *dst,s16 *dly,s16 *dstR,s16 *dlyR,s16 coef1,s16 coef2,s16 *xor_key,s16 mult,s16 inc) {
s32 s0,d,e;
s32 i,j;
register s32 s2,t1,s1,t2;
s32 blocks=nblk/2;
s1=dly[0];s2=dly[1];t1=dlyR[0];t2=dlyR[1];
for(i=0;i<blocks;i++){
register s16 scale=*(s16 *)src,scaleR;
scale=(s16)(((scale>>8)&255)|((scale<<8)&0xff00));
if(scale&0x8000)return i*2;
scale=(s16)(((scale^*xor_key)&0x1fff)+1);
*xor_key=*xor_key*mult+inc;
*(volatile s16 *)xor_key&=0x7fff;
scaleR=*(s16 *)(src+18);
scaleR=(s16)(((scaleR>>8)&255)|((scaleR<<8)&0xff00));
if(scaleR&0x8000)return i*2;
e=*xor_key*mult+inc;
src+=2;
scaleR=(s16)(((scaleR^*xor_key)&0x1fff)+1);
*xor_key=e;
*(volatile s16 *)xor_key&=0x7fff;
for(j=0;j<32;j+=2){
s32 min=-0x8000;
d=*src;e=src[18];src++;
s2=((d>>4)*scale)+((coef1*s1+coef2*s2)>>12);
if(s2>0x7fff || s2<min) {if(s2<min) s2=min; else if(s2>0x7fff) s2=0x7fff;}
t2=((e>>4)*scaleR)+((coef1*t1+coef2*t2)>>12);
if(t2>0x7fff || t2<min) {if(t2<min) t2=min; else if(t2>0x7fff) t2=0x7fff;}
d=data_02145888[d&15];e=data_02145888[e&15];
*dst++=s2;*dstR++=t2;
s1=d*scale+((coef1*s2+coef2*s1)>>12);
s1+=data_02173980;
if(s1>0x7fff || s1<min) {if(s1<min) s1=min; else if(s1>0x7fff) s1=0x7fff;}
t1=e*scaleR+((coef1*t2+coef2*t1)>>12);
t1+=data_02173980;
if(t1>0x7fff || t1<min) {if(t1<min) t1=min; else if(t1>0x7fff) t1=0x7fff;}
*dst++=s1;*dstR++=t1;
}
src+=18;
}
dly[0]=s1;dly[1]=s2;dlyR[0]=t1;dlyR[1]=t2;
return nblk;
}

s32 func_0212b354(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s16 a6, s16 a7, s32 a8, s16 a9, s16 a10) {
    if (data_0217397c == 0) {
        return func_0212afc0(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    return func_0212abac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

void func_0212b3f8(s32 a,s32 b,s16 *out1,s16 *out2){
f64 root=func_02020058(2.0);
f64 trig=func_0201dea0(func_0201f800(func_02020888(func_020201f4(6.2831855f,func_0201f884(a)),func_0201f884(b))));
f32 x=func_02020604(func_0201f114(root),func_0201f114(trig));
f32 y=func_02020604(func_0201f114(func_02020058(2.0)),1.0f);
f32 value=func_02020888(func_02020604(x,func_0201f114(func_02020058(func_0201f800(func_020201f4(func_020203d4(x,y),func_02020604(x,y)))))),y);
*out1=func_0201ff0c(func_020201f4(4096.0f,func_020201f4(2.0f,value)));
*out2=func_0201ff0c(func_020201f4(4096.0f,func_020201f4(func_02020604(0.0f,value),value)));
}

s32 func_0212b550(u8 *arg0, s32 arg1, u16 *arg2) {
    s32 i;
    s32 found = 0x7fffffff;

    for (i = 0; i < arg1 - 1; i += 2) {
        if (*(u16 *)(arg0 + i) == 0x80) {
            found = (i < 0x7fffffff) ? i : 0x7fffffff;
            break;
        }
    }
    if (found != 0x7fffffff) {
        *arg2 = found;
        return 0;
    }
    *arg2 = 0;
    return -1;
}

extern s32 _s32_div_f(s32);
s32 func_0212b5ac(u8 *arg0, s32 arg1, u16 *arg2, s8 *arg3, s8 *arg4, s8 *arg5, s8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9) {
    u16 v0;
    u32 v2;
    u32 v3;

    if (arg1 < 0x10) {
        return -1;
    }
    v0 = (arg0[0] << 8) | arg0[1];
    if (v0 != 0x8000) {
        return -2;
    }
    *arg2 = (u16)(((arg0[2] << 8) | arg0[3]) + 4);
    *arg3 = *(s8 *)(arg0 + 4);
    *arg5 = *(s8 *)(arg0 + 5);
    *arg4 = *(s8 *)(arg0 + 6);
    *arg6 = *(s8 *)(arg0 + 7);
    v2 = ((u32)arg0[8] << 24) | ((u32)arg0[9] << 16) | ((u32)arg0[10] << 8) | arg0[11];
    *arg7 = v2;
    v3 = ((u32)arg0[0xc] << 24) | ((u32)arg0[0xd] << 16) | ((u32)arg0[0xe] << 8) | arg0[0xf];
    *arg8 = v3;
    if (*arg4 != 0) {
        *arg9 = ((*arg5 - 2) << 3) / *arg4;
    } else {
        *arg9 = 0;
    }
    return 0;
}

s32 func_0212b69c(s16 *arg0, s32 arg1, u16 *arg2) {
    u16 v0;
    s16 swapped;
    s16 v1;
    u16 v2;

    if (arg1 < 0x12) {
        return -1;
    }
    v0 = (u16)arg0[0];
    swapped = ((v0 >> 8) & 0xff) | ((v0 << 8) & 0xff00);
    if ((u16)swapped != 0x8000) {
        return -2;
    }
    v1 = arg0[1];
    swapped = ((v1 >> 8) & 0xff) | ((v1 << 8) & 0xff00);
    if (swapped < 0xe) {
        return -1;
    }
    v2 = (u16)arg0[8];
    *arg2 = ((v2 >> 8) & 0xff) | ((v2 << 8) & 0xff00);
    return 0;
}

s32 func_0212b72c(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    u16 v0;
    s16 swapped;
    s16 v1;
    s32 ret;

    if (arg1 < 0x14) {
        return -1;
    }
    v0 = *(u16 *)arg0;
    swapped = ((v0 >> 8) & 0xff) | ((v0 << 8) & 0xff00);
    if ((u16)swapped != 0x8000) {
        return -2;
    }
    v1 = *(s16 *)(arg0 + 2);
    swapped = ((v1 >> 8) & 0xff) | ((v1 << 8) & 0xff00);
    if (swapped < 0x10) {
        ret = -1;
    } else {
        *arg2 = arg0[0x12];
        *arg3 = arg0[0x13];
        ret = 0;
    }
    return ret;
}

s32 func_0212b7ac(u8 *p,s32 len,u16 *a,u16 *b){
u8 type,other;
u16 v; s16 swapped,sv;
if(func_0212b72c(p,len,&type,&other)!=0)return -1;
if(type>=4){
if(len<32)return -1;
v=*(u16 *)p; swapped=((v>>8)&255)|((v<<8)&0xff00);
if((u16)swapped!=0x8000)return -2;
sv=*(s16 *)(p+2);swapped=((sv>>8)&255)|((sv<<8)&0xff00);
if(swapped<28)return -1;
v=*(u16 *)(p+24);a[0]=((v>>8)&255)|((v<<8)&0xff00);
v=*(u16 *)(p+26);b[0]=((v>>8)&255)|((v<<8)&0xff00);
v=*(u16 *)(p+28);a[1]=((v>>8)&255)|((v<<8)&0xff00);
v=*(u16 *)(p+30);b[1]=((v>>8)&255)|((v<<8)&0xff00);
}else{a[0]=b[0]=a[1]=b[1]=0;}
return 0;
}

