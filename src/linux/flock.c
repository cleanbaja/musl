#include <sys/file.h>
#include "syscall.h"

int flock(int fd, int op)
{
	syscall(SYS_debug_log, "musl: flock() is unimplemented!");
	return ENOSYS;
}
