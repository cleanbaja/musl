#define _GNU_SOURCE
#include <unistd.h>
#include "syscall.h"

int setdomainname(const char *name, size_t len)
{
	syscall(SYS_debug_log, "musl: setdomainname() is unimplemented!");
	return ENOSYS;
}
