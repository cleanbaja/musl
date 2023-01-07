#include <sys/shm.h>
#include "syscall.h"
#include "ipc.h"

int shmdt(const void *addr)
{
#ifndef SYS_ipc
	syscall(SYS_debug_log, "musl: shmdt() is unimplemented!");
	return ENOSYS;
#else
	return syscall(SYS_ipc, IPCOP_shmdt, 0, 0, 0, addr);
#endif
}
