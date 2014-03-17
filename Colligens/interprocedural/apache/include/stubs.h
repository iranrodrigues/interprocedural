typedef struct {} apr_size_t;
typedef struct {} ap_regex_t;
typedef struct {} ap_regmatch_t;
typedef struct {} apr_uint32_t;
typedef struct {} apr_pool_t;
typedef struct {} ap_rxplus_t;
typedef struct {} ap_version_t;
typedef struct {} apr_int64_t;
typedef struct {} apr_array_header_t;
typedef struct {} apr_table_t;
typedef struct {} conn_rec;
typedef struct {} server_rec;
typedef struct {} request_rec;
typedef struct {} apr_time_t;
typedef struct {} ap_method_list_t;
typedef struct {} apr_off_t;
typedef struct {} apr_bucket_brigade;
typedef struct {} apr_thread_mutex_t;
typedef struct {} apr_uri_t;
typedef struct {} apr_finfo_t;
typedef struct {} apr_sockaddr_t;
typedef struct {} conn_state_t;
typedef struct {} ap_conn_keepalive_e;
typedef struct {} conn_state_e;
typedef struct {} server_addr_rec;
typedef struct {} apr_port_t;
typedef struct {} process_rec;
typedef struct {} apr_file_t;
typedef struct {} apr_interval_time_t;
typedef struct {} size_t;
typedef struct {} ssize_t;
typedef struct {} ap_directive_t;
typedef struct {} cmd_parms;
typedef struct {} cmd_func;
typedef struct {} apr_status_t;
typedef struct {} ap_configfile_t;
typedef struct {} command_rec;
typedef struct {} ap_conf_vector_t;
typedef struct {} module;
typedef struct {} pid_t;
typedef struct {} ap_generation_t;
typedef struct {} global_score;
typedef struct {} process_score;
typedef struct {} worker_score;
typedef struct {} ap_scoreboard_e;
typedef struct {} ap_sb_handle_t;
typedef struct {} apr_shm_t;
typedef struct {} apr_proc_t;
typedef struct {} apr_cmdtype_e;
typedef struct {} piped_log;
typedef struct {} uid_t;
typedef struct {} gid_t;
typedef struct {} off_t;
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
typedef struct {} ap_filter_t;
typedef struct {} ap_input_mode_t;
typedef struct {} apr_read_type_e;
typedef struct {} ap_out_filter_func;
typedef struct {} ap_in_filter_func;
typedef struct {} ap_filter_func;
typedef struct {} ap_init_filter_func;
typedef struct {} ap_filter_provider_t;
typedef struct {} ap_filter_type;
typedef struct {} ap_filter_rec_t;
typedef struct {} clock_t;
typedef struct {} time_t;
typedef struct {} rlim_t;
typedef struct {} id_t;
typedef struct {} __uint8_t;
typedef struct {} __uint16_t;
typedef struct {} __uint32_t;
typedef struct {} __uint64_t;
typedef struct {} __darwin_size_t;
typedef struct {} __darwin_sigset_t;
typedef struct {} pthread_attr_t;
typedef struct {} siginfo_t;
typedef struct {} idtype_t;
typedef struct {} div_t;

typedef struct {} lua_State;
typedef struct {} luaL_Reg;
typedef struct {} ap_lua_dir_cfg;
typedef struct {} ap_lua_mapped_handler_spec;
typedef struct {} lua_Debug;
typedef struct {} lua_CFunction;
typedef struct {} req_fun_t;
typedef struct {} ap_lua_server_cfg;
typedef struct {} luaL_Buffer;
typedef struct {} ap_lua_vm_spec;

typedef struct {} ldiv_t;
typedef struct {} lldiv_t;
typedef struct {} wchar_t;
typedef struct {} u_int32_t;
typedef struct {} tcp_seq;
typedef struct {} sa_family_t;
typedef struct {} _SS_PAD1SIZE;
typedef struct {} __int64_t;
typedef struct {} _SS_PAD2SIZE;
typedef struct {} socklen_t;
typedef struct {} in_addr_t;
typedef struct {} in_port_t;
typedef struct {} uint32_t;
typedef struct {} apr_ipsubnet_t;
typedef struct {} access_compat_dir_conf;
typedef struct {} allowdeny;
typedef struct {} AP_METHOD_BIT;
typedef struct {} am_conf_t;
typedef struct {} authn_provider_list;
typedef struct {} auth_basic_config_rec;
typedef struct {} authn_status;
typedef struct {} authn_provider;
typedef struct {} apr_sha1_ctx_t;
typedef struct {} NONCE_LEN;
typedef struct {} client_entry;
typedef struct {} apr_rmm_t;
typedef struct {} apr_global_mutex_t;
typedef struct {} digest_config_rec;
typedef struct {} digest_header_rec;
typedef struct {} time_rec;
typedef struct {} NONCE_TIME_LEN;
typedef struct {} session_rec;
typedef struct {} auth_form_config_rec;
typedef struct {} ap_form_pair_t;
typedef struct {} anon_auth_user;
typedef struct {} authn_anon_config_rec;
typedef struct {} apr_hash_t;
typedef struct {} authn_core_dir_conf;
typedef struct {} authn_alias_srv_conf;
typedef struct {} provider_alias_rec;
typedef struct {} apr_dbd_t;
typedef struct {} apr_dbd_driver_t;
typedef struct {} ap_dbd_t;
typedef struct {} dbd_cfg_t;
typedef struct {} authn_dbd_conf;
typedef struct {} apr_dbd_prepared_t;
typedef struct {} apr_dbd_results_t;
typedef struct {} apr_dbd_row_t;
typedef struct {} authn_dbm_config_rec;
typedef struct {} apr_dbm_t;
typedef struct {} apr_datum_t;
typedef struct {} authn_file_config_rec;
typedef struct {} ap_socache_provider_t;
typedef struct {} ap_socache_instance_t;
typedef struct {} authn_cache_dircfg;
typedef struct {} __darwin_rune_t;
typedef struct {} _RuneEntry;
typedef struct {} _RuneRange;
typedef struct {} _RuneCharClass;
typedef struct {} _RuneLocale;
typedef struct {} __darwin_ct_rune_t;
typedef struct {} deref_options;
typedef struct {} apr_xlate_t;
typedef struct {} authn_ldap_config_t;
typedef struct {} util_ldap_connection_t;
typedef struct {} authn_ldap_request_t;
typedef struct {} authz_status;
typedef struct {} apr_ldap_url_desc_t;
typedef struct {} apr_ldap_err_t;
typedef struct {} authz_provider;
typedef struct {} authz_logic_op;
typedef struct {} authz_section_conf;
typedef struct {} authz_core_dir_conf;
typedef struct {} authz_core_srv_conf;
typedef struct {} ap_expr_info_t;
typedef struct {} ap_expr_lookup_parms;
typedef struct {} authz_dbd_cfg;
typedef struct {} authz_dbm_config_rec;
typedef struct {} authz_groupfile_config_rec;
typedef struct {} authz_user_config_rec;
typedef struct {} WSADATA;
typedef struct {} WORD;
typedef struct {} include_ctx_t;
typedef struct {} include_handler_fn_t;
typedef struct {} apr_int32_t;
typedef struct {} prog_types;
typedef struct {} cgi_exec_info_t;
typedef struct {} netware_dir_config;
typedef struct {} seclisten_rec;
typedef struct {} seclistenup_rec;
typedef struct {} apr_socket_t;
typedef struct {} unicode_t;
typedef struct {} ap_listen_rec;
typedef struct {} WSAPROTOCOL_INFO;
typedef struct {} SOCKET;
typedef struct {} NWSSLSrvConfigRec;
typedef struct {} secsocket_data;
typedef struct {} apr_os_sock_info_t;
typedef struct {} BOOL;
typedef struct {} apr_time_exp_t;
typedef struct {} apr_bucket;

typedef struct {} apr_OFN_ap_ssi_get_tag_and_value_t;
typedef struct {} apr_OFN_ap_ssi_parse_string_t;
typedef struct {} apr_OFN_ap_cgi_build_command_t;

#define __stdcall
#define OS

#define AP_PROCESS_REQUEST_RETURN(arg0, arg1, arg2)

#define AP_PROCESS_REQUEST_ENTRY(arg0, arg1)

#define APR_TIME_T_FMT

typedef struct {} apr_OFN_ap_register_log_handler_t;
typedef struct {} apr_OFN_ssl_is_https_t;

#define AP_REWRITE_LOG(arg0, arg1, arg2, arg3, arg4)
typedef struct {} apr_OFN_ap_register_rewrite_mapfunc_t;
typedef struct {} apr_OFN_ap_proxy_retry_worker_t;

#define AP_SERVER_MAJORVERSION  APR_STRINGIFY(AP_SERVER_MAJORVERSION_NUMBER)
#define AP_SERVER_MINORVERSION  APR_STRINGIFY(AP_SERVER_MINORVERSION_NUMBER)
#define AP_SERVER_PATCHLEVEL    APR_STRINGIFY(AP_SERVER_PATCHLEVEL_NUMBER) \
                                AP_SERVER_ADD_STRING

#define AP_SERVER_MINORREVISION AP_SERVER_MAJORVERSION "." AP_SERVER_MINORVERSION
#define AP_SERVER_BASEREVISION  AP_SERVER_MINORREVISION "." AP_SERVER_PATCHLEVEL
#define AP_SERVER_BASEVERSION   AP_SERVER_BASEPRODUCT "/" AP_SERVER_BASEREVISION
#define AP_SERVER_VERSION       AP_SERVER_BASEVERSION

/* macro for Win32 .rc files using numeric csv representation */
#define AP_SERVER_PATCHLEVEL_CSV AP_SERVER_MAJORVERSION_NUMBER, \
                                 AP_SERVER_MINORVERSION_NUMBER, \
                                 AP_SERVER_PATCHLEVEL_NUMBER

#define AP_SERVER_ADD_STRING          ""

typedef struct {} UCHAR;
typedef struct {} apr_OFN_TestOptionalFn_t;

