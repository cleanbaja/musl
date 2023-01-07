#include <sys/eventfd.h>
#include <unistd.h>
#include <errno.h>
#include "syscall.h"

int eventfd(unsigned int count, int flags)
{
	int r = open("/proc/self/eventctl", O_RDWR);
	if (r == -1)
		return errno;

	struct eventfd_init payload = { EFD_MAGIC, count, flags };

	int status = write(r, &payload, sizeof(struct eventfd_init));
	if (status == -1)
		return errno;

	return r;
}

int eventfd_read(int fd, eventfd_t *value)
{
	return (sizeof(*value) == read(fd, value, sizeof(*value))) ? 0 : -1;
}

int eventfd_write(int fd, eventfd_t value)
{
	return (sizeof(value) == write(fd, &value, sizeof(value))) ? 0 : -1;
}
