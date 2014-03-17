typedef struct {} uid_t;
typedef struct {} gid_t;
typedef struct {} pid_t;
typedef struct {} size_t;
typedef struct {} off_t;
typedef struct {} ssize_t;
typedef struct {} useconds_t;
typedef struct {} __darwin_time_t;
typedef struct {} __darwin_suseconds_t;
typedef struct {} __int32_t;
typedef struct {} __DARWIN_NFDBITS;
typedef struct {} fd_set;
typedef struct {} sigset_t;
typedef struct {} uuid_t;
typedef struct {} mode_t;
typedef struct {} dev_t;
typedef struct {} fpos_t;
typedef struct {} FILE;
typedef struct {} va_list;
typedef struct {} WORD_DESC;
typedef struct {} REDIRECTEE;
typedef struct {} REDIRECT;
typedef struct {} COMMAND;
typedef struct {} WORD_LIST;
typedef struct {} PATTERN_LIST;
typedef struct {} __uint16_t;
typedef struct {} __uint32_t;
typedef struct {} __uint64_t;
typedef struct {} GENERIC_LIST;
typedef struct {} BUCKET_CONTENTS;
typedef struct {} HASH_TABLE;
typedef struct {} alias_t;
typedef struct {} Function;
typedef struct {} jmp_buf;
typedef struct {} sigjmp_buf;
typedef struct {} procenv_t;
typedef struct {} arrayind_t;
typedef struct {} ARRAY_ELEMENT;
typedef struct {} ARRAY;
typedef struct {} DYNAMIC_FUNC;
typedef struct {} SHELL_VAR;
typedef struct {} sighandler;
typedef struct {} SigHandler;
typedef struct {} __uint8_t;
typedef struct {} __darwin_size_t;
typedef struct {} __darwin_sigset_t;
typedef struct {} pthread_attr_t;
typedef struct {} siginfo_t;
typedef struct {} rlim_t;
typedef struct {} id_t;
typedef struct {} idtype_t;
typedef struct {} div_t;
typedef struct {} ldiv_t;
typedef struct {} lldiv_t;
typedef struct {} wchar_t;
typedef struct {} u_int32_t;
typedef struct {} ino_t;
typedef struct {} nlink_t;
typedef struct {} __DARWIN_STRUCT_STAT64;
typedef struct {} filesec_t;
typedef struct {} filesec_property_t;
typedef struct {} INPUT_STREAM;
typedef struct {} BASH_INPUT;
typedef struct {} histdata_t;
typedef struct {} CPPFunction;
typedef struct {} KEYMAP_ENTRY_ARRAY;
typedef struct {} VFunction;
typedef struct {} HIST_ENTRY;
typedef struct {} CPFunction;
typedef struct {} rl_command_func_t;
typedef struct {} VCPFunction;
typedef struct {} HISTORY_STATE;
typedef struct {} rl_compentry_func_t;
typedef struct {} Keymap;
typedef struct {} STRING_INT_ALIST;
typedef struct {} pthread_t;
typedef struct {} stack_t;
typedef struct {} WAIT;
typedef struct {} PROCESS;
typedef struct {} JOB_STATE;
typedef struct {} JOB;
typedef struct {} HANDLER_ENTRY;
typedef struct {} DEF_FILE;
typedef struct {} BUILTIN_DESC;
typedef struct {} FOR_COM;
typedef struct {} GROUP_COM;
typedef struct {} CASE_COM;
typedef struct {} WHILE_COM;
typedef struct {} IF_COM;
typedef struct {} SIMPLE_COM;
typedef struct {} FUNCTION_DEF;
typedef struct {} SELECT_COM;
typedef struct {} CONNECTION;
typedef struct {} uuid_string_t;
typedef struct {} __darwin_rune_t;
typedef struct {} _RuneEntry;
typedef struct {} _RuneRange;
typedef struct {} _RuneCharClass;
typedef struct {} _RuneLocale;
typedef struct {} __darwin_ct_rune_t;
typedef struct {} clock_t;
typedef struct {} time_t;
typedef struct {} FLIST;
typedef struct {} ELEMENT;
typedef struct {} YYSTYPE;
typedef struct {} EXPR_CONTEXT;
typedef struct {} RLIMTYPE;
typedef struct {} GETGROUPS_T;
typedef struct {} PATH_DATA;
typedef struct {} BUFFERED_STREAM;
typedef struct {} tcflag_t;
typedef struct {} cc_t;
typedef struct {} speed_t;
typedef struct {} NO_PID;
typedef struct {} TIOCGPGRP;
typedef struct {} TIOCOUTQ;
typedef struct {} TIOCGETP;
typedef struct {} TIOCGETC;
typedef struct {} TIOCGLTC;
typedef struct {} TIOCSETN;
typedef struct {} TIOCSETC;
typedef struct {} TIOCSLTC;
typedef struct {} INVALID_SIGNAL_HANDLER;
typedef struct {} TIOCGETD;
typedef struct {} TIOCSETD;
typedef struct {} TIOCGWINSZ;
typedef struct {} PTR_T;
typedef struct {} __DARWIN_STRUCT_DIRENTRY;
typedef struct {} __darwin_pthread_mutex_t;
typedef struct {} DIR;
typedef struct {} you;
typedef struct {} pointer;
typedef struct {} header;
typedef struct {} malloc_info;
typedef struct {} RLIM_INFINITY;
typedef struct {} UNDO_LIST;
typedef struct {} FUNMAP;
typedef struct {} assoc_list;
typedef struct {} FIONREAD;
typedef struct {} KEYMAP_ENTRY;
typedef struct {} TIB;
typedef struct {} PIB;
typedef struct {} TIOCSWINSZ;
typedef struct {} TIOCLGET;
typedef struct {} TIOCLSET;
typedef struct {} TIOCSTART;
typedef struct {} TIOCSTOP;
typedef struct {} sighandler_cxt;
typedef struct {} TIOCSTAT;
typedef struct {} FILEINFO;
typedef struct {} NOW;
typedef struct {} DEFAULT_MAIL_DIRECTORY;
typedef struct {} glob_t;
typedef struct {} sa_family_t;
typedef struct {} _SS_PAD1SIZE;
typedef struct {} __int64_t;
typedef struct {} _SS_PAD2SIZE;
typedef struct {} socklen_t;
typedef struct {} NULL_HANDLER;
typedef struct {} DEV_FD_PREFIX;
typedef struct {} IMPOSSIBLE_TRAP_HANDLER;
typedef struct {} UNWIND_ELT;
typedef struct {} SAVED_VAR;
typedef struct {} YYLTYPE;
typedef struct {} STREAM_SAVER;
typedef struct {} STRING_SAVER;
#define	_UNISTD_H_
#define __TYPES_H_
#define _SYS__TYPES_H_
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
#define	SEEK_SET	0
#define	SEEK_CUR	1
#define	SEEK_END	2
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
#define	_GID_T
#define	_INTPTR_T
#define	_OFF_T
#define	_PID_T
#define	_SIZE_T
#define	_SSIZE_T
#define	_UID_T
#define	_USECONDS_T
#define	NULL __DARWIN_NULL
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
#define __CTERMID_DEFINED 1
#define	_SYS_SELECT_H_
#define __SYS_APPLEAPIOPTS_H__
#define __APPLE_API_STANDARD
#define __APPLE_API_STABLE
#define __APPLE_API_EVOLVING
#define __APPLE_API_UNSTABLE
#define __APPLE_API_PRIVATE
#define __APPLE_API_OBSOLETE
#define __need_fd_set
#define __need_struct_timespec
#define __need_struct_timeval
#define _STRUCT_TIMESPEC	struct timespec
#define _STRUCT_TIMEVAL		struct timeval
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
#define	_TIME_T
#define _SUSECONDS_T
#define _SIGSET_T
#define	FD_SETSIZE	__DARWIN_FD_SETSIZE
#define	FD_SET(n, p)	__DARWIN_FD_SET(n, p)
#define	FD_CLR(n, p)	__DARWIN_FD_CLR(n, p)
#define	FD_ISSET(n, p)	__DARWIN_FD_ISSET(n, p)
#define	FD_ZERO(p)	__DARWIN_FD_ZERO(p)
#define	FD_COPY(f, t)	__DARWIN_FD_COPY(f, t)
#define	_SYS__SELECT_H_
#define	_DEV_T
#define	_MODE_T
#define	_UUID_T
#define	SYNC_VOLUME_FULLSYNC	0x01
#define SYNC_VOLUME_WAIT	0x02
#define	_STDIO_H_
#define _VA_LIST
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
#define	stdin	__stdinp
#define	stdout	__stdoutp
#define	stderr	__stderrp
#define	L_ctermid	1024
#define	__sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define	__sfeof(p)	(((p)->_flags & __SEOF) != 0)
#define	__sferror(p)	(((p)->_flags & __SERR) != 0)
#define	__sclearerr(p)	((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define	__sfileno(p)	((p)->_file)
#define	getc_unlocked(fp)	__sgetc(fp)
#define putc_unlocked(x, fp)	__sputc(x, fp)
#define	getchar_unlocked()	getc_unlocked(stdin)
#define	putchar_unlocked(x)	putc_unlocked(x, stdout)
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
#define _BASHANSI_H_
#define _STRINGS_H_
#define	_STRING_H_
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
#define	_STDLIB_H_ 1
#define _COMMAND_H_
#define _STDC_H_
#  define __STRING(x) #x
#define NOCLOBBER_REDIRECT  -2
#define RESTRICTED_REDIRECT -3
#define HEREDOC_REDIRECT    -4
#define OUTPUT_REDIRECT(ri) \
  (ri == r_output_direction || ri == r_input_output || ri == r_err_and_out)
#define INPUT_REDIRECT(ri) \
  (ri == r_input_direction || ri == r_inputa_direction || ri == r_input_output)
#define WRITE_REDIRECT(ri) \
  (ri == r_output_direction || \
	ri == r_input_output || \
	ri == r_err_and_out || \
	ri == r_appending_to || \
	ri == r_output_force)
#define W_HASDOLLAR	0x01
#define W_QUOTED	0x02
#define W_ASSIGNMENT	0x04
#define W_GLOBEXP	0x08
#define W_NOSPLIT	0x10
#define SUBSHELL_ASYNC	0x01
#define SUBSHELL_PAREN	0x02
#define SUBSHELL_COMSUB	0x04
#define SUBSHELL_FORK	0x08
#define CMD_WANT_SUBSHELL  0x01
#define CMD_FORCE_SUBSHELL 0x02
#define CMD_INVERT_RETURN  0x04
#define CMD_IGNORE_RETURN  0x08
#define CMD_NO_FUNCTIONS   0x10
#define CMD_INHIBIT_EXPANSION 0x20
#define CMD_NO_FORK	   0x40
#define CMD_TIME_PIPELINE  0x80
#define CMD_TIME_POSIX	   0x100
#define CMD_AMPERSAND	   0x200
#define CMD_STDIN_REDIR	   0x400
#define _GENERAL_H_
#  define _BASHTYPES_H_
#define	_SYS_TYPES_H_
#define _BSD_MACHINE_TYPES_H_
#define	_MACHTYPES_H_
#define _INT8_T
#define _INT16_T
#define _INT32_T
#define _INT64_T
#define _UINTPTR_T
#define USER_ADDR_NULL	((user_addr_t) 0)
#define CAST_USER_ADDR_T(a_ptr)   ((user_addr_t)((uintptr_t)(a_ptr)))
#define __offsetof(type, field) ((size_t)(&((type *)0)->field))
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
#define _U_LONG
#define	_BLKCNT_T
#define	_BLKSIZE_T
#define _IN_ADDR_T
#define _IN_PORT_T
#define _INO_T
#define _INO64_T
#define _KEY_T
#define	_NLINK_T
#define _ID_T
#define	major(x)	((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define	minor(x)	((int32_t)((x) & 0xffffff))
#define	makedev(x,y)	((dev_t)(((x) << 24) | (y)))
#define	_CLOCK_T
#define	NBBY		__DARWIN_NBBY
#define NFDBITS		__DARWIN_NFDBITS
#define	howmany(x, y)	__DARWIN_howmany(x, y)
#define _PTHREAD_ATTR_T
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
#  define PTR_T	void *
#define pointer_to_int(x) (int)((long)(x))
#  define savestring(x) (char *)strcpy (xmalloc (1 + strlen (x)), (x))
#  define member(c, s) ((c) ? ((char *)strchr ((s), (c)) != (char *)NULL) : 0)
#define whitespace(c) (((c) == ' ') || ((c) == '\t'))
#define digit(c)  ((c) >= '0' && (c) <= '9')
#define isletter(c) (((c) >= 'A' && (c) <= 'Z') || ((c) >= 'a' && (c) <= 'z'))
#define digit_value(c) ((c) - '0')
#define legal_variable_starter(c) (isletter(c) || (c == '_'))
#define legal_variable_char(c)	(isletter (c) || digit (c) || c == '_')
#define spctabnl(c)	((c) == ' ' || (c) == '\t' || (c) == '\n')
#define REVERSE_LIST(list, type) \
  ((list && list->next) ? (type)reverse_list ((GENERIC_LIST *)list) \
  			: (type)(list))
