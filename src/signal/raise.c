#include <signal.h>
#include <stdint.h>
#include "syscall.h"
#include "pthread_impl.h"

int raise(int sig)
{
	sigset_t set;
	__block_app_sigs(&set);
	
	pid_t pid = syscall(SYS_get_id, ID_PID);
	int ret = syscall(SYS_kill, pid, sig);

	__restore_sigs(&set);
	return ret;
}
