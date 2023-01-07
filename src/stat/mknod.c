#include <sys/stat.h>
#include <fcntl.h>
#include "syscall.h"

int mknod(const char *path, mode_t mode, dev_t dev)
{
	syscall(SYS_debug_log, "musl: mknod() is unimplemented!");
	return ENOSYS;
}