#  define FASTCOPY(s, d, n)  __builtin_memcpy (d, s, n)
#define STREQ(a, b) ((a)[0] == (b)[0] && strcmp(a, b) == 0)
#define STREQN(a, b, n) ((a)[0] == (b)[0] && strncmp(a, b, n) == 0)
#define STRLEN(s) (((s) && (s)[0]) ? ((s)[1] ? ((s)[2] ? strlen(s) : 2) : 1) : 0)
#define FREE(s)  do { if (s) free (s); } while (0)
#define MEMBER(c, s) (((c) && !(s)[1] && c == s[0]) || (member(c, s)))
#define RESIZE_MALLOCED_BUFFER(str, cind, room, csize, sincr) \
  do { \
    if ((cind) + (room) >= csize) \
      { \
	while ((cind) + (room) >= csize) \
	  csize += (sincr); \
	str = xrealloc (str, csize); \
      } \
  } while (0)
#  define _FUNCTION_DEF
#define NOW	((time_t) time ((time_t *) 0))
#define FS_EXISTS	  0x1
#define FS_EXECABLE	  0x2
#define FS_EXEC_PREFERRED 0x4
#define FS_EXEC_ONLY	  0x8
#define FS_DIRECTORY	  0x10
#define FS_NODIRS	  0x20
#  define _EXTERNS_H_
#define _ALIAS_H_
#define _HASHLIB_H_
#define get_hash_bucket(bucket, table) \
	((table && (bucket < table->nbuckets)) ?  \
		table->bucket_array[bucket] : \
		(BUCKET_CONTENTS *)NULL)
#define DEFAULT_HASH_BUCKETS 53
#define self_delimiting(character) (member ((character), " \t\n\r;|&()"))
#define command_separator(character) (member ((character), "\r\n;|&("))
#define quote_char(c)  (((c) == '\'') || ((c) == '"'))
#define token_char(c)	(!((whitespace (string[i]) || self_delimiting (string[i]))))
#    define NULL ((void *) 0)
#define _BASHJMP_H_
#define _POSIXJMP_H_
#define _BSD_SETJMP_H
#define _JBLEN ((9 * 2) + 3 + 16)
#  define procenv_t	jmp_buf
#define SHFUNC_RETURN()	longjmp (return_catch, 1)
#define COPY_PROCENV(old, save) \
	xbcopy ((char *)old, (char *)save, sizeof (procenv_t));
#define NOT_JUMPED 0
#define FORCE_EOF 1
#define DISCARD 2
#define EXITPROG 3
#define _ERROR_H_
#define _VARIABLES_H_
#define _ARRAY_H_
#define array_num_elements(a)	((a)->num_elements)
#define array_max_index(a)	((a)->max_index)
#define array_head(a)		((a)->head)
#define array_empty(a)		((a)->num_elements == 0)
#define element_value(ae)	((ae)->value)
#define element_index(ae)	((ae)->ind)
#define element_forw(ae)	((ae)->next)
#define element_back(ae)	((ae)->prev)
#define att_exported  0x01
#define att_readonly  0x02
#define att_invisible 0x04
#define att_array     0x08
#define att_nounset   0x10
#define att_function  0x20
#define att_integer   0x40
#define att_imported  0x80
#define att_local     0x100
#define exported_p(var)		((((var)->attributes) & (att_exported)))
#define readonly_p(var)		((((var)->attributes) & (att_readonly)))
#define invisible_p(var)	((((var)->attributes) & (att_invisible)))
#define array_p(var)		((((var)->attributes) & (att_array)))
#define non_unsettable_p(var)	((((var)->attributes) & (att_nounset)))
#define function_p(var)		((((var)->attributes) & (att_function)))
#define integer_p(var)		((((var)->attributes) & (att_integer)))
#define imported_p(var)         ((((var)->attributes) & (att_imported)))
#define local_p(var)		((((var)->attributes) & (att_local)))
#define value_cell(var) ((var)->value)
#define function_cell(var) (COMMAND *)((var)->value)
#define array_cell(var) ((ARRAY *)(var)->value)
#define SETVARATTR(var, attr, undo) \
	((undo == 0) ? ((var)->attributes |= (attribute)) \
		     : ((var)->attributes &= ~(attribute)))
#define _QUIT_H_
#define QUIT if (interrupt_state) throw_to_top_level ()
#define SETINTERRUPT interrupt_state = 1
#define CLRINTERRUPT interrupt_state = 0
#define DELINTERRUPT interrupt_state--
#define _MAXPATH_H_
#  define PATH_MAX 1024
#  define NAME_MAX 14
#define _UNWIND_PROT_H
#define end_unwind_frame()
#define unwind_protect_int(X) \
	do \
	  { \
	    UWP u; \
	    u.i = (X); \
	    unwind_protect_var (&(X), u.s, sizeof (int)); \
	  } \
	while (0)
#define unwind_protect_short(X) \
  unwind_protect_var ((int *)&(X), (char *)&(X), sizeof (short))
#define unwind_protect_string(X) \
  unwind_protect_var ((int *)&(X), (X), sizeof (char *))
#define unwind_protect_pointer(X) unwind_protect_string (X)
#define unwind_protect_jmp_buf(X) \
  unwind_protect_var ((int *)(X), (char *)(X), sizeof (procenv_t))
