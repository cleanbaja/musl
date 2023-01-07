#include <sys/sendfile.h>
#include "syscall.h"

ssize_t sendfile(int out_fd, int in_fd, off_t *ofs, size_t count)
{
	return -1;
}
