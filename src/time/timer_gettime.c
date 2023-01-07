#include <time.h>
#include <limits.h>
#include "pthread_impl.h"

int timer_gettime(timer_t t, struct itimerspec *val)
{
	return ENOSYS;
}
