#include <sys/klog.h>
#include "syscall.h"

int klogctl (int type, char *buf, int len)
{
	syscall(SYS_debug_log, "musl: klogctl() is unimplemented!");
	return ENOSYS;
	// return syscall(SYS_syslog, type, buf, len);
}
