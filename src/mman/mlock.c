#include <sys/mman.h>
#include "syscall.h"

int mlock(const void *addr, size_t len)
{
	syscall(SYS_debug_log, "musl: mlock() is not implemented!");
	return ENOSYS;
}
