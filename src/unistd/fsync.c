#include <unistd.h>
#include "syscall.h"

int fsync(int fd)
{
	return ENOSYS;
}
