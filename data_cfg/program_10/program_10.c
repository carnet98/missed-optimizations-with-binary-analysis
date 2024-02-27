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
extern int fclose (FILE *__stream);
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
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
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
extern void perror (const char *__s);
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
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
}
static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
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

volatile uint32_t csmith_sink_ = 0;
static long __undefined;
static int32_t g_2 = 0x60477862;
static uint32_t g_90 = 1U;
static uint8_t g_108 = 0x17;
static uint32_t g_111 = 0U;
static uint16_t g_112 = 1U;
static uint8_t g_114 = 0xB5;
static int8_t g_120 = 0x36;
static int16_t g_151 = 0xBBE2;
static uint32_t g_234 = 0xE3FE1AB3;
static uint32_t g_237 = 0xE7F264C0;
static int16_t g_288 = (-2);
static int32_t g_289 = (-1);
static int16_t g_290 = 1;
static uint32_t g_293 = 4294967287U;
static int8_t g_328 = 3;
static uint32_t g_357 = 0U;
static int32_t g_374 = 3;
static uint8_t g_375 = 0x38;
static uint8_t g_376 = 4U;
static uint32_t g_417 = 3U;
static uint32_t g_427 = 0x30AAFB5A;
static int32_t g_435 = 1;
static uint32_t g_436 = 0U;
static uint32_t g_494 = 4294967295U;
static uint32_t g_498 = 0x0946EBC1;
static int32_t g_524 = 4;
static int32_t g_526 = 0xA8C6D9C0;
static int16_t g_528 = 0;
static int16_t g_530 = 1;
static int32_t g_532 = 0x79FA1166;
static int8_t g_534 = 0xE4;
static uint32_t g_535 = 1U;
static uint8_t g_689 = 247U;
static int32_t g_705 = (-1);
static int32_t g_749 = (-1);
static uint32_t g_750 = 1U;
static uint16_t g_759 = 0U;
static uint32_t g_789 = 0x7FC32161;
static int32_t g_858 = 0;
static uint8_t g_859 = 0x65;
static int16_t g_912 = 0x8036;
static uint8_t g_915 = 0x68;
static uint32_t g_919 = 1U;
static uint16_t g_987 = 65535U;
static uint8_t g_1044 = 0xA9;
static const uint8_t g_1051 = 0x01;
static int32_t g_1071 = 7;
static int8_t func_1(void);
static int16_t func_8(int32_t p_9);
static int16_t func_10(int16_t p_11, int8_t p_12);
inline static uint8_t func_13(uint16_t p_14, uint32_t p_15, const int8_t p_16, int32_t p_17, int16_t p_18);
static int8_t func_29(const int8_t p_30, uint32_t p_31, int32_t p_32);
static int8_t func_35(uint32_t p_36);
static int32_t func_37(uint8_t p_38, int16_t p_39, int16_t p_40, uint32_t p_41);
inline static int32_t func_44(int16_t p_45);
inline static int8_t func_51(uint16_t p_52, int16_t p_53, uint32_t p_54, int8_t p_55, const int32_t p_56);
inline static uint8_t func_69(int32_t p_70, uint16_t p_71, int32_t p_72, uint32_t p_73, uint32_t p_74);
static int8_t func_1(void)
{
    int32_t l_538 = 0xDF109158;
    uint32_t l_539 = 4294967295U;
    int32_t l_820 = 1;
    uint16_t l_1015 = 0x956C;
    int32_t l_1029 = (-2);
    int32_t l_1042 = 0x2ABB9650;
    int32_t l_1072 = 0xBF33D6B8;
    for (g_2 = 11; (g_2 >= (-26)); g_2 = safe_sub_func_int16_t_s_s(g_2, 7))
    {
        const int32_t l_28 = 1;
        int32_t l_918 = 0x76D89FAE;
        int32_t l_972 = 0xB39A7DE6;
        uint8_t l_981 = 0x88;
        int32_t l_1043 = 0xD4A0EF3F;
        g_919 = (g_526 = (+(l_918 = ((safe_lshift_func_int16_t_s_s((-1), (g_912 = func_8((l_820 = (0x095A <= func_10((func_13((0xCC & (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((((((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((l_28 & func_29(l_28, g_2, (safe_add_func_uint8_t_u_u(l_28, (func_35(l_28) & l_28))))))) && l_538), l_538)), l_28)) != l_538) ^ 0x2059) || 1) != l_539) || 0xF1CC), g_534)), 10))), l_539, l_539, l_28, l_539) | g_534), g_289))))))) <= l_28))));
        if (l_28)
        {
            g_435 &= 9;
        }
        else
        {
            uint32_t l_942 = 1U;
            int32_t l_971 = (-1);
            int32_t l_977 = 0x7EAAA216;
            for (g_120 = 0; (g_120 == 9); g_120 = safe_add_func_uint32_t_u_u(g_120, 6))
            {
                uint8_t l_969 = 0xDC;
                int32_t l_973 = 1;
                int32_t l_974 = 0x0487BDB0;
                int32_t l_975 = 0xB7FCFC59;
                if (((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_918, g_919)), (((+((g_376 < g_427) > (g_526 = (+((((((safe_div_func_uint8_t_u_u(((0xEA | g_435) < g_120), g_234)) | (safe_unary_minus_func_int16_t_s((((safe_rshift_func_int8_t_s_s(((+((((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u((g_2 >= 5U), l_942)), g_705)) | 0xB61F26FA) & g_530) < 0xB1418248)) > g_526), 0)) > 0x6DFB) ^ g_859)))) | 0x5F602CD5) ^ l_28) || g_357) != 1))))) > l_942) ^ 4294967292U))), g_289)), l_28)) == g_151))
                {
                    int32_t l_970 = 0x9ECEC2F4;
                    uint32_t l_978 = 1U;
                    int32_t l_1014 = 0x78997931;
                    for (g_374 = 11; (g_374 <= 6); g_374 = safe_sub_func_int32_t_s_s(g_374, 4))
                    {
                        int32_t l_951 = (-1);
                        int32_t l_968 = 0x4DA2C40D;
                        int32_t l_976 = 3;
                        g_435 = ((+((safe_rshift_func_uint8_t_u_u((l_971 = (g_376 <= (!((((safe_lshift_func_int8_t_s_s(l_951, ((g_705 = ((safe_add_func_uint8_t_u_u(0x3C, (safe_mod_func_uint8_t_u_u((g_375 & (((safe_mod_func_uint8_t_u_u((+(safe_add_func_uint32_t_u_u(((g_293 ^ (((((((l_942 & 0x1DC0) & (l_820 |= (l_968 = (g_705 || ((+(safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((1 & g_749), 1U)), g_534)), l_942))) != l_918))))) & l_951) | l_538) == l_969) & g_151) <= 0x8371)) > l_970), g_789))), 0x0D)) | l_918) == g_151)), 248U)))) | g_357)) != g_532))) | l_951) | g_357) >= g_859)))), 6)) && g_114)) || 8);
                        ++l_978;
                    }
                    --l_981;
                    l_975 |= ((l_942 || (g_534 = g_435)) & (l_970 ^ (((((g_328 = (+((g_987 != (l_1014 = ((((((((safe_add_func_uint8_t_u_u(g_288, ((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0x94, (l_820 ^= g_427))), ((g_112--) < (safe_div_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(0x11, (safe_lshift_func_int16_t_s_u((-5), 11)))) == 0xA380) == 0), 0x1C))))), g_919)), 12)), g_530)) | l_972) | 6U), g_120)) < l_28) > 0xB65D) ^ g_919), g_705)) || l_973), g_789)) ^ g_120))) == (-6)) == g_237) < 1U) >= (-1)) ^ l_981) > l_942) < 0x5F2B))) ^ l_539))) || g_524) | 0x5E14) <= 0xFD3A707D) != 0)));
                }
                else
                {
                    if (g_530)
                        break;
                    ++l_1015;
                }
            }
        }
        for (g_237 = 0; (g_237 != 6); g_237++)
        {
            int16_t l_1040 = 0xE332;
            int32_t l_1041 = 0x047D31E0;
            l_820 = l_820;
            l_1041 = ((l_539 <= 1U) == (+(safe_div_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_1029 > ((g_789 = (safe_mod_func_int16_t_s_s(0x8D9E, 0xB8EA))) && g_417)), (((safe_mod_func_uint16_t_u_u((0x732F < (l_820 = (65531U > ((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((g_108 |= (safe_lshift_func_uint16_t_u_s((l_820 && l_1040), l_28))), g_534)), g_427)) | 1)))), 5U)) <= g_376) & g_357))), 1)), 4294967289U)) & g_114) | g_288), g_120))));
        }
        ++g_1044;
    }
    l_1072 &= (safe_rshift_func_uint16_t_u_u(((l_1042 = (0xCE53 <= (safe_rshift_func_int8_t_s_u(g_1051, (safe_sub_func_uint32_t_u_u(((!((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(g_750, 2)) && (safe_rshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(g_289, ((safe_add_func_uint32_t_u_u(l_1015, ((((+(g_114 != (safe_rshift_func_int8_t_s_u(l_539, (~(l_820 > (l_539 & l_1042))))))) != l_1015) >= l_538) || l_1015))) >= g_108))), g_151)) >= 0x605B7C69) | l_1042) ^ (-1)), g_112))), 1U)) >= g_151)) != g_1071), 6U)))))) || g_427), l_538));
    return g_912;
}
static int16_t func_8(int32_t p_9)
{
    uint16_t l_825 = 0xCFF2;
    int32_t l_839 = 0x2367ABED;
    int32_t l_840 = (-6);
    int32_t l_841 = (-6);
    int32_t l_842 = 0x235A639A;
    uint8_t l_907 = 0U;
    l_842 = ((safe_sub_func_int32_t_s_s((l_841 &= (((safe_div_func_uint32_t_u_u((g_112 >= l_825), (g_705 |= ((((safe_sub_func_int8_t_s_s(g_435, (~(g_789 & (p_9 != (((safe_sub_func_uint8_t_u_u((l_825 >= (((g_90 | (l_840 = ((((safe_rshift_func_int8_t_s_u((l_825 > (g_759--)), 2)) && ((l_839 = (safe_sub_func_int16_t_s_s(l_825, l_825))) >= 0xE114B12D)) | 249U) || p_9))) <= p_9) == p_9)), 255U)) != l_825) > l_825)))))) == l_825) < g_427) & g_435)))) < 0x6CDF6C1B) | 0)), p_9)) >= 0x5DFD);
    for (g_289 = 18; (g_289 <= 18); g_289 = safe_add_func_int16_t_s_s(g_289, 6))
    {
        int8_t l_849 = 2;
        int32_t l_851 = 0;
        int32_t l_852 = 0xFC8FB8F4;
        int32_t l_854 = 0xB177E318;
        int32_t l_855 = 0xDE252377;
        int32_t l_856 = (-7);
        int32_t l_857 = 1;
        int8_t l_871 = (-1);
        uint32_t l_881 = 4294967292U;
        for (g_427 = 0; (g_427 != 18); g_427 = safe_add_func_int32_t_s_s(g_427, 6))
        {
            int16_t l_870 = 0xB0D5;
            int32_t l_880 = 0x2E012FC3;
            int32_t l_882 = (-9);
            int32_t l_910 = 0x0C363599;
            int32_t l_913 = 0x24614298;
            for (g_108 = 0; (g_108 < 12); g_108 = safe_add_func_uint8_t_u_u(g_108, 5))
            {
                int32_t l_850 = 0xCCF94996;
                int32_t l_853 = (-1);
                g_859--;
            }
            if (((safe_rshift_func_int8_t_s_u((~((!(l_839 || p_9)) | (l_825 >= (g_108 & ((l_882 = (safe_unary_minus_func_int8_t_s((+(g_524 = (((g_759--) <= l_857) && (((safe_sub_func_int32_t_s_s((((l_880 = ((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(p_9, (65532U | (((p_9 <= p_9) != p_9) || 0)))) < g_111), g_290)) ^ g_374)) | l_881) || (-1)), p_9)) < g_417) >= g_535))))))) <= 0xC4))))), 6)) | l_842))
            {
                uint8_t l_891 = 250U;
                int32_t l_906 = 0xC412ACFF;
                int32_t l_911 = 0xBACC3844;
                int32_t l_914 = 0xEEF90B66;
                if ((((g_859 || (l_856 = p_9)) ^ ((safe_sub_func_int16_t_s_s((0x1C > ((0U != ((safe_rshift_func_int8_t_s_u((-1), (g_530 != ((safe_div_func_uint8_t_u_u((p_9 >= ((((0x1A13 && ((safe_div_func_int16_t_s_s((l_891 &= (((g_120 = (l_880 ^ g_436)) < 0x1B) <= (-10))), p_9)) <= 7U)) && p_9) <= p_9) > g_858)), g_293)) >= l_881)))) >= 6U)) ^ p_9)), g_749)) ^ 0U)) != p_9))
                {
                    if (g_374)
                        break;
                }
                else
                {
                    uint8_t l_905 = 8U;
                    l_852 ^= (g_532 = (safe_mod_func_uint8_t_u_u(((+(g_532 | (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_891 < l_880), g_750)), (safe_mod_func_uint32_t_u_u(((p_9 <= ((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s((((g_111 || 255U) && ((((l_905 > ((l_906 ^= (p_9 < 0x50)) > 0x723C)) && p_9) != p_9) & g_293)) == 9), 0xD5C977F3)), l_880)) && l_825)) | p_9), 0xD08A5304)))))) == 0x3843B2AB), p_9)));
                    --l_907;
                }
                ++g_915;
            }
            else
            {
                return l_882;
            }
        }
    }
    return g_376;
}
static int16_t func_10(int16_t p_11, int8_t p_12)
{
    uint32_t l_651 = 0xADE78D61;
    int32_t l_668 = 1;
    int32_t l_672 = 0xA454D9FA;
    int32_t l_786 = 0x352537A5;
    int32_t l_787 = 0x9DEC9036;
    int32_t l_788 = 1;
    int32_t l_819 = 1;
    for (g_436 = (-26); (g_436 < 41); ++g_436)
    {
        int8_t l_639 = 0xEE;
        int32_t l_640 = 0x73016CAA;
        int32_t l_646 = 9;
        uint8_t l_673 = 1U;
        uint32_t l_706 = 0x256860EB;
        int32_t l_778 = (-1);
        int32_t l_816 = 0;
        l_646 = (l_640 = (((safe_lshift_func_int8_t_s_s(0x9F, 2)) <= (0xC7 != (((safe_lshift_func_uint8_t_u_s(p_11, l_639)) != l_640) >= (safe_unary_minus_func_int16_t_s(p_11))))) > ((safe_sub_func_int8_t_s_s(g_375, (p_12 || (((safe_mod_func_int8_t_s_s((-3), g_375)) && g_524) & l_640)))) && (-5))));
        for (g_112 = (-29); (g_112 > 13); g_112 = safe_add_func_uint32_t_u_u(g_112, 1))
        {
            int32_t l_671 = (-8);
            int32_t l_699 = (-1);
            int32_t l_748 = (-1);
            uint32_t l_783 = 1U;
            for (g_290 = 0; (g_290 == 4); g_290 = safe_add_func_int8_t_s_s(g_290, 1))
            {
                int8_t l_676 = (-10);
                int32_t l_681 = (-4);
                int32_t l_696 = 1;
                uint16_t l_704 = 8U;
                uint16_t l_776 = 1U;
                l_651 = (g_436 | g_114);
                if ((((safe_rshift_func_int16_t_s_s(((l_639 & p_11) > (safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((l_672 = (safe_rshift_func_uint16_t_u_s(((((((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((p_12 | 0x3C2F), 7)), 4)) <= (((-1) == (g_526 & (((safe_lshift_func_uint8_t_u_u((l_668 = p_11), 1)) >= (safe_add_func_int16_t_s_s((0U ^ (0x5A3187CF && 0x2FF34442)), 0U))) < l_651))) | p_12)), l_671)) >= 0x79E0FF02) != 0x38741EED) == g_112) & 248U) < g_534), 12))), 4294967287U)) <= 0x85), l_646))), p_12)) != l_671) < l_673))
                {
                    int8_t l_679 = 0;
                    int32_t l_707 = 0xA579C307;
                    int16_t l_760 = 0xDA51;
                    if ((safe_rshift_func_uint16_t_u_u(l_676, 14)))
                    {
                        uint8_t l_680 = 0x9E;
                        uint32_t l_687 = 0x17459A9C;
                        int32_t l_688 = 0x6220E602;
                        l_640 &= ((g_689 = ((safe_mod_func_uint32_t_u_u((l_679 == g_114), ((l_679 != (6 < (l_681 = l_680))) ^ (safe_sub_func_uint8_t_u_u(p_11, ((p_11 != ((l_688 = (safe_unary_minus_func_uint16_t_u((((((l_668 = g_535) <= ((((0xECBDFCB6 ^ l_676) != p_12) == l_687) && l_676)) | l_679) & l_651) && 0x12)))) != g_526)) < g_90)))))) || 0xA7)) > l_671);
                        l_707 = (((l_706 = ((g_705 ^= (l_687 | ((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_696 | (safe_sub_func_uint32_t_u_u((l_699 && p_12), (safe_sub_func_int8_t_s_s((((0xED675A7E && g_111) && ((l_676 != ((l_704 = (((l_671 = (0x4B > ((l_646 ^= ((((safe_sub_func_uint8_t_u_u((g_435 > p_11), 1U)) & p_12) < l_699) & 0x56)) != 0))) | p_11) | l_696)) >= 0x77)) || p_12)) != p_11), p_12))))), 0xACB7)), g_108)) <= p_12))) | 0x74CA)) >= 0x96EB) || g_234);
                        if (g_417)
                            break;
                        if (p_11)
                            break;
                    }
                    else
                    {
                        int32_t l_761 = 5;
                        l_671 = p_11;
                        l_671 = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0x3C5AF5AF, (((255U < l_696) < ((safe_rshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u((l_640 || 8), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_707 |= (++g_376)) != ((safe_lshift_func_uint8_t_u_s(p_11, (safe_rshift_func_uint8_t_u_s(g_2, g_532)))) && ((safe_mod_func_int32_t_s_s(g_526, 1U)) & g_288))), p_11)), 5)), p_12)), g_530)))) & l_679), l_679)) || p_12)) > g_120))) || g_290), 2));
                        l_761 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((l_671 = 0x42C4EBE4) | ((safe_div_func_uint32_t_u_u((g_90 & (safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((g_289 ^ g_535), l_681)), 10)) && ((p_11 & (safe_lshift_func_uint16_t_u_u((--g_750), 14))) && ((safe_div_func_int8_t_s_s((((l_760 = (safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((g_759 = 0xCDBF), g_289)) > (g_151 &= (g_289 & g_90))), g_90))) == l_640) || g_357), l_696)) && g_528))) || g_436), p_11))), 0xAFDC1896)) || 0xE385)) <= g_237), g_526)), g_534));
                    }
                    g_705 ^= 0xC88E03CC;
                    if (p_11)
                        continue;
                }
                else
                {
                    int32_t l_777 = 0xF418FF27;
                    int32_t l_779 = (-1);
                    int8_t l_782 = 0xB1;
                    l_748 |= (safe_div_func_int16_t_s_s((g_528 |= (7U != (0U & (safe_rshift_func_uint16_t_u_s(((l_696 != ((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((p_11 && ((l_776 = g_689) & ((((((l_777 = (((2 || 0xC54F4399) ^ p_12) <= p_12)) && (-1)) <= p_12) == g_374) > p_11) <= g_534))) > g_357) >= p_11), 6)), l_778)) || 1) == 0x4DED), p_11)), l_779)), 0)) > g_750)) <= 9U), 0))))), l_779));
                    for (g_328 = (-7); (g_328 <= 10); ++g_328)
                    {
                        if (p_12)
                            break;
                        if (p_12)
                            continue;
                        l_783++;
                    }
                }
                --g_789;
                l_671 = ((g_530 ^ ((safe_mod_func_int16_t_s_s(((((l_748 &= (!(safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((((((4294967287U <= (((safe_unary_minus_func_int16_t_s(((0U & (((g_293 |= (safe_div_func_int16_t_s_s(p_12, l_681))) || p_12) == (l_673 > (!((safe_rshift_func_uint8_t_u_u((g_376 ^= ((safe_rshift_func_uint8_t_u_s(l_783, (g_534 ^= (+(safe_add_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s((g_328 == 0xDC5F), l_668)) ^ l_640) < (-1)) | 0xBCF8), p_12)))))) >= l_776)), l_816)) ^ 0))))) || 1U))) || g_528) != p_12)) & l_786) && g_290) | p_12) ^ 0xEB) & g_436) <= l_639), l_651)), l_671)), 3)), g_532)))) & l_681) < 0x2832) <= p_11), l_699)) || l_786)) > p_11);
            }
        }
        l_787 = 1;
        if (p_11)
            continue;
    }
    l_819 = (l_788 || (safe_mod_func_int32_t_s_s((-10), 0x3A1E7BE7)));
    return g_494;
}
inline static uint8_t func_13(uint16_t p_14, uint32_t p_15, const int8_t p_16, int32_t p_17, int16_t p_18)
{
    int16_t l_545 = (-8);
    int32_t l_563 = 6;
    int32_t l_568 = 0;
    int32_t l_569 = 0x60BC6B06;
    int32_t l_570 = (-1);
    const uint8_t l_571 = 4U;
    int32_t l_572 = 3;
    int8_t l_625 = 0xC5;
    g_435 = (safe_sub_func_uint32_t_u_u(((~(p_18 &= (((safe_sub_func_uint8_t_u_u((l_545 != (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s(g_535, (safe_unary_minus_func_int32_t_s((l_570 = ((l_569 |= (((((p_14 == (((l_545 > (safe_div_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u((~p_16), (safe_rshift_func_uint8_t_u_s((((!((l_568 &= (((safe_lshift_func_int8_t_s_u(((((l_563 = 0x5E) | ((p_15 < ((0 >= (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_524, l_545)), l_545))) | l_545)) != p_16)) >= 4294967293U) & l_545), g_535)) > l_545) ^ p_15)) ^ g_535)) ^ l_545) >= g_530), g_237)))) & 9) == p_14) == p_15), l_545))) && g_289) && 0)) || p_17) >= 0) || l_545) | 0x5FA84D3B)) >= p_15)))))) > p_14) == p_14) ^ g_374), g_120)), l_571))), l_572)) == p_16) != 0x5DE9))) < l_571), l_572));
    for (g_290 = 0; (g_290 < (-21)); g_290--)
    {
        int32_t l_575 = (-1);
        int32_t l_607 = 0x15963163;
        uint32_t l_632 = 0xBC6F42F2;
        l_575 = l_563;
        g_524 = ((safe_div_func_int8_t_s_s(((g_112 = (safe_rshift_func_uint16_t_u_s((p_18 <= (((safe_mod_func_int32_t_s_s(0x9AA06428, p_14)) >= 0x21) >= (safe_div_func_int8_t_s_s(((g_293 = (safe_mod_func_uint32_t_u_u(g_417, (g_427 ^= ((safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((-1), (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((l_575 |= (++g_376)), (l_571 & (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((~((l_568 = (p_16 == ((safe_lshift_func_int16_t_s_u((0x01 | 0U), 13)) > g_417))) ^ 0x7F)), 5)), l_607))))) || p_15), g_237)) != 0xD29A), l_607)))) == l_607), g_151)) == 65531U))))) <= p_14), 4)))), g_535))) && (-10)), 3)) | 0xE7);
        l_575 = ((safe_div_func_uint32_t_u_u((+((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0xC9B0, g_494)), (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((l_570 = ((((g_111 >= (-1)) != 0) != p_18) || (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(l_607, (((l_625 < ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_571, p_15)), l_632)), p_18)) >= 0xF1D0)) > 0xAD) > p_14))) < 0x31), 0xBDBA)))), g_524)), l_632)))) >= l_569)), p_18)) && 0x46E749F2);
    }
    return p_18;
}
static int8_t func_29(const int8_t p_30, uint32_t p_31, int32_t p_32)
{
    uint16_t l_377 = 0x4EFF;
    int32_t l_378 = (-1);
    int32_t l_379 = 0;
    int16_t l_393 = 0x2812;
    uint16_t l_416 = 0x1B79;
    int8_t l_420 = (-4);
    int32_t l_523 = (-1);
    int32_t l_525 = 0;
    int32_t l_527 = 9;
    int32_t l_529 = 0xA38A4656;
    int32_t l_531 = 0x2AF201FA;
    int32_t l_533 = (-8);
    l_377 = 0xF3D4169C;
    if (((((l_379 = (p_30 == (l_378 |= g_120))) && (g_328 & ((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(65535U, 15)) || (safe_unary_minus_func_int32_t_s((l_379 |= p_30)))), (p_31 > 5))) >= g_2) | ((((g_293 ^= (g_90 &= ((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s((-4), 1)) == l_393) >= 3) && p_30), 0xC98E5AE5)) > l_393))) >= 1U) & l_377) == p_30)), g_108)) < g_376))) | g_290) || p_32))
    {
        int8_t l_398 = 5;
        const int32_t l_413 = (-6);
        int32_t l_414 = 0xDE9391A5;
        int32_t l_415 = 0xA26975CE;
        g_417 = (safe_div_func_int16_t_s_s(0xD671, (safe_mod_func_uint16_t_u_u((l_393 & (((l_398 = 0x0B62) != (((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((0U >= l_393) <= (safe_lshift_func_uint8_t_u_s((6U == ((safe_add_func_int32_t_s_s((g_111 ^ (l_415 &= ((l_414 ^= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_290 < ((g_112 = g_111) | l_413)), p_31)), p_30))) >= g_114))), g_293)) & g_289)), 1))), l_379)) && 0x1B2EE99A), 9U)), l_416)) >= l_377) || 0xA5)) && l_413)), 0x8C04))));
        l_420 &= (safe_lshift_func_int16_t_s_u(g_2, 6));
    }
    else
    {
        const uint32_t l_428 = 1U;
        int32_t l_429 = 0x71F8D497;
        int32_t l_434 = 0xF2C3C599;
        if (g_2)
        {
            uint32_t l_426 = 8U;
            g_427 ^= (safe_sub_func_uint8_t_u_u((!p_30), (l_426 = (safe_div_func_int16_t_s_s(l_416, l_393)))));
            l_429 = l_428;
        }
        else
        {
            uint8_t l_441 = 255U;
            for (l_416 = 0; (l_416 <= 33); l_416 = safe_add_func_uint8_t_u_u(l_416, 3))
            {
                for (p_31 = 0; (p_31 <= 55); p_31++)
                {
                    return l_428;
                }
            }
            g_436--;
            for (l_377 = 27; (l_377 < 57); ++l_377)
            {
                ++l_441;
            }
            g_435 = p_32;
        }
    }
    for (g_151 = (-29); (g_151 < 0); g_151++)
    {
        uint32_t l_448 = 4294967295U;
        int32_t l_459 = 0x917BC99A;
        int32_t l_493 = 1;
        uint16_t l_517 = 0x80C8;
        l_459 = ((+(l_378 &= (!((l_448 = g_289) ^ (255U & g_435))))) || (((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(0U, (g_436 == ((l_379 |= ((safe_div_func_int8_t_s_s((g_293 <= (g_108 & (((-1) < (safe_div_func_int16_t_s_s(1, g_108))) <= p_30))), l_448)) || 0xFEF1ACA3)) ^ g_237)))) && g_417), l_448)), 0x19DC)) <= l_448) & (-1)));
        if ((((safe_sub_func_uint8_t_u_u(1U, ((safe_div_func_int32_t_s_s(0xAEA6EA95, g_293)) == (safe_mod_func_uint16_t_u_u(((l_459 ^= (p_30 & (safe_div_func_uint8_t_u_u(g_435, (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((l_416 == ((1U | (((l_377 >= (g_290 != l_420)) < 0) == p_30)) || p_30)), g_374)) > 247U), (-1))), 8)))))) >= p_30), 0x5CE9))))) & g_417) < g_328))
        {
            uint8_t l_488 = 6U;
            l_488 = (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(p_30, ((g_288 = g_436) != (safe_add_func_uint8_t_u_u(255U, (g_120 = ((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_393, l_377)), 3)) <= (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(0, 15)), 14))))))))), 5));
            l_378 = (1U && ((safe_add_func_uint8_t_u_u(l_459, (g_357 & (l_493 = (((g_114 < 0x77) == (((g_290 & (-1)) ^ ((p_31 == (safe_mod_func_int16_t_s_s(g_288, l_488))) != 1U)) & p_32)) <= l_459))))) || 0x3B));
            g_494++;
            l_459 = g_293;
        }
        else
        {
            int16_t l_497 = 0x9927;
            int32_t l_514 = (-1);
            g_498--;
            g_435 |= (safe_sub_func_int8_t_s_s((4U == g_375), (g_417 == (g_328 &= (((g_376 > (((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(g_234, 1)), 10)) || ((l_497 || ((((-1) | p_32) != ((safe_rshift_func_uint16_t_u_u(g_417, l_459)) != 1U)) || p_31)) ^ g_376)) && p_30)) & p_30) == p_31)))));
            for (g_288 = 16; (g_288 < (-14)); g_288 = safe_sub_func_int16_t_s_s(g_288, 9))
            {
                int32_t l_511 = 0xA6F94548;
                l_511 = ((g_112 = g_498) | (((-7) && l_511) != p_30));
                g_435 = ((g_328 |= ((l_459 != (--g_112)) & 5)) > 0x22);
            }
            l_379 ^= ((p_30 > (p_32 || (l_514 = (l_493 & (l_459 = l_377))))) || (g_112 = (((safe_add_func_uint16_t_u_u(l_393, (l_517 = (l_459 ^= l_378)))) <= (!g_293)) & (((safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(g_290, (g_376 = (l_514 = g_376)))) != p_30), p_32)) || 65535U) <= g_288))));
        }
        return p_30;
    }
    g_535--;
    return l_533;
}
static int8_t func_35(uint32_t p_36)
{
    uint32_t l_46 = 1U;
    int32_t l_79 = 0x86237DDC;
    int32_t l_80 = 0;
    g_376 = func_37(g_2, (((((safe_add_func_int32_t_s_s(func_44(l_46), (safe_div_func_uint32_t_u_u((g_90 = (((safe_div_func_int8_t_s_s(func_51(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0xA2, 3)), ((l_80 |= (safe_lshift_func_uint16_t_u_s(1U, (l_79 &= ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((func_69(g_2, p_36, p_36, (+((safe_sub_func_int8_t_s_s(g_2, g_2)) == p_36)), p_36) & 1U) && g_2) & g_2), 15)), g_2)) & g_2))))) < l_46))), p_36)) | (-1)), g_2, p_36, p_36, p_36), g_2)) || l_46) != 8)), p_36)))) > g_2) == p_36) >= p_36) & p_36), l_46, g_2);
    return p_36;
}
static int32_t func_37(uint8_t p_38, int16_t p_39, int16_t p_40, uint32_t p_41)
{
    int32_t l_94 = 0xB12ACF19;
    int32_t l_110 = 1;
    uint8_t l_115 = 0U;
    int32_t l_116 = 3;
    if (p_38)
    {
        int16_t l_93 = 0xBCD5;
        uint32_t l_99 = 4294967295U;
        int32_t l_109 = 0xF746A6EC;
        int32_t l_113 = (-1);
        uint32_t l_117 = 3U;
        int32_t l_118 = 0x379BBDC2;
        l_118 ^= (((((safe_add_func_uint8_t_u_u((++p_38), (((safe_add_func_int8_t_s_s(((l_99--) <= ((l_116 = (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((((l_113 = ((g_112 = (g_111 = ((g_2 | (p_40 > l_93)) ^ (((safe_add_func_int8_t_s_s(g_90, (g_108 = (0xE2 == g_2)))) && g_90) || ((l_110 = (l_109 = ((p_40 && ((g_2 <= 0x0087D4E0) ^ g_108)) || g_2))) ^ g_2))))) >= 1U)) <= g_2) <= 0xCD) && g_114) ^ p_40) || l_113), l_115)), g_2))) < l_115)), p_40)) >= g_2) > 0xE043))) > g_90) ^ g_114) || l_117) < p_40);
    }
    else
    {
        uint8_t l_119 = 0x64;
        l_116 = l_119;
        g_120 = (l_110 = g_90);
    }
    if ((+p_39))
    {
        int32_t l_124 = 2;
        uint16_t l_152 = 1U;
        int32_t l_153 = (-8);
        int32_t l_154 = (-1);
        int32_t l_158 = 0x8E731B53;
        if (((0x49D9 <= (safe_div_func_uint32_t_u_u(l_124, (((~(safe_add_func_uint8_t_u_u(((((g_120 >= ((l_154 = (g_108 |= ((l_94 == (safe_sub_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((~(((safe_add_func_int16_t_s_s((p_39 |= (l_153 = (p_41 | ((safe_add_func_uint8_t_u_u(249U, (g_114 != (l_116 > (((((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((p_40 & 0x18863885) < p_38) != g_151), 4294967295U)), 1)) & l_115), l_116)) && g_90) | g_2) | p_38) == l_124))))) <= l_152)))), 0x7D2F)) != 4294967286U) == 251U)), g_2)), p_41)), 0x7BD2)) || p_39), l_110))) || p_40))) > p_41)) & g_90) && p_40) > l_115), g_114))) | 0x64D5) && l_110)))) || g_112))
        {
            uint32_t l_161 = 0U;
            l_153 = p_38;
            l_158 = (safe_rshift_func_uint16_t_u_u(((((~l_158) ^ l_115) == (((0x9730 > p_39) || (g_90 = ((safe_lshift_func_uint16_t_u_s(g_90, 4)) <= l_161))) > (p_40 = p_39))) == l_158), (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((4294967288U >= p_38), l_161)), 5U))));
        }
        else
        {
            uint8_t l_168 = 255U;
            for (g_151 = 0; (g_151 <= (-4)); g_151 = safe_sub_func_int16_t_s_s(g_151, 6))
            {
                return l_168;
            }
        }
    }
    else
    {
        const uint32_t l_173 = 4294967295U;
        int32_t l_195 = 0x6E0B1FDE;
        uint16_t l_344 = 0xA71A;
        int32_t l_373 = 0x7C05EB80;
        for (l_115 = 0; (l_115 != 10); l_115 = safe_add_func_int8_t_s_s(l_115, 1))
        {
            return p_40;
        }
        if ((safe_mul_func_uint8_t_u_u(l_173, (p_38 > (safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0xDD, (safe_add_func_uint8_t_u_u((0x99C725F5 | (((safe_add_func_int8_t_s_s((0x7F && ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((+((((safe_rshift_func_int16_t_s_u(g_114, 0)) <= ((p_39 <= 0U) != (l_195 = (g_112--)))) >= (safe_lshift_func_int8_t_s_s(((65527U != l_94) >= l_173), g_90))) < g_151)), g_111)), l_173)) ^ 2U)), l_115)) > g_114) && g_120)), p_39)))), g_114)), l_94)) >= 0x6447), p_40))))))
        {
            uint32_t l_198 = 0x88C7F9DB;
            int32_t l_213 = 1;
            int32_t l_223 = 0;
            --l_198;
            l_223 = (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((p_38++), 0)) >= ((safe_lshift_func_uint16_t_u_s((l_213 = l_198), 12)) > g_112)), g_120)), (((safe_add_func_int32_t_s_s(((g_112 == (safe_sub_func_uint32_t_u_u((1 | g_108), (safe_unary_minus_func_uint16_t_u(l_116))))) == (safe_add_func_uint16_t_u_u((((g_90 <= (safe_lshift_func_int8_t_s_s(l_94, l_195))) <= l_198) < l_110), p_39))), l_195)) > p_39) > g_2))), g_2));
            g_234 = ((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((((((safe_mod_func_uint8_t_u_u(p_41, p_38)) < 0x8A0DB83A) == ((safe_sub_func_int32_t_s_s(g_2, ((l_173 || ((p_40 & (g_112 < 0x80)) | l_115)) < l_198))) && p_39)) & l_173) || p_41) != l_173), p_39)), p_39)) == l_94);
        }
        else
        {
            int32_t l_256 = 0xDB30F1BE;
            int32_t l_260 = (-4);
            int32_t l_286 = 0xB4F27B7F;
            int8_t l_322 = 7;
            uint16_t l_341 = 0x6382;
            uint8_t l_356 = 1U;
            for (p_39 = (-23); (p_39 >= 4); p_39 = safe_add_func_int16_t_s_s(p_39, 7))
            {
                uint8_t l_321 = 0U;
                int32_t l_323 = (-1);
                if (p_40)
                {
                    uint32_t l_261 = 0x13A0B3C3;
                    int32_t l_262 = 0x0A4866C5;
                    g_237++;
                    l_262 = ((safe_add_func_int16_t_s_s(l_173, (g_112 = (safe_rshift_func_uint8_t_u_s((--p_38), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((((g_114 && (safe_add_func_int16_t_s_s(p_40, (-9)))) & ((((0xF8C49FD6 < (safe_mod_func_int8_t_s_s((l_256 = (safe_lshift_func_int16_t_s_u(g_120, 5))), (((+(safe_rshift_func_int16_t_s_s(((0xBDF83237 != 0xF4F58305) || 0x1C8D4623), 3))) && g_111) & l_260)))) == l_260) & l_261) ^ p_41)) | p_40), p_40)) && 2), 0x0F))))))) | p_41);
                }
                else
                {
                    int8_t l_267 = 0xC2;
                    int32_t l_285 = (-2);
                    int32_t l_287 = 0x5BD8F16D;
                    int32_t l_291 = 0x1ED2F5AE;
                    int32_t l_292 = 1;
                    for (l_195 = 0; (l_195 == 9); l_195 = safe_add_func_uint8_t_u_u(l_195, 2))
                    {
                        return g_90;
                    }
                    g_288 = ((safe_lshift_func_uint16_t_u_u(((l_267 = g_90) && (l_286 = (l_285 ^= ((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((l_195 ^= (l_260 = ((safe_div_func_int8_t_s_s((~(g_234 != (l_267 > ((((-1) <= l_173) ^ (safe_unary_minus_func_int32_t_s((-1)))) < (safe_unary_minus_func_int32_t_s(0x3446F389)))))), 255U)) | (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((l_256 |= (((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(l_110, g_114)), p_39)) && 0x43E8) > p_40)) != 4294967287U), 5)), 1U))))) || 0xE19209CF), l_116)), l_267)) & 0x85)))), l_287)) || p_39);
                    --g_293;
                    l_323 = (l_116 = (l_260 = (g_2 != (safe_add_func_int16_t_s_s(g_293, (g_2 ^ ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(l_286, p_38)), 13)) != (!(safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_div_func_uint32_t_u_u(((+(safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((p_40 >= p_38) && (safe_add_func_uint16_t_u_u(65533U, (((g_90 = ((g_237 <= g_237) == g_108)) ^ l_321) != 0U)))), 5)), g_237)) < p_40), 0x6B)), l_322)) == l_323), 0x131B15F3))) == 0x7A), l_110)))), 0x984C))))))))));
                }
                l_323 &= p_38;
            }
            l_195 = ((p_40 || (g_289 != (g_112 = (((p_41 <= ((safe_div_func_int32_t_s_s((g_328 = (l_286 = p_39)), p_40)) > ((safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(g_112, 5)) ^ g_112), (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((g_293 = 0xABA6458F) < l_195), g_108)), g_288)), p_41)))) ^ p_39), l_322)) < 1))) < g_112) <= g_290)))) && 7U);
            l_341 = 1;
            g_357 = (((((safe_div_func_int8_t_s_s(l_344, (safe_unary_minus_func_uint8_t_u((((g_2 && (((p_38 = (g_114 = p_38)) || (p_38 = (((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((g_151 <= 1) <= (((g_120 == (l_286 = ((5U ^ (((0x1361 <= ((safe_add_func_int16_t_s_s((((g_290 = (safe_lshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((8 > g_293), g_289)) | 0xC6216E46), 0))) >= l_256) == l_173), g_108)) >= l_256)) <= p_41) | l_356)) & (-1)))) > g_112) | l_195)), 0)), 65535U)) && g_90) & l_256))) > l_341)) | l_344) && p_39))))) | l_115) || p_41) < p_39) ^ p_40);
        }
        l_195 = (safe_mod_func_uint32_t_u_u(l_116, (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_195, ((safe_rshift_func_int16_t_s_u((1U == 0xAB92), 4)) < (safe_rshift_func_uint8_t_u_s((l_110 = ((safe_sub_func_uint8_t_u_u(l_344, g_120)) && (~(safe_mod_func_int32_t_s_s((l_373 ^= p_39), (-9)))))), 7))))), 0x53))));
        g_374 = 0x59750AAB;
    }
    g_375 = l_116;
    return g_293;
}
inline static int32_t func_44(int16_t p_45)
{
    return p_45;
}
inline static int8_t func_51(uint16_t p_52, int16_t p_53, uint32_t p_54, int8_t p_55, const int32_t p_56)
{
    int16_t l_87 = 0;
    int32_t l_88 = (-6);
    int32_t l_89 = 1;
    l_89 |= ((0 > (p_52 = (safe_rshift_func_int16_t_s_s(0, (safe_lshift_func_uint16_t_u_s((l_87 = g_2), 1)))))) <= l_88);
    return g_2;
}
inline static uint8_t func_69(int32_t p_70, uint16_t p_71, int32_t p_72, uint32_t p_73, uint32_t p_74)
{
    uint8_t l_78 = 0xB7;
    l_78 = 0;
    return p_74;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_90;
    csmith_sink_ = g_108;
    csmith_sink_ = g_111;
    csmith_sink_ = g_112;
    csmith_sink_ = g_114;
    csmith_sink_ = g_120;
    csmith_sink_ = g_151;
    csmith_sink_ = g_234;
    csmith_sink_ = g_237;
    csmith_sink_ = g_288;
    csmith_sink_ = g_289;
    csmith_sink_ = g_290;
    csmith_sink_ = g_293;
    csmith_sink_ = g_328;
    csmith_sink_ = g_357;
    csmith_sink_ = g_374;
    csmith_sink_ = g_375;
    csmith_sink_ = g_376;
    csmith_sink_ = g_417;
    csmith_sink_ = g_427;
    csmith_sink_ = g_435;
    csmith_sink_ = g_436;
    csmith_sink_ = g_494;
    csmith_sink_ = g_498;
    csmith_sink_ = g_524;
    csmith_sink_ = g_526;
    csmith_sink_ = g_528;
    csmith_sink_ = g_530;
    csmith_sink_ = g_532;
    csmith_sink_ = g_534;
    csmith_sink_ = g_535;
    csmith_sink_ = g_689;
    csmith_sink_ = g_705;
    csmith_sink_ = g_749;
    csmith_sink_ = g_750;
    csmith_sink_ = g_759;
    csmith_sink_ = g_789;
    csmith_sink_ = g_858;
    csmith_sink_ = g_859;
    csmith_sink_ = g_912;
    csmith_sink_ = g_915;
    csmith_sink_ = g_919;
    csmith_sink_ = g_987;
    csmith_sink_ = g_1044;
    csmith_sink_ = g_1051;
    csmith_sink_ = g_1071;
    platform_main_end(0,0);
    return 0;
}
