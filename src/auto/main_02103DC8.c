/* 1 function from 0x02103DC8 to 0x02104B04 (main), found by ds-decomp. */
#include "common.h"

typedef struct { s32 x, y, z; } Vec3_02103dc8;

extern u8 *data_021626e8;
extern u32 data_02155c3c;
extern u8 *data_021600bc;
extern u8 *data_02160204;
extern char data_021556cc[];
extern char data_021556d4[];
extern char data_021556d8[];
extern char data_021556dc[];
extern char data_021556e0[];
extern char data_021556e4[];
extern char data_021556ec[];
extern char data_021556f0[];
extern char data_021556f4[];
extern char data_021556f8[];
extern char data_021556fc[];
extern char data_02155700[];
extern char data_02155704[];
extern char data_02155708[];
extern char data_0215570c[];
extern char data_02155710[];
extern char data_02155714[];
extern char data_02155718[];

extern s32 func_0210cc54(char *);
extern void func_02108ffc(void);
extern s32 func_0210ce5c(void);
extern void func_020ee6c8(s32);
extern void func_020eed30(s32);
extern void func_020f0154(u16);
extern u8 *func_020f0a5c(u16);
extern void func_020efc54(s32);
extern void func_02124e68(void *);
extern void func_0212501c(void *);
extern void func_021091b4(void);
extern void func_020eec70(void);
extern void func_020f0984(u8 *);
extern s32 func_020f5948(void);
extern s32 func_020ef4c8(Vec3_02103dc8 *);
extern void func_020f07b0(Vec3_02103dc8, u16, u16);
extern u8 *func_020f0aa4(u16);
extern void func_020f1dd4(u8 *, s32);
extern u8 *func_02046f90(u16, u16);
extern u8 *func_02047820(u16);
extern void func_020f09d4(u8 *);
extern void func_02047490(u8 *);
extern u8 *func_0204785c(u16, u16);
extern u8 *func_0210c594(s32, u32);
extern void func_0210c3f8(u8 *);
extern void func_021167f0(u8 *, u8 *);

