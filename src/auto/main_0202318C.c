/* 1 function from 0x0202318C to 0x02025F38 (main), found by ds-decomp. */
#include "common.h"

#pragma optimization_level 3
s32 func_0202318c(s32 mode, u16 *arg1, u8 *arg2, u8 *arg3) {
    extern s32 func_02022fb0(u8 *);
    extern void func_020de0a8(u8 *), func_020da8a4(u8 *), func_02060328(u8 *);
    extern void func_02025f84(u8 *,u16), func_020c3020(void *), func_020db7ec(u8 *);
    extern s32 func_0205b710(u8 *,s32);
    extern void func_020bfd78(s32,s32,u16,s32,s32,u8 *,u16,u16);
    extern void *func_020bff74(u16,u16), *func_020d3fac(u8), *func_02022558(u8 *,u16);
    extern void func_02025f38(void *,void *,s32), func_020226ec(u8 *,u32);
    extern void func_020306f8(u8 *,u16,s16,s16,s16);
    extern void *func_020d3e60(u32), *func_020de2a8(u8 *,u16,u8);
    extern s32 func_020db864(u8 *,u8 *,s32);
    extern void func_020da8c0(u8 *,s32), func_02060560(u8 *), func_020dd810(void *,s32,s32);
    extern void func_0202bfa8(u8 *,s32), func_02032ff8(u8 *,s32);
    extern void func_02022584(u8 *,u16,s8,s16,s16,s16,s16);
    extern void func_020263b4(void *,u32), func_0202647c(u8 *,s32), func_020d0a40(u16);
    extern s32 func_0202e930(void);
    extern u16 func_020d708c(s32,s32,s32,u32);
    extern void func_020d09d8(u8 *), func_020dde88(u8 *);
    extern u32 data_0216263c[3];
    extern u8 *data_02160204, *data_02160244, *data_02160a6c, *data_02160a74;
    u8 *a=0,*b=0,*other=0,*src=0;
    s32 active=0;
    u8 *dst=0;
    s32 result=0;

    u16 op;
    if(!arg1)return 0;
    if(mode==0){b=arg3;dst=(*(u8 **)((u8 *)(b)+(0x118)));a=arg2;src=(*(u8 **)((u8 *)(a)+(0x118)));if((*(s32 *)((u8 *)(dst)+(0x70)))!=0)active=1;}
    else if(mode==1){other=arg3;if(((u8 *)(other))[(0x44)]!=0)active=1;}
    else if(mode==2){src=arg2;if((*(s32 *)((u8 *)(src)+(0x70)))!=0)active=1;dst=arg3;}
    op=arg1[0];
    switch(op){
    case 0x65:case 0x199:case 0x1a1: {
        s32 value;
        s32 cap;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        value=((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)(src)+(0x2c)))*150/100+(*(s16 *)((u8 *)(src)+(0x34)))*5)*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;cap=(*(s16 *)((u8 *)(arg1)+(8)));
        if(value>=cap)value=cap*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;else value=value*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;
        (*(s32 *)((u8 *)(dst)+(4)))+=value;if((*(s32 *)((u8 *)(dst)+(8)))<(*(s32 *)((u8 *)(dst)+(4))))(*(s32 *)((u8 *)(dst)+(4)))=(*(s32 *)((u8 *)(dst)+(8)));
        if(mode==0){if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0&&b!=a)func_020de0a8(b);func_020bfd78(0x80,0x60,1,7,value,b,(*(u16 *)((u8 *)(b)+(0x90))),0);}break;
    }
    case 0x66: {
        s32 value;
        s32 cap;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        value=((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)(src)+(0x2c)))/20+(*(s16 *)((u8 *)(src)+(0x34)))/5)*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;cap=(*(s16 *)((u8 *)(arg1)+(8)));
        if(value>=cap)value=cap*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;else value=value*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;
        (*(s16 *)((u8 *)(dst)+(0xc)))+=(s16)value;if((*(s16 *)((u8 *)(dst)+(0xe)))<(*(s16 *)((u8 *)(dst)+(0xc))))(*(s16 *)((u8 *)(dst)+(0xc)))=(*(s16 *)((u8 *)(dst)+(0xe)));func_020bfd78(0x80,0x60,1,8,value,b,(*(u16 *)((u8 *)(b)+(0x90))),0);break;
    }
    case 0x67:case 0xa2: {
        u8 * node;
        s32 value;
        s32 cap;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        value=((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)(src)+(0x2c)))/50+(*(s16 *)((u8 *)(src)+(0x34)))/10)*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;cap=(*(s16 *)((u8 *)(arg1)+(8)));
        if(value>=cap)value=cap*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;else value=value*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;
        if(op==0x67){func_02025f84(b,0x89);func_020da8a4(b);if(!((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))&0x800000)){if((*(s32 *)((u8 *)(dst)+(4)))<=value){value=(*(s32 *)((u8 *)(dst)+(4)))-1;(*(s32 *)((u8 *)(dst)+(4)))=1;}else (*(s32 *)((u8 *)(dst)+(4)))-=value;}else goto hp_immune;}
        else if(op==0xa2){func_02025f84(b,0x89);func_020da8a4(b);if(!((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))&0x800000)){if((*(s32 *)((u8 *)(dst)+(4)))<=value){value=(*(s32 *)((u8 *)(dst)+(4)));(*(s32 *)((u8 *)(dst)+(4)))=0;if((*(u32 *)((u8 *)(b)+(0x80)))&0x800){if((*(s32 *)((u8 *)(dst)+(4)))<=0)(*(s32 *)((u8 *)(dst)+(4)))=1;}if((*(s32 *)((u8 *)(dst)+(4)))<=0){if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0 && ((*(u32 *)((u8 *)(b)+(0x80)))&0x20000)){(*(u32 *)((u8 *)(b)+(0x80)))&=~0x20000;(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xbc)))=0;}if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0)func_02060328(b);if(!((*(u32 *)((u8 *)(b)+(0x80)))&0x800))(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x70)))=0;func_020c3020(b);};}else (*(s32 *)((u8 *)(dst)+(4)))-=value;}else goto hp_immune;}
        goto hp_transfer;
    hp_immune:
        func_0205b710(b,0x9c);func_020db7ec(b);value=0;
    hp_transfer:
        func_020bfd78(0x80,0x60,0,1,value,b,(*(u16 *)((u8 *)(b)+(0x90))),2);(*(s32 *)((u8 *)(src)+(4)))+=value;if((*(s32 *)((u8 *)(src)+(8)))<(*(s32 *)((u8 *)(src)+(4))))(*(s32 *)((u8 *)(src)+(4)))=(*(s32 *)((u8 *)(src)+(8)));node=func_020bff74((*(u16 *)((u8 *)(a)+(0x90))),0);if(node)(*(s32 *)((u8 *)(node)+(0x14)))+=value;else func_020bfd78(0x80,0x60,1,7,value,a,(*(u16 *)((u8 *)(a)+(0x90))),0);break;
    }
    case 0x68: {
        s32 value;
        s32 cap;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        value=((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)(src)+(0x2c)))/50+(*(s16 *)((u8 *)(src)+(0x34)))/10)*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;cap=(*(s16 *)((u8 *)(arg1)+(8)));
        if(value>=cap)value=cap*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;else value=value*((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98)/100;
        func_02025f84(b,0x89);func_020da8a4(b);if(!((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))&0x800000)){if((*(s16 *)((u8 *)(dst)+(0xc)))<=value){value=(*(s16 *)((u8 *)(dst)+(0xc)));(*(s16 *)((u8 *)(dst)+(0xc)))=0;}else (*(s16 *)((u8 *)(dst)+(0xc)))-=(s16)value;}else{func_0205b710(b,0x9c);func_020db7ec(b);value=0;}
        func_020bfd78(0x80,0x60,0,2,value,b,(*(u16 *)((u8 *)(b)+(0x90))),2);(*(s16 *)((u8 *)(src)+(0xc)))+=(s16)value;if((*(s16 *)((u8 *)(src)+(0xe)))<(*(s16 *)((u8 *)(src)+(0xc))))(*(s16 *)((u8 *)(src)+(0xc)))=(*(s16 *)((u8 *)(src)+(0xe)));func_020bfd78(0x80,0x60,1,8,value,a,(*(u16 *)((u8 *)(a)+(0x90))),0);break;
    }
    case 0x69: {
        u8 * node;
        s32 value;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        value=(*(s16 *)((u8 *)(arg1)+(6)));node=func_020d3fac((u8)(*(u16 *)((u8 *)(b)+(0x90))));((u8 *)(node))[(7)]=1;(*(s16 *)((u8 *)(node)+(2)))=(*(s16 *)((u8 *)(dst)+(0x5a)));(*(s16 *)((u8 *)(node)+(4)))=(*(s16 *)((u8 *)(arg1)+(6)));(*(s16 *)((u8 *)(node)+(0)))=0;func_020bfd78(0x80,0x60,1,9,value,b,(*(u16 *)((u8 *)(b)+(0x90))),0);break;
    }
    case 0x6a: {
        s32 value;
        s32 chance;
        s32 bits;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        chance=(s16)((*(s16 *)((u8 *)(arg1)+(0xa)))+(*(s16 *)((u8 *)(src)+(0x2c)))/20);if(chance>100)chance=100;bits=0;if((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(100))>>16))<chance)bits|=1;
        if(bits&1){value=(*(s16 *)((u8 *)(arg1)+(6)));(*(s16 *)((u8 *)(dst)+(0x5a)))=(*(s16 *)((u8 *)(dst)+(0x5a)))>value?(*(s16 *)((u8 *)(dst)+(0x5a)))-value:0;if(mode==0)func_020bfd78(0x80,0x60,0,1,value,b,(*(u16 *)((u8 *)(b)+(0x90))),2);}break;
    }
    case 0x6c: {
        s32 chance;
        s32 bits;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        chance=(s16)((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20);if(chance>100)chance=100;bits=0;if(chance>(s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(100))>>16)))bits|=1;if(bits&1){if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0 && ((*(u32 *)((u8 *)(b)+(0x80)))&0x20000)){(*(u32 *)((u8 *)(b)+(0x80)))&=~0x20000;(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xbc)))=0;}if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0)func_02060328(b);if(!((*(u32 *)((u8 *)(b)+(0x80)))&0x800))(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x70)))=0;func_020c3020(b);};break;
    }
    case 0x72:case 0x73:case 0x82:case 0x83:case 0x84:case 0x8e:case 0x8f:case 0x90:case 0x12e: {
        u8 * node;
        u8 * list;
        s32 bits;
        u16 id;
        u32 mask;

        bits=0;id=0;
        switch(op){case 0x72:id=0x98;mask=0x80000;break;case 0x73:id=0x99;mask=0x100000;break;case 0x82:id=0x9c;mask=0x800000;break;case 0x83:id=0x9d;mask=0x1000000;break;case 0x84:id=0x9e;mask=0x2000000;break;case 0x8e:id=0x9f;mask=0x4000000;break;case 0x8f:id=0xa0;mask=0x8000000;break;case 0x90:id=0xa1;mask=0x10000000;break;case 0x12e:id=0xa5;mask=0x20000000;break;}
        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));bits|=1;{if(bits&1){if(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78))))&mask){node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_02025f84(b,id);bits|=2;}}else bits|=2;}};
        if(bits==3){func_02025f38(b,arg1,id);(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))|=mask;func_020226ec(b,mask);};
        if(id==0xa5&&bits==3){func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0xa,((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100)),((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50)),(*(s16 *)((u8 *)(arg1)+(0xa))));(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))|=0x40;func_020226ec(b,0x40);}break;
    }
    case 0x6f: {
        u8 * node;
        s32 chance;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        {s32 got=0; s16 roll; s32 bonus,limit;u8 *items;
        if(((u8 *)(data_02160204))[(0x140)]==0)((u8 *)(data_02160204))[(0x140)]=1;
        node=func_020d3e60(((u8 *)(data_02160204))[(0x140)]);chance=(s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s32 *)((u8 *)(src)+(0x30)))/5)*10);if(chance>1000)chance=1000;bonus=chance*(*(u16 *)((u8 *)(node)+(4)))/1000;items=(*(u8 **)((u8 *)(dst)+(0x88)));
        if(items){if((*(u16 *)((u8 *)(items)+(0)))==0&&(*(u16 *)((u8 *)(items)+(2)))==0){((u8 *)(data_02160244))[(0x16c)]|=4;break;}
            roll=(s16)(((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(100))>>16))+1);if(roll>=100)roll=100;limit=(*(u16 *)((u8 *)(items)+(4)))*(bonus+1000)/1000;
            if((*(u16 *)((u8 *)(items)+(0)))&&roll<=limit){func_020de2a8((*(u8 **)((u8 *)(data_02160204)+(0x10c))),(*(u16 *)((u8 *)(items)+(0))),1);(*(u16 *)((u8 *)(items)+(0)))=0;got=1;}
            roll=(s16)(((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(100))>>16))+1);if(roll>=100)roll=100;limit=(*(u16 *)((u8 *)(items)+(6)))*(bonus+1000)/1000;
            if(!got&&(*(u16 *)((u8 *)(items)+(2)))&&roll<=limit){func_020de2a8((*(u8 **)((u8 *)(data_02160204)+(0x10c))),(*(u16 *)((u8 *)(items)+(2))),1);(*(u16 *)((u8 *)(items)+(2)))=0;got=1;}
            if(got)((u8 *)(data_02160244))[(0x16c)]|=1;else ((u8 *)(data_02160244))[(0x16c)]|=2;
        }else ((u8 *)(data_02160244))[(0x16c)]|=4;}break;
    }
    case 0x85:case 0x86:case 0x99:case 0x9a:case 0x192: {
        u32 mask;
        u16 id;
        s32 bits;
        u8 * list;
        u8 * node;
        s32 chance;
        s32 resist;

        switch(op){case 0x85:case 0x99:case 0x192:mask=1;id=0x85;break;case 0x86:case 0x9a:mask=2;id=0x86;break;}
        if(!func_02022fb0((u8 *)arg1))break;
        list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));bits=0;{chance=(s16)((*(s16 *)((u8 *)(arg1)+(8)))+func_020db864(a,0,1)/5);resist=(s16)((*(s8 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x37+(mask))))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xaa+2*(mask))))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x84)))-(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x86))));if(chance>100)chance=100;chance=(s16)(chance-(resist*10+func_020db864(b,0,3)/5));if((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(100))>>16))<chance)bits|=1;if((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))&0x20)bits=0;};{if(bits&1){if(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78))))&mask){node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_02025f84(b,id);bits|=2;}}else bits|=2;}};
        if(bits==3){{func_02025f38(b,arg1,id);(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))|=mask;func_020226ec(b,mask);};node=func_02022558(list,id);(*(s16 *)((u8 *)(node)+(0xc)))=(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)));}
        if((u16)(op+0x67)<=1){(*(u32 *)((u8 *)(src)+(0x8c)))|=0x1000;(*(s32 *)((u8 *)(src)+(4)))=0;};break;
    }
    case 0x87:case 0x88:case 0x89:case 0x8a:case 0x9b:case 0x9c:case 0x9d:case 0x9e:case 0x1a3: {
        u32 mask;
        u16 id;
        s32 index;
        s32 bits;
        u8 * list;
        u8 * node;
        s32 chance;
        s32 resist;

        switch(op){case 0x87:case 0x9b:index=3;mask=4;id=0x87;break;case 0x88:case 0x9c:index=4;mask=8;id=0x88;break;case 0x89:case 0x9d:case 0x1a3:index=5;mask=0x10;id=0x89;break;case 0x8a:case 0x9e:index=6;mask=0x20;id=0x8a;break;}
        if(!func_02022fb0((u8 *)arg1))break;
        list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));bits=0;{chance=(s16)((*(s16 *)((u8 *)(arg1)+(8)))+func_020db864(a,0,1)/5);resist=(s16)((*(s8 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x37+(index))))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xaa+2*(index))))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x84)))-(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x86))));if(chance>100)chance=100;chance=(s16)(chance-(resist*10+func_020db864(b,0,3)/5));if((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(100))>>16))<chance)bits|=1;if((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))&0x20)bits=0;};{if(bits&1){if(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78))))&mask){node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_02025f84(b,id);bits|=2;}}else bits|=2;}};
        if(bits==3){{func_02025f38(b,arg1,id);(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))|=mask;func_020226ec(b,mask);};if(mask==0x20&&((u8 *)(b))[(0x104)]!=0x13){if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==1||((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0){func_020da8c0(b,9);func_02060560(b);}}else if(mask==0x10){if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==1||((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0)func_020da8c0(b,9);}else if(mask==8)(*(s16 *)((u8 *)(b)+(0x1c4)))=0;}
        switch(op){case 0x9b:case 0x9c:case 0x9d:case 0x9e:{(*(u32 *)((u8 *)(src)+(0x8c)))|=0x1000;(*(s32 *)((u8 *)(src)+(4)))=0;};break;}break;
    }
    case 0x1f5: {
        s32 cap;

        if((func_02022fb0((u8 *)arg1)&&active)){result=(*(s16 *)((u8 *)(arg1)+(6)));if(mode==0){(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(4)))+=result;if((*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(8)))<(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(4))))(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(4)))=(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(8)));if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0&&a!=b)func_020de0a8(b);func_020bfd78(0x80,0x60,1,7,result,b,(*(u16 *)((u8 *)(b)+(0x90))),0);}else if(mode==1){(*(u16 *)((u8 *)(other)+(0x10)))+=(u16)result;cap=(*(u16 *)((u8 *)(other)+(0x12)))+(*(s16 *)((u8 *)(other)+(0x24)));if(cap<(*(u16 *)((u8 *)(other)+(0x10)))){(*(u16 *)((u8 *)(other)+(0x10)))=cap;result-=(*(u16 *)((u8 *)(other)+(0x10)))-cap;}}}return result;
    }
    case 0x1f6: {
        s32 cap;

        if((func_02022fb0((u8 *)arg1)&&active)){result=(*(s16 *)((u8 *)(arg1)+(6)));if(mode==0){(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xc)))+=(s16)result;if((*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xe)))<(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xc))))(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xc)))=(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xe)));if(((u8 *)((*(u8 **)((u8 *)(b)+(0x118)))))[(0)]==0&&a!=b)func_020de0a8(b);func_020bfd78(0x80,0x60,1,8,result,b,(*(u16 *)((u8 *)(b)+(0x90))),0);}else if(mode==1){(*(u16 *)((u8 *)(other)+(0x14)))+=(u16)result;cap=(*(u16 *)((u8 *)(other)+(0x16)))+(*(s16 *)((u8 *)(other)+(0x26)));if(cap<(*(u16 *)((u8 *)(other)+(0x14)))){(*(u16 *)((u8 *)(other)+(0x14)))=cap;result-=(*(u16 *)((u8 *)(other)+(0x14)))-cap;}}}return result;
    }
    case 0x6d: {
        s32 value;

        if(func_02022fb0((u8 *)arg1)&&!active){value=(*(s32 *)((u8 *)(dst)+(8)))*((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)(src)+(0x34)))/2)/100;(*(s32 *)((u8 *)(dst)+(4)))+=value;if((*(s32 *)((u8 *)(dst)+(8)))<(*(s32 *)((u8 *)(dst)+(4)))){value-=(*(s32 *)((u8 *)(dst)+(4)))-(*(s32 *)((u8 *)(dst)+(8)));(*(s32 *)((u8 *)(dst)+(4)))=(*(s32 *)((u8 *)(dst)+(8)));}{(*(s32 *)((u8 *)(dst)+(0x70)))=1;func_020dd810(b,0,0);func_0202bfa8(b,(u8)((*(u16 *)((u8 *)(b)+(0x90)))+9));func_02032ff8(b,1);};func_020bfd78(0x80,0x60,1,7,value,b,(*(u16 *)((u8 *)(b)+(0x90))),0);return value;}break;
    }
    case 0x1f7: {
        s32 value;

        if(func_02022fb0((u8 *)arg1)&&!active){value=(*(s16 *)((u8 *)(arg1)+(6)));(*(s32 *)((u8 *)(dst)+(4)))=value;if((*(s32 *)((u8 *)(dst)+(8)))<(*(s32 *)((u8 *)(dst)+(4))))(*(s32 *)((u8 *)(dst)+(4)))=(*(s32 *)((u8 *)(dst)+(8)));{(*(s32 *)((u8 *)(dst)+(0x70)))=1;func_020dd810(b,0,0);func_0202bfa8(b,(u8)((*(u16 *)((u8 *)(b)+(0x90)))+9));func_02032ff8(b,1);};func_020bfd78(0x80,0x60,1,7,value,b,(*(u16 *)((u8 *)(b)+(0x90))),0);return value;}break;
    }
    case 0x6b:case 0x1f8: {

        if((func_02022fb0((u8 *)arg1)&&active)&&mode==0){func_02025f84(b,0x85);func_02025f84(b,0x86);func_02025f84(b,0x87);func_02025f84(b,0x88);func_02025f84(b,0x89);func_02025f84(b,0x8a);func_02025f84(b,0x8b);func_02025f84(b,0x8d);func_02025f84(b,0x8f);func_02025f84(b,0x91);func_02025f84(b,0x93);func_02025f84(b,0x95);func_02025f84(b,0x97);func_02025f84(b,0x9b);if(a!=b){(*(u16 *)((u8 *)(b)+(0x8a)))=0x7fff;func_020de0a8(b);(*(s32 *)((u8 *)(b)+(0xf8)))=0;}}break;
    }
    case 0x1f9: {
if((func_02022fb0((u8 *)arg1)&&active)&&mode==0)func_02025f84(b,0x85);break;
    }
    case 0x1fa: {
if((func_02022fb0((u8 *)arg1)&&active)&&mode==0)func_02025f84(b,0x86);break;
    }
    case 0x1fb: {
if((func_02022fb0((u8 *)arg1)&&active)&&mode==0)func_02025f84(b,0x87);break;
    }
    case 0x1fc: {
if((func_02022fb0((u8 *)arg1)&&active)&&mode==0)func_02025f84(b,0x88);break;
    }
    case 0x1fd: {
if((func_02022fb0((u8 *)arg1)&&active)&&mode==0){func_02025f84(b,0x89);func_020de0a8(b);if(b)func_020da8a4(b);}break;
    }
    case 0x1fe: {
if((func_02022fb0((u8 *)arg1)&&active)&&mode==0){func_02025f84(b,0x8a);(*(u16 *)((u8 *)(b)+(0x8a)))=0x7fff;func_020de0a8(b);if(b)func_020da8a4(b);}break;
    }
    case 0x74:case 0x76:case 0x78:case 0x7a:case 0x7c:case 0x7e:case 0x80:case 0xa0: {
        u32 mask;
        u16 id;
        s32 bits;
        u8 * list;
        u8 * node;

        bits=0;if(!(func_02022fb0((u8 *)arg1)&&active))break;
        switch(op){case 0x74:id=0x8c;mask=0x80;break;case 0x76:id=0x8e;mask=0x200;break;case 0x78:id=0x90;mask=0x800;break;case 0x7a:id=0x92;mask=0x2000;break;case 0x7c:id=0x94;mask=0x8000;break;case 0x7e:id=0x96;mask=0x20000;break;case 0x80:id=0x9a;mask=0x200000;break;case 0xa0:id=0xad;mask=0x40000000;break;}
        list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));{if(!(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78))))&mask))bits|=1;else {node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_02025f84(b,id);bits|=1;}}};if(!(bits&1))break;
        func_02022584(list,id,(s8)(*(s16 *)((u8 *)(arg1)+(2))),(*(s16 *)((u8 *)(arg1)+(6))),(*(s16 *)((u8 *)(arg1)+(8))),(*(s16 *)((u8 *)(arg1)+(0xa))),(*(s16 *)((u8 *)(arg1)+(0x10))));(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))|=mask;func_020226ec(b,mask);
        switch(op){case 0x74:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x76:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),2,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x78:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),4,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x7a:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),6,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x7c:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),8,(*(s16 *)((u8 *)(arg1)+(8))),(*(s16 *)((u8 *)(arg1)+(6))),0);break;case 0x7e:(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x7c)))=(*(s16 *)((u8 *)(arg1)+(6)));break;case 0x80:(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x84)))=(*(s16 *)((u8 *)(arg1)+(6)));break;case 0xa0:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0xb,((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100)),((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50)),0);func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0xc,((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100)),((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50)),0);break;}break;
    }
    case 0xa1: {
        u8 * node;
        u8 * list;
        s32 value;
        s32 bits;
        u16 id;
        u32 mask;

        if(!func_02022fb0((u8 *)arg1))break;
        list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));bits=0;id=0xae;mask=0x80000000;{if(!(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78))))&mask))bits|=1;else {node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_02025f84(b,id);bits|=1;}}};if(!(bits&1))break;
        (*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))|=mask;func_02022584(list,0xae,(s8)(*(s16 *)((u8 *)(arg1)+(2))),(*(s16 *)((u8 *)(arg1)+(6))),(*(s16 *)((u8 *)(arg1)+(8))),(*(s16 *)((u8 *)(arg1)+(0xa))),(*(s16 *)((u8 *)(arg1)+(0x10))));{func_02025f84(b,0x85);func_02025f84(b,0x86);func_02025f84(b,0x87);func_02025f84(b,0x88);func_02025f84(b,0x89);func_02025f84(b,0x8a);func_02025f84(b,0x8d);func_02025f84(b,0x8f);func_02025f84(b,0x91);func_02025f84(b,0x93);func_02025f84(b,0x95);func_02025f84(b,0x97);func_02025f84(b,0x9b);};func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0xe,((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100)),((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50)),0);func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0xf,((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100)),((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50)),0);func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0x10,((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100)),((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50)),0);func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),0x11,((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100)),((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50)),0);
        if(!active){(*(s32 *)((u8 *)(dst)+(0x70)))=1;func_020dd810(b,0,0);func_0202bfa8(b,(u8)((*(u16 *)((u8 *)(b)+(0x90)))+9));func_02032ff8(b,1);};
        value=(*(s16 *)((u8 *)(src)+(0x34)))*5*(((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(4))>>16))+98))/100;(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(4)))+=value;if((*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(8)))<(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(4))))(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(4)))=(*(s32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(8)));func_020bfd78(0x80,0x60,1,7,value,b,(*(u16 *)((u8 *)(b)+(0x90))),0);(*(u16 *)((u8 *)(b)+(0x8a)))=0x7fff;func_020dd810(b,0,0);(*(s32 *)((u8 *)(b)+(0xf8)))=0;func_020226ec(b,0x80000000);break;
    }
    case 0x75:case 0x77:case 0x79:case 0x7b:case 0x7d:case 0x7f:case 0x81: {
        u32 mask;
        u16 id;
        s32 bits;
        u8 * list;
        u8 * node;
        s32 chance;
        s32 resist;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        switch(op){case 0x75:mask=0x100;id=0x8d;break;case 0x77:mask=0x400;id=0x8f;break;case 0x79:mask=0x1000;id=0x91;break;case 0x7b:mask=0x4000;id=0x93;break;case 0x7d:mask=0x10000;id=0x95;break;case 0x7f:mask=0x40000;id=0x97;break;case 0x81:mask=0x400000;id=0x9b;break;}
        list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));bits=0;{chance=(s16)((*(s16 *)((u8 *)(arg1)+(0xa)))+func_020db864(a,0,1)/5);resist=(s16)((*(s8 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x37+(0))))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0xaa+2*(0))))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x84)))-(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x86))));if(chance>100)chance=100;chance=(s16)(chance-(resist*10+func_020db864(b,0,3)/5));if((s32)((u16)((((data_0216263c[0]=data_0216263c[1]*data_0216263c[0]+data_0216263c[2])>>16)*(100))>>16))<chance)bits|=1;if((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))&0x20)bits=0;};{if(bits&1){if(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78))))&mask){node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_02025f84(b,id);bits|=2;}}else bits|=2;}};if(bits!=3)break;
        func_02025f38(b,arg1,id);(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x78)))|=mask;
        switch(op){case 0x75:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),1,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x77:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),3,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x79:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),5,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x7b:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),7,(s16)(*(s16 *)((u8 *)(arg1)+(8))),(s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/5),0);break;case 0x7d:func_020306f8((*(u8 **)((u8 *)(b)+(0x118))),9,(*(s16 *)((u8 *)(arg1)+(8))),(*(s16 *)((u8 *)(arg1)+(6))),0);break;case 0x7f:(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x7e)))=(*(s16 *)((u8 *)(arg1)+(6)));break;case 0x81:(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x86)))=(*(s16 *)((u8 *)(arg1)+(6)));break;}
        func_020226ec(b,mask);break;
    }
    case 0x8c: {
        s32 value;

        if((func_02022fb0((u8 *)arg1)&&active)){value=(*(s16 *)((u8 *)(arg1)+(6)));if((*(s16 *)((u8 *)(dst)+(0xc)))<=value)(*(s16 *)((u8 *)(dst)+(0xc)))=0;else (*(s16 *)((u8 *)(dst)+(0xc)))-=(s16)value;if(mode==0)func_020bfd78(0x80,0x54,0,2,value,b,(*(u16 *)((u8 *)(b)+(0x90))),2);}break;
    }
    case 0x8d: {
if((func_02022fb0((u8 *)arg1)&&active)){(*(u32 *)((u8 *)(src)+(0x8c)))|=0x1000;(*(s32 *)((u8 *)(src)+(4)))=0;};break;
    }
    case 0x91:case 0x92:case 0x93: {
        s32 value;

        if(op==0x91)value=2;else if(op==0x92)value=3;else value=1;if((func_02022fb0((u8 *)arg1)&&active))((u8 *)(src))[(0x3f)]=value;break;
    }
    case 0x94:case 0x95:case 0x12d:case 0x130:case 0x132:case 0x133:case 0x134:case 0x135: {
        u8 * node;
        u8 * list;
        s32 bits;
        u16 id;
        u32 mask;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        switch(op){case 0x94:id=0xa2;mask=1;break;case 0x95:id=0xa3;mask=2;break;case 0x12d:id=0xa4;mask=0x10;break;case 0x130:id=0xa6;mask=0x20;break;case 0x132:id=0xa7;mask=0x40;break;case 0x133:id=0xa8;mask=0x80;break;case 0x134:id=0xa9;mask=0x100;break;case 0x135:id=0xaa;mask=0x200;break;}
        list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));bits=1;{if(bits&1){if(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x8c))))&mask){node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_020263b4(b,id);bits|=2;}}else bits|=2;}};if(bits==3){func_02025f38(b,arg1,id);(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x8c)))|=mask;}break;
    }
    case 0x197:case 0x198:case 0x19b:case 0x19c:case 0x19f:case 0x1a0: {
        u8 * node;
        u8 * list;
        s32 bits;
        u16 id;
        u32 mask;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        switch(op){case 0x197:case 0x19f:id=0xab;mask=8;break;case 0x198:case 0x1a0:id=0xac;mask=0x10;break;case 0x19b:case 0x19c:id=0xaf;mask=0x20;break;}
        bits=1;list=(*(u8 **)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x60)));{if(bits&1){if(((*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x90))))&mask){node=func_02022558(list,id);if(node && (*(s8 *)((u8 *)(node)+(2)))<=(*(s16 *)((u8 *)(arg1)+(2)))){func_0202647c(b,id);bits|=2;}}else bits|=2;}};if(bits!=3)break;func_02025f38(b,arg1,id);(*(u32 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x90)))|=mask;
        switch(op){case 0x197:case 0x19f:(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x94)))=((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100));(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x96)))=((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50));break;case 0x198:case 0x1a0:(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x98)))=((s16)(((*(s16 *)((u8 *)(arg1)+(8)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/99+5)/100));(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x9a)))=((s16)((*(s16 *)((u8 *)(arg1)+(6)))+(*(s16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x118))))+(0x2c)))/20+50));break;case 0x19b:case 0x19c:(*(s16 *)((u8 *)((*(u8 **)((u8 *)(b)+(0x118))))+(0x9c)))=(*(s16 *)((u8 *)(arg1)+(8)));break;}break;
    }
    case 0x96: {

        if((func_02022fb0((u8 *)arg1)&&active)){func_020d0a40(0x13);(*(u8 **)((u8 *)((*(u8 **)((u8 *)(data_02160244)+(0))))+(0x70)))=b;(*(u16 *)((u8 *)((*(u8 **)((u8 *)(a)+(0x128))))+(0x1e)))|=0x200;}break;
    }
    case 0x97: {
        u8 * node;
        u8 * list;
        s32 value;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        value=func_0202e930();func_020d708c((*(u16 *)((u8 *)(arg1)+(6))),(*(u16 *)((u8 *)(arg1)+(8))),(*(u16 *)((u8 *)(arg1)+(0xa))),value);
        for(node=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));node;node=(*(u8 **)((u8 *)(node)+(0x174)))){list=(*(u8 **)((u8 *)(node)+(0x128)));if((*(s32 *)((u8 *)(list)+(0x54)))==0){((u8 *)(data_02160a74))[(0x1e3)]=1;func_020d09d8(node);func_020dde88(node);((u8 *)(node))[(0x114)]=3;func_02032ff8(node,0);((u8 *)(list))[(0x92)]=1;(*(s32 *)((u8 *)(node)+(0)))+=0x12c000;}}func_020d0a40(0x14);break;
    }
    case 0x98: {
        u8 * node;
        u8 * list;
        s32 value;

        if(!(func_02022fb0((u8 *)arg1)&&active))break;
        value=func_0202e930();func_020d708c((*(u16 *)((u8 *)(arg1)+(6))),(*(u16 *)((u8 *)(arg1)+(8))),(*(u16 *)((u8 *)(arg1)+(0xa))),value);
        for(node=(*(u8 **)((u8 *)(data_02160a6c)+(0xb8)));node;node=(*(u8 **)((u8 *)(node)+(0x174)))){list=(*(u8 **)((u8 *)(node)+(0x128)));if((*(s32 *)((u8 *)(list)+(0x54)))==0){((u8 *)(data_02160a74))[(0x1e3)]=1;func_020d09d8(node);func_020dde88(node);((u8 *)(node))[(0x114)]=3;func_02032ff8(node,0);((u8 *)(list))[(0x92)]=1;(*(s32 *)((u8 *)(node)+(4)))+=0x12c000;}}func_020d0a40(0x15);break;
    }
    case 0x9f: {
        u8 * node;

        if((func_02022fb0((u8 *)arg1)&&active)){node=(*(u8 **)((u8 *)(a)+(0x118)));result=(*(s16 *)((u8 *)(arg1)+(6)));if(result>=(*(s32 *)((u8 *)(node)+(4))))result=(*(s32 *)((u8 *)(node)+(4)))-1;(*(s32 *)((u8 *)(node)+(4)))-=result;func_020bfd78(0x80,0x60,1,1,result,a,(*(u16 *)((u8 *)(a)+(0x90))),0);}break;
    }
    default:break;
    }
    return 0;
}
#pragma optimization_level 4
