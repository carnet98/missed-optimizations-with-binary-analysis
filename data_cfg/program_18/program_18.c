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
static int32_t g_20 = 0x2A831D26;
static uint8_t g_42 = 0xB8;
static int32_t g_43[10] = {(-7), 0x1F0EF2F3, (-7), 0x1F0EF2F3, (-7), 0x1F0EF2F3, (-7), 0x1F0EF2F3, (-7), 0x1F0EF2F3};
static int32_t g_74 = 0xB108F980;
static int32_t g_80 = 0x1E3C1DC0;
static uint16_t g_81 = 65532U;
static uint32_t g_161 = 0x822E8431;
static int32_t g_165 = 6;
static uint8_t g_170 = 1U;
static uint16_t g_197 = 0x6FB9;
static int32_t g_198 = 0x0493E9E3;
static uint8_t g_219 = 0xD1;
static int32_t g_220 = 0xEE989E98;
static uint16_t g_238 = 3U;
static int32_t g_319 = 0x17DBC78B;
static int16_t g_409[4] = {0xFCE1, 9, 0xFCE1, 9};
static uint32_t g_411 = 1U;
static int8_t g_621 = 0;
static uint8_t g_693[6][3] = {{0xA0, 0xE5, 0xA0}, {0xA0, 0xE5, 0xA0}, {0xA0, 0xE5, 0xA0}, {0xA0, 0xE5, 0xA0}, {0xA0, 0xE5, 0xA0}, {0xA0, 0xE5, 0xA0}};
static uint8_t g_834 = 0xAF;
static int16_t func_1(void);
static uint32_t func_5(uint8_t p_6, uint32_t p_7);
static uint8_t func_8(int16_t p_9, int8_t p_10, const uint32_t p_11, int32_t p_12, const uint32_t p_13);
static int8_t func_14(uint8_t p_15, int32_t p_16, uint32_t p_17, uint16_t p_18, const int32_t p_19);
static int8_t func_23(uint32_t p_24);
static int8_t func_44(uint8_t p_45, int32_t p_46, int32_t p_47, const int32_t p_48);
static uint16_t func_52(uint8_t p_53, uint16_t p_54, uint16_t p_55, uint16_t p_56);
static uint16_t func_58(int16_t p_59, int16_t p_60, uint16_t p_61, int32_t p_62);
static uint16_t func_66(uint8_t p_67, uint32_t p_68, const int16_t p_69);
static uint8_t func_90(uint32_t p_91, int32_t p_92, uint32_t p_93, uint8_t p_94, const int16_t p_95);
static int16_t func_1(void)
{
    int32_t l_4 = 0x1E1E87DF;
    uint32_t l_36[1][1];
    int32_t l_41 = 0xBDD48407;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_36[i][j] = 0x1311E2DB;
    }
    g_834 &= (safe_div_func_uint32_t_u_u(l_4, func_5(func_8(l_4, func_14(g_20, (((safe_mod_func_int8_t_s_s(func_23((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_20, (-3))) || ((g_43[6] = ((!6U) ^ (g_42 ^= (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(l_36[0][0], 4)) == ((safe_rshift_func_uint8_t_u_s(l_4, (l_41 = (safe_mul_func_uint8_t_u_u(g_20, l_4))))) ^ l_36[0][0])), 6U)), g_20))))) > g_20)), 0xB2))), 249U)) == g_165) < l_4), l_36[0][0], g_20, l_36[0][0]), l_4, g_165, l_36[0][0]), g_165)));
    return g_170;
}
static uint32_t func_5(uint8_t p_6, uint32_t p_7)
{
    uint16_t l_822[5][10] = {{0xD962, 0x289F, 65531U, 0xB419, 0x36B6, 65533U, 0x36B6, 0xB419, 65531U, 0x289F}, {0xD962, 0x289F, 65531U, 0xB419, 0x36B6, 65533U, 0x36B6, 0xB419, 65531U, 0x289F}, {0xD962, 0x289F, 65531U, 0xB419, 0x36B6, 65533U, 0x36B6, 0xB419, 65531U, 0x289F}, {0xD962, 0x289F, 65531U, 0xB419, 0x36B6, 65533U, 0x36B6, 0xB419, 65531U, 0x289F}, {0xD962, 0x289F, 65531U, 0xB419, 0x36B6, 65533U, 0x36B6, 0xB419, 65531U, 0x289F}};
    int32_t l_833 = 4;
    int i, j;
    g_80 ^= (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((g_621 ^= g_43[6]), 2)) < (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((g_409[3] = l_822[0][4]) <= ((safe_mod_func_uint16_t_u_u(65535U, l_822[0][4])) == (safe_div_func_uint16_t_u_u((g_319 & ((safe_add_func_int16_t_s_s(0x9205, (l_833 = ((safe_lshift_func_int8_t_s_s(g_20, 7)) < ((safe_add_func_int16_t_s_s(((l_822[0][4] < (p_6 & p_7)) && 0xBC), 0x1CD9)) <= l_833))))) < g_219)), l_822[4][3])))), g_411)), 0x64DB04D0))) >= 0x3CAB), p_6));
    return p_7;
}
static uint8_t func_8(int16_t p_9, int8_t p_10, const uint32_t p_11, int32_t p_12, const uint32_t p_13)
{
    const uint32_t l_652 = 0x5B496D99;
    int32_t l_653 = (-1);
    int8_t l_721 = 9;
    int32_t l_730 = (-1);
    int32_t l_731 = 0x0A7747AF;
    int32_t l_733 = 6;
    int32_t l_734 = 0xCAA1B70D;
    int32_t l_735 = 0xFD52D8BE;
    int32_t l_736[4] = {0x9147FA53, (-1), 0x9147FA53, (-1)};
    uint8_t l_737 = 0U;
    uint32_t l_740 = 4294967295U;
    int32_t l_795 = 0xA2BF3FC8;
    int32_t l_810 = 1;
    uint16_t l_811 = 0xF0B8;
    int i;
    for (g_74 = 9; (g_74 >= 1); g_74 -= 1)
    {
        int i;
        g_43[g_74] = (-1);
    }
    l_653 = ((+(g_81 = 0x29ED)) == (g_411 > (safe_unary_minus_func_int8_t_s(((p_13 == l_652) && 0x0F8B)))));
    for (g_238 = 0; (g_238 <= 53); g_238 = safe_add_func_uint16_t_u_u(g_238, 1))
    {
        uint16_t l_690 = 0xBF58;
        int32_t l_711[10][1] = {{8}, {8}, {8}, {8}, {8}, {8}, {8}, {8}, {8}, {8}};
        uint16_t l_771 = 65526U;
        int i, j;
        for (g_198 = 0; (g_198 <= 7); g_198++)
        {
            int32_t l_664[8][2][6] = {{{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}, {{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}, {{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}, {{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}, {{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}, {{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}, {{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}, {{(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}, {(-1), (-1), 0xE227F4EF, 0x66A8991D, 0xE227F4EF, (-1)}}};
            uint16_t l_674 = 0xFA0F;
            const int32_t l_703[7][6] = {{2, (-7), (-1), 3, (-7), 0xC6DF3298}, {2, (-7), (-1), 3, (-7), 0xC6DF3298}, {2, (-7), (-1), 3, (-7), 0xC6DF3298}, {2, (-7), (-1), 3, (-7), 0xC6DF3298}, {2, (-7), (-1), 3, (-7), 0xC6DF3298}, {2, (-7), (-1), 3, (-7), 0xC6DF3298}, {2, (-7), (-1), 3, (-7), 0xC6DF3298}};
            int32_t l_726 = 0xC63A252C;
            int32_t l_727 = 0xFC565E48;
            int32_t l_728 = 4;
            int32_t l_729 = 8;
            int32_t l_732[4] = {0, 0xDF92009A, 0, 0xDF92009A};
            int i, j, k;
            for (p_9 = 5; (p_9 != 14); p_9 = safe_add_func_int16_t_s_s(p_9, 9))
            {
                l_653 = g_42;
                if (g_197)
                    break;
            }
            if ((p_10 >= ((g_43[6] != ((+((((p_12 |= l_652) || l_653) >= p_11) == g_409[0])) != ((((l_653 || g_43[6]) < (safe_sub_func_uint32_t_u_u((((~g_170) | l_664[4][0][1]) > g_81), l_664[4][0][1]))) != 0x41A4) && 0xD8796C1E))) >= (-1))))
            {
                int32_t l_694 = 0x8FC4445E;
                for (g_197 = 18; (g_197 <= 28); ++g_197)
                {
                    l_653 = (safe_lshift_func_uint16_t_u_s(((((((p_9 ^ p_9) & (!p_9)) > (safe_sub_func_uint8_t_u_u(254U, g_43[6]))) > (2U || g_411)) > (safe_mod_func_uint16_t_u_u(p_10, 0xE447))) <= l_674), p_11));
                }
                for (g_81 = 21; (g_81 != 25); g_81++)
                {
                    int16_t l_683 = 0x203F;
                    int32_t l_695[4] = {1, 0x3B8D83AC, 1, 0x3B8D83AC};
                    int32_t l_696 = 0x0474A25F;
                    int i;
                    g_80 = (g_319 == ((0xA4341FC4 & (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((p_12 < 0x3E49), (l_653 || (safe_mul_func_uint16_t_u_u((l_683 & (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((p_9 |= (safe_sub_func_uint16_t_u_u(0xDF1B, (l_690 |= 0xDA52)))) > ((safe_add_func_int32_t_s_s(l_674, 0xAE79BE78)) & g_170)), 3)), 1))), 65535U))))), g_693[1][1]))) | p_10));
                    p_12 = ((p_11 > (g_621 = (1 >= g_43[8]))) || ((((l_694 = (p_10 ^= 0)) && (g_621 = 0x1E)) && (l_696 = (l_695[2] = g_170))) || (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(5U, (p_9 > (safe_rshift_func_uint16_t_u_s(l_703[2][4], p_13))))) & 0x23AF846C), 0))));
                }
            }
            else
            {
                uint8_t l_704[2][3] = {{4U, 0x45, 4U}, {4U, 0x45, 4U}};
                int16_t l_710 = 0;
                int i, j;
                l_653 = l_704[0][0];
                g_319 = (safe_unary_minus_func_uint16_t_u((((((((safe_add_func_uint16_t_u_u(g_80, 0x3C8A)) < l_690) & (safe_div_func_uint16_t_u_u(((g_621 = (l_652 == (l_710 = 0xCB8FE285))) > ((--g_170) & ((((safe_add_func_int8_t_s_s(((p_12 ^= ((~p_10) > (safe_div_func_int16_t_s_s((((l_703[3][1] != ((safe_lshift_func_int8_t_s_s(l_721, 2)) ^ (safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(g_409[1], l_703[2][4])), l_664[3][1][0])))) > p_9) != 0x3B), p_9)))) == 0xBCF2F5A1), l_690)) < g_693[2][2]) & g_409[0]) != l_704[1][2]))), 0x8239))) && 0x47C9) >= 0x7AF8) < p_11) || l_711[0][0])));
            }
            g_43[8] = g_43[8];
            l_737++;
        }
        l_740 = g_409[0];
        for (l_734 = 0; (l_734 <= 6); l_734 = safe_add_func_uint32_t_u_u(l_734, 4))
        {
            const int16_t l_772 = 3;
            int32_t l_773 = 0xB0380E9B;
            int32_t l_774 = 0x455A48FA;
            uint32_t l_777 = 0U;
            uint16_t l_791 = 0x2EF0;
            uint32_t l_792 = 0xA8F2CDA6;
            l_773 &= ((((l_733 = (0U != (safe_lshift_func_int8_t_s_u((p_9 < (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(1, 3)), (safe_div_func_uint32_t_u_u(((g_43[6] = (0x0A != g_81)) == ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((p_9 != (((p_10 ^= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_734, (safe_rshift_func_int16_t_s_s(((l_711[6][0] = g_219) & (g_409[0] == l_734)), p_13)))), l_771)), 1)), 2))) <= 0xE8) != l_690)) ^ 247U) || 8U), p_12)), 0xC0AB)) & (-9))), 0x78A8CF6E)))) >= l_772), p_12)), l_772))), g_80)))) & l_772) || 0x59A5AE10) && 255U);
            l_777 ^= ((++g_411) <= g_74);
            l_653 = (((safe_lshift_func_uint8_t_u_u((g_219 < (((g_409[0] == (l_711[5][0] = l_774)) && l_737) && l_730)), ((l_773 = l_737) != ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((0x5629FB11 ^ ((safe_lshift_func_int8_t_s_s(l_690, 4)) || ((safe_mul_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_u(p_11, l_777))), l_791)) < p_12))), g_161)), l_721)) | g_220)))) > p_9) || g_198);
            l_792++;
        }
        if ((0x00 || (l_711[1][0] && 7)))
        {
            return p_12;
        }
        else
        {
            uint8_t l_802[2];
            int32_t l_809 = 0x59CE284F;
            int i;
            for (i = 0; i < 2; i++)
                l_802[i] = 0x99;
            g_198 = l_795;
            l_711[1][0] = g_80;
            g_80 = (g_198 = ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(g_219, 5)), (safe_mod_func_uint16_t_u_u((l_802[0] >= (l_711[1][0] > (p_10 & (((0x3D88 > g_693[1][1]) != (safe_mul_func_uint8_t_u_u((g_409[1] <= (((((l_809 = (safe_div_func_uint16_t_u_u(p_11, (--g_81)))) || ((g_693[1][1] != 4294967295U) < p_13)) && p_12) | 0) == p_12)), l_802[1]))) || 0x47)))), p_9)))) && 0xADF97740));
            for (p_9 = 0; (p_9 <= 0); p_9 += 1)
            {
                for (l_795 = 9; (l_795 >= 1); l_795 -= 1)
                {
                    int i, j;
                    return l_711[l_795][p_9];
                }
            }
        }
    }
    --l_811;
    return p_9;
}
static int8_t func_14(uint8_t p_15, int32_t p_16, uint32_t p_17, uint16_t p_18, const int32_t p_19)
{
    uint8_t l_649 = 0xDB;
    return l_649;
}
static int8_t func_23(uint32_t p_24)
{
    int16_t l_57 = 0;
    int32_t l_70 = 1;
    int32_t l_75 = 0xEF5D3CC1;
    int32_t l_78 = 0x32DC1B2D;
    int32_t l_79[7][1][8] = {{{(-1), 8, (-8), 0x603F559C, 0x603F559C, (-8), 8, (-1)}}, {{(-1), 8, (-8), 0x603F559C, 0x603F559C, (-8), 8, (-1)}}, {{(-1), 8, (-8), 0x603F559C, 0x603F559C, (-8), 8, (-1)}}, {{(-1), 8, (-8), 0x603F559C, 0x603F559C, (-8), 8, (-1)}}, {{(-1), 8, (-8), 0x603F559C, 0x603F559C, (-8), 8, (-1)}}, {{(-1), 8, (-8), 0x603F559C, 0x603F559C, (-8), 8, (-1)}}, {{(-1), 8, (-8), 0x603F559C, 0x603F559C, (-8), 8, (-1)}}};
    int i, j, k;
    if (p_24)
    {
        uint8_t l_49 = 0x33;
        int32_t l_73 = 0xE48C0C84;
        int32_t l_76 = 0xA91A76A4;
        int32_t l_77[1];
        int8_t l_274 = 6;
        int i;
        for (i = 0; i < 1; i++)
            l_77[i] = 0x19924203;
        if ((func_44(g_20, l_49, (safe_mul_func_uint16_t_u_u(func_52(l_57, func_58((0xADD33D73 ^ (safe_add_func_int8_t_s_s((!(g_43[6] > (p_24 || func_66((l_70 ^= g_20), (safe_add_func_int32_t_s_s((l_79[1][0][5] = ((++g_81) < ((safe_add_func_uint8_t_u_u((l_73 = (l_75 = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u(p_24, func_90(l_78, p_24, g_80, p_24, p_24))) ^ 0x8A) & p_24), 8)))), p_24)) < l_274))), 2)), g_165)))), l_77[0]))), g_43[3], g_165, g_43[5]), g_409[3], l_57), g_20)), p_24) == l_49))
        {
            g_198 ^= (l_274 && (safe_rshift_func_uint8_t_u_u(g_80, 1)));
            return g_161;
        }
        else
        {
            return p_24;
        }
    }
    else
    {
        int8_t l_632 = 1;
        int32_t l_633 = 0;
        int32_t l_634 = 2;
        int32_t l_635 = 0xE39DB4A7;
        int32_t l_638 = 0x12D64476;
        g_621 = (l_70 = p_24);
        l_70 = p_24;
        g_80 = (safe_lshift_func_uint8_t_u_u(((l_79[6][0][3] <= (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((--g_197), 13)) & l_638) >= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(((((l_634 >= g_165) <= (((safe_mul_func_uint8_t_u_u(l_635, ((!(0x2A & (((g_81 = ((~g_165) & (g_319 >= (safe_mod_func_int8_t_s_s(l_638, l_79[1][0][5]))))) >= p_24) && 0x2CDC))) < 0xE1))) > l_57) && (-1))) ^ 0x70DC0C2B) ^ g_319), 2)) ^ 0x1166AE4A), l_57))), g_74)) & p_24), 1)) || g_42) & 247U), l_75))) || (-3)), 1));
    }
    return g_409[0];
}
static int8_t func_44(uint8_t p_45, int32_t p_46, int32_t p_47, const int32_t p_48)
{
    int32_t l_618 = (-1);
    p_47 = g_411;
    return l_618;
}
static uint16_t func_52(uint8_t p_53, uint16_t p_54, uint16_t p_55, uint16_t p_56)
{
    int16_t l_458 = 0x60DF;
    int32_t l_459[5];
    uint32_t l_558 = 1U;
    int32_t l_575[4] = {4, 0xBFF7155C, 4, 0xBFF7155C};
    uint32_t l_588 = 0U;
    int8_t l_607 = 0x99;
    int32_t l_617[6][8] = {{(-4), 9, 9, 0, 0, 1, 0, 0}, {(-4), 9, 9, 0, 0, 1, 0, 0}, {(-4), 9, 9, 0, 0, 1, 0, 0}, {(-4), 9, 9, 0, 0, 1, 0, 0}, {(-4), 9, 9, 0, 0, 1, 0, 0}, {(-4), 9, 9, 0, 0, 1, 0, 0}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_459[i] = 0x05B03ECC;
    for (g_42 = 0; (g_42 <= 3); g_42 += 1)
    {
        int32_t l_451 = 0x537B6BF4;
        int32_t l_456 = 0xD69C6D1A;
        int32_t l_463 = (-10);
        int32_t l_464 = 0x3D5187F8;
        uint32_t l_483[10][8][3] = {{{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}, {{0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}, {0x4278F18D, 0xC104672E, 0x4278F18D}}};
        int8_t l_493[10][5][5] = {{{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}, {{8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}, {8, 0xAE, 0x51, 0xB9, 0x9D}}};
        uint32_t l_495 = 1U;
        int32_t l_556 = 3;
        int32_t l_557 = 0xDB158A97;
        int i, j, k;
        g_43[6] |= (-1);
        if (g_409[g_42])
            break;
        for (g_81 = 0; (g_81 <= 9); g_81 += 1)
        {
            int32_t l_461 = (-1);
            int32_t l_462[10][4][4] = {{{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}, {{0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}, {0x266CB6D5, 1, 0, 1}}};
            uint32_t l_465 = 1U;
            int i, j, k;
            if (g_43[g_42])
                break;
            g_43[g_81] = ((safe_unary_minus_func_uint32_t_u(g_43[g_42])) ^ (safe_mod_func_uint8_t_u_u(g_161, 3U)));
            for (p_54 = 0; (p_54 >= 51); ++p_54)
            {
                int8_t l_452 = 1;
                int32_t l_454[1][1];
                int16_t l_491[3][4][5] = {{{0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}}, {{0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}}, {{0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}, {0, 1, 1, 0, 0xAB54}}};
                int32_t l_492 = 0x228F5384;
                int32_t l_529[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_454[i][j] = 0x574BBDFA;
                }
                if (g_43[g_81])
                    break;
                for (g_219 = 0; (g_219 < 7); g_219 = safe_add_func_uint8_t_u_u(g_219, 9))
                {
                    int8_t l_453 = 0x31;
                    int32_t l_455 = 0x69B05E94;
                    int32_t l_457 = (-1);
                    int32_t l_460[8] = {0, (-6), 0, (-6), 0, (-6), 0, (-6)};
                    int i;
                    l_465++;
                    l_454[0][0] = p_54;
                    for (g_197 = 18; (g_197 != 32); g_197 = safe_add_func_uint32_t_u_u(g_197, 7))
                    {
                        uint8_t l_494 = 249U;
                        int32_t l_496 = 0xD0B0B5A8;
                        int32_t l_552 = 1;
                        l_496 &= (safe_rshift_func_uint8_t_u_u(((p_53 & (safe_sub_func_int8_t_s_s(((+((safe_div_func_uint16_t_u_u(1U, (((g_409[0] &= (l_457 == (((l_460[5] || (((((((safe_sub_func_int32_t_s_s((l_454[0][0] == (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_483[7][5][1], (!65529U))), ((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((l_492 = (l_491[2][2][0] = (g_197 != 0))) > l_493[6][1][1]), 11)), 10)), p_56)) >= (-1))))), (-10))) && 0xDE38) <= l_454[0][0]) && g_42) <= 65528U) < l_494) & 255U)) > 0xEE65) >= p_53))) > 0xEE6C) && 0xF6))) && l_495)) == 5), 1U))) && g_319), 1));
                        l_454[0][0] = (safe_mul_func_uint16_t_u_u((((((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((!(safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(246U, (p_53 = p_56))), g_20)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(g_409[g_42], (safe_rshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(0, 0U)), (g_319 = (safe_mul_func_int16_t_s_s((p_55 | (g_43[g_81] = ((safe_lshift_func_int16_t_s_s((((~0x3353B18B) && g_409[0]) ^ p_54), g_409[0])) || 1))), l_529[5]))))) <= 0xC2D1) > g_170), g_220)))), 0)))) && g_161), 2)), 5))), g_165)), p_55)) & p_56) != g_409[0]) ^ l_491[2][3][4]) < 0x162D), p_56));
                        g_80 = (safe_sub_func_int16_t_s_s((l_457 |= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((-1) >= (p_53 &= 0U)), (l_494 | (l_552 = (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((65530U & (safe_mod_func_int8_t_s_s((l_454[0][0] > 0xDBE4), (safe_add_func_int16_t_s_s((l_496 = ((safe_sub_func_int16_t_s_s(0x5AA1, g_219)) | p_55)), l_462[1][2][1]))))), g_170)), l_462[1][2][1])), 3)), 0x82)), p_56)))))), p_54))), (-2)));
                        if (p_56)
                            break;
                    }
                }
                for (p_55 = 17; (p_55 != 17); p_55 = safe_add_func_int32_t_s_s(p_55, 7))
                {
                    int32_t l_555[2][4] = {{0, 0, (-5), 0}, {0, 0, (-5), 0}};
                    int i, j;
                    l_464 = p_55;
                    l_459[3] = (-1);
                    l_558--;
                }
            }
        }
        g_43[7] = (g_319 = (l_575[1] = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(65531U, (!((p_55 && (safe_rshift_func_int16_t_s_u(p_54, p_53))) && ((g_80 < (safe_rshift_func_uint8_t_u_u(p_54, 3))) == (p_53 | (safe_mul_func_int16_t_s_s(0x3FCA, (((l_459[4] = (safe_sub_func_int32_t_s_s((~65535U), l_493[6][1][1]))) > l_493[3][0][4]) ^ p_55))))))))), 0x0194))));
    }
    l_459[4] = (safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s(0x580ADB61, ((l_575[1] = (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_170, ((g_411 ^= p_55) <= ((safe_rshift_func_int16_t_s_u((((-10) & (l_558 < ((g_165 >= p_55) & 0xC8))) < (safe_mod_func_uint32_t_u_u(l_575[0], 1))), 2)) > p_56)))), g_197))) | l_458))) != p_55), g_220));
    l_588++;
    l_617[0][5] = (safe_add_func_uint8_t_u_u((g_42--), (safe_sub_func_int8_t_s_s((4294967295U ^ ((safe_lshift_func_uint16_t_u_u((g_411 < ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((g_409[0] & (l_607 = (l_575[2] ^= (safe_rshift_func_uint16_t_u_s((+((!p_55) ^ g_43[1])), 4))))), ((p_53 & ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(0x69)), (safe_rshift_func_int8_t_s_s(((-8) < (safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((l_459[1] = 0), l_458)) <= 1), g_80))), g_20)))) > 0)) > l_558))), 0x150E2667)) <= p_55)), 11)) || g_43[1])), l_458))));
    return g_219;
}
static uint16_t func_58(int16_t p_59, int16_t p_60, uint16_t p_61, int32_t p_62)
{
    int8_t l_443[3];
    int i;
    for (i = 0; i < 3; i++)
        l_443[i] = 0;
    l_443[1] = p_62;
    return p_62;
}
static uint16_t func_66(uint8_t p_67, uint32_t p_68, const int16_t p_69)
{
    int16_t l_279 = 0xA3A6;
    int16_t l_287[9][6][1] = {{{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}, {{0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}, {0x7DC5}}};
    int32_t l_292 = 1;
    int32_t l_293 = 0x26944799;
    int32_t l_320 = (-10);
    int i, j, k;
    l_293 = ((((((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_279 > (safe_sub_func_uint32_t_u_u(1U, (g_165 ^ (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((65535U & l_287[2][0][0]))), ((safe_add_func_int8_t_s_s(l_287[6][1][0], (((l_279 == (l_292 = (0x07 || ((safe_rshift_func_int16_t_s_s((3 ^ l_287[6][4][0]), g_42)) < g_197)))) <= g_165) < 0U))) ^ 0xF6D35079))), l_287[2][0][0])))))), p_69)), 255U)) <= g_43[5]) ^ 7U) != (-1)) > 0x551151F3) >= l_279);
    l_320 = (g_80 = ((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((~l_287[1][3][0]) == (safe_div_func_uint32_t_u_u((g_220 >= (g_319 |= (g_43[8] == (!((p_67 == (l_292 = 0xEA05)) < (g_161 = (l_293 = (safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_43[8], p_68)), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((!((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(l_287[6][3][0], (safe_rshift_func_uint16_t_u_u((((l_279 < 0x2CC7) && (-1)) | g_161), p_67)))) <= g_161), 248U)) >= l_287[7][0][0])), g_81)), (-1))))), g_43[6]))))))))), 4294967295U))) != l_279), (-8))), 7)) > 0xA56A24BE));
    for (g_161 = 0; (g_161 != 46); g_161++)
    {
        int32_t l_324 = 0xE8D20A93;
        int32_t l_351 = 7;
        int32_t l_384 = 0xB5C9E143;
        uint16_t l_402[6][1] = {{0xB5FD}, {0xB5FD}, {0xB5FD}, {0xB5FD}, {0xB5FD}, {0xB5FD}};
        int8_t l_406 = 0;
        int i, j;
        g_74 = ((!(l_324 == g_80)) & (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((~(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((p_67 ^ l_324), (((p_69 == ((~((l_293 &= ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((((((safe_mod_func_uint16_t_u_u(0x2F92, p_68)) == (safe_mul_func_int16_t_s_s((l_351 = (safe_mul_func_int8_t_s_s(p_69, (safe_sub_func_int8_t_s_s(0xEA, (-1)))))), l_292))) || p_67) <= 1) && 0x15A41753) | p_67) ^ 1), 0xFC)), p_67)) == g_198)) != g_161)) || g_198)) & p_68) == l_324))) || g_197), g_165)), p_69)) | p_67) || p_68)), g_198)) && l_279), 0)), p_68)));
        for (g_81 = 0; (g_81 <= 0); g_81 += 1)
        {
            const uint32_t l_364 = 0xDC0412EF;
            int32_t l_365 = (-1);
            int32_t l_436 = 4;
            for (l_293 = 0; (l_293 <= 0); l_293 += 1)
            {
                int i, j, k;
                g_74 = (0x2F || (safe_div_func_uint32_t_u_u(l_287[(l_293 + 6)][l_293][l_293], ((safe_mul_func_uint16_t_u_u((((l_365 |= ((((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((((((safe_div_func_int16_t_s_s(5, (safe_div_func_uint16_t_u_u((g_238 | g_43[7]), 0xC786)))) >= 4294967288U) || ((((0x67C5 & l_287[(l_293 + 6)][l_293][l_293]) != l_287[(l_293 + 6)][l_293][l_293]) == g_238) >= p_68)) || l_287[(l_293 + 6)][l_293][l_293]) >= l_364), p_69)), l_351)) ^ l_292) < l_287[0][1][0]) & l_287[(l_293 + 6)][l_293][l_293])) == l_351) <= g_42), g_219)) || p_68))));
                l_320 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(p_67, (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_198, g_220)), g_170)), 3)))) != 0xA95D), p_69)), (safe_mod_func_uint8_t_u_u(((p_67 >= l_351) == (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(l_384, l_287[0][0][0])), 7))), p_69))));
                l_324 = ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0xEE57, l_351)), p_67)), (+g_43[6]))) && g_43[9]);
            }
            for (l_293 = 0; (l_293 <= 0); l_293 += 1)
            {
                int8_t l_401[5] = {0x47, 0xE4, 0x47, 0xE4, 0x47};
                int i;
                l_384 = 0xCBBCD2E2;
                g_80 = ((g_161 >= (safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((l_365 | (l_384 = ((l_365 || 0x829E) == (p_68 = ((safe_mod_func_uint32_t_u_u((g_170 >= ((g_161 & (~((safe_mod_func_int16_t_s_s(1, p_67)) & l_384))) <= p_69)), 4294967286U)) | l_351))))) & p_67), 0x2760)) == 0U) | l_401[0]), g_43[6]))) || l_365);
            }
            ++l_402[0][0];
            for (l_293 = 0; (l_293 <= 0); l_293 += 1)
            {
                int32_t l_407 = 7;
                int32_t l_408 = 1;
                int32_t l_410 = 0xB44413F6;
                int i, j, k;
                l_324 = (+(l_406 = g_43[6]));
                --g_411;
                g_74 = (safe_sub_func_uint8_t_u_u(g_411, ((safe_mod_func_int32_t_s_s((l_408 = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((0x770A != (g_219 == p_69)), ((safe_mul_func_int16_t_s_s(g_74, ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_365 &= ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((+0xF1))), l_436)) & (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_42, (safe_rshift_func_int16_t_s_u((l_287[(g_81 + 8)][(l_293 + 5)][g_81] = 1), 0)))), g_219))) & 65535U), l_408)) > 1U), 0)) <= p_67)), 65535U)), 4)) >= p_68))) <= g_319))), 2))), 4294967291U)) ^ p_68)));
            }
        }
    }
    return g_238;
}
static uint8_t func_90(uint32_t p_91, int32_t p_92, uint32_t p_93, uint8_t p_94, const int16_t p_95)
{
    uint16_t l_113 = 0xEC85;
    int32_t l_122[4] = {(-9), 0, (-9), 0};
    uint32_t l_131 = 0xD3D8B2F9;
    int32_t l_143 = 0x46E721FB;
    int32_t l_199 = 0x6F77E7A5;
    int i;
    if (((safe_lshift_func_int16_t_s_u(0, 0)) < (safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((((-1) <= (safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(((p_95 || (!(++l_113))) || (0x33 == (p_92 < g_43[1]))), 7)) != (safe_mod_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((p_91 < 255U), 0)) == l_122[3]) || l_122[2]), g_80)) || p_92) ^ 65526U), g_43[9]))) <= l_122[3]), g_42)) ^ 0x2784) ^ 0x64), g_42)) | 0xB3), p_93))) >= p_92) != p_91), 14)), l_122[2])) || l_122[3]), p_94))))
    {
        uint32_t l_141 = 4294967295U;
        int32_t l_142 = 0x33AA3A0A;
        int32_t l_164 = 0x7F51BCBD;
        int32_t l_166 = (-9);
        int32_t l_167 = 0;
        int32_t l_168[8] = {0, 9, 0, 9, 0, 9, 0, 9};
        uint32_t l_196[6][10] = {{4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}};
        int i, j;
        for (g_74 = 0; (g_74 >= (-7)); g_74 = safe_sub_func_int8_t_s_s(g_74, 1))
        {
            uint32_t l_140[7][4] = {{0x354A90BB, 4294967291U, 0x354A90BB, 4294967291U}, {0x354A90BB, 4294967291U, 0x354A90BB, 4294967291U}, {0x354A90BB, 4294967291U, 0x354A90BB, 4294967291U}, {0x354A90BB, 4294967291U, 0x354A90BB, 4294967291U}, {0x354A90BB, 4294967291U, 0x354A90BB, 4294967291U}, {0x354A90BB, 4294967291U, 0x354A90BB, 4294967291U}, {0x354A90BB, 4294967291U, 0x354A90BB, 4294967291U}};
            int32_t l_144 = 0;
            int32_t l_169 = 0x612900EB;
            int i, j;
            l_144 = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((l_131 ^ (safe_rshift_func_int8_t_s_s(((l_122[3] = (safe_sub_func_int16_t_s_s(p_94, (l_141 = (((safe_mod_func_uint32_t_u_u((p_93 = g_42), g_43[4])) ^ 2U) ^ (g_43[2] <= (((safe_lshift_func_int16_t_s_u(g_80, (0x1B <= l_140[5][2]))) || g_42) ^ 0U))))))) & p_94), l_140[0][2]))) ^ l_142), l_143)), g_43[6])), l_142));
            if (g_43[3])
                break;
            l_199 = (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(l_142, (safe_unary_minus_func_int8_t_s((0xB137 == (safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((l_122[2] = (g_198 = (((((g_74 ^ (safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s((l_143 = (safe_mul_func_uint16_t_u_u((--g_161), ((++g_170) > (((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((65532U | (((l_122[1] | g_74) >= g_42) >= (g_197 = (safe_lshift_func_int16_t_s_s((((p_94 = (safe_mul_func_int8_t_s_s(((p_93 ^= (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(l_167, (safe_add_func_int32_t_s_s(g_20, l_166)))) > (-1)), 1)), l_196[5][0]))) | l_144), 0xEE))) || 0xC8) <= 0x9C), g_42))))))), 3)), p_92)), 0x58BB)), g_80)) ^ l_142) == (-6)))))), 0xD5))))) > 0xA8E8ED7A) && g_165) < p_92) < 0xB2))), g_43[9])), 3)) < 0x1021), g_74))))))) == 0), g_74));
        }
        l_168[6] = ((safe_lshift_func_uint16_t_u_u((g_220 |= (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((~(p_92 = (l_164 = (safe_rshift_func_uint8_t_u_u(((((g_161 && g_42) == 0xC824) | 0U) || (((g_219 = (safe_add_func_uint16_t_u_u((g_197 = (l_131 > ((safe_mod_func_uint8_t_u_u((((1 != (0xC26E < (0U ^ ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(p_94, 10)) || g_42), p_91)) ^ p_93)))) > g_170) == g_80), 0xFB)) == 0x34))), g_20))) >= 2U) > 65535U)), g_170))))) || p_95), l_166)), 4))), 11)) > 0x1848BC0D);
        l_199 ^= 1;
    }
    else
    {
        int32_t l_239[5][2][7] = {{{(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}, {(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}}, {{(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}, {(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}}, {{(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}, {(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}}, {{(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}, {(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}}, {{(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}, {(-9), 0x41A2CE7F, 0xDDC81AE9, 0, 0x59F51D59, 0, 0x59F51D59}}};
        int32_t l_242 = 0xA83A99FB;
        int i, j, k;
        for (g_170 = (-16); (g_170 == 10); g_170 = safe_add_func_uint8_t_u_u(g_170, 9))
        {
            uint8_t l_227 = 0xD1;
            int32_t l_240[1];
            int32_t l_241 = 1;
            int i;
            for (i = 0; i < 1; i++)
                l_240[i] = 0x254A2175;
            l_241 = (safe_sub_func_int8_t_s_s((((safe_div_func_int32_t_s_s(((l_227 = p_92) == (((l_240[0] = (((g_219 = 0x9C) & g_198) < (g_42 ^= (l_239[4][1][0] ^= (((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_92, 3)), l_113)), p_94)) > (safe_sub_func_uint8_t_u_u(g_198, (g_238 |= ((g_80 == l_199) | g_161))))), g_161)) || l_122[3]) != g_43[6]))))) || p_95) > g_198)), l_241)) > g_80) || 0xE445), l_242));
        }
        l_143 = (((65535U < (((safe_mod_func_int32_t_s_s(((~(safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((0x069B <= (l_199 ^= g_42)), (safe_sub_func_uint8_t_u_u((p_94--), ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(l_239[4][0][6], 13)), 12)) && (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((((l_239[4][1][0] || 0x38) >= (safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(1U, 0xF425)) | l_239[3][0][6]) | g_43[6]), l_113)), 12))) < l_239[4][1][0]) < 65534U), l_239[1][0][4])) == 4), p_91)), 9))))))) > p_95), p_95))) & p_91), p_91)) | 0x28) >= g_219)) & 0x4E) >= g_170);
        for (g_219 = 14; (g_219 < 4); g_219 = safe_sub_func_uint8_t_u_u(g_219, 7))
        {
            if (g_198)
                break;
        }
    }
    return p_95;
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_20;
    csmith_sink_ = g_42;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_43[i];
    }
    csmith_sink_ = g_74;
    csmith_sink_ = g_80;
    csmith_sink_ = g_81;
    csmith_sink_ = g_161;
    csmith_sink_ = g_165;
    csmith_sink_ = g_170;
    csmith_sink_ = g_197;
    csmith_sink_ = g_198;
    csmith_sink_ = g_219;
    csmith_sink_ = g_220;
    csmith_sink_ = g_238;
    csmith_sink_ = g_319;
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_409[i];
    }
    csmith_sink_ = g_411;
    csmith_sink_ = g_621;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            csmith_sink_ = g_693[i][j];
        }
    }
    csmith_sink_ = g_834;
    platform_main_end(0,0);
    return 0;
}
