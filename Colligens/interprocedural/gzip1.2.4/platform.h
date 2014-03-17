#define _near
typedef struct {} IPos;



typedef struct {} fpos_t;
typedef struct {} FILE;
typedef struct {} size_t;
typedef struct {} va_list;
typedef struct {} off_t;
typedef struct {} ssize_t;
typedef struct {} __uint8_t;
typedef struct {} __uint16_t;
typedef struct {} __uint32_t;
typedef struct {} __uint64_t;
typedef struct {} __darwin_size_t;
typedef struct {} __darwin_sigset_t;
typedef struct {} pthread_attr_t;
typedef struct {} pid_t;
typedef struct {} uid_t;
typedef struct {} siginfo_t;
typedef struct {} sigset_t;
typedef struct {} __darwin_time_t;
typedef struct {} __darwin_suseconds_t;
typedef struct {} rlim_t;
typedef struct {} id_t;
typedef struct {} idtype_t;
typedef struct {} div_t;
typedef struct {} ldiv_t;
typedef struct {} lldiv_t;
typedef struct {} wchar_t;
typedef struct {} u_int32_t;
typedef struct {} dev_t;
typedef struct {} mode_t;
typedef struct {} clock_t;
typedef struct {} time_t;
typedef struct {} LONG;
typedef struct {} ulg;
typedef struct {} voidp;
typedef struct {} file_t;
typedef struct {} ush;
typedef struct {} IPos;
typedef struct {} Code;
typedef struct {} __darwin_rune_t;
typedef struct {} _RuneEntry;
typedef struct {} _RuneRange;
typedef struct {} _RuneCharClass;
typedef struct {} _RuneLocale;
typedef struct {} __darwin_ct_rune_t;
typedef struct {} __int32_t;
typedef struct {} __DARWIN_NFDBITS;
typedef struct {} pthread_t;
typedef struct {} stack_t;
typedef struct {} ino_t;
typedef struct {} nlink_t;
typedef struct {} __DARWIN_STRUCT_STAT64;
typedef struct {} filesec_t;
typedef struct {} fd_set;
typedef struct {} filesec_property_t;
typedef struct {} gid_t;
typedef struct {} useconds_t;
typedef struct {} uuid_t;
typedef struct {} __DARWIN_STRUCT_DIRENTRY;
typedef struct {} __darwin_pthread_mutex_t;
typedef struct {} DIR;
typedef struct {} sig_type;
typedef struct {} uch;
typedef struct {} dir_type;
typedef struct {} and;
typedef struct {} ct_data;
typedef struct {} tree_desc;
typedef struct {} char_type;
typedef struct {} de_stack;
typedef struct {} cmp_code_int;
#define	_STDIO_H_
#define	_CDEFS_H_
#define	__BEGIN_DECLS
#define	__END_DECLS
#define	__P(protos)	protos
#define	__CONCAT(x,y)	x ## y
#define	__STRING(x)	#x
#define	__const		const
#define	__signed	signed
#define	__volatile	volatile
#define __dead2		__attribute__((noreturn))
#define __pure2		__attribute__((const))
#define __unused	__attribute__((unused))
#define __used		__attribute__((used))
#define __deprecated	__attribute__((deprecated))
#define __unavailable	__attribute__((unavailable))
#define	__dead
#define	__pure
#define __restrict	restrict
#define __printflike(fmtarg, firstvararg) \
		__attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __scanflike(fmtarg, firstvararg) \
		__attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __IDSTRING(name,string) static const char name[] __used = string
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define __FBSDID(s)
#define __DARWIN_ONLY_64_BIT_INO_T	0
#define __DARWIN_ONLY_VERS_1050		0
#    define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#    define __DARWIN_UNIX03	1
#      define __DARWIN_64_BIT_INO_T 1
#    define __DARWIN_VERS_1050 1
#    define __DARWIN_NON_CANCELABLE 0
#    define __DARWIN_SUF_UNIX03		/* nothing */
#      define __DARWIN_SUF_64_BIT_INO_T	"$INODE64"
#      define __DARWIN_SUF_1050		"$1050"
#    define __DARWIN_SUF_NON_CANCELABLE	/* nothing */
#define __DARWIN_SUF_EXTSN		"$DARWIN_EXTSN"
#define __DARWIN_ALIAS(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_C(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_INODE64(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_1050(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_1050ALIAS(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_C(sym)	__asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym)	__asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_1050INODE64(sym)	__asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_EXTSN(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __DARWIN_EXTSN_C(sym)		__asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING(_mac, _iphone, x)   __DARWIN_ALIAS_STARTING_MAC_##_mac(x)
#define ___POSIX_C_DEPRECATED_STARTING_198808L
#define ___POSIX_C_DEPRECATED_STARTING_199009L
#define ___POSIX_C_DEPRECATED_STARTING_199209L
#define ___POSIX_C_DEPRECATED_STARTING_199309L
#define ___POSIX_C_DEPRECATED_STARTING_199506L
#define ___POSIX_C_DEPRECATED_STARTING_200112L
#define ___POSIX_C_DEPRECATED_STARTING_200809L
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_##ver
#define __DARWIN_C_ANSI         010000L
#define __DARWIN_C_FULL         900000L
#define __DARWIN_C_LEVEL        __DARWIN_C_FULL
#define	__DARWIN_NO_LONG_LONG	(defined(__STRICT_ANSI__) \
				&& (__STDC_VERSION__-0 < 199901L) \
				&& !defined(__GNUG__))
#define _DARWIN_FEATURE_64_BIT_INODE		1
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE	1
#define _DARWIN_FEATURE_UNIX_CONFORMANCE	3
#define __CAST_AWAY_QUALIFIER(variable, qualifier, type)  (type) (long)(variable)
#define __AVAILABILITY__
#define __MAC_10_0      1000
#define __MAC_10_1      1010
#define __MAC_10_2      1020
#define __MAC_10_3      1030
#define __MAC_10_4      1040
#define __MAC_10_5      1050
#define __MAC_10_6      1060
#define __MAC_10_7      1070
#define __MAC_10_8      1080
#define __MAC_NA        9999
#define __IPHONE_2_0     20000
#define __IPHONE_2_1     20100
#define __IPHONE_2_2     20200
#define __IPHONE_3_0     30000
#define __IPHONE_3_1     30100
#define __IPHONE_3_2     30200
#define __IPHONE_4_0     40000
#define __IPHONE_4_1     40100
#define __IPHONE_4_2     40200
#define __IPHONE_4_3     40300
#define __IPHONE_5_0     50000
#define __IPHONE_5_1     50100
#define __IPHONE_NA      99999
#define __AVAILABILITY_INTERNAL__
#define __AVAILABILITY_INTERNAL_DEPRECATED         __attribute__((deprecated,visibility("default")))
#define __AVAILABILITY_INTERNAL_UNAVAILABLE        __attribute__((unavailable,visibility("default")))
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT        __attribute__((weak_import,visibility("default")))
#define __AVAILABILITY_INTERNAL_REGULAR            __attribute__((visibility("default")))
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_10_8
#define __AVAILABILITY_INTERNAL__MAC_10_8        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_7        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_6        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_5        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_4        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_3        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_2        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_1        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_10_0        __AVAILABILITY_INTERNAL_REGULAR
#define __AVAILABILITY_INTERNAL__MAC_NA             __AVAILABILITY_INTERNAL_UNAVAILABLE
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_1        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_1        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_2        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_2        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_2        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_3        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_3        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_3        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_3        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_4        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_4        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_4        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_4        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_4        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_5        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_5        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_5        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_5        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_5        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_5        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_6        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_6        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_6        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_6        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_6        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_6        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_6        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_7        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_8        __AVAILABILITY_INTERNAL_DEPRECATED
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_0
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_1
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_2
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_3
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_4
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_5
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_6
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_7
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_NA             __AVAILABILITY_INTERNAL__MAC_10_8
#define __AVAILABILITY_INTERNAL__MAC_NA_DEP__MAC_NA               __AVAILABILITY_INTERNAL_UNAVAILABLE
#define __OSX_AVAILABLE_STARTING(_osx, _ios) __AVAILABILITY_INTERNAL##_osx
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro, _osxDep, _iosIntro, _iosDep) \
                                                    __AVAILABILITY_INTERNAL##_osxIntro##_DEP##_osxDep
#define __TYPES_H_
#define _SYS__TYPES_H_
#define _BSD_MACHINE__TYPES_H_
#define	_BSD_I386__TYPES_H_
#define __PTHREAD_SIZE__           1168
#define __PTHREAD_ATTR_SIZE__      56
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define __PTHREAD_MUTEX_SIZE__     56
#define __PTHREAD_CONDATTR_SIZE__  8
#define __PTHREAD_COND_SIZE__      40
#define __PTHREAD_ONCE_SIZE__      8
#define __PTHREAD_RWLOCK_SIZE__      192
#define __PTHREAD_RWLOCKATTR_SIZE__      16
#define __DARWIN_NULL ((void *)0)
#define __strfmonlike(fmtarg, firstvararg) \
		__attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __strftimelike(fmtarg) \
		__attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DARWIN_WCHAR_MAX	__WCHAR_MAX__
#define __DARWIN_WCHAR_MIN	(-0x7fffffff - 1)
#define	__DARWIN_WEOF 	((__darwin_wint_t)-1)
#    define _FORTIFY_SOURCE 2
#define _VA_LIST
#define	_SIZE_T
#define NULL __DARWIN_NULL
#define	_FSTDIO			/* Define for new stdio with functions. */
#define	__SLBF	0x0001
#define	__SNBF	0x0002
#define	__SRD	0x0004
#define	__SWR	0x0008
#define	__SRW	0x0010
#define	__SEOF	0x0020
#define	__SERR	0x0040
#define	__SMBF	0x0080
#define	__SAPP	0x0100
#define	__SSTR	0x0200
#define	__SOPT	0x0400
#define	__SNPT	0x0800
#define	__SOFF	0x1000
#define	__SMOD	0x2000
#define __SALC  0x4000
#define __SIGN  0x8000
#define	_IOFBF	0
#define	_IOLBF	1
#define	_IONBF	2
#define	BUFSIZ	1024
#define	EOF	(-1)
#define	FOPEN_MAX	20
#define	FILENAME_MAX	1024
#define	P_tmpdir	"/var/tmp/"
#define	L_tmpnam	1024
#define	TMP_MAX		308915776
#define	SEEK_SET	0
#define	SEEK_CUR	1
#define	SEEK_END	2
#define	stdin	__stdinp
#define	stdout	__stdoutp
#define	stderr	__stderrp
#define	L_ctermid	1024
#define __CTERMID_DEFINED 1
#define	__sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define	__sfeof(p)	(((p)->_flags & __SEOF) != 0)
#define	__sferror(p)	(((p)->_flags & __SERR) != 0)
#define	__sclearerr(p)	((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define	__sfileno(p)	((p)->_file)
#define	getc_unlocked(fp)	__sgetc(fp)
#define putc_unlocked(x, fp)	__sputc(x, fp)
#define	getchar_unlocked()	getc_unlocked(stdin)
#define	putchar_unlocked(x)	putc_unlocked(x, stdout)
#define	_OFF_T
#define _SSIZE_T
#define	fropen(cookie, fn) funopen(cookie, fn, 0, 0, 0)
#define	fwopen(cookie, fn) funopen(cookie, 0, fn, 0, 0)
#define	feof_unlocked(p)	__sfeof(p)
#define	ferror_unlocked(p)	__sferror(p)
#define	clearerr_unlocked(p)	__sclearerr(p)
#define	fileno_unlocked(p)	__sfileno(p)
#define _SECURE__STDIO_H_
#define _SECURE__COMMON_H_
#    define _USE_FORTIFY_LEVEL 2
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1)
#define sprintf(str, ...) \
  __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define snprintf(str, len, ...) \
  __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define vsprintf(str, format, ap) \
  __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define vsnprintf(str, len, format, ap) \
  __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define _STDLIB_H_
