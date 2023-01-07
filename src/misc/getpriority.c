#include <sys/resource.h>
#include "syscall.h"

int getpriority(int which, id_t who)
{
	syscall(SYS_debug_log, "musl: getpriority() is a stub!");
	return 10;
}
