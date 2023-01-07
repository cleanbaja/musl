#ifndef _INTERNAL_SYSCALL_H
#define _INTERNAL_SYSCALL_H

#include <features.h>
#include <errno.h>
#include <sys/syscall.h>
#include "syscall_arch.h"

#ifndef SYSCALL_RLIM_INFINITY
#define SYSCALL_RLIM_INFINITY (~0ULL)
#endif

#ifndef SYSCALL_MMAP2_UNIT
#define SYSCALL_MMAP2_UNIT 4096ULL
#endif

#ifndef __SYSCALL_LL_PRW
#define __SYSCALL_LL_PRW(x) __SYSCALL_LL_O(x)
#endif

#ifndef __scc
#define __scc(X) ((long) (X))
typedef long syscall_arg_t;
#endif

hidden long __syscall_ret(unsigned long),
	__syscall_cp(syscall_arg_t, syscall_arg_t, syscall_arg_t, syscall_arg_t,
	             syscall_arg_t, syscall_arg_t, syscall_arg_t);

#define __syscall1(n,a) __syscall1(n,__scc(a))
#define __syscall2(n,a,b) __syscall2(n,__scc(a),__scc(b))
#define __syscall3(n,a,b,c) __syscall3(n,__scc(a),__scc(b),__scc(c))
#define __syscall4(n,a,b,c,d) __syscall4(n,__scc(a),__scc(b),__scc(c),__scc(d))
#define __syscall5(n,a,b,c,d,e) __syscall5(n,__scc(a),__scc(b),__scc(c),__scc(d),__scc(e))
#define __syscall6(n,a,b,c,d,e,f) __syscall6(n,__scc(a),__scc(b),__scc(c),__scc(d),__scc(e),__scc(f))
#define __syscall7(n,a,b,c,d,e,f,g) __syscall7(n,__scc(a),__scc(b),__scc(c),__scc(d),__scc(e),__scc(f),__scc(g))

#define __SYSCALL_NARGS_X(a,b,c,d,e,f,g,h,n,...) n
#define __SYSCALL_NARGS(...) __SYSCALL_NARGS_X(__VA_ARGS__,7,6,5,4,3,2,1,0,)
#define __SYSCALL_CONCAT_X(a,b) a##b
#define __SYSCALL_CONCAT(a,b) __SYSCALL_CONCAT_X(a,b)
#define __SYSCALL_DISP(b,...) __SYSCALL_CONCAT(b,__SYSCALL_NARGS(__VA_ARGS__))(__VA_ARGS__)

#define __syscall(...) __SYSCALL_DISP(__syscall,__VA_ARGS__)
#define syscall(...) __syscall_ret(__syscall(__VA_ARGS__))

#define socketcall(nm,a,b,c,d,e,f) __syscall_ret(__socketcall(nm,a,b,c,d,e,f))
#define socketcall_cp(nm,a,b,c,d,e,f) __syscall_ret(__socketcall_cp(nm,a,b,c,d,e,f))

#define __syscall_cp0(n) (__syscall_cp)(n,0,0,0,0,0,0)
#define __syscall_cp1(n,a) (__syscall_cp)(n,__scc(a),0,0,0,0,0)
#define __syscall_cp2(n,a,b) (__syscall_cp)(n,__scc(a),__scc(b),0,0,0,0)
#define __syscall_cp3(n,a,b,c) (__syscall_cp)(n,__scc(a),__scc(b),__scc(c),0,0,0)
#define __syscall_cp4(n,a,b,c,d) (__syscall_cp)(n,__scc(a),__scc(b),__scc(c),__scc(d),0,0)
#define __syscall_cp5(n,a,b,c,d,e) (__syscall_cp)(n,__scc(a),__scc(b),__scc(c),__scc(d),__scc(e),0)
#define __syscall_cp6(n,a,b,c,d,e,f) (__syscall_cp)(n,__scc(a),__scc(b),__scc(c),__scc(d),__scc(e),__scc(f))

#define __syscall_cp(...) __SYSCALL_DISP(__syscall_cp,__VA_ARGS__)
#define syscall_cp(...) __syscall_ret(__syscall_cp(__VA_ARGS__))