#define DEFAULT_REL_RUNTIMEDIR "logs"
#define DEFAULT_SCOREBOARD "logs/apache_runtime_status"
#define DEFAULT_ERRORLOG "logs/error_log"
#define AP_TYPES_CONFIG_FILE "conf/mime.types"
#define SERVER_CONFIG_FILE "conf/httpd.conf"

#define DOCTYPE_XHTML_1_0T "<!DOCTYPE html PUBLIC \"-//W3C//" \
                           "DTD XHTML 1.0 Transitional//EN\"\n" \
                           "\"http://www.w3.org/TR/xhtml1/DTD/" \
                           "xhtml1-transitional.dtd\">\n"


#define DOCTYPE_HTML_2_0  "<!DOCTYPE HTML PUBLIC \"-//IETF//" \
                          "DTD HTML 2.0//EN\">\n"

#define DOCTYPE_HTML_3_2  "<!DOCTYPE HTML PUBLIC \"-//W3C//" \
                          "DTD HTML 3.2 Final//EN\">\n"

#define CRLF "\015\012"

#define 	FALSE   0
#define 	TRUE   (!FALSE)
#define 	APR_ASCII_BLANK   '\040'
#define 	APR_ASCII_CR   '\015'
#define 	APR_ASCII_LF   '\012'
#define 	APR_ASCII_TAB   '\011'
#define 	APR_OFFSET(p_type, field)   ((long) (((char *) (&(((p_type)NULL)->field))) - ((char *) NULL)))
#define 	APR_OFFSETOF(s_type, field)   APR_OFFSET(s_type*,field)
#define 	APR_XtOffset   APR_OFFSET
#define 	APR_XtOffsetOf   APR_OFFSETOF
#define 	APR_ALIGN(size, boundary)   (((size) + ((boundary) - 1)) & ~((boundary) - 1))
#define 	APR_ALIGN_DEFAULT(size)   APR_ALIGN(size, 8)
#define 	APR_STRINGIFY(n)   APR_STRINGIFY_HELPER(n)
#define 	APR_STRINGIFY_HELPER(n)   #n


