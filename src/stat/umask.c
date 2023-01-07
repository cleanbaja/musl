#include <sys/stat.h>
#include "syscall.h"

mode_t umask(mode_t mode)
{
	syscall(SYS_debug_log, "musl: umask() is missing!");
	return ENOSYS;
}
