#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "syscall.h"

int fchmodat(int fd, const char *path, mode_t mode, int flag)
{
	syscall(SYS_debug_log, "musl: fchmodat() is unimplemented!");
	return ENOSYS;
}
