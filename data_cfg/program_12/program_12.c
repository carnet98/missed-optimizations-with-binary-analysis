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
static int16_t g_12 = 0x5165;
static uint32_t g_14 = 0x06C902DA;
static int8_t g_27 = 1;
static uint16_t g_28 = 65533U;
static int8_t g_49 = 0xD7;
static uint32_t g_56 = 4294967295U;
static int8_t g_69 = (-1);
static uint16_t g_70 = 0xF399;
static int32_t g_71 = 0x22527051;
static int32_t g_72 = 6;
static uint16_t g_75 = 0xE5AB;
static int16_t g_87 = 0xA6B3;
static uint32_t g_123 = 0x85E685AC;
static uint32_t g_124 = 0x14255FA7;
static uint16_t g_184 = 65535U;
static int8_t g_185 = 1;
static int32_t g_186 = 0x356B4AE7;
static int32_t g_220 = 9;
static uint32_t g_246 = 4294967295U;
static int8_t g_249 = (-1);
static int8_t g_252 = 0x80;
static uint8_t g_265 = 0x01;
static uint8_t g_296 = 0x9F;
static int16_t g_343 = 0;
static uint32_t g_400 = 0U;
static uint8_t g_463 = 0x9D;
static int8_t g_635 = 0xEE;
static uint8_t g_636 = 6U;
static uint16_t g_662 = 0x07FA;
static int32_t g_680 = 1;
static int8_t g_724 = 0xCF;
static uint8_t g_777 = 0x45;
static int32_t g_794 = 0x77B36FF8;
static int32_t func_1(void);
static uint32_t func_5(uint32_t p_6, int32_t p_7, uint32_t p_8, uint32_t p_9);
static uint32_t func_10(int8_t p_11);
static uint8_t func_19(int16_t p_20);
static int32_t func_22(int16_t p_23, int8_t p_24, uint8_t p_25, uint16_t p_26);
static uint8_t func_31(int32_t p_32);
static int16_t func_33(int8_t p_34, uint8_t p_35, uint8_t p_36);
static uint8_t func_78(uint32_t p_79, uint16_t p_80, uint32_t p_81);
static uint32_t func_82(uint32_t p_83, uint8_t p_84, uint32_t p_85);
static int32_t func_88(uint8_t p_89, uint32_t p_90);
static int32_t func_1(void)
{
    int8_t l_2 = 7;
    uint32_t l_960 = 0x0C854284;
    int32_t l_961 = 0x5F495A6A;
    l_2 = (-10);
    for (l_2 = 19; (l_2 > (-12)); l_2 = safe_sub_func_uint16_t_u_u(l_2, 3))
    {
        uint8_t l_792 = 0x09;
        int32_t l_793 = 7;
        l_960 = (l_2 < func_5(func_10((g_12 , (~(g_14 &= l_2)))), (g_794 |= (g_635 && (l_793 = (~(safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_400 , (g_777 |= 0U)) >= (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0x05, ((safe_mod_func_int8_t_s_s((((((g_680 ^ g_635) ^ 255U) == g_400) && 0) >= g_400), (-7))) | l_792))), 7)), l_792)) < l_792), g_635)), 2)) | g_680), g_635))), l_2)), 5)))))), g_680, g_724));
    }
    l_961 |= (g_794 = g_463);
    return g_777;
}
static uint32_t func_5(uint32_t p_6, int32_t p_7, uint32_t p_8, uint32_t p_9)
{
    int8_t l_797 = 1;
    int32_t l_813 = (-10);
    int32_t l_815 = 1;
    int32_t l_841 = 0xB38105CB;
    int32_t l_842 = 0xCC54CA38;
    uint8_t l_959 = 0x37;
    l_797 &= (safe_lshift_func_int8_t_s_u((-1), p_9));
    for (p_9 = 14; (p_9 >= 54); p_9++)
    {
        uint8_t l_804 = 0x99;
        int32_t l_814 = 0x42DD82E4;
        int32_t l_816 = 3;
        if ((0xE5A549A1 >= ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_797 && 0), 7)), (((((l_804 , (l_815 = (g_14 = (safe_lshift_func_int16_t_s_u(p_7, (g_184 = ((l_814 = ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(2, p_7)) && p_7) <= ((l_813 = (p_6 , g_246)) , p_7)), 4)) <= 0x0143), 5)) >= 9U)) ^ p_8))))))) ^ 0x82046172) , g_343) , l_804) != g_246))) , l_813)))
        {
            if (l_797)
                break;
        }
        else
        {
            l_816 ^= (p_8 <= l_814);
        }
    }
    for (g_56 = (-9); (g_56 < 17); g_56 = safe_add_func_uint32_t_u_u(g_56, 1))
    {
        int32_t l_826 = 2;
        uint32_t l_831 = 4294967287U;
        int32_t l_834 = 6;
        int32_t l_840 = 0x42BADE8B;
        int8_t l_847 = 0x76;
        uint32_t l_930 = 4294967294U;
        l_842 ^= ((~(g_246 >= (g_246 && ((((((safe_lshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_826, ((((((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(l_831, ((l_813 = l_797) <= (safe_sub_func_int32_t_s_s((l_834 ^= 0x26840EE6), ((l_841 &= (l_840 |= ((-4) > ((safe_rshift_func_int16_t_s_u((+l_815), (safe_sub_func_uint32_t_u_u(0xC4610211, 0xCEA7A1CA)))) && p_9)))) <= 0x10C9B0A1)))))), g_124)) , l_813) ^ g_400) , p_6) & p_7) && 1U) || g_343) <= p_7))), g_49)) , 65531U), p_7)) != p_6) & 0xC4) | 0xFC) <= 0x08858FF4) <= l_815)))) == l_826);
        for (g_186 = 24; (g_186 != (-3)); g_186--)
        {
            uint16_t l_848 = 65531U;
            int32_t l_855 = 0x685CF83B;
            l_815 = (safe_mod_func_int32_t_s_s(0xC9A086A6, 0x8E15FFD9));
            if (l_847)
            {
                return p_7;
            }
            else
            {
                int32_t l_862 = 0;
                int32_t l_863 = 0xA118F45B;
                int32_t l_864 = 0x5477E608;
                int32_t l_890 = (-1);
                uint8_t l_958 = 0xD0;
                if (l_848)
                {
                    uint8_t l_854 = 1U;
                    int32_t l_889 = 0x1B2CE891;
                    l_864 &= (((safe_add_func_uint8_t_u_u(((+5U) >= (((g_72 = ((9 > l_854) & (6U == (l_855 = g_252)))) && ((l_863 = ((safe_add_func_uint16_t_u_u(((g_14 &= g_70) >= (safe_add_func_int16_t_s_s((-2), g_794))), l_862)) ^ 4294967292U)) ^ 0U)) || 1)), l_847)) | 0U) != 0x16BC7677);
                    l_855 = (((((((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((-7), p_6)) == (((p_9 , (p_9 ^ (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((g_14 | ((((-4) != (0x07 || (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_87, (l_889 = p_8))), 2)) >= 0xBF2F) || 0xF9), 0x52)), 0x3D56AE98)), 0)), l_797)), 65535U)))) < 0) >= p_8)) >= p_6), g_72)), g_12)))) , g_680) && p_6)), 5)) == l_890) ^ 0x4FE6) < p_9) ^ 0x28) || p_6) == 0x8CB4);
                }
                else
                {
                    int32_t l_903 = 0;
                    int32_t l_904 = 0;
                    int32_t l_905 = 0xA8A8EB0B;
                    l_815 = l_848;
                    l_905 ^= (safe_lshift_func_uint8_t_u_u((0xA870 == (safe_add_func_uint32_t_u_u(4294967295U, (safe_lshift_func_uint16_t_u_u((((g_249 = p_6) < (g_400 <= ((safe_div_func_uint32_t_u_u(g_724, (((((p_9 & ((safe_mod_func_uint8_t_u_u(((g_680 = g_246) , 0xC0), (((safe_add_func_int32_t_s_s((g_794 = (l_904 = l_903)), 0x9D75CD16)) < l_903) ^ l_841))) , 1U)) & p_9) , 65535U) | l_863) , l_797))) , 0x7C79))) | 0x914F3DB6), 10))))), 0));
                }
                for (g_680 = 26; (g_680 > 24); --g_680)
                {
                    uint16_t l_918 = 0xCB23;
                    g_72 = ((l_815 = ((0 && p_8) , ((((safe_lshift_func_uint16_t_u_u((+l_842), (g_662 = (l_841 &= 0x4301)))) >= (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s((l_855 |= 0xD0FB), 10)) , ((!g_72) != ((g_12 != (safe_rshift_func_uint8_t_u_s(p_6, 4))) | (((((p_7 , 0x83) || 1) < p_6) , (-1)) & p_6)))), 9))) | p_8) , l_918))) ^ 6);
                }
                g_794 = ((safe_div_func_uint32_t_u_u(((~(g_252 , (g_252 ^= (safe_mul_func_uint16_t_u_u((((p_8 , (p_8 , (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_890, (safe_add_func_int32_t_s_s(0, ((0xD2B6 < ((l_930 , (((safe_mod_func_int16_t_s_s(((l_855 |= (~(safe_lshift_func_int8_t_s_s((l_813 < g_186), g_71)))) & 0xE2EB), l_890)) > l_813) | p_8)) , l_842)) != g_14))))), p_8)))) & p_8) < g_246), 0x0238))))) || l_862), p_9)) | 0x3F);
                g_794 &= (safe_lshift_func_int8_t_s_s((l_855 = ((safe_mul_func_int8_t_s_s(0xBE, (safe_lshift_func_int8_t_s_s(p_6, ((l_815 |= (safe_mod_func_int32_t_s_s((((-7) || ((g_662 = ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_635, 0x72)), 0x33)) & 0x09)) , g_463)) >= ((((safe_add_func_int32_t_s_s(((--g_14) <= (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_826 < 0x703AD896), 2)), g_49)) <= 65535U), l_958))), g_69)) , g_463) || 6) == p_7)), l_813))) < l_848))))) , (-1))), 3));
            }
        }
        l_813 = g_28;
    }
    return l_959;
}
static uint32_t func_10(int8_t p_11)
{
    uint32_t l_426 = 4294967294U;
    uint8_t l_428 = 246U;
    int32_t l_429 = 0x6E181E8E;
    int32_t l_430 = 0x1AD04E01;
    uint8_t l_433 = 1U;
    int16_t l_448 = (-2);
    uint8_t l_531 = 251U;
    int32_t l_634 = 0x5CE519DE;
    uint16_t l_683 = 1U;
    int32_t l_713 = (-6);
    int32_t l_732 = 1;
    if (p_11)
    {
        uint8_t l_21 = 0x9B;
        int32_t l_427 = 3;
        l_430 = ((safe_sub_func_int32_t_s_s(((-1) < ((l_429 &= (safe_mul_func_int16_t_s_s((((p_11 & func_19(l_21)) <= g_246) , (~((safe_sub_func_uint16_t_u_u(0x5313, ((safe_div_func_int32_t_s_s(((safe_div_func_int8_t_s_s(0x59, (g_265 = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((l_427 |= (((g_87 == (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((0x061BE2EF == (-1)), l_21)) || l_426), p_11)), g_87))) != 0U) | p_11)) != p_11) && 0x0179BD66) < (-2)), p_11)), l_426)), l_21))))) & p_11), l_428)) || p_11))) || g_186))), p_11))) || 4U)), l_21)) & g_343);
    }
    else
    {
        int32_t l_431 = 0x6087561C;
        int32_t l_432 = 0x3C5C33FC;
        int16_t l_476 = 0;
        int32_t l_513 = 0xE638051B;
        int32_t l_575 = 1;
        uint32_t l_597 = 5U;
        uint32_t l_607 = 0x85C06E6E;
        l_433++;
        if ((0x48 <= (((g_14 = (g_56 &= (((safe_add_func_int8_t_s_s((((l_429 = (((safe_div_func_int32_t_s_s(g_185, (safe_add_func_uint16_t_u_u((g_186 | 255U), g_72)))) || (safe_mod_func_int8_t_s_s(l_432, (1 & (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((0x1475 <= ((((g_185 = ((g_296 | l_448) <= l_432)) < 1U) && p_11) | 7U)), g_400)), p_11)) >= p_11) ^ p_11))))) < p_11)) <= g_124) & 0x65F5B507), 0xD5)) == 4294967288U) >= p_11))) || l_429) , g_70)))
        {
            uint16_t l_449 = 1U;
            uint32_t l_462 = 0U;
            int32_t l_477 = 0x7C1FB03A;
            l_449--;
            for (g_56 = (-28); (g_56 >= 19); g_56 = safe_add_func_int16_t_s_s(g_56, 1))
            {
                int32_t l_458 = 6;
                uint16_t l_464 = 0x41B9;
                int32_t l_567 = 0;
                uint8_t l_574 = 0xC5;
                int16_t l_595 = 0x1E23;
                l_464 = (((safe_rshift_func_int8_t_s_u(((((safe_mod_func_uint16_t_u_u(p_11, l_458)) , 0) ^ p_11) , ((g_343 , ((((g_27 = ((6 | (g_252 | (~(safe_rshift_func_int16_t_s_u(l_449, (((((((l_458 == 0xC8A839D5) != g_12) == 0xF03E8445) <= (-1)) , l_430) != (-1)) != p_11)))))) != l_448)) == p_11) < p_11) , 0xBA1B)) && l_462)), p_11)) >= p_11) && g_463);
                for (g_249 = 0; (g_249 < (-9)); g_249--)
                {
                    uint8_t l_478 = 255U;
                    int8_t l_514 = 0x62;
                    int32_t l_533 = (-1);
                    int32_t l_551 = 1;
                    for (g_70 = 0; (g_70 > 10); g_70 = safe_add_func_uint16_t_u_u(g_70, 3))
                    {
                        l_478 |= (0x81DE1086 & ((0x89612D35 && (safe_mul_func_uint8_t_u_u((g_463--), (safe_rshift_func_uint16_t_u_u((l_477 = (~l_476)), p_11))))) <= 0x76));
                        l_432 = p_11;
                    }
                    for (g_185 = 0; (g_185 < 11); g_185++)
                    {
                        int16_t l_483 = 0xF857;
                        l_483 = (safe_lshift_func_int16_t_s_s(0x5F55, 15));
                        if (g_87)
                            continue;
                    }
                    if (((((g_124 , (p_11 = p_11)) ^ 0x53) & (g_28++)) ^ (safe_lshift_func_int8_t_s_s((l_478 || ((g_70++) < (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(g_49, (safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((l_432 = l_478), (safe_sub_func_uint32_t_u_u(((((safe_div_func_uint16_t_u_u((g_184 &= l_462), (safe_mul_func_uint16_t_u_u(0xE4DA, (!(safe_sub_func_int8_t_s_s((((l_513 &= (safe_mul_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((g_49 ^ g_14), g_124)) & l_478) , 2), l_478))) < 0x488DD117) , g_72), l_462))))))) , 250U) ^ 0x83) > g_400), l_448)))) || 1), 0xE9FF)))) & 0x04), l_428)), g_49)))), l_514))))
                    {
                        int16_t l_532 = 0xBC30;
                        l_533 = ((((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(p_11, p_11)) , (safe_sub_func_uint16_t_u_u(0U, (safe_lshift_func_uint16_t_u_s(l_464, (~((l_449 | ((((l_478 != (p_11 & (safe_unary_minus_func_uint8_t_u(((safe_add_func_uint16_t_u_u(g_124, (g_184 , p_11))) && p_11))))) || 0x25) > g_27) >= l_531)) <= g_124))))))), l_478)) , l_532), 6)) && 4U) && g_71) < 0xF9661FED);
                        l_477 = g_186;
                    }
                    else
                    {
                        l_551 = ((((((((0x9F14 && ((g_27 = (g_69 >= (!((0xA718A48E && (((safe_rshift_func_uint16_t_u_s(l_458, ((((((((safe_sub_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_49 = (g_252 = l_477)), ((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_430 = p_11), g_87)), ((l_533 = (safe_rshift_func_uint16_t_u_s(0x5ECB, 0))) , (safe_mul_func_int8_t_s_s(p_11, p_11))))) ^ g_265))), g_185)) & p_11) == 255U), 0U)) | 0) == 65533U) < l_514) & 0x669B7611) > (-1)) >= p_11) ^ 0xEEC245D8))) && p_11) ^ 0x55)) , l_432)))) | 1)) , p_11) , g_69) && 0xC4E1FA58) != g_70) <= 7U) != l_478) || 0x98);
                    }
                }
                if (((!l_432) <= ((safe_rshift_func_int16_t_s_u((p_11 | (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_124, (safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_449 != (-6)), ((l_567 = p_11) | ((l_426 != (safe_rshift_func_int8_t_s_s((l_464 | (safe_mul_func_int8_t_s_s((((((safe_add_func_int8_t_s_s((l_531 , l_429), g_87)) ^ l_531) != 0xEDB4) , p_11) != 247U), (-1)))), p_11))) == l_458)))), p_11)) , l_574), p_11)))), p_11)) ^ p_11), g_69))), l_464)) && g_69)))
                {
                    uint32_t l_590 = 1U;
                    if (l_575)
                        break;
                    for (g_27 = (-23); (g_27 >= (-2)); ++g_27)
                    {
                        int16_t l_596 = 0x5C6A;
                        g_72 = ((safe_add_func_int16_t_s_s((g_400 < ((safe_add_func_uint16_t_u_u((5U == ((((safe_mul_func_int16_t_s_s((l_432 = 2), (g_72 ^ (safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s(0x26B0, (((((((((p_11 & (safe_add_func_uint16_t_u_u(l_590, (safe_sub_func_int8_t_s_s((l_531 , (l_513 = ((safe_sub_func_uint16_t_u_u(((l_429 = (((l_595 <= l_596) >= l_590) > g_70)) | g_49), 4U)) != 0x73))), 255U))))) < g_296) , p_11) > g_71) & l_426) | p_11) | 0x3BEE) | g_49) , p_11))) & p_11), g_400))))) != p_11) >= p_11) < 0xEBCB2059)), p_11)) || p_11)), 0xA88B)) || p_11);
                    }
                }
                else
                {
                    l_477 ^= l_574;
                }
                l_597++;
            }
            l_430 = (safe_mod_func_uint8_t_u_u((6U || p_11), (safe_mul_func_int16_t_s_s(l_431, g_70))));
        }
        else
        {
            uint32_t l_604 = 6U;
            l_604--;
            return l_607;
        }
        g_186 = ((-1) <= (p_11 , (((((g_72 |= ((l_513 = ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_87 = p_11), (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((l_448 & (((l_428 , 0x7B) == 0) , (g_186 ^ (safe_mul_func_uint16_t_u_u(65535U, l_430))))), (-1))) < l_448), p_11)), p_11)))), 0xF3D0)), l_429)), g_70)), 3)) , g_12)) , p_11)) < l_607) ^ p_11) <= 7) & l_597)));
        if ((l_431 != p_11))
        {
            return g_56;
        }
        else
        {
            return g_14;
        }
    }
    l_429 = 3;
    for (g_296 = 24; (g_296 != 51); g_296 = safe_add_func_uint16_t_u_u(g_296, 3))
    {
        int8_t l_628 = 9;
        int32_t l_633 = 0x8E471CA4;
        int32_t l_650 = 5;
        int32_t l_651 = 0;
        int32_t l_660 = 0x7135FE19;
        int32_t l_661 = 0x8F39C980;
        uint8_t l_669 = 1U;
        l_628 = 0x8DEDEB5C;
        for (g_343 = 0; (g_343 != (-15)); g_343 = safe_sub_func_int32_t_s_s(g_343, 3))
        {
            uint32_t l_632 = 0xC092481F;
            if (g_343)
            {
                int32_t l_631 = (-4);
                l_631 = p_11;
            }
            else
            {
                l_632 = g_186;
            }
            g_636++;
        }
        g_72 = (g_246 <= (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(((l_628 && (l_651 = ((((0xB0 >= 255U) , 0xF9) | (l_633 = ((l_633 , p_11) & (+l_430)))) > ((l_650 = ((((safe_rshift_func_uint8_t_u_u(l_628, 0)) < g_185) <= g_72) || g_72)) || g_186)))) , 0x07), g_71)) && p_11) ^ g_400), 250U)) || 0x820A1D9E), 0x4DB0)), l_429)));
        for (g_71 = 0; (g_71 == 23); ++g_71)
        {
            int32_t l_657 = 0xF461358F;
            int32_t l_658 = 0x15FFA732;
            int32_t l_659 = 4;
            int32_t l_723 = 0x0F003FEE;
            int16_t l_750 = 0xD29D;
            l_429 = ((g_69 ^= (-1)) ^ (((!g_400) < (safe_sub_func_int8_t_s_s(g_185, ((0x737DB03E && (l_658 |= ((l_426 , 249U) | (((g_49 , (l_650 = g_185)) , l_657) , p_11)))) , g_27)))) != l_657));
            g_662--;
            if ((p_11 >= (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_75, l_669)), (p_11 , (l_659 ^= (((((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((p_11 < (p_11 >= ((safe_div_func_int32_t_s_s(((((((safe_mod_func_int8_t_s_s(g_680, l_657)) <= (safe_div_func_int32_t_s_s(0x9E886C66, g_249))) && g_124) , g_49) & p_11) , p_11), g_49)) ^ l_658))), g_185)), p_11)), 0)) >= l_658) <= l_683) && l_448) , 6)))))))
            {
                int32_t l_697 = 0xD961DEDF;
                int32_t l_711 = 0x10B0F55A;
                int8_t l_712 = 1;
                l_713 = (((((((((+(l_430 &= (((safe_div_func_uint8_t_u_u((p_11 > (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_11, (++g_636))), ((safe_lshift_func_uint16_t_u_u((g_296 >= ((0x61 | (safe_mod_func_uint16_t_u_u((((l_429 = (l_711 = (l_697 != ((((l_634 ^= g_400) , (((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((0x5EDC >= ((((~((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((((g_265 < ((p_11 || p_11) | p_11)) ^ l_697) & p_11), l_661)) & g_184), 6U)) > 7), 250U)) ^ p_11)) < g_123) ^ p_11) , g_185)), 1)), p_11)), 65530U)) < 0x7A3F0363) != g_69)) , p_11) <= 0x38)))) , 0x98B0) < g_249), 0x3D42))) > p_11)), l_712)) ^ l_531)))), g_12)) || 0x02) > g_635))) & 65533U) & 6U) , 8U) & l_659) > 0xC3) , l_430) , g_56) , 0x62FCB27B);
                l_657 = (l_712 || ((+((l_712 ^ (((safe_mod_func_uint32_t_u_u(((0x4109 || 65528U) > (((safe_rshift_func_uint8_t_u_u(255U, (safe_sub_func_uint32_t_u_u((l_723 |= 4294967295U), 0xA8F1E1F3)))) && p_11) || ((g_724 & l_658) != l_711))), g_400)) >= p_11) > g_14)) & l_711)) & 0x84D06275));
                g_72 = (l_633 = p_11);
            }
            else
            {
                uint16_t l_731 = 1U;
                g_72 = (((g_184 & (g_70 , (safe_sub_func_int32_t_s_s(((g_636 = 248U) | l_433), 1U)))) & (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_731, l_732)), (p_11 , (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(0x1593, p_11)) || 0x72F7C87E), 0x75)), l_661)) , l_531) == g_296))))) == p_11);
                if (p_11)
                    continue;
                g_186 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((g_70 |= 0U) && (((0x25 && ((((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_s((g_220 < (((+(-9)) != ((0x85 && 253U) , (l_731 & (l_731 || ((l_657 >= 0) || l_750))))) < l_657)), g_246)) == l_633) && 0), g_252)) && l_731) < 0x2BC62B32) <= 0U)) | 0xA6D3F55F) , 0xFF84)), l_661)), g_249)), p_11));
                g_186 = p_11;
            }
        }
    }
    l_634 ^= (l_430 == ((safe_rshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x5BCF2F64, (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_11 = (safe_lshift_func_int8_t_s_u(l_531, (safe_mod_func_uint32_t_u_u((g_124 &= (safe_div_func_int32_t_s_s((p_11 >= (l_713 && (safe_mod_func_uint32_t_u_u((~(l_448 , (0x9EA3 && ((safe_mod_func_uint32_t_u_u((p_11 != ((p_11 > p_11) >= l_429)), l_426)) | g_28)))), 4294967295U)))), g_246))), 9U))))), l_429)), l_448)))), l_433)) >= 0x74) >= l_429), l_433)) & 6));
    return l_683;
}
static uint8_t func_19(int16_t p_20)
{
    int32_t l_383 = (-5);
    int32_t l_392 = 6;
    int32_t l_393 = 0x1C30B815;
    int32_t l_401 = 0x1FC1BEB3;
    uint16_t l_402 = 65530U;
    l_401 = (l_393 = func_22(p_20, (g_27 = (4 < (g_28--))), ((l_383 = func_31(p_20)) , (safe_rshift_func_uint16_t_u_u((((~8U) >= (safe_add_func_int16_t_s_s(l_383, l_383))) == (l_392 ^= (((!(0xAC32 <= ((safe_div_func_int8_t_s_s((l_383 , g_56), 0x24)) , l_383))) <= g_220) != g_265))), g_185))), l_393));
    ++l_402;
    return l_392;
}
static int32_t func_22(int16_t p_23, int8_t p_24, uint8_t p_25, uint16_t p_26)
{
    int32_t l_397 = 6;
    int32_t l_399 = 1;
    if ((safe_unary_minus_func_uint8_t_u((safe_div_func_int16_t_s_s((l_397 |= g_69), g_70)))))
    {
        int8_t l_398 = 0;
        return l_398;
    }
    else
    {
        l_399 ^= g_343;
        return g_400;
    }
}
static uint8_t func_31(int32_t p_32)
{
    int8_t l_40 = (-9);
    uint32_t l_44 = 0U;
    int32_t l_45 = 4;
    int32_t l_59 = 0xC040C8E8;
    uint32_t l_60 = 0x3DC4D7E3;
    int8_t l_67 = (-1);
    int32_t l_371 = 0;
    int32_t l_382 = 0x9C32DDD9;
    l_60 = (l_59 |= (0x779D44F4 ^ (func_33((l_45 = (safe_lshift_func_int16_t_s_s(0, (((+l_40) >= ((!l_40) == ((safe_add_func_int32_t_s_s(g_14, 0x3BE41B0C)) == g_12))) || l_44)))), p_32, g_12) == p_32)));
    for (g_12 = 0; (g_12 <= (-29)); g_12 = safe_sub_func_uint16_t_u_u(g_12, 8))
    {
        int16_t l_74 = (-6);
        int32_t l_368 = (-1);
        if ((+(l_59 ^= (safe_mul_func_int16_t_s_s(p_32, 0xAA6F)))))
        {
            int16_t l_68 = 7;
            g_69 = (!(l_67 , l_68));
        }
        else
        {
            g_70 = p_32;
            if (l_45)
                continue;
        }
        if (g_14)
        {
            int32_t l_73 = 0;
            --g_75;
            l_368 = (g_14 & (g_72 ^ func_33(l_67, func_78(g_72, g_69, func_82(g_72, l_74, (func_33((func_33((+(func_33(g_87, ((g_71 = (l_73 = func_88(g_70, p_32))) , g_56), g_72) || g_49)), p_32, g_70) , 0x95), p_32, p_32) || p_32))), g_72)));
        }
        else
        {
            return p_32;
        }
    }
    g_72 = ((((safe_mod_func_uint8_t_u_u(((((l_59 = l_371) < ((safe_sub_func_uint32_t_u_u(((((p_32 , (((g_123 = (safe_mul_func_int8_t_s_s((p_32 ^ (l_45 = p_32)), ((((g_252 &= (-8)) || (g_69 &= 0x48)) , (p_32 >= (((((254U < (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s((p_32 & 0x16D7), 1U)) <= p_32), l_60)), 0))) == 9U) <= p_32) & (-7)) ^ l_371))) , g_72)))) , 0xE8F8) < l_67)) <= 0x9F9F4B57) , p_32) || l_40), l_371)) ^ 0x99)) == l_382) & 1U), l_44)) | g_75) <= g_343) , g_252);
    return g_70;
}
static int16_t func_33(int8_t p_34, uint8_t p_35, uint8_t p_36)
{
    uint32_t l_46 = 0x997736EA;
    int32_t l_47 = 0;
    int32_t l_48 = 0x584EDB55;
    int32_t l_50 = 0x4B79A97A;
    int32_t l_51 = (-9);
    int32_t l_52 = 0x7D900D29;
    uint32_t l_53 = 0xCD890F6D;
    l_46 = g_14;
    --l_53;
    g_56--;
    return g_56;
}
static uint8_t func_78(uint32_t p_79, uint16_t p_80, uint32_t p_81)
{
    uint8_t l_180 = 0xD3;
    int32_t l_183 = 0xBF17702E;
    uint32_t l_196 = 1U;
    int32_t l_210 = (-2);
    int8_t l_251 = 0xF2;
    int8_t l_291 = 0x2E;
    int32_t l_292 = 0x1BE9AE68;
    uint16_t l_367 = 65535U;
    if (g_70)
    {
        int16_t l_158 = 0x0C07;
        uint8_t l_181 = 0x0C;
        uint16_t l_182 = 0x1355;
        int32_t l_209 = 0x6844EC94;
        g_186 = (g_185 |= (((g_56 == (g_184 &= (safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((((l_158 != (safe_mul_func_int16_t_s_s(((g_75 & l_158) , ((l_183 &= ((safe_div_func_int8_t_s_s(p_79, ((((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s(((p_80 ^= (~((safe_rshift_func_int16_t_s_u((g_87 ^= (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((((p_81 | 0x8BA31763) != ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_s(l_158, (g_69 &= 0))) != l_180) == l_181) == g_123), 0x9661A183)), l_182)) ^ p_79)) < g_56) , 0x2F3C), (-9))), l_158))), 2)) , g_49))) >= g_14), l_180)) > g_71) | 0) < g_75), p_79)) & g_70) , g_12) && g_71))) && p_81)) | p_81)), l_182))) < 0) ^ l_180) || 0x9AC0), 0x91578ADD)) , p_80), l_180)))) & p_79) == p_81));
        l_210 |= (((safe_sub_func_int8_t_s_s((l_209 = ((safe_mod_func_int8_t_s_s((g_123 && ((l_183 = (p_79 >= (safe_lshift_func_uint16_t_u_u((l_158 && ((~((((safe_div_func_uint32_t_u_u((l_196 , ((((safe_mul_func_uint16_t_u_u((((g_56 >= (4294967295U <= (g_49 , (((((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(0xDC, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(0, 5)) , p_79), p_79)), 10)))) , p_81), l_182)) >= p_80) < p_80) >= g_71) | p_81)))) , l_158) , 0x9494), g_69)) , g_185) != g_184) < 0x7BCEAF5C)), p_81)) != g_71) , 1) || 65535U)) >= g_124)), g_72)))) , 0x74F60197)), p_81)) == l_158)), g_87)) < g_56) ^ l_182);
    }
    else
    {
        int16_t l_216 = 0x588F;
        int32_t l_219 = (-1);
        uint8_t l_248 = 0x0D;
        uint32_t l_250 = 5U;
        uint8_t l_290 = 0U;
        for (p_81 = 0; (p_81 > 37); p_81++)
        {
            int8_t l_214 = 0xF1;
            int32_t l_223 = 0xB0FDDEAC;
            int32_t l_224 = 0;
            int32_t l_247 = 0x9C46E934;
            l_214 = (!(-4));
            if (((((~g_56) < ((l_216 &= (g_186 ^= (l_210 = 0xFE17F827))) < (safe_rshift_func_uint8_t_u_s((p_81 != (l_224 ^= (((0xFD925828 >= (((0xB1 ^ g_69) , (((g_220 = l_219) ^ (l_223 |= (safe_div_func_int8_t_s_s((g_69 | (((l_183 = (0xF96C < p_81)) & l_214) ^ l_196)), g_72)))) , 0)) , p_80)) , g_49) , p_81))), g_124)))) | g_71) != 0x9F12))
            {
                g_252 = (l_183 ^= ((safe_rshift_func_int8_t_s_s((l_223 && l_216), 6)) | ((g_56 > l_223) ^ (safe_div_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(l_216, ((((((safe_mul_func_uint16_t_u_u(((p_81 == (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_249 = (safe_mul_func_uint16_t_u_u((((~(((safe_rshift_func_int8_t_s_u((l_247 = (g_124 , (safe_div_func_int32_t_s_s((g_186 = 0xA93C712B), g_246)))), l_224)) || g_220) <= g_49)) , l_248) < g_246), 0x2AE1))) , 1), g_87)), 0x9C)), g_12))) ^ g_246), l_223)) < g_12) != l_216) <= g_246) && l_250) <= l_196))) && g_14) , l_251), g_184)))));
            }
            else
            {
                uint8_t l_268 = 255U;
                int32_t l_285 = 9;
                int32_t l_293 = 0x7A575B73;
                int32_t l_294 = (-1);
                int32_t l_295 = 0xB3E451EC;
                l_295 = ((g_56--) >= (((safe_rshift_func_uint16_t_u_u(((~g_252) == (l_294 = (!(l_224 = (safe_lshift_func_uint8_t_u_u((l_216 == (((l_293 = ((((l_216 && ((safe_add_func_uint8_t_u_u((l_223 = (g_265 = g_69)), (+(+(--l_268))))) , ((((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((g_124 = (safe_div_func_int8_t_s_s((+(safe_unary_minus_func_uint32_t_u(((((l_292 ^= ((((g_186 = (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_249, (((p_80 && (safe_mod_func_int16_t_s_s((l_285 = l_183), (g_70 = ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_210, 0U)) | l_290), 7)) , l_223))))) & l_223) && 1))), 0)) , p_80) == 0x53746296)) & g_87) != p_80) & l_291)) == l_291) || p_81) & g_220)))), g_123))), p_81)), (-6))) < (-2)) , 0) <= 0x58))) , (-1)) , g_249) && 0xBCB22D99)) < 0U) , g_12)), l_180)))))), p_80)) ^ 0x6A66) , g_14));
                ++g_296;
            }
        }
        return g_123;
    }
    l_210 = p_80;
    for (g_265 = 0; (g_265 == 16); g_265 = safe_add_func_uint32_t_u_u(g_265, 4))
    {
        int16_t l_313 = 0x5530;
        uint32_t l_314 = 0xE56C9CEF;
        int32_t l_339 = 0;
        int32_t l_340 = 0x045B5DB3;
        int32_t l_341 = (-9);
        int32_t l_342 = 0xA1813222;
        int32_t l_344 = 0x52E694BA;
        uint32_t l_345 = 0xAD44DE8C;
        l_210 = (safe_lshift_func_int8_t_s_s(0x62, 4));
        for (p_80 = 0; (p_80 <= 23); p_80 = safe_add_func_int16_t_s_s(p_80, 9))
        {
            uint32_t l_307 = 0x4FC960D3;
            l_314 ^= (g_186 ^= (((g_296--) | ((l_307 && (4294967288U | (((0xA275D891 & ((safe_unary_minus_func_uint16_t_u(p_80)) == (4U != ((safe_add_func_uint16_t_u_u((g_75 & p_79), (p_81 == g_184))) | p_79)))) & l_313) > l_307))) == l_307)) | 0x3F));
            l_210 = ((-1) | (++g_75));
            g_186 = (((l_307 != (safe_sub_func_uint16_t_u_u((--g_184), (((g_49 = (((((g_296 = (((safe_lshift_func_int8_t_s_u(g_220, ((((p_80 , (safe_div_func_int32_t_s_s((+(+(((safe_mod_func_uint32_t_u_u((g_72 & (((((p_80 | (safe_rshift_func_uint16_t_u_u(l_291, 13))) , (safe_mod_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(((0xEF053202 ^ ((((9 < (g_220 , 0x04)) , 65529U) > l_313) & g_124)) && g_252), l_314)) > l_251), l_313)) <= 0x74) && (-10)) == g_296), p_79))) && 0xEDD2AB83) , p_80) , l_196)), g_252)) , 0xA448F8A4) == 0U))), 0x133C69A0))) , 0x5472) < g_296) && g_69))) | g_87) > 0)) < 253U) , g_186) & p_81) | 0x6268)) < l_313) < 0xD7709794)))) , p_79) > g_252);
        }
        ++l_345;
    }
    l_367 = (safe_rshift_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((p_80 , (g_70 &= 0x6A10)), (g_296 , (((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((l_196 > p_81), (safe_mod_func_int32_t_s_s((l_210 ^= 0x8DC139FA), (safe_add_func_uint16_t_u_u(((((-1) <= (~(l_292 = (safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_80, (-9))), g_49))))) >= g_249) & g_14), p_80)))))) | 4294967293U), 4U)), p_79)) , 0x59F1) && 65534U)))) <= l_183) > p_79), g_12));
    return l_291;
}
static uint32_t func_82(uint32_t p_83, uint8_t p_84, uint32_t p_85)
{
    int16_t l_150 = 0x997E;
    int32_t l_153 = 0;
    for (g_75 = 0; (g_75 == 3); g_75++)
    {
        uint8_t l_137 = 0x76;
        int32_t l_151 = 0;
        int32_t l_152 = 0x96171667;
        l_152 = (p_85 && ((safe_lshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(l_137, ((((l_151 = (p_83 ^ (((safe_rshift_func_int8_t_s_u(((((safe_sub_func_int16_t_s_s((-1), (p_85 & (g_56 >= (safe_add_func_uint8_t_u_u(((0x3C > (safe_add_func_int16_t_s_s((g_56 , ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_150, l_150)), p_83)) == l_150)), 1))) & (-1)), g_71)))))) == p_85) == p_85) && p_83), l_137)) > 0xE26BD804) > g_14))) & g_72) , 0xEE53) < l_137))) || l_151), g_87)), l_150)) & p_84), p_83)) >= l_150));
        l_153 |= (p_84 | 3U);
    }
    return p_85;
}
static int32_t func_88(uint8_t p_89, uint32_t p_90)
{
    int32_t l_91 = 7;
    uint32_t l_100 = 0xC50754B4;
    int32_t l_119 = (-8);
    uint32_t l_120 = 0x5978FFC2;
    int32_t l_121 = 1;
    int8_t l_122 = (-6);
    int32_t l_125 = 0xF94FDEA9;
    int32_t l_126 = 0xC5A173F2;
    l_91 = g_75;
    l_126 = ((l_125 = ((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_56, (g_124 = ((safe_sub_func_int16_t_s_s((((l_91 = 1U) , (safe_rshift_func_uint8_t_u_u(1U, (l_100 = 0U)))) ^ 0), (((safe_div_func_uint16_t_u_u((p_90 , ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(p_90, 2)) , (g_123 |= ((((l_119 = ((l_122 |= (safe_add_func_uint32_t_u_u(((l_121 ^= (safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(0x38B8, (safe_div_func_uint8_t_u_u((((((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_119 | 0x62A8), l_119)), (-1))) , p_90) , l_119) <= g_14) , l_119), l_120)))) && 0x0E), 9))) , 0xF63D7CB6), p_89))) == 0x67)) , (-1)) | l_120) | g_87))), l_120)) != l_120)), p_89)) , p_89) , p_89))) , g_75)))), l_120)) >= g_70)) == p_89);
    return g_124;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_12;
    csmith_sink_ = g_14;
    csmith_sink_ = g_27;
    csmith_sink_ = g_28;
    csmith_sink_ = g_49;
    csmith_sink_ = g_56;
    csmith_sink_ = g_69;
    csmith_sink_ = g_70;
    csmith_sink_ = g_71;
    csmith_sink_ = g_72;
    csmith_sink_ = g_75;
    csmith_sink_ = g_87;
    csmith_sink_ = g_123;
    csmith_sink_ = g_124;
    csmith_sink_ = g_184;
    csmith_sink_ = g_185;
    csmith_sink_ = g_186;
    csmith_sink_ = g_220;
    csmith_sink_ = g_246;
    csmith_sink_ = g_249;
    csmith_sink_ = g_252;
    csmith_sink_ = g_265;
    csmith_sink_ = g_296;
    csmith_sink_ = g_343;
    csmith_sink_ = g_400;
    csmith_sink_ = g_463;
    csmith_sink_ = g_635;
    csmith_sink_ = g_636;
    csmith_sink_ = g_662;
    csmith_sink_ = g_680;
    csmith_sink_ = g_724;
    csmith_sink_ = g_777;
    csmith_sink_ = g_794;
    platform_main_end(0,0);
    return 0;
}
