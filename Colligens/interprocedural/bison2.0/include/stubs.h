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
typedef struct {} jmp_buf;
typedef struct {} sigjmp_buf;
typedef struct {} bitset_windex;
typedef struct {} bitset_word;
typedef struct {} bitset_bindex;
typedef struct {} bitset;
typedef struct {} bitset_attrs;
typedef struct {} BITSET_WORD_BITS;
typedef struct {} BITSET_MSB;
typedef struct {} ptrdiff_t;
typedef struct {} argmatch_exit_fn;
typedef struct {} BITSET_BINDEX_MAX;
typedef struct {} bitset_iterator;
typedef struct {} bitsetv;
typedef struct {} BITSET_SIZE_MAX;
typedef struct {} ebitset_elt;
typedef struct {} ebitset_elts;
typedef struct {} EBITSET_ELT_BITS;
typedef struct {} clock_t;
typedef struct {} time_t;
typedef struct {} __darwin_rune_t;
typedef struct {} _RuneEntry;
typedef struct {} _RuneRange;
typedef struct {} _RuneCharClass;
typedef struct {} _RuneLocale;
typedef struct {} __darwin_ct_rune_t;
typedef struct {} wint_t;
typedef struct {} wctype_t;
typedef struct {} mbstate_t;
typedef struct {} __darwin_va_list;
typedef struct {} SIZE_MAX;
typedef struct {} gid_t;
typedef struct {} useconds_t;
typedef struct {} __int32_t;
typedef struct {} __DARWIN_NFDBITS;
typedef struct {} fd_set;
typedef struct {} uuid_t;
typedef struct {} _IO_FILE;
typedef struct {} Hash_table;
typedef struct {} Hash_processor;
typedef struct {} Hash_tuning;
typedef struct {} Hash_hasher;
typedef struct {} Hash_comparator;
typedef struct {} Hash_data_freer;
typedef struct {} lbitset_elt;
typedef struct {} LBITSET_ELT_BITS;
typedef struct {} BITSET_WINDEX_MAX;
typedef struct {} LBITSET_WORD_BITS;
typedef struct {} wctrans_t;
typedef struct {} uintmax_t;
typedef struct {} pthread_t;
typedef struct {} stack_t;
typedef struct {} timevar_id_t;
typedef struct {} assoc;
typedef struct {} uniqstr;
typedef struct {} boundary;
typedef struct {} location;
typedef struct {} symbol_number;
typedef struct {} symbol;
typedef struct {} symbol_class;
typedef struct {} item_number;
typedef struct {} rule_number;
typedef struct {} rule;
typedef struct {} rule_filter;
typedef struct {} symbol_list;
typedef struct {} YY_DECL;
typedef struct {} merger_list;
typedef struct {} bool;
typedef struct {} state_number;
typedef struct {} state;
typedef struct {} transitions;
typedef struct {} errs;
typedef struct {} reductions;
typedef struct {} goto_number;
typedef struct {} rule_list;
typedef struct {} relation;
typedef struct {} relation_node;
typedef struct {} goto_list;
typedef struct {} GOTO_NUMBER_MAXIMUM;
typedef struct {} END_NODE;
typedef struct {} state_list;
typedef struct {} base_number;
typedef struct {} muscle_entry;
typedef struct {} YYLTYPE;
typedef struct {} YYSTYPE;
typedef struct {} yysigned_char;
typedef struct {} node;
typedef struct {} edge;
typedef struct {} graph;
typedef struct {} relation_nodes;
typedef struct {} yy_size_t;
typedef struct {} YY_BUFFER_STATE;
typedef struct {} yy_state_type;
typedef struct {} STRING_FINISH;
typedef struct {} uintptr_t;
typedef struct {} intmax_t;
typedef struct {} imaxdiv_t;
typedef struct {} action_number;
typedef struct {} vector_number;
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
#define _STDARG_H
#define _ANSI_STDARG_H_
#define __GNUC_VA_LIST
#define va_start(v,l)	__builtin_va_start(v,l)
#define va_end(v)	__builtin_va_end(v)
#define va_arg(v,l)	__builtin_va_arg(v,l)
#define va_copy(d,s)	__builtin_va_copy(d,s)
#define __va_copy(d,s)	__builtin_va_copy(d,s)
#define _VA_LIST_
#define _VA_LIST_DEFINED
#define _VA_LIST_T_H
#define __va_list__
#define _BSD_SETJMP_H
#define _JBLEN ((9 * 2) + 3 + 16)
#define yyparse b4_prefix[]parse
#define yylex   b4_prefix[]lex
#define yyerror b4_prefix[]error
#define yylval  b4_prefix[]lval
#define yychar  b4_prefix[]char
#define yydebug b4_prefix[]debug
#define yynerrs b4_prefix[]nerrs
#define yylloc b4_prefix[]lloc])
# define YYDEBUG ]b4_debug[
# define YYERROR_VERBOSE 1
# define YYERROR_VERBOSE ]b4_error_verbose[
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
# define YYFREE free
# define YYMALLOC malloc
# define YYREALLOC realloc
#define yytrue 1
#define yyfalse 0
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#define YYFINAL  ]b4_final_state_number[
#define YYLAST   ]b4_last[
#define YYNTOKENS  ]b4_tokens_number[
#define YYNNTS  ]b4_nterms_number[
#define YYNRULES  ]b4_rules_number[
#define YYNSTATES  ]b4_states_number[
#define YYMAXRHS ]b4_r2_max[
#define YYMAXLEFT ]b4_max_left_semantic_context[
#define YYUNDEFTOK  ]b4_undef_token_number[
#define YYMAXUTOK   ]b4_user_token_number_max[
#define YYTRANSLATE(YYX)						\
  ((YYX <= 0) ? YYEOF :							\
   (unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)
#define YYPACT_NINF ]b4_pact_ninf[
#define YYTABLE_NINF ]b4_table_ninf[
#define YYTERROR 1
#define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
# define YY_LOCATION_PRINT(File, Loc)			\
    fprintf (File, "%d.%d-%d.%d",			\
             (Loc).first_line, (Loc).first_column,	\
             (Loc).last_line,  (Loc).last_column)
# define YYLLOC_DEFAULT(Current, Rhs, N) ((void) 0)
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#define YYLEX ]b4_c_function_call([yylex], [int], b4_lex_param)[
#define yynerrs (yystack->yyerrcnt)
#define yychar (yystack->yyrawchar)],
#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (0)
#  define YYFPRINTF fprintf
# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value]b4_location_if([, Location])[);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YYINITDEPTH ]b4_stack_depth_init[
# define YYMAXDEPTH ]b4_stack_depth_max[
#define YYHEADROOM 2
#define YYSTACKEXPANDABLE 1
#define YYSTACKEXPANDABLE 0
# define yyerrok (yystack->yyerrState = 0)
# define YYACCEPT return yyaccept
# define YYABORT return yyabort
# define YYERROR return yyerrok, yyerr
# define YYRECOVERING (yystack->yyerrState != 0)
# define yyclearin (yychar = *(yystack->yytokenp) = YYEMPTY)
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# define YYBACKUP(Token, Value)						     \
  return yyerror (]b4_yyerror_args["syntax error: cannot back up"),	     \
	 yyerrok, yyerr
#define yyis_pact_ninf(yystate) \
  ]m4_if(m4_eval(b4_pact_ninf < b4_pact_min), 1,
#define yyis_table_ninf(yytable_value) \
  ]m4_if(m4_eval(b4_table_ninf < b4_table_min), 1,
#define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE
# define YY_REDUCE_PRINT(K, Rule)
# define YY_REDUCE_PRINT(K, Rule)	\
do {					\
  if (yydebug)				\
    yy_reduce_print (K, Rule);		\
} while (0)
#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    default:								     \
      break;								     \
    case yyabort:							     \
      yystack.yyerrflag = 1;						     \
      goto yyDone;							     \
    case yyaccept:							     \
      yystack.yyerrflag = 0;						     \
      goto yyDone;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    }									     \
  } while (0)
#define yychar (yystack.yyrawchar)
#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystack->yyitems)
# define yystype YYSTYPE
# define yyltype YYLTYPE
#  define YYFREE free
#  define YYMALLOC malloc
#   define YYSIZE_T size_t
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)
#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)
# define YYSIZE_T __SIZE_TYPE__
# define YYSIZE_T size_t
#define _STDDEF_H
#define _STDDEF_H_
#define _ANSI_STDDEF_H
#define __STDDEF_H__
#define _PTRDIFF_T
#define _T_PTRDIFF_
#define _T_PTRDIFF
#define __PTRDIFF_T
#define _PTRDIFF_T_
#define _BSD_PTRDIFF_T_
#define ___int_ptrdiff_t_h
#define _GCC_PTRDIFF_T
#define NULL ((void *)0)
#define offsetof(TYPE, MEMBER) __builtin_offsetof (TYPE, MEMBER)
#  define YYSIZE_T size_t
# define YYSIZE_T unsigned int
#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror (]b4_yyerror_args["syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)
#define YYTERROR	1
#define YYERRCODE	256
#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# define YYLEX yylex (]b4_pure_if([&yylval[]b4_location_if([, &yylloc]), ])[YYLEX_PARAM)
# define YYLEX ]b4_c_function_call([yylex], [int], b4_lex_param)[
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value]b4_location_if([, Location])[);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)
# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)
# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#define YYPOPSTACK   (yyvsp--, yyssp--]b4_location_if([, yylsp--])[)
#define _ABITSET_H 
#define _BITSET_H
#define _BBITSET_H
# define BISON_LIBIBERTY_H_ 1
# define XALLOC_H_
#define __size_t__	/* BeOS */
#define __SIZE_T__	/* Cray Unicos/Mk */
#define _SIZE_T
#define _SYS_SIZE_T_H
#define _T_SIZE_
#define _T_SIZE
#define __SIZE_T
#define _SIZE_T_
#define _BSD_SIZE_T_
#define _SIZE_T_DEFINED_
#define _SIZE_T_DEFINED
#define _BSD_SIZE_T_DEFINED_	/* Darwin */
#define _SIZE_T_DECLARED	/* FreeBSD 5 */
#define ___int_size_t_h
#define _GCC_SIZE_T
#define _SIZET_
#define __size_t
#define __wchar_t__	/* BeOS */
#define __WCHAR_T__	/* Cray Unicos/Mk */
#define _WCHAR_T
#define _T_WCHAR_
#define _T_WCHAR
#define __WCHAR_T
#define _WCHAR_T_
#define _BSD_WCHAR_T_
#define _WCHAR_T_DEFINED_
#define _WCHAR_T_DEFINED
#define _WCHAR_T_H
#define ___int_wchar_t_h
#define __INT_WCHAR_T_H
#define _GCC_WCHAR_T
#define _WCHAR_T_DECLARED
# define xalloc_oversized(n, s) \
    ((size_t) (sizeof (ptrdiff_t) <= sizeof (size_t) ? -1 : -2) / (s) < (n))
