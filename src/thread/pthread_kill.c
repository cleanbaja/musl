#include "pthread_impl.h"
#include "lock.h"

int pthread_kill(pthread_t t, int sig)
{
	syscall(SYS_debug_log, "musl: pthread_kill() is stubbed beacause TKILL IS MISSING!!!");
	return ENOSYS;
}
