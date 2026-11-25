/* 1 function from 0x0201B4CC to 0x0201C654 (main), found by ds-decomp. */
#include "common.h"
#define POW_HI(x) (((s32 *)&(x))[1])
#define POW_LO(x) (((u32 *)&(x))[0])
extern const double data_0213ec60[], data_0213ec70[], data_0213ec50[];
extern float data_02145c2c;
extern double func_02019c20(double, s32);

extern s32 data_02160034;
extern double func_02020058(double);
extern double func_0201e014(double);
double func_0201b4cc(double x, double y)
{
    double z, ax, z_h, z_l, p_h, p_l;
    double y1, t1, t2, r, s, t, u, v, w;
    double s_h, s_l, t_h, t_l, s2;
    s32 i, j, k, yisint, n, signflag;
    s32 hx, hy, ix, iy;
    u32 lx, ly;
    hx = POW_HI(x); lx = POW_LO(x);
    hy = POW_HI(y); ly = POW_LO(y);
    ix = hx & 0x7fffffff; iy = hy & 0x7fffffff;
    if ((iy | ly) == 0) return 1.0;
    if (ix > 0x7ff00000 || (ix == 0x7ff00000 && lx != 0) ||
        iy > 0x7ff00000 || (iy == 0x7ff00000 && ly != 0)) return x + y;
    yisint = 0;
    if (hx < 0) {
        if (iy >= 0x43400000) yisint = 2;
        else if (iy >= 0x3ff00000) {
            k = (iy >> 20) - 0x3ff;
            if (k > 20) {
                j = ly >> (52-k);
                if ((j << (52-k)) == ly) yisint = 2 - (j & 1);
            } else if (ly == 0) {
                j = iy >> (20-k);
                if ((j << (20-k)) == iy) yisint = 2 - (j & 1);
            }
        }
    }
    if (ly == 0) {
        if (iy == 0x7ff00000) {
            if (((ix - 0x3ff00000) | lx) == 0) return y-y;
            else if (ix >= 0x3ff00000) return hy >= 0 ? y : 0.0;
            else return hy < 0 ? 0.0-y : 0.0;
        }
        if (iy == 0x3ff00000) { if (hy < 0) return 1.0/x; else return x; }
        if (hy == 0x40000000) return x*x;
        if (hy == 0x3fe00000 && hx >= 0) return func_02020058(x);
    }
    ax = func_0201e014(x);
    if (lx == 0) {
        if (ix == 0x7ff00000 || ix == 0 || ix == 0x3ff00000) {
            z = ax;
            if (hy < 0) z = 1.0/z;
            if (hx < 0) {
                if (((ix - 0x3ff00000) | yisint) == 0) z = (z-z)/(z-z);
                else if (yisint == 1) z = 0.0-z;
            }
            return z;
        }
    }
    signflag = (hx >> 31) + 1;
    if ((signflag | yisint) == 0) {
        data_02160034 = 33;
        return (double)data_02145c2c;
    }
    if (iy > 0x41e00000) {
        if (iy > 0x43f00000) {
            if (ix <= 0x3fefffff) return hy < 0 ? 1.0e300*1.0e300 : 1.0e-300*1.0e-300;
            if (ix >= 0x3ff00000) return hy > 0 ? 1.0e300*1.0e300 : 1.0e-300*1.0e-300;
        }
        if (ix < 0x3fefffff) return hy < 0 ? 1.0e300*1.0e300 : 1.0e-300*1.0e-300;
        if (ix > 0x3ff00000) return hy > 0 ? 1.0e300*1.0e300 : 1.0e-300*1.0e-300;
        t = x-1.0;
        w = (t*t)*(0.5-t*(0.33333333333333333-t*0.25));
        u = (1.4426950216293335)*t;
        v = t*(1.9259629911266175e-8)-w*(1.4426950408889634);
        t1 = u+v; POW_LO(t1) = 0;
        t2 = v-(t1-u);
    } else {
        n = 0;
        if (ix < 0x00100000) {
            ax *= 9007199254740992.0;
            n -= 53;
            ix = POW_HI(ax);
        }
        n += (ix >> 20) - 0x3ff;
        j = ix & 0x000fffff;
        ix = j | 0x3ff00000;
        if (j <= 0x3988e) k = 0;
        else if (j < 0xbb67a) k = 1;
        else { k = 0; n++; ix -= 0x00100000; }
        POW_HI(ax) = ix;
        u = ax - data_0213ec60[k];
        v = 1.0/(ax+data_0213ec60[k]);
        s = u*v; s_h = s; POW_LO(s_h) = 0;
        t_h = 0.0;
        POW_HI(t_h) = ((ix >> 1) | 0x20000000) + 0x00080000 + (k << 18);
        t_l = ax-(t_h-data_0213ec60[k]);
        s_l = v*((u-s_h*t_h)-s_h*t_l);
        s2 = s*s;
        r = s2*s2*((0.59999999999999465)+s2*((0.42857142857855018)+s2*((0.33333332981837743)+s2*((0.27272812380853401)+s2*((0.23066074577556175)+s2*(0.20697501780033842))))));
        r += s_l*(s_h+s);
        s2 = s_h*s_h;
        t_h = 3.0+s2+r; POW_LO(t_h) = 0;
        t_l = r-((t_h-3.0)-s2);
        u = s_h*t_h;
        v = s_l*t_h+t_l*s;
        p_h = u+v; POW_LO(p_h) = 0;
        p_l = v-(p_h-u);
        z_h = (0.96179670095443726)*p_h;
        z_l = (-7.0284616509527583e-9)*p_h+p_l*(0.96179669392597555)+data_0213ec70[k];
        t = (double)n;
        t1 = ((z_h+z_l)+data_0213ec50[k])+t; POW_LO(t1) = 0;
        t2 = z_l-(((t1-t)-data_0213ec50[k])-z_h);
    }
    s = 1.0;
    if ((signflag | (yisint-1)) == 0) s = -1.0;
    y1 = y; POW_LO(y1) = 0;
    p_l = (y-y1)*t1+y*t2;
    p_h = y1*t1;
    z = p_l+p_h;
    j = POW_HI(z); i = POW_LO(z);
    if (j >= 0x40900000) {
        if (((j-0x40900000)|i) != 0) return s*1.0e300*1.0e300;
        if (p_l+(8.0085662595372941e-17) > z-p_h) return s*1.0e300*1.0e300;
    } else if ((j&0x7fffffff) >= 0x4090cc00) {
        if (((j-(s32)0xc090cc00)|i) != 0) return s*1.0e-300*1.0e-300;
        if (p_l <= z-p_h) return s*1.0e-300*1.0e-300;
    }
    i = j&0x7fffffff;
    k = (i>>20)-0x3ff;
    n = 0;
    if (i > 0x3fe00000) {
        n = j+(0x00100000>>(k+1));
        k = ((n&0x7fffffff)>>20)-0x3ff;
        t = 0.0; POW_HI(t) = n&~(0x000fffff>>k);
        n = ((n&0x000fffff)|0x00100000)>>(20-k);
        if (j < 0) n = -n;
        p_h -= t;
    }
    t = p_l+p_h; POW_LO(t) = 0;
    u = t*(0.69314718246459961);
    v = (p_l-(t-p_h))*(0.69314718055994529)+t*(-1.9046542999577680e-9);
    z = u+v;
    w = v-(z-u);
    t = z*z;
    t1 = z-t*((0.16666666666666602)+t*((-0.0027777777777015593)+t*((0.000066137563214379344)+t*((-0.0000016533902205465252)+t*(4.1381367970572385e-8)))));
    r = (z*t1)/(t1-2.0)-(w+z*w);
    z = 1.0-(r-z);
    j = POW_HI(z);
    j += n<<20;
    if ((j>>20) <= 0) z = func_02019c20(z,n);
    else POW_HI(z) = j;
    return s*z;
}
