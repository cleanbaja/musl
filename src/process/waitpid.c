#include <sys/wait.h>
#include "syscall.h"

pid_t waitpid(pid_t pid, int *status, int options)
{
	return syscall_cp(SYS_waitpid, pid, status, options, 0);
}