#define	_SYS_WAIT_H_
#define _PID_T
#define _ID_T
#define	_SYS_SIGNAL_H_
#define __SYS_APPLEAPIOPTS_H__
#define __APPLE_API_STANDARD
#define __APPLE_API_STABLE
#define __APPLE_API_EVOLVING
#define __APPLE_API_UNSTABLE
#define __APPLE_API_PRIVATE
#define __APPLE_API_OBSOLETE
#define __DARWIN_NSIG	32
#define NSIG	__DARWIN_NSIG
#define _BSD_MACHINE_SIGNAL_H_
#define	_I386_SIGNAL_H_ 1
#define __need_struct_sigcontext
#define I386_MCONTEXT_SIZE	sizeof(struct mcontext)
#define	SIGHUP	1
#define	SIGINT	2
#define	SIGQUIT	3
#define	SIGILL	4
#define	SIGTRAP	5
#define	SIGABRT	6
#define	SIGIOT	SIGABRT
#define	SIGEMT	7
#define	SIGFPE	8
#define	SIGKILL	9
#define	SIGBUS	10
#define	SIGSEGV	11
#define	SIGSYS	12
#define	SIGPIPE	13
#define	SIGALRM	14
#define	SIGTERM	15
#define	SIGURG	16
#define	SIGSTOP	17
#define	SIGTSTP	18
#define	SIGCONT	19
#define	SIGCHLD	20
#define	SIGTTIN	21
#define	SIGTTOU	22
#define	SIGIO	23
#define	SIGXCPU	24
#define	SIGXFSZ	25
#define	SIGVTALRM 26
#define	SIGPROF	27
#define SIGWINCH 28
#define SIGINFO	29
#define SIGUSR1 30
#define SIGUSR2 31
#define	SIG_DFL		(void (*)(int))0
#define	SIG_IGN		(void (*)(int))1
#define	SIG_HOLD	(void (*)(int))5
#define	SIG_ERR		((void (*)(int))-1)
#define __need_mcontext_t
#define __need_stack_t
#define __need_ucontext_t
#define __need_struct_ucontext
#define __need_struct_mcontext
#define	_MACH_I386__STRUCTS_H_
#define	_STRUCT_X86_THREAD_STATE32	struct __darwin_i386_thread_state
#define _STRUCT_FP_CONTROL	struct __darwin_fp_control
#define FP_PREC_24B		0
#define	FP_PREC_53B		2
#define FP_PREC_64B		3
#define FP_RND_NEAR		0
#define FP_RND_DOWN		1
#define FP_RND_UP		2
#define FP_CHOP			3
#define _STRUCT_FP_STATUS	struct __darwin_fp_status
#define _STRUCT_MMST_REG	struct __darwin_mmst_reg
#define _STRUCT_XMM_REG		struct __darwin_xmm_reg
#define FP_STATE_BYTES		512
#define	_STRUCT_X86_FLOAT_STATE32	struct __darwin_i386_float_state
#define	_STRUCT_X86_AVX_STATE32	struct __darwin_i386_avx_state
#define _STRUCT_X86_EXCEPTION_STATE32	struct __darwin_i386_exception_state
#define _STRUCT_X86_DEBUG_STATE32	struct __darwin_x86_debug_state32
#define	_STRUCT_X86_THREAD_STATE64	struct __darwin_x86_thread_state64
#define	_STRUCT_X86_FLOAT_STATE64	struct __darwin_x86_float_state64
#define	_STRUCT_X86_AVX_STATE64	struct __darwin_x86_avx_state64
#define _STRUCT_X86_EXCEPTION_STATE64	struct __darwin_x86_exception_state64
#define _STRUCT_X86_DEBUG_STATE64	struct __darwin_x86_debug_state64
#define	_STRUCT_MCONTEXT32	struct __darwin_mcontext32
#define	_STRUCT_MCONTEXT_AVX32	struct __darwin_mcontext_avx32
#define	_STRUCT_MCONTEXT64	struct __darwin_mcontext64
#define	_STRUCT_MCONTEXT_AVX64	struct __darwin_mcontext_avx64
#define _MCONTEXT_T
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __need_struct_sigaltstack
#define _STRUCT_SIGALTSTACK	struct __darwin_sigaltstack
#define _STRUCT_UCONTEXT	struct __darwin_ucontext
#define _STACK_T
#define _UCONTEXT_T
#define _PTHREAD_ATTR_T
#define _SIGSET_T
#define _UID_T
#define	SIGEV_NONE	0
#define	SIGEV_SIGNAL	1
#define	SIGEV_THREAD	3
#define	ILL_NOOP	0
#define	ILL_ILLOPC	1
#define	ILL_ILLTRP	2
#define	ILL_PRVOPC	3
#define	ILL_ILLOPN	4
#define	ILL_ILLADR	5
#define	ILL_PRVREG	6
#define	ILL_COPROC	7
#define	ILL_BADSTK	8
#define	FPE_NOOP	0
#define FPE_FLTDIV	1
#define FPE_FLTOVF	2
#define FPE_FLTUND	3
#define FPE_FLTRES	4
#define FPE_FLTINV	5
#define	FPE_FLTSUB	6
#define	FPE_INTDIV	7
#define	FPE_INTOVF	8
#define	SEGV_NOOP	0
#define	SEGV_MAPERR	1
#define	SEGV_ACCERR	2
#define	BUS_NOOP	0
#define	BUS_ADRALN	1
#define	BUS_ADRERR	2
#define	BUS_OBJERR	3
#define	TRAP_BRKPT	1
#define	TRAP_TRACE	2
#define	CLD_NOOP	0
#define	CLD_EXITED	1
#define	CLD_KILLED	2
#define	CLD_DUMPED	3
#define	CLD_TRAPPED	4
#define	CLD_STOPPED	5
#define	CLD_CONTINUED	6
#define	POLL_IN		1
#define	POLL_OUT	2
#define	POLL_MSG	3
#define	POLL_ERR	4
#define	POLL_PRI	5
#define	POLL_HUP	6
#define	sa_handler	__sigaction_u.__sa_handler
#define	sa_sigaction	__sigaction_u.__sa_sigaction
#define SA_ONSTACK	0x0001
#define SA_RESTART	0x0002
#define	SA_RESETHAND	0x0004
#define SA_NOCLDSTOP	0x0008
#define	SA_NODEFER	0x0010
#define	SA_NOCLDWAIT	0x0020
#define	SA_SIGINFO	0x0040
#define	SA_USERTRAMP	0x0100
#define	SA_64REGSET	0x0200
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define	SIG_BLOCK	1
#define	SIG_UNBLOCK	2
#define	SIG_SETMASK	3
#define SI_USER		0x10001
#define SI_QUEUE	0x10002
#define SI_TIMER	0x10003
#define SI_ASYNCIO	0x10004
#define SI_MESGQ	0x10005
#define SS_ONSTACK	0x0001
#define	SS_DISABLE	0x0004
#define	MINSIGSTKSZ	32768
#define	SIGSTKSZ	131072
#define SV_ONSTACK	SA_ONSTACK
#define SV_INTERRUPT	SA_RESTART
#define SV_RESETHAND	SA_RESETHAND
#define SV_NODEFER	SA_NODEFER
#define SV_NOCLDSTOP	SA_NOCLDSTOP
#define SV_SIGINFO	SA_SIGINFO
#define sv_onstack sv_flags
#define sigmask(m)	(1 << ((m)-1))
#define	BADSIG		SIG_ERR
#define	_SYS_RESOURCE_H_
#define __need_struct_timeval
#define _STRUCT_TIMEVAL		struct timeval
#define	PRIO_PROCESS	0
#define	PRIO_PGRP	1
#define	PRIO_USER	2
#define	PRIO_DARWIN_THREAD	3
#define	PRIO_DARWIN_PROCESS	4
#define	PRIO_MIN	-20
#define	PRIO_MAX	20
#define PRIO_DARWIN_BG 0x1000
#define PRIO_DARWIN_NONUI 0x1001
#define	RUSAGE_SELF	0
#define	RUSAGE_CHILDREN	-1
#define	ru_first	ru_ixrss
#define	ru_last		ru_nivcsw
#define	RLIM_INFINITY	(((__uint64_t)1 << 63) - 1)
#define	RLIM_SAVED_MAX	RLIM_INFINITY
#define	RLIM_SAVED_CUR	RLIM_INFINITY
#define	RLIMIT_CPU	0
#define	RLIMIT_FSIZE	1
#define	RLIMIT_DATA	2
#define	RLIMIT_STACK	3
#define	RLIMIT_CORE	4
#define	RLIMIT_AS	5
#define	RLIMIT_RSS	RLIMIT_AS
#define	RLIMIT_MEMLOCK	6
#define	RLIMIT_NPROC	7
#define	RLIMIT_NOFILE	8
#define	RLIM_NLIMITS	9
#define _RLIMIT_POSIX_FLAG	0x1000
#define IOPOL_TYPE_DISK	0
#define IOPOL_SCOPE_PROCESS   0
#define IOPOL_SCOPE_THREAD    1
#define IOPOL_DEFAULT	0
#define IOPOL_NORMAL	1
#define IOPOL_PASSIVE	2
#define IOPOL_THROTTLE	3
#define IOPOL_UTILITY	4
#define WNOHANG		0x00000001
#define WUNTRACED	0x00000002
#define	_W_INT(w)	(*(int *)&(w))
#define	WCOREFLAG	0200
#define	_WSTATUS(x)	(_W_INT(x) & 0177)
#define	_WSTOPPED	0177
#define WEXITSTATUS(x)	((_W_INT(x) >> 8) & 0x000000ff)
#define WSTOPSIG(x)	(_W_INT(x) >> 8)
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define WIFSTOPPED(x)	(_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define WIFEXITED(x)	(_WSTATUS(x) == 0)
#define WIFSIGNALED(x)	(_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define WTERMSIG(x)	(_WSTATUS(x))
#define WCOREDUMP(x)	(_W_INT(x) & WCOREFLAG)
#define	W_EXITCODE(ret, sig)	((ret) << 8 | (sig))
#define	W_STOPCODE(sig)		((sig) << 8 | _WSTOPPED)
#define	WEXITED		0x00000004
#define	WSTOPPED	0x00000008
#define	WCONTINUED	0x00000010
#define	WNOWAIT		0x00000020
#define	WAIT_ANY	(-1)
#define	WAIT_MYPGRP	0
#define _BSD_MACHINE_ENDIAN_H_
#define	_I386__ENDIAN_H_
#define _QUAD_HIGHWORD 1
#define _QUAD_LOWWORD 0
#define	__DARWIN_LITTLE_ENDIAN	1234
#define	__DARWIN_BIG_ENDIAN	4321
#define	__DARWIN_PDP_ENDIAN	3412
#define	__DARWIN_BYTE_ORDER	__DARWIN_LITTLE_ENDIAN
#define	LITTLE_ENDIAN	__DARWIN_LITTLE_ENDIAN
#define	BIG_ENDIAN	__DARWIN_BIG_ENDIAN
#define	PDP_ENDIAN	__DARWIN_PDP_ENDIAN
#define	BYTE_ORDER	__DARWIN_BYTE_ORDER
#define	_SYS__ENDIAN_H_
#define _OS__OSBYTEORDER_H
#define __DARWIN_OSSwapConstInt16(x) \
    ((__uint16_t)((((__uint16_t)(x) & 0xff00) >> 8) | \
                (((__uint16_t)(x) & 0x00ff) << 8)))
#define __DARWIN_OSSwapConstInt32(x) \
    ((__uint32_t)((((__uint32_t)(x) & 0xff000000) >> 24) | \
                (((__uint32_t)(x) & 0x00ff0000) >>  8) | \
                (((__uint32_t)(x) & 0x0000ff00) <<  8) | \
                (((__uint32_t)(x) & 0x000000ff) << 24)))
#define __DARWIN_OSSwapConstInt64(x) \
    ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | \
                (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | \
                (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | \
                (((__uint64_t)(x) & 0x000000ff00000000ULL) >>  8) | \
                (((__uint64_t)(x) & 0x00000000ff000000ULL) <<  8) | \
                (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | \
                (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | \
                (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define _OS__OSBYTEORDERI386_H
#        define __DARWIN_OS_INLINE static inline
#define __DARWIN_OSSwapInt16(x) \
    ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __DARWIN_OSSwapInt32(x) \
    (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define __DARWIN_OSSwapInt64(x) \
    (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define ntohs(x)	__DARWIN_OSSwapInt16(x)
#define htons(x)	__DARWIN_OSSwapInt16(x)
#define ntohl(x)	__DARWIN_OSSwapInt32(x)
#define htonl(x)	__DARWIN_OSSwapInt32(x)
#define	NTOHL(x)	(x) = ntohl((__uint32_t)x)
#define	NTOHS(x)	(x) = ntohs((__uint16_t)x)
#define	HTONL(x)	(x) = htonl((__uint32_t)x)
#define	HTONS(x)	(x) = htons((__uint16_t)x)
#define	w_termsig	w_T.w_Termsig
#define w_coredump	w_T.w_Coredump
#define w_retcode	w_T.w_Retcode
#define w_stopval	w_S.w_Stopval
#define w_stopsig	w_S.w_Stopsig
#define _ALLOCA_H_
#define	alloca(size)	__alloca(size)
#define	__alloca(size)	__builtin_alloca(size)
#define _CT_RUNE_T
#define _RUNE_T
#define	_WCHAR_T
#define	EXIT_FAILURE	1
#define	EXIT_SUCCESS	0
#define	RAND_MAX	0x7fffffff
#define	MB_CUR_MAX	__mb_cur_max
#define _BSD_MACHINE_TYPES_H_
#define	_MACHTYPES_H_
#define _INT8_T
#define _INT16_T
#define _INT32_T
#define _INT64_T
#define _INTPTR_T
#define _UINTPTR_T
#define USER_ADDR_NULL	((user_addr_t) 0)
#define CAST_USER_ADDR_T(a_ptr)   ((user_addr_t)((uintptr_t)(a_ptr)))
#define __offsetof(type, field) ((size_t)(&((type *)0)->field))
#define _DEV_T
#define _MODE_T
#define	_STRING_H_
#define _STRINGS_H_
#define _SECURE__STRING_H_
#define memcpy(dest, src, len)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___memcpy_chk (dest, src, len, __darwin_obsz0 (dest))	\
   : __inline_memcpy_chk (dest, src, len))
#define memmove(dest, src, len)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___memmove_chk (dest, src, len, __darwin_obsz0 (dest))	\
   : __inline_memmove_chk (dest, src, len))
#define memset(dest, val, len)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___memset_chk (dest, val, len, __darwin_obsz0 (dest))	\
   : __inline_memset_chk (dest, val, len))
#define strcpy(dest, src)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___strcpy_chk (dest, src, __darwin_obsz (dest))		\
   : __inline_strcpy_chk (dest, src))
#define stpcpy(dest, src)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___stpcpy_chk (dest, src, __darwin_obsz (dest))		\
   : __inline_stpcpy_chk (dest, src))
#define stpncpy(dest, src, len)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___stpncpy_chk (dest, src, len, __darwin_obsz (dest))	\
   : __inline_stpncpy_chk (dest, src, len))
#define strncpy(dest, src, len)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___strncpy_chk (dest, src, len, __darwin_obsz (dest))	\
   : __inline_strncpy_chk (dest, src, len))
#define strcat(dest, src)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___strcat_chk (dest, src, __darwin_obsz (dest))		\
   : __inline_strcat_chk (dest, src))
