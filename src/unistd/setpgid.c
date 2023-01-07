#include <unistd.h>
#include "syscall.h"

int setpgid(pid_t pid, pid_t pgid)
{
	return syscall(SYS_set_id, ID_PGID, pid, pgid);
}
