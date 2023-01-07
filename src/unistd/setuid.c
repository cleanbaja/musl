#include <unistd.h>
#include "syscall.h"
#include "libc.h"

int setuid(uid_t uid)
{
	return __setxid(SYS_set_id, ID_UID, uid, 0, 0);
}
