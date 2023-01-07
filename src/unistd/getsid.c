#include <unistd.h>
#include "syscall.h"

pid_t getsid(pid_t pid)
{
	return syscall(SYS_get_id, ID_SID, pid);
}
