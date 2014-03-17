typedef struct {} size_t;
typedef struct {} ssize_t;
typedef struct {} lua_State;
typedef struct {} lua_Alloc;
typedef struct {} lua_CFunction;
typedef struct {} lua_Number;
typedef struct {} lua_Integer;
typedef struct {} lua_Unsigned;
typedef struct {} va_list;
typedef struct {} lua_Reader;
typedef struct {} lua_Writer;
typedef struct {} lua_Debug;
typedef struct {} lua_Hook;
typedef struct {} CommonHeader;
typedef struct {} GCObject;
typedef struct {} numfield;
typedef struct {} TValuefields;
typedef struct {} L_Umaxalign;
typedef struct {} lu_byte;
typedef struct {} TString;
typedef struct {} TValue;
typedef struct {} Instruction;
typedef struct {} LocVar;
typedef struct {} Upvaldesc;
typedef struct {} ClosureHeader;
typedef struct {} UpVal;
typedef struct {} CClosure;
typedef struct {} LClosure;
typedef struct {} TKey;
typedef struct {} Node;
typedef struct {} Table;
typedef struct {} TMS;
typedef struct {} Mbuffer;
typedef struct {} ZIO;
typedef struct {} lu_int32;
typedef struct {} StkId;
typedef struct {} ptrdiff_t;
typedef struct {} lu_mem;
typedef struct {} l_mem;
typedef struct {} stringtable;
typedef struct {} global_State;
typedef struct {} CallInfo;
typedef struct {} GCheader;
typedef struct {} Pfunc;
typedef struct {} Proto;
typedef struct {} Closure;
typedef struct {} NONVALIDVALUE;
typedef struct {} GCSTEPSIZE;
typedef struct {} Udata;
typedef struct {} fpos_t;
typedef struct {} FILE;
typedef struct {} off_t;
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
typedef struct {} luaL_Reg;
typedef struct {} luaL_Buffer;
typedef struct {} LoadF;
typedef struct {} LoadS;
typedef struct {} __darwin_rune_t;
typedef struct {} _RuneEntry;
typedef struct {} _RuneRange;
typedef struct {} _RuneCharClass;
typedef struct {} _RuneLocale;
typedef struct {} __darwin_ct_rune_t;
typedef struct {} b_uint;
typedef struct {} ALLONES;
typedef struct {} SemInfo;
typedef struct {} Token;
typedef struct {} LexState;
typedef struct {} expkind;
typedef struct {} Labeldesc;
typedef struct {} Vardesc;
typedef struct {} Labellist;
typedef struct {} Dyndata;
typedef struct {} FuncState;
typedef struct {} OpCode;
typedef struct {} expdesc;
typedef struct {} UnOpr;
typedef struct {} BinOpr;
typedef struct {} jmp_buf;
typedef struct {} sigjmp_buf;
typedef struct {} luai_jmpbuf;
typedef struct {} DumpState;
typedef struct {} GCSWEEPCOST;
typedef struct {} GCSWEEPMAX;
typedef struct {} MAX_LMEM;
typedef struct {} LStream;
typedef struct {} MAX_SIZE_T;
typedef struct {} MAX_SIZET;
typedef struct {} Dl_info;
typedef struct {} DWORD;
typedef struct {} HMODULE;
typedef struct {} clock_t;
typedef struct {} time_t;
typedef struct {} gid_t;
typedef struct {} useconds_t;
typedef struct {} __int32_t;
typedef struct {} __DARWIN_NFDBITS;
typedef struct {} fd_set;
typedef struct {} uuid_t;
typedef struct {} BlockCnt;
typedef struct {} LX;
typedef struct {} LG;
typedef struct {} MAXSIZE;
typedef struct {} MatchState;
typedef struct {} pthread_t;
typedef struct {} stack_t;
typedef struct {} histdata_t;
typedef struct {} Function;
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
typedef struct {} LoadState;
#define A
#define _STDARG_H
#define _ANSI_STDARG_H_
#define __GNUC_VA_LIST
#define va_start(v,l)	__builtin_va_start(v,l)
#define va_end(v)	__builtin_va_end(v)
#define va_arg(v,l)	__builtin_va_arg(v,l)
#define va_copy(d,s)	__builtin_va_copy(d,s)
#define __va_copy(d,s)	__builtin_va_copy(d,s)
#define _VA_LIST_
#define _VA_LIST
#define _VA_LIST_DEFINED
#define _VA_LIST_T_H
#define __va_list__
#define	_STRING_H_
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
#define	_SIZE_T
#define NULL __DARWIN_NULL
#define _SSIZE_T
#define _STRINGS_H_
#define _SECURE__STRING_H_
#define _SECURE__COMMON_H_
#    define _USE_FORTIFY_LEVEL 2
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1)
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
#define lapi_c
#define LUA_CORE
#define lua_h
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
#define lconfig_h
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
#define	ARG_MAX		   (256 * 1024)
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
#define LUA_VDIR	LUA_VERSION_MAJOR "." LUA_VERSION_MINOR "/"
#define LUA_ROOT	"/usr/local/"
#define LUA_LDIR	LUA_ROOT "share/lua/" LUA_VDIR
#define LUA_CDIR	LUA_ROOT "lib/lua/" LUA_VDIR
#define LUA_PATH_DEFAULT  \
		LUA_LDIR"?.lua;"  LUA_LDIR"?/init.lua;" \
		LUA_CDIR"?.lua;"  LUA_CDIR"?/init.lua;" "./?.lua"
#define LUA_CPATH_DEFAULT \
		LUA_CDIR"?.so;" LUA_CDIR"loadall.so;" "./?.so"
#define LUA_DIRSEP	"/"
#define LUA_ENV		"_ENV"
#define LUA_API
#define LUALIB_API	LUA_API
#define LUAMOD_API	LUALIB_API
#define LUAI_FUNC
#define LUAI_DDEC
#define LUAI_DDEF	/* empty */
#define LUA_QL(x)	"'" x "'"
#define LUA_QS		LUA_QL("%s")
#define LUA_IDSIZE	60
#define luai_writestringerror(s,p) \
	(fprintf(stderr, (s), (p)), fflush(stderr))
#define LUAI_MAXSHORTLEN        40
#define LUAI_BITSINT	32
#define LUA_INT32	int
#define LUAI_UMEM	size_t
#define LUAI_MEM	ptrdiff_t
#define LUAI_MAXSTACK		1000000
#define LUAI_FIRSTPSEUDOIDX	(-LUAI_MAXSTACK - 1000)
#define LUAL_BUFFERSIZE		BUFSIZ
#define LUA_NUMBER_DOUBLE
#define LUA_NUMBER	double
#define LUAI_UACNUMBER	double
#define LUA_NUMBER_SCAN		"%lf"
#define LUA_NUMBER_FMT		"%.14g"
#define lua_number2str(s,n)	sprintf((s), LUA_NUMBER_FMT, (n))
#define LUAI_MAXNUMBER2STR	32
#define lua_str2number(s,p)	strtod((s), (p))
#define luai_numadd(L,a,b)	((a)+(b))
#define luai_numsub(L,a,b)	((a)-(b))
#define luai_nummul(L,a,b)	((a)*(b))
#define luai_numdiv(L,a,b)	((a)/(b))
#define luai_numunm(L,a)	(-(a))
#define luai_numeq(a,b)		((a)==(b))
#define luai_numlt(L,a,b)	((a)<(b))
#define luai_numle(L,a,b)	((a)<=(b))
#define luai_numisnan(L,a)	(!luai_numeq((a), (a)))
#define LUA_INTEGER	ptrdiff_t
#define LUA_UNSIGNED	unsigned LUA_INT32
#define LUA_IEEE754TRICK
#define LUA_IEEEENDIAN		0
#define LUA_VERSION_MAJOR	"5"
#define LUA_VERSION_MINOR	"2"
#define LUA_VERSION_NUM		502
#define LUA_VERSION_RELEASE	"1"
#define LUA_VERSION	"Lua " LUA_VERSION_MAJOR "." LUA_VERSION_MINOR
#define LUA_RELEASE	LUA_VERSION "." LUA_VERSION_RELEASE
#define LUA_COPYRIGHT	LUA_RELEASE "  Copyright (C) 1994-2012 Lua.org, PUC-Rio"
#define LUA_AUTHORS	"R. Ierusalimschy, L. H. de Figueiredo, W. Celes"
#define LUA_SIGNATURE	"\033Lua"
#define LUA_MULTRET	(-1)
#define LUA_REGISTRYINDEX	LUAI_FIRSTPSEUDOIDX
#define lua_upvalueindex(i)	(LUA_REGISTRYINDEX - (i))
#define LUA_OK		0
#define LUA_YIELD	1
#define LUA_ERRRUN	2
#define LUA_ERRSYNTAX	3
#define LUA_ERRMEM	4
#define LUA_ERRGCMM	5
#define LUA_ERRERR	6
#define LUA_TNONE		(-1)
#define LUA_TNIL		0
#define LUA_TBOOLEAN		1
#define LUA_TLIGHTUSERDATA	2
#define LUA_TNUMBER		3
#define LUA_TSTRING		4
#define LUA_TTABLE		5
#define LUA_TFUNCTION		6
#define LUA_TUSERDATA		7
#define LUA_TTHREAD		8
#define LUA_NUMTAGS		9
#define LUA_MINSTACK	20
#define LUA_RIDX_MAINTHREAD	1
#define LUA_RIDX_GLOBALS	2
#define LUA_RIDX_LAST		LUA_RIDX_GLOBALS
#define LUA_OPADD	0
#define LUA_OPSUB	1
#define LUA_OPMUL	2
#define LUA_OPDIV	3
#define LUA_OPMOD	4
#define LUA_OPPOW	5
#define LUA_OPUNM	6
#define LUA_OPEQ	0
#define LUA_OPLT	1
#define LUA_OPLE	2
#define lua_call(L,n,r)		lua_callk(L, (n), (r), 0, NULL)
#define lua_pcall(L,n,r,f)	lua_pcallk(L, (n), (r), (f), 0, NULL)
#define lua_yield(L,n)		lua_yieldk(L, (n), 0, NULL)
#define LUA_GCSTOP		0
#define LUA_GCRESTART		1
#define LUA_GCCOLLECT		2
#define LUA_GCCOUNT		3
#define LUA_GCCOUNTB		4
#define LUA_GCSTEP		5
#define LUA_GCSETPAUSE		6
#define LUA_GCSETSTEPMUL	7
#define LUA_GCSETMAJORINC	8
#define LUA_GCISRUNNING		9
#define LUA_GCGEN		10
#define LUA_GCINC		11
#define lua_tonumber(L,i)	lua_tonumberx(L,i,NULL)
#define lua_tointeger(L,i)	lua_tointegerx(L,i,NULL)
#define lua_tounsigned(L,i)	lua_tounsignedx(L,i,NULL)
#define lua_pop(L,n)		lua_settop(L, -(n)-1)
#define lua_newtable(L)		lua_createtable(L, 0, 0)
#define lua_register(L,n,f) (lua_pushcfunction(L, (f)), lua_setglobal(L, (n)))
#define lua_pushcfunction(L,f)	lua_pushcclosure(L, (f), 0)
#define lua_isfunction(L,n)	(lua_type(L, (n)) == LUA_TFUNCTION)
#define lua_istable(L,n)	(lua_type(L, (n)) == LUA_TTABLE)
#define lua_islightuserdata(L,n)	(lua_type(L, (n)) == LUA_TLIGHTUSERDATA)
#define lua_isnil(L,n)		(lua_type(L, (n)) == LUA_TNIL)
#define lua_isboolean(L,n)	(lua_type(L, (n)) == LUA_TBOOLEAN)
#define lua_isthread(L,n)	(lua_type(L, (n)) == LUA_TTHREAD)
#define lua_isnone(L,n)		(lua_type(L, (n)) == LUA_TNONE)
#define lua_isnoneornil(L, n)	(lua_type(L, (n)) <= 0)
#define lua_pushliteral(L, s)	\
	lua_pushlstring(L, "" s, (sizeof(s)/sizeof(char))-1)
