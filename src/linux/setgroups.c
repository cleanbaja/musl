#define _GNU_SOURCE
#include <unistd.h>
#include <signal.h>
#include "syscall.h"
#include "libc.h"

struct ctx {
	size_t count;
	const gid_t *list;
	int ret;
};

static void do_setgroups(void *p)
{
	return;
}

int setgroups(size_t count, const gid_t list[])
{
	return ENOSYS;
}