typedef struct {} uuid_string_t;
typedef struct {} apr_proc_mutex_t;
typedef struct {} priv_set_t;
typedef struct {} priv_mode;
typedef struct {} priv_cfg;
typedef struct {} priv_dir_cfg;
typedef struct {} unixd_config_rec;
typedef struct {} apr_exit_why_e;
typedef struct {} ino_t;
typedef struct {} nlink_t;
typedef struct {} __DARWIN_STRUCT_STAT64;
typedef struct {} filesec_t;
typedef struct {} key_t;
typedef struct {} apr_uid_t;
typedef struct {} apr_gid_t;
typedef struct {} HCONN;
typedef struct {} PFN_GETSERVERVARIABLE;
typedef struct {} PFN_WRITECLIENT;
typedef struct {} PFN_READCLIENT;
typedef struct {} PFN_SERVERSUPPORTFUNCTION;
typedef struct {} PFN_HSE_IO_COMPLETION;
typedef struct {} apr_os_file_t;
typedef struct {} APR_THREAD_FUNC;
typedef struct {} EXTENSION_CONTROL_BLOCK;
typedef struct {} isapi_loaded;
typedef struct {} isapi_dir_conf;
typedef struct {} apr_thread_rwlock_t;
typedef struct {} apr_dso_handle_t;
typedef struct {} HSE_VERSION_INFO;
typedef struct {} PFN_GETEXTENSIONVERSION;
typedef struct {} PFN_HTTPEXTENSIONPROC;
typedef struct {} PFN_TERMINATEEXTENSION;
typedef struct {} apr_ssize_t;
typedef struct {} isapi_cid;
typedef struct {} interpreter_source_e;
typedef struct {} win32_dir_conf;
typedef struct {} ap_regkey_t;
typedef struct {} apr_table_entry_t;
typedef struct {} IMAGE_DOS_HEADER;
typedef struct {} apr_ino_t;
typedef struct {} apr_dev_t;
typedef struct {} cache_control_t;
typedef struct {} cache_object_t;
typedef struct {} cache_info;
typedef struct {} cache_handle_t;
typedef struct {} ap_cache_status_e;
typedef struct {} cache_provider;
typedef struct {} cache_provider_list;
typedef struct {} cache_request_rec;
typedef struct {} cache_server_conf;
typedef struct {} cache_dir_conf;
typedef struct {} apr_md5_ctx_t;
typedef struct {} disk_cache_file_t;
typedef struct {} disk_cache_info_t;
typedef struct {} disk_cache_conf;
typedef struct {} disk_cache_object_t;
typedef struct {} disk_cache_dir_conf;
typedef struct {} core_dir_config;
typedef struct {} apr_mmap_t;
typedef struct {} a_server_config;
typedef struct {} a_file;
typedef struct {} ap_socache_iterator_t;
typedef struct {} DC_CTX;
typedef struct {} apr_memcache_t;
typedef struct {} apr_memcache_server_t;
typedef struct {} SHMCBHeader;
typedef struct {} SHMCBSubcache;
typedef struct {} ALIGNED_HEADER_SIZE;
typedef struct {} ALIGNED_SUBCACHE_SIZE;
typedef struct {} ALIGNED_INDEX_SIZE;
typedef struct {} SHMCBIndex;
typedef struct {} ap_watchdog_t;
typedef struct {} ap_watchdog_callback_fn_t;
typedef struct {} hb_ctx_t;
typedef struct {} ap_slotmem_provider_t;
typedef struct {} ap_slotmem_instance_t;
typedef struct {} hm_server_t;
typedef struct {} hm_ctx_t;
typedef struct {} hm_slot_server_t;
typedef struct {} hm_slot_server_ctx_t;
typedef struct {} apr_bucket_alloc_t;
typedef struct {} apr_hash_index_t;
typedef struct {} apr_pollfd_t;
typedef struct {} so_server_conf;
typedef struct {} ap_module_symbol_t;
typedef struct {} apr_dso_handle_sym_t;
typedef struct {} watchdog_list_t;
typedef struct {} apr_thread_t;
typedef struct {} wd_server_conf_t;
typedef struct {} ap_list_provider_names_t;
typedef struct {} dbd_group_t;
typedef struct {} apr_reslist_t;
typedef struct {} svr_cfg;
typedef struct {} dbd_query_t;
typedef struct {} dbd_acquire_t;
typedef struct {} dav_error;
typedef struct {} dav_resource_type;
typedef struct {} dav_resource_private;
typedef struct {} dav_hooks_repository;
typedef struct {} dav_buffer;
typedef struct {} apr_text;
typedef struct {} dav_get_props_result;
typedef struct {} apr_xml_doc;
typedef struct {} apr_xml_elem;
typedef struct {} dav_xmlns_info;
typedef struct {} apr_text_header;
typedef struct {} dav_hooks_propdb;
typedef struct {} dav_hooks_locks;
typedef struct {} dav_hooks_vsn;
typedef struct {} dav_hooks_binding;
typedef struct {} dav_hooks_search;
typedef struct {} dav_resource;
typedef struct {} dav_hooks_liveprop;
typedef struct {} dav_prop_insert;
typedef struct {} dav_provider;
typedef struct {} dav_if_state_type;
typedef struct {} dav_locktoken;
typedef struct {} dav_locktoken_list;
typedef struct {} dav_liveprop_rollback;
typedef struct {} dav_liveprop_spec;
typedef struct {} dav_liveprop_group;
typedef struct {} dav_db;
typedef struct {} dav_prop_name;
typedef struct {} dav_namespace_map;
typedef struct {} dav_deadprop_rollback;
typedef struct {} dav_lockdb_private;
typedef struct {} dav_lock_rectype;
typedef struct {} dav_lock_scope;
typedef struct {} dav_lock_type;
typedef struct {} dav_lock_private;
typedef struct {} dav_lock;
typedef struct {} dav_lockdb;
typedef struct {} dav_response;
typedef struct {} dav_propdb;
typedef struct {} dav_prop_ctx;
typedef struct {} dav_walk_resource;
typedef struct {} dav_walk_params;
typedef struct {} dav_if_header;
typedef struct {} dav_stream_mode;
typedef struct {} dav_stream;
typedef struct {} dav_auto_version_info;
typedef struct {} dav_auto_version;
typedef struct {} dav_report_elem;
typedef struct {} dav_options_provider;
typedef struct {} dav_resource_type_provider;
typedef struct {} dav_hooks_db;
typedef struct {} dav_propdb_metadata;
typedef struct {} apr_uuid_t;
typedef struct {} dav_lock_combined;
typedef struct {} dav_lockdb_combined;
typedef struct {} dav_lock_discovery;
typedef struct {} dav_lock_indirect;
typedef struct {} dav_fs_server_conf;
typedef struct {} apr_fileperms_t;
typedef struct {} apr_uintptr_t;
typedef struct {} dav_fs_copymove_walk_ctx;
typedef struct {} dav_fs_walker_context;
typedef struct {} apr_dir_t;
typedef struct {} dav_elem_private;
typedef struct {} dav_lock_dir_conf;
typedef struct {} dav_server_conf;
typedef struct {} dav_dir_conf;
typedef struct {} dav_walker_ctx;
typedef struct {} apr_xml_attr;
typedef struct {} dav_lookup_result;
typedef struct {} dav_label_walker_ctx;
typedef struct {} dav_if_state_list;
typedef struct {} bucketeer_filter_config_t;
typedef struct {} bucketeer_ctx_t;
typedef struct {} dumpio_conf_t;
typedef struct {} EchoConfig;
typedef struct {} CaseFilterConfig;
typedef struct {} CaseFilterInConfig;
typedef struct {} CaseFilterInContext;
typedef struct {} fpos_t;
typedef struct {} FILE;
typedef struct {} va_list;
typedef struct {} x_cfg;
typedef struct {} ap_unix_identity_t;
typedef struct {} apr_uint64_t;
typedef struct {} exipc_data;
typedef struct {} buffer_conf;
typedef struct {} buffer_ctx;
typedef struct {} charset_dir_t;
typedef struct {} ees_t;
typedef struct {} charset_filter_ctx_t;
typedef struct {} charset_req_t;
typedef struct {} data_ctx;
typedef struct {} Bytef;
typedef struct {} uInt;
typedef struct {} uLong;
typedef struct {} alloc_func;
typedef struct {} free_func;
typedef struct {} voidpf;
typedef struct {} deflate_filter_config;
typedef struct {} z_stream;
typedef struct {} z_streamp;
typedef struct {} deflate_ctx;
typedef struct {} apr_procattr_t;
typedef struct {} ef_dir_t;
typedef struct {} ef_filter_t;
typedef struct {} apr_pollset_t;
typedef struct {} ef_server_t;
typedef struct {} ef_ctx_t;
typedef struct {} provider_ctx;
typedef struct {} mod_filter_chain;
typedef struct {} harness_ctx;
typedef struct {} mod_filter_ctx;
typedef struct {} mod_filter_cfg;
typedef struct {} token_type_t;
typedef struct {} token_t;
typedef struct {} xbithack_t;
typedef struct {} parse_state_t;
typedef struct {} bndm_t;
typedef struct {} arg_item_t;
typedef struct {} backref_t;
typedef struct {} ap_expr_eval_ctx_t;
typedef struct {} parse_node_t;
typedef struct {} result_item_t;
typedef struct {} include_dir_config;
typedef struct {} include_server_config;
typedef struct {} xmlCharEncoding;
typedef struct {} apr_strmatch_pattern;
typedef struct {} urlmap;
typedef struct {} proxy_html_conf;
typedef struct {} htmlParserCtxtPtr;
typedef struct {} htmlSAXHandler;
typedef struct {} xmlChar;
typedef struct {} saxctxt;
typedef struct {} htmlElemDesc;
typedef struct {} rewrite_t;
typedef struct {} tattr;
typedef struct {} meta;
typedef struct {} apr_bucket_type_t;
typedef struct {} rl_state_e;
typedef struct {} rl_ctx_t;
typedef struct {} reflector_cfg;
typedef struct {} reqtimeout_con_cfg;
typedef struct {} reqtimeout_srv_cfg;
typedef struct {} keep_body_ctx_t;
typedef struct {} request_dir_conf;
typedef struct {} kept_body_ctx_t;
typedef struct {} sed_commands_t;
typedef struct {} sed_expr_config;
typedef struct {} sed_eval_t;
typedef struct {} sed_filter_ctxt;
typedef struct {} sed_config;
typedef struct {} subst_dir_conf;
typedef struct {} subst_pattern_t;
typedef struct {} substitute_module_ctx;
typedef struct {} xml2ctx;
typedef struct {} xml2cfg;
typedef struct {} sed_comp_args;
typedef struct {} step_vars_storage;
typedef struct {} sed_label_t;
typedef struct {} sed_reptr_t;
typedef struct {} sed_err_fn_t;
typedef struct {} sed_write_fn_t;
typedef struct {} autoindex_config_rec;
typedef struct {} ai_desc_t;
typedef struct {} cgi_server_conf;
typedef struct {} apr_bucket_heap;
typedef struct {} apr_socklen_t;
typedef struct {} cgid_rlimit_t;
typedef struct {} apr_wait_t;
typedef struct {} cgid_req_t;
typedef struct {} core_request_config;
typedef struct {} cgid_server_conf;
typedef struct {} info_svr_conf;
typedef struct {} info_entry;
typedef struct {} hook_get_t;
typedef struct {} hook_lookup_t;
typedef struct {} hook_struct_t;
typedef struct {} ap_list_provider_groups_t;
typedef struct {} suexec_config_t;
typedef struct {} indexes_t;
typedef struct {} ap_bucket_error;
typedef struct {} etag_components_t;
typedef struct {} CHARS_PER_UINT64;
typedef struct {} http_ctx_t;
typedef struct {} header_struct;
typedef struct {} core_server_config;
typedef struct {} header_filter_ctx;
typedef struct {} outerror_filter_ctx_t;
typedef struct {} param;
typedef struct {} mime_dir_config;
typedef struct {} extension_info;
typedef struct {} attrib_info;
typedef struct {} content_type;
typedef struct {} util_ldap_state_t;
typedef struct {} LDAPMessage;
typedef struct {} util_ldap_config_t;
typedef struct {} util_url_node_t;
typedef struct {} util_dn_compare_node_t;
typedef struct {} util_compare_node_t;
typedef struct {} util_compare_subgroup_t;
typedef struct {} util_search_node_t;
typedef struct {} apr_ldap_opt_tls_cert_t;
typedef struct {} util_ald_cache_t;
typedef struct {} util_cache_node_t;
typedef struct {} apr_rmm_off_t;
typedef struct {} ap_log_handler_fn_t;
typedef struct {} ap_log_writer_init;
typedef struct {} ap_log_writer;
typedef struct {} apr_anylock_t;
typedef struct {} cached_request_time;
typedef struct {} log_request_state;
typedef struct {} apr_os_thread_t;
typedef struct {} log_format_item;
typedef struct {} ap_log_handler;
typedef struct {} buffered_log;
typedef struct {} config_log_state;
typedef struct {} multi_log_state;
typedef struct {} log_debug_dirconf;
typedef struct {} msg_entry;
typedef struct {} fcfg;
typedef struct {} hlog;
typedef struct {} logio_config_t;
typedef struct {} action_dir_config;
typedef struct {} alias_server_conf;
typedef struct {} alias_entry;
typedef struct {} alias_dir_conf;
typedef struct {} slash_cfg;
typedef struct {} dir_config_rec;
typedef struct {} imap_conf_rec;
typedef struct {} neg_dir_config;
typedef struct {} var_rec;
typedef struct {} accept_rec;
typedef struct {} negotiation_state;
typedef struct {} rewrite_mapfunc_t;
typedef struct {} pattern_type;
typedef struct {} data_item;
typedef struct {} backrefinfo;
typedef struct {} cache;
typedef struct {} cachedmap;
typedef struct {} rewrite_server_conf;
typedef struct {} rewritemap_entry;
typedef struct {} result_list;
typedef struct {} rewrite_ctx;
typedef struct {} rewrite_perdir_conf;
typedef struct {} rewriterule_entry;
typedef struct {} rewritecond_entry;
typedef struct {} spconfig;
typedef struct {} sp_reason;
typedef struct {} misspelled_file;
typedef struct {} userdir_config;
typedef struct {} mva_mode_e;
typedef struct {} mva_sconf_t;
typedef struct {} cern_meta_dir_config;
typedef struct {} env_dir_config_rec;
typedef struct {} expires_dir_config;
typedef struct {} format_tag_fn;
typedef struct {} hdr_actions;
typedef struct {} header_entry;
typedef struct {} headers_conf;
typedef struct {} format_tag;
typedef struct {} echo_do;
typedef struct {} edit_do;
typedef struct {} ident_config_rec;
typedef struct {} magic_rsl;
typedef struct {} magic_server_config_rec;
typedef struct {} magic_req_rec;
typedef struct {} rsl_states;
typedef struct {} remoteip_config_t;
typedef struct {} remoteip_proxymatch_t;
typedef struct {} remoteip_req_t;
typedef struct {} sei_cfg_rec;
typedef struct {} sei_entry;
typedef struct {} unique_id_rec;
typedef struct {} cookie_type_e;
typedef struct {} cookie_log_state;
typedef struct {} cookie_dir_rec;
typedef struct {} proxy_balancer;
typedef struct {} proxy_worker;
typedef struct {} proxy_conn_rec;
typedef struct {} proxy_hashes;
typedef struct {} proxy_conn_pool;
typedef struct {} proxy_worker_shared;
typedef struct {} proxy_balancer_method;
typedef struct {} proxy_server_conf;
typedef struct {} proxy_balancer_shared;
typedef struct {} proxy_dir_conf;
typedef struct {} proxy_hash_t;
typedef struct {} apr_byte_t;
typedef struct {} ajp_msg_t;
typedef struct {} apr_uint16_t;
typedef struct {} hb_server_t;
typedef struct {} ctx_servers_t;
typedef struct {} lb_hb_ctx_t;
typedef struct {} rr_data;
typedef struct {} proxy_req_conf;
typedef struct {} ALIGNED_PROXY_BALANCER_SHARED_SIZE;
typedef struct {} ALIGNED_PROXY_WORKER_SHARED_SIZE;
typedef struct {} connect_conf;
typedef struct {} port_range;
typedef struct {} apr_int16_t;
typedef struct {} express_server_conf;
typedef struct {} fcgi_header;
typedef struct {} fcgi_begin_request_body;
typedef struct {} apr_os_sock_t;
typedef struct {} proxy_fdpass_flush;
typedef struct {} proxy_ftp_dir_conf;
typedef struct {} proxy_dir_ctx_t;
typedef struct {} header_dptr;
typedef struct {} ap_proxy_header_reverse_map_fn;
typedef struct {} scgi_request_type;
typedef struct {} socket_ex_data;
typedef struct {} scgi_config;
typedef struct {} scgi_request_config;
typedef struct {} forward_info;
typedef struct {} session_dir_conf;
typedef struct {} session_cookie_dir_conf;
typedef struct {} apr_crypto_t;
typedef struct {} apr_crypto_block_key_type_e;
typedef struct {} session_crypto_dir_conf;
typedef struct {} apr_crypto_key_t;
typedef struct {} apr_crypto_block_t;
typedef struct {} apr_crypto_driver_t;
typedef struct {} session_crypto_conf;
typedef struct {} apu_err_t;
typedef struct {} session_dbd_dir_conf;
typedef struct {} ap_slotmem_type_t;
typedef struct {} ap_slotmem_callback_fn_t;
typedef struct {} shmatt_t;
typedef struct {} sharedslotdesc_t;
typedef struct {} AP_SLOTMEM_OFFSET;
typedef struct {} STACK;
typedef struct {} CRYPTO_EX_DATA;
typedef struct {} CRYPTO_EX_new;
typedef struct {} CRYPTO_EX_free;
typedef struct {} CRYPTO_EX_dup;
typedef struct {} CRYPTO_EX_DATA_IMPL;
typedef struct {} CRYPTO_MEM_LEAK_CB;
typedef struct {} COMP_CTX;
typedef struct {} COMP_METHOD;
typedef struct {} BIO;
typedef struct {} bio_info_cb;
typedef struct {} BIO_METHOD;
typedef struct {} BUF_MEM;
typedef struct {} BIGNUM;
typedef struct {} BN_GENCB;
typedef struct {} BN_CTX;
typedef struct {} BN_MONT_CTX;
typedef struct {} BN_BLINDING;
typedef struct {} BN_RECP_CTX;
typedef struct {} ASN1_BOOLEAN;
typedef struct {} ASN1_STRING;
typedef struct {} ASN1_OBJECT;
typedef struct {} ASN1_INTEGER;
typedef struct {} ASN1_ENUMERATED;
typedef struct {} ASN1_BIT_STRING;
typedef struct {} ASN1_OCTET_STRING;
typedef struct {} ASN1_PRINTABLESTRING;
typedef struct {} ASN1_T61STRING;
typedef struct {} ASN1_IA5STRING;
typedef struct {} ASN1_GENERALSTRING;
typedef struct {} ASN1_BMPSTRING;
typedef struct {} ASN1_UNIVERSALSTRING;
typedef struct {} ASN1_UTCTIME;
typedef struct {} ASN1_GENERALIZEDTIME;
typedef struct {} ASN1_VISIBLESTRING;
typedef struct {} ASN1_UTF8STRING;
typedef struct {} ASN1_VALUE;
typedef struct {} i2d_of_void;
typedef struct {} d2i_of_void;
typedef struct {} ASN1_METHOD;
typedef struct {} ASN1_TYPE;
typedef struct {} BIT_STRING_BITNAME;
typedef struct {} ASN1_TIME;
typedef struct {} ASN1_CTX;
typedef struct {} ASN1__CTX;
typedef struct {} ASN1_ITEM;
typedef struct {} ASN1_HEADER;
typedef struct {} ASN1_STRING_TABLE;
typedef struct {} CONF;
typedef struct {} X509V3_CTX;
typedef struct {} asn1_output_data_fn;
typedef struct {} OBJ_NAME;
typedef struct {} EVP_MD_CTX;
typedef struct {} EVP_MD;
typedef struct {} ENGINE;
typedef struct {} EVP_CIPHER_CTX;
typedef struct {} EVP_CIPHER;
typedef struct {} EVP_PKEY;
typedef struct {} EVP_ENCODE_CTX;
typedef struct {} EVP_PBE_KEYGEN;
typedef struct {} EC_METHOD;
typedef struct {} EC_GROUP;
typedef struct {} EC_POINT;
typedef struct {} point_conversion_form_t;
typedef struct {} EC_builtin_curve;
typedef struct {} EC_KEY;
typedef struct {} ECDSA_SIG;
typedef struct {} ECDSA_METHOD;
typedef struct {} ECDH_METHOD;
typedef struct {} RSA;
typedef struct {} RSA_METHOD;
typedef struct {} DH;
typedef struct {} DH_METHOD;
typedef struct {} DSA_SIG;
typedef struct {} DSA;
typedef struct {} DSA_METHOD;
typedef struct {} SHA_CTX;
typedef struct {} SHA256_CTX;
typedef struct {} SHA512_CTX;
typedef struct {} X509_ALGOR;
typedef struct {} ASN1_ENCODING;
typedef struct {} X509_NAME;
typedef struct {} X509_PUBKEY;
typedef struct {} X509_REQ_INFO;
typedef struct {} X509_VAL;
typedef struct {} X509_CINF;
typedef struct {} X509_POLICY_CACHE;
typedef struct {} X509_CERT_AUX;
typedef struct {} X509;
typedef struct {} X509_CRL_INFO;
typedef struct {} EVP_CIPHER_INFO;
typedef struct {} X509_CRL;
typedef struct {} X509_PKEY;
typedef struct {} NETSCAPE_SPKAC;
typedef struct {} LHASH_NODE;
typedef struct {} LHASH_COMP_FN_TYPE;
typedef struct {} LHASH_HASH_FN_TYPE;
typedef struct {} LHASH;
typedef struct {} LHASH_DOALL_FN_TYPE;
typedef struct {} LHASH_DOALL_ARG_FN_TYPE;
typedef struct {} X509_LOOKUP;
typedef struct {} X509_OBJECT;
typedef struct {} X509_VERIFY_PARAM;
typedef struct {} X509_STORE_CTX;
typedef struct {} X509_STORE;
typedef struct {} X509_LOOKUP_METHOD;
typedef struct {} X509_POLICY_TREE;
typedef struct {} X509_POLICY_LEVEL;
typedef struct {} X509_POLICY_NODE;
typedef struct {} PKCS7_ISSUER_AND_SERIAL;
typedef struct {} PKCS7_ENC_CONTENT;
typedef struct {} PKCS7_SIGNED;
typedef struct {} PKCS7_ENVELOPE;
typedef struct {} PKCS7_SIGN_ENVELOPE;
typedef struct {} PKCS7_DIGEST;
typedef struct {} PKCS7_ENCRYPT;
typedef struct {} PKCS7;
typedef struct {} PKCS7_SIGNER_INFO;
typedef struct {} PKCS7_RECIP_INFO;
typedef struct {} X509_REQ;
typedef struct {} NETSCAPE_SPKI;
typedef struct {} X509_SIG;
typedef struct {} PKCS8_PRIV_KEY_INFO;
typedef struct {} X509_ATTRIBUTE;
typedef struct {} X509_EXTENSION;
typedef struct {} X509_NAME_ENTRY;
typedef struct {} X509_REVOKED;
typedef struct {} X509_INFO;
typedef struct {} X509_TRUST;
typedef struct {} PEM_USER;
typedef struct {} pem_password_cb;
typedef struct {} PEM_ENCODE_SEAL_CTX;
typedef struct {} HMAC_CTX;
typedef struct {} SSL;
typedef struct {} SSL_CTX;
typedef struct {} SSL_CIPHER;
typedef struct {} SSL_METHOD;
typedef struct {} SSL_SESSION;
typedef struct {} GEN_SESSION_CB;
typedef struct {} X509_EXTENSIONS;
typedef struct {} SSL3_BUFFER;
typedef struct {} SSL3_RECORD;
typedef struct {} SSL_COMP;
typedef struct {} pitem;
typedef struct {} pqueue;
typedef struct {} piterator;
typedef struct {} DTLS1_BITMAP;
typedef struct {} record_pqueue;
typedef struct {} ERR_STRING_DATA;
typedef struct {} ERR_STATE;
typedef struct {} ERR_FNS;
typedef struct {} RAND_METHOD;
typedef struct {} CONF_METHOD;
typedef struct {} CONF_IMODULE;
typedef struct {} conf_init_func;
typedef struct {} conf_finish_func;
typedef struct {} CONF_MODULE;
typedef struct {} ASN1_ITEM_EXP;
typedef struct {} X509V3_EXT_NEW;
typedef struct {} X509V3_EXT_FREE;
typedef struct {} X509V3_EXT_D2I;
typedef struct {} X509V3_EXT_I2D;
typedef struct {} X509V3_EXT_I2S;
typedef struct {} X509V3_EXT_S2I;
typedef struct {} X509V3_EXT_I2V;
typedef struct {} X509V3_EXT_V2I;
typedef struct {} X509V3_EXT_I2R;
typedef struct {} X509V3_EXT_R2I;
typedef struct {} X509V3_CONF_METHOD;
typedef struct {} OTHERNAME;
typedef struct {} EDIPARTYNAME;
typedef struct {} GENERAL_NAME;
typedef struct {} GENERAL_NAMES;
typedef struct {} DIST_POINT_NAME;
typedef struct {} NOTICEREF;
typedef struct {} USERNOTICE;
typedef struct {} PROXY_POLICY;
typedef struct {} SXNET;
typedef struct {} X509V3_EXT_METHOD;
typedef struct {} ACCESS_DESCRIPTION;
typedef struct {} CONF_VALUE;
typedef struct {} X509_PURPOSE;
typedef struct {} OCSP_CERTID;
typedef struct {} OCSP_REQINFO;
typedef struct {} OCSP_SIGNATURE;
typedef struct {} OCSP_RESPBYTES;
typedef struct {} ASN1_NULL;
typedef struct {} OCSP_REVOKEDINFO;
typedef struct {} OCSP_CERTSTATUS;
typedef struct {} OCSP_RESPID;
typedef struct {} OCSP_RESPDATA;
typedef struct {} OCSP_RESPONSE;
typedef struct {} OCSP_REQUEST;
typedef struct {} OCSP_REQ_CTX;
typedef struct {} OCSP_ONEREQ;
typedef struct {} OCSP_BASICRESP;
typedef struct {} OCSP_SINGLERESP;
typedef struct {} ssl_rsctx_t;
typedef struct {} ssl_rssrc_t;
typedef struct {} ssl_shutdown_type_e;
typedef struct {} ssl_verify_t;
typedef struct {} SSLSrvConfigRec;
typedef struct {} modssl_pk_server_t;
typedef struct {} modssl_pk_proxy_t;
typedef struct {} modssl_ticket_key_t;
typedef struct {} ssl_proto_t;
typedef struct {} ssl_pphrase_t;
typedef struct {} ssl_crlcheck_t;
typedef struct {} modssl_auth_ctx_t;
typedef struct {} SSLModConfigRec;
typedef struct {} ssl_enabled_t;
typedef struct {} modssl_ctx_t;
typedef struct {} ssl_opt_t;
typedef struct {} ssl_pathcheck_t;
typedef struct {} ssl_algo_t;
typedef struct {} ssl_asn1_t;
typedef struct {} SSLConnRec;
typedef struct {} ssl_randseed_t;
typedef struct {} SSLDirConfigRec;
typedef struct {} ssl_require_t;
typedef struct {} ssl_filter_ctx_t;
typedef struct {} bio_filter_out_ctx_t;
typedef struct {} char_buffer_t;
typedef struct {} bio_filter_in_ctx_t;
typedef struct {} STORE;
typedef struct {} STORE_METHOD;
typedef struct {} STORE_OBJECT_TYPES;
typedef struct {} STORE_CERTIFICATE_STATUS;
typedef struct {} STORE_OBJECT;
typedef struct {} OPENSSL_ITEM;
typedef struct {} STORE_INITIALISE_FUNC_PTR;
typedef struct {} STORE_CLEANUP_FUNC_PTR;
typedef struct {} STORE_GENERATE_OBJECT_FUNC_PTR;
typedef struct {} STORE_GET_OBJECT_FUNC_PTR;
typedef struct {} STORE_STORE_OBJECT_FUNC_PTR;
typedef struct {} STORE_MODIFY_OBJECT_FUNC_PTR;
typedef struct {} STORE_HANDLE_OBJECT_FUNC_PTR;
typedef struct {} STORE_START_OBJECT_FUNC_PTR;
typedef struct {} STORE_NEXT_OBJECT_FUNC_PTR;
typedef struct {} STORE_END_OBJECT_FUNC_PTR;
typedef struct {} STORE_GENERIC_FUNC_PTR;
typedef struct {} STORE_CTRL_FUNC_PTR;
typedef struct {} STORE_ATTR_INFO;
typedef struct {} STORE_ATTR_TYPES;
typedef struct {} UI;
typedef struct {} UI_METHOD;
typedef struct {} UI_STRING;
typedef struct {} ENGINE_GEN_INT_FUNC_PTR;
typedef struct {} ENGINE_CTRL_FUNC_PTR;
typedef struct {} ENGINE_LOAD_KEY_PTR;
typedef struct {} ENGINE_SSL_CLIENT_CERT_PTR;
typedef struct {} ENGINE_CIPHERS_PTR;
typedef struct {} ENGINE_DIGESTS_PTR;
typedef struct {} ENGINE_CMD_DEFN;
typedef struct {} dyn_MEM_malloc_cb;
typedef struct {} dyn_MEM_realloc_cb;
typedef struct {} dyn_MEM_free_cb;
typedef struct {} dyn_lock_locking_cb;
typedef struct {} dyn_lock_add_lock_cb;
typedef struct {} dyn_dynlock_create_cb;
typedef struct {} dyn_dynlock_lock_cb;
typedef struct {} dyn_dynlock_destroy_cb;
typedef struct {} dynamic_MEM_fns;
typedef struct {} dynamic_LOCK_fns;
typedef struct {} dynamic_fns;
typedef struct {} EXTENDED_KEY_USAGE;
typedef struct {} BASIC_CONSTRAINTS;
typedef struct {} certinfo;
typedef struct {} dialup_baton_t;
typedef struct {} dialup_dcfg_t;
typedef struct {} modem_speed_t;
typedef struct {} bs2_ForkType;
typedef struct {} event_handle_t;
typedef struct {} Warn_t;
typedef struct {} Report_t;
typedef struct {} rtag_t;
typedef struct {} apr_lockmech_e;
typedef struct {} apr_os_proc_mutex_t;
typedef struct {} apr_os_global_mutex_t;
typedef struct {} HKEY;
typedef struct {} DWORD;
typedef struct {} LONG;
typedef struct {} apr_wchar_t;
typedef struct {} LPBYTE;
typedef struct {} LPDWORD;
typedef struct {} filesec_property_t;
typedef struct {} HMODULE;
typedef struct {} FARPROC;
typedef struct {} ap_dlltoken_e;
typedef struct {} PSECURITY_ATTRIBUTES;
typedef struct {} PSECURITY_DESCRIPTOR;
typedef struct {} SECURITY_ATTRIBUTES;
typedef struct {} merger_func;
typedef struct {} dir_maker_func;
typedef struct {} ap_mod_list;
typedef struct {} arr_elts_param_t;
typedef struct {} fnames;
typedef struct {} AP_DEFAULT_LIMIT_REQ_BODY;
typedef struct {} allow_options_t;
typedef struct {} AP_DEFAULT_LIMIT_XML_BODY;
typedef struct {} ap_errorlog_info;
typedef struct {} ap_errorlog_format_item;
typedef struct {} ap_errorlog_handler;
typedef struct {} ap_errorlog_handler_fn_t;
typedef struct {} core_net_rec;
typedef struct {} apr_random_t;
typedef struct {} core_ctx_t;
typedef struct {} core_output_filter_ctx_t;
typedef struct {} apr_bucket_file;
typedef struct {} ap_slave_t;
typedef struct {} TRANS;
typedef struct {} read_handle_t;
typedef struct {} APR_EOL_STR;
typedef struct {} apr_getopt_t;
typedef struct {} ap_event_pod_t;
typedef struct {} fd_queue_info_t;
typedef struct {} event_conn_state_t;
typedef struct {} ap_mpm_callback_fn_t;
typedef struct {} APR_RING_HEAD;
typedef struct {} timers_t;
typedef struct {} timer_event_t;
typedef struct {} timers;
typedef struct {} fd_queue_elem_t;
typedef struct {} apr_thread_cond_t;
typedef struct {} fd_queue_t;
typedef struct {} pthread_t;
typedef struct {} stack_t;
typedef struct {} apr_threadattr_t;
typedef struct {} poll_type_e;
typedef struct {} event_retained_data;
typedef struct {} listener_poll_type;
typedef struct {} thread_starter;
typedef struct {} proc_info;
typedef struct {} recycled_pool;
typedef struct {} HMTX;
typedef struct {} listen_socket_t;
typedef struct {} parent_info_t;
typedef struct {} ULONG;
typedef struct {} RESULTCODES;
typedef struct {} PID;
typedef struct {} PPIB;
typedef struct {} PTIB;
typedef struct {} HEV;
typedef struct {} HQUEUE;
typedef struct {} TID;
typedef struct {} worker_args_t;

