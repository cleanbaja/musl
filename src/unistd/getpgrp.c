#include <unistd.h>
#include "syscall.h"

pid_t getpgrp(void)
{
	return __syscall(SYS_get_id, ID_PGID, 0);
}
