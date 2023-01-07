#include <sys/socket.h>
#include "syscall.h"

int shutdown(int fd, int how)
{
	return socketcall(sockoff, fd, how, 0, 0, 0, 0);
}
