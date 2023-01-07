#include <unistd.h>
#include "syscall.h"

int ftruncate(int fd, off_t length)
{
	return ENOSYS;
}
