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
static int32_t g_3 = 8;
static int32_t g_16 = 0xF6D4A0D4;
static uint32_t g_25 = 0x99CDF9C7;
static uint8_t g_65 = 0xFB;
static uint8_t g_107 = 0U;
static uint8_t *g_106 = &g_107;
static uint32_t g_112 = 0x81CA9286;
static int32_t g_123 = (-2);
static int32_t *g_122 = &g_123;
static uint32_t g_142 = 0xECCD2826;
static uint8_t g_143 = 251U;
static uint16_t g_145 = 8U;
static uint32_t g_218 = 0xE8D03357;
static uint8_t g_242 = 4U;
static int8_t g_245 = 0;
static uint8_t g_259 = 0x75;
static int32_t **g_284 = &g_122;
static int32_t ***g_283 = &g_284;
static int32_t g_386 = 0x0174D8FE;
static int8_t g_402 = 0;
static uint32_t g_405 = 2U;
static int16_t g_442 = (-1);
static uint32_t g_506 = 0x99FC5A76;
static int32_t ***g_548 = (void*)0;
static int16_t g_573 = (-6);
static uint8_t g_582 = 0xFC;
static uint32_t *g_624 = &g_218;
static uint32_t **g_623 = &g_624;
static int32_t ****g_646 = &g_283;
static int32_t *****g_645 = &g_646;
static int16_t *g_673 = (void*)0;
static int16_t **g_672 = &g_673;
static int16_t ***g_671 = &g_672;
static int8_t g_676 = 1;
static uint32_t g_767 = 4294967295U;
static int32_t g_818 = 0x8FBCA8D5;
static uint16_t g_822 = 65535U;
static uint8_t **g_881 = &g_106;
static uint8_t g_940 = 0U;
static uint16_t *g_985 = &g_145;
static uint16_t **g_984 = &g_985;
static uint16_t *g_1035 = (void*)0;
inline static uint32_t func_1(void);
static int8_t func_31(int16_t p_32, int32_t p_33);
static int32_t * func_36(uint32_t p_37, int32_t * p_38, int16_t p_39, int32_t * p_40, uint16_t p_41);
inline static int32_t * func_44(uint32_t p_45, int32_t p_46);
static uint32_t func_47(uint32_t p_48, int32_t * p_49, int32_t * p_50);
static int32_t * func_52(uint32_t p_53);
inline static uint8_t func_56(uint8_t p_57, uint32_t p_58, int32_t ** p_59, uint8_t p_60, int32_t * p_61);
inline static int32_t func_81(int32_t ** p_82, uint32_t p_83, int32_t * p_84, uint8_t * p_85, int32_t * p_86);
inline static int16_t func_91(int32_t ** p_92, uint32_t p_93, int32_t * p_94, int32_t * p_95);
inline static int32_t * func_98(int32_t ** p_99, int32_t ** p_100);
inline static uint32_t func_1(void)
{
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = &g_3;
    int32_t *l_7 = (void*)0;
    int32_t *l_8 = &g_3;
    int32_t *l_9 = &g_3;
    int32_t l_10 = 0x666A756A;
    int32_t *l_11 = &g_3;
    int32_t *l_12 = &g_3;
    int32_t *l_13 = &l_10;
    int32_t l_14 = 0x095A9796;
    int32_t *l_15 = (void*)0;
    int32_t *l_17 = (void*)0;
    uint16_t l_18 = 0x14AD;
    l_18--;
    for (l_10 = 0; (l_10 != (-11)); l_10--)
    {
        int8_t l_1034 = 0xA9;
        uint16_t *l_1037 = &l_18;
        uint16_t **l_1036 = &l_1037;
        int32_t l_1038 = 0x8A889526;
        (*l_12) = ((safe_mod_func_uint32_t_u_u((g_3 > (g_25--)), (safe_mul_func_uint8_t_u_u((((!(g_16 < func_31(g_3, g_16))) ^ ((((g_143 , l_1034) , (g_676 &= ((g_1035 = (void*)0) == ((*l_1036) = (*g_984))))) ^ 250U) >= 0x977CFEF7)) ^ l_1038), (*l_11))))) | (*l_4));
    }
    return (*l_9);
}
static int8_t func_31(int16_t p_32, int32_t p_33)
{
    uint32_t l_74 = 0x3BB1D441;
    int32_t l_75 = 0;
    int32_t *l_77 = &g_3;
    int32_t **l_76 = &l_77;
    int32_t *l_78 = &g_16;
    uint16_t l_1033 = 0xF810;
    for (p_32 = 16; (p_32 >= 18); p_32 = safe_add_func_uint16_t_u_u(p_32, 3))
    {
        int32_t *l_43 = &g_3;
        int32_t **l_42 = &l_43;
        uint8_t *l_64 = &g_65;
        uint32_t l_770 = 0xC150F1E4;
        (*g_284) = func_36(g_3, ((*l_42) = &p_33), (&g_16 != (void*)0), func_44(func_47((~p_32), &g_16, ((****g_645) = func_52(((safe_lshift_func_uint8_t_u_s(func_56(g_16, ((safe_rshift_func_uint16_t_u_u(0x245E, ((l_75 = (((*l_64)++) , ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(65532U, p_33)), l_74)), l_74)) == g_16))) ^ g_16))) && p_32), l_76, p_33, l_78), g_402)) , l_770)))), g_259), l_1033);
    }
    return g_245;
}
static int32_t * func_36(uint32_t p_37, int32_t * p_38, int16_t p_39, int32_t * p_40, uint16_t p_41)
{
    (*g_284) = p_40;
    return p_40;
}
inline static int32_t * func_44(uint32_t p_45, int32_t p_46)
{
    int32_t *l_785 = &g_123;
    int32_t l_790 = 1;
    int16_t *l_800 = &g_442;
    int8_t *l_801 = (void*)0;
    int8_t *l_802 = &g_245;
    int32_t l_803 = (-4);
    uint16_t *l_834 = (void*)0;
    uint16_t **l_833 = &l_834;
    uint16_t ***l_832 = &l_833;
    uint16_t ***l_835 = &l_833;
    int16_t ***l_840 = &g_672;
    int32_t ***l_845 = &g_284;
    int32_t *****l_846 = &g_646;
    int16_t l_847 = 0;
    uint8_t **l_887 = &g_106;
    for (g_573 = 0; (g_573 >= 17); g_573 = safe_add_func_uint8_t_u_u(g_573, 2))
    {
        return l_785;
    }
    if ((p_45 , (l_803 &= (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_790, ((p_45 > (p_45 , (((safe_unary_minus_func_int8_t_s(((*l_785) = ((*l_802) = (((safe_lshift_func_uint16_t_u_u(((*g_106) , (safe_mul_func_uint8_t_u_u((*g_106), g_386))), (((*l_800) ^= (safe_lshift_func_int16_t_s_u((*l_785), (((safe_mod_func_int32_t_s_s((*l_785), (**g_623))) != 0x6D2CCA0A) ^ 6)))) >= 0x730C))) != 5) & p_45))))) || 0xEE10D031) , 4294967295U))) > 4294967292U))), 0x8A54B1F4)))))
    {
        int32_t l_811 = 2;
        int8_t *l_817 = &g_402;
        uint16_t *l_819 = &g_145;
        uint16_t *l_820 = (void*)0;
        uint16_t *l_821 = &g_822;
        int32_t l_823 = 4;
        l_823 &= (((safe_rshift_func_uint16_t_u_s((*l_785), ((((**g_623) , (p_46 != (safe_mod_func_int32_t_s_s(8, 0x70CE4459)))) <= (0x4DF2 <= ((p_45 && (~l_811)) != ((safe_mod_func_uint16_t_u_u((((*l_821) = ((*l_819) = ((safe_div_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(((*l_817) = ((*l_802) ^= 0xF1)))), l_811)) == g_818))) , (*l_785)), p_45)) == p_46)))) || l_811))) | (*g_106)) >= p_46);
    }
    else
    {
        uint32_t l_848 = 4294967295U;
        (*l_785) &= (safe_lshift_func_uint16_t_u_u(g_242, (safe_add_func_int32_t_s_s(((g_402 , (safe_add_func_uint32_t_u_u((*g_624), (safe_mod_func_uint16_t_u_u(((l_835 = (l_832 = l_832)) == (void*)0), ((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((((void*)0 == l_840) >= (safe_div_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((((((**g_645) = (**g_645)) != l_845) , l_846) == &g_646), (*g_106))) & l_847) < 0x56), 0x30955C6D))), (*g_106))) , p_45), p_46)) , l_848)))))) , (*****l_846)), (**g_284)))));
    }
    for (p_46 = 0; (p_46 == (-11)); p_46 = safe_sub_func_uint16_t_u_u(p_46, 4))
    {
        uint16_t l_875 = 0x0A66;
        uint16_t l_879 = 0x382D;
        int32_t l_888 = 0xDE0973A1;
        int32_t l_890 = 0xEEC9DEA1;
        int32_t l_902 = 0xA5EA3140;
        int32_t l_924 = 1;
        int32_t l_929 = (-4);
        int32_t l_930 = (-3);
        int32_t **l_981 = (void*)0;
        int8_t l_1003 = 1;
        uint8_t *l_1030 = &g_940;
        if (p_45)
        {
            int16_t l_851 = 0xFB82;
            int8_t l_880 = 0x88;
            int32_t l_893 = (-10);
            int32_t l_931 = 0;
            if (l_851)
                break;
            for (g_218 = 0; (g_218 < 16); ++g_218)
            {
                uint16_t l_876 = 0U;
                int32_t l_877 = 0x7F9189EA;
                uint32_t *l_878 = &g_405;
                int32_t l_900 = 0xB3080E2C;
                int32_t l_908 = 0xD612AFBD;
                int32_t l_936 = 9;
            }
        }
        else
        {
            int16_t ***l_998 = &g_672;
            int32_t l_1006 = (-2);
            for (l_790 = 17; (l_790 == (-13)); --l_790)
            {
                int16_t l_1004 = 0;
                int32_t *l_1005 = &l_924;
                l_1006 = ((*l_1005) = (safe_rshift_func_int8_t_s_s(g_245, ((((l_840 == l_998) < ((safe_rshift_func_int8_t_s_u(g_940, 4)) ^ p_45)) | (((((*l_800) = (g_145 ^ p_46)) & 0x4655) <= (((safe_add_func_int32_t_s_s((((*l_785) = (0x0F7C5490 < l_1003)) == 9U), (*g_624))) | p_45) , (*g_122))) <= 0x5757)) == l_1004))));
            }
            return (****l_846);
        }
        (**g_283) = (((((((((!((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((*g_985) &= (safe_lshift_func_uint8_t_u_u(p_45, (((safe_rshift_func_int8_t_s_s(1, 4)) < 0x85) & ((((void*)0 == (**l_840)) , (safe_mod_func_int16_t_s_s(((*l_800) |= p_46), p_45))) == (*l_785)))))) < (p_46 < p_46)), 4)), p_46)), 0x2571)) >= (*****l_846))) || 1U) >= p_46) , 0x813E6ED5) | (*g_624)) || p_45) >= (*****l_846)) >= 0x32) , (**g_283));
        (*g_284) = (((*l_802) |= 0xBB) , (p_46 , func_52((safe_lshift_func_uint16_t_u_u(((l_803 &= (((*g_881) == (*g_881)) ^ ((safe_mul_func_uint8_t_u_u((~(safe_add_func_int32_t_s_s(((*l_785) = (g_582 , 0xFFA18233)), 0U))), (--(**l_887)))) != (safe_unary_minus_func_uint8_t_u((0x30 & (((++(*l_1030)) > 0x9F) != (-1)))))))) >= p_46), 4)))));
    }
    return (***g_646);
}
static uint32_t func_47(uint32_t p_48, int32_t * p_49, int32_t * p_50)
{
    int32_t *l_772 = &g_3;
    int16_t **l_776 = &g_673;
    int16_t **l_779 = &g_673;
    uint16_t *l_780 = &g_145;
    int32_t *l_781 = (void*)0;
    int32_t *l_782 = &g_123;
    (****g_645) = l_772;
    (*l_782) |= (((*l_780) &= (((!p_48) < (((p_48 | (((safe_lshift_func_uint8_t_u_u((((void*)0 == &g_259) ^ ((((*g_624) , l_776) == (((((*l_772) , (safe_mod_func_int8_t_s_s(1, (*g_106)))) ^ (-2)) && (*p_50)) , l_779)) , (**g_284))), (*l_772))) , (*l_772)) > (*l_772))) != p_48) && (*l_772))) || p_48)) , 1);
    return p_48;
}
static int32_t * func_52(uint32_t p_53)
{
    int32_t *l_771 = &g_3;
    return l_771;
}
inline static uint8_t func_56(uint8_t p_57, uint32_t p_58, int32_t ** p_59, uint8_t p_60, int32_t * p_61)
{
    int32_t *l_97 = &g_3;
    int32_t **l_96 = &l_97;
    uint8_t l_110 = 5U;
    uint8_t *l_530 = &g_143;
    uint32_t l_612 = 1U;
    uint32_t ***l_633 = &g_623;
    int32_t l_699 = (-5);
    int32_t *l_700 = (void*)0;
    int32_t *l_701 = &l_699;
    int32_t *l_702 = (void*)0;
    int32_t *l_703 = &g_123;
    int32_t l_704 = 0x26C2D764;
    int32_t *l_705 = &l_699;
    int32_t *l_706 = &g_123;
    int32_t *l_707 = (void*)0;
    int32_t *l_708 = (void*)0;
    int32_t *l_709 = &l_699;
    int32_t *l_710 = &l_704;
    int32_t *l_711 = &g_123;
    int32_t l_712 = 5;
    int32_t *l_713 = &g_123;
    int32_t *l_714 = &g_123;
    int32_t l_715 = 0xEF4C16C7;
    int32_t *l_716 = &l_712;
    int32_t *l_717 = &l_712;
    int32_t *l_718 = &l_712;
    int32_t *l_719 = &l_699;
    int32_t *l_720 = &l_699;
    int32_t *l_721 = (void*)0;
    int32_t *l_722 = &g_123;
    int32_t *l_723 = (void*)0;
    int32_t *l_724 = &l_699;
    int32_t *l_725 = &l_704;
    int32_t *l_726 = (void*)0;
    int32_t *l_727 = (void*)0;
    int32_t *l_728 = (void*)0;
    int32_t *l_729 = &g_123;
    int32_t *l_730 = &l_712;
    int32_t l_731 = (-1);
    int32_t *l_732 = &l_731;
    int32_t *l_733 = &l_704;
    int32_t *l_734 = (void*)0;
    int32_t *l_735 = &l_712;
    int32_t *l_736 = &g_123;
    int32_t *l_737 = (void*)0;
    int32_t *l_738 = &l_715;
    int32_t *l_739 = &l_731;
    int32_t l_740 = 0x09EF1ECB;
    int32_t *l_741 = &l_731;
    int32_t *l_742 = &l_731;
    int32_t *l_743 = &l_731;
    int32_t *l_744 = &l_704;
    int32_t l_745 = 0x66D17459;
    int32_t *l_746 = &l_715;
    int16_t l_747 = 0x8AC8;
    int32_t *l_748 = (void*)0;
    int32_t *l_749 = &l_731;
    int32_t *l_750 = &l_740;
    int32_t *l_751 = &l_740;
    int32_t *l_752 = &l_740;
    int32_t l_753 = 0x216D08B1;
    int32_t *l_754 = &l_712;
    int32_t *l_755 = (void*)0;
    int32_t *l_756 = &l_740;
    int32_t *l_757 = (void*)0;
    int32_t *l_758 = &l_745;
    int32_t *l_759 = &l_715;
    int32_t l_760 = 0x21BC7396;
    int32_t *l_761 = &l_745;
    int32_t *l_762 = &l_699;
    int32_t l_763 = (-6);
    int32_t l_764 = 0x1ACE0F4F;
    int32_t *l_765 = &l_731;
    int32_t l_766 = 0xEE201195;
    for (g_65 = 25; (g_65 <= 46); g_65++)
    {
        int32_t *l_88 = &g_3;
        int32_t **l_87 = &l_88;
        int32_t **l_101 = &l_88;
        uint32_t *l_111 = &g_112;
        uint8_t *l_113 = &g_65;
        int32_t l_512 = 0x1AA62D46;
        int8_t *l_515 = &g_245;
        uint32_t **l_518 = (void*)0;
        uint32_t **l_519 = &l_111;
        int32_t *l_520 = &l_512;
        uint16_t *l_523 = &g_145;
        int32_t l_524 = 0x37DBD587;
        int32_t ****l_541 = &g_283;
        int16_t *l_650 = &g_442;
        int16_t **l_649 = &l_650;
    }
    ++g_767;
    (*l_714) = (***g_283);
    return p_57;
}
inline static int32_t func_81(int32_t ** p_82, uint32_t p_83, int32_t * p_84, uint8_t * p_85, int32_t * p_86)
{
    uint8_t l_511 = 0xD3;
    for (p_83 = 0; (p_83 <= 1); p_83 = safe_add_func_int16_t_s_s(p_83, 7))
    {
        return l_511;
    }
    return l_511;
}
inline static int16_t func_91(int32_t ** p_92, uint32_t p_93, int32_t * p_94, int32_t * p_95)
{
    int32_t l_447 = 0xC9240290;
    int32_t *l_448 = &g_123;
    int32_t *l_449 = &g_123;
    int32_t *l_450 = (void*)0;
    int32_t l_451 = (-3);
    int32_t *l_452 = &l_451;
    int32_t *l_453 = &g_123;
    int32_t *l_454 = &g_123;
    int32_t *l_455 = (void*)0;
    int32_t *l_456 = (void*)0;
    int32_t *l_457 = (void*)0;
    int32_t *l_458 = &l_451;
    int32_t *l_459 = (void*)0;
    int32_t l_460 = (-6);
    int32_t *l_461 = &g_123;
    int32_t *l_462 = &l_460;
    int32_t l_463 = 1;
    int32_t *l_464 = &l_460;
    int32_t *l_465 = &l_463;
    int32_t *l_466 = &l_451;
    int32_t l_467 = 0x8B644DA4;
    int32_t *l_468 = (void*)0;
    int32_t *l_469 = &l_460;
    int32_t *l_470 = &l_460;
    int32_t *l_471 = &l_467;
    int32_t *l_472 = (void*)0;
    int32_t *l_473 = &l_467;
    int32_t *l_474 = &g_123;
    int32_t *l_475 = &l_451;
    int32_t *l_476 = &l_451;
    int32_t *l_477 = &l_451;
    int32_t *l_478 = &g_123;
    int32_t l_479 = 3;
    int32_t l_480 = (-1);
    int32_t *l_481 = &l_467;
    int32_t l_482 = 0x2F72A917;
    int32_t *l_483 = &l_463;
    int32_t *l_484 = &l_463;
    int32_t *l_485 = &g_123;
    int32_t *l_486 = &l_460;
    int32_t *l_487 = (void*)0;
    int32_t *l_488 = &l_482;
    int32_t *l_489 = &l_480;
    int32_t *l_490 = &l_451;
    int32_t *l_491 = &l_467;
    int32_t l_492 = 0xB6934789;
    int32_t *l_493 = &l_492;
    int32_t *l_494 = (void*)0;
    int32_t *l_495 = &l_463;
    int32_t l_496 = 0xCB8B082D;
    int32_t *l_497 = &l_480;
    int32_t *l_498 = &l_480;
    int32_t *l_499 = &l_492;
    int32_t *l_500 = (void*)0;
    int32_t *l_501 = &l_496;
    int32_t *l_502 = &g_123;
    int32_t *l_503 = &l_492;
    int32_t *l_504 = &g_123;
    int32_t *l_505 = &l_479;
    --g_506;
    return g_123;
}
inline static int32_t * func_98(int32_t ** p_99, int32_t ** p_100)
{
    int32_t *l_116 = &g_3;
    int16_t l_166 = 0;
    int32_t l_211 = 0xE21E3D09;
    uint32_t l_223 = 4294967287U;
    int32_t l_252 = 1;
    int32_t ****l_277 = (void*)0;
    uint32_t *l_278 = &g_218;
    int8_t *l_279 = (void*)0;
    int8_t *l_280 = &g_245;
    int32_t l_383 = (-7);
    int32_t l_390 = 0x5AF4F0EB;
    int16_t l_400 = 0x2F48;
    int32_t *l_446 = &g_3;
    for (g_107 = 0; (g_107 != 6); g_107++)
    {
        uint32_t l_117 = 4294967290U;
        uint8_t *l_134 = &g_65;
        uint8_t *l_139 = (void*)0;
        uint32_t *l_140 = (void*)0;
        uint32_t *l_141 = &g_142;
        uint16_t *l_144 = &g_145;
        int32_t *l_146 = &g_123;
        int32_t **l_154 = (void*)0;
        int32_t ***l_153 = &l_154;
        int32_t l_165 = 0x30257628;
        int32_t l_171 = 0x3A7054D2;
        int32_t l_179 = (-1);
        int32_t l_198 = 3;
        int32_t l_205 = 4;
        int32_t l_213 = 0x404BFF72;
        (*p_99) = ((*p_100) = l_116);
        (*l_146) = (g_112 == ((l_117 == (safe_mod_func_uint32_t_u_u(((((((((((safe_add_func_uint16_t_u_u(((g_122 = &g_16) != (void*)0), ((safe_sub_func_uint16_t_u_u((*l_116), (safe_rshift_func_int8_t_s_u((((((((safe_div_func_int16_t_s_s((((*l_144) &= (safe_mul_func_int8_t_s_s(((l_134 == &g_107) & (((safe_div_func_int8_t_s_s((((*l_141) = (((void*)0 == l_139) , g_123)) <= g_123), g_143)) , 1U) >= 0)), (*l_116)))) | g_112), g_112)) < (-7)) == 0xA011) < (*l_116)) > 0U) || l_117) >= l_117), 4)))) >= 65535U))) > l_117) , l_141) != (*p_100)) > (*g_106)) , (*l_116)) && 0U) && l_117) , (void*)0) == &g_112), 4U))) && 0));
        if ((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((*l_153) = &l_116) == (void*)0), (((((*l_141) |= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((&l_117 == ((safe_mul_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s((*l_146), ((safe_add_func_int8_t_s_s(l_165, (*l_116))) | 0xD0D3))) == (&l_117 != &l_117)) , (*l_146)) , (*g_106)), 1U)) , &l_117)) <= 0x76C5754D), 4)), (*l_146)))) == 0x1B7CE843) , (*l_146)) > (*l_146)))), 5U)) , g_145), 0x5642)))
        {
            int32_t *l_167 = &l_165;
            int32_t *l_168 = (void*)0;
            int32_t *l_169 = &g_123;
            int32_t *l_170 = &l_165;
            int32_t *l_172 = &l_165;
            int32_t *l_173 = &g_123;
            int32_t *l_174 = &l_171;
            int32_t *l_175 = &l_165;
            int32_t *l_176 = &g_123;
            int32_t *l_177 = (void*)0;
            int32_t *l_178 = &l_171;
            int32_t *l_180 = &l_179;
            int32_t *l_181 = &l_171;
            int32_t *l_182 = &l_165;
            int32_t *l_183 = &l_171;
            int32_t *l_184 = (void*)0;
            int32_t *l_185 = &l_179;
            int32_t *l_186 = &l_179;
            int32_t *l_187 = &l_171;
            int32_t *l_188 = &l_171;
            int32_t *l_189 = &l_179;
            int32_t *l_190 = &g_123;
            int32_t *l_191 = (void*)0;
            int32_t *l_192 = (void*)0;
            int32_t l_193 = 0x21992195;
            int32_t *l_194 = &l_165;
            int32_t *l_195 = &g_123;
            int32_t *l_196 = (void*)0;
            int32_t l_197 = 0x8DA5B5AA;
            int32_t l_199 = 0;
            int32_t *l_200 = &g_123;
            int32_t *l_201 = &l_198;
            int32_t *l_202 = &l_197;
            int32_t *l_203 = &l_199;
            int32_t *l_204 = &l_197;
            int32_t *l_206 = &g_123;
            int32_t *l_207 = &l_197;
            int32_t *l_208 = &l_171;
            int32_t *l_209 = &l_179;
            int32_t *l_210 = &l_198;
            int32_t l_212 = 0;
            int32_t *l_214 = &l_179;
            int32_t *l_215 = &l_213;
            int32_t *l_216 = (void*)0;
            int32_t *l_217 = (void*)0;
            int32_t ***l_225 = (void*)0;
            int32_t *l_246 = &l_197;
            int32_t *l_247 = (void*)0;
            int32_t *l_248 = &l_171;
            int32_t *l_249 = &g_123;
            int32_t *l_250 = &l_211;
            int32_t *l_251 = &g_123;
            int32_t *l_253 = &l_212;
            int32_t *l_254 = (void*)0;
            int32_t *l_255 = &l_193;
            int32_t *l_256 = &l_211;
            int32_t *l_257 = &l_179;
            int32_t *l_258 = &l_211;
            g_218++;
            for (l_165 = 0; (l_165 >= 14); ++l_165)
            {
                int32_t ***l_224 = &l_154;
                uint16_t l_238 = 0xA41F;
                g_122 = (void*)0;
                (*l_176) &= ((((l_223 >= (***l_153)) ^ (*l_207)) , l_224) != l_225);
                (*l_169) |= ((safe_add_func_uint16_t_u_u(((***l_153) , ((((safe_sub_func_int32_t_s_s((-10), (***l_224))) > 1) < ((((*g_106) , ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((0xE8A4A7E5 == (safe_mod_func_int8_t_s_s((3U || ((safe_rshift_func_uint16_t_u_u(g_218, 7)) | ((-1) && (**p_99)))), (*g_106)))), l_238)), (*l_116))) >= 0x94EFEA99)) > g_142) >= 5U)) & (***l_153))), 0xEA80)) , 0x82D9615D);
            }
            for (g_142 = (-5); (g_142 > 26); g_142 = safe_add_func_uint16_t_u_u(g_142, 6))
            {
                int16_t l_241 = 0xA79A;
                (*l_183) = (*l_116);
                if ((**p_99))
                    break;
                (*p_99) = &g_123;
                g_242++;
            }
            g_259--;
        }
        else
        {
            int32_t ***l_264 = &l_154;
            (*l_146) = 0;
            for (g_145 = 0; (g_145 > 22); g_145 = safe_add_func_int8_t_s_s(g_145, 9))
            {
                int32_t ****l_265 = &l_264;
                (*l_265) = l_264;
            }
        }
    }
    g_123 = ((((*g_106) == (0xD180 ^ (((*l_116) && g_3) & (((((*l_280) = ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((+((**p_100) | g_107)) > ((*l_278) = (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u(5U, 6)) || g_65) , l_277) == (void*)0), g_123)), g_242)))), g_112)), (*l_116))) & 0x5B3C)) != 0x69) , (void*)0) == (void*)0)))) , (**p_99)) || (*l_116));
