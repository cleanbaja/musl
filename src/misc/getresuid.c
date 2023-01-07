#define _GNU_SOURCE
#include <unistd.h>
#include "syscall.h"

int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid)
{
	syscall(SYS_debug_log, "musl: getresgid() is unimplemented!");
	return ENOSYS;
}