#define AP_SERVER_BASEARGS "C:c:D:d:E:e:f:vVlLtTSMh?X"

typedef struct {} EXCEPTIONREPORTRECORD;
typedef struct {} EXCEPTIONREGISTRATIONRECORD;
typedef struct {} CONTEXTRECORD;
typedef struct {} PVOID;
typedef struct {} apr_allocator_t;
typedef struct {} REQUESTDATA;
typedef struct {} BYTE;
typedef struct {} scr_t;
typedef struct {} CommandParser_t;
typedef struct {} NXContext_t;
typedef struct {} ap_pod_t;
typedef struct {} prefork_retained_data;
typedef struct {} HANDLE;
typedef struct {} OSVERSIONINFO;
typedef struct {} ap_signal_parent_e;
typedef struct {} OVERLAPPED;
typedef struct {} PADDED_ADDR_SIZE;
typedef struct {} winnt_conn_ctx_t;
typedef struct {} SOCKADDR_STORAGE;
typedef struct {} u_long;
typedef struct {} LPOVERLAPPED;
typedef struct {} ULONG_PTR;
typedef struct {} LPWSAPROTOCOL_INFO;
typedef struct {} LPVOID;
typedef struct {} SERVICE_STATUS;
typedef struct {} SERVICE_STATUS_HANDLE;
typedef struct {} nt_service_ctx_t;
typedef struct {} CONSOLE_SCREEN_BUFFER_INFO;
typedef struct {} INPUT_RECORD;
typedef struct {} SC_HANDLE;
typedef struct {} LPTSTR;
typedef struct {} CHAR;
typedef struct {} ap_worker_pod_t;
typedef struct {} worker_retained_data;
typedef struct {} mpm_gen_info_t;
typedef struct {} mpm_child_status;
typedef struct {} extra_process_t;
typedef struct {} action_t;
typedef struct {} ap_reclaim_callback_fn_t;
typedef struct {} ap_exception_info_t;
typedef struct {} old_write_filter_ctx;
typedef struct {} apr_vformatter_buff_t;
typedef struct {} hdr_ptr;
typedef struct {} walk_cache_t;
typedef struct {} walk_walked_t;
typedef struct {} overrides_t;
typedef struct {} core_opts_t;
typedef struct {} ap_HOOK_access_checker_t;
typedef struct {} ap_HOOK_access_checker_ex_t;
typedef struct {} ap_HOOK_check_user_id_t;
typedef struct {} ap_HOOK_auth_checker_t;
typedef struct {} scoreboard;
typedef struct {} ap_form_type_t;
typedef struct {} apr_memnode_t;
typedef struct {} apr_abortfunc_t;
typedef struct {} ap_cookie_do;
typedef struct {} ap_expr_node_op_e;
typedef struct {} ap_expr_t;
typedef struct {} ap_expr_lookup_fn_t;
typedef struct {} ap_expr_parse_ctx_t;
typedef struct {} ap_expr_var_func_t;
typedef struct {} ap_expr_string_func_t;
typedef struct {} ap_expr_list_func_t;
typedef struct {} ap_expr_op_unary_t;
typedef struct {} ap_expr_op_binary_t;
typedef struct {} YYSTYPE;
typedef struct {} yytype_uint8;
typedef struct {} yytype_int8;
typedef struct {} yytype_int16;
typedef struct {} intmax_t;
typedef struct {} imaxdiv_t;
typedef struct {} uintmax_t;
typedef struct {} yy_size_t;
typedef struct {} yyscan_t;
typedef struct {} YY_CHAR;

