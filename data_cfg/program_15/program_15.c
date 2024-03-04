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
static uint16_t g_3 = 0xADE2;
static int16_t g_4 = (-4);
static int32_t g_11 = 0x5AE649F6;
static uint8_t g_52 = 0x78;
static int8_t g_80 = 0x4B;
static int16_t g_106 = 0x12ED;
static uint16_t g_132 = 65527U;
static uint16_t g_133 = 0x3556;
static uint32_t g_141 = 0xE726552C;
static uint8_t g_172 = 247U;
static uint32_t g_196 = 0xAC8820D8;
static int32_t g_198 = 0xA86CCD6D;
static uint32_t g_204 = 4294967295U;
static uint32_t g_206 = 4294967295U;
static int32_t g_209 = (-1);
static uint16_t g_224 = 65535U;
static uint32_t g_247 = 4294967295U;
static uint16_t g_252 = 65530U;
static uint8_t g_253 = 1U;
static uint32_t g_298 = 4294967289U;
static uint8_t g_312 = 0x5E;
static int32_t g_376 = 0x76111D3F;
static int16_t g_443 = 0x2C88;
static uint8_t g_508 = 0U;
static uint32_t g_601 = 4294967286U;
static uint16_t g_684 = 65535U;
static int16_t g_739 = 0xCD18;
static uint32_t g_745 = 4294967291U;
static uint8_t g_746 = 246U;
static uint16_t g_786 = 0U;
static uint32_t g_901 = 0x5922FD83;
static uint8_t g_948 = 0xFF;
static int32_t g_1021 = 0x94787307;
static uint8_t g_1034 = 3U;
static int32_t g_1107 = 3;
inline static uint16_t func_1(void);
inline static int32_t func_5(int32_t p_6, int32_t p_7, int8_t p_8, uint32_t p_9, uint16_t p_10);
static uint32_t func_14(uint8_t p_15, int32_t p_16, uint32_t p_17, uint32_t p_18);
inline static uint16_t func_21(uint32_t p_22, uint32_t p_23, int8_t p_24, uint32_t p_25);
static uint8_t func_26(int32_t p_27, uint32_t p_28, uint16_t p_29, uint16_t p_30);
static int32_t func_31(int32_t p_32, uint8_t p_33, int32_t p_34, int16_t p_35);
static uint32_t func_38(int16_t p_39, uint32_t p_40, int32_t p_41, int32_t p_42);
static uint16_t func_44(int16_t p_45, uint32_t p_46, uint8_t p_47, uint16_t p_48);
inline static uint32_t func_53(int16_t p_54, uint8_t p_55);
inline static int16_t func_56(uint32_t p_57, uint8_t p_58, uint32_t p_59);
inline static uint16_t func_1(void)
{
    uint8_t l_2 = 5U;
    int32_t l_43 = 0x6D9E96BB;
    int32_t l_254 = 0x2B852CF7;
    int32_t l_900 = 0xE0E4C3EF;
    uint8_t l_1077 = 4U;
    int8_t l_1097 = 0;
    int32_t l_1099 = 5;
    uint16_t l_1100 = 65535U;
    uint16_t l_1110 = 1U;
    g_4 = (g_3 = (l_2 < 0xC203));
    if (func_5(l_2, (g_1021 = ((((g_11 = g_4) , ((((g_3 , (safe_sub_func_uint32_t_u_u(func_14(g_4, ((l_2 | (g_4 , ((((l_900 = (safe_sub_func_int8_t_s_s(((func_21((((((func_26((g_376 = func_31((l_254 = ((safe_add_func_uint32_t_u_u(func_38(l_2, g_4, (l_43 = (-1)), g_3), g_4)) != g_4)), g_4, g_4, g_4)), l_2, l_2, g_4) ^ l_2) & g_684) | 0x707D977C) >= (-9)) ^ 0xE1CDA56D), g_739, g_739, g_739) || 0x0F83) > g_4), l_2))) , g_224) != 0) , g_508))) == l_2), l_2, g_901), g_948))) ^ l_2) == 0xB1) | g_684)) , 5) , l_900)), l_2, g_948, l_2))
    {
        uint32_t l_1082 = 0xA80D4F09;
        int32_t l_1083 = 0x75324DBF;
        l_1083 = (((g_312 = 0x37) >= (~((safe_lshift_func_int8_t_s_u((((g_948 | (safe_unary_minus_func_uint8_t_u((((safe_sub_func_uint8_t_u_u((g_206 ^ ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((l_900 < (safe_mod_func_int16_t_s_s(((g_745 = g_206) , (safe_mod_func_int16_t_s_s(g_1034, 0x0DCE))), (((l_1077 , (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_43 = ((0xA58FC442 > 0x135A1D10) >= g_11)) | l_1082), 7)), 1))) > 0U) || l_1082)))))), 7)) , 0xC2), 0x80)) && g_206))), 9)) , l_1077)), 1)) == l_1077) || l_900)))) | l_254) && 0x1CC7), 5)) ^ g_11))) , g_204);
        l_1100 = (((((0x4599F570 > l_1082) || ((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_u(((0x0277 || (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_43, (safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_1083 = (safe_unary_minus_func_int32_t_s((l_254 <= l_1077)))), (((0x4D > l_1097) ^ ((+(((g_1021 >= g_11) < l_254) > l_1082)) == g_204)) != l_43))) , l_1082), l_1082)))) || l_1099), 1))) | l_1082), 8)) , 0) | l_254), l_1082)) == g_739)) <= l_1082) >= l_254) >= l_900);
        g_376 = ((safe_rshift_func_int8_t_s_s(0, 5)) || ((0U < (((((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((g_1034 & (l_43 , (l_1110 = ((((g_80 & (((((g_1107 = (l_1083 | l_1082)) > g_443) | (((l_43 = (safe_mod_func_int8_t_s_s((l_254 || g_745), 0xD0))) != l_1077) >= g_1034)) <= l_1082) ^ 248U)) , l_1097) && g_4) < (-9))))), 4)) ^ g_4) || g_739), g_209)) & l_254) >= l_1083) != g_196) | g_739)) | l_1099));
    }
    else
    {
        g_376 = g_443;
    }
    return l_1097;
}
inline static int32_t func_5(int32_t p_6, int32_t p_7, int8_t p_8, uint32_t p_9, uint16_t p_10)
{
    int32_t l_1024 = (-1);
    int32_t l_1035 = (-9);
    int32_t l_1049 = 0xFFF38B5E;
    int32_t l_1050 = 0x832E17A5;
    int32_t l_1051 = 0x8BBB251D;
    int16_t l_1052 = 0;
    int32_t l_1053 = 0xB4A5BF34;
    int8_t l_1054 = 0;
    g_1021 = ((p_8 & (g_11 , (((((l_1024 = (safe_mod_func_uint32_t_u_u((g_443 , ((4294967290U <= l_1024) > ((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u((g_1034 = ((l_1024 & p_9) != ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(255U, (safe_sub_func_int8_t_s_s((((((((g_172 = g_786) < g_508) | 0xFB) , p_9) || g_206) && g_198) <= g_601), l_1024)))), (-1))) <= 0xE8404E8A))), g_106)))) >= 1U))), l_1024))) , l_1024) <= 8) | g_132) < l_1035))) , 1);
    l_1024 = (safe_mod_func_int16_t_s_s(((g_948 = ((((!(l_1024 == (l_1035 = 0))) ^ ((+((((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((g_376 = ((+p_10) != (g_80 = (p_7 < (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(g_786, ((g_508 | l_1024) | (p_8 = (((((((g_1021 == (((l_1051 = (((l_1050 = (((l_1049 = ((((g_376 || g_172) && l_1024) >= l_1024) > g_133)) > 0xAE) > l_1024)) >= 0x5A) , g_508)) < g_1034) , l_1052)) || p_8) || g_141) ^ 0x5B05) , 1) , l_1051) | g_52))))), l_1024)))))), p_6)) , g_739), 1)) >= l_1024) < l_1052) < l_1053)) <= l_1024)) && (-3)) >= p_9)) , 0), g_11));
    l_1054 = (l_1049 = g_204);
    p_7 = ((((p_8 = g_508) , (l_1049 & (safe_lshift_func_uint8_t_u_u(0x67, (p_8 , (p_7 == ((((((l_1050 <= (((l_1024 = (0x611E || (l_1051 == l_1050))) || l_1051) ^ 0xFD)) != (-2)) , g_247) != g_209) & g_948) && 0x58710855))))))) == l_1051) || (-1));
    return l_1049;
}
static uint32_t func_14(uint8_t p_15, int32_t p_16, uint32_t p_17, uint32_t p_18)
{
    uint32_t l_902 = 8U;
    int32_t l_915 = (-7);
    uint32_t l_932 = 0U;
    uint16_t l_946 = 1U;
    int32_t l_947 = 0xD459C7A1;
    uint16_t l_962 = 65534U;
    uint32_t l_1002 = 4294967295U;
    uint32_t l_1005 = 1U;
    int32_t l_1016 = 9;
    int32_t l_1017 = 0;
    int32_t l_1018 = 0xDCFCD977;
    uint8_t l_1019 = 255U;
    int32_t l_1020 = 0xB6FBAF7C;
    p_16 = (p_18 , l_902);
    if (l_902)
    {
        int8_t l_910 = 0x00;
        int32_t l_911 = 0x994CBE12;
        int32_t l_912 = 0x1E338C87;
        int32_t l_914 = 0x2F748979;
        int32_t l_930 = 0;
        uint16_t l_931 = 65535U;
        l_915 = ((g_746 = (safe_add_func_uint16_t_u_u((l_914 = (p_18 == ((((l_912 = (safe_rshift_func_int16_t_s_u(p_18, ((safe_lshift_func_int16_t_s_s(l_902, (l_911 = (!l_910)))) == g_141)))) || (!p_17)) == (0x05B7 < l_910)) < p_15))), g_52))) || 0xA1);
        l_912 = ((safe_lshift_func_int16_t_s_u((((p_16 = (((l_911 || (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((g_133 = (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_915, ((g_247 , 65532U) == (safe_lshift_func_int16_t_s_u((0x53 < p_15), 12))))), g_133))), ((((0xC294 || (l_930 = ((safe_lshift_func_uint8_t_u_s(0x57, p_17)) < g_172))) <= l_902) , l_931) ^ 252U))), l_915))) >= 65535U) < p_16)) == g_206) > p_18), 11)) , l_932);
    }
    else
    {
        int32_t l_949 = 0xEC14EAA1;
        int32_t l_997 = 0x25719C6C;
        p_16 = ((safe_rshift_func_int8_t_s_u((((p_15 = (((~(((l_947 = (safe_sub_func_uint32_t_u_u(((p_18 && ((((safe_unary_minus_func_int32_t_s(((~p_16) && ((g_198 & (safe_lshift_func_int8_t_s_s(((l_915 = 65535U) >= (safe_lshift_func_int8_t_s_u((((g_11 = g_80) , (safe_add_func_uint32_t_u_u((g_901 = (0x99 <= (0xEE != (p_16 < g_253)))), g_3))) || 0x9EF9DB93), 3))), 5))) & g_508)))) > p_16) , p_17) ^ p_16)) < l_946), l_946))) | g_312) & p_16)) , l_946) > g_80)) || g_948) >= 5), p_18)) < l_949);
        p_16 = (l_949 = (0x848B0409 == (safe_mod_func_uint8_t_u_u((0x85 <= (0x830D44B2 < p_15)), ((g_684 < p_16) & (((safe_mod_func_int16_t_s_s((0 <= (g_948 >= ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_915 = (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u(((g_252 = (p_18 >= 0x7B)) != g_172), 0U)) || p_15) == p_17), 5))), l_962)), l_949)) || p_17))), p_17)) <= p_16) >= l_932))))));
        for (l_915 = 0; (l_915 <= 18); l_915 = safe_add_func_int16_t_s_s(l_915, 1))
        {
            uint32_t l_973 = 4294967295U;
            int32_t l_975 = 0;
            uint32_t l_976 = 4294967295U;
            uint32_t l_977 = 0x8AACDBE7;
            l_947 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((g_786 = (0xD0 | ((safe_lshift_func_int8_t_s_s(((7U < ((l_975 = (((p_18 , l_949) && (((0x1F5E ^ g_253) && l_973) == (l_949 = ((p_15 = p_18) , (safe_unary_minus_func_uint16_t_u(p_17)))))) == 65535U)) > g_443)) == g_376), 2)) > g_80))), l_976)), 4)), l_977));
            g_376 = l_949;
            g_376 = (-5);
            l_975 = (((g_224 = (g_601 , (safe_lshift_func_int16_t_s_u(((p_18 , ((g_739 != (safe_rshift_func_int16_t_s_s(((g_80 = ((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((p_15 = 255U), (g_253 , (((+(((((safe_mod_func_uint32_t_u_u(g_224, (((safe_mod_func_uint8_t_u_u((g_745 | (l_949 = (safe_sub_func_int16_t_s_s(((l_946 != ((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((g_739 > l_977), 0xCC1C61F4)), p_18)) >= p_16)) && l_949), 0x610B)))), g_80)) ^ p_16) ^ g_298))) & p_16) && 0xE1CC4DB2) <= 7U) || g_80)) < l_976) , g_198)))) || l_947), g_253)) != p_17)) < 0xBF), 8))) != g_172)) , (-3)), p_17)))) > l_997) | 0xBA53);
        }
    }
    g_376 = ((((l_947 = ((l_902 > (((((l_947 , (safe_lshift_func_int8_t_s_s((g_80 = (((((g_172 <= (p_18 != g_508)) && (safe_lshift_func_int16_t_s_s(((g_106 < g_948) && ((p_17 , l_946) <= p_16)), 6))) > g_684) > 0x6DAC) < p_16)), l_932))) , 0x37B353D9) != p_18) , p_18) & g_601)) && l_1002)) && 7) <= 0xB97F) , l_947);
    l_1020 = ((g_204 = ((((safe_add_func_uint32_t_u_u((l_1005 || (safe_add_func_int8_t_s_s(0xD4, (g_252 ^ (((((((((((safe_sub_func_int8_t_s_s((l_1018 = (l_1017 = (((safe_sub_func_int16_t_s_s((p_15 <= p_17), ((safe_sub_func_uint32_t_u_u(((((l_1016 = (l_915 = (l_947 = (g_312 >= (((g_376 = (safe_add_func_int16_t_s_s(p_18, 0xDBC5))) && (0xA1F29BAD > g_312)) , 0xEC))))) | l_932) ^ l_962) , 8U), g_52)) <= g_209))) <= l_946) | 0x26))), 0x91)) , l_915) > g_106) | l_902) > l_932) , g_901) > p_18) , 65535U) <= g_247) || l_1019) < p_15))))), l_1005)) == g_948) , l_902) & g_247)) ^ g_948);
    return l_947;
}
inline static uint16_t func_21(uint32_t p_22, uint32_t p_23, int8_t p_24, uint32_t p_25)
{
    uint16_t l_885 = 65535U;
    int32_t l_887 = 0;
    int16_t l_897 = 0x74E7;
    int32_t l_898 = 0x959C6B73;
    int32_t l_899 = 0x40B65088;
    l_899 = (l_898 = ((l_885 && ((l_887 = (((g_11 = (+p_22)) , p_22) == g_132)) || (g_196 <= (!(((0x05 < (-10)) & (((p_25 > (((((((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((l_887 = (((0xBF & p_25) , l_885) ^ 0x47AF)), p_22)) == 0x10461651) , 1) != 0xAA6F), 0xAF38)) <= 65532U) > l_897) , g_252), 3)) | g_745) >= g_376) != p_22) == p_24) , p_22) <= 0x9650C116)) != p_24) , l_887)) != p_25))))) <= 0U));
    l_887 = p_22;
    return g_253;
}
static uint8_t func_26(int32_t p_27, uint32_t p_28, uint16_t p_29, uint16_t p_30)
{
    int8_t l_385 = 6;
    int32_t l_386 = 0xE0762BF7;
    int32_t l_389 = 0x074FC59C;
    int32_t l_390 = 0x637CDB33;
    uint8_t l_441 = 255U;
    uint8_t l_602 = 8U;
    uint32_t l_643 = 0xA1DA5121;
    uint8_t l_822 = 0U;
    uint32_t l_850 = 1U;
    g_376 = (((safe_rshift_func_int16_t_s_s(((0x90 == p_29) || (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((l_390 = (safe_mod_func_int8_t_s_s(((((l_386 = l_385) | ((g_312 < (g_106 < (safe_sub_func_uint8_t_u_u(0xC8, ((p_30 < (l_389 = p_27)) & p_29))))) , g_80)) || g_312) && l_385), g_11))), p_27)) >= l_385), g_196))), g_252)) , 0xF2) | p_29);
    for (g_11 = (-14); (g_11 <= 3); g_11++)
    {
        int32_t l_401 = 0xBEBF955F;
        int32_t l_420 = 0x18CA9857;
        int8_t l_425 = 0x7E;
        uint32_t l_428 = 0xF94B34C8;
        uint32_t l_440 = 0x0F0471E1;
        int16_t l_486 = (-1);
        int8_t l_598 = 0x16;
        int32_t l_620 = 0x5AF5AF13;
        uint16_t l_743 = 65534U;
        int32_t l_756 = 0x8B84C807;
        p_27 = (safe_rshift_func_uint16_t_u_u(((((((((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u(g_141, 5)) <= ((safe_mod_func_int32_t_s_s((8 & l_401), ((g_132 = (safe_mod_func_int8_t_s_s(((p_30 = g_253) ^ g_224), (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((l_420 = ((safe_mod_func_int8_t_s_s((l_390 = 1), (((((0x62D4 ^ l_401) && (safe_rshift_func_uint16_t_u_s((p_29 = (safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((g_376 = ((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u((l_386 >= g_224), 2)) , 0xEB) >= 0x6E), p_27)) , g_204)), g_80)) != l_389), 3))), 0))) ^ (-1)) && p_29) , g_247))) <= 1)) != g_247), p_27)), p_27))))) && g_132))) , p_30)), 2)) & p_27) ^ g_298) < 0xBEA12880) & g_52) & 0xBF65) >= p_28) , 0x038DF95F) ^ p_27) != p_27), 3));
        if ((p_27 = ((((safe_rshift_func_int8_t_s_s(l_420, (((0x417AA079 < 1U) , 4294967295U) >= (safe_lshift_func_int16_t_s_s(p_27, (l_390 >= g_80)))))) <= (l_425 , (((((safe_lshift_func_uint16_t_u_u((g_224 = l_386), 0)) > g_253) , g_172) , 0x58) , l_386))) , 0xE1) && g_253)))
        {
            int8_t l_444 = (-1);
            uint16_t l_447 = 0x28EB;
            int32_t l_464 = 0x0E1F674C;
            int32_t l_472 = 0xC5E385F3;
            int32_t l_474 = 0xA9F7B7DE;
            l_428 = g_209;
            if ((((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(0x97, 0)) & 2), (65526U < (p_30 < (l_386 ^ (g_80 = (safe_rshift_func_uint8_t_u_u((!((-9) | p_27)), ((g_247 >= ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_52 ^ l_440), 11)), g_198)) , l_441) == g_3) != p_30)) | l_440))))))))) | p_29) < g_11))
            {
                int32_t l_442 = 0xDB0CEC7D;
                l_442 = 0;
                l_442 = g_172;
            }
            else
            {
                uint8_t l_446 = 0xA9;
                int32_t l_473 = 0x29CB063B;
                g_443 = (g_376 = p_28);
                g_376 = l_444;
                p_27 = ((((+(((l_446 , p_27) != l_447) , p_29)) <= l_440) == (((((p_28 != p_29) <= 4U) ^ ((safe_sub_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_28, p_27)), 0)) != 4U) > g_312), 0xE4)) & 5)) <= p_28) , g_141)) >= g_209);
                g_376 = (safe_lshift_func_int16_t_s_s((0xB627779F || (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((p_30 || ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((l_464 = p_28) | (~(g_443 = (l_474 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((l_473 = (safe_mod_func_int32_t_s_s((g_172 , (l_472 = (0xC7 > (g_3 < 1U)))), ((l_428 || g_298) , (-2))))) == p_27), 3)), g_172)))))), 8)), g_11)) > g_252)), l_425)), g_80))), p_29));
            }
            p_27 = ((l_472 < ((g_224 , (((l_420 = p_30) & (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(0x5F, 0)) , (l_486 = (((~(p_29 | (safe_mod_func_uint16_t_u_u((p_30 >= (safe_add_func_uint8_t_u_u(g_196, (safe_sub_func_uint8_t_u_u((l_440 != (((((p_29 ^ l_401) , g_196) == g_3) == 0x5F) & 7)), 0x19))))), g_204)))) ^ (-6)) , l_425))), l_386))) ^ g_80)) | g_206)) , g_253);
        }
        else
        {
            int32_t l_548 = (-1);
            int8_t l_577 = 0x87;
            int32_t l_606 = 0xF4FEEDF3;
            uint32_t l_740 = 0x86AD29E9;
            int32_t l_787 = 0xB239331E;
            int32_t l_823 = 0x6FBE8A88;
            if (((l_389 = (safe_rshift_func_uint8_t_u_s(p_30, 0))) | (g_4 & (((safe_rshift_func_int8_t_s_u(2, 2)) && ((+(-8)) < (safe_lshift_func_int8_t_s_u((g_3 , (-10)), 5)))) | 0x84D3))))
            {
                int32_t l_507 = 0x3F9C4C5C;
                int32_t l_545 = 0x57C3A35A;
                for (p_30 = (-18); (p_30 < 15); ++p_30)
                {
                    int32_t l_500 = 6;
                    int8_t l_502 = 0xBB;
                    uint32_t l_571 = 0U;
                    int8_t l_600 = 0xC5;
                    if ((((p_29 ^ (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((((l_500 , ((!65535U) || l_502)) & ((safe_unary_minus_func_uint16_t_u(p_30)) >= (((+(l_389 = ((0xC2 != ((((safe_mod_func_uint16_t_u_u(l_507, 0x6346)) || l_486) && g_508) & g_198)) >= l_502))) <= p_29) , (-1)))) | l_502), 248U)) , 0x1F), 254U))) | 1U) , 0xDC8A2202))
                    {
                        uint16_t l_549 = 0xF22E;
                        l_386 = l_507;
                        l_507 = g_3;
                        g_376 = (safe_sub_func_uint16_t_u_u(65528U, ((safe_mod_func_uint32_t_u_u((!(((g_312 = (safe_sub_func_uint8_t_u_u((((g_376 , (safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(l_507, 1)) <= (p_30 == (safe_mod_func_int32_t_s_s(0x21E987AC, (+(safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((~((!((l_425 , (((g_204 = (2 > (l_545 = 0U))) < (safe_lshift_func_uint16_t_u_u((((0xA2 & 0xBB) > 1) , l_441), g_196))) | l_486)) ^ l_389)) ^ g_11)), l_548)) == g_224), l_548)) , p_29), l_486)) > l_549), 1)), l_507)) == p_27) ^ g_11) == 1U), g_443)), g_508))))))) , g_3), 8U)), g_132)) != g_253) >= 0), g_132))) && g_80) | p_27), p_28))) < (-1)) | l_548)), l_549)) != 4294967292U)));
                    }
                    else
                    {
                        l_401 = (safe_sub_func_int8_t_s_s(p_30, (safe_sub_func_uint32_t_u_u(g_252, (g_298 , g_3)))));
                    }
                    p_27 = l_401;
                    g_376 = (((safe_sub_func_uint8_t_u_u(((l_386 = ((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((l_420 == (+((safe_sub_func_int16_t_s_s(((g_52 = (safe_add_func_uint16_t_u_u((p_29 = 0x7037), (l_502 < (((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_206 = p_27), (g_80 < g_132))), ((((safe_lshift_func_uint8_t_u_u((g_312 = l_571), ((p_28 >= (safe_rshift_func_uint16_t_u_s((~((l_548 | 65528U) <= p_27)), p_30))) >= 0x0DA0429A))) >= p_28) || g_247) <= l_390))) ^ 0U) != 0x3C))))) == g_224), 0xAF9A)) & 250U))), 0x8A)) & p_27), p_28)) != l_420)) <= g_298), 0xB3)) > l_507) | 0x844047B9);
                    for (l_390 = 0; (l_390 >= 16); l_390 = safe_add_func_int32_t_s_s(l_390, 1))
                    {
                        int32_t l_599 = 0xDCDDFC54;
                        l_602 = (l_577 , ((((g_204 = l_545) <= (safe_sub_func_int16_t_s_s(p_27, (((((safe_add_func_int16_t_s_s((l_441 , ((g_206 = p_27) ^ (((g_601 = ((p_29 | ((l_401 = (g_376 = (l_420 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((l_600 = (safe_add_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((l_548 | (((p_27 <= (((l_598 , 0xDAE71FCB) > l_599) , g_508)) && 0xC0) || 8)), l_599)) > g_508), 4294967292U)) && g_209), 5)) != l_577) > p_28) | 0x6BE4E085), g_4))) & 0x9E66D174) < 7), g_443)), p_29)), 11)), p_28))))) >= 4U)) | (-1))) && l_577) && g_312))), l_390)) != 1) > 0x10) != 0xD80E) || 1)))) | g_247) >= l_440));
                        p_27 = (safe_lshift_func_uint16_t_u_s((((((l_606 = (+p_28)) , ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_376 = (~(((safe_mod_func_int8_t_s_s((p_28 | p_29), (((((p_29 , g_312) > p_27) && 0x0A) || 9) , (p_29 , 0x3C)))) <= 0x2C) > g_601))), l_386)), l_420)) , p_29)) >= g_3) <= l_425) > 0), 10));
                        g_376 = ((safe_rshift_func_int8_t_s_u(((((-6) ^ g_204) && (((0x9C != (p_30 | (+((((((safe_lshift_func_uint8_t_u_u((((l_577 & 1U) || (((((-2) == ((((+(-5)) , l_600) && g_253) , g_172)) ^ 0xB0D8) == l_620) == p_29)) , l_620), p_28)) , p_29) , g_3) & p_29) >= 1U) & p_27)))) > l_420) , l_401)) <= l_428), 5)) != p_28);
                        p_27 = (((p_27 , (g_172 = ((g_196 && ((safe_sub_func_uint32_t_u_u(g_133, (((safe_mod_func_uint16_t_u_u((g_252 = 0U), 0x4FC9)) <= ((1 ^ (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_253, l_500)), 4)) != ((safe_mod_func_int8_t_s_s(p_27, g_106)) ^ (-3))) >= (-1))) , g_196)) || l_599))) < 0xCD26)) , 0xCF))) & 0xE1) , l_606);
                    }
                }
                if ((l_548 & 0))
                {
                    return l_401;
                }
                else
                {
                    g_376 = (((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((g_508 = (safe_mul_func_uint32_t_u_u(4294967295U, ((((safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(4294967295U, l_440)) ^ (l_606 = (l_620 > (p_27 == g_4)))), 0)) == p_29) , (safe_unary_minus_func_uint16_t_u(((l_386 = (g_80 , ((safe_sub_func_uint16_t_u_u((((((((p_27 || l_577) <= l_643) && 65535U) == p_27) == p_29) , g_298) | g_224), p_27)) | 0x76))) == p_29)))) == 0U)))))), 0x1DB52316)) > g_4) & l_507);
                }
                if (p_29)
                    break;
                if (p_30)
                    break;
            }
            else
            {
                uint32_t l_655 = 0x0AB19E4D;
                uint16_t l_685 = 65531U;
                int32_t l_723 = 0x4933AEB0;
                int32_t l_741 = 0xDD166B52;
                int32_t l_742 = 0xBE2E4608;
                int32_t l_744 = 0xC1B1146D;
                if (((g_206 = (g_601 == ((safe_mod_func_int16_t_s_s(p_30, (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((p_30 | (g_247 = (((+(l_420 = ((((((g_253 , g_3) > (safe_mod_func_uint8_t_u_u(((((0x5B3E25D4 | (safe_mod_func_int32_t_s_s(l_386, 0xD29C3FC8))) , (6U || g_172)) < l_655) > p_30), l_643))) , l_655) && p_28) | p_28) | l_548))) ^ p_29) && 0x346B))) == p_27) || 0xBB) >= 0xB2ADA4E3), p_30)), p_29)))) && p_30))) | p_30))
                {
                    int32_t l_686 = 0x9092F268;
                    int32_t l_687 = (-8);
                    int32_t l_688 = (-3);
                    l_386 = (((safe_add_func_uint16_t_u_u(1U, (~0xFC))) , ((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(1, (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((!(safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_3 = (~(l_401 = (-9)))), (safe_lshift_func_int8_t_s_u(l_428, 3)))), ((((g_376 = (+((l_688 = (safe_mod_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(((((g_206 = p_29) > ((0x84C814A6 != (((p_27 = (l_687 = ((l_685 = ((0 && (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u((-6), g_684)) , (-1)) < p_30), 2))) == 4U)) == l_686))) || l_425) , l_686)) | 0x4F)) , g_209) , p_29), l_577)) || p_28) > p_28) != g_204), 0xC1))) > l_606))) || l_606) >= l_428) , 0x0D)))) && 0x14696CC4), l_686)), g_204)))), g_312)) || l_606)) || p_28);
                }
                else
                {
                    uint32_t l_696 = 0xD2C072C9;
                    for (g_601 = (-6); (g_601 != 42); ++g_601)
                    {
                        g_376 = (((!g_80) , (g_443 = 0xA7C4)) == (((((l_685 && (0x9807 && p_29)) , (safe_add_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u(l_696, ((safe_sub_func_uint8_t_u_u((g_172 = ((l_606 = (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((p_29 != p_28) != ((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint16_t_u_u(((((l_548 >= l_548) | l_696) && g_253) | g_52), 1)) || p_29))) & p_28)) & 0x1739), g_172)), 255U)), 0x44))) , g_133)), g_508)) , 0U))) <= l_440) && (-2)) <= p_29), g_298))) | p_27) == g_684) != l_685));
                    }
                    for (g_601 = (-14); (g_601 >= 18); g_601 = safe_add_func_int32_t_s_s(g_601, 7))
                    {
                        l_606 = 1;
                    }
                }
                g_746 = (((((safe_lshift_func_int8_t_s_u((l_420 = ((safe_mod_func_uint16_t_u_u(((g_172 = (safe_sub_func_int8_t_s_s((((((l_389 = ((g_206 = 0xA6AC42CA) && l_440)) || (0x367ABEDC > ((((((0x42 != (l_386 = (g_745 = (safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(l_389, (+(safe_lshift_func_uint16_t_u_u((l_723 = 1U), 12))))) | ((((l_744 = (~(safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((g_376 = ((safe_add_func_uint8_t_u_u(((l_742 = (l_741 = ((((g_80 = ((safe_rshift_func_int8_t_s_s((((((p_28 & (safe_mod_func_int32_t_s_s((0xD98E & ((safe_add_func_uint8_t_u_u((((0U <= 1U) == g_3) != l_440), 0x35)) > 0U)), 0xAF08A24C))) < 0x33CE) < g_739) , (-5)) | g_684), 1)) > (-1))) <= l_740) > 0x8CED) > g_247))) >= l_685), p_27)) & 0x66)) | 4294967287U) || l_743), p_28)), g_106)))) ^ 0x39B2) > l_606) == g_684)), g_298))))) != g_198) , l_741) , 0x01141246) > l_655) | l_655))) > 65535U) || l_740) || p_27), (-7)))) == g_209), g_196)) <= l_401)), p_28)) < g_132) , 0xE32ECB61) != (-1)) <= g_298);
                g_376 = ((safe_sub_func_uint8_t_u_u(l_386, 0U)) && (0xAF2D04DB || (((safe_add_func_uint8_t_u_u((0x13 && p_30), (safe_add_func_int32_t_s_s((((l_723 = g_376) < 0x0F3F57A4) != ((safe_rshift_func_uint16_t_u_u(p_28, 14)) > (~0xC6))), p_27)))) && l_389) >= l_756)));
            }
            g_376 = (p_27 = l_386);
            p_27 = (((safe_sub_func_int32_t_s_s(g_80, (safe_add_func_uint8_t_u_u(l_740, (safe_sub_func_uint8_t_u_u(p_27, ((((((l_389 = ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((+(safe_add_func_int32_t_s_s((l_620 = ((g_52 = (g_3 & (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u((l_606 > (l_787 = (safe_lshift_func_uint8_t_u_u(((l_420 , (safe_sub_func_uint16_t_u_u((4294967294U || (safe_add_func_int8_t_s_s((g_786 = g_684), (0U > p_28)))), 0xAF27))) == l_756), 0)))), g_172)) != 0x72F90DE4) >= 4) < 0x31DF), g_601)), p_30)))) || g_4)), g_106))) >= 6U) <= 0xF4EB), l_548)), p_27)) || g_252) , l_743) , l_389), l_577)), 0xEEF90B66)) , 0xEF3368AD)) >= 0x53BB1EF1) <= g_204) ^ p_27) >= l_602) , l_756))))))) <= p_27) == 6U);
            g_376 = (~((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((l_756 = (((((p_30 ^ (l_420 = (safe_mod_func_int16_t_s_s((g_106 = (l_606 <= ((safe_mod_func_int8_t_s_s(l_620, (((safe_sub_func_int32_t_s_s((+(((l_389 == (l_823 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((((l_390 = ((safe_lshift_func_uint8_t_u_u((g_746 = (safe_lshift_func_uint16_t_u_u(l_385, 11))), 2)) < ((safe_lshift_func_uint8_t_u_u(l_756, 4)) != ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_787 = (g_80 = ((safe_lshift_func_int16_t_s_s((-1), 15)) != p_29))) == ((((safe_lshift_func_uint8_t_u_s((((0x0DB3 > l_740) > g_196) == p_28), 7)) == l_390) | 5) && p_27)), 0xDF8DFA96)), l_822)) || p_28)))) , 1) , p_28), 0U)), g_133)) | 65531U))) & l_606) >= l_548)), p_29)) > l_577) || l_643))) <= g_11))), p_28)))) , p_27) & 0x6122) | l_548) , p_29)), g_206)) == (-3)), 4294967289U)) && 0));
        }
        for (g_253 = 0; (g_253 <= 12); g_253++)
        {
            uint32_t l_832 = 0U;
            int32_t l_833 = 0x6CC69A02;
            g_376 = ((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(g_247, p_27)), (((l_833 = (((((safe_add_func_int8_t_s_s(((g_224 || g_4) > 0xDC0FF4D8), p_29)) , g_11) & (0x26F0A58C >= (l_832 || 0x0504))) ^ 0x6CA0242A) > p_29)) > p_27) , p_27))) ^ g_52);
            for (p_30 = 0; (p_30 < 7); p_30++)
            {
                int32_t l_838 = 0xBDCCA552;
                for (l_486 = 3; (l_486 == (-15)); l_486 = safe_sub_func_int32_t_s_s(l_486, 5))
                {
                    l_838 = (-1);
                }
                for (g_132 = 13; (g_132 <= 16); g_132 = safe_add_func_uint16_t_u_u(g_132, 6))
                {
                    int8_t l_843 = 0xDE;
                    int32_t l_849 = 0x274C8D84;
                    l_833 = (((g_376 = g_224) != g_786) == (l_602 > ((safe_lshift_func_uint16_t_u_u(l_843, ((l_849 = (g_601 & (safe_rshift_func_int8_t_s_s(l_832, ((l_390 = ((safe_sub_func_uint16_t_u_u(((((safe_unary_minus_func_int16_t_s((g_253 & 5))) , (g_3 = 65535U)) && l_843) , p_27), g_252)) >= 1)) & 0xAAA2))))) , g_247))) > 0x8AC7)));
                    p_27 = (l_850 | (((l_620 = ((g_312 , (g_198 == (g_3 = (p_29 = g_206)))) != (((safe_mod_func_uint8_t_u_u((((l_832 || (safe_add_func_uint32_t_u_u((p_28 >= (((((~(safe_sub_func_uint32_t_u_u((l_849 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_224, (safe_add_func_int16_t_s_s(g_172, (l_420 = g_80))))), l_441))), g_786))) <= 0x6C28) || l_832) ^ 0x9F17) ^ (-10))), p_27))) || 0U) , l_838), g_443)) >= p_28) , g_298))) >= p_28) < 255U));
                }
                for (g_443 = 0; (g_443 >= 27); g_443++)
                {
                    return l_833;
                }
                if (g_132)
                    continue;
            }
        }
        p_27 = (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_743 <= (g_11 , (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((g_601 >= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((+(safe_rshift_func_uint16_t_u_u(l_389, 4))), g_253)), ((l_386 = (safe_add_func_int16_t_s_s(l_602, (g_172 >= p_29)))) >= 255U)))), 7)) ^ g_3), l_850)))), 1)), p_30)), l_389));
    }
    return g_786;
}
static int32_t func_31(int32_t p_32, uint8_t p_33, int32_t p_34, int16_t p_35)
{
    uint16_t l_283 = 0U;
    int32_t l_287 = 4;
    int32_t l_356 = 0x440DBB3C;
    for (p_34 = (-5); (p_34 < (-28)); p_34 = safe_sub_func_uint16_t_u_u(p_34, 6))
    {
        int32_t l_261 = (-1);
        int32_t l_265 = (-1);
        uint16_t l_266 = 0xD8AB;
        int16_t l_285 = 0xE64E;
        int8_t l_375 = 0xD3;
        for (g_252 = 0; (g_252 >= 50); g_252 = safe_add_func_uint16_t_u_u(g_252, 2))
        {
            int32_t l_284 = 0x366D9D4B;
            int8_t l_286 = 0xBE;
            l_287 = ((safe_mod_func_int32_t_s_s((l_261 != ((safe_rshift_func_int8_t_s_u((~(((l_265 = p_32) && g_132) || ((-1) && l_266))), (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u((g_80 = (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((g_132 | (safe_sub_func_int16_t_s_s(g_172, (g_253 != ((((safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_283, 0U)) >= 253U), g_224)) & l_283) | g_52) , l_284))))) != g_209) && l_285), 0x19)), p_33))), l_283)) || g_204), p_32)), 6)) , l_286) && 0x90))) & g_253)), p_35)) , p_32);
            g_298 = ((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(9, l_286)) > (1 >= (((l_285 , (((l_285 && (g_247 = 0x63829273)) ^ (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_206, (((g_4 ^ (((safe_rshift_func_int16_t_s_u(p_35, p_35)) , p_35) == p_33)) , l_283) == p_34))), g_3))) , g_11)) ^ l_287) != 1U))), 3)) || l_284);
        }
        for (g_3 = 21; (g_3 >= 11); g_3 = safe_sub_func_int8_t_s_s(g_3, 7))
        {
            int32_t l_307 = 0x0D023A19;
            int32_t l_311 = 7;
            int32_t l_347 = 0x1FF17B4E;
            g_312 = ((safe_sub_func_int8_t_s_s(((((g_206 & (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_307, 12)), l_283)) > (p_33 || (((((l_311 = (p_35 < (((l_261 = ((l_287 = l_307) < (safe_unary_minus_func_uint16_t_u(g_4)))) < ((l_266 , p_33) == g_172)) != l_307))) != p_35) , g_206) ^ g_198) || l_265))) | g_133)) | p_32) > g_132) | 0xDB), l_265)) ^ 0xC00EF308);
            l_261 = (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((g_52 == ((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((g_206 = (0xAA > 1U)) && (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(g_206, 8)), 5)), (((((!((l_265 & g_206) && (g_132 = 0xBC08))) ^ (safe_mod_func_int8_t_s_s((l_287 = (+p_32)), (p_33 = (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u((p_35 > 0x2DCF4C4E), l_307)))))))) >= l_307) & p_34) < g_11)))), g_52)), 4)) != 8U) == 0x1DD7) == l_307)) & g_298), 255U)), (-3)));
            if (p_34)
                break;
            p_32 = (((safe_unary_minus_func_uint16_t_u((0x49A9B351 == ((((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((g_141 || 0x80A1) > (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((l_347 = g_247) , (l_311 = (safe_mod_func_int32_t_s_s(l_347, ((p_33 | ((safe_sub_func_int16_t_s_s(p_32, (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(g_209, (((((g_132 = (p_32 >= 1U)) || 0xD8B2) ^ l_356) <= p_33) , g_172))) , p_35), 4294967295U)))) < 0xB9721220)) | 0xBA))))), p_34)), 5)), p_33)) , l_307), 3))), g_141)), 0x53)) != l_307) < g_198) || l_283)))) == (-3)) && g_312);
        }
        l_375 = (safe_sub_func_uint16_t_u_u(p_33, ((((p_35 = (l_265 = l_285)) == (((((l_287 = (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((5 >= g_224), ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((l_261 = (p_34 , ((((p_34 || g_312) && (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_285, 5)), ((safe_add_func_uint8_t_u_u(((((l_266 | p_34) , g_209) == l_287) > p_33), p_32)) <= l_285)))) & 0x97) & 8))) ^ l_285) <= 0U), 2)), g_206)) > p_34))), l_356)), 0xC4))) <= 1) || l_283) >= 1U) <= l_285)) , l_261) >= g_247)));
    }
    return p_34;
}
static uint32_t func_38(int16_t p_39, uint32_t p_40, int32_t p_41, int32_t p_42)
{
    uint8_t l_49 = 0x25;
    int8_t l_51 = 0xC5;
    int32_t l_76 = 0xA6950E6E;
    int32_t l_77 = 0x5697A12B;
    int32_t l_78 = 4;
    uint16_t l_79 = 0x0DD1;
    g_253 = (((p_42 = ((func_44(l_49, ((safe_unary_minus_func_int8_t_s((g_52 = l_51))) > (((func_53((p_39 = func_56(p_40, (g_80 = (0U ^ (((g_4 , ((((((l_78 = ((safe_sub_func_int8_t_s_s((l_77 = (((safe_mod_func_uint32_t_u_u((((0x9EFD ^ ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(l_49, 1)) && ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_11, 2)), (l_76 = ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((((((0xD0 <= 0x8E) >= p_42) >= l_49) > l_49) | 0xAB67338D) | g_11), p_39)), 0)) <= (-1))))) < g_4)), l_51)) , l_76)) | 0x39) > l_51), p_39)) || g_11) && p_42)), g_11)) && 0x4C)) < g_3) ^ l_49) , g_4) , l_79) ^ p_39)) , 0U) != p_39))), p_42)), p_42) && g_141) < g_4) || 6U)), g_224, g_224) ^ p_40) | l_51)) | l_79) >= l_51);
    return l_77;
}
static uint16_t func_44(int16_t p_45, uint32_t p_46, uint8_t p_47, uint16_t p_48)
{
    int16_t l_239 = (-1);
    int32_t l_248 = 0x9A44DA63;
    int32_t l_250 = 0;
    int32_t l_251 = 0x6D91DA8F;
    for (g_80 = 0; (g_80 <= 10); ++g_80)
    {
        int32_t l_236 = 1;
        int32_t l_249 = 0x938FFB32;
        if (p_45)
            break;
        g_252 = (((safe_mod_func_int16_t_s_s((l_251 = (~((+(p_48 & (((safe_lshift_func_int16_t_s_s(g_198, 6)) ^ (safe_lshift_func_int16_t_s_s(((l_236 >= l_236) || (((l_250 = (safe_mod_func_uint8_t_u_u(l_239, (safe_sub_func_int8_t_s_s(((0x25E85E3D == (safe_mod_func_int16_t_s_s((l_249 = ((!p_48) || (safe_add_func_uint8_t_u_u((l_248 = (0 > (g_247 = p_48))), p_46)))), l_239))) , p_47), 0x98))))) > p_45) || p_45)), g_133))) || l_239))) != g_106))), p_46)) != 0x23F7) ^ p_45);
        l_251 = (-1);
    }
    return g_133;
}
inline static uint32_t func_53(int16_t p_54, uint8_t p_55)
{
    return g_11;
}
inline static int16_t func_56(uint32_t p_57, uint8_t p_58, uint32_t p_59)
{
    int16_t l_83 = (-8);
    int32_t l_104 = 0xFACDC9FF;
    int32_t l_105 = 0xAAE810F1;
    uint32_t l_120 = 0xE9346F96;
    int16_t l_125 = 0xA60C;
    int32_t l_131 = 4;
    int32_t l_134 = (-1);
    int8_t l_171 = 1;
    uint8_t l_190 = 0x49;
    g_106 = ((((safe_add_func_int8_t_s_s(l_83, p_59)) , 0x5F89) > (safe_lshift_func_uint8_t_u_u(((p_59 , ((safe_lshift_func_uint16_t_u_u(65535U, 15)) & (l_105 = (safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((p_59 > ((((safe_rshift_func_uint16_t_u_s((g_3 = ((1U || (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((l_104 = ((safe_mod_func_uint32_t_u_u(3U, (safe_lshift_func_uint8_t_u_u(((l_83 != 0x7B) > l_83), 5)))) == l_104)), 15)) < p_59), g_80))) > 0xBB)), 11)) != l_83) == p_57) | p_59)), p_59)), 8)) < 251U), g_11))))) && l_105), 7))) , 0x33379BBD);
    l_134 = ((safe_rshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s(((((g_133 = (((((((~(safe_rshift_func_int8_t_s_u((l_104 = (safe_sub_func_uint8_t_u_u(((0x628AE825 || (l_104 || 0x39)) < (0x47 <= (safe_add_func_int32_t_s_s(((p_57 = g_80) | ((g_132 = (l_131 = (p_59 <= ((safe_lshift_func_int8_t_s_u(l_120, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_125 >= (safe_mod_func_int8_t_s_s((l_105 = (((safe_lshift_func_int16_t_s_u((+0x7845), p_58)) < g_4) , 0xFD)), l_83))), p_58)), l_120)))) | l_83)))) && g_3)), g_3)))), p_58))), p_58))) | 0x71BB) > g_11) != 1) <= p_59) , g_4) | l_120)) < p_59) == g_11) >= 0x77FD), l_120)) | p_59), g_11)) != 0x0FB8DA5B);
    if (((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s((((g_141 = l_83) && ((g_80 = ((safe_rshift_func_int8_t_s_u(((~(1U | p_57)) < (safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((p_57 == p_58), (l_104 = (((g_141 ^ 9U) != (g_133 > (l_83 > p_58))) , g_80)))) > g_133), p_59))), 4)) < 0x83D7)) , p_57)) > 2U), 65535U)) | g_132) ^ l_131) , p_59) & l_125), g_3)), p_57)) != p_58))
    {
        uint32_t l_161 = 0x370918AE;
        uint32_t l_173 = 4294967295U;
        int32_t l_174 = (-7);
        l_174 = (safe_lshift_func_int16_t_s_s((1U > (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((l_173 = (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((0xC5 <= (safe_rshift_func_uint16_t_u_s((g_106 == 0U), ((l_83 | (safe_unary_minus_func_uint16_t_u((((l_161 && ((0x4EFEA996 != ((g_172 = ((g_11 = (0x1E1E && (((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((((safe_rshift_func_uint16_t_u_u(0xE04A, g_106)) | g_4) > 0U))), 0x590E4044)), 8)), p_58)) > p_59) , l_171))) , 0U)) & l_161)) == 0U)) <= 0x8661) ^ l_120)))) & p_59)))), (-5))), (-7)))))), p_58))), g_141));
        if ((safe_lshift_func_uint8_t_u_s((l_131 = ((((g_141 <= (safe_unary_minus_func_uint8_t_u(((safe_add_func_uint32_t_u_u(((g_106 >= (safe_lshift_func_uint16_t_u_u(((+(safe_sub_func_uint16_t_u_u((g_3 = (p_57 != (((safe_lshift_func_int8_t_s_u(((l_105 = (safe_rshift_func_int16_t_s_u(g_4, p_57))) && (((7 && 1U) <= (+(0x97B72706 ^ (0x8EA2 > g_4)))) , l_161)), 4)) , g_11) || 0x2F35))), p_57))) , 0x052D), g_133))) <= l_171), l_190)) , 250U)))) > 0x6F7B) == 0xAD85) && g_11)), 0)))
        {
            uint32_t l_195 = 0x330F8949;
            for (g_172 = 0; (g_172 <= 22); g_172 = safe_add_func_int8_t_s_s(g_172, 2))
            {
                uint16_t l_197 = 0x92AA;
                l_197 = (g_196 = ((safe_rshift_func_uint8_t_u_u(g_106, l_195)) == 0U));
            }
            return p_57;
        }
        else
        {
            uint16_t l_203 = 0x0E6D;
            g_198 = 0xEC57C898;
            g_204 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_4 , g_11), 5)), l_203));
            return g_141;
        }
    }
    else
    {
        uint32_t l_205 = 8U;
        int32_t l_225 = 0x5A96FC68;
        g_206 = l_205;
        for (g_133 = 0; (g_133 <= 48); ++g_133)
        {
            g_209 = p_58;
        }
        l_225 = (248U == ((safe_add_func_uint32_t_u_u((g_206 = 4294967291U), ((safe_rshift_func_uint8_t_u_u((p_58 = (safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(p_59, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(p_57, ((((g_204 = ((((l_171 && p_59) < 0x77DB30F1) <= (((g_106 , l_205) | l_171) ^ p_57)) | 0x8B)) <= g_80) <= 65535U) > g_11))), p_58)))), g_224)) == g_133), l_105))), l_171)) != 1))) == l_205));
    }
    l_134 = 0x3B8F3440;
    return g_132;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_4;
    csmith_sink_ = g_11;
    csmith_sink_ = g_52;
    csmith_sink_ = g_80;
    csmith_sink_ = g_106;
    csmith_sink_ = g_132;
    csmith_sink_ = g_133;
    csmith_sink_ = g_141;
    csmith_sink_ = g_172;
    csmith_sink_ = g_196;
    csmith_sink_ = g_198;
    csmith_sink_ = g_204;
    csmith_sink_ = g_206;
    csmith_sink_ = g_209;
    csmith_sink_ = g_224;
    csmith_sink_ = g_247;
    csmith_sink_ = g_252;
    csmith_sink_ = g_253;
    csmith_sink_ = g_298;
    csmith_sink_ = g_312;
    csmith_sink_ = g_376;
    csmith_sink_ = g_443;
    csmith_sink_ = g_508;
    csmith_sink_ = g_601;
    csmith_sink_ = g_684;
    csmith_sink_ = g_739;
    csmith_sink_ = g_745;
    csmith_sink_ = g_746;
    csmith_sink_ = g_786;
    csmith_sink_ = g_901;
    csmith_sink_ = g_948;
    csmith_sink_ = g_1021;
    csmith_sink_ = g_1034;
    csmith_sink_ = g_1107;
    platform_main_end(0,0);
    return 0;
}
