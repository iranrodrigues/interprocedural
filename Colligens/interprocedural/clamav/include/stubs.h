#define VERSION "devel-clamav-0.97-133-gde8d667"
#define TARGET_OS_TYPE "win32"
#define TARGET_ARCH_TYPE "i386"

#define TARGET_CPU_TYPE TARGET_ARCH_TYPE

#define PATHSEP "\\"

#define REGISTER		3

#define	IOCTL_SET_OPTION	0

#define	_IOW(g,n,t)	_IOC(IOC_IN,	(g), (n), sizeof(t))

#define	IOC_IN		(__uint32_t)0x80000000

#define	IOCTL_GET_AN_ACCESS	1
#define	IOCTL_RETURN_ACCESS	2

#define	_IOR(g,n,t)	_IOC(IOC_OUT,	(g), (n), sizeof(t))

#define	IOC_OUT		(__uint32_t)0x40000000


/* Name of package */
#define PACKAGE PACKAGE_NAME

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugs.clamav.net/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "ClamAV"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ClamAV devel"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "clamav"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.clamav.net/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "devel"

/* scan buffer size */
#define SCANBUFF 131072

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
typedef struct {} filesec_t;
typedef struct {} filesec_property_t;
typedef struct {} __int32_t;
typedef struct {} __DARWIN_NFDBITS;
typedef struct {} socklen_t;
typedef struct {} fd_set;
typedef struct {} HANDLE;
typedef struct {} SOCKET;
typedef struct {} clock_t;
typedef struct {} time_t;
typedef struct {} pthread_t;
typedef struct {} pthread_cond_t;
typedef struct {} pthread_condattr_t;
typedef struct {} pthread_mutex_t;
typedef struct {} pthread_key_t;
typedef struct {} pthread_mutexattr_t;
typedef struct {} pthread_once_t;
typedef struct {} pthread_rwlock_t;
typedef struct {} pthread_rwlockattr_t;
typedef struct {} mach_port_t;
typedef struct {} ino_t;
typedef struct {} nlink_t;
typedef struct {} __DARWIN_STRUCT_STAT64;
typedef struct {} gid_t;
typedef struct {} useconds_t;
typedef struct {} uuid_t;
typedef struct {} uuid_string_t;
typedef struct {} __darwin_va_list;
typedef struct {} clcb_pre_scan;
typedef struct {} clcb_post_scan;
typedef struct {} clcb_sigload;
typedef struct {} clcb_msg;
typedef struct {} clcb_hash;
typedef struct {} sa_family_t;
typedef struct {} _SS_PAD1SIZE;
typedef struct {} __int64_t;
typedef struct {} _SS_PAD2SIZE;
typedef struct {} in_addr_t;
typedef struct {} in_port_t;
typedef struct {} uint32_t;
typedef struct {} u_int;
typedef struct {} u_char;
typedef struct {} u_short;
typedef struct {} n_long;
typedef struct {} uint8_t;
typedef struct {} uint64_t;
typedef struct {} sfsistat;
typedef struct {} SMFICTX;
typedef struct {} _SOCK_ADDR;
typedef struct {} __darwin_rune_t;
typedef struct {} _RuneEntry;
typedef struct {} _RuneRange;
typedef struct {} _RuneCharClass;
typedef struct {} _RuneLocale;
typedef struct {} __darwin_ct_rune_t;
typedef struct {} fmap_t;
typedef struct {} cli_file_t;
typedef struct {} uint16_t;

#define __hot__


