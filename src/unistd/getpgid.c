#include <unistd.h>
#include "syscall.h"

pid_t getpgid(pid_t pid)
{
	return syscall(SYS_get_id, ID_PGID, pid);
}
