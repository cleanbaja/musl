#include <sys/sysinfo.h>
#include "syscall.h"

int __lsysinfo(struct sysinfo *info)
{
	return ENOSYS;
}

weak_alias(__lsysinfo, sysinfo);