typedef struct {} Bytef;
typedef struct {} uInt;
typedef struct {} uLong;
typedef struct {} alloc_func;
typedef struct {} free_func;
typedef struct {} voidpf;
typedef struct {} SHA256_CTX;
typedef struct {} gzFile;
typedef struct {} mpool_t;
typedef struct {} unrar_fileheader_t;
typedef struct {} unrar_metadata_t;
typedef struct {} unrar_main_header_t;
typedef struct {} unrar_state_t;
typedef struct {} regoff_t;
typedef struct {} regex_t;
typedef struct {} regmatch_t;
typedef struct {} int8_t;
typedef struct {} bc_dbg_callback_trace;
typedef struct {} bc_dbg_callback_trace_op;
typedef struct {} bc_dbg_callback_trace_val;
typedef struct {} bc_dbg_callback_trace_ptr;
typedef struct {} bitset_t;
typedef struct {} int64_t;
typedef struct {} int32_t;
typedef struct {} int16_t;
typedef struct {} cli_ctx;
typedef struct {} cli_ftw_cb;
typedef struct {} cli_ftw_pathchk;
typedef struct {} cli_element_data;
typedef struct {} cli_apicall_int2;
typedef struct {} cli_apicall_pointer;
typedef struct {} cli_apicall_int1;
typedef struct {} cli_apicall_malloclike;
typedef struct {} cli_apicall_ptrbuffdata;
typedef struct {} cli_apicall_allocobj;
typedef struct {} cli_apicall_bufget;
typedef struct {} cli_apicall_int3;
typedef struct {} cli_apicall_2bufs;
typedef struct {} cli_apicall_ptrbufid;
typedef struct {} cli_events_t;
typedef struct {} compare_filter_t;
typedef struct {} operand_t;
typedef struct {} funcid_t;
typedef struct {} bbid_t;
typedef struct {} interp_op_t;
typedef struct {} z_stream;
typedef struct {} __DARWIN_STRUCT_DIRENTRY;
typedef struct {} __darwin_pthread_mutex_t;
typedef struct {} DIR;
typedef struct {} stack_t;
typedef struct {} work_item_t;
typedef struct {} pool_state_t;
typedef struct {} work_queue_t;
typedef struct {} threadpool_t;
typedef struct {} jobgroup_t;
typedef struct {} client_conn_t;
typedef struct {} RLIM_INFINITY;
typedef struct {} dazukofs_handle_t;
typedef struct {} dazuko_id_t;
typedef struct {} nfds_t;
typedef struct {} INADDR_ANY;
typedef struct {} pgno_t;
typedef struct {} u_int8_t;
typedef struct {} MPOOL;
typedef struct {} conn_t;
typedef struct {} WINDOW;
typedef struct {} WSADATA;
typedef struct {} u_int16_t;
typedef struct {} ns_sect;
typedef struct {} u_long;
typedef struct {} res_send_qhook;
typedef struct {} res_send_rhook;
typedef struct {} HEADER;
typedef struct {} tag_arguments_t;
typedef struct {} SRes;
typedef struct {} ISeqInStream;
typedef struct {} Byte;
typedef struct {} Int64;
typedef struct {} ESzSeek;
typedef struct {} ILookInStream;
typedef struct {} UInt64;
typedef struct {} ISeekInStream;
typedef struct {} CLookToRead;
typedef struct {} CSecToLook;
typedef struct {} CSecToRead;
typedef struct {} CBuf;
typedef struct {} ISzAlloc;
typedef struct {} CDynBuf;
typedef struct {} UInt32;
typedef struct {} CSzFile;
typedef struct {} WRes;
typedef struct {} CFileSeqInStream;
typedef struct {} CFileInStream;
typedef struct {} ISeqOutStream;
typedef struct {} CFileOutStream;
typedef struct {} DWORD;
typedef struct {} BOOL;
typedef struct {} LARGE_INTEGER;
typedef struct {} SizeT;
typedef struct {} CLzmaProps;
typedef struct {} CLzmaProb;
typedef struct {} CLzmaDec;
typedef struct {} ELzmaFinishMode;
typedef struct {} ELzmaStatus;
typedef struct {} CSzCoderInfo;
typedef struct {} CBindPair;
typedef struct {} CSzFolder;
typedef struct {} CNtfsFileTime;
typedef struct {} CSzFileItem;
typedef struct {} CSzAr;
typedef struct {} CSzArEx;
typedef struct {} CSzData;
typedef struct {} CProb;
typedef struct {} NORMALIZE;
typedef struct {} ptrdiff_t;
typedef struct {} ELzmaDummy;
typedef struct {} NORMALIZE_CHECK;
typedef struct {} Bool;
typedef struct {} mp_digit;
typedef struct {} mp_int;
typedef struct {} ltm_prime_callback;
typedef struct {} mp_word;
typedef struct {} MP_WARRAY;
typedef struct {} MP_MASK;
typedef struct {} mp_err;
typedef struct {} tableEntry;
typedef struct {} table_t;
typedef struct {} blob;
typedef struct {} fileblob;
typedef struct {} line_t;
typedef struct {} encoding_type;
typedef struct {} mime_type;
typedef struct {} text;
typedef struct {} message;
typedef struct {} object_type;
typedef struct {} LLVMContextRef;
typedef struct {} LLVMModuleRef;
typedef struct {} LLVMBool;
typedef struct {} LLVMTypeRef;
typedef struct {} LLVMTypeKind;
typedef struct {} LLVMTypeHandleRef;
typedef struct {} LLVMValueRef;
typedef struct {} LLVMUseRef;
typedef struct {} LLVMOpcode;
typedef struct {} LLVMIntPredicate;
typedef struct {} LLVMRealPredicate;
typedef struct {} LLVMBasicBlockRef;
typedef struct {} LLVMLinkage;
typedef struct {} LLVMVisibility;
typedef struct {} LLVMAttribute;
typedef struct {} LLVMBuilderRef;
typedef struct {} LLVMModuleProviderRef;
typedef struct {} LLVMMemoryBufferRef;
typedef struct {} LLVMPassManagerRef;
typedef struct {} LLVMTargetDataRef;
typedef struct {} OSVERSIONINFOEX;
typedef struct {} OSVERSIONINFO;
typedef struct {} align_t;
typedef struct {} namespace;
typedef struct {} llvm_regoff_t;
typedef struct {} llvm_regex_t;
typedef struct {} llvm_regmatch_t;
typedef struct {} uch;
typedef struct {} sop;
typedef struct {} cset;
typedef struct {} sopno;
typedef struct {} cat_t;
typedef struct {} MD5_u32plus;
typedef struct {} cli_md5_ctx;
typedef struct {} chm_sys_entry_t;
typedef struct {} chm_itsf_header_t;
typedef struct {} chm_itsp_header_t;
typedef struct {} chm_metadata_t;
typedef struct {} lzx_control_t;
typedef struct {} lzx_content_t;
typedef struct {} lzx_reset_table_t;
typedef struct {} intmax_t;
typedef struct {} imaxdiv_t;
typedef struct {} uintmax_t;
typedef struct {} m_area_t;
typedef struct {} iconv_t;
typedef struct {} iconv_unicode_char_hook;
typedef struct {} iconv_wide_char_hook;
typedef struct {} iconv_unicode_mb_to_uc_fallback;
typedef struct {} iconv_unicode_uc_to_mb_fallback;
typedef struct {} iconv_wchar_mb_to_wc_fallback;
typedef struct {} iconv_wchar_wc_to_mb_fallback;
typedef struct {} DELETED_HTU32_KEY;
typedef struct {} file_buff_t;
typedef struct {} html_state;
typedef struct {} quoted_state;
typedef struct {} code;
typedef struct {} inflate_mode;
typedef struct {} z_stream64p;

