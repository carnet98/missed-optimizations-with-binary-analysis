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
static int8_t g_10 = 0x1FL;
static int8_t g_11 = 0x6EL;
static int64_t g_56 = (-5L);
static uint8_t g_71 = 255UL;
static uint8_t g_75 = 0xF6L;
static uint16_t g_108 = 0xF8D9L;
static int32_t g_110 = (-2L);
static uint8_t g_156 = 9UL;
static uint8_t g_157 = 0x90L;
static int8_t g_160 = 0x80L;
static uint16_t g_184 = 1UL;
static uint32_t g_209 = 0xD512F4ECL;
static int8_t g_211 = 0x19L;
static int32_t g_311 = 1L;
static int8_t g_312 = 0x21L;
static uint16_t g_313 = 4UL;
static uint32_t g_325 = 0x919F614CL;
static int32_t g_362 = 0xB42ADA26L;
static uint32_t g_363 = 4294967295UL;
static int16_t g_410 = (-1L);
static int32_t g_436 = 8L;
static int32_t g_437 = 0x1F3B268BL;
static uint64_t g_518 = 18446744073709551610UL;
static int64_t g_599 = 0x215F6A51E5C8BFADLL;
static uint32_t g_615 = 1UL;
static int64_t g_765 = 5L;
static int8_t g_1134 = 1L;
static int64_t func_1(void);
static uint8_t func_8(int32_t p_9);
static int32_t func_12(uint32_t p_13, int8_t p_14);
static int8_t func_17(uint32_t p_18, int32_t p_19, uint64_t p_20, uint16_t p_21);
static int8_t func_34(int16_t p_35, uint16_t p_36, uint16_t p_37);
static int8_t func_38(uint32_t p_39, uint32_t p_40, int8_t p_41, uint64_t p_42);
static uint16_t func_43(uint64_t p_44, int32_t p_45, int16_t p_46);
static uint32_t func_47(int32_t p_48, int16_t p_49, uint8_t p_50, int8_t p_51);
static uint64_t func_65(int64_t p_66, int8_t p_67, int64_t p_68, int8_t p_69, uint32_t p_70);
static uint8_t func_72(int32_t p_73, int16_t p_74);
static int64_t func_1(void)
{
    uint32_t l_1118 = 8UL;
    int32_t l_1119 = (-1L);
    uint64_t l_1133 = 5UL;
    int32_t l_1135 = 0xE412D0BEL;
    uint8_t l_1136 = 0x55L;
    int32_t l_1137 = 0xFA2331EDL;
    l_1137 = ((((safe_add_func_int8_t_s_s(((l_1135 = ((l_1119 = (safe_mul_func_uint16_t_u_u((l_1118 = ((safe_mul_func_uint8_t_u_u(func_8(g_10), g_311)) ^ 1L)), 0x13EDL))) || ((g_325 = ((safe_rshift_func_int8_t_s_s(0L, 4)) <= (+(g_156 = ((safe_div_func_uint32_t_u_u(9UL, (safe_sub_func_uint8_t_u_u((g_518 ^ ((safe_add_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((l_1136 = (((g_1134 = ((g_765 ^ l_1133) | l_1118)) > l_1135) == g_75)), 15)), g_10)) != 18446744073709551615UL) || 0xBA0BE7359FC942ECLL), 65535UL)) != l_1119)), l_1119)))) != g_209))))) && 0xFC529904L))) | g_311), l_1133)) <= g_311) > g_311) == 0UL);
    l_1119 = (~((((safe_mod_func_int16_t_s_s(g_108, g_156)) | (((1UL < ((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(g_184, 0UL)), (safe_rshift_func_uint8_t_u_s(0x67L, 1)))) <= l_1133)) & l_1135) > l_1136)) > 0L) > 0x055FB265L));
    return l_1133;
}
static uint8_t func_8(int32_t p_9)
{
    uint32_t l_31 = 2UL;
    int32_t l_494 = (-1L);
    int32_t l_652 = 6L;
    int64_t l_745 = 0L;
    uint8_t l_794 = 0xE8L;
    uint32_t l_804 = 5UL;
    uint32_t l_880 = 4294967295UL;
    uint16_t l_1015 = 1UL;
    int32_t l_1074 = 0x48C77FE8L;
    int8_t l_1107 = 1L;
    g_11 = p_9;
    if (func_12(p_9, (safe_sub_func_int8_t_s_s(func_17((+(l_494 = ((9UL >= (0x924B5411L >= ((safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_31, (safe_sub_func_uint32_t_u_u(g_10, (func_34(l_31, g_11, (func_38((func_43((((g_11 | g_10) || l_31) != 0x214F1636L), l_31, p_9) != g_10), g_11, l_31, g_10) ^ 0UL)) && l_31))))), 0x61B3L)) > g_11), l_31)) >= (-7L)), 0x33L)) & 1UL))) > g_11))), l_31, g_10, p_9), l_31))))
    {
        int16_t l_621 = 0xADEBL;
        int32_t l_630 = 4L;
        int32_t l_643 = 1L;
        uint8_t l_675 = 0x77L;
        int16_t l_926 = 0L;
        int32_t l_962 = 0x63C5144DL;
        int8_t l_1038 = 0x94L;
        if (p_9)
        {
            int8_t l_602 = 0xD7L;
            if ((g_209 && ((l_602 = (p_9 > g_56)) > g_211)))
            {
                int32_t l_603 = 0xE9378FC5L;
                l_603 = l_31;
                for (g_518 = 0; (g_518 >= 33); g_518 = safe_add_func_int32_t_s_s(g_518, 2))
                {
                    int32_t l_614 = 0x4B93AC51L;
                    l_614 = (p_9 = (l_494 = (p_9 == (safe_add_func_int8_t_s_s(p_9, ((l_602 < (p_9 == (l_603 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((p_9 | p_9), 13)), l_603))))) & l_602))))));
                    g_436 = (l_494 = (g_615 ^ (l_614 = 0x51L)));
                    p_9 = g_156;
                }
            }
            else
            {
                g_362 = 0x7B714C4DL;
                p_9 = (((safe_sub_func_int8_t_s_s((~((safe_add_func_uint32_t_u_u(l_621, ((safe_div_func_uint16_t_u_u(l_494, g_410)) ^ g_211))) == (0xA540L ^ ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0x0EL, 1)), 14)) <= (safe_rshift_func_uint16_t_u_s(0x1A87L, 12)))))), ((l_602 && l_630) == g_599))) != g_362) ^ g_313);
            }
        }
        else
        {
            int32_t l_653 = 0x6D31CFA2L;
            int32_t l_677 = 0xF87A171AL;
            uint64_t l_678 = 0UL;
            if ((g_10 && (l_494 <= (l_653 = (l_652 = (g_71 && (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(l_621, 0x894BFF71L)), 5)) & (((((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((l_643 = p_9), (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((l_621 && (g_211 ^ ((safe_mod_func_int8_t_s_s(g_599, (-1L))) < 0x52L))) != 0xBC500860L), p_9)), g_599)), 1UL)))), p_9)) || g_110) != p_9) && p_9) > p_9)), g_312))))))))
            {
                int64_t l_670 = (-4L);
                int32_t l_798 = 0x6459B07DL;
                int32_t l_803 = 1L;
                if (((g_363 = (safe_mul_func_uint8_t_u_u(l_652, 0x33L))) == p_9))
                {
                    uint32_t l_676 = 8UL;
                    g_436 = (safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((p_9 ^ 9L) == (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((l_676 = ((safe_div_func_uint8_t_u_u((1L & (l_653 = 3L)), (safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((l_670 = 0x81A7689CL), (l_643 = g_184))), 4)))) & ((safe_rshift_func_int16_t_s_s(p_9, 15)) == ((safe_mul_func_uint16_t_u_u((g_108 > g_437), l_621)) > l_675)))), l_494)), l_677))), l_678)) ^ g_71), 1));
                }
                else
                {
                    uint32_t l_683 = 0x8A29CE08L;
                    p_9 = ((((safe_mod_func_int32_t_s_s((((((g_362 = (safe_div_func_int64_t_s_s((l_683 = p_9), (-3L)))) == (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(p_9, 11)) > 2L), (+5UL)))) >= g_615) | (l_643 = (safe_add_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(((0xB2803182638C486ALL ^ (((((safe_add_func_uint64_t_u_u((5L ^ (g_71 <= p_9)), 0xA026383328BE9F7ALL)) == 1UL) & 0UL) & l_678) | g_312)) & p_9), 1)), 0xA787EC15DDF59568LL)), 2)) || 18446744073709551615UL) | p_9) <= p_9), g_312)))) ^ p_9), p_9)) && p_9) == p_9) == g_615);
                }
                p_9 = l_670;
                if ((0x31L != (safe_add_func_int16_t_s_s(l_653, (safe_lshift_func_int16_t_s_s((~g_56), (((safe_mul_func_uint16_t_u_u(((p_9 = (g_436 = g_184)) <= (l_670 >= l_678)), ((~(l_653 > 0x07B0FC9665A1C0EELL)) ^ (g_363 = (safe_div_func_uint8_t_u_u(0UL, l_630)))))) > 0x9E65F1AFBDEDD947LL) && g_209)))))))
                {
                    int64_t l_761 = 0L;
                    int32_t l_766 = 0xCFA0F716L;
                    p_9 = (safe_div_func_int32_t_s_s(g_157, ((safe_rshift_func_uint16_t_u_s(g_518, 2)) | (safe_lshift_func_int16_t_s_s(g_313, 3)))));
                    l_652 = (g_362 = (g_313 && (l_643 = (l_652 != (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((g_436 = p_9), 0xC49E4FD6L)), ((p_9 <= ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(p_9, ((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(0x0D62L, g_311)), ((l_494 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((((g_312 < 18446744073709551608UL) > 4294967295UL) <= l_745) ^ 251UL), 2)), l_630)) < 9UL) && 0x8018A1D59A99D01ELL), (-1L))), p_9)) > p_9), g_156)) != g_10), l_745))) >= 0L))), 0xB1EE37CEB4E0953FLL)) & 0xE2L))), g_108)) && (-1L))) == p_9)))))));
                    p_9 = (safe_sub_func_int64_t_s_s(0x2C9004BFDDC99246LL, (safe_lshift_func_uint16_t_u_s(p_9, 5))));
                    if (g_209)
                    {
                        uint8_t l_760 = 0x93L;
                        uint8_t l_762 = 8UL;
                        g_765 = ((safe_mul_func_uint16_t_u_u((0x22L <= 0x4EL), ((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_9 < (l_761 = l_760)), l_762)), 0x30L)), ((p_9 > ((safe_sub_func_int32_t_s_s(p_9, (-6L))) != (-1L))) ^ (-1L)))) & g_56), g_312)) >= 0UL))) >= g_312);
                        l_766 = 0xFE447C7CL;
                        g_362 = ((-1L) <= 0L);
                    }
                    else
                    {
                        uint32_t l_789 = 0x8EF364E8L;
                        int32_t l_790 = 0xCA24EB36L;
                        l_790 = (g_362 = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_643 = g_110), (l_677 = (((safe_rshift_func_uint8_t_u_s(0UL, 1)) >= 0x8F8CD4982FD1BB63LL) != (p_9 < (+p_9)))))), 0)) <= (+(safe_rshift_func_uint8_t_u_u(((l_630 | ((((0xD0C4L | (safe_mod_func_int8_t_s_s(l_675, (g_71 = (((g_75 = (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(l_789, g_437)), 4))) >= p_9) & g_313))))) && 1L) || l_790) > p_9)) && p_9), p_9)))), 0x9168L)), 13)));
                        p_9 = g_599;
                        p_9 = (+((safe_sub_func_uint8_t_u_u((l_803 = ((p_9 <= l_794) < (safe_mul_func_int8_t_s_s(((l_798 = (0x5FL & (l_494 = (!(g_211 = (((p_9 | p_9) >= 0L) & (g_157 = 0UL))))))) < (p_9 != ((((safe_rshift_func_uint8_t_u_s((((((safe_mul_func_int16_t_s_s((g_312 && 0x1CL), (-1L))) != 3L) && l_670) && g_184) != p_9), l_652)) != 3L) & 1L) | 9UL))), 1UL)))), 0x53L)) & l_804));
                    }
                }
                else
                {
                    uint64_t l_835 = 18446744073709551615UL;
                    int32_t l_836 = 1L;
                    if ((safe_add_func_int32_t_s_s((-5L), (safe_mul_func_int8_t_s_s((+((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_s(g_410, 7)))) != g_211)), (safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((!(safe_add_func_int32_t_s_s(g_313, (safe_sub_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u(((l_643 = g_765) > ((3L > (+(l_653 = 0x822DL))) < ((0x78B4661D7D39FCB4LL == g_311) & 0x1BL))), 1UL)) == p_9) != g_312) != g_75) <= p_9), g_599))))) ^ p_9), 6UL)) > g_156) | (-1L)), p_9)))))))
                    {
                        int16_t l_837 = (-1L);
                        g_362 = ((((g_160 || (safe_mul_func_uint8_t_u_u(((p_9 & (l_836 = ((g_436 = ((((l_652 = (((safe_add_func_int16_t_s_s(p_9, (0L & ((l_677 = p_9) > l_31)))) == g_11) == ((0UL < ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((8UL <= 0x3AC1E6FCAB2F0A06LL), 1)), l_670)) || 1UL)) != l_835))) <= p_9) && g_765) == 0xA4L)) < p_9))) == 9UL), l_643))) >= g_363) == 0xB70DC5047EDA6159LL) || p_9);
                        g_362 = (((0xCFECL > l_643) >= l_837) != 254UL);
                    }
                    else
                    {
                        return l_678;
                    }
                    for (g_71 = 0; (g_71 != 32); g_71 = safe_add_func_int32_t_s_s(g_71, 8))
                    {
                        uint32_t l_851 = 0x88B22D75L;
                        g_436 = (safe_mul_func_uint16_t_u_u(((l_836 = (1UL > l_678)) ^ (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(0UL, l_798)), (l_643 >= g_313)))), ((5L ^ 0UL) | (+((l_652 = (safe_sub_func_int64_t_s_s(0xCEA1F4ABE39338CBLL, g_312))) >= l_851)))));
                        g_436 = p_9;
                    }
                }
            }
            else
            {
                uint16_t l_865 = 65535UL;
                int32_t l_866 = 0L;
                uint64_t l_989 = 0UL;
                if (g_325)
                {
                    int32_t l_862 = 0x5A01C0CBL;
                    p_9 = ((0xF8L ^ (safe_div_func_int16_t_s_s(p_9, (safe_sub_func_uint32_t_u_u(0x7AC64666L, l_678))))) > ((safe_sub_func_uint64_t_u_u(0UL, ((safe_div_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s((l_865 = (l_862 <= (0L >= (safe_sub_func_int32_t_s_s(g_11, g_184))))), 0xC0L)) && p_9) || p_9), (-1L))) <= 0x53F2F4CFL))) == l_866));
                    p_9 = (g_436 = p_9);
                }
                else
                {
                    uint8_t l_928 = 246UL;
                    int32_t l_929 = 0x2398CA13L;
                    int32_t l_944 = 0L;
                    int64_t l_963 = 0x53145D303809E6D2LL;
                    int32_t l_988 = (-1L);
                    if ((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((g_11 = (!((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((g_325 = ((safe_mul_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(g_765, l_880)) == ((safe_add_func_int64_t_s_s(((g_363 && (safe_add_func_int64_t_s_s((65535UL < (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(0xFFACL, 9)) & ((p_9 < g_71) ^ (~((p_9 <= (0L <= 0x5629FB11BDF6BB40LL)) <= p_9)))), 4))), p_9))) > p_9), l_866)) & g_436)) | p_9), (-2L))) == 0x64CF22E3L)), g_311)), 15)) || l_880))), g_160)), l_675)))
                    {
                        int64_t l_927 = (-1L);
                        g_362 = (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint64_t_u_u((!(safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(6L, 0UL)), 10))), ((l_929 = (safe_sub_func_int32_t_s_s(((l_643 = (safe_rshift_func_uint8_t_u_s(248UL, 6))) == ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((~9L), g_211)) | ((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_677 = p_9), (~g_437))), (safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(g_211, (safe_mul_func_uint8_t_u_u((l_928 = (safe_lshift_func_int16_t_s_s(((l_926 = (g_599 = (-1L))) >= g_437), l_927))), l_675)))) <= 255UL), l_865)))) != p_9)), 0x354F414471C11EBELL)), 0xDFL)) != p_9), 7)) > 0UL), p_9)) <= 0x9FF6L)), 0x08DBCF43L))) || 0L))) & l_927)));
                        l_677 = ((((safe_mul_func_uint16_t_u_u(0xED30L, g_362)) & (l_643 <= ((safe_mod_func_uint16_t_u_u(((l_653 = (p_9 & (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((l_944 = ((((!0x7F2BL) > (-1L)) | (l_929 = (~(safe_add_func_int16_t_s_s(0L, (((g_362 ^ p_9) | 0x37L) >= 0x63D6DD0E25A16105LL)))))) & p_9)), 0xC377DC63L)) ^ g_156), p_9)))) & 65535UL), g_71)) > 0x55L))) ^ l_928) ^ l_928);
                        l_963 = (safe_div_func_uint16_t_u_u(g_410, (safe_mod_func_uint32_t_u_u((0xCE565BAFB13A689ALL != ((l_643 = (p_9 ^ (!l_944))) == ((l_962 = ((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_75 | g_209), (safe_rshift_func_int16_t_s_s(0x1A2FL, 11)))), (safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((18446744073709551615UL || ((safe_add_func_int64_t_s_s(g_410, 1UL)) ^ 0xE5A259A6L)), g_184)), l_928)))) >= p_9)) != p_9))), g_362))));
                    }
                    else
                    {
                        g_436 = (safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((g_436 ^ (g_362 = l_944)), ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(255UL, (safe_sub_func_uint16_t_u_u((((-1L) == (safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((-2L), 0)) < p_9), ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(l_652, (safe_lshift_func_int8_t_s_s((((l_929 = (l_804 && (safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s((g_410 = (p_9 != 65535UL)), g_518)), p_9)))) || p_9) != l_988), 5)))), 0)) ^ 1L)))) == 0xE30C2346L), g_56)))), 4)) != g_160))) != g_313), p_9));
                    }
                    p_9 = (l_989 | (p_9 ^ 0x7E0E769A47CA6D87LL));
                }
                l_494 = (g_311 && 1UL);
                for (g_615 = 18; (g_615 == 26); g_615 = safe_add_func_uint64_t_u_u(g_615, 1))
                {
                    g_436 = p_9;
                }
            }
            p_9 = (g_56 | (g_518 = (safe_div_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(4L, ((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(5UL, g_75)), (g_156 || (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((l_653 = (g_765 <= ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(((((l_1015 & (g_362 = (((safe_mul_func_uint8_t_u_u((l_677 = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(g_765, (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((g_56 == g_437) || l_677) > g_615), p_9)), l_926)))), 6)) & p_9) <= l_630)), g_363)) != l_653) >= g_56))) ^ 0x5DL) <= g_156) && 6L), 0x8D584D8BA2D4EA37LL)), 13)))), 0x690EL)) != l_653))), g_160)), p_9))))) == l_621))) ^ l_678), l_794)) ^ 0xE489L), 0xB451275D8A863EA2LL))));
            g_436 = l_926;
            p_9 = ((!(~(safe_div_func_int64_t_s_s(((g_160 || (safe_rshift_func_uint8_t_u_u(((g_362 = 1L) != (((l_794 >= l_794) > 65530UL) & ((safe_div_func_int16_t_s_s(((((0x593FL <= (l_621 || ((safe_sub_func_uint16_t_u_u((1UL >= g_56), 0xD9F1L)) == g_325))) >= 0L) & g_765) || g_71), 2L)) == 18446744073709551615UL))), 4))) | 0xA1L), g_75)))) ^ l_1038);
        }
    }
    else
    {
        int16_t l_1063 = 0xF328L;
        int32_t l_1071 = 0x36B184AAL;
        uint8_t l_1072 = 9UL;
        int64_t l_1073 = (-6L);
        uint64_t l_1075 = 0x3538AF6535E73F74LL;
        int32_t l_1076 = 0L;
        for (l_804 = 0; (l_804 <= 59); l_804++)
        {
            int32_t l_1058 = 0x1F869379L;
            g_362 = (~g_56);
            l_1076 = (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((l_1074 = (((l_1071 = ((safe_add_func_int8_t_s_s((l_1073 = (((p_9 & 0UL) <= (safe_add_func_int8_t_s_s(3L, (safe_add_func_uint8_t_u_u((((((safe_rshift_func_int8_t_s_u((l_1058 != ((p_9 < ((l_652 = p_9) && ((safe_add_func_int64_t_s_s((((safe_mod_func_int32_t_s_s((l_1063 = l_1058), (+((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((l_652 = (l_494 = 0x89L)) > (-9L)), g_437)) > (-10L)), l_1071)), 0UL)) || p_9)))) && p_9) || p_9), g_599)) || l_1058))) || g_157)), g_209)) && g_363) != l_1072) & p_9) == g_157), l_1072))))) & g_108)), p_9)) != g_599)) <= l_745) == p_9)), l_1072)) >= g_71), 3UL)) || g_765) == g_313), l_1075)), (-1L)));
            p_9 = ((safe_mul_func_uint16_t_u_u(g_156, g_313)) ^ ((0xDEF1L <= (g_313 & ((4L > (g_184 = (+(((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_652, 0x90FAL)), (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(g_184, 1)) || (+p_9)), p_9)))) < (-8L)) | l_1058)))) < l_1063))) ^ 18446744073709551615UL));
        }
        l_1074 = (p_9 = 1L);
        l_1107 = (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(0x6FL, (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((+g_209), 4UL)), (l_652 & (p_9 >= (safe_sub_func_int32_t_s_s(l_1071, (safe_mul_func_uint8_t_u_u(((~0x337421BEL) <= (g_518 > p_9)), l_804)))))))))), 0xAEEB9246L)) | g_436), 6));
        p_9 = (1L & (p_9 <= ((((safe_unary_minus_func_int64_t_s((safe_mod_func_int16_t_s_s((7UL == (((l_494 = (safe_div_func_uint64_t_u_u((g_765 >= 4294967294UL), (safe_sub_func_uint32_t_u_u(0x33ED5039L, (l_1074 < (0x6CL == ((~(l_1071 = ((safe_div_func_int64_t_s_s((-1L), l_804)) > 0x4323FA874C5D7A30LL))) == l_1063)))))))) <= g_11) == 0xCFD69C5F75B2F8F5LL)), g_11)))) == l_31) ^ 0xF69452DE5737B94CLL) | 0x1DE4403E51185709LL)));
    }
    return l_804;
}
static int32_t func_12(uint32_t p_13, int8_t p_14)
{
    uint32_t l_539 = 8UL;
    int32_t l_548 = (-9L);
    uint16_t l_563 = 1UL;
    uint32_t l_564 = 0x53A38CABL;
    uint32_t l_565 = 0UL;
    int32_t l_566 = 0x1B6FB1F0L;
    int32_t l_567 = (-6L);
    int32_t l_568 = 0x91229C48L;
    int32_t l_596 = 0x16F0B774L;
    int32_t l_597 = 0L;
    uint32_t l_598 = 0x4F27F65BL;
    l_568 = (p_14 <= (safe_lshift_func_int16_t_s_u((((l_539 = (-4L)) < (safe_sub_func_uint8_t_u_u((((l_567 = (l_566 = (safe_mul_func_uint16_t_u_u((1L | (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((l_548 = 0x0D751C81A5533B80LL), ((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((-1L) < 253UL), (p_13 = (safe_mul_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(p_13, g_362)) == (((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((0UL && g_157) <= l_563), l_564)), 0xE6CEL)) > l_563) < g_10)) <= 8L), p_14))))), l_563)) & l_564))), 247UL))), l_565)))) ^ 0L) != g_325), p_14))) & 0UL), l_564)));
    if ((safe_add_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(l_568, (0xC2A1438EB3B3921BLL | (g_56 = (l_597 = (g_599 = (safe_lshift_func_uint8_t_u_s(((((safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(((g_436 = (safe_rshift_func_int8_t_s_u((g_11 && (safe_div_func_uint32_t_u_u((((((safe_lshift_func_uint16_t_u_s(l_548, p_13)) | (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u((l_548 == (safe_sub_func_int16_t_s_s(((g_211 = (safe_div_func_int64_t_s_s((l_596 = (l_567 = (~(g_110 > ((l_566 = (safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_14, l_564)), 18446744073709551615UL))) <= p_14))))), g_211))) || l_548), (-1L)))), l_597))))) & l_598) >= g_437) & g_75), g_313))), 5))) <= p_13), g_599)))) ^ l_598) <= p_14) >= l_539), 0)))))))) == (-4L)) || p_14), p_13)))
    {
        l_548 = g_436;
    }
    else
    {
        uint16_t l_600 = 7UL;
        int32_t l_601 = (-8L);
        l_601 = l_600;
    }
    return l_598;
}
static int8_t func_17(uint32_t p_18, int32_t p_19, uint64_t p_20, uint16_t p_21)
{
    int8_t l_499 = 0x21L;
    int32_t l_502 = 0xDF68B057L;
    uint32_t l_530 = 1UL;
    int16_t l_531 = 1L;
    g_436 = (g_160 && (safe_div_func_uint8_t_u_u((g_157 = (l_499 = (safe_add_func_uint8_t_u_u(252UL, 0x18L)))), (g_10 = ((0x49L >= ((((g_56 | 0x82BE534CL) < (-4L)) & (l_502 = p_18)) & ((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(255UL, 2UL)) != p_21), 15)) ^ 0x581CL), g_71)))), 0x5464L)), g_313)), g_56)) >= g_56))) || 5UL)))));
    g_436 = ((((g_410 = ((safe_div_func_uint64_t_u_u(g_436, l_499)) < ((g_518 = g_362) | ((l_502 = ((((l_499 == (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((g_56 = (safe_lshift_func_uint8_t_u_s((g_11 | g_313), 1))) >= (p_20 = g_184)), (safe_add_func_int32_t_s_s((~255UL), (safe_div_func_int16_t_s_s((l_531 = ((g_362 != l_530) ^ g_157)), 0xF8BFL)))))), g_157))) < g_312) | 0x29L) > (-4L))) < 0x8EL)))) || 0x5770L) <= l_499) ^ p_19);
    for (g_108 = 20; (g_108 > 23); g_108 = safe_add_func_uint64_t_u_u(g_108, 8))
    {
        for (g_362 = 26; (g_362 != (-3)); --g_362)
        {
            int64_t l_536 = (-4L);
            return l_536;
        }
    }
    return p_19;
}
static int8_t func_34(int16_t p_35, uint16_t p_36, uint16_t p_37)
{
    int32_t l_448 = 0x6D7F1537L;
    int32_t l_457 = 0x0E0F07E7L;
    uint32_t l_458 = 0x34024CB0L;
    int32_t l_459 = 0xC74D1417L;
    g_436 = (((safe_sub_func_uint8_t_u_u(((p_37 > (safe_div_func_uint32_t_u_u((g_363 = (safe_unary_minus_func_int32_t_s((l_448 = (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0x8627L, 0x0163L)), 8UL)))))), (l_459 = (safe_lshift_func_int16_t_s_u((g_160 || (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(0xBDFA2EC370606D16LL, (-9L))), 1))), (safe_lshift_func_int8_t_s_u(((g_410 = l_457) & l_457), l_458)))))))) != l_458), g_56)) <= p_36) || l_459);
    l_448 = (safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s((((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(g_437, 1)), 0x4B31A8EAL)) ^ (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x97L, 0UL)), (g_211 ^ (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((g_312 = g_437), (safe_mod_func_uint64_t_u_u(l_457, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s(((g_362 < ((g_56 ^ 0x2DL) && 0xBF70L)) | g_311), p_35)) ^ g_184) < l_457), 5)), g_110)), 3)))))), 0x34E2L))))), l_448)), g_410)), 5)), 1L))) ^ 0x5792L), g_437)) >= 0xC12C816AL), g_211));
    g_362 = (p_35 < g_110);
    return g_436;
}
static int8_t func_38(uint32_t p_39, uint32_t p_40, int8_t p_41, uint64_t p_42)
{
    int16_t l_408 = 1L;
    int32_t l_423 = 0x64AE886EL;
    int32_t l_424 = 1L;
    int32_t l_427 = 1L;
    int32_t l_438 = (-1L);
    l_408 = (safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(g_363, p_39)), 0x6020A7527264FA59LL));
    l_438 = ((~((g_410 = l_408) && ((0x4878L & (l_408 > p_40)) & ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((g_410 | (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((g_437 = (safe_mod_func_uint16_t_u_u((l_424 = (l_423 = 0x0493L)), (safe_add_func_int32_t_s_s((l_427 = 0x011CA84DL), ((safe_rshift_func_int16_t_s_u(l_408, (safe_mul_func_int8_t_s_s((((g_436 = (g_56 = (safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_108, p_41)), g_156)))) || l_408) & l_408), p_42)))) >= l_408)))))) && g_157) & g_312), l_408)), 7L)), p_42))), 2)), 9L)) & g_311)))) | 254UL);
    return p_42;
}
static uint16_t func_43(uint64_t p_44, int32_t p_45, int16_t p_46)
{
    uint8_t l_61 = 0x2BL;
    int32_t l_62 = 6L;
    int32_t l_106 = 0xAD701FB0L;
    int32_t l_107 = 0x10F657D2L;
    uint64_t l_368 = 0x1FD822348030061FLL;
    int32_t l_384 = 0xCD2E24EDL;
    int32_t l_399 = 0L;
    int32_t l_400 = 0L;
    uint32_t l_401 = 18446744073709551615UL;
    int32_t l_402 = 2L;
    int32_t l_403 = (-1L);
    p_45 = g_10;
    p_45 = (func_47((safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((g_108 = (p_44 >= ((g_10 | (g_56 = 18446744073709551607UL)) | (safe_sub_func_uint8_t_u_u((l_62 = (safe_mul_func_int16_t_s_s(l_61, 0UL))), (safe_div_func_uint16_t_u_u((((((func_65(((g_71 = 7L) | func_72(g_10, (g_75 = l_61))), l_61, l_61, l_61, l_61) <= l_106) || p_46) | p_44) && l_107) < p_44), 65534UL))))))) ^ l_107), l_107)), 0x173B00C6B665F1F4LL)), p_44, g_11, l_107) < p_44);
    l_403 = ((l_402 = (l_401 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(g_325, (l_368 != (safe_mod_func_int64_t_s_s(((((l_384 = (~(safe_mod_func_int64_t_s_s(((!((l_62 = (+(g_209 < (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(6L, 2)), (l_106 = g_71)))))) < ((((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(l_384, 14)), (safe_add_func_int32_t_s_s((g_75 >= (safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((((safe_add_func_int32_t_s_s(((l_399 = (safe_div_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(0x65B2L, 11)), 0x869009A4825EF726LL)) == (-1L)), p_45))) == g_110), g_363)) && 0xB31E70AF4106D26DLL) && 5L) && 246UL), 13)) <= l_400), 0x47L))), 0x7AD8558DL)))) == 0x04L) | l_384) == g_56))) == p_46), 18446744073709551607UL)))) || (-8L)) ^ l_400) ^ p_46), g_110))))) || g_11), g_11)))) < 0x73L);
    return p_45;
}
static uint32_t func_47(int32_t p_48, int16_t p_49, uint8_t p_50, int8_t p_51)
{
    uint8_t l_109 = 0xB3L;
    int32_t l_113 = 0L;
    int32_t l_159 = (-5L);
    uint64_t l_251 = 0x4E436F85E4FF7534LL;
    uint32_t l_277 = 18446744073709551615UL;
    uint32_t l_309 = 9UL;
    int64_t l_357 = 0x9E970FD25321BD9BLL;
    int32_t l_361 = 0x93BE05BEL;
    g_110 = (l_109 = g_56);
    if (p_50)
    {
        int8_t l_154 = (-1L);
        uint8_t l_242 = 0xBEL;
        int32_t l_262 = 0xB0FEA248L;
        int32_t l_278 = 0xC1298639L;
        int32_t l_279 = 0x5F0B5030L;
        uint32_t l_310 = 18446744073709551614UL;
        p_48 = (safe_lshift_func_uint8_t_u_s(p_50, (g_75 == (l_113 = 0xDD06L))));
        for (g_56 = (-9); (g_56 <= 23); g_56++)
        {
            int16_t l_122 = 0x8D33L;
            int32_t l_127 = (-3L);
            for (p_51 = 29; (p_51 >= 18); p_51 = safe_sub_func_int16_t_s_s(p_51, 4))
            {
                uint8_t l_140 = 255UL;
                uint16_t l_210 = 0x04B0L;
                uint16_t l_243 = 0x50D9L;
                uint8_t l_244 = 4UL;
                for (g_71 = 0; (g_71 >= 12); g_71 = safe_add_func_uint16_t_u_u(g_71, 1))
                {
                    int64_t l_167 = 0x223BFC9F35A7B369LL;
                    int32_t l_176 = 0x866FAEDDL;
                    if (((safe_div_func_uint32_t_u_u(g_71, (l_122 = g_10))) > (g_10 > (g_10 != (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_127 = 0x8CBA4741L), g_11)), (!(safe_add_func_int16_t_s_s((0x78EDL < ((safe_lshift_func_int16_t_s_u(0x90BBL, (p_48 < p_49))) | p_50)), 2UL)))))))))
                    {
                        uint32_t l_155 = 2UL;
                        int32_t l_158 = (-4L);
                        g_160 = (l_113 < (~(safe_rshift_func_uint8_t_u_s(p_51, (l_159 = ((safe_rshift_func_int8_t_s_u((((0L | p_51) == (safe_add_func_int16_t_s_s(l_140, (safe_lshift_func_uint8_t_u_s(((((safe_mul_func_uint16_t_u_u((0xE06C7929L | ((g_157 = (~(g_156 = (safe_rshift_func_uint16_t_u_s((g_108 = (l_155 = (((safe_sub_func_uint64_t_u_u(0xC85E55DFC961BCE7LL, ((p_50 & (((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(l_154, p_49)), 0x03F0CD8BL)) != g_10) || g_75)) ^ 5UL))) && l_140) >= p_51))), p_50))))) < 1UL)), p_51)) == p_49) == 0L) < l_158), 2))))) || 0UL), 4)) | 0x39397282F80E5663LL))))));
                        g_184 = (p_48 = ((safe_sub_func_int64_t_s_s(((l_127 = 0x93E3L) && ((safe_rshift_func_uint16_t_u_u(l_167, 1)) == ((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((l_127 = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(g_10, (l_176 = g_10))), (((p_48 >= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(0xC57FF43755EC10F0LL, (0xE6058BBDFDC5FA4BLL && ((l_167 < ((((((+0xE3DC10E4350B5FE4LL) > g_156) == g_71) < g_75) <= g_56) | g_108)) <= 0xE8FF6226L)))), p_50)), l_140))) || 2UL) > p_51)))) > l_167) ^ 9L), p_49)), 0UL)) && 2L))), g_10)) ^ 0L));
                    }
                    else
                    {
                        if (g_157)
                            break;
                        if (g_184)
                            break;
                        l_210 = ((((safe_mod_func_uint16_t_u_u((((p_48 >= (safe_mul_func_uint16_t_u_u(((l_127 = p_50) <= ((((~(safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_51, p_50)), (safe_rshift_func_uint8_t_u_u(p_50, 1))))) ^ (l_113 = (g_209 = (+(safe_sub_func_int16_t_s_s((g_11 == (safe_mul_func_int8_t_s_s(l_154, l_167))), (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(0x6C8CL, p_51)) | p_49) && g_71) != g_56), 1)), 7)), p_50)))))))) == (-6L)) && p_49)), 0L))) != g_75) <= l_159), g_184)) != l_159) & g_110) > g_108);
                        g_211 = g_157;
                    }
                }
                l_244 = ((g_10 && ((l_140 && (safe_div_func_int8_t_s_s(l_154, (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x9CL, (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_154, 1)), (safe_mul_func_int16_t_s_s(l_210, ((safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(l_127, (l_122 > (g_156 >= p_48)))), p_50)) <= l_210))))), g_71)))), l_154)), g_110)) == l_242) && g_10) | l_243), l_109)), 0xDCL)), l_154)), l_109))))) || g_157)) <= g_209);
                if (g_56)
                    break;
            }
            l_159 = ((((safe_rshift_func_int8_t_s_s((3L < (l_113 = (((p_49 < l_109) != (safe_mul_func_uint8_t_u_u((g_209 && (((((p_51 | (safe_rshift_func_uint16_t_u_u((((g_184 = 1UL) && (l_113 <= p_48)) <= l_242), l_251))) & g_11) || p_50) != g_157) & p_50)), g_157))) || g_184))), g_11)) < g_71) > 0x9ADA1A68L) & 0x781CL);
            l_279 = (l_113 = (((safe_div_func_uint8_t_u_u((((l_127 = (((safe_div_func_uint64_t_u_u((l_278 = (((((safe_sub_func_int16_t_s_s(((p_48 = (p_49 >= (safe_mod_func_int8_t_s_s(p_48, (l_159 = (safe_sub_func_int16_t_s_s((-1L), ((l_262 = p_48) >= p_51)))))))) == g_56), (p_51 > l_242))) & ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(l_109, 253UL)) <= p_49) || g_108), p_51)), 2)) < g_75), l_122)) <= 6UL), p_51)), l_277)), g_10)) ^ g_75)) > l_242) == 0L) <= g_156)), 5L)) <= l_122) > l_113)) < l_122) != 5L), 0xADL)) && g_10) || p_51));
        }
        g_312 = (safe_mod_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((((safe_mod_func_int16_t_s_s(l_277, (safe_rshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((l_159 = (safe_div_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((((-1L) >= (~((g_110 < (!(~p_48))) | l_159))) != g_75), (safe_sub_func_int16_t_s_s(((l_113 = (l_310 = (safe_lshift_func_uint16_t_u_s(g_160, (safe_mul_func_uint16_t_u_u(p_50, (safe_div_func_int32_t_s_s(((p_49 = (!(((+g_11) == 0xF2A61FC436A30DA4LL) || l_309))) & l_109), 0x5DE65A91L)))))))) && l_278), p_50)))) & 0xA5L), g_110))) ^ g_71), p_50)) || l_159), 4294967294UL)) > l_109), l_278)))) && l_109) != g_311), g_156)) == g_110), l_277));
    }
    else
    {
        int64_t l_317 = 0xFCD0D6B2CBE35802LL;
        int32_t l_322 = 0xC4547A68L;
        int32_t l_323 = 0x2E520C17L;
        int32_t l_324 = 0x434852D9L;
        g_313 = p_48;
        g_325 = (safe_mod_func_uint16_t_u_u((l_113 = (safe_unary_minus_func_uint8_t_u(((l_277 || l_317) | ((p_48 = ((l_324 = (safe_lshift_func_int16_t_s_s((l_323 = (g_157 >= (l_322 = (g_156 > (safe_mod_func_uint32_t_u_u(4294967288UL, p_49)))))), l_113))) <= g_184)) & (((g_209 > g_209) & l_251) > 0x78F8L)))))), 65531UL));
    }
    if (l_159)
    {
        uint32_t l_329 = 0x1DA8FA58L;
        int32_t l_332 = 0L;
        l_332 = (((p_51 || (safe_unary_minus_func_uint8_t_u(((((safe_sub_func_int32_t_s_s((l_159 >= ((l_329 & ((p_49 = p_50) ^ (safe_div_func_int16_t_s_s(5L, g_160)))) ^ 0x7BDA1314L)), (l_329 != p_51))) > g_75) < l_329) <= (-2L))))) | g_156) && p_51);
        return p_50;
    }
    else
    {
        uint32_t l_349 = 0xFBD2D9BEL;
        int32_t l_356 = 0x948576C4L;
        int32_t l_358 = 1L;
        int32_t l_359 = (-4L);
        p_48 = (l_159 = 0x5896D5BFL);
        for (l_309 = 0; (l_309 <= 47); l_309 = safe_add_func_uint16_t_u_u(l_309, 3))
        {
            uint64_t l_360 = 0x12EF527235E5902ALL;
            p_48 = ((g_71 == 0xC9F556B5L) | 4294967294UL);
            g_363 = (g_362 = (safe_div_func_uint64_t_u_u(((p_49 != g_108) <= (safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((l_361 = ((l_159 = (safe_sub_func_int32_t_s_s((((((((safe_lshift_func_uint8_t_u_s(l_349, 2)) == (l_113 = (l_359 = ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((l_358 = ((~((g_211 = p_51) && g_211)) == ((l_356 = ((7UL < g_75) == (safe_div_func_int8_t_s_s((l_277 < 0x1D4868CC2CD189FCLL), g_11)))) < l_357))))), l_357)) <= 0x02D27C78L)))) & 0x7B80L) & l_349) || g_11) > l_349) > g_75), 0xEAA54678L))) && l_360)), g_108)), 2)), g_110)), g_56))), l_349)));
        }
    }
    return l_277;
}
static uint64_t func_65(int64_t p_66, int8_t p_67, int64_t p_68, int8_t p_69, uint32_t p_70)
{
    uint64_t l_81 = 0x302D78BEA8E43404LL;
    int32_t l_104 = 0x3C53D173L;
    int32_t l_105 = 5L;
    l_105 = (safe_add_func_int32_t_s_s((0UL > ((p_70 != (safe_rshift_func_uint8_t_u_u(l_81, (safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((l_81 > (safe_add_func_int16_t_s_s(l_81, (safe_add_func_uint8_t_u_u((g_75 = (safe_rshift_func_int8_t_s_s((0L & ((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((((l_104 = ((safe_lshift_func_int16_t_s_s((p_69 ^ p_70), 6)) == (safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_81, p_69)), 4)))) != g_75) != p_66), l_81)) == l_81) >= g_10), 0xC4L)), 1UL)) <= p_70)), l_81))), l_81))))) != 0xCEEEC8559CE79000LL), p_67)), 0xE981C310705E7732LL))))) && l_81)), (-9L)));
    return p_68;
}
static uint8_t func_72(int32_t p_73, int16_t p_74)
{
    int32_t l_76 = (-10L);
    p_73 = l_76;
    return p_74;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10;
    csmith_sink_ = g_11;
    csmith_sink_ = g_56;
    csmith_sink_ = g_71;
    csmith_sink_ = g_75;
    csmith_sink_ = g_108;
    csmith_sink_ = g_110;
    csmith_sink_ = g_156;
    csmith_sink_ = g_157;
    csmith_sink_ = g_160;
    csmith_sink_ = g_184;
    csmith_sink_ = g_209;
    csmith_sink_ = g_211;
    csmith_sink_ = g_311;
    csmith_sink_ = g_312;
    csmith_sink_ = g_313;
    csmith_sink_ = g_325;
    csmith_sink_ = g_362;
    csmith_sink_ = g_363;
    csmith_sink_ = g_410;
    csmith_sink_ = g_436;
    csmith_sink_ = g_437;
    csmith_sink_ = g_518;
    csmith_sink_ = g_599;
    csmith_sink_ = g_615;
    csmith_sink_ = g_765;
    csmith_sink_ = g_1134;
    platform_main_end(0,0);
    return 0;
}
