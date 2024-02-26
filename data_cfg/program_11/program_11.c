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
static int32_t g_2 = 0xE8CFF0EA;
static uint32_t g_25 = 0xD24B5E49;
static int32_t g_32 = 0;
static int8_t g_34 = 0x4A;
static uint32_t g_104 = 4294967289U;
static uint32_t g_105 = 0x739C36DE;
static uint16_t g_122 = 65531U;
static int32_t g_123 = (-2);
static int16_t g_155 = 0x115A;
static uint32_t g_157 = 0x66612900;
static int32_t g_158 = 1;
static uint8_t g_199 = 255U;
static int16_t g_265 = (-3);
static uint32_t g_352 = 0x5E969112;
static int32_t g_353 = 0x9A1A1285;
static int16_t g_554 = 0xFA86;
static uint8_t g_574 = 0xB2;
static uint32_t g_599 = 0U;
static int32_t g_611 = (-1);
static int8_t g_915 = 0x73;
static int32_t g_987 = 0x3F9DE377;
static uint32_t g_994 = 0xF6222A9E;
static uint8_t g_1141 = 0x1B;
static uint32_t func_1(void);
static int32_t func_7(uint16_t p_8, int32_t p_9, int8_t p_10);
static int8_t func_17(uint8_t p_18, uint16_t p_19, int32_t p_20, int8_t p_21, uint8_t p_22);
static uint16_t func_26(uint32_t p_27, uint32_t p_28);
static int16_t func_35(uint16_t p_36, int16_t p_37);
static uint16_t func_40(uint32_t p_41, uint16_t p_42, int8_t p_43, uint8_t p_44);
static uint32_t func_51(uint8_t p_52, int32_t p_53, uint8_t p_54);
static int8_t func_61(int32_t p_62);
static int32_t func_64(int32_t p_65, int32_t p_66);
static uint16_t func_73(uint8_t p_74, int32_t p_75, uint32_t p_76, int16_t p_77, int32_t p_78);
static uint32_t func_1(void)
{
    int32_t l_6 = 0x01FC3EEE;
    int32_t l_1124 = 0;
    int32_t l_1140 = 0xD6646BE2;
    int8_t l_1142 = (-9);
    int32_t l_1143 = 0xA439D51A;
    for (g_2 = (-9); (g_2 != (-30)); --g_2)
    {
        int32_t l_5 = 0x56A9EF72;
        l_6 = l_5;
        l_6 = func_7(g_2, ((((safe_mod_func_int32_t_s_s((l_5 == (safe_rshift_func_int8_t_s_u(g_2, ((safe_rshift_func_int8_t_s_u(func_17(l_6, g_2, (((g_25 = (safe_sub_func_uint32_t_u_u(g_2, l_5))) > g_2) >= (func_26((g_2 <= 0xEC58), l_5) ^ 0x35A0)), l_6, l_6), g_2)) == g_2)))), 0x5B0A51A2)) & 0x0B9A) == g_2) | g_2), l_6);
        return l_6;
    }
    l_1143 = (((safe_div_func_uint16_t_u_u((l_6 < ((safe_rshift_func_int16_t_s_s(((l_6 == g_25) || (l_6 != (((g_1141 = (safe_add_func_uint32_t_u_u(((g_199 = (((((l_1124 = 4U) >= (((((safe_add_func_int16_t_s_s((((g_122 = ((safe_unary_minus_func_int32_t_s(((safe_rshift_func_uint8_t_u_s((l_6 >= (safe_mod_func_int32_t_s_s(0, (safe_lshift_func_int8_t_s_u(((l_1140 = (safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u((((-1) < (0xBCD0DF00 > 0x255B35C1)) <= 0x72), 0x8B)) & g_574), 5)) & 0x383B) | 0x29E2) < 0x90E8), 3))) == g_987), g_34))))), 0)) <= g_34))) >= g_611)) != 0xE684) <= 0xED8F), 1)) == 0xE3F02D02) && g_554) <= 0x7070) <= g_123)) | 0) & l_6) >= g_994)) == g_554), g_157))) <= 0) & l_1142))), g_915)) & l_1143)), g_994)) != l_1142) | 0xB2411157);
    return l_1140;
}
static int32_t func_7(uint16_t p_8, int32_t p_9, int8_t p_10)
{
    int8_t l_1114 = 0xEE;
    for (p_9 = 2; (p_9 < (-24)); p_9 = safe_sub_func_uint16_t_u_u(p_9, 4))
    {
        for (g_105 = 0; (g_105 >= 51); g_105 = safe_add_func_int8_t_s_s(g_105, 4))
        {
            int32_t l_1117 = 0x57454F8E;
            g_611 = ((((safe_rshift_func_int16_t_s_s(0, (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_1114, p_10)), (safe_lshift_func_uint8_t_u_u(g_158, ((((g_611 && g_611) <= g_2) > (0xC77527A0 > ((-9) & p_8))) == (-5)))))))) < 4U) & p_8) <= g_155);
            l_1117 = (-1);
        }
    }
    return l_1114;
}
static int8_t func_17(uint8_t p_18, uint16_t p_19, int32_t p_20, int8_t p_21, uint8_t p_22)
{
    uint32_t l_827 = 1U;
    int32_t l_833 = 0xEA4C6642;
    uint32_t l_850 = 4294967294U;
    int32_t l_869 = 0x0A405B12;
    int8_t l_877 = 2;
    uint8_t l_1047 = 248U;
    if ((((0 < 65529U) > (((safe_mod_func_uint32_t_u_u((g_25 = ((3U > ((~l_827) < ((p_19 & 0xA7) || p_20))) & (g_574 = (safe_sub_func_int32_t_s_s((l_833 = ((+(0x630D455A & (((safe_div_func_uint8_t_u_u(l_827, l_827)) ^ g_104) <= 0x0D))) || l_827)), g_2))))), p_22)) > 0xCE04) ^ p_22)) || l_827))
    {
        uint8_t l_845 = 0x49;
        int32_t l_864 = 0x07307C66;
        for (g_158 = 15; (g_158 > (-24)); g_158 = safe_sub_func_int32_t_s_s(g_158, 1))
        {
            uint8_t l_836 = 252U;
            if (l_836)
                break;
            p_20 = (g_611 ^ (~(((safe_sub_func_int8_t_s_s((((((((+(p_21 = ((((p_20 >= 0x3E) >= (((g_353 < ((0 || ((g_599 || ((safe_lshift_func_uint8_t_u_s(l_833, (safe_mod_func_uint32_t_u_u((l_845 = l_827), ((safe_add_func_int16_t_s_s((g_554 = (safe_div_func_uint32_t_u_u((l_850 = 0x2E24CA42), p_20))), p_21)) ^ 0))))) < l_833)) > p_18)) >= p_22)) & 5) > p_20)) < p_21) & l_836))) == 1) == 5U) ^ g_599) ^ p_18) <= (-1)) > 4294967291U), 0x57)) && 0xD67B) || 0xDC1B)));
        }
        g_353 = (((safe_lshift_func_int16_t_s_s((l_833 = ((g_265 = (safe_rshift_func_uint8_t_u_u(248U, (((!((safe_sub_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((g_574 = (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_864 = g_105), (((((l_833 <= ((((((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(1, l_845)), (l_869 = l_845))) & (!(0x0A || (g_199 = (safe_sub_func_uint16_t_u_u((((((p_21 <= ((safe_mod_func_int16_t_s_s((p_20 <= l_850), l_845)) == p_18)) != p_22) != p_22) & 4294967295U) > p_20), 0xF6B2)))))) >= (-9)) >= 0x5A161056) <= g_599) < p_19)) > 65535U) >= l_845) & l_833) ^ 0x3C43))), g_122))), l_845)) | g_157), (-1))) >= p_18)) != l_845) <= (-1))))) || g_611)), 13)) ^ p_21) || l_833);
    }
    else
    {
        int32_t l_896 = 0xDA55C95E;
        int8_t l_912 = 0xDB;
        int32_t l_913 = 0xADA5B92E;
        int32_t l_914 = 0xB1A88B5D;
        int32_t l_1061 = 0;
        int8_t l_1076 = 0x44;
        if (((((g_34 = (g_599 | (safe_mod_func_int8_t_s_s(l_877, (safe_add_func_uint8_t_u_u(l_833, (safe_sub_func_int32_t_s_s((((((safe_lshift_func_uint16_t_u_s(0x1A2F, (safe_mod_func_int16_t_s_s((l_914 = (l_913 = (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((g_554 = ((safe_sub_func_uint16_t_u_u(l_896, (((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((~(((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(0, (g_554 || ((safe_sub_func_uint16_t_u_u(g_2, (g_122 = (0x1750 == l_850)))) < p_19)))) ^ 0x3297BE03), g_32)) | 65535U) <= 0xBF) & g_25) < g_611)), l_827)), 8)), 8)) != 3), 250U)) <= p_20) != l_850))) != (-8))), 12)) || p_18), 0xE2)) <= l_912), 4)) | l_896), (-10))))), g_915)))) & l_869) >= 0x759CC1B7) >= g_158) | p_20), l_869)))))))) && 8) > 0x87F4DC18) || l_896))
        {
            int8_t l_955 = 0;
            int32_t l_977 = 0x8617510E;
            for (g_158 = 0; (g_158 <= 27); ++g_158)
            {
                uint32_t l_940 = 0U;
                int32_t l_941 = (-1);
                int32_t l_956 = 1;
                p_20 = ((-1) >= (l_869 < (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_18, ((((((safe_add_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(0x2002, (safe_sub_func_int32_t_s_s((l_955 = (g_352 & (safe_lshift_func_int8_t_s_s((l_941 = (l_940 = l_850)), (g_34 > (safe_mod_func_uint32_t_u_u(((p_21 = (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((p_19 = (safe_unary_minus_func_int8_t_s(((safe_div_func_uint16_t_u_u(((l_914 = (g_915 = ((p_19 && ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(p_19, 0x6E65D76E)), 4)) <= g_157)) ^ p_22))) && p_21), 65532U)) ^ g_554)))), p_21)) & 0xAD278323), g_554))) < g_158), 4U))))))), p_18)))), l_913)) <= 0x6E), l_912)) && g_123) <= g_2), g_155)) == l_956) ^ 0x27CCC21E) || p_20) == p_22) && 0xA3))), l_833)) < (-3)) < g_104) || 0x3E) & 0xC3B4), 0)) != 0xC910F1B8) && p_18), 0x3F83)), l_896))));
            }
            for (g_123 = 0; (g_123 < (-26)); g_123--)
            {
                uint32_t l_986 = 0x2DDA5D0B;
                g_611 = (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((l_914 = (0x45D9F1C5 | (0xB5 ^ (safe_div_func_int32_t_s_s((4294967292U == ((+(((safe_div_func_int32_t_s_s(((p_20 = 0) & ((g_599 = (+(((g_915 = 0x3E) ^ (g_574 = g_104)) <= ((safe_lshift_func_uint16_t_u_u((g_122 = ((((safe_mod_func_int8_t_s_s((p_18 & 1), g_599)) != 0xE4) & 65535U) <= 255U)), l_955)) || 0xCD)))) >= 0U)), 4)) >= p_19) >= l_896)) ^ l_912)), g_554))))) <= p_21), l_896)), 1)) | (-1)) >= l_955), g_199)), 4)) & 0x5487) ^ 0x8E82AA7C);
                l_977 = ((p_18 = (p_22 <= (0x328D == l_955))) != p_19);
                g_611 = (safe_mod_func_uint32_t_u_u(1U, (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_18, l_913)), 4))));
                if (((safe_lshift_func_uint16_t_u_u(l_913, 12)) != ((l_986 = p_18) | (l_977 = 0))))
                {
                    int16_t l_991 = 0x8F42;
                    g_353 = ((l_991 = (((g_987 = 0x93FC) != p_21) || ((-5) > (g_122 = (safe_add_func_uint8_t_u_u((!l_833), (0x8DCD <= l_955))))))) > ((g_994 = (safe_rshift_func_uint8_t_u_s(((((l_869 = l_913) ^ 0x74D1EC7C) & g_352) == l_977), p_20))) >= p_22));
                }
                else
                {
                    p_20 = g_158;
                }
            }
        }
        else
        {
            int32_t l_1033 = 0x10BCD2D6;
            int32_t l_1034 = 8;
            uint32_t l_1077 = 0xC6F553F7;
            l_869 = (safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_20 > 0x5EBA), (safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((g_987 = (safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_265, (safe_rshift_func_uint16_t_u_s((g_611 > (safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((0x1692D02B <= 0x0D819E72), (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(g_915, (((safe_rshift_func_uint16_t_u_u(g_611, 14)) & (((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((l_1033 = (l_1033 <= g_611)), g_32)) != p_21), g_611)) & l_1034) != l_869)) & p_21))), g_123)), p_18)))), p_19)), 2))), g_554)))), g_25))) <= g_554), 0)), p_20)) >= l_1034), 5)))), 6)) != (-1)), p_20)) ^ p_21), g_158));
            for (p_18 = 0; (p_18 != 45); p_18 = safe_add_func_uint16_t_u_u(p_18, 1))
            {
                int32_t l_1037 = 1;
                int32_t l_1057 = 0xAE13EDB6;
                if (l_1037)
                {
                    uint8_t l_1046 = 0x1F;
                    int32_t l_1062 = 0x287AAA15;
                    int32_t l_1063 = 1;
                    l_1033 = (safe_sub_func_uint32_t_u_u(((((-5) | ((safe_rshift_func_int8_t_s_s((l_913 > (l_1063 = ((safe_div_func_uint8_t_u_u((l_1047 = (safe_lshift_func_uint16_t_u_s((g_157 >= l_1046), 4))), (((g_155 = (safe_div_func_uint16_t_u_u(g_554, (safe_rshift_func_uint8_t_u_s((l_1057 = (safe_add_func_uint8_t_u_u(p_20, (p_22 = (+g_123))))), 5))))) >= (l_869 = (!(l_833 = (l_1062 = (safe_rshift_func_int8_t_s_s(((g_915 != g_123) & l_1061), 6))))))) ^ p_19))) == p_21))), p_20)) >= p_18)) || p_20) > g_32), (-1)));
                }
                else
                {
                    uint8_t l_1085 = 247U;
                    int32_t l_1086 = (-1);
                    if ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(0, 0x2DE4)) | (safe_rshift_func_uint8_t_u_u(0x85, (safe_div_func_uint16_t_u_u(((g_599 == (((g_994 = ((l_1077 = ((l_1034 = l_833) && (g_987 || (safe_mod_func_uint8_t_u_u(p_20, l_1076))))) | (((+((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_34, l_913)), p_22)) ^ g_987) | (-10)), 6)) || 0x6882)) == p_18) <= l_877))) && p_21) == 1)) >= g_574), l_850))))) != g_987), l_1085)), (-7))))
                    {
                        g_353 = 0xABF055FB;
                        if (g_352)
                            break;
                        l_1086 = (p_20 = l_869);
                        return l_827;
                    }
                    else
                    {
                        g_123 = (l_1033 = (l_827 && 4294967292U));
                        l_1057 = ((safe_add_func_int32_t_s_s((0U > (safe_sub_func_int16_t_s_s((+(safe_sub_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((((((p_18 | (((g_265 > (g_199 = g_32)) >= g_155) < (((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_21 & (g_122 = p_22)), (safe_sub_func_uint8_t_u_u(p_22, (l_869 = (g_574 = (safe_add_func_uint32_t_u_u((l_913 = (0U && 0xF435)), p_20)))))))), (-4))) <= l_1086) >= l_1086))) & g_611) < (-5)) & p_20) != l_1034), g_611)) || g_554) < 7U), 0x10CA))), l_1033))), 0)) || g_2);
                    }
                }
            }
        }
    }
    return g_353;
}
static uint16_t func_26(uint32_t p_27, uint32_t p_28)
{
    int32_t l_31 = (-5);
    int32_t l_63 = 0x3D8D5894;
    int32_t l_727 = 0xE6A88439;
    uint16_t l_786 = 0x44D2;
    uint8_t l_818 = 252U;
    int32_t l_823 = 3;
    for (p_28 = 0; (p_28 <= 60); p_28 = safe_add_func_uint8_t_u_u(p_28, 2))
    {
        int16_t l_33 = 1;
        int32_t l_633 = 0;
        uint8_t l_745 = 247U;
        int32_t l_746 = 0x54CD0C41;
        int32_t l_776 = 5;
        if ((l_31 | ((((g_32 = g_2) == (g_34 = l_33)) != g_2) <= func_35(((safe_rshift_func_uint16_t_u_u(func_40(g_2, l_33, (safe_div_func_uint8_t_u_u(l_31, (g_554 = (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((func_51((safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(func_61((l_63 = (l_33 | 0x5CC9))), l_31)) == 0x0B5FE46E), p_28)) & l_33), l_31)), l_33, g_2) && 0x95FE38EC), g_158)), l_31))))), g_2), p_27)) & l_33), l_33))))
        {
            int8_t l_612 = 0x11;
            uint16_t l_679 = 1U;
            int32_t l_717 = 0x088018A1;
            if (l_612)
            {
                int32_t l_632 = 0x784EC2A0;
                g_353 = ((-8) ^ (safe_mod_func_int8_t_s_s((g_105 & (safe_rshift_func_uint16_t_u_u(p_27, (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((g_611 = (safe_sub_func_uint32_t_u_u(4294967292U, ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_104, ((g_199 != (l_612 ^ g_122)) <= ((safe_sub_func_uint16_t_u_u((~1U), g_158)) && g_599)))), g_2)), 0xEC7FBDF4)) > 0x96)))) == (-8)), l_632)), 0x8E))))), p_28)));
                l_633 = ((l_63 & p_28) & 4294967295U);
            }
            else
            {
                uint16_t l_658 = 0x08D1;
                int32_t l_663 = 1;
                for (g_104 = (-6); (g_104 >= 60); ++g_104)
                {
                    int32_t l_680 = 0x7D597A77;
                    int32_t l_681 = 1;
                    int32_t l_682 = (-1);
                    int16_t l_683 = (-1);
                    l_63 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((~(safe_sub_func_uint8_t_u_u(((g_599 = (safe_rshift_func_uint16_t_u_s(((+(((safe_rshift_func_int8_t_s_u((l_63 >= l_633), (g_34 || (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_574 | (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(249U, 2)) == (p_27 & ((safe_add_func_uint16_t_u_u(0xA7C9, (l_658 = 7U))) | (safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u(((l_612 != p_27) && l_663), l_63)) != 255U), l_63))))) != l_612), g_123))), (-6))), p_28))))) ^ 0U) ^ p_27)) >= p_28), 11))) <= g_34), g_155))), g_158)), 1));
                    l_682 = (safe_sub_func_int32_t_s_s(((~((l_633 = (((g_34 < (safe_add_func_int8_t_s_s((l_31 & (l_663 = (safe_rshift_func_int8_t_s_s(((g_105 <= (safe_sub_func_int16_t_s_s(((((((l_681 = (safe_lshift_func_uint16_t_u_u((l_680 = ((safe_div_func_uint8_t_u_u(255U, 0x39)) || (l_633 == (((safe_mod_func_int32_t_s_s(p_27, ((g_123 = 0xF6C83595) & ((l_679 <= 4294967291U) >= g_2)))) <= 0x7487) >= g_34)))), p_27))) >= 4294967290U) < l_682) > l_633) == 0x2DCF) <= g_352), l_683))) || l_633), g_158)))), l_658))) & l_33) || g_155)) >= p_27)) <= g_34), g_105));
                    if (g_122)
                        break;
                }
            }
            l_633 = ((safe_lshift_func_uint8_t_u_s((g_105 <= (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((((l_33 && p_27) >= (safe_mod_func_int8_t_s_s((+((l_717 = ((safe_lshift_func_uint8_t_u_s(p_28, (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(p_28, 0)) || (safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_div_func_int32_t_s_s(0x614B441B, (+(safe_mod_func_int16_t_s_s(6, (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((p_27 || ((g_199 = (safe_div_func_uint8_t_u_u(l_33, (-5)))) | l_63)), l_633)), p_27))))))) <= g_34), 0U)), p_28)) != 0U)))), 0xD121491C)))) >= l_679)) > l_612)), l_612))) | 1) <= p_27), l_679)), 9)), 0x92FE))), l_31)) | p_28);
        }
        else
        {
            uint32_t l_726 = 4294967286U;
            int32_t l_728 = 0x24097C16;
            int32_t l_748 = 1;
            int16_t l_817 = (-1);
            for (g_158 = 0; (g_158 <= 27); g_158 = safe_add_func_uint32_t_u_u(g_158, 7))
            {
                int32_t l_792 = (-6);
                int32_t l_801 = 0x97B2DCD3;
                l_728 = ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(l_63, 0)) & ((l_727 = ((l_726 = ((0x1D || ((g_574 & (g_554 ^ (p_28 ^ ((safe_lshift_func_uint16_t_u_s((l_63 & (g_611 > (g_155 = 0x09D8))), g_2)) | 8)))) & p_28)) == 0x4F)) == 0x30624977)) ^ 0xAF5C)), g_2)) == 0xBC54EC6D);
                for (l_633 = 0; (l_633 >= 20); l_633++)
                {
                    uint8_t l_736 = 2U;
                    int32_t l_747 = (-7);
                    g_123 = p_28;
                    l_748 = ((safe_rshift_func_uint16_t_u_u((l_728 = p_28), 15)) && (!(safe_div_func_uint32_t_u_u(((l_736 = l_726) ^ g_158), (safe_sub_func_int16_t_s_s(((g_123 < 0xC4297A5F) & 0xAD), ((l_747 = (safe_rshift_func_uint16_t_u_s((0xF1 && ((l_746 = (((safe_add_func_uint16_t_u_u((l_633 <= (safe_sub_func_uint8_t_u_u(g_122, g_554))), l_745)) > p_27) | p_27)) > l_747)), p_28))) <= g_158)))))));
                    l_776 = (safe_mul_func_int16_t_s_s(7, ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((l_633 == (((safe_rshift_func_uint8_t_u_s((p_28 != (safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((~(safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((g_599 = (g_122 < 0x9D4ABB65)) == (safe_mod_func_int32_t_s_s(p_27, 4294967291U))) | (l_746 = ((((0 != (safe_mod_func_uint8_t_u_u((p_27 != 0), l_727))) >= 0U) > l_33) >= 8))), p_27)), g_2))) == 0x7AC9F6A4) <= p_28), 7)), g_199)), 5)) != p_28) <= g_34), 65535U)) ^ p_28) > g_155) || l_736), 1))), 5)) <= g_155) && p_28)) > 0U), 6)), p_28)) != p_27)));
                }
                g_123 = (safe_lshift_func_uint16_t_u_u(p_28, ((g_34 = (+((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((((safe_rshift_func_int16_t_s_u(l_786, (safe_lshift_func_int8_t_s_s((((safe_add_func_int16_t_s_s((l_792 = (+g_158)), (safe_add_func_uint32_t_u_u((((0xEF1E78B4 != ((l_63 = (safe_div_func_uint16_t_u_u((g_122 = g_105), (safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((l_746 = (0xFBCB > 0x769F)), l_33)) != ((l_801 || 0xD5CA4A8E) ^ l_726)), p_28))))) >= (-8))) || p_28) || p_27), g_554)))) > 0x4D) < g_34), g_611)))) ^ p_28) & 9) || (-1)) | p_27), p_28)), (-9))) || g_611))) ^ 255U)));
            }
            l_633 = 0xAB81DD4E;
            l_633 = ((0x3C63 <= (safe_add_func_int16_t_s_s((+((safe_div_func_int32_t_s_s((l_63 = (safe_lshift_func_uint8_t_u_s((l_727 = (l_776 = (((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((p_27 ^ (p_28 != 0U)) > l_726), 0)) == 0x93390E5C), (g_599 && g_105))) != 0x6159) ^ l_746))), g_574))), g_157)) < p_27)), g_34))) < 0x2D430CDA);
            g_611 = ((((g_122 = (safe_sub_func_int32_t_s_s(0x946E8EC0, (((safe_lshift_func_uint8_t_u_s(0x9C, ((l_727 = 7U) | (g_2 > l_817)))) & (g_34 != (-4))) >= l_818)))) == (safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((1U < g_2) > (-10)), l_818)) > 255U), 4294967295U))) & l_817) <= g_157);
        }
    }
    l_727 = g_2;
    g_353 = (p_27 > g_265);
    l_63 = l_823;
    return l_63;
}
static int16_t func_35(uint16_t p_36, int16_t p_37)
{
    int8_t l_576 = 0xCF;
    int32_t l_585 = (-1);
    int8_t l_606 = (-1);
    int16_t l_609 = (-10);
    uint16_t l_610 = 0x93FC;
    l_576 = 0xE6C8D591;
    for (g_123 = 0; (g_123 <= 3); ++g_123)
    {
        uint32_t l_579 = 0U;
        int32_t l_597 = 0x23333DDF;
        int32_t l_598 = 0;
        l_579 = 0x887CB2C0;
        g_599 = ((((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int8_t_s(((l_585 = 0x3970FA0D) | p_36))) >= l_576), 2)), (p_37 = l_579))) < (p_36 | (g_353 = 0))) == p_36) >= (l_598 = ((safe_rshift_func_int8_t_s_u(((l_597 = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((1 <= (safe_rshift_func_uint16_t_u_s((!(safe_mod_func_uint32_t_u_u(p_36, g_265))), 15))) ^ g_122), p_36)), l_579))) < 0xBD), g_199)) <= l_576)));
        g_611 = (g_353 = ((0x6375 | (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(l_606, ((l_597 = g_199) < (safe_mod_func_uint16_t_u_u((l_606 >= (p_36 >= l_585)), 65535U))))) & (((p_36 | ((l_609 = (p_37 & p_36)) != g_104)) >= l_606) & l_610)) && 0xD4) <= 255U), g_155)) == l_610), p_37))) <= l_579));
        l_585 = p_36;
    }
    return l_610;
}
static uint16_t func_40(uint32_t p_41, uint16_t p_42, int8_t p_43, uint8_t p_44)
{
    int32_t l_557 = (-1);
    int32_t l_568 = 0x9DD3CF3D;
    int16_t l_569 = 0x5834;
    int32_t l_575 = 0x3F50D536;
    l_568 = ((safe_sub_func_int16_t_s_s(l_557, ((0 >= l_557) <= (safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_557, 0U)), 0x2DC942D0)) > g_104), (((safe_lshift_func_uint8_t_u_u(g_353, ((g_353 || 0xE729) && g_158))) || (-9)) || 0x71))) > g_123), 7U))))) & l_557);
    l_575 = (l_569 >= (g_105 = ((g_158 == p_44) || (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((g_157 >= (l_568 = g_157)), g_574)), l_569)))));
    return g_157;
}
static uint32_t func_51(uint8_t p_52, int32_t p_53, uint8_t p_54)
{
    int16_t l_194 = 0x994D;
    int32_t l_203 = 0xE989E982;
    int32_t l_215 = 0x1870374A;
    int32_t l_216 = 9;
    uint32_t l_380 = 0x8256CFA1;
    int8_t l_425 = (-1);
    int16_t l_448 = 0;
    p_53 = (0x985A9A92 ^ 1U);
    if ((0x172F119E || (g_123 > ((((safe_sub_func_uint8_t_u_u(l_194, g_158)) ^ (((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(65529U, ((((((-1) && ((((((g_199 = l_194) > (g_104 > (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(g_2)), l_194)))) || 0xA4A799C4) < g_105) ^ l_194) < g_157)) == p_53) > l_194) > l_194) >= p_53))) < 0U), g_2)) > 0) ^ l_194)) >= l_194) || p_53))))
    {
        int16_t l_220 = (-1);
        uint32_t l_267 = 7U;
        int16_t l_313 = 0;
        int32_t l_350 = (-1);
        int32_t l_371 = 0;
        int32_t l_457 = 0x55A29D44;
        int32_t l_490 = 0x63323BC5;
        g_123 = ((l_203 = (0xD512 & (-2))) <= ((safe_sub_func_int8_t_s_s(0x0D, ((safe_mod_func_int32_t_s_s((l_216 = (+(g_2 || (p_54 >= (safe_sub_func_int8_t_s_s(0x1C, ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_215 = 1U), p_53)), 3)) || 0x6B9C))))))), 4294967290U)) < p_54))) > p_52));
        if ((+((p_54 = 0x3A) > p_52)))
        {
            uint16_t l_221 = 0x92FA;
            for (g_199 = 3; (g_199 == 14); ++g_199)
            {
                return g_2;
            }
            l_220 = (-1);
            l_221 = 0xAA6E91FF;
        }
        else
        {
            uint8_t l_236 = 0U;
            uint32_t l_264 = 1U;
            int32_t l_266 = 0;
            int32_t l_269 = (-1);
            int32_t l_351 = 5;
            uint16_t l_449 = 0x8E31;
            for (g_199 = 20; (g_199 == 46); g_199++)
            {
                return p_53;
            }
            for (p_52 = 0; (p_52 == 15); ++p_52)
            {
                uint8_t l_237 = 0x17;
                int8_t l_338 = 0;
                int32_t l_370 = 3;
                if ((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((g_199 < (l_203 = g_155)), ((255U == g_2) != ((safe_add_func_int16_t_s_s(p_53, (safe_mod_func_int8_t_s_s((-1), (1 || l_220))))) || (((l_236 = l_220) & 0xBB) && l_237))))) | 0x00A8), p_52)), p_54)))
                {
                    int8_t l_256 = 1;
                    uint16_t l_263 = 0x757C;
                    int32_t l_268 = 0;
                    int32_t l_312 = (-10);
                    p_53 = l_237;
                    if ((l_269 = (safe_mod_func_int32_t_s_s(p_54, (l_268 = ((l_203 = (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((((safe_mod_func_int16_t_s_s(0xF76D, (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_203, 6)), (l_266 = (l_236 | (g_265 = (l_264 = ((((l_256 = p_54) <= (8 >= ((((0x99B11781 ^ (0x66 > (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_263, 1)), g_105)), l_263)))) != l_237) ^ l_237) <= g_199))) != 0x50F72682) || g_199))))))))) < p_53) | 1U), 9)) && p_52), l_263)), g_158)) == 0U), l_267)), g_104))) ^ g_123))))))
                    {
                        int32_t l_284 = 0xA3A65F83;
                        int32_t l_291 = 0x06331396;
                        l_291 = (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((-6) > p_54), (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(p_53, p_53)) & ((safe_rshift_func_uint16_t_u_s((l_284 = (l_216 = (l_236 | (safe_rshift_func_uint8_t_u_u(5U, 7))))), (safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((255U || (((safe_div_func_int16_t_s_s(g_2, g_104)) || 2U) == 1)) & l_256), l_220)), g_2)))) < 0x77)) <= l_266), p_54)), p_53)))), g_158));
                        l_216 = (((safe_lshift_func_uint16_t_u_s((l_313 = ((p_53 ^ g_155) != (l_203 = (65526U > ((0x5815 ^ l_268) ^ (p_53 == (p_53 < (p_54 = (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_312 = ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_236, (safe_add_func_uint32_t_u_u(((+(((((safe_unary_minus_func_int32_t_s((g_123 = ((safe_unary_minus_func_int8_t_s(0)) < p_52)))) && 6U) > l_291) != 4294967295U) & p_53)) > p_53), p_52)))), g_122)) == l_264))), 4)) == g_158)), g_199)), (-2))), g_155)))))))))), 3)) > 249U) || p_53);
                    }
                    else
                    {
                        uint32_t l_328 = 0x68F25B8A;
                        int32_t l_337 = 0x78F816EC;
                        if (g_199)
                            break;
                        p_53 = (((l_220 >= (l_269 != (g_105 = (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(p_52, (((l_312 = (1U == ((l_328 = p_52) & (((safe_div_func_int8_t_s_s(l_267, p_52)) == 0xBC78BEF3) > (((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(l_337, g_155)) & p_53), l_220)) || p_52), 1)) ^ l_338) >= (-10)))))) & 0) | g_2))) | g_123), p_54)), (-5))), p_52)), 0x40)), l_264)), g_123))))) < g_265) <= g_158);
                        g_353 = ((safe_div_func_int16_t_s_s((~p_52), (((l_266 = (g_123 > l_203)) <= (((g_352 = (safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(l_237, ((l_351 = (g_122 = ((safe_lshift_func_int16_t_s_u(g_199, 9)) ^ ((((g_122 != (safe_lshift_func_uint8_t_u_s(1U, 0))) ^ (g_105 = (((l_350 = (g_155 & g_104)) & 0U) >= p_54))) && l_237) > p_52)))) | 0xD957))) > 1U), 6U))) < p_53) ^ p_52)) | 0xC0B13E44))) | g_353);
                        l_371 = ((l_266 = (safe_sub_func_uint16_t_u_u(((((((l_370 = (l_203 = (safe_sub_func_int16_t_s_s(((l_350 = (((((((safe_add_func_uint32_t_u_u(6U, ((((safe_rshift_func_uint8_t_u_u(0x41, 5)) || l_220) ^ g_157) & p_54))) & l_328) ^ g_157) < (safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(p_54, 14)) == (((l_268 ^ g_352) ^ g_158) ^ 1U)) && l_215), 1U)) == 251U), 0x47)), 2))) ^ l_269) < 0x42ADA261) && l_264)) && g_199), p_54)))) ^ l_328) ^ 1) >= 9) > p_54) < p_53), l_338))) == l_220);
                    }
                }
                else
                {
                    int16_t l_405 = 0x1E87;
                    uint32_t l_424 = 4294967295U;
                    int32_t l_426 = (-6);
                    if (((65526U && ((safe_div_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u((~(+(safe_div_func_int32_t_s_s(l_380, (safe_rshift_func_uint16_t_u_u((0U >= (safe_rshift_func_uint16_t_u_u(g_122, (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((p_54 <= ((+(safe_lshift_func_int8_t_s_u(0x50, p_54))) ^ p_54)), l_194)), g_265))))), l_237)))))), 1)) == 0x57F3) > p_53), 0xD4DFEEED)) <= l_264)) < 0x2F3691EA))
                    {
                        uint16_t l_427 = 65535U;
                        l_371 = (safe_rshift_func_int16_t_s_u((g_199 != ((l_427 = (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s((!l_405), (safe_unary_minus_func_uint32_t_u(((p_54 = (l_264 != (safe_lshift_func_uint16_t_u_s((l_426 = ((g_104 > (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((((((g_122 = ((l_424 = (safe_sub_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((((g_155 == 0x7CDA) >= (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((p_52 == l_220), g_353)), 4))) != l_203) | p_53), l_264)) < l_203), p_54))) || g_158)) != l_425) == g_157) <= g_105) != l_269) | 0xA5))), l_269)) && g_155), l_236)), l_215))) & l_371)), p_53)))) || 0U))))) == 65530U) >= g_155), g_105)), 1U)), l_215))) >= 0x1904DDF8)), p_52));
                        g_353 = (safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_194, 9)), l_424)), (~(p_53 = (safe_lshift_func_int16_t_s_s((l_370 = g_352), l_338))))));
                        p_53 = ((safe_lshift_func_int8_t_s_u((p_54 || ((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((p_53 || (safe_mod_func_int8_t_s_s((+((l_371 = (l_351 = l_424)) >= (-5))), (g_199 = (safe_add_func_int16_t_s_s(0xD6ED, l_350)))))) & ((-1) >= (g_155 == g_265))) < p_52) != l_448), 0x32)), l_266)) | l_449)), l_220)) == l_424);
                    }
                    else
                    {
                        uint16_t l_452 = 65535U;
                        p_53 = (safe_mod_func_uint32_t_u_u(((g_123 = l_370) ^ (l_452 & (p_54 = ((p_53 == (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_104, 5)), (l_216 = (l_457 ^ ((safe_add_func_uint8_t_u_u(0U, ((g_199 >= (g_105 = (safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(l_452, l_267)) >= p_53), g_105)))) != g_265))) | g_352)))))) != g_158)))), p_52));
                        g_353 = (safe_lshift_func_uint8_t_u_u(g_199, 7));
                    }
                }
                for (g_123 = (-1); (g_123 == (-3)); g_123 = safe_sub_func_int8_t_s_s(g_123, 4))
                {
                    uint16_t l_468 = 0U;
                    l_468 = p_52;
                }
                g_123 = p_53;
            }
            l_490 = (safe_sub_func_uint8_t_u_u((g_199 = 0xDA), ((safe_rshift_func_int16_t_s_u((~p_54), (safe_sub_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_158, ((((65529U >= ((safe_mod_func_uint32_t_u_u((p_53 != (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(0x57, (safe_div_func_int16_t_s_s(p_52, g_2)))), l_203)), 0x0EC1))), l_236)) ^ p_52)) != 0) ^ 0xC0) != l_267))), p_54)) >= p_52), p_54)))) ^ g_353)));
        }
    }
    else
    {
        uint32_t l_515 = 0U;
        uint32_t l_540 = 0xE52A8F70;
        if (g_104)
        {
            uint8_t l_517 = 255U;
            p_53 = (1U ^ (l_203 = (g_123 = (safe_add_func_uint32_t_u_u(4294967295U, (g_353 && p_53))))));
            p_53 = 0x41877CA9;
            for (g_122 = 0; (g_122 < 44); g_122 = safe_add_func_uint32_t_u_u(g_122, 2))
            {
                uint16_t l_505 = 0xBC3D;
                int32_t l_506 = 0x35D0FB07;
                int32_t l_516 = (-1);
                l_516 = (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(g_158, 5)), (safe_div_func_int16_t_s_s((-1), (g_265 = (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((l_506 = (0x07 ^ l_505)) <= 0xB3) || ((p_53 >= 0U) & ((-6) >= (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((((l_506 = p_52) && g_158) <= p_53) == g_353), p_52)) >= l_203), l_515)), l_515))))), l_505)), g_104)))))));
            }
            l_517 = 1;
        }
        else
        {
            uint16_t l_522 = 0U;
            p_53 = ((safe_mod_func_int32_t_s_s(g_352, (+(0x8D6C == (safe_unary_minus_func_int8_t_s(l_522)))))) == p_52);
            g_353 = (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((0xD6344119 != ((g_105 = ((safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_54, (+(safe_div_func_uint16_t_u_u(l_522, 0xEAB5))))) > (p_53 = (safe_add_func_int16_t_s_s((l_380 == (((g_265 && (((-6) != ((safe_rshift_func_int16_t_s_s((g_2 <= (safe_div_func_int32_t_s_s(l_540, 0xB6A71BAC))), g_157)) <= l_522)) > g_122)) >= l_540) > p_53)), 0x89C1)))), g_265)) <= l_515)) >= g_157)), p_52)), l_448));
            p_53 = p_52;
        }
        return l_515;
    }
    p_53 = (l_215 | (g_2 || g_105));
    l_216 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((l_194 < (g_123 <= (safe_lshift_func_uint16_t_u_u((l_203 = (safe_add_func_uint8_t_u_u(((!(g_158 | l_203)) == (g_155 = 0)), (-3)))), 11)))), p_54)) ^ ((safe_mod_func_uint16_t_u_u(((g_158 >= (((g_199 = l_194) || l_448) <= (-1))) <= 0), g_104)) != p_52)), 8)), l_448));
    return l_194;
}
static int8_t func_61(int32_t p_62)
{
    int8_t l_126 = 0xB4;
    int32_t l_143 = 0xB129D736;
    int32_t l_154 = (-6);
    int32_t l_156 = 0;
    int32_t l_188 = 0;
    uint16_t l_189 = 0x6850;
    l_126 = func_64((safe_div_func_uint8_t_u_u(g_2, g_2)), g_2);
    for (g_123 = 0; (g_123 >= 9); g_123 = safe_add_func_int32_t_s_s(g_123, 1))
    {
        uint32_t l_150 = 1U;
        int32_t l_153 = 0x0CB50322;
        uint32_t l_178 = 1U;
        g_157 = (p_62 <= (safe_sub_func_uint8_t_u_u(l_126, (((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((((((safe_add_func_uint8_t_u_u((l_153 = ((((safe_rshift_func_int16_t_s_s((~0xC923), 15)) == (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((l_126 || (l_143 = 0)))), (l_156 = ((g_155 = (1 < ((l_154 = (((((safe_mod_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_150 = (-4)), (safe_add_func_int32_t_s_s(l_153, (l_153 < p_62))))), g_104)) < g_104) == g_122), g_104)) >= p_62) > p_62) <= l_126) ^ p_62)) && g_105))) && p_62))))) ^ g_105) | (-1))), 1U)) || 0xAF50) > p_62) || g_155) > 0) && g_123), 3)), p_62)) <= 0U) <= 0x67))));
        if (g_158)
            continue;
        l_154 = g_105;
        l_188 = ((safe_sub_func_int32_t_s_s((g_105 && ((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(0x4A, (~0xE60D))), (((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_122 = 65529U), ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_143 = (safe_lshift_func_int8_t_s_s(l_178, 2))), (p_62 ^ (safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((6 == 0x77) & (safe_add_func_uint32_t_u_u(g_157, p_62))))), 0x43)) || p_62), g_155)) ^ p_62), 5))))), l_178)) == g_158))), g_123)) == 0xB2) == p_62) > g_123) == g_157))), g_123)) == l_156)), (-9))) <= p_62);
    }
    return l_189;
}
static int32_t func_64(int32_t p_65, int32_t p_66)
{
    int16_t l_93 = (-6);
    int32_t l_106 = 0x3A768FB0;
    uint16_t l_107 = 0x59CE;
    uint32_t l_125 = 0x93872454;
    l_125 = (safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(func_73((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_106 = (g_105 = (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(8U, ((safe_mod_func_int16_t_s_s(((((3 < l_93) | (((safe_sub_func_int8_t_s_s(((l_93 >= (((safe_sub_func_int8_t_s_s(0x9C, ((safe_add_func_int8_t_s_s(g_2, (safe_add_func_uint8_t_u_u((g_104 = (l_93 && (safe_sub_func_uint16_t_u_u(p_66, (-1))))), 0x20)))) ^ l_93))) <= g_2) == l_93)) > l_93), l_93)) || (-10)) <= l_93)) ^ 0xF15F) != 0x34), (-6))) | (-1)))), 0x13)))), l_93)), 0x4BD9F5B6)) != l_93), (-10))), l_107, g_2, l_107, g_2), 4U)) <= p_66), g_122));
    return l_125;
}
static uint16_t func_73(uint8_t p_74, int32_t p_75, uint32_t p_76, int16_t p_77, int32_t p_78)
{
    int32_t l_124 = 0;
    p_78 = (safe_div_func_uint8_t_u_u((((p_75 & (safe_unary_minus_func_uint16_t_u(0U))) <= (0 & g_105)) && (((0x57 < (p_78 ^ (safe_rshift_func_uint8_t_u_s((g_105 != ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((g_123 = (p_77 < (safe_lshift_func_int8_t_s_u((~(safe_add_func_uint8_t_u_u((g_122 <= 1U), g_105))), 4)))), 1)), 0x9B)) != 0xD067)), l_124)))) || p_76) != g_104)), 0xB8));
    return g_104;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_25;
    csmith_sink_ = g_32;
    csmith_sink_ = g_34;
    csmith_sink_ = g_104;
    csmith_sink_ = g_105;
    csmith_sink_ = g_122;
    csmith_sink_ = g_123;
    csmith_sink_ = g_155;
    csmith_sink_ = g_157;
    csmith_sink_ = g_158;
    csmith_sink_ = g_199;
    csmith_sink_ = g_265;
    csmith_sink_ = g_352;
    csmith_sink_ = g_353;
    csmith_sink_ = g_554;
    csmith_sink_ = g_574;
    csmith_sink_ = g_599;
    csmith_sink_ = g_611;
    csmith_sink_ = g_915;
    csmith_sink_ = g_987;
    csmith_sink_ = g_994;
    csmith_sink_ = g_1141;
    platform_main_end(0,0);
    return 0;
}