#define    NAME_MAX        256
#  define FAR
#  define local static
#  define ZEXPORT

#define __thread

#define VERSION "devel-clamav-0.97-133-gde8d667"

typedef struct {} lt__DIR;
# define LT__UNUSED __attribute__ ((__unused__))

#define REALLOC(tp, mem, n)	(tp*) lt__realloc((mem), (n) * sizeof(tp))

#define MALLOC(tp, n)		(tp*) lt__malloc((n) * sizeof(tp))

#  define LT_SCOPE

#define LT_END_C_DECLS
#define LT_BEGIN_C_DECLS

#define REPO_VERSION VERSION

#define VERSION_SUFFIX ""

#define LIBCLAMAV_FULLVER "6.0.4"

/* "Major library version number" */
#define LIBCLAMAV_MAJORVER 6

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
#define LT_DLSEARCH_PATH ""

/* The archive extension */
#define LT_LIBEXT "dll"

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".dll"


#define	BUFSIZ	1024
#define	EOF	(-1)

typedef struct {} codetype;
typedef struct {} YYSTYPE;
typedef struct {} yyscan_t;
typedef struct {} YY_BUFFER_STATE;
typedef struct {} yystype;
typedef struct {} SHA1Context;
typedef struct {} icon_groupset;
typedef struct {} u_int64_t;
typedef struct {} caddr_t;
typedef struct {} mbox_status;
typedef struct {} mbox_ctx;
typedef struct {} LINK1;
typedef struct {} ELEMENT1;
typedef struct {} FRAG_OVERHEAD;
typedef struct {} nsis_bzstream;
typedef struct {} Int32;
typedef struct {} UChar;
typedef struct {} UInt16;
typedef struct {} BZ_RAND_DECLS;
typedef struct {} DState;
typedef struct {} True;
typedef struct {} False;
typedef struct {} inflate_huft;
typedef struct {} uIntf;
typedef struct {} inflate_codes_statef;
typedef struct {} nsis_z_streamp;
typedef struct {} inflate_blocks_statef;
typedef struct {} LOAD;
typedef struct {} NEEDOUT;
typedef struct {} FLUSH;
typedef struct {} nsis_z_stream;
typedef struct {} property_t;
typedef struct {} ole2_header_t;
typedef struct {} lt_user_data;
typedef struct {} lt_dladvise;
typedef struct {} lt_module;
typedef struct {} lt_module_open;
typedef struct {} lt_module_close;
typedef struct {} lt_find_sym;
typedef struct {} lt_dlloader_init;
typedef struct {} lt_dlloader_exit;
typedef struct {} lt_dlloader_priority;
typedef struct {} lt_dlvtable;
typedef struct {} lt_dlloader;
typedef struct {} lt_dlhandle;
typedef struct {} lt_dlsymlist;
typedef struct {} lt_dlpreload_callback_func;
typedef struct {} lt_dlhandle_interface;
typedef struct {} lt_dlinterface_id;
typedef struct {} lt_dlinfo;
typedef struct {} tmpdir;
typedef struct {} STATEVARS;
typedef struct {} states;
typedef struct {} onestate;
typedef struct {} suffix_callback;
typedef struct {} vba_project_t;
typedef struct {} rtf_callback_begin;
typedef struct {} rtf_callback_process;
typedef struct {} rtf_callback_end;
typedef struct {} arj_metadata_t;
typedef struct {} bz_stream;
typedef struct {} BZFILE;
typedef struct {} uLongf;
typedef struct {} MIN_SIZE;
typedef struct {} arj_decode_t;
typedef struct {} arj_main_hdr_t;
typedef struct {} arj_file_hdr_t;
typedef struct {} SYSTEM_INFO;
typedef struct {} z_stream64;
typedef struct {} unz_init_;
typedef struct {} unz_unz_;
typedef struct {} unz_end_;
typedef struct {} LH_magic;
typedef struct {} LH_flen;
typedef struct {} LH_flags;
typedef struct {} LH_usize;
typedef struct {} LH_csize;
typedef struct {} LH_crc32;
typedef struct {} LH_method;
typedef struct {} CH_usize;
typedef struct {} CH_csize;
typedef struct {} LH_elen;
typedef struct {} CH_magic;
typedef struct {} CH_flags;
typedef struct {} CH_method;
typedef struct {} CH_flen;
typedef struct {} CH_elen;
typedef struct {} CH_clen;
typedef struct {} CH_dsk;
typedef struct {} CH_off;
typedef struct {} atom_header_t;
typedef struct {} mso_fib_t;
typedef struct {} macro_info_t;
typedef struct {} macro_entry_t;
typedef struct {} RESEED;
typedef struct {} BIT;
typedef struct {} sub_allocator_t;
typedef struct {} range_coder_t;
typedef struct {} ppm_data_t;
typedef struct {} rar_cmd_array_t;
typedef struct {} rarvm_commands_t;
typedef struct {} rarvm_input_t;
typedef struct {} rarvm_data_t;
typedef struct {} rar_filter_array_t;
typedef struct {} unpack_data_t;
typedef struct {} rar_mem_blk_t;
typedef struct {} rarvm_standard_filters_t;
typedef struct {} header_type;
typedef struct {} unrar_comment_header_t;
typedef struct {} mark_header_t;
typedef struct {} error_t;
typedef struct {} SList;
typedef struct {} SListCallback;
typedef struct {} SListCompare;
typedef struct {} WIN32_FIND_DATA;
typedef struct {} lt_interface_data;
typedef struct {} Dl_info;
typedef struct {} mach_port_rights_t;
typedef struct {} mach_port_seqno_t;
typedef struct {} mach_port_mscount_t;
typedef struct {} mach_port_msgcount_t;
typedef struct {} boolean_t;
typedef struct {} natural_t;
typedef struct {} mach_msg_size_t;
typedef struct {} mach_msg_descriptor_type_t;
typedef struct {} mach_msg_type_name_t;
typedef struct {} mach_msg_copy_options_t;
typedef struct {} mach_msg_port_descriptor_t;
typedef struct {} mach_msg_ool_descriptor_t;
typedef struct {} mach_msg_ool_ports_descriptor_t;
typedef struct {} mach_msg_type_descriptor_t;
typedef struct {} mach_msg_bits_t;
typedef struct {} mach_msg_id_t;
typedef struct {} mach_msg_header_t;
typedef struct {} mach_msg_body_t;
typedef struct {} mach_msg_trailer_type_t;
typedef struct {} mach_msg_trailer_size_t;
typedef struct {} security_token_t;
typedef struct {} audit_token_t;
typedef struct {} mach_port_context_t;
typedef struct {} mach_port_name_t;
typedef struct {} msg_labels_t;
typedef struct {} mach_msg_trailer_t;
typedef struct {} mach_msg_empty_send_t;
typedef struct {} mach_msg_empty_rcv_t;
typedef struct {} mach_msg_return_t;
typedef struct {} mach_msg_option_t;
typedef struct {} mach_msg_timeout_t;
typedef struct {} x86_state_hdr_t;
typedef struct {} x86_thread_state32_t;
typedef struct {} x86_thread_state64_t;
typedef struct {} x86_float_state32_t;
typedef struct {} x86_float_state64_t;
typedef struct {} x86_exception_state32_t;
typedef struct {} x86_exception_state64_t;
typedef struct {} x86_debug_state32_t;
typedef struct {} x86_debug_state64_t;
typedef struct {} uintptr_t;
typedef struct {} NXSwappedFloat;
typedef struct {} NXSwappedDouble;
typedef struct {} cpu_type_t;
typedef struct {} cpu_subtype_t;
typedef struct {} vm_prot_t;
typedef struct {} intptr_t;
typedef struct {} NSObjectFileImageReturnCode;
typedef struct {} NSObjectFileImage;
typedef struct {} NSModule;
typedef struct {} NSSymbol;
typedef struct {} NSLinkEditErrors;
typedef struct {} NSLinkEditErrorHandlers;
typedef struct {} mach_header;
typedef struct {} dylib_command;
typedef struct {} image_id;
typedef struct {} image_info;
typedef struct {} int32;
typedef struct {} UINT;
typedef struct {} HMODULE;
typedef struct {} symlist_chain;
typedef struct {} shl_t;
typedef struct {} foreach_callback_func;
typedef struct {} lt_get_vtable;
typedef struct {} file_worker_func;
typedef struct {} lt__interface_id;
typedef struct {} tcflag_t;
typedef struct {} cc_t;
typedef struct {} speed_t;
typedef struct {} mac_token_t;
typedef struct {} mac_token2_t;
typedef struct {} Suite;
typedef struct {} END_TEST;
typedef struct {} pthread_barrier_t;
typedef struct {} TCase;
typedef struct {} SRunner;
typedef struct {} basic_tests;
typedef struct {} fildes_cmds;
typedef struct {} EState;
typedef struct {} Char;
typedef struct {} IntNative;
typedef struct {} Cell;
typedef struct {} Int16;
typedef struct {} MaybeUInt64;
typedef struct {} BitStream;
typedef struct {} bzFile;
typedef struct {} HINSTANCE;
typedef struct {} uchar;
typedef struct {} jmp_buf;
typedef struct {} sigjmp_buf;
typedef struct {} ptw32_cleanup_callback_t;
typedef struct {} ptw32_thread_t;
typedef struct {} LONG;
typedef struct {} sem_t;
typedef struct {} ThreadKeyAssoc;
typedef struct {} WINAPI;
typedef struct {} CRITICAL_SECTION;
typedef struct {} pthread_spinlock_t;
typedef struct {} PTW32_INTERLOCKED_LONG;
typedef struct {} PTW32_INTERLOCKED_LPLONG;
typedef struct {} LPLONG;
typedef struct {} PAPCFUNC;
typedef struct {} ptw32_mcs_lock_t;
typedef struct {} ptw32_mcs_local_node_t;
typedef struct {} pthread_barrierattr_t;
typedef struct {} CONTEXT;
typedef struct {} DWORD_PTR;
typedef struct {} ptw32_cleanup_t;
typedef struct {} PTHREAD_COND_INITIALIZER;
typedef struct {} ptw32_cond_wait_cleanup_args_t;
typedef struct {} ThreadParms;
typedef struct {} PTW32_THREAD_REUSE_EMPTY;
typedef struct {} APIENTRY;
typedef struct {} PTHREAD_MUTEX_INITIALIZER;
typedef struct {} PTHREAD_RECURSIVE_MUTEX_INITIALIZER;
typedef struct {} PTHREAD_ERRORCHECK_MUTEX_INITIALIZER;
typedef struct {} LPCSTR;
typedef struct {} VOID;
typedef struct {} PTHREAD_RWLOCK_INITIALIZER;
typedef struct {} sem_timedwait_cleanup_args_t;
typedef struct {} PTHREAD_SPINLOCK_INITIALIZER;
typedef struct {} LPVOID;
typedef struct {} TCHAR;
typedef struct {} using;
typedef struct {} PUSH;
typedef struct {} MOV;
typedef struct {} LOCK;
typedef struct {} dword;
typedef struct {} POP;
typedef struct {} CMPXCHG;
typedef struct {} XCHG;
typedef struct {} JNZ;
typedef struct {} FILETIME;
typedef struct {} SYSTEMTIME;
typedef struct {} EXCEPTION_POINTERS;
typedef struct {} terminate_function;
typedef struct {} throw;
typedef struct {} LONGLONG;
typedef struct {} PTW32_TIMESPEC_TO_FILETIME_OFFSET;
typedef struct {} old_mutex_t;
typedef struct {} old_mutexattr_t;
typedef struct {} bag_t;