#define lua_pushglobaltable(L)  \
	lua_rawgeti(L, LUA_REGISTRYINDEX, LUA_RIDX_GLOBALS)
#define lua_tostring(L,i)	lua_tolstring(L, (i), NULL)
#define LUA_HOOKCALL	0
#define LUA_HOOKRET	1
#define LUA_HOOKLINE	2
#define LUA_HOOKCOUNT	3
#define LUA_HOOKTAILCALL 4
#define LUA_MASKCALL	(1 << LUA_HOOKCALL)
#define LUA_MASKRET	(1 << LUA_HOOKRET)
#define LUA_MASKLINE	(1 << LUA_HOOKLINE)
#define LUA_MASKCOUNT	(1 << LUA_HOOKCOUNT)
#define lapi_h
#define llimits_h
#define MAX_SIZET	((size_t)(~(size_t)0)-2)
#define MAX_LUMEM	((lu_mem)(~(lu_mem)0)-2)
#define MAX_LMEM	((l_mem) ((MAX_LUMEM >> 1) - 2))
#define MAX_INT (INT_MAX-2)
#define IntPoint(p)  ((unsigned int)(lu_mem)(p))
#define LUAI_USER_ALIGNMENT_T	union { double u; void *s; long l; }
#define lua_assert(c)		((void)0)
#define check_exp(c,e)		(e)
#define lua_longassert(c)	((void)0)
#define luai_apicheck(L,e)	lua_assert(e)
#define api_check(l,e,msg)	luai_apicheck(l,(e) && msg)
#define UNUSED(x)	((void)(x))
#define cast(t, exp)	((t)(exp))
#define cast_byte(i)	cast(lu_byte, (i))
#define cast_num(i)	cast(lua_Number, (i))
#define cast_int(i)	cast(int, (i))
#define cast_uchar(i)	cast(unsigned char, (i))
#define l_noret		void __attribute__((noreturn))
#define LUAI_MAXCCALLS		200
#define MAXUPVAL	UCHAR_MAX
#define MAXSTACK	250
#define MINSTRTABSIZE	32
#define LUA_MINBUFFER	32
#define lua_lock(L)     ((void) 0)
#define lua_unlock(L)   ((void) 0)
#define luai_threadyield(L)     {lua_unlock(L); lua_lock(L);}
#define luai_userstateopen(L)		((void)L)
#define luai_userstateclose(L)		((void)L)
#define luai_userstatethread(L,L1)	((void)L)
#define luai_userstatefree(L,L1)	((void)L)
#define luai_userstateresume(L,n)       ((void)L)
#define luai_userstateyield(L,n)        ((void)L)
#define LUA_IEEEENDIANLOC	LUA_IEEEENDIAN
#define LUAI_EXTRAIEEE		/* empty */
#define lua_number2int32(i,n,t) \
  { LUAI_EXTRAIEEE \
    volatile union luai_Cast u; u.l_d = (n) + 6755399441055744.0; \
    (i) = (t)u.l_p[LUA_IEEEENDIANLOC]; }
#define luai_hashnum(i,n)  \
  { volatile union luai_Cast u; u.l_d = (n) + 1.0;  /* avoid -0 */ \
    (i) = u.l_p[0]; (i) += u.l_p[1]; }
#define lua_number2int(i,n)		lua_number2int32(i, n, int)
#define lua_number2unsigned(i,n)	lua_number2int32(i, n, lua_Unsigned)
#define lua_number2integer(i,n)	((i)=(lua_Integer)(n))
#define lua_unsigned2number(u)  \
    (((u) <= (lua_Unsigned)INT_MAX) ? (lua_Number)(int)(u) : (lua_Number)(u))
#define condmovestack(L)	((void)0)
#define condchangemem(L)	condmovestack(L)
#define lstate_h
#define lobject_h
#define LUA_TPROTO	LUA_NUMTAGS
#define LUA_TUPVAL	(LUA_NUMTAGS+1)
#define LUA_TDEADKEY	(LUA_NUMTAGS+2)
#define LUA_TOTALTAGS	(LUA_TUPVAL+2)
#define VARBITS		(3 << 4)
#define LUA_TLCL	(LUA_TFUNCTION | (0 << 4))
#define LUA_TLCF	(LUA_TFUNCTION | (1 << 4))
#define LUA_TCCL	(LUA_TFUNCTION | (2 << 4))
#define LUA_TSHRSTR	(LUA_TSTRING | (0 << 4))
#define LUA_TLNGSTR	(LUA_TSTRING | (1 << 4))
#define BIT_ISCOLLECTABLE	(1 << 6)
#define ctb(t)			((t) | BIT_ISCOLLECTABLE)
#define CommonHeader	GCObject *next; lu_byte tt; lu_byte marked
#define numfield	lua_Number n;
#define TValuefields	Value value_; int tt_
#define NILCONSTANT	{NULL}, LUA_TNIL
#define val_(o)		((o)->value_)
#define num_(o)		(val_(o).n)
#define rttype(o)	((o)->tt_)
#define novariant(x)	((x) & 0x0F)
#define ttype(o)	(rttype(o) & 0x3F)
#define ttypenv(o)	(novariant(rttype(o)))
#define checktag(o,t)		(rttype(o) == (t))
#define checktype(o,t)		(ttypenv(o) == (t))
#define ttisnumber(o)		checktag((o), LUA_TNUMBER)
#define ttisnil(o)		checktag((o), LUA_TNIL)
#define ttisboolean(o)		checktag((o), LUA_TBOOLEAN)
#define ttislightuserdata(o)	checktag((o), LUA_TLIGHTUSERDATA)
#define ttisstring(o)		checktype((o), LUA_TSTRING)
#define ttisshrstring(o)	checktag((o), ctb(LUA_TSHRSTR))
#define ttislngstring(o)	checktag((o), ctb(LUA_TLNGSTR))
#define ttistable(o)		checktag((o), ctb(LUA_TTABLE))
#define ttisfunction(o)		checktype(o, LUA_TFUNCTION)
#define ttisclosure(o)		((rttype(o) & 0x1F) == LUA_TFUNCTION)
#define ttisCclosure(o)		checktag((o), ctb(LUA_TCCL))
#define ttisLclosure(o)		checktag((o), ctb(LUA_TLCL))
#define ttislcf(o)		checktag((o), LUA_TLCF)
#define ttisuserdata(o)		checktag((o), ctb(LUA_TUSERDATA))
#define ttisthread(o)		checktag((o), ctb(LUA_TTHREAD))
#define ttisdeadkey(o)		checktag((o), LUA_TDEADKEY)
#define ttisequal(o1,o2)	(rttype(o1) == rttype(o2))
#define nvalue(o)	check_exp(ttisnumber(o), num_(o))
#define gcvalue(o)	check_exp(iscollectable(o), val_(o).gc)
#define pvalue(o)	check_exp(ttislightuserdata(o), val_(o).p)
#define rawtsvalue(o)	check_exp(ttisstring(o), &val_(o).gc->ts)
#define tsvalue(o)	(&rawtsvalue(o)->tsv)
#define rawuvalue(o)	check_exp(ttisuserdata(o), &val_(o).gc->u)
#define uvalue(o)	(&rawuvalue(o)->uv)
#define clvalue(o)	check_exp(ttisclosure(o), &val_(o).gc->cl)
#define clLvalue(o)	check_exp(ttisLclosure(o), &val_(o).gc->cl.l)
#define clCvalue(o)	check_exp(ttisCclosure(o), &val_(o).gc->cl.c)
#define fvalue(o)	check_exp(ttislcf(o), val_(o).f)
#define hvalue(o)	check_exp(ttistable(o), &val_(o).gc->h)
#define bvalue(o)	check_exp(ttisboolean(o), val_(o).b)
#define thvalue(o)	check_exp(ttisthread(o), &val_(o).gc->th)
#define deadvalue(o)	check_exp(ttisdeadkey(o), cast(void *, val_(o).gc))
#define l_isfalse(o)	(ttisnil(o) || (ttisboolean(o) && bvalue(o) == 0))
#define iscollectable(o)	(rttype(o) & BIT_ISCOLLECTABLE)
#define righttt(obj)		(ttype(obj) == gcvalue(obj)->gch.tt)
#define checkliveness(g,obj) \
	lua_longassert(!iscollectable(obj) || \
			(righttt(obj) && !isdead(g,gcvalue(obj))))
