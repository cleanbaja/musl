#include <sys/mman.h>
#include "syscall.h"

int mlockall(int flags)
{
	syscall(SYS_debug_log, "musl: mlockall() is unimplemented!");
	return ENOSYS;
}