#define SO_SNDBUF	0x1001		/* send buffer size */
#define SO_RCVBUF	0x1002		/* receive buffer size */
#define SO_SNDLOWAT	0x1003		/* send low-water mark */
#define SO_RCVLOWAT	0x1004		/* receive low-water mark */
#define SO_SNDTIMEO	0x1005		/* send timeout */
#define SO_RCVTIMEO	0x1006		/* receive timeout */
#define	SO_ERROR	0x1007		/* get error status and clear */
#define	SO_TYPE		0x1008

#define MY_CDECL
#define MY_STD_CALL
#define MY_FAST_CALL

#undef __cplusplus

#define RINOK(x) { int __result__ = (x); if (__result__ != 0) return __result__; }

typedef struct {} __int64;


#define EXCEPTION_CONTINUE_SEARCH 0

typedef struct {} PtW32CatchAll;
typedef struct {} WORD;
typedef struct {} sharedInt_t;
typedef struct {} __cdecl;
typedef struct {} cvthing_t;
typedef struct {} TC;
typedef struct {} thread_t;
typedef struct {} data_t;
typedef struct {} mysig_t;
typedef struct {} LPCRITICAL_SECTION;
typedef struct {} blast_in;
typedef struct {} blast_out;
typedef struct {} in_func;
typedef struct {} out_func;
typedef struct {} FAR;
typedef struct {} gz_headerp;
typedef struct {} z_streamp;
typedef struct {} type_ar;
typedef struct {} open_file_func;
typedef struct {} read_file_func;
typedef struct {} write_file_func;
typedef struct {} tell_file_func;
typedef struct {} seek_file_func;
typedef struct {} close_file_func;
typedef struct {} testerror_file_func;
typedef struct {} open64_file_func;
typedef struct {} tell64_file_func;
typedef struct {} seek64_file_func;
typedef struct {} zlib_filefunc64_def;
typedef struct {} ZPOS64_T;
typedef struct {} zlib_filefunc64_32_def;
typedef struct {} zlib_filefunc_def;
typedef struct {} WIN32FILE_IOWIN;
typedef struct {} LPCTSTR;
typedef struct {} LPCWSTR;
typedef struct {} tm_unz;
typedef struct {} unzFile;
typedef struct {} unz_file_pos;
typedef struct {} unz64_file_pos;
typedef struct {} unz_global_info64;
typedef struct {} unz_file_info64;
typedef struct {} tm_zip;
typedef struct {} zipFile;
typedef struct {} WIN32_FIND_DATAA;
typedef struct {} LPWORD;
typedef struct {} zip_fileinfo;
typedef struct {} unz_file_info64_internal;
typedef struct {} file_in_zip64_read_info_s;
typedef struct {} unz64_s;
typedef struct {} unz_global_info;
typedef struct {} unz_file_info;
typedef struct {} voidp;
typedef struct {} linkedlist_datablock_internal;
typedef struct {} linkedlist_data;
typedef struct {} curfile64_info;
typedef struct {} zip64_internal;
typedef struct {} zipcharpc;
typedef struct {} rdtsc;
typedef struct {} mov;
typedef struct {} DWORDLONG;
typedef struct {} u4;
typedef struct {} ush;
typedef struct {} ct_data;
typedef struct {} _tree_desc;
typedef struct {} ulg;
typedef struct {} Posf;
typedef struct {} IPos;
typedef struct {} uchf;
typedef struct {} ushf;
typedef struct {} compress_func;
typedef struct {} deflate_state;
typedef struct {} block_state;
typedef struct {} Pos;
typedef struct {} big_t;
typedef struct {} code_t;
typedef struct {} file;
typedef struct {} bin;
typedef struct {} gzlog;
typedef struct {} uint;
typedef struct {} ulong;
typedef struct {} gz_statep;
typedef struct {} gz_state;
typedef struct {} voidpc;
typedef struct {} intf;
typedef struct {} tree_desc;
typedef struct {} charf;
typedef struct {} WIN32_FIND_DATAW;
typedef struct {} HKEY;
typedef struct {} CALLBACK;
typedef struct {} PVOID;
typedef struct {} BOOLEAN;
typedef struct {} WSANETWORKEVENTS;
typedef struct {} DNS_RECORD;
typedef struct {} DNS_STATUS;
typedef struct {} nl_item;
typedef struct {} bool;
typedef struct {} WIN32_FILE_ATTRIBUTE_DATA;
