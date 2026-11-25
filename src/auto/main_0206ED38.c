/* 1 function from 0x0206ED38 to 0x02075C08 (main), found by ds-decomp. */
#include "common.h"

void func_0206ed38(void)
{
    extern u8 *data_021600e8;
    extern u32 data_0216263c[3];
    extern u16 data_02140990[], data_02140bc0[], data_02140ae0[];
    extern u16 data_02140980[], data_02140a28[], data_02140a4c[];
    extern u8 data_02140970[];
    extern u16 data_02140aa0[], data_0214099c[], data_02140988[];
    extern u16 data_02140a08[], data_021409bc[], data_021409cc[];
    extern u16 data_021409dc[], data_02140974[], data_021409ec[];
    extern u16 data_021409ac[], data_02140978[], data_02140a70[];
    extern u16 data_02140b20[], data_02140b70[];
    extern void *func_02067698(u8 *, u16);
    extern void func_0206e7a0(u8, void *, void *, u16);
    extern void func_0206e990(s32, u16);
    extern void func_0206e8f0(u32, void *, u8);
    extern void func_02075c08(u32 *, u32 *);
    extern s32 func_02075c24(s32);
    extern s32 func_02075c3c(s32);
    extern u32 func_02075c5c(u32 *, u32);
    extern void func_02075c84(void *, void *);
    extern void func_0210c5dc(void *);
    extern s32 _s32_div_f(s32, s32);
    extern s32 func_0201f884(s32);
    extern s32 func_02020888(s32, s32);
    extern s32 func_020201f4(s32, s32);
    extern s32 func_0201ff0c(s32);
    extern void func_02067de0(u8 *);
    extern void func_02068380(u8 *);
    extern void func_02068ac4(u8 *);
    extern void func_02068da0(u8 *);
    extern void func_0206923c(u8 *);
    extern void func_020698e0(u8 *);
    extern void func_02069c00(u8 *);
    extern void func_02069f80(u8 *);
    extern void func_0206a158(u8 *);
    extern void func_0206a854(u8 *);

    typedef struct Particle {
        s32 x, y, z;
        u8 pad0c;
        s8 flip;
        u8 pad0e[2];
        s16 sx, sy;
        s32 fx, fy;
        s32 dx, dy;
        u16 rotation;
        u8 alpha;
        u8 pad27[3];
        u16 id;
        u16 timer;
        u8 phase, flag;
        s32 active;
        u8 pad34[4];
        struct Particle *next;
    } Particle;
    typedef struct Effect {
        s32 x, y, z, vx, vy, vz;
        u8 type;
        u8 pad19[7];
        u8 mode;
        u8 pad21;
        s16 param;
        u16 id;
        u8 pad26[6];
        u32 frame;
        u16 timer, timer2, state, phase;
        s32 velocity;
        u8 pad3c[4];
        u8 flags;
        u8 pad41[7];
        s32 finished;
        void *object;
        u8 pad50[4];
        Particle *particles;
        u8 pad58[4];
        u16 count;
        u8 pad5e[6];
        struct Effect *next;
    } Effect;
    typedef struct Scheduled {
        u16 id;
        u8 type, pad03;
        void *object;
        u8 args[24];
        u8 interval, timer;
        u8 pad22[6];
        struct Scheduled *next;
    } Scheduled;
    typedef struct { s16 x, y; } Pair;
    typedef struct { s16 x, y, sx, sy; } Quad;
    typedef struct { s16 x, y; u16 id; } Triple;
    typedef struct { s16 x, y, sx, sy; u16 id; } Pose;
    typedef struct { s16 v[6]; } Pairs3;
    typedef struct { s16 v[8]; } Pairs4;
    typedef struct { s16 v[14]; } Pairs7;
    typedef struct { s16 v[16]; } Pairs8;
    typedef struct { s16 v[18]; } Pairs9;
    typedef struct { s16 v[32]; } Pairs16;
    typedef struct { Quad v[16]; } Quads16;
    typedef struct { s16 v[4]; } Shorts4;
    typedef struct { s16 v[2]; } Shorts2;
    typedef struct { s8 v[3]; } Bytes3;
    typedef struct { Triple v[8]; } Triples8;
    typedef struct { Pose v[8]; } Poses8;
    register Scheduled *scheduled;
    register s32 one = 1;
    register Effect *e;
    Effect *next;
    s32 zero = 0;
    register u32 *rng;
    register Particle *p;
    u32 childType;
    Pairs3 copy0990;
    Quads16 copy0bc0;
    Pairs16 copy0ae0;
    Shorts4 copy0980;
    Pairs9 copy0a28;
    Pairs9 copy0a4c;
    Bytes3 copy0970;
    Pairs16 copy0aa0;
    Pairs4 copy099c;
    Shorts4 copy0988;
    Pairs8 copy0a08;
    Pairs4 copy09bc;
    Pairs4 copy09cc;
    Pairs4 copy09dc;
    Shorts2 copy0974;
    Pairs7 copy09ec;
    Pairs4 copy09ac;
    Shorts4 copy0978;
    Triples8 copy0a70;
    Poses8 copy0b20;
    Poses8 copy0b70;
    Pairs3 t0990;
    Quads16 t0bc0;
    Pairs16 t0ae0;
    Shorts4 t0980;
    Pairs9 t0a28, t0a4c;
    Bytes3 t0970;
    Pairs16 t0aa0;
    Pairs4 t099c;
    Shorts4 t0988;
    Pairs8 t0a08;
    Pairs4 t09bc, t09cc, t09dc;
    Shorts2 t0974;
    Pairs7 t09ec;
    Pairs4 t09ac;
    Shorts4 t0978;
    Triples8 t0a70;
    Poses8 t0b20, t0b70;

    /* Keep these operations inline: the target is a single large dispatcher.
       ABS deliberately evaluates a random expression a second time. */
#define FIND(i) ((Particle *)func_02067698((u8 *)e, (u16)(i)))
#define RAND(n) ((s32)func_02075c5c(rng, (n)))
#define ABS(x) ((x) >= 0 ? (x) : -(x))
#define FX(x) ((s32)(x) * 0x1000)
#define SCALE(p) do { (p)->sx = (p)->fx >> 12; (p)->sy = (p)->fy >> 12; } while (0)
#define SET_SCALE(p,xv,yv) do { s32 xx=(xv); s32 yy; (p)->fx=xx; yy=(yv); (p)->fy=yy; (p)->sx=xx>>12; (p)->sy=yy>>12; } while (0)
#define SET_SCALE8(p,xv,yv) do { s32 xx=(xv); s32 yy; (p)->fx=xx; yy=(yv); (p)->fy=yy; (p)->sx=(s8)(xx>>12); (p)->sy=(s8)(yy>>12); } while (0)
#define SET_SCALE_POS(p,xv,yv) do { s32 xx=(xv); s32 yy; (p)->fx=xx; yy=(yv); (p)->fy=yy; (p)->sx=xx>>12; (p)->sy=yy>>12; (p)->x=xx/2; (p)->y=yy/2; } while (0)
#define SCALE8(p) do { (p)->sx = (s8)((p)->fx >> 12); (p)->sy = (s8)((p)->fy >> 12); } while (0)
#define HALF_POS(p) do { (p)->x = (p)->fx / 2; (p)->y = (p)->fy / 2; } while (0)
#define FADE(p,n) do { if ((p)->alpha >= (n)) (p)->alpha -= (n); else (p)->active = 0; } while (0)
#define END_IF(x) do { if (x) e->finished = one; } while (0)
#define DEC_TIMER(p,d) do { (p)->timer -= (u16)_s32_div_f((p)->timer,(d)); } while (0)
#define CORNER(p,i) do { if ((i)==0 || (i)==3) (p)->x += 0x1000; if ((u32)((i)-2)<=1) (p)->y += 0x1000; } while (0)
#define ORBIT(p,a,k) do { (p)->x = (s16)func_02075c24(a)*(s16)(k); (p)->z = (s16)func_02075c3c(a)*(s16)(k); } while (0)

    scheduled = *(Scheduled **)(data_021600e8 + 0x54);
    e = *(Effect **)(data_021600e8 + 0x48);
    while (scheduled != NULL) {
        scheduled->timer++;
        if (scheduled->timer >= scheduled->interval - 1) {
            scheduled->timer = zero;
            func_0206e7a0(scheduled->type, scheduled->object,
                          scheduled->args, scheduled->id);
        }
        scheduled = scheduled->next;
    }
    if (e == NULL) return;

    { const u16 *src = (const u16 *)data_02140990; u16 *dst = (u16 *)&t0990; u32 n = sizeof(Pairs3) / 4; if (sizeof(Pairs3) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0990 = *(const Pairs3 *)data_02140990; }
    { const u16 *src = (const u16 *)data_02140bc0; u16 *dst = (u16 *)&t0bc0; u32 n = sizeof(Quads16) / 4; if (sizeof(Quads16) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0bc0 = *(const Quads16 *)data_02140bc0; }
    { const u16 *src = (const u16 *)data_02140ae0; u16 *dst = (u16 *)&t0ae0; u32 n = sizeof(Pairs16) / 4; if (sizeof(Pairs16) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0ae0 = *(const Pairs16 *)data_02140ae0; }
    { const u16 *src = (const u16 *)data_02140980; u16 *dst = (u16 *)&t0980; u32 n = sizeof(Shorts4) / 4; if (sizeof(Shorts4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0980 = *(const Shorts4 *)data_02140980; }
    { const u16 *src = (const u16 *)data_02140a28; u16 *dst = (u16 *)&t0a28; u32 n = sizeof(Pairs9) / 4; if (sizeof(Pairs9) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0a28 = *(const Pairs9 *)data_02140a28; }
    { const u16 *src = (const u16 *)data_02140a4c; u16 *dst = (u16 *)&t0a4c; u32 n = sizeof(Pairs9) / 4; if (sizeof(Pairs9) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0a4c = *(const Pairs9 *)data_02140a4c; }
    { const u16 *src = (const u16 *)data_02140970; u16 *dst = (u16 *)&t0970; u32 n = sizeof(Bytes3) / 4; if (sizeof(Bytes3) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0970 = *(const Bytes3 *)data_02140970; }
    { const u16 *src = (const u16 *)data_02140aa0; u16 *dst = (u16 *)&t0aa0; u32 n = sizeof(Pairs16) / 4; if (sizeof(Pairs16) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0aa0 = *(const Pairs16 *)data_02140aa0; }
    { const u16 *src = (const u16 *)data_0214099c; u16 *dst = (u16 *)&t099c; u32 n = sizeof(Pairs4) / 4; if (sizeof(Pairs4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t099c = *(const Pairs4 *)data_0214099c; }
    { const u16 *src = (const u16 *)data_02140988; u16 *dst = (u16 *)&t0988; u32 n = sizeof(Shorts4) / 4; if (sizeof(Shorts4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0988 = *(const Shorts4 *)data_02140988; }
    { const u16 *src = (const u16 *)data_02140a08; u16 *dst = (u16 *)&t0a08; u32 n = sizeof(Pairs8) / 4; if (sizeof(Pairs8) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0a08 = *(const Pairs8 *)data_02140a08; }
    { const u16 *src = (const u16 *)data_021409bc; u16 *dst = (u16 *)&t09bc; u32 n = sizeof(Pairs4) / 4; if (sizeof(Pairs4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t09bc = *(const Pairs4 *)data_021409bc; }
    { const u16 *src = (const u16 *)data_021409cc; u16 *dst = (u16 *)&t09cc; u32 n = sizeof(Pairs4) / 4; if (sizeof(Pairs4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t09cc = *(const Pairs4 *)data_021409cc; }
    { const u16 *src = (const u16 *)data_021409dc; u16 *dst = (u16 *)&t09dc; u32 n = sizeof(Pairs4) / 4; if (sizeof(Pairs4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t09dc = *(const Pairs4 *)data_021409dc; }
    { const u16 *src = (const u16 *)data_02140974; u16 *dst = (u16 *)&t0974; u32 n = sizeof(Shorts2) / 4; if (sizeof(Shorts2) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0974 = *(const Shorts2 *)data_02140974; }
    { const u16 *src = (const u16 *)data_021409ec; u16 *dst = (u16 *)&t09ec; u32 n = sizeof(Pairs7) / 4; if (sizeof(Pairs7) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t09ec = *(const Pairs7 *)data_021409ec; }
    { const u16 *src = (const u16 *)data_021409ac; u16 *dst = (u16 *)&t09ac; u32 n = sizeof(Pairs4) / 4; if (sizeof(Pairs4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t09ac = *(const Pairs4 *)data_021409ac; }
    { const u16 *src = (const u16 *)data_02140978; u16 *dst = (u16 *)&t0978; u32 n = sizeof(Shorts4) / 4; if (sizeof(Shorts4) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0978 = *(const Shorts4 *)data_02140978; }
    { const u16 *src = (const u16 *)data_02140a70; u16 *dst = (u16 *)&t0a70; u32 n = sizeof(Triples8) / 4; if (sizeof(Triples8) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0a70 = *(const Triples8 *)data_02140a70; }
    { const u16 *src = (const u16 *)data_02140b20; u16 *dst = (u16 *)&t0b20; u32 n = sizeof(Poses8) / 4; if (sizeof(Poses8) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0b20 = *(const Poses8 *)data_02140b20; }
    { const u16 *src = (const u16 *)data_02140b70; u16 *dst = (u16 *)&t0b70; u32 n = sizeof(Poses8) / 4; if (sizeof(Poses8) >= 16) { do { dst[1] = src[1]; *dst = *src; src += 2; dst += 2; } while (--n); } else t0b70 = *(const Poses8 *)data_02140b70; }
    rng = data_0216263c;

    do {
        next = e->next;
        if (e->object != NULL) {
            u32 *position = (u32 *)e->object;
            switch (e->mode) {
            case 4: position += 3; break;
            case 0: break;
            }
            func_02075c08((u32 *)e, position);
            e->x += e->vx;
            e->y += e->vy;
            e->z += e->vz;
        }
        switch (e->type) {
        /* 0x0610 */
        case 0x37: {
            u8 i;
            e->y += 0x20000;
            if (e->state == 0) {
                p = FIND(0);
                if (p != NULL) { p->y += 0x2000; p->active = one; }
                if (p->y >= 0x14000) {
                    p = FIND(0);
                    if (p != NULL) p->active = 0;
                    for (i=1;i<7;i++) {
                        p=FIND(i);
                        if (p != NULL) { p->y += 0x14000; p->active=one; p->flag=one; }
                    }
                    e->state=one;
                }
            }
            if (e->state == 1) {
                if (e->timer < 11) e->timer++;
                for (i=1;i<7;i++) {
                    p=FIND(i);
                    if (p != NULL) {
                        p->x = e->timer*2*func_02075c24((u32)((e->frame-p->id*6)*0x71c)%0xffff);
                        p->z = e->timer*2*func_02075c3c((u32)((e->frame-p->id*6)*0x71c)%0xffff);
                        p->y -= 0x2000;
                    }
                }
                if (p->y <= -0x14000) {
                    for (i=1;i<7;i++) { p=FIND(i); if (p != NULL) p->active=0; }
                    e->timer=0; e->finished=one;
                }
            }
            break;
        }
        /* 0x07cc */
        case 0x39: {
            u8 i;
            e->y += 0x20000;
            if (e->state==0) {
                for(i=0;i<3;i++) {
                    p=FIND(i); if (!p) continue;
                    p->sx/=8; p->sy/=8;
                    p->x+=FX(RAND(24)-12);
                    p->y=p->y+FX(RAND(24)-12)-0x1a000;
                    p->timer=3;
                }
                e->state=one;
            }
            if(e->state==1) {
                for(i=0;i<3;i++) {
                    p=FIND(i); if(!p) continue;
                    if(ABS(RAND(6)-3)==0) {
                        if(p->active) { if(p->timer) { p->sx*=2; p->sy*=2; p->timer--; } }
                        else p->active=one;
                    }
                    if(p->active) p->y+=(ABS(RAND(6)-3)+1)*0x800;
                }
                e->timer++;
                if(e->timer>35) {e->timer=0; e->state=2;}
            }
            if(e->state==2) {
                for(i=0;i<3;i++) {
                    p=FIND(i); if(p && ABS(RAND(4)-2)!=0) {
                        p->sx--; p->sy--; if(p->sx==0 || p->sy==0) p->active=0;
                    }
                }
                e->timer++; END_IF(e->timer>35);
            }
            break;
        }
        /* 0x0a64 */
        case 0x3a: {
            u8 i;
            e->y+=0x30000;
            for(i=1;i<5;i++) {
                p=FIND(i); if(!p) continue;
                p->active=ABS(RAND(2)-1);
                p->x=FX(RAND(32)-16);
                p->y=FX(RAND(32)-16)-0x12000;
            }
            e->timer++; END_IF(e->timer>16);
            break;
        }
        /* 0x0b1c */
        case 0x3b: {
            u8 i;
            e->y+=0x40000;
            for(i=0;i<3;i++) {
                p=FIND(i); if(!p) continue;
                if(!p->active) {
                    if(ABS(RAND(8)-4)==0) {
                        { const u16 *src=(const u16 *)&t0990; u16 *dst=(u16 *)&copy0990; u32 n=sizeof(t0990)/4; if(sizeof(t0990)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0990=t0990; }
                        p->active=one;
                        p->x=FX(copy0990.v[(i)*2]); p->y=FX(copy0990.v[(i)*2+1])-0x18000;
                        p->sy=0;
                        if(e->flags&2) p->sx++;
                    }
                } else {
                    p->y+=0x3000;
                    if(e->timer<5) p->sy+=12;
                    else if(p->sy>=4) p->sy-=8;
                    else p->sy=0;
                }
            }
            e->timer++; END_IF(e->timer>10);
            break;
        }
        /* 0x0c9c */
        case 0x3c: {
            u8 i;
            e->y+=0x8000;
            if(e->state==0) {
                for(i=0;i<5;i++) {p=FIND(i);if(p){p->active=0;p->flag=one;p->y=FX(-3*i);}}
                e->state=one;
            }
            if(e->state==1) {
                for(i=0;i<5;i++) {p=FIND(i);if(p){p->y+=0x1000;if((s32)e->timer >= (s32)p->id){p->active=one;ORBIT(p,((s32)(e->timer-p->id)*0x2220)%0xffff,20);}}}
                e->timer++;END_IF(e->timer>40);
            }
            break;
        }
        /* 0x0de8 and 0x0ec0: shared child-effect creation paths. */
        case 0x33: case 0x35:
            if(e->mode==0) {
                if(e->frame==0) {childType=0x37;goto spawn_id;}
                if(e->frame==5) {
                spawn39_id:
                    func_0206e990(0x3a,e->id);childType=0x39;goto spawn_id;
                }
                if(e->frame==10) {
                spawn3b_id:
                    func_0206e990(0x3c,e->id);childType=0x3b;
                spawn_id:
                    func_0206e990(childType,e->id);break;
                }
            } else {
                if(e->frame==0) {childType=0x37;goto spawn_ptr;}
                if(e->frame==5) {
                spawn39_ptr:
                    func_0206e8f0(0x3a,e->object,e->mode);childType=0x39;goto spawn_ptr;
                }
                if(e->frame==10) {
                spawn3b_ptr:
                    func_0206e8f0(0x3c,e->object,e->mode);childType=0x3b;
                spawn_ptr:
                    func_0206e8f0(childType,e->object,e->mode);break;
                }
            }
            END_IF(e->frame==26);break;
        case 0x34:
            if(e->mode==0) {
                if(e->frame==0) goto spawn39_id;
                if(e->frame==5) goto spawn3b_id;
            } else {
                if(e->frame==0) goto spawn39_ptr;
                if(e->frame==5) goto spawn3b_ptr;
            }
            END_IF(e->frame==15);break;
        /* 0x0f78 */
        case 0x86: {
            u8 i;
            e->y+=0x4000;
            if(e->state==0){for(i=0;i<5;i++){p=FIND(i);if(p){p->active=0;p->flag=one;p->y=FX(-3*i);}}e->state=one;}
            if(e->state==1){for(i=0;i<5;i++){p=FIND(i);if(p){p->y+=0x800;if((s32)e->timer >= (s32)p->id){p->active=one;ORBIT(p,((s32)(e->timer-p->id)*0x2220)%0xffff,10);}}}e->timer++;END_IF(e->timer>20);}
            break;
        }
        /* 0x10c4 */
        case 7:
            e->y+=0x14000;
            if(e->state==0){p=FIND(0);if(p){p->x+=0x10000;p->z-=0x4000;p->active=one;}e->state=one;}
            p=FIND(0);p->rotation+=0xaaa;
            if(e->frame>12){p=FIND(0);if(p){p->sx-=(s16)(p->sx/3);p->sy-=(s16)(p->sy/3);}if(p->sx<3 || p->sy<3)e->finished=one;}
            break;
        /* 0x119c */
        case 1:
            e->y+=0x18000;
            if(e->state==0){for(p=e->particles;p;p=p->next){p->z-=0x8000;p->active=one;p->timer=0x1000;p->phase=RAND(4)+2;p->fx=0;p->fy=0;p->sx=0;p->sy=0;}e->state=one;}
            if(e->state==1){ { const u16 *src=(const u16 *)&t0bc0; u16 *dst=(u16 *)&copy0bc0; u32 n=sizeof(t0bc0)/4; if(sizeof(t0bc0)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0bc0=t0bc0; }for(p=e->particles;p;p=p->next){s32 t;DEC_TIMER(p,p->phase);t=0x1000-p->timer;SET_SCALE8(p,(s16)t*copy0bc0.v[p->id].sx,(s16)t*copy0bc0.v[p->id].sy);p->x=(s16)t*copy0bc0.v[p->id].x;p->y=(s16)t*copy0bc0.v[p->id].y;p->x+=0x10000;if(p->timer<0x333){if(p->alpha<4)p->active=0;else p->alpha-=(u8)(p->alpha/4);}}}
            end_frame32_a:
            END_IF(e->frame>32);break;
        /* 0x133c */
        case 8:
            e->y+=0x18000;
            if(e->state==0){p=FIND(1);if(p){p->active=one;p->x+=0x12000;p->z-=0x8000;p->sx=0;p->sy=0;p->fx=0;p->fy=0;p->timer=0x1000;}e->state=one;}
            if(e->state==1){p=FIND(1);if(p){DEC_TIMER(p,e->param);SET_SCALE(p,0x1b000-p->timer*27,0x35000-p->timer*53);END_IF(p->timer<0x80);}}
            break;
        /* 0x1428 */
        case 0x68: case 0x87: {
            u8 i;
            {s32 offset=e->param;if(e->type==0x87)offset+=50;else offset+=24;e->y+=FX(offset);}
            if(e->frame==0){p=FIND(1);if(p){p->active=one;p->x=0x18000;p->z+=0x10000;}}
            if(e->frame==1){p=FIND(0);if(p){p->active=one;p->x=0x2e000;p->z+=0x10000;}}
            for(i=0;i<2;i++){p=FIND(i);if(p){p->x+=6*_s32_div_f(0x1000,e->timer/6);if(i==0)p->sx++;}}
            e->timer++; END_IF(e->timer>16);
            if(e->timer>2){p=FIND(1);if(p){p->sy-=(s16)(p->sy/2);if(p->sy<2)p->active=0;}}
            if(e->timer>5){p=FIND(0);if(p){p->sy-=(s16)(p->sy/2);if(p->sy<2)p->active=0;}}
            break;
        }
        /* 0x15bc */
        case 0x69: {
            u8 i;
            e->y+=FX(e->param+24);
            if(e->state==0){for(i=0;i<2;i++){p=FIND(i);if(p){p->x+=FX((2-i)*8+8);p->z+=0x8000;p->active=one;}}e->state=one;}
            if(e->state==1){
                for(i=0;i<2;i++){p=FIND(i);if(p)p->x+=_s32_div_f(0x1000,e->timer/3)*((2-i)*4);}
                if(e->timer>5){p=FIND(0);if(p){p->sy=p->sy>=2?p->sy-2:0;p->sx=p->sx>=2?p->sx-2:0;}p=FIND(1);goto shrink69;}
                else if(e->timer>3){p=FIND(0);if(p){p->sx+=4;if(p->sy)p->sy--;}p=FIND(1);
                shrink69: if(p){p->sy-=(s16)(p->sy/3);if(p->sy<3)p->sy=0;}}
                else if(e->timer==3){p=FIND(0);if(p){p->sx+=5;p->sy-=3;}p=FIND(1);}
                e->timer++;END_IF(e->timer>24);
            }
            break;
        }
        /* 0x17c4 */
        case 0x6a: {
            u8 i;
            e->y+=FX(e->param+24);
            if(e->state==0){for(i=0;i<2;i++){p=FIND(i);if(p){p->x+=FX((2-i)*2+16);p->z+=0x8000;p->active=one;if(i){p->sx=36;p->sy=82;}else p->sy=30;}}e->state=one;}
            if(e->state==1){for(i=0;i<2;i++){p=FIND(i);if(p)p->x+=_s32_div_f(0x1000,e->timer/3)*((2-i)*4);}if(e->frame){p=FIND(0);if(p){p->sx+=5;p->sy-=(s16)(p->sy/2);if(p->sy<2)p->sy=0;}p=FIND(1);if(p){p->sy/=2;p->sx-=(s16)(p->sx/3);if(p->sx<3)p->active=0;}}}
            END_IF(e->frame>16);break;
        }
        /* 0x1960 */
        case 5: {
            u8 i; s32 done;
            e->y+=0x18000;
            if(e->state==0){for(i=0;i<2;i++){p=FIND(i);if(p){p->active=one;p->y=0x20000;p->z-=0x8000;p->x=i?-0x20000:0x20000;}}e->state=one;}
            if(e->state==1){done=0;for(i=0;i<2;i++){p=FIND(i);if(p){p->x-=p->x/4;p->y-=p->y/4;if(p->y<=0x4000 && p->y>=-0x4000)done=one;}}if(done)e->state=2;}
            if(e->state==2){done=0;for(i=0;i<2;i++){p=FIND(i);if(p){p->x-=p->x*3;p->y-=p->y*3;p->sx-=(s16)(p->sx/4);p->sy-=(s16)(p->sy/4);if((p->sx<4 && p->sx>-4)||p->sy<4)done=one;}}if(done)e->finished=one;}
            goto end_frame32_b;
        }
        /* 0x1b10 */
        case 0x65: {
            u8 i;
            e->y+=0xe000;
            if(e->state==0){{ const u16 *src=(const u16 *)&t0ae0; u16 *dst=(u16 *)&copy0ae0; u32 n=sizeof(t0ae0)/4; if(sizeof(t0ae0)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0ae0=t0ae0; }for(i=0;i<16;i++){p=FIND(i);if(p){s16 x=copy0ae0.v[i*2], y=copy0ae0.v[i*2+1];p->x=FX(x);p->y=FX(y);}}e->state=one;}
            if(e->state==1){for(i=0;i<16;i++){p=FIND(i);if(!p)continue;if(p->active==0 && p->phase==0){if(ABS(RAND(8)-4)==0)p->active=one;}else{p->x-=p->x/6;p->y-=p->y/6;p->sx-=(s16)(p->sx/6);p->sy-=(s16)(p->sy/6);if((p->sx<6 && p->sx>-6)||(p->sy<6 && p->sy>-6)){p->active=0;p->phase=one;}}}e->timer++;END_IF(e->timer>32);}
            break;
        }
        /* 0x1cdc */
        case 0x3f: case 0x40: {
            u8 i;
            if(e->state==0){{ const u16 *src=(const u16 *)&t0980; u16 *dst=(u16 *)&copy0980; u32 n=sizeof(t0980)/4; if(sizeof(t0980)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0980=t0980; }for(i=0;i<4;i++){p=FIND(i);if(p){p->fx=0;p->fy=0;p->z=FX(copy0980.v[i]);p->active=one;}}e->timer=0x1000;e->state=one;}
            if(e->state==1){
                {u16 decrement;if(e->param==0)decrement=(u16)(e->timer/8);else decrement=(u16)_s32_div_f(e->timer,e->param);e->timer-=decrement;}
                for(i=0;i<4;i++){p=FIND(i);if(!p)continue;p->fx=(0x1000-e->timer)*34;p->fy=(0x1000-e->timer)*18;if(i==1)p->fx*=-1;else if(i==2)p->fy*=-1;else if(i==3){p->fx*=-1;p->fy*=-1;}HALF_POS(p);if(e->timer>32){if(i==2||i==3)p->y+=0x1000;if(i==1||i==3)p->x+=0x1000;}SCALE8(p);}
                for(i=4;i<12;i++){
                    p=FIND(i);if(!p)continue;
                    if(p->phase==0 && p->timer<4 && ABS(RAND(2)-1)==0){p->active=one;p->x=FX(RAND(48)-24);p->y=FX(RAND(48)-24);p->sy=0;p->phase=one;}
                    if(p->phase==1){p->y+=0x3000;if(p->sy<32)p->sy+=3;if(ABS(RAND(10)-5)==0)p->phase=2;}
                    if(p->phase==2){p->y+=0x4000;if(p->sy>=4)p->sy-=4;else{p->timer++;p->phase=0;p->active=0;}}
                }
            }
            if(e->frame>55){for(i=0;i<12;i++){p=FIND(i);if(p){if(p->alpha>=2)p->alpha-=2;else e->finished=one;}}}
            break;
        }
        /* 0x2080 and 0x29cc. Keep separate expansions for the two tables. */
#define BURST(tbl,a) do { \
    u8 i; e->y+=0x18000; \
    if(e->state==0){a=(tbl); \
        for(i=0;i<12;i++){if(i!=0 && ABS(RAND(2)-1)==0)continue; p=FIND(i);if(!p)continue;p->active=one; \
            if(i!=0 && i<9){p->dx=(s8)(a.v[(i)*2]+(RAND(8)-4));p->dy=(s8)(a.v[(i)*2+1]+(RAND(8)-4));} \
            else if(i>=9){p->dx=(s8)(RAND(84)-42);p->dy=(s8)(RAND(84)-42);} \
            else{p->x=FX(a.v[(i)*2]);p->y=FX(a.v[(i)*2+1]);} \
            p->timer=0x1000;p->phase=ABS(RAND(6)-3)+8; \
        }e->state=one; \
    } \
    if(e->state==1){for(i=0;i<12;i++){p=FIND(i);if(!p||!p->active)continue; \
        if(i!=0){DEC_TIMER(p,p->phase);p->x=p->dx*(0x1000-p->timer);p->y=p->dy*(0x1000-p->timer);} \
        else{p->timer-=(u16)(p->timer/12);SET_SCALE(p,(0x1000-p->timer)*(-30)-0x26000,(0x1000-p->timer)*30+0x26000);} \
    }} \
    if(e->frame>6){p=FIND(0);if(p)FADE(p,2);} \
    if(e->frame>12){for(i=1;i<12;i++){p=FIND(i);if(p)FADE(p,3);}} \
    END_IF(e->frame>32); \
} while (0)
        case 0x12: BURST(t0a28,copy0a28); break;
        /* 0x23b4 and 0x2d0c. The original duplicates these full blocks. */
#define RISING_BURST() do { \
    u8 i; \
    e->y+=0x1a000; \
    if(e->state==0){ \
        for(i=0;i<8;i++){p=FIND(i);if(!p)continue; \
            if(p->active==0 && p->phase==0 && e->frame<48){ \
                if(ABS(RAND(4)-2)!=0)continue; \
                p->active=one;p->x=FX(RAND(24)-12);p->y=FX(RAND(16)-8); \
                if((s32)i%2==0){p->fx=0x24000;p->fy=0x24000;}else{p->fx=0x1a000;p->fy=0x1b000;} \
                {s32 v=RAND(6)-3;p->timer=ABS(v);} \
            }else{ \
                s32 v=RAND(4)-1;p->y+=0x1000+ABS(v)*0x800; \
                v=RAND(4)-2;p->fx-=_s32_div_f(p->fx,p->timer+6+v);p->fy+=p->fy/40; \
                SCALE(p);if(p->sy>32)p->sy=32;if(p->sx<2){p->active=0;p->phase++;} \
            } \
        } \
        e->timer++; \
        for(i=8;i<14;i++){p=FIND(i);if(!p)continue; \
            if(p->active==0 && p->phase<4 && e->frame<48){if(ABS(RAND(8)-4)!=0)continue;p->active=one;p->x=FX(RAND(28)-14);p->y=FX(RAND(18)-9);p->fx=0x3000;p->fy=(s32)i%2==0?0x7000:0x5000;} \
            else{p->y+=0x1000;SET_SCALE(p,p->fx-(p->fx/48),p->fy-(p->fy/48));if(p->sx<1){p->active=0;p->phase++;}} \
        } \
        for(i=14;i<18;i++){p=FIND(i);if(!p)continue; \
            if(!p->active){p->alpha=16;p->active=one;p->fx/=10;p->fy/=10;p->timer=0x1000;p->x=FX(RAND(16)-8);p->y=FX(RAND(16)-8);} \
            else{ s32 d=RAND(4)+30; DEC_TIMER(p,d); \
                if(!p->phase){p->fx=(0x1000-p->timer)*32;p->fy=(0x1000-p->timer)*32;}else{p->fx-=p->fx/10;p->fy-=p->fy/10;} \
                if(e->frame>(u32)(RAND(8)+36) || RAND(16)==8)p->phase=one; \
                SCALE(p);{s32 v=RAND(4)-2;p->y+=ABS(v)*0x800;}p->x+=FX(RAND(2)-1); \
            } \
        } \
    } \
    if(e->frame>8){for(i=0;i<8;i++){p=FIND(i);if(p)FADE(p,3);}} \
    END_IF(e->frame>64); \
} while (0)
        case 0xf: RISING_BURST();break;
        /* 0x28f0 */
        case 0x77:
            e->y+=0x10000;
            if(e->state==0){p=FIND(0);if(p)p->active=one;e->timer=2;e->state=one;}
            if(e->state==1){p=FIND(0);if(p){p->x=p->x+FX(RAND(2)-1)-0x400;p->y+=FX(e->timer+1)/2;p->fx-=3*(p->fx/100);p->sx=p->fx>>12;if(p->fx<0x800){p->active=0;e->finished=one;}}}
            break;
        case 0x82: func_0206a854((u8 *)e);break;
        case 0x83: BURST(t0a4c,copy0a4c);break;
        case 0x84: RISING_BURST();break;
#undef BURST
#undef RISING_BURST
        /* 0x325c */
        case 0x78: case 0x81:
            if(e->state==0){p=FIND(0);if(p){p->x+=0x100000;p->y+=0x100000;p->active=one;}e->state=one;}
            if(e->state==1){p=FIND(0);if(p){p->x-=0x9000;p->y-=0x9000;if(p->y<=e->y){p->active=0;e->finished=one;}}}
            break;
        /* 0x32e8 */
        case 0x7c: {
            u8 i;
            switch(e->state){
            case 0:{{ const u16 *src=(const u16 *)&t0970; u16 *dst=(u16 *)&copy0970; u32 n=sizeof(t0970)/4; if(sizeof(t0970)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0970=t0970; }
                for(i=0;i<3;i++){p=FIND(i);p->active=one;p->dx=copy0970.v[i]*0x4000;p->dy=FX(RAND(2)+3);if(i==1)p->dy+=0x1000;p->sx+=(s16)(RAND(2)-1);p->sy+=(s16)(RAND(2)-1);}
                for(i=3;i<6;i++){p=FIND(i);p->active=one;p->dx=FX(RAND(16)-8);p->dy=FX(RAND(8)-4);}e->state=one;break;}
            case 1:
                for(i=0;i<3;i++){p=FIND(i);p->x+=p->dx;p->y+=p->dy;p->dx=p->dx*76/100;p->dy=p->dy*80/100;p->sx++;p->sy++;if(e->frame>8)FADE(p,2);}
                for(i=3;i<6;i++){p=FIND(i);p->x+=p->dx;p->y+=p->dy;p->dx=p->dx*70/100;p->dy=p->dy*85/100;FADE(p,2);}
                break;
            }
            END_IF(e->frame>48);break;
        }
        /* 0x357c */
        case 0x7d:
            e->y-=0x20000;
            if(e->state==0){p=FIND(0);if(p){p->y+=0xc0000;p->active=one;}e->state=one;}
            if(e->state==1){
                p=FIND(0);
                switch(p->phase){
                case 0:{
                    s32 x=p->dx;
                    s32 xf=func_0201f884(x);
                    s32 yf=func_0201f884(p->dy);
                    s32 ratio=func_0201ff0c(func_020201f4(0x42c80000,func_02020888(xf,yf)));
                    p->x-=x;p->y-=(ratio*0x2000)/100;
                    p->dx=p->dx*94/100;
                    p->fx=((ratio-50)*0x8000)/50;p->sx=p->fx>>12;
                    if(p->dx<=0x800 && p->dx>=-0x800){s32 n=RAND(4)-2; s32 sign=_s32_div_f(n,ABS(n));p->dx=FX(n+sign*2+1);p->dy=p->dx;}
                    break;}
                case 1:
                    p->x-=FX(RAND(6)-3);p->y-=FX(RAND(2));if(RAND(12)==0){if(p->flip==0)p->flip=8;else p->flip=0;}break;
                }
                if(p->y<=e->y){p->active=0;e->finished=one;}
            }
            break;
        /* 0x376c */
        case 0x7e: case 0x80: {
            u8 i;
            if(e->state==0){
                s32 offset=((RAND(256)-128)/2)*2-140;
                s32 flip=0; s16 x=0,y=0;
                e->timer=(u8)(RAND(3)+2);
                for(i=0;i<e->count;i++){
                    p=FIND(i);
                    if((s32)i%2==0){flip=(u8)RAND(2);x=(s16)(((RAND(64)-32)/2)*2);y=(s16)(((RAND(64)-32)/2)*2);p->x=FX(x)+0x20000;p->y=FX(y);}
                    else{p->x=FX(x)-0xc000;p->y=FX(y)-0x9000;}
                    if(flip)p->sy*=-1;
                    p->x+=FX(offset);p->y+=0x8c000;p->active=one;
                }
                e->state=one;
            }
            if(e->state==1){for(i=0;i<e->count;i++){p=FIND(i);p->x+=FX(e->timer);p->y-=FX(e->timer);if(e->type==0x80){p->x+=0x1000;p->y-=0x1000;}}}
            END_IF(e->frame>256);break;
        }
        /* 0x3958 */
        case 0x7f: {
            u8 i;
            switch(e->state){
            case 0:
                for(i=0;i<4;i++){p=FIND(i);SET_SCALE_POS(p,p->fx/(100),p->fy/(100));p->active=one;}
                for(i=4;i<e->count;i++){p=FIND(i);p->x=FX(RAND(64)-32);p->y=FX(RAND(64)-32);p->active=one;}
                e->state=one;break;
            case 1:
                for(i=0;i<4;i++){
                    p=FIND(i);
                    if(p->phase==0){
                        s32 x=p->fx,y=p->fy;
                        s32 dx=(_s32_div_f(x,ABS(x))*0x7000-x)*10/100;
                        s32 dy=(_s32_div_f(y,ABS(y))*0x7000-y)*10/100;
                        p->fx+=dx;p->fy+=dy;
                        /* Original branches accept a small X OR a small Y delta. */
                        if((dx<128 && dx>-128)||(dy<128 && dy>-128))p->phase=one;
                    }else{p->fx=p->fx*88/100;p->fy=p->fy*88/100;}
                    SCALE(p);p->dx+=0x3000;p->dy+=0x3000;p->x=p->fx/2-p->dx;p->y=p->dy+p->fy/2;
                    if(i==0)p->x-=0x1000;else if(i==2)p->y+=0x1000;else if(i==3){p->x-=0x1000;p->y+=0x1000;}
                }
                for(i=4;i<e->count;i++){p=FIND(i);p->x-=0x2000;p->y+=0x2000;SET_SCALE(p,p->fx*96/100,p->fy*96/100);}
                break;
            }
            END_IF(e->frame>128);break;
        }
        /* 0x3ccc */
        case 4: {
            u8 i;
            e->y+=0x18000;
            if(e->state==0){for(i=0;i<3;i++){p=FIND(i);if(p){p->active=one;p->x=p->x-0xb000-FX(i*4);p->y=p->y+0xb000-FX(i*4);p->z-=FX(i*4);SET_SCALE(p,p->fx+(p->fx/10),p->fy+(p->fy/10));}}e->state=one;}
            else if(e->state==1){
                for(i=0;i<3;i++){p=FIND(i);if(p){if(e->timer>=3)p->active=0;else{p->x+=0x7000;p->y-=0x7000;}}}
                if(e->timer>=3){for(i=3;i<6;i++){p=FIND(i);if(p){p->active=one;p->x=p->x+0x10000-FX((i-3)*4);p->y=p->y-0x10000-FX((i-3)*4);p->z-=FX((i-3)*4);}}e->state=2;}
                e->timer++;
            }
            if(e->state==2){for(i=3;i<6;i++){p=FIND(i);if(p)FADE(p,5);}}
            if(e->timer==2){for(i=6;i<22;i++){if(ABS(RAND(2)-1)!=0)continue;p=FIND(i);if(p){p->active=one;p->timer=0x1000;p->phase=ABS(RAND(6)-3)+3;}}}
            if(e->timer>=2){{ const u16 *src=(const u16 *)&t0aa0; u16 *dst=(u16 *)&copy0aa0; u32 n=sizeof(t0aa0)/4; if(sizeof(t0aa0)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0aa0=t0aa0; }for(i=6;i<22;i++){p=FIND(i);if(p&&p->active){DEC_TIMER(p,p->phase);p->x=(0x1000-p->timer)*copy0aa0.v[(i-6)*2];p->y=(0x1000-p->timer)*copy0aa0.v[(i-6)*2+1];if(p->timer<0x500)FADE(p,3);}}}
            goto end_frame32_a;
        }
        /* 0x405c */
        case 0xe: {
            u8 i;
            e->y+=0x18000;
            if(e->state==0){{ const u16 *src=(const u16 *)&t099c; u16 *dst=(u16 *)&copy099c; u32 n=sizeof(t099c)/4; if(sizeof(t099c)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy099c=t099c; }for(i=0;i<8;i++){p=FIND(i);if(p){p->x=FX(copy099c.v[(i/2)*2]);p->y=FX(copy099c.v[(i/2)*2+1]);SET_SCALE(p,p->fx+(5*(p->fx/10)),p->fy+(5*(p->fy/10)));}}e->state=one;}
            if(e->state==1){s16 previous;e->timer++;if(e->timer>=8)e->timer=0;previous=e->timer-1;if(previous<0)previous=7;p=FIND(previous);if(p)p->active=0;p=FIND(e->timer);if(p)p->active=one;}
            goto end_frame32_b;
        }
        /* 0x41b0 */
        case 0x67: {
            u8 i;
            e->y+=0x3000;
            if(e->state==0){for(i=0;i<6;i++){p=FIND(i);if(!p)continue;p->active=one;if(i<4){SET_SCALE(p,p->fx/(10),p->fy/(10));if(i<2)p->z+=0x10000;}p->timer=0x1000;}e->state=one;}
            if(e->state==1){for(i=0;i<6;i++){p=FIND(i);if(!p)continue;if(i<4){p->timer-=(u16)(p->timer/3);p->fx=(0x1000-p->timer)*((s32)i%2==0?57:-57);p->fy=(0x1000-p->timer)*(i<2?32:28);}else if(p->active){p->timer-=(u16)(p->timer/3);p->fx-=p->fx/5;p->fy=(0x1000-p->timer)*48;}HALF_POS(p);if(i>=2&&i<4)p->y-=p->fy-0xa000;SCALE(p);if(p->sx<2 && p->sx>-1)p->active=0;}}
            END_IF(e->frame>6);break;
        }
        /* 0x43d8 */
        case 3: {
            u8 i;
            e->y+=0x10000;
            if(e->state==0){for(i=0;i<2;i++){p=FIND(i);if(p){p->active=one;p->x+=0x28000;if(e->param){p->fx*=2;p->fy*=2;}p->timer=0;}}e->phase=one;e->state=one;}
            if(e->state==1){
                { const u16 *src=(const u16 *)&t0988; u16 *dst=(u16 *)&copy0988; u32 n=sizeof(t0988)/4; if(sizeof(t0988)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0988=t0988; }
                for(i=0;i<2;i++){p=FIND(i);if(!p)continue;p->x-=0x10000;if(e->phase==0)p->timer-=(u16)(p->timer/3);else if(e->phase==2)p->timer+=(u16)((0x1000-p->timer)/3);if(p->timer<0x200 && e->phase!=2)e->phase=one;
                    if(e->param==0){p->fx=(0x1000-p->timer)*copy0988.v[i*2];p->fy=(0x1000-p->timer)*copy0988.v[i*2+1];}else{p->fx=(0x1000-p->timer)*(copy0988.v[i*2]+copy0988.v[i*2]/2);p->fy=(0x1000-p->timer)*(copy0988.v[i*2+1]+copy0988.v[i*2+1]/2);}SCALE(p);if(p->sy<2 && p->sy>-2)p->active=0;p->y=p->fy/2;
                }
                {{ const u16 *src=(const u16 *)&t0a08; u16 *dst=(u16 *)&copy0a08; u32 n=sizeof(t0a08)/4; if(sizeof(t0a08)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0a08=t0a08; }for(i=2;i<10;i++){p=FIND(i);if(!p)continue;if(p->active){p->timer-=(u16)(p->timer/4);if(e->param==0){p->x=(0x1000-p->timer)*copy0a08.v[(i-2)*2];p->y=(0x1000-p->timer)*copy0a08.v[(i-2)*2+1];}else{p->x=(0x1000-p->timer)*(copy0a08.v[(i-2)*2]+copy0a08.v[(i-2)*2]/2);p->y=(0x1000-p->timer)*(copy0a08.v[(i-2)*2+1]+copy0a08.v[(i-2)*2+1]/2);}if(e->timer2>6)FADE(p,6);}else{p->active=one;p->timer=0x1000;if(e->param){p->fx+=p->fx/2;p->fy+=p->fy/2;}}SCALE(p);}}
                e->timer2++;if(e->phase==1){e->timer++;if(e->timer>=3)e->phase=2;}
            }
            goto end_frame32_b;
        }
        /* 0x4798 */
        case 0x66: {
            u8 i;
            if(e->state==0){for(i=0;i<6;i++){p=FIND(i);if(!p)continue;if(p->active){p->fx+=FX(RAND(10)-5);if(e->frame>8)p->fx-=p->fx/3;p->sx=p->fx>>12;if(p->sx<3&&p->sx>-3){p->active=0;p->phase=one;}p->x=-FX(p->dx+p->sx/2);}else if(p->phase==0){p->active=one;p->dx=(s8)(RAND(16)-8);p->x=FX(p->dx);p->y=FX(i*6+(RAND(2)-1));if(ABS(RAND(2)-1)==0)p->z+=0x10000;}}}
            END_IF(e->frame>16);break;
        }
        /* 0x4908 */
        case 0x10: case 0x14: {
            u8 i,j,k;
            e->y+=0x10000;
            if(e->state==0){
                for(i=0;i<4;i++){
                    p=FIND(i);if(!p)continue;
                    if(p->active){if(p->timer>=2)p->active=0;else p->alpha-=10;p->timer++;}
                    else if(ABS(RAND(8)-4)==0){p->active=one;p->x=FX(RAND(36)-18);p->y=FX(RAND(36)-18);p->z=-0x10000;p->timer=0;p->alpha=31;if(ABS(RAND(2)-1)!=0)p->sx*=-1;if(ABS(RAND(2)-1)!=0)p->sy*=-1;}
                }
                for(i=4;i<12;i+=4){
                    p=FIND(i);if(!p)continue;
                    if(!p->active){
                        if(ABS(RAND(4)-2)==0){ s16 x,y; s8 delta;{ const u16 *src=(const u16 *)&t09bc; u16 *dst=(u16 *)&copy09bc; u32 n=sizeof(t09bc)/4; if(sizeof(t09bc)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy09bc=t09bc; }x=(s16)(RAND(40)-20);y=(s16)(RAND(40)-20);delta=(s8)(RAND(10)-5);
                            for(j=i;j<i+4;j++){p=FIND(j);if(!p)continue;k=j-i;p->active=one;SET_SCALE(p,FX((ABS(delta)+8)*(copy09bc.v[(k)*2]/10)),FX((ABS(delta)+8)*(copy09bc.v[(k)*2+1]/10)));p->x=-p->fx/2+FX(x);p->y=p->fy/2+FX(y);p->z=-0x10000;CORNER(p,k);p->dx=(s8)x;p->dy=(s8)y;}
                        }
                    }else{for(j=i;j<i+4;j++){p=FIND(j);if(!p)continue;SET_SCALE(p,p->fx-(p->fx/4),p->fy-(p->fy/4));if(p->fx<0x3000&&p->fx>-0x3000)p->active=0;p->x=-p->fx/2+FX(p->dx);p->y=p->fy/2+FX(p->dy);CORNER(p,j-i);}}
                }
            }
            goto end_frame32_a;
        }
        /* 0x4df0 */
        case 0x11: case 0x13: {
            u8 i;
            e->y+=0x10000;
            if(e->state==0){
                { const u16 *src=(const u16 *)&t09cc; u16 *dst=(u16 *)&copy09cc; u32 n=sizeof(t09cc)/4; if(sizeof(t09cc)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy09cc=t09cc; }
                for(i=0;i<4;i++){
                    p=FIND(i);if(!p)continue;
                    if(p->active){if(p->timer>=2)p->active=0;else p->alpha-=10;p->timer++;}
                    else if(ABS(RAND(8)-4)==0){p->active=one;p->x=FX(RAND(36)-18);p->y=FX(RAND(36)-18);p->z=-0x10000;p->timer=0;p->alpha=31;if(ABS(RAND(2)-1)!=0)p->sx*=-1;if(ABS(RAND(2)-1)!=0)p->sy*=-1;}
                }
                if(e->phase==1){e->timer-=e->timer/8;if(e->timer<0x80)e->phase=2;}
                else if(e->phase==2)e->timer+=(u16)((0x1000-e->timer)/8);
                for(i=4;i<8;i++){p=FIND(i);if(!p)continue;
                    if(p->active && p->phase==0){p->fx=(0x1000-e->timer)*copy09cc.v[(i-4)*2];p->fy=(0x1000-e->timer)*copy09cc.v[(i-4)*2+1];HALF_POS(p);if(e->timer<=0x400 && e->phase==1){p->alpha=(e->timer*31)/1024;if(p->alpha<3){p->active=0;p->phase=one;}}if(e->phase==2){p->active=0;p->phase=one;}}
                    else{p->active=one;p->fx=0;p->fy=0;e->timer=0x1000;e->phase=one;}SCALE(p);
                }
            }
            goto end_frame32_a;
        }
        /* 0x512c */
        case 0x3d: case 0x3e: {
            u8 i;
            s32 sign=e->type==0x3e?-1:1;
            e->y+=0x10000;
            if(e->state==0){for(i=0;i<6;i++){p=FIND(i);if(p){p->active=one;p->y=sign*(-0x18000);}}e->timer=0x1000;e->state=one;}
            if(e->state==1){
                if(e->phase==0)e->timer-=(u16)(e->timer/3);
                else if(e->phase==1)e->timer+=(u16)((0x1000-e->timer)/3);
                for(i=0;i<6;i++){
                    p=FIND(i);if(!p)continue;
                    ORBIT(p,(u32)((e->frame-p->id*6)*0x71c)%0xffff,24);
                    SET_SCALE(p,(0x1000-e->timer)*20,(0x1000-e->timer)*20);
                    if(e->type==0x3d){p->y+=0xc00;if(p->y>=0x8000)e->phase=one;}
                    else{p->y-=0xa00;if(p->y<=(s32)0x80008001>>16)e->phase=one;}
                    if(p->sx<3 && p->sx>-3 && e->phase!=0){p->active=0;e->state=2;}
                }
            }
            if(e->state==2){
                if(e->type==0x3d){
                    if(e->mode==0){func_0206e990(0x3b,e->id);func_0206e990(0x3a,e->id);}
                    else{func_0206e8f0(0x3b,e->object,e->mode);func_0206e8f0(0x3a,e->object,e->mode);}
                    e->finished=one;
                }else{if(e->flags&2){for(i=6;i<12;i++){p=FIND(i);if(p)p->sx++;}}e->state=3;}
            }
            if(e->state==3){
                for(i=6;i<12;i++){
                    p=FIND(i);if(!p)continue;
                    if(p->active){
                        p->y-=FX(p->timer);p->fy+=p->fy/8;
                        if((p->y>>12)<4 || ABS(RAND(24)-12)==0){if(p->alpha<6){p->active=0;continue;}p->alpha-=6;p->fy-=p->fy/3;}
                    }else if(ABS(RAND(12)-6)==0 && e->frame<20){p->active=one;p->y=FX(RAND(16)+37);p->x=FX(RAND(32)-16);p->alpha=31;p->timer=ABS(RAND(2)-1)+2;p->fy=0x8000;}
                    p->sy=p->fy>>12;if(p->sy>28)p->sy=28;
                }
                END_IF(e->frame>55);
            }
            break;
        }
        /* 0x55b8 */
        case 9: case 0xa: {
            u8 i,j,k;
            e->y+=0x1c000;
            if(e->state==0){
                for(i=0;i<16;i+=4){
                    p=FIND(i);if(!p)continue;
                    if(!p->active){
                        if((s32)e->timer%8==0 && e->frame<20){
                            s16 x, y;
                            s8 d;
                            { const u16 *src=(const u16 *)&t0974; u16 *dst=(u16 *)&copy0974; u32 n=sizeof(t0974)/4; if(sizeof(t0974)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0974=t0974; }
                            { const u16 *src=(const u16 *)&t09dc; u16 *dst=(u16 *)&copy09dc; u32 n=sizeof(t09dc)/4; if(sizeof(t09dc)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy09dc=t09dc; }
                            x=(s16)(RAND(12)-6);y=(s16)(RAND(6)-3);d=(s8)(RAND(4)-2);
                            for(j=i;j<i+4;j++){
                                p=FIND(j);if(!p)continue;k=j-i;p->active=one;
                                SET_SCALE(p,(ABS(d)+8)*(FX(copy09dc.v[(k)*2])/6),(ABS(d)+8)*(FX(copy09dc.v[(k)*2+1])/6));
                                p->dx=(s8)(copy0974.v[(s32)e->timer2%2]+x);
                                p->dy=(s8)(y-e->timer);
                                p->x=FX(p->dx)+p->fx/2;p->y=FX(p->dy)+p->fy/2;
                                p->z=-0x10000;CORNER(p,k);
                            }
                            e->timer2++;
                            break;
                        }
                    }else{
                        for(j=i;j<i+4;j++){
                            p=FIND(j);if(!p)continue;
                            SET_SCALE(p,p->fx-(p->fx/6),p->fy-(p->fy/6));
                            if(p->fx<0x3000&&p->fx>-0x3000)p->active=0;
                            p->x=FX(p->dx)+p->fx/2;p->y=FX(p->dy)+p->fy/2;CORNER(p,j-i);
                        }
                    }
                }
                e->timer+=2;
            }
            goto end_frame32_b;
        }
        /* 0x592c */
        case 0xb: case 0xc: case 0xd: case 0x15: case 0x85: {
            u8 i;
            e->y+=0x10000;
            if(e->state==0){
                for(i=0;i<7;i++){
                    p=FIND(i);if(!p)continue;
                    if(p->active){
                        DEC_TIMER(p,p->phase);p->x=p->dx*(0x1000-p->timer);p->y=p->dy*(0x1000-p->timer);
                        if(p->timer<0x400)FADE(p,3);
                        if(e->type==0xb||e->type==0x15){{ const u16 *src=(const u16 *)&t09ec; u16 *dst=(u16 *)&copy09ec; u32 n=sizeof(t09ec)/4; if(sizeof(t09ec)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy09ec=t09ec; }p->sx=copy09ec.v[(i)*2]+(RAND(6)-3);p->sy=copy09ec.v[(i)*2+1]+(RAND(6)-3);}
                    }else if(p->phase==0){
                        p->active=one;
                        do {p->dx=(s8)ABS(RAND(56)-28);p->dy=(s8)ABS(RAND(56)-28);} while(p->dx+p->dy<=20);
                        if(RAND(20)-10>=0)p->dx*=-1;
                        if(RAND(20)-10>=0)p->dy*=-1;
                        p->timer=0x1000;p->phase=ABS(RAND(6)-3)+6;
                        if(ABS(RAND(2)-1)==0)p->sx*=-1;
                    }
                }
                p=FIND(i);
                if(p!=NULL){
                    if(p->active){p->timer-=(u16)(p->timer/8);if(p->timer<0x200){if(p->alpha>=3)p->alpha-=3;else{p->active=0;p->phase=one;e->phase=one;}}p->fx=(0x1000-p->timer)*54;p->fy=(0x1000-p->timer)*60;}
                    else if(p->phase==0){p->active=one;p->fx=0;p->fy=0;p->timer=0x1000;if(e->type==0xb||e->type==0x15)p->alpha=26;}
                    SCALE(p);
                }
                if(e->type==0xc||e->type==0x85){
                    if(e->phase==0){for(i=8;i<14;i++){p=FIND(i);if(!p)continue;if(p->active)p->active=0;else{p->active=one;p->x=FX(RAND(48)-24);p->y=FX(RAND(48)-24);}}}
                    else if(e->phase==1){for(i=8;i<14;i++){p=FIND(i);if(p&&p->active)p->active=0;}e->phase=2;}
                }
            }
            END_IF(e->frame>48);break;
        }
        /* 0x5dbc */
        case 2:
            e->y+=0x10000;
            if(e->state==0){p=FIND(0);if(p){p->active=one;p->x=-0x20000;p->y=0x20000;p->timer=0x1000;}e->state=one;}
            if(e->state==1){p=FIND(0);if(p){p->timer-=(u16)(p->timer/4);if(e->param==0){p->fx=p->timer*42;p->fy=p->timer*42;}else{p->fx=p->timer*58;p->fy=p->timer*58;}SCALE(p);p->x+=0xc000;p->y-=0xc000;if(p->timer<0x400)p->active=0;}}
            END_IF(e->frame>16);break;
        /* 0x5ec8 */
        case 0x36: {
            u8 i;
            if(e->state==0){for(i=0;i<5;i++){p=FIND(i);if(p){p->active=0;p->flag=one;p->y=FX(i*3+48);}}e->state=one;}
            if(e->state==1){for(i=0;i<5;i++){p=FIND(i);if(p){p->y-=0x1400;if(p->y<=0)e->state=2;if((s32)e->timer >= (s32)p->id){p->active=one;ORBIT(p,((s32)(e->timer-p->id)*0x2220)%0xffff,10);}}}e->timer++;}
            if(e->state==2)e->state=3;
            if(e->state==3){for(i=5;i<9;i++){p=FIND(i);if(p)p->active=one;}e->timer2=0x1000;e->state=4;}
            if(e->state==4){
                { const u16 *src=(const u16 *)&t09ac; u16 *dst=(u16 *)&copy09ac; u32 n=sizeof(t09ac)/4; if(sizeof(t09ac)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy09ac=t09ac; }e->timer2-=e->timer2/16;
                for(i=0;i<5;i++){p=FIND(i);if(p){p->active=ABS(RAND(2)-1);p->x=FX(RAND(36)-18);p->y=FX(RAND(36)-18)+0xc000;}}
                for(i=5;i<9;i++){p=FIND(i);if(p){SET_SCALE_POS(p,(0x1000-e->timer2)*copy09ac.v[(i-5)*2],(0x1000-e->timer2)*copy09ac.v[(i-5)*2+1]);if(e->timer2<0x400)FADE(p,3);}}
                END_IF(e->frame>60);
            }
            break;
        }
        /* 0x61f8 */
        case 0x43: {
            u8 i;
            e->y+=0x18000;
            if(e->state==0){p=FIND(0);if(p){p->x+=0xb000;p->active=one;}p=FIND(1);if(p)p->active=one;e->state=one;}
            if(e->state==1){p=FIND(0);if(p)p->x+=0xe000;p=FIND(1);if(p){p->sx+=14;p->x=FX(p->sx/2);}if(e->frame>16){for(i=0;i<2;i++){p=FIND(i);if(p)FADE(p,2);}}}
end_frame32_b:
            END_IF(e->frame>32);break;
        }
        /* 0x6300 */
        case 0x44: {
            u8 i;
            e->y+=0x18000;
            if(e->state==0){for(i=0;i<4;i++){p=FIND(i);if(p){if(i<2){p->sx=256;p->x+=0x80000;}p->z=-0x8000;p->sy=one;}}p=FIND(7);if(p){p->timer=0x1000;p->x+=0x18000;p->active=one;}e->state=one;}
            if(e->state==1){p=FIND(7);if(p){p->timer-=(u16)(p->timer/2);p->fx=0x100000-p->timer*256;p->sx=p->fx>>12;p->x=FX(p->sx/2);if(p->timer<0x80)e->state=2;}}
            if(e->state==2){p=FIND(7);if(p){p->x+=0x18000;if(p->alpha>=2)p->alpha-=2;else{p->active=0;e->state=3;}}}
            if(e->state==3){e->timer++;if(e->timer>20){e->state=4;e->timer=0;for(i=0;i<4;i++){p=FIND(i);if(p){p->x+=0x18000;p->timer=0x1000;p->active=one;}}}}
            if(e->state==4){
                s8 offset=(s8)(RAND(4)-2);
                for(i=0;i<4;i++){
                    p=FIND(i);if(!p)continue;
                    if(e->phase==0){p->timer-=(u16)(p->timer/4);if(i==0||i==2)p->fy=(0x1000-p->timer)*14;else p->fy=(0x1000-p->timer)*(-14);if(e->timer>160){p->timer=0x1000;e->phase=one;e->timer=0;}}
                    else{p->fy-=p->fy/6;END_IF(e->timer>48);}
                    p->sy=p->fy>>12;if(p->sy<=1 && p->sy>=0 && e->phase==1)e->finished=one;p->y=p->fy/2+FX(offset);if(i==0||i==2)p->y-=0x1000;
                }
                for(i=4;i<7;i++){
                    p=FIND(i);if(!p)continue;
                    if(!p->active){if(ABS(RAND(6)-3)==0){p->active=one;p->x=FX(ABS(RAND(256)-128))+0x10000;p->y=FX(RAND(32)-16);p->z=-0x18000;p->timer=(s8)(ABS(RAND(4)-2)+4);p->sx=0;}}
                    else{if(p->phase==0){p->sx+=3;if(ABS(RAND(8)-4)==0)p->phase=one;}else{if(p->sx>=4)p->sx-=4;else{p->active=0;p->phase=0;}}p->x+=FX(p->timer);}
                    if(e->phase)FADE(p,3);
                }
                e->timer++;
            }
            break;
        }
        /* 0x67e0 */
        case 0x45: {
            u8 i;
            e->x+=0x18000;e->y+=0x18000;
            switch(e->state){
            case 0:{{ const u16 *src=(const u16 *)&t0978; u16 *dst=(u16 *)&copy0978; u32 n=sizeof(t0978)/4; if(sizeof(t0978)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0978=t0978; }
                for(i=0;i<4;i++){p=FIND(i);p->x=FX(copy0978.v[i]);p->y=p->fy/2;if(i==0)p->sx=256;else if(i==1){p->sx=256;p->y+=0x1000;}else if(i==3)p->y+=0x1000;p->active=one;}e->state=one;break;}
            case 1:
                for(i=0;i<4;i++){p=FIND(i);p->fy=p->fy*75/100;p->sy=p->fy>>12;p->y=p->fy/2;if(i==1||i==3)p->y+=0x1000;END_IF(p->sy==0);}break;
            }
            END_IF(e->frame>24);break;
        }
        /* 0x6940 */
        case 0x47: {
            u8 i;
            switch(e->state){
            case 0:{{ const u16 *src=(const u16 *)&t0a70; u16 *dst=(u16 *)&copy0a70; u32 n=sizeof(t0a70)/4; if(sizeof(t0a70)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0a70=t0a70; }
                for(i=(u8)(e->frame*2);i<e->frame*2+2;i++){p=FIND(copy0a70.v[i].id);if(p){p->active=one;p->x=FX(copy0a70.v[i].x);p->y=FX(copy0a70.v[i].y);}}if(e->frame>=3)e->state=one;break;}
            case 1:{{ const u16 *src=(const u16 *)&t0b20; u16 *dst=(u16 *)&copy0b20; u32 n=sizeof(t0b20)/4; if(sizeof(t0b20)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0b20=t0b20; }for(i=0;i<8;i++){p=FIND(copy0b20.v[i].id);if(p){p->x=FX(copy0b20.v[i].x);p->y=FX(copy0b20.v[i].y);p->sx=copy0b20.v[i].sx;p->sy=copy0b20.v[i].sy;}}e->state=4;break;}
            case 2:{{ const u16 *src=(const u16 *)&t0b70; u16 *dst=(u16 *)&copy0b70; u32 n=sizeof(t0b70)/4; if(sizeof(t0b70)>=16){do{dst[1]=src[1];*dst=*src;src+=2;dst+=2;}while(--n);}else copy0b70=t0b70; }for(i=0;i<8;i++){p=FIND(copy0b70.v[i].id);if(p){p->x=FX(copy0b70.v[i].x);p->y=FX(copy0b70.v[i].y);p->sx=copy0b70.v[i].sx;p->sy=copy0b70.v[i].sy;}}e->state=4;break;}
            case 4:for(i=0;i<8;i++){p=FIND(i);if(p){if(p->alpha>=2)p->alpha-=2;else e->finished=one;}}break;
            }
            break;
        }
        /* 0x6b70 through 0x6bcc: direct helper dispatches. */
        case 0x48: func_02069c00((u8 *)e);break;
        case 0x4d: func_020698e0((u8 *)e);break;
        case 0x49: func_0206923c((u8 *)e);break;
        case 0x4a: func_02068da0((u8 *)e);break;
        case 0x4b: func_02068ac4((u8 *)e);break;
        case 0x4c: func_02068380((u8 *)e);break;
        case 0x79: func_02067de0((u8 *)e);break;
        case 0x7a: func_02069f80((u8 *)e);break;
        /* 0x6bd0 is a separate handler; 0x6bb8 and 0x6bc4 call helpers. */
        case 0x7b: {
            u8 i;
            e->y+=0x18000;
            for(i=0;i<4;i++){p=FIND(i);p->active=one;p->alpha=24;SET_SCALE_POS(p,p->fx*92/100,p->fy*92/100);}
            END_IF(ABS(p->sx)<2);break;
        }
        /* 0x6c88 */
        case 0x4e: {
            u8 i;
            e->y+=0x10000;
            for(i=0;i<4;i++){
                p=FIND(i);
                if(p->active){if(p->timer>=2)p->active=0;else p->alpha-=10;p->timer++;}
                else if(RAND(16)==0){p->active=one;if(i!=3){s32 x=RAND(16)-8;p->x=FX(x+_s32_div_f(x,ABS(x))*8);p->y=FX(RAND(8));}else p->y=FX(RAND(8)+10);p->z=-0x10000;p->timer=0;p->alpha=31;if(RAND(2)==0)p->sx*=-1;if(RAND(2)==0)p->sy*=-1;}
            }
            for(i=4;i<8;i++){p=FIND(i);p->active=p->active?0:one;}
            END_IF(e->frame>64);break;
        }
        case 0x42: func_0206a158((u8 *)e);break;
        default: e->finished=one;break;
        }
        e->frame++;
        if(e->finished){
            while((p=e->particles)!=NULL){
                func_02075c84(&e->particles,p);
                if(p!=NULL)func_0210c5dc(p);
            }
            func_02075c84(data_021600e8+0x48,e);
            if(e->mode==2||e->mode==3){if(e->object!=NULL){func_0210c5dc(e->object);e->object=(void *)zero;}}
            if(e!=NULL)func_0210c5dc(e);
        }
        e=next;
    }while(e!=NULL);
#undef CORNER
#undef DEC_TIMER
#undef END_IF
#undef FADE
#undef HALF_POS
#undef SET_SCALE_POS
#undef SET_SCALE8
#undef SET_SCALE
#undef SCALE8
#undef SCALE
#undef FX
#undef ABS
#undef RAND
#undef FIND
#undef ORBIT
}
