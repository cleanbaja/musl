#include <unistd.h>
#include "syscall.h"

pid_t setsid(void)
{
	return ENOSYS;
}
