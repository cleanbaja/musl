#include <sys/shm.h>
#include <stdint.h>
#include "syscall.h"
#include "ipc.h"

int shmget(key_t key, size_t size, int flag)
{
	if (size > PTRDIFF_MAX) size = SIZE_MAX;
#ifndef SYS_ipc
	syscall(SYS_debug_log, "musl: shmget() is unimplemented!");
	return ENOSYS;
#else
	return syscall(SYS_ipc, IPCOP_shmget, key, size, flag);
#endif
}
