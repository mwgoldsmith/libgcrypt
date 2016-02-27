#ifdef _MSC_VER
#   define inline __inline
#   define strcasecmp _stricmp
#   define strncasecmp _strnicmp
#   include <crtversion.h>
#   if _VC_CRT_MAJOR_VERSION < 14
#       define snprintf _snprintf
#       define strtoll _strtoi64
#   endif
#endif

#ifndef _GCRYPT_CONFIG_H_INCLUDED
#define _GCRYPT_CONFIG_H_INCLUDED

/* Enable gpg-error's strerror macro for W32CE.  */
#define GPG_ERR_ENABLE_ERRNO_MACROS 1

/* configure did not test for endianess */
/* #undef DISABLED_ENDIAN_CHECK */

/* Define if you don't want the default EGD socket name. For details see
   cipher/rndegd.c */
#define EGD_SOCKET_NAME ""

/* Enable support for Intel AES-NI instructions. */
#define ENABLE_AESNI_SUPPORT 1

/* Enable support for Intel AVX2 instructions. */
#define ENABLE_AVX2_SUPPORT 1

/* Enable support for Intel AVX instructions. */
#define ENABLE_AVX_SUPPORT 1

/* Enable support for Intel DRNG (RDRAND instruction). */
#define ENABLE_DRNG_SUPPORT 1

/* Define to support an HMAC based integrity check */
/* #undef ENABLE_HMAC_BINARY_CHECK */

/* Enable support for ARM NEON instructions. */
/* #undef ENABLE_NEON_SUPPORT */

/* Enable support for the PadLock engine. */
#define ENABLE_PADLOCK_SUPPORT 1

/* Enable support for Intel PCLMUL instructions. */
#define ENABLE_PCLMUL_SUPPORT 1

/* Define to use the GNU C visibility attribute. */
/* #undef GCRY_USE_VISIBILITY */

/* The default error source for libgcrypt. */
#define GPG_ERR_SOURCE_DEFAULT GPG_ERR_SOURCE_GCRYPT

/* Defined if ARM architecture is v6 or newer */
/* #undef HAVE_ARM_ARCH_V6 */

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Defined if the mlock() call does not work */
/* #undef HAVE_BROKEN_MLOCK */

/* Defined if compiler has '__builtin_bswap32' intrinsic */
#define HAVE_BUILTIN_BSWAP32 1

/* Defined if compiler has '__builtin_bswap64' intrinsic */
#define HAVE_BUILTIN_BSWAP64 1

/* Defined if a `byte' is typedef'd */
/* #undef HAVE_BYTE_TYPEDEF */

/* Define to 1 if you have the `clock' function. */
#define HAVE_CLOCK 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Defined if underlying assembler is compatible with amd64 assembly
   implementations */
/* #undef HAVE_COMPATIBLE_GCC_AMD64_PLATFORM_AS */

/* Defined if underlying assembler is compatible with ARM assembly
   implementations */
/* #undef HAVE_COMPATIBLE_GCC_ARM_PLATFORM_AS */

/* Defined for Alpha platforms */
/* #undef HAVE_CPU_ARCH_ALPHA */

/* Defined for ARM platforms */
/* #undef HAVE_CPU_ARCH_ARM */

/* Defined for M68k platforms */
/* #undef HAVE_CPU_ARCH_M68K */

/* Defined for MIPS platforms */
/* #undef HAVE_CPU_ARCH_MIPS */

/* Defined for PPC platforms */
/* #undef HAVE_CPU_ARCH_PPC */

/* Defined for SPARC platforms */
/* #undef HAVE_CPU_ARCH_SPARC */

/* Defined for the x86 platforms */
#define HAVE_CPU_ARCH_X86 1

/* Define to 1 if you have the declaration of `sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SIGLIST 0

/* defined if the system supports a random device */
/* #undef HAVE_DEV_RANDOM */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* defined if we run on some of the PCDOS like systems (DOS, Windoze. OS/2)
   with special properties like no file modes */
#define HAVE_DOSISH_SYSTEM 1

/* defined if we must run on a stupid file system */
#define HAVE_DRIVE_LETTERS 1