#define _STDBOOL_H
#define bool	_Bool
#define true	1
#define false	0
#define __bool_true_false_are_defined	1
#define _GCC_NEXT_LIMITS_H		/* tell gcc's limits.h to recurse */
#define	_LIMITS_H_
#define _I386_LIMITS_H_
#define	_I386__LIMITS_H_
#define	__DARWIN_CLK_TCK		100
#define	CHAR_BIT	8
#define	MB_LEN_MAX	6
#define	CLK_TCK		__DARWIN_CLK_TCK
#define	SCHAR_MAX	127
#define	SCHAR_MIN	(-128)
#define	UCHAR_MAX	255
#define	CHAR_MAX	127
#define	CHAR_MIN	(-128)
#define	USHRT_MAX	65535
#define	SHRT_MAX	32767
#define	SHRT_MIN	(-32768)
#define	UINT_MAX	0xffffffff
#define	INT_MAX		2147483647
#define	INT_MIN		(-2147483647-1)
#define	ULONG_MAX	0xffffffffffffffffUL
#define	LONG_MAX	0x7fffffffffffffffL
#define	LONG_MIN	(-0x7fffffffffffffffL-1)
#define	ULLONG_MAX	0xffffffffffffffffULL
#define	LLONG_MAX	0x7fffffffffffffffLL
#define	LLONG_MIN	(-0x7fffffffffffffffLL-1)
#define LONG_BIT	64
#define	SSIZE_MAX	LONG_MAX
#define WORD_BIT	32
#define	SIZE_T_MAX	ULONG_MAX
#define	UQUAD_MAX	ULLONG_MAX
#define	QUAD_MAX	LLONG_MAX
#define	QUAD_MIN	LLONG_MIN
#define _SYS_SYSLIMITS_H_
#define	CHILD_MAX		   266
#define	GID_MAX		   2147483647U
#define	LINK_MAX		32767
#define	MAX_CANON		 1024
#define	MAX_INPUT		 1024
#define	NAME_MAX		  255
#define	NGROUPS_MAX		   16
#define	UID_MAX		   2147483647U
#define	OPEN_MAX		10240
#define	PATH_MAX		 1024
#define	PIPE_BUF		  512
#define	BC_BASE_MAX		   99
#define	BC_DIM_MAX		 2048
#define	BC_SCALE_MAX		   99
#define	BC_STRING_MAX		 1000
#define	CHARCLASS_NAME_MAX	   14
#define	COLL_WEIGHTS_MAX	    2
#define	EQUIV_CLASS_MAX		    2
#define	EXPR_NEST_MAX		   32
#define	LINE_MAX		 2048
#define	RE_DUP_MAX		  255
#define	NZERO			   20
#define	_POSIX_ARG_MAX		4096
#define	_POSIX_CHILD_MAX	25
#define	_POSIX_LINK_MAX		8
#define	_POSIX_MAX_CANON	255
#define	_POSIX_MAX_INPUT	255
#define	_POSIX_NAME_MAX		14
#define	_POSIX_NGROUPS_MAX	8
#define	_POSIX_OPEN_MAX		20
#define	_POSIX_PATH_MAX		256
#define	_POSIX_PIPE_BUF		512
#define	_POSIX_SSIZE_MAX	32767
#define	_POSIX_STREAM_MAX	8
#define	_POSIX_TZNAME_MAX	6
#define	_POSIX2_BC_BASE_MAX		99
#define	_POSIX2_BC_DIM_MAX		2048
#define	_POSIX2_BC_SCALE_MAX		99
#define	_POSIX2_BC_STRING_MAX		1000
#define	_POSIX2_EQUIV_CLASS_MAX		2
#define	_POSIX2_EXPR_NEST_MAX		32
#define	_POSIX2_LINE_MAX		2048
#define	_POSIX2_RE_DUP_MAX		255
#define _POSIX_AIO_LISTIO_MAX   2
#define _POSIX_AIO_MAX          1
#define _POSIX_DELAYTIMER_MAX   32
#define _POSIX_MQ_OPEN_MAX      8
#define _POSIX_MQ_PRIO_MAX	32
#define _POSIX_RTSIG_MAX 			8
#define _POSIX_SEM_NSEMS_MAX 			256
#define _POSIX_SEM_VALUE_MAX 			32767
#define _POSIX_SIGQUEUE_MAX 			32
#define _POSIX_TIMER_MAX 			32
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 	4
#define _POSIX_THREAD_KEYS_MAX 			128
#define _POSIX_THREAD_THREADS_MAX 		64
#define PTHREAD_DESTRUCTOR_ITERATIONS 	4
#define PTHREAD_KEYS_MAX 		512
#define PTHREAD_STACK_MIN 		8192
#define _POSIX_HOST_NAME_MAX    255
#define _POSIX_LOGIN_NAME_MAX   9
#define _POSIX_SS_REPL_MAX 			4
#define _POSIX_SYMLINK_MAX 			255
#define _POSIX_SYMLOOP_MAX 			8
#define _POSIX_TRACE_EVENT_NAME_MAX 		30
#define _POSIX_TRACE_NAME_MAX 			8
#define _POSIX_TRACE_SYS_MAX 			8
#define _POSIX_TRACE_USER_EVENT_MAX 		32
#define _POSIX_TTY_NAME_MAX 			9
#define _POSIX2_CHARCLASS_NAME_MAX	14
#define	_POSIX2_COLL_WEIGHTS_MAX	2
#define _POSIX_RE_DUP_MAX 		_POSIX2_RE_DUP_MAX
#define OFF_MIN		LLONG_MIN
#define OFF_MAX		LLONG_MAX
#define PASS_MAX	128
#define NL_ARGMAX	9
#define NL_LANGMAX	14
#define NL_MSGMAX	32767
#define NL_NMAX		1
#define NL_SETMAX	255
#define NL_TEXTMAX	2048
#define _XOPEN_IOV_MAX	16
#define IOV_MAX		1024
#define _XOPEN_NAME_MAX 255
#define _XOPEN_PATH_MAX 1024
#define _LIMITS_H___
#define CHAR_BIT __CHAR_BIT__
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define SCHAR_MAX __SCHAR_MAX__
# define UCHAR_MAX (SCHAR_MAX * 2 + 1)
# define CHAR_MIN SCHAR_MIN
# define CHAR_MAX SCHAR_MAX
#define SHRT_MIN (-SHRT_MAX - 1)
#define SHRT_MAX __SHRT_MAX__
# define USHRT_MAX (SHRT_MAX * 2 + 1)
#define INT_MIN (-INT_MAX - 1)
#define INT_MAX __INT_MAX__
#define UINT_MAX (INT_MAX * 2U + 1U)
#define LONG_MIN (-LONG_MAX - 1L)
#define LONG_MAX __LONG_MAX__
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
# define LLONG_MIN (-LLONG_MAX - 1LL)
# define LLONG_MAX __LONG_LONG_MAX__
# define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
# define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
# define LONG_LONG_MAX __LONG_LONG_MAX__
# define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define BITSET_TYPE_NAMES {"abitset", "lbitset", "ebitset", "vbitset"}
#define BITSET_WORD_BITS ((unsigned int) (CHAR_BIT * sizeof (bitset_word)))
#define BITSET_BINDEX_MAX ((bitset_bindex) -1)
#define BITSET_WINDEX_MAX (((bitset_windex) -1) >> 1)
#define BITSET_SIZE_MAX ((size_t) -1)
#define BITSET_MSB ((bitset_word) 1 << (BITSET_WORD_BITS - 1))
#define BITSET_LIST_SIZE 1024
#define BITSET_VTABLE_(SRC) (SRC)->b.vtable
#define BITSET_CINDEX_(SRC) (SRC)->b.cindex
#define BITSET_CDATA_(SRC) (SRC)->b.cdata
#define BITSET_CSIZE_(SRC) (SRC)->b.csize
#define BITSET_NBITS_(SRC) (SRC)->b.n_bits
#define BITSET_COMPATIBLE_(BSET1, BSET2) \
((BSET1)->b.vtable == (BSET2)->b.vtable)
#define BITSET_CHECK2_(DST, SRC) \
if (!BITSET_COMPATIBLE_ (DST, SRC)) abort ();
#define BITSET_CHECK3_(DST, SRC1, SRC2) \
if (!BITSET_COMPATIBLE_ (DST, SRC1) \
    || !BITSET_COMPATIBLE_ (DST, SRC2)) abort ();
#define BITSET_CHECK4_(DST, SRC1, SRC2, SRC3) \
if (!BITSET_COMPATIBLE_ (DST, SRC1) || !BITSET_COMPATIBLE_ (DST, SRC2) \
    || !BITSET_COMPATIBLE_ (DST, SRC3)) abort ();
#define BITSET_RESIZE_(DST, SIZE) (DST)->b.vtable->resize (DST, SIZE)
#define BITSET_SIZE_(SRC) (SRC)->b.vtable->size (SRC)
#define BITSET_COUNT_(SRC) (SRC)->b.vtable->count (SRC)
#define BITSET_TYPE_(DST) (DST)->b.vtable->type
#define BITSET_SET_(DST, BITNO) (DST)->b.vtable->set (DST, BITNO)
#define BITSET_RESET_(DST, BITNO) (DST)->b.vtable->reset (DST, BITNO)
#define BITSET_TOGGLE_(DST, BITNO) (DST)->b.vtable->toggle (DST, BITNO)
#define BITSET_TEST_(SRC, BITNO) (SRC)->b.vtable->test (SRC, BITNO)
#define BITSET_FREE_(SRC)\
 ((SRC)->b.vtable->free ? (SRC)->b.vtable->free (SRC) :(void)0)
#define BITSET_EMPTY_P_(SRC) (SRC)->b.vtable->empty_p (SRC)
#define BITSET_ONES_(DST) (DST)->b.vtable->ones (DST)
#define BITSET_ZERO_(DST) (DST)->b.vtable->zero (DST)
#define BITSET_COPY_(DST, SRC) (SRC)->b.vtable->copy (DST, SRC)
#define BITSET_DISJOINT_P_(DST, SRC) (SRC)->b.vtable->disjoint_p (DST, SRC)
#define BITSET_EQUAL_P_(DST, SRC) (SRC)->b.vtable->equal_p (DST, SRC)
#define BITSET_NOT_(DST, SRC) (SRC)->b.vtable->not (DST, SRC)
#define BITSET_SUBSET_P_(DST, SRC) (SRC)->b.vtable->subset_p (DST, SRC)
#define BITSET_AND_(DST, SRC1, SRC2) (SRC1)->b.vtable->and (DST, SRC1, SRC2)
#define BITSET_AND_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->and_cmp (DST, SRC1, SRC2)
#define BITSET_ANDN_(DST, SRC1, SRC2) (SRC1)->b.vtable->andn (DST, SRC1, SRC2)
#define BITSET_ANDN_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->andn_cmp (DST, SRC1, SRC2)
#define BITSET_OR_(DST, SRC1, SRC2) (SRC1)->b.vtable->or (DST, SRC1, SRC2)
#define BITSET_OR_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->or_cmp (DST, SRC1, SRC2)
#define BITSET_XOR_(DST, SRC1, SRC2) (SRC1)->b.vtable->xor (DST, SRC1, SRC2)
#define BITSET_XOR_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->xor_cmp (DST, SRC1, SRC2)
#define BITSET_AND_OR_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->and_or (DST, SRC1, SRC2, SRC3)
#define BITSET_AND_OR_CMP_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->and_or_cmp (DST, SRC1, SRC2, SRC3)
#define BITSET_ANDN_OR_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->andn_or (DST, SRC1, SRC2, SRC3)
#define BITSET_ANDN_OR_CMP_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->andn_or_cmp (DST, SRC1, SRC2, SRC3)
#define BITSET_OR_AND_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->or_and (DST, SRC1, SRC2, SRC3)
#define BITSET_OR_AND_CMP_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->or_and_cmp (DST, SRC1, SRC2, SRC3)
#define BITSET_LIST_(BSET, LIST, NUM, NEXT) \
 (BSET)->b.vtable->list (BSET, LIST, NUM, NEXT)
