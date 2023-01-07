#include <sys/wait.h>
#include "syscall.h"

int waitid(idtype_t type, id_t id, siginfo_t *info, int options)
{
	syscall(SYS_debug_log, "musl: waitid() is unimplemented!");
	return ENOSYS;
}