#define settt_(o,t)	((o)->tt_=(t))
#define setnvalue(obj,x) \
  { TValue *io=(obj); num_(io)=(x); settt_(io, LUA_TNUMBER); }
#define changenvalue(o,x)	check_exp(ttisnumber(o), num_(o)=(x))
#define setnilvalue(obj) settt_(obj, LUA_TNIL)
#define setfvalue(obj,x) \
  { TValue *io=(obj); val_(io).f=(x); settt_(io, LUA_TLCF); }
#define setpvalue(obj,x) \
  { TValue *io=(obj); val_(io).p=(x); settt_(io, LUA_TLIGHTUSERDATA); }
#define setbvalue(obj,x) \
  { TValue *io=(obj); val_(io).b=(x); settt_(io, LUA_TBOOLEAN); }
#define setgcovalue(L,obj,x) \
  { TValue *io=(obj); GCObject *i_g=(x); \
    val_(io).gc=i_g; settt_(io, ctb(gch(i_g)->tt)); }
#define setsvalue(L,obj,x) \
  { TValue *io=(obj); \
    TString *x_ = (x); \
    val_(io).gc=cast(GCObject *, x_); settt_(io, ctb(x_->tsv.tt)); \
    checkliveness(G(L),io); }
#define setuvalue(L,obj,x) \
  { TValue *io=(obj); \
    val_(io).gc=cast(GCObject *, (x)); settt_(io, ctb(LUA_TUSERDATA)); \
    checkliveness(G(L),io); }
#define setthvalue(L,obj,x) \
  { TValue *io=(obj); \
    val_(io).gc=cast(GCObject *, (x)); settt_(io, ctb(LUA_TTHREAD)); \
    checkliveness(G(L),io); }
#define setclLvalue(L,obj,x) \
  { TValue *io=(obj); \
    val_(io).gc=cast(GCObject *, (x)); settt_(io, ctb(LUA_TLCL)); \
    checkliveness(G(L),io); }
#define setclCvalue(L,obj,x) \
  { TValue *io=(obj); \
    val_(io).gc=cast(GCObject *, (x)); settt_(io, ctb(LUA_TCCL)); \
    checkliveness(G(L),io); }
#define sethvalue(L,obj,x) \
  { TValue *io=(obj); \
    val_(io).gc=cast(GCObject *, (x)); settt_(io, ctb(LUA_TTABLE)); \
    checkliveness(G(L),io); }
#define setdeadvalue(obj)	settt_(obj, LUA_TDEADKEY)
#define setobj(L,obj1,obj2) \
	{ const TValue *io2=(obj2); TValue *io1=(obj1); \
	  io1->value_ = io2->value_; io1->tt_ = io2->tt_; \
	  checkliveness(G(L),io1); }
#define setobjs2s	setobj
#define setobj2s	setobj
#define setsvalue2s	setsvalue
#define sethvalue2s	sethvalue
#define setptvalue2s	setptvalue
#define setobjt2t	setobj
#define setobj2t	setobj
#define setobj2n	setobj
#define setsvalue2n	setsvalue
#define luai_checknum(L,o,c)	{ /* empty */ }
#define getstr(ts)	cast(const char *, (ts) + 1)
#define svalue(o)       getstr(rawtsvalue(o))
#define ClosureHeader \
	CommonHeader; lu_byte nupvalues; GCObject *gclist
#define isLfunction(o)	ttisLclosure(o)
#define getproto(o)	(clLvalue(o)->p)
#define lmod(s,size) \
	(check_exp((size&(size-1))==0, (cast(int, (s) & ((size)-1)))))
#define twoto(x)	(1<<(x))
#define sizenode(t)	(twoto((t)->lsizenode))
#define luaO_nilobject		(&luaO_nilobject_)
#define ltm_h
#define gfasttm(g,et,e) ((et) == NULL ? NULL : \
  ((et)->flags & (1u<<(e))) ? NULL : luaT_gettm(et, e, (g)->tmname[e]))
#define fasttm(l,et,e)	gfasttm(G(l), et, e)
#define ttypename(x)	luaT_typenames_[(x) + 1]
#define objtypename(x)	ttypename(ttypenv(x))
#define lzio_h
#define lmem_h
#define luaM_reallocv(L,b,on,n,e) \
	((cast(size_t, (n)+1) > MAX_SIZET/(e)) ?  /* +1 to avoid warnings */ \
		(luaM_toobig(L), (void *)0) : \
		luaM_realloc_(L, (b), (on)*(e), (n)*(e)))
#define luaM_freemem(L, b, s)	luaM_realloc_(L, (b), (s), 0)
#define luaM_free(L, b)		luaM_realloc_(L, (b), sizeof(*(b)), 0)
#define luaM_freearray(L, b, n)   luaM_reallocv(L, (b), n, 0, sizeof((b)[0]))
#define luaM_malloc(L,s)	luaM_realloc_(L, NULL, 0, (s))
#define luaM_new(L,t)		cast(t *, luaM_malloc(L, sizeof(t)))
#define luaM_newvector(L,n,t) \
		cast(t *, luaM_reallocv(L, NULL, 0, n, sizeof(t)))
#define luaM_newobject(L,tag,s)	luaM_realloc_(L, NULL, tag, (s))
#define luaM_growvector(L,v,nelems,size,t,limit,e) \
          if ((nelems)+1 > (size)) \
            ((v)=cast(t *, luaM_growaux_(L,v,&(size),sizeof(t),limit,e)))
#define luaM_reallocvector(L, v,oldn,n,t) \
   ((v)=cast(t *, luaM_reallocv(L, v, oldn, n, sizeof(t))))
#define EOZ	(-1)
#define zgetc(z)  (((z)->n--)>0 ?  cast_uchar(*(z)->p++) : luaZ_fill(z))
#define luaZ_initbuffer(L, buff) ((buff)->buffer = NULL, (buff)->buffsize = 0)
#define luaZ_buffer(buff)	((buff)->buffer)
#define luaZ_sizebuffer(buff)	((buff)->buffsize)
#define luaZ_bufflen(buff)	((buff)->n)
#define luaZ_resetbuffer(buff) ((buff)->n = 0)
#define luaZ_resizebuffer(L, buff, size) \
	(luaM_reallocvector(L, (buff)->buffer, (buff)->buffsize, size, char), \
	(buff)->buffsize = size)
#define luaZ_freebuffer(L, buff)	luaZ_resizebuffer(L, buff, 0)
#define EXTRA_STACK   5
#define BASIC_STACK_SIZE        (2*LUA_MINSTACK)
#define KGC_NORMAL	0
#define KGC_EMERGENCY	1
#define KGC_GEN		2
#define CIST_LUA	(1<<0)
#define CIST_HOOKED	(1<<1)
#define CIST_REENTRY	(1<<2)
#define CIST_YIELDED	(1<<3)
#define CIST_YPCALL	(1<<4)
#define CIST_STAT	(1<<5)
#define CIST_TAIL	(1<<6)
#define CIST_HOOKYIELD	(1<<7)
#define isLua(ci)	((ci)->callstatus & CIST_LUA)
#define G(L)	(L->l_G)
#define gch(o)		(&(o)->gch)
#define rawgco2ts(o)  \
	check_exp(novariant((o)->gch.tt) == LUA_TSTRING, &((o)->ts))
#define gco2ts(o)	(&rawgco2ts(o)->tsv)
#define rawgco2u(o)	check_exp((o)->gch.tt == LUA_TUSERDATA, &((o)->u))
#define gco2u(o)	(&rawgco2u(o)->uv)
#define gco2lcl(o)	check_exp((o)->gch.tt == LUA_TLCL, &((o)->cl.l))
#define gco2ccl(o)	check_exp((o)->gch.tt == LUA_TCCL, &((o)->cl.c))
#define gco2cl(o)  \
	check_exp(novariant((o)->gch.tt) == LUA_TFUNCTION, &((o)->cl))
#define gco2t(o)	check_exp((o)->gch.tt == LUA_TTABLE, &((o)->h))
#define gco2p(o)	check_exp((o)->gch.tt == LUA_TPROTO, &((o)->p))
#define gco2uv(o)	check_exp((o)->gch.tt == LUA_TUPVAL, &((o)->uv))
#define gco2th(o)	check_exp((o)->gch.tt == LUA_TTHREAD, &((o)->th))
#define obj2gco(v)	(cast(GCObject *, (v)))
#define gettotalbytes(g)	((g)->totalbytes + (g)->GCdebt)
#define api_incr_top(L)   {L->top++; api_check(L, L->top <= L->ci->top, \
				"stack overflow");}
#define adjustresults(L,nres) \
    { if ((nres) == LUA_MULTRET && L->ci->top < L->top) L->ci->top = L->top; }
#define api_checknelems(L,n)	api_check(L, (n) < (L->top - L->ci->func), \
				  "not enough elements in the stack")
#define ldebug_h
#define pcRel(pc, p)	(cast(int, (pc) - (p)->code) - 1)
#define getfuncline(f,pc)	(((f)->lineinfo) ? (f)->lineinfo[pc] : 0)
#define resethookcount(L)	(L->hookcount = L->basehookcount)
#define ci_func(ci)		(clLvalue((ci)->func))
#define ldo_h
#define luaD_checkstack(L,n)	if (L->stack_last - L->top <= (n)) \
				    luaD_growstack(L, n); else condmovestack(L);
