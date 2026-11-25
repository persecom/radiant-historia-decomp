/* 1 function from 0x020D0D1C to 0x020D28E4 (main), found by ds-decomp. */
#include "common.h"

void func_020d0d1c(void)
{
    extern u8 *data_02160244, *data_02160110, *data_02160204, *data_02160a6c, *data_02160090, *data_0216011c, *data_02160a74, *data_02160260, *data_021601e8, *data_02160250;
extern u16 data_021626a8, data_021628f8;
extern u32 data_0216263c[3];
extern void func_0202218c();
extern void func_0202b754();
extern void func_0202b928();
extern void * func_0202c5a0();
extern void func_0202f698();
extern void func_02030b7c();
extern void func_02031498();
extern void * func_0203222c();
extern u8 * func_02032240();
extern void func_020327b4();
extern void func_020328fc();
extern void func_02032a1c();
extern void func_02032cac();
extern void func_02032eb8();
extern void func_02032efc();
extern void func_02032f34();
extern void * func_02032f80();
extern void * func_02032fbc();
extern u32 func_0205bcb0();
extern void func_02062530();
extern void func_02062578();
extern void func_02093424();
extern void func_0209353c();
extern void func_02094bf4();
extern void func_020952b4();
extern u8 * func_020952f8();
extern void func_02095770();
extern void func_020a4f04();
extern s32 func_020a4f70();
extern void func_020a5ce4();
extern void func_020a8810();
extern void func_020a9544();
extern void func_020b52f4();
extern void func_020bb2d8();
extern s32 func_020bd490();
extern u8 * func_020cf5a0();
extern void func_020cf5bc();
extern void func_020cf5d0();
extern s32 func_020cf884();
extern s32 func_020cfc10();
extern s32 func_020d0000();
extern s32 func_020d0200();
extern void func_020d0a40();
extern void func_020d0cd4();
extern s32 func_020d2e14();
extern s32 func_020d3160();
extern void func_020d3c98();
extern void * func_020d3e60();
extern void func_020d60b8();
extern void func_020d622c();
extern void * func_020d7a68();
extern void func_020d86d0();
extern void func_020d8a5c();
extern void func_020d8c30();
extern void func_020d8c70();
extern void func_020d907c();
extern void func_020d9090();
extern void func_020d91bc();
extern void func_020d93b8();
extern void func_020d9a08();
extern BOOL func_020d9ea8();
extern BOOL func_020da060();
extern void func_020da0dc();
extern s32 func_020db680();
extern void func_020dd810();
extern void func_020de0a8();
extern void func_020de29c();
extern void * func_020de2a8();
extern void func_020df260();
extern void func_020df9c8();
extern void func_020e1850();
extern void func_020e1ec8();
extern void func_020e24bc();
extern void func_020e26f0();
extern void func_020e2788();
extern void func_02108ffc();
    u8 *mgr = data_02160244;
    u8 *st = (*(u8 **)((u8 *)(mgr)+(0)));
    s32 one = 1;
    s32 zero = 0;
    switch ((*(u16 *)((u8 *)(st)+(0)))) {
    case 24:
        if ((*(u8 **)((u8 *)(mgr)+(0x104)))==0) {
            u8 *p;
            (*(u8 **)((u8 *)(mgr)+(0x104)))=(u8 *)func_020cf5a0();
            if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))==1) {
                for (p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) (*(u32 *)((u8 *)(p)+(0x80)))&=~2u;
                func_020d91bc(14);
            } else if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))==2) {
                for (p=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));p;p=(*(u8 **)((u8 *)(p)+(0x174)))) {
                    (*(u32 *)((u8 *)(p)+(0x80)))|=2;
                    if (func_020d0200(p)) (*(u32 *)((u8 *)(p)+(0x80)))&=~2u;
                }
                func_020d91bc(15);
            }
        }
        if (func_020a4f70()) {
            func_020a4f04();
            {func_020d0a40(0);goto tail;};
        }
        break;
    case 0:
        func_020e26f0(7,one,1000-one);
        if ((*(u8 *)((u8 *)(data_02160204)+(0x89)))==0) {
            u8 *p;
            func_020d0a40(one);
            if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))==1) {
                for (p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) (*(u32 *)((u8 *)(p)+(0x80)))&=~2u;
                {func_020d91bc(14);goto tail;};
            } else if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))==2) {
                for (p=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));p;p=(*(u8 **)((u8 *)(p)+(0x174)))) {
                    (*(u32 *)((u8 *)(p)+(0x80)))|=2;
                    if (func_020d0200(p)) (*(u32 *)((u8 *)(p)+(0x80)))&=~2u;
                }
                {func_020d91bc(15);goto tail;};
            }
        }
        break;
    case 1: {
        u8 *ui=data_02160110;
        if (!((*(u16 *)((u8 *)(ui)+(0x70)))&1)) {
            func_020327b4();
            func_0202b754();
            func_02094bf4();
            (*(u16 *)((u8 *)(st)+(8)))=zero;
            func_020df9c8();
            (*(u16 *)((u8 *)(ui)+(0x70)))|=1;
        }
        func_020cf5d0((*(u8 **)((u8 *)(mgr)+(0x104))),(*(u8 *)((u8 *)(data_02160204)+(0x8d))));
        {func_020d0a40(2);goto tail;};
    }
    case 2: {
        u8 *ui=data_02160110;
        u16 count=zero;
        if (func_020d0000((*(u8 **)((u8 *)(mgr)+(0x104))))) ++count;
        if (func_020cfc10((*(u8 **)((u8 *)(mgr)+(0x104))))) ++count;
        if (func_020cf884((*(u8 **)((u8 *)(mgr)+(0x104))))) ++count;
        if ((*(s16 *)((u8 *)(ui)+(0xd8)))==200 && count!=0) {func_020d0a40(3);goto tail;};
        break;
    }
    case 3: {
        u8 *ui=data_02160110;
        s32 ready=one;
        (*(u32 *)((u8 *)(data_02160a6c)+(0x100)))=one;
        if ((*(u8 **)((u8 *)(mgr)+(0x104)))!=0) {
            func_020cf5bc((*(u8 **)((u8 *)(mgr)+(0x104))));
            (*(u8 **)((u8 *)(mgr)+(0x104)))=0;
        }
        if (!((*(u16 *)((u8 *)(ui)+(0x70)))&1)) {
            if ((*(u16 *)((u8 *)(data_02160090)+(0x2c)))==0) {
                func_020327b4();
                func_0202b754();
                (*(u16 *)((u8 *)(ui)+(0xd4)))=20;
                (*(u16 *)((u8 *)(ui)+(0xd6)))=20;
            } else {
                if ((*(u16 *)((u8 *)(mgr)+(0x108)))==0) func_02032cac();
                (*(u16 *)((u8 *)(mgr)+(0x108)))=zero;
                func_0202b754();
                (*(u16 *)((u8 *)(ui)+(0xc0)))=zero;
            }
            ++(*(s16 *)((u8 *)(ui)+(0xbe)));
            (*(s16 *)((u8 *)(ui)+(0xbe)))=(*(s16 *)((u8 *)(ui)+(0xbe)))%5;
            if ((*(s16 *)((u8 *)(ui)+(0xbe)))<=0) (*(s16 *)((u8 *)(ui)+(0xbe)))=one;
            func_02094bf4();
            (*(u16 *)((u8 *)(ui)+(0x70)))|=1;
            func_02095770(zero);
            (*(u16 *)((u8 *)(st)+(8)))=zero;
            func_020df9c8();
        }
        if (!((*(u16 *)((u8 *)(ui)+(0x72)))&0x200)) break;
        if (!((*(u16 *)((u8 *)(ui)+(0x70)))&2)) (*(u16 *)((u8 *)(ui)+(0x70)))|=2;
        else {
            (*(u16 *)((u8 *)(ui)+(0x74)))=3;
            (*(s16 *)((u8 *)(ui)+(0xbc)))=-((*(s16 *)((u8 *)(ui)+(0xbe)))-1)*104;
        }
        if (!ready) break;
        (*(u16 *)((u8 *)(ui)+(0xba)))|=1;
        if ((*(u32 *)((u8 *)(data_02160244)+(0x7c)))&0x20) {func_020d0a40(18);goto tail;};
        if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))==0) {
            (*(u8 *)((u8 *)(data_02160110)+(0xc4)))=(*(u8 *)((u8 *)((*(u8 **)((u8 *)((*(u8 **)((u8 *)((u8 *)func_0203222c())+(0))))+(0x118))))+(0)));
            if ((*(u16 *)((u8 *)(ui)+(0x72)))&0x800) {func_020d0a40(25);goto tail;};
            if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==1) func_0202b928();
            if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==1) {func_020d0a40(7);goto tail;};
            if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==0) {func_020d0a40(16);goto tail;};
        } else if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))!=0) {func_020d0a40(17);goto tail;};
        break;
    }
    case 17: {
        u8 *p=(*(u8 **)((u8 *)((u8 *)func_0203222c())+(0)));
        (*(u32 *)((u8 *)(st)+(4)))=zero;
        (*(u8 *)((u8 *)(data_02160204)+(0x8d)))=zero;
        (*(u8 *)((u8 *)(data_02160110)+(0xc4)))=(*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0)));
        if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==1) func_0202b928();
        if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==1) {func_020d0a40(7);goto tail;};
        if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==0) {func_020d0a40(16);goto tail;};
        break;
    }
    case 18:
        if (!((*(u16 *)((u8 *)(data_0216011c)+(0x28)))&1)) break;
        if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))==0) {
            (*(u8 *)((u8 *)(data_02160110)+(0xc4)))=(*(u8 *)((u8 *)((*(u8 **)((u8 *)((*(u8 **)((u8 *)((u8 *)func_0203222c())+(0))))+(0x118))))+(0)));
            if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==1) func_0202b928();
            if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==1) {
                if ((*(u16 *)((u8 *)(data_02160244)+(0xf4)))==3 && (*(u8 *)((u8 *)(data_0216011c)+(0x45)))==0) {
                    func_020d0a40(22);
                    (*(u16 *)((u8 *)(data_0216011c)+(0x28)))|=8;
                    break;
                }
                {func_020d0a40(7);goto tail;};
            }
            if ((*(s8 *)((u8 *)(data_02160110)+(0xc4)))==0) {func_020d0a40(16);goto tail;};
        } else if ((*(u8 *)((u8 *)(data_02160204)+(0x8d)))!=0) {func_020d0a40(17);goto tail;};
        break;
    case 4: {
        u8 *ui=data_02160110;
        u8 *p,*q,*next;
        u16 found;
        func_02108ffc();
        if ((*(u16 *)((u8 *)(ui)+(0xda)))==0) {
            s32 count=zero;
            for (p=(*(u8 **)((u8 *)(ui)+(0x9c)));p;p=next) {
                next=(*(u8 **)((u8 *)(p)+(4)));
                switch ((*(u8 *)((u8 *)(p)+(0x17)))) {
                case 1: {
                    s16 y;
                    q=(*(u8 **)((u8 *)(p)+(8)));
                    y=(s16)((*(s16 *)((u8 *)(q)+(0xe)))-12);
                    if (y < -30) {
                        u8 *node=(u8 *)func_02032f80((u32)p);
                        if (node) func_02032efc(node);
                        func_020952b4(p);
                    } else func_0209353c((*(u16 *)((u8 *)(q)+(0))),20,y);
                    ++count;
                    break;
                }
                case 2:
                    q=(*(u8 **)((u8 *)(p)+(8)));
                    ++(*(s16 *)((u8 *)(p)+(0x12)));
                    if ((*(s16 *)((u8 *)(p)+(0x12)))%4<2) func_02093424(q,zero);
                    else if ((*(u16 *)((u8 *)(p)+(0x10)))<11) func_02093424(q,one);
                    if ((*(s16 *)((u8 *)(p)+(0x12)))>10) {
                        u8 *node=(u8 *)func_02032f80((u32)p);
                        if (node) func_02032efc(node);
                        func_020952b4(p);
                    }
                    ++count;
                    break;
                case 3: func_02093424((*(u8 **)((u8 *)(p)+(8))),zero);break;
                }
            }
            if (count==0) (*(u16 *)((u8 *)(ui)+(0xda)))=one;
        } else if ((*(u16 *)((u8 *)(ui)+(0xda)))==1) {
            s32 i, equal=zero;
            found=zero;
            for (i=zero;i<24;++i) {
                u8 *node=(u8 *)func_02032fbc((u16)i);
                if (node) {
                    s16 goal=(s16)(i*19+3),y;
                    p=(*(u8 **)((u8 *)(node)+(0)));
                    q=(*(u8 **)((u8 *)(p)+(8)));
                    y=(*(s16 *)((u8 *)(q)+(0xe)));
                    if (y==goal) {++found;++equal;}
                    else {
                        s16 n;
                        if ((s16)(y-goal)>0) {n=(s16)(y-10);if(goal>n)n=goal;}
                        else {n=(s16)(y+10);if(goal<n)n=goal;}
                        func_0209353c((*(u16 *)((u8 *)(q)+(0))),20,n);
                        ++found;
                        if(found>11||i>=11)func_02093424(q,zero);
                    }
                    if ((*(u8 *)((u8 *)(p)+(0x17)))==3) func_0209353c((*(u16 *)((u8 *)(q)+(0))),100,goal);
                }
            }
            if (equal>11||(*(u16 *)((u8 *)(data_02160090)+(0x38)))==equal) {
                (*(u16 *)((u8 *)(mgr)+(0x108)))=zero;
                (*(u16 *)((u8 *)(ui)+(0xb6)))=zero;
                (*(u16 *)((u8 *)(ui)+(0xbc)))=zero;
                (*(u16 *)((u8 *)(ui)+(0xb8)))=zero;
                (*(u16 *)((u8 *)(ui)+(0xba)))&=0xfffe;
                (*(u16 *)((u8 *)(ui)+(0x72)))|=0x200;
                (*(u16 *)((u8 *)(ui)+(0xda)))=zero;
                {func_020d0a40(3);goto tail;};
            }
        }
        break;
    }
    case 16:
        if ((*(u8 *)((u8 *)(st)+(0x8d)))!=0) break;
        if ((*(u8 *)((u8 *)(data_02160a74)+(0x1e3)))==2) {
            (*(u32 *)((u8 *)(st)+(4)))=zero;{func_020d0a40(31);goto tail;};
        }
        if (func_020da060(48)) {func_020d0a40(33);goto tail;};
        {func_020d91bc(3);goto tail;};
    case 33: {
        u8 *p,*q;
        (*(u8 *)((u8 *)(st)+(0x8c)))=zero;
        for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
            q=(*(u8 **)((u8 *)(p)+(0x118)));
            if((*(u32 *)((u8 *)(q)+(0x70)))&&((*(u32 *)((u8 *)(q)+(0x78)))&0x4000000)) (*(u8 *)((u8 *)(st)+(0x8c)))=one;
        }
        if((*(u8 *)((u8 *)(st)+(0x8c)))==1 && ((*(u8 *)((u8 *)(data_02160a74)+(0x1c0)))&1)) {
            (*(u8 *)((u8 *)(data_02160a74)+(0x1c0)))&=0xfe;
            (*(u32 *)((u8 *)(data_02160a74)+(0xc4)))=zero;
        }
        for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
            q=(*(u8 **)((u8 *)(p)+(0x118)));
            if((*(u32 *)((u8 *)(q)+(0x70)))&&(*(s16 *)((u8 *)(q)+(0x5a)))==100&&(*(u8 *)((u8 *)(data_02160204)+(0x11c)))==1) {
                if(!((*(u32 *)((u8 *)(q)+(0x78)))&0x30))func_020dd810(p,12,zero);
                func_020e2788((s16)(1u<<(*(u16 *)((u8 *)(p)+(0x90)))),one);
                (*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x94)))=zero;
                (*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x93)))|=3;
            }
        }
        p=(*(u8 **)((u8 *)(data_02160090)+(8)));
        if(p) {
            if((*(u8 *)((u8 *)((*(u8 **)((u8 *)((*(u8 **)((u8 *)(p)+(0))))+(0x118))))+(0)))==0) {func_020d0a40(23);goto tail;};
            {func_020d0a40(5);goto tail;};
        }
        break;
    }
    case 30:
        if(++(*(u32 *)((u8 *)(st)+(4)))>32) {
            (*(u32 *)((u8 *)(st)+(4)))=zero;
            (*(u8 *)((u8 *)(data_02160a74)+(0x1e3)))=2;
            {func_020d0a40(9);goto tail;};
        }
        break;
    case 31:
        if(!func_020da060(48)) {func_020d91bc(3);goto tail;};
        if((*(u32 *)((u8 *)(st)+(4)))==0) {
            (*(u8 *)((u8 *)(data_02160a74)+(0x1e3)))=zero;
            func_020d3c98(zero);
            func_020a5ce4((*(u8 **)((u8 *)(data_02160a74)+(0x78))));
            func_020d60b8(90);
            (*(u32 *)((u8 *)(st)+(4)))=one;
        }
        if(++(*(u32 *)((u8 *)(st)+(4)))>64) {
            (*(u32 *)((u8 *)(st)+(4)))=zero;
            func_020d622c();{func_020d0a40(16);goto tail;};
        }
        break;
    case 7:
        if((*(u8 *)((u8 *)(st)+(0x8d)))==0) {func_020d0a40(34);goto tail;};
        break;
    case 34:
        if(++(*(u32 *)((u8 *)(st)+(4)))>6) {
            s32 i;
            u8 *node;
            (*(u16 *)((u8 *)(data_02160110)+(0xe2)))=zero;
            func_020d0a40(8);
            (*(u32 *)((u8 *)(st)+(0xc)))=one;
            func_02062530();func_020328fc();func_020e1850();func_02032f34();
            for(i=zero;i<24;++i) {
                node=(u8 *)func_020952f8((u16)i);
                if(node)func_02032eb8(node,(u16)i);
            }
        }
        func_020d2e14(one,zero);
        break;
    case 8:func_02062578();break;
    case 9: {
        u8 mode=(*(u8 *)((u8 *)(data_02160a74)+(0x1e3)));
        if(mode==0||mode==2) {
            func_020d3c98(zero);
            func_020a5ce4((*(u8 **)((u8 *)(data_02160a74)+(0x78))));
            func_0202218c();
        } else if(mode==1) {
            u8 *p;
            s32 vec[3];s32 *v;
            for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));p;p=(*(u8 **)((u8 *)(p)+(0x174)))) if(p)func_02030b7c(p,one,0x1ff);
            func_02031498();
            if(func_020db680()) {
                func_02032a1c();func_020d9ea8(8,48);
                vec[0]=0x230000;vec[1]=0x30000;vec[2]=0x200000;v=vec;
            } else {
                (*(u8 *)((u8 *)(data_02160a74)+(0x1e3)))=2;
                vec[0]=0x230000;vec[1]=0x30000;vec[2]=0x200000;v=vec;
            }
            func_020d907c(v);func_020d9090();
            func_020d3160(zero,zero,zero,zero);
            (*(u32 *)((u8 *)(st)+(4)))=zero;{func_020d0a40(30);goto tail;};
        }
        break;
    }
    case 10:func_020da0dc();break;
    case 11: {
        u8 *p,*q;
        s32 ready=zero;
        if(++(*(u32 *)((u8 *)(st)+(4)))>8) {(*(u32 *)((u8 *)(st)+(4)))=zero;ready=one;}
        if(!ready && !(data_021626a8&1) && !data_021628f8)break;
        for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));p;p=(*(u8 **)((u8 *)(p)+(0x174)))) {
            q=(*(u8 **)((u8 *)(p)+(0x118)));
            if((*(u32 *)((u8 *)(q)+(0x70)))&&((*(u32 *)((u8 *)(q)+(0x78)))&0x20)) {
                u32 v=(*(u32 *)((u8 *)(data_02160a6c)+(0x124)))+(*(u32 *)((u8 *)(q)+(0x50)));
                (*(u32 *)((u8 *)(data_02160a6c)+(0x124)))=v>0x752d?0x752d:v;
                v=(*(u32 *)((u8 *)(data_02160a6c)+(0x128)))+(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x80)));
                (*(u32 *)((u8 *)(data_02160a6c)+(0x128)))=v>0x1869f?0x1869f:v;
            }
        }
        for(p=(u8 *)func_02032240();p;p=(*(u8 **)((u8 *)(p)+(0x24)))) {
            q=(*(u8 **)((u8 *)(p)+(0)));
            if(q&&(*(u8 **)((u8 *)(q)+(0x118)))&&(*(u8 *)((u8 *)((*(u8 **)((u8 *)(q)+(0x118))))+(0)))==0)func_020df260(q,(*(u8 **)((u8 *)(p)+(8))));
        }
        (*(u16 *)((u8 *)(st)+(2)))=14;
        (*(u32 *)((u8 *)(data_02160260)+(0x60)))|=0x20;
        {func_020d0a40(13);goto tail;};
    }
    case 12: {
        u8 *p,*q;
        s32 value;
        if(++(*(u32 *)((u8 *)(st)+(4)))<=25)break;
        (*(u32 *)((u8 *)(st)+(4)))=25;
        (*(u32 *)((u8 *)(data_02160260)+(0x60)))|=0x10;
        for(p=(u8 *)func_02032240();p;p=(*(u8 **)((u8 *)(p)+(0x24)))) {
            q=(*(u8 **)((u8 *)(p)+(0)));
            if(q&&(*(u8 **)((u8 *)(q)+(0x118)))&&(*(u8 *)((u8 *)((*(u8 **)((u8 *)(q)+(0x118))))+(0)))==0)func_020df260(q,(*(u8 **)((u8 *)(p)+(8))));
        }
        func_020de29c((*(u8 **)((u8 *)(data_02160204)+(0x10c))));
        (*(u8 **)((u8 *)(data_02160204)+(0x10c)))=0;
        for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
            if(func_020bd490(2,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))) {
                q=(*(u8 **)((u8 *)(p)+(0x118)));
                if((*(u32 *)((u8 *)(q)+(0x70)))) value=func_020bd490(one,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))-1;
                else {(*(u32 *)((u8 *)(q)+(4)))=one;(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x70)))=one;value=func_020bd490(one,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))-1;}
            } else if(func_020bd490(zero,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))) {
                q=(*(u8 **)((u8 *)(p)+(0x118)));
                if((*(u32 *)((u8 *)(q)+(0x70)))) value=func_020bd490(3,((u8)(*(u16 *)((u8 *)(p)+(0x90)))));
                else {(*(u32 *)((u8 *)(q)+(4)))=one;(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x70)))=one;value=func_020bd490(3,((u8)(*(u16 *)((u8 *)(p)+(0x90)))));}
            } else continue;
            func_020d7a68(value,p,zero);
        }
        break;
    }
    case 13: {
        s32 ready=zero;
        u8 *p,*q;
        u16 state,bonus=0;
        if((*(u8 *)((u8 *)(data_02160204)+(0x89)))==0) {
            (*(u32 *)((u8 *)(mgr)+(0x7c)))&=~4u;
            ready=one;
            (*(u8 *)((u8 *)(data_02160a74)+(0x1c0)))&=0xfb;
        }
        if((*(u32 *)((u8 *)(data_02160244)+(0x7c)))&4) {
            q=data_021601e8;
            if(q) {
                if((*(u16 *)((u8 *)(q)+(8)))==0) {
                    func_020d0cd4(zero,4);
                    (*(u8 *)((u8 *)(data_02160a74)+(0x1c0)))&=0xfb;
                    q=(*(u8 **)((u8 *)(data_02160244)+(0)));
                    if((*(u16 *)((u8 *)(q)+(2)))==9)(*(u16 *)((u8 *)(q)+(2)))=999;
                } else {
                    for(p=(*(u8 **)((u8 *)(q)+(0)));p;p=(*(u8 **)((u8 *)(p)+(0x64)))){}
                }
            }
            break;
        }
        if((*(u32 *)((u8 *)(data_02160244)+(0x7c)))&8) {(*(u32 *)((u8 *)(data_02160244)+(0x7c)))&=~8u;ready=one;}
        if((*(u32 *)((u8 *)(data_02160244)+(0x7c)))&0x10) {(*(u16 *)((u8 *)((*(u8 **)((u8 *)(data_02160244)+(0))))+(2)))=14;ready=one;}
        q=(*(u8 **)((u8 *)(data_02160244)+(0)));
        state=(*(u16 *)((u8 *)(q)+(2)));
        if(state==14)ready=one;
        if(state==9&&(*(u32 *)((u8 *)(data_02160244)+(0x7c)))==0)ready=one;
        if(state==999) {(*(u16 *)((u8 *)(q)+(2)))=9;ready=one;}
        if(!ready)break;
        state=(*(u16 *)((u8 *)((*(u8 **)((u8 *)(data_02160244)+(0))))+(2)));
        if(state==9){func_020d0a40(9);goto tail;};
        if(state!=14 || ((*(u32 *)((u8 *)(data_02160260)+(0x60)))&4))break;
        (*(u32 *)((u8 *)(data_02160260)+(0x60)))|=4;
        {
            u8 *head=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));
            s32 count=zero;
            for(p=head;p;p=(*(u8 **)((u8 *)(p)+(0x16c))))if((*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x70))))++count;
            for(p=head;p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
                s32 value;
                u32 active;
                if(func_020bd490(2,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))) {
                    q=(*(u8 **)((u8 *)(p)+(0x118)));
                    active=(*(u32 *)((u8 *)(q)+(0x70)));
                    if(active&&!((*(u32 *)((u8 *)(q)+(0x78)))&0x20)) {
                        value=func_020bd490(one,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))-1;
                        goto reward;
                    }
                    if(!active) {(*(u32 *)((u8 *)(q)+(4)))=one;(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x70)))=one;}
                    value=func_020bd490(one,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))-1;
                } else if(func_020bd490(zero,((u8)(*(u16 *)((u8 *)(p)+(0x90)))))) {
                    q=(*(u8 **)((u8 *)(p)+(0x118)));
                    active=(*(u32 *)((u8 *)(q)+(0x70)));
                    if(active&&!((*(u32 *)((u8 *)(q)+(0x78)))&0x20)) {
                        value=func_020bd490(3,((u8)(*(u16 *)((u8 *)(p)+(0x90)))));
                        goto reward;
                    }
                    if(!active) {(*(u32 *)((u8 *)(q)+(4)))=one;(*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x70)))=one;}
                    value=func_020bd490(3,((u8)(*(u16 *)((u8 *)(p)+(0x90)))));
                } else continue;
                func_020d7a68(value,p,zero);
                continue;
            reward:
                func_020d7a68(value,p,(*(u32 *)((u8 *)(data_02160a6c)+(0x124))));
                (*(u32 *)((u8 *)(data_02160244)+(0x13c)))=(*(u32 *)((u8 *)(data_02160a6c)+(0x124)))>>1;
            }
        }
        if((*(u8 *)((u8 *)(data_02160204)+(0x140)))==0)(*(u8 *)((u8 *)(data_02160204)+(0x140)))=one;
        q=(u8 *)func_020d3e60((*(u8 *)((u8 *)(data_02160204)+(0x140))));
        if(q) {
            (*(u32 *)((u8 *)(data_02160204)+(0x108)))=(*(u32 *)((u8 *)(data_02160a6c)+(0x128)));
            (*(s16 *)((u8 *)(data_02160204)+(0x142)))=(s32)((*(s16 *)((u8 *)(q)+(6)))*(*(s32 *)((u8 *)(data_02160a6c)+(0x128))))/1000-(*(u32 *)((u8 *)(data_02160204)+(0x108)));
            {u32 base=(*(u32 *)((u8 *)(data_02160a6c)+(0x124))); s16 scale=(*(s16 *)((u8 *)(q)+(0xa)));u16 w=(*(u16 *)((u8 *)(q)+(8)));
             u32 product=scale*base; s32 product2=w*1000;
             bonus=(u16)(product2/1000-1000);
             (*(s16 *)((u8 *)(data_02160204)+(0x144)))=product/1000-base;}
        }
        for(p=(*(u8 **)((u8 *)(data_02160250)+(0)));p;p=(*(u8 **)((u8 *)(p)+(0x10)))) {
            u16 i;
            for(i=0;i<3;++i) {
                u16 random,weight;
                data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
                random=(u16)(((data_0216263c[0]>>16)*1000)>>16);
                if(random==0)random=1;
                else if(random>=1000)random=999;
                weight=(u16)((*(u16 *)((u8 *)(p)+(6+i*2)))*10);
                if(random<=weight+(u16)((s32)(weight*bonus)/1000)&&(*(u16 *)((u8 *)(p)+(i*2))))
                    func_020de2a8((*(u8 **)((u8 *)(data_02160204)+(0x10c))),(*(u16 *)((u8 *)(p)+(i*2))),zero);
            }
        }
        break;
    }
    case 19: {
        u8 *ui=(*(u8 **)((u8 *)(data_02160a74)+(0x94)));
        u8 *p=(*(u8 **)((u8 *)(st)+(0x70))),*q;
        s32 ready=zero;
        u16 i;
        if(!((*(u16 *)((u8 *)(st)+(0x74)))&1)) {
            (*(u16 *)((u8 *)(st)+(0x74)))|=1;
            (*(u16 *)((u8 *)(st)+(0x76)))=zero;(*(u16 *)((u8 *)(st)+(0x78)))=zero;(*(u16 *)((u8 *)(st)+(0x82)))=zero;
            for(i=one;i<7;++i) {
                q=(*(u8 **)((u8 *)(p)+(0x118)));
                if((*(s8 *)((u8 *)(q+i)+(0x37)))+(*(s16 *)((u8 *)(q+2*i)+(0xaa)))<=-1)(*(u16 *)((u8 *)(st)+(0x76)))|=(u16)(one<<(i-1));
            }
            q=(*(u8 **)((u8 *)(p)+(0x118)));
            {u8 kind=(*(u8 *)((u8 *)(q)+(0x3f)));
            if(kind==1)(*(u16 *)((u8 *)(st)+(0x76)))|=0x40;
            else if(kind==2)(*(u16 *)((u8 *)(st)+(0x76)))|=0x80;
            else if(kind==3)(*(u16 *)((u8 *)(st)+(0x76)))|=0x100;}
            func_020b52f4(one);
            func_020a5ce4(ui);
            func_020a9544((*(u8 **)((u8 *)(ui)+(0))));
            func_020e1ec8(ui,14);
            func_020a8810((*(u8 **)((u8 *)(ui)+(4))),16);
            {u16 mask=(*(u16 *)((u8 *)(st)+(0x76)));
            if(mask!=0) {
                for(i=0;i<9;++i)if(mask&(one<<i)) {
                    func_020e24bc(ui,0,7,i+1,one);
                    (*(u16 *)((u8 *)(st)+(0x76)))&=(u16)~(one<<i);break;
                }
            } else {
                (*(u16 *)((u8 *)(st)+(0x78)))=10;func_020e24bc(ui,0,7,10,one);
            }}
        }
        ++(*(s16 *)((u8 *)(st)+(0x82)));
        if((*(s16 *)((u8 *)(st)+(0x82)))>24) {
            if((data_021626a8&1)||data_021628f8)ready=one;
            else if((*(s16 *)((u8 *)(st)+(0x82)))>80)ready=one;
        }
        if(ready==one) {
            if((*(u16 *)((u8 *)(st)+(0x76)))>=1) {
                for(i=0;i<9;++i)if((*(u16 *)((u8 *)(st)+(0x76)))&(one<<i)) {
                    func_020a5ce4(ui);
                    func_020e24bc(ui,zero,7,i+1,one);
                    (*(u16 *)((u8 *)(st)+(0x76)))&=(u16)~(one<<i);
                    (*(u16 *)((u8 *)(st)+(0x82)))=zero;break;
                }
            } else {
                func_020b52f4(0);
                func_020a5ce4(ui);
                if((*(u16 *)((u8 *)(st)+(0)))!=(*(u16 *)((u8 *)(st)+(0x6e))))(*(u16 *)((u8 *)(st)+(0)))=(*(u16 *)((u8 *)(st)+(0x6e)));
                else {(*(u16 *)((u8 *)(st)+(0x6e)))=8;(*(u16 *)((u8 *)(st)+(0)))=(*(u16 *)((u8 *)(st)+(0x6e)));}
                for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c))))if((*(u16 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x1e)))&0x200)(*(u16 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x1e)))&=0xfdff;
            }
        }
        break;
    }
    case 20: {
        u8 *p,*q;
        u16 count=zero;
        for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));p;p=(*(u8 **)((u8 *)(p)+(0x174)))) {
            q=(*(u8 **)((u8 *)(p)+(0x128)));
            if((*(u8 *)((u8 *)(q)+(0x92)))==1) {
                s32 v;
                func_020dd810(p,one,zero);
                (*(s32 *)((u8 *)(p)+(0)))-=0x7000;
                v=(*(s32 *)((u8 *)((u8 *)func_0202c5a0(p))+(0)));
                if(v>(*(s32 *)((u8 *)(p)+(0)))) {(*(s32 *)((u8 *)(p)+(0)))=v;(*(u8 *)((u8 *)(q)+(0x92)))=zero;func_020dd810(p,zero,zero);}
                ++count;
            }
        }
        if(!count){func_020d0a40(8);goto tail;};
        break;
    }
    case 21: {
        u8 *p,*q;
        u16 count=zero;
        for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));p;p=(*(u8 **)((u8 *)(p)+(0x174)))) {
            q=(*(u8 **)((u8 *)(p)+(0x128)));
            if((*(u8 *)((u8 *)(q)+(0x92)))==1) {
                s32 v;
                func_020dd810(p,one,zero);
                (*(s32 *)((u8 *)(p)+(4)))-=0xa000;
                v=(*(s32 *)((u8 *)((u8 *)func_0202c5a0(p))+(4)));
                if(v>(*(s32 *)((u8 *)(p)+(4)))) {(*(s32 *)((u8 *)(p)+(4)))=v;(*(u8 *)((u8 *)(q)+(0x92)))=zero;func_020dd810(p,zero,zero);}
                ++count;
            }
        }
        if(!count){func_020d0a40(8);goto tail;};
        break;
    }
    case 22:
        if((*(u8 *)((u8 *)(data_0216011c)+(0x44)))==1) {(*(u8 *)((u8 *)(data_0216011c)+(0x44)))=zero;{func_020d0a40(34);goto tail;};}
        break;
    case 23: {
        u8 *p,*q;
        switch((*(u16 *)((u8 *)(st)+(0x80)))) {
        case 0:
            for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
                q=(*(u8 **)((u8 *)(p)+(0x118)));
                if((*(u32 *)((u8 *)(q)+(0x70)))&&(*(s16 *)((u8 *)(q)+(0x5a)))<100) {
                    (*(s16 *)((u8 *)(q)+(0x5a)))+=(*(s16 *)((u8 *)(q)+(0x5c)));
                    (*(s16 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x5c)))=zero;
                    q=(*(u8 **)((u8 *)(p)+(0x118)));
                    if((*(s16 *)((u8 *)(q)+(0x5a)))>=100) {(*(s16 *)((u8 *)(q)+(0x5a)))=100;(*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0xa4)))=one;}
                }
            }
            (*(u16 *)((u8 *)(st)+(0x80)))=one;break;
        case 1: {
            u8 count=zero;
            for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
                q=(*(u8 **)((u8 *)(p)+(0x118)));
                if((*(u32 *)((u8 *)(q)+(0x70)))&&(*(u8 *)((u8 *)(q)+(0xa4)))==1)++count;
            }
            if(count)(*(u16 *)((u8 *)(st)+(0x80)))=2;
            else {func_020d0a40(5);goto tail;};
            break;
        }
        case 2:
            for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
                q=(*(u8 **)((u8 *)(p)+(0x118)));
                if((*(u32 *)((u8 *)(q)+(0x70)))&&(*(u8 *)((u8 *)(q)+(0xa4)))==1) {
                    func_020e2788((s16)(one<<(*(u16 *)((u8 *)(p)+(0x90)))),one);
                    if((*(u8 *)((u8 *)(p)+(0x104)))==0&&!((*(u32 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x118))))+(0x78)))&0x30))func_020dd810(p,12,zero);
                    (*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x93)))|=1;
                    (*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x93)))|=2;
                }
            }
            (*(u16 *)((u8 *)(st)+(0x80)))=3;break;
        case 3: {func_020d0a40(5);goto tail;};
        }
        break;
    }
    case 25:func_020d86d0();break;
    case 26:func_020d8a5c();break;
    case 27:func_020d8c30();break;
    case 28:func_020d8c70();break;
    }
