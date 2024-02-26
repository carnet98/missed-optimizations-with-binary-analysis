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
static int32_t *g_6 = (void*)0;
static uint16_t g_11 = 7U;
static int32_t g_14 = 4;
static int32_t g_71 = 0xD4DCD782;
static int32_t *g_70 = &g_71;
static int16_t g_98 = 5;
static uint8_t g_151 = 9U;
static uint32_t g_242 = 3U;
static uint32_t g_322 = 0xC898A0DD;
static uint32_t g_323[9] = {4294967289U, 6U, 4294967289U, 6U, 4294967289U, 6U, 4294967289U, 6U, 4294967289U};
static int32_t **g_364 = &g_6;
static int32_t ***g_363 = &g_364;
static int32_t ****g_557 = &g_363;
static int32_t *****g_556 = &g_557;
static int32_t g_605 = 0xD470F3FA;
static uint32_t g_620 = 0x3DCFF6E8;
inline static uint32_t func_1(void);
inline static int32_t * func_2(int32_t * p_3, int32_t * p_4, uint16_t p_5);
static uint32_t func_8(int32_t p_9, uint32_t p_10);
static int32_t * func_15(int8_t p_16, uint16_t p_17, int32_t p_18, int32_t * p_19);
static uint16_t func_29(int32_t ** p_30, int32_t p_31);
static uint32_t func_32(uint16_t p_33, uint16_t p_34, int32_t * p_35);
static int32_t func_42(uint32_t p_43, int32_t ** p_44, int8_t p_45, int32_t ** p_46);
static uint32_t func_54(int32_t * p_55, int8_t p_56, uint16_t p_57);
inline static int32_t func_60(int8_t p_61, int8_t p_62);
static int8_t func_63(uint32_t p_64, int16_t p_65, int32_t p_66, int32_t * p_67);
inline static uint32_t func_1(void)
{
    int32_t l_7 = 0x3E90A624;
    int32_t *l_649 = &g_71;
    uint8_t l_650 = 0U;
    l_649 = func_2(g_6, (l_7 , (func_8(g_11, g_11) , &l_7)), ((((((safe_add_func_uint32_t_u_u((0xAB >= (safe_div_func_int16_t_s_s(g_11, (0U || 0xDCA00ADE)))), 4294967295U)) , 0x8814) , 0x5FD459E5) <= 0x0841DE62) || 1) <= g_323[0]));
    ((void) sizeof ((l_649 == 0) ? 1 : 0), __extension__ ({ if (l_649 == 0) ; else __assert_fail ("l_649 == 0", "/tmp/tmp0ann79c_.c", 66, __extension__ __PRETTY_FUNCTION__); }));
    return l_650;
}
inline static int32_t * func_2(int32_t * p_3, int32_t * p_4, uint16_t p_5)
{
    int32_t l_648 = 0;
    (*p_4) = l_648;
    return (**g_363);
}
static uint32_t func_8(int32_t p_9, uint32_t p_10)
{
    int32_t *l_13 = &g_14;
    int32_t **l_12 = &l_13;
    uint16_t l_26[1];
    int i;
    for (i = 0; i < 1; i++)
        l_26[i] = 0xAE97;
    (*l_12) = g_6;
    ((void) sizeof ((l_13 == 0) ? 1 : 0), __extension__ ({ if (l_13 == 0) ; else __assert_fail ("l_13 == 0", "/tmp/tmp0ann79c_.c", 101, __extension__ __PRETTY_FUNCTION__); }));
    (*l_12) = func_15((g_14 == (safe_sub_func_int8_t_s_s(((((g_14 || ((safe_div_func_uint16_t_u_u(g_11, (((safe_add_func_uint16_t_u_u(g_14, l_26[0])) && ((safe_div_func_int32_t_s_s((g_11 , ((g_14 <= 0x6B379904) > func_29(&g_6, g_11))), p_10)) < g_11)) , g_98))) , g_323[0])) != 4) == g_322) || p_9), 0xD3))), g_322, l_26[0], (*l_12));
    ((void) sizeof ((l_13 == 0 || l_13 == &g_14) ? 1 : 0), __extension__ ({ if (l_13 == 0 || l_13 == &g_14) ; else __assert_fail ("l_13 == 0 || l_13 == &g_14", "/tmp/tmp0ann79c_.c", 104, __extension__ __PRETTY_FUNCTION__); }));
    return p_9;
}
static int32_t * func_15(int8_t p_16, uint16_t p_17, int32_t p_18, int32_t * p_19)
{
    int16_t l_551 = 0x8D10;
    int32_t l_555 = 0x1DF7B167;
    uint32_t l_632 = 1U;
    int32_t *l_643 = &g_14;
    for (p_16 = 0; (p_16 <= 8); p_16 += 1)
    {
        int8_t l_554 = 0;
        int32_t *****l_561[4];
        uint16_t l_562 = 5U;
        int i;
        for (i = 0; i < 4; i++)
            l_561[i] = &g_557;
        if (((((safe_div_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(65529U, ((safe_lshift_func_uint8_t_u_s(g_323[p_16], (l_551 <= (g_323[p_16] <= ((((&g_364 == &g_364) != (safe_mod_func_uint32_t_u_u(((g_151 == 0x8F9C57D8) < l_551), p_18))) != 4294967295U) || l_551))))) , l_551))) ^ l_554) || l_551), 1U)) || l_554) == l_551) > l_555))
        {
            g_556 = g_556;
            for (p_18 = 7; (p_18 >= 0); p_18 -= 1)
            {
                int32_t *l_558 = (void*)0;
                return l_558;
            }
        }
        else
        {
            int32_t ****l_569 = &g_363;
            int32_t l_574 = 0xC741F419;
            p_18 = ((safe_mod_func_int32_t_s_s(((void*)0 == l_561[1]), (l_562 || (((((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(p_16, (safe_sub_func_uint32_t_u_u((0x3A943A9F <= (((l_569 == l_569) > g_322) && (safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(p_17, 4)) < l_555), 65535U)))), l_574)))) == p_18) ^ g_71) , p_16), 2)) && g_323[0]) ^ 247U) ^ g_323[0]) , 4294967295U)))) , p_16);
        }
        if (l_551)
            break;
        for (l_562 = 0; (l_562 <= 8); l_562 += 1)
        {
            int32_t **l_575 = &g_70;
            int32_t *****l_604[1];
            int16_t l_617 = (-7);
            int i;
            for (i = 0; i < 1; i++)
                l_604[i] = &g_557;
            p_19 = &l_555;
            ((void) sizeof ((p_19 == &l_555) ? 1 : 0), __extension__ ({ if (p_19 == &l_555) ; else __assert_fail ("p_19 == &l_555", "/tmp/tmp0ann79c_.c", 158, __extension__ __PRETTY_FUNCTION__); }));
            for (g_242 = 0; (g_242 <= 3); g_242 += 1)
            {
                uint8_t l_603 = 0xAE;
                int32_t *l_619 = &g_71;
                uint32_t l_625 = 0xBFA24088;
                int i;
            }
            if (g_323[l_562])
                continue;
        }
    }
    ((void) sizeof ((p_19 == &l_555 || p_19 == 0) ? 1 : 0), __extension__ ({ if (p_19 == &l_555 || p_19 == 0) ; else __assert_fail ("p_19 == &l_555 || p_19 == 0", "/tmp/tmp0ann79c_.c", 171, __extension__ __PRETTY_FUNCTION__); }));
    for (g_14 = 0; (g_14 > (-10)); --g_14)
    {
        int32_t **l_639 = &g_70;
        (*l_639) = &p_18;
        ((void) sizeof ((g_70 == &p_18) ? 1 : 0), __extension__ ({ if (g_70 == &p_18) ; else __assert_fail ("g_70 == &p_18", "/tmp/tmp0ann79c_.c", 177, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_70 == &p_18 || g_70 == &g_71 || g_70 == 0 || g_70 == &g_14) ? 1 : 0), __extension__ ({ if (g_70 == &p_18 || g_70 == &g_71 || g_70 == 0 || g_70 == &g_14) ; else __assert_fail ("g_70 == &p_18 || g_70 == &g_71 || g_70 == 0 || g_70 == &g_14", "/tmp/tmp0ann79c_.c", 180, __extension__ __PRETTY_FUNCTION__); }));
    for (l_555 = 0; (l_555 > 26); l_555 = safe_add_func_int32_t_s_s(l_555, 2))
    {
        int32_t **l_642 = &g_70;
        (*l_642) = (****g_556);
        ((void) sizeof ((g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == 0) ; else __assert_fail ("g_70 == 0", "/tmp/tmp0ann79c_.c", 186, __extension__ __PRETTY_FUNCTION__); }));
    }
    return l_643;
}
static uint16_t func_29(int32_t ** p_30, int32_t p_31)
{
    int32_t **l_47 = &g_6;
    int32_t l_53 = (-9);
    int32_t **l_327 = &g_6;
    int32_t *l_525 = &g_14;
    int32_t l_540 = 0;
    if ((func_32(((safe_add_func_int16_t_s_s(((((p_30 != p_30) | ((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u((((func_42(p_31, l_47, (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((~0x2059515E), (l_53 || (func_54(&g_14, (safe_div_func_int32_t_s_s(func_60(func_63(p_31, ((0U || g_11) >= g_14), l_53, &g_14), g_323[0]), 4U)), g_11) , g_323[5])))), 4294967289U)), l_327) , (void*)0) != (*l_327)) | g_323[0]), 0x3E)) != p_31), 6)) == g_14)) > g_14) ^ p_31), p_31)) < l_53), p_31, (*g_364)) , 0xB8788B76))
    {
        int32_t *l_517 = &g_71;
        int32_t l_518 = (-1);
        int32_t **l_526 = (void*)0;
        int32_t **l_527 = &g_70;
        uint16_t l_535 = 0U;
        int32_t *l_541 = (void*)0;
        int32_t *l_542 = (void*)0;
        for (l_53 = (-7); (l_53 == 11); l_53 = safe_add_func_uint16_t_u_u(l_53, 3))
        {
            uint16_t l_519 = 65535U;
            int32_t *l_522 = &g_71;
            int32_t **l_523 = (void*)0;
            int32_t **l_524 = &g_70;
            for (g_242 = 0; (g_242 > 17); g_242 = safe_add_func_uint8_t_u_u(g_242, 1))
            {
                int32_t ****l_512 = &g_363;
                int32_t *****l_511 = &l_512;
                int32_t **l_513 = (void*)0;
                int32_t **l_514 = &g_70;
                (*l_511) = &g_363;
                (*l_514) = (void*)0;
                for (p_31 = (-29); (p_31 < 10); p_31++)
                {
                    l_517 = (**g_363);
                    ((void) sizeof ((l_517 == 0) ? 1 : 0), __extension__ ({ if (l_517 == 0) ; else __assert_fail ("l_517 == 0", "/tmp/tmp0ann79c_.c", 234, __extension__ __PRETTY_FUNCTION__); }));
                    l_519 = l_518;
                    for (l_519 = 0; (l_519 != 44); ++l_519)
                    {
                        return g_322;
                    }
                }
                l_522 = (**g_363);
                ((void) sizeof ((l_522 == 0) ? 1 : 0), __extension__ ({ if (l_522 == 0) ; else __assert_fail ("l_522 == 0", "/tmp/tmp0ann79c_.c", 243, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((l_522 == 0 || l_522 == &g_71) ? 1 : 0), __extension__ ({ if (l_522 == 0 || l_522 == &g_71) ; else __assert_fail ("l_522 == 0 || l_522 == &g_71", "/tmp/tmp0ann79c_.c", 246, __extension__ __PRETTY_FUNCTION__); }));
            (*l_524) = (void*)0;
            if (p_31)
                break;
        }
        ((void) sizeof ((l_517 == 0 || l_517 == &g_71) ? 1 : 0), __extension__ ({ if (l_517 == 0 || l_517 == &g_71) ; else __assert_fail ("l_517 == 0 || l_517 == &g_71", "/tmp/tmp0ann79c_.c", 252, __extension__ __PRETTY_FUNCTION__); }));
        (*l_527) = l_525;
        ((void) sizeof ((g_70 == &g_14) ? 1 : 0), __extension__ ({ if (g_70 == &g_14) ; else __assert_fail ("g_70 == &g_14", "/tmp/tmp0ann79c_.c", 255, __extension__ __PRETTY_FUNCTION__); }));
        g_71 = (((p_31 && (g_11 <= (~((g_71 | ((((((safe_add_func_uint16_t_u_u((g_323[0] & ((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(l_535, 14)) , (((*l_525) ^ (((((safe_sub_func_int8_t_s_s((*l_525), ((g_11 & (safe_add_func_int8_t_s_s((0x2FC90116 <= p_31), p_31))) , (-1)))) , l_540) , 0x0F) < p_31) || (**l_527))) > g_322)) & 0x8220E7C5), p_31)) , 0U)), p_31)) , 65535U) <= p_31) || g_98) , (**l_527)) < p_31)) < p_31)))) || p_31) && g_98);
    }
    else
    {
        return g_151;
    }
    ((void) sizeof ((g_70 == &g_14) ? 1 : 0), __extension__ ({ if (g_70 == &g_14) ; else __assert_fail ("g_70 == &g_14", "/tmp/tmp0ann79c_.c", 263, __extension__ __PRETTY_FUNCTION__); }));
    return p_31;
}
static uint32_t func_32(uint16_t p_33, uint16_t p_34, int32_t * p_35)
{
    int32_t l_502 = 0xA4CF50FF;
    uint32_t l_503 = 1U;
    int32_t l_504 = 0xD8EBAD7C;
    int32_t **l_506 = &g_70;
    for (g_98 = 0; (g_98 <= 8); g_98 += 1)
    {
        int32_t **l_485 = &g_70;
        int8_t l_505 = 4;
        (*l_485) = p_35;
        ((void) sizeof ((g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == 0) ; else __assert_fail ("g_70 == 0", "/tmp/tmp0ann79c_.c", 285, __extension__ __PRETTY_FUNCTION__); }));
        for (p_33 = 1; (p_33 <= 8); p_33 += 1)
        {
            int i;
            l_504 = (g_323[p_33] > (safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((g_323[p_33] == ((safe_rshift_func_uint8_t_u_s((p_33 > ((((-2) & 0x83) < p_34) | (p_34 || ((((((safe_div_func_uint16_t_u_u(p_33, p_34)) == l_502) ^ 0x1E82) , 0) , (*g_364)) != p_35)))), 2)) == p_33)), g_323[0])), p_34)), p_33)), g_71)), 4)) , (*g_363)) != &p_35), l_503)));
        }
        if (p_33)
            break;
        for (l_503 = 0; (l_503 <= 8); l_503 += 1)
        {
            for (l_502 = 0; (l_502 <= 8); l_502 += 1)
            {
                if (l_505)
                    break;
                (*l_485) = (*g_364);
            }
        }
    }
    (*l_506) = (*g_364);
    ((void) sizeof ((g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == 0) ; else __assert_fail ("g_70 == 0", "/tmp/tmp0ann79c_.c", 305, __extension__ __PRETTY_FUNCTION__); }));
    return g_98;
}
static int32_t func_42(uint32_t p_43, int32_t ** p_44, int8_t p_45, int32_t ** p_46)
{
    int32_t l_329 = 0;
    int32_t *l_336 = &g_71;
    int32_t ***l_365[3][1];
    uint32_t l_419 = 0x6E167663;
    uint32_t l_461 = 0x6B59CE90;
    uint32_t l_481 = 1U;
    uint8_t l_484 = 0xDE;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_365[i][j] = &g_364;
    }
    if ((((+l_329) < ((((safe_mod_func_uint32_t_u_u(1U, (((0xAF14 ^ (((safe_mod_func_int16_t_s_s((g_98 != (p_45 != p_45)), 1U)) == 0x980E) != (l_329 && 246U))) , (-6)) , l_329))) , p_45) <= 1U) & p_43)) | g_151))
    {
        int32_t *l_340 = &g_71;
        int32_t **l_346 = (void*)0;
        int32_t **l_347 = &l_340;
        int32_t l_410 = (-9);
        for (p_45 = 0; (p_45 <= (-19)); p_45--)
        {
            int32_t **l_337 = (void*)0;
            int32_t **l_338 = (void*)0;
            int32_t **l_339 = (void*)0;
            l_340 = l_336;
        }
        (*l_347) = ((safe_lshift_func_uint8_t_u_u((g_323[3] <= (safe_rshift_func_int16_t_s_s((*l_340), 2))), (+g_322))) , (void*)0);
        ((void) sizeof ((l_340 == 0) ? 1 : 0), __extension__ ({ if (l_340 == 0) ; else __assert_fail ("l_340 == 0", "/tmp/tmp0ann79c_.c", 345, __extension__ __PRETTY_FUNCTION__); }));
        for (p_45 = (-26); (p_45 == 5); p_45 = safe_add_func_uint8_t_u_u(p_45, 7))
        {
            uint8_t l_362 = 0x26;
            int32_t **l_388[9][7] = {{(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}, {(void*)0, &g_70, (void*)0, &l_340, (void*)0, &g_70, (void*)0}};
            int i, j;
        }
        l_410 = (safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(p_45, 6)) >= (((p_43 != (!((safe_rshift_func_int16_t_s_s(p_45, ((safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((p_44 != (void*)0), ((((safe_add_func_uint8_t_u_u(p_45, (safe_mod_func_int16_t_s_s(((p_45 || ((safe_div_func_uint8_t_u_u((&l_340 == (void*)0), (-8))) ^ p_43)) >= g_14), 0x898C)))) , g_14) != g_98) , 255U))), (*l_336))) | (*l_336)), p_45)) == p_43))) && g_323[7]))) >= p_43) , 1)) < g_323[0]), 0x9DEFC572)) , 4U) == g_323[5]), (-8)));
    }
    else
    {
        int32_t l_411 = 1;
        int32_t *l_412 = &g_71;
        int32_t ***l_421 = &g_364;
        uint16_t l_458 = 0x1EB2;
        uint32_t l_475[4][4] = {{9U, 9U, 1U, 9U}, {9U, 9U, 1U, 9U}, {9U, 9U, 1U, 9U}, {9U, 9U, 1U, 9U}};
        int i, j;
lbl_440:
        (*l_336) = l_411;
        l_412 = l_412;
        g_363 = l_365[2][0];
        for (l_329 = 0; (l_329 != 8); l_329 = safe_add_func_uint16_t_u_u(l_329, 4))
        {
            int32_t *l_415 = &g_71;
            uint32_t l_418 = 0xD61B4E32;
            uint8_t l_476 = 0xE0;
            l_415 = (**g_363);
            ((void) sizeof ((l_415 == 0) ? 1 : 0), __extension__ ({ if (l_415 == 0) ; else __assert_fail ("l_415 == 0", "/tmp/tmp0ann79c_.c", 373, __extension__ __PRETTY_FUNCTION__); }));
            if ((((((((safe_mod_func_int8_t_s_s((l_418 | (((1 & (((g_11 , (((((l_419 && (((~g_11) < ((0U < g_71) && ((*p_46) != l_412))) <= p_43)) != 0x28) != (*l_412)) , p_43) & (*l_412))) | (*l_412)) ^ 0xF0A3)) , (**g_363)) == l_412)), 5)) & 0x35144D63) != 2) , &p_46) != l_421) && p_43) | (*l_412)))
            {
                if ((*l_336))
                    break;
            }
            else
            {
                int32_t *l_430 = (void*)0;
                int32_t **l_443 = &l_336;
                l_415 = (**g_363);
                (*l_336) = (1 | (0x06B7106A == ((*g_363) == (*g_363))));
                if (p_45)
                {
                    uint8_t l_433 = 0U;
                    for (g_98 = 29; (g_98 <= (-2)); g_98--)
                    {
                        uint32_t l_434 = 0xFDA7249E;
                        (*l_412) = (((((*g_364) != (**g_363)) && (g_14 != (((safe_add_func_uint16_t_u_u(((g_11 <= ((*l_412) ^ g_14)) != (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((l_430 == ((255U >= (((safe_add_func_uint32_t_u_u(((**g_363) != (*p_44)), 0U)) , p_43) & p_43)) , (**g_363))), (*l_336))), l_433))), p_43)) < l_434) && p_45))) ^ p_43) <= p_43);
                        l_430 = (**g_363);
                        l_430 = (*p_44);
                    }
                }
                else
                {
                    int32_t l_435 = 0xFAB284F1;
                    int16_t l_438 = 0x37AB;
                    int32_t ***l_439[5][3][9] = {{{&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}}, {{&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}}, {{&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}}, {{&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}}, {{&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}}};
                    int i, j, k;
                    if (((6U < (l_435 <= (((((safe_div_func_uint32_t_u_u(g_98, ((((l_438 > ((p_45 , l_439[1][0][4]) == &g_364)) || (p_43 && 2)) | g_322) , (*l_412)))) , 0x9D) != 1) == g_242) < (*l_412)))) | 0xC422))
                    {
                        if (g_151)
                            goto lbl_440;
                        (*l_336) = ((safe_lshift_func_uint16_t_u_u((((g_14 , p_44) != (*g_363)) & (l_443 == p_44)), 6)) & ((*g_363) != p_44));
                        l_415 = (*g_364);
                    }
                    else
                    {
                        uint32_t l_451[5][9][5] = {{{0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}}, {{0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}}, {{0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}}, {{0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}}, {{0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}, {0x9A9F4F74, 0x5EA7516B, 0xC07B9985, 0x2C887AEE, 0xEDDCC781}}};
                        uint8_t l_452 = 1U;
                        int i, j, k;
                        (*l_336) = ((((((p_43 | (((((safe_add_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((*g_363) != (*g_363)), g_151)) != (g_151 == ((0xC4 >= (*l_412)) < ((safe_sub_func_uint32_t_u_u((0x7D53E825 < (~(p_43 > 0x547D))), 1)) | 65528U)))) | 1), p_43)) ^ 0) || p_45) ^ p_43) || l_451[3][6][1])) , (-1)) , 0xA2B3) , p_43) ^ g_151) & l_452);
                        (*l_443) = ((l_451[3][6][1] != (((!(p_45 <= 0x1B)) , 1) == (safe_rshift_func_int16_t_s_u((((**g_363) != (*p_44)) ^ g_242), ((p_43 & ((safe_sub_func_uint8_t_u_u(((l_452 > p_43) > g_151), l_458)) || 2U)) && 65526U))))) , (void*)0);
                        ((void) sizeof ((l_336 == 0) ? 1 : 0), __extension__ ({ if (l_336 == 0) ; else __assert_fail ("l_336 == 0", "/tmp/tmp0ann79c_.c", 417, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((l_336 == 0 || l_336 == &g_71) ? 1 : 0), __extension__ ({ if (l_336 == 0 || l_336 == &g_71) ; else __assert_fail ("l_336 == 0 || l_336 == &g_71", "/tmp/tmp0ann79c_.c", 420, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_336 == 0 || l_336 == &g_71) ? 1 : 0), __extension__ ({ if (l_336 == 0 || l_336 == &g_71) ; else __assert_fail ("l_336 == 0 || l_336 == &g_71", "/tmp/tmp0ann79c_.c", 423, __extension__ __PRETTY_FUNCTION__); }));
                return g_98;
            }
            (*l_412) = (((void*)0 != (*g_363)) ^ ((safe_sub_func_int8_t_s_s(g_98, ((l_461 != (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(5, (*l_412))), ((+(safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((*g_363) == ((p_45 != ((((safe_rshift_func_uint8_t_u_u(g_11, p_43)) || l_475[3][2]) ^ g_242) , g_98)) , (void*)0)), g_98)), l_418))) , 0x1E54))), 0))) && 250U))) , l_476));
        }
    }
    (*l_336) = (safe_add_func_int8_t_s_s((+(((*p_44) != (*p_46)) , (((((void*)0 != (*g_363)) , (((~g_323[0]) ^ ((p_45 , l_481) , p_45)) , ((((safe_mod_func_int16_t_s_s((((void*)0 != (*g_363)) > g_98), 0x51E9)) || l_484) , 0x8A81) >= 6))) > (*l_336)) || p_45))), g_11));
    return g_14;
}
static uint32_t func_54(int32_t * p_55, int8_t p_56, uint16_t p_57)
{
    int32_t **l_325[2];
    int32_t ***l_324 = &l_325[1];
    int8_t l_326 = 0x47;
    int i;
    for (i = 0; i < 2; i++)
        l_325[i] = &g_70;
    (*l_324) = &p_55;
    return l_326;
}
inline static int32_t func_60(int8_t p_61, int8_t p_62)
{
    return p_62;
}
static int8_t func_63(uint32_t p_64, int16_t p_65, int32_t p_66, int32_t * p_67)
{
    int32_t *l_68[3];
    int32_t **l_69[4][3][2] = {{{&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}}, {{&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}}, {{&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}}, {{&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}, {&l_68[1], &l_68[1]}}};
    int32_t *l_114[2][7] = {{&g_71, (void*)0, &g_71, (void*)0, &g_71, (void*)0, &g_71}, {&g_71, (void*)0, &g_71, (void*)0, &g_71, (void*)0, &g_71}};
    uint32_t l_174 = 1U;
    uint32_t l_188[2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_68[i] = &g_14;
    for (i = 0; i < 2; i++)
        l_188[i] = 0x38AAF256;
lbl_86:
    g_70 = l_68[1];
    ((void) sizeof ((g_70 == 0 || g_70 == &g_14) ? 1 : 0), __extension__ ({ if (g_70 == 0 || g_70 == &g_14) ; else __assert_fail ("g_70 == 0 || g_70 == &g_14", "/tmp/tmp0ann79c_.c", 485, __extension__ __PRETTY_FUNCTION__); }));
    g_71 = (&g_14 == &g_14);
    if (((safe_mod_func_int32_t_s_s((p_64 > (&p_67 != (void*)0)), g_71)) != ((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(0U, (((((+(p_66 | 0x1BD9F019)) >= (safe_mod_func_int16_t_s_s(((void*)0 != &g_70), 0xF632))) , 0xBFD7) & g_14) || p_64))), (*p_67))) || p_64)))
    {
        uint16_t l_81 = 1U;
        int32_t l_89 = 0x0B5DC3D3;
        g_70 = (void*)0;
        ((void) sizeof ((g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == 0) ; else __assert_fail ("g_70 == 0", "/tmp/tmp0ann79c_.c", 493, __extension__ __PRETTY_FUNCTION__); }));
        l_81 = (*p_67);
        if (((246U > (l_81 >= g_14)) & (((p_64 , &p_67) == &g_6) ^ (safe_rshift_func_uint8_t_u_u(((((g_71 < l_81) , ((void*)0 != &l_68[2])) & l_81) < (-10)), 4)))))
        {
            int32_t *l_97 = (void*)0;
            uint8_t l_138 = 0xEE;
            uint32_t l_149 = 0xCEBDE3C2;
            for (p_64 = 0; (p_64 > 47); p_64 = safe_add_func_int32_t_s_s(p_64, 3))
            {
                int32_t *l_93 = &g_71;
                uint32_t l_96 = 1U;
                for (l_81 = 0; (l_81 <= 2); l_81 += 1)
                {
                    int8_t l_92 = (-7);
                    int i;
                    for (p_66 = 0; (p_66 <= 1); p_66 += 1)
                    {
                        if (p_66)
                            goto lbl_86;
                    }
                    (*l_93) = (((safe_add_func_int16_t_s_s(((0xFD1E == (((g_71 , l_89) | 0xFFB2) , (safe_mod_func_int8_t_s_s((g_71 & l_92), g_14)))) >= (l_93 != ((safe_rshift_func_int8_t_s_s(((p_66 , (void*)0) == &g_71), 7)) , (void*)0))), g_14)) < 0xF1) & l_96);
                    l_68[l_81] = l_97;
                    for (g_71 = 0; (g_71 <= 1); g_71 += 1)
                    {
                        int i, j, k;
                        g_98 = (*p_67);
                        p_66 = 0;
                    }
                }
                for (g_71 = 0; (g_71 <= 3); g_71++)
                {
                    uint8_t l_111 = 254U;
                    uint32_t l_116 = 0x16AA2C9F;
                    int32_t *l_164 = &g_71;
                    p_66 = (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((&g_70 != ((safe_sub_func_int8_t_s_s(0x7C, (l_111 , (safe_sub_func_int8_t_s_s((l_114[0][3] == l_93), (~((g_14 | g_11) == g_71))))))) , (void*)0)), 1)) > l_89) == (*p_67)), p_64)) > l_81) , p_64), 2)) , g_11), 0x7B07));
                    l_116 = 0xFC4CEA79;
                    if ((p_64 , (((p_66 ^ 0) == ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((((((p_66 , ((((safe_rshift_func_uint8_t_u_s(g_14, ((safe_rshift_func_int8_t_s_u(((g_11 ^ (safe_add_func_uint16_t_u_u(((((g_14 >= (((((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(0x1BA0, (safe_unary_minus_func_uint16_t_u(0xED91)))), 14)), l_138)) , g_98) , 1) | p_66) ^ 0) != 0x6D) <= p_65)) || g_98) >= p_66) != (*p_67)), p_66))) != (-1)), 1)) , p_65))) , l_89) <= 1) && p_64)) | (*p_67)) & p_65) || l_81) > l_116) == (*p_67)) , (*l_93)) >= l_111), l_116)), 0)) < g_14), 13)) < g_98)) | 7U)))
                    {
                        int32_t l_150 = 3;
                        g_151 = (&g_71 == ((&g_71 == (void*)0) , (((((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_116, ((((safe_rshift_func_int16_t_s_s(p_64, (p_66 && g_98))) | l_89) || (g_14 >= 2U)) == p_65))) || p_65), l_149)) || p_66), g_11)) , 1) <= l_150) >= 0x04) , (void*)0)));
                        l_89 = (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(p_64, 4)) , ((safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(l_111, (0xFB6B4A24 < (p_66 > ((safe_sub_func_int8_t_s_s(0x92, ((*l_93) == (*p_67)))) , 65535U))))) < ((((*p_67) == 1U) | l_81) > g_71)) == l_150), 0x00D04547)) || 0U)), 5)) != g_98) > (-3));
                    }
                    else
                    {
                        g_70 = l_164;
                        ((void) sizeof ((g_70 == &g_71) ? 1 : 0), __extension__ ({ if (g_70 == &g_71) ; else __assert_fail ("g_70 == &g_71", "/tmp/tmp0ann79c_.c", 539, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    p_66 = ((g_11 , (g_11 >= (((((safe_sub_func_uint32_t_u_u((g_98 >= g_151), (!((safe_div_func_int16_t_s_s((((((0x2B != ((((safe_sub_func_uint16_t_u_u(((l_89 , (&l_93 == (void*)0)) != g_14), p_65)) || 65529U) , p_65) || (-10))) > (*p_67)) || p_65) , p_66) , (-3)), g_151)) ^ (*l_164))))) <= 0xA22E) && 255U) ^ p_65) ^ g_71))) || p_65);
                }
            }
            ((void) sizeof ((g_70 == &g_71 || g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == &g_71 || g_70 == 0) ; else __assert_fail ("g_70 == &g_71 || g_70 == 0", "/tmp/tmp0ann79c_.c", 545, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            g_70 = &g_71;
            ((void) sizeof ((g_70 == &g_71) ? 1 : 0), __extension__ ({ if (g_70 == &g_71) ; else __assert_fail ("g_70 == &g_71", "/tmp/tmp0ann79c_.c", 551, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_70 == &g_71 || g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == &g_71 || g_70 == 0) ; else __assert_fail ("g_70 == &g_71 || g_70 == 0", "/tmp/tmp0ann79c_.c", 554, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *l_172 = &g_71;
        l_172 = &g_71;
        return g_71;
    }
    ((void) sizeof ((g_70 == &g_71 || g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == &g_71 || g_70 == 0) ; else __assert_fail ("g_70 == &g_71 || g_70 == 0", "/tmp/tmp0ann79c_.c", 563, __extension__ __PRETTY_FUNCTION__); }));
    if (((*p_67) , (*p_67)))
    {
        int32_t *l_173 = (void*)0;
        int8_t l_177 = (-7);
        int16_t l_204 = (-8);
        p_67 = l_173;
        ((void) sizeof ((p_67 == 0) ? 1 : 0), __extension__ ({ if (p_67 == 0) ; else __assert_fail ("p_67 == 0", "/tmp/tmp0ann79c_.c", 571, __extension__ __PRETTY_FUNCTION__); }));
        g_70 = l_173;
        ((void) sizeof ((g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == 0) ; else __assert_fail ("g_70 == 0", "/tmp/tmp0ann79c_.c", 574, __extension__ __PRETTY_FUNCTION__); }));
        p_66 = ((l_174 , (safe_add_func_uint32_t_u_u(g_71, ((65527U == (l_177 != (safe_sub_func_int32_t_s_s((((((((safe_sub_func_uint16_t_u_u((p_66 , (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(0x692C9271, 0x3CD63981)) | (p_66 || 0xC6)), g_151)), g_14))), (-7))) || 0x9D2C2FFD) | g_98) && 1U) || g_98) , g_14) , l_188[0]), p_66)))) || p_66)))) , 0xD170816E);
        for (p_65 = 2; (p_65 >= 0); p_65 -= 1)
        {
            int32_t l_198 = (-7);
            int16_t l_205 = 0x1B89;
            int i;
            if ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((p_65 > l_177), (((((+(safe_lshift_func_int16_t_s_s((((safe_div_func_int32_t_s_s(l_198, 0x276FF74A)) , ((4 != (p_64 < (safe_mod_func_uint32_t_u_u(((((~g_11) || (safe_div_func_int16_t_s_s(g_11, (((p_66 & g_98) | p_65) , 0xBC90)))) , 0xCDC9E869) , l_204), p_64)))) , (-1))) , (-5)), 11))) , 0x8D) , l_173) != (void*)0) || l_205))), 9)))
            {
                uint16_t l_222 = 0x410F;
                int i;
                g_71 = (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((g_71 , (safe_mod_func_int8_t_s_s(p_65, g_71))), 15)), g_71)), (l_222 | ((safe_sub_func_int8_t_s_s((p_66 > p_64), ((g_151 | ((void*)0 == &g_71)) == p_64))) != g_98)))), p_65)), 13)), 8)) != p_64) & p_66);
                l_68[p_65] = &g_14;
                p_67 = l_68[p_65];
            }
            else
            {
                uint32_t l_225 = 3U;
                l_225 = l_177;
            }
            if (p_65)
                break;
        }
        ((void) sizeof ((p_67 == 0 || p_67 == &g_14) ? 1 : 0), __extension__ ({ if (p_67 == 0 || p_67 == &g_14) ; else __assert_fail ("p_67 == 0 || p_67 == &g_14", "/tmp/tmp0ann79c_.c", 598, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *l_228 = &g_71;
        uint32_t l_241[10][5] = {{4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}, {4294967295U, 4294967294U, 4294967294U, 4294967295U, 0xA90C5504}};
        int i, j;
        for (g_98 = (-9); (g_98 < (-21)); --g_98)
        {
            uint16_t l_236[4] = {0xFC47, 1U, 0xFC47, 1U};
            int32_t **l_246 = (void*)0;
            int i;
        }
        return g_323[0];
    }
    ((void) sizeof ((p_67 == 0 || p_67 == &g_14) ? 1 : 0), __extension__ ({ if (p_67 == 0 || p_67 == &g_14) ; else __assert_fail ("p_67 == 0 || p_67 == &g_14", "/tmp/tmp0ann79c_.c", 614, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_70 == 0) ? 1 : 0), __extension__ ({ if (g_70 == 0) ; else __assert_fail ("g_70 == 0", "/tmp/tmp0ann79c_.c", 615, __extension__ __PRETTY_FUNCTION__); }));
    return g_322;
}
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_11;
    csmith_sink_ = g_14;
    csmith_sink_ = g_71;
    csmith_sink_ = g_98;
    csmith_sink_ = g_151;
    csmith_sink_ = g_242;
    csmith_sink_ = g_322;
    for (i = 0; i < 9; i++)
    {
        csmith_sink_ = g_323[i];
    }
    csmith_sink_ = g_605;
    csmith_sink_ = g_620;
    platform_main_end(0,0);
    return 0;
}
