#include <sys/shm.h>
#include "syscall.h"
#include "ipc.h"

#ifndef SYS_ipc
void *shmat(int id, const void *addr, int flag)
{
	syscall(SYS_debug_log, "musl: shmat() is not implemented!");
	return (void *)ENOSYS;
}
#else
void *shmat(int id, const void *addr, int flag)
{
	unsigned long ret;
	ret = syscall(SYS_ipc, IPCOP_shmat, id, flag, &addr, addr);
	return (ret > -(unsigned long)SHMLBA) ? (void *)ret : (void *)addr;
}
#endif