#define _DISPOSE_CMD_H_
#define _MAKE_CMD_H_
#define _SUBST_H_
#define QUOTED_CHAR(c)  ((c) == CTLESC)
#define QUOTED_NULL(string) ((string)[0] == CTLNUL && (string)[1] == '\0')
#  define _SIG_H_
#define sighandler RETSIGTYPE
#  define SIGRETURN(n)	return(n)
#  define set_signal_handler(sig, handler) (SigHandler *)signal (sig, handler)
#define _PATHNAMES_H_
#define DEFAULT_HOSTS_FILE "/etc/hosts"
#define SYS_PROFILE "/etc/profile"
#define NO_PIPE -1
#define REDIRECT_BOTH -2
#define IS_DESCRIPTOR -1
#define NO_VARIABLE -1
#define EXECUTION_FAILURE 1
#define EXECUTION_SUCCESS 0
#define EX_BADUSAGE	2
#define EX_BINARY_FILE	126
#define EX_NOEXEC	126
#define EX_NOINPUT	126
#define EX_NOTFOUND	127
#define EX_SHERRBASE	256
#define EX_BADSYNTAX	257
#define EX_USAGE	258
#define EX_REDIRFAIL	259
#define EX_BADASSIGN	260
#define EX_EXPFAIL	261
#define slashify_in_quotes "\\`$\"\n"
#define slashify_in_here_document "\\`$"
#define Q_DOUBLE_QUOTES  0x1
#define Q_HERE_DOCUMENT  0x2
#define Q_KEEP_BACKSLASH 0x4
#define Q_NOQUOTE	 0x8
#define Q_QUOTED	 0x10
#define Q_ADDEDQUOTES	 0x20
#define Q_QUOTEDNULL	 0x40
#define MATCH_ANY	0x0
#define MATCH_BEG	0x1
#define MATCH_END	0x2
#define MATCH_TYPEMASK	0x3
#define MATCH_GLOBREP	0x10
#define MATCH_QUOTED	0x20
#define FD_BITMAP_SIZE 32
#define CTLESC '\001'
#define CTLNUL '\177'
#  define __COMMON_H
#define ISOPTION(s, c)	(s[0] == '-' && !s[2] && s[1] == c)
#define SEVAL_NONINT	0x01
#define SEVAL_INTERACT	0x02
#define SEVAL_NOHIST	0x04
#    define __P(protos) protos
#define NULL __DARWIN_NULL
#define _SSIZE_T
#define _STDLIB_H_
#define	_SYS_WAIT_H_
#define _PID_T
#define	_SYS_SIGNAL_H_
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
#define _INTPTR_T
#define _DEV_T
#define _MODE_T
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
#define _POSIXSTAT_H_
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
#define S_IRUGO		(S_IRUSR | S_IRGRP | S_IROTH)
#define S_IWUGO		(S_IWUSR | S_IWGRP | S_IWOTH)
#define S_IXUGO		(S_IXUSR | S_IXGRP | S_IXOTH)
#define _FILECNTL_H_
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
#define FD_NCLOEXEC    0
#define SET_CLOSE_ON_EXEC(fd)  (fcntl ((fd), F_SETFD, FD_CLOEXEC))
#define SET_OPEN_ON_EXEC(fd)   (fcntl ((fd), F_SETFD, FD_NCLOEXEC))
#define _FLAGS_H_
#define FLAG_ON '-'
#define FLAG_OFF '+'
#define FLAG_ERROR -1
#define FLAG_UNKNOWN (int *)0
#define change_flag_char(flag, on_or_off)  change_flag (flag, on_or_off)
#define _INPUT_H_
#  define _PARSER_H_
#define _PATHEXP_H_
#  define GLOB_FAILED(glist)	(glist) == (char **)&glob_error_return
#define _READLINE_H_
#define ISFUNC	0
#define ISKMAP	1
#define ISMACR	2
#define KEYMAP_SIZE	256
#define control_character_threshold	0x20
#define control_character_bit		0x40
#define	_SYS_IOCTL_H_
#define	_SYS_TTYCOM_H_
#define	_SYS_IOCCOM_H_
#define	IOCPARM_MASK	0x1fff
#define	IOCPARM_LEN(x)	(((x) >> 16) & IOCPARM_MASK)
#define	IOCBASECMD(x)	((x) & ~(IOCPARM_MASK << 16))
#define	IOCGROUP(x)	(((x) >> 8) & 0xff)
#define	IOCPARM_MAX	(IOCPARM_MASK + 1)
#define	IOC_VOID	(__uint32_t)0x20000000
#define	IOC_OUT		(__uint32_t)0x40000000
#define	IOC_IN		(__uint32_t)0x80000000
#define	IOC_INOUT	(IOC_IN|IOC_OUT)
#define	IOC_DIRMASK	(__uint32_t)0xe0000000
#define	_IOC(inout,group,num,len) \
	(inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define	_IO(g,n)	_IOC(IOC_VOID,	(g), (n), 0)
#define	_IOR(g,n,t)	_IOC(IOC_OUT,	(g), (n), sizeof(t))
#define	_IOW(g,n,t)	_IOC(IOC_IN,	(g), (n), sizeof(t))
#define	_IOWR(g,n,t)	_IOC(IOC_INOUT,	(g), (n), sizeof(t))
#define	TIOCMODG	_IOR('t', 3, int)
#define	TIOCMODS	_IOW('t', 4, int)
#define		TIOCM_LE	0001
#define		TIOCM_DTR	0002
#define		TIOCM_RTS	0004
#define		TIOCM_ST	0010
#define		TIOCM_SR	0020
#define		TIOCM_CTS	0040
#define		TIOCM_CAR	0100
#define		TIOCM_CD	TIOCM_CAR
#define		TIOCM_RNG	0200
#define		TIOCM_RI	TIOCM_RNG
#define		TIOCM_DSR	0400
#define	TIOCEXCL	 _IO('t', 13)
#define	TIOCNXCL	 _IO('t', 14)
#define	TIOCFLUSH	_IOW('t', 16, int)
#define	TIOCGETA	_IOR('t', 19, struct termios)
#define	TIOCSETA	_IOW('t', 20, struct termios)
#define	TIOCSETAW	_IOW('t', 21, struct termios)
#define	TIOCSETAF	_IOW('t', 22, struct termios)
#define	TIOCGETD	_IOR('t', 26, int)
#define	TIOCSETD	_IOW('t', 27, int)
#define	TIOCIXON	 _IO('t', 129)
#define	TIOCIXOFF	 _IO('t', 128)
#define	TIOCSBRK	 _IO('t', 123)
#define	TIOCCBRK	 _IO('t', 122)
#define	TIOCSDTR	 _IO('t', 121)
#define	TIOCCDTR	 _IO('t', 120)
#define	TIOCGPGRP	_IOR('t', 119, int)
#define	TIOCSPGRP	_IOW('t', 118, int)
#define	TIOCOUTQ	_IOR('t', 115, int)
#define	TIOCSTI		_IOW('t', 114, char)
#define	TIOCNOTTY	 _IO('t', 113)
#define	TIOCPKT		_IOW('t', 112, int)
#define		TIOCPKT_DATA		0x00
#define		TIOCPKT_FLUSHREAD	0x01
#define		TIOCPKT_FLUSHWRITE	0x02
#define		TIOCPKT_STOP		0x04
#define		TIOCPKT_START		0x08
#define		TIOCPKT_NOSTOP		0x10
#define		TIOCPKT_DOSTOP		0x20
#define		TIOCPKT_IOCTL		0x40
#define	TIOCSTOP	 _IO('t', 111)
#define	TIOCSTART	 _IO('t', 110)
#define	TIOCMSET	_IOW('t', 109, int)
#define	TIOCMBIS	_IOW('t', 108, int)
#define	TIOCMBIC	_IOW('t', 107, int)
#define	TIOCMGET	_IOR('t', 106, int)
#define	TIOCREMOTE	_IOW('t', 105, int)
#define	TIOCGWINSZ	_IOR('t', 104, struct winsize)
#define	TIOCSWINSZ	_IOW('t', 103, struct winsize)
#define	TIOCUCNTL	_IOW('t', 102, int)
#define	TIOCSTAT	 _IO('t', 101)
#define		UIOCCMD(n)	_IO('u', n)
#define	TIOCSCONS	_IO('t', 99)
#define	TIOCCONS	_IOW('t', 98, int)
#define	TIOCSCTTY	 _IO('t', 97)
#define	TIOCEXT		_IOW('t', 96, int)
#define	TIOCSIG		 _IO('t', 95)
#define	TIOCDRAIN	 _IO('t', 94)
#define	TIOCMSDTRWAIT	_IOW('t', 91, int)
#define	TIOCMGDTRWAIT	_IOR('t', 90, int)
#define	TIOCTIMESTAMP	_IOR('t', 89, struct timeval)
#define	TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define	TIOCSDRAINWAIT	_IOW('t', 87, int)
#define	TIOCGDRAINWAIT	_IOR('t', 86, int)
#define	TIOCDSIMICROCODE _IO('t', 85)
#define TIOCPTYGRANT	_IO('t', 84)
#define TIOCPTYGNAME	_IOC(IOC_OUT, 't', 83, 128)
#define TIOCPTYUNLK	_IO('t', 82)
#define	TTYDISC		0
#define	TABLDISC	3
#define	SLIPDISC	4
#define	PPPDISC		5
#define	TIOCGSIZE	TIOCGWINSZ
#define	TIOCSSIZE	TIOCSWINSZ
#define	_SYS_FILIO_H_
#define	FIOCLEX		 _IO('f', 1)
#define	FIONCLEX	 _IO('f', 2)
#define	FIONREAD	_IOR('f', 127, int)
#define	FIONBIO		_IOW('f', 126, int)
#define	FIOASYNC	_IOW('f', 125, int)
#define	FIOSETOWN	_IOW('f', 124, int)
#define	FIOGETOWN	_IOR('f', 123, int)
#define	FIODTYPE	_IOR('f', 122, int)
#define	_SYS_SOCKIO_H_
#define	SIOCSHIWAT	 _IOW('s',  0, int)
#define	SIOCGHIWAT	 _IOR('s',  1, int)
#define	SIOCSLOWAT	 _IOW('s',  2, int)
#define	SIOCGLOWAT	 _IOR('s',  3, int)
#define	SIOCATMARK	 _IOR('s',  7, int)
#define	SIOCSPGRP	 _IOW('s',  8, int)
#define	SIOCGPGRP	 _IOR('s',  9, int)
#define	SIOCSIFADDR	_IOW('i', 12, struct ifreq)
#define	SIOCSIFDSTADDR	 _IOW('i', 14, struct ifreq)
#define	SIOCSIFFLAGS	 _IOW('i', 16, struct ifreq)
#define	SIOCGIFFLAGS	_IOWR('i', 17, struct ifreq)
#define	SIOCSIFBRDADDR	 _IOW('i', 19, struct ifreq)
#define	SIOCSIFNETMASK	 _IOW('i', 22, struct ifreq)
#define	SIOCGIFMETRIC	_IOWR('i', 23, struct ifreq)
#define	SIOCSIFMETRIC	_IOW('i', 24, struct ifreq)
#define	SIOCDIFADDR	_IOW('i', 25, struct ifreq)
#define	SIOCAIFADDR	_IOW('i', 26, struct ifaliasreq)
#define	SIOCGETVIFCNT	_IOWR('r', 27, struct sioc_vif_req)
#define	SIOCGETSGCNT	_IOWR('r', 28, struct sioc_sg_req)
#define SIOCALIFADDR    _IOW('i', 29, struct if_laddrreq)
#define SIOCGLIFADDR    _IOWR('i', 30, struct if_laddrreq)
#define SIOCDLIFADDR    _IOW('i', 31, struct if_laddrreq)
#define	SIOCGIFADDR	_IOWR('i', 33, struct ifreq)
#define	SIOCGIFDSTADDR	_IOWR('i', 34, struct ifreq)
#define	SIOCGIFBRDADDR	_IOWR('i', 35, struct ifreq)
#define	SIOCGIFCONF	_IOWR('i', 36, struct ifconf)
#define	SIOCGIFNETMASK	_IOWR('i', 37, struct ifreq)
#define SIOCAUTOADDR	_IOWR('i', 38, struct ifreq)
#define SIOCAUTONETMASK	_IOW('i', 39, struct ifreq)
#define SIOCARPIPLL		_IOWR('i', 40, struct ifreq)
#define	SIOCADDMULTI	 _IOW('i', 49, struct ifreq)
#define	SIOCDELMULTI	 _IOW('i', 50, struct ifreq)
#define	SIOCGIFMTU	_IOWR('i', 51, struct ifreq)
#define	SIOCSIFMTU	 _IOW('i', 52, struct ifreq)
#define	SIOCGIFPHYS	_IOWR('i', 53, struct ifreq)
#define	SIOCSIFPHYS	 _IOW('i', 54, struct ifreq)
#define	SIOCSIFMEDIA	_IOWR('i', 55, struct ifreq)
#define	SIOCGIFMEDIA	_IOWR('i', 56, struct ifmediareq)
#define	SIOCSIFGENERIC	 _IOW('i', 57, struct ifreq)
#define	SIOCGIFGENERIC	_IOWR('i', 58, struct ifreq)
#define SIOCRSLVMULTI   _IOWR('i', 59, struct rslvmulti_req)
#define	SIOCSIFLLADDR	_IOW('i', 60, struct ifreq)
#define	SIOCGIFSTATUS	_IOWR('i', 61, struct ifstat)
#define	SIOCSIFPHYADDR   _IOW('i', 62, struct ifaliasreq)
#define	SIOCGIFPSRCADDR	_IOWR('i', 63, struct ifreq)
#define	SIOCGIFPDSTADDR	_IOWR('i', 64, struct ifreq)
#define	SIOCDIFPHYADDR	 _IOW('i', 65, struct ifreq)
#define	SIOCSLIFPHYADDR	 _IOW('i', 66, struct if_laddrreq)
#define	SIOCGLIFPHYADDR	_IOWR('i', 67, struct if_laddrreq)
#define	SIOCGIFDEVMTU	_IOWR('i', 68, struct ifreq)
#define	SIOCSIFALTMTU	 _IOW('i', 69, struct ifreq)
#define SIOCGIFALTMTU	_IOWR('i', 72, struct ifreq)
#define SIOCSIFBOND	 _IOW('i', 70, struct ifreq)
#define SIOCGIFBOND	_IOWR('i', 71, struct ifreq)
#define SIOCSIFCAP       _IOW('i', 90, struct ifreq)
#define SIOCGIFCAP      _IOWR('i', 91, struct ifreq)
#define	SIOCIFCREATE	_IOWR('i', 120, struct ifreq)
#define	SIOCIFDESTROY	 _IOW('i', 121, struct ifreq)
#define SIOCIFCREATE2   _IOWR('i', 122, struct ifreq)
#define SIOCSDRVSPEC    _IOW('i', 123, struct ifdrv)
#define SIOCGDRVSPEC    _IOWR('i', 123, struct ifdrv)
#define	SIOCSIFVLAN	 _IOW('i', 126, struct ifreq)
#define	SIOCGIFVLAN	_IOWR('i', 127, struct ifreq)
#define	SIOCSETVLAN	SIOCSIFVLAN
#define	SIOCGETVLAN	SIOCGIFVLAN
#define	SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define	SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define SIOCGIFMAC	_IOWR('i', 130, struct ifreq)
#define SIOCSIFMAC	_IOW('i', 131, struct ifreq)
#define	SIOCSIFKPI	_IOW('i', 134, struct ifreq)
#define	SIOCGIFKPI	_IOWR('i', 135, struct ifreq)
#define	SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define	_SYS_TTYDEFAULTS_H_
#define	TTYDEF_IFLAG	(BRKINT	| ICRNL	| IMAXBEL | IXON | IXANY)
#define TTYDEF_OFLAG	(OPOST | ONLCR)
#define TTYDEF_LFLAG	(ECHO | ICANON | ISIG | IEXTEN | ECHOE|ECHOKE|ECHOCTL)
#define	TTYDEF_CFLAG	(CREAD | CS8 | HUPCL)
#define TTYDEF_SPEED	(B9600)
#define CTRL(x)	(x&037)
#define	CEOF		CTRL('d')
#define	CEOL		0xff
#define	CERASE		0177
#define	CINTR		CTRL('c')
#define	CSTATUS		CTRL('t')
#define	CKILL		CTRL('u')
#define	CMIN		1
#define	CQUIT		034
#define	CSUSP		CTRL('z')
#define	CTIME		0
#define	CDSUSP		CTRL('y')
#define	CSTART		CTRL('q')
#define	CSTOP		CTRL('s')
#define	CLNEXT		CTRL('v')
#define	CDISCARD 	CTRL('o')
#define	CWERASE 	CTRL('w')
#define	CREPRINT 	CTRL('r')
#define	CEOT		CEOF
#define	CBRK		CEOL
#define CRPRNT		CREPRINT
#define	CFLUSH		CDISCARD
#define UNCTRL(c)	(((c) - 'a' + 'A')|control_character_bit)
#define RUBOUT		0x7f
#define RL_READLINE_VERSION 	0x0402
#define RL_PROMPT_START_IGNORE	'\1'
#define RL_PROMPT_END_IGNORE	'\2'
#define	_FNMATCH_H	1
#define	FNM_PATHNAME	(1 << 0)
#define	FNM_NOESCAPE	(1 << 1)
#define	FNM_PERIOD	(1 << 2)
#define	__FNM_FLAGS	(FNM_PATHNAME|FNM_NOESCAPE|FNM_PERIOD)
#define	FNM_NOMATCH	1
#define _BASHLINE_H_
#define HIGN_EXPAND 0x01
#define _BASHHIST_H_
#define _BASHINTL_H_
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
#  define setlocale(cat, loc)
#  define textdomain(dom)
#  define bindtextdomain(dom, dir)
#define _GID_T
#define _OFF_T
#define _SIZE_T
#define _USECONDS_T
#define BUILTIN_ENABLED 0x1
#define BUILTIN_DELETED 0x2
#define STATIC_BUILTIN  0x4
#define SPECIAL_BUILTIN 0x8
#define _EXECUTE_CMD_H_
#define _RLCONF_H_
#define VI_MODE
#define VISIBLE_STATS
#define HANDLE_SIGNALS
#define PREFIX_META_HACK
#define DEFAULT_INPUTRC "~/.inputrc"
#define DISPLAY_TABS
#define RL_COMMENT_BEGIN_DEFAULT "#"
#  define READLINE_CALLBACKS
#define	_GLOB_H_
#define SPECIFIC_COMPLETION_FUNCTIONS
#define COMPLETE_DQUOTE  1
#define COMPLETE_SQUOTE  2
#define COMPLETE_BSQUOTE 3
#define cr_whitespace(c) ((c) == '\r' || (c) == '\n' || whitespace(c))
#define VI_EDIT_COMMAND "fc -e ${VISUAL:-${EDITOR:-vi}}"
#define _BASHTTY_H_
#  define TERMIOS_TTY_DRIVER
#    define TERMIO_TTY_DRIVER
#    define NEW_TTY_DRIVER
#  define word __word
#define brace_whitespace(c) (!(c) || (c) == ' ' || (c) == '\t' || (c) == '\n')
#define ERR(S, C)	builtin_error("%s%c", (S), (C))
#  define __BASH_GETOPT_H
#define _USER_SIGNAL_H
#define	sigaddset(set, signo)	(*(set) |= __sigbits(signo), 0)
#define	sigdelset(set, signo)	(*(set) &= ~__sigbits(signo), 0)
#define	sigismember(set, signo)	((*(set) & __sigbits(signo)) != 0)
#define	sigemptyset(set)	(*(set) = 0, 0)
#define	sigfillset(set)		(*(set) = ~(sigset_t)0, 0)
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
#  define _JOBS_H_
#define _SIGLIST_H_
#  define strsignal(sig) (char *)sys_siglist[sig]
#  define _POSIXWAIT_H_
#  define WSTATUS(t)  (t)
#    define WIFCORED(s)       ((s) & 0200)
#define JLIST_STANDARD       0
#define JLIST_LONG	     1
#define JLIST_PID_ONLY	     2
#define JLIST_CHANGED_ONLY   3
#define JLIST_NONINTERACTIVE 4
#define LONGEST_SIGNAL_DESC 24
#define JOBSTATE(job) (jobs[(job)]->state)
#define STOPPED(j)	(jobs[(j)]->state == JSTOPPED)
#define RUNNING(j)	(jobs[(j)]->state == JRUNNING)
#define DEADJOB(j)	(jobs[(j)]->state == JDEAD)
#define J_FOREGROUND 0x01
#define J_NOTIFIED   0x02
#define J_JOBCONTROL 0x04
#define J_NOHUP      0x08
#define IS_FOREGROUND(j)	((jobs[j]->flags & J_FOREGROUND) != 0)
#define IS_NOTIFIED(j)		((jobs[j]->flags & J_NOTIFIED) != 0)
#define IS_JOBCONTROL(j)	((jobs[j]->flags & J_JOBCONTROL) != 0)
#define NO_JOB  -1
#define DUP_JOB -2
#define NO_PID (pid_t)-1
#define _TRAP_H_
#define NO_SIG -1
#define DEFAULT_SIG SIG_DFL
#define IGNORE_SIG  SIG_IGN
#define DEBUG_TRAP NSIG
#define EXIT_TRAP 0
#define signal_object_p(x) (decode_signal (x) != NO_SIG)
#  define _TILDE_H_
#define FEVAL_ENOENTOK		0x001
#define FEVAL_BUILTIN		0x002
#define FEVAL_UNWINDPROT	0x004
#define FEVAL_NONINT		0x008
#define FEVAL_LONGJMP		0x010
#define FEVAL_HISTORY		0x020
#  define _MEMALLOC_H_
#  define HAVE_ALLOCA
#  define alloca __builtin_alloca
#define _SH_GETOPT_H 1
#define BADOPT(x)  fprintf (stderr, "%s: illegal option -- %c\n", argv[0], x)
#define NEEDARG(x) fprintf (stderr, "%s: option requires an argument -- %c\n", argv[0], x)
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
#define DOCFILE "builtins.texi"
#define savestring(x) strcpy (xmalloc (1 + strlen (x)), (x))
#define BUILTIN_FLAG_SPECIAL	0x01
#define BUILTIN_FLAG_ASSIGNMENT 0x02
#define free_safely(x) if (x) free (x)
#define STRING_ARRAY 1
#define TEXINFO 2
#define MAINTAINER "bash-maintainers@prep.ai.mit.edu"
#define	_PWD_H_
#define	_PATH_PWD		"/etc"
#define	_PATH_PASSWD		"/etc/passwd"
#define	_PASSWD			"passwd"
#define	_PATH_MASTERPASSWD	"/etc/master.passwd"
#define	_PATH_MASTERPASSWD_LOCK	"/etc/ptmp"
#define	_MASTERPASSWD		"master.passwd"
#define	_PATH_MP_DB		"/etc/pwd.db"
#define	_MP_DB			"pwd.db"
#define	_PATH_SMP_DB		"/etc/spwd.db"
#define	_SMP_DB			"spwd.db"
#define	_PATH_PWD_MKDB		"/usr/sbin/pwd_mkdb"
#define	_PW_KEYBYNAME		'1'
#define	_PW_KEYBYNUM		'2'
#define	_PW_KEYBYUID		'3'
#define	_PASSWORD_EFMT1		'_'
#define	_PASSWORD_LEN		128
#define _PASSWORD_NOUID		0x01
#define _PASSWORD_NOGID		0x02
#define _PASSWORD_NOCHG		0x04
#define _PASSWORD_NOEXP		0x08
#define _PASSWORD_WARNDAYS	14
#define _PASSWORD_CHGNOW	-1
#define _UUID_UUID_H
#define _UUID_T
#define _UUID_STRING_T
#define UUID_DEFINE(name,u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15) \
	static const uuid_t name __attribute__ ((unused)) = {u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15}
#define	_GRP_H_
#define	_PATH_GROUP		"/etc/group"
#define OPT_UID		0x00001
#define OPT_GID		0x00002
#define OPT_DEV		0x00004
#define OPT_INO		0x00008
#define OPT_PERM	0x00010
#define OPT_LNKNAM	0x00020
#define OPT_FID		0x00040
#define OPT_NLINK	0x00080
#define OPT_RDEV	0x00100
#define OPT_SIZE	0x00200
#define OPT_ATIME	0x00400
#define OPT_MTIME	0x00800
#define OPT_CTIME	0x01000
#define OPT_BLKSIZE	0x02000
#define OPT_BLKS	0x04000
#define OPT_FTYPE	0x08000
#define OPT_PMASK	0x10000
#define OPT_OPERM	0x20000
#define OPT_ASCII	0x1000000
#define OPTIONS		"acdgiflmnopsuACGMP:U"
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
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define _CTYPE_H_
#define	_RUNETYPE_H_
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
#  define _POSIX_PATH_MAX 255
#  define _POSIX_NAME_MAX 14
#  define PATH_MAX_FOR(p) pathconf ((p), _PC_PATH_MAX)
#  define NAME_MAX_FOR(p) pathconf ((p), _PC_NAME_MAX)
#  define PATH_MAX_FOR(p)	PATH_MAX
#  define NAME_MAX_FOR(p)	NAME_MAX
# define SAFE_STAT(name, buf) stat (name, buf)
# define SAFE_STAT(name, buf) safe_stat (name, buf)
#define PF(f, func) { \
	if (fieldwidth) \
		if (precision) \
			(void)fprintf(ofp, f, fieldwidth, precision, func); \
		else \
			(void)fprintf(ofp, f, fieldwidth, func); \
	else if (precision) \
		(void)fprintf(ofp, f, precision, func); \
	else \
		(void)fprintf(ofp, f, func); \
}
#define ISOPTION(s, c)	(s[0] == '-' && s[2] == '\0' && s[1] == c)
#define PF(f, func) { \
	if (fieldwidth) \
		if (precision) \
			(void)printf(f, fieldwidth, precision, func); \
		else \
			(void)printf(f, fieldwidth, func); \
	else if (precision) \
		(void)printf(f, precision, func); \
	else \
		(void)printf(f, func); \
}
#define _SYS_PARAM_H_
#define	BSD	199506
#define BSD4_3	1
#define BSD4_4	1
#define NeXTBSD	1995064
#define NeXTBSD4_0 0
#define	MAXCOMLEN	16
#define	MAXINTERP	64
#define	MAXLOGNAME	255
#define	MAXUPRC		CHILD_MAX
#define	NCARGS		ARG_MAX
#define	NGROUPS		NGROUPS_MAX
#define	NOFILE		256
#define	NOGROUP		65535
#define MAXHOSTNAMELEN	256
#define MAXDOMNAMELEN	256
#define _BSD_MACHINE_PARAM_H_
#define _I386_PARAM_H_
#define _I386__PARAM_H_
#define	__DARWIN_ALIGNBYTES	(sizeof(__darwin_size_t) - 1)
#define	__DARWIN_ALIGN(p)	((__darwin_size_t)((char *)(__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define      __DARWIN_ALIGNBYTES32     (sizeof(__uint32_t) - 1)
#define       __DARWIN_ALIGN32(p)       ((__darwin_size_t)((char *)(__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define	NBPG		4096
#define	PGOFSET		(NBPG-1)
#define	PGSHIFT		12
#define	DEV_BSIZE	512
#define	DEV_BSHIFT	9
#define BLKDEV_IOSIZE	2048
#define	MAXPHYS		(128 * 1024)
#define	CLSIZE		1
#define	CLSIZELOG2	0
#define	MSIZESHIFT	8
#define	MSIZE		(1 << MSIZESHIFT)
#define	MCLSHIFT	11
#define	MCLBYTES	(1 << MCLSHIFT)
#define	MBIGCLSHIFT	12
#define	MBIGCLBYTES	(1 << MBIGCLSHIFT)
#define	M16KCLSHIFT	14
#define	M16KCLBYTES	(1 << M16KCLSHIFT)
#define	MCLOFSET	(MCLBYTES - 1)
#define	NMBCLUSTERS	((1024 * 512) / MCLBYTES)
#define	ctos(x)	(x)
#define	stoc(x)	(x)
#define	ctod(x)	((x)<<(PGSHIFT-DEV_BSHIFT))
#define	dtoc(x)	((x)>>(PGSHIFT-DEV_BSHIFT))
#define	dtob(x)	((x)<<DEV_BSHIFT)
#define	ctob(x)	((x)<<PGSHIFT)
#define	btoc(x)	(((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define  btodb(bytes, devBlockSize)         \
        ((unsigned)(bytes) / devBlockSize)