#define incr_top(L) {L->top++; luaD_checkstack(L,0);}
#define savestack(L,p)		((char *)(p) - (char *)L->stack)
#define restorestack(L,n)	((TValue *)((char *)L->stack + (n)))
#define lfunc_h
#define sizeCclosure(n)	(cast(int, sizeof(CClosure)) + \
                         cast(int, sizeof(TValue)*((n)-1)))
#define sizeLclosure(n)	(cast(int, sizeof(LClosure)) + \
                         cast(int, sizeof(TValue *)*((n)-1)))
#define lgc_h
#define GCSTEPSIZE	(cast_int(100 * sizeof(TString)))
#define GCSpropagate	0
#define GCSatomic	1
#define GCSsweepstring	2
#define GCSsweepudata	3
#define GCSsweep	4
#define GCSpause	5
#define issweepphase(g)  \
	(GCSsweepstring <= (g)->gcstate && (g)->gcstate <= GCSsweep)
#define isgenerational(g)	((g)->gckind == KGC_GEN)
#define keepinvariant(g)  (isgenerational(g) || g->gcstate <= GCSatomic)
#define resetbits(x,m)		((x) &= cast(lu_byte, ~(m)))
#define setbits(x,m)		((x) |= (m))
#define testbits(x,m)		((x) & (m))
#define bitmask(b)		(1<<(b))
#define bit2mask(b1,b2)		(bitmask(b1) | bitmask(b2))
#define l_setbit(x,b)		setbits(x, bitmask(b))
#define resetbit(x,b)		resetbits(x, bitmask(b))
#define testbit(x,b)		testbits(x, bitmask(b))
#define WHITE0BIT	0
#define WHITE1BIT	1
#define BLACKBIT	2
#define FINALIZEDBIT	3
#define SEPARATED	4
#define FIXEDBIT	5
#define OLDBIT		6
#define WHITEBITS	bit2mask(WHITE0BIT, WHITE1BIT)
#define iswhite(x)      testbits((x)->gch.marked, WHITEBITS)
#define isblack(x)      testbit((x)->gch.marked, BLACKBIT)
#define isgray(x)  /* neither white nor black */  \
	(!testbits((x)->gch.marked, WHITEBITS | bitmask(BLACKBIT)))
#define isold(x)	testbit((x)->gch.marked, OLDBIT)
#define resetoldbit(o)	resetbit((o)->gch.marked, OLDBIT)
#define otherwhite(g)	(g->currentwhite ^ WHITEBITS)
#define isdeadm(ow,m)	(!(((m) ^ WHITEBITS) & (ow)))
#define isdead(g,v)	isdeadm(otherwhite(g), (v)->gch.marked)
#define changewhite(x)	((x)->gch.marked ^= WHITEBITS)
#define gray2black(x)	l_setbit((x)->gch.marked, BLACKBIT)
#define valiswhite(x)	(iscollectable(x) && iswhite(gcvalue(x)))
#define luaC_white(g)	cast(lu_byte, (g)->currentwhite & WHITEBITS)
#define luaC_condGC(L,c) \
	{if (G(L)->GCdebt > 0) {c;}; condchangemem(L);}
#define luaC_checkGC(L)		luaC_condGC(L, luaC_step(L);)
#define luaC_barrier(L,p,v) { if (valiswhite(v) && isblack(obj2gco(p)))  \
	luaC_barrier_(L,obj2gco(p),gcvalue(v)); }
#define luaC_barrierback(L,p,v) { if (valiswhite(v) && isblack(obj2gco(p)))  \
	luaC_barrierback_(L,p); }
#define luaC_objbarrier(L,p,o)  \
	{ if (iswhite(obj2gco(o)) && isblack(obj2gco(p))) \
		luaC_barrier_(L,obj2gco(p),obj2gco(o)); }
#define luaC_objbarrierback(L,p,o)  \
   { if (iswhite(obj2gco(o)) && isblack(obj2gco(p))) luaC_barrierback_(L,p); }
#define luaC_barrierproto(L,p,c) \
   { if (isblack(obj2gco(p))) luaC_barrierproto_(L,p,c); }
#define lstring_h
#define sizestring(s)	(sizeof(union TString)+((s)->len+1)*sizeof(char))
#define sizeudata(u)	(sizeof(union Udata)+(u)->len)
#define luaS_newliteral(L, s)	(luaS_newlstr(L, "" s, \
                                 (sizeof(s)/sizeof(char))-1))
#define luaS_fix(s)	l_setbit((s)->tsv.marked, FIXEDBIT)
#define isreserved(s)	((s)->tsv.tt == LUA_TSHRSTR && (s)->tsv.extra > 0)
#define eqshrstr(a,b)	check_exp((a)->tsv.tt == LUA_TSHRSTR, (a) == (b))
#define ltable_h
#define gnode(t,i)	(&(t)->node[i])
#define gkey(n)		(&(n)->i_key.tvk)
#define gval(n)		(&(n)->i_val)
#define gnext(n)	((n)->i_key.nk.next)
#define invalidateTMcache(t)	((t)->flags = 0)
#define lundump_h
#define LUAC_TAIL		"\x19\x93\r\n\x1a\n"
#define LUAC_HEADERSIZE		(sizeof(LUA_SIGNATURE)-sizeof(char)+2+6+sizeof(LUAC_TAIL)-sizeof(char))
#define lvm_h
#define tostring(L,o) (ttisstring(o) || (luaV_tostring(L, o)))
#define tonumber(o,n)	(ttisnumber(o) || (((o) = luaV_tonumber(o,n)) != NULL))
#define equalobj(L,o1,o2)  (ttisequal(o1, o2) && luaV_equalobj_(L, o1, o2))
#define luaV_rawequalobj(t1,t2)  \
        (ttisequal(t1,t2) && luaV_equalobj_(NULL,t1,t2))
#define NONVALIDVALUE		cast(TValue *, luaO_nilobject)
#define isvalid(o)	((o) != luaO_nilobject)
#define api_checkvalidindex(L, i)  api_check(L, isvalid(i), "invalid index")
#define checkresults(L,na,nr) \
     api_check(L, (nr) == LUA_MULTRET || (L->ci->top - L->top >= (nr) - (na)), \
	"results from function overflow current stack size")
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
#define lua_number2int(i,n)	((i)=(int)(n))
#define __MATH_H__
#define __MATH__
#define    HUGE_VAL     __builtin_huge_val()
#define    HUGE_VALF    __builtin_huge_valf()
#define    HUGE_VALL    __builtin_huge_vall()
#define    NAN          __builtin_nanf("0x7fc00000")
#define  __MATH_H_ALWAYS_INLINE__ __attribute__ ((__always_inline__))
#define INFINITY    HUGE_VALF
#define FP_NAN          1
#define FP_INFINITE     2
#define FP_ZERO         3
#define FP_NORMAL       4
#define FP_SUBNORMAL    5
#define FP_SUPERNORMAL  6
#define FP_ILOGB0      (-2147483647 - 1)
#define FP_ILOGBNAN    (-2147483647 - 1)
#define MATH_ERRNO        1
#define MATH_ERREXCEPT    2
#define math_errhandling (__math_errhandling())
#define fpclassify(x)                                                    \
    ( sizeof(x) == sizeof(float)  ? __fpclassifyf((float)(x))            \
    : sizeof(x) == sizeof(double) ? __fpclassifyd((double)(x))           \
                                  : __fpclassifyl((long double)(x)))
#define isnormal(x)                                                      \
    ( sizeof(x) == sizeof(float)  ? __inline_isnormalf((float)(x))       \
    : sizeof(x) == sizeof(double) ? __inline_isnormald((double)(x))      \
                                  : __inline_isnormall((long double)(x)))
#define isfinite(x)                                                      \
    ( sizeof(x) == sizeof(float)  ? __inline_isfinitef((float)(x))       \
    : sizeof(x) == sizeof(double) ? __inline_isfinited((double)(x))      \
                                  : __inline_isfinitel((long double)(x)))
#define isinf(x)                                                         \
    ( sizeof(x) == sizeof(float)  ? __inline_isinff((float)(x))          \
    : sizeof(x) == sizeof(double) ? __inline_isinfd((double)(x))         \
                                  : __inline_isinfl((long double)(x)))
#define isnan(x)                                                         \
    ( sizeof(x) == sizeof(float)  ? __inline_isnanf((float)(x))          \
    : sizeof(x) == sizeof(double) ? __inline_isnand((double)(x))         \
                                  : __inline_isnanl((long double)(x)))
#define signbit(x)                                                       \
    ( sizeof(x) == sizeof(float)  ? __inline_signbitf((float)(x))        \
    : sizeof(x) == sizeof(double) ? __inline_signbitd((double)(x))       \
                                  : __inline_signbitl((long double)(x)))
