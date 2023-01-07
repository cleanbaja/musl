#define _GNU_SOURCE
#include <unistd.h>
#include "syscall.h"

int chroot(const char *path)
{
	syscall(SYS_debug_log, "musl: chroot() is unimplemented!");
	return ENOSYS;
}
