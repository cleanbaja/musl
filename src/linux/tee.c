#define _GNU_SOURCE
#include <fcntl.h>
#include "syscall.h"

ssize_t tee(int src, int dest, size_t len, unsigned flags)
{
	return -1;
}
