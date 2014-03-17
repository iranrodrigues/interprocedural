#define CHEROKEE_BEGIN_DECLS
#define CHEROKEE_END_DECLS

#define LIST(l) ((cherokee_list_t *)(l))

#define INIT_LIST_HEAD(ptr) do {     \
		(ptr)->next = (ptr); \
		(ptr)->prev = (ptr); \
	} while (0)

#define LIST_HEAD_INIT(ptr) { &(ptr), &(ptr) }

#define list_for_each(pos, head) \
	for (pos = (head)->next; pos != (head); pos = pos->next)

#define list_for_each_safe(pos, n, head) \
	for (pos = (head)->next, n = pos->next; pos != (head); pos = n, n = pos->next)

#define list_entry(ptr, type, member) \
	((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))

#define list_next_circular(list,item) \
	(((item)->next == (list)) ? (list)->next : (item)->next)

#define CHEROKEE_CONFIG_ARGS

#define CHEROKEE_DATADIR
#define CHEROKEE_ICONSDIR
#define CHEROKEE_THEMEDIR
#define CHEROKEE_PLUGINDIR
#define TMPDIR
#define CHEROKEE_DEPSDIR

#define CHEROKEE_NEW_TYPE(obj,type) \
	type * obj = (type *) malloc(sizeof(type)); \
	return_if_fail (obj != NULL, ret_nomem)

#define LF_LF     "\n\n"        /* EOHs (End Of Headers) */
#define CRLF_CRLF "\r\n\r\n"    /* EOHs (End Of Headers) */
#define CRLF      "\r\n"        /* EOH (End Of Header Line) */
#define LWS       " \t\r\n"     /* HTTP linear white space */
#define LBS       " \t"         /* HTTP linear blank space */
#define CHR_CR    '\r'          /* 0x0D: Carriage return */
#define CHR_LF    '\n'          /* 0x0A: Line feed (new line) */
#define CHR_SP    ' '           /* Space */
#define CHR_HT    '\t'          /* Horizontal tab */

#define PACKAGE_VERSION '2'

#define PLUGIN_INFO_VALIDATOR_EASIEST_INIT(name,methods)            \
	PLUGIN_EMPTY_INIT_FUNCTION(name)                            \
	PLUGIN_INFO_VALIDATOR_EASY_INIT(name,methods)

#define VALIDATOR_CONF_PROTOTYPE(name)                              \
	ret_t cherokee_validator_ ## name ## _configure (           \
		cherokee_config_node_t   *,                         \
		cherokee_server_t        *,                         \
	 	cherokee_module_props_t **)

#define PACKAGE_MAJOR_VERSION
#define PACKAGE_MINOR_VERSION
#define PACKAGE_MICRO_VERSION
#define PACKAGE_PATCH_VERSION
#define OS_TYPE

#define PLUGIN_INFO_VALIDATOR_EASY_INIT(name,methods)               \
	VALIDATOR_CONF_PROTOTYPE(name);

#define PLUGIN_EMPTY_INIT_FUNCTION(name)                            \
	void                                                        \
	PLUGIN_INIT_NAME(name) (cherokee_plugin_loader_t *loader)   \
	{                                                           \
		UNUSED(loader);					    \
	}

#define PCRE_SPTR const char *

#define PCRE_EXP_DECL  extern

#define PCRE_EXP_DEFN       PCRE_EXP_DECL

#define USPTR const unsigned char *

#define MOD_SUFFIX

#  define TRACE(section,fmt,arg...) do { } while(0)

#define PLUGIN_INFO_RULE_EASIEST_INIT(name)                      \
	PLUGIN_EMPTY_INIT_FUNCTION(name)                         \
	PLUGIN_INFO_RULE_EASY_INIT(name)

#define PLUGIN_INIT_NAME(name)  cherokee_plugin_ ## name ## _init
#define PLUGIN_IS_INIT(name)    _## name ##_is_init

#define PLUGIN_INIT_PROTOTYPE(name)         			    \
	static cherokee_boolean_t PLUGIN_IS_INIT(name) = false;     \
        void                                                        \
	PLUGIN_INIT_NAME(name) (cherokee_plugin_loader_t *loader)

#define PLUGIN_INIT_ONCE_CHECK(name)         		            \
	if (PLUGIN_IS_INIT(name))				    \
		return;						    \
	PLUGIN_IS_INIT(name) = true

