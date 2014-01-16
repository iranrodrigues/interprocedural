/*
 * Project: LIBSSH
 * File: keys.c
 *
 * Syntax Error ID = 3
 *
 * Problem: !HAVE_LIBCRYPTO && !HAVE_LIBGCRYPT
 *
 * Solution: No version solved this problem..
 *
 */

#ifdef HAVE_LIBGCRYPT
static int dsa_public_to_string(gcry_sexp_t key, ssh_buffer buffer) {
#elif defined HAVE_LIBCRYPTO
static int dsa_public_to_string(DSA *key, ssh_buffer buffer) {
#endif

	// Code here..

#ifdef HAVE_LIBGCRYPT
	// Code here..
#elif defined HAVE_LIBCRYPTO
	// Code here...
#endif /* HAVE_LIBCRYPTO */

	// Code here..

#ifdef HAVE_LIBGCRYPT
  gcry_sexp_release(sexp);
#endif

  // Code here..

  return rc;

#if defined(HAVE_LIBGCRYPT) || defined(HAVE_LIBCRYPTO)
}
#endif