#define  dbtob(db, devBlockSize)            \
        ((unsigned)(db) * devBlockSize)
#define	bdbtofsb(bn)	((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define STATUS_WORD(rpl, ipl)	(((ipl) << 8) | (rpl))
#define	USERMODE(x)		(((x) & 3) == 3)
#define	BASEPRI(x)		(((x) & (255 << 8)) == 0)
#define	DELAY(n)	{ register int N = (n); while (--N > 0); }
#define	PSWP	0
#define	PVM	4
#define	PINOD	8
#define	PRIBIO	16
#define	PVFS	20
#define	PZERO	22
#define	PSOCK	24
#define	PWAIT	32
#define	PLOCK	36
#define	PPAUSE	40
#define	PUSER	50
#define	MAXPRI	127
#define	PRIMASK	0x0ff
#define	PCATCH	0x100
#define PTTYBLOCK 0x200
#define PDROP	0x400
#define PSPIN	0x800
#define	NBPW	sizeof(int)
#define	CMASK	022
#define	NODEV	(dev_t)(-1)
#define	CLBYTES		(CLSIZE*NBPG)
#define	CLOFSET		(CLSIZE*NBPG-1)
#define	claligned(x)	((((int)(x))&CLOFSET)==0)
#define	CLOFF		CLOFSET
#define	CLSHIFT		(PGSHIFT+CLSIZELOG2)
#define	clbase(i)	(i)
#define	clrnd(i)	(i)
#define	CBLOCK	64
#define CBQSIZE	(CBLOCK/NBBY)
#define	CBSIZE	(CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define	CROUND	(CBLOCK - 1)
#define	MAXBSIZE	(256 * 4096)
#define MAXPHYSIO	MAXPHYS
#define MAXFRAG 	8
#define	MAXPHYSIO_WIRED	(16 * 1024 * 1024)
#define	MAXPATHLEN	PATH_MAX
#define MAXSYMLINKS	32
#define	setbit(a,i)	(((char *)(a))[(i)/NBBY] |= 1<<((i)%NBBY))
#define	clrbit(a,i)	(((char *)(a))[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define	isset(a,i)	(((char *)(a))[(i)/NBBY] & (1<<((i)%NBBY)))
#define	isclr(a,i)	((((char *)(a))[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#define	roundup(x, y)	((((x)+((y)-1))/(y))*(y))
#define powerof2(x)	((((x)-1)&(x))==0)
#define	MIN(a,b) (((a)<(b))?(a):(b))
#define	MAX(a,b) (((a)>(b))?(a):(b))
#define MINBUCKET	4
#define MAXALLOCSAVE	(2 * CLBYTES)
#define	FSHIFT	11
#define FSCALE	(1<<FSHIFT)
#define NOCD		0x01
#define ROTATE		0x02
#define LONGFORM	0x04
#define CLEARSTAK	0x08
#define DIRSTACK_FORMAT(temp) \
  (flags & LONGFORM) ? temp : polite_directory_format (temp)
#define DIRSTACK_ENTRY(i) \
  (flags & LONGFORM) ? pushd_directory_list[i] \
		     : polite_directory_format (pushd_directory_list[i])
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
#define	_TIME_H_
#define CLOCKS_PER_SEC  1000000
#define RETURN(x) \
	do { \
		if (sp) *sp = sec; \
		if (usp) *usp = usec; \
		return (x); \
	} while (0)
