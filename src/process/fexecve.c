#define _GNU_SOURCE
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "syscall.h"

int fexecve(int fd, char *const argv[], char *const envp[])
{
	syscall(SYS_debug_log, "musl: fexecve() doesn't work because execveat() isn't implemented!");
	return ENOSYS;
}
