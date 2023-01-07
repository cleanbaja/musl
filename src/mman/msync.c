#include <sys/mman.h>
#include "syscall.h"

int msync(void *start, size_t len, int flags)
{
	syscall(SYS_debug_log, "musl: msync() is unimplemented!");
	return ENOSYS;
}