#define DECIMAL	'.'
#define PF(f, func) \
do { \
	if (fieldwidth) \
		if (precision) \
			sprintf(sbuf, f, fieldwidth, precision, func); \
		else \
			sprintf(sbuf, f, fieldwidth, func); \
	else if (precision) \
		sprintf(sbuf, f, precision, func); \
	else \
		sprintf(sbuf, f, func); \
	spaddstr (sbuf, strlen (sbuf)); \
} while (0)
#define TEE_BUFSIZE	8192
#define	_SYS_TIMES_H_
#define	IF	258
#define	THEN	259
#define	ELSE	260
#define	ELIF	261
#define	FI	262
#define	CASE	263
#define	ESAC	264
#define	FOR	265
#define	SELECT	266
#define	WHILE	267
#define	UNTIL	268
#define	DO	269
#define	DONE	270
#define	FUNCTION	271
#define	IN	272
#define	BANG	273
#define	TIME	274
#define	TIMEOPT	275
#define	WORD	276
#define	NUMBER	278
#define	OR_OR	280
#define	GREATER_GREATER	281
#define	LESS_LESS	282
#define	LESS_AND	283
#define	GREATER_AND	284
#define	SEMI_SEMI	285
#define	LESS_LESS_MINUS	286
#define	LESS_GREATER	288
#define	GREATER_BAR	289
#define	yacc_EOF	290
#define FILENAME_HASH_BUCKETS 631
#define HASH_RELPATH	0x01
#define HASH_CHKDOT	0x02
#define pathdata(x) ((PATH_DATA *)(x)->data)
#define FD_BITMAP_DEFAULT_SIZE 32L
#define DESCRIBE_PID(pid) do { if (interactive) describe_pid (pid); } while (0)
#define POSIX_TIMEFORMAT "real %2R\nuser %2U\nsys %2S"
#define BASH_TIMEFORMAT  "\nreal\t%3lR\nuser\t%3lU\nsys\t%3lS"
#  define REAP() \
	do \
	  { \
	    if (!interactive_shell) \
	      reap_dead_jobs (); \
	  } \
	while (0)
#  define REAP() \
	do \
	  { \
	    if (!interactive_shell) \
	      cleanup_dead_jobs (); \
	  } \
	while (0)
#define RP_SPACE ") "
#define RP_SPACE_LEN 2
#define NUMBER_LEN(s) \
((s < 10) ? 1 \
	  : ((s < 100) ? 2 \
		      : ((s < 1000) ? 3 \
				   : ((s < 10000) ? 4 \
						 : ((s < 100000) ? 5 \
								: 6)))))
#define EXIT_CASE()  goto exit_case_command
#define CMD_WHILE 0
#define CMD_UNTIL 1
#  define SETOSTYPE(x)	__setostype(x)
#  define SETOSTYPE(x)
#define SHELL_FD_BASE	10
#define u_mode_bits(x) (((x) & 0000700) >> 6)
#define g_mode_bits(x) (((x) & 0000070) >> 3)
#define o_mode_bits(x) (((x) & 0000007) >> 0)
#define X_BIT(x) ((x) & 1)
#define cr_whitespace(c) (whitespace(c) || ((c) == '\n'))
#define EXPR_STACK_GROW_SIZE 10
#define MAX_EXPR_RECURSION_LEVEL 1024
#define EQEQ	1
#define NEQ	2
#define LEQ	3
#define GEQ	4
#define STR	5
#define NUM	6
#define LAND	7
#define LOR	8
#define LSH	9
#define RSH    10
#define OP_ASSIGN 11
#define COND	12
#define EQ	'='
#define GT	'>'
#define LT	'<'
#define PLUS	'+'
#define MINUS	'-'
#define MUL	'*'
#define DIV	'/'
#define MOD	'%'
#define NOT	'!'
#define LPAR	'('
#define RPAR	')'
#define BAND	'&'
#define BOR	'|'
#define BXOR	'^'
#define BNOT	'~'
#define QUES	'?'
#define COL	':'
#define FD_CLOEXEC     1
#    define O_NONBLOCK O_NDELAY
#    define O_NONBLOCK 0
#define NUM_SHELL_FLAGS (sizeof (shell_flags) / sizeof (struct flags_alist))
#define	NULL	__DARWIN_NULL
#  define to_upper(c) (islower(c) ? toupper(c) : (c))
#  define to_lower(c) (isupper(c) ? tolower(c) : (c))
#define MAX_INT_LEN 32
#    define O_NDELAY FNDELAY
#define isspace(c) ((c) == ' ' || (c) == '\t' || (c) == '\n' || (c) == '\f')
#define isprint(c) (isletter(c) || digit(c) || ispunct(c))
#  define NOGROUP (gid_t) -1
#  define getmaxgroups() sysconf(_SC_NGROUPS_MAX)
#    define getmaxgroups() NGROUPS_MAX
#      define getmaxgroups() NGROUPS
#      define getmaxgroups() 64
#  define PTR_T char *
#    define NULL 0x0
#      define FASTCOPY(s, d, n)  memcpy (d, s, n)
#      define FASTCOPY(s, d, n)  memmove (d, s, n)
#    define FASTCOPY(s, d, n)  bcopy (s, d, n)
#define _POSIXDIR_H_
#    define dirent direct
#  define D_NAMLEN(d)   ((d)->d_namlen)
#  define CONST const
#  define PTR void *
#  define CONST
#  define PTR char *
#    define PATH_MAX MAXPATHLEN
#    define PATH_MAX 1024
#  define lstat stat
#define BITS(h, n) ((unsigned long)(h) & ~(ALL_ONES << (n)))
#define NBUCKETS 107
#define MAX_INPUT_BUFFER_SIZE	8192
#  define SEEK_CUR 1
#define max(a, b)  (((a) > (b)) ? (a) : (b))
#define fd_is_seekable(fd) (lseek ((fd), 0L, SEEK_CUR) >= 0)
#define bufstream_getc(bp) \
  (bp->b_inputp == bp->b_used || !bp->b_used) \
  		? b_fill_buffer (bp) \
		: bp->b_buffer[bp->b_inputp++] & 0xFF
#define B_EOF		0x1
#define B_ERROR		0x2
#define B_UNBUFF	0x4
#    define _POSIX_SOURCE
#define __TERMIOS_H__
#define _SYS_TERMIOS_H_
#define	VEOF		0
#define	VEOL		1
#define	VEOL2		2
#define	VERASE		3
#define VWERASE 	4
#define VKILL		5
#define	VREPRINT 	6
#define VINTR		8
#define VQUIT		9
#define VSUSP		10
#define VDSUSP		11
#define VSTART		12
#define VSTOP		13
#define	VLNEXT		14
#define	VDISCARD	15
#define VMIN		16
#define VTIME		17
#define VSTATUS		18
#define	NCCS		20
#define	CCEQ(val, c)	((c) == (val) ? (val) != _POSIX_VDISABLE : 0)
#define	IGNBRK		0x00000001
#define	BRKINT		0x00000002
#define	IGNPAR		0x00000004
#define	PARMRK		0x00000008
#define	INPCK		0x00000010
#define	ISTRIP		0x00000020
#define	INLCR		0x00000040
#define	IGNCR		0x00000080
#define	ICRNL		0x00000100
#define	IXON		0x00000200
#define	IXOFF		0x00000400
#define	IXANY		0x00000800
#define IMAXBEL		0x00002000
#define	IUTF8		0x00004000
#define	OPOST		0x00000001
#define ONLCR		0x00000002
#define OXTABS		0x00000004
#define ONOEOT		0x00000008
#define	OCRNL		0x00000010
#define	ONOCR		0x00000020
#define	ONLRET		0x00000040
#define	OFILL		0x00000080
#define	NLDLY		0x00000300
#define	TABDLY		0x00000c04
#define	CRDLY		0x00003000
#define	FFDLY		0x00004000
#define	BSDLY		0x00008000
#define	VTDLY		0x00010000
#define	OFDEL		0x00020000
#define		NL0	0x00000000
#define		NL1	0x00000100
#define		NL2	0x00000200
#define		NL3	0x00000300
#define		TAB0	0x00000000
#define		TAB1	0x00000400
#define		TAB2	0x00000800
#define		TAB3	0x00000004
#define		CR0	0x00000000
#define		CR1	0x00001000
#define		CR2	0x00002000
#define		CR3	0x00003000
#define		FF0	0x00000000
#define		FF1	0x00004000
#define		BS0	0x00000000
#define		BS1	0x00008000
#define		VT0	0x00000000
#define		VT1	0x00010000
#define	CIGNORE		0x00000001
#define CSIZE		0x00000300
#define     CS5		    0x00000000
#define     CS6		    0x00000100
#define     CS7		    0x00000200
#define     CS8		    0x00000300
#define CSTOPB		0x00000400
#define CREAD		0x00000800
#define PARENB		0x00001000
#define PARODD		0x00002000
#define HUPCL		0x00004000
#define CLOCAL		0x00008000
#define CCTS_OFLOW	0x00010000
#define CRTSCTS		(CCTS_OFLOW | CRTS_IFLOW)
#define CRTS_IFLOW	0x00020000
#define	CDTR_IFLOW	0x00040000
#define CDSR_OFLOW	0x00080000
#define	CCAR_OFLOW	0x00100000
#define	MDMBUF		0x00100000
#define	ECHOKE		0x00000001
#define	ECHOE		0x00000002
#define	ECHOK		0x00000004
#define ECHO		0x00000008
#define	ECHONL		0x00000010
#define	ECHOPRT		0x00000020
#define ECHOCTL  	0x00000040
#define	ISIG		0x00000080
#define	ICANON		0x00000100
#define	IEXTEN		0x00000400
#define EXTPROC         0x00000800
#define TOSTOP		0x00400000
#define FLUSHO		0x00800000
#define	NOKERNINFO	0x02000000
#define PENDIN		0x20000000
#define	NOFLSH		0x80000000
#define	TCSANOW		0
#define	TCSADRAIN	1
#define	TCSAFLUSH	2
#define TCSASOFT	0x10
#define B0	0
#define B50	50
#define B75	75
#define B110	110
#define B134	134
#define B150	150
#define B200	200
#define B300	300
#define B600	600
#define B1200	1200
#define	B1800	1800
#define B2400	2400
#define B4800	4800
#define B9600	9600
#define B19200	19200
#define B38400	38400
#define B7200	7200
#define B14400	14400
#define B28800	28800
#define B57600	57600
#define B76800	76800
#define B115200	115200
#define B230400	230400
#define EXTA	19200
#define EXTB	38400
#define	TCIFLUSH	1
#define	TCOFLUSH	2
#define TCIOFLUSH	3
#define	TCOOFF		1
#define	TCOON		2
#define TCIOFF		3
#define TCION		4
#define _SGTTY_H_
#define	USE_OLD_TTY
#define	_SYS_IOCTL_COMPAT_H_
#define _SYS_TTYCHARS_H_
#define	_SYS_TTYDEV_H_
#define B50	1
#define B75	2
#define B110	3
#define B134	4
#define B150	5
#define B200	6
#define B300	7
#define B600	8
#define B1200	9
#define	B1800	10
#define B2400	11
#define B4800	12
#define B9600	13
#define EXTA	14
#define EXTB	15
#define B57600  16
#define B115200 17
#define	_SGTTYB_
# define TIOCGETD	_IOR('t', 0, int)
# define TIOCSETD	_IOW('t', 1, int)
#define	TIOCHPCL	_IO('t', 2)
#define	TIOCGETP	_IOR('t', 8,struct sgttyb)
#define	TIOCSETP	_IOW('t', 9,struct sgttyb)
#define	TIOCSETN	_IOW('t',10,struct sgttyb)
#define	TIOCSETC	_IOW('t',17,struct tchars)
#define	TIOCGETC	_IOR('t',18,struct tchars)
#define		TANDEM		0x00000001
#define		CBREAK		0x00000002
#define		LCASE		0x00000004
#define		ECHO		0x00000008
#define		CRMOD		0x00000010
#define		RAW		0x00000020
#define		ODDP		0x00000040
#define		EVENP		0x00000080
#define		NLDELAY		0x00000300
#define		TBDELAY		0x00000c00
#define		XTABS		0x00000c00
#define		CRDELAY		0x00003000
#define		VTDELAY		0x00004000
#define		BSDELAY		0x00008000
#define		CRTBS		0x00010000
#define		PRTERA		0x00020000
#define		CRTERA		0x00040000
#define		TILDE		0x00080000
#define		MDMBUF		0x00100000
#define		LITOUT		0x00200000
#define		TOSTOP		0x00400000
#define		FLUSHO		0x00800000
#define		NOHANG		0x01000000
#define		L001000		0x02000000
#define		CRTKIL		0x04000000
#define		PASS8		0x08000000
#define		CTLECH		0x10000000
#define		PENDIN		0x20000000
#define		DECCTQ		0x40000000
#define		NOFLSH		0x80000000
#define	TIOCLBIS	_IOW('t', 127, int)
#define	TIOCLBIC	_IOW('t', 126, int)
#define	TIOCLSET	_IOW('t', 125, int)
#define	TIOCLGET	_IOR('t', 124, int)
#define		LCRTBS		(CRTBS>>16)
#define		LPRTERA		(PRTERA>>16)
#define		LCRTERA		(CRTERA>>16)
#define		LTILDE		(TILDE>>16)
#define		LMDMBUF		(MDMBUF>>16)
#define		LLITOUT		(LITOUT>>16)
#define		LTOSTOP		(TOSTOP>>16)
#define		LFLUSHO		(FLUSHO>>16)
#define		LNOHANG		(NOHANG>>16)
#define		LCRTKIL		(CRTKIL>>16)
#define		LPASS8		(PASS8>>16)
#define		LCTLECH		(CTLECH>>16)
#define		LPENDIN		(PENDIN>>16)
#define		LDECCTQ		(DECCTQ>>16)
#define		LNOFLSH		(NOFLSH>>16)
#define	TIOCSLTC	_IOW('t',117,struct ltchars)
#define	TIOCGLTC	_IOR('t',116,struct ltchars)
#define OTIOCCONS	_IO('t', 98)
#define	OTTYDISC	0
#define	NETLDISC	1
#define	NTTYDISC	2
#define TIOCGSID	_IOR('t', 99, int)
#define	gtty(fd, buf)	ioctl(fd, TIOCGETP, buf)
#define	stty(fd, buf)	ioctl(fd, TIOCSETP, buf)
#  define WAITPID(pid, statusp, options) \
	wait3 ((union wait *)statusp, options, (struct rusage *)0)