#define PLUGIN_EMPTY_INIT_FUNCTION(name)                            \
	void                                                        \
	PLUGIN_INIT_NAME(name) (cherokee_plugin_loader_t *loader)   \
	{                                                           \
		UNUSED(loader);					    \
	}


#define PLUGIN_INFO_RULE_EASY_INIT(name)                         \
	PLUGIN_INFO_INIT(name, cherokee_rule,                    \
		(void *)cherokee_rule_ ## name ## _new,          \
		(void *)NULL)

#define PLUGIN_INFO_RULE_EASIEST_INIT(name)                      \
	PLUGIN_EMPTY_INIT_FUNCTION(name)                         \
	PLUGIN_INFO_RULE_EASY_INIT(name)


#define PLUGIN_INFO_NAME(name)       cherokee_ ## name ## _info
#define PLUGIN_INFO_PTR(name)        PLUGIN_INFO(&PLUGIN_INFO_NAME(name))
#define PLUGIN_INFO_HANDLER_PTR(x)   PLUGIN_INFO_HANDLER(&PLUGIN_INFO_NAME(x))
#define PLUGIN_INFO_VALIDATOR_PTR(x) PLUGIN_INFO_VALIDATOR(&PLUGIN_INFO_NAME(x))

#define PLUGIN_INFO_INIT(name, type, func, conf)                    \
 	cherokee_plugin_info_t                                      \
	        PLUGIN_INFO_NAME(name) =   	                    \
		{	type,	 		  	  	    \
			func,		 			    \
			conf,                                       \
			#name                                       \
		}

#define PCRE_EXP_DATA_DEFN

#define CUSTOM_SUBJECT_PTR

#define PCRE_EXP_DECL       extern

#define CHEROKEE_CONFDIR
#define CHEROKEE_VAR_RUN
#define PACKAGE_BUGREPORT

#define PLUGIN_INIT_NAME(name)  cherokee_plugin_ ## name ## _init
#define PLUGIN_IS_INIT(name)    _## name ##_is_init

#define PLUGIN_INIT_PROTOTYPE(name)         			    \
	static cherokee_boolean_t PLUGIN_IS_INIT(name) = false;     \
        void                                                        \
	PLUGIN_INIT_NAME(name) (cherokee_plugin_loader_t *loader)

#define PLUGIN_INIT_ONCE_CHECK(name)         		            \
	if (PLUGIN_IS_INIT(name))				    \
		return;						    \
	PLUGIN_IS_INIT(name) = true

#define PLUGIN_EMPTY_INIT_FUNCTION(name)                            \
	void                                                        \
	PLUGIN_INIT_NAME(name) (cherokee_plugin_loader_t *loader)   \
	{                                                           \
		UNUSED(loader);					    \
	}

# define CGI_LIB_INIT(name, methods) \
	PLUGIN_INFO_HANDLER_EASY_INIT (name, (methods))

#  define NORETURN

#define PLUGIN_INFO_HANDLER_EASIEST_INIT(name, methods)             \
	PLUGIN_EMPTY_INIT_FUNCTION(name)                            \
	PLUGIN_INFO_HANDLER_EASY_INIT(name, methods)

#define PLUGIN_INFO_HANDLER_EASY_INIT(name, methods)                \
	HANDLER_CONF_PROTOTYPE(name);

#undef __cplusplus


#define hidden_def(name)      __hidden_ver1(__GI_##name, name, name);
#define libc_hidden_def(name) hidden_def (name)

