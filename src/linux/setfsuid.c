#include <sys/fsuid.h>
#include "syscall.h"

int setfsuid(uid_t uid)
{
	syscall(SYS_debug_log, "musl: setfsuid() is unimplemented!");
	return ENOSYS;
}
