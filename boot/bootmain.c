// Boot loader
//
// Part of the boot block, along with bootasm.S, which calls bootmain().
// bootasm.S has put the processor into protected 32-bit mode.
// bootmain() loads an ELF kernel image from the disk starting at sector 1
// and then jumps to the kernel entry routine.

#include <inc/types.h>

#define SECTORSIZE 512

void bootmain(void)
{
}