#define isgreater(x, y) __builtin_isgreater((x),(y))
#define isgreaterequal(x, y) __builtin_isgreaterequal((x),(y))
#define isless(x, y) __builtin_isless((x),(y))
#define islessequal(x, y) __builtin_islessequal((x),(y))
#define islessgreater(x, y) __builtin_islessgreater((x),(y))
#define isunordered(x, y) __builtin_isunordered((x),(y))
#define M_E         2.71828182845904523536028747135266250
#define M_LOG2E     1.44269504088896340735992468100189214
#define M_LOG10E    0.434294481903251827651128918916605082
#define M_LN2       0.693147180559945309417232121458176568
#define M_LN10      2.30258509299404568401799145468436421
#define M_PI        3.14159265358979323846264338327950288
#define M_PI_2      1.57079632679489661923132169163975144
#define M_PI_4      0.785398163397448309615660845819875721
#define M_1_PI      0.318309886183790671537767526745028724
#define M_2_PI      0.636619772367581343075535053490057448
#define M_2_SQRTPI  1.12837916709551257389615890312154517
#define M_SQRT2     1.41421356237309504880168872420969808
#define M_SQRT1_2   0.707106781186547524400844362104849039
#define MAXFLOAT    0x1.fffffep+127f
#define FP_SNAN		FP_NAN
#define FP_QNAN		FP_NAN
#define	HUGE		MAXFLOAT
#define X_TLOSS		1.41484755040568800000e+16
#define	DOMAIN		1
#define	SING		2
#define	OVERFLOW	3
#define	UNDERFLOW	4
#define	TLOSS		5
#define	PLOSS		6
#define SUPUNSIGNED	((lua_Number)(~(lua_Unsigned)0) + 1)
#define lua_number2unsigned(i,n)  \
	((i)=(lua_Unsigned)((n) - floor((n)/SUPUNSIGNED)*SUPUNSIGNED))
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
#define	_STDIO_H_
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
#define	fropen(cookie, fn) funopen(cookie, fn, 0, 0, 0)
#define	fwopen(cookie, fn) funopen(cookie, 0, fn, 0, 0)
#define	feof_unlocked(p)	__sfeof(p)
#define	ferror_unlocked(p)	__sferror(p)
#define	clearerr_unlocked(p)	__sclearerr(p)
#define	fileno_unlocked(p)	__sfileno(p)
#define _SECURE__STDIO_H_
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
#define lauxlib_c
#define LUA_LIB
#define luai_writestring(s,l)	fwrite((s), sizeof(char), (l), stdout)
#define luai_writeline()	(luai_writestring("\n", 1), fflush(stdout))
#define lauxlib_h
#define LUA_ERRFILE     (LUA_ERRERR+1)
#define luaL_checkversion(L)	luaL_checkversion_(L, LUA_VERSION_NUM)
#define LUA_NOREF       (-2)
#define LUA_REFNIL      (-1)
#define luaL_loadfile(L,f)	luaL_loadfilex(L,f,NULL)
#define luaL_newlibtable(L,l)	\
  lua_createtable(L, 0, sizeof(l)/sizeof((l)[0]) - 1)
#define luaL_newlib(L,l)	(luaL_newlibtable(L,l), luaL_setfuncs(L,l,0))
#define luaL_argcheck(L, cond,numarg,extramsg)	\
		((void)((cond) || luaL_argerror(L, (numarg), (extramsg))))
#define luaL_checkstring(L,n)	(luaL_checklstring(L, (n), NULL))
#define luaL_optstring(L,n,d)	(luaL_optlstring(L, (n), (d), NULL))
#define luaL_checkint(L,n)	((int)luaL_checkinteger(L, (n)))
#define luaL_optint(L,n,d)	((int)luaL_optinteger(L, (n), (d)))
#define luaL_checklong(L,n)	((long)luaL_checkinteger(L, (n)))
#define luaL_optlong(L,n,d)	((long)luaL_optinteger(L, (n), (d)))
#define luaL_typename(L,i)	lua_typename(L, lua_type(L,(i)))
#define luaL_dofile(L, fn) \
	(luaL_loadfile(L, fn) || lua_pcall(L, 0, LUA_MULTRET, 0))
#define luaL_dostring(L, s) \
	(luaL_loadstring(L, s) || lua_pcall(L, 0, LUA_MULTRET, 0))
#define luaL_getmetatable(L,n)	(lua_getfield(L, LUA_REGISTRYINDEX, (n)))
#define luaL_opt(L,f,n,d)	(lua_isnoneornil(L,(n)) ? (d) : f(L,(n)))
#define luaL_loadbuffer(L,s,sz,n)	luaL_loadbufferx(L,s,sz,n,NULL)
#define luaL_addchar(B,c) \
  ((void)((B)->n < (B)->size || luaL_prepbuffsize((B), 1)), \
   ((B)->b[(B)->n++] = (c)))
#define luaL_addsize(B,s)	((B)->n += (s))
#define luaL_prepbuffer(B)	luaL_prepbuffsize(B, LUAL_BUFFERSIZE)
#define LUA_FILEHANDLE          "FILE*"
#define LEVELS1	12
#define LEVELS2	10
#define inspectstat(stat,what)  \
   if (WIFEXITED(stat)) { stat = WEXITSTATUS(stat); } \
   else if (WIFSIGNALED(stat)) { stat = WTERMSIG(stat); what = "signal"; }
#define inspectstat(stat,what)  /* no op */
#define buffonstack(B)	((B)->b != (B)->initb)
#define freelist	0
#define luaL_register(L,n,l)	(luaL_openlib(L,(n),(l),0))
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
#define lbaselib_c
#define lualib_h
#define LUA_COLIBNAME	"coroutine"
#define LUA_TABLIBNAME	"table"
#define LUA_IOLIBNAME	"io"
#define LUA_OSLIBNAME	"os"
#define LUA_STRLIBNAME	"string"
#define LUA_BITLIBNAME	"bit32"
#define LUA_MATHLIBNAME	"math"
#define LUA_DBLIBNAME	"debug"
#define LUA_LOADLIBNAME	"package"
#define lua_assert(x)	((void)0)
#define SPACECHARS	" \f\n\r\t\v"
#define RESERVEDSLOT	5
#define lbitlib_c
#define LUA_NBITS	32
#define ALLONES		(~(((~(lua_Unsigned)0) << (LUA_NBITS - 1)) << 1))
#define trim(x)		((x) & ALLONES)
#define mask(n)		(~((ALLONES << 1) << ((n) - 1)))
#define lcode_c
#define lcode_h
#define llex_h
#define FIRST_RESERVED	257
#define NUM_RESERVED	(cast(int, TK_WHILE-FIRST_RESERVED+1))
#define lopcodes_h
#define SIZE_C		9
#define SIZE_B		9
#define SIZE_Bx		(SIZE_C + SIZE_B)
#define SIZE_A		8
#define SIZE_Ax		(SIZE_C + SIZE_B + SIZE_A)
#define SIZE_OP		6
#define POS_OP		0
#define POS_A		(POS_OP + SIZE_OP)
#define POS_C		(POS_A + SIZE_A)
#define POS_B		(POS_C + SIZE_C)
#define POS_Bx		POS_C
#define POS_Ax		POS_A
#define MAXARG_Bx        ((1<<SIZE_Bx)-1)
#define MAXARG_sBx        (MAXARG_Bx>>1)
#define MAXARG_Ax	((1<<SIZE_Ax)-1)
#define MAXARG_A        ((1<<SIZE_A)-1)
#define MAXARG_B        ((1<<SIZE_B)-1)
#define MAXARG_C        ((1<<SIZE_C)-1)
#define MASK1(n,p)	((~((~(Instruction)0)<<(n)))<<(p))
#define MASK0(n,p)	(~MASK1(n,p))
#define GET_OPCODE(i)	(cast(OpCode, ((i)>>POS_OP) & MASK1(SIZE_OP,0)))
#define SET_OPCODE(i,o)	((i) = (((i)&MASK0(SIZE_OP,POS_OP)) | \
		((cast(Instruction, o)<<POS_OP)&MASK1(SIZE_OP,POS_OP))))
#define getarg(i,pos,size)	(cast(int, ((i)>>pos) & MASK1(size,0)))
#define setarg(i,v,pos,size)	((i) = (((i)&MASK0(size,pos)) | \
                ((cast(Instruction, v)<<pos)&MASK1(size,pos))))
#define GETARG_A(i)	getarg(i, POS_A, SIZE_A)
#define SETARG_A(i,v)	setarg(i, v, POS_A, SIZE_A)
#define GETARG_B(i)	getarg(i, POS_B, SIZE_B)
#define SETARG_B(i,v)	setarg(i, v, POS_B, SIZE_B)
#define GETARG_C(i)	getarg(i, POS_C, SIZE_C)
#define SETARG_C(i,v)	setarg(i, v, POS_C, SIZE_C)
#define GETARG_Bx(i)	getarg(i, POS_Bx, SIZE_Bx)
#define SETARG_Bx(i,v)	setarg(i, v, POS_Bx, SIZE_Bx)
#define GETARG_Ax(i)	getarg(i, POS_Ax, SIZE_Ax)
#define SETARG_Ax(i,v)	setarg(i, v, POS_Ax, SIZE_Ax)
#define GETARG_sBx(i)	(GETARG_Bx(i)-MAXARG_sBx)
#define SETARG_sBx(i,b)	SETARG_Bx((i),cast(unsigned int, (b)+MAXARG_sBx))
#define CREATE_ABC(o,a,b,c)	((cast(Instruction, o)<<POS_OP) \
			| (cast(Instruction, a)<<POS_A) \
			| (cast(Instruction, b)<<POS_B) \
			| (cast(Instruction, c)<<POS_C))
#define CREATE_ABx(o,a,bc)	((cast(Instruction, o)<<POS_OP) \
			| (cast(Instruction, a)<<POS_A) \
			| (cast(Instruction, bc)<<POS_Bx))
#define CREATE_Ax(o,a)		((cast(Instruction, o)<<POS_OP) \
			| (cast(Instruction, a)<<POS_Ax))
