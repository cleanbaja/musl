#include <sys/sem.h>
#include "syscall.h"
#include "ipc.h"

int semop(int id, struct sembuf *buf, size_t n)
{
#ifndef SYS_ipc
	syscall(SYS_debug_log, "musl: semop() is unimplemented!");
	return ENOSYS;
#else
	return syscall(SYS_ipc, IPCOP_semop, id, n, 0, buf);
#endif
}