#define BITSET_LIST_REVERSE_(BSET, LIST, NUM, NEXT) \
 (BSET)->b.vtable->list_reverse (BSET, LIST, NUM, NEXT)
#define _OBSTACK_H 1
# define PTR_INT_TYPE __PTRDIFF_TYPE__
#define __BPTR_ALIGN(B, P, A) ((B) + (((P) - (B) + (A)) & ~(A)))
#define __PTR_ALIGN(B, P, A)						    \
  __BPTR_ALIGN (sizeof (PTR_INT_TYPE) < sizeof (void *) ? (B) : (char *) 0, \
		P, A)
#define obstack_base(h) ((void *) (h)->object_base)
#define obstack_chunk_size(h) ((h)->chunk_size)
#define obstack_next_free(h)	((h)->next_free)
#define obstack_alignment_mask(h) ((h)->alignment_mask)
#define obstack_init(h)						\
  _obstack_begin ((h), 0, 0,					\
		  (void *(*) (long)) obstack_chunk_alloc,	\
		  (void (*) (void *)) obstack_chunk_free)
#define obstack_begin(h, size)					\
  _obstack_begin ((h), (size), 0,				\
		  (void *(*) (long)) obstack_chunk_alloc,	\
		  (void (*) (void *)) obstack_chunk_free)
#define obstack_specify_allocation(h, size, alignment, chunkfun, freefun)  \
  _obstack_begin ((h), (size), (alignment),				   \
		  (void *(*) (long)) (chunkfun),			   \
		  (void (*) (void *)) (freefun))
#define obstack_specify_allocation_with_arg(h, size, alignment, chunkfun, freefun, arg) \
  _obstack_begin_1 ((h), (size), (alignment),				\
		    (void *(*) (void *, long)) (chunkfun),		\
		    (void (*) (void *, void *)) (freefun), (arg))
#define obstack_chunkfun(h, newchunkfun) \
  ((h) -> chunkfun = (struct _obstack_chunk *(*)(void *, long)) (newchunkfun))
#define obstack_freefun(h, newfreefun) \
  ((h) -> freefun = (void (*)(void *, struct _obstack_chunk *)) (newfreefun))
#define obstack_1grow_fast(h,achar) (*((h)->next_free)++ = (achar))
#define obstack_blank_fast(h,n) ((h)->next_free += (n))
#define obstack_memory_used(h) _obstack_memory_used (h)
# define obstack_object_size(OBSTACK)					\
  __extension__								\
  ({ struct obstack const *__o = (OBSTACK);				\
     (unsigned) (__o->next_free - __o->object_base); })
# define obstack_room(OBSTACK)						\
  __extension__								\
  ({ struct obstack const *__o = (OBSTACK);				\
     (unsigned) (__o->chunk_limit - __o->next_free); })
# define obstack_make_room(OBSTACK,length)				\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   int __len = (length);						\
   if (__o->chunk_limit - __o->next_free < __len)			\
     _obstack_newchunk (__o, __len);					\
   (void) 0; })
# define obstack_empty_p(OBSTACK)					\
  __extension__								\
  ({ struct obstack const *__o = (OBSTACK);				\
     (__o->chunk->prev == 0						\
      && __o->next_free == __PTR_ALIGN ((char *) __o->chunk,		\
					__o->chunk->contents,		\
					__o->alignment_mask)); })
# define obstack_grow(OBSTACK,where,length)				\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   int __len = (length);						\
   if (__o->next_free + __len > __o->chunk_limit)			\
     _obstack_newchunk (__o, __len);					\
   memcpy (__o->next_free, where, __len);				\
   __o->next_free += __len;						\
   (void) 0; })
# define obstack_grow0(OBSTACK,where,length)				\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   int __len = (length);						\
   if (__o->next_free + __len + 1 > __o->chunk_limit)			\
     _obstack_newchunk (__o, __len + 1);				\
   memcpy (__o->next_free, where, __len);				\
   __o->next_free += __len;						\
   *(__o->next_free)++ = 0;						\
   (void) 0; })
# define obstack_1grow(OBSTACK,datum)					\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   if (__o->next_free + 1 > __o->chunk_limit)				\
     _obstack_newchunk (__o, 1);					\
   obstack_1grow_fast (__o, datum);					\
   (void) 0; })
# define obstack_ptr_grow(OBSTACK,datum)				\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   if (__o->next_free + sizeof (void *) > __o->chunk_limit)		\
     _obstack_newchunk (__o, sizeof (void *));				\
   obstack_ptr_grow_fast (__o, datum); })
# define obstack_int_grow(OBSTACK,datum)				\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   if (__o->next_free + sizeof (int) > __o->chunk_limit)		\
     _obstack_newchunk (__o, sizeof (int));				\
   obstack_int_grow_fast (__o, datum); })
# define obstack_ptr_grow_fast(OBSTACK,aptr)				\
__extension__								\
({ struct obstack *__o1 = (OBSTACK);					\
   *(const void **) __o1->next_free = (aptr);				\
   __o1->next_free += sizeof (const void *);				\
   (void) 0; })
# define obstack_int_grow_fast(OBSTACK,aint)				\
__extension__								\
({ struct obstack *__o1 = (OBSTACK);					\
   *(int *) __o1->next_free = (aint);					\
   __o1->next_free += sizeof (int);					\
   (void) 0; })
# define obstack_blank(OBSTACK,length)					\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   int __len = (length);						\
   if (__o->chunk_limit - __o->next_free < __len)			\
     _obstack_newchunk (__o, __len);					\
   obstack_blank_fast (__o, __len);					\
   (void) 0; })
# define obstack_alloc(OBSTACK,length)					\
__extension__								\
({ struct obstack *__h = (OBSTACK);					\
   obstack_blank (__h, (length));					\
   obstack_finish (__h); })
# define obstack_copy(OBSTACK,where,length)				\
__extension__								\
({ struct obstack *__h = (OBSTACK);					\
   obstack_grow (__h, (where), (length));				\
   obstack_finish (__h); })
# define obstack_copy0(OBSTACK,where,length)				\
__extension__								\
({ struct obstack *__h = (OBSTACK);					\
   obstack_grow0 (__h, (where), (length));				\
   obstack_finish (__h); })
# define obstack_finish(OBSTACK)					\
__extension__								\
({ struct obstack *__o1 = (OBSTACK);					\
   void *__value = (void *) __o1->object_base;				\
   if (__o1->next_free == __value)					\
     __o1->maybe_empty_object = 1;					\
   __o1->next_free							\
     = __PTR_ALIGN (__o1->object_base, __o1->next_free,			\
		    __o1->alignment_mask);				\
   if (__o1->next_free - (char *)__o1->chunk				\
       > __o1->chunk_limit - (char *)__o1->chunk)			\
     __o1->next_free = __o1->chunk_limit;				\
   __o1->object_base = __o1->next_free;					\
   __value; })
# define obstack_free(OBSTACK, OBJ)					\
__extension__								\
({ struct obstack *__o = (OBSTACK);					\
   void *__obj = (OBJ);							\
   if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit)  \
     __o->next_free = __o->object_base = (char *)__obj;			\
   else (obstack_free) (__o, __obj); })
#define bitset_toggle(bset, bitno) BITSET_TOGGLE_ (bset, bitno)
#define bitset_size(SRC) BITSET_SIZE_ (SRC)
#define bitset_count(SRC) BITSET_COUNT_ (SRC)
#define bitset_empty_p(SRC) BITSET_EMPTY_P_ (SRC)
#define bitset_ones(DST) BITSET_ONES_ (DST)
#define bitset_zero(DST) BITSET_ZERO_ (DST)
#define bitset_copy(DST, SRC) BITSET_COPY_ (DST, SRC)
#define bitset_disjoint_p(DST, SRC) BITSET_DISJOINT_P_ (DST, SRC)
#define bitset_equal_p(DST, SRC) BITSET_EQUAL_P_ (DST, SRC)
#define bitset_not(DST, SRC) BITSET_NOT_ (DST, SRC)
#define bitset_subset_p(DST, SRC) BITSET_SUBSET_P_ (DST, SRC)
#define bitset_and(DST, SRC1, SRC2) BITSET_AND_ (DST, SRC1, SRC2)
#define bitset_and_cmp(DST, SRC1, SRC2) BITSET_AND_CMP_ (DST, SRC1, SRC2)
#define bitset_andn(DST, SRC1, SRC2) BITSET_ANDN_ (DST, SRC1, SRC2)
#define bitset_andn_cmp(DST, SRC1, SRC2) BITSET_ANDN_CMP_ (DST, SRC1, SRC2)
#define bitset_or(DST, SRC1, SRC2) BITSET_OR_ (DST, SRC1, SRC2)
#define bitset_or_cmp(DST, SRC1, SRC2) BITSET_OR_CMP_ (DST, SRC1, SRC2)
#define bitset_xor(DST, SRC1, SRC2) BITSET_XOR_ (DST, SRC1, SRC2)
#define bitset_xor_cmp(DST, SRC1, SRC2) BITSET_XOR_CMP_ (DST, SRC1, SRC2)
#define bitset_and_or(DST, SRC1, SRC2, SRC3) \
 BITSET_AND_OR_ (DST, SRC1, SRC2, SRC3)
#define bitset_and_or_cmp(DST, SRC1, SRC2, SRC3) \
 BITSET_AND_OR_CMP_ (DST, SRC1, SRC2, SRC3)
#define bitset_andn_or(DST, SRC1, SRC2, SRC3) \
 BITSET_ANDN_OR_ (DST, SRC1, SRC2, SRC3)
#define bitset_andn_or_cmp(DST, SRC1, SRC2, SRC3) \
 BITSET_ANDN_OR_CMP_ (DST, SRC1, SRC2, SRC3)
#define bitset_or_and(DST, SRC1, SRC2, SRC3)\
 BITSET_OR_AND_ (DST, SRC1, SRC2, SRC3)
#define bitset_or_and_cmp(DST, SRC1, SRC2, SRC3)\
 BITSET_OR_AND_CMP_ (DST, SRC1, SRC2, SRC3)
#define bitset_list(BSET, LIST, NUM, NEXT) \
 BITSET_LIST_ (BSET, LIST, NUM, NEXT)
#define bitset_list_reverse(BSET, LIST, NUM, NEXT) \
 BITSET_LIST_REVERSE_ (BSET, LIST, NUM, NEXT)
#define BITSET_FOR_EACH(ITER, BSET, INDEX, MIN)				      \
  for (ITER.next = (MIN), ITER.num = BITSET_LIST_SIZE;			      \
       (ITER.num == BITSET_LIST_SIZE) 					      \
       && (ITER.num = bitset_list (BSET, ITER.list, 			      \
				   BITSET_LIST_SIZE, &ITER.next));)	      \
    for (ITER.i = 0;							      \
	 ITER.i < ITER.num && ((INDEX) = ITER.list[ITER.i], 1);		      \
	 ITER.i++)
#define BITSET_FOR_EACH_REVERSE(ITER, BSET, INDEX, MIN)			      \
  for (ITER.next = (MIN), ITER.num = BITSET_LIST_SIZE;			      \
       (ITER.num == BITSET_LIST_SIZE) 					      \
       && (ITER.num = bitset_list_reverse (BSET, ITER.list,		      \
					   BITSET_LIST_SIZE, &ITER.next));)   \
    for (ITER.i = 0;							      \
	 ITER.i < ITER.num && ((INDEX) = ITER.list[ITER.i], 1);		      \
	 ITER.i++)