typedef struct {} md5byte;

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
typedef struct {} ret_t;
typedef struct {} cuint_t;
typedef struct {} cherokee_buffer_t;
typedef struct {} clong_t;
typedef struct {} cllong_t;
typedef struct {} culong_t;
typedef struct {} cullong_t;
typedef struct {} cint_t;
typedef struct {} crc_t;
typedef struct {} cherokee_http_method_t;
typedef struct {} cherokee_http_version_t;
typedef struct {} cherokee_http_t;
typedef struct {} cherokee_plugin_type_t;
typedef struct {} cherokee_plugin_info_t;
typedef struct {} cherokee_http_auth_t;
typedef struct {} cherokee_list_t;
typedef struct {} cherokee_list_entry_t;
typedef struct {} cherokee_list_free_func;
typedef struct {} cherokee_config_node_t;
typedef struct {} cherokee_config_node_while_func_t;
typedef struct {} cherokee_boolean_t;
typedef struct {} cherokee_config_node_list_func_t;
typedef struct {} cherokee_server_t;
typedef struct {} module_func_props_free_t;
typedef struct {} cherokee_module_props_t;
typedef struct {} module_func_new_t;
typedef struct {} module_func_free_t;
typedef struct {} cherokee_module_t;
typedef struct {} cherokee_logger_writer_types_t;
typedef struct {} cherokee_logger_writer_t;
typedef struct {} logger_func_flush_t;
typedef struct {} logger_func_reopen_t;
typedef struct {} logger_func_write_access_t;
typedef struct {} cherokee_logger_t;
typedef struct {} cherokee_error_type_t;
typedef struct {} __int32_t;
typedef struct {} __DARWIN_NFDBITS;
typedef struct {} gid_t;
typedef struct {} key_t;
typedef struct {} time_t;
typedef struct {} ino_t;
typedef struct {} nlink_t;
typedef struct {} __DARWIN_STRUCT_STAT64;
typedef struct {} filesec_t;
typedef struct {} filesec_property_t;
typedef struct {} clock_t;
typedef struct {} useconds_t;
typedef struct {} fd_set;
typedef struct {} uuid_t;
typedef struct {} __darwin_rune_t;
typedef struct {} _RuneEntry;
typedef struct {} _RuneRange;
typedef struct {} _RuneCharClass;
typedef struct {} _RuneLocale;
typedef struct {} __darwin_ct_rune_t;
typedef struct {} cherokee_null_bool_t;
typedef struct {} uuid_string_t;
typedef struct {} tcflag_t;
typedef struct {} cc_t;
typedef struct {} speed_t;
typedef struct {} cherokee_url_t;
typedef struct {} cherokee_header_t;
typedef struct {} cherokee_header_type_t;
typedef struct {} cherokee_header_foreach_func_t;
typedef struct {} cherokee_common_header_t;
typedef struct {} cherokee_poll_type_t;
typedef struct {} cherokee_fdpoll_t;
typedef struct {} uint16_t;
typedef struct {} cherokee_request_header_t;
typedef struct {} sa_family_t;
typedef struct {} _SS_PAD1SIZE;
typedef struct {} __int64_t;
typedef struct {} _SS_PAD2SIZE;
typedef struct {} socklen_t;
typedef struct {} in_addr_t;
typedef struct {} in_port_t;
typedef struct {} uint32_t;
typedef struct {} cherokee_avl_generic_node_t;
typedef struct {} cherokee_avl_generic_t;
typedef struct {} avl_gen_node_mrproper_t;
typedef struct {} avl_gen_node_cmp_t;
typedef struct {} avl_gen_node_is_empty_t;
typedef struct {} cherokee_func_free_t;
typedef struct {} cherokee_avl_generic_while_func_t;
typedef struct {} cherokee_avl_t;
typedef struct {} cherokee_avl_while_func_t;
typedef struct {} handler_func_read_post_t;
typedef struct {} handler_func_add_headers_t;
typedef struct {} handler_func_step_t;
typedef struct {} cherokee_handler_support_t;
typedef struct {} cherokee_handler_t;
typedef struct {} cherokee_handler_props_t;
typedef struct {} cherokee_plugin_info_handler_t;
typedef struct {} cherokee_connection_t;
typedef struct {} validator_func_check_t;
typedef struct {} validator_func_add_headers_t;
typedef struct {} cherokee_validator_t;
typedef struct {} cherokee_validator_props_t;
typedef struct {} cherokee_plugin_info_validator_t;
typedef struct {} cherokee_encoder_perms_t;
typedef struct {} encoder_func_new_t;
typedef struct {} encoder_func_add_headers_t;
typedef struct {} encoder_func_encode_t;
typedef struct {} encoder_func_flush_t;
typedef struct {} cherokee_encoder_t;
typedef struct {} cherokee_encoder_props_t;
typedef struct {} cherokee_flcache_status_t;
typedef struct {} cherokee_avl_flcache_t;
typedef struct {} cherokee_avl_flcache_node_t;
typedef struct {} cherokee_flcache_mode_t;
typedef struct {} cherokee_flcache_t;
typedef struct {} cherokee_flcache_conn_t;
typedef struct {} handler_func_new_t;
typedef struct {} validator_func_new_t;
typedef struct {} cherokee_expiration_t;
typedef struct {} cherokee_expiration_props_t;
typedef struct {} cherokee_flcache_policy_t;
typedef struct {} cherokee_null_int_t;
typedef struct {} cherokee_config_entry_t;
typedef struct {} cherokee_config_entry_ref_t;
typedef struct {} rule_func_match_t;
typedef struct {} rule_func_configure_t;
typedef struct {} cherokee_rule_t;
typedef struct {} cherokee_rule_list_t;
typedef struct {} cryptor_func_configure_t;
typedef struct {} cryptor_func_vserver_new_t;
typedef struct {} cryptor_func_socket_new_t;
typedef struct {} cryptor_func_client_new_t;
typedef struct {} cryptor_vsrv_func_free_t;
typedef struct {} cryptor_socket_func_free_t;
typedef struct {} cryptor_socket_func_clean_t;
typedef struct {} cryptor_socket_func_init_tls_t;
typedef struct {} cryptor_socket_func_shutdown_t;
typedef struct {} cryptor_socket_func_read_t;
typedef struct {} cryptor_socket_func_write_t;
typedef struct {} cryptor_socket_func_pending_t;
typedef struct {} cherokee_cryptor_socket_t;
typedef struct {} cherokee_cryptor_t;
typedef struct {} cherokee_cryptor_vserver_t;
typedef struct {} cherokee_cryptor_client_t;
typedef struct {} vrule_func_match_t;
typedef struct {} vrule_func_configure_t;
typedef struct {} cherokee_vrule_t;
typedef struct {} cherokee_tem_repl_func_t;
typedef struct {} cherokee_template_t;
typedef struct {} cherokee_template_token_t;
typedef struct {} cherokee_plugin_loader_t;
typedef struct {} evhost_func_droot_t;
typedef struct {} cherokee_generic_evhost_t;
typedef struct {} collector_func_free_t;
typedef struct {} cherokee_collector_base_t;
typedef struct {} collector_func_new_vsrv_t;
typedef struct {} collector_func_init_t;
typedef struct {} cherokee_collector_t;
typedef struct {} collector_vsrv_func_init_t;
typedef struct {} cherokee_collector_vsrv_t;
typedef struct {} cherokee_virtual_server_t;
typedef struct {} cherokee_sockaddr_t;
typedef struct {} cherokee_socket_status_t;
typedef struct {} cherokee_socket_type_t;
typedef struct {} cherokee_socket_t;
typedef struct {} cherokee_post_encoding_t;
typedef struct {} cherokee_post_rh_phase_t;
typedef struct {} cherokee_post_send_phase_t;
typedef struct {} cherokee_post_t;
typedef struct {} cherokee_downloader_t;
typedef struct {} cherokee_downloader_status_t;
typedef struct {} cherokee_downloader_phase_t;
typedef struct {} cherokee_header_entry_t;
typedef struct {} cherokee_header_unknown_entry_t;
typedef struct {} cherokee_access_t;
typedef struct {} __DARWIN_STRUCT_DIRENTRY;
typedef struct {} __darwin_pthread_mutex_t;
typedef struct {} DIR;
typedef struct {} cherokee_cache_new_func_t;
typedef struct {} cherokee_cache_get_stats_t;
typedef struct {} cherokee_cache_priv_t;
typedef struct {} cherokee_cache_list_t;
typedef struct {} cherokee_cache_t;
typedef struct {} cherokee_cache_entry_clean_t;
typedef struct {} cherokee_cache_entry_fetch_t;
typedef struct {} cherokee_cache_entry_free_t;
typedef struct {} cherokee_cache_entry_t;
typedef struct {} cherokee_iocache_info_t;
typedef struct {} cherokee_iocache_t;
typedef struct {} cherokee_iocache_entry_t;
typedef struct {} cherokee_resolv_cache_t;
typedef struct {} ip_type_t;
typedef struct {} ip_t;
typedef struct {} ip_item_t;
typedef struct {} subnet_item_t;
typedef struct {} cherokee_dwriter_state_t;
typedef struct {} cherokee_dwriter_lang_t;
typedef struct {} cherokee_dwriter_t;
typedef struct {} cherokee_handler_admin_t;
typedef struct {} pthread_t;
typedef struct {} stack_t;
typedef struct {} cherokee_server_token_t;
typedef struct {} cherokee_bind_t;
typedef struct {} pcre_callout_block;
typedef struct {} pcre;
typedef struct {} pcre_extra;
typedef struct {} cherokee_regex_table_t;
typedef struct {} bogotime_callback_t;
typedef struct {} cherokee_http_upgrade_t;
typedef struct {} cherokee_connection_options_t;
typedef struct {} cherokee_connection_phase_t;
typedef struct {} cherokee_msec_t;
typedef struct {} cherokee_limiter_t;
typedef struct {} cherokee_thread_type_t;
typedef struct {} cherokee_thread_t;
typedef struct {} cherokee_icons_t;
typedef struct {} cherokee_nonce_table_t;
typedef struct {} cherokee_mime_entry_t;
typedef struct {} cherokee_mime_t;
typedef struct {} post_track_configure_t;
typedef struct {} post_track_register_t;
typedef struct {} post_track_unregister_t;
typedef struct {} cherokee_post_track_t;
typedef struct {} cherokee_connection_info_t;
typedef struct {} cherokee_source_type_t;
typedef struct {} cherokee_source_t;
typedef struct {} cherokee_source_interpreter_spawn_t;
typedef struct {} cherokee_source_interpreter_t;
typedef struct {} cherokee_avl_node_t;
typedef struct {} TIME_MAX;
typedef struct {} CHEROKEE_MUTEX_T;
typedef struct {} CHEROKEE_RWLOCK_T;
typedef struct {} cherokee_avl_r_t;
typedef struct {} balancer_configure_func_t;
typedef struct {} balancer_dispatch_func_t;
typedef struct {} balancer_report_fail_func_t;
typedef struct {} cherokee_balancer_t;
typedef struct {} cherokee_balancer_entry_t;
typedef struct {} balancer_new_func_t;
typedef struct {} cherokee_balancer_failover_t;
typedef struct {} cherokee_balancer_ip_hash_t;
typedef struct {} cherokee_balancer_round_robin_t;
typedef struct {} on;
typedef struct {} callback_entry_t;
typedef struct {} UWORD32;
typedef struct {} SHA_INFO;
typedef struct {} SHA512_CTX;
typedef struct {} cuchar_t;
typedef struct {} pthread_mutex_t;
typedef struct {} priv_t;
typedef struct {} cherokee_collector_rrd_interval_t;
typedef struct {} cherokee_rrd_connection_t;
typedef struct {} cherokee_collector_rrd_t;
typedef struct {} cherokee_collector_vsrv_rrd_t;
typedef struct {} Dl_info;
typedef struct {} intmax_t;
typedef struct {} imaxdiv_t;
typedef struct {} uintmax_t;
typedef struct {} pthread_cond_t;
typedef struct {} pthread_condattr_t;
typedef struct {} pthread_key_t;
typedef struct {} pthread_mutexattr_t;
typedef struct {} pthread_once_t;
typedef struct {} pthread_rwlock_t;
typedef struct {} pthread_rwlockattr_t;
typedef struct {} mach_port_t;
typedef struct {} cherokee_header_op_type_t;
typedef struct {} cherokee_header_op_t;
typedef struct {} tcp_seq;
typedef struct {} cherokee_handler_error_t;
typedef struct {} int16_t;
typedef struct {} cherokee_handler_file_props_t;
typedef struct {} cherokee_handler_file_t;
typedef struct {} STACK;
typedef struct {} CRYPTO_EX_DATA;
typedef struct {} CRYPTO_EX_new;
typedef struct {} CRYPTO_EX_free;
typedef struct {} CRYPTO_EX_dup;
typedef struct {} CRYPTO_EX_DATA_IMPL;
typedef struct {} CRYPTO_MEM_LEAK_CB;
typedef struct {} BIO;
typedef struct {} bio_info_cb;
typedef struct {} BIO_METHOD;
typedef struct {} LHASH_NODE;
typedef struct {} LHASH_COMP_FN_TYPE;
typedef struct {} LHASH_HASH_FN_TYPE;
typedef struct {} LHASH;
typedef struct {} LHASH_DOALL_FN_TYPE;
typedef struct {} LHASH_DOALL_ARG_FN_TYPE;
typedef struct {} COMP_CTX;
typedef struct {} COMP_METHOD;
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
typedef struct {} cherokee_cryptor_libssl_t;
typedef struct {} cherokee_cryptor_vserver_libssl_t;
typedef struct {} cherokee_cryptor_socket_libssl_t;
typedef struct {} cherokee_cryptor_client_libssl_t;
typedef struct {} cryptor_client_func_init_t;
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
typedef struct {} cherokee_downloader_async_t;
typedef struct {} DtmNameLen_t;
typedef struct {} encoder_func_init_t;
typedef struct {} Byte;
typedef struct {} uInt;
typedef struct {} uLong;
typedef struct {} z_streamp;
typedef struct {} z_stream;
typedef struct {} cherokee_encoder_deflate_t;
typedef struct {} cherokee_encoder_deflate_props_t;
typedef struct {} cchar_t;
typedef struct {} cherokee_encoder_gzip_t;
typedef struct {} cherokee_encoder_gzip_props_t;
typedef struct {} cherokee_error_t;
typedef struct {} FCGI_Header;
typedef struct {} FCGI_BeginRequestBody;
typedef struct {} FCGI_EndRequestBody;
typedef struct {} FCGI_UnknownTypeBody;
typedef struct {} fdpoll_func_free_t;
typedef struct {} fdpoll_func_add_t;
typedef struct {} fdpoll_func_del_t;
typedef struct {} fdpoll_func_reset_t;
typedef struct {} fdpoll_func_set_mode_t;
typedef struct {} fdpoll_func_check_t;
typedef struct {} fdpoll_func_watch_t;
typedef struct {} cherokee_fdpoll_epoll_t;
typedef struct {} uintptr_t;
typedef struct {} intptr_t;
typedef struct {} uint64_t;
typedef struct {} int64_t;
typedef struct {} cherokee_fdpoll_kqueue_t;
typedef struct {} nfds_t;
typedef struct {} cherokee_fdpoll_poll_t;
typedef struct {} port_event_t;
typedef struct {} cherokee_fdpoll_port_t;
typedef struct {} uint_t;
typedef struct {} cherokee_fdpoll_select_t;
typedef struct {} wint_t;
typedef struct {} wctype_t;
typedef struct {} mbstate_t;
typedef struct {} __darwin_va_list;
typedef struct {} handler_func_init_t;
typedef struct {} module_func_init_t;
typedef struct {} cherokee_x_real_ip_t;
typedef struct {} cherokee_handler_cgi_base_t;
typedef struct {} cherokee_handler_cgi_base_phase_t;
typedef struct {} cherokee_handler_cgi_base_add_env_pair_t;
typedef struct {} cherokee_handler_cgi_base_read_from_cgi_t;
typedef struct {} cherokee_handler_cgi_base_props_t;
typedef struct {} cherokee_handler_cgi_t;
typedef struct {} cherokee_handler_cgi_props_t;
typedef struct {} PROCESS_INFORMATION;
typedef struct {} STARTUPINFO;
typedef struct {} SECURITY_ATTRIBUTES;
typedef struct {} HANDLE;
typedef struct {} LONG;
typedef struct {} env_item_t;
typedef struct {} cherokee_dirlist_sort_t;
typedef struct {} cherokee_dirlist_phase_t;
typedef struct {} cherokee_handler_dirlist_props_t;
typedef struct {} cherokee_handler_dirlist_t;
typedef struct {} cherokee_handler_common_props_t;
typedef struct {} cherokee_handler_custom_error_props_t;
typedef struct {} MYSQL;
typedef struct {} cherokee_handler_dbslayer_t;
typedef struct {} cherokee_handler_dbslayer_props_t;
typedef struct {} MYSQL_RES;
typedef struct {} MYSQL_ROW;
typedef struct {} MYSQL_FIELD;
typedef struct {} file_match_t;
typedef struct {} file_entry_t;
typedef struct {} cherokee_handler_empty_gif_t;
typedef struct {} cherokee_handler_redir_t;
typedef struct {} error_entry_t;
typedef struct {} cherokee_handler_error_redir_props_t;
typedef struct {} cherokee_handler_fcgi_post_t;
typedef struct {} cherokee_handler_fcgi_t;
typedef struct {} cherokee_handler_fcgi_props_t;
typedef struct {} cushort_t;
typedef struct {} FCGI_BeginRequestRecord;
typedef struct {} cherokee_handler_post_report_t;
typedef struct {} cherokee_handler_post_report_props_t;
typedef struct {} cherokee_handler_proxy_poll_t;
typedef struct {} cherokee_handler_proxy_enc_t;
typedef struct {} cherokee_handler_proxy_hosts_t;
typedef struct {} cherokee_handler_proxy_conn_t;
typedef struct {} cherokee_handler_proxy_init_phase_t;
typedef struct {} cherokee_handler_proxy_t;
typedef struct {} cherokee_header_add_t;
typedef struct {} cherokee_handler_proxy_props_t;
typedef struct {} cherokee_regex_entry_t;
typedef struct {} cherokee_handler_redir_props_t;
typedef struct {} cherokee_handler_render_rrd_t;
typedef struct {} cherokee_handler_render_rrd_props_t;
typedef struct {} cherokee_handler_scgi_t;
typedef struct {} cherokee_handler_scgi_props_t;
typedef struct {} cherokee_handler_secdownload_props_t;
typedef struct {} cherokee_handler_server_info_t;
typedef struct {} cherokee_handler_server_info_props_t;
typedef struct {} cherokee_plugin_loader_entry_t;
typedef struct {} cherokee_handler_ssi_t;
typedef struct {} cherokee_handler_ssi_props_t;
typedef struct {} operations_t;
typedef struct {} path_type_t;
typedef struct {} cherokee_handler_streaming_t;
typedef struct {} cherokee_handler_streaming_props_t;
typedef struct {} AVPacket;
typedef struct {} AVFormatContext;
typedef struct {} uint8_t;
typedef struct {} cherokee_handler_uwsgi_t;
typedef struct {} cherokee_handler_uwsgi_props_t;
typedef struct {} uwsgi_header;
typedef struct {} file_matching_t;
typedef struct {} sem_t;
typedef struct {} cherokee_shm_t;
typedef struct {} logger_func_init_t;
typedef struct {} cherokee_logger_ncsa_t;
typedef struct {} logger_func_free_t;
typedef struct {} cherokee_logger_custom_t;
typedef struct {} CHEROKEE_WORKER;
typedef struct {} char_varying;
typedef struct {} module_info;
typedef struct {} au_id_t;
typedef struct {} au_mask_t;
typedef struct {} au_tid_t;
typedef struct {} au_asid_t;
typedef struct {} au_tid_addr_t;
typedef struct {} au_asflgs_t;
typedef struct {} auditinfo_addr_t;
typedef struct {} u_int64_t;
typedef struct {} au_event_t;
typedef struct {} au_class_t;
typedef struct {} mach_port_rights_t;
typedef struct {} mach_port_seqno_t;
typedef struct {} mach_port_mscount_t;
typedef struct {} mach_port_msgcount_t;
typedef struct {} boolean_t;
typedef struct {} natural_t;
typedef struct {} mach_port_name_t;
typedef struct {} u_long;
typedef struct {} u_int;
typedef struct {} caddr_t;
typedef struct {} fixpt_t;
typedef struct {} u_quad_t;
typedef struct {} u_char;
typedef struct {} u_short;
typedef struct {} int32_t;
typedef struct {} segsz_t;
typedef struct {} entry_t;
typedef struct {} jmp_buf;
typedef struct {} sigjmp_buf;
typedef struct {} pcre_uint32;
typedef struct {} pcre_uint16;
typedef struct {} uschar;
typedef struct {} BOOL;
typedef struct {} eptrblock;
typedef struct {} recursion_info;
typedef struct {} ucp_type_table;
typedef struct {} real_pcre;
typedef struct {} pcre_study_data;
typedef struct {} verbitem;
typedef struct {} branch_chain;
typedef struct {} compile_data;
typedef struct {} match_data;
typedef struct {} heapframe;
typedef struct {} cherokee_post_track_entry_t;
typedef struct {} cherokee_resolv_cache_entry_t;
typedef struct {} cherokee_rule_and_t;
typedef struct {} cherokee_rule_bind_t;
typedef struct {} cherokee_rule_default_t;
typedef struct {} cherokee_rule_directory_t;
typedef struct {} cherokee_rule_exists_t;
typedef struct {} cherokee_rule_extensions_t;
typedef struct {} cherokee_rule_from_t;
typedef struct {} cherokee_rule_fullpath_t;
typedef struct {} GeoIP;
typedef struct {} cherokee_rule_geoip_t;
typedef struct {} cherokee_rule_header_type_t;
typedef struct {} cherokee_rule_header_t;
typedef struct {} cherokee_rule_method_t;
typedef struct {} cherokee_rule_not_t;
typedef struct {} cherokee_rule_or_t;
typedef struct {} cherokee_rule_request_t;
typedef struct {} cherokee_rule_tls_t;
typedef struct {} cherokee_rule_url_arg_t;
typedef struct {} cryptor_func_new_t;
typedef struct {} collector_func_new_t;
typedef struct {} post_track_new_t;
typedef struct {} U8;
typedef struct {} ULONG;
typedef struct {} INADDR_ANY;
typedef struct {} cherokee_template_replacement_t;
typedef struct {} cherokee_trace_t;
typedef struct {} TCHAR;
typedef struct {} WORD;
typedef struct {} LPCTSTR;
typedef struct {} DWORD;
typedef struct {} RLIM_INFINITY;
typedef struct {} FIONBIO;
typedef struct {} cherokee_validator_authlist_t;
typedef struct {} cherokee_validator_authlist_props_t;
typedef struct {} cherokee_validator_path_t;
typedef struct {} cherokee_validator_file_t;
typedef struct {} cherokee_validator_file_props_t;
typedef struct {} cherokee_validator_htdigest_t;
typedef struct {} cherokee_validator_htdigest_props_t;
typedef struct {} cherokee_validator_htpasswd_t;
typedef struct {} cherokee_validator_htpasswd_props_t;
typedef struct {} BER_MEMALLOC_FN;
typedef struct {} BER_MEMCALLOC_FN;
typedef struct {} BER_MEMREALLOC_FN;
typedef struct {} BER_MEMFREE_FN;
typedef struct {} Sockbuf;
typedef struct {} Sockbuf_IO;
typedef struct {} Sockbuf_IO_Desc;
typedef struct {} ber_slen_t;
typedef struct {} ber_len_t;
typedef struct {} ldap_sync_search_entry_f;
typedef struct {} ldap_sync_search_reference_f;
typedef struct {} ldap_sync_intermediate_f;
typedef struct {} ldap_sync_search_result_f;
typedef struct {} LDAP;
typedef struct {} ldap_sync_refresh_t;
typedef struct {} ldap_conn_add_f;
typedef struct {} ldap_conn_del_f;
typedef struct {} ber_int_t;
typedef struct {} BerVarray;
typedef struct {} LDAPDerefVal;
typedef struct {} cherokee_validator_ldap_t;
typedef struct {} cherokee_validator_ldap_props_t;
typedef struct {} LDAPMessage;
typedef struct {} LDAP_SCOPE_SUBTREE;
typedef struct {} cherokee_mysql_hash_t;
typedef struct {} cherokee_validator_mysql_t;
typedef struct {} cherokee_validator_mysql_props_t;
typedef struct {} cherokee_validator_pam_t;
typedef struct {} pam_handle_t;
typedef struct {} cherokee_validator_plain_t;
typedef struct {} cherokee_validator_plain_props_t;
typedef struct {} handler_func_configure_t;
typedef struct {} encoder_func_configure_t;
typedef struct {} validator_func_configure_t;
typedef struct {} vrule_func_new_t;
typedef struct {} rule_func_new_t;
typedef struct {} evhost_func_new_t;
typedef struct {} evhost_func_configure_t;
typedef struct {} logger_func_new_t;
typedef struct {} cherokee_vrule_or_t;
typedef struct {} cherokee_vrule_rehost_t;
typedef struct {} cherokee_vrule_target_ip_t;
typedef struct {} cherokee_wc_entry_t;
typedef struct {} cherokee_vrule_wildcard_t;
#define VOID void
typedef struct {} LPTSTR;
typedef struct {} SECURITY_DESCRIPTOR;
typedef struct {} HKEY;
typedef struct {} SERVICE_STATUS;
typedef struct {} SERVICE_STATUS_HANDLE;
#define WINAPI
typedef struct {} SERVICE_TABLE_ENTRY;
typedef struct {} bool;
typedef struct {} LPCSTR;
typedef struct {} SC_HANDLE;
typedef struct {} HLOCAL;
typedef struct {} DES_cblock;
typedef struct {} _ossl_old_des_cblock;
typedef struct {} _ossl_old_des_key_schedule;
typedef struct {} des_cblock;
typedef struct {} _DES_cblock;
typedef struct {} DES_key_schedule;
typedef struct {} SOCKET;
typedef struct {} WSADATA;
typedef struct {} APIENTRY;
typedef struct {} LPVOID;
typedef struct {} SYSTEM_INFO;
typedef struct {} HINSTANCE;
typedef struct {} UINT;
typedef struct {} CST_OFFSET;
typedef struct {} CHEROKEE_END_DECLS;
typedef struct {} ush;
typedef struct {} ct_data;
typedef struct {} _tree_desc;
typedef struct {} ulg;
typedef struct {} Pos;
typedef struct {} IPos;
typedef struct {} uch;
typedef struct {} deflate_state;
typedef struct {} block_state;
typedef struct {} compress_func;
typedef struct {} config;
typedef struct {} deflate_workspace;
typedef struct {} tree_desc;
