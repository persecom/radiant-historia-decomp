/* 3 functions from 0x020F0AEC to 0x020F1A1C (main), found by ds-decomp. */
#include "common.h"

typedef struct Flags_020f0aec {
    u16 unk0 : 3;
    u16 b3 : 1;
    u16 b4 : 1;
    u16 b5 : 1;
    u16 b6 : 1;
} Flags_020f0aec;

extern u8 data_02160b10[0x100];
extern u8 data_02151d4c[0x14];
extern u8 data_02151d60[0x14];
extern u8 data_02151d74[0x14];
extern u8 data_02151d88[0x14];
extern void func_02008e68(u8, void *, u32);
extern void func_02005e80(void *, void *, ...);
extern s32 func_02109cf0(void *);
extern void *func_02109b14(void *, s32);
extern void func_0210b0c8(void *, void *);
extern void func_0210b130(void *, void *);
extern u8 *data_02160af0;
extern u32 data_0216281c;
extern u8 data_02170248[0x70];
extern void func_0210bcc8(void *);
extern void func_021205ec(s32, void *, s32);
extern void func_0211e078(void *);
extern void func_0211d7a4(void);
extern void func_021204a8(void);
extern s32 data_02170204[];
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
extern void func_0210d27c(s32);
typedef struct Vec_F0FD0 {s32 x,y,z;} Vec_F0FD0;
static inline void ProjectMatrices_F0FD0(const Vec_F0FD0 *pos,s32 *outX,s32 *outY,const s32 *p,const s32 *m){
 s32 x,y,z,py,px,sy,sx; s64 inv;
 x=m[9]+(s32)(((s64)pos->x*m[0]+(s64)pos->y*m[3]+(s64)pos->z*m[6])>>12);
 y=m[10]+(s32)(((s64)pos->x*m[1]+(s64)pos->y*m[4]+(s64)pos->z*m[7])>>12);
 z=m[11]+(s32)(((s64)pos->x*m[2]+(s64)pos->y*m[5]+(s64)pos->z*m[8])>>12);
 func_02002028(p[15]+(s32)(((s64)x*p[3]+(s64)y*p[7]+(s64)z*p[11])>>12));
 px=p[12]+(s32)(((s64)x*p[0]+(s64)y*p[4]+(s64)z*p[8])>>12);
 py=p[13]+(s32)(((s64)x*p[1]+(s64)y*p[5]+(s64)z*p[9])>>12);
 inv=func_02001fd0();
 sy=(s32)((inv*py+0x80000000LL)>>32);sy=(sy+4096)>>1;sy=((sy<<7)+(sy<<6)+2048)>>12;
 sx=(s32)((inv*px+0x80000000LL)>>32);sx=((((sx+4096)>>1)<<8)+2048)>>12;
 sy=192-sy;*outX=sx;*outY=sy;
}
void func_020f0aec(void) {
    u8 *mgr = data_02160af0;
    u8 *node;
    u8 *obj;

    if (mgr == NULL) {
        return;
    }

    node = *(u8 **)(mgr + 0x64);
    while (node != NULL) {
        u32 id = *(u32 *)(node + 0x10);
        if (id < 10000 && id != 0 && (obj = *(u8 **)(node + 0)) != NULL) {
            if (*(u32 *)(node + 0x14) & 1) {
                u32 param;
                if (*(u32 *)(obj + 0xf4) != 0) {
                    func_0210bcc8(obj);
                }
                func_021205ec(0x17, data_02170248, 0xc);
                func_021205ec(0x19, obj + 0xa0, 0xc);
                param = 0x11f0080;
                func_021205ec(0x29, &param, 1);
                func_0211e078(obj);

                if (*(u32 *)(node + 0x10) == 0x3e5) {
                    if (obj != NULL) {
                        {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x1000;
                                }
                                if (*p >= 0xc80000) {
                                    *p = 0;
                                }
                            }
                        }
                        {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x1000;
                                }
                                if (*p >= 0xc80000) {
                                    *p = 0;
                                }
                            }
                        }
                        *(s32 *)(node + 0x18) = 0;
                        *(s32 *)(node + 0x1c) = 0;
                    }
                } else if (*(u32 *)(node + 0x10) == 0x3e4) {
                    if (obj != NULL) {
                        *(s32 *)(node + 0x18) = 0;
                        if (node[0x45] == 0) {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x4b0000) {
                                    *p = 0x320000;
                                }
                                if (*p < 0x320000) {
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 1) {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x320000) {
                                    node[0x45] = 0;
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 2) {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                *p = 0;
                            }
                        }

                        *(s32 *)(node + 0x1c) = 0;
                        if (node[0x45] == 0) {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x4b0000) {
                                    *p = 0x320000;
                                }
                                if (*p < 0x320000) {
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 1) {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x320000) {
                                    node[0x45] = 0;
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 2) {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                *p = 0;
                            }
                        }
                    }
                }
            }

            if (*(s32 *)(node + 0x18) != 0) {
                u8 *anim = *(u8 **)(obj + 0xfc);
                if (((Flags_020f0aec *)(obj + 0x1a4))->b3 && anim != NULL) {
                    if (*(void (**)(void *))(obj + 0x1b0) != NULL) {
                        (*(void (**)(void *))(obj + 0x1b0))(obj);
                        *(void **)(obj + 0x1b0) = NULL;
                    }
                    if (anim != NULL) {
                        s8 j;
                        s32 limit;
                        for (j = 0; j < (s32)data_0216281c; j++) {
                            *(s32 *)anim += 0x1000;
                        }
                        limit = *(u16 *)(*(u8 **)(anim + 8) + 4) << 12;
                        if (*(s32 *)anim >= limit) {
                            if (((Flags_020f0aec *)(obj + 0x1a4))->b5) {
                                *(s32 *)anim = 0;
                            } else {
                                ((Flags_020f0aec *)(obj + 0x1a4))->b3 = 0;
                                *(s32 *)anim = limit - 1;
                                if (*(void (**)(void *))(obj + 0x1b4) != NULL) {
                                    (*(void (**)(void *))(obj + 0x1b4))(*(void **)(obj + 0x1ac));
                                    *(void **)(obj + 0x1b4) = NULL;
                                }
                            }
                        }
                    }
                }
            }

            if (*(s32 *)(node + 0x1c) != 0) {
                u8 *anim = *(u8 **)(obj + 0x100);
                if (((Flags_020f0aec *)(obj + 0x1a4))->b4 && anim != NULL) {
                    s32 step = *(s32 *)(obj + 0x104);
                    if (*(void (**)(void *))(obj + 0x1b0) != NULL) {
                        (*(void (**)(void *))(obj + 0x1b0))(obj);
                        *(void **)(obj + 0x1b0) = NULL;
                    }
                    if (anim != NULL) {
                        s8 j;
                        s32 limit;
                        for (j = 0; j < (s32)data_0216281c; j++) {
                            *(s32 *)anim += step;
                        }
                        limit = *(u16 *)(*(u8 **)(anim + 8) + 4) << 12;
                        if (*(s32 *)anim >= limit) {
                            if (((Flags_020f0aec *)(obj + 0x1a4))->b6) {
                                *(s32 *)anim = 0;
                            } else {
                                ((Flags_020f0aec *)(obj + 0x1a4))->b4 = 0;
                                *(s32 *)anim = limit - 1;
                                if (*(void (**)(void *))(obj + 0x1b4) != NULL) {
                                    (*(void (**)(void *))(obj + 0x1b4))(*(void **)(obj + 0x1ac));
                                    *(void **)(obj + 0x1b4) = NULL;
                                }
                            }
                        }
                    }
                }
            }
        }
        node = *(u8 **)(node + 0x4c);
    }

    func_0211d7a4();
    func_021204a8();
}

