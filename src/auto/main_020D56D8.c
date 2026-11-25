/* 10 functions from 0x020D56D8 to 0x020D655C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160244;
extern void *func_020c17bc(void *,u16,u16,u8,s16);
extern void func_0206e7a0(u8,void *,void *,u16);
extern s32 func_020d655c(u8 *,u8 *);
typedef struct {s32 x,y,z;u8 f0c,pad0d;u16 f0e;u8 f10,pad11;u16 f12;u8 f14;} CommandEffect;

typedef struct {
    u8 pad_0[0x52];
    s16 unk_52;
} Struct020d64c8;

typedef struct {
    u8 pad_0[0x120];
    void *unk_120;
} Struct020d5fd0;

extern s16 *func_02022494(void *, u32);
extern void *func_02026c60(void *, s32);
extern void func_02026cac(void *);
extern void func_02026c94(void *);
extern u8 *data_02160a74;
extern void func_020b52f4(s32);
extern void func_020b532c(s32);
extern void func_020a5ce4(void *);
extern void func_020a9544(void *);
extern void func_020e1ec8(void *, s32);
extern void func_020a8810(void *, u32);
extern void func_020e24bc(void *, s32, s32, s32, s32);

s32 func_020d56d8(u8 *self,u8 *target,s32 arg2,s32 mode){
u8 *state,*cmd,*action;
state=*(u8**)(self+0x128);action=*(u8**)(state+8);
s32 zero=0,two=2;
s32 pos6[3],pos[3];
CommandEffect effect;
s32 pos24[3];
cmd=func_02026c60(*(void**)(self+0x120),mode);
if(cmd){
switch(*(u16*)cmd){
case 6:
pos6[0]=*(s32*)self+*(s32*)(state+0x98);
pos6[1]=*(s32*)(self+4)+*(s32*)(state+0x9c);
pos6[2]=*(s32*)(self+8)+*(s32*)(state+0xa0);
if(*(s32*)(cmd+8)>=19){if(target)func_020c17bc(target+0x1a8,(u16)*(s32*)(cmd+4),9999,(u8)*(s32*)(cmd+8),zero);}
else func_020c17bc(pos6,(u16)*(s32*)(cmd+4),9999,(u8)*(s32*)(cmd+8),zero);
return 0;
case 7:
effect.f0c=two;effect.f0e=zero;effect.f10=zero;effect.f14=zero;effect.x=zero;effect.y=zero;effect.z=zero;effect.f12=zero;
if(*(u32*)(cmd+8)&2)effect.f14=1;else if(*(u32*)(cmd+8)&4)effect.f14=2;else if(*(u32*)(cmd+8)&8)effect.f14=3;{s32 x=0,y=0,z=0;u32 attached=*(u32*)(cmd+8)&1;
if(!attached){
effect.f10=0;
switch(*(s32*)(cmd+4)){case 66:effect.f10=2;break;case 69:effect.f10=2;break;case 130:z=0x18000;x-=0x6000;y=z-0x28000;break;case 210:*(s32*)(cmd+4)=69;y=-0xa000;break;}pos[0]=x+(*(s32*)self+*(s32*)(state+0x98));pos[1]=y+(*(s32*)(self+4)+*(s32*)(state+0x9c));pos[2]=z+(*(s32*)(self+8)+*(s32*)(state+0xa0));if(*(s32*)(cmd+4)!=69) if(target && *(u16*)(target+0x8e)==851)pos[1]+=0x28000;
func_0206e7a0((u8)*(s32*)(cmd+4),pos,&effect,0);
}else if(attached && target){
effect.f0c=0;
switch(*(s32*)(cmd+4)){
case 1012:effect.f0c=2;*(s32*)(cmd+4)=12;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)-65536;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 2012:effect.f0c=2;*(s32*)(cmd+4)=12;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)+65536;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 3012:effect.f0c=2;*(s32*)(cmd+12)=12;
pos[0]=*(s32*)target-40960;pos[1]=*(s32*)(target+4)+0;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 4012:effect.f0c=2;*(s32*)(cmd+12)=12;
pos[0]=*(s32*)target+40960;pos[1]=*(s32*)(target+4)+0;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 1015:effect.f0c=2;*(s32*)(cmd+4)=15;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)-24576;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 2015:effect.f0c=2;*(s32*)(cmd+4)=15;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)+24576;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 3015:effect.f0c=2;*(s32*)(cmd+4)=15;
pos[0]=*(s32*)target-40960;pos[1]=*(s32*)(target+4)-40960;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 4015:effect.f0c=2;*(s32*)(cmd+4)=15;
pos[0]=*(s32*)target+40960;pos[1]=*(s32*)(target+4)-40960;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
}
if(effect.f0c==0){
s32 v;effect.f10=2;v=func_020d655c(self,action);
if(*(u16*)(target+0x8e)==851){
if(v==0){pos[0]=*(s32*)target;pos[1]=*(s32*)(target+4)+0x28000;pos[2]=*(s32*)(target+8);effect.f0c=2;func_0206e7a0((u8)*(s32*)(cmd+4),pos,&effect,0);}

}else func_0206e7a0((u8)*(s32*)(cmd+4),target,&effect,0);
}else func_0206e7a0((u8)*(s32*)(cmd+4),pos,&effect,0);
}
}
pos[0]=0;pos[1]=0;pos[2]=0;effect.f0c=2;
if(*(s32*)(cmd+12)>-1){
effect.f14=0;if(*(u32*)(cmd+16)&2)effect.f14=1;else if(*(u32*)(cmd+16)&4)effect.f14=2;else if(*(u32*)(cmd+16)&8)effect.f14=3;{s32 x=0,y=0,z=0;u32 attached=*(u32*)(cmd+16)&1;
if(!attached){
effect.f10=0;
if(*(s32*)(cmd+12)==66)effect.f10=2;else if(*(s32*)(cmd+12)==69)effect.f10=2;pos[0]=x+(*(s32*)self+*(s32*)(state+0x98));pos[1]=y+(*(s32*)(self+4)+*(s32*)(state+0x9c));pos[2]=z+(*(s32*)(self+8)+*(s32*)(state+0xa0));if(target && *(u16*)(target+0x8e)==851)pos[1]+=0x28000;
func_0206e7a0((u8)*(s32*)(cmd+12),pos,&effect,0);
}else if(attached && target){
effect.f0c=0;
switch(*(s32*)(cmd+12)){
case 1012:effect.f0c=2;*(s32*)(cmd+12)=12;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)-65536;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 2012:effect.f0c=2;*(s32*)(cmd+12)=12;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)+65536;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 3012:effect.f0c=2;*(s32*)(cmd+12)=12;
pos[0]=*(s32*)target-40960;pos[1]=*(s32*)(target+4)+0;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 4012:effect.f0c=2;*(s32*)(cmd+12)=12;
pos[0]=*(s32*)target+40960;pos[1]=*(s32*)(target+4)+0;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 1015:effect.f0c=2;*(s32*)(cmd+12)=15;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)-24576;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 2015:effect.f0c=2;*(s32*)(cmd+12)=15;
pos[0]=*(s32*)target+0;pos[1]=*(s32*)(target+4)+24576;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 3015:effect.f0c=2;*(s32*)(cmd+12)=15;
pos[0]=*(s32*)target-40960;pos[1]=*(s32*)(target+4)-40960;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
case 4015:effect.f0c=2;*(s32*)(cmd+12)=15;
pos[0]=*(s32*)target+40960;pos[1]=*(s32*)(target+4)-40960;pos[2]=*(s32*)(target+8);
if(*(u16*)(target+0x8e)==851)pos[1]+=0x28000;
break;
}
if(effect.f0c==0){
s32 v;effect.f10=2;v=func_020d655c(self,action);
if(*(u16*)(target+0x8e)==851){
if(v==0){pos[0]=*(s32*)target;pos[1]=*(s32*)(target+4)+0x28000;pos[2]=*(s32*)(target+8);effect.f0c=2;func_0206e7a0((u8)*(s32*)(cmd+4),pos,&effect,0);}
else func_0206e7a0((u8)*(s32*)(cmd+4),target,&effect,0);
}else func_0206e7a0((u8)*(s32*)(cmd+12),target,&effect,0);
}else func_0206e7a0((u8)*(s32*)(cmd+12),pos,&effect,0);
}
}
}
if(*(u32*)(cmd+20)&16)data_02160244[0x14d]=1;
return 0;
case 8:
if(arg2 && *(u8**)((u8*)arg2+0x19c)){
u8 *p=*(u8**)((u8*)arg2+0x19c);
*(u16*)(p+2)|=2;
*(u16*)(p+4)=*(s32*)(cmd+4);*(u16*)(p+6)=*(s32*)(cmd+8);*(u16*)(p+8)=*(s32*)(cmd+12);*(u16*)(p+10)=*(s32*)(cmd+16);
}
return 0;
case 24:{
u8 *obj;
pos24[0]=*(s32*)self+*(s32*)(state+0x98);
pos24[1]=*(s32*)(self+4)+*(s32*)(state+0x9c);
pos24[2]=*(s32*)(self+8)+*(s32*)(state+0xa0);
obj=func_020c17bc(pos24,(u16)*(s32*)(cmd+4),9999,(u8)*(s32*)(cmd+8),(s16)*(s32*)(cmd+12));
if(*(s32*)(cmd+16))*(u16*)(*(u8**)(obj+0x19c)+12)=*(s32*)(cmd+16);
if(*(u32*)(cmd+20)&8)*(u16*)(*(u8**)(obj+0x19c)+2)|=4;
return (s32)obj;
}
}
}
return 0;
}

void func_020d5fd0(Struct020d5fd0 *arg0) {
    s32 one = 1;
    s32 zero = 0;
    s32 flag;
    void *node;

    do {
        flag = zero;
        node = func_02026c60(arg0->unk_120, one);
        if (node != NULL) {
            switch (*(u16 *)node) {
            case 6:
            case 7:
            case 8:
            case 0x18:
                func_02026cac(arg0->unk_120);
                func_02026c94(arg0->unk_120);
                flag = one;
                break;
            default:
                break;
            }
        }
    } while (flag != zero);
}

void func_020d6048(s32 arg0) {
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);

    func_020b52f4(one);
    func_020a5ce4(p);
    func_020a9544(*(void **)p);
    {
        s32 zero = 0;
        *(u32 *)p = zero;
        func_020e1ec8(p, zero);
        func_020a8810(*(void **)((u8 *)p + 4), 0x10);
        func_020e24bc(p, zero, 7, arg0, one);
    }
}

void func_020d60b8(s32 arg0) {
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);

    func_020b532c(one);
    func_020a5ce4(p);
    func_020a9544(*(void **)p);
    {
        s32 zero = 0;
        func_020e1ec8(p, zero);
        func_020a8810(*(void **)((u8 *)p + 4), 0x10);
        func_020e24bc(p, zero, 7, arg0, one);
        func_020b52f4(zero);
    }
}

void func_020d612c(s32 arg0, s32 arg1) {
    s32 zero = 0;
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);
    if (arg0 == 1) {
        func_020b52f4(one);
    } else {
        func_020b52f4(zero);
    }
    func_020a5ce4(p);
    func_020a9544(*(void **)p);
    *(u32 *)p = zero;
    if (arg0 != 1) {
        return;
    }
    func_020e1ec8(p, zero);
    func_020a8810(*(void **)((u8 *)p + 4), 0x10);
    func_020e24bc(p, zero, 7, arg1, one);
}

void func_020d61b8(s32 arg0, s32 arg1) {
    s32 zero = 0;
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);
    func_020a5ce4(p);
    func_020a9544(*(void **)p);
    *(u32 *)p = zero;
    if (arg0 != 1) {
        return;
    }
    func_020e1ec8(p, 0xe);
    func_020a8810(*(void **)((u8 *)p + 4), 0x10);
    func_020e24bc(p, zero, 0x4a, arg1, one);
}

void func_020d622c(void) {
    s32 zero = 0;
    void *p = *(void **)(data_02160a74 + 0x94);
    func_020b52f4(zero);
    func_020b532c(zero);
    func_020a5ce4(p);
    func_020a9544(*(void **)p);
    *(u32 *)p = zero;
}

extern u8 *data_02160244;
extern u32 data_0216263c[3];
extern s32 func_02065840(s32, u8);
extern void func_02095e34(void *);
extern void func_020960f4(void);
extern void func_02026c00(void *);
extern void func_020220b0(u8, s32);
extern void *func_0202662c(u16, u16);
void func_020d626c(void *arg0_v) {
    u8 *arg0 = (u8 *)arg0_v;
    u8 *r4 = *(u8 **)(arg0 + 0x128);
    s32 zero = 0;
    u8 *r5;
    u8 *r6;

    if (r4[0x76] & 1) {
        u8 *p = *(u8 **)(r4 + 0x78);
        r5 = *(u8 **)(p + 0xc);
        r6 = *(u8 **)(p + 4);
    } else {
        u8 *res = (u8 *)func_02022494(r4, zero);
        s16 val;
        r5 = *(u8 **)(res + 4);
        val = *(s16 *)res;
        r6 = *(u8 **)(r5 + 8);
        *(s16 *)(r4 + 0x52) = val;
        *(u8 **)(r4 + 8) = r6;
        *(u8 **)(r4 + 0xc) = r5;
    }

    if ((*(u8 **)(arg0 + 0x118))[0] == 0 &&
        !(*(u32 *)(r4 + 0x18) & 8) &&
        !(*(u16 *)(r5 + 0xe) & 1) &&
        !(*(u16 *)(r5 + 0xe) & 0x200)) {
        if (func_02065840(0, r6[0]) != 0) {
            *(u32 *)(r4 + 0x18) &= ~2;
            if (*(u32 **)(r5 + 0x28) != NULL) {
                *(u32 *)(r4 + 0) = **(u32 **)(r5 + 0x28);
            }
        }
    }

    {
        u8 *p = *(u8 **)(r5 + 0x14);
        if (p != NULL && (p[0x16] & 4) &&
            !(*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x30) &&
            !(*(u16 *)(r5 + 0xe) & 0x200)) {
            func_02095e34(p);
            func_020960f4();
        }
    }

    if (*(void **)(arg0 + 0x120) != NULL) {
        func_02026c00(*(void **)(arg0 + 0x120));
        *(void **)(arg0 + 0x120) = (void *)zero;
    }

    if ((*(u8 **)(arg0 + 0x118))[0] == 0) {
        u32 flags = *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78);
        if (flags & 0x20) {
            u8 *res = (u8 *)func_02022494(r4, 0);
            r6 = *(u8 **)(data_02160244 + 0x148);
            *(u8 **)(*(u8 **)(res + 4) + 8) = r6;
            *(u8 **)(r4 + 8) = r6;
        } else if (flags & 0x10) {
            u8 *res = (u8 *)func_02022494(r4, 0);
            r6 = *(u8 **)(data_02160244 + 0x148);
            *(u8 **)(*(u8 **)(res + 4) + 8) = r6;
            *(u8 **)(r4 + 8) = r6;
        } else if (*(u16 *)(r5 + 0xe) & 0x200) {
            u8 *res = (u8 *)func_02022494(r4, 0);
            r6 = *(u8 **)(data_02160244 + 0x148);
            *(u8 **)(*(u8 **)(res + 4) + 8) = r6;
            *(u8 **)(r4 + 8) = r6;
        } else if (flags & 4) {
            u8 *res = (u8 *)func_02022494(r4, 0);
            r5 = *(u8 **)(res + 4);
            {
                u32 seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                u16 rnd = (u16)(((seed >> 16) * 100) >> 16);
                r6 = *(u8 **)(r5 + 8);
                data_0216263c[0] = seed;
                if (rnd < 25) {
                    if (r6[0] == 5) {
                        func_020220b0(r6[1], 1);
                    }
                    if (r6[0] == 6) {
                        *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x5a) = 100;
                    }
                    r6 = *(u8 **)(data_02160244 + 0x148);
                    *(u8 **)(r5 + 8) = r6;
                    *(u8 **)(r4 + 8) = r6;
                }
            }
        }
    }

    {
        u8 *p = *(u8 **)(arg0 + 0x118);
        if (p[0] == 0) {
            if (*(void **)(r4 + 8) == NULL) {
                return;
            }
            *(void **)(arg0 + 0x120) = func_0202662c(*(u16 *)(arg0 + 0x8c), *(u16 *)(r6 + 0x18));
        } else if (p[0] == 1) {
            u16 val = (u16)(((*(u16 *)(p + 0x4c) / 10) * 10) + 1);
            *(void **)(arg0 + 0x120) = func_0202662c(val, *(u16 *)(r6 + 0x18));
        }
    }
}

void func_020d64c8(Struct020d64c8 *arg0) {
    s16 *p = func_02022494(arg0, 0);
    arg0->unk_52 = *p;
}

void func_020d64e4(void *arg0) {
    u8 *sub = *(u8 **)((u8 *)arg0 + 0x128);
    s32 flag;
    if ((*(u16 *)(sub + 0x22) & 1) != 0) {
        goto end;
    }
    *(u16 *)(sub + 0x22) |= 1;
    func_020d626c(arg0);
    flag = *(u32 *)(sub + 0x18) & 8;
    if ((*(u32 *)(*(void **)((u8 *)arg0 + 0x118) + 0x78) & 0x30) != 0) {
        goto end;
    }
    if ((*(u16 *)(*(void **)(sub + 0xc) + 0xe) & 0x200) != 0 || flag != 0) {
        goto end;
    }
    func_020dd810(arg0, 0x12, 0);
    *(u32 *)(sub + 0x24) = 0x14;
    *(u16 *)(sub + 0x1c) = 0;
    *(u32 *)(sub + 0x14) = 0;
end:
    return;
}

