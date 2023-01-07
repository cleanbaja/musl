#include <sys/resource.h>
#include "syscall.h"

int setpriority(int which, id_t who, int prio)
{
	syscall(SYS_debug_log, "musl: setpriority() is unimplemented!");
	return ENOSYS;
}