#define AP_ALL_AVAILABLE_MUTEXES_STRING                  \
    "Mutex mechanisms are: 'none', 'default'"

typedef struct {} LPSTR;
typedef struct {} MSG;

typedef struct {} YY_BUFFER_STATE;
typedef struct {} yy_state_type;
typedef struct {} flex_int32_t;
typedef struct {} YY_DO_BEFORE_ACTION;
typedef struct {} filter_trie_node;
typedef struct {} filter_trie_child_ptr;
typedef struct {} mutex_cfg_t;
typedef struct {} pcre;
typedef struct {} apr_xml_parser;
typedef struct {} name_chain;
typedef struct {} ipaddr_chain;
typedef struct {} INADDR_ANY;
typedef struct {} ap_vhost_iterate_conn_cb;
typedef struct {} connect_state_e;
typedef struct {} X509_STACK_TYPE;

#define 	APR_RING_ENTRY(elem)
#define 	APR_RING_HEAD(head, elem)
#define 	APR_RING_SENTINEL(hp, elem, link)   (struct elem *)((char *)(&(hp)->next) - APR_OFFSETOF(struct elem, link))
#define 	APR_RING_FIRST(hp)   (hp)->next
#define 	APR_RING_LAST(hp)   (hp)->prev
#define 	APR_RING_NEXT(ep, link)   (ep)->link.next
#define 	APR_RING_PREV(ep, link)   (ep)->link.prev
#define 	APR_RING_INIT(hp, elem, link)
#define 	APR_RING_EMPTY(hp, elem, link)   (APR_RING_FIRST((hp)) == APR_RING_SENTINEL((hp), elem, link))
#define 	APR_RING_ELEM_INIT(ep, link)
#define 	APR_RING_SPLICE_BEFORE(lep, ep1, epN, link)
#define 	APR_RING_SPLICE_AFTER(lep, ep1, epN, link)
#define 	APR_RING_INSERT_BEFORE(lep, nep, link)   APR_RING_SPLICE_BEFORE((lep), (nep), (nep), link)
#define 	APR_RING_INSERT_AFTER(lep, nep, link)   APR_RING_SPLICE_AFTER((lep), (nep), (nep), link)
#define 	APR_RING_SPLICE_HEAD(hp, ep1, epN, elem, link)
#define 	APR_RING_SPLICE_TAIL(hp, ep1, epN, elem, link)
#define 	APR_RING_INSERT_HEAD(hp, nep, elem, link)   APR_RING_SPLICE_HEAD((hp), (nep), (nep), elem, link)
#define 	APR_RING_INSERT_TAIL(hp, nep, elem, link)   APR_RING_SPLICE_TAIL((hp), (nep), (nep), elem, link)
#define 	APR_RING_CONCAT(h1, h2, elem, link)
#define 	APR_RING_PREPEND(h1, h2, elem, link)
#define 	APR_RING_UNSPLICE(ep1, epN, link)
#define 	APR_RING_REMOVE(ep, link)   APR_RING_UNSPLICE((ep), (ep), link)
#define 	APR_RING_FOREACH(ep, head, elem, link)
#define 	APR_RING_FOREACH_SAFE(ep1, ep2, head, elem, link)
#define 	APR_RING_CHECK_ONE(msg, ptr)
#define 	APR_RING_CHECK(hp, elem, link, msg)
#define 	APR_RING_CHECK_CONSISTENCY(hp, elem, link)
#define 	APR_RING_CHECK_ELEM(ep, elem, link, msg)
#define 	APR_RING_CHECK_ELEM_CONSISTENCY(ep, elem, link)