#define strncat(dest, src, len)					\
  ((__darwin_obsz0 (dest) != (size_t) -1)				\
   ? __builtin___strncat_chk (dest, src, len, __darwin_obsz (dest))	\
   : __inline_strncat_chk (dest, src, len))
#define	_TIME_H_
#define __need_struct_timespec
#define _STRUCT_TIMESPEC	struct timespec
#define _CLOCK_T
#define	_TIME_T
#define CLOCKS_PER_SEC  1000000
#define	_UTIME_H_
#define MAXPATH 1024
#define MAXARGS 512
#define _UTIME_H 1
#  define near
#    define fcalloc(items,size) malloc((size_t)(items)*(size_t)(size))
#  define fcfree(ptr) free(ptr)
#  define NO_ST_INO /* don't rely on inode numbers */
#  define OS_CODE  0x03
#  define PATH_SEP '/'
#  define casemap(c) (c)
#  define OPTIONS_VAR "GZIP"
#  define Z_SUFFIX ".gz"
#  define MAX_SUFFIX  30
#    define MAKE_LEGAL_NAME(name)
#  define MIN_PART 3
#  define EXPAND(argc,argv)
#  define RECORD_IO 0
#  define SET_BINARY_MODE(fd)
#  define OPEN(name, flags, mode) open(name, flags, mode)
#  define get_char() get_byte()
#  define put_char(c) put_byte(c)
#  define OF(args)  args
#  define memzero(s, n)     memset ((voidp)(s), 0, (n))
#  define RETSIGTYPE void
#define local static
#define OK      0
#define ERROR   1
#define WARNING 2
#define STORED      0
#define COMPRESSED  1
#define PACKED      2
#define LZHED       3
#define DEFLATED    8
#define MAX_METHODS 9
#    define INBUFSIZ  0x8000
#define INBUF_EXTRA  64
#    define OUTBUFSIZ  16384
#define OUTBUF_EXTRA 2048
#    define DIST_BUFSIZE 0x8000
#  define EXTERN(type, array)  extern type array[]
#  define DECLARE(type, array, size)  type array[size]
#  define FREE(array)
#define tab_suffix window
#  define tab_prefix prev
#  define head (prev+WSIZE)
#define isize bytes_in
#define NO_FILE  (-1)
#define	PACK_MAGIC     "\037\036"
#define	GZIP_MAGIC     "\037\213"
#define	OLD_GZIP_MAGIC "\037\236"
#define	LZH_MAGIC      "\037\240"
#define PKZIP_MAGIC    "\120\113\003\004"
#define CONTINUATION 0x02
#define EXTRA_FIELD  0x04
#define ORIG_NAME    0x08
#define COMMENT      0x10
#define ENCRYPTED    0x20
#define RESERVED     0xC0
#define UNKNOWN 0xffff
#define BINARY  0
#  define WSIZE 0x8000
#define MIN_MATCH  3
#define MAX_MATCH  258
#define MIN_LOOKAHEAD (MAX_MATCH+MIN_MATCH+1)
#define MAX_DIST  (WSIZE-MIN_LOOKAHEAD)
#define get_byte()  (inptr < insize ? inbuf[inptr++] : fill_inbuf(0))
#define try_byte()  (inptr < insize ? inbuf[inptr++] : fill_inbuf(1))
#define put_byte(c) {outbuf[outcnt++]=(uch)(c); if (outcnt==OUTBUFSIZ)\
   flush_outbuf();}
#define put_ubyte(c) {window[outcnt++]=(uch)(c); if (outcnt==WSIZE)\
   flush_window();}
#define put_short(w) \
{ if (outcnt < OUTBUFSIZ-2) { \
    outbuf[outcnt++] = (uch) ((w) & 0xff); \
    outbuf[outcnt++] = (uch) ((ush)(w) >> 8); \
  } else { \
    put_byte((uch)((w) & 0xff)); \
    put_byte((uch)((ush)(w) >> 8)); \
  } \
}
#define put_long(n) { \
    put_short((n) & 0xffff); \
    put_short(((ulg)(n)) >> 16); \
}
#define seekable()    0
#define translate_eol 0
#define tolow(c)  (isupper(c) ? (c)-'A'+'a' : (c))
#define SH(p) ((ush)(uch)((p)[0]) | ((ush)(uch)((p)[1]) << 8))
#define LG(p) ((ulg)(SH(p)) | ((ulg)(SH((p)+2)) << 16))
#  define Trace(x)
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c,x)
#  define Tracecv(c,x)
#define WARN(msg) {if (!quiet) fprintf msg ; \
		   if (exit_code == OK) exit_code = WARNING;}
#define RAND_HEAD_LEN  12
#define zencode
#define zdecode
#define Buf_size (8 * 2*sizeof(char))
#  define BITS 16
#define INIT_BITS 9
#define	LZW_MAGIC  "\037\235"
#define BIT_MASK    0x1f
#define BLOCK_MODE  0x80
#define LZW_RESERVED 0x60
#define	CLEAR  256
#define FIRST  (CLEAR+1)
#   define HASH_BITS  13
#   define HASH_BITS  14
#   define HASH_BITS  15
#define HASH_SIZE (unsigned)(1<<HASH_BITS)
#define HASH_MASK (HASH_SIZE-1)
#define WMASK     (WSIZE-1)
#define NIL 0
#define FAST 4
#define SLOW 2
#  define TOO_FAR 4096
#define H_SHIFT  ((HASH_BITS+MIN_MATCH-1)/MIN_MATCH)
#define max_insert_length  max_lazy_match
# define nice_match MAX_MATCH
#define EQUAL 0
#define UPDATE_HASH(h,c) (h = (((h)<<H_SHIFT) ^ (c)) & HASH_MASK)
#define INSERT_STRING(s, match_head) \
   (UPDATE_HASH(ins_h, window[(s) + MIN_MATCH-1]), \
    prev[(s) & WMASK] = match_head = head[ins_h], \
    head[ins_h] = (s))
#  define check_match(start, match, length)
#define FLUSH_BLOCK(eof) \
   flush_block(block_start >= 0L ? (char*)&window[(unsigned)block_start] : \
                (char*)NULL, (long)strstart - block_start, (eof))
#    define const
#define _NO_PROTO
#define _GETOPT_H 1
#define	no_argument		0
#define required_argument	1
#define optional_argument	2
#define BAD_OPTION '\0'
#define	my_index	strchr
#define	my_strlen	strlen
#define _CTYPE_H_
#define	_RUNETYPE_H_
#define _SIZE_T
#define _WINT_T
#define	_CACHED_RUNES	(1 <<8 )
#define	_CRMASK		(~(_CACHED_RUNES - 1))
#define	_RUNE_MAGIC_A	"RuneMagA"
#define	_CTYPE_A	0x00000100L
#define	_CTYPE_C	0x00000200L
#define	_CTYPE_D	0x00000400L
#define	_CTYPE_G	0x00000800L
#define	_CTYPE_L	0x00001000L
#define	_CTYPE_P	0x00002000L
#define	_CTYPE_S	0x00004000L
#define	_CTYPE_U	0x00008000L
#define	_CTYPE_X	0x00010000L
#define	_CTYPE_B	0x00020000L
#define	_CTYPE_R	0x00040000L
#define	_CTYPE_I	0x00080000L
#define	_CTYPE_T	0x00100000L
#define	_CTYPE_Q	0x00200000L
#define	_CTYPE_SW0	0x20000000L
#define	_CTYPE_SW1	0x40000000L
#define	_CTYPE_SW2	0x80000000L
#define	_CTYPE_SW3	0xc0000000L
#define	_CTYPE_SWM	0xe0000000L
#define	_CTYPE_SWS	30
#define __DARWIN_CTYPE_static_inline		static __inline
#define __DARWIN_CTYPE_TOP_static_inline	static __inline
#define	_tolower(c)	__tolower(c)
#define	_toupper(c)	__toupper(c)
#define	_SYS_TYPES_H_
#define _U_LONG
#define	_BLKCNT_T
#define	_BLKSIZE_T
#define _GID_T
#define _IN_ADDR_T
#define _IN_PORT_T
#define _INO_T
#define _INO64_T
#define _KEY_T
#define	_NLINK_T
#define _OFF_T
#define	major(x)	((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define	minor(x)	((int32_t)((x) & 0xffffff))
#define	makedev(x,y)	((dev_t)(((x) << 24) | (y)))
#define	_CLOCK_T
#define	_SSIZE_T
#define _USECONDS_T
#define _SUSECONDS_T
#define __need_fd_set
#define _FD_SET
#define	__DARWIN_FD_SETSIZE	1024
#define	__DARWIN_NBBY		8
#define __DARWIN_NFDBITS	(sizeof(__int32_t) * __DARWIN_NBBY)
#define	__DARWIN_howmany(x, y)	((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define	__DARWIN_FD_SET(n, p)	do { int __fd = (n); ((p)->fds_bits[__fd/__DARWIN_NFDBITS] |= (1<<(__fd % __DARWIN_NFDBITS))); } while(0)
#define	__DARWIN_FD_CLR(n, p)	do { int __fd = (n); ((p)->fds_bits[__fd/__DARWIN_NFDBITS] &= ~(1<<(__fd % __DARWIN_NFDBITS))); } while(0)
#define	__DARWIN_FD_ISSET(n, p)	__darwin_fd_isset((n), (p))
#define	__DARWIN_FD_ZERO(p)	__builtin_bzero(p, sizeof(*(p)))
#define	__DARWIN_FD_COPY(f, t)	bcopy(f, t, sizeof(*(f)))
#define	NBBY		__DARWIN_NBBY
#define NFDBITS		__DARWIN_NFDBITS
#define	howmany(x, y)	__DARWIN_howmany(x, y)
#define	FD_SETSIZE	__DARWIN_FD_SETSIZE
#define	FD_SET(n, p)	__DARWIN_FD_SET(n, p)
#define	FD_CLR(n, p)	__DARWIN_FD_CLR(n, p)
#define	FD_ISSET(n, p)	__DARWIN_FD_ISSET(n, p)
#define	FD_ZERO(p)	__DARWIN_FD_ZERO(p)
#define	FD_COPY(f, t)	__DARWIN_FD_COPY(f, t)
#define _PTHREAD_COND_T
#define _PTHREAD_CONDATTR_T
#define _PTHREAD_MUTEX_T
#define _PTHREAD_MUTEXATTR_T
#define _PTHREAD_ONCE_T
#define _PTHREAD_RWLOCK_T
#define _PTHREAD_RWLOCKATTR_T
#define _PTHREAD_T
#define _PTHREAD_KEY_T
#define _FSBLKCNT_T
#define _FSFILCNT_T
#define _USER_SIGNAL_H
#define	sigaddset(set, signo)	(*(set) |= __sigbits(signo), 0)
#define	sigdelset(set, signo)	(*(set) &= ~__sigbits(signo), 0)
#define	sigismember(set, signo)	((*(set) & __sigbits(signo)) != 0)
#define	sigemptyset(set)	(*(set) = 0, 0)
#define	sigfillset(set)		(*(set) = ~(sigset_t)0, 0)
#define	_SYS_STAT_H_
#define __DARWIN_STRUCT_STAT64_TIMES \
	struct timespec st_atimespec;		/* time of last access */ \
	struct timespec st_mtimespec;		/* time of last data modification */ \
	struct timespec st_ctimespec;		/* time of last status change */ \
	struct timespec st_birthtimespec;
