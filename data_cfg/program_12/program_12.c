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
static int64_t g_28 = 0x77A1245C8100C430LL;
static const int32_t *g_48 = (void*)0;
static int32_t g_50 = 0L;
static int8_t g_52 = 1L;
static int32_t *g_60 = &g_50;
static int32_t **g_59 = &g_60;
static int32_t **g_65 = (void*)0;
static int32_t ***g_64 = &g_65;
static int32_t g_67 = (-1L);
static uint8_t g_87 = 255UL;
static int32_t ****g_93 = &g_64;
static int32_t *****g_92 = &g_93;
static int32_t g_95 = 0x39FA237FL;
static int32_t ***g_106 = &g_59;
static uint32_t g_115 = 0x9E3B93F1L;
static uint8_t g_119 = 251UL;
static int8_t g_120 = 0x95L;
static int64_t g_131 = 0L;
static uint64_t g_170 = 0x238E951F222DE5CCLL;
static int32_t g_204 = (-1L);
static int16_t g_205 = 5L;
static uint16_t g_246 = 0x3E92L;
static int16_t g_268 = 0xE8ABL;
static int16_t *g_267 = &g_268;
static uint16_t *g_293 = &g_246;
static uint16_t **g_292 = &g_293;
static int32_t g_298 = 0xFC378843L;
static int16_t g_300 = 1L;
static uint32_t g_327 = 0xF0311DD1L;
static uint32_t *g_345 = &g_327;
static uint32_t **g_344 = &g_345;
static uint8_t *g_449 = &g_119;
static uint8_t **g_448 = &g_449;
static uint32_t g_476 = 0UL;
static int8_t g_499 = 0L;
static uint16_t ***g_541 = (void*)0;
static uint16_t ****g_540 = &g_541;
static uint16_t *****g_539 = &g_540;
static uint64_t g_689 = 1UL;
static int16_t * const *g_711 = (void*)0;
static int16_t * const **g_710 = &g_711;
static int8_t *g_796 = &g_499;
static int8_t **g_795 = &g_796;
static const int32_t *g_805 = &g_50;
static int16_t *g_811 = &g_205;
static int64_t *g_830 = &g_28;
static int64_t **g_829 = &g_830;
static int64_t ***g_828 = &g_829;
static uint16_t g_884 = 0x9A7FL;
static uint16_t g_885 = 7UL;
static int64_t ****g_919 = (void*)0;
static int32_t func_1(void);
inline static int32_t func_2(int64_t p_3, int32_t p_4, const uint64_t p_5);
inline static const int8_t func_6(uint8_t p_7, uint8_t p_8, uint32_t p_9, uint8_t p_10);
inline static int16_t func_20(int64_t p_21, uint32_t p_22, int32_t p_23, const uint64_t p_24);
static uint32_t func_25(uint32_t p_26, uint8_t p_27);
inline static uint8_t func_29(const int64_t p_30, uint32_t p_31, int32_t p_32, int8_t p_33, int8_t p_34);
inline static int32_t * const func_36(uint16_t p_37, int32_t * const p_38, const int32_t * p_39, int32_t p_40, const int64_t p_41);
inline static int32_t * func_42(int8_t p_43, const int32_t * p_44, uint8_t p_45, uint8_t p_46);
static int32_t ** func_53(int32_t p_54);
inline static const int32_t * func_62(int32_t *** p_63);
static int32_t func_1(void)
{
    int8_t l_19 = 0xDAL;
    uint64_t l_367 = 18446744073709551615UL;
    int32_t *l_666 = &g_204;
    uint8_t l_680 = 0x03L;
    uint16_t l_780 = 1UL;
    uint64_t l_788 = 18446744073709551611UL;
    uint16_t l_801 = 65535UL;
    const uint8_t l_803 = 0xE1L;
    uint8_t **l_823 = &g_449;
    int32_t *l_834 = &g_50;
    int16_t l_900 = 0x991AL;
    const int32_t *l_955 = &g_204;
    int16_t l_972 = 0xE102L;
    uint8_t ***l_980 = &g_448;
    int8_t **l_995 = &g_796;
    uint32_t l_997 = 0x036CAF7CL;
    const int32_t l_998 = 0x543AB166L;
    (*l_666) = func_2((func_6((safe_div_func_int32_t_s_s((-4L), (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(0UL, (safe_sub_func_int16_t_s_s(l_19, func_20(l_19, func_25(g_28, func_29(g_28, (l_19 & 0xDD01L), (1L >= g_28), l_19, g_28)), l_19, l_19))))), l_367)))), g_115, g_204, g_204) | l_367), l_19, l_367);
    if ((safe_div_func_int32_t_s_s((255UL & (safe_sub_func_uint8_t_u_u((((*l_666) = 18446744073709551607UL) < (g_87 != (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(1UL, ((**g_448) != ((safe_div_func_uint32_t_u_u(((0xFAB284F1L < 0x2807B3F7L) <= 0x243D8EA6L), (+(-5L)))) == (*g_449))))) < 4294967295UL), l_680)), (*g_267))))), g_95))), (*g_345))))
    {
        (*l_666) = ((*g_293) > (*g_267));
    }
    else
    {
        uint8_t *l_694 = &g_87;
        uint32_t l_702 = 0x0047E0BEL;
        const int32_t *l_703 = (void*)0;
        uint32_t l_722 = 1UL;
        int64_t l_733 = 0xB2E0E07B141089C8LL;
        uint8_t l_734 = 0xA3L;
        int16_t l_814 = 0xC1FAL;
        int16_t **l_899 = &g_811;
        int16_t ***l_898 = &l_899;
        int16_t ****l_897 = &l_898;
        int64_t **l_931 = &g_830;
        uint16_t *****l_937 = &g_540;
        int32_t l_941 = (-10L);
        int32_t l_954 = (-10L);
        const int32_t **l_956 = (void*)0;
        const int32_t **l_957 = &g_48;
        const int32_t **l_958 = &g_805;
        int64_t l_977 = 0x751043381CA4A4E6LL;
        uint8_t ***l_981 = &g_448;
        uint32_t l_986 = 0xDCF4C54AL;
        int8_t **l_994 = &g_796;
        int8_t ***l_996 = &l_995;
        for (g_499 = 9; (g_499 < (-21)); g_499 = safe_sub_func_int8_t_s_s(g_499, 1))
        {
            uint64_t *l_691 = (void*)0;
            uint64_t **l_690 = &l_691;
            int32_t *l_698 = (void*)0;
            int16_t **l_708 = &g_267;
            int16_t ***l_707 = &l_708;
            int32_t l_713 = 0x6128A7D5L;
            uint32_t **l_779 = &g_345;
            uint8_t *l_781 = &g_87;
            uint32_t *l_802 = (void*)0;
            uint32_t l_833 = 1UL;
            int64_t ****l_918 = &g_828;
            int8_t l_932 = (-6L);
            int16_t l_938 = 0xA2E5L;
            for (g_300 = 14; (g_300 >= (-11)); g_300 = safe_sub_func_uint16_t_u_u(g_300, 5))
            {
                int16_t **l_693 = &g_267;
                int16_t ***l_692 = &l_693;
                uint8_t **l_695 = (void*)0;
                uint8_t *l_697 = &l_680;
                uint8_t **l_696 = &l_697;
                int32_t l_720 = 0xE5FE70CDL;
                int32_t l_755 = 4L;
                if ((((*g_345) = ((safe_rshift_func_uint16_t_u_s(65535UL, g_689)) ^ ((void*)0 != l_690))) == ((((g_205 = ((*g_267) = (((*l_692) = &g_267) != (void*)0))) && (((*g_448) = l_694) != ((*l_696) = l_694))) | ((*g_64) == (*g_106))) < (*l_666))))
                {
                    int32_t l_699 = 7L;
                    (**g_106) = l_698;
                    if (l_699)
                        continue;
                }
                else
                {
                    uint32_t l_704 = 0UL;
                    uint32_t *l_721 = &g_476;
                    int16_t **l_738 = (void*)0;
                    for (g_67 = 0; (g_67 >= 10); ++g_67)
                    {
                        int16_t ****l_709 = (void*)0;
                        int16_t * const ***l_712 = &g_710;
                        (*g_59) = l_698;
                        l_713 = (0x46L & 0x15L);
                    }
                    if ((0x65A14CF5EBA1C665LL ^ ((g_119 <= (safe_div_func_uint16_t_u_u(((g_52 != ((((l_704 | (0x83221377L >= (l_666 != l_698))) == (**g_448)) != ((((*l_721) = ((*g_345) = ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((0x3528L <= l_704), 6L)) | l_720), 7)) > 0x0BL))) ^ 1L) <= l_722)) ^ (*l_666))) | (*g_267)), (*g_293)))) > 0L)))
                    {
                        int8_t *l_735 = &g_120;
                        uint8_t l_736 = 248UL;
                        int32_t *l_737 = &g_50;
                        int32_t **l_739 = &l_698;
                        uint64_t *l_751 = &l_367;
                        uint64_t *l_752 = (void*)0;
                        uint64_t *l_753 = (void*)0;
                        uint64_t *l_754 = &g_689;
                        const uint8_t l_756 = 1UL;
                        int32_t **l_757 = (void*)0;
                        int8_t **l_758 = &l_735;
                        int8_t *l_760 = &g_52;
                        int8_t **l_759 = &l_760;
                        (*l_737) = ((safe_mod_func_int32_t_s_s(((((((*g_345) && 0xEDAFEBBAL) | ((*l_735) = (((0xE0FBF538B6D5382ALL == l_704) <= (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x9ACAL, 2)), ((*l_666) = ((((safe_lshift_func_int16_t_s_s(((*g_267) <= ((safe_mod_func_uint64_t_u_u(((*g_267) >= 1UL), (((*g_345) | 1UL) & l_733))) == g_95)), 2)) < l_734) <= g_246) && g_119))))) & 0L))) | 0xF2L) < 65535UL) ^ (*g_449)), 4294967288UL)) & l_736);
                        (*g_59) = func_36((((*l_690) == (void*)0) == (((*g_710) = (void*)0) != (l_738 = &g_267))), ((*l_739) = l_737), &l_713, ((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((((l_720 ^ (safe_mul_func_int8_t_s_s((~(safe_mod_func_uint64_t_u_u(((*l_754) = ((*l_751) = 0x7E7F7531E5470AFFLL)), (*l_666)))), l_755))) > l_704) <= l_713) <= l_713) > 0x9D8EL), (*l_666))), (*l_666))) || g_205), 1)) >= g_204), l_756);
                        (*g_60) = (((*l_758) = (void*)0) == ((*l_759) = l_694));
                    }
                    else
                    {
                        return g_499;
                    }
                    if (l_704)
                    {
                        (*g_59) = (**g_106);
                    }
                    else
                    {
                        int32_t l_761 = (-2L);
                        (**g_59) = (g_204 || (-1L));
                        if (l_761)
                            break;
                    }
                    if ((*l_666))
                    {
                        return l_704;
                    }
                    else
                    {
                        int16_t ****l_763 = &l_692;
                        int16_t *****l_762 = &l_763;
                        int32_t l_772 = 0xB588F8B9L;
                        (*l_666) = (*g_60);
                        (*l_762) = &l_692;
                        (*l_666) = ((18446744073709551614UL & ((g_52 = 0L) == (18446744073709551615UL != 0L))) != ((((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(l_772, 255UL)) & 0x5F0B7E14A8554CB2LL), (*g_449))), ((**g_59) = (((&g_449 == &g_449) > (**g_448)) && g_499)))) && 0x7F2B78BEL) | l_704) <= l_772));
                    }
                }
            }
            (*l_666) = ((((*g_267) = (*g_267)) && (safe_mul_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((g_300 >= ((void*)0 != l_779)), l_780)), (((*g_345) = (((void*)0 != l_781) >= ((g_246 && (safe_mul_func_int8_t_s_s(((((*g_448) == (*g_448)) || 0x75L) != 0L), g_67))) ^ g_204))) != 4294967290UL)))) || g_298);
        }
        (*l_958) = ((*l_957) = l_955);
        g_48 = (*l_957);
        (*l_834) = (safe_add_func_int32_t_s_s(((*l_666) = (&g_448 != (l_981 = l_980))), ((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_986, (safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int16_t_s(((*g_267) = ((((!(safe_div_func_int64_t_s_s((***g_828), (-7L)))) == (+(((l_994 != ((*l_996) = l_995)) == (**g_829)) != (*g_293)))) == (**g_829)) < l_997)))) || (**g_448)), l_998)))), 6)) & (-6L))));
    }
    return (*l_666);
}
inline static int32_t func_2(int64_t p_3, int32_t p_4, const uint64_t p_5)
{
    const int32_t *l_409 = &g_50;
    int16_t l_478 = 0L;
    int32_t l_493 = (-8L);
    int32_t ****l_496 = &g_106;
    uint32_t l_589 = 4294967295UL;
    int32_t l_617 = (-8L);
    uint32_t l_663 = 0xA5B93EE8L;
    const int32_t **l_664 = &g_48;
    int32_t l_665 = 0L;
    if (p_4)
    {
        int64_t l_429 = 7L;
        int32_t l_450 = 1L;
        uint16_t *****l_543 = &g_540;
        uint32_t *l_564 = &g_476;
        int32_t ***l_577 = &g_65;
        int16_t l_588 = 0xC410L;
        uint16_t *l_615 = &g_246;
        if (p_3)
        {
            int32_t * const l_408 = &g_204;
            uint64_t l_431 = 18446744073709551615UL;
            const uint32_t l_445 = 0UL;
            int32_t l_451 = 0xED5C099BL;
            for (g_327 = 15; (g_327 != 5); g_327 = safe_sub_func_uint64_t_u_u(g_327, 2))
            {
                int32_t *l_410 = (void*)0;
                int32_t *l_411 = &g_67;
                uint64_t *l_430 = &g_170;
                (**g_106) = func_36(p_4, l_408, l_409, ((*l_411) = ((*l_408) = p_5)), (0x815FL < ((safe_sub_func_uint32_t_u_u((((*l_430) = ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((*g_267) = (*l_409)), (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((((g_300 = (+(p_5 < (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_120 && (g_52 > g_246)), 8)), 0xE042L))))) || 0x1DA4L) & 1UL), 13)) < p_4) && 4L), p_4)), l_429)))), (*g_293))) > p_3)) && l_431), p_5)) | g_131)));
                (*l_411) = ((~(safe_div_func_uint16_t_u_u(l_429, ((*g_267) = (*l_411))))) & p_5);
                l_451 = (l_450 = ((*l_408) = ((safe_div_func_uint8_t_u_u(((void*)0 == &g_292), (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((*g_60) = (p_4 = (255UL & (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((g_87 = (*l_408)), ((!((((*g_267) >= l_445) > (safe_div_func_uint16_t_u_u((g_448 == &g_449), l_429))) ^ 0UL)) > 0x3C6ECB8E05617FD7LL))), g_95))))))), (*g_293))))) && l_429)));
                l_450 = p_4;
            }
            return p_3;
        }
        else
        {
            uint32_t *l_458 = &g_327;
            int32_t l_479 = 5L;
            int32_t ** const *l_498 = &g_59;
            int32_t ** const **l_497 = &l_498;
            uint16_t *l_502 = &g_246;
            uint16_t *****l_542 = &g_540;
            int8_t *l_551 = &g_120;
            uint32_t **l_562 = (void*)0;
            uint32_t **l_563 = &l_458;
            int8_t *l_565 = &g_52;
            int8_t *l_568 = &g_499;
            uint64_t *l_569 = (void*)0;
            uint64_t *l_570 = (void*)0;
            uint64_t *l_571 = &g_170;
            uint8_t *l_572 = &g_87;
            for (g_300 = 25; (g_300 != 7); --g_300)
            {
                int32_t l_477 = 0x4925829DL;
                uint8_t * const *l_544 = &g_449;
                if ((p_4 = (0UL || (safe_lshift_func_int16_t_s_s((*g_267), p_3)))))
                {
                    uint64_t l_475 = 18446744073709551610UL;
                    int32_t *l_491 = &l_450;
                    if ((safe_mod_func_int64_t_s_s(l_450, (p_3 | g_205))))
                    {
                        uint32_t *l_459 = &g_327;
                        int32_t l_468 = (-2L);
                        l_479 = ((l_458 == l_459) ^ ((safe_rshift_func_int16_t_s_u(p_3, 10)) | (safe_add_func_int8_t_s_s(p_3, (((safe_lshift_func_uint16_t_u_u(((**g_292) = (p_3 & l_450)), 4)) < ((safe_mod_func_uint32_t_u_u(l_468, ((*g_449) && (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(l_475, 3)) & 4UL), g_476)) > l_477), 5))))) || g_119)) > l_478)))));
                        return l_475;
                    }
                    else
                    {
                        uint64_t *l_486 = &l_475;
                        uint64_t *l_492 = (void*)0;
                        uint16_t **l_503 = (void*)0;
                        uint16_t **l_504 = &l_502;
                        p_4 = ((((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((*g_267), (safe_lshift_func_int8_t_s_s((((*l_486) = 0x35E0E7B4870F3924LL) ^ (l_493 = (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(65526UL, p_5)) >= ((*l_458) = ((void*)0 == l_491))) > (l_450 = 7UL)), (**g_292))))), 1)))), (g_499 = (safe_mul_func_int16_t_s_s(((l_496 != l_497) && p_5), p_5))))) && l_429) < g_119) & (*g_449));
                        l_477 = (safe_sub_func_int32_t_s_s((((*g_292) == ((*l_504) = l_502)) < ((*l_458) = 0x10025E17L)), (((((((**g_292) = (*g_293)) == (safe_rshift_func_int16_t_s_u((0x668688869D018CBELL >= g_205), 10))) || 0xEE69L) != (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((*g_267) = 1L), 11)), (((g_205 || p_3) != 1L) ^ g_120))) <= (*l_491)), p_5)) != g_87), p_3)), p_3)) | l_429), 5))) <= (*l_491)) | l_450)));
                    }
                }
                else
                {
                    int32_t *l_519 = &l_493;
                    uint32_t l_546 = 4294967287UL;
                    (*l_519) = p_4;
                    for (l_479 = 3; (l_479 < (-6)); l_479 = safe_sub_func_uint32_t_u_u(l_479, 7))
                    {
                        int16_t *l_536 = &g_300;
                        int32_t l_545 = 0x4C7291DFL;
                        (*l_519) = (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((&g_449 == (void*)0) >= p_4), ((!((((safe_lshift_func_uint8_t_u_s((((*l_458) = (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((void*)0 != l_536))), ((**g_448) = (p_4 && (((safe_mod_func_int16_t_s_s(((g_539 != (l_543 = l_542)) <= (((*g_267) = (l_544 == &g_449)) > l_545)), 0x01FBL)) && (*g_449)) == 3UL)))))) > l_477), l_546)) >= g_170) | p_4) == 0xF27323745E64348BLL)) < p_5))), p_5)), 3)), l_477));
                    }
                    if (l_477)
                        continue;
                    for (l_429 = 0; (l_429 < (-20)); l_429 = safe_sub_func_uint8_t_u_u(l_429, 7))
                    {
                        return p_4;
                    }
                }
            }
            if ((safe_lshift_func_int8_t_s_u(((*l_551) = p_4), (safe_lshift_func_uint8_t_u_s(((*l_572) = ((*g_449) = ((+((*l_571) = (((*l_568) = (((!((safe_mul_func_uint16_t_u_u(65528UL, (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((*l_565) = (((*l_563) = l_458) == l_564)), ((safe_sub_func_int32_t_s_s(l_429, (((*l_409) || ((((p_4 >= ((&g_205 == &g_300) > p_5)) | p_3) != p_4) == 7UL)) || l_429))) > p_4))) ^ l_429) & p_3), (*l_409))))) > l_429)) != g_246) & p_4)) | g_131))) & (**g_448)))), g_327)))))
            {
                int32_t l_576 = 0x20292092L;
                uint16_t *l_582 = &g_246;
                const int32_t **l_606 = &l_409;
                if (((g_119 == (safe_unary_minus_func_uint8_t_u(((*l_572) = 249UL)))) & (safe_add_func_int32_t_s_s(0L, l_576))))
                {
                    const int32_t **l_578 = &g_48;
                    uint16_t **l_595 = &g_293;
                    (*g_92) = (*g_92);
                    (*l_578) = func_62(l_577);
                    if (l_576)
                    {
                        int32_t *l_594 = &l_493;
                        uint16_t ***l_596 = &g_292;
                        p_4 = 0x74E0BBF6L;
                        (*l_594) = (p_4 = ((safe_lshift_func_uint16_t_u_s((!(((*g_292) != (l_582 = (void*)0)) || (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((~(((p_5 && l_588) != (l_589 || (safe_add_func_int16_t_s_s((-2L), (safe_lshift_func_int8_t_s_s(0xF4L, 7)))))) < l_576)), 254UL)), (**g_448))))), p_3)) | g_95));
                        (*g_59) = &l_576;
                        (*l_596) = (l_595 = (void*)0);
                    }
                    else
                    {
                        (***l_497) = (void*)0;
                        (**g_106) = (**g_106);
                    }
                    p_4 = (((**l_563) = (l_595 == (void*)0)) >= 0x87E8C344L);
                }
                else
                {
                    int8_t l_599 = (-7L);
                    p_4 = (((((0x13L < ((safe_rshift_func_uint8_t_u_u((*g_449), 6)) < 0x53CBL)) < (l_599 == (g_205 != (((*l_458) = ((-3L) == (safe_mod_func_uint64_t_u_u(p_4, (safe_sub_func_int32_t_s_s(p_3, (safe_lshift_func_int8_t_s_s((*l_409), 7)))))))) ^ (*l_409))))) >= g_119) > g_476) > (*g_267));
                }
                (*l_606) = func_62(l_577);
                (*g_59) = &p_4;
            }
            else
            {
                const int32_t **l_607 = (void*)0;
                const int32_t **l_608 = &g_48;
                (*l_608) = func_62((*l_496));
                (*g_59) = &p_4;
                for (g_120 = 0; (g_120 >= (-5)); g_120 = safe_sub_func_int16_t_s_s(g_120, 4))
                {
                    int32_t l_614 = 1L;
                    for (g_170 = 0; (g_170 != 49); g_170++)
                    {
                        int64_t l_613 = 0L;
                        return l_613;
                    }
                    return l_614;
                }
            }
            p_4 = ((((*l_551) = p_5) <= (*g_449)) == ((void*)0 != l_615));
            (***l_496) = &p_4;
        }
    }
    else
    {
        int32_t *l_616 = &g_95;
        int32_t l_624 = (-5L);
        int32_t **l_625 = &g_60;
        int16_t ** const l_649 = &g_267;
        (**g_106) = l_616;
        (*l_625) = func_42((*l_409), func_62((*l_496)), (**g_448), (((((l_617 < ((safe_lshift_func_uint8_t_u_s((((&g_345 == &g_345) > 0UL) ^ ((((g_87 = ((((safe_mul_func_uint8_t_u_u(l_624, 1L)) == 0x59DA75A7L) >= (****l_496)) >= p_3)) >= g_67) | p_3) == 0x0A01B54EL)), 1)) | (*g_267))) | (*l_409)) > g_268) || (*l_616)) < (****l_496)));
        (***l_496) = (*l_625);
        for (g_120 = 0; (g_120 < 18); g_120++)
        {
            uint32_t l_639 = 0x5A17DCD4L;
            for (g_246 = 0; (g_246 <= 4); ++g_246)
            {
                int32_t *** const * const l_640 = &g_64;
                int16_t **l_648 = &g_267;
                int16_t ***l_647 = &l_648;
                for (g_119 = (-14); (g_119 != 21); g_119++)
                {
                    int16_t **l_633 = &g_267;
                    int16_t ***l_632 = &l_633;
                    int32_t ***l_634 = &g_65;
                    const int32_t *l_635 = &g_95;
                    (*l_632) = &g_267;
                    l_635 = func_62(l_634);
                }
            }
        }
    }
    (****l_496) = l_663;
    (*g_59) = (void*)0;
    (*l_664) = func_62((*l_496));
    return l_665;
}
inline static const int8_t func_6(uint8_t p_7, uint8_t p_8, uint32_t p_9, uint8_t p_10)
{
    int32_t l_370 = 1L;
    int32_t l_371 = 0x71298951L;
    int64_t *l_397 = &g_28;
    int64_t **l_396 = &l_397;
    uint32_t *l_400 = &g_327;
    uint16_t ***l_401 = &g_292;
    uint8_t *l_402 = (void*)0;
    uint8_t *l_403 = (void*)0;
    uint8_t *l_404 = (void*)0;
    uint8_t *l_405 = &g_119;
    for (g_67 = (-1); (g_67 > (-24)); g_67 = safe_sub_func_int64_t_s_s(g_67, 3))
    {
        uint16_t ***l_373 = &g_292;
        uint16_t ****l_372 = &l_373;
        uint16_t *****l_374 = &l_372;
        const int32_t l_381 = (-5L);
        int32_t l_386 = (-1L);
        l_371 = l_370;
        (*l_374) = l_372;
        l_386 = ((safe_add_func_int64_t_s_s(g_115, (g_170 = (((~(+((p_8 = ((g_327 || l_371) > (safe_add_func_int32_t_s_s(l_371, ((((*g_267) = (l_381 & (((p_8 | (&g_205 == &g_205)) & (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((&l_381 == &l_381), 9L)), l_381))) <= p_10))) | p_7) || 4294967295UL))))) > 0xA9L))) > 0L) >= 1UL)))) ^ g_119);
    }
    l_371 = (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((~(safe_lshift_func_uint16_t_u_u(((***l_401) = (l_370 < ((safe_mul_func_uint16_t_u_u((((*l_396) = &g_131) == (void*)0), (((*l_405) = (safe_lshift_func_int16_t_s_u((l_371 < ((l_400 == (void*)0) != ((void*)0 == (*g_92)))), ((void*)0 != l_401)))) ^ l_370))) | p_8))), 7))), p_9)), g_28));
    return g_95;
}
inline static int16_t func_20(int64_t p_21, uint32_t p_22, int32_t p_23, const uint64_t p_24)
{
    uint64_t l_47 = 0x91EE4CFF15CC7C44LL;
    int32_t *l_134 = &g_50;
    int32_t l_139 = 1L;
    uint8_t l_141 = 0xC4L;
    uint32_t l_160 = 1UL;
    int32_t ***l_171 = &g_65;
    int32_t *l_210 = &g_95;
    uint64_t *l_223 = &g_170;
    uint16_t *l_274 = &g_246;
    uint16_t **l_273 = &l_274;
    uint64_t l_356 = 0x1DFB01F2DFD3FBD4LL;
    l_134 = func_36(g_28, func_42(l_47, g_48, p_24, l_47), func_62(g_64), (((!(!(((+(safe_mul_func_int16_t_s_s((!(0xF520A048C84060A3LL | l_47)), l_47))) & g_28) <= 0x9F88DD0BL))) != 0x65D6L) ^ g_67), g_67);
    for (g_87 = 0; (g_87 < 27); g_87++)
    {
        int32_t l_140 = 0L;
        l_140 = (safe_mul_func_int16_t_s_s(0L, l_139));
        l_141 = (*l_134);
        if (l_140)
            break;
    }
lbl_276:
    for (l_47 = 23; (l_47 >= 54); l_47++)
    {
        uint16_t l_155 = 0x0555L;
        int32_t ***l_168 = &g_59;
        uint64_t *l_169 = &g_170;
        if (p_22)
            break;
        (*l_134) = (safe_mul_func_int16_t_s_s((g_67 && (~((safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((((*l_169) = ((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((l_155 = (*l_134)), (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(l_160, g_119)), (safe_lshift_func_int8_t_s_s((~1UL), 2)))))) != (*l_134)), (safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(p_22, (((void*)0 == l_168) || p_21))) || 8UL), 0xA75F9311F6BCDC6FLL)))) != p_24)) ^ p_21) >= p_24), (*l_134))), 0x467EL)) < p_24))), 65528UL));
        (*l_134) = (0x2FC4CEA7L >= p_23);
    }
    if ((((**g_92) = l_171) == (void*)0))
    {
        int64_t l_196 = 8L;
        const int32_t *l_206 = &l_139;
        uint8_t *l_208 = &g_87;
        for (g_120 = 0; (g_120 > (-17)); g_120 = safe_sub_func_uint16_t_u_u(g_120, 8))
        {
            int64_t *l_187 = &g_131;
            int64_t *l_202 = &g_28;
            int32_t l_203 = 2L;
            p_23 = ((*l_134) = ((safe_lshift_func_int16_t_s_u(1L, 5)) || (safe_mod_func_uint32_t_u_u(((((!(safe_sub_func_uint16_t_u_u(0xDDF9L, (safe_mod_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(((*l_187) = (safe_add_func_uint64_t_u_u(1UL, (-8L)))), (safe_mul_func_uint8_t_u_u((((!(safe_mul_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(p_23, 1L)) < (~l_196)) > (((*l_202) = (0xFBA64A4A936FBAC3LL >= (safe_mod_func_uint8_t_u_u((((((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(g_52)), g_87)) && g_115) > 0UL) || g_52) >= (-1L)), 0xB9L)))) ^ 0UL)), l_203))) <= g_204) && g_205), 0UL)))) && l_196), 4294967291UL))))) ^ p_22) & g_67) != l_203), 0x2CE8EB29L))));
        }
        l_134 = &p_23;
        (**g_106) = l_210;
    }
    else
    {
        int32_t *****l_213 = &g_93;
        uint8_t *l_228 = &l_141;
        uint16_t **l_290 = &l_274;
        int32_t l_328 = 9L;
        uint32_t **l_343 = (void*)0;
        const int32_t **l_347 = &g_48;
        uint64_t l_366 = 0x9686125EB5E7ADD0LL;
        for (g_52 = 0; (g_52 >= 10); g_52 = safe_add_func_uint8_t_u_u(g_52, 6))
        {
            l_213 = &g_93;
        }
        for (g_50 = (-6); (g_50 > (-16)); g_50 = safe_sub_func_int8_t_s_s(g_50, 3))
        {
            uint64_t l_216 = 0x8AA24F531248EFB7LL;
            uint32_t l_247 = 1UL;
            int32_t *l_248 = &g_50;
            uint16_t * const *l_310 = &l_274;
            uint16_t l_336 = 0UL;
            p_23 = (l_216 && (safe_sub_func_int32_t_s_s(p_22, 0x7A964C9DL)));
            if (p_24)
            {
                uint64_t *l_222 = &l_47;
                uint64_t **l_221 = &l_222;
                uint8_t *l_229 = &g_87;
                uint8_t **l_230 = &l_229;
                uint16_t *l_245 = &g_246;
                int32_t *l_249 = &g_67;
                (*l_210) = (p_23 = ((((safe_lshift_func_uint8_t_u_s((((l_223 = ((*l_221) = &l_47)) != &l_216) & ((*l_245) = (0xFDL < ((safe_sub_func_int64_t_s_s(0L, (l_228 != ((*l_230) = l_229)))) < ((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_24, (safe_sub_func_uint8_t_u_u((((void*)0 != (**l_213)) == 65535UL), p_24)))), 15)), 246UL)), l_216)), p_21)) <= g_67) & 0x6B4AL), g_28)) != (*l_134)))))), 0)) >= p_22) & l_247) == p_22));
                l_248 = l_248;
                (**g_106) = l_249;
            }
            else
            {
                int16_t *l_258 = &g_205;
                int64_t *l_272 = &g_28;
                int32_t l_277 = 4L;
                if (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_258) = (p_23 || (*l_210))), p_23)), p_23)) | (safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((((safe_sub_func_int32_t_s_s(((void*)0 == g_267), (((!(p_24 && (safe_add_func_uint64_t_u_u(((*l_223) = 18446744073709551615UL), ((*l_272) = p_23))))) != 0x32L) > g_120))) <= (*l_134)) < p_22), p_23)) > 0x0279D622L), 4294967290UL)) == (*g_267)), 0x0EL))), 3)), 1)) > p_23))
                {
                    uint16_t ***l_275 = &l_273;
                    if (p_21)
                        break;
                    (*l_275) = l_273;
                }
                else
                {
                    int32_t l_301 = 0x11E18098L;
                    const uint16_t *l_313 = &g_246;
                    const uint16_t **l_312 = &l_313;
                    uint8_t **l_322 = &l_228;
                    if (p_24)
                        break;
                    if (p_23)
                        goto lbl_276;
                    if (p_22)
                    {
                        (*g_59) = &p_23;
                        return l_277;
                    }
                    else
                    {
                        uint16_t ***l_291 = &l_290;
                        uint16_t ***l_294 = (void*)0;
                        uint16_t ***l_295 = &g_292;
                        int16_t *l_299 = &g_300;
                        int32_t l_307 = 0x57EFDBF3L;
                        uint16_t * const **l_311 = &l_310;
                        uint64_t *l_323 = &l_216;
                        uint32_t *l_324 = (void*)0;
                        uint32_t *l_325 = (void*)0;
                        uint32_t *l_326 = &g_327;
                        const int32_t **l_329 = (void*)0;
                        p_23 = (((*g_293) = ((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_277, (safe_rshift_func_int16_t_s_s(((((*l_291) = l_290) == ((*l_295) = g_292)) >= (p_22 && 0UL)), 9)))), (g_298 = ((*l_258) = ((*g_267) = (safe_add_func_uint64_t_u_u(g_204, 0x2A7C57E4F7073549LL))))))), ((*l_299) = (p_21 | 0xA0L)))), l_301)), 0x09L)) >= (-1L))) >= p_21);
                        l_328 = (((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((+(l_307 < (((*l_210) = ((*l_326) = (((*l_323) = ((*l_223) = ((*g_267) == (safe_mod_func_int32_t_s_s((((*l_311) = l_310) != l_312), ((safe_rshift_func_int16_t_s_s((0L == 0UL), 2)) && (safe_mod_func_uint64_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((l_322 == &l_228) | (0x799D2B88D7C33F76LL && p_22)), 0x038AAF2569BDC768LL)), 1L)) != p_22) && 0x814D170816E1F836LL) == l_301), 0xB29F1C35A1D51EC3LL)))))))) > l_277))) > l_307))), g_246)), 0xB652CE760C5D1EC6LL)) != g_298) > p_23);
                        g_48 = func_62(((**l_213) = (**g_92)));
                    }
                    (*l_210) = (g_95 ^ ((((safe_rshift_func_int16_t_s_s(0x5F70L, ((l_301 != (-1L)) ^ ((*g_267) = (safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s((-1L), l_336)) > (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((*g_293), p_23)) ^ (*l_248)), 0L))), 0x1B47L)))))) || g_50) >= l_301) <= l_277));
                }
            }
            for (l_247 = 0; (l_247 >= 31); l_247 = safe_add_func_uint16_t_u_u(l_247, 6))
            {
                int32_t *l_346 = &g_95;
                g_344 = l_343;
                l_346 = (l_248 = l_346);
                if ((*l_134))
                    continue;
            }
        }
        (*l_347) = func_62((*g_93));
        (*l_134) = ((((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((&g_292 != (void*)0), (safe_lshift_func_uint16_t_u_s((0x49L ^ (l_356 > ((safe_sub_func_int8_t_s_s(g_28, ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_mod_func_int32_t_s_s(7L, (((void*)0 == l_213) | (~((p_21 >= g_50) < 248UL))))) <= p_24) & p_23) < p_24), p_22)), 3)) > (*l_210)))) & g_131))), 1)))), l_366)) || g_298) >= 0xC741L) < 4294967295UL);
    }
    return p_23;
}
static uint32_t func_25(uint32_t p_26, uint8_t p_27)
{
    uint32_t l_35 = 18446744073709551607UL;
    return l_35;
}
inline static uint8_t func_29(const int64_t p_30, uint32_t p_31, int32_t p_32, int8_t p_33, int8_t p_34)
{
    return g_28;
}
inline static int32_t * const func_36(uint16_t p_37, int32_t * const p_38, const int32_t * p_39, int32_t p_40, const int64_t p_41)
{
    const int32_t *l_78 = &g_67;
    const int32_t **l_79 = &g_48;
    int32_t ****l_88 = &g_64;
    int32_t l_121 = 0xBDB030F3L;
    int32_t * const l_132 = &g_50;
    int32_t * const l_133 = &g_67;
    (*l_79) = l_78;
    for (g_50 = (-5); (g_50 == (-14)); g_50 = safe_sub_func_int8_t_s_s(g_50, 1))
    {
        int32_t ***l_84 = &g_59;
        int32_t *l_85 = &g_67;
        uint8_t *l_86 = &g_87;
        int32_t *****l_89 = &l_88;
        (*l_85) = ((-3L) != ((void*)0 != l_84));
        (*l_85) = (((*l_86) = g_52) & g_28);
        (*l_89) = l_88;
        for (g_67 = 8; (g_67 == (-9)); g_67 = safe_sub_func_uint16_t_u_u(g_67, 4))
        {
            int32_t *l_94 = &g_95;
            const int32_t **l_107 = &l_78;
            const uint64_t l_110 = 1UL;
            int32_t *****l_111 = &l_88;
            int32_t *****l_112 = &l_88;
            uint8_t *l_116 = (void*)0;
            uint8_t *l_117 = (void*)0;
            uint8_t *l_118 = &g_119;
            l_89 = g_92;
            l_94 = ((**l_84) = &p_40);
            if ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(p_41, (safe_add_func_int16_t_s_s((g_120 = ((safe_lshift_func_uint16_t_u_u(((((*l_107) = (g_48 = func_62(g_106))) != (void*)0) == ((*l_118) = ((*l_86) = ((safe_sub_func_int32_t_s_s(l_110, ((((l_112 = (l_111 = l_89)) != (g_92 = &g_93)) & ((safe_div_func_int8_t_s_s((g_115 >= p_37), (-1L))) >= 1L)) < 246UL))) && g_67)))), g_52)) && g_50)), 0x542DL)))) & l_121) >= g_50), 0)), 7)))
            {
                const int32_t *l_128 = &g_67;
                (**g_59) = (g_87 != ((p_37 <= (g_131 = ((safe_rshift_func_uint8_t_u_s((0x5765L ^ (safe_mul_func_int16_t_s_s(0L, (safe_mod_func_int16_t_s_s(1L, p_40))))), (((*g_59) != l_128) != (safe_add_func_uint64_t_u_u(18446744073709551615UL, g_115))))) ^ 0xA1293870L))) >= 255UL));
            }
            else
            {
                return l_132;
            }
            (**g_59) = ((-1L) && p_41);
        }
    }
    return l_133;
}
inline static int32_t * func_42(int8_t p_43, const int32_t * p_44, uint8_t p_45, uint8_t p_46)
{
    int32_t *l_49 = &g_50;
    int32_t *l_51 = (void*)0;
    int32_t ***l_61 = &g_59;
    (*l_49) = 0xABEBF3B8L;
    g_52 = ((*l_49) = (*l_49));
    (*l_61) = func_53((safe_mod_func_uint16_t_u_u(g_52, p_46)));
    return (**l_61);
}
static int32_t ** func_53(int32_t p_54)
{
    int32_t *l_57 = (void*)0;
    int32_t l_58 = 1L;
    l_58 = 0L;
    return g_59;
}
inline static const int32_t * func_62(int32_t *** p_63)
{
    int32_t * const l_66 = &g_67;
    int32_t **l_68 = (void*)0;
    int32_t *l_70 = &g_67;
    int32_t **l_69 = &l_70;
    const int32_t *l_71 = (void*)0;
    (*l_69) = l_66;
    return l_71;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_60 = 0;
    csmith_sink_ = g_28;
    csmith_sink_ = g_50;
    csmith_sink_ = g_52;
    csmith_sink_ = g_67;
    csmith_sink_ = g_87;
    csmith_sink_ = g_95;
    csmith_sink_ = g_115;
    csmith_sink_ = g_119;
    csmith_sink_ = g_120;
    csmith_sink_ = g_131;
    csmith_sink_ = g_170;
    csmith_sink_ = g_204;
    csmith_sink_ = g_205;
    csmith_sink_ = g_246;
    csmith_sink_ = g_268;
    csmith_sink_ = g_298;
    csmith_sink_ = g_300;
    csmith_sink_ = g_327;
    csmith_sink_ = g_476;
    csmith_sink_ = g_499;
    csmith_sink_ = g_689;
    csmith_sink_ = g_884;
    csmith_sink_ = g_885;
    platform_main_end(0,0);
    return 0;
}
