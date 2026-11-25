/* 1 function from 0x0208FA4C to 0x02090D48 (main), found by ds-decomp. */
#include "common.h"


typedef struct {
    s16 data[10];
} Unk14;

extern u8 *data_0216010c;
extern u8 *data_02160204;
extern const Unk14 data_02140f7c;
extern const Unk14 data_0214110c;
extern const Unk14 data_02140ff4;
extern const Unk14 data_02140fe0;
extern const Unk14 data_02140fcc;

extern s32 func_02085110(u8);
extern u8 *func_02021f10(s32);
extern s32 func_02085158(u8);
extern void func_020922f8(s32,s32,s16,s16,s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern void func_02090d48(s32, s16, s16, s16, s16, s16);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_0208db04(s16, s32, s16, s16, s16, s16, u8, s16);
extern void func_0208da7c(s16, s32, s16, s16, s16, s16, s16);
extern s16 func_020806e8(u8, s32, u8, u8);

void func_0208fa4c(s16 x, s16 y, s16 z, s32 mode,s32 showExtra) {
    u8 *ch;
    s32 off_6c;
    u8 actor;
    s32 nextExp;
    s16 off_34;
    s32 off_r5;
    s32 diff,row,col;
    Unk14 s;
    off_34=0;off_6c=0;off_r5=0;
    actor=func_02085110(data_0216010c[0x50dc]);
    s=data_02140f7c;

    s.data[7] = z + 1;
    ch = func_02021f10(func_02085110(data_0216010c[0x50dc]));
    if (mode == 1) {
        off_34 = 0x1e;
        off_6c = 6;
        off_r5 = 8;
    }

    func_02090d48(0, x, y, 0x17, 0x16, z);
    func_020a3bbc(0x3f);
    s.data[1] = 0;
    s.data[2] = 0;
    s.data[8] = 0x10;
    s.data[3] = 0x10;
    s.data[9] = 9;
    s.data[4] = 9;
    s.data[5] = x + 3;
    s.data[6] = y + 1;
    func_021098ac(&s);
    func_0208db04(0x41, ch[0x43], x + 0x21, y, 8, 10, 8, z + 1);

    if (mode == 0) {
        func_02090d48(2, x, y + 0xd, 0x3c, 0x2b, z);
    } else {
        func_02090d48(2, x, y + 0xd, off_r5 + 0x40, 0x40, z);
        diff = func_020806e8(0, data_0216010c[0x50dd], actor, data_0216010c[0x50d7]);
        if (diff > 0) {
            func_0208da7c(0x43, 10, x + 0x18, y + 0xf, 7, 8, z + 1);
            func_0208da7c(0x43, 12, x + 0x70, y + 0xe, 7, 8, z + 1);
            if (diff >= 100) {
                func_0208db04(0x43, diff, x + 0x88, y + 0xf, 7, 8, 8, z + 1);
            } else if (diff >= 10) {
                func_0208db04(0x43, diff, x + 0x80, y + 0xf, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x43, diff, x + 0x78, y + 0xf, 7, 8, 8, z + 1);
            }
        } else if (diff < 0) {
            func_0208da7c(0x42, 11, x + 0x18, y + 0xf, 7, 8, z + 1);
            func_0208da7c(0x42, 13, x + 0x70, y + 0xe, 7, 8, z + 1);
            if (diff <= -100) {
                func_0208db04(0x42, -diff, x + 0x88, y + 0xf, 7, 8, 8, z + 1);
            } else if (diff <= -10) {
                func_0208db04(0x42, -diff, x + 0x80, y + 0xf, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x42, -diff, x + 0x78, y + 0xf, 7, 8, 8, z + 1);
            }
        }
    }

    func_020a3bbc(0x3f);
    s.data[1] = 0x10;
    s.data[8] = 0x10;
    s.data[3] = 0x10;
    s.data[2] = 0;
    s.data[9] = 9;
    s.data[4] = 9;
    s.data[5] = x + 4;
    s.data[6] = y + 0xf;
    func_021098ac(&s);
    func_0208db04(0x41, *(u16 *)(ch + 0x10), x + 0x31 + off_r5, y + 0xd, 8, 10, 8, z + 1);
    func_0208db04(0x41, *(u16 *)(ch + 0x12) + *(s16 *)(ch + 0x24), x + 0x60 + off_r5, y + 0xd, 8, 10, 8, z + 1);

    if (mode == 0) {
        func_02090d48(2, x, y + 0x1a, 0x3c, 0x2b, z);
    } else {
        func_02090d48(2, x, y + 0x1a, off_r5 + 0x40, 0x40, z);
        diff = func_020806e8(1, data_0216010c[0x50dd], actor, data_0216010c[0x50d7]);
        if (diff > 0) {
            func_0208da7c(0x43, 10, x + 0x18, y + 0x1c, 7, 8, z + 1);
            func_0208da7c(0x43, 12, x + 0x70, y + 0x1b, 7, 8, z + 1);
            if (diff >= 100) {
                func_0208db04(0x43, diff, x + 0x88, y + 0x1c, 7, 8, 8, z + 1);
            } else if (diff >= 10) {
                func_0208db04(0x43, diff, x + 0x80, y + 0x1c, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x43, diff, x + 0x78, y + 0x1c, 7, 8, 8, z + 1);
            }
        } else if (diff < 0) {
            func_0208da7c(0x42, 11, x + 0x18, y + 0x1c, 7, 8, z + 1);
            func_0208da7c(0x42, 13, x + 0x70, y + 0x1b, 7, 8, z + 1);
            if (diff <= -100) {
                func_0208db04(0x42, -diff, x + 0x88, y + 0x1c, 7, 8, 8, z + 1);
            } else if (diff <= -10) {
                func_0208db04(0x42, -diff, x + 0x80, y + 0x1c, 7, 8, 8, z + 1);
            } else {
                func_0208db04(0x42, -diff, x + 0x78, y + 0x1c, 7, 8, 8, z + 1);
            }
        }
    }

 func_020a3bbc(0x3f);
 s.data[5]=x+4; s.data[1]=0x20;s.data[2]=0;
 s.data[8]=16;s.data[3]=16;s.data[9]=9;s.data[4]=9;s.data[6]=y+0x1b;
 func_021098ac(&s);
 func_0208db04(0x41,*(u16*)(ch+0x14),x+0x31+off_r5,y+0x1a,8,10,8,z+1);
 func_0208db04(0x41,*(u16*)(ch+0x16)+*(s16*)(ch+0x26),x+0x60+off_r5,y+0x1a,8,10,8,z+1);
 for(row=0;row<3;row++){
 if(mode==0)func_02090d48(1,x,y+0x27+row*13,26,32,z);
 else func_02090d48(1,x,y+0x27+row*13,26,32+off_34,z);
 func_020a3bbc(0x3f);
 s.data[1]=0;s.data[8]=24;s.data[9]=12;s.data[5]=(s16)(x+4);
 s.data[6]=y+0x26+row*13;s.data[2]=9+row*12;s.data[3]=s.data[8];s.data[4]=s.data[9];
 func_021098ac(&s);
 if(mode==0)func_02090d48(1,x+0x49,y+0x27+row*13,26,32,z);
 else func_02090d48(1,x+0x49+off_34,y+0x27+row*13,26,32+off_34,z);
 func_020a3bbc(0x3f);
 s.data[8]=24;s.data[1]=24;s.data[9]=12;s.data[5]=(s16)(x+0x4d+off_34);
 s.data[2]=9+row*12;s.data[6]=y+0x26+row*13;s.data[3]=s.data[8];s.data[4]=s.data[9];
 func_021098ac(&s);
 }
func_0208db04(0x41,*(u16*)(ch+24)+*(s16*)(ch+40),x+0x38+off_6c,y+39,8,10,8,z+1);
func_0208db04(0x41,*(u16*)(ch+26)+*(s16*)(ch+44),x+0x81+off_34+off_6c,y+39,8,10,8,z+1);
func_0208db04(0x41,*(u16*)(ch+28)+*(s16*)(ch+42),x+0x38+off_6c,y+52,8,10,8,z+1);
func_0208db04(0x41,*(u16*)(ch+30)+*(s16*)(ch+46),x+0x81+off_34+off_6c,y+52,8,10,8,z+1);
func_0208db04(0x41,*(u16*)(ch+32)+*(s16*)(ch+48),x+0x38+off_6c,y+65,8,10,8,z+1);
func_0208db04(0x41,*(u16*)(ch+34)+*(s16*)(ch+50),x+0x81+off_34+off_6c,y+65,8,10,8,z+1);

 if(mode==1)for(row=0;row<3;row++)for(col=0;col<2;col++){
 diff=func_020806e8((u8)(row*2+2+col),data_0216010c[0x50dd],actor,data_0216010c[0x50d7]);
 if(diff>0) {
 func_0208da7c(0x43,10,x+0x24+col*(off_34+0x44+off_6c),y+0x29+row*13,7,8,z+1);
 func_0208da7c(0x43,12,x+0x47+col*(off_34+0x44+off_6c),y+0x28+row*13,7,8,z+1);
 if(diff>=10)func_0208db04(0x43,diff,x+0x57+col*(off_34+0x44+off_6c),y+0x29+row*13,7,8,8,z+1);
 else func_0208db04(0x43,diff,x+0x50+col*(off_34+0x44+off_6c),y+0x29+row*13,7,8,8,z+1);
 }else if(diff<0){
 func_0208da7c(0x42,11,x+0x24+col*(off_34+0x44+off_6c),y+0x29+row*13,7,8,z+1);
 func_0208da7c(0x42,13,x+0x47+col*(off_34+0x44+off_6c),y+0x28+row*13,7,8,z+1);
 if(diff<=-10)func_0208db04(0x42,-diff,x+0x57+col*(off_34+0x44+off_6c),y+0x29+row*13,7,8,8,z+1);
 else func_0208db04(0x42,-diff,x+0x50+col*(off_34+0x44+off_6c),y+0x29+row*13,7,8,8,z+1);
 }
 }
 if(showExtra) {
 Unk14 bar;
 Unk14 fill;
 f32 ratio;
 s32 baseExp;
 func_020922f8(0x40,0,x,y+0x4e,0x8e,0x15,3,11,2,2,2,2,z);
 func_020a3bbc(0x3f);
 s.data[1]=0x12;s.data[2]=0x39;s.data[8]=26;s.data[9]=7;s.data[3]=s.data[8];s.data[4]=s.data[9];s.data[5]=x+4;s.data[6]=y+0x4f;
 func_021098ac(&s);
 func_020a3bbc(0x3f);
 s.data[1]=0;s.data[2]=0x39;s.data[9]=7;s.data[4]=7;s.data[8]=17;s.data[3]=17;s.data[5]=x+8;s.data[6]=y+0x59;
 func_021098ac(&s);
 if(ch[0x43]!=99){
 nextExp=func_02085158((u8)func_02085110(data_0216010c[0x50dc]));
 func_0208db04(0x41,nextExp-*(s32*)(ch+4),x+0x81,y+0x4e,8,10,8,z+1);
 }
 bar=data_0214110c;fill=data_02140ff4;
 func_020a3bbc(0x4f);
 bar.data[5]=x+0x1e;bar.data[6]=y+0x5a;bar.data[7]=z+1;
 func_021098ac(&bar);
 baseExp=*(s32*)(data_0216010c+0x53d4+(ch[0x43]-1)*4);
 ratio=(f32)(*(s32*)(ch+4)-baseExp)/(f32)(nextExp-baseExp);
 if(ch[0x43]==99)ratio=1.0f;
 if(ratio>0.0f){
 func_020a3bbc(0x2b);
 fill.data[5]=x+0x1f;fill.data[6]=y+0x5b;
 fill.data[8]=(s16)(s32)((f32)fill.data[8]*ratio);fill.data[7]=z+2;
 func_021098ac(&fill);
 }
 if(data_02160204[0x11c]==1) {
 Unk14 back;
 Unk14 front;
 func_020922f8(0x40,0,x,y+0x65,0x8e,11,3,11,2,2,2,2,z);
 func_020a3bbc(0x3f);
 s.data[9]=7;s.data[1]=0;s.data[2]=0x32;s.data[8]=0x34;s.data[3]=0x34;s.data[4]=s.data[9];s.data[5]=x+4;s.data[6]=y+0x67;
 func_021098ac(&s);
 back=data_02140fe0;front=data_02140fcc;
 for(col=0;col<11;col++){
 func_020a3bbc(0x4f);
 back.data[5]=x+0x40+col*7;back.data[6]=y+0x67;back.data[7]=z+1;
 func_021098ac(&back);
 s32 amount=*(u16*)(ch+0x34);
 if(amount==100 ? 1 : col<(amount%100)/9) {
 func_020a3bbc(0x51);
 front.data[5]=x+0x40+col*7;front.data[6]=y+0x67;front.data[7]=z+2;
 func_021098ac(&front);
 }
 }
 }
 }
}