#define BITRK		(1 << (SIZE_B - 1))
#define ISK(x)		((x) & BITRK)
#define INDEXK(r)	((int)(r) & ~BITRK)
#define MAXINDEXRK	(BITRK - 1)
#define RKASK(x)	((x) | BITRK)
#define NO_REG		MAXARG_A
#define NUM_OPCODES	(cast(int, OP_EXTRAARG) + 1)
#define getOpMode(m)	(cast(enum OpMode, luaP_opmodes[m] & 3))
#define getBMode(m)	(cast(enum OpArgMask, (luaP_opmodes[m] >> 4) & 3))
#define getCMode(m)	(cast(enum OpArgMask, (luaP_opmodes[m] >> 2) & 3))
#define testAMode(m)	(luaP_opmodes[m] & (1 << 6))
#define testTMode(m)	(luaP_opmodes[m] & (1 << 7))
#define LFIELDS_PER_FLUSH	50
#define lparser_h
#define vkisvar(k)	(VLOCAL <= (k) && (k) <= VINDEXED)
#define vkisinreg(k)	((k) == VNONRELOC || (k) == VLOCAL)
#define NO_JUMP (-1)
#define getcode(fs,e)	((fs)->f->code[(e)->u.info])
#define luaK_codeAsBx(fs,o,A,sBx)	luaK_codeABx(fs,o,A,(sBx)+MAXARG_sBx)
#define luaK_setmultret(fs,e)	luaK_setreturns(fs, e, LUA_MULTRET)
#define luaK_jumpto(fs,t)	luaK_patchlist(fs, luaK_jump(fs), t)
#define hasjumps(e)	((e)->t != (e)->f)
#define lcorolib_c
#define lctype_c
#define lctype_h
#define LUA_USE_CTYPE	0
#define ALPHABIT	0
#define DIGITBIT	1
#define PRINTBIT	2
#define SPACEBIT	3
#define XDIGITBIT	4
#define MASK(B)		(1 << (B))
#define testprop(c,p)	(luai_ctype_[(c)+1] & (p))
#define lislalpha(c)	testprop(c, MASK(ALPHABIT))
#define lislalnum(c)	testprop(c, (MASK(ALPHABIT) | MASK(DIGITBIT)))
#define lisdigit(c)	testprop(c, MASK(DIGITBIT))
#define lisspace(c)	testprop(c, MASK(SPACEBIT))
#define lisprint(c)	testprop(c, MASK(PRINTBIT))
#define lisxdigit(c)	testprop(c, MASK(XDIGITBIT))
#define ltolower(c)	((c) | ('A' ^ 'a'))
#define LUA_USE_CTYPE	1
#define lislalpha(c)	(isalpha(c) || (c) == '_')
#define lislalnum(c)	(isalnum(c) || (c) == '_')
#define lisdigit(c)	(isdigit(c))
#define lisspace(c)	(isspace(c))
#define lisprint(c)	(isprint(c))
#define lisxdigit(c)	(isxdigit(c))
#define ltolower(c)	(tolower(c))
#define ldblib_c
#define HOOKKEY		"_HKEY"
#define gethooktable(L)	luaL_getsubtable(L, LUA_REGISTRYINDEX, HOOKKEY)
#define ldebug_c
#define noLuaClosure(f)		((f) == NULL || (f)->c.tt == LUA_TCCL)
#define _BSD_SETJMP_H
#define _JBLEN ((9 * 2) + 3 + 16)
#define ldo_c
#define LUAI_THROW(L,c)		throw(c)
#define LUAI_TRY(L,c,a) \
	try { a } catch(...) { if ((c)->status == 0) (c)->status = -1; }
#define luai_jmpbuf		int
#define LUAI_THROW(L,c)		_longjmp((c)->b, 1)
#define LUAI_TRY(L,c,a)		if (_setjmp((c)->b) == 0) { a }
#define luai_jmpbuf		jmp_buf
#define LUAI_THROW(L,c)		longjmp((c)->b, 1)
#define LUAI_TRY(L,c,a)		if (setjmp((c)->b) == 0) { a }
#define ERRORSTACKSIZE	(LUAI_MAXSTACK + 200)
#define next_ci(L) (L->ci = (L->ci->next ? L->ci->next : luaE_extendCI(L)))
#define ldump_c
#define DumpMem(b,n,size,D)	DumpBlock(b,(n)*(size),D)
#define DumpVar(x,D)		DumpMem(&x,1,sizeof(x),D)
#define DumpCode(f,D)	 DumpVector(f->code,f->sizecode,sizeof(Instruction),D)
#define lfunc_c
#define lgc_c
#define GCSWEEPCOST	((sizeof(TString) + 4) / 4)
#define GCSWEEPMAX	(cast_int((GCSTEPSIZE / GCSWEEPCOST) / 4))
#define GCFINALIZENUM	4
#define STEPMULADJ		200
#define PAUSEADJ		200
#define stddebtest(g,e)	(-cast(l_mem, (e)/PAUSEADJ) * g->gcpause)
#define stddebt(g)	stddebtest(g, gettotalbytes(g))
#define maskcolors	(~(bit2mask(BLACKBIT, OLDBIT) | WHITEBITS))
#define makewhite(g,x)	\
 (gch(x)->marked = cast_byte((gch(x)->marked & maskcolors) | luaC_white(g)))
#define white2gray(x)	resetbits(gch(x)->marked, WHITEBITS)
#define black2gray(x)	resetbit(gch(x)->marked, BLACKBIT)
#define isfinalized(x)		testbit(gch(x)->marked, FINALIZEDBIT)
#define checkdeadkey(n)	lua_assert(!ttisdeadkey(gkey(n)) || ttisnil(gval(n)))
#define checkconsistency(obj)  \
  lua_longassert(!iscollectable(obj) || righttt(obj))
#define markvalue(g,o) { checkconsistency(o); \
  if (valiswhite(o)) reallymarkobject(g,gcvalue(o)); }
#define markobject(g,t) { if ((t) && iswhite(obj2gco(t))) \
		reallymarkobject(g, obj2gco(t)); }
#define gnodelast(h)	gnode(h, cast(size_t, sizenode(h)))
#define linktable(h,p)	((h)->gclist = *(p), *(p) = obj2gco(h))
#define sweepwholelist(L,p)	sweeplist(L,p,MAX_LUMEM)
#define sweepphases  \
	(bitmask(GCSsweepstring) | bitmask(GCSsweepudata) | bitmask(GCSsweep))
#define linit_c
#define _FILE_OFFSET_BITS 64
#define liolib_c
#define lua_popen(L,c,m)	((void)L, fflush(NULL), popen(c,m))
#define lua_pclose(L,file)	((void)L, pclose(file))
#define lua_popen(L,c,m)		((void)L, _popen(c,m))
#define lua_pclose(L,file)		((void)L, _pclose(file))
#define lua_popen(L,c,m)		((void)((void)c, m),  \
		luaL_error(L, LUA_QL("popen") " not supported"), (FILE*)0)
#define lua_pclose(L,file)		((void)((void)L, file), -1)
#define l_fseek(f,o,w)		fseeko(f,o,w)
#define l_ftell(f)		ftello(f)
#define l_seeknum		off_t
#define l_fseek(f,o,w)		_fseeki64(f,o,w)
#define l_ftell(f)		_ftelli64(f)
#define l_seeknum		__int64
#define l_fseek(f,o,w)		fseek(f,o,w)
#define l_ftell(f)		ftell(f)
#define l_seeknum		long
#define IO_PREFIX	"_IO_"
#define IO_INPUT	(IO_PREFIX "input")
#define IO_OUTPUT	(IO_PREFIX "output")
#define tolstream(L)	((LStream *)luaL_checkudata(L, 1, LUA_FILEHANDLE))
#define isclosed(p)	((p)->closef == NULL)
#define MAX_SIZE_T	(~(size_t)0)
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
#define llex_c
#define next(ls) (ls->current = zgetc(ls->z))
#define currIsNewline(ls)	(ls->current == '\n' || ls->current == '\r')
#define save_and_next(ls) (save(ls, ls->current), next(ls))
#define getlocaledecpoint()	(localeconv()->decimal_point[0])
#define buff2d(b,e)	luaO_str2d(luaZ_buffer(b), luaZ_bufflen(b) - 1, e)
#define check_exp(c,e)		(lua_assert(c), (e))
#define lua_longassert(c)	{ if (!(c)) lua_assert(0); }
#define __assert(e, file, line) \
    __assert_rtn ((const char *)-1L, file, line, e)
#define	assert(e) \
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define luai_apicheck(L,e)	assert(e)
#define l_noret		void __declspec(noreturn)
#define l_noret		void
#define lua_number2int(i,n)  __asm {__asm fld n   __asm fistp i}
#define lua_number2integer(i,n)		lua_number2int(i, n)
#define lua_number2unsigned(i,n)  \
  {__int64 l; __asm {__asm fld n   __asm fistp l} i = (unsigned int)l;}
#define LUAI_EXTRAIEEE	\
  static const union luai_Cast ieeeendian = {-(33.0 + 6755399441055744.0)};
#define LUA_IEEEENDIANLOC	(ieeeendian.l_p[1] == 33)
#define lua_number2integer(i,n)		lua_number2int32(i, n, lua_Integer)
#define lua_number2unsigned(i,n)	((i)=(lua_Unsigned)(n))
#define _FLOAT_H___
#define FLT_RADIX	__FLT_RADIX__
#define FLT_MANT_DIG	__FLT_MANT_DIG__
#define DBL_MANT_DIG	__DBL_MANT_DIG__
#define LDBL_MANT_DIG	__LDBL_MANT_DIG__
#define FLT_DIG		__FLT_DIG__
#define DBL_DIG		__DBL_DIG__
#define LDBL_DIG	__LDBL_DIG__
#define FLT_MIN_EXP	__FLT_MIN_EXP__
#define DBL_MIN_EXP	__DBL_MIN_EXP__
#define LDBL_MIN_EXP	__LDBL_MIN_EXP__
#define FLT_MIN_10_EXP	__FLT_MIN_10_EXP__
#define DBL_MIN_10_EXP	__DBL_MIN_10_EXP__
#define LDBL_MIN_10_EXP	__LDBL_MIN_10_EXP__
#define FLT_MAX_EXP	__FLT_MAX_EXP__
#define DBL_MAX_EXP	__DBL_MAX_EXP__
#define LDBL_MAX_EXP	__LDBL_MAX_EXP__
#define FLT_MAX_10_EXP	__FLT_MAX_10_EXP__
#define DBL_MAX_10_EXP	__DBL_MAX_10_EXP__
#define LDBL_MAX_10_EXP	__LDBL_MAX_10_EXP__
#define FLT_MAX		__FLT_MAX__
#define DBL_MAX		__DBL_MAX__
#define LDBL_MAX	__LDBL_MAX__
#define FLT_EPSILON	__FLT_EPSILON__
#define DBL_EPSILON	__DBL_EPSILON__
#define LDBL_EPSILON	__LDBL_EPSILON__
#define FLT_MIN		__FLT_MIN__
#define DBL_MIN		__DBL_MIN__
#define LDBL_MIN	__LDBL_MIN__
#define FLT_ROUNDS (__builtin_flt_rounds ())
#define FLT_EVAL_METHOD	__FLT_EVAL_METHOD__
#define DECIMAL_DIG	__DECIMAL_DIG__
#define luai_hashnum(i,n) { int e;  \
  n = frexp(n, &e) * (lua_Number)(INT_MAX - DBL_MAX_EXP);  \
  lua_number2int(i, n); i += e; }