#define bitset_diff(DST, SRC1, SRC2) bitset_andn (DST, SRC1, SRC2)
#define bitset_diff_cmp(DST, SRC1, SRC2) bitset_andn_cmp (DST, SRC1, SRC2)
#define bitset_intersection(DST, SRC1, SRC2) bitset_and (DST, SRC1, SRC2)
#define bitset_intersection_cmp(DST, SRC1, SRC2) bitset_and_cmp (DST, SRC1, SRC2)
#define bitset_union(DST, SRC1, SRC2) bitset_or (DST, SRC1, SRC2)
#define bitset_union_cmp(DST, SRC1, SRC2) bitset_or_cmp (DST, SRC1, SRC2)
#define bitset_symdiff(DST, SRC1, SRC2) bitset_xor (DST, SRC1, SRC2)
#define bitset_symdiff_cmp(DST, SRC1, SRC2) bitset_xor_cmp (DST, SRC1, SRC2)
#define bitset_diff_union(DST, SRC1, SRC2, SRC3) \
  bitset_andn_or (DST, SRC1, SRC2, SRC3)
#define bitset_diff_union_cmp(DST, SRC1, SRC2, SRC3) \
  bitset_andn_or_cmp (DST, SRC1, SRC2, SRC3)
#  define free EMACS_FREE
# define memory_full() abort ()
#   define STACK_DIRECTION	0
#   define STACK_DIR	STACK_DIRECTION
#   define STACK_DIR	stack_dir
#    define CRAY_STACK
# define _GNULIB_ALLOCA_H
# define alloca __builtin_alloca
# define alloca __alloca
# define alloca _alloca
# define invalid_arg(Context, Value, Problem) \
  argmatch_invalid (Context, Value, Problem)
# define XARGMATCH(Context, Arg, Arglist, Vallist)		\
  ((Vallist) [__xargmatch_internal (Context, Arg, Arglist,	\
				    (char const *) (Vallist),	\
				    sizeof *(Vallist),		\
				    argmatch_die)])
#define _LIBGETTEXT_H 1
# define gettext(Msgid) ((const char *) (Msgid))
# define dgettext(Domainname, Msgid) ((const char *) (Msgid))
# define dcgettext(Domainname, Msgid, Category) ((const char *) (Msgid))
# define ngettext(Msgid1, Msgid2, N) \
    ((N) == 1 ? (const char *) (Msgid1) : (const char *) (Msgid2))
# define dngettext(Domainname, Msgid1, Msgid2, N) \
    ((N) == 1 ? (const char *) (Msgid1) : (const char *) (Msgid2))
# define dcngettext(Domainname, Msgid1, Msgid2, N, Category) \
    ((N) == 1 ? (const char *) (Msgid1) : (const char *) (Msgid2))
# define textdomain(Domainname) ((const char *) (Domainname))
# define bindtextdomain(Domainname, Dirname) ((const char *) (Dirname))
# define bind_textdomain_codeset(Domainname, Codeset) ((const char *) (Codeset))
#define gettext_noop(String) String
#define _(msgid) gettext (msgid)
#define _ERROR_H 1
#define _EXIT_H
# define QUOTEARG_H_ 1
#  define DEFAULT_QUOTING_STYLE literal_quoting_style
# define DIRNAME_H_ 1
#  define DIRECTORY_SEPARATOR '/'
#  define ISSLASH(C) ((C) == DIRECTORY_SEPARATOR)
#  define FILE_SYSTEM_PREFIX_LEN(Filename) 0
# define IS_ABSOLUTE_FILE_NAME(F) ISSLASH ((F)[FILE_SYSTEM_PREFIX_LEN (F)])
# define IS_RELATIVE_FILE_NAME(F) (! IS_ABSOLUTE_FILE_NAME (F))
#define _LBITSET_H 
#define _EBITSET_H 
#define _VBITSET_H 
#define _BITSET_STATS_H
#define _(Msgid)  gettext (Msgid)
#define BITSET_STATS_FILE "bitset.dat"
#define BITSET_LOG_COUNT_BINS 10
#define BITSET_LOG_SIZE_BINS  16
#define BITSET_DENSITY_BINS  20
#define BITSET_STATS_ALLOCS_INC(TYPE)	 		\
    bitset_stats_info->types[(TYPE)].allocs++
#define BITSET_STATS_FREES_INC(BSET) 			\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].frees++
#define BITSET_STATS_SETS_INC(BSET) 			\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].sets++
#define BITSET_STATS_CACHE_SETS_INC(BSET) 		\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].cache_sets++
#define BITSET_STATS_RESETS_INC(BSET) 			\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].resets++
#define BITSET_STATS_CACHE_RESETS_INC(BSET) 		\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].cache_resets++
#define BITSET_STATS_TESTS_INC(BSET) 			\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].tests++
#define BITSET_STATS_CACHE_TESTS_INC(BSET) 		\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].cache_tests++
#define BITSET_STATS_LISTS_INC(BSET) 			\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].lists++
#define BITSET_STATS_LIST_COUNTS_INC(BSET, I) 		\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].list_counts[(I)]++
#define BITSET_STATS_LIST_SIZES_INC(BSET, I) 		\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].list_sizes[(I)]++
#define BITSET_STATS_LIST_DENSITY_INC(BSET, I) 		\
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].list_density[(I)]++
#define _BITSETV_PRINT_H
#define _BITSETV_H
# define MAX_BUFF_LEN 1024
#define EBITSET_ELT_WORDS 2
#define EBITSET_ELT_BITS \
  ((unsigned int) (EBITSET_ELT_WORDS * BITSET_WORD_BITS))
#define EBITSET_INITIAL_SIZE 2
#define EBITSET_N_ELTS(N) (((N) + EBITSET_ELT_BITS - 1) / EBITSET_ELT_BITS)
#define EBITSET_ELTS(BSET) ((BSET)->e.elts)
#define EBITSET_SIZE(BSET) EBITSET_N_ELTS (BITSET_NBITS_ (BSET))
#define EBITSET_ASIZE(BSET) ((BSET)->e.size)
#define EBITSET_NEXT(ELT) ((ELT)->u.next)
#define EBITSET_WORDS(ELT) ((ELT)->u.words)
#define EBITSET_ZERO_SET(BSET) ((BSET)->b.cindex = BITSET_WINDEX_MAX, \
	(BSET)->b.cdata = 0)
#define EBITSET_CACHE_DISABLE(BSET)  ((BSET)->b.cindex = BITSET_WINDEX_MAX)
#define EBITSET_NONZERO_SET(BSET) \
 (EBITSET_CACHE_DISABLE (BSET), (BSET)->b.cdata = (bitset_word *)~0)
#define EBITSET_ZERO_P(BSET) ((BSET)->b.cdata == 0)
#define EBITSET_CACHE_SET(BSET, EINDEX) \
 ((BSET)->b.cindex = (EINDEX) * EBITSET_ELT_WORDS, \
  (BSET)->b.cdata = EBITSET_WORDS (EBITSET_ELTS (BSET) [EINDEX]))
#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define OBSTACK_CHUNK_SIZE 0
#define OBSTACK_CHUNK_ALLOC xmalloc
#define OBSTACK_CHUNK_FREE free
#define __alignof__(type) 0
#define _WCHAR_H_
#define	_MBSTATE_T
#define WCHAR_MIN	__DARWIN_WCHAR_MIN
#define WCHAR_MAX	__DARWIN_WCHAR_MAX
#define	_TIME_H_
#define __need_struct_timespec
#define _STRUCT_TIMESPEC	struct timespec
#define _CLOCK_T
#define	_TIME_T
#define CLOCKS_PER_SEC  1000000
#define __WCTYPE_H_
#define _WINT_T
#define _WCTYPE_T
#define WEOF			__DARWIN_WEOF
#define __DARWIN_WCTYPE_TOP_static_inline static __inline
#define _CTYPE_H_
#define	_RUNETYPE_H_
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
# define mbsrtowcs __mbsrtowcs
# define _(String) String
# define program_name program_invocation_name
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
# define error __error
# define error_at_line __error_at_line
# define fflush(s) INTUSE(_IO_fflush) (s)
# define putc(c, fp) INTUSE(_IO_putc) (c, fp)
#  define SIZE_MAX ((size_t) -1)
#  define __strerror_r strerror_r
#  define __attribute__(Spec) /* empty */
#  define __format__ format
#  define __printf__ printf
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define _NO_PROTO
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
#define	_GID_T
#define	_USECONDS_T
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
#define _SUSECONDS_T
#define	FD_SETSIZE	__DARWIN_FD_SETSIZE
#define	FD_SET(n, p)	__DARWIN_FD_SET(n, p)
#define	FD_CLR(n, p)	__DARWIN_FD_CLR(n, p)
#define	FD_ISSET(n, p)	__DARWIN_FD_ISSET(n, p)
#define	FD_ZERO(p)	__DARWIN_FD_ZERO(p)
#define	FD_COPY(f, t)	__DARWIN_FD_COPY(f, t)
#define	_SYS__SELECT_H_
#define	_UUID_T
#define	SYNC_VOLUME_FULLSYNC	0x01
#define SYNC_VOLUME_WAIT	0x02
# define _(msgid) gettext (msgid)
# define attribute_hidden
#define _GETOPT_H_
#define no_argument        0
#define required_argument  1
#define optional_argument  2
#define	_GETOPT
#define	_OPTRESET
#define _GETOPT_INT_H	1
#define _GETOPT_DATA_INITIALIZER	{ 1, 1 }
#  define SWAP_FLAGS(ch1, ch2) \
  if (d->__nonoption_flags_len > 0)					      \
    {									      \
      char __tmp = __getopt_nonoption_flags[ch1];			      \
      __getopt_nonoption_flags[ch1] = __getopt_nonoption_flags[ch2];	      \
      __getopt_nonoption_flags[ch2] = __tmp;				      \
    }
#  define SWAP_FLAGS(ch1, ch2)
# define SWAP_FLAGS(ch1, ch2)
# define NONOPTION_P (argv[d->optind][0] != '-' || argv[d->optind][1] == '\0' \
		      || (d->optind < d->__nonoption_flags_len		      \
			  && __getopt_nonoption_flags[d->optind] == '1'))
# define NONOPTION_P (argv[d->optind][0] != '-' || argv[d->optind][1] == '\0')
#define	_INTPTR_T
#define	_PID_T
#define	_SSIZE_T
#define	_UID_T
#define	NULL __DARWIN_NULL
#define	_DEV_T
#define	_MODE_T
#define NULL 0
# define _GETOPT_H 1
# define __GETOPT_CONCAT(x, y) x ## y
# define __GETOPT_XCONCAT(x, y) __GETOPT_CONCAT (x, y)
# define __GETOPT_ID(y) __GETOPT_XCONCAT (__GETOPT_PREFIX, y)
# define getopt __GETOPT_ID (getopt)
# define getopt_long __GETOPT_ID (getopt_long)
# define getopt_long_only __GETOPT_ID (getopt_long_only)
# define optarg __GETOPT_ID (optarg)
# define opterr __GETOPT_ID (opterr)
# define optind __GETOPT_ID (optind)
# define optopt __GETOPT_ID (optopt)
#  define __getopt_argv_const /* empty */
#  define __getopt_argv_const const
#  define __GNUC_PREREQ(maj, min) (0)
#  define __THROW	throw ()
#  define __THROW
# define no_argument		0
# define required_argument	1
# define optional_argument	2
#define _LOCALE_H_
#define __LOCALE_H_
#define NULL	__DARWIN_NULL
#define	LC_ALL		0
#define	LC_COLLATE	1
#define	LC_CTYPE	2
#define	LC_MONETARY	3
#define	LC_NUMERIC	4
#define	LC_TIME		5
#define	LC_MESSAGES	6
#define	_LC_LAST	7
# define HARD_LOCALE_H_ 1
#define STRDUP_H_
# define GLIBC_VERSION __GLIBC__
# define GLIBC_VERSION 0
# define HASH_H_
#  define obstack_chunk_alloc malloc
#  define obstack_chunk_free free
# define SIZE_MAX ((size_t) -1)
#define DEFAULT_GROWTH_THRESHOLD 0.8
#define DEFAULT_GROWTH_FACTOR 1.414
#define DEFAULT_SHRINK_THRESHOLD 0.0
#define DEFAULT_SHRINK_FACTOR 1.0
# define ROTATE_LEFT(Value, Shift) \
  ((Value) << (Shift) | (Value) >> ((sizeof (size_t) * CHAR_BIT) - (Shift)))
