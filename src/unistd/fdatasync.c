#include <unistd.h>
#include "syscall.h"

int fdatasync(int fd)
{
	return ENOSYS;
}
