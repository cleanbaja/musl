#include <sys/times.h>
#include "syscall.h"

clock_t times(struct tms *tms)
{
	return ENOSYS;
}
