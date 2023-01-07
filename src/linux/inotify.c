#include <sys/inotify.h>
#include <errno.h>
#include "syscall.h"

int inotify_init()
{
	return inotify_init1(0);
}
int inotify_init1(int flags)
{
	syscall(SYS_debug_log, "musl: inotify_init() is unsupported!");
	return ENOSYS;
}

int inotify_add_watch(int fd, const char *pathname, uint32_t mask)
{
	syscall(SYS_debug_log, "musl: inotify_add_watch() is unsupported!");
	return ENOSYS;
}

int inotify_rm_watch(int fd, int wd)
{
	syscall(SYS_debug_log, "musl: inotify_rm_watch() is unsupported!");
	return ENOSYS;
}
