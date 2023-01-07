#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include "syscall.h"

int fchmod(int fd, mode_t mode)
{
	syscall(SYS_debug_log, "musl: fchmod() is unimplemented!");
	return ENOSYS;
}
