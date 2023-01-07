#define _GNU_SOURCE
#include <fcntl.h>
#include "syscall.h"

int open_by_handle_at(int mount_fd, struct file_handle *handle, int flags)
{
	return ENOSYS;
}