#    define WAITPID(pid, statusp, options) \
	waitpid ((pid_t)pid, statusp, options)
#      define WAITPID(pid, statusp, options) \
	wait3 (statusp, options, (struct rusage *)0)
#      define WAITPID(pid, statusp, options) \
	wait3 (statusp, options, (int *)0)
#  define getpgid(p) getpgrp ()
#  define getpgid(p) getpgrp (p)
#  define REINSTALL_SIGCHLD_HANDLER signal (SIGCHLD, sigchld_handler)
#  define REINSTALL_SIGCHLD_HANDLER
#define JOB_SLOTS 8
#define setpgid(pid, pgrp)	setpgrp (pid, pgrp)
#define tcsetpgrp(fd, pgrp)	ioctl ((fd), TIOCSPGRP, &(pgrp))
#define input_tty() (shell_tty != -1) ? shell_tty : fileno (stderr)
#define INVALID_SIGNAL_HANDLER (SigHandler *)wait_for_background_pids
#define FIND_CHILD(pid, child) \
  do \
    { \
      child = find_pipeline (pid); \
      if (child == 0) \
	{ \
	  give_terminal_to (shell_pgrp); \
	  UNBLOCK_CHILD (oset); \
	  internal_error ("wait_for: No record of process %d", pid); \
	  restore_sigint_handler (); \
	  return (termination_state = 127); \
	} \
    } \
  while (0)
#define _UNIONWAIT_H
#define w_termsig  w_T.w_Termsig
#define w_coredump w_T.w_Coredump
#define w_retcode  w_T.w_Retcode
#define w_stopval  w_S.w_Stopval
#define w_stopsig  w_S.w_Stopsig
#define WSTOPPED       0177
#define WIFSTOPPED(x)  ((x).w_stopval == WSTOPPED)
#define WIFEXITED(x)   ((x).w_stopval != WSTOPPED && (x).w_termsig == 0)
#define WIFSIGNALED(x) ((x).w_stopval != WSTOPPED && (x).w_termsig != 0)
#define WTERMSIG(x)    ((x).w_termsig)
#define WSTOPSIG(x)    ((x).w_stopsig)
#define WEXITSTATUS(x) ((x).w_retcode)
#define WIFCORED(x)    ((x).w_coredump)
#  define WSTATUS(t)  (t.w_status)
#  define WNOHANG 1
#  define WUNTRACED 2
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
#  define D_NAMLEN(d) strlen ((d)->d_name)
#  define D_NAMLEN(d) ((d)->d_namlen)
#  define REAL_DIR_ENTRY(dp) 1
#  define REAL_DIR_ENTRY(dp) (dp->d_ino != 0)
#  define bcopy(s, d, n) ((void) memcpy ((d), (s), (n)))
#define DIRBLKSIZ 512
#  define MAXNAMLEN (DIR$S_NAME + 7)
#  define MAXFULLSPEC NAM$C_MAXRSS
#  define MAXNAMLEN 15
#define rewinddir(dirp) seekdir (dirp, 0L)
#define	NULL	0
#define malloc xmalloc
#define	STACK_DIRECTION	0
#define	STACK_DIR	STACK_DIRECTION
#define	STACK_DIR	stack_dir
#define CRAY_STACK
#    define getpagesize() sysconf(_SC_PAGESIZE)
#      define getpagesize() sysconf(_SC_PAGE_SIZE)
#     define getpagesize() PAGESIZE
#      define getpagesize() EXEC_PAGESIZE
#          define CLSIZE 1
#        define getpagesize() (NBPG * CLSIZE)
#          define getpagesize() NBPC
#  define getpagesize() 4096
#define _MALLOC_INTERNAL
#define _MALLOC_H	1
#define	memset(s, zero, n)	bzero ((s), (n))
#define	memcpy(d, s, n)		bcopy ((s), (d), (n))
#define	__P(args)	args
#define	__ptr_t		void *
#define	__P(args)	()
#define	const
#define	__ptr_t		char *
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
#define NULL ((void *)0)
#define offsetof(TYPE, MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define	__malloc_size_t		size_t
#define	__malloc_ptrdiff_t	ptrdiff_t
#define	__malloc_size_t		unsigned int
#define	__malloc_ptrdiff_t	int
#define INT_BIT		(CHAR_BIT * sizeof(int))
#define BLOCKLOG	(INT_BIT > 16 ? 12 : 9)
#define BLOCKSIZE	(1 << BLOCKLOG)
#define BLOCKIFY(SIZE)	(((SIZE) + BLOCKSIZE - 1) / BLOCKSIZE)
#define HEAP		(INT_BIT > 16 ? 4194304 : 65536)
#define FINAL_FREE_BLOCKS	8
#define BLOCK(A)	(((char *) (A) - _heapbase) / BLOCKSIZE + 1)
#define __malloc_safe_bcopy safe_bcopy
#define memmove(to, from, size)	__malloc_safe_bcopy ((from), (to), (size))
#define memmove(to, from, size) __malloc_safe_bcopy ((from), (to), (size))
#define min(A, B) ((A) < (B) ? (A) : (B))
#define	_MALLOC_INTERNAL
#define	__sbrk	sbrk
#define NULL 0
#  define MEMSCRAMBLE
#  define NULL 0
#define start_of_data() &etext
#define ISALLOC ((char) 0xf7)
#define ISFREE ((char) 0x54)
#define ISMEMALIGN ((char) 0xd6)
#define CHAIN(a) \
  (*(struct mhead **) (sizeof (char *) + (char *) (a)))
#    define botch(x) abort ()
#      define __STRING(x) #x
#      define __STRING(x) "x"
#  define MAGIC1 0x55
#  define MAGIC4 0x55555555
#  define EXTRA  4
#  define EXTRA  0
#  define HAVE_ALLOCA_H
#  define D_NAMLEN(d)   (strlen ((d)->d_name))
#  define d_fileno d_ino
#  define procenv_t	sigjmp_buf
#  define setjmp(x)	sigsetjmp((x), 1)
#  define longjmp(x, n)	siglongjmp((x), (n))
#  define S_IFDIR 0040000
#  define S_IFMT  0170000
#define S_IFMT _S_IFMT
#define S_IFIFO _S_IFIFO
#define S_IFCHR _S_IFCHR
#define S_IFDIR _S_IFDIR
#define S_IFBLK _S_IFBLK
#define S_IFREG _S_IFREG
#define S_IFLNK _S_IFLNK
#define S_IFSOCK _S_IFSOCK
#define	S_ISBLK(m)	(((m)&S_IFMT) == S_IFBLK)
#define	S_ISCHR(m)	(((m)&S_IFMT) == S_IFCHR)
#define	S_ISDIR(m)	(((m)&S_IFMT) == S_IFDIR)
#define	S_ISREG(m)	(((m)&S_IFMT) == S_IFREG)
#define	S_ISFIFO(m)	(((m)&S_IFMT) == S_IFIFO)
#define	S_ISLNK(m)	(((m)&S_IFMT) == S_IFLNK)
#define	S_ISSOCK(m)	(((m)&S_IFMT) == S_IFSOCK)
#    define S_IREAD	00400
#    define S_IWRITE	00200
#    define S_IEXEC	00100
#    define S_IRUSR	S_IREAD
#    define S_IWUSR	S_IWRITE
#    define S_IXUSR	S_IEXEC
#    define S_IRGRP	(S_IREAD  >> 3)
#    define S_IWGRP	(S_IWRITE >> 3)
#    define S_IXGRP	(S_IEXEC  >> 3)
#    define S_IROTH	(S_IREAD  >> 6)
#    define S_IWOTH	(S_IWRITE >> 6)
#    define S_IXOTH	(S_IEXEC  >> 6)
#  define S_IRWXU	(S_IRUSR | S_IWUSR | S_IXUSR)
#  define S_IRWXG	(S_IRGRP | S_IWGRP | S_IXGRP)
#  define S_IRWXO	(S_IROTH | S_IWOTH | S_IXOTH)
#    define inline
#    define __P(protos) ()
#  define __STRING(x) "x"
#    define const  __const
#    define inline __inline
#    define signed __signed
#    define volatile __volatile
#    define const
#    define signed
#    define volatile
#define READLINE_LIBRARY
#define _RLDEFS_H_
#  define no_mode -1
#  define vi_mode 0
#  define emacs_mode 1
#  define FUNCTION_TO_KEYMAP(map, key)	(Keymap)(map[key].function)
#  define KEYMAP_TO_FUNCTION(data)	(Function *)(data)
#define NO_BELL 0
#define VISIBLE_BELL 2
#define	FTO	 1
#define BTO	-1
#define FFIND	 2
#define BFIND	-2
#define RL_QF_SINGLE_QUOTE	0x1
#define RL_QF_DOUBLE_QUOTE	0x2
#define RL_QF_BACKSLASH		0x4
#define DEFAULT_BUFFER_SIZE 256
#define STREQ(a, b)	(((a)[0] == (b)[0]) && (strcmp ((a), (b)) == 0))
#define STREQN(a, b, n)	(((a)[0] == (b)[0]) && (strncmp ((a), (b), (n)) == 0))
#  define FREE(x)	if (x) free (x)
#define _KEYMAPS_H_
#define _CHARDEFS_H_
#define control_character_threshold 0x020
#define control_character_mask 0x1f
#define meta_character_threshold 0x07f
#define control_character_bit 0x40
#define meta_character_bit 0x080
#define largest_char 255
#define CTRL_CHAR(c) ((c) < control_character_threshold && (c) >= 0)
#define META_CHAR(c) ((c) > meta_character_threshold && (c) <= largest_char)
#define CTRL(c) ((c) & control_character_mask)
#define META(c) ((c) | meta_character_bit)
#define UNMETA(c) ((c) & (~meta_character_bit))
#define UNCTRL(c) _rl_to_upper(((c)|control_character_bit))
#define _rl_lowercase_p(c) (islower(c))
#define _rl_uppercase_p(c) (isupper(c))
#define _rl_digit_p(x)  (isdigit (x))
#define _rl_pure_alphabetic(c) (_rl_lowercase_p(c) || _rl_uppercase_p(c))
#  define _rl_to_upper(c) (islower(c) ? toupper(c) : (c))
#  define _rl_to_lower(c) (isupper(c) ? tolower(c) : (c))
#define _rl_digit_value(x) ((x) - '0')
#define NEWLINE '\n'
#define RETURN CTRL('M')
#define RUBOUT 0x7f
#define TAB '\t'
#define PAGE CTRL('L')
#define SPACE ' '
#define ESC CTRL('[')
#define KEYMAP_SIZE 256
#define ISFUNC 0
#define ISKMAP 1
#define ISMACR 2
#define rl_symbolic_link_hook rl_directory_completion_hook
#define RL_PROMPT_START_IGNORE	'\001'
#define RL_PROMPT_END_IGNORE	'\002'
#define NO_MATCH        0
#define SINGLE_MATCH    1
#define MULT_MATCH      2
#define _HISTORY_H_
#define HS_STIFLED	0x01
#    define X_OK 1
#define PUTX(c) \
      if (CTRL_CHAR (c)) \
        { \
          putc ('^', rl_outstream); \
          putc (UNCTRL (c), rl_outstream); \
        } \
      else if (c == RUBOUT) \
	{ \
	  putc ('^', rl_outstream); \
	  putc ('?', rl_outstream); \
	} \
      else \
	putc (c, rl_outstream)
#define _RLTCAP_H_
#define CR_FASTER(new, cur) (((new) + 1) < ((cur) - (new)))
#define CHECK_LPOS() \
      do { \
        lpos++; \
        if (lpos >= screenwidth) \
          { \
            inv_lbreaks[++newlines] = out; \
            lpos = 0; \
          } \
      } while (0)
