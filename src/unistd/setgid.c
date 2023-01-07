#include <unistd.h>
#include "syscall.h"
#include "libc.h"

int setgid(gid_t gid)
{
	return __setxid(SYS_set_id, ID_GID, gid, 0, 0);
}