#define __DARWIN_STRUCT_STAT64 { \
	dev_t		st_dev;			/* [XSI] ID of device containing file */ \
	mode_t		st_mode;		/* [XSI] Mode of file (see below) */ \
	nlink_t		st_nlink;		/* [XSI] Number of hard links */ \
	__darwin_ino64_t st_ino;		/* [XSI] File serial number */ \
	uid_t		st_uid;			/* [XSI] User ID of the file */ \
	gid_t		st_gid;			/* [XSI] Group ID of the file */ \
	dev_t		st_rdev;		/* [XSI] Device ID */ \
	__DARWIN_STRUCT_STAT64_TIMES \
	off_t		st_size;		/* [XSI] file size, in bytes */ \
	blkcnt_t	st_blocks;		/* [XSI] blocks allocated for file */ \
	blksize_t	st_blksize;		/* [XSI] optimal blocksize for I/O */ \
	__uint32_t	st_flags;		/* user defined flags for file */ \
	__uint32_t	st_gen;			/* file generation number */ \
	__int32_t	st_lspare;		/* RESERVED: DO NOT USE! */ \
	__int64_t	st_qspare[2];		/* RESERVED: DO NOT USE! */ \
}
#define st_atime st_atimespec.tv_sec
#define st_mtime st_mtimespec.tv_sec
#define st_ctime st_ctimespec.tv_sec
#define st_birthtime st_birthtimespec.tv_sec
#define	S_IFMT		0170000
#define	S_IFIFO		0010000
#define	S_IFCHR		0020000
#define	S_IFDIR		0040000
#define	S_IFBLK		0060000
#define	S_IFREG		0100000
#define	S_IFLNK		0120000
#define	S_IFSOCK	0140000
#define	S_IFWHT		0160000
#define	S_IRWXU		0000700
#define	S_IRUSR		0000400
#define	S_IWUSR		0000200
#define	S_IXUSR		0000100
#define	S_IRWXG		0000070
#define	S_IRGRP		0000040
#define	S_IWGRP		0000020
#define	S_IXGRP		0000010
#define	S_IRWXO		0000007
#define	S_IROTH		0000004
#define	S_IWOTH		0000002
#define	S_IXOTH		0000001
#define	S_ISUID		0004000
#define	S_ISGID		0002000
#define	S_ISVTX		0001000
#define	S_ISTXT		S_ISVTX
#define	S_IREAD		S_IRUSR
#define	S_IWRITE	S_IWUSR
#define	S_IEXEC		S_IXUSR
#define	S_ISBLK(m)	(((m) & S_IFMT) == S_IFBLK)
#define	S_ISCHR(m)	(((m) & S_IFMT) == S_IFCHR)
#define	S_ISDIR(m)	(((m) & S_IFMT) == S_IFDIR)
#define	S_ISFIFO(m)	(((m) & S_IFMT) == S_IFIFO)
#define	S_ISREG(m)	(((m) & S_IFMT) == S_IFREG)
#define	S_ISLNK(m)	(((m) & S_IFMT) == S_IFLNK)
#define	S_ISSOCK(m)	(((m) & S_IFMT) == S_IFSOCK)
#define	S_ISWHT(m)	(((m) & S_IFMT) == S_IFWHT)
#define	S_TYPEISMQ(buf)		(0)
#define	S_TYPEISSEM(buf)	(0)
#define	S_TYPEISSHM(buf)	(0)
#define	S_TYPEISTMO(buf)	(0)
#define	DEFFILEMODE	(S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define S_BLKSIZE	512
#define	UF_SETTABLE	0x0000ffff
#define	UF_NODUMP	0x00000001
#define	UF_IMMUTABLE	0x00000002
#define	UF_APPEND	0x00000004
#define UF_OPAQUE	0x00000008
#define UF_COMPRESSED	0x00000020
#define UF_TRACKED		0x00000040
#define UF_HIDDEN	0x00008000
#define	SF_SETTABLE	0xffff0000
#define	SF_ARCHIVED	0x00010000
#define	SF_IMMUTABLE	0x00020000
#define	SF_APPEND	0x00040000
#define _FILESEC_T
#define	_SYS_ERRNO_H_
#define errno (*__error())
#define	EPERM		1
#define	ENOENT		2
#define	ESRCH		3
#define	EINTR		4
#define	EIO		5
#define	ENXIO		6
#define	E2BIG		7
#define	ENOEXEC		8
#define	EBADF		9
#define	ECHILD		10
#define	EDEADLK		11
#define	ENOMEM		12
#define	EACCES		13
#define	EFAULT		14
#define	ENOTBLK		15
#define	EBUSY		16
#define	EEXIST		17
#define	EXDEV		18
#define	ENODEV		19
#define	ENOTDIR		20
#define	EISDIR		21
#define	EINVAL		22
#define	ENFILE		23
#define	EMFILE		24
#define	ENOTTY		25
#define	ETXTBSY		26
#define	EFBIG		27
#define	ENOSPC		28
#define	ESPIPE		29
#define	EROFS		30
#define	EMLINK		31
#define	EPIPE		32
#define	EDOM		33
#define	ERANGE		34
#define	EAGAIN		35
#define	EWOULDBLOCK	EAGAIN
#define	EINPROGRESS	36
#define	EALREADY	37
#define	ENOTSOCK	38
#define	EDESTADDRREQ	39
#define	EMSGSIZE	40
#define	EPROTOTYPE	41
#define	ENOPROTOOPT	42
#define	EPROTONOSUPPORT	43
#define	ESOCKTNOSUPPORT	44
#define ENOTSUP		45
#define	EPFNOSUPPORT	46
#define	EAFNOSUPPORT	47
#define	EADDRINUSE	48
#define	EADDRNOTAVAIL	49
#define	ENETDOWN	50
#define	ENETUNREACH	51
#define	ENETRESET	52
#define	ECONNABORTED	53
#define	ECONNRESET	54
#define	ENOBUFS		55
#define	EISCONN		56
#define	ENOTCONN	57
#define	ESHUTDOWN	58
#define	ETOOMANYREFS	59
#define	ETIMEDOUT	60
#define	ECONNREFUSED	61
#define	ELOOP		62
#define	ENAMETOOLONG	63
#define	EHOSTDOWN	64
#define	EHOSTUNREACH	65
#define	ENOTEMPTY	66
#define	EPROCLIM	67
#define	EUSERS		68
#define	EDQUOT		69
#define	ESTALE		70
#define	EREMOTE		71
#define	EBADRPC		72
#define	ERPCMISMATCH	73
#define	EPROGUNAVAIL	74
#define	EPROGMISMATCH	75
#define	EPROCUNAVAIL	76
#define	ENOLCK		77
#define	ENOSYS		78
#define	EFTYPE		79
#define	EAUTH		80
#define	ENEEDAUTH	81
#define	EPWROFF		82
#define	EDEVERR		83
#define	EOVERFLOW	84
#define EBADEXEC	85
#define EBADARCH	86
#define ESHLIBVERS	87
#define EBADMACHO	88
#define	ECANCELED	89
#define EIDRM		90
#define ENOMSG		91
#define EILSEQ		92
#define ENOATTR		93
#define EBADMSG		94
#define EMULTIHOP	95
#define	ENODATA		96
#define ENOLINK		97
#define ENOSR		98
#define ENOSTR		99
#define	EPROTO		100
#define ETIME		101
#define	EOPNOTSUPP	102
#define ENOPOLICY	103
#define ENOTRECOVERABLE 104
#define EOWNERDEAD      105
#define	EQFULL		106
#define	ELAST		106
#define VERSION "1.2.4"
#define PATCHLEVEL 0
#define REVDATE "18 Aug 93"
#define _SYS_TIME_H_
#define	ITIMER_REAL	0
#define	ITIMER_VIRTUAL	1
#define	ITIMER_PROF	2
#define	TIMEVAL_TO_TIMESPEC(tv, ts) {					\
	(ts)->tv_sec = (tv)->tv_sec;					\
	(ts)->tv_nsec = (tv)->tv_usec * 1000;				\
}
#define	TIMESPEC_TO_TIMEVAL(tv, ts) {					\
	(tv)->tv_sec = (ts)->tv_sec;					\
	(tv)->tv_usec = (ts)->tv_nsec / 1000;				\
}
#define	DST_NONE	0
#define	DST_USA		1
#define	DST_AUST	2
#define	DST_WET		3
#define	DST_MET		4
#define	DST_EET		5
#define	DST_CAN		6
#define	timerclear(tvp)		(tvp)->tv_sec = (tvp)->tv_usec = 0
#define	timerisset(tvp)		((tvp)->tv_sec || (tvp)->tv_usec)
#define	timercmp(tvp, uvp, cmp)						\
	(((tvp)->tv_sec == (uvp)->tv_sec) ?				\
	    ((tvp)->tv_usec cmp (uvp)->tv_usec) :			\
	    ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define	timeradd(tvp, uvp, vvp)						\
	do {								\
		(vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec;		\
		(vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec;	\
		if ((vvp)->tv_usec >= 1000000) {			\
			(vvp)->tv_sec++;				\
			(vvp)->tv_usec -= 1000000;			\
		}							\
	} while (0)
#define	timersub(tvp, uvp, vvp)						\
	do {								\
		(vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec;		\
		(vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec;	\
		if ((vvp)->tv_usec < 0) {				\
			(vvp)->tv_sec--;				\
			(vvp)->tv_usec += 1000000;			\
		}							\
	} while (0)
#define timevalcmp(l, r, cmp)   timercmp(l, r, cmp)
#define	_SYS__SELECT_H_
#define	_SYS_FCNTL_H_
#define	O_RDONLY	0x0000
#define	O_WRONLY	0x0001
#define	O_RDWR		0x0002
#define	O_ACCMODE	0x0003
#define	FREAD		0x0001
#define	FWRITE		0x0002
#define	O_NONBLOCK	0x0004
#define	O_APPEND	0x0008
#define	O_SYNC		0x0080
#define	O_SHLOCK	0x0010
#define	O_EXLOCK	0x0020
#define	O_ASYNC		0x0040
#define	O_FSYNC		O_SYNC
#define O_NOFOLLOW  0x0100
#define	O_CREAT		0x0200
#define	O_TRUNC		0x0400
#define	O_EXCL		0x0800
#define	O_EVTONLY	0x8000
#define	O_NOCTTY	0x20000
#define O_DIRECTORY	0x100000
#define O_SYMLINK	0x200000
#define		O_DSYNC	0x400000
#define	O_CLOEXEC	0x1000000
#define O_DP_GETRAWENCRYPTED	0x0001
#define	FAPPEND		O_APPEND
#define	FASYNC		O_ASYNC
#define	FFSYNC		O_FSYNC
#define	FFDSYNC		O_DSYNC
#define	FNONBLOCK	O_NONBLOCK
#define	FNDELAY		O_NONBLOCK
#define	O_NDELAY	O_NONBLOCK
#define CPF_OVERWRITE 1
#define CPF_IGNORE_MODE 2
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define	F_DUPFD		0
#define	F_GETFD		1
#define	F_SETFD		2
#define	F_GETFL		3
#define	F_SETFL		4
#define	F_GETOWN	5
#define F_SETOWN	6
#define	F_GETLK		7
#define	F_SETLK		8
#define	F_SETLKW	9
#define F_FLUSH_DATA    40
#define F_CHKCLEAN      41
#define F_PREALLOCATE   42
#define F_SETSIZE       43
#define F_RDADVISE      44
#define F_RDAHEAD       45
#define F_READBOOTSTRAP 46
#define F_WRITEBOOTSTRAP 47
#define F_NOCACHE       48
#define F_LOG2PHYS	49
#define F_GETPATH       50
#define F_FULLFSYNC     51
#define F_PATHPKG_CHECK 52
#define F_FREEZE_FS     53
#define F_THAW_FS       54
#define	F_GLOBAL_NOCACHE 55
#define F_ADDSIGS	59
#define F_MARKDEPENDENCY 60
#define F_ADDFILESIGS	61
#define F_NODIRECT	62
#define F_GETPROTECTIONCLASS	63
#define F_SETPROTECTIONCLASS	64
#define F_LOG2PHYS_EXT  65
#define	F_GETLKPID		66
#define F_SETBACKINGSTORE	70
#define F_GETPATH_MTMINFO	71
#define F_SETNOSIGPIPE		73
#define F_GETNOSIGPIPE		74
#define F_TRANSCODEKEY		75
#define F_SINGLE_WRITER		76
#define F_GETPROTECTIONLEVEL	77
#define FCNTL_FS_SPECIFIC_BASE  0x00010000
#define	F_DUPFD_CLOEXEC		67
#define	FD_CLOEXEC	1
#define	F_RDLCK		1
#define	F_UNLCK		2
#define	F_WRLCK		3
#define F_ALLOCATECONTIG  0x00000002
#define F_ALLOCATEALL     0x00000004
#define F_PEOFPOSMODE 3
#define F_VOLPOSMODE	4
#define	LOCK_SH		0x01
#define	LOCK_EX		0x02
#define	LOCK_NB		0x04
#define	LOCK_UN		0x08
#define	O_POPUP	   0x80000000
#define	O_ALERT	   0x20000000
#define FILESEC_GUID FILESEC_UUID
#define _FILESEC_UNSET_PROPERTY	((void *)0)
#define _FILESEC_REMOVE_ACL	((void *)1)
#define	_UNISTD_H_
#define	_SYS_UNISTD_H_
#define	_POSIX_VERSION		200112L
#define	_POSIX2_VERSION		200112L
#define	_POSIX_VDISABLE		((unsigned char)'\377')
#define _POSIX_THREAD_KEYS_MAX 128
#define	F_OK		0
#define	X_OK		(1<<0)
#define	W_OK		(1<<1)
#define	R_OK		(1<<2)
#define _READ_OK	(1<<9)
#define _WRITE_OK	(1<<10)
#define _EXECUTE_OK	(1<<11)
#define _DELETE_OK	(1<<12)
#define _APPEND_OK	(1<<13)
#define _RMFILE_OK	(1<<14)
#define _RATTR_OK	(1<<15)
#define _WATTR_OK	(1<<16)
#define _REXT_OK	(1<<17)
#define _WEXT_OK	(1<<18)
#define _RPERM_OK	(1<<19)
#define _WPERM_OK	(1<<20)
#define _CHOWN_OK	(1<<21)
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | \
				_DELETE_OK | _APPEND_OK | \
				_RMFILE_OK | _REXT_OK | \
				_WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | \
				_WPERM_OK | _CHOWN_OK)
#define	L_SET		SEEK_SET
#define	L_INCR		SEEK_CUR
#define	L_XTND		SEEK_END
#define	_PC_LINK_MAX		 1
#define	_PC_MAX_CANON		 2
#define	_PC_MAX_INPUT		 3
#define	_PC_NAME_MAX		 4
#define	_PC_PATH_MAX		 5
#define	_PC_PIPE_BUF		 6
#define	_PC_CHOWN_RESTRICTED	 7
#define	_PC_NO_TRUNC		 8
#define	_PC_VDISABLE		 9
#define	_PC_NAME_CHARS_MAX	 10
#define	_PC_CASE_SENSITIVE		 11
#define	_PC_CASE_PRESERVING		 12
#define _PC_EXTENDED_SECURITY_NP        13
#define _PC_AUTH_OPAQUE_NP      14
#define	_PC_2_SYMLINKS		15
#define	_PC_ALLOC_SIZE_MIN	16
#define	_PC_ASYNC_IO		17
#define	_PC_FILESIZEBITS	18
#define	_PC_PRIO_IO		19
#define	_PC_REC_INCR_XFER_SIZE	20
#define	_PC_REC_MAX_XFER_SIZE	21
#define	_PC_REC_MIN_XFER_SIZE	22
#define	_PC_REC_XFER_ALIGN	23
#define	_PC_SYMLINK_MAX		24
#define	_PC_SYNC_IO		25
#define _PC_XATTR_SIZE_BITS 	26
#define	_CS_PATH		 1
#define	 STDIN_FILENO	0
#define	STDOUT_FILENO	1
#define	STDERR_FILENO	2
#define	_XOPEN_VERSION			600
#define	_XOPEN_XCU_VERSION		4
#define	_POSIX_ADVISORY_INFO		(-1)
#define	_POSIX_ASYNCHRONOUS_IO		(-1)
#define	_POSIX_BARRIERS			(-1)
#define	_POSIX_CHOWN_RESTRICTED		200112L
#define	_POSIX_CLOCK_SELECTION		(-1)
#define	_POSIX_CPUTIME			(-1)
#define	_POSIX_FSYNC			200112L
#define	_POSIX_IPV6			200112L
#define	_POSIX_JOB_CONTROL		200112L
#define	_POSIX_MAPPED_FILES		200112L
#define	_POSIX_MEMLOCK			(-1)
#define	_POSIX_MEMLOCK_RANGE		(-1)
#define	_POSIX_MEMORY_PROTECTION	200112L
#define	_POSIX_MESSAGE_PASSING		(-1)
#define	_POSIX_MONOTONIC_CLOCK		(-1)
#define	_POSIX_NO_TRUNC			200112L
#define	_POSIX_PRIORITIZED_IO		(-1)
#define	_POSIX_PRIORITY_SCHEDULING	(-1)
#define	_POSIX_RAW_SOCKETS		(-1)
#define	_POSIX_READER_WRITER_LOCKS	200112L
#define	_POSIX_REALTIME_SIGNALS		(-1)
#define	_POSIX_REGEXP			200112L
#define	_POSIX_SAVED_IDS		200112L
#define	_POSIX_SEMAPHORES		(-1)
#define	_POSIX_SHARED_MEMORY_OBJECTS	(-1)
#define	_POSIX_SHELL			200112L
#define	_POSIX_SPAWN			(-1)
#define	_POSIX_SPIN_LOCKS		(-1)
#define	_POSIX_SPORADIC_SERVER		(-1)
#define	_POSIX_SYNCHRONIZED_IO		(-1)
#define	_POSIX_THREAD_ATTR_STACKADDR	200112L
#define	_POSIX_THREAD_ATTR_STACKSIZE	200112L
#define	_POSIX_THREAD_CPUTIME		(-1)
#define	_POSIX_THREAD_PRIO_INHERIT	(-1)
#define	_POSIX_THREAD_PRIO_PROTECT	(-1)
#define	_POSIX_THREAD_PRIORITY_SCHEDULING	(-1)
#define	_POSIX_THREAD_PROCESS_SHARED	200112L
#define	_POSIX_THREAD_SAFE_FUNCTIONS	200112L
#define	_POSIX_THREAD_SPORADIC_SERVER	(-1)
#define	_POSIX_THREADS			200112L
#define	_POSIX_TIMEOUTS			(-1)
#define	_POSIX_TIMERS			(-1)
#define	_POSIX_TRACE			(-1)
#define	_POSIX_TRACE_EVENT_FILTER	(-1)
#define	_POSIX_TRACE_INHERIT		(-1)
#define	_POSIX_TRACE_LOG		(-1)
#define	_POSIX_TYPED_MEMORY_OBJECTS	(-1)
#define	_POSIX2_C_BIND			200112L
#define	_POSIX2_C_DEV			200112L
#define	_POSIX2_CHAR_TERM		200112L
#define	_POSIX2_FORT_DEV		(-1)
#define	_POSIX2_FORT_RUN		200112L
#define	_POSIX2_LOCALEDEF		200112L
#define	_POSIX2_PBS			(-1)
#define	_POSIX2_PBS_ACCOUNTING		(-1)
#define	_POSIX2_PBS_CHECKPOINT		(-1)
#define	_POSIX2_PBS_LOCATE		(-1)
#define	_POSIX2_PBS_MESSAGE		(-1)
#define	_POSIX2_PBS_TRACK		(-1)
#define	_POSIX2_SW_DEV			200112L
#define	_POSIX2_UPE			200112L
#define	__ILP32_OFF32          (-1)
#define	__ILP32_OFFBIG         (1)
#define	__LP64_OFF64           (1)
#define	__LPBIG_OFFBIG         (1)
#define	_POSIX_V6_ILP32_OFF32		__ILP32_OFF32
#define	_POSIX_V6_ILP32_OFFBIG		__ILP32_OFFBIG
#define	_POSIX_V6_LP64_OFF64		__LP64_OFF64
#define	_POSIX_V6_LPBIG_OFFBIG		__LPBIG_OFFBIG
#define	_POSIX_V7_ILP32_OFF32		__ILP32_OFF32
#define	_POSIX_V7_ILP32_OFFBIG		__ILP32_OFFBIG
#define	_POSIX_V7_LP64_OFF64		__LP64_OFF64
#define	_POSIX_V7_LPBIG_OFFBIG		__LPBIG_OFFBIG
#define	_V6_ILP32_OFF32             __ILP32_OFF32
#define	_V6_ILP32_OFFBIG            __ILP32_OFFBIG
#define	_V6_LP64_OFF64              __LP64_OFF64
#define	_V6_LPBIG_OFFBIG            __LPBIG_OFFBIG
#define	_XBS5_ILP32_OFF32		    __ILP32_OFF32
#define	_XBS5_ILP32_OFFBIG		    __ILP32_OFFBIG
#define	_XBS5_LP64_OFF64		    __LP64_OFF64
#define	_XBS5_LPBIG_OFFBIG		    __LPBIG_OFFBIG
#define	_XOPEN_CRYPT			(1)
#define	_XOPEN_ENH_I18N			(1)
#define	_XOPEN_LEGACY			(-1)
#define	_XOPEN_REALTIME			(-1)
#define	_XOPEN_REALTIME_THREADS		(-1)
#define	_XOPEN_SHM			(1)
#define	_XOPEN_STREAMS			(-1)
#define	_XOPEN_UNIX			(1)
#define	_SC_ARG_MAX			 1
#define	_SC_CHILD_MAX			 2
#define	_SC_CLK_TCK			 3
#define	_SC_NGROUPS_MAX			 4
#define	_SC_OPEN_MAX			 5
#define	_SC_JOB_CONTROL			 6
#define	_SC_SAVED_IDS			 7
#define	_SC_VERSION			 8
#define	_SC_BC_BASE_MAX			 9
#define	_SC_BC_DIM_MAX			10
#define	_SC_BC_SCALE_MAX		11
#define	_SC_BC_STRING_MAX		12
#define	_SC_COLL_WEIGHTS_MAX		13
#define	_SC_EXPR_NEST_MAX		14
#define	_SC_LINE_MAX			15
#define	_SC_RE_DUP_MAX			16
#define	_SC_2_VERSION			17
#define	_SC_2_C_BIND			18
#define	_SC_2_C_DEV			19
#define	_SC_2_CHAR_TERM			20
#define	_SC_2_FORT_DEV			21
#define	_SC_2_FORT_RUN			22
#define	_SC_2_LOCALEDEF			23
#define	_SC_2_SW_DEV			24
#define	_SC_2_UPE			25
#define	_SC_STREAM_MAX			26
#define	_SC_TZNAME_MAX			27
#define	_SC_ASYNCHRONOUS_IO		28
#define	_SC_PAGESIZE			29
#define	_SC_MEMLOCK			30
#define	_SC_MEMLOCK_RANGE		31
#define	_SC_MEMORY_PROTECTION		32
#define	_SC_MESSAGE_PASSING		33
#define	_SC_PRIORITIZED_IO		34
#define	_SC_PRIORITY_SCHEDULING		35
#define	_SC_REALTIME_SIGNALS		36
#define	_SC_SEMAPHORES			37
#define	_SC_FSYNC			38
#define	_SC_SHARED_MEMORY_OBJECTS 	39
#define	_SC_SYNCHRONIZED_IO		40
#define	_SC_TIMERS			41
#define	_SC_AIO_LISTIO_MAX		42
#define	_SC_AIO_MAX			43
#define	_SC_AIO_PRIO_DELTA_MAX		44
#define	_SC_DELAYTIMER_MAX		45
#define	_SC_MQ_OPEN_MAX			46
#define	_SC_MAPPED_FILES		47
#define	_SC_RTSIG_MAX			48
#define	_SC_SEM_NSEMS_MAX		49
#define	_SC_SEM_VALUE_MAX		50
#define	_SC_SIGQUEUE_MAX		51
#define	_SC_TIMER_MAX			52
#define	_SC_NPROCESSORS_CONF		57
#define	_SC_NPROCESSORS_ONLN		58
#define	_SC_2_PBS			59
#define	_SC_2_PBS_ACCOUNTING		60
#define	_SC_2_PBS_CHECKPOINT		61
#define	_SC_2_PBS_LOCATE		62
#define	_SC_2_PBS_MESSAGE		63
#define	_SC_2_PBS_TRACK			64
#define	_SC_ADVISORY_INFO		65
#define	_SC_BARRIERS			66
#define	_SC_CLOCK_SELECTION		67
#define	_SC_CPUTIME			68
#define	_SC_FILE_LOCKING		69
#define	_SC_GETGR_R_SIZE_MAX		70
#define	_SC_GETPW_R_SIZE_MAX		71
#define	_SC_HOST_NAME_MAX		72
#define	_SC_LOGIN_NAME_MAX		73
#define	_SC_MONOTONIC_CLOCK		74
#define	_SC_MQ_PRIO_MAX			75
#define	_SC_READER_WRITER_LOCKS		76
#define	_SC_REGEXP			77
#define	_SC_SHELL			78
#define	_SC_SPAWN			79
#define	_SC_SPIN_LOCKS			80
#define	_SC_SPORADIC_SERVER		81
#define	_SC_THREAD_ATTR_STACKADDR	82
#define	_SC_THREAD_ATTR_STACKSIZE	83
#define	_SC_THREAD_CPUTIME		84
#define	_SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define	_SC_THREAD_KEYS_MAX		86
#define	_SC_THREAD_PRIO_INHERIT		87
#define	_SC_THREAD_PRIO_PROTECT		88
#define	_SC_THREAD_PRIORITY_SCHEDULING	89
#define	_SC_THREAD_PROCESS_SHARED	90
#define	_SC_THREAD_SAFE_FUNCTIONS	91
#define	_SC_THREAD_SPORADIC_SERVER	92
#define	_SC_THREAD_STACK_MIN		93
#define	_SC_THREAD_THREADS_MAX		94
#define	_SC_TIMEOUTS			95
#define	_SC_THREADS			96
#define	_SC_TRACE			97
#define	_SC_TRACE_EVENT_FILTER		98
#define	_SC_TRACE_INHERIT		99
#define	_SC_TRACE_LOG			100
#define	_SC_TTY_NAME_MAX		101
#define	_SC_TYPED_MEMORY_OBJECTS	102
#define	_SC_V6_ILP32_OFF32		103
#define	_SC_V6_ILP32_OFFBIG		104
#define	_SC_V6_LP64_OFF64		105
#define	_SC_V6_LPBIG_OFFBIG		106
#define	_SC_IPV6			118
#define	_SC_RAW_SOCKETS			119
#define	_SC_SYMLOOP_MAX			120
#define	_SC_ATEXIT_MAX			107
#define	_SC_IOV_MAX			56
#define	_SC_PAGE_SIZE			_SC_PAGESIZE
#define	_SC_XOPEN_CRYPT			108
#define	_SC_XOPEN_ENH_I18N		109
#define	_SC_XOPEN_LEGACY		110
#define	_SC_XOPEN_REALTIME		111
#define	_SC_XOPEN_REALTIME_THREADS	112
#define	_SC_XOPEN_SHM			113
#define	_SC_XOPEN_STREAMS		114
#define	_SC_XOPEN_UNIX			115
#define	_SC_XOPEN_VERSION		116
#define	_SC_XOPEN_XCU_VERSION		121
#define	_SC_XBS5_ILP32_OFF32		122
#define	_SC_XBS5_ILP32_OFFBIG		123
#define	_SC_XBS5_LP64_OFF64		124
#define	_SC_XBS5_LPBIG_OFFBIG		125
#define	_SC_SS_REPL_MAX			126
#define	_SC_TRACE_EVENT_NAME_MAX	127
#define	_SC_TRACE_NAME_MAX		128
#define	_SC_TRACE_SYS_MAX		129
#define	_SC_TRACE_USER_EVENT_MAX	130
#define	_SC_PASS_MAX			131
#define	_CS_POSIX_V6_ILP32_OFF32_CFLAGS		2
#define	_CS_POSIX_V6_ILP32_OFF32_LDFLAGS	3
#define	_CS_POSIX_V6_ILP32_OFF32_LIBS		4
#define	_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS	5
#define	_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS	6
#define	_CS_POSIX_V6_ILP32_OFFBIG_LIBS		7
#define	_CS_POSIX_V6_LP64_OFF64_CFLAGS		8
#define	_CS_POSIX_V6_LP64_OFF64_LDFLAGS		9
#define	_CS_POSIX_V6_LP64_OFF64_LIBS		10
#define	_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS	11
#define	_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS	12
#define	_CS_POSIX_V6_LPBIG_OFFBIG_LIBS		13
#define	_CS_POSIX_V6_WIDTH_RESTRICTED_ENVS	14
#define	_CS_XBS5_ILP32_OFF32_CFLAGS		20
#define	_CS_XBS5_ILP32_OFF32_LDFLAGS		21
#define	_CS_XBS5_ILP32_OFF32_LIBS		22
#define	_CS_XBS5_ILP32_OFF32_LINTFLAGS		23
#define	_CS_XBS5_ILP32_OFFBIG_CFLAGS		24
#define	_CS_XBS5_ILP32_OFFBIG_LDFLAGS		25
#define	_CS_XBS5_ILP32_OFFBIG_LIBS		26
#define	_CS_XBS5_ILP32_OFFBIG_LINTFLAGS		27
#define	_CS_XBS5_LP64_OFF64_CFLAGS		28
#define	_CS_XBS5_LP64_OFF64_LDFLAGS		29
#define	_CS_XBS5_LP64_OFF64_LIBS		30
#define	_CS_XBS5_LP64_OFF64_LINTFLAGS		31
#define	_CS_XBS5_LPBIG_OFFBIG_CFLAGS		32
#define	_CS_XBS5_LPBIG_OFFBIG_LDFLAGS		33
#define	_CS_XBS5_LPBIG_OFFBIG_LIBS		34
#define	_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS		35
#define	_CS_DARWIN_USER_DIR			65536
#define	_CS_DARWIN_USER_TEMP_DIR		65537
#define	_CS_DARWIN_USER_CACHE_DIR		65538
#define F_ULOCK         0
#define	F_LOCK          1
#define	F_TLOCK         2
#define	F_TEST          3
#define	_SYS_SELECT_H_
#define	_UUID_T
#define	SYNC_VOLUME_FULLSYNC	0x01
#define SYNC_VOLUME_WAIT	0x02
#define _DIRENT_H_
#define _SYS_DIRENT_H
#define __DARWIN_MAXNAMLEN	255
#define __DARWIN_MAXPATHLEN	1024
#define __DARWIN_STRUCT_DIRENTRY { \
	__uint64_t  d_ino;      /* file number of entry */ \
	__uint64_t  d_seekoff;  /* seek offset (optional, used by servers) */ \
	__uint16_t  d_reclen;   /* length of this record */ \
	__uint16_t  d_namlen;   /* length of string in d_name */ \
	__uint8_t   d_type;     /* file type, see below */ \
	char      d_name[__DARWIN_MAXPATHLEN]; /* entry name (up to MAXPATHLEN bytes) */ \
}
#define	d_fileno	d_ino
#define	MAXNAMLEN	__DARWIN_MAXNAMLEN
#define	DT_UNKNOWN	 0
#define	DT_FIFO		 1
#define	DT_CHR		 2
#define	DT_DIR		 4
#define	DT_BLK		 6
#define	DT_REG		 8
#define	DT_LNK		10
#define	DT_SOCK		12
#define	DT_WHT		14
#define	IFTODT(mode)	(((mode) & 0170000) >> 12)
#define	DTTOIF(dirtype)	((dirtype) << 12)
#define	DIRBLKSIZ	1024
#define DTF_HIDEW	0x0001
#define DTF_NODUP	0x0002
#define DTF_REWIND	0x0004
#define __DTF_READALL	0x0008
#  define NLENGTH(dirent) ((int)strlen((dirent)->d_name))
#  define DIR_OPT "DIRENT"
#  define NLENGTH(dirent) ((dirent)->d_namlen)
#    define DIR_OPT "SYSDIR"
#      define DIR_OPT "SYSNDIR"
#        define DIR_OPT "NDIR"
#        define NO_DIR
#        define DIR_OPT "NO_DIR"
#    define TIME_OPT "UTIME"
#      define TIME_OPT "SYS_UTIME"
#      define TIME_OPT ""
#  define TIME_OPT "NO_UTIME"
#  define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#  define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#  define  O_BINARY  0
#define	_SYS_FILE_H_
#define	_SYS_QUEUE_H_
#define	QMD_TRACE_ELEM(elem)
#define	QMD_TRACE_HEAD(head)
#define	TRACEBUF
#define	TRASHIT(x)
#define	SLIST_HEAD(name, type)						\
struct name {								\
	struct type *slh_first;	/* first element */			\
}
#define	SLIST_HEAD_INITIALIZER(head)					\
	{ NULL }
#define	SLIST_ENTRY(type)						\
struct {								\
	struct type *sle_next;	/* next element */			\
}
#define	SLIST_EMPTY(head)	((head)->slh_first == NULL)
#define	SLIST_FIRST(head)	((head)->slh_first)
#define	SLIST_FOREACH(var, head, field)					\
	for ((var) = SLIST_FIRST((head));				\
	    (var);							\
	    (var) = SLIST_NEXT((var), field))
#define	SLIST_FOREACH_SAFE(var, head, field, tvar)			\
	for ((var) = SLIST_FIRST((head));				\
	    (var) && ((tvar) = SLIST_NEXT((var), field), 1);		\
	    (var) = (tvar))
#define	SLIST_FOREACH_PREVPTR(var, varp, head, field)			\
	for ((varp) = &SLIST_FIRST((head));				\
	    ((var) = *(varp)) != NULL;					\
	    (varp) = &SLIST_NEXT((var), field))
#define	SLIST_INIT(head) do {						\
	SLIST_FIRST((head)) = NULL;					\
} while (0)
#define	SLIST_INSERT_AFTER(slistelm, elm, field) do {			\
	SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field);	\
	SLIST_NEXT((slistelm), field) = (elm);				\
} while (0)
#define	SLIST_INSERT_HEAD(head, elm, field) do {			\
	SLIST_NEXT((elm), field) = SLIST_FIRST((head));			\
	SLIST_FIRST((head)) = (elm);					\
} while (0)
#define	SLIST_NEXT(elm, field)	((elm)->field.sle_next)
#define	SLIST_REMOVE(head, elm, type, field) do {			\
	if (SLIST_FIRST((head)) == (elm)) {				\
		SLIST_REMOVE_HEAD((head), field);			\
	}								\
	else {								\
		struct type *curelm = SLIST_FIRST((head));		\
		while (SLIST_NEXT(curelm, field) != (elm))		\
			curelm = SLIST_NEXT(curelm, field);		\
		SLIST_REMOVE_AFTER(curelm, field);			\
	}								\
	TRASHIT((elm)->field.sle_next);					\
} while (0)
#define SLIST_REMOVE_AFTER(elm, field) do {				\
	SLIST_NEXT(elm, field) =					\
	    SLIST_NEXT(SLIST_NEXT(elm, field), field);			\
} while (0)
#define	SLIST_REMOVE_HEAD(head, field) do {				\
	SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field);	\
} while (0)
#define	STAILQ_HEAD(name, type)						\
struct name {								\
	struct type *stqh_first;/* first element */			\
	struct type **stqh_last;/* addr of last next element */		\
}
#define	STAILQ_HEAD_INITIALIZER(head)					\
	{ NULL, &(head).stqh_first }