# define HASH_ONE_CHAR(Value, Byte) \
  ((Byte) + ROTATE_LEFT (Value, 7))
#define LBITSET_ELT_WORDS 2
#define LBITSET_WORD_BITS BITSET_WORD_BITS
#define LBITSET_ELT_BITS \
  ((unsigned int) (LBITSET_ELT_WORDS * LBITSET_WORD_BITS))
#define LBITSET_CURRENT1(X) \
  ((lbitset_elt *) (void *) ((char *) (X) - offsetof (lbitset_elt, words)))
#define LBITSET_CURRENT(X) LBITSET_CURRENT1((X)->b.cdata)
#define LBITSET_HEAD(X) ((X)->l.head)
#define LBITSET_TAIL(X) ((X)->l.tail)
#   define __attribute__(x)
# define setlocale(Category, Locale)
#define MBSW_REJECT_INVALID 1
#define MBSW_REJECT_UNPRINTABLE	2
#define mbswidth gnu_mbswidth
#define	_WCTYPE_H_
#define	_WCTRANS_T
#define __DARWIN_WCTYPE_TOP_static_inline	static __inline
# define iswprint(wc) 1
# define iswcntrl(wc) 0
#  define mbsinit(ps) 1
#  define wcwidth(wc) ((wc) == 0 ? 0 : iswprint (wc) ? 1 : -1)
# define IN_CTYPE_DOMAIN(c) 1
# define IN_CTYPE_DOMAIN(c) isascii(c)
#define ISPRINT(c) (IN_CTYPE_DOMAIN (c) && isprint (c))
#define ISCNTRL(c) (IN_CTYPE_DOMAIN (c) && iscntrl (c))
#define OBSTACK_INTERFACE_VERSION 1
#  define ELIDE_CODE
#  define COPYING_UNIT int
#  define obstack_exit_failure exit_failure
# define CALL_CHUNKFUN(h, size) \
  (((h) -> use_extra_arg) \
   ? (*(h)->chunkfun) ((h)->extra_arg, (size)) \
   : (*(struct _obstack_chunk *(*) (long)) (h)->chunkfun) ((size)))
# define CALL_FREEFUN(h, old_chunk) \
  do { \
    if ((h) -> use_extra_arg) \
      (*(h)->freefun) ((h)->extra_arg, (old_chunk)); \
    else \
      (*(void (*) (void *)) (h)->freefun) ((old_chunk)); \
  } while (0)
#  define _(msgid) gettext (msgid)
#   define __attribute__(Spec) /* empty */
# define PTR_INT_TYPE ptrdiff_t
# define obstack_object_size(h) \
 (unsigned) ((h)->next_free - (h)->object_base)
# define obstack_room(h)		\
 (unsigned) ((h)->chunk_limit - (h)->next_free)
# define obstack_empty_p(h) \
 ((h)->chunk->prev == 0							\
  && (h)->next_free == __PTR_ALIGN ((char *) (h)->chunk,		\
				    (h)->chunk->contents,		\
				    (h)->alignment_mask))
# define obstack_make_room(h,length)					\
( (h)->temp.tempint = (length),						\
  (((h)->next_free + (h)->temp.tempint > (h)->chunk_limit)		\
   ? (_obstack_newchunk ((h), (h)->temp.tempint), 0) : 0))
# define obstack_grow(h,where,length)					\
( (h)->temp.tempint = (length),						\
  (((h)->next_free + (h)->temp.tempint > (h)->chunk_limit)		\
   ? (_obstack_newchunk ((h), (h)->temp.tempint), 0) : 0),		\
  memcpy ((h)->next_free, where, (h)->temp.tempint),			\
  (h)->next_free += (h)->temp.tempint)
# define obstack_grow0(h,where,length)					\
( (h)->temp.tempint = (length),						\
  (((h)->next_free + (h)->temp.tempint + 1 > (h)->chunk_limit)		\
   ? (_obstack_newchunk ((h), (h)->temp.tempint + 1), 0) : 0),		\
  memcpy ((h)->next_free, where, (h)->temp.tempint),			\
  (h)->next_free += (h)->temp.tempint,					\
  *((h)->next_free)++ = 0)
# define obstack_1grow(h,datum)						\
( (((h)->next_free + 1 > (h)->chunk_limit)				\
   ? (_obstack_newchunk ((h), 1), 0) : 0),				\
  obstack_1grow_fast (h, datum))
# define obstack_ptr_grow(h,datum)					\
( (((h)->next_free + sizeof (char *) > (h)->chunk_limit)		\
   ? (_obstack_newchunk ((h), sizeof (char *)), 0) : 0),		\
  obstack_ptr_grow_fast (h, datum))
# define obstack_int_grow(h,datum)					\
( (((h)->next_free + sizeof (int) > (h)->chunk_limit)			\
   ? (_obstack_newchunk ((h), sizeof (int)), 0) : 0),			\
  obstack_int_grow_fast (h, datum))
# define obstack_ptr_grow_fast(h,aptr)					\
  (((const void **) ((h)->next_free += sizeof (void *)))[-1] = (aptr))
# define obstack_int_grow_fast(h,aint)					\
  (((int *) ((h)->next_free += sizeof (int)))[-1] = (aptr))
# define obstack_blank(h,length)					\
( (h)->temp.tempint = (length),						\
  (((h)->chunk_limit - (h)->next_free < (h)->temp.tempint)		\
   ? (_obstack_newchunk ((h), (h)->temp.tempint), 0) : 0),		\
  obstack_blank_fast (h, (h)->temp.tempint))
# define obstack_alloc(h,length)					\
 (obstack_blank ((h), (length)), obstack_finish ((h)))
# define obstack_copy(h,where,length)					\
 (obstack_grow ((h), (where), (length)), obstack_finish ((h)))
# define obstack_copy0(h,where,length)					\
 (obstack_grow0 ((h), (where), (length)), obstack_finish ((h)))
# define obstack_finish(h)						\
( ((h)->next_free == (h)->object_base					\
   ? (((h)->maybe_empty_object = 1), 0)					\
   : 0),								\
  (h)->temp.tempptr = (h)->object_base,					\
  (h)->next_free							\
    = __PTR_ALIGN ((h)->object_base, (h)->next_free,			\
		   (h)->alignment_mask),				\
  (((h)->next_free - (char *) (h)->chunk				\
    > (h)->chunk_limit - (char *) (h)->chunk)				\
   ? ((h)->next_free = (h)->chunk_limit) : 0),				\
  (h)->object_base = (h)->next_free,					\
  (h)->temp.tempptr)
# define obstack_free(h,obj)						\
( (h)->temp.tempint = (char *) (obj) - (char *) (h)->chunk,		\
  ((((h)->temp.tempint > 0						\
    && (h)->temp.tempint < (h)->chunk_limit - (char *) (h)->chunk))	\
   ? (int) ((h)->next_free = (h)->object_base				\
	    = (h)->temp.tempint + (char *) (h)->chunk)			\
   : (((obstack_free) ((h), (h)->temp.tempint + (char *) (h)->chunk), 0), 0)))
#define N_(msgid) msgid
# define MB_CUR_MAX 1
# define mbrtowc(pwc, s, n, ps) ((*(pwc) = *(s)) != 0)
# define iswprint(wc) isprint ((unsigned char) (wc))
# define mbsinit(ps) 1
#  define iswprint(wc) 1
#define INT_BITS (sizeof (int) * CHAR_BIT)
#define STORE(c) \
    do \
      { \
	if (len < buffersize) \
	  buffer[len] = (c); \
	len++; \
      } \
    while (0)
#   define _Bool signed char
#define bool _Bool
#define false 0
#define true 1
#define __bool_true_false_are_defined 1
# define __stpcpy stpcpy
#define _STPCPY_H
# define __strdup strdup
# define __strndup strndup
# define strnlen rpl_strnlen
# define __strnlen strnlen
#define _USER_SIGNAL_H
#define _PTHREAD_T
#define	sigaddset(set, signo)	(*(set) |= __sigbits(signo), 0)
#define	sigdelset(set, signo)	(*(set) &= ~__sigbits(signo), 0)
#define	sigismember(set, signo)	((*(set) & __sigbits(signo)) != 0)
#define	sigemptyset(set)	(*(set) = 0, 0)
#define	sigfillset(set)		(*(set) = ~(sigset_t)0, 0)
# define SIGCHLD SIGCLD
# define STDIN_FILENO 0
# define STDOUT_FILENO 1
# define dup2(f, t) (close (t), fcntl (f, F_DUPFD, t))
# define WEXITSTATUS(stat_val) ((unsigned int) (stat_val) >> 8)
# define WIFEXITED(stat_val) (((stat_val) & 255) == 0)
# define vfork fork
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
#define _USECONDS_T
#define	NBBY		__DARWIN_NBBY
#define NFDBITS		__DARWIN_NFDBITS
#define	howmany(x, y)	__DARWIN_howmany(x, y)
#define _PTHREAD_COND_T
#define _PTHREAD_CONDATTR_T
#define _PTHREAD_MUTEX_T
#define _PTHREAD_MUTEXATTR_T
#define _PTHREAD_ONCE_T
#define _PTHREAD_RWLOCK_T
#define _PTHREAD_RWLOCKATTR_T
#define _PTHREAD_KEY_T
#define _FSBLKCNT_T
#define _FSFILCNT_T
#define BISON_SYSTEM_H
#define verify(name, assertion) struct name {char name[(assertion) ? 1 : -1];}
# define IF_LINT(Code) /* empty */
#define N_(Msgid) (Msgid)
# define LOCALEDIR "/usr/local/share/locale"
# define obstack_chunk_alloc xmalloc
# define obstack_chunk_free  free
#define obstack_sgrow(Obs, Str) \
  obstack_grow (Obs, Str, strlen (Str))
