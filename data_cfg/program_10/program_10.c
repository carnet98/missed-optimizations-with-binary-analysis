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
static int8_t g_3 = 0xF5;
static int32_t g_13 = 6;
static int32_t g_15 = 0xAF5BFB66;
static uint16_t g_76 = 0xD03D;
static int32_t g_98 = 0x38BBD881;
static uint32_t g_103 = 0U;
static uint32_t g_113 = 5U;
static uint32_t g_114 = 0x1120EAC2;
static int32_t g_115 = 4;
static int32_t g_155 = 1;
static uint16_t g_199 = 0xDB83;
static uint32_t g_260 = 0xBA6C6404;
static uint32_t g_261 = 0x596C44C6;
static int8_t g_279 = 0xE3;
static int32_t g_300 = 0xA6382927;
static int8_t g_301 = 1;
static int32_t g_339 = 0x23497646;
static int8_t g_405 = 1;
static uint8_t g_471 = 0xBA;
static int32_t g_485 = 0x46F7CA8C;
static int16_t g_590 = 0xFE01;
static uint32_t g_679 = 4294967288U;
static uint32_t g_745 = 0xD9AAD0A0;
static uint8_t g_841 = 0U;
static uint16_t g_904 = 0x3B94;
static uint32_t g_926 = 5U;
static uint32_t g_953 = 0x22E43E30;
static int8_t g_961 = 0xCB;
static int8_t g_1017 = 0xEB;
static int32_t func_1(void);
static int16_t func_18(uint8_t p_19, uint16_t p_20, int32_t p_21, uint32_t p_22, uint32_t p_23);
inline static const int32_t func_27(int32_t p_28, uint8_t p_29);
inline static const uint8_t func_34(uint16_t p_35, int8_t p_36);
inline static int32_t func_39(uint32_t p_40, uint32_t p_41);
inline static int16_t func_49(int32_t p_50, int32_t p_51);
inline static uint8_t func_67(int32_t p_68, uint32_t p_69, uint32_t p_70, const int16_t p_71);
static uint8_t func_72(uint32_t p_73, int32_t p_74, const int8_t p_75);
static int8_t func_77(int8_t p_78, const uint32_t p_79, uint32_t p_80, uint8_t p_81);
static int16_t func_94(int16_t p_95, uint32_t p_96, int8_t p_97);
static int32_t func_1(void)
{
    int16_t l_2 = (-1);
    int32_t l_8 = 0xA924C000;
    int32_t l_1035 = 1;
    int32_t l_1050 = 0x1CC4DB25;
    uint32_t l_1051 = 0xC58A46B5;
    g_3 = l_2;
    for (g_3 = 0; (g_3 > (-22)); g_3 = safe_sub_func_int16_t_s_s(g_3, 9))
    {
        uint32_t l_9 = 0x95A97963;
        int32_t l_12 = 0x0D461E3F;
        int32_t l_14 = 0xC2DD78F4;
        int32_t l_1020 = 0;
        g_15 = (safe_add_func_uint32_t_u_u((l_9 = ((l_8 = (-3)) < 4294967287U)), (safe_sub_func_int32_t_s_s((l_12 = (g_13 = l_12)), ((l_2 > l_2) != l_14)))));
        for (g_15 = 25; (g_15 > 17); g_15 = safe_sub_func_uint16_t_u_u(g_15, 1))
        {
            uint32_t l_37 = 1U;
            l_1035 = ((0xBB4F && func_18((((safe_rshift_func_uint8_t_u_s(255U, (l_8 = (safe_unary_minus_func_int32_t_s(func_27(g_13, (l_14 = ((safe_lshift_func_uint16_t_u_s((0 <= ((safe_sub_func_uint8_t_u_u((g_926 = ((func_34(l_12, l_37) != (l_8 ^ (((-1) < g_3) >= g_13))) ^ l_8)), 0xBE)) | g_13)), 5)) < 0xA56C)))))))) < g_15) != 1U), l_37, g_13, l_2, l_1020)) | g_3);
            l_14 = (l_37 > l_37);
        }
        g_15 = (-1);
    }
    l_1035 = ((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1035, 0)), l_1035)), ((g_13 <= ((-3) == (l_8 = (((safe_mod_func_int32_t_s_s(l_8, (l_1051 = (safe_sub_func_uint8_t_u_u(l_1035, ((l_1050 = (g_301 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_15, l_8)), g_15)))) == g_339)))))) >= g_279) > g_261)))) ^ g_339))) <= 0);
    return g_15;
}
static int16_t func_18(uint8_t p_19, uint16_t p_20, int32_t p_21, uint32_t p_22, uint32_t p_23)
{
    const uint8_t l_1032 = 0x00;
    int32_t l_1033 = 0x80E3B346;
    int32_t l_1034 = 0xC5C08EE6;
    g_339 = (l_1034 = ((g_590 = (((safe_unary_minus_func_uint16_t_u(p_22)) > (((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((g_113 = (g_590 || (((g_260 > (g_98 >= ((p_21 = 0) | ((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x8006, p_19)), 5)) && ((g_114 = g_301) ^ 0xF7BD0560)), l_1032)) ^ l_1033)))) | g_15) & g_961))) ^ l_1032), (-7))), 0x071BC091)) >= g_405) < (-3))) && 1)) && l_1033));
    return g_199;
}
inline static const int32_t func_27(int32_t p_28, uint8_t p_29)
{
    int8_t l_931 = 0x7A;
    uint32_t l_945 = 4294967291U;
    int32_t l_947 = 0;
    int32_t l_954 = 0x396DC2CB;
    uint8_t l_1018 = 1U;
    for (g_405 = (-17); (g_405 <= (-3)); g_405 = safe_add_func_int16_t_s_s(g_405, 3))
    {
        uint32_t l_932 = 8U;
        int32_t l_946 = 0x2FD83702;
        int32_t l_1014 = 0x30CAA16A;
        uint8_t l_1015 = 0xA8;
        int16_t l_1019 = 0x31D0;
        g_339 = (safe_rshift_func_int16_t_s_u(l_931, (l_932 = 65529U)));
        p_28 = (safe_rshift_func_int16_t_s_u(4, (((255U ^ ((l_946 = ((p_28 && (safe_sub_func_int8_t_s_s(0, p_28))) ^ (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(l_932, (((safe_mod_func_int16_t_s_s(g_98, (safe_rshift_func_int16_t_s_u((g_485 < (((((0x2A6B || g_98) | p_29) | l_945) || g_114) || l_932)), p_29)))) <= g_301) & p_28))) >= g_3), 1)))) < (-1))) || 0x0B) <= l_947)));
        l_954 = (safe_mod_func_int16_t_s_s((g_953 = (g_841 | ((safe_mod_func_int32_t_s_s(p_29, p_28)) > (((~0x375E) ^ ((g_590 = ((p_29 != l_946) != ((g_904 = (g_76 = (g_76 <= (0x7E == (g_339 <= 0x60))))) | p_28))) == 0xF748)) || l_946)))), g_260));
        if ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0x7D03 | g_841), p_28)), (safe_sub_func_int16_t_s_s(g_961, (((safe_mod_func_uint32_t_u_u(((p_28 != g_261) == (safe_lshift_func_int16_t_s_s(((p_29 = (l_954 = 248U)) <= (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((l_947 < (!l_932)), 6)) && 4294967295U) != p_28), 250U)) >= l_945), p_28))), g_76))), p_28)) || 0x91) & g_471))))))
        {
            int16_t l_976 = 1;
            int16_t l_982 = (-9);
            int32_t l_1016 = (-2);
            g_339 = (p_28 = ((g_15 > g_926) || (+((safe_add_func_uint8_t_u_u((0x71DE < l_976), ((0xCE80 || ((((g_13 ^ l_947) > (((safe_rshift_func_int8_t_s_s(((p_28 >= ((safe_lshift_func_uint8_t_u_u(((l_946 = ((g_590 || g_590) != p_29)) & g_471), 1)) != p_28)) & g_199), 0)) != 0xBEE1) > l_947)) || g_745) < 0x52A63DFC)) != 255U))) != g_926))));
            g_339 = (~l_982);
            g_339 = (safe_mod_func_uint16_t_u_u((l_954 = (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(l_931, p_29)) > (safe_mod_func_int32_t_s_s(p_28, (g_199 & (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((0xD4 <= 0x2B) >= ((g_1017 = (((l_946 = l_932) > (safe_mod_func_int16_t_s_s(((l_1016 = (safe_sub_func_int32_t_s_s((g_115 = (safe_unary_minus_func_uint16_t_u((g_904 = ((l_1014 = (g_590 = l_932)) ^ l_931))))), l_1015))) || g_199), l_1015))) <= g_76)) ^ l_1015)), l_976)), l_976)), l_1018)) | 1U), p_29)) <= 4294967295U), l_1018)) || l_1018), p_28)), 0x09)))))), p_29)), g_155)), (-1)))), 65531U));
        }
        else
        {
            l_1019 = p_29;
            p_28 = 0xB8B61F1B;
        }
    }
    return g_13;
}
inline static const uint8_t func_34(uint16_t p_35, int8_t p_36)
{
    int32_t l_38 = (-4);
    int32_t l_794 = 1;
    int8_t l_806 = 3;
    const int8_t l_842 = 6;
    uint8_t l_901 = 255U;
    const uint32_t l_902 = 0x11872C74;
    uint32_t l_903 = 0xCC393CC8;
    uint16_t l_925 = 0U;
    l_38 = g_15;
    if (func_39((safe_unary_minus_func_uint8_t_u((g_3 > (p_35 = l_38)))), g_3))
    {
        uint32_t l_795 = 0x621C9927;
        uint16_t l_796 = 65530U;
        int32_t l_843 = (-10);
        const int32_t l_863 = (-1);
        if ((+((l_38 | (p_36 >= (g_115 = ((((l_794 = (0xEE336C1B || p_35)) == 1) <= l_795) >= 0xCC52C69E)))) & l_796)))
        {
            l_794 = p_35;
            for (g_103 = 0; (g_103 <= 47); g_103 = safe_add_func_int32_t_s_s(g_103, 2))
            {
                int16_t l_807 = 2;
                int32_t l_808 = 0x8FADB2A0;
                g_115 = (safe_sub_func_uint32_t_u_u(p_35, (((safe_rshift_func_uint16_t_u_s((+(((0xECB61A0A <= (safe_sub_func_int16_t_s_s(g_15, 0x48A5))) || (g_76 = l_806)) > p_36)), 4)) ^ (((0xB081 ^ ((l_808 = (0x5841 && l_807)) || g_15)) > g_679) > 0x0F3F57A4)) & 7)));
            }
        }
        else
        {
            int8_t l_827 = 0xAB;
            int32_t l_834 = 0x42E50F7C;
            int32_t l_844 = 5;
            g_339 = 1;
            l_844 = ((g_103 = (((safe_mod_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(l_795, ((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_279, 2)) & ((safe_lshift_func_int16_t_s_u(((!g_301) <= (!(safe_rshift_func_uint8_t_u_s(l_827, 6)))), 5)) != (safe_lshift_func_int8_t_s_s(((g_199 = ((safe_add_func_int8_t_s_s((l_794 = ((l_834 = (2 | (safe_mod_func_uint8_t_u_u(g_199, l_806)))) >= ((((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((((((((0xB2 <= ((g_841 = (g_76 = (l_827 > p_36))) <= g_279)) <= 0xFC) || g_15) != g_155) ^ 0xAA0C2593) && l_827) & l_842) ^ l_795), 12)) | 9), 6)) || 1U) & g_199) != 0x8A0F))), l_843)) != g_339)) & p_35), p_36)))), g_103)) >= g_261), g_279)) | l_827), g_103)) && g_115))) < l_796) < g_405) || l_796), l_842)) ^ l_806) & g_15)) || l_796);
        }
        g_115 = (safe_lshift_func_uint16_t_u_u((+((g_301 = ((p_35 > (safe_rshift_func_uint16_t_u_u(l_795, (safe_mod_func_int32_t_s_s(1, (l_795 && ((l_794 = (safe_add_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u((0xC44917F6 == (((((((safe_sub_func_uint8_t_u_u(p_35, l_795)) != (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((~l_843) != (((l_863 >= g_115) != 1) <= p_35)), 7)) < 0x4B), p_35))) > l_843) && g_261) == p_36) == l_843) <= p_36)), p_36)) > p_36) == 0xDF81) > 1), (-5)))) >= 65535U))))))) < g_15)) >= g_679)), 13));
    }
    else
    {
        uint8_t l_864 = 0xDC;
        int32_t l_867 = (-4);
        int32_t l_868 = 0x8A889526;
        int32_t l_882 = 0x9015A14D;
        const uint32_t l_883 = 4U;
        int32_t l_884 = 0x664BE390;
        l_864 = (0xA9 >= g_114);
        l_884 = ((p_36 & ((safe_lshift_func_int8_t_s_s(((l_867 = g_115) | (l_868 = l_864)), 6)) || g_114)) < (((l_882 = (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(l_842, 0)) > (((65535U != (safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((!0x5047), (p_35 = (255U ^ (l_794 = ((((safe_mod_func_int8_t_s_s(((g_103 = ((g_405 | g_279) < 255U)) | l_806), 0xF0)) == p_35) || 0x34B71043) && 0x7947BA05)))))) > p_36), 2))) && (-1)) != 0)), 12)), l_38)) > l_806) != g_590)) < l_806) >= l_883));
        l_884 = (safe_lshift_func_int16_t_s_u(0xA552, ((0xCEC2 & ((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((g_300 == 0x59) ^ l_38), 0)) ^ p_36) != (p_35 = ((((l_794 = (g_471 && (safe_sub_func_uint16_t_u_u(((~(((g_76 >= ((~((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((l_867 = (safe_lshift_func_int8_t_s_u((0 | 0x7112), l_901))), l_38)) & g_155), p_35)) | 0xD632)) ^ l_902)) < g_115) ^ l_903)) ^ p_35), l_864)))) > 0xA9) | g_904) <= p_36))), l_901)) < p_36)) && 0x916F)));
        l_794 = (p_35 > ((((0 && (((safe_rshift_func_uint16_t_u_s(((g_113 <= (safe_lshift_func_int8_t_s_u(g_76, (l_882 = 0x98)))) || ((((!(safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_590 = 0x811B), (+(((2U | ((((1U | (safe_lshift_func_int16_t_s_s(((-7) != p_35), 10))) > 0x5D8B18A2) <= p_35) >= p_35)) <= p_35) ^ p_35)))), 0xDC)), g_199))) || 0x3993) & p_35) <= 0x5667)), g_199)) == p_36) > g_339)) >= p_36) | 65535U) >= g_485));
    }
    l_794 = (p_35 != 7);
    g_115 = (p_35 > (((0xFBF3 & (((((0x62 || (safe_add_func_uint32_t_u_u((g_114 = (safe_add_func_uint32_t_u_u(p_35, (safe_add_func_int8_t_s_s(l_806, (0xD5 && l_925)))))), g_115))) < p_36) > g_339) >= p_36) ^ 0x37BC3E05)) && 0) && l_38));
    return g_745;
}
inline static int32_t func_39(uint32_t p_40, uint32_t p_41)
{
    uint8_t l_755 = 0U;
    int32_t l_786 = 0;
    int32_t l_787 = 1;
    for (p_41 = 0; (p_41 != 38); p_41 = safe_add_func_uint8_t_u_u(p_41, 2))
    {
        int16_t l_45 = 0xDDBB;
        int16_t l_46 = 0x9A5C;
        int32_t l_754 = (-7);
        l_45 = g_13;
        l_46 = g_15;
        for (l_45 = 0; (l_45 >= 15); l_45 = safe_add_func_uint16_t_u_u(l_45, 1))
        {
            uint8_t l_52 = 0x10;
            int32_t l_746 = 0xCC4A8F72;
            if (((l_746 = (func_49(g_3, l_52) ^ 1)) < l_52))
            {
                g_115 = ((p_40 || (!(safe_sub_func_uint8_t_u_u(g_155, (((safe_sub_func_uint8_t_u_u((((p_40 | ((safe_lshift_func_int16_t_s_u(g_113, (l_46 | ((l_754 = ((-3) >= g_114)) != (0xFB38248E ^ l_746))))) >= g_113)) > g_261) <= l_755), p_40)) == p_41) != g_260))))) != p_41);
            }
            else
            {
                uint8_t l_774 = 0x2A;
                int32_t l_775 = 1;
                l_775 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_41, g_405)), (((!(safe_sub_func_int8_t_s_s((l_45 < (((safe_unary_minus_func_int8_t_s((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(1, ((safe_rshift_func_int16_t_s_u(((((g_279 = (safe_lshift_func_int8_t_s_s(g_155, 4))) || l_755) <= 0xDEC4) ^ ((safe_add_func_uint32_t_u_u((1 > 0xFB3080E2), 0x9F0363A8)) < 0x5E)), p_40)) && 0xE01F9268))) != p_40), g_339)) > 0x2AFBD095) | l_746))) > l_774) > l_755)), p_40))) ^ 7) < g_103)));
                l_787 = (safe_sub_func_int32_t_s_s((((l_786 = (0x89 | ((g_115 = ((l_754 = (((((g_679 & (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_41, 7)), (p_40 = (l_775 = (safe_sub_func_int8_t_s_s(p_40, (safe_lshift_func_uint16_t_u_s(l_46, 3))))))))) && (g_471 = l_52)) && g_15) < ((g_76 = (((g_103 = 0xCD146A0C) & ((l_746 = (g_15 && g_260)) != l_46)) | g_13)) > 0xC9CC)) && 0x4996)) ^ p_41)) && 0x71FFC8FB))) <= 0x24959F0B) <= 0xE3180534), p_41));
                l_786 = (g_261 | (l_45 != (safe_rshift_func_uint8_t_u_u(p_40, ((((g_590 = (((0 ^ (p_41 ^ (((p_40 || (safe_unary_minus_func_int8_t_s((g_279 = (safe_add_func_int16_t_s_s(((p_41 < p_41) == ((g_114 && p_41) != g_76)), l_52)))))) & l_45) > 8U))) | (-1)) > (-10))) || 0x3E4A) && p_40) & g_745)))));
                if (l_775)
                    break;
            }
            return p_41;
        }
    }
    return p_40;
}
inline static int16_t func_49(int32_t p_50, int32_t p_51)
{
    int32_t l_55 = 0x7067D5B4;
    int32_t l_60 = 0x0DEEA39B;
    const uint16_t l_743 = 65535U;
    int32_t l_744 = 0x27F9189E;
    g_745 = (l_744 = ((safe_mod_func_uint8_t_u_u((l_55 || (safe_sub_func_uint32_t_u_u((l_60 = (safe_add_func_int16_t_s_s(7, 0))), (g_13 > (g_13 && (g_3 & (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((g_15 != ((safe_sub_func_int8_t_s_s(((func_67((0x9EFCF395 <= (func_72((g_76 = l_55), p_51, g_15) != p_51)), p_51, l_55, p_50) > 6U) != p_51), l_743)) ^ p_50)), p_51)), l_743)))))))), l_743)) ^ g_15));
    return g_15;
}
inline static uint8_t func_67(int32_t p_68, uint32_t p_69, uint32_t p_70, const int16_t p_71)
{
    int32_t l_638 = (-9);
    uint32_t l_641 = 0xA15EEDD2;
    int32_t l_642 = (-8);
    int32_t l_671 = 0x287F9EC9;
    int32_t l_674 = 0xD4F35AAC;
    int32_t l_675 = 0xA1F2D75E;
    int32_t l_676 = 0x0EB540D9;
    uint16_t l_677 = 65535U;
    int32_t l_678 = 0;
    int32_t l_680 = 2;
    uint32_t l_707 = 4294967295U;
    g_339 = (((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((~((((g_679 = (l_638 = (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(l_638, 0xA4)) >= ((((0 >= (safe_add_func_uint8_t_u_u((l_642 = l_641), ((safe_rshift_func_uint16_t_u_u((l_641 | ((safe_add_func_int8_t_s_s(g_115, (safe_sub_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((l_678 = (((((1U != (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((((g_471 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((((l_676 = (safe_rshift_func_uint8_t_u_s((l_671 = g_13), (l_675 = ((safe_rshift_func_uint16_t_u_u(l_674, l_674)) | 1))))) > g_98) & l_674), 247U)) || l_671) > l_641), 7)), p_70)) != g_485), g_339)), l_677))) > 0x3C) <= 251U) > 0) == p_71), p_71)) <= g_13), (-1))), l_638)), l_638))) || 0xEEE8) != l_674) == g_261) & g_13)), 0xDCD0)) && p_68) ^ l_674) == p_68), 1U)))) ^ p_68)), 6)) > 0x4228D920)))) ^ 4294967295U) >= l_677) || l_642)) & (-1)), 0)) != 0xBEA12715) && g_103), p_71)))) == l_674) < 0x087B) || 0x8198939B)), 0x2A6A)) | l_677) >= 65530U), p_69)) ^ l_680) == g_113);
    l_638 = (safe_add_func_int32_t_s_s(3, (safe_rshift_func_int16_t_s_s((l_680 = ((safe_add_func_uint16_t_u_u((0x796608AE > 7), (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((g_679 = (safe_add_func_uint16_t_u_u(((l_678 = ((l_675 = (g_590 & (g_199 = 0x96AF))) != ((safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(p_69, p_71)) | (((g_76 = (safe_sub_func_uint16_t_u_u((0xF98F <= (((l_676 = (safe_rshift_func_int16_t_s_s((l_642 = p_68), 1))) >= l_680) == 7U)), g_103))) <= 0xFBCA) != 1)), g_485)) != g_113))) > l_707), p_69))) & 0x9210B718) >= l_680), g_103)) == p_70), g_103)) && 0x1829DB34), 0)))) != 0x510A282E)), p_68))));
    p_68 = ((safe_rshift_func_int16_t_s_s(l_678, ((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(l_707, 1)) && (((safe_add_func_int8_t_s_s((l_680 = l_671), (safe_lshift_func_int16_t_s_s((-5), 4)))) == (safe_mod_func_int32_t_s_s((l_675 || ((p_70 <= (((safe_lshift_func_int8_t_s_s(l_676, 2)) && 0x1C) > ((((l_638 = (l_678 >= p_68)) && 65535U) != p_69) ^ p_70))) < l_707)), l_642))) > 0x6B)) & g_261), l_641)) == g_679))) && l_642);
    g_115 = (p_70 > (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((((safe_add_func_int8_t_s_s(((l_642 != (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((l_641 || (((safe_unary_minus_func_int8_t_s(((g_199 = ((safe_add_func_uint16_t_u_u(((l_678 >= (((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_671 = p_69), l_674)), p_69)) | (g_113 = (((safe_sub_func_uint32_t_u_u(l_680, (safe_rshift_func_int16_t_s_s(((2 <= p_70) & 3U), g_339)))) | (-9)) ^ 1U))) != 0xEB)) && g_471), 5)) & g_76)) || l_676))) <= l_680) || 0xB043)), 0xF48C)), g_279))) || 0xAA), p_68)) < l_677) != l_676) < l_676), 0)), 1)));
    return g_199;
}
static uint8_t func_72(uint32_t p_73, int32_t p_74, const int8_t p_75)
{
    const uint32_t l_86 = 0x79B1000B;
    int16_t l_99 = 0xA291;
    int32_t l_325 = 0xA7BFF7CC;
    int32_t l_337 = 0xEF30843E;
    int16_t l_340 = (-1);
    int32_t l_342 = 0;
    uint16_t l_351 = 0x3B96;
    int32_t l_352 = (-1);
    uint32_t l_459 = 0U;
    int32_t l_619 = (-1);
    uint32_t l_626 = 0x714A2C60;
    if (g_76)
    {
        int32_t l_93 = 0x640DD146;
        int32_t l_116 = 0x4C4DC475;
        int32_t l_117 = 0x5AEF2735;
        int32_t l_285 = 0x0DA51562;
        if (((func_77((safe_rshift_func_int16_t_s_s((l_116 = (safe_lshift_func_int16_t_s_u(l_86, (safe_add_func_int16_t_s_s((((((p_75 < (0x93 ^ (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((l_93 = p_75) < p_73), func_94(g_76, ((((g_98 = (65532U == p_74)) == ((l_99 <= p_75) <= 0x4A170516)) >= 0x2910E9FB) ^ l_86), g_76))), l_116)))) ^ 65535U) | g_3) ^ l_99) == 0x3379), g_3))))), l_99)), g_13, l_117, p_73) >= 4) >= g_261))
        {
            return l_93;
        }
        else
        {
            uint16_t l_284 = 0xCF2E;
            int32_t l_286 = (-6);
            g_115 = g_15;
            l_116 = (safe_sub_func_int32_t_s_s((((((l_99 < (((~(l_99 < (((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((p_74 < (safe_sub_func_uint8_t_u_u(g_15, (g_279 = (safe_rshift_func_uint8_t_u_s(l_86, 5)))))), (~((l_117 = (9U & 0U)) <= (p_73 & (safe_lshift_func_uint16_t_u_s(((l_284 = (!g_15)) >= p_73), p_73))))))), 0x49F534F0)), l_285)) > 0xCFC5F2DE), l_286)) < 0x9936) > g_199))) || p_74) < 0U)) > g_113) >= p_75) && l_286) && g_199), p_73));
        }
    }
    else
    {
        uint32_t l_287 = 0xE9B9FB79;
        p_74 = l_287;
    }
    for (p_74 = 0; (p_74 == (-2)); --p_74)
    {
        uint16_t l_311 = 1U;
        int32_t l_341 = 1;
        int32_t l_373 = (-10);
        int32_t l_404 = 0xACDE27D5;
        int32_t l_515 = (-1);
        for (g_115 = (-17); (g_115 >= 5); g_115 = safe_add_func_uint8_t_u_u(g_115, 2))
        {
            return p_73;
        }
        for (g_115 = 12; (g_115 > 4); g_115--)
        {
            int16_t l_336 = 0xF4F0;
            int32_t l_387 = 0xC8BC8038;
            uint8_t l_437 = 6U;
            const uint16_t l_513 = 0x0C65;
            uint32_t l_516 = 0U;
            int16_t l_553 = 0x959A;
            int32_t l_572 = 1;
            if ((g_301 = (safe_rshift_func_int16_t_s_u((-8), (safe_lshift_func_uint16_t_u_s(g_76, (g_300 = (safe_lshift_func_int16_t_s_s(((p_74 | l_99) ^ p_75), g_155)))))))))
            {
                uint32_t l_312 = 0x12C39B06;
                int32_t l_338 = 0x6A387565;
                int32_t l_343 = 1;
                int32_t l_475 = 0x0C8F7EA2;
                uint8_t l_573 = 1U;
                l_343 = (((l_342 = (0x95 ^ ((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u(((((safe_add_func_int16_t_s_s((l_341 = ((safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((l_312 = l_311) && (safe_lshift_func_uint8_t_u_u((g_339 = (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((((~(safe_lshift_func_int16_t_s_u((((l_325 = (p_73 && 65527U)) ^ l_312) < (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((l_338 = (0x21 ^ ((l_337 = (((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_3, 0xDEA1)), 1)) || (g_76 = (3 && (-5)))) && l_336) < 0xC6) >= 0x0A78)) & p_73))) > l_311), 6)), 0x061EBB8F)), g_15))), 13))) != g_3) && g_261) & g_103), l_86)), l_312)))), 5))), 4))), p_75)) >= g_15), l_311)) && l_340)), p_75)) & p_73) > g_3) ^ p_73))) == 0x10F83735), 0x21D59750)) & l_340))) >= 255U) <= l_336);
                l_325 = (p_74 != ((safe_lshift_func_uint8_t_u_s((((0x04 & 0xF3) < (l_312 | ((((((l_337 = (l_341 = (safe_lshift_func_uint16_t_u_u(p_74, 7)))) <= ((65535U & l_311) || g_115)) ^ (~(((-9) & 0x479D9148) || l_311))) || 0xC5DDF7B9) != g_301) > 4U))) < 0x76665DE6), 7)) | l_336));
                if ((safe_sub_func_int16_t_s_s((l_336 < (0 && (g_199 = ((g_339 = ((l_351 || ((l_352 <= 0xBD) == 0x0F)) & p_74)) && (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((g_114 | (safe_rshift_func_int16_t_s_s(g_155, l_342))), 5)) >= p_75), 0xD4)))))), p_74)))
                {
                    uint8_t l_367 = 1U;
                    uint16_t l_421 = 0xD1DB;
                    for (g_300 = 14; (g_300 < (-17)); g_300--)
                    {
                        g_339 = (p_73 < ((l_373 = (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_74, (safe_lshift_func_uint16_t_u_u((((l_367 = g_13) >= (~p_75)) & 0xE9D353CF), (((safe_mod_func_uint32_t_u_u((0xA1B7 != (1U || (g_301 = 0xBB))), (safe_sub_func_uint8_t_u_u((p_73 > g_114), 0x1C)))) & l_311) && 0))))), g_199))) >= 1U));
                        if (g_115)
                            break;
                        return p_73;
                    }
                    if (g_76)
                        break;
                    if ((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(0, l_336)) ^ (safe_unary_minus_func_int16_t_s(1))), ((safe_add_func_uint8_t_u_u((l_343 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_367, ((((l_387 = p_75) ^ p_74) > (((safe_lshift_func_uint16_t_u_u((p_73 | p_74), (((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(1, g_260)), g_199)) > g_155) < l_338) & 4U) > l_367))) > 0U) != 0x599F)) == p_73))), (-9))), l_352))), l_336)) && g_199))))
                    {
                        uint32_t l_396 = 6U;
                        int32_t l_412 = 0x60F319DC;
                        l_343 = ((safe_sub_func_uint32_t_u_u((l_396 != p_74), 0x55B75E65)) != ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(p_73)), 2)), g_115)), l_404)) > (((g_405 = ((l_387 = g_3) & 252U)) == (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((((((l_341 = (safe_lshift_func_uint8_t_u_s(p_75, 0))) <= 6U) | 1) && l_396) || g_301) < l_99), l_336)) | (-4)), 1))) < l_373)));
                        l_412 = (-1);
                        g_339 = ((0xAC > ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((l_412 = ((0xA95927A8 <= ((l_404 = ((l_396 || (~(l_342 = 0x55))) > ((l_352 = p_73) > g_261))) > (l_421 >= ((g_301 = ((safe_rshift_func_uint8_t_u_u(p_73, ((-5) & p_75))) && p_74)) >= p_75)))) & 0x9021)))), 6U)), 5)) < p_73)) || p_73);
                    }
                    else
                    {
                        int32_t l_438 = 0;
                        int32_t l_448 = (-5);
                        l_438 = (safe_mod_func_int8_t_s_s((p_73 == (safe_lshift_func_uint16_t_u_s((g_279 && (safe_sub_func_uint8_t_u_u((0 != ((((safe_rshift_func_int8_t_s_u((((l_387 = ((p_73 && (l_340 >= l_336)) | (~((l_373 = l_343) != ((safe_mod_func_uint8_t_u_u((+(~l_437)), p_75)) > l_325))))) | p_75) <= g_98), p_73)) & p_73) | 0x53) & g_261)), 0xDB))), p_73))), g_15));
                        l_387 = ((l_438 = ((safe_lshift_func_int16_t_s_s(l_438, 13)) <= p_74)) ^ (l_373 = (safe_mod_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((~(safe_lshift_func_uint16_t_u_u(0x6BD0, 4))), (g_339 = (g_405 > ((l_448 | (safe_rshift_func_uint8_t_u_s(((0 > ((safe_sub_func_uint8_t_u_u(0x02, (l_341 || (l_448 & l_336)))) ^ 0xF94B34C8)) ^ l_99), l_421))) < p_74))))) || 0x1B2EEEA6) != l_99) | p_75), l_311))));
                        l_337 = (safe_lshift_func_uint16_t_u_s(p_74, 9));
                    }
                }
                else
                {
                    uint16_t l_474 = 0x8621;
                    int32_t l_476 = 0x0714F085;
                    l_475 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((l_343 = (l_459 ^ (g_279 || (g_113 = (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_338 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((~(g_471 = (safe_mod_func_uint8_t_u_u(g_15, 1)))), 11)), 1))), (l_474 = ((g_113 == ((-9) & (p_74 & (g_261 = (g_114 = (0x7DB0CEC7 >= ((safe_mod_func_uint8_t_u_u(0xC5, g_199)) && 0))))))) || (-1))))), p_75)))))), 5)), 4));
                    if (((g_339 = ((-10) != l_338)) | (l_476 = l_336)))
                    {
                        uint16_t l_514 = 0x8B55;
                        l_337 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0U, (l_373 || (g_199 = (safe_mod_func_int32_t_s_s((g_339 = ((((safe_add_func_int16_t_s_s((g_485 = g_260), (safe_rshift_func_int16_t_s_s(((l_352 = (((safe_rshift_func_uint8_t_u_u(((g_113 = ((g_300 < (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(g_103, 4)), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((l_343 = ((safe_unary_minus_func_uint8_t_u(((((((safe_rshift_func_int16_t_s_s(0xDB55, (g_13 > (safe_lshift_func_int16_t_s_u(((g_114 = 0xCB167C54) <= (((l_514 = (safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(l_513, 15)) & p_75), p_73))) == l_515) < p_75)), 6))))) != g_13) | l_516) | p_75) && 0xC4) <= g_13))) <= 0x18CC1155)), g_471)) <= p_75) == 6U), l_404)) == p_74) || p_75) | l_337) < p_75), l_516)), 0xFCBA)), p_73))))) < p_73)) | 4294967288U), g_13)) != p_73) && p_74)) >= (-7)), 5)))) ^ g_260) || l_476) <= p_75)), 4294967290U)))))), 3));
                        l_343 = p_75;
                        l_387 = p_75;
                        l_476 = (safe_rshift_func_uint8_t_u_s((!((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((0 == (safe_rshift_func_int8_t_s_u(p_75, 1))) & (~(((!((g_301 < (((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(1U, 7)), (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_474, p_74)), (safe_lshift_func_uint16_t_u_u(1U, 3)))))) <= ((+l_514) >= g_3)) < 0x3E) != l_373) == g_103)) == p_73)) <= p_75) < 0x1B24D9D2))), p_74)), l_352)), 9U)) >= 0x97)), p_75));
                    }
                    else
                    {
                        uint8_t l_541 = 0U;
                        l_541 = g_103;
                    }
                    for (l_342 = 0; (l_342 > (-25)); l_342 = safe_sub_func_int32_t_s_s(l_342, 6))
                    {
                        int16_t l_554 = 0x9E03;
                        const uint8_t l_567 = 0x22;
                        g_339 = ((!(safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((l_373 = (safe_mod_func_int32_t_s_s((g_339 ^ (l_554 = ((safe_lshift_func_int16_t_s_u(p_74, l_553)) > (l_387 = l_474)))), (g_260 ^ (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((l_325 = (safe_mod_func_int16_t_s_s((0 && (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(l_567, (((safe_lshift_func_uint8_t_u_u((l_343 = ((l_572 = (safe_mod_func_int32_t_s_s((l_474 != (g_300 & 65535U)), g_279))) > 7)), 4)) == l_476) <= l_340))) != g_471) >= l_312), p_74)), 1))), g_3))) < 0xAFE8) | 0x04) != (-2)), 0x8BD0BC9B)), 7)))))), 3)) & 0x20BA3940), l_311))) != l_337);
                        l_515 = 0x442A80D6;
                        return l_573;
                    }
                }
                g_339 = (0x22F5 ^ (l_338 = (((g_98 ^ g_15) < ((((g_301 >= ((-6) > ((safe_mod_func_uint32_t_u_u((l_572 = p_75), g_114)) && g_115))) & ((safe_lshift_func_uint8_t_u_s(249U, g_155)) <= p_75)) | 0x92FE0149) & l_387)) != g_199)));
            }
            else
            {
                if (g_471)
                    break;
            }
            l_341 = (safe_rshift_func_uint16_t_u_u(((g_471 = 0xC0) == 0), 4));
            l_572 = ((((safe_rshift_func_int16_t_s_s(1, 2)) || (g_590 = (l_404 | ((g_261 != (g_485 <= (((p_74 | ((((-1) ^ 0xAD) < (safe_add_func_uint16_t_u_u((p_74 && (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((g_471 = (safe_mod_func_int32_t_s_s(0, l_516))), 1)), 4))), 0U))) | p_75)) & 0xA597037C) >= 0))) != 0x32)))) > g_260) <= 0xE669);
            for (g_590 = 5; (g_590 != (-27)); g_590 = safe_sub_func_uint32_t_u_u(g_590, 1))
            {
                uint32_t l_609 = 0x4A2A2AF9;
                int32_t l_610 = 0x5628F387;
                l_610 = ((safe_lshift_func_int8_t_s_s(((0xA0 > g_115) <= ((g_471 = ((~(safe_add_func_uint32_t_u_u(l_340, (g_114 = ((l_337 = (l_572 | l_341)) != ((safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(l_342, l_459)) <= (((((safe_sub_func_int16_t_s_s((0xCCFE28A8 & ((!(((safe_lshift_func_int16_t_s_u(l_86, g_261)) > 0x07E92FE9) && p_75)) & 0xB6D85FC0)), g_113)) | l_459) > p_75) == 0) > g_339)) <= l_387), l_609)) == l_373)))))) < 0)) ^ g_15)), p_73)) | 0x794A079E);
            }
        }
    }
    p_74 = (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((l_619 = ((5 >= (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(l_619, ((safe_rshift_func_uint8_t_u_u((g_471 = (safe_lshift_func_int16_t_s_s(((0x3D98 || (l_619 != ((g_114 = (l_337 = ((g_103 | l_459) || p_75))) || l_626))) & g_155), g_260))), 6)) != g_485))) || 0xA079E201), p_73))) | 0xEA165C4E)), g_115)) < 65535U), g_300));
    g_339 = 1;
    return g_339;
}
static int8_t func_77(int8_t p_78, const uint32_t p_79, uint32_t p_80, uint8_t p_81)
{
    uint16_t l_138 = 0xD8CF;
    int32_t l_139 = (-9);
    int32_t l_140 = 0x1309E202;
    int32_t l_141 = 0;
    int32_t l_170 = 0xEC67F3A6;
    for (g_114 = 0; (g_114 < 28); ++g_114)
    {
        int32_t l_137 = 0;
        int32_t l_142 = 0x6DEEB808;
        uint16_t l_160 = 4U;
        int32_t l_223 = 0xAE0A69A7;
        if (((1 <= (safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((l_142 = ((~((g_3 > (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u(g_13, 2))))) && (l_141 = (safe_sub_func_uint16_t_u_u((l_140 = (((safe_add_func_int8_t_s_s(p_78, (g_113 > ((g_15 < ((safe_unary_minus_func_uint8_t_u(g_103)) < g_13)) || (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((((l_139 = ((((l_137 & g_114) && l_138) != g_15) < p_78)) != 0xAEEF) || l_137), 5)), 6)) && p_79) <= l_138))))) == 0x7C3E) && g_114)), 0x71BB))))) >= g_114)), g_103)) >= 1), p_80))) <= 1))
        {
            int32_t l_153 = 0x600665BE;
            int32_t l_166 = 1;
            l_140 = ((safe_lshift_func_uint16_t_u_s(65535U, ((-1) != (safe_sub_func_int8_t_s_s(0, (p_81 = 0xE1)))))) >= ((safe_rshift_func_int8_t_s_u((((l_142 > (safe_mod_func_int16_t_s_s(((g_13 & (safe_add_func_uint32_t_u_u((p_78 != (l_153 != ((~(p_79 >= g_13)) <= p_78))), 0x8E731B53))) & l_137), g_13))) ^ 0x2C3A) && (-5)), 0)) | p_80));
            l_142 = (l_153 & (p_79 > (g_155 = (g_13 | 1U))));
            g_115 = (((0xD310D212 < (l_160 = (safe_add_func_uint16_t_u_u(0U, (safe_rshift_func_int16_t_s_u(0x6B1F, 0)))))) | (((g_76 = ((safe_sub_func_uint8_t_u_u((p_78 ^ (!(g_15 == (g_115 > (l_166 = (safe_lshift_func_uint16_t_u_s(p_79, 5))))))), 255U)) != ((safe_unary_minus_func_int16_t_s((((((safe_rshift_func_uint16_t_u_u(1U, l_170)) | p_79) != p_80) <= g_103) < 0x15D0))) && 0U))) & 0x462C) < g_155)) > l_142);
        }
        else
        {
            uint8_t l_200 = 1U;
            l_142 = ((((safe_lshift_func_int16_t_s_u((l_137 <= (!(safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((p_78 <= ((safe_lshift_func_uint8_t_u_s(g_3, (((safe_unary_minus_func_uint8_t_u(l_160)) ^ (-5)) < ((safe_sub_func_int16_t_s_s(((3 || (0xD8 | 0U)) | ((safe_lshift_func_int16_t_s_u(((0xBA289590 && p_81) <= 0x2B), 4)) >= p_78)), p_79)) < g_103)))) > 8)), l_160)) == 0xCB2A3AB4), p_78)))), g_113)) & p_78) != g_103) && p_79);
            l_170 = (((l_141 = p_79) >= p_79) >= (((g_115 = 0xED02C9C0) && ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(251U, p_80)) != 0x5A27), (safe_mod_func_int16_t_s_s(((~((!((safe_lshift_func_int8_t_s_s((((-1) ^ g_115) || (g_103 = ((safe_add_func_int16_t_s_s((g_199 = 0x8D0B), g_114)) == l_160))), 6)) < 0x0F89)) != g_98)) >= l_200), l_140)))) > g_13)) | 5));
            g_115 = (safe_mod_func_uint8_t_u_u((((l_142 = 0x1735A467) || (safe_unary_minus_func_uint16_t_u(p_79))) && ((l_200 | (safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((~(safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_98, (p_78 = (((p_81 = ((l_200 & (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(g_3, ((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(p_79, ((safe_lshift_func_uint8_t_u_u((l_142 == 0xF8C4), 7)) && l_200))) || g_114), g_76)) <= l_200))) ^ g_113) >= l_200), p_80))) & l_200)) == p_78) <= l_223)))), g_15))), g_155)) > 4294967295U), 0x6BBB))) || 0x37CE)), l_200));
            if (p_79)
                continue;
        }
    }
    for (g_98 = 0; (g_98 != 2); g_98++)
    {
        const uint32_t l_228 = 0xC5A96FC6;
        g_115 = (safe_lshift_func_uint8_t_u_s((l_141 = 0x6C), 0));
        l_139 = l_228;
    }
    l_139 = (l_170 = (safe_mod_func_uint8_t_u_u(((l_138 < p_81) == 0x0CA6), ((g_98 ^ (((g_260 = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((!(g_115 = ((safe_sub_func_int32_t_s_s(p_78, (((((safe_lshift_func_uint16_t_u_u(((l_141 = g_155) && ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_141, ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u((p_81 == ((+((safe_sub_func_int16_t_s_s(((((p_80 ^ g_155) || p_80) == l_170) ^ 9U), p_80)) & p_78)) && 252U)), g_114)))), p_80)) == p_81))), p_79)) >= l_141), (-9))), p_79)) & l_140)), g_103)) <= p_79) >= 0xFBCF) && l_141) != 255U))) & p_79))), p_79)), 8U)), 12)), 0x2C819DA8))) || p_81) || l_141)) || g_3))));
    return l_139;
}
static int16_t func_94(int16_t p_95, uint32_t p_96, int8_t p_97)
{
    int32_t l_102 = (-1);
    g_115 = ((g_103 = (safe_add_func_uint8_t_u_u(l_102, l_102))) == ((g_114 = (p_95 = (safe_rshift_func_int8_t_s_s((-8), (251U || (g_113 = ((safe_sub_func_uint8_t_u_u((0 <= (g_15 | (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u(l_102)), (p_96 | g_13))), g_98)))), l_102)) > g_98))))))) & l_102));
    return l_102;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_13;
    csmith_sink_ = g_15;
    csmith_sink_ = g_76;
    csmith_sink_ = g_98;
    csmith_sink_ = g_103;
    csmith_sink_ = g_113;
    csmith_sink_ = g_114;
    csmith_sink_ = g_115;
    csmith_sink_ = g_155;
    csmith_sink_ = g_199;
    csmith_sink_ = g_260;
    csmith_sink_ = g_261;
    csmith_sink_ = g_279;
    csmith_sink_ = g_300;
    csmith_sink_ = g_301;
    csmith_sink_ = g_339;
    csmith_sink_ = g_405;
    csmith_sink_ = g_471;
    csmith_sink_ = g_485;
    csmith_sink_ = g_590;
    csmith_sink_ = g_679;
    csmith_sink_ = g_745;
    csmith_sink_ = g_841;
    csmith_sink_ = g_904;
    csmith_sink_ = g_926;
    csmith_sink_ = g_953;
    csmith_sink_ = g_961;
    csmith_sink_ = g_1017;
    platform_main_end(0,0);
    return 0;
}
