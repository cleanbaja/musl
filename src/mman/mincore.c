#define _GNU_SOURCE
#include <sys/mman.h>
#include "syscall.h"

int mincore (void *addr, size_t len, unsigned char *vec)
{
	syscall(SYS_debug_log, "musl: mincore() is unimplemented!");
	return ENOSYS;
}
