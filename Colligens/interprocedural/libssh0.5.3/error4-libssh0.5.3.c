/*
 * Project: LIBSSH
 * File: keys.c
 *
 * Syntax Error ID = 4
 *
 * Problem: !HAVE_LIBCRYPTO && !HAVE_LIBGCRYPT
 *
 * Solution: No version solved this problem..
 *
 */

#if definedEx(HAVE_LIBGCRYPT)
static int rsa_public_to_string(gcry_sexp_t key, ssh_buffer buffer) {
#endif
#if (definedEx(HAVE_LIBCRYPTO) && !definedEx(HAVE_LIBGCRYPT))
static int rsa_public_to_string(RSA *key, ssh_buffer buffer) {
#endif

	// Code here..

#if definedEx(HAVE_LIBGCRYPT)
  // Code hre..
  ssh_string_fill(e, (char *) tmp, size);
#endif

#if (definedEx(HAVE_LIBCRYPTO) && !definedEx(HAVE_LIBGCRYPT))
  e = make_bignum_string(key->e);
  // Code here..
#endif
  // Code here..
  rc = 0;

  // Code here..

  return rc;
#if (definedEx(HAVE_LIBGCRYPT) || definedEx(HAVE_LIBCRYPTO))
}
#endif
