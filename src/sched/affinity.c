#define _GNU_SOURCE
#include <sched.h>
#include <string.h>
#include "pthread_impl.h"
#include "syscall.h"

int sched_setaffinity(pid_t tid, size_t size, const cpu_set_t *set)
{
	syscall(SYS_debug_log, "musl: sched_setaffinity() is unimplemented!");
	return ENOSYS;
}

int pthread_setaffinity_np(pthread_t td, size_t size, const cpu_set_t *set)
{
	syscall(SYS_debug_log, "musl: sched_setaffinity() is unimplemented!");
	return ENOSYS;
}

static int do_getaffinity(pid_t tid, size_t size, cpu_set_t *set)
{
	syscall(SYS_debug_log, "musl: sched_getaffinity() is unimplemented!");
	return ENOSYS;
}

int sched_getaffinity(pid_t tid, size_t size, cpu_set_t *set)
{
	syscall(SYS_debug_log, "musl: sched_getaffinity() is unimplemented!");
	return ENOSYS;
}

int pthread_getaffinity_np(pthread_t td, size_t size, cpu_set_t *set)
{
	syscall(SYS_debug_log, "musl: sched_getaffinity() is unimplemented!");
	return ENOSYS;
}