tail:
    if((*(u8 *)((u8 *)(data_02160244)+(0xe8)))==1)func_020e26f0(7,1,999);
    if((*(u8 *)((u8 *)(data_02160244)+(0x16d)))!=0) {
        if((*(u8 *)((u8 *)(data_02160244)+(0x16e)))==0) {
            if(++(*(u8 *)((u8 *)(data_02160244)+(0x16d)))>16) {
                (*(u8 *)((u8 *)(data_02160244)+(0x16d)))=zero;
                func_020d622c();
            }
        } else if((*(u8 *)((u8 *)(data_02160244)+(0x16e)))==1) {
            if(++(*(u8 *)((u8 *)(data_02160244)+(0x16d)))>32) {
                (*(u8 *)((u8 *)(data_02160244)+(0x16e)))=zero;
                (*(u8 *)((u8 *)(data_02160244)+(0x16d)))=zero;
                func_020d622c();
            }
        }
    }
    if(!((*(u32 *)((u8 *)(mgr)+(0x7c)))&1))func_020d93b8();
    else if(!((*(u32 *)((u8 *)(mgr)+(0x7c)))&2))func_020d9a08();
    func_020bb2d8((*(u8 **)((u8 *)(data_02160260)+(0x4c))));
    func_0202f698();
    {
        u8 *p,*q,*e;
        for(p=(*(u8 **)((u8 *)(data_02160a6c)+(0xac)));p;p=(*(u8 **)((u8 *)(p)+(0x16c)))) {
            q=(*(u8 **)((u8 *)(p)+(0x118)));
            if(!(*(u32 *)((u8 *)(q)+(0x70))))continue;
            e=(*(u8 **)((u8 *)(p)+(0x128)));
            if(((*(u8 *)((u8 *)(e)+(0x93)))&2)&&(*(u8 *)((u8 *)(p)+(0x104)))==12) {
                ++(*(u8 *)((u8 *)(e)+(0x94)));
                if((func_0205bcb0(p,zero)&2)&&(*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x94)))>=2) {
                    func_020de0a8(p);
                    func_020e2788((s16)(one<<(*(u16 *)((u8 *)(p)+(0x90)))),zero);
                    (*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x94)))=zero;
                    (*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x93)))=zero;
                }
            } else if((*(u8 *)((u8 *)(p)+(0x104)))==0&&((*(u8 *)((u8 *)(e)+(0x93)))&2)&&!((*(u32 *)((u8 *)(q)+(0x78)))&0x30)) {
                func_020dd810(p,12,zero);
            } else if((*(u8 *)((u8 *)(e)+(0x93)))&1) {
                ++(*(u8 *)((u8 *)(e)+(0x94)));
                e=(*(u8 **)((u8 *)(p)+(0x128)));
                if((*(u8 *)((u8 *)(e)+(0x94)))>10) {
                    (*(u8 *)((u8 *)(e)+(0x94)))=zero;
                    (*(u8 *)((u8 *)((*(u8 **)((u8 *)(p)+(0x128))))+(0x93)))=zero;
                    func_020e2788((s16)(one<<(*(u16 *)((u8 *)(p)+(0x90)))),zero);
                }
            }
        }
    }
}
