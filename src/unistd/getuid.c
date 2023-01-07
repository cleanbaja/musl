#include <unistd.h>
#include "syscall.h"

uid_t getuid(void)
{
	return __syscall(SYS_get_id, ID_UID);
}
