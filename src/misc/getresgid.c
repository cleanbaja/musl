#define _GNU_SOURCE
#include <unistd.h>
#include "syscall.h"

int getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid)
{
	syscall(SYS_debug_log, "musl: getresgid() is unimplemented!");
	return ENOSYS;
}
