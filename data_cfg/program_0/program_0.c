typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
                                         ;
extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)))
                                          ;
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                                  ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlcpy (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
extern size_t strlcat (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;




typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));
 extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));
 extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));
 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));
 extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));
 extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));
 extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));
 extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));
 extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));
 extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
 extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));
 extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));
 extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));
 extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));
 extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));
 extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));
extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));
 extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));
 extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));
 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));
 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));
 extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));
extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));
 extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
 extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));
extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));
extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));
extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));
extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));
extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));
 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));
 extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));
 extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));
 extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));
 extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));
extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));
 extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));
 extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));
 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));
 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));
 extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));
extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));
 extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
 extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));
extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));
extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));
extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));
extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));
extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));
 extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));
extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));
extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));
 extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));
extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));
extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
typedef __builtin_va_list __gnuc_va_list;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);
typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);
typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t (void *__cookie);
typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
extern int fclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) ;
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ )) ;
extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) ;
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
extern int scanf (const char *__restrict __format, ...) ;
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
                                                         ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void perror (const char *__s) __attribute__ ((__cold__));
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int pclose (FILE *__stream);
extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) ;
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ))
                                     ;
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}
extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}
extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
static void
platform_main_begin(void)
{
}
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
  return -ui;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
  return -ui;
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
float fabsf(float);
double fabs(double);
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
static int32_t g_2 = (-1L);
static uint64_t g_46 = 0xCBB24ADC9FE9A5A1LL;
static uint64_t *g_65 = &g_46;
static uint64_t ** const g_64 = &g_65;
static uint64_t ** const *g_63 = &g_64;
static int16_t g_73 = 0x1837L;
static int64_t g_83 = 0x61F2865603B64E31LL;
static uint64_t g_85 = 9UL;
static int16_t g_87 = 0x026EL;
static int64_t g_89 = (-1L);
static uint32_t g_91 = 4294967295UL;
static int8_t g_108 = (-8L);
static int32_t g_141 = 0L;
static int8_t g_148 = 0x21L;
static int16_t g_156 = 0x87EAL;
static int16_t g_177 = 0xCBE7L;
static int32_t g_197 = 0x79FF3D11L;
static uint8_t g_220 = 0x41L;
static uint8_t g_224 = 0UL;
static int8_t g_228 = (-1L);
static int32_t g_241 = 0x0D7A7952L;
static uint64_t g_274 = 0UL;
static const int32_t g_300 = 0x756814FFL;
static int32_t *g_306 = &g_241;
static uint8_t g_309 = 0xD8L;
static int64_t g_313 = (-6L);
static int64_t g_369 = 9L;
static int8_t g_389 = 0x87L;
static uint32_t g_403 = 0x64A0B003L;
static uint8_t g_425 = 0x78L;
static uint64_t g_453 = 0x7EEEA616365C24DFLL;
static int32_t *g_458 = &g_141;
static int16_t g_459 = 1L;
static uint32_t g_467 = 0UL;
static const int64_t * const g_472 = &g_369;
static const int64_t * const *g_471 = &g_472;
static uint64_t *g_496 = &g_85;
static uint16_t g_500 = 6UL;
static int32_t **g_522 = &g_458;
static int32_t ***g_521 = &g_522;
static uint64_t g_597 = 0x89F1C9D62E5D0862LL;
static uint64_t g_645 = 0x1F614FD7B3824C0FLL;
static uint32_t *g_661 = &g_403;
static int32_t ***g_688 = &g_522;
static uint32_t g_737 = 0UL;
static uint16_t g_776 = 1UL;
static int64_t g_782 = 0x5CA930C745581D9ELL;
static uint64_t g_806 = 18446744073709551607UL;
static uint64_t g_858 = 18446744073709551615UL;
static const int32_t *g_899 = (void*)0;
static uint8_t **g_925 = (void*)0;
static uint8_t ***g_924 = &g_925;
static const uint32_t g_990 = 0x7DA3C699L;
static uint8_t g_1051 = 0x01L;
static uint8_t ****g_1078 = &g_924;
static uint8_t *****g_1077 = &g_1078;
static uint32_t func_1(void);
static int32_t * const func_5(const int32_t * p_6, uint8_t p_7, int64_t p_8);
static const int32_t * func_9(uint16_t p_10);
static uint16_t func_11(uint8_t p_12, int32_t * p_13, const int32_t * p_14);
static uint8_t func_18(int32_t * p_19, int32_t * p_20, int32_t * p_21, uint64_t p_22, int64_t p_23);
static int32_t * func_24(int32_t * p_25, const uint64_t p_26);
static int32_t * func_27(uint16_t p_28, uint16_t p_29, uint32_t p_30, int64_t p_31);
static int64_t func_36(int32_t * p_37, int8_t p_38, int32_t * p_39, int32_t * p_40, int32_t * p_41);
static uint64_t func_54(int8_t p_55, uint64_t ** const * p_56, const int16_t p_57, int16_t p_58);
static int8_t func_59(uint64_t ** const * p_60, uint64_t ** p_61, uint32_t p_62);
static uint32_t func_1(void)
{
    uint32_t l_15 = 8UL;
    int32_t l_335 = (-5L);
    int32_t l_401 = 4L;
    uint8_t *l_470 = (void*)0;
    uint32_t l_600 = 5UL;
    int64_t *l_654 = &g_89;
    const int32_t *l_687 = (void*)0;
    const int32_t **l_686 = &l_687;
    const int32_t ***l_685 = &l_686;
    const int16_t *l_703 = (void*)0;
    int64_t l_707 = 1L;
    int32_t l_779 = (-9L);
    int32_t l_781 = 0x7D3E9A46L;
    int16_t l_809 = 1L;
    uint8_t l_862 = 251UL;
    uint16_t l_914 = 0xD2D5L;
    uint32_t l_955 = 1UL;
    int8_t l_959 = 0x1EL;
    uint8_t ****l_1032 = &g_924;
    int32_t l_1084 = 0L;
    uint8_t l_1113 = 248UL;
    const int32_t l_1114 = 0xDA57EF4DL;
    for (g_2 = 19; (g_2 != 19); g_2 = safe_add_func_uint16_t_u_u(g_2, 3))
    {
        int16_t l_307 = 0x6BB0L;
        uint8_t *l_308 = &g_309;
        int64_t *l_312 = &g_313;
        int32_t **l_327 = &g_306;
        int32_t l_355 = 0xD3C4AB01L;
        int32_t l_370 = (-6L);
        (*l_327) = func_5(func_9(func_11(l_15, &g_2, &g_2)), ((*l_308) = l_307), ((*l_312) = (safe_sub_func_uint8_t_u_u(0xBCL, g_156))));
        for (g_148 = 29; (g_148 == 1); --g_148)
        {
            int16_t l_330 = 0xA6CFL;
            int32_t l_339 = 0xFCEEBA04L;
            int32_t l_350 = (-5L);
            int32_t l_373 = 0x1B850B6AL;
        }
        (*l_327) = (*l_327);
        (*g_458) = (((void*)0 == l_470) < (g_471 == &l_312));
    }
    if (l_15)
    {
        int8_t *l_480 = &g_389;
        const int32_t l_481 = 0x5574E9D4L;
        (*g_458) ^= (1L && (safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_uint32_t_u(g_91)) > ((*g_306) |= ((safe_rshift_func_int32_t_s_s((-7L), (l_15 && (safe_mod_func_int8_t_s_s(((*l_480) = 0xDCL), l_15))))) <= l_481))), 0)));
    }
    else
    {
        uint64_t *l_490 = &g_274;
        int32_t l_497 = 1L;
        uint64_t *l_629 = (void*)0;
        if ((safe_rshift_func_int64_t_s_s(0L, l_335)))
        {
            int16_t *l_491 = (void*)0;
            int16_t *l_492 = &g_156;
            int16_t *l_493 = &g_459;
            uint16_t *l_498 = (void*)0;
            uint16_t *l_499 = &g_500;
            int32_t l_501 = 0xA3F7372CL;
            int32_t **l_520 = (void*)0;
            int32_t ***l_519 = &l_520;
            uint32_t l_608 = 0xFE6FD873L;
            int8_t l_631 = 0L;
            int32_t *l_635 = (void*)0;
            int32_t *l_636 = &g_141;
            int32_t *l_637 = (void*)0;
            int32_t *l_638 = &g_241;
            int32_t *l_639 = &g_141;
            int32_t *l_640 = &g_241;
            int32_t *l_641 = (void*)0;
            int32_t *l_642 = (void*)0;
            int32_t *l_643 = (void*)0;
            int32_t *l_644 = &g_2;
            (*g_458) = (((safe_add_func_int64_t_s_s((safe_lshift_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(((((*l_492) = (((void*)0 != &g_64) | (l_490 == (void*)0))) != (g_73 = ((*l_493) = (1UL != 0L)))) == ((*l_499) = (((safe_sub_func_int8_t_s_s(((*g_64) == (g_496 = l_490)), l_497)) <= 0x40L) & (**g_64)))), (*g_65))) || l_501), l_401)), 1L)) < 1L) >= 4294967293UL);
            if (l_501)
            {
                int16_t l_536 = 0x0136L;
                int32_t l_543 = (-1L);
                int8_t *l_563 = &g_148;
                int16_t l_574 = 0x58DFL;
                int32_t *l_575 = &g_241;
                int32_t *l_576 = &l_497;
                int32_t *l_577 = (void*)0;
                int32_t *l_578 = (void*)0;
                int32_t *l_579 = &g_241;
                int32_t *l_580 = &g_241;
                int32_t *l_581 = (void*)0;
                int32_t *l_582 = &g_241;
                int32_t *l_583 = &g_241;
                int32_t *l_584 = (void*)0;
                int32_t *l_585 = &l_401;
                int32_t *l_586 = &l_501;
                int32_t *l_587 = &l_501;
                int32_t *l_588 = &l_501;
                int32_t *l_589 = &l_543;
                int32_t *l_590 = &g_2;
                int32_t *l_591 = &l_497;
                int32_t *l_592 = &l_497;
                int32_t *l_593 = &l_497;
                int32_t *l_594 = (void*)0;
                int32_t *l_595 = &g_141;
                int32_t *l_596 = (void*)0;
                for (g_46 = 0; (g_46 == 49); ++g_46)
                {
                    int32_t ****l_523 = &g_521;
                    int8_t l_524 = 0x47L;
                    int64_t *l_533 = &g_83;
                    int8_t *l_542 = &g_148;
                    (*g_306) |= ((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(g_87, ((0x6ABD337FL && (*g_458)) != 0x55L))), (~((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((*l_499) = ((((**g_471) && ((((safe_add_func_int16_t_s_s(((l_519 = l_519) != ((*l_523) = g_521)), ((void*)0 == &g_306))) >= (*g_496)) < (*g_472)) | (***g_63))) >= g_224) ^ g_156)) == 0xB919L), 1)), l_524)), g_369)), g_224)) == 0xEC487F612EA23364LL)))) <= 7L);
                    l_543 ^= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(l_497, ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((g_500 = (l_533 == l_490)), 7)), (*g_306))) & (safe_rshift_func_int32_t_s_s((**g_522), ((((**g_64) ^ (l_536 != l_15)) <= (safe_rshift_func_int8_t_s_s((((*l_542) = ((((((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((((*l_519) = (*g_521)) != (*g_521)))), (*g_472))) ^ 65535UL) ^ g_148) == g_177) ^ 0x184DCA25D3297F84LL) | 0xB0FEL)) > g_73), 0))) > (****l_523))))))), g_89));
                    (*g_306) &= (***g_521);
                    for (g_425 = 0; (g_425 > 11); g_425 = safe_add_func_uint16_t_u_u(g_425, 7))
                    {
                        int64_t *l_562 = &g_313;
                        int8_t *l_564 = &g_148;
                        (*g_306) = ((**g_522) = (l_335 &= (****l_523)));
                        (**g_522) = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int32_t_s_s((safe_lshift_func_uint32_t_u_s((safe_rshift_func_int64_t_s_s(((*l_562) = ((*l_533) = l_497)), ((l_563 = &l_524) == (l_564 = &g_389)))), 26)), 19)), g_85)), (-1L))), (safe_rshift_func_uint64_t_u_u((*g_496), (+((g_369 = (-1L)) < g_141)))))) || ((*l_564) ^= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int32_t_s_s(l_574, 17)), g_453)), 0x82C434ADL)))), 15)), 0x4DL));
                    }
                }
                ++g_597;
                (*g_522) = (*g_522);
                --l_600;
            }
            else
            {
                uint64_t l_626 = 1UL;
                if (l_401)
                {
                    int32_t *l_603 = &l_335;
                    int32_t *l_604 = &l_497;
                    int32_t *l_605 = &l_335;
                    int32_t *l_606 = &l_497;
                    int32_t *l_607 = &l_401;
                    int32_t *** const *l_611 = &l_519;
                    const int32_t *l_613 = (void*)0;
                    const int32_t **l_612 = &l_613;
                    ++l_608;
                    (*l_612) = func_9(((void*)0 == l_611));
                }
                else
                {
                    int8_t l_618 = 3L;
                    int32_t * const l_633 = &g_241;
                    int32_t **l_634 = &g_306;
                    for (l_335 = 0; (l_335 > 10); ++l_335)
                    {
                        int8_t *l_630 = &g_228;
                        (**g_521) = func_27((safe_mod_func_int16_t_s_s(((*l_492) = ((l_618 > ((g_403 > (safe_mod_func_uint16_t_u_u(((+(-1L)) == (((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint32_t_u_s((l_626++), 30)) != 0xF9L), g_459)) == (l_629 != (void*)0)) <= ((*l_630) = (((*g_64) = (void*)0) == &g_274)))), g_224))) > 0x5E57L)) <= l_631)), 1UL)), l_15, l_600, (*g_472));
                        (*g_522) = (**g_521);
                    }
                    (*g_522) = (void*)0;
                    (*l_634) = l_633;
                }
            }
            g_645--;
        }
        else
        {
            uint32_t l_648 = 6UL;
            int32_t l_649 = 0xD1AB5465L;
            l_649 ^= ((*g_458) &= l_648);
        }
    }
    for (g_467 = (-19); (g_467 > 24); ++g_467)
    {
        const int64_t *l_655 = &g_369;
        uint32_t *l_660 = &g_403;
        int32_t l_662 = 0L;
        uint32_t **l_663 = (void*)0;
        uint32_t **l_664 = (void*)0;
        uint32_t **l_665 = (void*)0;
        uint32_t **l_666 = (void*)0;
        uint32_t **l_667 = (void*)0;
        uint32_t **l_668 = &l_660;
        int32_t *l_669 = (void*)0;
        int32_t *l_670 = &g_141;
        int8_t *l_677 = (void*)0;
        int8_t *l_678 = &g_228;
        int16_t l_689 = (-5L);
        int32_t *l_690 = &l_662;
        int8_t l_704 = 0xB8L;
        int32_t ****l_848 = &g_521;
        uint16_t l_851 = 0UL;
        uint8_t l_908 = 2UL;
        uint16_t l_931 = 1UL;
        int16_t l_935 = 1L;
        uint16_t l_962 = 1UL;
        uint64_t l_977 = 4UL;
        uint32_t l_988 = 1UL;
        int32_t l_989 = 0x2041445CL;
        const uint8_t ***l_1041 = (void*)0;
        const uint8_t ****l_1040 = &l_1041;
        int32_t l_1060 = 0x38E2E1E2L;
        int16_t l_1075 = 0x3125L;
        int32_t l_1111 = 8L;
        (*l_670) |= ((*g_306) |= ((((*l_654) = (safe_sub_func_int16_t_s_s((l_654 == l_655), l_335))) & (safe_rshift_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((g_467 != (-5L)), (((*l_668) = func_27((g_500 |= (((l_660 != (g_661 = &l_15)) || ((*g_521) != (void*)0)) | l_335)), l_15, l_662, (**g_471))) == &g_403))) < l_600), l_662))) | g_403));
        if (((*l_690) ^= ((*g_306) = ((safe_lshift_func_uint64_t_u_s(((0x045CL < (safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((*g_496) = (((*l_678) = g_73) <= (((*l_670) != (((safe_mod_func_int8_t_s_s(l_15, g_85)) != (safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((((*g_306) && (l_401 >= (l_685 != (g_688 = (g_521 = &g_522))))) && 0x75L), g_369)), (**g_471)))) < (*l_670))) <= (*l_670)))), l_689)), 0x10B2L))) ^ g_220), 1)) ^ (*g_661)))))
        {
            uint32_t l_693 = 0UL;
            int16_t l_708 = (-8L);
            int32_t l_713 = 3L;
            int8_t l_780 = 1L;
            uint32_t *l_813 = &l_600;
            int32_t **l_847 = &l_690;
            int8_t *l_876 = &g_228;
            for (l_689 = 0; (l_689 > (-17)); l_689 = safe_sub_func_uint64_t_u_u(l_689, 7))
            {
                int32_t l_694 = 0x5F223233L;
                uint16_t *l_709 = (void*)0;
                uint16_t *l_710 = &g_500;
                int32_t l_715 = (-1L);
                uint8_t l_846 = 254UL;
                uint32_t l_850 = 0xA013999DL;
                uint64_t l_879 = 0x5C84A117D471371BLL;
                uint8_t * const *l_898 = &l_470;
                uint32_t l_907 = 0xF993387BL;
                if (l_693)
                    break;
                (*l_690) = ((l_694 = g_148) > (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((((l_703 != &g_87) & l_704) ^ (safe_add_func_int64_t_s_s(l_693, ((6L ^ 0UL) && 0UL)))), 11)) <= (&g_521 != &l_685)), 0x1C67FAAFL)), l_707)), l_708)));
            }
            for (g_73 = 0; (g_73 > 0); g_73 = safe_add_func_int32_t_s_s(g_73, 9))
            {
                uint8_t * const *l_930 = (void*)0;
                uint8_t * const **l_929 = &l_930;
                int32_t l_932 = (-3L);
                for (l_851 = 0; (l_851 < 55); l_851++)
                {
                    uint32_t l_915 = 4294967287UL;
                    uint8_t ****l_926 = (void*)0;
                    uint8_t ***l_928 = (void*)0;
                    uint8_t ****l_927 = &l_928;
                    uint64_t **l_933 = &g_65;
                    int8_t l_934 = (-1L);
                    uint16_t *l_936 = &l_914;
                    int32_t *l_937 = &l_781;
                    (**l_847) &= l_914;
                    (*l_937) |= (l_915 && ((safe_lshift_func_int64_t_s_u((safe_sub_func_uint16_t_u_u(((*l_936) = (safe_add_func_int32_t_s_s(((**l_847) = (((((safe_sub_func_uint32_t_u_u((((*l_927) = (g_924 = g_924)) == l_929), 0x5965590DL)) < (l_931 = ((*l_670) &= (**l_847)))) || ((((l_934 = (((l_932 | 0L) > l_915) == ((((void*)0 != l_933) && 0x073CL) | (*g_661)))) && (*l_670)) <= (*g_306)) && l_935)) || g_228) == g_453)), l_915))), g_300)), 5)) && 0L));
                }
            }
        }
        else
        {
            int8_t l_954 = 5L;
            int32_t l_963 = 0xEEFADD97L;
            uint16_t l_1028 = 0xF5E4L;
            uint8_t * const *l_1031 = (void*)0;
            uint8_t * const **l_1030 = &l_1031;
            uint8_t * const ***l_1029 = &l_1030;
            if (((g_313 & (((~(safe_rshift_func_uint64_t_u_s((0x39L & (~((4294967287UL > ((safe_lshift_func_uint32_t_u_s((safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(l_954, (l_781 = l_955))) <= 2L), ((!(((safe_sub_func_uint64_t_u_u(l_959, (safe_lshift_func_int8_t_s_u(l_954, 2)))) ^ ((1L || (-10L)) < (*g_661))) < (*l_690))) | l_954))) != 4294967295UL), 0xC818CA980FCDB1D5LL)) || l_962), l_954)), (*g_306))) != g_46)) <= l_963))), (*l_670)))) ^ l_963) | (*g_661))) & l_963))
            {
                uint16_t l_986 = 65526UL;
                int32_t l_987 = 1L;
                uint8_t ****l_1020 = &g_924;
                uint32_t l_1057 = 6UL;
                if (((0L && 0x234B868BB9B6EE81LL) != (((!(+(safe_mod_func_int8_t_s_s((((((safe_add_func_uint32_t_u_u(4294967295UL, ((l_987 = (safe_rshift_func_int32_t_s_u((*l_690), (safe_lshift_func_uint8_t_u_s(((+l_977) | ((safe_add_func_uint64_t_u_u((0x09FCL > ((safe_unary_minus_func_int16_t_s((!(*l_690)))) > (safe_lshift_func_uint64_t_u_u((*g_496), (safe_add_func_int16_t_s_s((0xA292L == l_963), 0x2020L)))))), l_986)) & l_954)), (*l_690)))))) > (*l_690)))) && l_988) != 1UL) == 0x6566BABBA2C53004LL) < l_989), l_954)))) <= g_990) < (-8L))))
                {
                    int32_t l_1006 = (-1L);
                    uint8_t *****l_1015 = (void*)0;
                    uint8_t *****l_1016 = (void*)0;
                    uint8_t ****l_1018 = &g_924;
                    uint8_t *****l_1017 = &l_1018;
                    for (l_781 = 1; (l_781 >= 17); l_781 = safe_add_func_int8_t_s_s(l_781, 7))
                    {
                        uint8_t l_993 = 255UL;
                        (*l_686) = ((**g_521) = func_27(g_141, l_987, l_993, (((*g_306) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((*l_690) = (l_987 > l_987)), (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_806, 13)), (((((safe_sub_func_int8_t_s_s((((*l_670) > (safe_rshift_func_uint16_t_u_u(l_1006, 9))) ^ 0xD8EDL), l_993)) | l_986) <= 4294967295UL) || (*g_306)) <= g_274))))), (*g_661)))) < (*g_661))));
                    }
                    l_963 = ((g_467 == (4294967295UL <= ((safe_mod_func_uint16_t_u_u((((0x339AF673EADAFBDALL <= (0x98C7A5CB6D90B023LL <= (0xE2L && (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_1006, ((safe_lshift_func_int32_t_s_s(l_986, l_986)) >= (((*l_1017) = &g_924) == &g_924)))), 4))))) > (*g_661)) <= 0L), 0x562BL)) <= g_782))) >= l_986);
                }
                else
                {
                    const int32_t l_1019 = 0L;
                    uint16_t *l_1026 = (void*)0;
                    uint16_t *l_1027 = &l_962;
                    int8_t *l_1061 = &l_704;
                    int8_t **l_1062 = &l_1061;
                    if ((((l_1019 && l_1019) > (((void*)0 == l_1020) ^ ((((safe_mod_func_int32_t_s_s((l_987 | ((*l_678) = ((((*l_1027) |= (+(safe_lshift_func_int16_t_s_s(((*g_472) == (**g_471)), 4)))) < l_1028) <= ((l_1029 != l_1032) >= (*l_670))))), l_1019)) <= 0xAAADL) || l_1019) | (*l_690)))) > (*g_496)))
                    {
                        uint8_t *****l_1039 = &l_1032;
                        int32_t l_1050 = (-1L);
                        if ((*g_306))
                            break;
                        (*l_690) = ((safe_lshift_func_uint32_t_u_s((safe_sub_func_uint32_t_u_u(((((void*)0 == (*l_1020)) && ((safe_rshift_func_int8_t_s_u((g_108 = (((((*l_1039) = &g_924) == l_1040) < (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((*l_678) = (l_1028 ^ ((*g_661) || ((safe_rshift_func_int64_t_s_s(((l_954 ^ (~(safe_unary_minus_func_int32_t_s((((-1L) < l_986) & l_1050))))) | l_986), 54)) || (-8L))))), 7)), 0xB25D945B9C56B4BCLL))) < g_597)), 1)) && 0x0A02F65DL)) > 0xC4L), 0xB198EDF2L)), 27)) != 0L);
                        (*l_690) &= g_1051;
                    }
                    else
                    {
                        uint8_t *l_1054 = &l_908;
                        (*g_306) = (safe_rshift_func_int8_t_s_s(((l_1054 == l_1054) || (g_782 > (safe_lshift_func_uint8_t_u_u(0UL, ((void*)0 == &g_522))))), 7));
                        l_779 ^= (-4L);
                    }
                    (*g_306) &= l_1057;
                    if ((safe_lshift_func_int64_t_s_s(l_1060, (&g_228 != ((*l_1062) = l_1061)))))
                    {
                        (*g_306) = (((safe_mod_func_uint64_t_u_u((*l_670), (safe_add_func_int32_t_s_s((*g_306), l_1028)))) ^ (((0UL != l_986) || (((*l_690) = (((safe_rshift_func_int32_t_s_u(l_1028, ((*g_661) != ((*g_661) <= (-1L))))) < l_963) | g_228)) != 1L)) == g_737)) || 0x89A5BB38L);
                    }
                    else
                    {
                        (*l_686) = (**g_688);
                        if (l_1019)
                            break;
                        (*g_306) = (*g_306);
                    }
                }
            }
            else
            {
                return l_963;
            }
            if ((g_300 >= (((*l_678) = g_46) && (safe_lshift_func_int8_t_s_u((&l_660 != (void*)0), 5)))))
            {
                uint8_t *****l_1079 = &l_1032;
                int32_t l_1089 = (-1L);
                for (l_689 = (-15); (l_689 == (-9)); ++l_689)
                {
                    uint16_t l_1087 = 0x4198L;
                    int64_t l_1088 = 0x00161864997D0246LL;
                    for (g_309 = 17; (g_309 == 10); --g_309)
                    {
                        (*l_690) &= (0x65D5L == (((l_1075 ^ (((*l_678) = (g_108 &= (((-3L) & ((!(&l_1040 != (l_1079 = g_1077))) <= 0x84BFL)) ^ ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(l_1084, ((!0xA12CL) || (+l_1087)))) & l_1088), 0x0C44L)) != (**g_471))))) && l_1089)) | (**g_471)) <= l_1089));
                    }
                    return l_963;
                }
                (**l_685) = (**g_688);
            }
            else
            {
                return l_1028;
            }
            (*g_688) = (*g_688);
        }
        if (((*l_690) = ((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(0xB5DCEF7BL, (safe_rshift_func_int8_t_s_s(((9UL < ((safe_sub_func_int32_t_s_s(((((safe_sub_func_int64_t_s_s((((*g_63) == (*g_63)) > ((~((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((*g_471) == l_655) > (safe_add_func_uint64_t_u_u((safe_rshift_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((l_1111 ^ (+(6UL < g_453))) < 0x62L), 65535UL)), 29)), (*l_670)))), (-10L))), (*g_472))) ^ g_453)) || g_645)), 0L)) && g_453) ^ g_241) > l_1113), 2L)) ^ (*l_690))) & (*l_670)), g_459)))) || 0x2937L), 0x8F017C58L)) != l_1114)))
        {
            (*g_688) = (**l_848);
            (*g_522) = (*g_522);
        }
        else
        {
            uint8_t l_1120 = 4UL;
            int32_t l_1121 = (-3L);
            uint64_t *l_1134 = &l_977;
            int16_t *l_1135 = &g_156;
            (*g_306) = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((*l_670) = (l_1121 &= (+l_1120))), l_1120)) ^ ((safe_add_func_int64_t_s_s(((*l_654) &= (((*l_1135) = (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u((0x9A6B002EL && (-10L)), 0)) <= ((~(!(*l_690))) > (0x22L && (l_1120 > (((*g_64) = l_1134) == l_654))))), l_1120)) != (-4L)) == 0x3A473832D81B39D3LL), 0x9C2C9F82L)), (*g_661)))) ^ (*l_690))), l_1120)) > l_1120)), g_228));
        }
    }
    return l_955;
}
static int32_t * const func_5(const int32_t * p_6, uint8_t p_7, int64_t p_8)
{
    uint8_t l_314 = 0x5DL;
    int32_t l_315 = 0x6BB8EA14L;
    uint32_t *l_316 = (void*)0;
    uint32_t *l_317 = (void*)0;
    uint32_t *l_318 = &g_91;
    int32_t **l_323 = &g_306;
    int32_t ***l_324 = &l_323;
    int32_t **l_326 = (void*)0;
    int32_t ***l_325 = &l_326;
    l_315 |= l_314;
    g_306 = func_27((p_7 > g_309), p_8, ((*l_318)--), ((safe_sub_func_uint64_t_u_u((**g_64), g_177)) || (((*l_324) = l_323) == ((*l_325) = &g_306))));
    return (*l_323);
}
static const int32_t * func_9(uint16_t p_10)
{
    int32_t *l_305 = &g_2;
    g_306 = l_305;
    return l_305;
}
static uint16_t func_11(uint8_t p_12, int32_t * p_13, const int32_t * p_14)
{
    int16_t l_32 = (-1L);
    int32_t *l_42 = &g_2;
    uint64_t *l_45 = &g_46;
    int32_t *l_304 = &g_141;
    (*l_304) = (safe_rshift_func_uint8_t_u_u(p_12, func_18(func_24(func_27(p_12, l_32, p_12, p_12), (((*l_45) = (((void*)0 == p_14) <= (safe_sub_func_int64_t_s_s(func_36(l_42, p_12, l_42, &g_2, &g_2), p_12)))) < (*l_42))), &g_2, l_42, (*l_42), p_12)));
    return (*l_42);
}
static uint8_t func_18(int32_t * p_19, int32_t * p_20, int32_t * p_21, uint64_t p_22, int64_t p_23)
{
    uint32_t l_285 = 0x1663C647L;
    uint64_t **l_287 = &g_65;
    uint64_t ***l_286 = &l_287;
    int64_t *l_290 = &g_83;
    for (g_91 = 0; (g_91 > 9); g_91++)
    {
        int32_t l_281 = 0x006B1119L;
        int64_t *l_289 = &g_89;
        int64_t **l_288 = &l_289;
        int16_t *l_301 = &g_156;
        g_141 &= (safe_rshift_func_uint64_t_u_u(((l_281 == p_23) >= ((g_220 > (+0xE9L)) | (safe_lshift_func_int32_t_s_u(((((p_22 >= l_285) >= ((l_286 == &l_287) == (((*l_288) = (void*)0) != l_290))) < l_285) <= 0x77L), 20)))), (***g_63)));
        for (g_73 = (-3); (g_73 < 23); g_73 = safe_add_func_uint32_t_u_u(g_73, 4))
        {
            uint16_t l_293 = 0x0E7AL;
            const int32_t *l_299 = &g_300;
            const int32_t **l_298 = &l_299;
            int32_t *l_302 = (void*)0;
            int32_t *l_303 = &g_141;
            (*l_298) = func_27(g_224, l_281, l_293, (((*l_303) = (safe_sub_func_uint64_t_u_u(l_281, ((safe_add_func_int64_t_s_s((((*l_298) = &g_141) != p_20), (((void*)0 == l_301) ^ (((p_22 == g_197) >= l_281) <= g_241)))) > p_23)))) < (*p_21)));
        }
    }
    return l_285;
}
static int32_t * func_24(int32_t * p_25, const uint64_t p_26)
{
    uint64_t *l_48 = &g_46;
    uint64_t **l_47 = &l_48;
    uint64_t ***l_49 = &l_47;
    int32_t l_50 = 2L;
    const uint32_t l_100 = 8UL;
    const int32_t l_119 = 0x60EFD82BL;
    uint16_t l_120 = 0x8F20L;
    int32_t l_195 = 0x56077E59L;
    (*l_49) = l_47;
    if (l_50)
    {
        uint64_t **l_66 = (void*)0;
        int32_t l_67 = 0x1676492AL;
        l_67 = ((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint64_t_u_u(func_54(func_59(g_63, l_66, l_67), &l_66, g_2, l_50), (l_67 == 0xDE24E562L))))) >= l_67);
        return p_25;
    }
    else
    {
        int8_t *l_107 = &g_108;
        int32_t l_111 = 0x5ED6FA3CL;
        uint32_t *l_112 = &g_91;
        int32_t l_121 = 1L;
        int32_t l_122 = 0xBE81B992L;
        int32_t *l_226 = &l_195;
        int32_t *l_227 = &l_195;
        int32_t *l_229 = &l_121;
        int32_t *l_230 = &l_121;
        int32_t *l_231 = (void*)0;
        int32_t *l_232 = &l_122;
        int32_t *l_233 = &g_141;
        int32_t *l_234 = &l_50;
        int32_t *l_235 = (void*)0;
        int32_t *l_236 = &l_50;
        int32_t *l_237 = &l_122;
        int32_t *l_238 = &l_195;
        int32_t *l_239 = (void*)0;
        int32_t *l_240 = &g_141;
        int32_t *l_242 = &g_141;
        int32_t *l_243 = &g_241;
        int32_t *l_244 = (void*)0;
        int32_t *l_245 = (void*)0;
        int32_t *l_246 = &g_241;
        int32_t *l_247 = &l_50;
        int32_t *l_248 = &l_50;
        int32_t *l_249 = &l_195;
        int32_t *l_250 = &g_241;
        int32_t *l_251 = &l_195;
        int32_t *l_252 = &l_121;
        int32_t *l_253 = &g_141;
        int32_t *l_254 = (void*)0;
        int32_t *l_255 = &l_122;
        int32_t *l_256 = &g_141;
        int32_t *l_257 = (void*)0;
        int32_t *l_258 = (void*)0;
        int32_t *l_259 = &l_122;
        int32_t *l_260 = (void*)0;
        int32_t *l_261 = &g_141;
        int32_t *l_262 = &g_241;
        int32_t *l_263 = &l_111;
        int32_t *l_264 = &l_50;
        int32_t *l_265 = &l_121;
        int32_t *l_266 = &l_111;
        int32_t *l_267 = &l_122;
        int32_t *l_268 = &l_111;
        int32_t *l_269 = &l_122;
        int32_t *l_270 = &l_111;
        int32_t *l_271 = (void*)0;
        int32_t l_272 = 0x24E6ACFBL;
        int32_t l_273 = 0x0D5DEC9EL;
        g_91--;
        if ((l_122 &= (safe_rshift_func_int32_t_s_u(((l_121 &= (safe_rshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(p_26, g_83)) & l_100) && (((safe_sub_func_uint8_t_u_u(((((((safe_lshift_func_uint16_t_u_u((g_85 == ((*l_107) = (safe_rshift_func_int8_t_s_u(l_50, 1)))), g_91)) && (((safe_sub_func_uint8_t_u_u((l_111 != (((*l_112) |= l_111) < (((~(safe_lshift_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((+g_2) == p_26), l_111)), (***g_63)))) < 1L) & g_73))), 0xC3L)) != l_111) == 1UL)) && p_26) <= l_100) < 0x9615L) > l_100), l_119)) == g_85) != l_111)), l_120))) >= l_50), g_85))))
        {
            uint32_t l_124 = 0xB36BD20CL;
            int16_t l_128 = (-10L);
            int32_t *l_133 = &l_111;
            int32_t **l_132 = &l_133;
            (*l_132) = func_27((~((l_124 <= (***g_63)) <= ((-2L) & (l_119 ^ (g_89 != ((*l_107) = (~((safe_sub_func_uint8_t_u_u(l_128, 253UL)) ^ (+(safe_rshift_func_int16_t_s_u(0x67D0L, 12))))))))))), g_85, l_128, l_128);
        }
        else
        {
            int32_t *l_134 = (void*)0;
            int32_t *l_135 = &l_50;
            int32_t *l_136 = &l_111;
            int32_t *l_137 = &l_111;
            int32_t *l_138 = (void*)0;
            int32_t *l_139 = (void*)0;
            int32_t *l_140 = &l_121;
            int32_t *l_142 = (void*)0;
            int32_t *l_143 = &l_50;
            int32_t *l_144 = &l_121;
            int32_t *l_145 = (void*)0;
            int32_t *l_146 = (void*)0;
            int32_t *l_147 = &l_121;
            int32_t *l_149 = &l_50;
            int32_t *l_150 = &l_111;
            int32_t *l_151 = &l_121;
            int32_t *l_152 = &l_122;
            int32_t *l_153 = (void*)0;
            int32_t *l_154 = &l_121;
            int32_t *l_155 = &l_121;
            int32_t *l_157 = (void*)0;
            int32_t *l_158 = &l_111;
            int32_t *l_159 = &g_141;
            int32_t *l_160 = &l_50;
            int32_t *l_161 = &l_111;
            int32_t *l_162 = (void*)0;
            int32_t *l_163 = (void*)0;
            int32_t *l_164 = (void*)0;
            int32_t *l_165 = (void*)0;
            int32_t *l_166 = &l_111;
            int32_t *l_167 = (void*)0;
            int32_t *l_168 = &l_111;
            int32_t *l_169 = &l_121;
            int32_t *l_170 = &l_121;
            int32_t *l_171 = &l_122;
            int32_t l_172 = 0x18547ECBL;
            int32_t *l_173 = &l_50;
            int32_t *l_174 = &l_122;
            int32_t *l_175 = &l_50;
            int32_t *l_176 = &g_141;
            int32_t *l_178 = &l_122;
            int32_t *l_179 = (void*)0;
            int32_t *l_180 = (void*)0;
            int32_t *l_181 = &l_172;
            int32_t *l_182 = &l_50;
            int32_t *l_183 = (void*)0;
            int32_t *l_184 = &l_121;
            int32_t *l_185 = &l_172;
            int32_t *l_186 = &g_141;
            int32_t *l_187 = (void*)0;
            int32_t *l_188 = &l_50;
            int32_t *l_189 = &l_122;
            int32_t *l_190 = &l_50;
            int32_t *l_191 = &l_122;
            int32_t *l_192 = &l_111;
            int32_t *l_193 = &l_111;
            int32_t *l_194 = &l_121;
            int32_t *l_196 = &l_122;
            int32_t *l_198 = &l_195;
            int32_t *l_199 = &l_111;
            int32_t *l_200 = &g_141;
            int32_t *l_201 = &g_141;
            int32_t *l_202 = &l_195;
            int32_t *l_203 = &l_122;
            int32_t *l_204 = &l_172;
            int32_t *l_205 = &l_172;
            int32_t *l_206 = &l_111;
            int32_t *l_207 = (void*)0;
            int32_t *l_208 = &l_50;
            int32_t *l_209 = &l_111;
            int32_t *l_210 = &l_121;
            int32_t *l_211 = &l_195;
            int32_t *l_212 = &l_122;
            int32_t l_213 = 0xA1F43B5DL;
            int32_t *l_214 = &l_122;
            int32_t *l_215 = &l_50;
            uint16_t l_216 = 65531UL;
            uint8_t *l_219 = &g_220;
            uint8_t *l_223 = &g_224;
            --l_216;
            (*l_194) ^= l_50;
            (*l_182) = (-9L);
            (*l_201) = ((-1L) ^ ((*l_223) = ((*l_219)--)));
        }
        (*l_226) = (+l_100);
        g_274--;
    }
    return &g_241;
}
static int32_t * func_27(uint16_t p_28, uint16_t p_29, uint32_t p_30, int64_t p_31)
{
    int32_t *l_33 = &g_2;
    return l_33;
}
static int64_t func_36(int32_t * p_37, int8_t p_38, int32_t * p_39, int32_t * p_40, int32_t * p_41)
{
    int8_t l_43 = 1L;
    int32_t l_44 = 0x94BE3D0EL;
    l_44 = (l_43 >= (-1L));
    return p_38;
}
static uint64_t func_54(int8_t p_55, uint64_t ** const * p_56, const int16_t p_57, int16_t p_58)
{
    int32_t *l_76 = &g_2;
    int64_t *l_82 = &g_83;
    uint64_t *l_84 = &g_85;
    int16_t *l_86 = &g_87;
    int64_t *l_88 = &g_89;
    int32_t l_90 = 1L;
    l_90 &= (((((p_55 = (((*l_88) = (g_73 || ((*l_86) |= (safe_lshift_func_uint32_t_u_u((l_76 != (void*)0), (((**g_64) = (safe_unary_minus_func_uint16_t_u(((g_46 > (*l_76)) >= p_58)))) == (g_73 != (safe_sub_func_int16_t_s_s((g_2 || (((((*l_84) &= (((*l_82) = (safe_mod_func_uint32_t_u_u(((((*l_76) < (*l_76)) || g_2) ^ g_2), p_55))) | (*l_76))) ^ g_2) && 0xA50DL) == 0x57CEC448L)), 1L))))))))) >= 0x8EC3DF54D9846C24LL)) < (*l_76)) && (*l_76)) ^ 1UL) < (*l_76));
    return (*g_65);
}
static int8_t func_59(uint64_t ** const * p_60, uint64_t ** p_61, uint32_t p_62)
{
    uint32_t l_68 = 0xAF19195CL;
    int32_t *l_72 = &g_2;
    int32_t **l_71 = &l_72;
    (*l_71) = func_27(g_2, l_68, g_2, (safe_add_func_uint32_t_u_u(0xEBE66343L, (p_62 && l_68))));
    return g_46;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_46;
    csmith_sink_ = g_73;
    csmith_sink_ = g_83;
    csmith_sink_ = g_85;
    csmith_sink_ = g_87;
    csmith_sink_ = g_89;
    csmith_sink_ = g_91;
    csmith_sink_ = g_108;
    csmith_sink_ = g_141;
    csmith_sink_ = g_148;
    csmith_sink_ = g_156;
    csmith_sink_ = g_177;
    csmith_sink_ = g_197;
    csmith_sink_ = g_220;
    csmith_sink_ = g_224;
    csmith_sink_ = g_228;
    csmith_sink_ = g_241;
    csmith_sink_ = g_274;
    csmith_sink_ = g_300;
    csmith_sink_ = g_309;
    csmith_sink_ = g_313;
    csmith_sink_ = g_369;
    csmith_sink_ = g_389;
    csmith_sink_ = g_403;
    csmith_sink_ = g_425;
    csmith_sink_ = g_453;
    csmith_sink_ = g_459;
    csmith_sink_ = g_467;
    csmith_sink_ = g_500;
    csmith_sink_ = g_597;
    csmith_sink_ = g_645;
    csmith_sink_ = g_737;
    csmith_sink_ = g_776;
    csmith_sink_ = g_782;
    csmith_sink_ = g_806;
    csmith_sink_ = g_858;
    csmith_sink_ = g_990;
    csmith_sink_ = g_1051;
    platform_main_end(0,0);
    return 0;
}
