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
struct S0 {
   int16_t f0;
   int8_t f1;
   uint32_t f2;
   int8_t f3;
   int16_t f4;
   int16_t f5;
   uint32_t f6;
   uint32_t f7;
   int8_t f8;
};
static uint16_t g_7 = 0U;
static int8_t g_48 = 0x3D;
static int16_t g_72 = 0xD357;
static uint32_t g_90 = 0x8636BC84;
static int16_t g_91 = 0xAC9F;
static int32_t g_92 = 2;
static int8_t g_93 = 0xE2;
static int16_t g_126 = 0x379E;
static struct S0 g_128 = {0x3D09,0x33,1U,0x92,6,0x4A3F,0x71FAF2A4,0xCFF13109,0};
static uint16_t g_151 = 0x9448;
static uint8_t g_153 = 0xAA;
static int8_t g_165 = 4;
static uint32_t g_200 = 5U;
static uint32_t g_233 = 0xF2DEF7D7;
static uint8_t g_265 = 0U;
static uint32_t g_267 = 0xBC31E6BA;
static uint8_t g_381 = 0U;
static int8_t g_425 = 1;
static int16_t g_427 = (-6);
static int16_t g_456 = 0xD9CC;
static uint32_t g_475 = 0x6A752FAC;
static int32_t g_476 = 0;
static int16_t g_539 = 0xB42B;
static int32_t g_627 = 0;
static struct S0 g_733 = {2,0xE1,0x9FD627E3,0x6F,0xECCF,-1,0x3BC5CF87,0U,-6};
static int8_t g_811 = 0;
static int16_t g_876 = 0xB304;
static int32_t func_1(void);
static int32_t func_2(int32_t p_3, int8_t p_4, int32_t p_5, uint32_t p_6);
static uint32_t func_11(int8_t p_12, uint32_t p_13, int32_t p_14, int8_t p_15);
static int8_t func_17(uint8_t p_18, uint16_t p_19);
static int16_t func_23(struct S0 p_24, int8_t p_25, int8_t p_26);
static int8_t func_28(int8_t p_29);
static struct S0 func_30(uint32_t p_31);
static uint8_t func_35(struct S0 p_36, int16_t p_37);
static struct S0 func_38(int32_t p_39, uint16_t p_40, uint16_t p_41, uint8_t p_42, uint32_t p_43);
static int16_t func_44(uint8_t p_45);
static int32_t func_1(void)
{
    uint32_t l_8 = 1U;
    int32_t l_16 = 0x1FF29ACD;
    uint32_t l_20 = 0xB722BA7B;
    struct S0 l_27 = {1,0,4294967291U,0x7B,-1,0x7D02,0U,0U,0x4D};
    int32_t l_877 = 0x38798BFE;
    uint32_t l_913 = 0x9971224C;
    int8_t l_914 = 1;
    l_913 = func_2(((l_8 = (g_7 = 0U)) & ((safe_lshift_func_int8_t_s_u(((func_11((l_16 & (func_17(l_20, ((safe_sub_func_int16_t_s_s(func_23(l_27, func_28(l_27.f0), ((safe_add_func_int8_t_s_s((g_456 == (safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s(l_27.f5, 0x9E58FB84))))), 4)) < l_27.f2)), g_456)) ^ 65535U)) & l_27.f0)), l_27.f6, g_539, g_539) , g_200) , g_267), g_539)) , l_27.f4)), g_733.f4, l_16, l_877);
    return l_914;
}
static int32_t func_2(int32_t p_3, int8_t p_4, int32_t p_5, uint32_t p_6)
{
    uint8_t l_885 = 0xC0;
    struct S0 l_886 = {0xBB96,-1,0xB78A24B4,1,-1,0xF18A,1U,2U,0x4B};
    struct S0 l_912 = {-4,0xB3,0x9E10E389,0xB8,-6,0xAB37,1U,0xFE0A1389,0x32};
    for (g_456 = (-21); (g_456 != (-14)); g_456++)
    {
        int16_t l_883 = 0xE148;
        uint16_t l_884 = 4U;
        int32_t l_907 = 0xB200F014;
        uint32_t l_908 = 8U;
        struct S0 l_909 = {0x7DA4,0xE4,0x3B948B53,5,0xB39B,1,0xC5850B34,0x518812D7,0xFF};
        int8_t l_910 = 0xF0;
        if (p_6)
        {
            struct S0 l_880 = {-1,-1,1U,0xEB,0xCC98,0,4294967295U,0xF9A47C80,1};
            l_880 = l_880;
            l_886 = func_38(((((g_476 = (l_880.f7 > (p_6 != ((g_128.f3 = (l_883 = (0xA409 <= 7))) ^ (l_884 > g_733.f8))))) < g_165) ^ (-1)) , (((g_128.f3 ^ g_92) , 0xBDCE) | l_884)), g_128.f1, l_885, p_3, g_733.f4);
        }
        else
        {
            uint16_t l_887 = 0xACC9;
            struct S0 l_888 = {0xACA2,5,4294967295U,0x5B,1,-2,0U,0xB8E76FC1,0x10};
            if (l_887)
                break;
            l_888 = l_886;
        }
        for (g_733.f0 = (-14); (g_733.f0 == (-2)); g_733.f0 = safe_add_func_int16_t_s_s(g_733.f0, 3))
        {
            int16_t l_896 = 5;
            struct S0 l_911 = {0x8580,1,0x85559B1B,0x50,0,0x1889,0x14B53C56,0x5DD96C11,0};
            l_886 = func_30(l_883);
            l_909 = func_30((safe_rshift_func_int8_t_s_s((g_128.f5 | (safe_rshift_func_uint16_t_u_u((((((((p_4 & (safe_unary_minus_func_int32_t_s(0))) >= l_896) ^ (safe_rshift_func_uint16_t_u_s(((g_265 < g_92) || ((p_6 = ((safe_mod_func_uint32_t_u_u(((((p_3 || (safe_rshift_func_uint8_t_u_s((l_884 != (safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((l_907 = 0xA156) & g_48), g_733.f0)) , p_6) >= l_908), 0xC7FC866D))), p_6))) , g_90) > p_3) || g_733.f5), g_128.f0)) > 4294967295U)) | l_886.f0)), 7))) | 0x6D) | (-10)) >= p_3) <= l_886.f3), p_5))), l_908)));
            l_911 = func_30(l_910);
            p_3 = 0x55E10568;
        }
        return g_200;
    }
    l_912 = l_912;
    return l_912.f1;
}
static uint32_t func_11(int8_t p_12, uint32_t p_13, int32_t p_14, int8_t p_15)
{
    uint8_t l_630 = 4U;
    struct S0 l_631 = {3,0x94,1U,0x75,0x15C5,0,4294967286U,0x3CA8E30B,0x5C};
    int32_t l_648 = 0x1E4FE405;
    int32_t l_651 = 0xF6DA37A3;
    int16_t l_736 = 0x7E67;
    int32_t l_745 = 0x2FC7688F;
    uint32_t l_769 = 0x8F4A8BCF;
    int32_t l_787 = 1;
    int8_t l_792 = 0x8E;
    l_630 = 0xDA91FBFD;
    g_128 = l_631;
    for (g_425 = 0; (g_425 >= 19); g_425 = safe_add_func_int8_t_s_s(g_425, 7))
    {
        uint32_t l_637 = 1U;
        int32_t l_647 = (-1);
        uint16_t l_649 = 0x6F4D;
        int32_t l_650 = (-6);
        int8_t l_697 = 0xE7;
        struct S0 l_727 = {0,1,0xBC51CBFB,0x36,1,-8,0x25FBA1A5,0x153A977D,1};
        int32_t l_732 = 0xCF081192;
        uint32_t l_750 = 0x69DD57C6;
        uint32_t l_816 = 2U;
        uint16_t l_872 = 0xB7A2;
        int32_t l_873 = 0x5CC7119B;
        int32_t l_874 = 0xADEC8158;
        if (g_233)
        {
            int8_t l_634 = 0xAA;
            int32_t l_638 = 0x8035FF37;
            uint16_t l_696 = 4U;
            l_651 = (((g_128.f0 = (((p_14 & (l_634 = (-10))) >= (g_48 | p_13)) <= (safe_rshift_func_int16_t_s_s((l_637 = p_12), 12)))) != l_638) , (safe_mod_func_int16_t_s_s((l_638 = ((g_90 < ((g_128.f5 = (safe_sub_func_int16_t_s_s((l_650 = (((l_648 = (((g_476 = (safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(0x99, (l_647 = (g_265 = 0U)))) , 0x4C7DB126), l_634))) > g_128.f6) || l_637)) | l_649) > g_425)), p_14))) && 0xE29E)) , 1)), g_48)));
            l_648 = (((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((((g_476 = 0x09A80366) >= (((safe_mod_func_uint8_t_u_u(g_128.f2, 1U)) != ((0 ^ ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((65535U & (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((l_649 > (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_456, 12)), (safe_sub_func_int8_t_s_s((g_48 = (l_638 = ((!0x8D74) > (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((!0x29), l_696)) | 65528U) != l_650) || 0x7983), p_15)) != 7U) > g_128.f5), l_696))))), 0xF3)))) != g_128.f6) < g_165) , g_128.f5), 8)), p_13))) != 4294967287U) || g_128.f5), p_15)), 0x81)), g_427))), 0x2174)), l_637)) & p_12) == l_651), g_456)) | l_697) >= 0xF1690082) != 4294967289U), g_267)), p_14)), g_265)) > l_697)) && 0x577B)) <= l_649)) , (-7)) >= g_93), 1U)) || l_651), 0)), 1)) & 0xB3AF) ^ p_14) < g_200) != p_13);
        }
        else
        {
            int8_t l_698 = (-10);
            return l_698;
        }
        l_650 = ((l_697 | p_14) & (g_200 <= ((safe_rshift_func_int8_t_s_s(((p_12 <= (l_648 = (safe_sub_func_uint32_t_u_u(((0x053228AA & (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((+((!(safe_add_func_int16_t_s_s(p_13, ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((p_14 <= (g_265 && p_12)) ^ 4294967295U), 9)), p_12)) & 7U)))) && 0x9BD9)) == 1), g_128.f8)), g_128.f3)), (-3)))) && p_12), p_14)))) < 0x7245), 0)) , p_14)));
        l_651 = (safe_lshift_func_int16_t_s_s(((0x4D <= (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((g_128 = l_727) , (safe_sub_func_uint8_t_u_u(((((l_732 = (safe_mod_func_uint16_t_u_u((l_648 = l_727.f0), 0x6957))) >= (g_128.f8 = l_651)) != (l_631.f7 < (g_476 = ((((p_15 | ((g_733 , (safe_mod_func_int8_t_s_s(g_92, l_631.f7))) != g_733.f7)) , l_631.f1) == (-1)) < l_631.f3)))) , l_631.f5), g_48))) | 1) , 0x33), 4)), 255U)), 9U)), 0x61FC064E))) < l_736), g_456));
        if ((safe_mod_func_int8_t_s_s(((((-1) < ((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((p_12 = ((6U <= l_745) != (((safe_lshift_func_int8_t_s_s((l_631.f0 <= (g_128.f7 , (safe_add_func_int32_t_s_s(l_650, (g_128.f7 = (p_12 != p_15)))))), 5)) & g_128.f8) < l_750))) < 0x5D), l_727.f2)) >= 0x11948A07), g_128.f8)), 1U)) != l_631.f6)) & 0x66CD) < g_381), l_631.f3)))
        {
            uint32_t l_770 = 0xB5B2F575;
            int8_t l_786 = (-1);
            int16_t l_809 = 0xEAB9;
            int32_t l_850 = 0x55DFAFFE;
            l_651 = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_s((l_745 = (l_631.f1 != (((safe_add_func_uint16_t_u_u(((l_648 = (safe_lshift_func_int8_t_s_u(l_631.f0, (!(safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((p_14 <= p_13), p_14)) >= 0xD1BE) | g_128.f8), 0)), (safe_sub_func_uint8_t_u_u((l_769 == (p_12 >= p_12)), g_733.f5)))))))) > 0x59BA), p_12)) || l_770) > l_770))), 6)))), p_13));
            g_476 = (safe_lshift_func_int8_t_s_u((-1), 0));
            if ((((~((g_476 = (((((((l_787 = ((safe_mod_func_uint16_t_u_u((((((((l_647 = (((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((g_128.f3 | ((p_12 <= l_770) ^ 0U)), 6)), ((p_12 <= 6U) , ((safe_rshift_func_int8_t_s_s((((g_128.f2 != ((g_128.f7 == g_128.f0) == 0U)) <= 0x54) < 0x87020169), 2)) & 0x07)))), l_786)) && 0U) & p_15)) ^ l_787) == l_727.f4) > l_786) ^ 0xEB0BD366) ^ p_14) , g_48), p_14)) | l_786)) || g_233) , l_770) > 0x45) && g_627) <= g_733.f4) , l_786)) > g_91)) | 0x9D) & p_12))
            {
                int32_t l_799 = 1;
                int32_t l_810 = 0;
                g_811 = (safe_rshift_func_uint16_t_u_s(((-1) & g_425), (safe_add_func_int32_t_s_s(((((l_792 && (safe_add_func_int8_t_s_s((((g_200 = ((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((l_799 = 0), (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(0xC101, (((safe_sub_func_uint16_t_u_u(((((2U >= (((safe_unary_minus_func_int32_t_s((p_13 == (((g_476 = ((p_12 <= (safe_lshift_func_int16_t_s_u(g_267, 4))) > p_14)) || (-3)) < g_733.f6)))) ^ p_12) > 4294967295U)) > p_12) , g_733.f7) , 65534U), l_809)) && p_13) || l_810))), l_810)))) > g_151) == g_90), l_786)) == 0x6E8D)) , g_456) && p_13), (-2)))) > g_90) >= 0x0D73) != l_732), g_165))));
                l_810 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0, (l_816 | (0xE6F9 ^ (0x873560EA & (((safe_add_func_uint16_t_u_u((((~(((safe_sub_func_int32_t_s_s((0xE2 || ((safe_rshift_func_int16_t_s_u((l_786 > l_727.f4), 12)) < p_13)), (g_476 = (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0x4C34, 7)), 8)) ^ g_165) & p_12)))) ^ l_770) < g_475)) == p_12) || g_627), l_727.f6)) , 8U) || l_649)))))), p_15));
            }
            else
            {
                int32_t l_830 = 0x08098ED6;
                int32_t l_849 = 0xDB81921F;
                l_850 = ((safe_lshift_func_int8_t_s_s(((g_128.f6 | g_93) || l_830), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((+((safe_sub_func_int16_t_s_s(p_12, (safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((l_849 = (safe_unary_minus_func_int16_t_s((safe_sub_func_int32_t_s_s(((3 | (((~(safe_sub_func_uint32_t_u_u(((((g_475 = (p_13 = (0x602E2572 >= ((func_38(g_128.f1, (((((+251U) != ((l_631.f5 && g_128.f1) <= p_14)) <= g_128.f5) <= g_233) , p_12), p_14, g_128.f4, p_13) , 0x39) || 3U)))) , 0U) && 0) && g_93), l_631.f1))) < g_93) && 9U)) >= l_830), l_770))))), g_425)), (-9))))) != p_14)), l_630)) & p_12), g_128.f5)))) , (-1));
            }
            l_745 = l_727.f5;
        }
        else
        {
            int8_t l_875 = 1;
            g_876 = (safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((p_12 , l_727.f5), 4)), 0)) || ((l_874 = (l_873 = ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((((((g_233 != (l_647 = ((l_872 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((+p_12) & (+(~0xF4))), (safe_add_func_uint32_t_u_u(((p_12 & g_456) < g_733.f7), ((l_650 = (g_92 = ((safe_rshift_func_int8_t_s_u(((g_476 = ((g_92 & p_13) != g_733.f0)) | 0x4AD962EC), g_128.f6)) && p_13))) , g_427))))), g_733.f4))) >= g_811))) ^ p_12) , g_128.f7) | 0x0D) != (-8)) , g_733.f0), l_727.f0)), 9)) == p_15))) && g_153)) >= p_14) ^ l_875), p_13));
            return g_128.f1;
        }
    }
    return g_476;
}
static int8_t func_17(uint8_t p_18, uint16_t p_19)
{
    uint8_t l_617 = 0x05;
    int32_t l_624 = 0x053555F3;
    int32_t l_628 = 5;
    int32_t l_629 = 0x6D73A02E;
    l_629 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_539, (l_628 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u((l_617 > (g_476 = (safe_sub_func_uint8_t_u_u(l_617, (p_19 | ((l_617 || (((g_627 = (safe_sub_func_int32_t_s_s((g_265 != (safe_rshift_func_int16_t_s_u(((((g_128 , ((l_624 = l_617) ^ ((safe_rshift_func_uint8_t_u_s((l_617 != g_456), 6)) && p_18))) != g_151) , g_91) != (-4)), l_617))), 0x46215546))) && 0xB9) == l_617)) | p_18)))))), 4294967295U)) || l_617) > g_456) & p_18), g_91)), l_617)), g_456))))), 9));
    return p_19;
}
static int16_t func_23(struct S0 p_24, int8_t p_25, int8_t p_26)
{
    uint16_t l_604 = 0xB0D4;
    g_128 = g_128;
    g_476 = (l_604 = g_128.f6);
    return p_24.f1;
}
static int8_t func_28(int8_t p_29)
{
    uint32_t l_32 = 4294967287U;
    struct S0 l_561 = {-10,0,0x0D2DA0EE,0x95,0xC229,0,0x5F7F2B84,0xC472A42C,1};
    int8_t l_582 = 0xCF;
    int32_t l_583 = 1;
    int32_t l_584 = 1;
    int32_t l_585 = 0x26C97323;
    l_561 = func_30(l_32);
    l_585 = (safe_sub_func_int16_t_s_s(((p_29 & (safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((g_128.f1 = ((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((l_561.f0 && (((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(1, (safe_lshift_func_int16_t_s_s(g_90, l_582)))), g_267)) | ((g_128.f3 & (((((l_583 = g_233) < (g_165 , l_561.f3)) & p_29) != l_561.f2) == g_475)) == g_93)) != g_456)), 14)) <= g_165), p_29)), (-1))) && l_584)), g_128.f2)) & p_29), l_561.f2)) ^ 0xEDF9DA8D), 8))) < l_561.f2), l_561.f1));
    l_561 = func_30(g_153);
    l_583 = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_128.f7 | ((((~g_128.f6) <= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(g_128.f3, (l_561.f1 < p_29))), ((safe_rshift_func_uint16_t_u_u((g_128.f6 < p_29), (0xCB < ((l_585 = l_32) >= g_200)))) < p_29)))) <= 0xDC43A81B) < p_29)), 7)), g_92)) != l_561.f8);
    return p_29;
}
static struct S0 func_30(uint32_t p_31)
{
    struct S0 l_49 = {1,-1,0xEBAE88B1,1,0,1,0xD02C9AA6,0x576105F6,8};
    uint8_t l_346 = 1U;
    uint32_t l_348 = 2U;
    int32_t l_351 = 4;
    int32_t l_379 = 1;
    int32_t l_380 = 8;
    int32_t l_382 = 0xC910CA1B;
    int32_t l_383 = (-3);
    int32_t l_474 = 0;
    uint32_t l_530 = 0x8ACB0BAA;
    int32_t l_532 = 0;
    int32_t l_558 = 0xFE190DD1;
    if ((safe_mod_func_uint8_t_u_u((func_35(func_38((func_44((p_31 && ((safe_sub_func_int8_t_s_s((p_31 | ((g_48 = 0x40C8E82B) , ((l_49 , (safe_add_func_int16_t_s_s(p_31, p_31))) | (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((l_49.f5 || ((safe_add_func_int32_t_s_s(l_49.f1, (~p_31))) > p_31)), p_31)), 4))))), l_49.f4)) || p_31))) , g_91), l_49.f7, l_49.f7, l_49.f3, p_31), g_128.f2) , l_49.f6), g_128.f2)))
    {
        uint32_t l_334 = 0x195CB3C5;
        int32_t l_344 = 0x76C08D80;
        int16_t l_345 = 0x2A22;
        uint32_t l_384 = 0x82519BD8;
        l_346 = (((safe_add_func_int32_t_s_s((-1), ((((safe_sub_func_int32_t_s_s((l_345 = ((safe_add_func_int16_t_s_s((((l_334 = g_233) || ((0xD1 <= ((((((((((((+p_31) & (safe_lshift_func_uint8_t_u_u(g_151, 4))) <= p_31) || ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(l_334, l_334)) && (g_165 != 6)), p_31)) == 0x5C31), l_49.f4)) && 0x98)) ^ 65535U) , l_49.f3) | l_334) & g_72) >= p_31) > 8U) != l_49.f5) == l_49.f0)) ^ l_334)) < l_344), g_128.f5)) < p_31)), 4294967288U)) || g_128.f4) , l_345) && 0x4D59CC58))) >= 255U) < l_344);
        l_49 = func_38((4294967295U != (((((safe_unary_minus_func_int32_t_s(l_348)) <= g_128.f8) & p_31) | (safe_sub_func_uint8_t_u_u((l_351 = g_126), (g_93 | (p_31 && (+(((+((~l_345) & (l_334 , 0x87))) == 0U) , l_49.f0))))))) <= l_348)), l_348, l_346, l_334, l_49.f4);
        l_384 = ((g_128.f5 != ((safe_sub_func_int8_t_s_s((l_383 = ((l_382 = ((safe_sub_func_uint32_t_u_u(((((p_31 , (safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((g_381 = (((safe_add_func_int16_t_s_s((l_380 = (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_31, (safe_sub_func_uint8_t_u_u(3U, (g_128.f3 = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((l_351 = l_49.f0), ((l_379 = g_126) & 0))), g_128.f6))))))), (l_49.f4 != g_128.f7)))), g_93)) & 0x9A04) == 255U)), p_31)) , 0x89F36769) && 4294967294U), 2)) <= g_128.f1), 0x7C0EF8D4)) < g_233), l_345))) , g_128.f2) & g_165) , l_348), g_233)) || (-9))) ^ g_72)), g_200)) == g_91)) | g_200);
    }
    else
    {
        uint32_t l_424 = 1U;
        int32_t l_540 = (-1);
        struct S0 l_543 = {0x4F09,0x20,0x1D9EA868,0,0x5A40,1,1U,0xE0786122,0};
        for (l_49.f6 = 4; (l_49.f6 >= 39); l_49.f6 = safe_add_func_int16_t_s_s(l_49.f6, 6))
        {
            uint32_t l_389 = 9U;
            struct S0 l_428 = {1,0xCF,0x3BFC38B6,0x2A,-1,1,4294967295U,0x7DCB6B8F,6};
            int32_t l_440 = 0;
            int32_t l_441 = 0x54EDFD15;
            int8_t l_469 = (-8);
            if ((l_351 = (safe_rshift_func_uint16_t_u_s(p_31, 13))))
            {
                int32_t l_407 = (-2);
                int32_t l_426 = (-1);
                l_426 = ((g_126 = (((p_31 <= ((g_128.f0 , l_389) || ((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((g_151 = (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(0, (g_425 = (((safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s(0x4B2B)) && ((safe_add_func_int16_t_s_s((l_407 ^ ((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_31, (((((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_31 ^ (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(g_128.f8, g_72)) <= 0x1162), 7))), l_424)), 1)) == 7), (-1))) ^ p_31) ^ l_49.f8) >= p_31) | p_31))), p_31)), p_31)) < l_407)), l_424)) && g_165)) | l_407), l_407)), p_31)) || l_351), l_424)) || (-4)) < l_389)))), 14))), l_424)) >= 1U), 0U)) , 0U))) >= p_31) && p_31)) == l_383);
                g_427 = l_49.f2;
                g_128 = l_428;
            }
            else
            {
                int32_t l_429 = 2;
                struct S0 l_437 = {-7,0x05,0U,1,1,0xD656,0xE9846EEC,0U,0xFE};
                int16_t l_494 = 0;
                int32_t l_531 = 1;
                if (((l_429 = l_346) != (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((~(((l_441 = ((0xF689 || (g_128.f5 = (g_128.f8 & ((l_440 = ((safe_rshift_func_uint8_t_u_s((g_128.f2 | p_31), (g_93 = ((l_379 = (((l_437 , (safe_mod_func_int8_t_s_s(((l_437.f7 && (l_382 = ((0x43293D73 ^ g_72) , l_49.f6))) || 0xFA12A793), 255U))) | p_31) != g_128.f7)) == p_31)))) > 4294967295U)) & 0)))) ^ 0U)) ^ 1) , 0U)), g_165)), g_128.f6))))
                {
                    uint32_t l_454 = 0x95B1A447;
                    int32_t l_455 = 0x4A11782B;
                    if (((g_128.f8 , (g_427 = (safe_sub_func_uint8_t_u_u((((l_429 = l_424) == 4U) | ((safe_sub_func_uint32_t_u_u((p_31 = g_72), (((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((((g_265 = (((((((((l_424 , (safe_add_func_int8_t_s_s(((l_424 >= (248U >= 1)) < (((l_454 = l_437.f8) <= l_424) , l_428.f3)), l_424))) && l_346) > g_128.f5) <= l_455) > l_49.f7) , g_456) <= l_455) && 0x92) || g_128.f3)) ^ g_90) != 0xDDAF), g_126)) > 0xAE), l_424)), l_455)) <= g_381) & 250U))) , g_425)), (-5))))) ^ 0xEE41))
                    {
                        g_475 = (safe_add_func_uint16_t_u_u(((l_440 = (l_348 & ((safe_sub_func_uint8_t_u_u((g_128.f6 != (safe_add_func_uint8_t_u_u((l_429 = ((g_126 , ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((((g_128.f8 > (safe_rshift_func_uint8_t_u_s(((l_469 = (g_128.f3 > g_128.f2)) != (safe_sub_func_int16_t_s_s(l_424, (-2)))), 4))) | (g_90 = ((safe_lshift_func_int8_t_s_u(p_31, 2)) , g_128.f5))) | p_31), l_454)) && p_31), 0x3492D31B)) || g_425)) == g_128.f1)), (-7)))), p_31)) ^ 0x39))) , l_474), g_128.f4));
                    }
                    else
                    {
                        g_476 = (-8);
                        if (p_31)
                            break;
                    }
                    if (l_437.f1)
                        break;
                    g_476 = 0;
                }
                else
                {
                    int8_t l_506 = 1;
                    int32_t l_511 = 1;
                    for (g_475 = 10; (g_475 == 58); g_475++)
                    {
                        int32_t l_487 = 0x5869DE72;
                        g_476 = p_31;
                        g_128 = func_38(((3 == ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((p_31 != l_487), (safe_rshift_func_int8_t_s_u(((((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((l_494 = p_31), (!(safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(0U, (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((l_506 = (safe_lshift_func_uint16_t_u_u((l_429 = p_31), 3))), 0U)), (safe_sub_func_uint32_t_u_u(0x55AAE28E, (safe_rshift_func_uint8_t_u_u(g_151, l_389)))))))) >= g_128.f7), g_456))))) , l_487), p_31)) > p_31) > l_511) | 246U), 4)))), g_165)) > g_91), p_31)) & 0x27), l_440)) <= 1U)) && l_437.f2), g_128.f1, g_233, p_31, l_428.f3);
                    }
                }
                l_429 = ((-2) == (((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((l_440 = (-9)) < (safe_add_func_int32_t_s_s(7, (l_532 = (((0x095F && l_348) && (((safe_rshift_func_int8_t_s_s((l_530 = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint16_t_u_u((+((((((((safe_mod_func_uint8_t_u_u(l_428.f5, ((safe_add_func_uint16_t_u_u(g_90, (g_151 = 0xD632))) | g_72))) | 0x94) & 0x824D) != g_381) != l_424) && g_92) | p_31) ^ g_48)), g_425)))), 0x060D448F))), 3)) , l_424) >= 65535U)) < l_531))))) , l_428.f4), g_128.f7)) == g_475), p_31)) > 0xD1CB) & g_200));
            }
            g_476 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(p_31, (safe_add_func_uint32_t_u_u((l_540 = g_539), l_424)))), p_31));
            for (g_128.f8 = 0; (g_128.f8 == 10); ++g_128.f8)
            {
                return l_543;
            }
            g_476 = (((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_440 = (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(2, (g_165 <= (l_441 = g_90)))), 0)) >= (((safe_lshift_func_int8_t_s_s((l_543 , (safe_rshift_func_uint8_t_u_u(l_428.f6, (((((((l_428.f4 < 0x104E) ^ l_558) <= (safe_sub_func_int8_t_s_s((-7), l_389))) >= p_31) , p_31) | p_31) >= (-1))))), 7)) , 0x41) , p_31)), l_540))), p_31)), l_474)) , p_31) , p_31);
        }
    }
    l_49 = l_49;
    return g_128;
}
static uint8_t func_35(struct S0 p_36, int16_t p_37)
{
    int32_t l_163 = 0x8CA29FBB;
    struct S0 l_198 = {0,0x57,0xA4FB260F,0x43,6,0x9F56,0x0962F29F,1U,0x30};
    struct S0 l_231 = {0x2295,1,0x625BB58B,0x3C,-8,1,4294967295U,4294967295U,0x72};
    int8_t l_290 = 0x9F;
    uint8_t l_307 = 1U;
    int32_t l_326 = 0xD69F502D;
    for (g_92 = 0; (g_92 == 2); g_92 = safe_add_func_uint8_t_u_u(g_92, 1))
    {
        uint8_t l_182 = 0xFC;
        int8_t l_194 = 0x10;
        int32_t l_195 = 0x57F1B4AE;
        struct S0 l_199 = {0xF241,0x91,0x09C59F80,0,-1,9,0x3B64E573,8U,0x79};
        struct S0 l_230 = {0,-8,1U,0x73,0x4089,0xBEAC,4294967295U,4294967288U,4};
        uint32_t l_240 = 4294967295U;
        int16_t l_252 = 0x9153;
        int32_t l_261 = 0;
        uint32_t l_272 = 0xF1FB9C76;
        int32_t l_289 = 0xBCCF346C;
        uint32_t l_327 = 0x662E9029;
        for (g_128.f7 = 9; (g_128.f7 >= 47); ++g_128.f7)
        {
            uint32_t l_162 = 4U;
            int32_t l_164 = 1;
            g_165 = ((p_36.f3 , 0xD7E29C1E) & ((func_38(g_128.f2, p_36.f8, (l_164 = (((((((p_37 || ((((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((-1), 7)) == ((l_162 != (p_36.f5 == g_128.f7)) < 1)), p_36.f6)) , 4294967288U) < p_36.f0) || 1)) || p_36.f5) || 1U) >= l_163) > 0x4C1B) > 0xFB) <= (-3))), g_48, g_72) , l_163) <= 65533U));
        }
        if (((p_36.f4 = ((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((func_38((0x62B1 != ((safe_rshift_func_uint8_t_u_s(l_163, (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((g_153 = ((((p_36.f7 & (safe_rshift_func_uint8_t_u_u(((l_182 & ((~((safe_lshift_func_int8_t_s_s(((p_37 , ((l_182 & g_128.f2) , (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((+(((~0x8C3BF28D) == (!((safe_unary_minus_func_int16_t_s(g_92)) != g_128.f3))) ^ 0x0F74)), g_48)), 0x84)))) || l_163), l_163)) | 249U)) != g_72)) & l_194), 7))) ^ 0U) & p_36.f4) && 0x1B1B48E1)) > 0U) < g_48), l_182)), l_163)) , p_36.f4), 0xF6)))) >= p_36.f8)), l_182, p_36.f2, l_194, l_194) , g_128.f6), 0x49551247)) > 0x1F002BF4), l_195)), g_128.f8)) ^ 8)) , l_195))
        {
            struct S0 l_205 = {4,3,4294967292U,1,0x20C0,0x8CBD,4294967295U,4294967288U,-10};
            int32_t l_232 = 0x9841E669;
            int32_t l_273 = 0x78E15215;
            for (p_36.f2 = 0; (p_36.f2 > 56); ++p_36.f2)
            {
                int32_t l_249 = 0x6F431218;
                int8_t l_260 = 1;
                int32_t l_262 = (-5);
                int32_t l_264 = 0x8199B375;
                l_199 = l_198;
                g_200 = l_198.f6;
                for (g_48 = 0; (g_48 != 0); g_48 = safe_add_func_uint8_t_u_u(g_48, 5))
                {
                    uint16_t l_207 = 0x2620;
                    int32_t l_243 = 0x161DF2DE;
                    uint32_t l_248 = 1U;
                    for (g_128.f1 = 0; (g_128.f1 > 17); g_128.f1 = safe_add_func_int32_t_s_s(g_128.f1, 9))
                    {
                        l_198 = l_205;
                        if (g_72)
                            break;
                    }
                    g_233 = (p_36.f7 <= ((((((p_36.f1 = (~g_153)) >= l_207) ^ (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((-1) | ((safe_add_func_int8_t_s_s(0x79, 0x6A)) > ((l_232 = (safe_add_func_uint32_t_u_u(((0xBAC61511 != ((l_230 , l_231) , 4294967291U)) >= g_93), p_36.f8))) != 0x71842AC9))), 1)) , 0x58), 251U)) != 0xE451) < 0x3E9C7F93), g_92)), 0x20D79F78)), l_205.f1)), 11)) < 0x57589B60) > g_90), g_128.f7)), g_128.f4))) && p_37) != g_128.f5) > 0x062F));
                    if ((p_36.f7 , (((((((((safe_sub_func_int16_t_s_s((g_90 < l_205.f7), ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((l_240 , (func_38(l_231.f4, ((((((safe_add_func_uint32_t_u_u((((0x0640 && l_243) && ((((safe_sub_func_uint8_t_u_u(((p_36.f7 = ((safe_sub_func_uint32_t_u_u((0x6D4E311F < p_36.f4), l_231.f5)) != l_207)) | l_198.f4), l_248)) == g_151) , p_36.f3) & 0xD8)) || 0xF49A), p_37)) && g_128.f3) <= l_205.f4) <= p_36.f1) > g_128.f7) & l_231.f4), g_128.f5, p_36.f4, p_36.f5) , l_199.f5)) , l_248), l_249)) , 2), g_128.f4)) && g_153))) ^ p_36.f0) | 0x04856239) > 0x929D46ED) & g_233) | g_128.f7) ^ l_249) ^ g_128.f3) , g_128.f1)))
                    {
                        uint32_t l_263 = 4294967295U;
                        g_265 = ((((((p_36.f7 = ((p_37 = g_126) || ((p_36.f7 < (safe_sub_func_uint8_t_u_u((((l_252 == 0x6678C474) , ((((safe_sub_func_int8_t_s_s(l_249, (0xA13B | p_37))) <= ((l_264 = ((l_262 = ((safe_lshift_func_uint16_t_u_s((((+(safe_add_func_int32_t_s_s(l_260, ((p_36.f7 >= 0x13194CD0) > l_261)))) ^ l_249) | l_205.f0), g_128.f1)) & 0x40)) <= l_263)) != p_36.f0)) > (-1)) ^ p_36.f3)) && l_263), g_72))) | l_230.f6))) || 1U) == p_36.f8) , 0x97CA) , l_230.f7) == 0x6A);
                        if (g_93)
                            continue;
                        l_273 = ((safe_unary_minus_func_uint16_t_u(l_263)) & ((((g_267 = l_264) != 0xBA) & ((((l_232 = (g_128.f8 == ((p_36.f6 , (((safe_sub_func_uint16_t_u_u((((-1) <= (safe_add_func_int32_t_s_s(((g_90 > ((p_37 = (((0x3EDE != l_272) <= 0x39430258) != l_263)) > g_93)) >= 1U), g_165))) > p_36.f2), g_265)) | p_36.f2) == l_243)) <= g_91))) | l_205.f2) , l_262) , p_37)) <= p_36.f3));
                        if (l_264)
                            break;
                    }
                    else
                    {
                        int16_t l_274 = (-1);
                        l_274 = 0xFED9079C;
                        return p_36.f8;
                    }
                    l_289 = (((((safe_unary_minus_func_int32_t_s((-1))) | l_205.f0) , g_200) || ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_92 < ((+(safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((g_128.f4 = g_128.f2), (l_261 = l_198.f6))) && (g_93 = 0x84)) == (0 || (((-1) == l_231.f2) > l_230.f7))), g_128.f2)), l_199.f4)) & g_128.f7) & 0x21), 0x1F))) && 0xB4)), 0)), l_231.f3)) != p_36.f2)) >= g_128.f8);
                }
            }
        }
        else
        {
            uint32_t l_291 = 4294967295U;
            int32_t l_325 = 0xE92A9D97;
            l_291 = (g_128.f4 >= l_290);
            l_261 = ((g_128.f6 < (((l_326 = (((0x17AB & (safe_mod_func_int16_t_s_s((+(safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_307, (p_36.f6 || ((safe_lshift_func_uint16_t_u_s((~l_230.f7), 4)) | (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((+0x00), (+g_128.f4))), (((((g_126 = ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((g_151 = ((safe_sub_func_int8_t_s_s(((((p_36 , (safe_sub_func_uint16_t_u_u((l_289 = (g_128.f3 , l_230.f8)), g_72))) && 0x5E) > 0x40A0DB18) | l_231.f5), p_36.f4)) ^ p_36.f5)) == 0x5448), 3)) & l_307), p_36.f4)) > 0xE7)) != g_92) && l_291) != l_325) <= 0xB5))))))) != p_36.f4), g_128.f4)) == 0x794BD401) == g_128.f8), 0U)) > l_182), g_265)) ^ l_291), p_37))), p_36.f5))) ^ 2) >= g_90)) , g_128.f2) <= l_198.f5)) != g_128.f2);
            return l_327;
        }
        p_36 = g_128;
    }
    return p_36.f6;
}
static struct S0 func_38(int32_t p_39, uint16_t p_40, uint16_t p_41, uint8_t p_42, uint32_t p_43)
{
    uint32_t l_106 = 1U;
    int32_t l_124 = (-8);
    int32_t l_127 = 0xFFB93C35;
    struct S0 l_129 = {0xF0EF,0xF4,0xFAC948D7,0xD2,0x1054,-1,4294967293U,8U,-4};
    uint16_t l_145 = 9U;
    int32_t l_148 = (-5);
    int32_t l_149 = 0;
    int8_t l_150 = 0xD4;
    int32_t l_152 = 0x1505295F;
    for (p_41 = 0; (p_41 < 46); ++p_41)
    {
        int32_t l_123 = (-1);
        int32_t l_125 = 0xEB9EEC29;
        p_39 = p_40;
        p_39 = (safe_add_func_uint16_t_u_u((((+p_40) == (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((l_106 = 0x4C), g_48)) && p_39), (((g_91 || (safe_lshift_func_uint8_t_u_u((((+((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(4294967291U, (safe_sub_func_int16_t_s_s((g_91 = (g_72 = ((safe_unary_minus_func_uint16_t_u((l_124 = ((g_126 = ((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(g_48, ((l_125 = ((((((((safe_lshift_func_uint8_t_u_u(((((l_123 == (((((p_42 & 7U) != 1U) >= g_72) || l_124) <= g_48)) || p_43) != p_41) && p_43), g_91)) < g_72) != g_90) >= l_124) != p_39) == g_91) >= p_39) > 8U)) , l_123))) <= p_39), 65531U)) < g_92)) != p_42)))) ^ p_39))), l_127)))) == 0xB1635571), p_41)) > 1U)) && l_124) != l_127), 5))) > l_123) , g_126)))) <= 0xCC), g_48));
        l_129 = g_128;
        l_129 = g_128;
    }
    g_153 = ((~((((+((g_128.f0 = (safe_add_func_int32_t_s_s(0xB9F6C78D, (safe_add_func_int8_t_s_s((g_128.f1 = ((((((safe_lshift_func_uint16_t_u_s((l_124 <= (((safe_add_func_uint8_t_u_u((((l_127 <= (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((((l_152 = (g_151 = (((+(0x8E == (l_150 = ((p_42 != ((g_93 <= (l_149 = (l_148 = ((l_145 != (l_127 & (safe_lshift_func_uint8_t_u_s(((l_129 , 1U) < l_129.f5), 2)))) == l_129.f2)))) ^ l_129.f3)) || 0U)))) | 65535U) <= p_43))) || 0) , (-3)), 4U)), g_126))) ^ g_72) & 0xB4), l_129.f4)) == 4294967290U) == p_41)), 0)) >= p_41) >= g_90) || g_151) < 0x7040F244) <= 0x691350E2)), 0x87))))) != l_129.f1)) | p_43) & l_124) > p_43)) | g_128.f2);
    return g_128;
}
static int16_t func_44(uint8_t p_45)
{
    int32_t l_61 = 0xC0429090;
    struct S0 l_77 = {0x36DE,0xEB,4294967295U,0x40,0x375F,-1,9U,4294967295U,0xCB};
    int32_t l_80 = 0x453F4779;
    uint8_t l_94 = 255U;
    int32_t l_95 = (-1);
    int32_t l_96 = (-1);
    l_61 = (l_61 == ((0x28 <= (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((l_96 = (safe_lshift_func_uint8_t_u_u(p_45, (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((l_95 = (((g_72 = g_48) , ((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((l_77 , l_77.f4), 13)) <= (((((safe_mod_func_int8_t_s_s((((l_80 = p_45) | ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((g_93 = (~((safe_add_func_uint16_t_u_u((g_92 = (g_91 = (safe_add_func_uint32_t_u_u((g_90 = 0x3538B87B), (g_48 , p_45))))), l_77.f1)) < 1U))) < l_77.f4), g_48)) >= 65535U), g_48)) <= p_45)) , p_45), g_72)) == l_94) , p_45) ^ 0x90) && 0U)), g_72)) == 0xF63D) >= g_72) <= l_77.f0)) , l_77.f8)) , 0xCCDDECA6), 2U)), p_45))))) & 0x5AC0FE8B) == 0xDC) && g_91), l_77.f5)), l_77.f3))) != 0x14));
    return l_77.f0;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_48;
    csmith_sink_ = g_72;
    csmith_sink_ = g_90;
    csmith_sink_ = g_91;
    csmith_sink_ = g_92;
    csmith_sink_ = g_93;
    csmith_sink_ = g_126;
    csmith_sink_ = g_128.f0;
    csmith_sink_ = g_128.f1;
    csmith_sink_ = g_128.f2;
    csmith_sink_ = g_128.f3;
    csmith_sink_ = g_128.f4;
    csmith_sink_ = g_128.f5;
    csmith_sink_ = g_128.f6;
    csmith_sink_ = g_128.f7;
    csmith_sink_ = g_128.f8;
    csmith_sink_ = g_151;
    csmith_sink_ = g_153;
    csmith_sink_ = g_165;
    csmith_sink_ = g_200;
    csmith_sink_ = g_233;
    csmith_sink_ = g_265;
    csmith_sink_ = g_267;
    csmith_sink_ = g_381;
    csmith_sink_ = g_425;
    csmith_sink_ = g_427;
    csmith_sink_ = g_456;
    csmith_sink_ = g_475;
    csmith_sink_ = g_476;
    csmith_sink_ = g_539;
    csmith_sink_ = g_627;
    csmith_sink_ = g_733.f0;
    csmith_sink_ = g_733.f1;
    csmith_sink_ = g_733.f2;
    csmith_sink_ = g_733.f3;
    csmith_sink_ = g_733.f4;
    csmith_sink_ = g_733.f5;
    csmith_sink_ = g_733.f6;
    csmith_sink_ = g_733.f7;
    csmith_sink_ = g_733.f8;
    csmith_sink_ = g_811;
    csmith_sink_ = g_876;
    platform_main_end(0,0);
    return 0;
}
