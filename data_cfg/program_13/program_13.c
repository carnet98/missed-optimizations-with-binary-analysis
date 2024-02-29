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
static int32_t g_2 = 0x2C03342E;
static uint16_t g_71 = 5U;
static int32_t g_83 = 0x73C04290;
static uint32_t g_102 = 4294967295U;
static uint16_t g_126 = 1U;
static int32_t g_127 = 0xEE3948B2;
static int16_t g_153 = 0xC2C2;
static uint32_t g_178 = 0xDA64CFDF;
static uint8_t g_181 = 0xC4;
static int8_t g_211 = 7;
static uint8_t g_212 = 255U;
static int16_t g_254 = 0xAFE7;
static int32_t g_264 = 0xA6AEE27A;
static int16_t g_306 = 8;
static uint8_t g_340 = 1U;
static int8_t g_352 = 0x4E;
static uint8_t g_360 = 0x01;
static uint32_t g_446 = 4294967295U;
static uint32_t g_484 = 4294967290U;
static int8_t g_798 = (-1);
static int16_t g_951 = 0x5559;
static uint16_t g_987 = 0x9C54;
static int32_t g_1035 = 1;
static uint32_t g_1088 = 0x5D2DE1A5;
inline static int8_t func_1(void);
static int32_t func_6(int32_t p_7);
static int16_t func_8(uint32_t p_9, int16_t p_10, uint8_t p_11, int8_t p_12, uint32_t p_13);
inline static int8_t func_15(uint32_t p_16, uint32_t p_17, uint32_t p_18, uint8_t p_19, uint32_t p_20);
static int32_t func_24(int16_t p_25, uint16_t p_26, int16_t p_27, uint32_t p_28, uint8_t p_29);
static int32_t func_30(int32_t p_31, uint32_t p_32);
inline static int8_t func_36(uint32_t p_37, uint32_t p_38);
inline static uint8_t func_41(int32_t p_42, int8_t p_43, int16_t p_44, uint32_t p_45);
static int8_t func_46(uint32_t p_47, int32_t p_48, uint16_t p_49);
static int16_t func_50(uint8_t p_51, int16_t p_52, uint32_t p_53);
inline static int8_t func_1(void)
{
    uint16_t l_5 = 65535U;
    int32_t l_1089 = 4;
    int8_t l_1113 = 3;
    for (g_2 = (-17); (g_2 != 11); g_2 = safe_add_func_int16_t_s_s(g_2, 7))
    {
        int8_t l_1049 = 0xE3;
        uint16_t l_1050 = 65535U;
        int32_t l_1068 = 0x79D24AA2;
        int32_t l_1114 = 0xADABD413;
        int8_t l_1124 = 0x94;
        l_1049 = ((l_5 == func_6(g_2)) < (safe_lshift_func_int8_t_s_u(g_2, 2)));
        g_1035 = (g_264 = 6);
        if ((l_1050 == g_798))
        {
            int32_t l_1061 = 0;
            int32_t l_1066 = 0x30B41F19;
            int32_t l_1079 = 0xAA0B2087;
            for (g_83 = 0; (g_83 != (-16)); g_83 = safe_sub_func_int8_t_s_s(g_83, 8))
            {
                int32_t l_1067 = 0xCC737FA8;
                int8_t l_1096 = (-3);
                l_1068 = ((safe_mod_func_int32_t_s_s((0x841629C4 <= (g_446 ^ ((safe_rshift_func_int8_t_s_s((g_211 = (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_u((g_254 = 0), (l_1061 = g_264))) != g_306) < ((g_484 , (safe_lshift_func_uint16_t_u_s(g_951, ((safe_add_func_uint8_t_u_u((g_360 = g_127), 1U)) ^ 0xCA)))) != l_1066)), l_1067))), g_71)) & l_1049))), 0x0767F7FA)) | g_181);
                l_1089 = ((l_5 == (g_83 , (((((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((-1), (safe_rshift_func_uint16_t_u_u((((-2) == (g_1088 = ((safe_sub_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((l_1079 = l_1067), g_264)) , (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_102, (g_153 = ((g_153 && (safe_rshift_func_uint16_t_u_s(((((safe_add_func_uint8_t_u_u((g_798 >= g_484), g_2)) && g_153) <= 4294967286U) , g_264), 14))) || g_127)))), g_254))) != g_254), g_1035)) >= g_264))) | 0x83), g_71)))), l_1066)) <= l_5) && 249U) != 0x1FE097BF) , 247U))) == 0U);
                g_127 = ((l_1067 , (safe_mod_func_int8_t_s_s((g_211 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((l_1096 = l_1068) | l_1067) >= (safe_rshift_func_uint16_t_u_u(g_264, 3))), 4)), 8))), g_102))) , (((((safe_sub_func_int16_t_s_s(l_1096, (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((g_153 = ((!l_5) < (safe_mod_func_int16_t_s_s((((+((safe_rshift_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u(((l_1113 ^ ((((g_951 || g_306) >= 0x6D188BB4) , g_340) || l_1050)) , g_178), l_1066)) & 255U) || l_1096) < g_211), g_446)) != l_1113)) <= l_1067) || g_181), g_1088)))) | l_1096), g_102)) > g_212), g_264)))) , l_1049) > g_1035) < 250U) , l_1096));
            }
        }
        else
        {
            g_83 = l_1089;
        }
        l_1124 = (((l_1114 ^ (l_1113 <= (g_83 = 1))) != (safe_mod_func_int16_t_s_s(((!((g_1088 && ((((l_1068 || ((0x68 <= (safe_add_func_uint32_t_u_u((g_254 ^ (0x2167 <= ((((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(g_340, g_181)), g_211)) ^ g_126) , l_1089) , g_951))), l_1114))) | g_71)) && l_1089) & g_798) <= g_153)) || 0x8A25EA99)) & g_987), (-1)))) <= l_1089);
    }
    g_1035 = ((g_212 & 0x32A5D4B0) < (l_1089 && 65535U));
    return g_153;
}
static int32_t func_6(int32_t p_7)
{
    int8_t l_14 = (-10);
    int32_t l_21 = 0xC218E993;
    int32_t l_833 = 1;
    int32_t l_834 = (-1);
    int32_t l_854 = 0xAE84D5E8;
    int32_t l_864 = 0x845BC3E1;
    int32_t l_868 = 1;
    int32_t l_869 = 0xFACB4F48;
    uint32_t l_879 = 4U;
    uint32_t l_939 = 0x68149F9E;
    int32_t l_1034 = 0xD86BFB1C;
    uint16_t l_1046 = 65532U;
    l_834 = ((l_833 = func_8(g_2, l_14, (g_2 , 0xAF), func_15(g_2, l_14, l_21, (safe_rshift_func_int16_t_s_s((0xD68F9855 | func_24(p_7, g_2, l_21, g_2, p_7)), 8)), l_14), p_7)) , 1);
    if (((((l_833 = ((safe_unary_minus_func_uint32_t_u((((g_153 , (1U && l_833)) | (safe_sub_func_int32_t_s_s(0x75F6733D, 4294967292U))) <= (safe_sub_func_int32_t_s_s(g_71, (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_add_func_int16_t_s_s((p_7 , (((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((((0x0023 < (l_834 = (((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((((0xD427499C > l_833) | 8U) < p_7), g_254)) != 0x8F77), l_854)) < l_21) ^ g_211))) >= g_178) | p_7) & 0x87673ECB), g_212)), 4)) > g_83) <= g_102)), 0U)) | l_833) < 0) ^ p_7), 0)), g_102))))))) == 0xC5)) && l_14) != p_7) ^ g_102))
    {
        int32_t l_857 = (-6);
        int32_t l_859 = 0x763D063B;
        int32_t l_860 = (-1);
        uint32_t l_952 = 1U;
        int8_t l_953 = 0x49;
        l_860 = (~((+l_857) < ((l_859 = (g_127 = (~0))) < l_21)));
        l_869 = ((253U < (l_868 = (p_7 ^ (safe_mod_func_uint16_t_u_u(((~(l_864 & ((((g_83 || ((safe_lshift_func_uint16_t_u_s(1U, ((l_834 = (((l_833 = (((((((+0x121F) , (((((l_864 , (l_857 || 7U)) , 0x2D) >= p_7) >= 0x6916) && 0x6659)) > p_7) < g_2) | 0x096DD488) > p_7) != l_868)) , p_7) > 3)) | l_868))) == p_7)) , l_860) || 0x06CA) , (-3)))) , l_834), g_126))))) != p_7);
        if (((l_860 = (((p_7 | ((safe_rshift_func_int8_t_s_s(1, l_857)) > (l_868 = p_7))) & (!3)) & 4294967293U)) > (((safe_rshift_func_int16_t_s_s(((8 != (l_857 > (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_7, p_7)), 65530U)))) < 65531U), p_7)) <= g_254) ^ l_879)))
        {
            uint32_t l_886 = 0x045357BF;
            int32_t l_889 = (-10);
            g_127 = g_254;
            l_860 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((l_886 && (l_889 = (safe_lshift_func_int16_t_s_u(l_860, 10)))) | (l_859 = p_7)) || (((g_83 , (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(g_360, (safe_sub_func_int32_t_s_s(((1U ^ 7U) > l_859), (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0x9824, g_83)), p_7)))))) < g_254), 15)), 6))) <= p_7) | l_21)) & l_14), p_7)), 6)), l_886));
        }
        else
        {
            uint32_t l_938 = 0xB2339015;
            int32_t l_940 = (-9);
            g_127 = ((safe_mod_func_uint32_t_u_u(p_7, (safe_rshift_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u((l_940 = ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((l_833 = (4U == ((((((+((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_uint16_t_u_s((0xE402 > (((((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_834 , (safe_rshift_func_int8_t_s_s(((g_153 = (safe_sub_func_int8_t_s_s((((g_126 | 0x5EE3CB88) == (((safe_rshift_func_int8_t_s_s((g_211 & (safe_rshift_func_int16_t_s_u(((-1) ^ (safe_sub_func_uint32_t_u_u(0x4B1AF517, l_868))), g_484))), 4)) != l_834) || l_938)) | g_153), 0xB4))) >= l_879), 3))), g_211)), 0x80125A1B)) <= p_7) <= 0xE7), p_7)) == 0x56) , l_869) == p_7) || l_859)), g_306)) != 0x8DE0624C))), l_833)) , l_857)) > p_7) && 0x77835301) , 0x1E) & p_7) & 0xC3))), (-1))) ^ 0x44C3A915), p_7)) | p_7), l_938)), l_939)) != p_7)), l_938)) , g_340) < g_102) != p_7), g_2)))) , 0x7DDE9319);
            l_940 = (((l_860 = (8U < (!6))) , ((safe_add_func_int8_t_s_s((l_953 = (0xDE45 >= ((!0x9B) <= ((((((safe_mod_func_int32_t_s_s((g_446 && (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_127, ((l_868 = ((g_951 = l_854) < (l_952 , 0xB53C5685))) <= p_7))), 0x85B0))), g_360)) || 0x19BE593C) != p_7) == g_153) | 0x568F) == g_264)))), g_340)) | p_7)) | 1);
        }
        g_83 = (l_857 , p_7);
    }
    else
    {
        uint32_t l_986 = 0x797A891B;
        int32_t l_988 = 0xA567FF72;
        int32_t l_1030 = 3;
        for (l_834 = 0; (l_834 <= 26); l_834 = safe_add_func_uint32_t_u_u(l_834, 4))
        {
            uint8_t l_956 = 0x42;
            uint8_t l_971 = 0x61;
            int32_t l_972 = 0xFAA6EBB6;
            int8_t l_995 = 0xD2;
            int32_t l_998 = 3;
            l_956 = 0;
            for (g_340 = 0; (g_340 == 45); g_340++)
            {
                uint8_t l_963 = 248U;
                uint8_t l_970 = 0xD3;
                int32_t l_985 = 6;
                l_972 = (p_7 != ((l_971 = (g_211 < ((((safe_lshift_func_uint8_t_u_s(0xCC, (g_102 > (safe_mod_func_uint8_t_u_u((l_963 ^ (safe_rshift_func_uint8_t_u_u(l_956, (0x78 <= ((safe_sub_func_int32_t_s_s((g_178 > (g_798 = (safe_add_func_int32_t_s_s((l_833 = 0xFF55A0EA), 0x37FECEB4)))), 0x0E7965FA)) && l_963))))), p_7))))) < g_212) & l_970) , l_956))) , g_153));
                g_127 = (-9);
                l_972 = (safe_sub_func_uint8_t_u_u((((((((safe_mod_func_int8_t_s_s(((((((((p_7 == ((((safe_mod_func_int16_t_s_s(g_71, l_972)) && 4294967295U) | l_956) > ((l_985 = ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((p_7 < p_7) == (((safe_lshift_func_uint8_t_u_u(((0x2DA93ED5 && 4294967291U) , 1U), 7)) & g_211) && p_7)), 0x10)), (-2))) ^ 9U)) | g_102))) | 0x652D9804) , l_986) & g_484) , l_971) && g_83) ^ l_972) != l_970), (-3))) , 0xE696) != g_987) < g_264) , g_102) , 4294967289U) & p_7), l_971));
                l_988 = g_340;
            }
            g_264 = (p_7 <= (l_986 | ((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((l_986 >= l_834), l_988)), ((safe_sub_func_int16_t_s_s((g_211 , (7 == l_995)), ((safe_sub_func_uint16_t_u_u(0x8756, g_126)) <= 65526U))) , p_7))) >= 0x24E9556B)));
            l_998 = (l_972 = (g_340 , (((l_864 , g_126) || g_178) == p_7)));
        }
        for (g_484 = (-4); (g_484 >= 39); g_484++)
        {
            return p_7;
        }
        l_869 = (-1);
        g_83 = (l_834 = ((~((((g_352 = (l_1034 = (((safe_add_func_uint8_t_u_u(g_211, (safe_sub_func_int32_t_s_s((((g_360 = (l_868 = (((g_1035 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0xE1, (safe_rshift_func_int8_t_s_s(((p_7 < (((l_833 = g_951) != ((safe_sub_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(l_986, 13)) & (((safe_mod_func_uint16_t_u_u((g_987 = (((((safe_add_func_uint32_t_u_u(((g_798 = ((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(l_988, l_1030)) | ((safe_sub_func_uint16_t_u_u(0U, ((safe_unary_minus_func_uint16_t_u(0xED66)) ^ p_7))) == 247U)), 14)) != g_254), 4294967290U)) ^ 0xA2B3)) , p_7), p_7)) && l_988) > 0x97EE) >= p_7) != l_986)), l_988)) ^ l_1034) , g_102)) || g_181), g_211)), 0x030B)) , g_126) , l_879) && g_306), 65526U)) , g_127)) || g_178)) >= 0xA490CC64), 6)))), 1))) == g_340) != l_939))) | g_264) != 0xEC9371E6), g_83)))) <= g_83) , g_126))) , p_7) ^ g_951) > p_7)) || p_7));
    }
    l_868 = (g_83 = (g_1035 = ((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((((p_7 , (safe_lshift_func_uint8_t_u_s(((((((g_178 > l_833) > (p_7 ^ ((((l_869 = ((((0x03 & g_484) & ((safe_lshift_func_int16_t_s_u(((1U && p_7) || (safe_lshift_func_uint16_t_u_u(((l_1034 = ((((((((65531U || l_879) > 0U) >= l_879) <= g_178) < g_1035) != l_1046) <= p_7) || 0x6D7D)) > 0x98DA7BBB), 4))), 1)) < p_7)) < p_7) , l_1046)) < g_340) < l_864) || 0x25870BD1))) , g_254) >= 6U) <= 0x17C1) , 250U), g_264))) && l_1034) , 0xE313) | l_14) , p_7), p_7)), 0xEBC610E7)) | g_1035)));
    return l_868;
}
static int16_t func_8(uint32_t p_9, int16_t p_10, uint8_t p_11, int8_t p_12, uint32_t p_13)
{
    uint32_t l_759 = 0x1FC064E0;
    int32_t l_768 = 1;
    int32_t l_797 = 0x29F9B49B;
    uint16_t l_823 = 1U;
    uint32_t l_829 = 4294967295U;
    if ((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x7420, (safe_sub_func_int16_t_s_s(0x5918, ((safe_lshift_func_uint16_t_u_s(l_759, (l_759 ^ l_759))) , (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((l_768 = (l_759 > ((((safe_add_func_int8_t_s_s(g_127, g_2)) == (p_10 <= l_759)) ^ 0x6B72FC76) < l_759))), p_9)) < l_759) || g_211), p_12)) != p_9), 0x214ABFF2))))))), l_759)))
    {
        uint32_t l_769 = 3U;
        int32_t l_796 = 0xF575AABA;
        g_83 = (((l_769 > (g_798 = (!((+(safe_unary_minus_func_int16_t_s(((~(((p_11 = (((safe_rshift_func_uint16_t_u_u(((p_13 && (((safe_add_func_uint8_t_u_u(g_254, ((((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(0x2996, (l_797 = ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((((~(l_768 = (safe_rshift_func_uint16_t_u_s(g_340, 13)))) , (((safe_rshift_func_int16_t_s_s(((p_9 , l_769) != (!(((l_769 < ((g_153 = (((safe_rshift_func_int8_t_s_s((l_796 = g_340), p_12)) | l_769) | p_9)) >= 0x9D73)) , 5) && l_759))), p_10)) && 0xB7) == p_9)) <= l_769), 11)) >= p_9), p_11)) ^ g_126)))) | 0x133D56AE), 8)) | 0x4B) <= l_759) , 0x11))) && 3) && 0U)) < l_759), l_759)) >= 0x26D6) < 0x2B7A)) , 0) != g_254)) ^ g_211)))) == g_306)))) | 0xAE2C) , l_797);
        for (l_797 = 17; (l_797 < (-4)); --l_797)
        {
            return g_126;
        }
        for (g_798 = 0; (g_798 > 28); g_798 = safe_add_func_uint16_t_u_u(g_798, 1))
        {
            uint16_t l_805 = 65526U;
            uint32_t l_808 = 0x9C0E78D2;
            int32_t l_811 = 0x22350376;
            int32_t l_812 = 0xC7DE7D91;
            l_812 = (safe_lshift_func_uint8_t_u_s((l_805 , (g_212 , (((((l_768 || (((((safe_mod_func_int32_t_s_s((((l_808 = l_796) , g_306) <= (((g_126 || ((safe_rshift_func_int8_t_s_u(p_10, (l_811 = 0U))) != l_805)) && p_13) != g_153)), l_769)) | 0xB9) , 0x88256CE3) >= l_805) , 9U)) == 0xD75CD16D) != l_768) > p_10) ^ l_805))), 7));
        }
    }
    else
    {
        int32_t l_819 = 0;
        int32_t l_832 = 0x235C4468;
        g_83 = (safe_lshift_func_int8_t_s_u(0, 7));
        l_832 = ((((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_819 = 0x88), l_797)), (safe_rshift_func_int16_t_s_u(((!0x39AC) && (((l_823 >= (((g_211 & ((g_798 = (p_13 , (safe_sub_func_int16_t_s_s(0x9AFC, (~(((safe_add_func_uint16_t_u_u(l_829, (g_254 = (((safe_add_func_uint8_t_u_u(l_823, l_832)) & l_823) > l_797)))) == p_12) >= l_768)))))) , l_768)) == p_11) && 0x41)) || 9) , l_832)), 8)))) | 1) || p_11) & l_832);
    }
    return p_9;
}
inline static int8_t func_15(uint32_t p_16, uint32_t p_17, uint32_t p_18, uint8_t p_19, uint32_t p_20)
{
    uint16_t l_714 = 0x6751;
    int32_t l_717 = (-3);
    int32_t l_722 = 0x71E9C708;
    int32_t l_723 = 0x75A922C9;
    int32_t l_724 = 0;
    uint32_t l_749 = 4294967295U;
    int32_t l_750 = 0xE1E9FD62;
    g_83 = (safe_lshift_func_int8_t_s_u((g_211 = ((safe_sub_func_int16_t_s_s((p_20 != (safe_lshift_func_uint16_t_u_u(((l_714 = (g_484 < g_153)) != ((((((safe_mod_func_int16_t_s_s((l_717 , (l_717 = (+l_717))), ((-8) ^ (g_306 = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((l_723 = (((p_19 = (l_722 = (((g_254 = l_722) , p_16) ^ g_211))) > l_723) == g_83)))), 7)))))) , 3) > 0) , l_723) >= 0xAAFF28D7) , (-1))), l_724))), g_71)) >= 0x00A445D6)), 3));
    l_724 = (0xBA != (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((l_723 && (safe_lshift_func_uint8_t_u_s(((~((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((1U & (safe_mod_func_uint8_t_u_u((p_20 <= ((g_71 , ((((g_71 = (safe_lshift_func_int8_t_s_s((((g_352 & (((l_717 ^ (l_722 = ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((((+p_16) <= (0x7AD649C5 >= p_16)) | p_18) < p_19) , l_749), 2)), p_19)), p_18)) & p_20))) | l_724) < g_126)) == g_264) <= (-1)), 0))) , 2U) , 0x26840EE6) > p_16)) <= l_714)), l_750))) , p_16), g_83)), g_446)) && 0x7B7233C4), p_20)) ^ 65529U)) , 252U), l_714))), g_360)) , 5U), l_723)));
    return p_17;
}
static int32_t func_24(int16_t p_25, uint16_t p_26, int16_t p_27, uint32_t p_28, uint8_t p_29)
{
    uint16_t l_33 = 9U;
    int32_t l_131 = (-7);
    int32_t l_690 = (-6);
    int8_t l_691 = 0x77;
    int16_t l_692 = 0x1EAC;
    int32_t l_702 = 0xDF50196C;
    int16_t l_707 = (-10);
    l_692 = (l_691 = ((g_2 , p_26) || ((((l_690 = func_30(l_33, (safe_mod_func_int8_t_s_s(func_36((l_33 >= ((p_25 , l_33) <= (l_131 = ((safe_rshift_func_int8_t_s_u(p_28, func_41((func_46((func_50(g_2, p_29, g_2) ^ 3U), g_2, l_33) , (-2)), p_25, g_2, g_2))) || g_126)))), g_2), 2)))) > g_2) > g_2) , p_28)));
    g_83 = ((((safe_lshift_func_int8_t_s_u((~(safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(p_29, p_27)) > ((-6) > (((((((l_702 | 0xDC0E4C0A) && (g_71 = g_71)) || (1U == (safe_lshift_func_int16_t_s_u((p_25 = 1), 9)))) >= (((((safe_lshift_func_int16_t_s_u(((l_707 ^ g_306) >= p_26), l_692)) , 0x38454A4D) && p_26) >= 7U) && p_26)) <= 0x4E13) , p_27) && 0xAF30))) < 246U), 0xFD)), 4294967290U))), g_181)) && l_702) <= 0x4A7FEDD1) , l_131);
    g_264 = 0xB21CB217;
    return g_127;
}
static int32_t func_30(int32_t p_31, uint32_t p_32)
{
    uint32_t l_592 = 4294967295U;
    int32_t l_622 = 0x0061209B;
    int32_t l_644 = 0x960AF9E2;
    int32_t l_645 = 8;
    int16_t l_667 = 0xDA91;
    g_83 = l_592;
    if (g_102)
    {
        uint32_t l_593 = 1U;
        int32_t l_623 = 0x352BCF8A;
        int16_t l_639 = 0x6E39;
        int32_t l_669 = 0x8E30B55C;
        uint32_t l_670 = 4294967289U;
        if (l_593)
        {
            int32_t l_619 = 3;
            for (l_593 = 26; (l_593 >= 56); l_593 = safe_add_func_uint8_t_u_u(l_593, 7))
            {
                uint32_t l_600 = 0x9E2B7C94;
                int32_t l_601 = 0;
                int32_t l_620 = 0;
                int8_t l_621 = 8;
                g_264 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(p_31, (l_601 = ((p_32 = (l_600 = (0xC92CF7FC || 0))) | p_31)))), 0));
                l_623 = ((g_71 = (safe_add_func_int16_t_s_s((l_622 = (p_31 || ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int8_t_s(g_71)) , ((safe_sub_func_int32_t_s_s(p_32, (safe_sub_func_int32_t_s_s(g_2, (7U < ((safe_lshift_func_int16_t_s_u(((l_601 = ((safe_rshift_func_int8_t_s_u(((l_620 = (safe_mod_func_uint16_t_u_u(7U, (p_32 || (((((safe_add_func_int8_t_s_s(g_212, ((p_31 | l_593) | p_32))) , p_32) | g_360) == g_153) != l_619))))) >= l_621), p_31)) != 0U)) != 2U), p_32)) < g_340)))))) >= 0x1DC6E4EA)), 3)) | p_32))), g_484))) || g_352);
            }
        }
        else
        {
            uint8_t l_646 = 4U;
            int32_t l_666 = 5;
            int32_t l_668 = 1;
            int32_t l_671 = 0x4BD02528;
            p_31 = 0xD30F8C35;
            l_622 = (((((safe_rshift_func_uint8_t_u_u(g_211, 5)) , (((g_360 , (safe_unary_minus_func_int16_t_s(l_623))) && (safe_lshift_func_uint8_t_u_s(((p_32 > (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_622 == (safe_mod_func_int32_t_s_s((g_212 , ((safe_rshift_func_uint16_t_u_u(l_622, 6)) == ((l_623 = ((safe_lshift_func_uint16_t_u_s(l_639, 15)) == (g_211 = ((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((l_645 = (l_644 = p_32)), g_360)), l_646)) ^ p_31) >= 0) || g_352)))) , g_126))), 0xF84B74EB))), 0x3853B71C)), 1))) , 246U), 5))) ^ p_32)) == p_32) & 3U) | l_592);
            l_671 = ((l_592 && (((((l_645 && 0x7F03) , (!(safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s((~(safe_sub_func_int8_t_s_s(g_254, ((l_668 = (safe_mod_func_int32_t_s_s((((!(((safe_rshift_func_int16_t_s_s((l_623 != (safe_add_func_int32_t_s_s((l_623 <= (safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((l_666 = (-3)), p_31)) >= 4294967293U), p_31))), g_153))), 15)) ^ l_667) < 0x661B)) | l_645) && l_623), p_31))) , p_32)))), l_669)) != 1U) || l_670), g_153)))) || g_126) | l_639) && (-1))) == l_623);
        }
    }
    else
    {
        g_127 = (-7);
    }
    l_645 = (safe_rshift_func_int8_t_s_u((g_83 < (l_622 = ((p_32 | (safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((((((((l_645 ^ (((((((g_446 , p_32) & (p_31 = (!(0x97 ^ (+4U))))) >= (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((l_644 = l_644) <= (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_32, p_32)) & g_340), p_32))), l_622)), (-10))) != 0xD3F6), 10))) > g_126) || 4294967295U) < g_212) < 0x84)) ^ g_360) && p_31) == (-1)) >= g_211) , p_31) && p_31) < l_667), l_592)) != 0xA803) , l_667), l_592))) , 0x41))), 5));
    return l_622;
}
inline static int8_t func_36(uint32_t p_37, uint32_t p_38)
{
    int32_t l_136 = 9;
    int32_t l_139 = 0x88D6DCB7;
    int16_t l_380 = (-7);
    uint32_t l_388 = 0x02855B81;
    int8_t l_398 = 0xCF;
    int32_t l_527 = 8;
    uint32_t l_542 = 1U;
    for (g_102 = 0; (g_102 > 31); g_102 = safe_add_func_int32_t_s_s(g_102, 8))
    {
        uint32_t l_152 = 0x8F6EEC55;
        int32_t l_215 = 0x9429D60E;
        int32_t l_265 = 1;
        int32_t l_361 = (-1);
        uint16_t l_405 = 0x8D80;
        uint32_t l_455 = 4294967287U;
        uint16_t l_503 = 7U;
        uint32_t l_526 = 1U;
        int8_t l_577 = 0;
        int16_t l_582 = 0xDB0A;
        if ((safe_rshift_func_uint16_t_u_u(((g_83 = l_136) >= (-5)), ((((l_139 = (3 ^ (safe_rshift_func_int16_t_s_u(g_2, 9)))) < (g_153 = (safe_sub_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((0xE041 & (safe_lshift_func_uint8_t_u_u(0xE3, 6))), (safe_mod_func_int32_t_s_s(((p_38 == (1 >= ((((safe_mod_func_uint32_t_u_u(4294967292U, (-1))) >= 0xE733) , 1U) >= g_126))) == p_37), 0xFAF2A49C)))) < l_152) >= p_38), l_136)))) , (-3)) < p_37))))
        {
            uint8_t l_168 = 0x46;
            int32_t l_177 = 0x52A06A2A;
            int32_t l_179 = 0xEBDD0841;
            int32_t l_253 = 0x7AE741E8;
            for (g_127 = 20; (g_127 >= 7); --g_127)
            {
                int16_t l_176 = 0xBC48;
                int32_t l_180 = 0x596B175D;
                int8_t l_230 = 0x90;
                if (((((g_181 = (safe_lshift_func_uint8_t_u_u(l_152, (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_180 = (l_179 = (((((g_71 , p_37) && 5U) != (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u(((g_126 >= (+(g_178 = (safe_add_func_int8_t_s_s((l_168 = (-3)), ((safe_rshift_func_uint8_t_u_u((l_177 = (safe_mod_func_uint16_t_u_u((+(safe_rshift_func_uint16_t_u_u(g_102, 3))), (((1 <= 0xFC) | l_176) | 1)))), 2)) <= l_176)))))) >= p_38), 1))))) >= p_37) < 1U))), g_153)) && 0xB9AC0673), 0xADDD))))) >= 0xC00B44CA) != 0xE94A) > p_37))
                {
                    int8_t l_213 = 0;
                    int32_t l_214 = 0xB318C588;
                    int32_t l_216 = 0;
                    int32_t l_217 = 0xEDFB4805;
                    l_217 = (0U != ((g_181 = (((g_153 = l_139) != (+(safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((+1U), (l_216 = (((((((l_179 | (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int8_t_s_s((p_38 <= (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((l_214 = (((((safe_mod_func_uint8_t_u_u(((((0x0EBF || ((((safe_sub_func_uint16_t_u_u(((((g_83 & (safe_sub_func_uint16_t_u_u((g_126 || g_71), 0))) >= p_38) < 0xF601) <= 0U), 65533U)) && g_211) | p_37) >= g_212)) , l_152) & l_213) && g_2), l_177)) , p_37) < 1) ^ 248U) >= l_213)) != 0x9F), p_37)) || l_152), 0xFD43EB6F)), 14)) && p_38), 0xA113))), p_37)) == l_215))), 11))) && 4294967295U) >= l_176) & g_178) == 0x833B9786) && p_38) && g_126)))) > g_126) <= p_37), 0xE9)), g_2)), 255U)))) != 0x6F50)) & g_178));
                }
                else
                {
                    uint32_t l_229 = 4294967295U;
                    int32_t l_231 = 0;
                    for (l_179 = 26; (l_179 == (-21)); l_179 = safe_sub_func_int8_t_s_s(l_179, 4))
                    {
                        int32_t l_237 = (-9);
                        int32_t l_248 = 0x4E57383A;
                        l_231 = (safe_add_func_int32_t_s_s(((g_153 = ((((l_177 = ((safe_sub_func_int32_t_s_s(((l_230 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((g_181 = g_71) | (((~g_83) | g_102) | (l_229 , ((0x88 || (l_176 && (l_136 = l_180))) >= p_37)))), ((-6) > l_139))), p_37))) , l_229), p_37)) ^ 0x4E25)) | g_83) && g_178) <= g_102)) ^ p_37), 0x3AEAE043));
                        l_215 = ((g_127 && ((safe_sub_func_int16_t_s_s((~((p_37 || ((g_211 = l_152) | (safe_mod_func_int8_t_s_s(p_37, l_237)))) | (l_139 = g_178))), ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((!((l_237 , ((p_38 < (safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_38, 4294967295U)), 0))))) != 7U)) != l_237)), 1U)), g_102)) > p_37))) > g_102)) && 0x91);
                        g_264 = ((l_248 = 0x70BE) , (safe_mod_func_uint32_t_u_u((((((((((-6) <= 0xD47E45A5) , (g_83 = (p_37 ^ ((0x20C098CB == (g_254 = (safe_rshift_func_int16_t_s_s(l_253, 3)))) > ((((safe_unary_minus_func_int32_t_s((((((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((g_71 || (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_212, g_126)), p_38))), l_176)), (-1))) <= 248U) && l_177) <= 1U) == l_176))) ^ g_102) , (-1)) <= l_139))))) | 0xD1CDC8FD) | l_168) >= 0xBA) ^ 0xD2) || 0x0141) ^ l_136), p_38)));
                        l_265 = (l_177 = 0xE1BAF481);
                    }
                    g_264 = (p_37 ^ l_253);
                    l_253 = g_83;
                    if (p_38)
                        continue;
                }
            }
            l_215 = 7;
            return p_38;
        }
        else
        {
            uint32_t l_270 = 0x0AEDE11C;
            int32_t l_288 = 0x9340F2FB;
            int16_t l_289 = 0x9A10;
            int8_t l_301 = (-1);
            int32_t l_363 = 3;
            uint8_t l_386 = 0x97;
            g_83 = (((0x68B81BE9 == (safe_mod_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(((l_270 , (safe_rshift_func_uint16_t_u_s(((l_215 = l_270) & (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((l_288 = (g_153 , (safe_lshift_func_uint8_t_u_s(((l_139 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((0U || g_83) != ((safe_mod_func_int16_t_s_s((-9), (safe_sub_func_int16_t_s_s((((0x7589 | ((safe_add_func_uint16_t_u_u(((((0x2DEF7D71 || p_37) , l_270) && g_178) && g_127), g_71)) , l_139)) <= l_270) ^ g_126), p_38)))) , g_126)), 0x77)), g_2))) < 7), g_71)))) ^ g_211))), p_38))), p_37))) , 0xBA), 0)) <= g_212) | 249U), l_289))) >= g_2) <= 4294967286U);
            if (l_139)
            {
                int32_t l_300 = 0;
                uint16_t l_307 = 0x5D1A;
                uint8_t l_316 = 0xE4;
                int8_t l_368 = 0x2B;
                int8_t l_381 = 0x6A;
                g_127 = (safe_mod_func_uint16_t_u_u(((p_38 || p_38) != ((((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(p_37, ((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_u(l_300, 2)) & g_254) <= l_301) <= (g_306 = (((safe_sub_func_uint16_t_u_u((l_288 = ((g_211 > (safe_sub_func_int16_t_s_s((l_300 , g_211), g_71))) & l_139)), 0x4616)) > g_127) <= 0x656A))), p_37)) <= l_307))), 0x926F4312)) | p_38) , g_2) | p_37)), g_102));
                for (p_38 = 0; (p_38 >= 8); p_38++)
                {
                    uint8_t l_321 = 0x47;
                    int32_t l_362 = 0x354CBC2A;
                    for (l_136 = 0; (l_136 < 11); ++l_136)
                    {
                        uint8_t l_322 = 4U;
                        g_127 = ((safe_sub_func_int16_t_s_s(g_2, ((0x53202F86 & l_289) >= ((safe_sub_func_uint16_t_u_u((g_254 != g_153), (((l_316 , l_307) || (safe_sub_func_uint32_t_u_u((0x531C != (((safe_unary_minus_func_uint32_t_u((((((~(((((p_38 , l_321) > g_2) <= l_307) | g_254) == 65531U)) == g_127) && l_139) , l_322) < p_37))) && 0x9794D5BF) || l_136)), l_307))) <= g_306))) , g_102)))) && 1U);
                    }
                    for (g_127 = 0; (g_127 != (-6)); g_127 = safe_sub_func_uint16_t_u_u(g_127, 6))
                    {
                        int8_t l_357 = 0x7E;
                        g_264 = (g_254 == ((g_212 = (!(((l_270 , 0x8C69) && (safe_mod_func_uint8_t_u_u((((g_340 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((65535U == ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((g_211 = ((safe_add_func_int8_t_s_s(g_102, (safe_sub_func_int16_t_s_s(p_37, 0x1C99)))) && l_265)), p_37)), 12)) < g_178)), g_181)), 9))) != 1U) != l_307), l_321))) & 251U))) == g_2));
                        l_362 = (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((+(p_38 , (((safe_rshift_func_int8_t_s_s(((((((safe_sub_func_uint32_t_u_u((g_352 = p_38), (-1))) >= ((safe_sub_func_uint16_t_u_u(((l_361 = (p_38 == (((((safe_add_func_uint32_t_u_u(((l_357 < (255U || (g_181 = ((safe_mod_func_uint8_t_u_u(247U, p_38)) < (0U <= l_300))))) != l_307), g_360)) < g_264) ^ l_357) | l_136) > g_178))) , l_357), (-1))) && l_136)) , l_215) || g_71) ^ l_265) && 0x13D1F3DB), g_2)) >= p_38) <= g_340))) | p_37), g_178)), l_321)), g_102)) < 1U) != l_152);
                        l_136 = ((l_362 = l_363) != l_316);
                    }
                    l_362 = ((safe_rshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(l_368, ((((l_288 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((l_139 = (((p_37 >= (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_38, l_152)), 2))) ^ l_362) || (g_153 = l_136))))), p_37))) , p_37) , ((((safe_sub_func_uint32_t_u_u(((((g_360 = (safe_add_func_uint16_t_u_u((((0x6F3C > l_362) && 0) < p_38), g_306))) || 1) > g_212) != g_264), l_380)) < l_362) || 0xC929) < l_300)) | l_381))) > g_211) != p_37), p_38)) != g_306);
                }
            }
            else
            {
                uint32_t l_387 = 6U;
                int32_t l_399 = 0x5C33FC11;
                g_127 = (safe_sub_func_uint8_t_u_u((l_363 = ((((safe_rshift_func_int16_t_s_s((((l_387 = l_386) | (((l_388 , ((4294967289U >= ((((safe_rshift_func_int16_t_s_s(((l_399 = (((p_37 == (safe_mod_func_uint8_t_u_u((l_361 > ((safe_unary_minus_func_uint16_t_u((g_2 , (p_38 > ((251U >= ((safe_add_func_uint32_t_u_u((g_211 < 0xE6), g_178)) != 0xF6DDA776)) ^ 0xAD))))) < l_398)), g_71))) || 0x87) , g_340)) , 0), p_38)) , 0xBB) < g_102) | g_212)) , 1U)) >= l_289) > p_38)) , 0), 10)) | l_289) != g_254) || p_38)), p_38));
            }
            if ((l_388 == ((safe_sub_func_uint16_t_u_u(((((l_361 = (safe_rshift_func_uint16_t_u_s((g_71 = 0U), 14))) & g_178) && 1) , ((((l_139 = 0xA78D98D9) , ((!p_38) & 2U)) >= p_38) == (p_38 , 9U))), l_405)) == g_306)))
            {
                int32_t l_421 = (-7);
                int32_t l_424 = 1;
                if ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((g_360 != (l_139 = ((l_405 >= 4U) > ((safe_mod_func_int32_t_s_s(l_363, ((0 | (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_37, ((safe_lshift_func_uint8_t_u_u(l_289, 1)) | g_178))), ((safe_rshift_func_uint16_t_u_s(((~(g_126 , g_153)) ^ p_38), 11)) || g_306)))) , 0x0104BB76))) == l_136)))) > g_212) , p_38), 0)) < p_37), l_421)))
                {
                    return p_38;
                }
                else
                {
                    uint32_t l_429 = 0xC1FB03A8;
                    int32_t l_430 = 0x4282519B;
                    l_424 = (safe_lshift_func_uint16_t_u_s((g_126 = l_380), 12));
                    l_288 = p_38;
                    if (g_264)
                        break;
                    g_83 = (~(((g_181 & (((((((!((((safe_rshift_func_uint16_t_u_u((g_153 & p_37), (g_306 || ((-2) ^ ((l_139 = ((((((((((p_37 & (l_429 = (246U || ((l_424 = l_215) >= (p_38 <= l_363))))) || p_38) || l_424) < 0x35B6) <= p_38) != g_211) && l_265) , 0x69) | 0) | p_38)) && 0xD14B))))) <= p_38) , (-9)) != p_37)) <= p_37) || g_102) >= l_430) , g_211) > l_361) != p_37)) , g_306) > g_306));
                }
            }
            else
            {
                int8_t l_433 = 0xFD;
                int32_t l_482 = 0x3C937039;
                uint32_t l_504 = 6U;
                int32_t l_578 = 0x42B074A6;
                for (l_265 = 0; (l_265 >= (-14)); --l_265)
                {
                    l_136 = (-1);
                    g_83 = (l_433 = (g_127 = 0xB6A51597));
                }
                for (l_380 = 0; (l_380 < 9); l_380 = safe_add_func_uint8_t_u_u(l_380, 3))
                {
                    uint8_t l_458 = 1U;
                    uint8_t l_464 = 0x82;
                    uint16_t l_483 = 65535U;
                    if (g_127)
                        break;
                    if (p_38)
                    {
                        l_458 = ((safe_mod_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(((g_83 , (safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((g_127 = p_38), (g_446 = (l_388 != (safe_lshift_func_uint16_t_u_s((g_71 = 65535U), 2)))))) , (((safe_mod_func_uint8_t_u_u((g_360 = (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((p_38 >= ((l_270 , ((((l_363 = (safe_lshift_func_int8_t_s_s((65529U > ((l_455 , (safe_add_func_int8_t_s_s(((3 && p_37) > 0x12836B3A), p_37))) , 65535U)), g_127))) == 0x9091) != g_83) | g_71)) && p_38)), 1)), l_398))), g_102)) | p_37) & g_71)), 0x35))) || 1U), 0x48041978)) & g_178) ^ 0x0D41F283), p_38)) != (-10));
                    }
                    else
                    {
                        int16_t l_481 = 4;
                        l_139 = (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_458, (safe_unary_minus_func_uint32_t_u((l_464 = g_178))))), p_38));
                        g_264 = (0xAF9661FE >= (g_484 = ((g_340 = g_360) >= (g_352 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(0x164F34E5, ((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((((l_482 = (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(l_136, (p_38 ^ (((safe_add_func_uint32_t_u_u(((p_38 , g_83) >= l_481), l_464)) != 1U) > g_264)))), g_181))) && 251U) <= 250U) <= l_483) ^ g_360), g_102)), p_37)), g_254)) <= l_388))), g_178)) <= g_306)))));
                    }
                    if (p_38)
                        break;
                    for (l_363 = 24; (l_363 != (-6)); --l_363)
                    {
                        return l_288;
                    }
                }
                g_264 = ((((((l_503 = (safe_lshift_func_int16_t_s_u(((!0) > (l_215 = ((g_153 <= (((safe_sub_func_int16_t_s_s(((p_38 | (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((((safe_add_func_uint32_t_u_u(l_136, (~p_38))) | (safe_lshift_func_uint8_t_u_s(p_38, (l_136 != (l_139 = (l_398 , 0U)))))) , g_102) == l_398) == (-3)), 4)) & g_340), l_405))) < p_37), g_211)) != (-1)) ^ 5)) , l_398))), 13))) == l_504) && 0x206E4477) ^ l_388) < g_102) && g_102);
                for (l_139 = 16; (l_139 == (-6)); l_139 = safe_sub_func_int16_t_s_s(l_139, 7))
                {
                    uint32_t l_525 = 0U;
                    int32_t l_579 = 0;
                    g_83 = 0x192F1295;
                    l_527 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(7, ((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((l_361 = ((g_178 , g_306) | (safe_lshift_func_int16_t_s_u((((g_126 = (((((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((5U >= (safe_add_func_int32_t_s_s(((l_288 = (safe_rshift_func_uint16_t_u_u(65535U, ((((((((l_136 = (p_38 < g_254)) && p_38) & p_37) <= p_38) >= 0) && l_525) != 0x798C) & g_2)))) <= p_37), l_433))) , g_254), g_83)), 1U)) > g_264) & (-2)) > 0xC6E5) , 1U)) | p_37) >= 0x57), p_37)))) ^ l_526) == g_352), l_388)), l_388)) , g_484))), l_386));
                    if ((l_288 = ((((safe_add_func_int32_t_s_s(p_37, (g_126 < (l_215 = g_178)))) < 0x3379) < (l_363 = 0x6A)) == (g_254 <= (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_352 >= 0U), 4)), g_127)), 0x8B)) & 4U) >= l_139), 1)), l_270)), g_2))))))
                    {
                        g_83 = (l_527 = (l_288 = l_542));
                    }
                    else
                    {
                        int16_t l_550 = 0xAA9E;
                        g_264 = (safe_add_func_int8_t_s_s((0xF000EBF2 >= ((!0x71F5CE4D) || (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0U, 3)), (l_136 = (g_360 || l_550)))))), (g_254 & (+((((((l_215 = (((safe_sub_func_uint16_t_u_u(l_139, ((safe_mod_func_uint32_t_u_u((((0U | (-1)) & (-4)) >= g_340), 4294967288U)) >= g_83))) ^ 1U) >= (-1))) != g_352) ^ 4294967289U) , (-1)) , l_139) == 4U)))));
                        l_579 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((p_38 & ((safe_add_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((!(l_288 = (safe_lshift_func_uint8_t_u_s(((p_38 != (l_482 = (l_455 && 4294967289U))) | (p_38 <= (((safe_rshift_func_int8_t_s_u((p_37 , (((l_363 = ((((0x0AD4 & (((g_264 = (-1)) == (safe_lshift_func_uint8_t_u_s((((((safe_rshift_func_uint8_t_u_u((p_38 < l_577), p_37)) ^ 0) == g_340) && g_484) < g_178), g_306))) > 1U)) || l_550) >= g_340) ^ g_71)) <= g_211) , 1)), l_550)) != l_526) , l_578))), 5)))), p_37)), l_270)) > l_289) > 6U), 0xA1D9EA86)) || l_578)) & l_525) > g_352), 0x84D5)), l_550));
                    }
                    l_579 = 0xD03E43B5;
                }
            }
        }
        g_264 = (safe_sub_func_uint8_t_u_u((l_136 || (1U >= (l_582 , l_139))), (g_254 , p_37)));
        g_264 = (g_83 , (safe_mod_func_uint8_t_u_u((g_181 = (l_139 = 246U)), (((g_71 != (safe_lshift_func_uint8_t_u_u((!(p_38 >= (g_126 = 65535U))), ((safe_rshift_func_uint16_t_u_u((l_361 = ((!p_38) , l_398)), 14)) == ((((((+(0x97 && p_38)) , 0x78A989C9) <= 4294967294U) <= g_484) > l_398) != 8U))))) , 0x97) && l_526))));
    }
    l_139 = g_211;
    return g_153;
}
inline static uint8_t func_41(int32_t p_42, int8_t p_43, int16_t p_44, uint32_t p_45)
{
    int16_t l_124 = 0x20E7;
    int32_t l_125 = 0x38C74B55;
    for (p_43 = 0; (p_43 >= (-21)); p_43--)
    {
        int8_t l_123 = 0x2B;
        g_83 = ((g_127 = (((((g_2 , (g_71 , (safe_sub_func_int8_t_s_s(((g_126 = (l_125 = (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_83, ((safe_sub_func_uint16_t_u_u(1U, ((g_71 > (((l_123 = 0x29) , l_124) & g_102)) > g_102))) != p_42))), 0x607BBC66)))) && p_42), p_45)))) != p_43) > p_43) , 249U) | p_42)) , g_102);
        g_83 = ((~p_45) , ((!0xD9) <= (!l_124)));
    }
    return l_125;
}
static int8_t func_46(uint32_t p_47, int32_t p_48, uint16_t p_49)
{
    uint32_t l_103 = 0xAEB5978F;
    int32_t l_110 = 0x120B1A55;
    int32_t l_111 = 0xF203748A;
    int32_t l_112 = 5;
    l_112 = ((0xFED4114A == ((l_103 == (p_49 = (0x9037 != ((247U == 9U) > (-1))))) < (((safe_rshift_func_uint8_t_u_s(g_71, 4)) >= (l_111 = ((l_110 = (g_2 != ((((safe_lshift_func_int8_t_s_s((-10), g_83)) , p_48) != l_103) > 0))) != l_103))) == 0xD0F3))) && l_110);
    return p_47;
}
static int16_t func_50(uint8_t p_51, int16_t p_52, uint32_t p_53)
{
    uint32_t l_57 = 7U;
    int32_t l_67 = (-1);
    uint32_t l_70 = 0xA7276463;
    int32_t l_100 = 1;
    uint8_t l_101 = 0U;
    g_71 = (safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_uint16_t_u((l_57 ^ (!l_57)))) ^ ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((g_2 <= ((safe_lshift_func_int16_t_s_s(((p_53 = 9U) >= (safe_sub_func_int32_t_s_s((-2), (0x82 != p_52)))), 4)) >= (l_67 = 0U))), 7)) >= (safe_lshift_func_uint16_t_u_s(((p_51 == 0) || l_70), l_57))), 0xBD)) , 3U)) && l_57), 14));
    g_102 = (safe_mod_func_uint16_t_u_u((g_71 >= (((l_100 = (+((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(p_52, (safe_rshift_func_uint8_t_u_s((g_83 = (safe_rshift_func_uint8_t_u_u(0xFF, 5))), ((((((((safe_lshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s(p_51, (((3 < (safe_sub_func_uint16_t_u_u(((((((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_51, (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((l_70 != ((safe_mod_func_int16_t_s_s(0, (((l_67 = g_2) != 0) | p_51))) <= p_51)), g_2)), l_100)))), g_2)) , l_101) == p_52) ^ g_71) ^ 4) | 0x77), l_70))) ^ g_2) , g_2))) >= g_71) || l_67), p_53)) == 0xC79E) , 7) || (-5)) < l_57) , 0xF440) , p_52) && p_51))))), p_53)) <= l_70))) <= g_71) , 0x4C)), l_57));
    return l_57;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_71;
    csmith_sink_ = g_83;
    csmith_sink_ = g_102;
    csmith_sink_ = g_126;
    csmith_sink_ = g_127;
    csmith_sink_ = g_153;
    csmith_sink_ = g_178;
    csmith_sink_ = g_181;
    csmith_sink_ = g_211;
    csmith_sink_ = g_212;
    csmith_sink_ = g_254;
    csmith_sink_ = g_264;
    csmith_sink_ = g_306;
    csmith_sink_ = g_340;
    csmith_sink_ = g_352;
    csmith_sink_ = g_360;
    csmith_sink_ = g_446;
    csmith_sink_ = g_484;
    csmith_sink_ = g_798;
    csmith_sink_ = g_951;
    csmith_sink_ = g_987;
    csmith_sink_ = g_1035;
    csmith_sink_ = g_1088;
    platform_main_end(0,0);
    return 0;
}
