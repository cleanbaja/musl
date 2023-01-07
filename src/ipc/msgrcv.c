#include <sys/msg.h>
#include "syscall.h"
#include "ipc.h"

ssize_t msgrcv(int q, void *m, size_t len, long type, int flag)
{
#ifndef SYS_ipc
	syscall(SYS_debug_log, "musl: msgrcv() is unimplemented!");
	return -1;
#else
	return syscall_cp(SYS_ipc, IPCOP_msgrcv, q, len, flag, ((long[]){ (long)m, type }));
#endif
}