#define	STAILQ_ENTRY(type)						\
struct {								\
	struct type *stqe_next;	/* next element */			\
}
#define	STAILQ_CONCAT(head1, head2) do {				\
	if (!STAILQ_EMPTY((head2))) {					\
		*(head1)->stqh_last = (head2)->stqh_first;		\
		(head1)->stqh_last = (head2)->stqh_last;		\
		STAILQ_INIT((head2));					\
	}								\
} while (0)
#define	STAILQ_EMPTY(head)	((head)->stqh_first == NULL)
#define	STAILQ_FIRST(head)	((head)->stqh_first)
#define	STAILQ_FOREACH(var, head, field)				\
	for((var) = STAILQ_FIRST((head));				\
	   (var);							\
	   (var) = STAILQ_NEXT((var), field))
#define	STAILQ_FOREACH_SAFE(var, head, field, tvar)			\
	for ((var) = STAILQ_FIRST((head));				\
	    (var) && ((tvar) = STAILQ_NEXT((var), field), 1);		\
	    (var) = (tvar))
#define	STAILQ_INIT(head) do {						\
	STAILQ_FIRST((head)) = NULL;					\
	(head)->stqh_last = &STAILQ_FIRST((head));			\
} while (0)
#define	STAILQ_INSERT_AFTER(head, tqelm, elm, field) do {		\
	if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL)\
		(head)->stqh_last = &STAILQ_NEXT((elm), field);		\
	STAILQ_NEXT((tqelm), field) = (elm);				\
} while (0)
#define	STAILQ_INSERT_HEAD(head, elm, field) do {			\
	if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL)	\
		(head)->stqh_last = &STAILQ_NEXT((elm), field);		\
	STAILQ_FIRST((head)) = (elm);					\
} while (0)
#define	STAILQ_INSERT_TAIL(head, elm, field) do {			\
	STAILQ_NEXT((elm), field) = NULL;				\
	*(head)->stqh_last = (elm);					\
	(head)->stqh_last = &STAILQ_NEXT((elm), field);			\
} while (0)
#define	STAILQ_LAST(head, type, field)					\
	(STAILQ_EMPTY((head)) ?						\
		NULL :							\
	        ((struct type *)(void *)				\
		((char *)((head)->stqh_last) - __offsetof(struct type, field))))
