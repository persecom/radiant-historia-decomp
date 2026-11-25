#!/usr/bin/env python3
"""BRJE linker wrapper: allow two naturally aligned BSS objects to pack at 2 bytes.

Only the generated LCF is copied and adjusted; no input ELF, original ROM,
relocation, or symbol is modified. Invoke with the original linker command.
"""
import os
from pathlib import Path
import re
import subprocess
import sys
import tempfile

FIRST = 'main_bss_021626a0.o(.bss)'
SECOND = 'main_bss_021626a6.o(.bss)'


def adjust(source):
    lines = source.splitlines(keepends=True)
    first = [i for i, line in enumerate(lines) if line.strip() == FIRST]
    second = [i for i, line in enumerate(lines) if line.strip() == SECOND]
    if not first and not second:
        return None
    if len(first) != 1 or len(second) != 1 or second[0] <= first[0]:
        raise ValueError('expected one ordered occurrence of each BRJE BSS object')
    a, b = first[0], second[0]
    if any(line.strip() for line in lines[a+1:b]):
        raise ValueError('BRJE BSS objects are not adjacent in the LCF')
    previous = [line.strip() for line in lines[:a] if re.match(r'^\s*ALIGNALL\s*\(', line)]
    if not previous or not re.fullmatch(r'ALIGNALL\s*\(\s*4\s*\)\s*;', previous[-1]):
        raise ValueError('expected the original ALIGNALL(4) rule')
    indent = lines[a][:len(lines[a]) - len(lines[a].lstrip())]
    return ''.join(lines[:a] + [indent + 'ALIGNALL(2);\n'] + lines[a:b+1] + [indent + 'ALIGNALL(4);\n'] + lines[b+1:])


def main(argv):
    indices = [i for i, arg in enumerate(argv) if arg.lower().endswith('.lcf')]
    if len(indices) != 1:
        raise ValueError('expected exactly one original linker script argument')
    index = indices[0]
    lcf = Path(argv[index])
    modified = adjust(lcf.read_text(encoding='utf-8'))
    if modified is None:
        return subprocess.call(argv)
    fd, name = tempfile.mkstemp(prefix='rh-align-', suffix='.lcf', dir=lcf.parent)
    tmp = Path(name)
    try:
        with os.fdopen(fd, 'w', encoding='utf-8', newline='\n') as f:
            f.write(modified)
        cmd = list(argv)
        cmd[index] = os.path.relpath(tmp, Path.cwd())
        print('BRJE: ALIGNALL(2) for final BSS pair; restoring ALIGNALL(4).', flush=True)
        return subprocess.call(cmd)
    finally:
        tmp.unlink(missing_ok=True)


if __name__ == '__main__':
    try:
        sys.exit(main(sys.argv[1:]))
    except (ValueError, OSError) as exc:
        sys.exit(f'rh_link_align: {exc}')