lbl_415:
    (*p_100) = &g_3;
    if ((safe_div_func_int16_t_s_s(8, g_259)))
    {
        int32_t *l_285 = &l_252;
        (*l_285) |= ((void*)0 == g_283);
    }
    else
    {
        uint16_t l_299 = 0xE638;
        int32_t ****l_336 = (void*)0;
        uint32_t *l_396 = &g_112;
        int32_t l_404 = 0xF3F14628;
        int32_t *l_445 = &l_390;
lbl_444:
        for (l_211 = (-13); (l_211 > (-19)); l_211--)
        {
            int32_t *l_288 = &l_252;
            int32_t ****l_333 = (void*)0;
            (*l_288) = 0x15C3DA0F;
            for (g_242 = 0; (g_242 <= 52); g_242 = safe_add_func_int32_t_s_s(g_242, 1))
            {
                uint16_t *l_294 = &g_145;
                int32_t l_314 = 0xF5F8C257;
                int32_t ****l_334 = (void*)0;
                uint32_t *l_353 = (void*)0;
                (*l_288) = (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint8_t_u_s(((*p_99) != (*p_100)), 6)) != (--(*l_294)))));
                if (l_252)
                    goto lbl_444;
                (*g_284) = l_288;
                for (g_143 = (-12); (g_143 != 20); g_143++)
                {
                    uint32_t l_322 = 0x6962B2ED;
                    int16_t l_335 = (-1);
                    int32_t *l_337 = &g_123;
                    l_299 &= (*l_288);
                    (*l_337) = ((***g_283) = (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((g_107 , ((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((*l_288), l_314)) && ((safe_mod_func_uint8_t_u_u(((+(safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((l_322 = 1U), (safe_sub_func_int32_t_s_s(0, g_145)))), ((safe_lshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0xF3, ((safe_div_func_uint16_t_u_u((((((&g_245 != (void*)0) , l_333) != l_334) == 0x87FF4ED3) ^ 0), 0x938F)) && 7))), 1)) | g_142) | (*l_116)), 2)) == (***g_283))))) >= g_145), 255U)) , (*g_122))), 0x9B)) == l_335), 1)) , l_336)) != l_336), g_123)), l_314)), l_335)) ^ g_112), 11)));
                }
                for (g_142 = (-6); (g_142 <= 48); g_142 = safe_add_func_int32_t_s_s(g_142, 2))
                {
                    uint32_t l_347 = 1U;
                    int32_t ****l_391 = &g_283;
                    int8_t *l_401 = &g_402;
                    int32_t *l_403 = &l_314;
                    for (g_145 = 0; (g_145 < 60); g_145++)
                    {
                        uint8_t *l_348 = &g_107;
                        uint8_t *l_349 = &g_259;
                        uint32_t *l_354 = &g_112;
                        uint16_t *l_364 = &l_299;
                        int32_t l_365 = 0x79091060;
                        int16_t *l_382 = &l_166;
                        (*g_122) = (((*l_349) = ((*l_348) = (((*g_106) , ((!(*l_288)) , ((((*g_106) && (safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((*l_288), g_142)) , (g_145 , g_16)), (l_314 & (*l_288))))) && l_347) ^ g_245))) <= 0xD8ABC683))) | g_16);
                        (**g_284) = (l_347 & (safe_rshift_func_uint8_t_u_u((~(((**p_99) , (l_353 == l_354)) | (safe_mul_func_int8_t_s_s((g_107 < (g_3 >= l_314)), ((*l_280) ^= (g_3 >= (safe_mul_func_uint8_t_u_u((*g_106), g_218)))))))), (*l_288))));
                        (**g_284) = (~(safe_add_func_uint16_t_u_u(g_123, (((safe_lshift_func_uint16_t_u_u(((*l_364) |= 0x661D), 13)) != l_365) && (((l_383 &= ((((*l_288) , (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_242 | 0xB1EA) && ((*g_106) , ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((*l_382) = ((safe_div_func_int16_t_s_s(0x69E2, ((*l_364) = ((l_365 | (-9)) ^ g_3)))) , 4)) > 0U), 1)), (*l_116))) == (**g_284)), 0x1C)) > g_112))), (*l_116))), l_365)) , g_107), g_65)), g_242))) > 0xDE5451DF) > (-2))) ^ (*l_116)) == 0x5A51)))));
                    }
                    if (((((0x32A7BFF7 ^ (((*l_403) &= (((((safe_mod_func_uint32_t_u_u((((*l_401) = ((g_386 && ((&g_284 == ((!(l_347 == (safe_lshift_func_uint16_t_u_u(l_390, 9)))) , ((*l_391) = &g_284))) , (safe_rshift_func_uint16_t_u_s(((!(((!((((void*)0 != l_396) , ((safe_add_func_uint32_t_u_u((~(((((g_245 = 9) , 0U) == g_259) < l_400) , g_386)), 0xEB809281)) < 0x37)) || (*l_288))) , (*g_106)) > 0xBC)) > (****l_391)), g_218)))) , (****l_391))) != (*g_106)), g_112)) >= (*l_116)) | l_299) <= g_65) ^ g_107)) > (**g_284))) & 0x1DD7) < 0x65E0) < 0x2343))
                    {
                        g_405--;
                        (*p_99) = (*g_284);
                        if ((*l_403))
                            continue;
                        (*l_288) = ((*l_403) & (*l_116));
                    }
                    else
                    {
                        uint8_t l_412 = 0x14;
                        int32_t *l_416 = &g_16;
                        uint8_t *l_438 = &g_143;
                        int16_t *l_439 = &l_400;
                        int16_t *l_440 = &l_166;
                        int16_t *l_441 = &g_442;
                        uint8_t **l_443 = &l_438;
                        (*l_403) |= ((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_412, (safe_mod_func_int16_t_s_s(g_112, 4)))), (****l_391))) != (*g_122));
                        if (g_107)
                            goto lbl_415;
                        (*g_122) = (**p_99);
                        (*l_403) |= (((*l_443) = ((((((*g_284) != (((*l_396) ^= ((l_416 != (*g_284)) , (((****l_391) = ((((((*l_441) = (((safe_rshift_func_uint16_t_u_s((*l_416), ((g_386 > (safe_add_func_int16_t_s_s(((65529U >= ((*l_440) = ((*l_439) = (safe_add_func_uint8_t_u_u((****l_391), (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_438) = (((safe_rshift_func_int16_t_s_s((~(safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((&g_283 == (void*)0), (**p_99))), 0xC0335DBA))), 6)) || (*l_288)) <= 0)), (*g_106))), (-8))), (*l_416)))))))) && (****l_391)), g_123))) > (**p_99)))) , (*l_288)) | (**p_100))) || g_242) ^ 0x53CD) <= g_218) , (****l_391))) > 0x8BC80382))) , (*p_100))) && g_218) | 0x2C) && 0) , (void*)0)) != &g_242);
                    }
                }
            }
            (*l_288) = (**p_99);
        }
        (*l_445) &= 0x3C599F4A;
    }
    return l_446;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_16;
    csmith_sink_ = g_25;
    csmith_sink_ = g_65;
    csmith_sink_ = g_107;
    csmith_sink_ = g_112;
    csmith_sink_ = g_123;
    csmith_sink_ = g_142;
    csmith_sink_ = g_143;
    csmith_sink_ = g_145;
    csmith_sink_ = g_218;
    csmith_sink_ = g_242;
    csmith_sink_ = g_245;
    csmith_sink_ = g_259;
    csmith_sink_ = g_386;
    csmith_sink_ = g_402;
    csmith_sink_ = g_405;
    csmith_sink_ = g_442;
    csmith_sink_ = g_506;
    csmith_sink_ = g_573;
    csmith_sink_ = g_582;
    csmith_sink_ = g_676;
    csmith_sink_ = g_767;
    csmith_sink_ = g_818;
    csmith_sink_ = g_822;
    csmith_sink_ = g_940;
    platform_main_end(0,0);
    return 0;
}