#define W_OFFSET(line, offset) ((line) == 0 ? offset : 0)
#define VIS_LLEN(l)	((l) > _rl_vis_botlin ? 0 : (vis_lbreaks[l+1] - vis_lbreaks[l]))
#define INV_LLEN(l)	(inv_lbreaks[l+1] - inv_lbreaks[l])
#define VIS_CHARS(line) (visible_line + vis_lbreaks[line])
#define VIS_LINE(line) ((line) > _rl_vis_botlin) ? "" : VIS_CHARS(line)
#define INV_LINE(line) (invisible_line + inv_lbreaks[line])
#define M_OFFSET(margin, offset) ((margin) == 0 ? offset : 0)
#define _HISTLIB_H_
#define _rl_digit_p(c)  ((c) >= '0' && (c) <= '9')
#define _rl_digit_value(c) ((c) - '0')
#define member(c, s) ((c) ? ((char *)strchr ((s), (c)) != (char *)NULL) : 0)
#define EVENT_NOT_FOUND 0
#define BAD_WORD_SPEC	1
#define SUBST_FAILED	2
#define BAD_MODIFIER	3
#define NON_ANCHORED_SEARCH 0
#define HISTORY_APPEND 0
#define HISTORY_OVERWRITE 1
#define RETURN_ENTRY(e, w) \
	return ((e = history_get (w)) ? e->line : (char *)NULL)
#define FAIL_SEARCH() \
  do { \
    history_offset = history_length; free (temp) ; return (char *)NULL; \
  } while (0)
#define slashify_in_quotes "\\`\"$"
#    define O_BINARY 0
#  define O_BINARY 0
#define DEFAULT_HISTORY_GROW_SIZE 50
#define NEXT_LINE() do { if (reverse) i--; else i++; } while (0)
#  define S_ISDIR(m) (((m)&S_IFMT) == S_IFDIR)
#  define O_NDELAY O_NONBLOCK
#define any_typein (push_index != pop_index)
#define DEFAULT_MAX_KILLS 10
#define SWAP(s, e)  do { int t; t = s; s = e; e = t; } while (0)
#  define HAVE_SELECT
#  define INCL_DOSPROCESS
#  define RL_LIBRARY_VERSION "2.1-bash"
#  define STATIC_CALLBACK
#  define STATIC_CALLBACK static
#define _RL_FIX_POINT(x) \
	do { \
	if (x > rl_end) \
	  x = rl_end; \
	else if (x < 0) \
	  x = 0; \
	} while (0)
#define UpCase 1
#define DownCase 2
#define CapCase 3
#define _rl_stricmp strcasecmp
#define _rl_strnicmp strncasecmp
#  define FUNCTION_TO_KEYMAP(map, key)	(Keymap)((int)map[key].function)
#  define KEYMAP_TO_FUNCTION(data)	(Function *)((int)(data))
#define _RLTTY_H
#  define set_winsize(tty)
#define SGTTY_SET	0x01
#define LFLAG_SET	0x02
#define TCHARS_SET	0x04
#define LTCHARS_SET	0x08
#define TIOTYPE struct bsdtty
#  define VMIN VEOF
#  define VTIME VEOL
#  define TIOTYPE struct termios
#  define DRAIN_OUTPUT(fd)	tcdrain (fd)
#  define GETATTR(tty, tiop)	(tcgetattr (tty, tiop))
#    define SETATTR(tty, tiop)	(tcsetattr (tty, TCSANOW, tiop))
#    define SETATTR(tty, tiop)	(tcsetattr (tty, TCSADRAIN, tiop))
#  define TIOTYPE struct termio
#  define DRAIN_OUTPUT(fd)
#  define GETATTR(tty, tiop)	(ioctl (tty, TCGETA, tiop))
#  define SETATTR(tty, tiop)	(ioctl (tty, TCSETA, tiop))
#  define OUTPUT_BEING_FLUSHED(tp)  (tp->c_lflag & FLUSHO)
#  define OUTPUT_BEING_FLUSHED(tp)  0
#define SET_SPECIAL(sc, func) \
  do \
    { \
      int ic; \
      ic = sc; \
      if (ic != -1 && kmap[ic].type == ISFUNC) \
	kmap[ic].function = func; \
    } \
  while (0)
#define SET_SPECIAL(sc, func) \
  do \
    { \
      unsigned char uc; \
      uc = ttybuff.c_cc[sc]; \
      if (uc != (unsigned char)_POSIX_VDISABLE && kmap[uc].type == ISFUNC) \
	kmap[uc].function = func; \
    } \
  while (0)
#define	_POSIX_VDISABLE	0xff
#    define TCOON 1
#  define _IO_PTEM_H		/* work around SVR4.2 1.1.4 bug */
#    define _POSIX_VDISABLE _SVR4_VDISABLE
#      define _POSIX_VDISABLE 0
#      define _POSIX_VDISABLE -1
#define abs(x)		(((x) >= 0) ? (x) : -(x))
#define SEARCH_RETURN _rl_restore_prompt (); return
#    define RETSIGTYPE void
#    define RETSIGTYPE int
#  define SIGHANDLER_RETURN return
#  define SIGHANDLER_RETURN return (0)
#  define HANDLE_JOB_SIGNALS
#  define HANDLE_SIGTERM
#  define rl_sigaction(s, nh, oh)	sigaction(s, nh, oh)
#  define sigemptyset(m)
#define NCURSES_TERMCAP_H_incl	1
#define NCURSES_VERSION "5.7"
#define NCURSES_DLL_H_incl 1
#define NCURSES_STATIC
#  define NCURSES_IMPEXP /* nothing */
#  define NCURSES_API /* nothing */
#  define NCURSES_EXPORT(type) NCURSES_IMPEXP type NCURSES_API
#  define NCURSES_EXPORT_VAR(type) NCURSES_IMPEXP type
#define NCURSES_PUBLIC_VAR(name) _nc_##name
#define NCURSES_WRAPPED_VAR(type,name) extern type NCURSES_PUBLIC_VAR(name)(void)
#define NCURSES_CONST /*nothing*/ 
#define NCURSES_OSPEED short
#define NUM_TC_STRINGS (sizeof (tc_strings) / sizeof (struct _tc_string))
#define TRANS(i) ((i) == -1 ? rl_point : ((i) == -2 ? rl_end : (i)))
#define member(c, s) ((c) ? (char *)strchr ((s), (c)) != (char *)NULL : 0)
#define isident(c) ((_rl_pure_alphabetic (c) || _rl_digit_p (c) || c == '_'))
#define exchange(x, y) do {int temp = x; x = y; y = temp;} while (0)
#define bcopy(s, d, n) memcpy ((d), (s), (n))
#define NULL (char *) 0
#define O_RDONLY 0
#define BUFSIZE bufsize
#define BUFSIZE 2048
#define TERMCAP_FILE "/etc/termcap"
#define valid_filename_p(fn) (*(fn) == '/')
#define _TERMCAP_H 1
#define _MAILCHECK_H_
#define NOW ((time_t)time ((time_t *)0))
#define RESET_MAIL_FILE(i) \
  do \
    { \
      mailfiles[i]->access_time = mailfiles[i]->mod_time = 0; \
      mailfiles[i]->file_size = 0L; \
    } \
  while (0)
#define atime mailfiles[i]->access_time
#define mtime mailfiles[i]->mod_time
#    define maxpath_param_h
#    define NAME_MAX MAXNAMLEN
#  define PATH_MAX _POSIX_PATH_MAX
#  define NAME_MAX _POSIX_NAME_MAX
#    define WSTOPSIG(s)       ((s) >> 8)
#    define WTERMSIG(s)	      ((s) & 0177)
#    define WEXITSTATUS(s)    ((s) >> 8)
#    define WIFSTOPPED(s)     (((s) & 0177) == 0177)
#    define WIFEXITED(s)      (((s) & 0377) == 0)
#    define WIFSIGNALED(s)    (!WIFSTOPPED(s) && !WIFEXITED(s))
#  define killpg(pg, sig)		kill(-(pg),(sig))
#  define siginterrupt(sig, code)
#  define WAITPID(pid, statusp, options) waitpid (pid, statusp, options)
#  define WAITPID(pid, statusp, options) wait (statusp)
#define PROC_BAD -1
#define PROC_STILL_ALIVE -2
#      define CLK_TCK HZ
#      define CLK_TCK 60
#  define to_lower(c) (islower(c) ? (c) : tolower(c))
#  define GLOB_FAILED(glist)	!(glist)
#    define WSTOPSIG(s)	      ((s).w_stopsig)
#    define WTERMSIG(s)	      ((s).w_termsig)
#    define WEXITSTATUS(s)    ((s).w_retcode)
#    define WIFCORED(s)       ((s).w_coredump)
#define PRINTED_COMMAND_INITIAL_SIZE 64
#define PRINTED_COMMAND_GROW_SIZE 128
#define INSTALL_DEBUG_MODE
#define Int 1
#define Charp 2
#define CLOSE_FDS_AT_LOGIN
#  define PROGRAM "bash"
#define	_SYS_SOCKET_H_
#define _SA_FAMILY_T
#define _SOCKLEN_T
#define	_STRUCT_IOVEC
#define	SOCK_STREAM	1
#define	SOCK_DGRAM	2
#define	SOCK_RAW	3
#define	SOCK_RDM	4
#define	SOCK_SEQPACKET	5
#define	SO_DEBUG	0x0001
#define	SO_ACCEPTCONN	0x0002
#define	SO_REUSEADDR	0x0004
#define	SO_KEEPALIVE	0x0008
#define	SO_DONTROUTE	0x0010
#define	SO_BROADCAST	0x0020
#define	SO_USELOOPBACK	0x0040
#define SO_LINGER	0x0080
#define	SO_OOBINLINE	0x0100
#define	SO_REUSEPORT	0x0200
#define	SO_TIMESTAMP	0x0400
#define SO_TIMESTAMP_MONOTONIC	0x0800
#define SO_DONTTRUNC	0x2000
#define SO_WANTMORE	0x4000
#define SO_WANTOOBFLAG	0x8000
#define SO_SNDBUF	0x1001
#define SO_RCVBUF	0x1002
#define SO_SNDLOWAT	0x1003
#define SO_RCVLOWAT	0x1004
#define SO_SNDTIMEO	0x1005
#define SO_RCVTIMEO	0x1006
#define	SO_ERROR	0x1007
#define	SO_TYPE		0x1008
#define SO_LABEL        0x1010
#define SO_PEERLABEL    0x1011
#define SO_NREAD	0x1020
#define SO_NKE		0x1021
#define SO_NOSIGPIPE	0x1022
#define SO_NOADDRERR	0x1023
#define SO_NWRITE	0x1024
#define SO_REUSESHAREUID	0x1025
#define SO_NOTIFYCONFLICT	0x1026
#define	SO_UPCALLCLOSEWAIT	0x1027
#define SO_LINGER_SEC	0x1080
#define SO_RESTRICTIONS	0x1081
#define SO_RESTRICT_DENYIN		0x00000001
#define SO_RESTRICT_DENYOUT		0x00000002
#define SO_RESTRICT_DENYSET		0x80000000
#define SO_RANDOMPORT   0x1082
#define SO_NP_EXTENSIONS	0x1083
#define SONPX_SETOPTSHUT	0x000000001
#define	SOL_SOCKET	0xffff
#define	pseudo_AF_XTP	19
#define pseudo_AF_RTIP	22
#define pseudo_AF_PIP	25
#define	pseudo_AF_KEY	29
#define pseudo_AF_HDRCMPLT 35
#define	SOCK_MAXADDRLEN	255
#define	_SS_MAXSIZE	128
#define	_SS_ALIGNSIZE	(sizeof(__int64_t))
#define	_SS_PAD1SIZE	\
		(_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define	_SS_PAD2SIZE	\
		(_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - \
				_SS_PAD1SIZE - _SS_ALIGNSIZE)
#define	PF_UNSPEC	AF_UNSPEC
#define	PF_LOCAL	AF_LOCAL
#define	PF_UNIX		PF_LOCAL
#define	PF_INET		AF_INET
#define	PF_IMPLINK	AF_IMPLINK
#define	PF_PUP		AF_PUP
#define	PF_CHAOS	AF_CHAOS
#define	PF_NS		AF_NS
#define	PF_ISO		AF_ISO
#define	PF_OSI		AF_ISO
#define	PF_ECMA		AF_ECMA
#define	PF_DATAKIT	AF_DATAKIT
#define	PF_CCITT	AF_CCITT
#define	PF_SNA		AF_SNA
#define PF_DECnet	AF_DECnet
#define PF_DLI		AF_DLI
#define PF_LAT		AF_LAT
#define	PF_HYLINK	AF_HYLINK
#define	PF_APPLETALK	AF_APPLETALK
#define	PF_ROUTE	AF_ROUTE
#define	PF_LINK		AF_LINK
#define	PF_XTP		pseudo_AF_XTP
#define	PF_COIP		AF_COIP
#define	PF_CNT		AF_CNT
#define	PF_SIP		AF_SIP
#define	PF_IPX		AF_IPX
#define PF_RTIP		pseudo_AF_RTIP
#define PF_PIP		pseudo_AF_PIP
#define PF_NDRV		AF_NDRV
#define	PF_ISDN		AF_ISDN
#define	PF_KEY		pseudo_AF_KEY
#define	PF_INET6	AF_INET6
#define	PF_NATM		AF_NATM
#define PF_SYSTEM	AF_SYSTEM
#define PF_NETBIOS	AF_NETBIOS
#define PF_PPP		AF_PPP
#define PF_RESERVED_36  AF_RESERVED_36
#define PF_UTUN		AF_UTUN
#define	PF_MAX		AF_MAX
#define	PF_VLAN		((uint32_t)0x766c616e)
#define PF_BOND		((uint32_t)0x626f6e64)
#define NET_MAXID	AF_MAX
#define NET_RT_DUMP		1
#define NET_RT_FLAGS		2
#define NET_RT_IFLIST		3
#define NET_RT_STAT		4
#define NET_RT_TRASH		5
#define NET_RT_IFLIST2		6
#define NET_RT_DUMP2		7
#define	NET_RT_MAXID		10
#define	SOMAXCONN	128
#define	MSG_OOB		0x1
#define	MSG_PEEK	0x2
#define	MSG_DONTROUTE	0x4
#define	MSG_EOR		0x8
#define	MSG_TRUNC	0x10
#define	MSG_CTRUNC	0x20
#define	MSG_WAITALL	0x40
#define	MSG_DONTWAIT	0x80
#define	MSG_EOF		0x100
#define MSG_WAITSTREAM  0x200
#define MSG_FLUSH	0x400
#define MSG_HOLD	0x800
#define MSG_SEND	0x1000
#define MSG_HAVEMORE	0x2000
#define MSG_RCVMORE	0x4000
#define MSG_NEEDSA	0x10000
#define	CMSG_DATA(cmsg)		((unsigned char *)(cmsg) + \
				 __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define CMSG_FIRSTHDR(mhdr) \
        ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? \
         (struct cmsghdr *)(mhdr)->msg_control : \
         (struct cmsghdr *)0L)
