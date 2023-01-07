#include <sys/xattr.h>
#include "syscall.h"

ssize_t getxattr(const char *path, const char *name, void *value, size_t size)
{
	return -1;
}

ssize_t lgetxattr(const char *path, const char *name, void *value, size_t size)
{
	return -1;
}

ssize_t fgetxattr(int filedes, const char *name, void *value, size_t size)
{
	return -1;
}

ssize_t listxattr(const char *path, char *list, size_t size)
{
	return -1;
}

ssize_t llistxattr(const char *path, char *list, size_t size)
{
	return -1;
}

ssize_t flistxattr(int filedes, char *list, size_t size)
{
	return -1;
}

int setxattr(const char *path, const char *name, const void *value, size_t size, int flags)
{
	return -1;
}

int lsetxattr(const char *path, const char *name, const void *value, size_t size, int flags)
{
	return -1;
}

int fsetxattr(int filedes, const char *name, const void *value, size_t size, int flags)
{
	return -1;
}

int removexattr(const char *path, const char *name)
{
	return -1;
}

int lremovexattr(const char *path, const char *name)
{
	return -1;
}

int fremovexattr(int fd, const char *name)
{
	return -1;
}
