#include <sys/msg.h>
#include "syscall.h"
#include "ipc.h"

int msgget(key_t k, int flag)
{
#ifndef SYS_ipc
	syscall(SYS_debug_log, "musl: msgget() is unimplemented!");
	return ENOSYS;
#else
	return syscall(SYS_ipc, IPCOP_msgget, k, flag);
#endif
}
