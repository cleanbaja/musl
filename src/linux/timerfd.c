#include <sys/timerfd.h>
#include <errno.h>
#include "syscall.h"

#define IS32BIT(x) !((x)+0x80000000ULL>>32)

int timerfd_create(int clockid, int flags)
{
	syscall(SYS_debug_log, "musl: timerfd_create() is unsupported!");
	return ENOSYS;
}

int timerfd_settime(int fd, int flags, const struct itimerspec *new, struct itimerspec *old)
{
	syscall(SYS_debug_log, "musl: timerfd_settime() is unsupported!");
	return ENOSYS;
}

int timerfd_gettime(int fd, struct itimerspec *cur)
{
	syscall(SYS_debug_log, "musl: timerfd_gettime() is unsupported!");
	return ENOSYS;
}
