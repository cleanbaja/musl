#include <sys/fsuid.h>
#include "syscall.h"

int setfsgid(gid_t gid)
{
	syscall(SYS_debug_log, "musl: setfsgid() is unimplemented!");
	return ENOSYS;
}