#define	STAILQ_NEXT(elm, field)	((elm)->field.stqe_next)
#define	STAILQ_REMOVE(head, elm, type, field) do {			\
	if (STAILQ_FIRST((head)) == (elm)) {				\
		STAILQ_REMOVE_HEAD((head), field);			\
	}								\
	else {								\
		struct type *curelm = STAILQ_FIRST((head));		\
		while (STAILQ_NEXT(curelm, field) != (elm))		\
			curelm = STAILQ_NEXT(curelm, field);		\
		STAILQ_REMOVE_AFTER(head, curelm, field);		\
	}								\
	TRASHIT((elm)->field.stqe_next);				\
} while (0)
#define	STAILQ_REMOVE_HEAD(head, field) do {				\
	if ((STAILQ_FIRST((head)) =					\
	     STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL)		\
		(head)->stqh_last = &STAILQ_FIRST((head));		\
} while (0)
#define STAILQ_REMOVE_HEAD_UNTIL(head, elm, field) do {                 \
       if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) \
               (head)->stqh_last = &STAILQ_FIRST((head));              \
} while (0)
#define STAILQ_REMOVE_AFTER(head, elm, field) do {			\
	if ((STAILQ_NEXT(elm, field) =					\
	     STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL)	\
		(head)->stqh_last = &STAILQ_NEXT((elm), field);		\
} while (0)
#define STAILQ_SWAP(head1, head2, type) do {				\
	struct type *swap_first = STAILQ_FIRST(head1);			\
	struct type **swap_last = (head1)->stqh_last;			\
	STAILQ_FIRST(head1) = STAILQ_FIRST(head2);			\
	(head1)->stqh_last = (head2)->stqh_last;			\
	STAILQ_FIRST(head2) = swap_first;				\
	(head2)->stqh_last = swap_last;					\
	if (STAILQ_EMPTY(head1))					\
		(head1)->stqh_last = &STAILQ_FIRST(head1);		\
	if (STAILQ_EMPTY(head2))					\
		(head2)->stqh_last = &STAILQ_FIRST(head2);		\
} while (0)
#define	LIST_HEAD(name, type)						\
struct name {								\
	struct type *lh_first;	/* first element */			\
}
#define	LIST_HEAD_INITIALIZER(head)					\
	{ NULL }
