#include <sys/mman.h>
#include "syscall.h"

int munlockall(void)
{
	syscall(SYS_debug_log, "musl: munlockall() is unimplemented!");
	return ENOSYS;
}
