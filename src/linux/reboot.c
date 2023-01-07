#include <sys/reboot.h>
#include "syscall.h"

int reboot(int type)
{
	syscall(SYS_debug_log, "musl: reboot() is not implemented!");
	return ENOSYS;
}
