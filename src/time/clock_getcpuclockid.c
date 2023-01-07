#include <time.h>
#include <errno.h>
#include <unistd.h>
#include "syscall.h"

int clock_getcpuclockid(pid_t pid, clockid_t *clk)
{
	return ENOSYS;
}
