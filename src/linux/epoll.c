#include <sys/epoll.h>
#include <signal.h>
#include <errno.h>
#include "syscall.h"

int epoll_create(int size)
{
	if (size<=0) return __syscall_ret(-EINVAL);
	return epoll_create1(0);
}

int epoll_create1(int flags)
{
	syscall(SYS_debug_log, "musl: epoll_create() is unimplemented!");
	return ENOSYS;
}

int epoll_ctl(int fd, int op, int fd2, struct epoll_event *ev)
{
	syscall(SYS_debug_log, "musl: epoll_ctl() is unimplemented!");
	return ENOSYS;
}

int epoll_pwait(int fd, struct epoll_event *ev, int cnt, int to, const sigset_t *sigs)
{
	syscall(SYS_debug_log, "musl: epoll_pwait() is unimplemented!");
	return ENOSYS;
}

int epoll_wait(int fd, struct epoll_event *ev, int cnt, int to)
{
	return epoll_pwait(fd, ev, cnt, to, 0);
}
