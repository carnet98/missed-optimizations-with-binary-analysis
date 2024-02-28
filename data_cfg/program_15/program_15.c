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

volatile uint32_t csmith_sink_ = 0;
static long __undefined;
static uint32_t g_2 = 0x439BEB06L;
static int32_t g_4 = 4L;
static int32_t g_6 = 0x24CDB8FAL;
static int32_t g_60 = 1L;
static int32_t g_62 = (-1L);
static int32_t g_63 = 0x7E526954L;
static uint8_t g_88 = 0xBDL;
static int16_t g_107 = 0L;
static int16_t g_110 = (-10L);
static int16_t g_113 = 1L;
static int8_t g_130 = 0x48L;
static int16_t g_193 = (-1L);
static int16_t g_211 = 0L;
static uint32_t g_222 = 4294967295UL;
static uint16_t g_248 = 0x3BFFL;
static uint32_t g_311 = 4294967295UL;
static int32_t *g_313 = &g_63;
static int32_t **g_312 = &g_313;
static int16_t *g_321 = &g_193;
static int32_t g_340 = 3L;
static uint32_t g_344 = 1UL;
static uint8_t g_362 = 0x57L;
static int32_t ****g_381 = (void*)0;
static int16_t g_384 = 0xD3ACL;
static int32_t g_394 = 0xB8AD097FL;
static int32_t *g_435 = &g_394;
static int32_t **g_434 = &g_435;
static int32_t ***g_433 = &g_434;
static int32_t ****g_432 = &g_433;
static int32_t ***g_453 = &g_312;
static int32_t ****g_452 = &g_453;
static int32_t g_602 = (-7L);
static uint8_t g_603 = 0x3AL;
static uint32_t g_648 = 0xB0789C41L;
static uint32_t g_718 = 0x2FBA3647L;
static int32_t g_846 = 1L;
static int8_t g_869 = 0x56L;
static int32_t g_984 = 1L;
static uint16_t g_995 = 4UL;
static uint16_t g_1134 = 0UL;
static int32_t ***g_1137 = &g_434;
static uint16_t func_1(void);
inline static int16_t func_7(int32_t * p_8, uint32_t p_9, int32_t p_10, uint16_t p_11);
inline static int8_t func_15(int32_t * p_16, int32_t * p_17);
inline static int32_t * func_18(int8_t p_19, int32_t * p_20, int32_t * p_21);
inline static uint32_t func_29(int32_t p_30, uint32_t p_31);
static uint8_t func_34(int32_t p_35, uint8_t p_36);
static uint8_t func_41(int32_t * p_42, int32_t * p_43, uint32_t p_44, uint8_t p_45, int16_t p_46);
static int32_t * func_47(int32_t p_48, int32_t p_49, int32_t p_50, int16_t p_51);
inline static int16_t func_71(uint8_t p_72, uint8_t p_73);
inline static uint8_t func_74(int16_t p_75, int32_t p_76);
static uint16_t func_1(void)
{
    int32_t *l_3 = &g_4;
    int32_t *l_5 = &g_6;
    int32_t *l_12 = &g_6;
    int32_t l_58 = 7L;
    int32_t *l_59 = &g_60;
    uint32_t *l_493 = &g_311;
    (*l_5) |= ((*l_3) &= (g_2 & 0xDC4BL));
    (*l_5) = (func_7(l_12, g_6, g_2, (safe_lshift_func_int8_t_s_s(func_15(func_18((safe_mod_func_uint32_t_u_u(((*l_493) = ((safe_rshift_func_int16_t_s_u(((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u(((g_2 , g_6) >= (func_29((((safe_add_func_int8_t_s_s((*l_12), func_34((*l_12), (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(func_41(func_47((*l_12), ((*l_59) = (safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u(((0x3933B839L & (*l_12)) | g_2), 6)) , 0x6496L) , 0L), l_58)) >= g_2), (*l_12)))), g_4, g_6), &l_58, (*l_12), g_63, (*l_5)), 0UL)) >= g_2), (-1L)))))) < (*l_12)) != (*g_321)), (*l_5)) ^ (*l_5))), g_340)))) <= g_311) >= (*l_12)) , (-8L)), 10)) >= 253UL)), (*l_12))), (*g_434), l_493), l_493), g_384))) > (*l_12));
    ((void) sizeof ((g_312 == 0) ? 1 : 0), __extension__ ({ if (g_312 == 0) ; else __assert_fail ("g_312 == 0", "/tmp/tmpages6djd.c", 91, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_381 == &g_433 || g_381 == 0) ? 1 : 0), __extension__ ({ if (g_381 == &g_433 || g_381 == 0) ; else __assert_fail ("g_381 == &g_433 || g_381 == 0", "/tmp/tmpages6djd.c", 92, __extension__ __PRETTY_FUNCTION__); }));
    return g_846;
}
inline static int16_t func_7(int32_t * p_8, uint32_t p_9, int32_t p_10, uint16_t p_11)
{
    int32_t *****l_741 = &g_432;
    int32_t l_774 = 0L;
    int32_t ****l_781 = &g_453;
    int32_t l_819 = 0x56A33163L;
    int32_t l_873 = 0x86C48280L;
    uint16_t l_999 = 65532UL;
    uint8_t *l_1028 = &g_362;
    uint32_t *l_1045 = &g_344;
    uint32_t l_1047 = 0x0F3FDD34L;
    int32_t *l_1048 = (void*)0;
    int32_t *l_1049 = &g_602;
    int32_t *l_1050 = &l_774;
    int32_t *l_1051 = (void*)0;
    int32_t *l_1052 = &g_6;
    int32_t *l_1053 = &g_4;
    int32_t *l_1054 = (void*)0;
    int32_t *l_1055 = (void*)0;
    int32_t *l_1056 = &l_774;
    int32_t *l_1057 = &l_873;
    int32_t *l_1058 = &g_62;
    int32_t *l_1059 = &g_602;
    int32_t *l_1060 = &l_774;
    int32_t *l_1061 = &g_62;
    int32_t *l_1062 = (void*)0;
    int32_t *l_1063 = &l_873;
    int32_t *l_1064 = (void*)0;
    int32_t *l_1065 = &g_4;
    int32_t *l_1066 = &g_602;
    int32_t *l_1067 = &g_984;
    int32_t l_1068 = 6L;
    int32_t *l_1069 = &l_819;
    int32_t *l_1070 = &g_6;
    int32_t *l_1071 = &g_6;
    int32_t *l_1072 = &l_774;
    int32_t l_1073 = 0x6B80C1C8L;
    int32_t *l_1074 = &l_819;
    int32_t *l_1075 = &g_62;
    int32_t *l_1076 = &g_394;
    int32_t *l_1077 = (void*)0;
    int32_t *l_1078 = &l_819;
    int32_t *l_1079 = &l_774;
    int32_t *l_1080 = &l_1073;
    int32_t *l_1081 = (void*)0;
    int32_t *l_1082 = (void*)0;
    int32_t *l_1083 = &g_62;
    int32_t *l_1084 = &g_4;
    int32_t *l_1085 = (void*)0;
    int32_t *l_1086 = &l_774;
    int32_t *l_1087 = (void*)0;
    int32_t *l_1088 = &l_1068;
    int32_t *l_1089 = &l_774;
    int32_t *l_1090 = &g_984;
    int32_t *l_1091 = (void*)0;
    int32_t *l_1092 = &l_1073;
    int32_t *l_1093 = &l_1068;
    int32_t l_1094 = 0xE04CCD91L;
    int32_t *l_1095 = &l_1094;
    int32_t *l_1096 = &g_4;
    int32_t *l_1097 = &g_62;
    int32_t *l_1098 = &g_62;
    int32_t *l_1099 = &g_984;
    int32_t *l_1100 = &l_873;
    int32_t *l_1101 = (void*)0;
    int32_t *l_1102 = (void*)0;
    int32_t *l_1103 = &g_984;
    int32_t *l_1104 = &l_873;
    int32_t *l_1105 = &g_6;
    int32_t *l_1106 = &l_1068;
    int32_t *l_1107 = (void*)0;
    int32_t l_1108 = 0x5CBCBA06L;
    int32_t *l_1109 = &g_6;
    int32_t *l_1110 = &l_873;
    int32_t *l_1111 = (void*)0;
    int32_t *l_1112 = &g_6;
    int32_t *l_1113 = (void*)0;
    int32_t *l_1114 = &l_1073;
    int32_t *l_1115 = &l_774;
    int32_t *l_1116 = &l_774;
    int32_t *l_1117 = &l_1094;
    int32_t *l_1118 = &g_4;
    int32_t *l_1119 = &g_394;
    int32_t *l_1120 = (void*)0;
    int32_t l_1121 = 2L;
    int32_t *l_1122 = (void*)0;
    int32_t l_1123 = 1L;
    int32_t l_1124 = 1L;
    int32_t *l_1125 = &l_1108;
    int32_t *l_1126 = (void*)0;
    int32_t *l_1127 = &l_1123;
    int32_t *l_1128 = (void*)0;
    int32_t *l_1129 = &g_984;
    int32_t *l_1130 = &g_62;
    int32_t *l_1131 = &l_1068;
    int32_t *l_1132 = (void*)0;
    int32_t *l_1133 = (void*)0;
    for (g_107 = 23; (g_107 == 10); g_107 = safe_sub_func_int32_t_s_s(g_107, 6))
    {
        uint32_t l_738 = 9UL;
        uint32_t l_748 = 0x47009E8EL;
        uint8_t *l_749 = &g_362;
        uint32_t l_750 = 0UL;
        uint8_t *l_751 = &g_603;
        uint16_t *l_752 = &g_248;
        int32_t *l_771 = (void*)0;
        int32_t l_773 = 0x3B61F78BL;
        int32_t l_854 = (-3L);
        int32_t **l_883 = &g_435;
        int16_t **l_887 = &g_321;
        int32_t ***l_1011 = &g_312;
        int32_t *****l_1029 = &g_432;
    }
    --g_1134;
    g_1137 = ((*g_432) = (**l_741));
    (***g_432) = &p_10;
    ((void) sizeof ((g_435 == &p_10) ? 1 : 0), __extension__ ({ if (g_435 == &p_10) ; else __assert_fail ("g_435 == &p_10", "/tmp/tmpages6djd.c", 220, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_321);
}
inline static int8_t func_15(int32_t * p_16, int32_t * p_17)
{
    return g_62;
}
inline static int32_t * func_18(int8_t p_19, int32_t * p_20, int32_t * p_21)
{
    uint8_t *l_499 = &g_362;
    int32_t **l_500 = (void*)0;
    int32_t *l_505 = &g_6;
    int32_t *****l_506 = &g_452;
    uint32_t l_556 = 0xBD9C6B66L;
    int32_t l_559 = 9L;
    int32_t l_577 = 0x362EB08AL;
    int32_t l_586 = 0x8090F0A7L;
    int32_t l_591 = (-9L);
    int32_t l_600 = 1L;
    uint16_t *l_727 = &g_248;
    uint32_t l_731 = 0x684B7401L;
    int32_t ****l_732 = &g_433;
    int32_t *****l_733 = &g_432;
    (*p_21) = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((~((*l_499) = 0x97L)), ((((*g_453) = l_500) == l_500) ^ ((p_19 < ((((safe_rshift_func_int8_t_s_u(0x25L, (((p_19 < ((((*g_321) = (-5L)) , ((safe_mod_func_int8_t_s_s((((((*g_434) = func_47(((g_60 , g_88) != 246UL), p_19, p_19, (*g_321))) == l_505) , l_506) != &g_452), (*l_505))) ^ p_19)) && 0xC6L)) , (void*)0) != (void*)0))) | (*l_505)) > g_311) , (*l_505))) ^ g_4)))), g_211));
    ((void) sizeof ((g_312 == 0) ? 1 : 0), __extension__ ({ if (g_312 == 0) ; else __assert_fail ("g_312 == 0", "/tmp/tmpages6djd.c", 261, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_435 == &g_6) ? 1 : 0), __extension__ ({ if (g_435 == &g_6) ; else __assert_fail ("g_435 == &g_6", "/tmp/tmpages6djd.c", 262, __extension__ __PRETTY_FUNCTION__); }));
    for (p_19 = 9; (p_19 == (-6)); p_19--)
    {
        int32_t **l_509 = &g_313;
        int32_t l_527 = 0x0E9C8482L;
        uint32_t l_528 = 0x47C410BDL;
        int32_t l_530 = 1L;
        int32_t l_592 = 0x41BF8B16L;
        int32_t l_599 = 0x766ECD9DL;
        int32_t ****l_626 = &g_433;
        int8_t *l_627 = &g_130;
        uint16_t *l_674 = (void*)0;
        uint16_t *l_725 = &g_248;
        if (((*p_21) = ((*p_21) || p_19)))
        {
            int32_t l_513 = 0L;
            int32_t l_526 = (-4L);
            int32_t **l_529 = &g_313;
            (*p_21) |= (((l_530 = (l_509 != ((((((((~(**g_434)) , p_19) > (safe_lshift_func_int8_t_s_s((l_513 , ((!g_113) & ((((safe_add_func_uint16_t_u_u((p_19 >= 4L), (safe_mul_func_uint8_t_u_u(((l_527 = ((l_526 |= (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((~(((safe_sub_func_int32_t_s_s((-1L), (((0x9D1F99BFL | l_513) || 0x5F8E6D0FL) ^ 0xE0BBF694L))) , g_2) ^ g_211)) , 0xD2L), g_113)) ^ g_362), 0x274EL))) >= g_222)) ^ 65527UL), 0xCBL)))) >= 1L) == g_63) <= g_88))), 6))) >= p_19) > (*l_505)) != p_19) || l_528) , l_529))) == g_110) <= p_19);
        }
        else
        {
            int32_t *l_531 = (void*)0;
            int32_t *l_532 = &l_527;
            int32_t *l_533 = (void*)0;
            int32_t *l_534 = (void*)0;
            int32_t *l_535 = &g_4;
            int32_t *l_536 = &l_527;
            int32_t *l_537 = &g_62;
            int32_t *l_538 = &g_394;
            int32_t *l_539 = &g_62;
            int32_t *l_540 = &l_530;
            int32_t *l_541 = &l_527;
            int32_t *l_542 = &g_4;
            int32_t *l_543 = (void*)0;
            int32_t *l_544 = (void*)0;
            int32_t *l_545 = &g_4;
            int32_t *l_546 = (void*)0;
            int32_t *l_547 = (void*)0;
            int32_t *l_548 = (void*)0;
            int32_t *l_549 = &g_4;
            int32_t *l_550 = &g_62;
            int32_t *l_551 = (void*)0;
            int32_t *l_552 = &l_530;
            int32_t *l_553 = (void*)0;
            int32_t *l_554 = &g_4;
            int32_t *l_555 = &l_530;
            int32_t *l_560 = &g_62;
            int32_t *l_561 = &l_527;
            int32_t *l_562 = &g_4;
            int32_t *l_563 = &g_4;
            int32_t l_564 = 0L;
            int32_t *l_565 = &g_4;
            int32_t *l_566 = &g_394;
            int32_t *l_567 = &l_559;
            int32_t *l_568 = &l_564;
            int32_t *l_569 = (void*)0;
            int32_t *l_570 = &g_394;
            int32_t *l_571 = &l_527;
            int32_t *l_572 = &g_394;
            int32_t *l_573 = &g_394;
            int32_t *l_574 = &l_564;
            int32_t *l_575 = &g_62;
            int32_t *l_576 = &g_62;
            int32_t *l_578 = &l_530;
            int32_t *l_579 = &g_394;
            int32_t *l_580 = (void*)0;
            int32_t *l_581 = (void*)0;
            int32_t *l_582 = &g_62;
            int32_t *l_583 = &g_62;
            int32_t *l_584 = &l_530;
            int32_t *l_585 = (void*)0;
            int32_t *l_587 = &g_394;
            int32_t *l_588 = (void*)0;
            int32_t *l_589 = &g_62;
            int32_t *l_590 = (void*)0;
            int32_t *l_593 = &l_592;
            int32_t *l_594 = (void*)0;
            int32_t *l_595 = (void*)0;
            int32_t *l_596 = (void*)0;
            int32_t *l_597 = &l_577;
            int32_t *l_598 = &l_527;
            int32_t *l_601 = &l_591;
            int32_t l_690 = 0x2DA26440L;
            l_556++;
            ++g_603;
            if ((*l_576))
            {
                int32_t ****l_625 = (void*)0;
                int32_t ****l_638 = &g_433;
                int8_t *l_640 = &g_130;
                int32_t l_686 = 0x72FE5FE7L;
                for (g_211 = 0; (g_211 == 13); g_211 = safe_add_func_int8_t_s_s(g_211, 1))
                {
                    uint32_t *l_608 = &l_528;
                    uint32_t *l_621 = &l_556;
                    uint32_t *l_622 = &g_222;
                    uint16_t *l_628 = &g_248;
                    int32_t l_637 = 0xDE11E3C6L;
                    int32_t *****l_639 = &g_381;
                    int8_t *l_641 = (void*)0;
                    int32_t l_642 = 0x6385F0BAL;
                    uint8_t l_643 = 255UL;
                    (*l_578) ^= (((((*l_608)--) == ((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s((*l_505), ((((((-8L) <= ((*l_628) ^= (0L && (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u((((*l_622) = ((*l_621) = 4294967287UL)) == (safe_mul_func_int16_t_s_s(0x68BDL, (g_107 <= (((*l_499) = (l_625 == l_626)) & (&p_19 == l_627)))))), 9)) , g_394), 10)) , g_222) ^ 251UL), 0))))) >= (*l_574)) && 0xE1676639L) >= 0x0F00340AL) >= 1UL))) > (*p_21)), 65535UL)) | p_19)) , p_19) == p_19);
                    if (((((((*l_628) = (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((*l_549) = (((safe_sub_func_uint32_t_u_u(((*l_608) = (l_637 ^= p_19)), ((void*)0 != (*g_434)))) <= ((*p_20) ^= ((l_626 != ((*l_639) = l_638)) >= (-9L)))) <= p_19)), (*l_505))) , ((l_641 = l_640) != &p_19)) , g_107), l_642)), g_113))) >= p_19) , (-1L)) , &g_88) != (void*)0))
                    {
                        return (*g_434);
                    }
                    else
                    {
                        (***g_381) = (*g_434);
                        ++l_643;
                    }
                    ((void) sizeof ((g_381 == &g_433) ? 1 : 0), __extension__ ({ if (g_381 == &g_433) ; else __assert_fail ("g_381 == &g_433", "/tmp/tmpages6djd.c", 378, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((l_641 == &g_130) ? 1 : 0), __extension__ ({ if (l_641 == &g_130) ; else __assert_fail ("l_641 == &g_130", "/tmp/tmpages6djd.c", 379, __extension__ __PRETTY_FUNCTION__); }));
                }
                for (g_193 = (-27); (g_193 < (-19)); g_193 = safe_add_func_uint8_t_u_u(g_193, 5))
                {
                    int16_t *l_662 = &g_107;
                    int32_t l_667 = 0x6C59E75CL;
                    (**g_433) = func_47(g_648, p_19, (l_667 = ((((((*p_21) >= ((safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((g_211 > (((g_222 &= ((safe_mul_func_uint8_t_u_u((((((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((!g_110) & ((void*)0 == l_662)), (((*g_321) , (safe_lshift_func_uint16_t_u_u(((((*l_662) ^= ((safe_sub_func_uint8_t_u_u(g_603, (****l_626))) < (*p_20))) | p_19) , p_19), p_19))) | (-6L)))) == 0xD57FL), 0xD632D0E1L)) && l_667) || (*l_505)) , 0x36337888L) , 0UL), 0x3DL)) > g_344)) & (****l_626)) , l_667)), g_311)), 4294967289UL)) , p_19) & (*g_321)), g_2)) , 4294967295UL)) > (*l_505)) > 0xA2FA2E92L) , 4294967294UL) >= 0x81D3EAD7L)), (*g_321));
                }
                for (g_222 = (-26); (g_222 == 5); g_222++)
                {
                    int32_t *****l_673 = &l_638;
                    uint32_t *l_683 = &g_648;
                    int32_t l_684 = 0xEE3B0AB7L;
                    int32_t *l_685 = &l_559;
                    int32_t *l_687 = &l_564;
                    int32_t *l_688 = (void*)0;
                    int32_t *l_689 = &g_4;
                    int32_t *l_691 = &l_591;
                    int32_t *l_692 = &l_577;
                    int32_t *l_693 = &l_599;
                    int32_t *l_694 = &l_686;
                    int32_t *l_695 = (void*)0;
                    int32_t *l_696 = &g_602;
                    int32_t *l_697 = &l_686;
                    int32_t *l_698 = &l_599;
                    int32_t *l_699 = &l_690;
                    int32_t *l_700 = &l_530;
                    int32_t *l_701 = &l_690;
                    int32_t *l_702 = (void*)0;
                    int32_t *l_703 = &l_527;
                    int32_t *l_704 = &l_690;
                    int32_t *l_705 = &l_690;
                    int32_t *l_706 = &g_602;
                    int32_t *l_707 = &l_684;
                    int32_t *l_708 = &g_602;
                    int32_t *l_709 = &l_592;
                    int32_t *l_710 = &l_684;
                    int32_t *l_711 = &l_690;
                    int32_t *l_712 = &l_564;
                    int32_t *l_713 = &l_599;
                    int32_t *l_714 = &l_599;
                    int32_t *l_715 = &l_686;
                    int32_t *l_716 = &l_530;
                    int32_t *l_717 = &l_577;
                    (*l_561) = ((safe_add_func_int32_t_s_s((*p_20), (!((((((-9L) > (((&g_433 != ((*l_673) = &g_433)) <= ((void*)0 == l_674)) | ((*l_554) = (safe_rshift_func_uint8_t_u_s(((-1L) | g_602), ((safe_add_func_int16_t_s_s(((((*l_683) = (((((*l_499) &= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((((*l_505) && (*p_20)) | (-10L)), 4294967293UL)), 4))) >= g_384) != (*l_505)) && 0x4CL)) & (*g_435)) > g_110), (*l_536))) || (*l_505))))))) == p_19) <= 0xF942CE0CL) , &l_505) != (void*)0)))) ^ (-1L));
                    ++g_718;
                }
            }
            else
            {
                uint16_t **l_726 = &l_674;
                int32_t l_730 = 0xF830DA3AL;
                (*l_582) = (safe_sub_func_int16_t_s_s(((((void*)0 == &l_528) & (*l_561)) <= (g_248 = ((((safe_lshift_func_uint8_t_u_s(g_384, 4)) , func_47((p_19 <= (((*l_726) = l_725) == l_727)), ((**l_509) = (*l_505)), ((+(l_730 = ((~(g_602 < p_19)) | 0xCE90L))) < 7UL), p_19)) == p_20) ^ (****g_432)))), (*g_321)));
                ((void) sizeof ((l_674 == &g_248) ? 1 : 0), __extension__ ({ if (l_674 == &g_248) ; else __assert_fail ("l_674 == &g_248", "/tmp/tmpages6djd.c", 433, __extension__ __PRETTY_FUNCTION__); }));
                (*l_561) = (*l_505);
                if ((*l_505))
                    break;
            }
            ((void) sizeof ((l_674 == &g_248 || l_674 == 0) ? 1 : 0), __extension__ ({ if (l_674 == &g_248 || l_674 == 0) ; else __assert_fail ("l_674 == &g_248 || l_674 == 0", "/tmp/tmpages6djd.c", 439, __extension__ __PRETTY_FUNCTION__); }));
            (**g_433) = (*g_434);
        }
        ((void) sizeof ((l_674 == &g_248 || l_674 == 0) ? 1 : 0), __extension__ ({ if (l_674 == &g_248 || l_674 == 0) ; else __assert_fail ("l_674 == &g_248 || l_674 == 0", "/tmp/tmpages6djd.c", 443, __extension__ __PRETTY_FUNCTION__); }));
        l_731 = (****l_626);
        (*p_21) |= 0L;
    }
    ((void) sizeof ((g_381 == &g_433 || g_381 == 0) ? 1 : 0), __extension__ ({ if (g_381 == &g_433 || g_381 == 0) ; else __assert_fail ("g_381 == &g_433 || g_381 == 0", "/tmp/tmpages6djd.c", 448, __extension__ __PRETTY_FUNCTION__); }));
    (*l_733) = l_732;
    return (**g_433);
}
inline static uint32_t func_29(int32_t p_30, uint32_t p_31)
{
    int32_t l_491 = (-1L);
    int32_t l_492 = 1L;
    l_492 = (+(+((*g_321) < (l_491 , 0x251EL))));
    return p_30;
}
static uint8_t func_34(int32_t p_35, uint8_t p_36)
{
    int16_t l_488 = 0L;
    for (g_62 = 2; (g_62 <= 27); g_62++)
    {
        uint32_t l_485 = 0xB21BB53AL;
        l_485++;
    }
    return l_488;
}
static uint8_t func_41(int32_t * p_42, int32_t * p_43, uint32_t p_44, uint8_t p_45, int16_t p_46)
{
    int32_t *l_65 = &g_6;
    int32_t **l_64 = &l_65;
    int16_t l_83 = (-1L);
    int32_t l_186 = 0x6B46617FL;
    int32_t l_189 = 0x9CA3844EL;
    int32_t l_200 = 0L;
    int32_t l_215 = 1L;
    int32_t *****l_414 = &g_381;
    int32_t **l_440 = &g_313;
    uint16_t *l_460 = (void*)0;
    uint16_t *l_461 = (void*)0;
    uint16_t *l_462 = &g_248;
    uint16_t l_473 = 0UL;
    int16_t **l_478 = (void*)0;
    int8_t *l_479 = &g_130;
    uint32_t l_480 = 0x19CB7C38L;
    uint32_t *l_481 = &g_344;
    int16_t l_482 = 0x5BEEL;
    (*l_64) = p_42;
    if ((safe_sub_func_uint8_t_u_u((((+0xD6326003L) | g_63) & (p_44 , (safe_mul_func_int16_t_s_s((func_71(func_74(((((((void*)0 == &g_60) || (safe_sub_func_uint16_t_u_u(p_44, (safe_sub_func_uint8_t_u_u(p_46, (((safe_sub_func_uint32_t_u_u(((((p_46 && (*p_43)) <= 0x13L) <= 0x77L) | (*l_65)), l_83)) , l_65) != l_65)))))) < (*l_65)) >= p_44) , 0L), p_46), (*l_65)) == (**l_64)), (**l_64))))), 0xBAL)))
    {
        int8_t l_210 = 2L;
        int32_t **l_249 = &l_65;
        int32_t l_310 = 0x170816E1L;
        int32_t l_339 = 9L;
        int32_t *l_375 = &l_310;
        int32_t ***l_441 = &g_312;
        int8_t *l_442 = &l_210;
        uint8_t l_451 = 1UL;
        int32_t *****l_454 = (void*)0;
        int32_t *****l_455 = &g_452;
        for (p_44 = 0; (p_44 <= 59); p_44++)
        {
            uint32_t l_239 = 0x2B385C65L;
            uint32_t l_331 = 0UL;
            int32_t l_335 = 0x741E85B1L;
            int32_t l_338 = 5L;
            uint32_t l_376 = 8UL;
            uint8_t l_403 = 1UL;
            for (g_130 = 0; (g_130 > (-27)); --g_130)
            {
                int32_t *l_174 = &g_4;
                int32_t *l_175 = (void*)0;
                int32_t *l_176 = &g_62;
                int32_t *l_177 = (void*)0;
                int32_t *l_178 = &g_4;
                int32_t *l_179 = &g_4;
                int32_t *l_180 = &g_62;
                int32_t *l_181 = &g_62;
                int32_t *l_182 = &g_62;
                int32_t l_183 = 0xEBDD5AF5L;
                int32_t *l_184 = &g_62;
                int32_t *l_185 = &g_62;
                int32_t *l_187 = &l_186;
                int32_t *l_188 = &l_183;
                int32_t *l_190 = &l_183;
                int32_t *l_191 = &g_62;
                int32_t *l_192 = &g_4;
                int32_t *l_194 = &l_186;
                int32_t *l_195 = &g_62;
                int32_t *l_196 = &l_186;
                int32_t *l_197 = &l_186;
                int32_t *l_198 = &g_62;
                int32_t *l_199 = &g_62;
                int32_t *l_201 = &l_200;
                int32_t *l_202 = &l_183;
                int32_t *l_203 = &l_189;
                int32_t *l_204 = &l_186;
                int32_t *l_205 = (void*)0;
                int32_t *l_206 = &g_62;
                int32_t *l_207 = &l_183;
                int32_t *l_208 = &l_189;
                int32_t *l_209 = &l_186;
                int32_t *l_212 = &g_4;
                int32_t *l_213 = &g_4;
                int32_t *l_214 = &l_186;
                int32_t *l_216 = (void*)0;
                int32_t *l_217 = &l_215;
                int32_t *l_218 = &l_183;
                int32_t *l_219 = (void*)0;
                int32_t *l_220 = &l_186;
                int32_t *l_221 = (void*)0;
                int16_t *l_238 = &l_83;
                uint8_t *l_255 = &g_88;
                int32_t l_330 = (-3L);
                uint16_t *l_410 = &g_248;
                int32_t *****l_413 = &g_381;
                --g_222;
            }
            (****g_432) = (((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((~(((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((p_45 , ((p_44 , (((*l_414) = (void*)0) != g_432)) && (((((**l_249) != p_45) > (safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(p_45, p_44)) <= (((**g_434) >= (**l_64)) , 8L)), g_107))) != (*p_42)) , 2UL))), 0)) == (*p_42)) ^ (-7L)), g_60)), p_45)) >= g_248) , (void*)0) != &l_338) <= (-3L)), (**l_249))), 10)) , g_311), g_311)) && (*g_321)) < 1L)), 5)), 0x17L)) < p_45) >= (**l_249));
        }
        (*p_43) = ((((*l_441) = l_440) == &l_375) && (((g_222 != ((g_344 = (((*l_442) = g_62) , ((safe_sub_func_int16_t_s_s(((*p_42) | (safe_mod_func_uint32_t_u_u((((((((-7L) <= (safe_add_func_int16_t_s_s((255UL == (safe_mul_func_uint8_t_u_u((g_384 <= (((**l_249) > g_2) != (*g_435))), g_340))), 0x402CL))) == (**g_434)) , 0xD993L) == (*g_321)) || 1L) , p_44), (*p_42)))), p_46)) || l_451))) != g_113)) , 246UL) > g_2));
        (*l_455) = g_452;
    }
    else
    {
        for (g_107 = 0; (g_107 <= (-25)); g_107 = safe_sub_func_uint16_t_u_u(g_107, 3))
        {
            return p_45;
        }
    }
    (****g_432) = (safe_sub_func_uint16_t_u_u(((*l_462) = 1UL), (safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((*l_481) &= ((**l_64) || ((((((((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_473 >= (((safe_mod_func_int32_t_s_s((*p_42), (safe_rshift_func_int16_t_s_u(((p_46 , l_478) == l_478), 2)))) , l_479) != &g_130)), (**l_64))), p_45)) , g_384) & 4UL) < 0x13D9L) || g_193) >= 0x378CL) || (*g_435)) <= l_480))), (*p_42))) & (*l_65)), (**l_64)))));
    return l_482;
}
static int32_t * func_47(int32_t p_48, int32_t p_49, int32_t p_50, int16_t p_51)
{
    int32_t *l_61 = &g_62;
    (*l_61) |= g_4;
    return &g_6;
}
inline static int16_t func_71(uint8_t p_72, uint8_t p_73)
{
    int32_t *l_137 = (void*)0;
    int32_t l_139 = (-4L);
    uint32_t l_157 = 0x122FC4CEL;
    uint32_t l_167 = 4294967295UL;
    int32_t **l_169 = &l_137;
    int32_t ***l_168 = &l_169;
    for (g_107 = 0; (g_107 == 23); g_107 = safe_add_func_uint16_t_u_u(g_107, 9))
    {
        uint8_t l_136 = 0x5EL;
        int32_t *l_138 = &g_4;
        int32_t *l_140 = &g_62;
        int32_t *l_141 = &g_4;
        int32_t *l_142 = &l_139;
        int32_t *l_143 = &g_4;
        int32_t *l_144 = &l_139;
        int32_t *l_145 = &l_139;
        int32_t *l_146 = &l_139;
        int32_t *l_147 = (void*)0;
        int32_t *l_148 = (void*)0;
        int32_t *l_149 = &g_4;
        int32_t *l_150 = &g_4;
        int32_t *l_151 = &g_62;
        int32_t l_152 = (-1L);
        int32_t *l_153 = &l_152;
        int32_t *l_154 = &l_139;
        int32_t *l_155 = &g_4;
        int32_t *l_156 = &l_139;
        (*l_138) = (safe_mul_func_int8_t_s_s(l_136, (((l_137 != (void*)0) , l_138) == (((((l_139 , (void*)0) != (void*)0) , p_72) ^ (g_110 >= p_72)) , (void*)0))));
        ++l_157;
    }
    l_139 = ((((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((~0xF9EEL), 7)) && l_139) ^ (g_130 || p_73)), 6)) && (safe_rshift_func_uint16_t_u_u(6UL, (((((**l_168) = func_47(l_167, (((void*)0 == l_168) , (g_62 && p_72)), g_113, p_73)) != (void*)0) ^ g_4) && 0x2B75L)))) ^ p_73) == p_73);
    ((void) sizeof ((l_137 == 0 || l_137 == &g_6) ? 1 : 0), __extension__ ({ if (l_137 == 0 || l_137 == &g_6) ; else __assert_fail ("l_137 == 0 || l_137 == &g_6", "/tmp/tmpages6djd.c", 654, __extension__ __PRETTY_FUNCTION__); }));
    return p_72;
}
inline static uint8_t func_74(int16_t p_75, int32_t p_76)
{
    int32_t *l_86 = &g_60;
    uint8_t *l_87 = &g_88;
    int32_t l_93 = 7L;
    int32_t *l_105 = &g_6;
    int32_t **l_104 = &l_105;
    int16_t *l_106 = &g_107;
    int32_t *l_108 = &g_63;
    int16_t *l_109 = &g_110;
    int16_t *l_111 = (void*)0;
    int16_t *l_112 = &g_113;
    int32_t *l_114 = &g_62;
    int32_t ***l_115 = (void*)0;
    int32_t *l_124 = (void*)0;
    int8_t *l_129 = &g_130;
    int32_t l_131 = (-5L);
    (*l_114) = ((safe_mod_func_int8_t_s_s(((((*l_87) = ((void*)0 != l_86)) != (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((g_4 , (l_93 ^ (safe_sub_func_int16_t_s_s(((*l_112) = ((*l_109) = ((((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((g_63 , (((0xA8L >= (safe_sub_func_uint16_t_u_u(0UL, (g_63 != (safe_rshift_func_int16_t_s_s(((*l_106) = (l_104 == (void*)0)), 3)))))) , (-1L)) | g_63)), g_2)), 3)) | (*l_105)) , l_105) == l_108))), 65535UL)))) , 0x221BL), p_76)), g_62))) != (**l_104)), 0x0EL)) ^ p_76);
    l_104 = &l_114;
    ((void) sizeof ((l_104 == &l_114) ? 1 : 0), __extension__ ({ if (l_104 == &l_114) ; else __assert_fail ("l_104 == &l_114", "/tmp/tmpages6djd.c", 684, __extension__ __PRETTY_FUNCTION__); }));
    g_62 = (safe_mod_func_uint16_t_u_u((*l_114), (((l_93 = ((g_113 <= (((safe_mod_func_int8_t_s_s((((*l_129) = ((safe_sub_func_int8_t_s_s((g_6 ^ ((-1L) <= 65530UL)), (safe_add_func_uint32_t_u_u((((l_124 == (void*)0) <= ((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((void*)0 == l_112), g_4)) != p_76), (*l_105))) & 0UL) != g_63) <= (**l_104))) , 0x5587BB5BL), g_110)))) , g_107)) < 0x4CL), l_131)) >= (-1L)) ^ (*l_105))) , g_113)) | g_60) , g_60)));
    return (*l_105);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_4;
    csmith_sink_ = g_6;
    csmith_sink_ = g_60;
    csmith_sink_ = g_62;
    csmith_sink_ = g_63;
    csmith_sink_ = g_88;
    csmith_sink_ = g_107;
    csmith_sink_ = g_110;
    csmith_sink_ = g_113;
    csmith_sink_ = g_130;
    csmith_sink_ = g_193;
    csmith_sink_ = g_211;
    csmith_sink_ = g_222;
    csmith_sink_ = g_248;
    csmith_sink_ = g_311;
    csmith_sink_ = g_340;
    csmith_sink_ = g_344;
    csmith_sink_ = g_362;
    csmith_sink_ = g_384;
    csmith_sink_ = g_394;
    csmith_sink_ = g_602;
    csmith_sink_ = g_603;
    csmith_sink_ = g_648;
    csmith_sink_ = g_718;
    csmith_sink_ = g_846;
    csmith_sink_ = g_869;
    csmith_sink_ = g_984;
    csmith_sink_ = g_995;
    csmith_sink_ = g_1134;
    platform_main_end(0,0);
    return 0;
}
