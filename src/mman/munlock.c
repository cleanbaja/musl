#include <sys/mman.h>
#include "syscall.h"

int munlock(const void *addr, size_t len)
{
	syscall(SYS_debug_log, "musl: munlock() is unimplemented!");
	return ENOSYS;
}
