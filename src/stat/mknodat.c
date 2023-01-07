#include <sys/stat.h>
#include "syscall.h"

int mknodat(int fd, const char *path, mode_t mode, dev_t dev)
{
	syscall(SYS_debug_log, "musl: mknodat() is missing!");
	return ENOSYS;
}