#define AP_SIG_GRACEFUL SIGUSR1

#define SIGUSR1 30	/* user defined signal 1 */
#define SIGUSR2 31

#define APLOG_MODULE_INDEX  \
    (aplog_module_index ? *aplog_module_index : APLOG_NO_MODULE)

#define APLOG_NO_MODULE         -1

#define APLOG_WARNING    4

#define AP_SIG_GRACEFUL_STOP_STRING "SIGWINCH"

#define AP_SIG_GRACEFUL_STRING "SIGUSR1"

#define APIENTRY


typedef struct {} DIRENTRY;
typedef struct {} ENTRY;
typedef struct {} htdbm_t;
typedef struct {} rotate_config_t;
typedef struct {} rotate_status_t;
typedef struct {} HINSTANCE;
typedef struct {} TCHAR;
typedef struct {} HICON;
typedef struct {} UINT;
typedef struct {} ST_APACHE_SERVICE;
typedef struct {} ST_MONITORED_COMP;
typedef struct {} HBITMAP;
typedef struct {} HWND;
typedef struct {} HCURSOR;
typedef struct {} LANGID;
typedef struct {} CRITICAL_SECTION;
typedef struct {} LPCTSTR;
typedef struct {} VOID;
typedef struct {} NOTIFYICONDATA;
typedef struct {} HMENU;
typedef struct {} MENUITEMINFO;
typedef struct {} POINT;
typedef struct {} RECT;
typedef struct {} LRESULT;
typedef struct {} LPARAM;

#define CALLBACK

typedef struct {} SERVICE_TABLE_ENTRY;

#define AP_READ_REQUEST_ENTRY(arg0, arg1)

#define AP_READ_REQUEST_SUCCESS(arg0, arg1, arg2, arg3, arg4)

#define AP_READ_REQUEST_FAILURE(arg0)
typedef struct {} apr_OFN_ap_logio_get_last_bytes_t;

#define SET_COOKIE "Set-Cookie"

typedef struct {} WPARAM;
typedef struct {} BROWSEINFO;
typedef struct {} ITEMIDLIST;
typedef struct {} LPMALLOC;
typedef struct {} TEXTMETRIC;
typedef struct {} HDC;
typedef struct {} LPMEASUREITEMSTRUCT;
typedef struct {} LPDRAWITEMSTRUCT;
typedef struct {} DLGPROC;
typedef struct {} PWTS_PROCESS_INFO;
typedef struct {} WNDCLASSEX;
typedef struct {} WNDPROC;

#define WINAPI

typedef struct {} PACL;
typedef struct {} apr_OFN_authn_ap_auth_type_t;
typedef struct {} apr_OFN_authn_ap_auth_name_t;
typedef struct {} apr_OFN_access_compat_ap_satisfies_t;
typedef struct {} apr_OFN_ap_ident_lookup_t;
typedef struct {} apr_OFN_ap_find_loaded_module_symbol_t;

#define PLATFORM "BS2000"

typedef struct {} apr_OFN_ap_logio_add_bytes_out_t;
typedef struct {} apr_OFN_authz_some_auth_required_t;
typedef struct {} apr_OFN_ap_signal_server_t;


#define AP_SERVER_BASEVENDOR "Apache Software Foundation"
#define AP_SERVER_BASEPROJECT "Apache HTTP Server"
#define AP_SERVER_BASEPRODUCT "Apache"

#define AP_SERVER_MAJORVERSION_NUMBER 2
#define AP_SERVER_MINORVERSION_NUMBER 4
#define AP_SERVER_PATCHLEVEL_NUMBER   3
#define AP_SERVER_DEVBUILD_BOOLEAN    0
#define AP_SERVER_ADD_STRING          "-dev"

typedef struct {} ap_winapi_fpt_ChangeServiceConfig2A;
typedef struct {} feedback_args_t;
typedef struct {} PROCESS_INFORMATION;
typedef struct {} STARTUPINFO;
typedef struct {} __DARWIN_STRUCT_DIRENTRY;
typedef struct {} __darwin_pthread_mutex_t;
typedef struct {} DIR;
typedef struct {} ushort;
typedef struct {} pthread_cond_t;
typedef struct {} pthread_condattr_t;
typedef struct {} pthread_mutex_t;
typedef struct {} pthread_key_t;
typedef struct {} pthread_mutexattr_t;
typedef struct {} pthread_once_t;
typedef struct {} pthread_rwlock_t;
typedef struct {} pthread_rwlockattr_t;
typedef struct {} mach_port_t;
typedef struct {} caddr_t;
typedef struct {} usptr_t;
typedef struct {} ulock_t;
typedef struct {} ptrdiff_t;
typedef struct {} IPC_PRIVATE;
typedef struct {} apr_bucket_refcount;
typedef struct {} apr_OFN_ap_session_load_t;
typedef struct {} apr_OFN_ap_session_get_t;
typedef struct {} apr_OFN_ap_session_set_t;
typedef struct {} apr_OFN_ap_request_insert_filter_t;
typedef struct {} apr_OFN_ap_request_remove_filter_t;
typedef struct {} apr_OFN_ap_authn_cache_store_t;
typedef struct {} apr_OFN_ap_dbd_prepare_t;
typedef struct {} apr_OFN_ap_dbd_acquire_t;
typedef struct {} apr_OFN_ssl_var_lookup_t;
typedef struct {} apr_OFN_ap_register_include_handler_t;
typedef struct {} apr_OFN_xml2enc_charset_t;
typedef struct {} apr_OFN_xml2enc_filter_t;


#define 	AP_RL_DECLARE(type)   type
#define 	AP_RL_DECLARE_NONSTD(type)   type
#define 	AP_RL_DECLARE_DATA
#define 	AP_RL_BUCKET_IS_END(e)   (e->type == &ap_rl_bucket_type_end)
#define 	AP_RL_BUCKET_IS_START(e)   (e->type == &ap_rl_bucket_type_start)

typedef struct {} apr_OFN_uldap_connection_close_t;
typedef struct {} apr_OFN_uldap_connection_find_t;
typedef struct {} apr_OFN_uldap_cache_comparedn_t;
typedef struct {} apr_OFN_uldap_cache_compare_t;
typedef struct {} apr_OFN_uldap_cache_check_subgroups_t;
typedef struct {} apr_OFN_uldap_cache_checkuserid_t;
typedef struct {} apr_OFN_uldap_cache_getuserdn_t;
typedef struct {} apr_OFN_uldap_ssl_supported_t;

typedef struct {} HSE_TF_INFO;
typedef struct {} HSE_URL_MAPEX_INFO;
typedef struct {} HSE_SEND_HEADER_EX_INFO;
typedef struct {} apr_OFN_ap_cache_generate_key_t;
typedef struct {} apr_OFN_ap_watchdog_get_instance_t;
typedef struct {} apr_OFN_ap_watchdog_register_callback_t;