#define obstack_fgrow1(Obs, Format, Arg1)	\
do {						\
  char buf[4096];				\
  sprintf (buf, Format, Arg1);			\
  obstack_grow (Obs, buf, strlen (buf));	\
} while (0)
#define obstack_fgrow2(Obs, Format, Arg1, Arg2)	\
do {						\
  char buf[4096];				\
  sprintf (buf, Format, Arg1, Arg2);		\
  obstack_grow (Obs, buf, strlen (buf));	\
} while (0)
#define obstack_fgrow3(Obs, Format, Arg1, Arg2, Arg3)	\
do {							\
  char buf[4096];					\
  sprintf (buf, Format, Arg1, Arg2, Arg3);		\
  obstack_grow (Obs, buf, strlen (buf));		\
} while (0)
#define obstack_fgrow4(Obs, Format, Arg1, Arg2, Arg3, Arg4)	\
do {								\
  char buf[4096];						\
  sprintf (buf, Format, Arg1, Arg2, Arg3, Arg4);		\
  obstack_grow (Obs, buf, strlen (buf));			\
} while (0)
#  define TAB_EXT	".tab"
#  define OUTPUT_EXT	".output"
# define DEFAULT_TMPDIR "/tmp"
#define LIST_FREE(Type, List)			\
do {						\
  Type *_node, *_next;				\
  for (_node = List; _node; _node = _next)	\
    {						\
      _next = _node->next;			\
      free (_node);				\
    }						\
} while (0)
#define	_SYS_TIMES_H_
# define RUSAGE_SELF 0
# define TICKS_PER_SECOND sysconf (_SC_CLK_TCK)
#  define TICKS_PER_SECOND CLK_TCK
#   define TICKS_PER_SECOND HZ
#   define TICKS_PER_SECOND 100
# define USE_TIMES
# define HAVE_USER_TIME
# define HAVE_SYS_TIME
# define HAVE_WALL_TIME
# define USE_GETRUSAGE
# define USE_CLOCK
#define TICKS_TO_MSEC (1.0 / TICKS_PER_SECOND)
#define CLOCKS_TO_MSEC (1.0 / CLOCKS_PER_SEC)
#define GCC_TIMEVAR_H
#define DEFTIMEVAR(identifier__, name__) \
    identifier__,
#define TIMEVAR_ENABLE (timevar_report)
#define DEFTIMEVAR(identifier__, name__) \
  timevars[identifier__].name = name__;
#define VBITSET_N_WORDS(N) (((N) + BITSET_WORD_BITS - 1) / BITSET_WORD_BITS)
#define VBITSET_WORDS(X) ((X)->b.cdata)
#define VBITSET_SIZE(X) ((X)->b.csize)
#define VBITSET_ASIZE(X) ((X)->v.size)
# define CLOSURE_H_
# define GRAM_H_
# define LOCATION_H_
# define UNIQSTR_H_
#define UNIQSTR_EQ(USTR1, USTR2) ((USTR1) == (USTR2))
#define YYLTYPE location
# define SYMTAB_H_
#define SYMBOL_NUMBER_MAXIMUM INT_MAX
#define USER_NUMBER_UNDEFINED -1
#define USER_NUMBER_ALIAS -9991
#define NUMBER_UNDEFINED (-1)
# define ISTOKEN(i)	((i) < ntokens)
# define ISVAR(i)	((i) >= ntokens)
# define DERIVES_H_
# define GETARGS_H_
# define READER_H_
# define SYMLIST_H_
# define YYTOKENTYPE
#define GRAM_EOF 0
#define STRING 258
#define INT 259
#define PERCENT_TOKEN 260
#define PERCENT_NTERM 261
#define PERCENT_TYPE 262
#define PERCENT_DESTRUCTOR 263
#define PERCENT_PRINTER 264
#define PERCENT_UNION 265
#define PERCENT_LEFT 266
#define PERCENT_RIGHT 267
#define PERCENT_NONASSOC 268
#define PERCENT_PREC 269
#define PERCENT_DPREC 270
#define PERCENT_MERGE 271
#define PERCENT_DEBUG 272
#define PERCENT_DEFAULT_PREC 273
#define PERCENT_DEFINE 274
#define PERCENT_DEFINES 275
#define PERCENT_ERROR_VERBOSE 276
#define PERCENT_EXPECT 277
#define PERCENT_EXPECT_RR 278
#define PERCENT_FILE_PREFIX 279
#define PERCENT_GLR_PARSER 280
#define PERCENT_INITIAL_ACTION 281
#define PERCENT_LEX_PARAM 282
#define PERCENT_LOCATIONS 283
#define PERCENT_NAME_PREFIX 284
#define PERCENT_NO_DEFAULT_PREC 285
#define PERCENT_NO_LINES 286
#define PERCENT_NONDETERMINISTIC_PARSER 287
#define PERCENT_OUTPUT 288
#define PERCENT_PARSE_PARAM 289
#define PERCENT_PURE_PARSER 290
#define PERCENT_SKELETON 291
#define PERCENT_START 292
#define PERCENT_TOKEN_TABLE 293
#define PERCENT_VERBOSE 294
#define PERCENT_YACC 295
#define TYPE 296
#define EQUAL 297
#define SEMICOLON 298
#define PIPE 299
#define ID 300
#define ID_COLON 301
#define PERCENT_PERCENT 302
#define PROLOGUE 303
#define EPILOGUE 304
#define BRACED_CODE 305
# define YY_DECL int gram_lex (YYSTYPE *val, location *loc)
#define FDERIVES(Var)   fderives[(Var) - ntokens]
#define   FIRSTS(Var)   firsts[(Var) - ntokens]
# define COMPLAIN_H_ 1
# define FILES_H_
# define LR0_H_
# define STATE_H_
# define STATE_NUMBER_MAXIMUM INT_MAX
#define TRANSITION_SYMBOL(Transitions, Num) \
  (Transitions->states[Num]->accessing_symbol)
#define TRANSITION_IS_SHIFT(Transitions, Num) \
  (ISTOKEN (TRANSITION_SYMBOL (Transitions, Num)))
#define TRANSITION_IS_GOTO(Transitions, Num) \
  (!TRANSITION_IS_SHIFT (Transitions, Num))
#define TRANSITION_IS_ERROR(Transitions, Num) \
  (TRANSITION_SYMBOL (Transitions, Num) == errtoken->number)
#define TRANSITION_DISABLE(Transitions, Num) \
  (Transitions->states[Num] = NULL)
#define TRANSITION_IS_DISABLED(Transitions, Num) \
  (Transitions->states[Num] == NULL)
#define FOR_EACH_SHIFT(Transitions, Iter)			\
  for (Iter = 0;						\
       Iter < Transitions->num					\
	 && (TRANSITION_IS_DISABLED (Transitions, Iter)		\
	     || TRANSITION_IS_SHIFT (Transitions, Iter));	\
       ++Iter)							\
    if (!TRANSITION_IS_DISABLED (Transitions, Iter))
# define CONFLICTS_H_
# define LALR_H_
# define GOTO_NUMBER_MAXIMUM ((goto_number) -1)
# define __GNU_LIBRARY__
# define HACK_FOR___GNU_LIBRARY___PROTOTYPE 1
# define REDUCE_H_
# define NULLABLE_H_
# define RELATION_H_
#define END_NODE ((relation_node) -1)
# define MUSCLE_TAB_H_
#define MUSCLE_INSERT_BOOL(Key, Value)				\
{								\
  int v = Value;						\
  MUSCLE_INSERT_INT (Key, v);					\
}
#define MUSCLE_INSERT_INT(Key, Value)				\
{								\
  obstack_fgrow1 (&muscle_obstack, "%d", Value);	       	\
  obstack_1grow (&muscle_obstack, 0);				\
  muscle_insert (Key, obstack_finish (&muscle_obstack));	\
}
#define MUSCLE_INSERT_LONG_INT(Key, Value)			\
{								\
  obstack_fgrow1 (&muscle_obstack, "%ld", Value);	       	\
  obstack_1grow (&muscle_obstack, 0);				\
  muscle_insert (Key, obstack_finish (&muscle_obstack));	\
}
#define MUSCLE_INSERT_STRING(Key, Value)			\
{								\
  obstack_sgrow (&muscle_obstack, Value);			\
  obstack_1grow (&muscle_obstack, 0);				\
  muscle_insert (Key, obstack_finish (&muscle_obstack));	\
}
#define MUSCLE_OBSTACK_SGROW(Obstack, Value)			\
{								\
  char const *p;						\
  for (p = Value; *p; p++)					\
    switch (*p)							\
      {								\
      case '$':	obstack_sgrow (Obstack, "$]["); break;		\
      case '@':	obstack_sgrow (Obstack, "@@" ); break;		\
      case '[':	obstack_sgrow (Obstack, "@{" ); break;		\
      case ']':	obstack_sgrow (Obstack, "@}" ); break;		\
      default: obstack_1grow (Obstack, *p); break;		\
      }								\
}
#define MUSCLE_INSERT_C_STRING(Key, Value)			\
{								\
  MUSCLE_OBSTACK_SGROW (&muscle_obstack,			\
			quotearg_style (c_quoting_style,	\
					Value));		\
  obstack_1grow (&muscle_obstack, 0);				\
  muscle_insert (Key, obstack_finish (&muscle_obstack));	\
}
# define OUTPUT_H_
# define PRINT_H_
# define PRINT_GRAPH_H_
# define TABLES_H_
#define HT_INITIAL_CAPACITY 257
#define GENERATE_MUSCLE_INSERT_TABLE(Name, Type)			\
									\
static void								\
Name (const char *name,							\
      Type *table_data,							\
      Type first,							\
      int begin,							\
      int end)								\
{									\
  Type min = first;							\
  Type max = first;							\
  long int lmin;							\
  long int lmax;							\
  int i;								\
  int j = 1;								\
									\
  obstack_fgrow1 (&format_obstack, "%6d", first);			\
  for (i = begin; i < end; ++i)						\
    {									\
      obstack_1grow (&format_obstack, ',');				\
      if (j >= 10)							\
	{								\
	  obstack_sgrow (&format_obstack, "\n  ");			\
	  j = 1;							\
	}								\
      else								\
	++j;								\
      obstack_fgrow1 (&format_obstack, "%6d", table_data[i]);		\
      if (table_data[i] < min)						\
	min = table_data[i];						\
      if (max < table_data[i])						\
	max = table_data[i];						\
    }									\
  obstack_1grow (&format_obstack, 0);					\
  muscle_insert (name, obstack_finish (&format_obstack));		\
									\
  lmin = min;								\
  lmax = max;								\
  /* Build `NAME_min' and `NAME_max' in the obstack. */			\
  obstack_fgrow1 (&format_obstack, "%s_min", name);			\
  obstack_1grow (&format_obstack, 0);					\
  MUSCLE_INSERT_LONG_INT (obstack_finish (&format_obstack), lmin);	\
  obstack_fgrow1 (&format_obstack, "%s_max", name);			\
  obstack_1grow (&format_obstack, 0);					\
  MUSCLE_INSERT_LONG_INT (obstack_finish (&format_obstack), lmax);	\
}
#define YYBISON 1
#define YYSKELETON_NAME "yacc.c"
#define YYPURE 1
#define YYLSP_NEEDED 1
#define yyparse gram_parse
#define yylex   gram_lex
#define yyerror gram_error
#define yylval  gram_lval
#define yychar  gram_char
#define yydebug gram_debug
#define yynerrs gram_nerrs
#define yylloc gram_lloc
#define YYLLOC_DEFAULT(Current, Rhs, N)  (Current) = lloc_default (Rhs, N)
#define YY_LOCATION_PRINT(File, Loc) \
          location_print (File, Loc)
#define yyerror(Msg) \
        gram_error (&yylloc, Msg)
#define YYPRINT(File, Type, Value) \
	print_token_value (File, Type, &Value)
