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
   int8_t f0;
};
struct S1 {
   int32_t f0;
   uint32_t f1;
   uint8_t f2;
};
static uint32_t g_11 = 6U;
static struct S0 g_38 = {0xEE};
static int8_t g_113 = 0xBA;
static struct S1 g_115 = {-2,0x354C0A20,0xE7};
static int16_t g_159 = 0xB604;
static uint8_t g_169 = 254U;
static int8_t g_194 = 8;
static uint8_t g_201 = 0x5F;
static int32_t g_310 = 0x71298951;
static const int16_t g_315 = 0x1125;
static uint32_t g_371 = 4294967292U;
static uint32_t g_424 = 0x7E516BBA;
static int32_t g_529 = 0xFF1F7D47;
static int32_t g_697 = 0;
static uint16_t func_1(void);
inline static int32_t func_2(uint16_t p_3, int16_t p_4);
static uint16_t func_17(uint32_t p_18, int16_t p_19);
static uint16_t func_26(uint32_t p_27, int16_t p_28);
static uint32_t func_29(const uint32_t p_30, uint16_t p_31, uint8_t p_32, int32_t p_33, uint8_t p_34);
inline static uint32_t func_43(int32_t p_44, uint8_t p_45, const int32_t p_46);
static const int32_t func_48(uint32_t p_49);
inline static int8_t func_56(int8_t p_57, uint16_t p_58, int8_t p_59, int32_t p_60, uint32_t p_61);
inline static uint8_t func_68(uint8_t p_69);
static int32_t func_71(int16_t p_72, int16_t p_73, uint32_t p_74, uint32_t p_75);
static uint16_t func_1(void)
{
    int32_t l_6 = (-4);
    int32_t l_1001 = 0;
    struct S0 l_1002 = {0x00};
    l_1001 = func_2((~l_6), l_6);
    l_1002 = g_38;
    return g_159;
}
inline static int32_t func_2(uint16_t p_3, int16_t p_4)
{
    uint16_t l_16 = 65531U;
    int16_t l_37 = 0xB379;
    int32_t l_933 = 0;
    struct S1 l_934 = {-1,0xC54A41F7,0U};
    l_933 = ((safe_rshift_func_int8_t_s_u(0x59, 0)) >= (safe_sub_func_uint16_t_u_u((g_11 ^ (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_16, func_17((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_4, 0U)), ((safe_sub_func_int8_t_s_s((func_26((((func_29(p_3, p_4, (safe_div_func_uint8_t_u_u(p_4, g_11)), p_3, l_37) >= 4294967295U) ^ l_16) == 248U), p_4) ^ p_4), p_3)) == l_37))), g_697))), 1))), 0x1D96)));
    l_934 = l_934;
    for (g_371 = 29; (g_371 < 58); ++g_371)
    {
        int32_t l_955 = 1;
        int32_t l_972 = (-1);
        g_529 = (safe_add_func_uint16_t_u_u(p_4, 0x2610));
        l_934 = l_934;
        if ((((safe_mul_func_uint8_t_u_u(p_3, (safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(0xFECBC632, (safe_mul_func_int16_t_s_s((0U && 1), ((safe_rshift_func_int8_t_s_u(g_115.f0, 3)) != (safe_rshift_func_uint16_t_u_u(((l_16 > (safe_mul_func_int8_t_s_s(g_315, 0xCA))) ^ l_16), p_3))))))), p_4)), l_955)))) >= 0xC220F8A8) != l_955))
        {
            int32_t l_965 = 0xFE49486C;
            int16_t l_968 = 0;
            int32_t l_971 = 0x1D202063;
            if ((p_3 != ((safe_lshift_func_int8_t_s_u((p_4 ^ (safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((+g_201), g_169)) || 0x1043), 8))), ((p_3 && (((safe_div_func_int8_t_s_s(l_965, (((safe_add_func_int16_t_s_s(l_934.f0, (g_194 != g_315))) < p_3) || l_955))) || p_3) != l_965)) || g_115.f1))) || l_968)))
            {
                return g_201;
            }
            else
            {
                g_529 = (g_194 == (-1));
                l_972 = (safe_lshift_func_int16_t_s_s(l_971, 3));
            }
        }
        else
        {
            g_529 = p_3;
            if (p_4)
                continue;
            l_933 = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_972, 5)), p_4));
            g_529 = (safe_div_func_uint16_t_u_u(g_113, p_4));
        }
    }
    for (l_934.f0 = 0; (l_934.f0 == (-29)); l_934.f0 = safe_sub_func_int8_t_s_s(l_934.f0, 2))
    {
        uint8_t l_988 = 0U;
        int32_t l_1000 = 5;
        l_1000 = (safe_add_func_uint32_t_u_u((+((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_988, (+0))), l_988)) < g_169)), (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(0x46, (safe_mul_func_int8_t_s_s((l_934.f2 <= (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((-2) || (p_3 || g_159)), 0xCB54)), p_3))), (-2))))) || p_3), p_4))));
        l_1000 = 0x55CB60B8;
    }
    return p_3;
}
static uint16_t func_17(uint32_t p_18, int16_t p_19)
{
    return p_19;
}
static uint16_t func_26(uint32_t p_27, int16_t p_28)
{
    uint32_t l_587 = 1U;
    uint32_t l_598 = 4294967286U;
    int32_t l_599 = 0;
    int16_t l_606 = 0;
    int32_t l_660 = 0x05295536;
    struct S1 l_876 = {0x5620A8CE,0xFACD502B,0x55};
    l_598 = ((((safe_unary_minus_func_uint8_t_u(((9 <= ((((safe_add_func_uint16_t_u_u(0x00D4, (((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(l_587, (((((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((((p_28 & ((g_529 & l_587) | 0x73B861F2)) ^ ((0x86 != (safe_rshift_func_int16_t_s_s(0x7B76, p_27))) < g_113)) ^ p_28) || p_27) <= 0x1A75E040), g_38.f0)), g_169)) < g_201) < p_27) == 0U) || 0xB8D369A7))), p_28)) < 1U) | g_310))) == g_159) && l_587) <= 0x2D)) || (-6)))) < 0U) >= g_424) || 0x06B7);
    l_599 = l_587;
    if ((p_27 < (safe_mod_func_int32_t_s_s(g_310, g_424))))
    {
        int16_t l_629 = 8;
        l_599 = (0x22 >= (safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s(l_606, p_28)) && ((safe_lshift_func_int16_t_s_u((g_113 & (safe_mul_func_int16_t_s_s(p_27, ((safe_mul_func_uint8_t_u_u(g_310, (safe_rshift_func_int16_t_s_s(g_11, (safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u((((safe_div_func_int8_t_s_s((0x5B != (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(0xB1, p_27)), 9)) < 0), g_194)), p_27))), g_115.f2)) != 5U) > 0xAE2F), p_27)) != g_424) ^ l_629) | g_169), 0x7A)))))) >= l_599)))), 8)) || g_529)), g_371)));
    }
    else
    {
        uint8_t l_630 = 0x20;
        int32_t l_651 = 0x834209AC;
        const uint16_t l_785 = 0x80C5;
        struct S0 l_813 = {0xB7};
        int16_t l_896 = 0xCA88;
        l_651 = (((((l_630 && ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0U, (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((l_630 > l_606) >= p_27), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_630, (((safe_div_func_int32_t_s_s((((((4294967295U <= 0U) <= l_630) == 0) & g_194) && 0), 1)) < p_27) && 0xA9DD))), g_113)))) > p_27), g_38.f0)) != 0x57E5), (-8))))), 0xAC42)), 0xDF)) <= g_529)) && p_28) > l_630) ^ p_27) | g_424);
        if ((((l_587 > (l_651 <= g_424)) <= ((l_587 > p_27) <= (safe_mod_func_int16_t_s_s(((((!(safe_lshift_func_int8_t_s_s(((~(safe_add_func_uint16_t_u_u((l_660 >= (safe_add_func_int16_t_s_s(g_315, (((l_587 != (((safe_mul_func_int8_t_s_s(0xC9, g_115.f1)) | g_115.f2) | l_651)) | l_606) != g_115.f1)))), g_194))) != p_27), 4))) & l_660) || 0x6559) && (-8)), l_660)))) == l_630))
        {
            uint16_t l_696 = 65535U;
            struct S0 l_814 = {0};
            uint32_t l_844 = 1U;
            int8_t l_873 = 0xBA;
            int32_t l_874 = 0x10CD6EBC;
            if ((safe_add_func_int8_t_s_s((-1), g_310)))
            {
                int8_t l_695 = 7;
                struct S0 l_698 = {0xAB};
                int32_t l_744 = 0;
                uint32_t l_784 = 0xA4A8CEA9;
                g_529 = (((g_115.f2 | (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((g_424 & (((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(0xD2C8, (((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((~g_201), (~(g_115.f0 != (((safe_sub_func_uint16_t_u_u(l_599, (-1))) ^ 0x05330B82) == (g_310 <= g_115.f2)))))), p_28)) && l_695), l_696)) > g_113) & g_315))) && g_169), 11)) | g_697), 0xDAC79A2B)), p_27)), p_28)) ^ 0) == g_115.f0)), 0xED)), 0U))) == 0x03) || p_27);
                l_698 = g_38;
                for (g_169 = (-14); (g_169 != 10); ++g_169)
                {
                    int8_t l_724 = 0x06;
                    uint16_t l_762 = 0U;
                    int8_t l_793 = 0x83;
                    if ((((((safe_mul_func_int8_t_s_s(l_599, (safe_lshift_func_uint8_t_u_u((0x9F || (safe_lshift_func_int8_t_s_u((-7), (((((g_697 && ((safe_mod_func_int8_t_s_s(((p_28 >= l_630) <= (safe_lshift_func_int8_t_s_u((((+(p_28 && (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((0xE0D7 & (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_201, p_27)), 1U)), (-1)))), p_27)), g_115.f0)), 0U)))) | l_698.f0) >= 0x84B8), 0))), g_169)) <= 0U)) == p_27) & p_27) <= g_113) | l_630)))), 4)))) == p_28) != l_598) > p_27) & p_27))
                    {
                        g_38 = g_38;
                        if (l_724)
                            break;
                    }
                    else
                    {
                        uint16_t l_743 = 0x33DC;
                        int32_t l_745 = 0xAE41FBAB;
                        g_115 = g_115;
                        l_744 = ((p_27 || 0x76) || (8 | (safe_add_func_uint16_t_u_u(1U, (0 != ((safe_add_func_uint16_t_u_u(p_27, ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((g_11 <= (safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s(p_28, ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_201 && l_743), p_27)), g_38.f0)) == 0x65595804))) != g_371), p_28))), p_27)), g_201)), g_201)) != 5))) ^ p_27))))));
                        l_745 = p_27;
                        l_762 = (0xC9C6825E && (safe_div_func_uint16_t_u_u(((g_11 != (!(safe_rshift_func_uint16_t_u_u((p_28 | 4294967295U), l_695)))) <= (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(g_424, ((g_371 && ((safe_rshift_func_int16_t_s_s(0x8554, (+(9 | p_28)))) >= l_696)) && l_743))) >= g_529), p_27)) > 0x4737537E) != l_743) == p_28), g_697)), l_724))), p_27)));
                    }
                    g_529 = (((((((l_696 < (0x43B9 ^ ((g_529 == (safe_unary_minus_func_int8_t_s((+((safe_mod_func_int8_t_s_s(l_744, ((((((safe_rshift_func_int16_t_s_u((-10), 13)) & (safe_lshift_func_int8_t_s_u((((l_696 <= ((((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x2079697B, 1U)), (((+(safe_div_func_int32_t_s_s(g_115.f1, g_424))) || l_784) <= g_38.f0))) & l_785) ^ 0) | 0) | g_194) == 0xB68E) && 9U) ^ l_762), 65528U)), g_115.f2)) != g_115.f2) != g_371) > l_762)) != 0xAF5F) <= 0x74), l_695))) <= g_169) == g_201) || g_115.f1) || 6))) && p_27))))) ^ g_38.f0))) >= g_529) > g_11) ^ g_194) != l_598) ^ l_696) && 0xDD);
                    g_529 = (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(3U, ((safe_unary_minus_func_uint16_t_u((safe_div_func_uint32_t_u_u(l_793, l_724)))) == g_115.f0))), 6));
                }
            }
            else
            {
                uint32_t l_832 = 0x7B80AF94;
                struct S0 l_875 = {0};
                if (p_27)
                {
                    uint32_t l_812 = 0xBB6885F8;
                    l_812 = (safe_mod_func_int8_t_s_s(((((+(!p_28)) != (+((p_28 && ((safe_mod_func_uint32_t_u_u(p_28, (safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_696 > 0U), 0xC4)), (safe_mod_func_int8_t_s_s((((((g_159 || (l_696 != (safe_sub_func_int8_t_s_s(l_785, p_27)))) || 0xAD) && g_529) < g_169) & 0x6C), p_28)))))) > p_27), 6)))) > (-5))) > 0xA15DC25C))) & g_38.f0) && g_38.f0), g_113));
                    l_814 = l_813;
                    return g_115.f0;
                }
                else
                {
                    int16_t l_817 = 0x45CB;
                    if (((safe_mul_func_uint8_t_u_u((l_817 < ((safe_add_func_int32_t_s_s((g_115.f2 || (((safe_sub_func_int32_t_s_s(((p_27 < 0) < (safe_sub_func_uint8_t_u_u(p_27, (~0x34)))), p_28)) || 0x0E92E758) > (((safe_mul_func_uint8_t_u_u(((g_310 <= g_529) < 0U), 0x02)) | l_813.f0) != g_371))), 0U)) < l_785)), (-9))) <= g_113))
                    {
                        struct S0 l_827 = {1};
                        l_827 = l_813;
                    }
                    else
                    {
                        int32_t l_845 = (-6);
                        l_599 = 1;
                        l_845 = (safe_add_func_uint16_t_u_u((0x7ABEF210 && (safe_sub_func_uint16_t_u_u(((((((l_832 > (safe_mod_func_int8_t_s_s((-9), (safe_sub_func_int16_t_s_s(g_315, ((0x49131DF7 & 0x679EA7DE) > ((safe_sub_func_uint16_t_u_u((!((safe_lshift_func_int16_t_s_s(((0 & 4294967295U) ^ 1), 3)) <= l_844)), 0xD8DD)) <= g_310))))))) || 2) || l_817) >= g_159) <= g_697) == g_115.f0), g_115.f2))), g_697));
                    }
                    l_874 = (((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((((+(((safe_mul_func_int8_t_s_s(((g_11 && (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(1)) != (safe_lshift_func_uint16_t_u_u((((l_832 | g_113) | (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_785 && (!(((safe_sub_func_uint8_t_u_u(g_38.f0, p_28)) ^ ((safe_sub_func_uint16_t_u_u(l_817, ((safe_rshift_func_uint8_t_u_s(l_844, l_606)) | 0xFD))) ^ 0x4118)) & p_28))) <= g_159), l_844)), 0x49))) == p_28), l_832))), 0x5F))) ^ g_159), l_817)) >= g_115.f2) && p_28)) >= l_873) >= p_27) <= 1), 1)) != 0xA4558568), l_660)) || 0), 0x29)), g_38.f0)) ^ g_38.f0) || 0x6749);
                }
                l_875 = g_38;
                l_875 = l_813;
            }
        }
        else
        {
            int32_t l_877 = 0;
            l_876 = l_876;
            g_38 = g_38;
            g_529 = l_877;
        }
        if (l_876.f0)
        {
            int16_t l_884 = 2;
            uint8_t l_895 = 0x69;
            g_529 = ((l_630 ^ ((p_27 < (g_371 | (l_599 && p_28))) && (safe_div_func_uint16_t_u_u(g_194, g_529)))) && ((safe_rshift_func_int8_t_s_u((6U | p_27), g_113)) < g_38.f0));
            l_651 = ((safe_div_func_int32_t_s_s(((((l_884 > ((((0xDC != (safe_lshift_func_uint8_t_u_u((l_598 || p_27), l_630))) & ((0U < (safe_lshift_func_uint8_t_u_s(0xD6, ((safe_mul_func_uint8_t_u_u((p_28 != (safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(3, 0)) >= 0), l_630))), (-10))) | g_194)))) != l_884)) | 7) && l_813.f0)) ^ l_895) < l_896) < p_28), p_28)) == p_27);
        }
        else
        {
            uint8_t l_899 = 1U;
            int32_t l_928 = 4;
            int32_t l_929 = 0xADC7C33E;
            for (l_606 = 3; (l_606 == 22); l_606++)
            {
                int32_t l_914 = 5;
                int32_t l_930 = 0x47BFA240;
                l_599 = ((g_115.f0 == (((l_899 & (safe_rshift_func_uint16_t_u_u(l_899, (((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_11 == (safe_mod_func_uint16_t_u_u((l_914 > (!(safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((~(safe_rshift_func_int8_t_s_u((((safe_div_func_uint16_t_u_u(((((p_27 | ((safe_mul_func_uint16_t_u_u(l_876.f1, (-1))) <= ((~((((l_598 >= 2U) <= g_115.f1) >= p_28) && g_201)) <= g_115.f0))) != l_914) < 0x69E3) > 0x9A), 0x3DCF)) == (-10)) | g_201), 3))), p_27)), l_914)))), l_914))), p_28)), 0x01DE)), 1)) != l_928), 7)) & 0) < l_929)))) <= g_115.f0) && l_930)) == p_28);
            }
            return p_28;
        }
    }
    g_529 = (safe_div_func_int8_t_s_s(0x22, (p_27 || g_169)));
    return g_194;
}
static uint32_t func_29(const uint32_t p_30, uint16_t p_31, uint8_t p_32, int32_t p_33, uint8_t p_34)
{
    struct S0 l_39 = {0};
    int32_t l_579 = 1;
    l_39 = g_38;
    p_33 = (safe_mul_func_uint16_t_u_u((!func_43(((+func_48((g_38.f0 | (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_39.f0 > p_32), g_38.f0)), ((((safe_sub_func_int8_t_s_s((0x699FF93F >= ((g_11 | p_32) <= func_56((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((0x9F32F520 != (safe_mod_func_uint8_t_u_u((func_68(g_38.f0) | 1U), g_115.f2))) ^ g_115.f1), 0x7B)), g_11)), l_39.f0, g_115.f2, p_30, g_38.f0))), p_31)) || l_39.f0) == l_39.f0) ^ (-2))))))) & p_31), l_39.f0, g_315)), l_579));
    return l_39.f0;
}
inline static uint32_t func_43(int32_t p_44, uint8_t p_45, const int32_t p_46)
{
    uint16_t l_578 = 0U;
    g_529 = p_44;
    p_44 = (safe_rshift_func_uint8_t_u_s(255U, (!g_169)));
    return l_578;
}
static const int32_t func_48(uint32_t p_49)
{
    uint32_t l_141 = 0x27B072BD;
    struct S0 l_156 = {0xDB};
    int32_t l_199 = 0xB6223421;
    int32_t l_297 = 0x8347ABF4;
    struct S1 l_313 = {0x67E5DD02,4294967295U,0xB5};
    uint16_t l_360 = 65526U;
    uint32_t l_466 = 0xBD85AF14;
    const int32_t l_574 = 0;
    l_141 = 0x951F222D;
    if (g_115.f2)
    {
        return g_115.f2;
    }
    else
    {
        uint16_t l_149 = 65529U;
        int32_t l_155 = 0x61DEDA81;
        if ((g_115.f1 <= 5))
        {
            const uint32_t l_142 = 0xC96F5F53;
            return l_142;
        }
        else
        {
            uint8_t l_160 = 0x5F;
            g_38 = g_38;
            for (l_141 = 0; (l_141 < 21); l_141 = safe_add_func_uint8_t_u_u(l_141, 5))
            {
                int16_t l_168 = 0x7241;
                int8_t l_193 = 0;
                for (g_115.f1 = 0; (g_115.f1 <= 43); g_115.f1 = safe_add_func_uint8_t_u_u(g_115.f1, 3))
                {
                    uint32_t l_154 = 0xBDDF9043;
                    if ((l_141 != (g_115.f2 & (safe_lshift_func_uint8_t_u_s(l_149, (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_49, (4294967295U >= 0xABD61F34))), (0U > 0x31))))))))
                    {
                        l_155 = l_154;
                        g_38 = l_156;
                        g_159 = (safe_mul_func_uint8_t_u_u(9U, 5));
                        l_160 = (247U > g_115.f2);
                    }
                    else
                    {
                        int32_t l_192 = 3;
                        g_169 = (safe_rshift_func_uint16_t_u_s((8 >= (l_155 & (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((~l_168), l_155)), g_11)))), 8));
                        g_194 = (g_115.f0 | (((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(l_168, (safe_div_func_uint16_t_u_u((((((0x946C84E0 || (safe_mod_func_int16_t_s_s((((((safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(p_49, (p_49 != (safe_lshift_func_int8_t_s_s(((((g_11 || ((g_113 == ((((l_168 ^ 1U) || g_113) != g_38.f0) && l_192)) < 0x61C2)) || (-3)) & p_49) == 0x3C26), l_193))))) & g_115.f0), l_154)) == (-6)), p_49)) && g_113), 0xE310)) || g_38.f0) || p_49) == l_192) && l_192), g_115.f2))) && l_155) < l_192) > l_193) | g_38.f0), 0xBFAE)))), p_49)) > p_49) ^ l_154) != g_115.f1) >= g_115.f2), 0x8B998A83)) <= g_11), 0U)) > p_49) >= p_49));
                    }
                    if (l_160)
                    {
                        struct S0 l_195 = {-2};
                        l_195 = g_38;
                    }
                    else
                    {
                        struct S0 l_196 = {0x5A};
                        l_196 = l_156;
                    }
                }
            }
            for (g_115.f2 = (-20); (g_115.f2 == 48); g_115.f2 = safe_add_func_int32_t_s_s(g_115.f2, 4))
            {
                uint8_t l_200 = 1U;
                l_199 = 1;
                l_200 = (-1);
                g_201 = (l_156.f0 ^ 0x1F803E92);
            }
        }
    }
    if (((safe_div_func_uint16_t_u_u(g_113, g_115.f2)) && (0U & 250U)))
    {
        const uint32_t l_225 = 0xDB0B1069;
        int8_t l_226 = (-10);
        const uint8_t l_227 = 0U;
        int32_t l_259 = 0xC68CC676;
        int32_t l_260 = (-1);
        int32_t l_311 = 0xA91A525D;
        const struct S1 l_312 = {0,6U,0xDF};
        if ((((safe_mod_func_uint16_t_u_u(((+((p_49 > (((0x2A71EAA7 ^ (safe_mul_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(p_49, (safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((((g_194 >= (((safe_mul_func_int16_t_s_s(g_11, 0)) <= (((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((((-1) <= (-1)) >= g_11), 0x2B41A0BB)) <= g_201) > l_225), l_226)), 9U)) == g_38.f0) ^ 0x1569)) <= 8)) == (-5)) ^ 0xE7D84EA2), 1)) & 0xE436573C), 0xD3)) && g_159), 0x036A)))) & 0) && p_49), l_225))) & 0xBB) ^ l_226)) > 0x19)) != l_227), l_227)) != p_49) >= 0))
        {
            uint32_t l_258 = 0x92C92717;
            int32_t l_265 = (-10);
            l_260 = ((~g_113) | (safe_rshift_func_int8_t_s_u(((0x7B94B598 >= (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(g_113, (safe_mul_func_int8_t_s_s(g_194, (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u((+p_49), 2)) >= (safe_add_func_int8_t_s_s((((safe_div_func_int32_t_s_s((((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0xB262, g_194)), 1)), ((((((0xBFFE4561 >= (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_49, 5)) > g_113), l_227))) > 65534U) < g_115.f1) >= l_227) && l_258) | l_226))) >= p_49) ^ l_259) && g_113) < 0x9D), p_49)) != p_49) && g_194), 1U))) != 255U), 0)) & g_159), 0x17)))))), g_169))) | 0x3F7625D6), l_259)));
            l_265 = ((p_49 | (safe_rshift_func_int8_t_s_u(g_115.f0, (safe_div_func_uint8_t_u_u(0xA1, g_169))))) > p_49);
        }
        else
        {
            uint32_t l_296 = 0xBF69327C;
            uint16_t l_309 = 65535U;
            struct S1 l_314 = {0x4E5C6B99,0x1AD17905,0xFC};
            for (l_260 = 0; (l_260 <= 0); l_260++)
            {
                const int16_t l_274 = (-9);
                struct S1 l_301 = {-5,0xEE17F405,0U};
                if ((safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0U, (((((l_274 ^ ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_227, 0)), 0)) < (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((!l_156.f0) ^ l_225) & 1U), ((((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u(((!(safe_sub_func_int32_t_s_s(l_199, ((0x58D05659 || (safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(p_49, g_194)) >= 0x1B), 1))) ^ (-9))))) != 0x92E2), l_296)))) >= g_11) || g_38.f0), l_225)) | 1U) || (-4)) || g_113))), 0x63E53FBD)))) || 1U) & l_297) <= p_49) | 0x9A60E030))) < 0x26E0), g_115.f1)) ^ g_169), 0x2DD7)))
                {
                    int8_t l_299 = 0x49;
                    struct S1 l_300 = {0,0x1F2DFD3F,0xD4};
                    if ((p_49 & p_49))
                    {
                        struct S0 l_298 = {0x7F};
                        l_298 = g_38;
                        if (l_299)
                            continue;
                    }
                    else
                    {
                        uint32_t l_308 = 4294967295U;
                        l_301 = l_300;
                        l_199 = l_300.f1;
                        g_310 = (safe_rshift_func_int8_t_s_s(((9 >= (safe_mod_func_uint32_t_u_u(((0x3E86 ^ ((safe_sub_func_int32_t_s_s((g_113 >= (0x7F5F9C35 || (l_301.f0 == ((((l_308 || 1) | (l_296 > (((p_49 != l_296) <= g_38.f0) > 0xC88E))) >= 1) && 0U)))), p_49)) && l_308)) <= l_309), p_49))) < 0x9856), g_115.f2));
                    }
                    l_311 = (-5);
                    l_313 = l_312;
                }
                else
                {
                    l_314 = l_313;
                }
            }
            return g_315;
        }
    }
    else
    {
        uint32_t l_329 = 4294967288U;
        int16_t l_347 = 0x3AD1;
        struct S1 l_361 = {0xE27A0AEB,0U,251U};
        struct S0 l_375 = {0x80};
        uint16_t l_433 = 1U;
        int32_t l_440 = 0xAE923902;
        int32_t l_518 = (-3);
        struct S1 l_520 = {0xD9D1F99B,0x4651075F,1U};
        if ((p_49 <= (+((((safe_unary_minus_func_int32_t_s(p_49)) != (((safe_mod_func_int8_t_s_s(3, (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((g_310 & 1U), 0xBE044237)), ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u(0x10234A52)), l_329)) || (safe_lshift_func_uint16_t_u_s(g_113, p_49))), p_49)) == g_201))))) != 65535U) ^ g_11)) | l_329) != 0x67D7))))
        {
            int8_t l_346 = (-10);
            struct S0 l_376 = {0xE3};
            int32_t l_404 = 9;
            int32_t l_506 = 1;
            struct S0 l_508 = {0xFB};
            if ((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_329, 6)), (((safe_lshift_func_uint16_t_u_u(g_11, 12)) > (safe_mul_func_int8_t_s_s(((+((l_199 >= 0xFE76) == g_201)) == (safe_mul_func_int8_t_s_s(0xFC, ((((g_113 >= (safe_rshift_func_int16_t_s_u(0x29B3, l_346))) != l_329) && g_315) && p_49)))), 0x48))) != l_329))))))
            {
                l_347 = 0x69BB4E12;
                l_199 = ((((!l_329) != ((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(g_38.f0, (p_49 & 1))) < (p_49 >= (safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_u(l_297, (safe_lshift_func_int8_t_s_s((((((safe_sub_func_int32_t_s_s(g_159, (0xF71F || l_329))) >= 0x60) != g_315) | g_169) ^ 9), l_141)))))))), p_49)) ^ l_360)) & g_169) == g_310);
            }
            else
            {
                uint32_t l_372 = 1U;
                struct S1 l_377 = {0,0U,5U};
                int32_t l_441 = 0x606A0C2D;
                int16_t l_507 = 8;
                g_115 = l_361;
                for (l_313.f0 = 0; (l_313.f0 <= (-2)); l_313.f0 = safe_sub_func_uint32_t_u_u(l_313.f0, 1))
                {
                    uint32_t l_370 = 0x994F5809;
                    g_371 = ((safe_mul_func_uint8_t_u_u((g_315 >= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x88, 1)), (-1)))), l_370)) > p_49);
                }
                l_372 = g_371;
                if ((g_315 && g_169))
                {
                    for (l_347 = 3; (l_347 >= (-23)); l_347--)
                    {
                        l_376 = l_375;
                        g_115 = l_377;
                    }
                }
                else
                {
                    int16_t l_381 = (-10);
                    int32_t l_467 = 0x889C4604;
                    uint16_t l_505 = 0U;
                    if (((((0xB712 < ((+((247U | (l_377.f2 != l_156.f0)) < (safe_rshift_func_uint16_t_u_s(l_376.f0, 1)))) | ((l_156.f0 < l_381) || (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0xDA, (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(g_115.f1, 0x9B597B53)) || g_315), p_49)) > g_194) & p_49), p_49)) ^ 1), 0x7E)) | l_404), 1)) == l_313.f1), 0xC3DF)) && p_49), 1U)), p_49)))), (-1))), p_49))))) > g_315) ^ l_377.f0) ^ g_115.f2))
                    {
                        int16_t l_407 = 0xA9F2;
                        l_407 = (safe_rshift_func_uint8_t_u_u(g_169, 6));
                        g_424 = (((safe_div_func_uint8_t_u_u(l_361.f0, (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_49, 1)), g_310)))) || (g_315 & (safe_sub_func_int8_t_s_s((-10), ((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_49, l_381)), (((g_371 & (((safe_add_func_uint16_t_u_u(((g_310 | 0x82) || p_49), g_201)) != 0U) > 9)) < 0x35E0) == 0))) < l_377.f0))))) < l_381);
                        l_441 = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_113, (p_49 || ((g_424 | ((l_377.f2 ^ (safe_mod_func_int32_t_s_s(g_113, l_433))) || (((((((0x02A8 || (safe_rshift_func_int8_t_s_s((((((safe_sub_func_uint32_t_u_u((((p_49 >= ((safe_mod_func_int8_t_s_s((-9), 1)) & p_49)) != g_315) | g_159), l_440)) | l_407) > p_49) == 4294967287U) < g_201), 2))) ^ p_49) & g_194) != 0x317CA8DE) || p_49) > 1U) >= 0xCB))) != p_49)))), l_381));
                        l_199 = l_199;
                    }
                    else
                    {
                        const uint16_t l_447 = 0xC65B;
                        l_467 = ((p_49 ^ (safe_unary_minus_func_int8_t_s((safe_div_func_uint16_t_u_u(((65530U >= (safe_lshift_func_int16_t_s_u(0xE248, (((l_447 && ((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x4DE7, 65529U)), (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(l_377.f2)), (!p_49))) == (safe_mul_func_int8_t_s_s((l_466 < g_371), g_169))) > p_49) && g_315), p_49)) ^ 1U), 1)))), l_441)), 0xB93F)) ^ 0x8330) > p_49) > p_49)) | p_49) | g_115.f0)))) < g_38.f0), g_424))))) < p_49);
                        l_507 = (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_372, ((safe_sub_func_uint16_t_u_u(p_49, (safe_lshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(((-6) | (safe_add_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(l_447)), 0x092F)) == (safe_lshift_func_int8_t_s_s(g_371, 3))) & (safe_mul_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u((((((safe_div_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(1U, (safe_rshift_func_int8_t_s_u((g_115.f0 != (safe_lshift_func_int8_t_s_u(((-3) | p_49), 3))), 0)))), p_49)) > 4U), l_505)) < p_49) != p_49) > l_372) > l_467), 0x93BC)) > 0xECAED458) == 65535U) >= l_505), 0x0A))), p_49)) >= l_447) ^ l_440) | (-1)) != l_466), 0U))), 0x2253)) != p_49) || 0x7E6A233A), 4)))) == p_49))), l_505)), l_506)), l_313.f2));
                    }
                    l_467 = l_156.f0;
                }
            }
            g_38 = l_508;
            l_518 = (((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(2, (safe_sub_func_uint32_t_u_u(0xBBD3E55A, 0x1F6F4867)))), 0xCAA2)) <= (((p_49 & 4294967295U) > (l_361.f0 < (safe_rshift_func_int8_t_s_u(0x3A, 0)))) > (+(9U & 0xC597CA0A)))) & 4294967295U);
        }
        else
        {
            struct S1 l_519 = {0x0B5DEE58,4294967295U,0xDB};
            struct S0 l_530 = {0x08};
            l_520 = l_519;
            for (g_310 = 21; (g_310 >= 0); g_310 = safe_sub_func_int8_t_s_s(g_310, 3))
            {
                g_529 = (((safe_rshift_func_int8_t_s_u(p_49, 6)) | (safe_rshift_func_uint16_t_u_u((l_519.f1 < (safe_div_func_uint32_t_u_u(0x76CBAF1C, (-1)))), g_11))) <= (0x17F145D1 == 4294967295U));
                l_530 = g_38;
            }
            g_529 = (safe_sub_func_uint8_t_u_u(((~((((safe_lshift_func_uint16_t_u_u(((0x5130 & (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((((l_360 | (safe_add_func_uint32_t_u_u(g_115.f2, g_159))) >= ((((((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((0xC0 & (safe_lshift_func_uint8_t_u_u(251U, 5))) | 4294967286U), ((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((p_49 || g_38.f0) < 0), g_194)), g_115.f2)) <= l_156.f0))) < g_310), 4)) != g_310), 14)) >= p_49) > p_49) == g_159) & 0) | g_113)) != p_49) == l_361.f2) > 0x26CF543E), p_49)), l_530.f0))) == g_194), p_49)) || l_347) & l_519.f2) ^ g_371)) >= l_519.f1), l_375.f0));
        }
        l_199 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_115.f0, p_49)), (1 ^ (((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((0U < (0 ^ (0 && (safe_div_func_int16_t_s_s((-8), ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((((safe_mod_func_int16_t_s_s((-1), l_375.f0)) | 4294967287U) != l_141) < l_433) <= g_11) < p_49), 65535U)), 5)) == g_115.f2), 0xCDAB8CBA)) ^ g_169)))))) | l_375.f0) ^ 3), 0x13FE)), l_329)) >= l_520.f2) & 6U))));
    }
    return l_574;
}
inline static int8_t func_56(int8_t p_57, uint16_t p_58, int8_t p_59, int32_t p_60, uint32_t p_61)
{
    int32_t l_140 = 0x66B1C03A;
    return l_140;
}
inline static uint8_t func_68(uint8_t p_69)
{
    struct S1 l_70 = {-1,0x039C1D55,252U};
    int16_t l_95 = (-1);
    int32_t l_114 = 0x20016C6A;
    l_70 = l_70;
    l_114 = func_71(l_70.f0, ((safe_add_func_uint16_t_u_u((0 != ((safe_mul_func_uint16_t_u_u(((0xE7E64BFC ^ ((((-9) > ((safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(g_38.f0, (l_70.f2 | ((safe_mod_func_uint8_t_u_u(((g_11 | (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((p_69 & (safe_rshift_func_int16_t_s_s(p_69, 13))), l_95)), g_38.f0))) && 0x1CF56E03), 1U)) == l_70.f2)))), l_70.f0)) != l_70.f0) && 0x80), g_38.f0)))) > g_11)) > g_11) <= p_69)) | p_69), (-8))) <= 0x3C34)), 0xAAA8)) || 0xCC), l_70.f2, l_70.f0);
    l_70 = g_115;
    if (((safe_sub_func_int8_t_s_s((4294967295U >= ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((g_113 || ((safe_mul_func_int8_t_s_s((65535U < ((safe_mul_func_int8_t_s_s(((((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((255U | g_115.f2) != (((g_115.f0 != ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(0xB9B7, 9)), 5)), l_70.f1)) ^ (l_70.f0 > 0xEB33E746))) >= l_70.f2) == p_69)) | 0x744B85C5), 7)), l_114)) < p_69) == g_11) < l_114) >= 1) && 0xB2FD), l_70.f1)) ^ g_38.f0)), p_69)) ^ 0x71)), g_115.f0)), 1)) <= l_114), 5)) && p_69)), g_38.f0)) | 0xCAFA))
    {
        l_114 = g_113;
        return p_69;
    }
    else
    {
        return p_69;
    }
}
static int32_t func_71(int16_t p_72, int16_t p_73, uint32_t p_74, uint32_t p_75)
{
    uint16_t l_106 = 0U;
    g_113 = (p_73 > (((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((p_73 > g_11), l_106)) >= 0x168E), 3)) & (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((-1), 7)), l_106)) && g_38.f0), g_11))), 1)), 0x44CB)) ^ g_11) == 0x14A5));
    return p_75;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_11;
    csmith_sink_ = g_38.f0;
    csmith_sink_ = g_113;
    csmith_sink_ = g_115.f0;
    csmith_sink_ = g_115.f1;
    csmith_sink_ = g_115.f2;
    csmith_sink_ = g_159;
    csmith_sink_ = g_169;
    csmith_sink_ = g_194;
    csmith_sink_ = g_201;
    csmith_sink_ = g_310;
    csmith_sink_ = g_315;
    csmith_sink_ = g_371;
    csmith_sink_ = g_424;
    csmith_sink_ = g_529;
    csmith_sink_ = g_697;
    platform_main_end(0,0);
    return 0;
}
