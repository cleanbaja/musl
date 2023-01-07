#include <sys/signalfd.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "syscall.h"

int signalfd(int fd, const sigset_t *sigs, int flags)
{
	int ret = open("/proc/self/sigctl", O_RDWR);
	if (ret == -1)
		return errno;
	
	struct signalfd_init payload = { sigs, flags };

	int status = write(ret, &payload, sizeof(struct signalfd_init));
	if (status == -1)
		return errno;

	if (ret >= 0) {
		if (flags & SFD_CLOEXEC)
			__syscall(SYS_fcntl, ret, F_SETFD, FD_CLOEXEC);
		if (flags & SFD_NONBLOCK)
			__syscall(SYS_fcntl, ret, F_SETFL, O_NONBLOCK);
	}
	
	return ret;
}