s32 func_02103dc8(void) {
    u8 *r9 = *(u8 **)(data_021626e8 + 0x10);
    if (func_0210cc54(data_021556cc) != 0) {
        s32 id;
        u8 sp_4[8];
        u8 sp_c[0x28];
        func_02108ffc();
        func_020ee6c8(func_0210ce5c());
        func_020eed30(0);
        id = func_0210ce5c();
        if (id != 0) {
            u8 *p;
            func_020f0154((u16)id);
            p = func_020f0a5c((u16)id);
            if (p != NULL) {
                u8 *q = *(u8 **)p;
                *(u32 *)(p + 0x14) |= 1;
                *(s32 *)(q + 0x6c) = 0;
                *(s32 *)(q + 0x70) = -0x4000;
                *(s32 *)(q + 0x74) = 0;
                *(s32 *)(q + 0xf4) = 1;
            }
            func_020efc54(id);
        }
        func_02124e68(sp_c);
        func_0212501c(sp_4);
        return 1;
    }
    if (func_0210cc54(data_021556d4) != 0) {
        func_021091b4();
        func_020efc54(func_0210ce5c());
        return 1;
    }
    if (func_0210cc54(data_021556d8) != 0) {
        func_020eec70();
        return 1;
    }
    if (func_0210cc54(data_021556dc) != 0) {
        func_020eed30(1);
        return 1;
    }
    if (func_0210cc54(data_021556e0) != 0) {
        func_020eed30(0);
        return 1;
    }
    if (func_0210cc54(data_021556e4) != 0) {
        if (func_0210cc54(data_021556ec) != 0) {
            u8 *p = func_020f0a5c((u16)(func_0210ce5c() + 100));
            if (p == NULL) {
                return 0;
            }
            {
                u8 *q = *(u8 **)p;
                *(u32 *)(p + 0x14) |= 1;
                *(s32 *)(q + 0x6c) = *(s32 *)(p + 4);
                *(s32 *)(q + 0x70) = *(s32 *)(p + 8);
                *(s32 *)(q + 0x74) = *(s32 *)(p + 0xc);
                *(s32 *)(q + 0xf4) = 1;
            }
            return 1;
        }
        if (func_0210cc54(data_021556f0) != 0) {
            u8 *p = func_020f0a5c((u16)(func_0210ce5c() + 100));
            if (p == NULL) {
                return 0;
            }
            {
                u8 *q = *(u8 **)p;
                *(u32 *)(p + 0x14) &= ~1;
                *(s32 *)(q + 0x6c) = *(s32 *)(p + 4);
                *(s32 *)(q + 0x70) = *(s32 *)(p + 8);
                *(s32 *)(q + 0x74) = *(s32 *)(p + 0xc);
                *(s32 *)(q + 0xf4) = 1;
            }
            return 1;
        }
        if (func_0210cc54(data_021556f4) != 0) {
            u8 *p = func_020f0a5c((u16)(func_0210ce5c() + 100));
            if (p != NULL) {
                func_020f0984(p);
                return 1;
            }
        }
        return 0;
    }
    if (func_0210cc54(data_021556f8) != 0) {
        if (data_02160204[0x12a] & 0x10) {
            return 1;
        }
        if (data_02160204[0x7a] == 0) {
            u16 id = (u16)func_0210ce5c();
            u16 arg = (u16)func_0210ce5c();
            if (id > 999 && id < 2000) {
                s32 x = func_020f5948();
                s32 z = func_020f5948();
                Vec3_02103dc8 v;
                u8 *p;
                if (id > 999 && id < 1991) {
                    Vec3_02103dc8 tmp;
                    tmp.x = x;
                    tmp.z = z;
                    v.x = x;
                    v.y = func_020ef4c8(&tmp);
                    v.z = z;
                } else {
                    v.x = 0;
                    v.y = 0;
                    v.z = 0;
                }
                func_020f0154(id);
                func_02108ffc();
                func_020f07b0(v, id, arg);
                func_02108ffc();
                p = func_020f0aa4(arg);
                if (p != NULL) {
                    u8 *q = *(u8 **)p;
                    *(u32 *)(p + 0x14) |= 1;
                    *(s32 *)(q + 0x6c) = *(s32 *)(p + 4);
                    *(s32 *)(q + 0x70) = *(s32 *)(p + 8);
                    *(s32 *)(q + 0x74) = *(s32 *)(p + 0xc);
                    *(s32 *)(q + 0xf4) = 1;
                    *(s16 *)(p + 0x30) = (s16)func_0210ce5c();
                }
                func_02108ffc();
                if (id == 1991 && p != NULL) {
                    func_020f1dd4(p, 0);
                }
                if (data_02160204[0x7a] == 0) {
                    u8 *e = func_02046f90(id, arg);
                    if (id > 999 && id < 1999) {
                        if (p != NULL) {
                            *(Vec3_02103dc8 *)e = *(Vec3_02103dc8 *)(p + 4);
                        }
                    } else {
                        Vec3_02103dc8 tmp;
                        tmp.x = x;
                        tmp.z = z;
                        func_020ef4c8(&tmp);
                        *(Vec3_02103dc8 *)e = tmp;
                    }
                    if (p != NULL) {
                        *(u16 *)(*(u8 **)(e + 0xb0) + 0x2a) = *(u16 *)(p + 0x30);
                    }
                }
            }
        }
        return 1;
    }
    if (func_0210cc54(data_021556fc) != 0) {
        s32 id = func_0210ce5c();
        if (id > 999 && id < 2000) {
            s32 arg = func_0210ce5c();
            u8 *p = func_020f0aa4((u16)arg);
            u8 *e = func_02047820((u16)arg);
            if (p != NULL && e != NULL) {
                func_020f09d4(p);
                func_02047490(e);
                return 1;
            }
            return 0;
        }
        return 0;
    }
    if (func_0210cc54(data_02155700) != 0) {
        s32 id = func_0210ce5c();
        if (id > 999 && id < 1999) {
            s32 arg = func_0210ce5c();
            u8 *p = func_020f0aa4((u16)arg);
            u8 *e;
            if (p != NULL) {
                u8 *q;
                *(Vec3_02103dc8 *)(p + 4) = *(Vec3_02103dc8 *)(r9 + 0x1c);
                q = *(u8 **)p;
                *(s32 *)(q + 0x6c) = *(s32 *)(p + 4);
                *(s32 *)(q + 0x70) = *(s32 *)(p + 8);
                *(s32 *)(q + 0x74) = *(s32 *)(p + 0xc);
                *(s32 *)(q + 0xf4) = 1;
            } else {
                return 0;
            }
            e = func_0204785c((u16)id, (u16)arg);
            if (e != NULL) {
                *(Vec3_02103dc8 *)e = *(Vec3_02103dc8 *)(r9 + 0x1c);
                return 1;
            }
            return 0;
        }
        return 0;
    }
    if (func_0210cc54(data_02155704) != 0) {
        s32 id = func_0210ce5c();
        if (id > 999 && id < 1999) {
            u8 *p = func_020f0aa4((u16)func_0210ce5c());
            if (p != NULL) {
                *(s32 *)(p + 0x34) = func_020f5948();
                *(s32 *)(p + 0x3c) = func_020f5948();
                *(u8 *)(p + 0x44) = (u8)func_0210ce5c();
                *(u32 *)(p + 0x14) |= 8;
                *(Vec3_02103dc8 *)(p + 0x20) = *(Vec3_02103dc8 *)(p + 4);
                return 1;
            }
        }
        return 0;
    }
    if (func_0210cc54(data_02155708) != 0) {
        s32 id = func_0210ce5c();
        if (id > 999 && id < 1999) {
            u8 *p = func_020f0aa4((u16)func_0210ce5c());
            if (p != NULL) {
                *(s32 *)(p + 0x38) = func_020f5948();
                *(s32 *)(p + 0x40) = func_020f5948();
                *(u32 *)(p + 0x14) |= 4;
                *(Vec3_02103dc8 *)(p + 0x20) = *(Vec3_02103dc8 *)(p + 4);
                return 1;
            }
        }
        return 0;
    }
    if (func_0210cc54(data_0215570c) != 0) {
        if (data_02160204[0x7a] == 0 && data_02160204[0x7e] == 0) {
            u8 *p = func_0210c594(0x2c, data_02155c3c);
            *(s32 *)(p + 0) = func_020f5948();
            *(s32 *)(p + 4) = func_020f5948();
            *(s32 *)(p + 8) = func_020f5948();
            *(s32 *)(p + 0xc) = func_020f5948();
            func_0210c3f8(p);
            *(s16 *)(p + 0x14) = (s16)func_0210ce5c();
            *(s32 *)(p + 0x18) = func_020f5948() >> 12;
            *(s32 *)(p + 0x1c) = func_020f5948() >> 12;
            *(s16 *)(p + 0x12) = (s16)func_0210ce5c();
            func_021167f0(data_021600bc + 0x88, p);
        }
        return 1;
    }
    return 0;
}
