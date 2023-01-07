#include <unistd.h>
#include "syscall.h"

pid_t getpid(void)
{
	return __syscall(SYS_get_id, ID_PID);
}
