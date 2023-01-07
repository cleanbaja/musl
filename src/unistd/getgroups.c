#include <unistd.h>
#include "syscall.h"

int getgroups(int count, gid_t list[])
{
	syscall(SYS_debug_log, "musl: getgroups() is undefined!");
	return ENOSYS;
}
