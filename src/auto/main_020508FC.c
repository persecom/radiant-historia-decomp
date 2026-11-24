/* 5 functions from 0x020508FC to 0x02051344 (main), found by ds-decomp. */
#include "common.h"

extern s16 data_0213a394[];

static inline s16 FX_SinIdx_02050b0c(s32 idx) {
    return data_0213a394[(idx >> 4) * 2];
}

static inline s16 FX_CosIdx_02050b0c(s32 idx) {
    return data_0213a394[(idx >> 4) * 2 + 1];
}

#pragma optimization_level 0
BOOL func_020508fc(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 dx;
    s32 bx;
    s32 dy;
    s32 ax;
    s32 ay;
    s32 by;
    f32 det;

    dx = arg0[0] - arg2[0];
    dy = arg0[1] - arg2[1];
    ax = arg1[0] - arg0[0];
    ay = arg1[1] - arg0[1];
    bx = arg3[0] - arg2[0];
    by = arg3[1] - arg2[1];
    det = (f32)(ax * by - ay * bx);

    if (0.0f != det) {
        f32 t = (f32)((dy * bx - dx * by) * 100) / det;
        f32 u = (f32)((dy * ax - dx * ay) * 100) / det;

        if (t < 0.0 || 100.0 < t || u < 0.0 || 100.0 < u) {
            return FALSE;
        }
        arg4[0] = (s32)((f32)arg0[0] + ((f32)ax * t) / 100.0f);
        arg4[1] = (s32)((f32)arg0[1] + ((f32)ay * t) / 100.0f);
        return TRUE;
    }
    return FALSE;
}
void func_02050b0c(u8 *arg0, s32 arg1) {
    extern struct Mgr_02046e30 *data_021600bc;
    extern u8 *data_02160aec;

    void *manager = data_021600bc;
    s32 rect[4];
    struct {
        s32 x, y, z;
    } pos;
    s32 startX, endX, startZ, endZ;
    s32 x, z;
    struct {
        u8 v;
    } type;

    if (!data_02160aec) {
        return;
    }
    if ((*(u32 *)(arg0 + 0xac) & 0x1000000) != 0) {
        return;
    }

    pos.x = *(s32 *)(arg0 + 0x0);
    pos.y = *(s32 *)(arg0 + 0x4);
    pos.z = *(s32 *)(arg0 + 0x8);

    pos.x += -(FX_CosIdx_02050b0c((*(u16 *)(arg0 + 0x92) + arg1) % 0x10000) * 2);
    pos.z += FX_SinIdx_02050b0c((*(u16 *)(arg0 + 0x92) + arg1) % 0x10000) * 2;

    startX = pos.x / 0x10000 - 1;
    endX = startX + 2;
    startZ = pos.z / 0x10000 - 1;
    endZ = startZ + 2;

    if (startX < *(s32 *)(data_02160aec + 0x58bc8)) {
        startX = *(s32 *)(data_02160aec + 0x58bc8);
    }
    if (endX >= *(s32 *)(data_02160aec + 0x58bcc)) {
        endX = *(s32 *)(data_02160aec + 0x58bcc);
    }
    if (startZ < *(s32 *)(data_02160aec + 0x58bd0)) {
        startZ = *(s32 *)(data_02160aec + 0x58bd0);
    }
    if (endZ >= *(s32 *)(data_02160aec + 0x58bd4)) {
        endZ = *(s32 *)(data_02160aec + 0x58bd4);
    }

    for (z = endZ; z >= startZ; z--) {
        for (x = endX; x >= startX; x--) {
            type.v = *(data_02160aec + 0xbc8 + (x + z * *(s16 *)(data_02160aec + 0x58d36)) * 0xc);
            rect[0] = x << 16;
            rect[2] = (x << 16) + 0x10000;
            rect[1] = z << 16;
            rect[3] = (z << 16) + 0x10000;
            if (rect[0] <= pos.x && pos.x <= rect[2] && rect[1] <= pos.z && pos.z <= rect[3]) {
                switch (type.v) {
                case 1:
                case 6:
                case 7:
                    *(s32 *)(arg0 + 0x0) -= -(FX_CosIdx_02050b0c((*(u16 *)(arg0 + 0x92) + arg1) % 0x10000) * 2);
                    *(s32 *)(arg0 + 0x8) -= FX_SinIdx_02050b0c((*(u16 *)(arg0 + 0x92) + arg1) % 0x10000) * 2;
                    return;
                }
            }
        }
    }
}
#pragma optimization_level 0
BOOL func_02050e2c(s32* arg0, s32* arg1, s32* arg2)
{
    extern s32 func_02002404(s32, s32);
    extern s32 func_0201fb1c(s32, s32);
    extern s16 data_0213a394[];

    struct {
        s32 projected[2];
        s32 scaled[2];
        s32 relative[2];
        s32 direction[2];
        s32 cross;
    } local;

    s32 percent;
    s32 angle;
    s32 normalX;
    s32 normalY;

    local.direction[0] = arg2[0] - arg1[0];
    local.direction[1] = arg2[1] - arg1[1];
    local.relative[0] = arg0[0] - arg1[0];
    local.relative[1] = arg0[1] - arg1[1];

    percent = func_0201fb1c(
        (local.direction[0] * local.relative[0] + local.direction[1] * local.relative[1]) * 100,
        local.direction[0] * local.direction[0] + local.direction[1] * local.direction[1]);

    if ((f64)percent < 0.0 || (f64)percent > 100.0) {
        return FALSE;
    }

    local.scaled[0] = (local.direction[0] * percent) / 100;
    local.scaled[1] = (local.direction[1] * percent) / 100;
    local.projected[0] = arg1[0] + local.scaled[0];
    local.projected[1] = arg1[1] + local.scaled[1];

    angle = func_02002404(local.direction[0], local.direction[1]);
    normalX = ((s16*)data_0213a394)[(((angle + 0x8000) % 0x10000) >> 4) * 2 + 1] >> 12;
    normalY = ((s16*)data_0213a394)[(((angle + 0x8000) % 0x10000) >> 4) * 2] >> 12;
    local.cross = local.direction[0] * local.relative[1] - local.direction[1] * local.relative[0];

    if (local.cross < 0) {
        arg0[0] = local.projected[0] + normalX;
        arg0[1] = local.projected[1] - normalY;
    } else {
        arg0[0] = local.projected[0] - normalX;
        arg0[1] = local.projected[1] + normalY;
    }
    return TRUE;
}
