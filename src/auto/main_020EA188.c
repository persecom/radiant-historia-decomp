/* 10 functions from 0x020EA188 to 0x020EB180 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a80;

extern u32 data_02160a90[5];
extern u8 data_021518c0[8];
extern s32 func_0210dba0(void *);
extern s32 func_021086d4();
extern char data_02151784[],data_0215179c[],data_021517b4[],data_021517c8[],data_021517e4[],data_02151800[],data_0215181c[],data_0215183c[],data_02151860[],data_0215187c[],data_0215189c[];
extern u32 data_02155c3c;
extern void *func_0210957c(s32);
extern void func_0210950c(void *);
extern void func_02005e80(char *,const char *,...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *,s32);
extern s32 func_0210cd20(void *,s32);
extern void func_021091b4(void);
extern s32 func_02108620(void *,char *,char *,char *,s32);
extern void func_021093b0(void *);
extern u8 *func_02109f3c(void *);
extern s32 func_020020bc(u32,u32);
extern s32 func_02002080(u32,u32);
extern u8 *func_0210c594(u32,u32);
extern void func_02108680(void *, u32, s32);
extern void *func_0210a4cc(void);
extern s32 func_020f1ffc(void *, s32, s32, s32);
extern void func_0210c5dc(void *);
extern void *func_0210eb98(void *, s32);
extern void func_0210f3ac(void *, void *, s32);
extern s32 func_0210db70(void *);
extern void func_020eaae0(void);
extern s32 data_02170248[],data_02170204[];
extern void func_02001134(void *,void *);
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
extern s32 func_020ebddc(void *, s32);
extern void func_020dd810(void *, s32, s32);
extern u8 *data_02160a6c;
s32 func_020ea188(u8 *arg0,s32 id,u8 type) {
 char filename[40],pathA[50],pathB[50],pathC[50];
 void *file=0;
 s32 cached=0,zero=0;
 u8 *resource;
 if(type==0)func_02005e80(filename,data_02151784);
 else if((u8)(type+255)<=1) {
 if(func_0210957c(0)) {file=func_0210957c(0);func_0210950c(file);cached=1;}
 else func_02005e80(filename,data_0215179c);
 }
 ((s32 *)&data_02160a80)[1]=zero;((s32 *)&data_02160a80)[2]=zero;((s32 *)&data_02160a80)[3]=zero;
 if(!cached)file=func_021092d8(filename);
 if(func_02092ab0(file,id)!=-1){
 ((s32 *)&data_02160a80)[1]=func_0210cd20(file,zero);
 ((s32 *)&data_02160a80)[2]=func_0210cd20(file,zero);
 ((s32 *)&data_02160a80)[3]=func_0210cd20(file,zero);
 func_021091b4();
 }
 if(((s32 *)&data_02160a80)[1] && ((s32 *)&data_02160a80)[2] && ((s32 *)&data_02160a80)[3]){
 if(type==0){
 func_02005e80(pathA,data_021517b4,((s32 *)&data_02160a80)[1]);
 func_02005e80(pathB,data_021517c8,((s32 *)&data_02160a80)[2]);
 func_02005e80(pathC,data_021517e4,((s32 *)&data_02160a80)[3]);
 } else if(type==1){
 func_02005e80(pathA,data_02151800,((s32 *)&data_02160a80)[1]);
 func_02005e80(pathB,data_0215181c,((s32 *)&data_02160a80)[2]);
 func_02005e80(pathC,data_0215183c,((s32 *)&data_02160a80)[3]);
 } else if(type==2){
 func_02005e80(pathA,data_02151860,((s32 *)&data_02160a80)[1]);
 func_02005e80(pathB,data_0215187c,((s32 *)&data_02160a80)[2]);
 func_02005e80(pathC,data_0215189c,((s32 *)&data_02160a80)[3]);
 }
 if(!func_02108620(*(void **)arg0,pathA,pathB,pathC,zero))return zero;
 }
 if(!cached && file)func_021093b0(file);
 resource=func_02109f3c(*(void **)(*(u8 **)(*(u8 **)arg0+0x58)+8));
 if(!*(u8 **)(resource+0x10)){
 if(type<=1){
 s32 i;
 u8 *allocation;
 s32 count;
 s32 j,index;
 s32 total=*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0+0x58)+0xc));
 s32 extra=func_020020bc(total,2)!=0;
 count=(u16)(extra+func_02002080(total,2));
 allocation=func_0210c594(count*4,data_02155c3c);
 u8 *p=allocation;
 s32 yes=1,no=0,bit=1;
 for(i=0;i<count;i++){
 index=i*2;
 *(u16 *)(p+2)=index;p[0]=0;
 for(j=0;j<2;j++,index++){
 if(total>index){
 s32 absent;
 if(func_021086d4(*(void **)arg0,(u16)index)!=0)absent=no;else absent=yes;
 if(absent==0)p[0]|=(u8)(bit<<j);
 }
 }
 p+=4;
 }
 *(u8 **)(resource+0x10)=allocation;
 }else if(type==2){
 s32 total=*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0+0x58)+0xc));
 s32 extra=func_020020bc(total,4)!=0;
 s32 count=(u16)(extra+func_02002080(total,4));
 u8 *allocation=func_0210c594(count*4,data_02155c3c);
 u8 *p=allocation;
 s32 i;
 for(i=0;i<count;i++){*(u16 *)(p+2)=i;p[0]|=1;p+=4;}
 *(u8 **)(resource+0x10)=allocation;
 }
 }
 *(u8 **)(arg0+0xc)=*(u8 **)(resource+0x10);
 return 1;
}

s32 func_020ea574(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *r0 = *(u8 **)arg0;
    u32 count = *(u16 *)(*(u8 **)(*(u8 **)(r0 + 0x58) + 0xc));
    s32 res;
    if (count <= arg1) {
        return 0;
    }
    res = (func_021086d4(r0) == 0) ? 1 : 0;
    if (res != 0) {
        return 0;
    }
    func_02108680(*(u8 **)arg0, arg1, arg2);
    return 1;
}

s32 func_020ea5d4(u8 *arg0, s32 arg1) {
    u8 *r2 = *(u8 **)arg0;
    u8 *r3 = *(u8 **)(arg0 + 0xc);
    if (*(u16 *)(*(u8 **)(*(u8 **)(r2 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
    case 0:
        return 0;
    case 1:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    case 3:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    default:
        return 0;
    }
}

extern void func_0211a4c0(void *, s32, s32);
extern void func_0211ad90(void (*)(void));
extern void func_0211a4d4(void *, void *, void *);
extern void func_02119da4(void *);
extern void func_02119f1c(void);
extern void func_0211a178(s32, s32, s32);
extern void func_0211a3ac(s32, s32);
extern void func_0211a26c(s32, s32, s32);
extern void func_02119eb8(void *);
extern void func_0211a128(void);
extern void func_02119e4c(void);
extern void func_0211ada0(void);
extern void func_02117be0(void *, s32);
extern void *func_021176b0(void *, u32);
extern void func_02118eec(void *, s32);
extern void func_02118ed0(void *, s32, s32);
extern void func_02118eb4(void *, s32);
extern void func_02118e94(void *, s16, s16);
extern void func_02107aec(void);
extern u8 data_021612c8[];
extern u32 data_02162860;
extern s16 data_0213a394[];
extern s32 data_02162834[];
void func_020ea64c(void) {
    u8 *g, *node, *obj, *bank, *seq, *v;
    s32 zero = 0, one = 1;
    s32 flip, scale, vis, sx, sy, idx, r1;
    u32 flags;
    u32 attr = 2;

    attr <<= 6;
    attr |= 0x1f0000;
    *(volatile u32 *)0x040004a4 = attr;
    *(volatile u32 *)0x04000480 = 0x7fff;
    func_0211a4c0(data_021612c8, zero, zero);

    if (data_02162860 == 0) {
        g = data_02160a80;
        if (*(s32 *)(g + 0x54) != 0) return;
    } else {
        g = data_02160a80;
        if (*(s32 *)(g + 0x54) == 0) return;
    }

    node = *(u8 **)(g + 0x3c);
    while (node != NULL) {
        flags = *(u32 *)(node + 0x18);
        obj = *(u8 **)(node + 0);
        vis = 1;
        if ((flags & 1) && !(flags & 0x10)) {
            sx = *(s32 *)(node + 0x1c) >> 12;
            sy = *(s32 *)(node + 0x20) >> 12;
            if (sx < vis - 0x31 || sx > 0x130 || sy < vis - 0x19 || sy > 0xd8) vis = 0;
        }
        if (vis && (flags & 1)) {
            scale = *(s32 *)(node + 0x28);
            flip = 0;
            if (obj[0x70] & 2) {
                scale = -scale;
                flip = 1;
                func_0211ad90(func_02107aec);
            }
            bank = *(u8 **)(obj + 0x58);
            func_0211a4d4(data_021612c8, *(void **)(bank + 0x10), *(void **)(bank + 0x14));
            func_02119da4(data_021612c8);
            func_02119f1c();
            func_0211a178(*(s32 *)(node + 0x1c), *(s32 *)(node + 0x20), *(s32 *)(node + 0x24));
            if (flags & 4) {
                idx = (*(u16 *)(obj + 0x5e) >> 4) << 1;
                func_0211a3ac(data_0213a394[idx], data_0213a394[idx + 1]);
            }
            func_0211a26c(scale, *(s32 *)(node + 0x2c), 0x1000);
            func_02119eb8(obj);
            func_0211a128();
            func_02119e4c();
            if (flip) func_0211ada0();
        }
        if (*(s32 *)(node + 0x14) == 0) {
            r1 = *(s32 *)(obj + 0x60) << data_02162834[0];
            *(s32 *)(node + 0x10) = zero;
            if (*(s32 *)(obj + 0xc) != 0) {
                *(s32 *)(obj + 0x10) += (s32)(((s64)*(s32 *)(obj + 0x14) * r1 + 0x800) >> 12);
            } else {
                *(s32 *)(obj + 0x10) -= r1 << 12;
            }
            *(s32 *)(obj + 0x0) += 8;
            seq = *(u8 **)(obj + 0x1c);
            r1 = *(s32 *)(seq + 0xc);
            if (*(s32 *)(obj + 0x8) == r1) {
                r1 = *(u16 *)(seq + 2);
                r1 = r1 + (r1 << 3) - 8;
                vis = *(s32 *)(obj + 0x0) <= r1 ? one : zero;
            } else {
                r1 = *(u16 *)seq;
                r1 = r1 + (r1 << 3);
                vis = *(s32 *)(obj + 0x0) >= r1 ? one : zero;
            }
            *(s32 *)(node + 0x10) = vis;
            if (vis != 0) func_02117be0(obj, zero);
            seq = *(u8 **)(obj + 0x1c);
            v = *(u8 **)(*(u8 **)(obj + 0x0));
            *(void **)(obj + 0x30) = func_021176b0(*(void **)(obj + 0x34), *(u16 *)v);
            idx = *(s32 *)(seq + 4) & 0xff;
            func_02118eec((void *)(obj + 0x3c), 1);
            if (idx != 0) {
                if (idx == 2) {
                    func_02118e94((void *)(obj + 0x3c), *(s16 *)(v + 4), *(s16 *)(v + 6));
                } else {
                    func_02118ed0((void *)(obj + 0x3c), *(s32 *)(v + 4), *(s32 *)(v + 8));
                    func_02118eb4((void *)(obj + 0x3c), *(u16 *)(v + 2));
                    func_02118e94((void *)(obj + 0x3c), *(s16 *)(v + 0xc), *(s16 *)(v + 0xe));
                }
            }
        }
        node = *(u8 **)(node + 0x38);
    }
}

extern u8 *data_02160a80;
void func_020eaa10(u32 arg0) {
    *(u32 *)(data_02160a80 + 0x54) = arg0;
}

void *func_020eaa24(s32 arg0, s32 arg1) {
    void *r5 = func_0210a4cc();
    if (r5 == NULL) {
        return NULL;
    }
    if (!func_020f1ffc(r5, arg0, 0, arg1)) {
        if (r5 != NULL) {
            func_0210c5dc(r5);
        }
        return NULL;
    }
    func_0210f3ac(func_0210eb98(&data_021518c0, arg0), r5, 0);
    *(s32 *)((u8 *)r5 + 0x30) = 1;
    return r5;
}

#pragma opt_propagation off
void func_020eaaa0(u32 arg0) {
    data_02160a90[0] = (u32)func_020eaae0;
    data_02160a90[1] = arg0;
    func_0210db70(data_02160a90);
}
#pragma opt_propagation on
s32 func_020eaacc(void) {
    return func_0210dba0(&data_02160a90);
}

void func_020eb0f8(void) {
    u8 *node = data_02160a6c;
    u8 *obj = *(u8 **)(node + 0x7c);
    s32 zero = 0;
    s32 one = 1;
    s32 arg = zero;
    if (obj == NULL) return;
    while (obj != NULL) {
        u8 *sub = *(u8 **)(obj + 0x108);
        func_020ebddc(sub, *(u32 *)(obj + 0xf8) == 0 ? one : zero);
        if (*(u32 *)(obj + 0xa8) == 0 && *(u32 *)(sub + 0x20) == 1) {
            u8 v = *(u8 *)(obj + 0x104);
            if (v == 3 || v == 8) {
                func_020dd810(obj, arg, arg);
            }
        }
        obj = *(u8 **)(obj + 0x15c);
    }
}