#define	LIST_ENTRY(type)						\
struct {								\
	struct type *le_next;	/* next element */			\
	struct type **le_prev;	/* address of previous next element */	\
}
#define	QMD_LIST_CHECK_HEAD(head, field)
#define	QMD_LIST_CHECK_NEXT(elm, field)
#define	QMD_LIST_CHECK_PREV(elm, field)
#define	LIST_EMPTY(head)	((head)->lh_first == NULL)
#define	LIST_FIRST(head)	((head)->lh_first)
#define	LIST_FOREACH(var, head, field)					\
	for ((var) = LIST_FIRST((head));				\
	    (var);							\
	    (var) = LIST_NEXT((var), field))
#define	LIST_FOREACH_SAFE(var, head, field, tvar)			\
	for ((var) = LIST_FIRST((head));				\
	    (var) && ((tvar) = LIST_NEXT((var), field), 1);		\
	    (var) = (tvar))
#define	LIST_INIT(head) do {						\
	LIST_FIRST((head)) = NULL;					\
} while (0)
#define	LIST_INSERT_AFTER(listelm, elm, field) do {			\
	QMD_LIST_CHECK_NEXT(listelm, field);				\
	if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL)\
		LIST_NEXT((listelm), field)->field.le_prev =		\
		    &LIST_NEXT((elm), field);				\
	LIST_NEXT((listelm), field) = (elm);				\
	(elm)->field.le_prev = &LIST_NEXT((listelm), field);		\
} while (0)
#define	LIST_INSERT_BEFORE(listelm, elm, field) do {			\
	QMD_LIST_CHECK_PREV(listelm, field);				\
	(elm)->field.le_prev = (listelm)->field.le_prev;		\
	LIST_NEXT((elm), field) = (listelm);				\
	*(listelm)->field.le_prev = (elm);				\
	(listelm)->field.le_prev = &LIST_NEXT((elm), field);		\
} while (0)
#define	LIST_INSERT_HEAD(head, elm, field) do {				\
	QMD_LIST_CHECK_HEAD((head), field);				\
	if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL)	\
		LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field);\
	LIST_FIRST((head)) = (elm);					\
	(elm)->field.le_prev = &LIST_FIRST((head));			\
} while (0)
#define	LIST_NEXT(elm, field)	((elm)->field.le_next)
#define	LIST_REMOVE(elm, field) do {					\
	QMD_LIST_CHECK_NEXT(elm, field);				\
	QMD_LIST_CHECK_PREV(elm, field);				\
	if (LIST_NEXT((elm), field) != NULL)				\
		LIST_NEXT((elm), field)->field.le_prev = 		\
		    (elm)->field.le_prev;				\
	*(elm)->field.le_prev = LIST_NEXT((elm), field);		\
	TRASHIT((elm)->field.le_next);					\
	TRASHIT((elm)->field.le_prev);					\
} while (0)
#define LIST_SWAP(head1, head2, type, field) do {			\
	struct type *swap_tmp = LIST_FIRST((head1));			\
	LIST_FIRST((head1)) = LIST_FIRST((head2));			\
	LIST_FIRST((head2)) = swap_tmp;					\
	if ((swap_tmp = LIST_FIRST((head1))) != NULL)			\
		swap_tmp->field.le_prev = &LIST_FIRST((head1));		\
	if ((swap_tmp = LIST_FIRST((head2))) != NULL)			\
		swap_tmp->field.le_prev = &LIST_FIRST((head2));		\
} while (0)
#define	TAILQ_HEAD(name, type)						\
struct name {								\
	struct type *tqh_first;	/* first element */			\
	struct type **tqh_last;	/* addr of last next element */		\
	TRACEBUF							\
}
#define	TAILQ_HEAD_INITIALIZER(head)					\
	{ NULL, &(head).tqh_first }
#define	TAILQ_ENTRY(type)						\
struct {								\
	struct type *tqe_next;	/* next element */			\
	struct type **tqe_prev;	/* address of previous next element */	\
	TRACEBUF							\
}
#define	TAILQ_CONCAT(head1, head2, field) do {				\
	if (!TAILQ_EMPTY(head2)) {					\
		*(head1)->tqh_last = (head2)->tqh_first;		\
		(head2)->tqh_first->field.tqe_prev = (head1)->tqh_last;	\
		(head1)->tqh_last = (head2)->tqh_last;			\
		TAILQ_INIT((head2));					\
		QMD_TRACE_HEAD(head1);					\
		QMD_TRACE_HEAD(head2);					\
	}								\
} while (0)
#define	TAILQ_EMPTY(head)	((head)->tqh_first == NULL)
#define	TAILQ_FIRST(head)	((head)->tqh_first)
#define	TAILQ_FOREACH(var, head, field)					\
	for ((var) = TAILQ_FIRST((head));				\
	    (var);							\
	    (var) = TAILQ_NEXT((var), field))
#define	TAILQ_FOREACH_SAFE(var, head, field, tvar)			\
	for ((var) = TAILQ_FIRST((head));				\
	    (var) && ((tvar) = TAILQ_NEXT((var), field), 1);		\
	    (var) = (tvar))
#define	TAILQ_FOREACH_REVERSE(var, head, headname, field)		\
	for ((var) = TAILQ_LAST((head), headname);			\
	    (var);							\
	    (var) = TAILQ_PREV((var), headname, field))
#define	TAILQ_FOREACH_REVERSE_SAFE(var, head, headname, field, tvar)	\
	for ((var) = TAILQ_LAST((head), headname);			\
	    (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1);	\
	    (var) = (tvar))
#define	TAILQ_INIT(head) do {						\
	TAILQ_FIRST((head)) = NULL;					\
	(head)->tqh_last = &TAILQ_FIRST((head));			\
	QMD_TRACE_HEAD(head);						\
} while (0)
#define	TAILQ_INSERT_AFTER(head, listelm, elm, field) do {		\
	if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL)\
		TAILQ_NEXT((elm), field)->field.tqe_prev = 		\
		    &TAILQ_NEXT((elm), field);				\
	else {								\
		(head)->tqh_last = &TAILQ_NEXT((elm), field);		\
		QMD_TRACE_HEAD(head);					\
	}								\
	TAILQ_NEXT((listelm), field) = (elm);				\
	(elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field);		\
	QMD_TRACE_ELEM(&(elm)->field);					\
	QMD_TRACE_ELEM(&listelm->field);				\
} while (0)
#define	TAILQ_INSERT_BEFORE(listelm, elm, field) do {			\
	(elm)->field.tqe_prev = (listelm)->field.tqe_prev;		\
	TAILQ_NEXT((elm), field) = (listelm);				\
	*(listelm)->field.tqe_prev = (elm);				\
	(listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field);		\
	QMD_TRACE_ELEM(&(elm)->field);					\
	QMD_TRACE_ELEM(&listelm->field);				\
} while (0)
#define	TAILQ_INSERT_HEAD(head, elm, field) do {			\
	if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL)	\
		TAILQ_FIRST((head))->field.tqe_prev =			\
		    &TAILQ_NEXT((elm), field);				\
	else								\
		(head)->tqh_last = &TAILQ_NEXT((elm), field);		\
	TAILQ_FIRST((head)) = (elm);					\
	(elm)->field.tqe_prev = &TAILQ_FIRST((head));			\
	QMD_TRACE_HEAD(head);						\
	QMD_TRACE_ELEM(&(elm)->field);					\
} while (0)
#define	TAILQ_INSERT_TAIL(head, elm, field) do {			\
	TAILQ_NEXT((elm), field) = NULL;				\
	(elm)->field.tqe_prev = (head)->tqh_last;			\
	*(head)->tqh_last = (elm);					\
	(head)->tqh_last = &TAILQ_NEXT((elm), field);			\
	QMD_TRACE_HEAD(head);						\
	QMD_TRACE_ELEM(&(elm)->field);					\
} while (0)
#define	TAILQ_LAST(head, headname)					\
	(*(((struct headname *)((head)->tqh_last))->tqh_last))
#define	TAILQ_NEXT(elm, field) ((elm)->field.tqe_next)
#define	TAILQ_PREV(elm, headname, field)				\
	(*(((struct headname *)((elm)->field.tqe_prev))->tqh_last))
#define	TAILQ_REMOVE(head, elm, field) do {				\
	if ((TAILQ_NEXT((elm), field)) != NULL)				\
		TAILQ_NEXT((elm), field)->field.tqe_prev = 		\
		    (elm)->field.tqe_prev;				\
	else {								\
		(head)->tqh_last = (elm)->field.tqe_prev;		\
		QMD_TRACE_HEAD(head);					\
	}								\
	*(elm)->field.tqe_prev = TAILQ_NEXT((elm), field);		\
	TRASHIT((elm)->field.tqe_next);					\
	TRASHIT((elm)->field.tqe_prev);					\
	QMD_TRACE_ELEM(&(elm)->field);					\
} while (0)
#define TAILQ_SWAP(head1, head2, type, field) do {                      \
	struct type *swap_first = (head1)->tqh_first;                   \
	struct type **swap_last = (head1)->tqh_last;                    \
	(head1)->tqh_first = (head2)->tqh_first;                        \
	(head1)->tqh_last = (head2)->tqh_last;                          \
	(head2)->tqh_first = swap_first;                                \
	(head2)->tqh_last = swap_last;                                  \
	if ((swap_first = (head1)->tqh_first) != NULL)                  \
		swap_first->field.tqe_prev = &(head1)->tqh_first;       \
	else                                                            \
		(head1)->tqh_last = &(head1)->tqh_first;                \
	if ((swap_first = (head2)->tqh_first) != NULL)                  \
		swap_first->field.tqe_prev = &(head2)->tqh_first;       \
	else                                                            \
		(head2)->tqh_last = &(head2)->tqh_first;                \
} while (0)
#define CIRCLEQ_HEAD(name, type)					\
struct name {								\
	struct type *cqh_first;		/* first element */		\
	struct type *cqh_last;		/* last element */		\
}
#define CIRCLEQ_ENTRY(type)						\
struct {								\
	struct type *cqe_next;		/* next element */		\
	struct type *cqe_prev;		/* previous element */		\
}
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define CIRCLEQ_FOREACH(var, head, field)				\
	for((var) = (head)->cqh_first;					\
	    (var) != (void *)(head);					\
	    (var) = (var)->field.cqe_next)
