# HISTORIA (BRJE) decompilation

Started from scratch with [decompdecomp](https://github.com/n-delic/decompdecomp) on [ds-decomp](https://github.com/AetiasHax/ds-decomp),
the toolkit DS decomps use. Every build rebuilds the ROM and checks it against your copy, byte for byte.

1. Put your own copy of the game here as `extract/baserom.nds` (never commit it).
2. `python tools/configure.py brje --dsd <dsd> --compilers <CodeWarrior for DS> [--wibo <wibo>]`, then `ninja`.
3. Decompiled code goes in `src/`; `objdiff.json` shows each function's progress in [objdiff](https://github.com/encounter/objdiff).

Compiler: CodeWarrior for DS 2.0/sp1p5 (`MWCC_VERSION` in tools/configure.py). Files the game built with another
version name it in `config/brje/arm9/file_compilers.json` (`{"src/auto/main_02000000.c": "1.2/sp4"}`).
`config/brje/` holds what ds-decomp found: sections, symbols, relocations and the source files (`delinks.txt`).