#define	CMSG_NXTHDR(mhdr, cmsg)						\
	((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) :		\
	 ((((unsigned char *)(cmsg) +					\
	    __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) +		\
	    __DARWIN_ALIGN32(sizeof(struct cmsghdr))) >			\
	    ((unsigned char *)(mhdr)->msg_control +			\
	     (mhdr)->msg_controllen)) ?					\
	  (struct cmsghdr *)0L /* NULL */ :				\
	  (struct cmsghdr *)(void *)((unsigned char *)(cmsg) +		\
	 		    __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define	CMSG_SPACE(l)		(__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define	CMSG_LEN(l)		(__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define	SCM_RIGHTS			0x01
#define	SCM_TIMESTAMP			0x02
#define	SCM_CREDS			0x03
#define	SCM_TIMESTAMP_MONOTONIC		0x04
#define	SHUT_RD		0
#define	SHUT_WR		1
#define	SHUT_RDWR	2
#define NULL_HANDLER (SigHandler *)SIG_DFL
#define TERMSIGS_LENGTH (sizeof (terminating_signals) / sizeof (struct termsig))
#define XSIG(x) (terminating_signals[x].signum)
#define XHANDLER(x) (terminating_signals[x].orig_handler)
#  define SA_INTERRUPT 0
#  define SA_RESTART 0
#  define SIGABRT SIGIOT
#  define SIGRETURN(n)	return
#  define SIGCHLD SIGCLD
#  define sigmask(x) (1 << ((x)-1))
#    define SIG_BLOCK 2
#    define SIG_SETMASK 3
#  define sigemptyset(set) (*(set) = 0)
#  define sigfillset(set) (*set) = sigmask (NSIG) - 1
#  define sigaddset(set, sig) *(set) |= sigmask (sig)
#  define sigdelset(set, sig) *(set) &= ~sigmask (sig)
#  define sigismember(set, sig) ((*(set) & sigmask (sig)) != 0)
#  define sigsuspend(set) sigpause (*(set))
#define BLOCK_SIGNAL(sig, nvar, ovar) \
  sigemptyset (&nvar); \
  sigaddset (&nvar, sig); \
  sigemptyset (&ovar); \
  sigprocmask (SIG_BLOCK, &nvar, &ovar)
#  define BLOCK_CHILD(nvar, ovar) \
	BLOCK_SIGNAL (SIGCHLD, nvar, ovar)
#  define UNBLOCK_CHILD(ovar) \
	sigprocmask (SIG_SETMASK, &ovar, (sigset_t *) NULL)
#  define BLOCK_CHILD(nvar, ovar) ovar = sigblock (sigmask (SIGCHLD))
#  define UNBLOCK_CHILD(ovar) sigsetmask (ovar)
#define SIGABRT SIGIOT
#define SIGCHLD SIGCLD
#  define sys_siglist _sys_siglist
#define DEFAULT_INITIAL_ARRAY_SIZE 112
#define DEFAULT_ARRAY_SIZE 128
#define VT_VARIABLE	0
#define VT_POSPARMS	1
#define VT_ARRAYVAR	2
#define VT_ARRAYMEMBER	3
#define ST_BACKSL	0x01
#define ST_CTLESC	0x02
#define issep(c)	(member ((c), separators))
#define EXP_CHAR(s) (s == '$' || s == '`' || s == '<' || s == '>' || s == CTLESC)
#define EXP_CHAR(s) (s == '$' || s == '`' || s == CTLESC)
#define RP_LONG_LEFT	1
#define RP_SHORT_LEFT	2
#define RP_LONG_RIGHT	3
#define RP_SHORT_RIGHT	4
#define FIFO_INCR 20
#define UNQUOTED	 0
#define PARTIALLY_QUOTED 1
#define WHOLLY_QUOTED    2
#define SET_INT_VAR(name, intvar)  intvar = find_variable (name) != 0
#  define NSIG 64
#  define STRLEN(s) ((s)[0] ? ((s)[1] ? ((s)[2] ? strlen(s) : 2) : 1) : 0)
#  define STREQ(a, b) ((a)[0] == (b)[0] && strcmp (a, b) == 0)
#  define member(c, s) (int)((c) ? (char *)strchr ((s), (c)) : 0)
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
#define EQ	0
#define NE	1
#define LT	2
#define GT	3
#define LE	4
#define GE	5
#define NT	0
#define OT	1
#define EF	2
#define TRUE 1
#define FALSE 0
#define SHELL_BOOLEAN(value) (!(value))
#define test_exit(val) \
	do { test_error_return = val; longjmp (test_exit_buf, 1); } while (0)
#  define EACCESS(path, mode)	access(path, mode)
#  define EACCESS(path, mode)	test_eaccess(path, mode)
#define advance(f) do { ++pos; if (f && pos >= argc) beyond (); } while (0)
#define unary_advance() do { advance (1); ++pos; } while (0)
#define ONE_ARG_TEST(s)		((s)[0] != '\0')
#define SIG_INHERITED   0x0
#define SIG_TRAPPED     0x1
#define SIG_HARD_IGNORE 0x2
#define SIG_SPECIAL     0x4
#define SIG_NO_TRAP     0x8
#define SIG_INPROGRESS	0x10
#define SIG_CHANGED	0x20
#define SIG_IGNORED	0x40
#define IMPOSSIBLE_TRAP_HANDLER (SigHandler *)initialize_traps
#define GET_ORIGINAL_SIGNAL(sig) \
  if (sig && sig < NSIG && original_signals[sig] == IMPOSSIBLE_TRAP_HANDLER) \
    get_original_signal (sig)
#define NSIG 64
#define set_auto_export(var) \
  do { var->attributes |= att_exported; array_needs_making = 1; } while (0)
#define FIND_OR_MAKE_VARIABLE(name, entry) \
  do \
    { \
      entry = find_variable (name); \
      if (!entry) \
	{ \
	  entry = bind_variable (name, ""); \
	  if (!no_invisible_vars) entry->attributes |= att_invisible; \
	} \
    } \
  while (0)
#define freetemp nlen
#define add_to_export_env(envstr,do_alloc) \
do \
  { \
    if (export_env_index >= (export_env_size - 1)) \
      { \
	export_env_size += 16; \
	export_env = (char **)xrealloc (export_env, export_env_size * sizeof (char *)); \
      } \
    export_env[export_env_index++] = (do_alloc) ? savestring (envstr) : envstr; \
    export_env[export_env_index] = (char *)NULL; \
  } while (0)
#define ISFUNC(s, o) ((s[o + 1] == '(')  && (s[o + 2] == ')'))
#  define MACHTYPE "unknown"
#    define NULL ((void *)0)
#define _VARARGS_H
#    define PTR_T void *
#    define PTR_T char *
#define YYBISON 1
#define RE_READ_TOKEN	-99
#define NO_EXPANSION	-100
#define YYDEBUG 0
#define const
#define	YYFINAL		263
#define	YYFLAG		-32768
#define	YYNTBASE	47
#define YYTRANSLATE(x) ((unsigned)(x) <= 290 ? yytranslate[x] : 78)
#define	YYLAST		517
#define alloca __builtin_alloca
#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)
#define YYTERROR	1
#define YYERRCODE	256
#define YYLEX		yylex()
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#define YYLEX		yylex(&yylval, &yylloc)
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#define YYLEX		yylex(&yylval)
#define YYINITDEPTH 200
#define YYMAXDEPTH 10000
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#define YYPARSE_PARAM_ARG
#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#define YYPOPSTACK   (yyvsp--, yyssp--)
#define PST_CASEPAT	0x001
#define PST_ALEXPNEXT	0x002
#define PST_ALLOWOPNBRC	0x004
#define PST_NEEDCLOSBRC	0x008
#define PST_DBLPAREN	0x010
#define PST_SUBSHELL	0x020
#define PST_CMDSUBST	0x040
#define PST_CASESTMT	0x080
#define TOKEN_DEFAULT_INITIAL_SIZE 496
#define TOKEN_DEFAULT_GROW_SIZE 512
#define shellmeta(c)	(strchr ("()<>;&|", (c)) != 0)
#define shellbreak(c)	(strchr ("()<>;&| \t\n", (c)) != 0)
#define shellquote(c)	((c) == '"' || (c) == '`' || (c) == '\'')
#define shellexp(c)	((c) == '$' || (c) == '<' || (c) == '>')
#define END_OF_ALIAS 0
#define current_delimiter(ds) \
  (ds.delimiter_depth ? ds.delimiters[ds.delimiter_depth - 1] : 0)
#define push_delimiter(ds, character) \
  do \
    { \
      if (ds.delimiter_depth + 2 > ds.delimiter_space) \
	ds.delimiters = xrealloc \
	  (ds.delimiters, (ds.delimiter_space += 10) * sizeof (char)); \
      ds.delimiters[ds.delimiter_depth] = character; \
      ds.delimiter_depth++; \
    } \
  while (0)
#define pop_delimiter(ds)	ds.delimiter_depth--
#define READ 0
#define RESET 1
#define prompt_is_ps1 \
      (!prompt_string_pointer || prompt_string_pointer == &ps1_prompt)
#define command_token_position(token) \
  (((token) == ASSIGNMENT_WORD) || \
   ((token) != SEMI_SEMI && reserved_word_acceptable(token)))
#define assignment_acceptable(token) command_token_position(token) && \
					((parser_state & PST_CASEPAT) == 0)
#define CHECK_FOR_RESERVED_WORD(tok) \
  do { \
    if (!dollar_present && !quoted && \
	reserved_word_acceptable (last_read_token)) \
      { \
	int i; \
	for (i = 0; word_token_alist[i].word != (char *)NULL; i++) \
	  if (STREQ (tok, word_token_alist[i].word)) \
	    { \
	      if ((parser_state & PST_CASEPAT) && (word_token_alist[i].token != ESAC)) \
		break; \
	      if (word_token_alist[i].token == ESAC) \
		parser_state &= ~(PST_CASEPAT|PST_CASESTMT); \
	      else if (word_token_alist[i].token == CASE) \
		parser_state |= PST_CASESTMT; \
	      else if (word_token_alist[i].token == '{') \
		open_brace_count++; \
	      else if (word_token_alist[i].token == '}' && open_brace_count) \
		open_brace_count--; \
	      return (word_token_alist[i].token); \
	    } \
      } \
  } while (0)
#define PROMPT_GROWTH 48
