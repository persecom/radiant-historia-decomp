#pragma define_section CTOR ".ctor" ".ctor"

extern void __sinit_ov000_02178094(void);

__declspec(CTOR) void (*__sinit_ov000_02178094_ctor)(void) = __sinit_ov000_02178094;
