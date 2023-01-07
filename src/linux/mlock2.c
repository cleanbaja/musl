#define _GNU_SOURCE 1
#include <sys/mman.h>
#include "syscall.h"

int mlock2(const void *addr, size_t len, unsigned flags)
{
	return mlock(addr, len);
}
