/* 5 functions from 0x02090D48 to 0x02091CD8 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[10];
} Unk20;

extern const Unk20 data_02140f54;
extern const Unk20 data_02141120;

extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
void func_02091b38(s32 kind, s16 x, s16 y, s16 dx, s16 dy, s16 z) {
 Unk20 b = data_02141120;
 s16 w, h;
 func_020a3bbc(0x4d);
 ((s16 *)b.unk)[7]=z;
 if(kind == 1) { ((s16 *)b.unk)[1]=18; h=8; ((s16 *)b.unk)[2]=h; w=7; }
 else { w=17; h=11; ((s16 *)b.unk)[1]=((s16 *)b.unk)[2]=0; }
 ((s16 *)b.unk)[5]=x; ((s16 *)b.unk)[6]=y;
 ((s16 *)b.unk)[3]=w; ((s16 *)b.unk)[4]=h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h;
 func_021098ac(&b);
 ((s16 *)b.unk)[3]=w; ((s16 *)b.unk)[4]=-h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h; ((s16 *)b.unk)[5]=x; ((s16 *)b.unk)[6]=y+dy;
 func_021098ac(&b);
 ((s16 *)b.unk)[3]=-w; ((s16 *)b.unk)[4]=h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h; ((s16 *)b.unk)[5]=x+dx; ((s16 *)b.unk)[6]=y;
 func_021098ac(&b);
 ((s16 *)b.unk)[3]=-w; ((s16 *)b.unk)[4]=-h; ((s16 *)b.unk)[8]=w; ((s16 *)b.unk)[9]=h; ((s16 *)b.unk)[5]=x+dx; ((s16 *)b.unk)[6]=y+dy;
 func_021098ac(&b);
}

void func_02091c54(u16 arg0, u16 arg1, u16 arg2) {
    Unk20 buf = data_02140f54;
    func_020a3bbc(0x4e);
    buf.unk[7] = arg2;
    buf.unk[5] = arg0;
    buf.unk[6] = arg1;
    func_021098ac(&buf);
    *(s16 *)&buf.unk[4] = -0x18;
    buf.unk[5] = arg0;
    buf.unk[6] = arg1 + 0x18;
    func_021098ac(&buf);
}
