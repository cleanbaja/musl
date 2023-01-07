#include <time.h>
#include <setjmp.h>
#include <limits.h>
#include "pthread_impl.h"
#include "atomic.h"

struct ksigevent {
	union sigval sigev_value;
	int sigev_signo;
	int sigev_notify;
	int sigev_tid;
};

struct start_args {
	pthread_barrier_t b;
	struct sigevent *sev;
};

static void dummy_0()
{
}
weak_alias(dummy_0, __pthread_tsd_run_dtors);


int timer_create(clockid_t clk, struct sigevent *restrict evp, timer_t *restrict res)
{
	return ENOSYS;
}
