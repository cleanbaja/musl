#include "syscall.h"

int init_module(void *a, unsigned long b, const char *c)
{
	return ENOSYS;
}

int delete_module(const char *a, unsigned b)
{
	return ENOSYS;
}
