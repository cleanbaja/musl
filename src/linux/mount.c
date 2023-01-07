#include <sys/mount.h>
#include "syscall.h"

int mount(const char *special, const char *dir, const char *fstype, unsigned long flags, const void *data)
{
	return ENOSYS;
}

int umount(const char *special)
{
	return ENOSYS;
}

int umount2(const char *special, int flags)
{
	return ENOSYS;
}
