#include <signal.h>
#include "syscall.h"

int sigsuspend(const sigset_t *mask)
{
	syscall(SYS_debug_log, "musl: sigsuspend() is unimplemented!");
	return ENOSYS;
}