# define YYDEBUG 1
#    define YYSTACK_ALLOC __builtin_alloca
#    define YYSTACK_ALLOC alloca
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAXIMUM)
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#define YYFINAL  3
#define YYLAST   158
#define YYNTOKENS  51
#define YYNNTS  25
#define YYNRULES  79
#define YYNSTATES  108
#define YYUNDEFTOK  2
#define YYMAXUTOK   305
#define YYPACT_NINF -67
#define YYTABLE_NINF -79
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
# define YYLEX yylex (&yylval, &yylloc)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value, Location);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)
# define YYINITDEPTH 200
# define YYMAXDEPTH 10000
#   define yystrlen strlen
#   define yystpcpy stpcpy
#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#define END_TEST(End)				\
do {						\
  if (column + strlen(buffer) > (End))		\
    {						\
      fprintf (out, "%s\n   ", buffer);		\
      column = 3;				\
      buffer[0] = 0;				\
    }						\
} while (0)
# define VCG_H_
#define yy_create_buffer gram__create_buffer
#define yy_delete_buffer gram__delete_buffer
#define yy_scan_buffer gram__scan_buffer
#define yy_scan_string gram__scan_string
#define yy_scan_bytes gram__scan_bytes
#define yy_flex_debug gram__flex_debug
#define yy_init_buffer gram__init_buffer
#define yy_flush_buffer gram__flush_buffer
#define yy_load_buffer_state gram__load_buffer_state
#define yy_switch_to_buffer gram__switch_to_buffer
#define yyin gram_in
#define yyleng gram_leng
#define yylex gram_lex
#define yyout gram_out
#define yyrestart gram_restart
#define yytext gram_text
#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define __cplusplus
#define YY_USE_PROTOS
#define YY_USE_CONST
#define yyconst const
#define yyconst
#define YY_PROTO(proto) proto
#define YY_PROTO(proto) ()
#define YY_NULL 0
#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)
#define BEGIN yy_start = 1 + 2 *
#define YY_START ((yy_start - 1) / 2)
#define YYSTATE YY_START
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)
#define YY_NEW_FILE yyrestart( yyin )
#define YY_END_OF_BUFFER_CHAR 0
#define YY_BUF_SIZE 16384
#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
		*yy_cp = yy_hold_char; \
		YY_RESTORE_YY_MORE_OFFSET \
		yy_c_buf_p = yy_cp = yy_bp + n - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )
#define unput(c) yyunput( c, yytext_ptr )
#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
#define YY_BUFFER_EOF_PENDING 2
#define YY_CURRENT_BUFFER yy_current_buffer
#define YY_FLUSH_BUFFER yy_flush_buffer( yy_current_buffer )
#define yy_new_buffer yy_create_buffer
#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_is_interactive = is_interactive; \
	}
#define yy_set_bol(at_bol) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_at_bol = at_bol; \
	}
#define YY_AT_BOL() (yy_current_buffer->yy_at_bol)
#define yywrap() 1
#define YY_SKIP_YYWRAP
#define FLEX_DEBUG
#define yytext_ptr yytext
#define YY_DO_BEFORE_ACTION \
	yytext_ptr = yy_bp; \
	yyleng = (int) (yy_cp - yy_bp); \
	yy_hold_char = *yy_cp; \
	*yy_cp = '\0'; \
	yy_c_buf_p = yy_cp;
#define YY_NUM_RULES 106
#define YY_END_OF_BUFFER 107
#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
#define INITIAL 0
#define YY_NO_UNPUT 1
#define YY_NEVER_INTERACTIVE 1
#define _Bool	bool
#define bool	bool
#define false	false
#define true	true
#define YY_USER_INIT					\
  do							\
    {							\
      scanner_cursor.file = current_file;		\
      scanner_cursor.line = 1;				\
      scanner_cursor.column = 1;			\
      code_start = scanner_cursor;			\
    }							\
  while (0)
#define YY_USER_ACTION  adjust_location (loc, yytext, yyleng);
#define YY_INPUT(buf, result, size) ((result) = no_cr_read (yyin, buf, size))
#define STRING_GROW   \
  obstack_grow (&obstack_for_string, yytext, yyleng)
#define STRING_FINISH					\
  do {							\
    obstack_1grow (&obstack_for_string, '\0');		\
    last_string = obstack_finish (&obstack_for_string);	\
  } while (0)
#define STRING_FREE \
  obstack_free (&obstack_for_string, last_string)
#define SC_COMMENT 1
#define SC_LINE_COMMENT 2
#define SC_YACC_COMMENT 3
#define SC_STRING 4
#define SC_CHARACTER 5
#define SC_AFTER_IDENTIFIER 6
#define SC_ESCAPED_STRING 7
#define SC_ESCAPED_CHARACTER 8
#define SC_PRE_CODE 9
#define SC_BRACED_CODE 10
#define SC_PROLOGUE 11
#define SC_EPILOGUE 12
#define YY_NO_PUSH_STATE 1
#define YY_NO_POP_STATE 1
#define YY_NO_TOP_STATE 1
#define YY_READ_BUF_SIZE 8192
#define ECHO (void) fwrite( yytext, yyleng, 1, yyout )
#define YY_INPUT(buf,result,max_size) \
	if ( yy_current_buffer->yy_is_interactive ) \
		{ \
		int c = '*', n; \
		for ( n = 0; n < max_size && \
			     (c = getc( yyin )) != EOF && c != '\n'; ++n ) \
			buf[n] = (char) c; \
		if ( c == '\n' ) \
			buf[n++] = (char) c; \
		if ( c == EOF && ferror( yyin ) ) \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
		result = n; \
		} \
	else \
		{ \
		errno=0; \
		while ( (result = fread(buf, 1, max_size, yyin))==0 && ferror(yyin)) \
			{ \
			if( errno != EINTR) \
				{ \
				YY_FATAL_ERROR( "input in flex scanner failed" ); \
				break; \
				} \
			errno=0; \
			clearerr(yyin); \
			} \
		}
#define yyterminate() return YY_NULL
#define YY_START_STACK_INCR 25
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#define YY_DECL int yylex YY_PROTO(( void ))
#define YY_USER_ACTION
#define YY_BREAK break;
#define YY_RULE_SETUP \
	if ( yyleng > 0 ) \
		yy_current_buffer->yy_at_bol = \
				(yytext[yyleng - 1] == '\n'); \
	YY_USER_ACTION
#define YY_EXIT_FAILURE 2
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
		yytext[yyleng] = yy_hold_char; \
		yy_c_buf_p = yytext + n; \
		yy_hold_char = *yy_c_buf_p; \
		*yy_c_buf_p = '\0'; \
		yyleng = n; \
		} \
	while ( 0 )
#define yy_create_buffer skel__create_buffer
#define yy_delete_buffer skel__delete_buffer
#define yy_scan_buffer skel__scan_buffer
#define yy_scan_string skel__scan_string
#define yy_scan_bytes skel__scan_bytes
#define yy_flex_debug skel__flex_debug
#define yy_init_buffer skel__init_buffer
#define yy_flush_buffer skel__flush_buffer
#define yy_load_buffer_state skel__load_buffer_state
#define yy_switch_to_buffer skel__switch_to_buffer
#define yyin skel_in
#define yyleng skel_leng
#define yylex skel_lex
#define yyout skel_out
#define yyrestart skel_restart
#define yytext skel_text
#define YY_NUM_RULES 12
#define YY_END_OF_BUFFER 13
#define QPUTS(String) \
   fputs (quotearg_style (c_quoting_style, (String)), yyout)
#define YY_RULE_SETUP \
	YY_USER_ACTION