#define	CIRCLEQ_INIT(head) do {						\
	(head)->cqh_first = (void *)(head);				\
	(head)->cqh_last = (void *)(head);				\
} while (0)
#define CIRCLEQ_INSERT_AFTER(head, listelm, elm, field) do {		\
	(elm)->field.cqe_next = (listelm)->field.cqe_next;		\
	(elm)->field.cqe_prev = (listelm);				\
	if ((listelm)->field.cqe_next == (void *)(head))		\
		(head)->cqh_last = (elm);				\
	else								\
		(listelm)->field.cqe_next->field.cqe_prev = (elm);	\
	(listelm)->field.cqe_next = (elm);				\
} while (0)
#define CIRCLEQ_INSERT_BEFORE(head, listelm, elm, field) do {		\
	(elm)->field.cqe_next = (listelm);				\
	(elm)->field.cqe_prev = (listelm)->field.cqe_prev;		\
	if ((listelm)->field.cqe_prev == (void *)(head))		\
		(head)->cqh_first = (elm);				\
	else								\
		(listelm)->field.cqe_prev->field.cqe_next = (elm);	\
	(listelm)->field.cqe_prev = (elm);				\
} while (0)
#define CIRCLEQ_INSERT_HEAD(head, elm, field) do {			\
	(elm)->field.cqe_next = (head)->cqh_first;			\
	(elm)->field.cqe_prev = (void *)(head);				\
	if ((head)->cqh_last == (void *)(head))				\
		(head)->cqh_last = (elm);				\
	else								\
		(head)->cqh_first->field.cqe_prev = (elm);		\
	(head)->cqh_first = (elm);					\
} while (0)
#define CIRCLEQ_INSERT_TAIL(head, elm, field) do {			\
	(elm)->field.cqe_next = (void *)(head);				\
	(elm)->field.cqe_prev = (head)->cqh_last;			\
	if ((head)->cqh_first == (void *)(head))			\
		(head)->cqh_first = (elm);				\
	else								\
		(head)->cqh_last->field.cqe_next = (elm);		\
	(head)->cqh_last = (elm);					\
} while (0)
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define	CIRCLEQ_REMOVE(head, elm, field) do {				\
	if ((elm)->field.cqe_next == (void *)(head))			\
		(head)->cqh_last = (elm)->field.cqe_prev;		\
	else								\
		(elm)->field.cqe_next->field.cqe_prev =			\
		    (elm)->field.cqe_prev;				\
	if ((elm)->field.cqe_prev == (void *)(head))			\
		(head)->cqh_first = (elm)->field.cqe_next;		\
	else								\
		(elm)->field.cqe_prev->field.cqe_next =			\
		    (elm)->field.cqe_next;				\
} while (0)
#define	_KAUTH_CRED_T
#    define O_CREAT FCREAT
#    define O_EXCL FEXCL
#  define S_IRUSR 0400
#  define S_IWUSR 0200
#define RW_USER (S_IRUSR | S_IWUSR)
#  define MAX_PATH_LEN   1024
#  define SEEK_END 2
#  define PART_SEP "-"
#  define PART_SEP "."
#define strequ(s1, s2) (strcmp((s1),(s2)) == 0)
#  define OF(args)  ()
#  define strchr            index
#  define strrchr           rindex
#  define memcpy(d, s, n)   bcopy((s), (d), (n))
#  define memcmp(s1, s2, n) bcmp((s1), (s2), (n))
#  define memzero(s, n)     bzero((s), (n))
#    define INBUFSIZ  0x2000
#    define OUTBUFSIZ   8192
#    define DIST_BUFSIZE 0x2000
#  define EXTERN(type, array)  extern type * near array
#  define DECLARE(type, array, size)  type * near array
#  define FREE(array) {if (array != NULL) fcfree(array), array=NULL;}
#  define tab_prefix0 prev
#  define head tab_prefix1
#  define Trace(x) fprintf x
#  define Tracev(x) {if (verbose) fprintf x ;}
#  define Tracevv(x) {if (verbose>1) fprintf x ;}
#  define Tracec(c,x) {if (verbose && (c)) fprintf x ;}
#  define Tracecv(c,x) {if (verbose>1 && (c)) fprintf x ;}
#define slide window
#define wp outcnt
#define flush_output(w) (wp=(w),flush_window())
#  define NEXTBYTE() \
     (decrypt ? (cc = get_byte(), zdecode(cc), cc) : get_byte())
#  define NEXTBYTE()  (uch)get_byte()
#define NEEDBITS(n) {while(k<(n)){b|=((ulg)NEXTBYTE())<<k;k+=8;}}
#define DUMPBITS(n) {b>>=(n);k-=(n);}
#define BMAX 16
#define N_MAX 288
#define __ERRNO_H__
#define ENOENT e$fntf
#define __FCNTL_H__
#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR   2
#define O_BINARY 0
#define O_EXCL   0
#define O_NDELAY 0
#define O_CREAT  0
#define O_TRUNC  0
#define __STDLIB_H__
#define __SYS_STAT_H__
#define	_IFMT		0170000
#define	_IFREG		0100000
#define	_IFDIR		0040000
#  define _IFCHR	0020000
#  define _IFBLK	0060000
#  define _IFLNK	0120000
#  define _IFSOCK	0140000
#  define _IFIFO	0010000
#define	S_IREAD		0000400
#define	S_IWRITE 	0000200
#define	S_IEXEC		0000100
#define	S_ENFMT 	0002000
#define	S_IFMT		_IFMT
#define	S_IFREG		_IFREG
#define	S_IFDIR		_IFDIR
#  define S_IFCHR	_IFCHR
#  define S_IFBLK	_IFBLK
#  define S_IFLNK	_IFLNK
#  define S_IFSOCK	_IFSOCK
#  define S_IFIFO	_IFIFO
#define	S_IRWXU 	0000700
#define	S_ISREG(m)	(((m) & _IFMT) == _IFREG)
#define	S_ISDIR(m)	(((m) & _IFMT) == _IFDIR)
#  define S_ISBLK(m)	(((m) & _IFMT) == _IFBLK)
#  define S_ISCHR(m)	(((m) & _IFMT) == _IFCHR)
#  define S_ISFIFO(m)	(((m) & _IFMT) == _IFIFO)
#define __SYS_TYPES_H__
#define MAGIC1    'S'
#define MAGIC2    26
#define MAX_DIST  16384
#  define MSDOS
#  define OS2
#    define near
#    define MAXSEG_64K
#      define NO_OFF_T
#        define DIRENT
#        define NO_UTIME
#      define HAVE_SYS_UTIME_H
#      define NO_UTIME_H
#  define PATH_SEP2 '\\'
#  define PATH_SEP3 ':'
#  define MAX_PATH_LEN  128
#  define NO_MULTIPLE_DOTS
#  define MAX_EXT_CHARS 3
#  define Z_SUFFIX "z"
#  define NO_CHOWN
#  define PROTO
#  define STDC_HEADERS
#  define NO_SIZE_CHECK
#  define casemap(c) tolow(c)
#  define OS_CODE  0x00
#  define SET_BINARY_MODE(fd) setmode(fd, O_BINARY)
#  define MAX_PATH_LEN  260
#    define NO_MULTIPLE_DOTS
#    define MAX_EXT_CHARS 3
#    define Z_SUFFIX "z"
#    define casemap(c) tolow(c)
#  define OS_CODE  0x06
#    define HAVE_SYS_UTIME_H
#    define NO_UTIME_H
#    define near _near
#    define DIRENT
#    define EXPAND(argc,argv) \
       {_response(&argc, &argv); _wildcard(&argc, &argv);}
#    define NO_DIR
#    define EXPAND(argc,argv) \
       {response_expand(&argc, &argv);}
#  define HAVE_SYS_UTIME_H
#  define NO_UTIME_H
#  define OS_CODE  0x0b
#    define DYN_ALLOC
#    define fcalloc(nitems,itemsize) halloc((long)(nitems),(itemsize))
#    define fcfree(ptr) hfree(ptr)
#    define fcalloc(items,size) calloc((items),(size))
#  define PATH_SEP ']'
#  define PATH_SEP2 ':'
#  define SUFFIX_SEP ';'
#  define Z_SUFFIX "-gz"
#  define RECORD_IO 1
#  define OS_CODE  0x02
#  define OPTIONS_VAR "GZIP_OPT"
#  define NO_UTIME
#  define EXPAND(argc,argv) vms_expand_args(&argc,&argv);
#  define unlink delete
#    define NO_FCNTL_H
#  define OS_CODE  0x01
#    define HAVE_UNISTD_H
#    define NO_STDIN_FSTAT
#    define SYSDIR
#    define NO_SYMLINK
#    define NO_CHOWN
#    define direct dirent
#    define EXPAND(argc,argv) _expand_args(&argc,&argv);
#    define STDC_HEADERS
#  define OS_CODE  0x05
#    define PATH_SEP2 '\\'
#    define PATH_SEP3 ':'
#    define MAX_PATH_LEN  128
#  define PATH_SEP ':'
#  define DYN_ALLOC
#  define NO_STDIN_FSTAT
#  define chmod(file, mode) (0)
#  define OPEN(name, flags, mode) open(name, flags)
#  define OS_CODE  0x07
#    define isatty(fd) ((fd) <= 2)
#  define PATH_SEP '>'
#  define NO_MEMORY_H
#  define NO_CHOWN
#  define NO_STDIN_FSTAT
#  define NO_SIZE_CHECK
#  define NO_SYMLINK
#  define RECORD_IO  1
#  define casemap(c)  tolow(c)
#  define put_char(c) put_byte((c) & 0x7F)
#  define get_char(c) ascii2pascii(get_byte())
#  define OS_CODE  0x0F
#  define NOMEMCPY /* problem with overlapping copies */
#  define OS_CODE  0x0a
#  define MAX_SUFFIX  MAX_EXT_CHARS
#    define MAKE_LEGAL_NAME(name)   make_simple_name(name)
#define MAX_BITS 15
#define MAX_BL_BITS 7
#define LENGTH_CODES 29
#define LITERALS  256
#define END_BLOCK 256
#define L_CODES (LITERALS+1+LENGTH_CODES)
#define D_CODES   30
#define BL_CODES  19
#define STORED_BLOCK 0
#define STATIC_TREES 1
#define DYN_TREES    2
#    define LIT_BUFSIZE  0x2000
#    define LIT_BUFSIZE  0x4000
#    define LIT_BUFSIZE  0x8000
#  define DIST_BUFSIZE  LIT_BUFSIZE
#define REP_3_6      16
#define REPZ_3_10    17
#define REPZ_11_138  18
#define Freq fc.freq
#define Code fc.code
#define Dad  dl.dad
#define Len  dl.len
#define HEAP_SIZE (2*L_CODES+1)
#define l_buf inbuf
#  define send_code(c, tree) send_bits(tree[c].Code, tree[c].Len)
#  define send_code(c, tree) \
     { if (verbose>1) fprintf(stderr,"\ncd %3d ",(c)); \
       send_bits(tree[c].Code, tree[c].Len); }
#define d_code(dist) \
   ((dist) < 256 ? dist_code[dist] : dist_code[256+((dist)>>7)])
#define MAX(a,b) (a >= b ? a : b)
#define SMALLEST 1
#define pqremove(tree, top) \
{\
    top = heap[SMALLEST]; \
    heap[SMALLEST] = heap[heap_len--]; \
    pqdownheap(tree, SMALLEST); \
}
#define smaller(tree, n, m) \
   (tree[n].Freq < tree[m].Freq || \
   (tree[n].Freq == tree[m].Freq && depth[n] <= depth[m]))
#define DICBIT    13
#define DICSIZ ((unsigned) 1 << DICBIT)
#  define CHAR_BIT 8
#  define UCHAR_MAX 255
#define BITBUFSIZ (CHAR_BIT * 2 * sizeof(char))
#define MAXMATCH 256
#define THRESHOLD  3
#define NC (UCHAR_MAX + MAXMATCH + 2 - THRESHOLD)
#define CBIT 9
#define CODE_BIT  16
#define NP (DICBIT + 1)
#define NT (CODE_BIT + 3)
#define PBIT 4
#define TBIT 5
# define NPT NT
# define NPT NP
#define left  prev
#define right head
#define c_len outbuf
#define c_table d_buf
#define	NULL __DARWIN_NULL
#define MAXCODE(n)	(1L << (n))
#	define	REGISTERS	2
#define	REG1
#define	REG2
#define	REG3
#define	REG4
#define	REG5
#define	REG6
#define	REG7
#define	REG8
#define	REG9
#define	REG10
#define	REG11
#define	REG12
#define	REG13
#define	REG14
#define	REG15
#define	REG16
#	define	REG1	register
#	define	REG2	register
#	define	REG3	register
#	define	REG4	register
#	define	REG5	register
#	define	REG6	register
#	define	REG7	register
#	define	REG8	register
#	define	REG9	register
#	define	REG10	register
#	define	REG11	register
#	define	REG12	register
#	define	REG13	register
#	define	REG14	register
#	define	REG15	register
#	define	REG16	register
#	define	BYTEORDER	0000
#	define	NOALLIGN	0
#  define input(b,o,c,n,m){ \
     (c) = (*(long *)(&(b)[(o)>>3])>>((o)&0x7))&(m); \
     (o) += (n); \
   }
#  define input(b,o,c,n,m){ \
     REG1 char_type *p = &(b)[(o)>>3]; \
     (c) = ((((long)(p[0]))|((long)(p[1])<<8)| \
     ((long)(p[2])<<16))>>((o)&0x7))&(m); \
     (o) += (n); \
   }
#  define tab_prefixof(i) tab_prefix[i]
#  define clear_tab_prefixof()	memzero(tab_prefix, 256);
#  define tab_prefixof(i) tab_prefix[(i)&1][(i)>>1]
#  define clear_tab_prefixof()	\
      memzero(tab_prefix0, 128), \
      memzero(tab_prefix1, 128);
#define de_stack        ((char_type *)(&d_buf[DIST_BUFSIZE-1]))
#define tab_suffixof(i) tab_suffix[i]
#define MIN(a,b) ((a) <= (b) ? (a) : (b))
#define MAX_BITLEN 25
#define LITERALS 256
#define MAX_PEEK 12
#define prefix_len outbuf
#define look_bits(code,bits,mask) \
{ \
  while (valid < (bits)) bitbuf = (bitbuf<<8) | (ulg)get_byte(), valid += 8; \
  code = (bitbuf >> (valid-(bits))) & (mask); \
}
#define skip_bits(bits)  (valid -= (bits))
#define clear_bitbuf() (valid = 0, bitbuf = 0)
#define LOCSIG 0x04034b50L
#define LOCFLG 6
#define  CRPFLG 1
#define  EXTFLG 8
#define LOCHOW 8
#define LOCTIM 10
#define LOCCRC 14
#define LOCSIZ 18
#define LOCLEN 22
#define LOCFIL 26
#define LOCEXT 28
#define LOCHDR 30
#define EXTHDR 16
#define SEPARATOR	" \t"
