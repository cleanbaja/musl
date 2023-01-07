#define _GNU_SOURCE 1
#include <sys/mman.h>
#include "syscall.h"

int memfd_create(const char *name, unsigned flags)
{
	syscall(SYS_debug_log, "musl: memfd_create() is unimplemented!");
	return ENOSYS;
	//return syscall(SYS_memfd_create, name, flags);
}
