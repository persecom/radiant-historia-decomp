/* 14 functions from 0x020E4A78 to 0x020E5968 (main), found by ds-decomp. */
#include "common.h"
extern int func_02030844(u8);
extern u8 *func_02023100(void *);
extern int func_020230c8(void *, int);
extern int func_0202c658(void *);

extern u32 data_02160a74[];
extern u8 **data_021600c8;
extern s32 func_02022068(u32);
extern void *data_02160a6c;

u8 func_020e55d8();
s32 func_02064cb8(void *, s32);
s32 func_020bd490(s32, s32);
u8 *func_02021f10(s32);
s32 func_02032c80(void *, s32);
void func_0202eac4(s32, u16);
s32 func_02065c44(void *);
u32 func_020deaf0(void *, u8, s32);
void *func_0202c820(u8);
void *func_0202c920(u8);

typedef struct {
    u8 unk0;
    u8 pad1;
    s8 unk2;
    s8 unk3;
    u8 unk4;
    u8 unk5;
    u8 pad6[3];
    u8 unk9;
} Node_020e4a78;

static inline void func_020e4a78_set(Node_020e4a78 *p) {
    u8 v = p->unk9;
    p->unk5 = 2;
    if (v == 2) {
        p->unk5 = 3;
    }
    p->unk4 = 0;
}

void func_020e4a78(Node_020e4a78 *p) {
    if (p->unk0 & 1) return;
    if (p->unk9 == 0 || p->unk9 == 2) {
        p->unk5 = 2;
        if (p->unk9 == 2) p->unk5 = 3;
        p->unk4 = 0;
        return;
    }
    if (p->unk9 == 1) {
        p->unk5 = 3;
        p->unk4 = 3;
        p->unk2 = 3;
    }
}

s16 func_020e4ad4(void) {
    s16 ret = -1;
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xb8);
    if (*p & 1) {
        return ret;
    }
    if (*(p + 9) == 0) {
        return (s16)(3 * (2 - *(s8 *)(p + 2)) + (2 - *(s8 *)(p + 3)));
    }
    if (*(p + 9) == 1) {
        return (s16)(*(s8 *)(p + 3) + 9);
    }
    if (*(p + 9) == 2) {
        s8 x = *(s8 *)(p + 2);
        if (x <= 2) {
            return (s16)(3 * (2 - x) + (2 - *(s8 *)(p + 3)));
        }
        if (x == 3) {
            ret = (s16)(*(s8 *)(p + 3) + 8);
        }
    }
    return ret;
}

u8 func_020e4b88(void) {
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xc0);
    if (p != NULL) {
        return *(u8 *)(p + 6);
    }
    return 1;
}

u16 func_020e4ba8(void) {
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xc0);
    if (p != NULL) {
        return *(u16 *)(p + 0x38);
    }
    return 1;
}

void func_020e4bc8(void) {
    u8 *p = *(u8 **)((u8 *)data_02160a74[0] + 0xb8);
    if (*(s16 *)(p + 0x12) == 0) {
        *(s16 *)(p + 0x10) += 1;
        if (*(s16 *)(p + 0x10) > 0x1f) {
            *(s16 *)(p + 0x10) = 0x1f;
            *(s16 *)(p + 0x12) = 1;
        }
    } else if (*(s16 *)(p + 0x12) == 1) {
        *(s16 *)(p + 0x10) -= 1;
        if (*(s16 *)(p + 0x10) < 0) {
            *(s16 *)(p + 0x10) = 0;
            *(s16 *)(p + 0x12) = 0;
        }
    }
}

void func_020e4c38(void) {
    u8 *node = *(u8 **)((u8 *)data_02160a6c + 0x70);
    while (node != NULL) {
        *(u32 *)(node + 0x80) &= ~0x1000;
        func_0202eac4(1, *(u16 *)(node + 0x8e));
        node = *(u8 **)(node + 0x13c);
    }
}

void func_020e4c80(void *arg0, s32 arg1) {
    func_020e4c38();
    if (*((u8 *)arg0 + 7) == 8) {
        return;
    }
    if (func_02065c44(arg0) != 0) {
        u32 mask = func_020deaf0(arg0, (u8)arg1, 1);
        u16 i;
        for (i = 0; i < 9; i++) {
            if (mask & (1 << i)) {
                u8 *obj = func_0202c820((u8)i);
                if (obj != NULL) {
                    *(u32 *)(obj + 0x80) |= 0x1000;
                    func_0202eac4(0, *(u16 *)(obj + 0x8e));
                }
            }
        }
    } else {
        u8 *obj = func_0202c920((u8)arg1);
        if (obj != NULL) {
            *(u32 *)(obj + 0x80) |= 0x1000;
            func_0202eac4(0, *(u16 *)(obj + 0x8e));
        }
    }
}