static inline long __alt_socketcall(int sys, int sock, int cp, syscall_arg_t a, syscall_arg_t b, syscall_arg_t c, syscall_arg_t d, syscall_arg_t e, syscall_arg_t f)
{
	long r;
	if (cp) r = __syscall_cp(sys, a, b, c, d, e, f);
	else r = __syscall(sys, a, b, c, d, e, f);
	if (r != -ENOSYS) return r;
#ifdef SYS_socketcall
	if (cp) r = __syscall_cp(SYS_socketcall, sock, ((long[6]){a, b, c, d, e, f}));
	else r = __syscall(SYS_socketcall, sock, ((long[6]){a, b, c, d, e, f}));
#endif
	return r;
}
#define __socketcall(nm, a, b, c, d, e, f) __alt_socketcall(SYS_##nm, __SC_##nm, 0, \
	__scc(a), __scc(b), __scc(c), __scc(d), __scc(e), __scc(f))
#define __socketcall_cp(nm, a, b, c, d, e, f) __alt_socketcall(SYS_##nm, __SC_##nm, 1, \
	__scc(a), __scc(b), __scc(c), __scc(d), __scc(e), __scc(f))


#if defined(SYS_newfstatat)
#undef SYS_fstatat
#define SYS_fstatat SYS_newfstatat
#elif defined(SYS_fstatat64)
#undef SYS_fstatat
#define SYS_fstatat SYS_fstatat64
#endif



/* socketcall calls */

#define __SC_socket      1
#define __SC_bind        2
#define __SC_connect     3
#define __SC_listen      4
#define __SC_accept      5
#define __SC_sockname    6
#define __SC_peername    7
#define __SC_socketpair  8
#define __SC_send        9
#define __SC_recv        10
#define __SC_sendto      11
#define __SC_recvfrom    12
#define __SC_sockoff     13
#define __SC_setsockopt  14
#define __SC_getsockopt  15
#define __SC_sendmsg     16
#define __SC_recvmsg     17
#define __SC_accept4     18
#define __SC_recvmmsg    19
#define __SC_sendmmsg    20

/* This is valid only because all socket syscalls are made via
 * socketcall, which always fills unused argument slots with zeros. */
#ifndef SYS_accept
#define SYS_accept SYS_accept4
#endif

#ifndef SO_RCVTIMEO_OLD
#define SO_RCVTIMEO_OLD  20
#endif
#ifndef SO_SNDTIMEO_OLD
#define SO_SNDTIMEO_OLD  21
#endif

#define SO_TIMESTAMP_OLD    29
#define SO_TIMESTAMPNS_OLD  35
#define SO_TIMESTAMPING_OLD 37
#define SCM_TIMESTAMP_OLD    SO_TIMESTAMP_OLD
#define SCM_TIMESTAMPNS_OLD  SO_TIMESTAMPNS_OLD
#define SCM_TIMESTAMPING_OLD SO_TIMESTAMPING_OLD

#ifndef SIOCGSTAMP_OLD
#define SIOCGSTAMP_OLD 0x8906
#endif
#ifndef SIOCGSTAMPNS_OLD
#define SIOCGSTAMPNS_OLD 0x8907
#endif

#ifdef SYS_open
#define __sys_open2(x,pn,fl) __syscall2(SYS_open, pn, (fl)|O_LARGEFILE)
#define __sys_open3(x,pn,fl,mo) __syscall3(SYS_open, pn, (fl)|O_LARGEFILE, mo)
#define __sys_open_cp2(x,pn,fl) __syscall_cp2(SYS_open, pn, (fl)|O_LARGEFILE)
#define __sys_open_cp3(x,pn,fl,mo) __syscall_cp3(SYS_open, pn, (fl)|O_LARGEFILE, mo)
#else
#define __sys_open2(x,pn,fl) __syscall3(SYS_openat, AT_FDCWD, pn, (fl)|O_LARGEFILE)
#define __sys_open3(x,pn,fl,mo) __syscall4(SYS_openat, AT_FDCWD, pn, (fl)|O_LARGEFILE, mo)
#define __sys_open_cp2(x,pn,fl) __syscall_cp3(SYS_openat, AT_FDCWD, pn, (fl)|O_LARGEFILE)
#define __sys_open_cp3(x,pn,fl,mo) __syscall_cp4(SYS_openat, AT_FDCWD, pn, (fl)|O_LARGEFILE, mo)
#endif

#define __sys_open(...) __SYSCALL_DISP(__sys_open,,__VA_ARGS__)
#define sys_open(...) __syscall_ret(__sys_open(__VA_ARGS__))

#define __sys_open_cp(...) __SYSCALL_DISP(__sys_open_cp,,__VA_ARGS__)
#define sys_open_cp(...) __syscall_ret(__sys_open_cp(__VA_ARGS__))

hidden void __procfdname(char __buf[static 15+3*sizeof(int)], unsigned);

hidden void *__vdsosym(const char *, const char *);

#endif
