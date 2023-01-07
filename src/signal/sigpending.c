#include <signal.h>
#include "syscall.h"

int sigpending(sigset_t *set)
{
	syscall(SYS_debug_log, "musl: sigpending() is unimplemented!");
	return ENOSYS;
}