#define condmovestack(L)	luaD_reallocstack((L), (L)->stacksize)
#define condchangemem(L)  \
	((void)(!(G(L)->gcrunning) || (luaC_fullgc(L, 0), 1)))
#define lmathlib_c
#define l_tg(x)		(x)
#define PI (l_tg(3.1415926535897932384626433832795))
#define RADIANS_PER_DEGREE (PI/180.0)
#define lmem_c
#define MINSIZEARRAY	4
#define loadlib_c
#define LUA_PATH	"LUA_PATH"
#define LUA_CPATH	"LUA_CPATH"
#define LUA_PATHSUFFIX		"_" LUA_VERSION_MAJOR "_" LUA_VERSION_MINOR
#define LUA_PATHVERSION		LUA_PATH LUA_PATHSUFFIX
#define LUA_CPATHVERSION	LUA_CPATH LUA_PATHSUFFIX
#define LUA_PATH_SEP		";"
#define LUA_PATH_MARK		"?"
#define LUA_EXEC_DIR		"!"
#define LUA_IGMARK		"-"
#define LUA_CSUBSEP		LUA_DIRSEP
#define LUA_LSUBSEP		LUA_DIRSEP
#define LUA_POF		"luaopen_"
#define LUA_OFSEP	"_"
#define CLIBS		"_CLIBS"
#define LIB_FAIL	"open"
#define ERRLIB		1
#define ERRFUNC		2
#define setprogdir(L)		((void)0)
#define _DLFCN_H_
#define _STDBOOL_H
#define bool	_Bool
#define true	1
#define false	0
#define __bool_true_false_are_defined	1
#define __AVAILABILITYMACROS__
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_5 1050
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define MAC_OS_X_VERSION_MAX_ALLOWED MAC_OS_X_VERSION_MIN_REQUIRED
#define WEAK_IMPORT_ATTRIBUTE __attribute__((weak_import))
#define DEPRECATED_ATTRIBUTE __attribute__((deprecated))
#define UNAVAILABLE_ATTRIBUTE __attribute__((unavailable))
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_0_AND_LATER     DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_1    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_1_AND_LATER    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_2    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_2    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_2_AND_LATER    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_3    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_3    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_3    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_3_AND_LATER    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_4_AND_LATER    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_5_AND_LATER    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_6    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_6    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_6    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_6    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_6    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_6    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_6_AND_LATER    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_7_AND_LATER    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8    DEPRECATED_ATTRIBUTE
#define DEPRECATED_IN_MAC_OS_X_VERSION_10_8_AND_LATER    DEPRECATED_ATTRIBUTE
#define RTLD_LAZY	0x1
#define RTLD_NOW	0x2
#define RTLD_LOCAL	0x4
#define RTLD_GLOBAL	0x8
#define RTLD_NOLOAD	0x10
#define RTLD_NODELETE	0x80
#define RTLD_FIRST	0x100
#define	RTLD_NEXT	((void *) -1)
#define	RTLD_DEFAULT	((void *) -2)
#define	RTLD_SELF	((void *) -3)
#define	RTLD_MAIN_ONLY	((void *) -5)
#define LUA_LLE_FLAGS	0
#define LIB_FAIL	"absent"
#define DLMSG	"dynamic libraries not enabled; check your Lua installation"
#define AUXMARK		"\1"
#define lobject_c
#define luai_nummod(L,a,b)	((a) - floor((a)/(b))*(b))
#define luai_numpow(L,a,b)	(pow(a,b))
#define LL(x)	(sizeof(x)/sizeof(char) - 1)
#define RETS	"..."
#define PRE	"[string \""
#define POS	"\"]"
#define addstr(a,b,l)	( memcpy(a,b,(l) * sizeof(char)), a += (l) )
#define NNMARK		0x7FF7A500
#define NNMASK		0x7FFFFF00
#define TValuefields  \
	union { struct { Value v__; int tt__; } i; double d__; } u
#define NILCONSTANT	{{{NULL}, tag2tt(LUA_TNIL)}}
#define v_(o)		((o)->u.i.v__)
#define d_(o)		((o)->u.d__)
#define tt_(o)		((o)->u.i.tt__)
#define TValuefields  \
	union { struct { int tt__; Value v__; } i; double d__; } u
#define NILCONSTANT	{{tag2tt(LUA_TNIL), {NULL}}}
#define val_(o)		v_(o)
#define num_(o)		d_(o)
#define numfield	/* no such field; numbers are the entire struct */
#define ttisnumber(o)	((tt_(o) & NNMASK) != NNMARK)
#define tag2tt(t)	(NNMARK | (t))
#define rttype(o)	(ttisnumber(o) ? LUA_TNUMBER : tt_(o) & 0xff)
#define settt_(o,t)	(tt_(o) = tag2tt(t))
#define setnvalue(obj,x) \
	{ TValue *io_=(obj); num_(io_)=(x); lua_assert(ttisnumber(io_)); }
#define setobj(L,obj1,obj2) \
	{ const TValue *o2_=(obj2); TValue *o1_=(obj1); \
	  o1_->u = o2_->u; \
	  checkliveness(G(L),o1_); }
#define checktag(o,t)	(tt_(o) == tag2tt(t))
#define checktype(o,t)	(ctb(tt_(o) | VARBITS) == ctb(tag2tt(t) | VARBITS))
#define ttisequal(o1,o2)  \
	(ttisnumber(o1) ? ttisnumber(o2) : (tt_(o1) == tt_(o2)))
#define luai_checknum(L,o,c)	{ if (!ttisnumber(o)) c; }
#define lopcodes_c
#define opmode(t,a,b,c,m) (((t)<<7) | ((a)<<6) | ((b)<<4) | ((c)<<2) | (m))
#define MAXARG_Bx        MAX_INT
#define MAXARG_sBx        MAX_INT
#define MAXARG_Ax	MAX_INT
#define	_TIME_H_
#define __need_struct_timespec
#define _STRUCT_TIMESPEC	struct timespec
#define _CLOCK_T
#define	_TIME_T
#define CLOCKS_PER_SEC  1000000
#define loslib_c
#define LUA_STRFTIMEOPTIONS	{ "aAbBcdHIjmMpSUwWxXyYz%", "" }
#define LUA_STRFTIMEOPTIONS \
	{ "aAbBcCdDeFgGhHIjmMnprRStTuUVwWxXyYzZ%", "" \
	  "", "E", "cCxXyY",  \
	  "O", "deHImMSuUVwWy" }
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
#define ACCESSX_MAX_DESCRIPTORS	100
#define ACCESSX_MAX_TABLESIZE	(16 * 1024)
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
#define LUA_TMPNAMBUFSIZE	32
#define lua_tmpnam(b,e) { \
        strcpy(b, "/tmp/lua_XXXXXX"); \
        e = mkstemp(b); \
        if (e != -1) close(e); \
        e = (e == -1); }
#define LUA_TMPNAMBUFSIZE	L_tmpnam
#define lua_tmpnam(b,e)		{ e = (tmpnam(b) == NULL); }
#define l_gmtime(t,r)		gmtime_r(t,r)
#define l_localtime(t,r)	localtime_r(t,r)
#define l_gmtime(t,r)		((void)r, gmtime(t))
#define l_localtime(t,r)  	((void)r, localtime(t))
#define lparser_c
#define MAXVARS		200
#define hasmultret(k)		((k) == VCALL || (k) == VVARARG)
#define check_condition(ls,c,msg)	{ if (!(c)) luaX_syntaxerror(ls, msg); }
#define new_localvarliteral(ls,v) \
	new_localvarliteral_(ls, "" v, (sizeof(v)/sizeof(char))-1)
#define leavelevel(ls)	((ls)->L->nCcalls--)
#define UNARY_PRIORITY	8
#define lstate_c
#define LUAI_GCPAUSE	200
#define LUAI_GCMAJOR	200
#define LUAI_GCMUL	200
#define MEMERRMSG	"not enough memory"
#define luai_makeseed()		cast(size_t, time(NULL))
#define fromstate(L)	(cast(LX *, cast(lu_byte *, (L)) - offsetof(LX, l)))
#define addbuff(b,p,e) \
  { size_t t = cast(size_t, e); \
    memcpy(buff + p, &t, sizeof(t)); p += sizeof(t); }
#define lstring_c
#define LUAI_HASHLIMIT		5
#define lstrlib_c
#define LUA_MAXCAPTURES		32
#define uchar(c)	((unsigned char)(c))
#define MAXSIZE		((~(size_t)0) >> 1)
#define CAP_UNFINISHED	(-1)
#define CAP_POSITION	(-2)
#define L_ESC		'%'
#define SPECIALS	"^$*+?.([%-"
#define LUA_INTFRMLEN		"ll"
#define LUA_INTFRM_T		long long
#define LUA_INTFRMLEN		"l"
#define LUA_INTFRM_T		long
#define LUA_FLTFRMLEN		""
#define LUA_FLTFRM_T		double
#define MAX_ITEM	512
#define FLAGS	"-+ #0"
#define MAX_FORMAT	(sizeof(FLAGS) + sizeof(LUA_INTFRMLEN) + 10)
#define ltable_c
#define MAXBITS		30
#define MAXBITS		(LUAI_BITSINT-2)
#define MAXASIZE	(1 << MAXBITS)
#define hashpow2(t,n)		(gnode(t, lmod((n), sizenode(t))))
#define hashstr(t,str)		hashpow2(t, (str)->tsv.hash)
#define hashboolean(t,p)	hashpow2(t, p)
#define hashmod(t,n)	(gnode(t, ((n) % ((sizenode(t)-1)|1))))
#define hashpointer(t,p)	hashmod(t, IntPoint(p))
#define dummynode		(&dummynode_)
#define isdummy(n)		((n) == dummynode)
#define ltablib_c
#define aux_getn(L,n)  \
	(luaL_checktype(L, n, LUA_TTABLE), luaL_len(L, n))