#pragma push
#pragma opt_loop_invariants off
void func_020f0fd0(void){
const s32 *m;u8 *node,*obj;const s32 *p;
if(!data_02160af0)return;
node=*(u8**)(data_02160af0+0x70);
if(node){p=data_02170204;m=(s32*)data_02170248;while(node){
s32 sx,sy; s32 zero;
obj=*(u8**)node;
ProjectMatrices_F0FD0((Vec_F0FD0*)(node+4),&sx,&sy,p,m);
if(!(*(u32*)(node+20)&16)){u32 id=*(u16*)(obj+0x1b8);if(id>10000&&id<10999){if(sx<-48||sx>304||sy<-48||sy>256)goto next;}}
zero=0;
if(*(u32*)(node+20)&1){u32 param;if(*(u32*)(obj+0xf4))func_0210bcc8(obj);func_021205ec(0x17,data_02170248,12);func_021205ec(0x19,obj+0xa0,12);param=0x1f0080;func_021205ec(0x29,&param,1);func_0211e078(obj);}
if(data_02160af0[0x7c]==0){u32 id=*(u16*)(obj+0x1b8);
if(id==10001||id==10001+0x4b||id==10001+0x61){
if(!(*(u32*)(node+20)&128)){*(s32*)(node+8)+=0x4000;*(u32*)(node+20)|=128;}
switch(data_02160af0[0x7d]){
case 0:{ s32 *p=*(s32 **)(obj+0xfc);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x800;if(*p>=0x1e000)*p=zero;}}{ s32 *p=*(s32 **)(obj+0x100);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x800;if(*p>=0x1e000)*p=zero;}}break;
case 1:{ s32 *p=*(s32 **)(obj+0xfc);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x1000;}}{ s32 *p=*(s32 **)(obj+0x100);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x1000;if(*p==0x50000||*p==0x51000)func_0210d27c(47);if(*p==0x63000||*p==0x64000)func_0210d27c(48);if(*p>=0x64000)data_02160af0[0x7d]=2;}}break;
case 2:{ s32 *p=*(s32 **)(obj+0xfc);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x2000;if(*p>=0xc8000)*p=0x64000;}}{ s32 *p=*(s32 **)(obj+0x100);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x2000;if(*p>=0xc8000)*p=0x64000;}}break;
case 3:{ s32 *p=*(s32 **)(obj+0xfc);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x1000;if(*p>=0x12c000)*p=0;}}{ s32 *p=*(s32 **)(obj+0x100);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x1000;if(*p==0xe1000||*p==0xe2000)func_0210d27c(48);if(*p>=0x12c000){*p=zero;data_02160af0[0x7d]=zero;}}}break;
case 4:{s32*p=*(s32**)(obj+0xfc);if(p)*p=0x64000;p=*(s32**)(obj+0x100);if(p)*p=0x64000;data_02160af0[0x7d]=2;}break;
}
*(s32*)(node+0x18)=zero;*(s32*)(node+0x1c)=zero;
}else if(id==10001+0x62){{ s32 *p=*(s32 **)(obj+0xfc);if(p){u16 i;for(i=0;i<(s32)data_0216281c;i++)*p+=0x800;if(*p>=0xc8000)*p=zero;}}}
}
if(*(u32*)(node+20)&32){u8*anim=*(u8**)(obj+0xfc);if(anim){u16 i;for(i=0;i<(s32)data_0216281c;i++)*(s32*)anim-=4096;if(*(s32*)anim<=0)*(s32*)anim=(*(u16*)(*(u8**)(anim+8)+4)<<12)-4096;}*(u16*)(obj+0x1a4)&=~8;}
if(*(u32*)(node+20)&64){u8*anim=*(u8**)(obj+0x100);if(anim){u16 i;for(i=0;i<(s32)data_0216281c;i++)*(s32*)anim-=4096;if(*(s32*)anim<=0)*(s32*)anim=(*(u16*)(*(u8**)(anim+8)+4)<<12)-4096;}*(u16*)(obj+0x1a4)&=~16;}
if(*(s32*)(node+0x18)){u8 *anim=*(u8**)(obj+0xfc);if(((Flags_020f0aec*)(obj+0x1a4))->b3 && anim){s32 step=*(s32*)(obj+0x104);if(*(void(**)(void*))(obj+0x1b0)){(*(void(**)(void*))(obj+0x1b0))(obj);*(void**)(obj+0x1b0)=NULL;}if(anim){s8 j;s32 limit;for(j=0;j<(s32)data_0216281c;j++)*(s32*)anim+=step;limit=*(u16*)(*(u8**)(anim+8)+4)<<12;if(*(s32*)anim>=limit){if(((Flags_020f0aec*)(obj+0x1a4))->b5)*(s32*)anim=0;else{((Flags_020f0aec*)(obj+0x1a4))->b3=0;*(s32*)anim=limit-1;if(*(void(**)(void*))(obj+0x1b4)){(*(void(**)(void*))(obj+0x1b4))(*(void**)(obj+0x1ac));*(void**)(obj+0x1b4)=NULL;}}}}}}
if(*(s32*)(node+0x1c)){u8 *anim=*(u8**)(obj+0x100);if(((Flags_020f0aec*)(obj+0x1a4))->b4 && anim){s32 step=*(s32*)(obj+0x104);if(*(void(**)(void*))(obj+0x1b0)){(*(void(**)(void*))(obj+0x1b0))(obj);*(void**)(obj+0x1b0)=NULL;}if(anim){s8 j;s32 limit;for(j=0;j<(s32)data_0216281c;j++)*(s32*)anim+=step;limit=*(u16*)(*(u8**)(anim+8)+4)<<12;if(*(s32*)anim>=limit){if(((Flags_020f0aec*)(obj+0x1a4))->b6)*(s32*)anim=0;else{((Flags_020f0aec*)(obj+0x1a4))->b4=0;*(s32*)anim=limit-1;if(*(void(**)(void*))(obj+0x1b4)){(*(void(**)(void*))(obj+0x1b4))(*(void**)(obj+0x1ac));*(void**)(obj+0x1b4)=NULL;}}}}}}
next:node=*(u8**)(node+0x54);
}}
func_0211d7a4();func_021204a8();
}
#pragma pop
void func_020f18ec(void *arg0, s32 arg1) {
    u16 i;

    for (i = 1; i < 0x19; i++) {
        func_02008e68(0, data_02160b10, 0x100);
        func_02005e80(data_02160b10, data_02151d4c, arg1, i);
        if (func_02109cf0(data_02160b10) != 0) {
            func_02008e68(0, data_02160b10, 0x100);
            func_02005e80(data_02160b10, data_02151d60, arg1, i);
            func_0210b0c8(arg0, func_02109b14(data_02160b10, 0));
        }
        func_02008e68(0, data_02160b10, 0x100);
        func_02005e80(data_02160b10, data_02151d74, arg1, i);
        if (func_02109cf0(data_02160b10) != 0) {
            func_02008e68(0, data_02160b10, 0x100);
            func_02005e80(data_02160b10, data_02151d88, arg1, i);
            func_0210b130(arg0, func_02109b14(data_02160b10, 0));
        }
    }
}
