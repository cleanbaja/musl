#include <sys/swap.h>
#include "syscall.h"

int swapon(const char *path, int flags)
{
	return ENOSYS;
}

int swapoff(const char *path)
{
	return ENOSYS;
}