/* Define to 1 if you have the `fcntl' function. */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the `flockfile' function. */
/* #undef HAVE_FLOCKFILE */

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

#if defined( __INTEL_COMPILER )

/* Define if inline asm memory barrier is supported */
#define HAVE_GCC_ASM_VOLATILE_MEMORY 1

/* Defined if a GCC style "__attribute__ ((aligned (n))" is supported */
/* #undef HAVE_GCC_ATTRIBUTE_ALIGNED */

/* Defined if inline assembler supports AVX instructions */
#define HAVE_GCC_INLINE_ASM_AVX 1

/* Defined if inline assembler supports AVX2 instructions */
#define HAVE_GCC_INLINE_ASM_AVX2 1

/* Defined if inline assembler supports BMI2 instructions */
#define HAVE_GCC_INLINE_ASM_BMI2 1

/* Defined if inline assembler supports NEON instructions */
/* #undef HAVE_GCC_INLINE_ASM_NEON */

/* Defined if inline assembler supports PCLMUL instructions */
#define HAVE_GCC_INLINE_ASM_PCLMUL 1

/* Defined if inline assembler supports SSSE3 instructions */
#define HAVE_GCC_INLINE_ASM_SSSE3 1

#endif

/* Define to 1 if you have the `gethrtime' function. */
/* #undef HAVE_GETHRTIME */

/* Define to 1 if you have the `getpagesize' function. */
/* #undef HAVE_GETPAGESIZE */

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Defined if underlying assembler is compatible with Intel syntax assembly
   implementations */
#define HAVE_INTEL_SYNTAX_PLATFORM_AS 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Defined if the system supports an mlock() call */
/* #undef HAVE_MLOCK */

/* Define to 1 if you have the `mmap' function. */
/* #undef HAVE_MMAP */

/* Defined if the GNU Pth is available */
/* #undef HAVE_PTH */

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
/* #undef HAVE_PTHREAD_MUTEX_RECURSIVE */

/* Define if the POSIX multithreading library has read/write locks. */
/* #undef HAVE_PTHREAD_RWLOCK */

/* Define to 1 if you have the `raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if you have the `rand' function. */
#define HAVE_RAND 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
/* #undef HAVE_STPCPY */

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `stricmp' function. */
#define HAVE_STRICMP 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the `syslog' function. */
/* #undef HAVE_SYSLOG */

/* Define to 1 if you have the <sys/capability.h> header file. */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/msg.h> header file. */
/* #undef HAVE_SYS_MSG_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Defined if a `u16' is typedef'd */
/* #undef HAVE_U16_TYPEDEF */

/* Defined if a `u32' is typedef'd */
/* #undef HAVE_U32_TYPEDEF */

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Defined if a `ulong' is typedef'd */
/* #undef HAVE_ULONG_TYPEDEF */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Defined if a `ushort' is typedef'd */
/* #undef HAVE_USHORT_TYPEDEF */

/* Defined if variable length arrays are supported */
/* #undef HAVE_VLA */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Defined if we run on WindowsCE */
/* #undef HAVE_W32CE_SYSTEM */

/* Defined if we run on a W32 API based system */
#define HAVE_W32_SYSTEM 1

/* Define to 1 if you have the `wait4' function. */
/* #undef HAVE_WAIT4 */

/* Define to 1 if you have the `waitpid' function. */
/* #undef HAVE_WAITPID */

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#define HAVE_WS2TCPIP_H 1

/* Defined if this is not a regular release */
#define IS_DEVELOPMENT_VERSION 1

/* List of available cipher algorithms */
#define LIBGCRYPT_CIPHERS "arcfour:blowfish:cast5:des:aes:twofish:serpent:rfc2268:seed:camellia:idea:salsa20:gost28147"

/* List of available digest algorithms */
#define LIBGCRYPT_DIGESTS "crc:gostr3411-94:md4:md5:rmd160:sha1:sha256:sha512:tiger:whirlpool:stribog"

/* List of available KDF algorithms */
#define LIBGCRYPT_KDFS "s2k:pkdf2:scrypt"

/* List of available public key cipher algorithms */
#define LIBGCRYPT_PUBKEY_CIPHERS "dsa:elgamal:rsa:ecc"

