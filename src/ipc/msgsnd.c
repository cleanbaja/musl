#include <sys/msg.h>
#include "syscall.h"
#include "ipc.h"

int msgsnd(int q, const void *m, size_t len, int flag)
{
#ifndef SYS_ipc
	syscall(SYS_debug_log, "musl: msgsnd() is unimplemented!");
	return ENOSYS;
#else
	return syscall_cp(SYS_ipc, IPCOP_msgsnd, q, len, flag, m);
#endif
}
