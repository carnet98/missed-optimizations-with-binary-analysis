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
static int32_t g_11 = (-4);
static int32_t g_37 = (-1);
static int32_t g_88 = 0xA600AC80;
static int32_t *g_87 = &g_88;
static int32_t **g_92 = &g_87;
static int32_t ***g_91 = &g_92;
static int32_t g_119 = 0x3FE27FCE;
static int32_t ** const *g_149[1][4][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static int32_t ** const **g_148 = &g_149[0][1][0];
static const int32_t *g_224 = &g_119;
static uint32_t g_303[6] = {1U,1U,1U,1U,1U,1U};
static uint8_t g_335 = 255U;
static uint8_t g_751 = 253U;
static uint16_t g_770 = 1U;
static const int32_t *g_814 = &g_37;
static uint16_t g_850 = 65530U;
static int32_t ****g_964 = &g_91;
static int32_t *****g_963 = &g_964;
static uint8_t g_1081 = 0xF1;
static int8_t func_1(void);
static int16_t func_4(int16_t p_5, int32_t p_6, uint32_t p_7, uint32_t p_8);
static uint8_t func_16(uint32_t p_17, uint32_t p_18, uint8_t p_19, uint32_t p_20);
static const uint32_t func_24(int32_t p_25, int32_t p_26, int32_t p_27);
static int32_t func_30(uint32_t p_31, uint32_t p_32, uint8_t p_33);
static int32_t func_38(const uint32_t p_39, uint32_t p_40, uint32_t p_41, const uint16_t p_42, uint8_t p_43);
static const uint32_t func_44(uint32_t p_45);
static const uint8_t func_48(uint8_t p_49, int16_t p_50, uint8_t p_51, int32_t p_52);
static int32_t func_62(int32_t p_63, const int32_t * p_64);
static int32_t func_70(int32_t * p_71, int32_t * p_72, int32_t * p_73, int32_t p_74, int32_t * p_75);
static int8_t func_1(void)
{
    int8_t l_21 = (-1);
    int16_t l_1082[2];
    int32_t l_1161 = 0xE975A884;
    int32_t l_1197[7];
    uint32_t l_1198 = 0xBB233D33;
    int i;
    for (i = 0; i < 2; i++)
        l_1082[i] = 0x2BA7;
    for (i = 0; i < 7; i++)
        l_1197[i] = 0;
    l_1197[5] = (safe_sub_func_int32_t_s_s((func_4((safe_rshift_func_int8_t_s_u(g_11, 3)), (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(func_16(l_21, g_11, (g_11 ^ ((safe_mod_func_uint32_t_u_u(func_24(l_21, ((safe_sub_func_int16_t_s_s(g_11, (l_21 , l_21))) , func_30(((safe_rshift_func_uint16_t_u_u(0x9333, g_11)) , 0xE5741311), g_11, g_11)), g_850), g_303[2])) >= l_1082[1])), l_21), l_1082[1])) || 0xE4), l_1161)), g_303[0], l_21) <= l_1161), l_1197[5]));
    return l_1198;
}
static int16_t func_4(int16_t p_5, int32_t p_6, uint32_t p_7, uint32_t p_8)
{
    uint16_t l_1182 = 0xED6A;
    uint16_t l_1189 = 0U;
    int32_t * const *l_1192 = &g_87;
    int32_t * const **l_1191 = &l_1192;
    int32_t * const ***l_1190 = &l_1191;
    int32_t l_1193[4] = {0,0,0,0};
    int32_t *l_1194 = &g_11;
    int32_t **l_1195 = (void*)0;
    int32_t **l_1196 = &g_87;
    int i;
    (*l_1194) = ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_335, 4)), (safe_mod_func_int8_t_s_s((-1), (safe_add_func_int16_t_s_s((p_5 > (safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s((((g_119 , (*g_224)) , ((safe_add_func_uint32_t_u_u(g_303[5], l_1182)) < (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s(((((((p_8 != 0x31) ^ l_1182) >= (-1)) , l_1189) != l_1189) || 0x66), l_1182)) , (void*)0) != l_1190) ^ 0x6AEA) || p_6), p_8)), g_88)))) , p_8), g_37)) <= p_8) ^ l_1193[2]) >= 0U), 0x2F7D76F5))), p_8)))))), 0xCF59)) < p_7) || g_303[0]), 0x3185)), 0x49CF)) > 7U);
    (*l_1196) = (*l_1192);
    return g_1081;
}
static uint8_t func_16(uint32_t p_17, uint32_t p_18, uint8_t p_19, uint32_t p_20)
{
    int8_t l_1087 = 0x91;
    int16_t l_1090[3];
    int32_t *****l_1091 = &g_964;
    uint8_t l_1094 = 0x5C;
    const uint16_t l_1107 = 0x69CB;
    int32_t l_1158 = 0;
    const uint32_t l_1159 = 0U;
    int32_t *l_1160 = &l_1158;
    int i;
    for (i = 0; i < 3; i++)
        l_1090[i] = 0xBA17;
    if ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((g_88 >= (((l_1087 , (***g_91)) <= (safe_add_func_uint16_t_u_u(l_1090[2], ((((l_1091 == l_1091) , g_303[5]) & (safe_add_func_uint8_t_u_u((l_1091 != l_1091), 0U))) < p_19)))) >= (*****l_1091))) <= (*g_224)) , p_20), l_1094)), g_303[5])))
    {
        uint32_t l_1102 = 0U;
        int32_t ** const *l_1123 = &g_92;
        int32_t l_1132 = 0x26619E71;
        if ((p_19 < (~((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s(l_1102, (((l_1102 , (*g_92)) == (**g_91)) >= g_770))) && ((safe_sub_func_uint16_t_u_u(((0x0C74DDEE || (safe_rshift_func_int8_t_s_s((p_20 >= g_770), 7))) & 7), p_18)) == p_18)) >= (*****l_1091)), l_1102)), g_1081)) , l_1107))))
        {
            uint32_t l_1131 = 1U;
            int32_t ***l_1133 = &g_92;
            l_1132 = ((safe_rshift_func_uint16_t_u_u((l_1102 & ((safe_sub_func_uint32_t_u_u(((0U | ((((safe_sub_func_int16_t_s_s((((((void*)0 == (***g_964)) , (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u(((void*)0 != l_1123))) != (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((+((1 & ((((((**l_1123) == (****l_1091)) , 65528U) != g_770) && l_1131) <= p_20)) > g_751)), g_119)) > (-1)), g_850)), g_303[2]))), 4)) > p_18), g_119)), (***l_1123))) ^ (*****l_1091)) ^ 0x18)) != p_18) | (*g_87)), 5U)) , (*g_92)) == (**g_91)) <= (***l_1123))) > 0x03E2), l_1131)) >= 0)), 1)) ^ p_19);
            (**l_1091) = l_1133;
        }
        else
        {
            int32_t *l_1134 = (void*)0;
            int32_t *l_1135 = &g_88;
            (*g_92) = l_1134;
            (*l_1135) = 6;
        }
    }
    else
    {
        uint32_t l_1146[2];
        int32_t l_1147 = 8;
        int i;
        for (i = 0; i < 2; i++)
            l_1146[i] = 0xDF649ADA;
        l_1147 = ((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint16_t_u(p_18)) , (((l_1091 == l_1091) > (safe_mod_func_uint32_t_u_u((*****l_1091), (+(g_770 != g_335))))) >= ((safe_lshift_func_int8_t_s_u((p_20 > ((&g_148 != ((safe_mod_func_int8_t_s_s(((*****l_1091) > 0xB45BA89B), g_751)) , &g_148)) ^ g_119)), p_18)) | l_1146[0]))) < p_17), 0U)) | 1);
        (****l_1091) = (void*)0;
    }
    (*l_1160) = (safe_add_func_int16_t_s_s(((((1 & p_17) < (((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(g_335, (g_303[4] >= (safe_add_func_int8_t_s_s((((((((p_18 , (safe_mul_func_int16_t_s_s(l_1158, ((g_1081 & 0x0A) , l_1159)))) != l_1090[2]) && l_1094) , (*l_1091)) != (*l_1091)) , (****l_1091)) == (*g_92)), g_303[5]))))) >= 0xDB37CCBE), 0xEA67)) ^ p_17) | g_88)) , 0) && p_20), p_17));
    return p_20;
}
static const uint32_t func_24(int32_t p_25, int32_t p_26, int32_t p_27)
{
    int32_t l_1061[9] = {0,0,0,0,0,0,0,0,0};
    int32_t **l_1075[4][4];
    int32_t l_1080 = (-5);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_1075[i][j] = &g_87;
    }
    g_1081 = (safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_1061[4], 7)), ((g_770 , (safe_mod_func_int16_t_s_s(((((((((safe_sub_func_uint32_t_u_u(((p_26 > (~(((l_1061[4] & (safe_add_func_uint8_t_u_u(p_27, ((safe_div_func_uint32_t_u_u(((((((safe_lshift_func_int16_t_s_u((((safe_mod_func_int16_t_s_s(((void*)0 != l_1075[2][1]), (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(1U, 5)), 0xDBE4)))) == g_335) != 2), 12)) | g_88) == (-7)) || 0xA474) || l_1080) == p_25), p_26)) >= p_26)))) , 5U) , p_27))) || 7U), g_37)) , &p_25) == &p_25) > p_26) ^ 0x9058) , 7) != 0xA8EB) || g_119), p_27))) | g_850))) | p_27), 0xF0A9));
    (**g_91) = (***g_964);
    return g_850;
}
static int32_t func_30(uint32_t p_31, uint32_t p_32, uint8_t p_33)
{
    int32_t *l_36 = &g_37;
    int32_t **** const l_689 = &g_91;
    int16_t l_725[1];
    uint8_t l_726 = 0U;
    uint16_t l_796 = 1U;
    const uint32_t l_819 = 0x0706D207;
    int32_t l_872 = 0;
    uint32_t l_1050 = 0U;
    int i;
    for (i = 0; i < 1; i++)
        l_725[i] = 1;
    (*l_36) = 0xCD833989;
    (*l_36) = func_38(func_44(g_37), ((((((1U == p_31) < ((+(safe_unary_minus_func_int8_t_s((l_689 == ((safe_sub_func_uint32_t_u_u(((1 & ((safe_mod_func_uint32_t_u_u(4U, (((((p_33 , 0x3A2C) || 0x19F7) && 1) && p_31) , p_33))) == 0x6E57)) == g_11), p_32)) , (void*)0))))) == 0xFB)) >= 1) & p_32) , (void*)0) != (void*)0), p_33, p_32, g_303[5]);
    if (((safe_mod_func_uint8_t_u_u(((((*l_36) < (((((*l_36) | (((*g_91) == (**l_689)) < (safe_add_func_uint16_t_u_u((1 >= ((((&g_149[0][1][0] != ((safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(p_32, (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((((p_33 > p_33) | 0x782D) <= 0) , g_303[4]) || p_32), 4294967287U)), 2U)))) < p_31), p_32)) , l_689)) , (*l_36)) == l_725[0]) > l_726)), p_31)))) , g_11) , (*l_36)) >= (****l_689))) , (-8)) | 0x8354), g_37)) == 0xBF97))
    {
        uint32_t l_729 = 0x3AF47858;
        int32_t ***l_733 = &g_92;
        if ((safe_add_func_uint16_t_u_u((l_729 || (safe_lshift_func_uint16_t_u_s(((l_729 == ((g_11 | (((*l_36) ^ 0) > (((~((((l_733 != ((safe_div_func_uint8_t_u_u(p_32, (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_u((((void*)0 == &g_149[0][3][0]) <= 0), 7)) , 0x76) <= (***l_733)) == (****l_689)), 11)), 0)) && g_37) ^ 0x51))) , (*l_689))) != p_31) | p_32) , p_33)) | p_31) > 0xB1))) == (***l_733))) < (-1)), p_33))), p_31)))
        {
            int32_t **l_752 = &g_87;
            int16_t l_766 = 0x11B8;
            for (l_729 = 0; (l_729 <= 0); l_729 += 1)
            {
                int32_t **l_753 = &g_87;
                int32_t ** const * const *l_767 = &g_149[0][1][0];
                int16_t l_787 = (-6);
            }
        }
        else
        {
            int32_t ****l_805 = &l_733;
            int32_t l_806[1][1][8] = {{{(-1),0x1CF34E9B,(-1),(-1),0x1CF34E9B,(-1),(-1),0x1CF34E9B}}};
            int i, j, k;
            for (g_37 = 0; (g_37 >= 0); g_37 -= 1)
            {
                int32_t *l_793 = &g_119;
                (*l_793) = 0x5A84E5B8;
                for (g_88 = 0; (g_88 <= 0); g_88 += 1)
                {
                    for (p_31 = 0; (p_31 <= 0); p_31 += 1)
                    {
                        int i, j, k;
                        (*l_793) = (g_149[p_31][(p_31 + 2)][g_88] != (void*)0);
                        if (p_32)
                            continue;
                    }
                    return (**g_92);
                }
            }
            l_806[0][0][0] = (safe_lshift_func_uint8_t_u_s((l_796 | 0x5646), ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0xFC01, (-1))), 14)) == (~((!((0x4A43 != g_37) <= ((safe_rshift_func_int8_t_s_u((((g_119 | ((g_770 , (void*)0) == (void*)0)) , l_805) == (void*)0), 6)) , 0x6038))) == 1U)))));
        }
        for (l_729 = 16; (l_729 <= 3); l_729 = safe_sub_func_int16_t_s_s(l_729, 2))
        {
            (*g_92) = (*g_92);
        }
        (*l_36) = (g_303[5] && (+(p_32 & (safe_mul_func_uint8_t_u_u((***l_733), (safe_lshift_func_uint8_t_u_s((0xD7 | ((g_814 == (void*)0) | ((((g_751 || (((safe_add_func_int8_t_s_s((g_303[3] != 5), l_819)) <= (***l_733)) != g_303[5])) , p_31) ^ p_32) || (*l_36)))), (***l_733))))))));
    }
    else
    {
        uint32_t l_851[5];
        int32_t **l_857 = &l_36;
        int32_t ****l_961 = &g_91;
        int32_t *****l_960 = &l_961;
        uint16_t l_1048 = 0x083B;
        int i;
        for (i = 0; i < 5; i++)
            l_851[i] = 0x23D6646B;
        for (p_33 = 5; (p_33 < 33); p_33 = safe_add_func_uint32_t_u_u(p_33, 3))
        {
            int8_t l_826 = 0;
            int32_t ****l_836 = &g_91;
            uint16_t l_871 = 0x9348;
            for (g_119 = 0; (g_119 == (-5)); --g_119)
            {
                int32_t l_833 = 0xA41F874D;
                int32_t l_841 = 6;
            }
            if (p_32)
                break;
            (*l_36) = (p_32 < (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((((((p_31 , (0xE7FD5ADC >= ((safe_mul_func_uint16_t_u_u(((0 != ((g_119 | 0U) <= (+((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_751 && (safe_mod_func_uint8_t_u_u(((&g_149[0][2][1] != l_836) , p_32), 6))), 6)), (****l_836))) < 0xAD)))) || p_33), l_871)) && 0x49))) ^ p_33) == l_872) , (-8)) , (****l_836)) | 0x116CA6AF) , (****l_836)), 0xBA8A709D)), p_32)));
        }
        if ((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_303[2], g_303[5])), (safe_sub_func_int16_t_s_s((((!(g_303[3] ^ (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_37, 0xFC87)), (((****l_689) & (g_119 , 0xDA38D7D7)) == p_31))))) <= g_751) > 2U), g_11)))), 11)) <= p_32) , p_31) == g_850), 65535U)) , 0x086D), g_88)) >= (****l_689)), 3U)), 8)))
        {
            int32_t l_894 = (-1);
            l_894 = (1 || p_33);
        }
        else
        {
            int32_t *** const l_906 = &g_92;
            int32_t l_948 = 0x029B5A61;
            int32_t * const l_962 = &g_88;
            uint8_t l_982 = 0U;
            for (p_31 = 0; (p_31 <= 4); p_31 += 1)
            {
                int32_t *l_899 = &g_11;
                int i;
                if ((((safe_lshift_func_int16_t_s_s((g_303[p_31] , (safe_add_func_int32_t_s_s(((*l_857) == l_899), ((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((*l_899), ((((((*l_689) == l_906) || ((~((((safe_mod_func_uint32_t_u_u((0xF6F6FA08 == (safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(((~(safe_mod_func_uint16_t_u_u((l_906 != (*l_689)), g_335))) && (-1)), p_32)), p_32))), p_33)) | g_850) && 0x1829) || 0xEB)) && g_303[3])) >= p_33) == 0) == (****l_689)))), g_303[5])) & p_31), (*l_36))) , (*l_899))))), 7)) || p_31) , 0xBA452925))
                {
                    uint32_t l_930[4][7][1] = {{{0x5C547451},{4294967295U},{0x5C547451},{0xE46619DE},{0xE46619DE},{0x5C547451},{4294967295U}},{{0x5C547451},{0xE46619DE},{0xE46619DE},{0x5C547451},{4294967295U},{0x5C547451},{0xE46619DE}},{{0xE46619DE},{0x5C547451},{4294967295U},{0x5C547451},{0xE46619DE},{0xE46619DE},{0x5C547451}},{{4294967295U},{0x5C547451},{0xE46619DE},{0xE46619DE},{0x5C547451},{4294967295U},{0x5C547451}}};
                    int32_t *l_931 = &g_119;
                    int i, j, k;
                    for (g_770 = 1; (g_770 <= 4); g_770 += 1)
                    {
                        (**g_91) = (**g_91);
                        (*l_36) = ((safe_rshift_func_uint16_t_u_s(p_32, 4)) && (safe_div_func_uint16_t_u_u((((&g_149[0][3][5] != (void*)0) < ((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((!((&l_899 == (**l_689)) <= (safe_mod_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(l_930[3][5][0], l_930[0][5][0])) & (*l_36)) && (p_31 > 0xDF)), p_33)))), 1)), g_303[0])) , p_31) , g_11) <= p_32)) & (****l_689)), g_335)));
                        if (p_32)
                            continue;
                        (**l_906) = l_899;
                    }
                    l_931 = (**l_906);
                }
                else
                {
                    for (l_796 = 0; (l_796 <= 0); l_796 += 1)
                    {
                        return p_31;
                    }
                }
            }
            (**l_906) = (**g_91);
            for (g_37 = (-29); (g_37 != (-1)); g_37 = safe_add_func_uint32_t_u_u(g_37, 7))
            {
                int32_t *l_934[9][1];
                int32_t ****l_947[7] = {&g_91,&g_91,&g_91,&g_91,&g_91,&g_91,&g_91};
                int32_t *****l_946 = &l_947[6];
                uint32_t l_952 = 8U;
                int16_t l_981 = 0xB883;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_934[i][j] = &g_88;
                }
                if (((l_934[1][0] == ((safe_add_func_uint16_t_u_u(65533U, ((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(((5U != g_88) && (1U || (safe_sub_func_int16_t_s_s((((g_770 == (safe_unary_minus_func_uint8_t_u(0xBD))) , (((65530U == (safe_mul_func_int8_t_s_s(g_303[5], g_335))) , (void*)0) != l_946)) , l_948), 2U)))), (***l_906))) & (**l_857)), g_37)) , 65535U))) , (*l_857))) & p_33))
                {
                    uint16_t l_951 = 0x66C7;
                    uint32_t l_955 = 0U;
                    g_963 = (((safe_add_func_int16_t_s_s((((0x143B | (2 >= l_951)) , l_952) > (((safe_lshift_func_uint8_t_u_u(l_955, 0)) | g_119) ^ 255U)), ((0U != (safe_mod_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(((&l_947[6] != l_960) == p_32), 1U)) , l_962) != (void*)0) , g_303[5]), 0x45))) | g_770))) > (***l_906)) , (void*)0);
                }
                else
                {
                    int32_t *l_965 = &g_37;
                    (*l_857) = (****l_960);
                    (****l_946) = l_965;
                }
                for (p_32 = (-18); (p_32 > 33); ++p_32)
                {
                    for (p_33 = 0; (p_33 != 20); p_33++)
                    {
                        const uint32_t l_970 = 0x8E5D40CA;
                        (*l_962) = (**l_857);
                        if (l_970)
                            continue;
                        (*l_689) = (*l_689);
                        if (p_33)
                            break;
                    }
                    return p_33;
                }
                for (l_726 = 0; (l_726 == 37); l_726 = safe_add_func_uint32_t_u_u(l_726, 4))
                {
                    uint16_t l_973 = 0x731E;
                    int32_t *****l_974 = &l_947[6];
                    int32_t l_987 = 0x0E67CC74;
                    (***l_689) = (***l_689);
                    for (p_31 = 1; (p_31 <= 5); p_31 += 1)
                    {
                        int i;
                        (*l_962) = (g_303[p_31] , ((l_973 , (*g_814)) != ((l_974 != (void*)0) ^ (safe_add_func_uint32_t_u_u((((0x91 || (((((((((safe_mod_func_uint16_t_u_u((((****l_974) == (**l_906)) || ((safe_lshift_func_uint8_t_u_u(((((((((((l_981 && g_335) >= 2) , (void*)0) != (void*)0) & g_335) , p_33) == g_751) > p_32) & 0xCCB44914) ^ 251U), (****l_689))) != (*****l_974))), 0x8C47)) < p_31) || p_31) < (*l_962)) & (*l_36)) , (****l_961)) == p_33) ^ 0x8E3E) | 1U)) < 0x259B25C0) , l_982), 0x9B58546C)))));
                    }
                    if (p_31)
                        break;
                    for (l_982 = 0; (l_982 <= 0); l_982 += 1)
                    {
                        int16_t l_983 = 3;
                        int i, j;
                        l_934[(l_982 + 5)][l_982] = (void*)0;
                        l_983 = ((****l_689) , (*****l_960));
                        l_934[(l_982 + 7)][l_982] = (****l_974);
                        l_987 = (safe_div_func_int32_t_s_s((***g_91), ((+(((-3) == 0x4AA2) >= p_33)) , (*****l_974))));
                    }
                }
                (*l_962) = (((((safe_div_func_uint16_t_u_u(g_119, ((+((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_88, ((((((*****l_946) , g_770) | ((p_31 && ((****l_961) > (safe_div_func_uint32_t_u_u(((+(safe_mod_func_int8_t_s_s(p_32, ((((***l_946) != (**l_689)) && g_119) , (-3))))) > 0x5103), 0x98EFA594)))) , 0x51ADC250)) && p_33) && (****l_689)) ^ p_33))), (*l_962))) == 7U)) && g_88))) , (void*)0) == (****l_946)) || 4294967295U) , p_33);
            }
        }
        for (l_726 = 0; (l_726 <= 0); l_726 += 1)
        {
            int32_t *****l_1007 = (void*)0;
            int32_t *****l_1009 = (void*)0;
            int32_t *l_1051 = (void*)0;
            int i;
        }
        for (l_872 = 0; (l_872 <= 29); l_872 = safe_add_func_uint8_t_u_u(l_872, 5))
        {
            return (*****l_960);
        }
    }
    (***l_689) = (**g_91);
    return (****l_689);
}
static int32_t func_38(const uint32_t p_39, uint32_t p_40, uint32_t p_41, const uint16_t p_42, uint8_t p_43)
{
    int8_t l_708 = 0x73;
    for (g_119 = 18; (g_119 > 4); g_119 = safe_sub_func_uint8_t_u_u(g_119, 2))
    {
        int32_t **l_702 = &g_87;
        uint32_t l_705 = 4294967295U;
        l_708 = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u((((void*)0 != l_702) ^ p_43), ((((safe_sub_func_uint16_t_u_u(g_11, (l_705 , (((**l_702) >= ((safe_div_func_uint8_t_u_u(255U, g_335)) , 0)) == g_119)))) & p_43) != g_37) | 0xADCAC0CA))) | g_303[4]) ^ g_303[5]) & p_42), 1)), g_303[2]));
    }
    for (g_88 = 0; (g_88 >= 0); g_88 -= 1)
    {
        int i;
        return g_303[(g_88 + 5)];
    }
    return p_42;
}
static const uint32_t func_44(uint32_t p_45)
{
    int32_t *l_76 = &g_37;
    int32_t l_336 = 5;
    for (g_37 = 27; (g_37 != (-17)); g_37 = safe_sub_func_int16_t_s_s(g_37, 1))
    {
        int32_t *l_53 = &g_37;
        if (((func_48((((void*)0 == l_53) >= (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(g_37, (safe_add_func_int16_t_s_s((func_62((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(p_45, 0x2D49)), (+func_70(l_76, &g_37, l_53, ((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((0x7639 < 65535U) | p_45), p_45)), p_45)) , g_37), l_76)))), l_53) , 0), 0xC2D9)))) >= 4294967286U), 8)), p_45)) , l_76) == l_76)), g_11, l_336, p_45) | (*l_76)) , 1))
        {
            int32_t *l_686 = &g_37;
            l_76 = l_686;
        }
        else
        {
            return p_45;
        }
        if ((*l_76))
            continue;
    }
    return g_88;
}
static const uint8_t func_48(uint8_t p_49, int16_t p_50, uint8_t p_51, int32_t p_52)
{
    uint32_t l_337 = 0x359FE1FD;
    int32_t * const l_344 = &g_88;
    const int8_t l_376 = 0x8F;
    int32_t ****l_406 = &g_91;
    int32_t *****l_405 = &l_406;
    const int32_t *l_521 = &g_119;
    int32_t **l_607 = &g_87;
    uint32_t l_640 = 0x59CE284F;
    int32_t *l_685 = &g_11;
    for (g_335 = 0; (g_335 <= 0); g_335 += 1)
    {
        int32_t *l_341 = &g_119;
        int32_t ***l_402[1][10] = {{&g_92,&g_92,&g_92,(void*)0,&g_92,&g_92,&g_92,&g_92,(void*)0,&g_92}};
        uint32_t l_547 = 0x5E429296;
        int i, j;
        if (g_303[(g_335 + 2)])
            break;
        for (p_49 = 0; (p_49 <= 5); p_49 += 1)
        {
            int32_t l_359 = 1;
            const int32_t *l_389 = &g_119;
            uint32_t l_436 = 0x2F4C1D79;
            int32_t l_438 = 0x5DE4F27F;
            int32_t ****l_446 = &l_402[0][0];
        }
        for (p_50 = 0; (p_50 <= 0); p_50 += 1)
        {
            uint32_t l_637[4][9] = {{1U,1U,1U,1U,1U,1U,1U,1U,1U},{0U,0x6FBF1BFB,0U,0x6FBF1BFB,0U,0x6FBF1BFB,0U,0x6FBF1BFB,0U},{1U,1U,1U,1U,1U,1U,1U,1U,1U},{4294967287U,0x6FBF1BFB,4294967287U,0x6FBF1BFB,4294967287U,0x6FBF1BFB,4294967287U,0x6FBF1BFB,4294967287U}};
            int32_t *l_641[8][8] = {{&g_88,&g_119,&g_37,&g_37,&g_37,&g_11,&g_88,&g_11},{&g_119,&g_119,&g_11,(void*)0,(void*)0,&g_11,&g_119,&g_119},{&g_11,&g_88,&g_11,&g_37,&g_37,&g_37,&g_119,&g_88},{(void*)0,(void*)0,&g_11,&g_119,&g_37,&g_37,&g_119,&g_11},{(void*)0,&g_88,(void*)0,&g_119,(void*)0,&g_11,(void*)0,&g_119},{&g_11,&g_119,&g_11,&g_119,&g_11,&g_11,&g_119,&g_11},{(void*)0,&g_119,(void*)0,(void*)0,&g_119,&g_11,&g_11,&g_11},{(void*)0,&g_119,&g_11,&g_11,&g_11,(void*)0,&g_37,&g_37}};
            int i, j;
            (*l_341) = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0x62, 255U)) , (safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(p_51, (safe_unary_minus_func_int32_t_s(((((((((0x77 ^ (((safe_add_func_int32_t_s_s(((l_402[0][1] == (g_335 , &g_92)) , ((safe_mul_func_int8_t_s_s(p_50, (((safe_rshift_func_uint16_t_u_s((1 & 0x8461), 15)) , (void*)0) == &l_402[0][8]))) >= p_51)), l_637[0][0])) ^ (*l_341)) <= g_11)) || p_50) , l_637[0][0]) , 0x326394AC) == p_50) | g_37) , g_303[5]) != l_637[2][6]))))) , g_303[1]), l_637[1][8]))) , l_637[0][0]), 0)) , p_50), p_52));
            l_640 = (safe_sub_func_int16_t_s_s((-1), 0x1299));
            (***l_406) = l_641[6][5];
            if ((*l_521))
                break;
            for (g_88 = 0; (g_88 <= 5); g_88 += 1)
            {
                int8_t l_646 = 0x13;
                uint32_t l_651 = 0xB2A60463;
                int i, j, k;
                (*l_607) = (void*)0;
                (**g_91) = ((p_50 >= ((safe_div_func_int8_t_s_s(((0xED30 <= ((safe_sub_func_int8_t_s_s(p_49, (((0xA3CFD4E7 && (((0xCC4E && (((l_646 || ((safe_sub_func_uint8_t_u_u(0x33, 0)) || (safe_mul_func_int8_t_s_s((p_50 , g_335), l_651)))) & g_335) > 0x61056D24)) , (-1)) & g_37)) || g_335) , p_51))) != 0xC4)) || 0x11), 0xF6)) , p_49)) , (void*)0);
            }
        }
    }
    for (l_337 = 0; (l_337 <= 0); l_337 += 1)
    {
        int32_t *l_652 = &g_88;
        int32_t ***** const l_660 = &l_406;
        uint32_t l_667 = 7U;
        const uint32_t l_683 = 1U;
        const uint8_t l_684 = 0x63;
        int i;
        (**g_91) = ((0x66BBE493 <= g_303[(l_337 + 5)]) , l_652);
        for (l_640 = 0; (l_640 <= 0); l_640 += 1)
        {
            const uint16_t l_653 = 0x4E16;
            return l_653;
        }
        for (p_50 = 0; (p_50 <= 0); p_50 += 1)
        {
            int8_t l_657 = 0;
            int32_t *l_672 = (void*)0;
            int32_t ***l_679 = (void*)0;
            int8_t l_680 = 0x3B;
        }
    }
    (**g_91) = l_685;
    (**g_91) = (****l_405);
    return g_11;
}
static int32_t func_62(int32_t p_63, const int32_t * p_64)
{
    int8_t l_160 = 1;
    const int32_t *l_179 = &g_119;
    int32_t l_218[9][7] = {{0xF83DE727,0x1BCC9791,0x1DE0336C,(-3),0,0xF83DE727,0xF83DE727},{0,0xB1D573E2,0x4AC0D40F,0xB1D573E2,0,(-5),0xB1D573E2},{4,0xA6AC0F50,0x06A571D4,0,0x1DE0336C,0x06A571D4,(-1)},{(-1),0xAC00ABAC,0x289A5802,0x289A5802,0xAC00ABAC,(-1),0xE7B0101A},{4,0,(-1),4,(-1),0xCFF5E1EA,0x06A571D4},{(-1),(-1),0xDC5F5F0B,0xE7B0101A,0xDC5F5F0B,(-1),(-1)},{(-1),0x06A571D4,(-5),(-7),0x1DE0336C,(-1),(-7)},{0x289A5802,1,0x2E6AD60D,0xB231F37C,0xB231F37C,0x2E6AD60D,1},{0x06A571D4,0x1167A4C1,(-5),0xA6AC0F50,0x1167A4C1,(-7),0xF83DE727}};
    int32_t l_290 = 1;
    uint8_t l_323 = 1U;
    int i, j;
    if ((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((l_160 & (((safe_sub_func_int32_t_s_s(0, p_63)) , ((safe_lshift_func_uint8_t_u_u(((void*)0 == &g_149[0][1][1]), (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((((p_63 || ((((safe_add_func_uint16_t_u_u(p_63, (safe_rshift_func_uint16_t_u_s(0x60EB, 8)))) || p_63) | p_63) > 252U)) , l_160) ^ 0x4E) , 0x2E), l_160)), l_160)))) | p_63)) , 0xB0A5)) > 0x81DC2E7B), (*p_64))), g_37)) || p_63), p_63)), l_160)))
    {
        const int32_t **l_176 = (void*)0;
        const int32_t ***l_175 = &l_176;
        const int32_t ***l_178 = &l_176;
        uint16_t l_196 = 0x7750;
        p_64 = p_64;
        for (p_63 = 0; (p_63 >= 0); p_63 -= 1)
        {
            const int32_t ****l_177[9][10][2] = {{{(void*)0,&l_175},{(void*)0,&l_175},{&l_175,&l_175},{&l_175,&l_175},{(void*)0,&l_175},{(void*)0,&l_175},{&l_175,&l_175},{&l_175,&l_175},{(void*)0,&l_175},{(void*)0,(void*)0}},{{(void*)0,&l_175},{&l_175,&l_175},{(void*)0,(void*)0},{&l_175,&l_175},{(void*)0,(void*)0},{&l_175,&l_175},{&l_175,&l_175},{(void*)0,&l_175},{&l_175,&l_175},{&l_175,&l_175}},{{&l_175,(void*)0},{&l_175,&l_175},{&l_175,(void*)0},{(void*)0,&l_175},{&l_175,&l_175},{(void*)0,(void*)0},{&l_175,&l_175},{&l_175,(void*)0},{&l_175,&l_175},{&l_175,&l_175}},{{&l_175,&l_175},{(void*)0,&l_175},{&l_175,&l_175},{&l_175,(void*)0},{(void*)0,&l_175},{&l_175,(void*)0},{(void*)0,&l_175},{&l_175,&l_175},{(void*)0,(void*)0},{(void*)0,&l_175}},{{(void*)0,&l_175},{&l_175,&l_175},{&l_175,&l_175},{(void*)0,&l_175},{(void*)0,&l_175},{&l_175,&l_175},{&l_175,&l_175},{(void*)0,&l_175},{(void*)0,(void*)0},{(void*)0,&l_175}},{{&l_175,&l_175},{(void*)0,(void*)0},{&l_175,&l_175},{(void*)0,(void*)0},{&l_175,&l_175},{&l_175,&l_175},{(void*)0,&l_175},{&l_175,&l_175},{&l_175,&l_175},{&l_175,(void*)0}},{{&l_175,&l_175},{&l_175,(void*)0},{(void*)0,&l_175},{&l_175,&l_175},{(void*)0,(void*)0},{&l_175,&l_175},{&l_175,(void*)0},{&l_175,&l_175},{&l_175,&l_175},{&l_175,&l_175}},{{(void*)0,&l_175},{&l_175,&l_175},{&l_175,(void*)0},{(void*)0,&l_175},{&l_175,(void*)0},{(void*)0,&l_175},{&l_175,&l_175},{(void*)0,(void*)0},{(void*)0,&l_175},{(void*)0,&l_175}},{{(void*)0,&l_175},{&l_175,(void*)0},{&l_175,&l_175},{&l_175,(void*)0},{&l_175,&l_175},{(void*)0,&l_175},{&l_175,&l_175},{&l_175,&l_175},{&l_175,&l_175},{(void*)0,&l_175}}};
            int i, j, k;
            l_178 = l_175;
            l_179 = p_64;
            for (l_160 = 0; (l_160 <= 0); l_160 += 1)
            {
                int32_t *l_180[7];
                int16_t l_197 = 0x3BBB;
                uint16_t l_210 = 65535U;
                int i;
                for (i = 0; i < 7; i++)
                    l_180[i] = &g_11;
                p_64 = p_64;
                (**g_91) = l_180[5];
            }
        }
    }
    else
    {
        const int32_t * const *l_230 = &l_179;
        const int32_t * const * const *l_229 = &l_230;
        const int32_t * const * const ** const l_228 = &l_229;
        int32_t l_291 = 0;
        int32_t *l_302 = &g_88;
        if ((safe_lshift_func_int8_t_s_s((l_228 != &g_149[0][3][4]), ((g_11 , ((+(*p_64)) , p_64)) == p_64))))
        {
            return (*l_179);
        }
        else
        {
            const int32_t **l_232 = (void*)0;
            const int32_t **l_233[7];
            int i;
            for (i = 0; i < 7; i++)
                l_233[i] = &g_224;
            (**g_91) = (void*)0;
            (*g_92) = (*g_92);
            p_64 = p_64;
            for (l_160 = (-1); (l_160 < 19); ++l_160)
            {
                p_64 = ((safe_lshift_func_int8_t_s_u(((***l_229) >= 0U), 3)) , p_64);
                if ((*l_179))
                    continue;
            }
        }
        for (p_63 = 0; (p_63 >= 0); p_63 -= 1)
        {
            uint32_t l_260 = 1U;
            int32_t ***l_300 = (void*)0;
            uint16_t l_301 = 0x2F36;
            int8_t l_334 = 1;
            if ((((safe_rshift_func_uint8_t_u_u(p_63, ((g_11 , p_64) == ((((*p_64) , p_63) | (((0x85434852 & (safe_mod_func_int32_t_s_s((((0x4F4B || (safe_sub_func_int16_t_s_s(((void*)0 == &l_229), p_63))) , 3U) == (**l_230)), 0x614CAE8D))) & p_63) <= p_63)) , p_64)))) , p_63) || p_63))
            {
                uint32_t l_264 = 0x8E442EAC;
                int32_t *l_265 = (void*)0;
                int32_t *l_266 = &l_218[5][6];
                (*l_266) = (((safe_div_func_int16_t_s_s((g_119 || (((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((0x4B06 ^ ((safe_add_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((*p_64), (safe_rshift_func_int8_t_s_u(0xAF, l_260)))) == ((safe_lshift_func_uint16_t_u_u(((((((~p_63) < (l_264 >= (*p_64))) && (*l_179)) || l_264) == g_11) >= p_63), (****l_228))) != g_11)) , g_119), (***l_229))) | g_37)), g_119)), g_119)), g_11)) > 0x56DCD957), l_260)) >= l_260) <= g_11)), (***l_229))) || l_264) ^ g_11);
                l_291 = ((((safe_unary_minus_func_int16_t_s((5 == (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(0xBD49030F, ((((0xCC > ((safe_add_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(0x29, g_88)) , (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u(0x412E, ((-1) == 4))) || p_63) <= (*g_224)) | p_63), g_11)) < (****l_228)) != g_119) , l_290), 7)), 4)) ^ g_88) && 0x07CE) == 0x99), 8)), 0x7F00))) ^ g_88), (-4))) == 0x48)) >= g_11) || (*l_179)) ^ 0xBD2DB29B))), p_63)) >= 7U), p_63))))) > 0x6C89) , (****l_228)) > l_260);
            }
            else
            {
                int32_t l_297 = 0xA103EE57;
                for (g_119 = 0; g_119 < 9; g_119 += 1)
                {
                    for (l_160 = 0; l_160 < 7; l_160 += 1)
                    {
                        l_218[g_119][l_160] = 0;
                    }
                }
                for (l_291 = 0; (l_291 >= 0); l_291 -= 1)
                {
                    uint8_t l_324 = 7U;
                    if (((safe_add_func_int8_t_s_s(p_63, (safe_rshift_func_int16_t_s_u((-2), (safe_unary_minus_func_int16_t_s(l_297)))))) >= (safe_lshift_func_int8_t_s_s((((*p_64) , l_300) == (((((((g_88 <= ((((255U > p_63) , g_37) , 0x1CA4) || p_63)) > g_37) || g_37) != p_63) < l_301) , g_88) , l_300)), 5))))
                    {
                        int32_t l_304 = 0x81339926;
                        (*g_92) = (*g_92);
                        (**g_91) = l_302;
                        if (g_303[5])
                            break;
                        (*g_87) = (((&g_149[0][2][5] != &g_91) , (l_304 || (((g_37 , (void*)0) != (void*)0) || (((safe_sub_func_uint32_t_u_u((g_37 && g_119), ((void*)0 == &l_218[4][4]))) , 0xAFCF) && l_297)))) & p_63);
                    }
                    else
                    {
                        (*l_302) = ((((safe_rshift_func_uint16_t_u_s((0xF732D4BD & ((safe_mul_func_int16_t_s_s((((&g_148 != (p_63 , &g_148)) | p_63) , (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_63, p_63)), (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((((((**l_228) == (((safe_add_func_int16_t_s_s((p_63 , p_63), l_323)) < (-9)) , &p_64)) ^ 3U) < p_63) | p_63) , (*l_179)), g_303[5])), 7)), 65528U)) || l_324) != p_63)))), 0x011C)) , 0U)), g_303[5])) <= (*p_64)) == 0xDD) && l_324);
                    }
                    for (l_290 = 0; (l_290 >= 0); l_290 -= 1)
                    {
                        uint32_t l_333[4];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_333[i] = 8U;
                        (*l_302) = (((((safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_302) <= l_324), ((l_333[3] & (&g_148 == (((**g_91) != p_64) , &g_148))) > ((p_63 ^ (l_297 > 0x7F001630)) < (*g_224))))), 0)), (*l_179))) < 65535U) , p_63) > l_334), 0x588E)) != 1U) <= p_63) , p_63) ^ 0x69);
                        if ((*p_64))
                            continue;
                    }
                }
                (*l_302) = (*p_64);
                (*g_92) = (void*)0;
            }
            g_335 = (-3);
        }
    }
    l_290 = (*l_179);
    return (*l_179);
}
static int32_t func_70(int32_t * p_71, int32_t * p_72, int32_t * p_73, int32_t p_74, int32_t * p_75)
{
    int32_t *l_83 = (void*)0;
    int32_t ***l_114 = &g_92;
    uint32_t l_145 = 9U;
    int32_t ***l_150 = &g_92;
    int32_t *l_151[8][7] = {{&g_119,&g_11,&g_37,&g_11,&g_119,&g_88,&g_11},{&g_119,&g_37,&g_11,&g_37,&g_119,&g_11,&g_11},{&g_119,&g_11,&g_37,&g_11,&g_119,&g_88,&g_11},{&g_119,&g_37,&g_11,&g_37,&g_119,&g_11,&g_11},{&g_119,&g_11,&g_37,&g_11,&g_119,&g_88,&g_11},{&g_119,&g_37,&g_11,&g_37,&g_119,&g_11,&g_11},{&g_119,&g_11,&g_37,&g_11,&g_119,&g_88,&g_11},{&g_119,&g_37,&g_11,&g_37,&g_119,&g_11,&g_11}};
    int i, j;
    if ((safe_mul_func_uint8_t_u_u((&g_11 == l_83), p_74)))
    {
        int32_t ***l_94 = (void*)0;
        p_73 = &p_74;
        for (p_74 = 18; (p_74 != 22); p_74 = safe_add_func_int32_t_s_s(p_74, 4))
        {
            int32_t **l_86[2];
            int i;
            for (i = 0; i < 2; i++)
                l_86[i] = &l_83;
            g_87 = &p_74;
        }
        for (g_88 = 0; (g_88 <= 5); g_88 = safe_add_func_uint16_t_u_u(g_88, 2))
        {
            int32_t ****l_93[1][7];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_93[i][j] = (void*)0;
            }
            l_94 = g_91;
            (**g_91) = &p_74;
        }
    }
    else
    {
        int32_t l_112 = 0x0705E773;
        int32_t ** const *l_113 = &g_92;
        int32_t ** const **l_147 = &l_113;
        int32_t ** const ***l_146[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        (*g_92) = &p_74;
        (**g_91) = ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(0x506E, (((0xEFBB == p_74) < (&p_74 != l_83)) <= (***g_91)))) != (safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((g_88 ^ (((safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((+(g_11 == ((p_74 | 0x5B) || g_37))) | p_74), 0x78C3FCEE)) , g_88), l_112)) , l_113) != l_114)) | 0x701F), p_74)), 0x25)), p_74)) <= p_74) , 0x7774CA6A), (-1)))) , g_37), 2)) , (void*)0);
        for (g_88 = (-13); (g_88 != 29); g_88++)
        {
            int32_t *l_118 = &g_119;
            const int32_t **l_144 = (void*)0;
            const int32_t ***l_143[8][10][3] = {{{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{(void*)0,(void*)0,&l_144}},{{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{(void*)0,(void*)0,&l_144}},{{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{(void*)0,(void*)0,&l_144}},{{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,(void*)0,(void*)0},{&l_144,&l_144,(void*)0},{&l_144,&l_144,&l_144}},{{&l_144,&l_144,&l_144},{&l_144,(void*)0,&l_144},{&l_144,(void*)0,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_144,&l_144,(void*)0},{&l_144,&l_144,&l_144}},{{&l_144,&l_144,&l_144},{&l_144,(void*)0,&l_144},{&l_144,(void*)0,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_144,&l_144,(void*)0},{&l_144,&l_144,&l_144}},{{&l_144,&l_144,&l_144},{&l_144,(void*)0,&l_144},{&l_144,(void*)0,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_144,&l_144,(void*)0},{&l_144,&l_144,&l_144}},{{&l_144,&l_144,&l_144},{&l_144,(void*)0,&l_144},{&l_144,(void*)0,&l_144},{&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144},{(void*)0,&l_144,&l_144},{&l_144,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_144,&l_144,(void*)0},{&l_144,&l_144,&l_144}}};
            int i, j, k;
            (*l_118) = (~((*p_73) > (*p_71)));
            if ((safe_add_func_uint8_t_u_u(0x89, (safe_rshift_func_uint16_t_u_s(0xD067, 8)))))
            {
                if ((*p_73))
                    break;
            }
            else
            {
                int32_t l_130 = 9;
                (*l_118) = ((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(p_74, ((l_130 && 0x6D7C) || (safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((((((((g_37 , g_11) > (((**l_114) != (**l_113)) != (safe_rshift_func_int8_t_s_s(g_88, ((safe_lshift_func_int16_t_s_u(p_74, 15)) > l_130))))) || 0xCBFF) > 65528U) == 0) & (*p_71)) , l_130), p_74)) , l_143[7][1][0]) != &l_144), p_74)), (*p_75))) , p_74), l_145))))), 0x43)) <= 0U) , &l_113) == &l_113);
            }
            return (*p_73);
        }
        g_148 = &l_113;
    }
    p_74 = ((&g_91 == &l_114) , (((&p_72 == (((&g_149[0][1][0] == &l_114) , (0 != (0 || ((((void*)0 != l_150) != 1U) <= g_119)))) , (*l_114))) & (-1)) ^ (*p_72)));
    p_74 = 0;
    return (*p_72);
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_148 = 0;
    csmith_sink_ = g_11;
    csmith_sink_ = g_37;
    csmith_sink_ = g_88;
    csmith_sink_ = g_119;
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_303[i];
    }
    csmith_sink_ = g_335;
    csmith_sink_ = g_751;
    csmith_sink_ = g_770;
    csmith_sink_ = g_850;
    csmith_sink_ = g_1081;
    platform_main_end(0,0);
    return 0;
}