s32 func_020e4d40(void) {
    s32 one=1,zero=0;
    u8 *cursor;
    u8 *g=(u8 *)data_02160a74[0];
    u8 *state=**(u8 ***)(g+0xa0);
    cursor=*(u8 **)(g+0xb8);
    u8 *actor=*(u8 **)state;
    u8 *action=*(u8 **)(state+8);
    u8 *target;
    s32 index;
    u8 *node;
    s16 count;
    if(!(*(u16 *)(g+0x1ba)&2)) return zero;
    if(*cursor&2) {
        s32 found=zero;
        s32 bit=one;
        u32 mask;
        s16 i;
        *(u16 *)(state+0x50)=found;
        index=func_020e4ad4();
        mask=func_020deaf0(action,(u8)index,bit);
        for(i=0;i<9;i++) {
            s32 flag=bit<<i;
            if((mask&flag) && !func_0202c820((u8)i) && !func_02030844((u8)i)) {
                found=bit;
                *(u16 *)(state+0x50)|=(u16)flag;
            }
        }
        if(found) {state[0x43]=index;*(u32 *)(state+4)=zero;return 1;}
        return 0;
    }
    if(!(*cursor&1)) {
        index=func_020e4ad4();
        target=func_0202c920((u8)index);
        if(g[0x1c8]!=0 && index!=g[0x1c8]-1) target=(u8 *)zero;
        if(target && **(u8 **)(target+0x118)==0) {
            if(action[0]==5 || action[0]==2 || action[0]==6) {
                u8 *effect=func_02023100(*(void **)(action+0x2c));
                if(effect) {
                switch(*(u16 *)effect) {
 case 103:break;
case 104:break;
case 106:break;
case 108:break;
case 110:break;
case 111:break;
case 112:break;
case 113:break;
case 114:break;
case 115:break;
case 116:break;
case 117:break;
case 118:break;
case 119:break;
case 120:break;
case 121:break;
case 122:break;
case 123:break;
case 124:break;
case 125:break;
case 126:break;
case 127:break;
case 128:break;
                case 0x65:case 0x1f5:
                    if(target && *(s32 *)(*(u8 **)(target+0x118)+4)==*(s32 *)(*(u8 **)(target+0x118)+8)) target=0;
                    break;
                case 0x66:case 0x1f6:
                    if(target && *(s16 *)(*(u8 **)(target+0x118)+12)==*(s16 *)(*(u8 **)(target+0x118)+14)) target=0;
                    break;
                case 0x6d:case 0x1f7:
                    if(*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
                    break;
                case 505:
 if(!*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
 if(target && !(*(u32 *)(*(u8 **)(target+0x118)+0x78)&1))target=0;
 break;
case 506:
 if(!*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
 if(target && !(*(u32 *)(*(u8 **)(target+0x118)+0x78)&2))target=0;
 break;
case 507:
 if(!*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
 if(target && !(*(u32 *)(*(u8 **)(target+0x118)+0x78)&4))target=0;
 break;
case 508:
 if(!*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
 if(target && !(*(u32 *)(*(u8 **)(target+0x118)+0x78)&8))target=0;
 break;
case 509:
 if(!*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
 if(target && !(*(u32 *)(*(u8 **)(target+0x118)+0x78)&16))target=0;
 break;
case 510:
 if(!*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
 if(target && !(*(u32 *)(*(u8 **)(target+0x118)+0x78)&32))target=0;
 break;
                case 0x69:
                    if(target && target==actor) target=0;
                    if(target && *(s16 *)(*(u8 **)(target+0x118)+0x5a)==100)target=0;
                    break;
                case 0x6b:case 0x1f8:
                    if(!*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
                    if(target && !(*(u32 *)(*(u8 **)(target+0x118)+0x78)&0x45553f))target=0;
                    break;
                }
                } else return 0;
            } else {
                s32 effect=func_020230c8(*(void **)(action+0x2c),0x6d);
                if(effect && *(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
                else if(!effect && !*(u32 *)(*(u8 **)(target+0x118)+0x70))target=0;
            }
        }
        if(target) {
            u8 *info;
            *(u8 **)(state+4)=target;
            if((u8)(action[6]+0xf3)<=3) {
                action[0x3b]=index;
                if(action[6]==14) {
 s32 pos=func_0202c658(target);
 if(index/3==pos/3)state[0x4e]=zero;else state[0x4e]=one;
 } else if(action[6]==13) {
                    s32 pos=func_0202c658(target);
                    if(index%3==pos%3)state[0x4e]=zero;else state[0x4e]=1;
                } else if(action[6]==15) {
                    {s32 pos=func_0202c658(target);
                    if(index/3==pos/3)state[0x4e]=zero;else state[0x4e]=one;}
                } else if(action[6]==16)state[0x4e]=func_0202c658(target);
            }
            info=*(u8 **)(*(u8 **)(target+0x128)+0x54);
            state[0x12]=zero;
            switch(*(s8 *)(info+1)) {
            case 1:
                if(*(s8 *)info!=*(s8 *)(cursor+10))state[0x12]=one;
                if(index==func_0202c658(target))state[0x44]=zero;else state[0x44]=one;
                break;
            case 2:
                if(*(s8 *)info!=*(s8 *)(cursor+10))state[0x12]=2;
                if(index==func_0202c658(target))state[0x44]=zero;else *(s8 *)(state+0x44)=-3;
                break;
            case 3: {
                s32 pos;
                if(*(s8 *)info!=*(s8 *)(cursor+10))state[0x12]=3;
                pos=func_0202c658(target);
                if(index==pos)state[0x44]=zero;else state[0x44]=index-pos;
                break;
            }
            case 4:
                if(*(s8 *)info!=*(s8 *)(cursor+10))state[0x12]=4;
                break;
            case 0:state[0x44]=zero;break;
            }
            return 1;
        }
        return 0;
    }
    *(u32 *)(state+4)=zero;
    zero=one;
    if(action[0]==5 || action[0]==2) {
        u8 *effect=func_02023100(*(void **)(action+0x2c));
        if(effect) {
            switch(*(u16 *)effect) {
case 111:break;
case 113:break;
case 116:break;
case 118:break;
case 121:break;
case 123:break;
case 126:break;
case 128:break;
            case 0x65: case 0x1f5:
                if((*(u16 *)effect==0x1f5 && action[6]==12)||*(u16 *)effect==0x65) {
                    node=*(u8 **)((u8 *)data_02160a6c+0xac);
                    count=0;
                    while(node) {
                        u8 *stats=*(u8 **)(node+0x118);
                        if(*(s32 *)(stats+4)!=*(s32 *)(stats+8))count++;
                        else if(!*(u32 *)(stats+0x70))count++;
                        node=*(u8 **)(node+0x16c);
                    }
                    if(!count)zero=0;
                } break;
            case 0x1f6:
                if(action[6]==12) {
                    node=*(u8 **)((u8 *)data_02160a6c+0xac);
                    count=0;
                    while(node) {
                        u8 *stats=*(u8 **)(node+0x118);
                        if(*(s16 *)(stats+12)!=*(s16 *)(stats+14))count++;
                        else if(!*(u32 *)(stats+0x70))count++;
                        node=*(u8 **)(node+0x16c);
                    }
                    if(!count)zero=0;
                } break;
            case 0x6d: {node=*(u8 **)((u8 *)data_02160a6c+0xac);count=0;
                while(node) {if(!*(u32 *)(*(u8 **)(node+0x118)+0x70))count++;node=*(u8 **)(node+0x16c);}
                if(!count)zero=0;break;
            }
            case 0x6b:case 0x1f8: if((*(u16 *)effect==0x1f8 && action[6]==12)||*(u16 *)effect==0x6b) {node=*(u8 **)((u8 *)data_02160a6c+0xac);count=0;
                while(node) {if(*(u32 *)(*(u8 **)(node+0x118)+0x70) && (*(u32 *)(*(u8 **)(node+0x118)+0x78)&0x45553f))count++;node=*(u8 **)(node+0x16c);}
                if(!count)zero=0;break;
            }
            }
        }
    }
    return zero;
}

u8 func_020e55d8(s32 arg0, s32 arg1) {
    s32 id;
    u8 *p;
    u8 ret;
    if (func_020bd490(2, arg0) != 0) {
        id = func_020bd490(1, arg0) - 1;
    } else {
        id = func_020bd490(3, arg0);
    }
    p = func_02021f10(id);
    ret = 0;
    if (p != NULL) {
        ret = (p + arg1)[0x6c];
    }
    return ret;
}

s32 func_020e5630(u32 type,u8 *p,u16 index) {
 switch(type) {
 case 0: return func_02064cb8(*(void **)(p+0x11c),11);
 case 1: {
  u8 *node=*(u8 **)(*(u8 **)(p+0x11c)+4);
  u16 count=0;
  while(node) {
   if(*(s16 *)(node+0x26)!=0 && *(s16 *)(node+0x3c)!=-1 && *(s16 *)(node+0x3c)<100) {
    if(count==index) {
     if(*(s16 *)((u8 *)data_02160a74[0]+0xc8)>=9 && *(u16 *)(node+0x20)==21) return 0;
     if(*(s16 *)(*(u8 **)(p+0x118)+0xc)>=*(s16 *)(node+0x1c)) return (s32)node;
    }
    count++;
   }
   node=*(u8 **)(node+0x34);
  }
  return 0;
 }
 case 3: {
  u8 *node;
  u16 count=0;
  node=*(u8 **)(*data_021600c8+4);
  while(node) {
   if(func_02022068(node[1])) {
    if(count==index) return func_02064cb8(*data_021600c8,node[1]);
    count++;
   }
   node=*(u8 **)(node+0x34);
  }
  break;
 }
 case 4: return func_02064cb8(*(void **)(p+0x11c),3);
 case 5: return func_02064cb8(*(void **)(p+0x11c),4);
 case 6: {
  s32 id=func_020e55d8((u8)*(u16 *)(p+0x90),index);
  if(*(s16 *)(*(u8 **)(p+0x118)+0x5a)>=100) {
   if(id==103 && *(s16 *)((u8 *)data_02160a74[0]+0xc8)>=9) return 0;
   return func_02064cb8(*(void **)(p+0x11c),id);
  }
  break;
 }
 }
 return 0;
}

void func_020e57e8(void *arg0, s32 arg1) {
    s32 val = func_020e55d8((u8)*(u16 *)((u8 *)arg0 + 0x90), arg1);
    func_02064cb8(*(void **)((u8 *)arg0 + 0x11c), val);
}

s32 func_020e580c(void *arg0, void *arg1, s32 arg2) {
    if (*(s16 *)(*(u8 **)(*(u8 **)arg0 + 0x118) + 0xc) - *(s16 *)((u8 *)arg1 + 0x1c) >= 0) {
        if (arg2 != 0) {
            *(s16 *)(*(u8 **)(*(u8 **)arg0 + 0x118) + 0xc) -= *(s16 *)((u8 *)arg1 + 0x1c);
        }
        *(void **)((u8 *)arg0 + 8) = arg1;
        if (*((u8 *)arg1 + 0x14) == 1) {
            *(u16 *)((u8 *)arg0 + 0xe) |= 2;
        } else {
            *(u16 *)((u8 *)arg0 + 0xe) &= ~2;
        }
        return func_02032c80(arg0, 6);
    }
    return 0;
}

u8 func_020e586c(void *arg0, s32 arg1, u16 arg2) {
    s32 id;
    u16 i;
    u16 count;
    u8 *p;
    if (func_020bd490(2, arg1) != 0) {
        id = func_020bd490(1, arg1) - 1;
    } else {
        id = func_020bd490(3, arg1);
    }
    p = func_02021f10(id);
    count = 0;
    for (i = 1; i < 0x1e; i++) {
        if ((p + i)[0x4e] != 0) {
            if (func_02064cb8(*(void **)((u8 *)arg0 + 0x11c), (p + i)[0x4e]) != 0) {
                if (count == arg2) {
                    return (p + i)[0x4e];
                }
                count++;
            }
        }
    }
    return 0;
}

void *func_020e5910(void *arg0, u16 arg1) {
    u8 *node = *(u8 **)(*(u8 **)((u8 *)arg0 + 0x11c) + 4);
    u16 count = 0;
    while (node != NULL) {
        if (*(s16 *)(node + 0x26) != 0 && *(s16 *)(node + 0x3c) != -1 && *(s16 *)(node + 0x3c) < 100) {
            if (count == arg1) {
                return node;
            }
            count++;
        }
        node = *(u8 **)(node + 0x34);
    }
    return NULL;
}