#define ltm_c
#define _USER_SIGNAL_H
#define _PTHREAD_T
#define	sigaddset(set, signo)	(*(set) |= __sigbits(signo), 0)
#define	sigdelset(set, signo)	(*(set) &= ~__sigbits(signo), 0)
#define	sigismember(set, signo)	((*(set) & __sigbits(signo)) != 0)
#define	sigemptyset(set)	(*(set) = 0, 0)
#define	sigfillset(set)		(*(set) = ~(sigset_t)0, 0)
#define lua_c
#define LUA_PROMPT		"> "
#define LUA_PROMPT2		">> "
#define LUA_PROGNAME		"lua"
#define LUA_MAXINPUT		512
#define LUA_INIT		"LUA_INIT"
#define LUA_INITVERSION  \
	LUA_INIT "_" LUA_VERSION_MAJOR "_" LUA_VERSION_MINOR
#define lua_stdin_is_tty()	isatty(0)
#define lua_stdin_is_tty()	_isatty(_fileno(stdin))
#define lua_stdin_is_tty()	1
#define _READLINE_H_
#define	_SYS_TYPES_H_
#define _U_LONG
#define	_BLKCNT_T
#define	_BLKSIZE_T
#define _IN_ADDR_T
#define _IN_PORT_T
#define _INO_T
#define _INO64_T
#define _KEY_T
#define	_NLINK_T
#define	major(x)	((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define	minor(x)	((int32_t)((x) & 0xffffff))
#define	makedev(x,y)	((dev_t)(((x) << 24) | (y)))
#define	_CLOCK_T
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
#define ABORT_CHAR	CTRL('G')
#define RL_READLINE_VERSION 	0x0402
#define RL_PROMPT_START_IGNORE	'\1'
#define RL_PROMPT_END_IGNORE	'\2'
#define lua_readline(L,b,p)	((void)L, ((b)=readline(p)) != NULL)
#define lua_saveline(L,idx) \
        if (lua_rawlen(L,idx) > 0)  /* non-empty line? */ \
          add_history(lua_tostring(L, idx));
#define lua_freeline(L,b)	((void)L, free(b))
#define lua_readline(L,b,p) \
        ((void)L, fputs(p, stdout), fflush(stdout),  /* show prompt */ \
        fgets(b, LUA_MAXINPUT, stdin) != NULL)
#define lua_saveline(L,idx)	{ (void)L; (void)idx; }
#define lua_freeline(L,b)	{ (void)L; (void)b; }
#define EOFMARK		"<eof>"
#define marklen		(sizeof(EOFMARK)/sizeof(char) - 1)
#define noextrachars(x)		{if ((x)[2] != '\0') return -1;}
#define has_i		0
#define has_v		1
#define has_e		2
#define has_E		3
#define num_has		4
#define luac_c
#define luaU_print	PrintFunction
#define PROGNAME	"luac"
#define OUTPUT		PROGNAME ".out"
#define IS(s)	(strcmp(argv[i],s)==0)
#define FUNCTION "(function()end)();"
#define toproto(L,i) getproto(L->top+(i))
#define VOID(p)		((const void*)(p))
#define UPVALNAME(x) ((f->upvalues[x].name) ? getstr(f->upvalues[x].name) : "-")
#define MYK(x)		(-1-(x))
#define SS(x)	((x==1)?"":"s")
#define S(x)	(int)(x),SS(x)
#define LUA_ANSI
#define LUA_WIN		/* enable goodies for regular Windows platforms */
#define LUA_DL_DLL
#define LUA_USE_AFORMAT		/* assume 'printf' handles 'aA' specifiers */
#define LUA_USE_POSIX
#define LUA_USE_DLOPEN		/* needs an extra library: -ldl */
#define LUA_USE_READLINE	/* needs some extra libraries */
#define LUA_USE_STRTODHEX	/* assume 'strtod' handles hexa formats */
#define LUA_USE_LONGLONG	/* assume support for long long */
#define LUA_USE_DLOPEN		/* does not need -ldl */
#define LUA_USE_READLINE	/* needs an extra library: -lreadline */
#define LUA_USE_MKSTEMP
#define LUA_USE_ISATTY
#define LUA_USE_POPEN
#define LUA_USE_ULONGJMP
#define LUA_USE_GMTIME_R
#define LUA_LDIR	"!\\lua\\"
#define LUA_CDIR	"!\\"
#define LUA_PATH_DEFAULT  \
		LUA_LDIR"?.lua;"  LUA_LDIR"?\\init.lua;" \
		LUA_CDIR"?.lua;"  LUA_CDIR"?\\init.lua;" ".\\?.lua"
#define LUA_CPATH_DEFAULT \
		LUA_CDIR"?.dll;" LUA_CDIR"loadall.dll;" ".\\?.dll"
#define LUA_DIRSEP	"\\"
//#define LUA_API __declspec(dllexport)
//#define LUA_API __declspec(dllimport)
#define LUAI_FUNC	__attribute__((visibility("hidden"))) extern
#define LUAI_DDEC	LUAI_FUNC
#define LUA_COMPAT_UNPACK
typedef struct {} luaL_Stream;
#define LUA_COMPAT_LOADERS
#define lua_cpcall(L,f,u)  \
	(lua_pushcfunction(L, (f)), \
	 lua_pushlightuserdata(L,(u)), \
	 lua_pcall(L,1,0,0))
#define LUA_COMPAT_LOG10
#define LUA_COMPAT_LOADSTRING
#define LUA_COMPAT_MAXN
#define lua_strlen(L,i)		lua_rawlen(L, (i))
#define lua_objlen(L,i)		lua_rawlen(L, (i))
#define lua_equal(L,idx1,idx2)		lua_compare(L,(idx1),(idx2),LUA_OPEQ)
#define lua_lessthan(L,idx1,idx2)	lua_compare(L,(idx1),(idx2),LUA_OPLT)
#define LUA_COMPAT_MODULE
#define LUAI_BITSINT	16
#define LUA_INT32	long
#define LUAI_UMEM	unsigned long
#define LUAI_MEM	long
#define LUAI_MAXSTACK		15000
#define lua_strx2number(s,p)	strtod((s), (p))
#define MS_ASMTRICK
#define LUA_NANTRICK
#define LUA_IEEELL
#define LUA_IEEEENDIAN		1
#define lundump_c
#define LoadMem(S,b,n,size)	LoadBlock(S,b,(n)*(size))
#define LoadByte(S)		(lu_byte)LoadChar(S)
#define LoadVar(S,x)		LoadMem(S,&x,1,sizeof(x))
#define LoadVector(S,b,n,size)	LoadMem(S,b,n,size)
#define luai_verifycode(L,b,f)	/* empty */
#define N0	LUAC_HEADERSIZE
#define N1	(sizeof(LUA_SIGNATURE)-sizeof(char))
#define N2	N1+2
#define N3	N2+6
#define MYINT(s)	(s[0]-'0')
#define VERSION		MYINT(LUA_VERSION_MAJOR)*16+MYINT(LUA_VERSION_MINOR)
#define FORMAT		0
#define lvm_c
#define MAXTAGLOOP	100
#define luai_runtimecheck(L, c)		/* void */
#define RA(i)	(base+GETARG_A(i))
#define RB(i)	check_exp(getBMode(GET_OPCODE(i)) == OpArgR, base+GETARG_B(i))
#define RC(i)	check_exp(getCMode(GET_OPCODE(i)) == OpArgR, base+GETARG_C(i))
#define RKB(i)	check_exp(getBMode(GET_OPCODE(i)) == OpArgK, \
	ISK(GETARG_B(i)) ? k+INDEXK(GETARG_B(i)) : base+GETARG_B(i))
#define RKC(i)	check_exp(getCMode(GET_OPCODE(i)) == OpArgK, \
	ISK(GETARG_C(i)) ? k+INDEXK(GETARG_C(i)) : base+GETARG_C(i))
#define KBx(i)  \
  (k + (GETARG_Bx(i) != 0 ? GETARG_Bx(i) - 1 : GETARG_Ax(*ci->u.l.savedpc++)))
#define dojump(ci,i,e) \
  { int a = GETARG_A(i); \
    if (a > 0) luaF_close(L, ci->u.l.base + a - 1); \
    ci->u.l.savedpc += GETARG_sBx(i) + e; }
#define donextjump(ci)	{ i = *ci->u.l.savedpc; dojump(ci, i, 1); }
#define Protect(x)	{ {x;}; base = ci->u.l.base; }
#define checkGC(L,c)  \
  Protect( luaC_condGC(L,{L->top = (c);  /* limit of live values */ \
                          luaC_step(L); \
                          L->top = ci->top;})  /* restore top */ \
           luai_threadyield(L); )
#define arith_op(op,tm) { \
        TValue *rb = RKB(i); \
        TValue *rc = RKC(i); \
        if (ttisnumber(rb) && ttisnumber(rc)) { \
          lua_Number nb = nvalue(rb), nc = nvalue(rc); \
          setnvalue(ra, op(L, nb, nc)); \
        } \
        else { Protect(luaV_arith(L, ra, rb, rc, tm)); } }
#define vmdispatch(o)	switch(o)
#define vmcase(l,b)	case l: {b}  break;
#define vmcasenb(l,b)	case l: {b}
#define lzio_c