#include "version.h"

/* A human readable text with the name of the OS */
#define PRINTABLE_OS_NAME "W32"

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 4

/* The size of `unsigned long long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG_LONG 8

/* The size of `unsigned short', as computed by sizeof. */
#define SIZEOF_UNSIGNED_SHORT 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Defined if this module should be included */
#define USE_AES 1

/* Defined if this module should be included */
#define USE_ARCFOUR 1

/* Defined if this module should be included */
#define USE_BLOWFISH 1

/* Defined if this module should be included */
#define USE_CAMELLIA 1

/* define if capabilities should be used */
/* #undef USE_CAPABILITIES */

/* Defined if this module should be included */
#define USE_CAST5 1

/* Defined if this module should be included */
#define USE_CRC 1

/* Defined if this module should be included */
#define USE_DES 1

/* Defined if this module should be included */
#define USE_DSA 1

/* Defined if this module should be included */
#define USE_ECC 1

/* Defined if this module should be included */
#define USE_ELGAMAL 1

/* Defined if the GNU Portable Thread Library should be used */
/* #undef USE_GNU_PTH */

/* Defined if this module should be included */
#define USE_GOST28147 1

/* Defined if this module should be included */
#define USE_GOST_R_3411_12 1

/* Defined if this module should be included */
#define USE_GOST_R_3411_94 1

/* Defined if this module should be included */
#define USE_IDEA 1

/* Defined if this module should be included */
#define USE_MD4 1

/* Defined if this module should be included */
#define USE_MD5 1

/* set this to limit filenames to the 8.3 format */
/* #undef USE_ONLY_8DOT3 */

/* Define if the POSIX multithreading library can be used. */
/* #undef USE_POSIX_THREADS */

/* Define if references to the POSIX multithreading library should be made
   weak. */
/* #undef USE_POSIX_THREADS_WEAK */

/* Define to support the experimental random daemon */
/* #undef USE_RANDOM_DAEMON */

/* Defined if this module should be included */
#define USE_RFC2268 1

/* Defined if this module should be included */
#define USE_RMD160 1

/* Defined if the EGD based RNG should be used. */
/* #undef USE_RNDEGD */

/* Defined if the /dev/random RNG should be used. */
/* #undef USE_RNDLINUX */

/* Defined if the default Unix RNG should be used. */
/* #undef USE_RNDUNIX */

/* Defined if the Windows specific RNG should be used. */
#define USE_RNDW32 1

/* Defined if the WindowsCE specific RNG should be used. */
/* #undef USE_RNDW32CE */

/* Defined if this module should be included */
#define USE_RSA 1

/* Defined if this module should be included */
#define USE_SALSA20 1

/* Defined if this module should be included */
#define USE_SCRYPT 1

/* Defined if this module should be included */
#define USE_SEED 1

/* Defined if this module should be included */
#define USE_SERPENT 1

/* Defined if this module should be included */
#define USE_SHA1 1

/* Defined if this module should be included */
#define USE_SHA256 1

/* Defined if this module should be included */
#define USE_SHA512 1

/* Define if the old Solaris multithreading library can be used. */
/* #undef USE_SOLARIS_THREADS */

/* Define if references to the old Solaris multithreading library should be
   made weak. */
/* #undef USE_SOLARIS_THREADS_WEAK */


/* Defined if this module should be included */
#define USE_TIGER 1

/* Defined if this module should be included */
#define USE_TWOFISH 1

/* Defined if this module should be included */
#define USE_WHIRLPOOL 1

/* Define if the native Windows multithreading API can be used. */
#define USE_WINDOWS_THREADS 1

/* Defined if compiled symbols have a leading underscore */
/* #undef WITH_SYMBOL_UNDERSCORE */

/* To allow the use of Libgcrypt in multithreaded programs we have to use
    special features from the library. */
#ifndef _REENTRANT
# define _REENTRANT 1
#endif

#define _GCRYPT_IN_LIBGCRYPT 1

/* We basically use the original Camellia source.  Make sure the symbols
   properly prefixed.  */
#define CAMELLIA_EXT_SYM_PREFIX _gcry_

#endif /*_GCRYPT_CONFIG_H_INCLUDED*/

