#include <sched.h>
#include "syscall.h"

int sched_get_priority_max(int policy)
{
	return ENOSYS;
}

int sched_get_priority_min(int policy)
{
	return ENOSYS;
}
