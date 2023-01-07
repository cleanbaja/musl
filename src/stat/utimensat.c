#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <errno.h>
#include "syscall.h"

#define IS32BIT(x) !((x)+0x80000000ULL>>32)
#define NS_SPECIAL(ns) ((ns)==UTIME_NOW || (ns)==UTIME_OMIT)

int utimensat(int fd, const char *path, const struct timespec times[2], int flags)
{
	return ENOSYS;
}