#define DBD_DECLARE_NONSTD(type)     type

#define DAV_FS_STATE_DIR                ".DAV"
#define DAV_FS_STATE_FILE_FOR_DIR       ".state_for_dir"
#define DAV_FS_LOCK_NULL_FILE           ".locknull"

#define DEBUG_CR         "\n"

#define DAV_XML_HEADER          "<?xml version=\"1.0\" encoding=\"utf-8\"?>"
#define DAV_XML_CONTENT_TYPE    "text/xml; charset=\"utf-8\""

#define CACHE_DECLARE(type)            type

#define DEFAULT_CACHE_LOCKPATH "/mod_cache-lock"

#define 	APR_IMPLEMENT_HOOK_GET_PROTO(ns, link, name)   link##_DECLARE(apr_array_header_t *) ns##_hook_get_##name(void)
#define 	APR_DECLARE_EXTERNAL_HOOK(ns, link, ret, name, args)
#define 	APR_HOOK_STRUCT(members)   static struct { members } _hooks;
#define 	APR_HOOK_LINK(name)   apr_array_header_t *link_##name;
#define 	APR_IMPLEMENT_EXTERNAL_HOOK_BASE(ns, link, name)
#define 	APR_IMPLEMENT_EXTERNAL_HOOK_VOID(ns, link, name, args_decl, args_use)
#define 	APR_IMPLEMENT_EXTERNAL_HOOK_RUN_ALL(ns, link, ret, name, args_decl, args_use, ok, decline)
#define 	APR_IMPLEMENT_EXTERNAL_HOOK_RUN_FIRST(ns, link, ret, name, args_decl, args_use, decline)
#define 	APR_HOOK_REALLY_FIRST   (-10)
#define 	APR_HOOK_FIRST   0
#define 	APR_HOOK_MIDDLE   10
#define 	APR_HOOK_LAST   20
#define 	APR_HOOK_REALLY_LAST   30