#define _INTTYPES_H_
#  define __PRI_8_LENGTH_MODIFIER__ "hh"
#  define __PRI_64_LENGTH_MODIFIER__ "ll"
#  define __SCN_64_LENGTH_MODIFIER__ "ll"
#  define __PRI_MAX_LENGTH_MODIFIER__ "j"
#  define __SCN_MAX_LENGTH_MODIFIER__ "j"
#  define PRId8         __PRI_8_LENGTH_MODIFIER__ "d"
#  define PRIi8         __PRI_8_LENGTH_MODIFIER__ "i"
#  define PRIo8         __PRI_8_LENGTH_MODIFIER__ "o"
#  define PRIu8         __PRI_8_LENGTH_MODIFIER__ "u"
#  define PRIx8         __PRI_8_LENGTH_MODIFIER__ "x"
#  define PRIX8         __PRI_8_LENGTH_MODIFIER__ "X"
#  define PRId16        "hd"
#  define PRIi16        "hi"
#  define PRIo16        "ho"
#  define PRIu16        "hu"
#  define PRIx16        "hx"
#  define PRIX16        "hX"
#  define PRId32        "d"
#  define PRIi32        "i"
#  define PRIo32        "o"
#  define PRIu32        "u"
#  define PRIx32        "x"
#  define PRIX32        "X"
#  define PRId64        __PRI_64_LENGTH_MODIFIER__ "d"
#  define PRIi64        __PRI_64_LENGTH_MODIFIER__ "i"
#  define PRIo64        __PRI_64_LENGTH_MODIFIER__ "o"
#  define PRIu64        __PRI_64_LENGTH_MODIFIER__ "u"
#  define PRIx64        __PRI_64_LENGTH_MODIFIER__ "x"
#  define PRIX64        __PRI_64_LENGTH_MODIFIER__ "X"
#  define PRIdLEAST8    PRId8
#  define PRIiLEAST8    PRIi8
#  define PRIoLEAST8    PRIo8
#  define PRIuLEAST8    PRIu8
#  define PRIxLEAST8    PRIx8
#  define PRIXLEAST8    PRIX8
#  define PRIdLEAST16   PRId16
#  define PRIiLEAST16   PRIi16
#  define PRIoLEAST16   PRIo16
#  define PRIuLEAST16   PRIu16
#  define PRIxLEAST16   PRIx16
#  define PRIXLEAST16   PRIX16
#  define PRIdLEAST32   PRId32
#  define PRIiLEAST32   PRIi32
#  define PRIoLEAST32   PRIo32
#  define PRIuLEAST32   PRIu32
#  define PRIxLEAST32   PRIx32
#  define PRIXLEAST32   PRIX32
#  define PRIdLEAST64   PRId64
#  define PRIiLEAST64   PRIi64
#  define PRIoLEAST64   PRIo64
#  define PRIuLEAST64   PRIu64
#  define PRIxLEAST64   PRIx64
#  define PRIXLEAST64   PRIX64
#  define PRIdFAST8     PRId8
#  define PRIiFAST8     PRIi8
#  define PRIoFAST8     PRIo8
#  define PRIuFAST8     PRIu8
#  define PRIxFAST8     PRIx8
#  define PRIXFAST8     PRIX8
#  define PRIdFAST16    PRId16
#  define PRIiFAST16    PRIi16
#  define PRIoFAST16    PRIo16
#  define PRIuFAST16    PRIu16
#  define PRIxFAST16    PRIx16
#  define PRIXFAST16    PRIX16
#  define PRIdFAST32    PRId32
#  define PRIiFAST32    PRIi32
#  define PRIoFAST32    PRIo32
#  define PRIuFAST32    PRIu32
#  define PRIxFAST32    PRIx32
#  define PRIXFAST32    PRIX32
#  define PRIdFAST64    PRId64
#  define PRIiFAST64    PRIi64
#  define PRIoFAST64    PRIo64
#  define PRIuFAST64    PRIu64
#  define PRIxFAST64    PRIx64
#  define PRIXFAST64    PRIX64
#  define PRIdPTR       "ld"
#  define PRIiPTR       "li"
#  define PRIoPTR       "lo"
#  define PRIuPTR       "lu"
#  define PRIxPTR       "lx"
#  define PRIXPTR       "lX"
#  define PRIdMAX        __PRI_MAX_LENGTH_MODIFIER__ "d"
#  define PRIiMAX        __PRI_MAX_LENGTH_MODIFIER__ "i"
#  define PRIoMAX        __PRI_MAX_LENGTH_MODIFIER__ "o"
#  define PRIuMAX        __PRI_MAX_LENGTH_MODIFIER__ "u"
#  define PRIxMAX        __PRI_MAX_LENGTH_MODIFIER__ "x"
#  define PRIXMAX        __PRI_MAX_LENGTH_MODIFIER__ "X"
#  define SCNd8         __PRI_8_LENGTH_MODIFIER__ "d"
#  define SCNi8         __PRI_8_LENGTH_MODIFIER__ "i"
#  define SCNo8         __PRI_8_LENGTH_MODIFIER__ "o"
#  define SCNu8         __PRI_8_LENGTH_MODIFIER__ "u"
#  define SCNx8         __PRI_8_LENGTH_MODIFIER__ "x"
#  define SCNd16        "hd"
#  define SCNi16        "hi"
#  define SCNo16        "ho"
#  define SCNu16        "hu"
#  define SCNx16        "hx"
#  define SCNd32        "d"
#  define SCNi32        "i"
#  define SCNo32        "o"
#  define SCNu32        "u"
#  define SCNx32        "x"
#  define SCNd64        __SCN_64_LENGTH_MODIFIER__ "d"
#  define SCNi64        __SCN_64_LENGTH_MODIFIER__ "i"
#  define SCNo64        __SCN_64_LENGTH_MODIFIER__ "o"
#  define SCNu64        __SCN_64_LENGTH_MODIFIER__ "u"
#  define SCNx64        __SCN_64_LENGTH_MODIFIER__ "x"
#  define SCNdLEAST8    SCNd8
#  define SCNiLEAST8    SCNi8
#  define SCNoLEAST8    SCNo8
#  define SCNuLEAST8    SCNu8
#  define SCNxLEAST8    SCNx8
#  define SCNdLEAST16   SCNd16
#  define SCNiLEAST16   SCNi16
#  define SCNoLEAST16   SCNo16
#  define SCNuLEAST16   SCNu16
#  define SCNxLEAST16   SCNx16
#  define SCNdLEAST32   SCNd32
#  define SCNiLEAST32   SCNi32
#  define SCNoLEAST32   SCNo32
#  define SCNuLEAST32   SCNu32
#  define SCNxLEAST32   SCNx32
#  define SCNdLEAST64   SCNd64
#  define SCNiLEAST64   SCNi64
#  define SCNoLEAST64   SCNo64
#  define SCNuLEAST64   SCNu64
#  define SCNxLEAST64   SCNx64
#  define SCNdFAST8     SCNd8
#  define SCNiFAST8     SCNi8
#  define SCNoFAST8     SCNo8
#  define SCNuFAST8     SCNu8
#  define SCNxFAST8     SCNx8
#  define SCNdFAST16    SCNd16
#  define SCNiFAST16    SCNi16
#  define SCNoFAST16    SCNo16
#  define SCNuFAST16    SCNu16
#  define SCNxFAST16    SCNx16
#  define SCNdFAST32    SCNd32
#  define SCNiFAST32    SCNi32
#  define SCNoFAST32    SCNo32
#  define SCNuFAST32    SCNu32
#  define SCNxFAST32    SCNx32
#  define SCNdFAST64    SCNd64
#  define SCNiFAST64    SCNi64
#  define SCNoFAST64    SCNo64
#  define SCNuFAST64    SCNu64
#  define SCNxFAST64    SCNx64
#  define SCNdPTR       "ld"
#  define SCNiPTR       "li"
#  define SCNoPTR       "lo"
#  define SCNuPTR       "lu"
#  define SCNxPTR       "lx"
#  define SCNdMAX       __SCN_MAX_LENGTH_MODIFIER__ "d"
#  define SCNiMAX       __SCN_MAX_LENGTH_MODIFIER__ "i"
#  define SCNoMAX       __SCN_MAX_LENGTH_MODIFIER__ "o"
#  define SCNuMAX       __SCN_MAX_LENGTH_MODIFIER__ "u"
#  define SCNxMAX       __SCN_MAX_LENGTH_MODIFIER__ "x"
#define _STDINT_H_
#define __WORDSIZE 64
#define _UINT8_T
#define _UINT16_T
#define _UINT32_T
#define _UINT64_T
#define _INTMAX_T
#define _UINTMAX_T
#define INT8_MAX         127
#define INT16_MAX        32767
#define INT32_MAX        2147483647
#define INT64_MAX        9223372036854775807LL
#define INT8_MIN          -128
#define INT16_MIN         -32768
#define INT32_MIN        (-INT32_MAX-1)
#define INT64_MIN        (-INT64_MAX-1)
#define UINT8_MAX         255
#define UINT16_MAX        65535
#define UINT32_MAX        4294967295U
#define UINT64_MAX        18446744073709551615ULL
#define INT_LEAST8_MIN    INT8_MIN
#define INT_LEAST16_MIN   INT16_MIN
#define INT_LEAST32_MIN   INT32_MIN
#define INT_LEAST64_MIN   INT64_MIN
#define INT_LEAST8_MAX    INT8_MAX
#define INT_LEAST16_MAX   INT16_MAX
#define INT_LEAST32_MAX   INT32_MAX
#define INT_LEAST64_MAX   INT64_MAX
#define UINT_LEAST8_MAX   UINT8_MAX
#define UINT_LEAST16_MAX  UINT16_MAX
#define UINT_LEAST32_MAX  UINT32_MAX
#define UINT_LEAST64_MAX  UINT64_MAX
#define INT_FAST8_MIN     INT8_MIN
#define INT_FAST16_MIN    INT16_MIN
#define INT_FAST32_MIN    INT32_MIN
#define INT_FAST64_MIN    INT64_MIN
#define INT_FAST8_MAX     INT8_MAX
#define INT_FAST16_MAX    INT16_MAX
#define INT_FAST32_MAX    INT32_MAX
#define INT_FAST64_MAX    INT64_MAX
#define UINT_FAST8_MAX    UINT8_MAX
#define UINT_FAST16_MAX   UINT16_MAX
#define UINT_FAST32_MAX   UINT32_MAX
#define UINT_FAST64_MAX   UINT64_MAX
#define INTPTR_MIN	  INT64_MIN
#define INTPTR_MAX	  INT64_MAX
#define UINTPTR_MAX	  UINT64_MAX
#define INTMAX_MIN        INT64_MIN
#define INTMAX_MAX        INT64_MAX
#define UINTMAX_MAX       UINT64_MAX
#define PTRDIFF_MIN	  INT64_MIN
#define PTRDIFF_MAX	  INT64_MAX
#define SIZE_MAX	  UINT64_MAX
#    define WCHAR_MAX     __WCHAR_MAX__
#    define WCHAR_MIN       (-WCHAR_MAX-1)
#define WINT_MIN	  INT32_MIN
#define WINT_MAX	  INT32_MAX
#define SIG_ATOMIC_MIN	  INT32_MIN
#define SIG_ATOMIC_MAX	  INT32_MAX
#define INT8_C(v)    (v)
#define INT16_C(v)   (v)
#define INT32_C(v)   (v)
#define INT64_C(v)   (v ## LL)
#define UINT8_C(v)   (v ## U)
#define UINT16_C(v)  (v ## U)
#define UINT32_C(v)  (v ## U)
#define UINT64_C(v)  (v ## ULL)
#define INTMAX_C(v)  (v ## LL)
#define UINTMAX_C(v) (v ## ULL)
# define IF_LINT(Code) Code
# define __format__ format
# define __printf__ printf
# define TAB_EXT	"_tab"
# define OUTPUT_EXT	".output"
#define BASE_MAXIMUM INT_MAX
#define BASE_MINIMUM INT_MIN
# define VCG_DEFAULTS_H_
# define G_TITLE		NULL
# define G_LABEL		NULL
# define G_INFOS1		NULL
# define G_INFOS2		NULL
# define G_INFOS3		NULL
# define G_COLOR		white
# define G_TEXTCOLOR		black
# define G_BORDERCOLOR		G_TEXTCOLOR
# define G_WIDTH		100
# define G_HEIGHT		100
# define G_BORDERWIDTH		2
# define G_X			0
# define G_Y			0
# define G_FOLDING		0
# define G_SHRINK		1
# define G_STRETCH		1
# define G_TEXTMODE		centered
# define G_SHAPE		box
# define G_VERTICAL_ORDER	0
# define G_HORIZONTAL_ORDER	0
# define G_XMAX			90
# define G_YMAX			90
# define G_XBASE		5
# define G_YBASE		5
# define G_XSPACE		20
# define G_YSPACE		70
# define G_XLSPACE		G_XSPACE / 2
# define G_XRASTER		1
# define G_YRASTER		1
# define G_XLRASTER		1
# define G_HIDDEN		-1
# define G_CLASSNAME		NULL
# define G_INFONAME		NULL
# define G_COLORENTRY		NULL
# define G_LAYOUTALGORITHM	normal
# define G_LAYOUT_DOWNFACTOR	1
# define G_LAYOUT_UPFACTOR	1
# define G_LAYOUT_NEARFACTOR	1
# define G_LAYOUT_SPLINEFACTOR	70
# define G_LATE_EDGE_LABELS	no
# define G_DISPLAY_EDGE_LABELS	no
# define G_DIRTY_EDGE_LABELS	no
# define G_FINETUNING		yes
# define G_IGNORE_SINGLES	no
# define G_LONG_STRAIGHT_PHASE	no
# define G_PRIORITY_PHASE	no
# define G_MANHATTAN_EDGES	no
# define G_SMANHATTAN_EDGES	no
# define G_NEAR_EDGES		yes
# define G_ORIENTATION		top_to_bottom
# define G_NODE_ALIGNMENT	center
# define G_PORT_SHARING		yes
# define G_ARROW_MODE		fixed
# define G_TREEFACTOR		0.5
# define G_SPREADLEVEL		1
# define G_CROSSING_WEIGHT	bary
# define G_CROSSING_PHASE2	yes
# define G_CROSSING_OPTIMIZATION	yes
# define G_VIEW			normal_view
# define G_EDGES		yes
# define G_NODES		yes
# define G_SPLINES		no
# define G_BMAX			100
# define G_CMIN			0
# define G_CMAX			INT_MAX
# define G_PMIN			0
# define G_PMAX			100
# define G_RMIN			0
# define G_RMAX			100
# define G_SMAX			100
# define G_NODE_LIST		NULL
# define G_EDGE_LIST		NULL
# define N_TITLE		NULL
# define N_LABEL		NULL
# define N_LOCX			-1
# define N_LOCY			-1
# define N_VERTICAL_ORDER	-1
# define N_HORIZONTAL_ORDER	-1
# define N_WIDTH		-1
# define N_HEIGHT		-1
# define N_SHRINK		1
# define N_STRETCH		1
# define N_FOLDING		-1
# define N_SHAPE		box
# define N_TEXTMODE		centered
# define N_BORDERWIDTH		2
# define N_COLOR		white
# define N_TEXTCOLOR		black
# define N_BORDERCOLOR		N_TEXTCOLOR
# define N_INFOS1		NULL
# define N_INFOS2		NULL
# define N_INFOS3		NULL
# define N_NEXT			NULL
# define E_EDGE_TYPE		normal_edge
# define E_SOURCENAME		NULL
# define E_TARGETNAME		NULL
# define E_LABEL		NULL
# define E_LINESTYLE		continuous
# define E_THICKNESS		2
# define E_CLASS		1
# define E_COLOR		black
# define E_TEXTCOLOR		E_COLOR
# define E_ARROWCOLOR		E_COLOR
# define E_BACKARROWCOLOR	E_COLOR
# define E_ARROWSIZE		10
# define E_BACKARROWSIZE	0
# define E_ARROWSTYLE		solid
# define E_BACKARROWSTYLE	none
# define E_PRIORITY		1
# define E_ANCHOR		-1
# define E_HORIZONTAL_ORDER	-1
# define E_NEXT			NULL