#define APLOG_USE_MODULE(foo) \
    extern module AP_MODULE_DECLARE_DATA foo##_module;                  \
    static int * const aplog_module_index = &(foo##_module.module_index)

#define SUEXEC_BIN  HTTPD_ROOT "/bin/suexec"
#define HTTPD_ROOT "/usr/local/apache"

#define 	APR_OPTIONAL_HOOK(ns, name, pfn, aszPre, aszSucc, nOrder)
#define 	APR_IMPLEMENT_OPTIONAL_HOOK_RUN_ALL(ns, link, ret, name, args_decl, args_use, ok, decline)

#define AUTHZ_PREFIX "AUTHORIZE_"

#define MOD_SESSION_USER "user"

#define MOD_SESSION_PW "pw"

#define APLOG_MARK     __FILE__,__LINE__,APLOG_MODULE_INDEX

#define APLOG_ERR        3

#define APLOGNO(n)              "AH" #n ": "

#undef __cplusplus

#define 	APR_IMPLEMENT_HOOK_GET_PROTO(ns, link, name)   link##_DECLARE(apr_array_header_t *) ns##_hook_get_##name(void)
#define 	APR_DECLARE_EXTERNAL_HOOK(ns, link, ret, name, args)

#define 	APR_OPTIONAL_FN_TYPE(name)   apr_OFN_##name##_t
#define 	APR_DECLARE_OPTIONAL_FN(ret, name, args)   typedef ret (APR_OPTIONAL_FN_TYPE(name)) args
#define 	APR_REGISTER_OPTIONAL_FN(name)
#define 	APR_RETRIEVE_OPTIONAL_FN(name)   (APR_OPTIONAL_FN_TYPE(name) *)apr_dynamic_fn_retrieve(#name)

#define 	AP_CORE_DECLARE(x)   x
#define 	AP_DECLARE_NONSTD(x)   x
#define 	AP_CORE_DECLARE_NONSTD(x)   x
#define 	AP_LUA_DECLARE(x)   x
#define 	APR_DECLARE(x)   x
#define 	APR_DECLARE_NONSTD(x)   x
#define 	APU_DECLARE(x)   x
#define 	APU_DECLARE_NONSTD(x)   x
#define 	PROXY_DECLARE(x)   x
#define 	DAV_DECLARE(x)   x
#define 	APREQ_DECLARE(x)   x
#define 	APREQ_DECLARE_PARSER(x)   x
#define 	AP_DECLARE_DATA
#define 	AP_MODULE_DECLARE_DATA
#define 	APR_DECLARE_DATA
#define 	APR_MODULE_DECLARE_DATA
#define 	APU_DECLARE_DATA
#define 	DAV_DECLARE_DATA
#define 	PROXY_DECLARE_DATA
#define 	AP_DECLARE_MODULE(foo)   module foo##_module
#define 	BOOL   int
#define 	STACK_OF(x)   x
#define 	MODSSL_D2I_SSL_SESSION_CONST
#define 	MODSSL_D2I_ASN1_type_bytes_CONST
#define 	MODSSL_D2I_PrivateKey_CONST
#define 	MODSSL_D2I_X509_CONST
#define 	MODSSL_SSL_CIPHER_CONST
#define 	MODSSL_SSL_METHOD_CONST

#define 	AP_DECLARE_STATIC
#define 	AP_DECLARE_EXPORT
#define 	AP_DECLARE_HOOK(ret, name, args)   APR_DECLARE_EXTERNAL_HOOK(ap,AP,ret,name,args)
#define 	AP_IMPLEMENT_HOOK_BASE(name)   APR_IMPLEMENT_EXTERNAL_HOOK_BASE(ap,AP,name)
#define 	AP_IMPLEMENT_HOOK_VOID(name, args_decl, args_use)   APR_IMPLEMENT_EXTERNAL_HOOK_VOID(ap,AP,name,args_decl,args_use)
#define 	AP_IMPLEMENT_HOOK_RUN_ALL(ret, name, args_decl, args_use, ok, decline)
#define 	AP_IMPLEMENT_HOOK_RUN_FIRST(ret, name, args_decl, args_use, decline)
#define 	AP_IMPLEMENT_OPTIONAL_HOOK_RUN_ALL(ret, name, args_decl, args_use, ok, decline)
#define 	AP_OPTIONAL_HOOK(name, fn, pre, succ, order)   APR_OPTIONAL_HOOK(ap,name,fn,pre,succ,order)

#define 	AP_DECLARE(type)   type
#define 	AP_DECLARE_NONSTD(type)   type
#define 	AP_DECLARE_DATA
#define 	AP_MODULE_DECLARE(type)   type
#define 	AP_MODULE_DECLARE_NONSTD(type)   type
#define 	AP_MODULE_DECLARE_DATA
#define 	DEFAULT_PIDLOG   DEFAULT_REL_RUNTIMEDIR "/httpd.pid"
#define 	__has_attribute(x)   0
#define 	AP_FN_ATTR_SENTINEL
#define 	AP_FN_ATTR_WARN_UNUSED_RESULT
#define 	AP_FN_ATTR_ALLOC_SIZE(x)
#define 	AP_FN_ATTR_ALLOC_SIZE2(x, y)

#define 	APR_INLINE
#define 	APR_HAS_INLINE   0
#define 	APR_HAVE_ARPA_INET_H   1
#define 	APR_HAVE_CONIO_H   0
#define 	APR_HAVE_CRYPT_H   1
#define 	APR_HAVE_CTYPE_H   1
#define 	APR_HAVE_DIRENT_H   1
#define 	APR_HAVE_ERRNO_H   1
#define 	APR_HAVE_FCNTL_H   1
#define 	APR_HAVE_IO_H   0
#define 	APR_HAVE_LIMITS_H   1
#define 	APR_HAVE_NETDB_H   1
#define 	APR_HAVE_NETINET_IN_H   1
#define 	APR_HAVE_NETINET_SCTP_H   0
#define 	APR_HAVE_NETINET_SCTP_UIO_H   0
#define 	APR_HAVE_NETINET_TCP_H   1
#define 	APR_HAVE_PTHREAD_H   1
#define 	APR_HAVE_SEMAPHORE_H   1
#define 	APR_HAVE_SIGNAL_H   1
#define 	APR_HAVE_STDARG_H   1
#define 	APR_HAVE_STDINT_H   1
#define 	APR_HAVE_STDIO_H   1
#define 	APR_HAVE_STDLIB_H   1
#define 	APR_HAVE_STRING_H   1
#define 	APR_HAVE_STRINGS_H   1
#define 	APR_HAVE_SYS_IOCTL_H   1
#define 	APR_HAVE_SYS_SENDFILE_H   1
#define 	APR_HAVE_SYS_SIGNAL_H   1
#define 	APR_HAVE_SYS_SOCKET_H   1
#define 	APR_HAVE_SYS_SOCKIO_H   0
#define 	APR_HAVE_SYS_SYSLIMITS_H   0
#define 	APR_HAVE_SYS_TIME_H   1
#define 	APR_HAVE_SYS_TYPES_H   1
#define 	APR_HAVE_SYS_UIO_H   1
#define 	APR_HAVE_SYS_UN_H   1
#define 	APR_HAVE_SYS_WAIT_H   1
#define 	APR_HAVE_TIME_H   1
#define 	APR_HAVE_UNISTD_H   1
#define 	APR_HAVE_SHMEM_MMAP_TMP   1
#define 	APR_HAVE_SHMEM_MMAP_SHM   1
#define 	APR_HAVE_SHMEM_MMAP_ZERO   1
#define 	APR_HAVE_SHMEM_SHMGET_ANON   1
#define 	APR_HAVE_SHMEM_SHMGET   1
#define 	APR_HAVE_SHMEM_MMAP_ANON   1
#define 	APR_HAVE_SHMEM_BEOS   0
#define 	APR_USE_SHMEM_MMAP_TMP   0
#define 	APR_USE_SHMEM_MMAP_SHM   0
#define 	APR_USE_SHMEM_MMAP_ZERO   0
#define 	APR_USE_SHMEM_SHMGET_ANON   0
#define 	APR_USE_SHMEM_SHMGET   1
#define 	APR_USE_SHMEM_MMAP_ANON   1
#define 	APR_USE_SHMEM_BEOS   0
#define 	APR_USE_FLOCK_SERIALIZE   0
#define 	APR_USE_SYSVSEM_SERIALIZE   1
#define 	APR_USE_POSIXSEM_SERIALIZE   0
#define 	APR_USE_FCNTL_SERIALIZE   0
#define 	APR_USE_PROC_PTHREAD_SERIALIZE   0
#define 	APR_USE_PTHREAD_SERIALIZE   1
#define 	APR_HAS_FLOCK_SERIALIZE   1
#define 	APR_HAS_SYSVSEM_SERIALIZE   1
#define 	APR_HAS_POSIXSEM_SERIALIZE   1
#define 	APR_HAS_FCNTL_SERIALIZE   1
#define 	APR_HAS_PROC_PTHREAD_SERIALIZE   1
#define 	APR_HAS_RWLOCK_SERIALIZE   0
#define 	APR_PROCESS_LOCK_IS_GLOBAL   0
#define 	APR_HAVE_CORKABLE_TCP   1
#define 	APR_HAVE_GETRLIMIT   1
#define 	APR_HAVE_IN_ADDR   1
#define 	APR_HAVE_INET_ADDR   1
#define 	APR_HAVE_INET_NETWORK   1
#define 	APR_HAVE_IPV6   1
#define 	APR_HAVE_MEMMOVE   1
#define 	APR_HAVE_SETRLIMIT   1
#define 	APR_HAVE_SIGACTION   1
#define 	APR_HAVE_SIGSUSPEND   1
#define 	APR_HAVE_SIGWAIT   1
#define 	APR_HAVE_STRCASECMP   1
#define 	APR_HAVE_STRDUP   1
#define 	APR_HAVE_STRICMP   0
#define 	APR_HAVE_STRNCASECMP   1
#define 	APR_HAVE_STRNICMP   0
#define 	APR_HAVE_STRSTR   1
#define 	APR_HAVE_MEMCHR   1
#define 	APR_HAVE_STRUCT_RLIMIT   1
#define 	APR_HAVE_UNION_SEMUN   0
#define 	APR_HAVE_SCTP   0
#define 	APR_HAS_SHARED_MEMORY   1
#define 	APR_HAS_THREADS   1
#define 	APR_HAS_SENDFILE   1
#define 	APR_HAS_MMAP   1
#define 	APR_HAS_FORK   1
#define 	APR_HAS_RANDOM   1
#define 	APR_HAS_OTHER_CHILD   1
#define 	APR_HAS_DSO   1
#define 	APR_HAS_SO_ACCEPTFILTER   0
#define 	APR_HAS_UNICODE_FS   0
#define 	APR_HAS_PROC_INVOKED   0
#define 	APR_HAS_USER   1
#define 	APR_HAS_LARGE_FILES   0
#define 	APR_HAS_XTHREAD_FILES   0
#define 	APR_HAS_OS_UUID   0
#define 	APR_FILES_AS_SOCKETS   1
#define 	APR_INADDR_NONE   INADDR_NONE
#define 	APR_CHARSET_EBCDIC   0
#define 	APR_TCP_NOPUSH_FLAG   TCP_CORK
#define 	APR_TCP_NODELAY_INHERITED   1
#define 	APR_O_NONBLOCK_INHERITED   0
#define 	APR_SIZEOF_VOIDP   4
#define 	APR_INT64_C(val)   INT64_C(val)
#define 	APR_THREAD_FUNC
#define 	APR_DECLARE(type)   type
#define 	APR_DECLARE_NONSTD(type)   type
#define 	APR_DECLARE_DATA
#define 	APR_SSIZE_T_FMT   "d"
#define 	APR_SIZE_T_FMT   "d"
#define 	APR_OFF_T_FMT   "ld"
#define 	APR_PID_T_FMT   "d"
#define 	APR_INT64_T_FMT   "lld"
#define 	APR_INT64_T_FMT_LEN   3
#define 	APR_UINT64_T_FMT   "llu"
#define 	APR_UINT64_T_FMT_LEN   3
#define 	APR_UINT64_T_HEX_FMT   "llx"
#define 	APR_UINT64_T_HEX_FMT_LEN   (sizeof(APR_UINT64_T_HEX_FMT) - 1)
#define 	APR_HAVE_INT64_STRFN   1
#define 	APR_INT64_STRFN   strtoll
#define 	APR_FORCE_ATOMIC_GENERIC   1
#define 	APR_PROC_MUTEX_IS_GLOBAL   0
#define 	APR_EOL_STR   "\n"
#define 	apr_wait_t   union wait
#define 	WEXITSTATUS(status)   (int)((status).w_retcode)
#define 	WTERMSIG(status)   (int)((status).w_termsig)

#define 	APR_ARRAY_IDX(ary, i, type)   (((type *)(ary)->elts)[i])
#define 	APR_ARRAY_PUSH(ary, type)   (*((type *)apr_array_push(ary)))
#define 	APR_OVERLAP_TABLES_SET   (0)
#define 	APR_OVERLAP_TABLES_MERGE   (1)


#define 	DAV_FS_STATE_DIR   ".DAV"
#define 	DAV_FS_STATE_FILE_FOR_DIR   ".state_for_dir"
#define 	DAV_FS_LOCK_NULL_FILE   ".locknull"
#define 	DAV_VERSION   AP_SERVER_BASEREVISION
#define 	DAV_XML_HEADER   "<?xml version=\"1.0\" encoding=\"utf-8\"?>"
#define 	DAV_XML_CONTENT_TYPE   "text/xml; charset=\"utf-8\""
#define 	DAV_READ_BLOCKSIZE   2048
#define 	DAV_RESPONSE_BODY_1   "<!DOCTYPE HTML PUBLIC \"-//IETF//DTD HTML 2.0//EN\">\n<html><head>\n<title>"
#define 	DAV_RESPONSE_BODY_2   "</title>\n</head><body>\n<h1>"
#define 	DAV_RESPONSE_BODY_3   "</h1>\n<p>"
#define 	DAV_RESPONSE_BODY_4   "</p>\n"
#define 	DAV_RESPONSE_BODY_5   "</body></html>\n"
#define 	DAV_DO_COPY   0
#define 	DAV_DO_MOVE   1
#define 	DAV_DEBUG   1
#define 	DEBUG_CR   "\n"
#define 	DBG0(f)
#define 	DBG1(f, a1)
#define 	DBG2(f, a1, a2)
#define 	DBG3(f, a1, a2, a3)
#define 	DAV_INFINITY   INT_MAX
#define 	DAV_DECLARE(type)   type
#define 	DAV_DECLARE_NONSTD(type)   type
#define 	DAV_DECLARE_DATA
#define 	DAV_ERR_IF_PARSE   100
#define 	DAV_ERR_IF_MULTIPLE_NOT   101
#define 	DAV_ERR_IF_UNK_CHAR   102
#define 	DAV_ERR_IF_ABSENT   103
#define 	DAV_ERR_IF_TAGGED   104
#define 	DAV_ERR_IF_UNCLOSED_PAREN   105
#define 	DAV_ERR_PROP_BAD_MAJOR   200
#define 	DAV_ERR_PROP_READONLY   201
#define 	DAV_ERR_PROP_NO_DATABASE   202
#define 	DAV_ERR_PROP_NOT_FOUND   203
#define 	DAV_ERR_PROP_BAD_LOCKDB   204
#define 	DAV_ERR_PROP_OPENING   205
#define 	DAV_ERR_PROP_EXEC   206
#define 	DAV_ERR_LOCK_OPENDB   400
#define 	DAV_ERR_LOCK_NO_DB   401
#define 	DAV_ERR_LOCK_CORRUPT_DB   402
#define 	DAV_ERR_LOCK_UNK_STATE_TOKEN   403
#define 	DAV_ERR_LOCK_PARSE_TOKEN   404
#define 	DAV_ERR_LOCK_SAVE_LOCK   405
#define 	DAV_BUFFER_MINSIZE   256
#define 	DAV_BUFFER_PAD   64
#define 	DAV_STYLE_ISO8601   1
#define 	DAV_STYLE_RFC822   2
#define 	DAV_TIMEBUF_SIZE   30
#define 	DAV_GET_HOOKS_PROPDB(r)   dav_get_propdb_hooks(r)
#define 	DAV_GET_HOOKS_LOCKS(r)   dav_get_lock_hooks(r)
#define 	DAV_GET_HOOKS_VSN(r)   dav_get_vsn_hooks(r)
#define 	DAV_GET_HOOKS_BINDING(r)   dav_get_binding_hooks(r)
#define 	DAV_GET_HOOKS_SEARCH(r)   dav_get_search_hooks(r)
#define 	DAV_PROPID_CORE   10000
#define 	DAV_PROPID_FS   10100
#define 	DAV_PROPID_TEST1   10300
#define 	DAV_PROPID_TEST2   10400
#define 	DAV_PROPID_TEST3   10500
#define 	DAV_TIMEOUT_INFINITE   0
#define 	DAV_VALIDATE_RESOURCE   0x0010
#define 	DAV_VALIDATE_PARENT   0x0020
#define 	DAV_VALIDATE_ADD_LD   0x0040
#define 	DAV_VALIDATE_USE_424   0x0080
#define 	DAV_VALIDATE_IS_PARENT   0x0100
#define 	DAV_RESOURCE_LOCK_NULL   10
#define 	DAV_RESOURCE_NULL   11
#define 	DAV_RESOURCE_EXISTS   12
#define 	DAV_RESOURCE_ERROR   13
#define 	DAV_PROP_CTX_HAS_ERR(dpc)   ((dpc).err && (dpc).err->status >= 300)
#define 	DAV_OPTIONS_EXTENSION_GROUP   "dav_options"
#define 	DAV_RESOURCE_TYPE_GROUP   "dav_resource_type"
