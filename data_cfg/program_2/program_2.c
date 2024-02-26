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
static int32_t g_2 = 0xBCA63185L;
static int64_t g_3 = 0xA439BEB0647DC4B4LL;
static int32_t g_5 = 0xB8FAAAEBL;
static int16_t g_6 = (-5L);
static uint8_t g_7 = 0x04L;
static int16_t g_33 = (-2L);
static uint32_t g_42 = 0x49744027L;
static uint8_t g_51 = 0x8CL;
static int8_t g_155 = (-1L);
static int32_t g_157 = 0xF222DE5CL;
static uint64_t g_158 = 0x27B072BDA1E5BAC9LL;
static uint8_t g_161 = 0x9AL;
static uint32_t g_167 = 0xF34F691DL;
static uint8_t g_178 = 0x33L;
static int16_t g_256 = 0x13C7L;
static int64_t g_259 = (-1L);
static uint16_t g_261 = 0x37A0L;
static uint32_t g_279 = 0UL;
static int16_t g_306 = 0L;
static int32_t g_361 = 0xE6D59238L;
static uint8_t g_407 = 1UL;
static uint16_t g_566 = 0x35F8L;
static int64_t g_588 = 0L;
static int32_t g_590 = 5L;
static uint32_t g_592 = 18446744073709551615UL;
static uint32_t g_620 = 0x900534BFL;
static const int8_t g_677 = 0xF2L;
static int64_t g_788 = (-3L);
static int32_t g_789 = 0L;
static uint32_t g_798 = 0x92E75841L;
static uint8_t g_969 = 0x69L;
static uint64_t g_974 = 0x82385E07FFA91CF5LL;
static uint8_t g_1006 = 0xC7L;
static uint32_t func_1(void);
static uint64_t func_24(int32_t p_25, int32_t p_26, uint8_t p_27);
static int8_t func_30(int32_t p_31, uint32_t p_32);
static uint8_t func_36(int64_t p_37, uint32_t p_38, int8_t p_39);
static int8_t func_46(int16_t p_47, int16_t p_48, uint16_t p_49, uint32_t p_50);
static int32_t func_52(int8_t p_53, int32_t p_54, int8_t p_55);
static int32_t func_58(int16_t p_59, int32_t p_60, uint8_t p_61, uint32_t p_62);
static uint16_t func_63(uint64_t p_64, uint64_t p_65, int32_t p_66, int32_t p_67);
static uint16_t func_73(uint64_t p_74, int32_t p_75, int32_t p_76, const uint8_t p_77);
static int32_t func_80(int64_t p_81, uint32_t p_82);
static uint32_t func_1(void)
{
    int32_t l_4 = 0L;
    uint8_t l_45 = 4UL;
    int32_t l_948 = 1L;
    int32_t l_949 = 0xF4C54A1BL;
    int32_t l_950 = 1L;
    uint64_t l_1010 = 18446744073709551615UL;
    g_7++;
    l_1010 = ((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0L, (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((--g_7) <= l_4) != l_4), 4)), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(func_24((safe_div_func_int64_t_s_s((g_788 = ((g_969 = func_30((((g_33 <= (0x814B11F3L ^ (l_949 |= (safe_rshift_func_uint8_t_u_s((l_948 = func_36((safe_sub_func_int32_t_s_s(((g_42--) | l_4), (l_45 | func_46((g_5 > l_4), l_45, l_45, g_51)))), l_45, l_45)), l_4))))) > 0x1304L) >= g_788), l_950)) > l_950)), g_33)), g_677, l_45), l_950)) != 7L), l_45)))))), l_4)) > (-8L));
    return g_590;
}
static uint64_t func_24(int32_t p_25, int32_t p_26, uint8_t p_27)
{
    int32_t l_970 = 1L;
    int32_t l_971 = 0x361A2B5CL;
    int32_t l_972 = 0xD4A918BDL;
    int32_t l_973 = (-1L);
    int16_t l_1009 = (-1L);
    ++g_974;
    if (g_974)
        goto lbl_977;
lbl_977:
    l_972 = p_27;
    l_972 = (safe_div_func_int64_t_s_s((0x06L && 1L), (~((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(l_972, (l_971 ^ ((safe_lshift_func_uint8_t_u_u((p_25 ^ ((((l_973 = l_970) >= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(l_971, 12)), 11))) | (p_25 ^ (safe_sub_func_int16_t_s_s((((+((safe_lshift_func_uint8_t_u_s((p_26 && l_971), 2)) <= 4294967287UL)) || g_566) ^ l_972), g_259)))) & (-10L))), 3)) >= l_971)))), l_970)) > p_25) > g_279), 0xD2E2FC2EDE97DFF8LL)) && 255UL))));
    for (g_361 = 0; (g_361 > 9); g_361++)
    {
        int8_t l_1000 = 0x63L;
        int32_t l_1001 = 2L;
        int32_t l_1002 = (-5L);
        int32_t l_1003 = 0L;
        int32_t l_1004 = 0xA9711FBCL;
        int32_t l_1005 = 1L;
        ++g_1006;
    }
    return l_1009;
}
static int8_t func_30(int32_t p_31, uint32_t p_32)
{
    uint32_t l_959 = 4294967288UL;
    uint64_t l_962 = 9UL;
    int32_t l_963 = 0xFBB5068EL;
    int32_t l_964 = 0xCBCBA06CL;
    l_964 |= ((l_963 ^= ((safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((((((((((1UL != 0xB80C1C8FL) != (((safe_rshift_func_int16_t_s_u(0x036CL, (l_959 ^ (-1L)))) == ((g_259 = 0L) & (0x781D955CL ^ (l_962 == (0x7D700C254CB22A60LL < 18446744073709551608UL))))) & l_959)) > l_962) || 9L) && p_32) >= l_959) && g_789) >= g_3) ^ l_959), 65530UL)), g_158)) || g_178)) != 0xE71DEA2AB2EE0FBDLL);
    for (g_588 = 0; (g_588 < 8); g_588 = safe_add_func_uint32_t_u_u(g_588, 5))
    {
        g_157 &= (safe_add_func_int64_t_s_s((g_259 = 1L), 0x789E923C09D82609LL));
        if (g_178)
            break;
        return l_964;
    }
    return l_959;
}
static uint8_t func_36(int64_t p_37, uint32_t p_38, int8_t p_39)
{
    int64_t l_899 = 9L;
    int8_t l_900 = (-5L);
    uint32_t l_929 = 0x13EDA9BBL;
    uint32_t l_930 = 8UL;
    int32_t l_931 = 0xB91B8A0DL;
    int32_t l_932 = 0x043C6F09L;
    int32_t l_947 = 0x578B5FB8L;
    l_900 = l_899;
    l_932 = (((((safe_rshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s(g_789, (l_931 = (l_930 = (safe_rshift_func_int16_t_s_s((0xD607CB69L || (((safe_rshift_func_int8_t_s_s((p_39 = ((safe_sub_func_uint64_t_u_u(((0x701DE319L != (((0x36F5E388L == (g_798 = 4294967295UL)) == (((safe_rshift_func_int8_t_s_u(((((safe_lshift_func_uint16_t_u_s(0xA122L, 6)) != (safe_sub_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_37, ((safe_add_func_int16_t_s_s((-1L), (safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((l_899 >= (-1L)) & l_900), 18446744073709551611UL)), g_178)), l_929)))) ^ l_900))), p_39)) != p_38) > p_37), 0UL))) <= g_588) == 7UL), l_900)) && l_900) || l_900)) || l_899)) <= p_39), l_929)) == l_899)), 1)) <= 0x97L) >= p_38)), 9)))))) ^ g_5), 6)) == l_929) >= 65530UL) >= g_157) != 0x0703L);
    for (g_256 = 0; (g_256 != (-6)); --g_256)
    {
        uint32_t l_935 = 4294967291UL;
        l_931 = l_935;
    }
    l_932 = (l_947 = (!(((((0x536FL >= l_930) >= 0UL) < (safe_div_func_int8_t_s_s((l_899 == (-1L)), g_256))) | (0x5BEE56A34E9C08F3LL != (safe_div_func_int8_t_s_s((((0x4686E442L < (safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((0x59E581E60841DE62LL & p_39), p_37)), g_33)) != 1UL), 0x5FL))) ^ 0xE9L) || g_51), 0x24L)))) > 0x0AA0F6B0L)));
    return l_929;
}
static int8_t func_46(int16_t p_47, int16_t p_48, uint16_t p_49, uint32_t p_50)
{
    const uint16_t l_79 = 65535UL;
    int32_t l_286 = 0xD2B88D7CL;
    int32_t l_287 = 0x25D64D03L;
    int32_t l_831 = 0x68A80DCCL;
    int16_t l_855 = (-5L);
    if (func_52((safe_rshift_func_uint16_t_u_s((p_50 && 0UL), (((func_58((g_3 || ((func_63((l_287 &= (l_286 &= ((((~0L) < (safe_mod_func_uint32_t_u_u(0x7DC4B54CL, (safe_rshift_func_uint16_t_u_s(func_73(g_3, ((p_48 || ((p_48 != (safe_unary_minus_func_int8_t_s(0x23L))) > g_6)) <= l_79), p_47, p_49), p_48))))) && g_158) <= g_256))), g_33, g_3, g_3) ^ p_48) == 0xEAAC3ADBA4F41078LL)), l_79, p_49, p_47) ^ g_259) && (-1L)) & p_50))), g_306, p_49))
    {
        uint64_t l_811 = 0x57D891E4445486C4LL;
        int32_t l_813 = 0x98D77E2FL;
        uint32_t l_818 = 0x0C3FC382L;
        for (g_259 = 10; (g_259 == (-23)); --g_259)
        {
            int8_t l_812 = 1L;
            int32_t l_850 = 0xFA5E4E82L;
            g_2 ^= ((l_286 = (g_5 ^= (safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(g_798, 6)) || (0x64BE8962453D6AC7LL <= ((((safe_lshift_func_uint8_t_u_s(0xD9L, 3)) > ((safe_lshift_func_int8_t_s_s(((+((!0x9DA7EAE0L) ^ ((safe_mod_func_int8_t_s_s((((g_620 <= (l_811 |= (--g_261))) ^ (l_812 < ((((l_813 > (((safe_add_func_int16_t_s_s((((l_812 & g_620) && 0L) || (-1L)), p_47)) && g_789) != 0x58EDL)) > 0x3388L) ^ g_590) == l_813))) ^ l_812), l_813)) != l_818))) ^ 0x8D9D34FF5BB275C4LL), 7)) == g_588)) & g_677) != l_813))), 0xF512L)))) | g_677);
            l_850 &= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_50, ((l_286 != 8UL) && ((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(p_48, (safe_mod_func_int32_t_s_s(l_286, (l_831 & ((((safe_div_func_uint32_t_u_u(l_287, (safe_mul_func_int8_t_s_s(0x41L, ((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u((((((safe_lshift_func_int8_t_s_u((((safe_div_func_int32_t_s_s((((l_813 = (((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(0L, g_590)), 10)) > 0xF558A121L) >= 0L)) & 0xA6L) & g_361), l_812)) | g_155) ^ 0xA108L), 5)) != l_287) > g_6) | p_47) & p_49), 12)) == (-1L)) != g_158), g_51)) > g_566))))) >= g_620) ^ g_677) && l_812)))))), g_167)) >= l_812)))), 0x511FACA5L)), 0xF8L));
            l_287 = 0x620A8CE9L;
        }
        g_590 = ((p_49 = (((safe_mod_func_uint16_t_u_u(p_48, (safe_rshift_func_int16_t_s_u((l_811 <= ((l_855 | (((safe_div_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((!0x92DC9DB21FF5F84ALL), ((l_813 = (l_813 != l_287)) && (((1UL < (0xFE537ACF50A80341LL <= (((safe_sub_func_uint8_t_u_u((+l_813), l_818)) > 3UL) == 4L))) >= l_831) ^ p_48)))) > 0UL), p_49)) == l_818) || l_286)) && p_47)), p_49)))) ^ p_49) | g_178)) && 0x0269L);
    }
    else
    {
        uint16_t l_864 = 0xF3FAL;
        int32_t l_875 = 0x69987C9BL;
        l_287 ^= ((l_864 ^ (g_590 < p_48)) <= ((l_864 && ((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((g_158 && (safe_add_func_int64_t_s_s((l_875 &= 1L), (safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0L, p_48)), (safe_add_func_uint32_t_u_u(g_161, l_855))))))), g_33)), l_286)), g_279)), p_49)) > p_49)) && (-8L)));
        for (l_286 = 6; (l_286 > (-9)); l_286 = safe_sub_func_uint64_t_u_u(l_286, 2))
        {
            int32_t l_884 = 0L;
            g_157 = (0x307AC41BL || p_48);
            if (l_884)
                continue;
        }
    }
    g_590 = (safe_div_func_uint16_t_u_u(l_79, 8UL));
    g_2 = g_789;
    g_2 &= ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(3L, 6)), (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_831, ((safe_sub_func_int64_t_s_s(0x9C2377ACE1FE26F6LL, (safe_lshift_func_int16_t_s_u(l_79, 7)))) | g_798))), 1)))) | 0x3E25E155L);
    return p_47;
}
static int32_t func_52(int8_t p_53, int32_t p_54, int8_t p_55)
{
    int16_t l_600 = 0L;
    int32_t l_623 = 0xF1A6B96EL;
    uint16_t l_625 = 0xBBF1L;
    int32_t l_630 = 0xA46E4AA0L;
    int32_t l_639 = (-3L);
    int8_t l_746 = 0x4DL;
    if ((((safe_sub_func_int8_t_s_s(l_600, ((g_155 ^= 0xB5L) ^ p_55))) == l_600) == l_600))
    {
        uint8_t l_609 = 7UL;
        uint8_t l_621 = 255UL;
        int32_t l_622 = 4L;
        uint8_t l_624 = 0UL;
        l_623 = (safe_lshift_func_int8_t_s_u((-1L), ((safe_mod_func_uint8_t_u_u((g_178 = (g_407 | (safe_lshift_func_int8_t_s_u((l_622 &= (((((((((((safe_lshift_func_int16_t_s_u(l_609, (((safe_rshift_func_uint8_t_u_u((0x99L && (safe_mod_func_uint32_t_u_u(l_600, (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((((g_306 && 0xD67096F6385F0BA0LL) || ((g_620 ^= (g_158--)) | 8UL)) >= 5UL) <= l_609), 6)), l_621))))), l_600)) <= l_621) | g_361))) <= 0xF5L) & p_53) > g_161) >= 0xC447D337L) > (-5L)) && g_361) && (-4L)) <= l_621) > 18446744073709551615UL) != p_53)), p_54)))), 0x12L)) && 1UL)));
        l_625 = (((g_590 & g_306) | ((g_256 != (l_621 ^ l_624)) > 0x49L)) && g_407);
    }
    else
    {
        int32_t l_628 = 6L;
        int32_t l_730 = 0L;
        if ((safe_rshift_func_uint8_t_u_u(0x89L, (0x2F4FFE47L <= ((l_628 == p_55) >= (p_54 > (~(0L ^ (((l_630 |= l_623) || (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((g_161 = (l_639 = (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_630 = p_54), ((l_623 = p_55) & l_628))), p_54)))), 0)), g_592))) | p_54)))))))))
        {
            uint16_t l_644 = 0xA6C3L;
            int32_t l_645 = (-8L);
            for (p_55 = 0; (p_55 < (-9)); p_55--)
            {
                int32_t l_664 = 0x23805A0BL;
                int32_t l_671 = (-2L);
                int8_t l_676 = 1L;
                int32_t l_705 = 0x298C6AFBL;
                for (g_306 = 24; (g_306 == (-28)); g_306--)
                {
                    uint8_t l_646 = 255UL;
                    l_644 |= g_167;
                    if (g_566)
                        continue;
                    --l_646;
                    l_671 = (safe_lshift_func_uint16_t_u_s((!(safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_600, p_53)), p_55))), (safe_add_func_int32_t_s_s(2L, ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_51 & (((l_664 = (safe_lshift_func_uint8_t_u_s(g_6, l_628))) < (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(1UL, 6)), (safe_rshift_func_int8_t_s_u(9L, 4))))) >= g_167)), g_588)) == g_407), p_54)) & l_671)))));
                }
                g_590 &= (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((l_645 && (~l_664)) <= ((l_676 = g_592) == g_2)))), ((l_628 &= g_259) || g_677)));
                p_54 ^= ((l_628 | (((((((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((g_5 | (g_259 |= l_628)))), l_645)) & 0xD1C427DAL) > 0x38A70AC5L) <= (((l_623 = (safe_rshift_func_uint8_t_u_s((7UL != l_676), 6))) < (safe_add_func_uint64_t_u_u(((0x771A649FL < g_592) > g_157), g_677))) ^ 5UL)) >= g_158) || p_53) | 0x75D0L)) & 7L);
                if ((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(l_623, (g_167 >= (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((p_55 || 0x7360B372L), (g_155 = ((((~((((safe_add_func_uint32_t_u_u(((!l_645) ^ (l_600 & ((safe_div_func_int64_t_s_s((l_623 != ((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int16_t_s_u(l_625, (safe_mod_func_int16_t_s_s(l_625, l_644)))) || (-7L)) || 3L) && 0xA42F9841L), 10)) || l_623)), p_54)) >= 0UL))), p_55)) < l_639) ^ l_676) && g_592)) != l_600) == p_53) || g_256)))), 0xCB88L))))), 5)))
                {
                    uint64_t l_706 = 4UL;
                    int32_t l_731 = (-1L);
                    l_706--;
                    for (g_3 = 23; (g_3 >= 20); g_3--)
                    {
                        return g_157;
                    }
                    l_731 = (((l_671 |= ((safe_lshift_func_int8_t_s_u(g_155, ((p_54 && ((((g_6 < (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((l_628 = l_706), (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((~0x21C5DCD7L) ^ (g_157 = l_625)), ((((safe_rshift_func_int8_t_s_s((0xA47FL < (((safe_rshift_func_int8_t_s_u(1L, 3)) <= (((((safe_add_func_uint32_t_u_u(0x29CE98F5L, p_53)) & (-1L)) > g_620) >= l_730) || l_676)) < 1UL)), g_677)) & p_55) || g_256) & (-7L)))) >= p_53), 3)))), 0xEF6B4028L)), g_259))) <= g_5) <= g_361) <= l_664)) >= g_161))) > g_2)) >= l_600) <= 0x471FAD2DL);
                    l_630 ^= ((safe_div_func_int64_t_s_s((p_54 ^ ((l_746 = (((l_645 = (((l_730 = (~((safe_add_func_int8_t_s_s((g_256 != ((l_731 = ((safe_rshift_func_uint16_t_u_u(0xF967L, (0xCBB0CC247009E8E3LL || (((-6L) && 0x7BA3L) > 0x54E6C621L)))) == ((g_566 ^= (safe_mod_func_int32_t_s_s(p_55, (safe_lshift_func_uint16_t_u_s((!g_6), p_55))))) == p_53))) == p_55)), g_306)) <= p_54))) && g_33) == g_167)) && l_628) == p_54)) <= p_55)), p_55)) && g_6);
                }
                else
                {
                    g_2 = ((safe_add_func_uint64_t_u_u((l_671 |= g_361), (safe_mod_func_int16_t_s_s(0x064AL, (g_592 || (g_279 & l_644)))))) || 0x52486B05L);
                }
            }
            l_639 = (0xF5D2L | 0x0385L);
        }
        else
        {
            int16_t l_751 = 0L;
            uint16_t l_770 = 0x636AL;
            int32_t l_787 = (-1L);
            l_623 = (l_751 >= (safe_add_func_uint64_t_u_u(g_407, (((((0xE82716A4L & l_751) <= ((safe_add_func_int64_t_s_s((-7L), g_6)) <= g_592)) == g_161) ^ (8L && 0x34L)) > l_628))));
            g_590 = ((g_259 ^= (~(g_178 && (~p_53)))) || ((((((1UL && (g_3 &= (safe_add_func_int16_t_s_s(((((l_623 < (safe_rshift_func_int16_t_s_u((g_158 == g_361), 7))) < ((safe_unary_minus_func_int64_t_s((g_592 && 0xDBL))) == (l_639 && 0UL))) | l_751) >= g_2), l_623)))) < p_53) == l_639) <= p_55) & g_155) > g_620));
            l_628 |= (((safe_mod_func_uint64_t_u_u(((((g_588 = (((safe_lshift_func_uint8_t_u_s(255UL, (+0x9EDA9596CE941CADLL))) > l_770) && ((((~g_588) && (safe_lshift_func_uint16_t_u_s((((((safe_mod_func_uint8_t_u_u(l_730, (safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((safe_mod_func_int32_t_s_s((p_53 <= (p_53 & ((g_259 == ((+((((((safe_div_func_int16_t_s_s(l_787, p_55)) ^ p_54) >= g_2) > 0xF4CAL) ^ l_730) == 0x3F7C68C2L)) >= g_306)) && p_53))), 0x604B60DBL)) | g_3) >= l_770), g_5)), g_259)) > g_361), 0x1635L)))) && (-2L)) != g_407) || g_788) == g_677), p_54))) == l_770) == 0x52L))) >= p_53) <= p_54) ^ 4294967295UL), p_53)) & p_55) < p_55);
            g_2 = ((--g_566) > 0xF6B1L);
        }
    }
    return g_592;
}
static int32_t func_58(int16_t p_59, int32_t p_60, uint8_t p_61, uint32_t p_62)
{
    uint8_t l_475 = 0xFCL;
    int32_t l_539 = 0x96E51303L;
    int32_t l_540 = 0xFD2BC733L;
    int32_t l_591 = 3L;
lbl_595:
    for (g_158 = 26; (g_158 != 1); g_158 = safe_sub_func_uint16_t_u_u(g_158, 5))
    {
        int32_t l_474 = 0L;
        int32_t l_501 = 0x4D611FF7L;
        int32_t l_586 = 9L;
        int32_t l_587 = 0x4436861BL;
        int32_t l_589 = (-1L);
        l_475--;
        for (g_407 = 0; (g_407 <= 26); g_407 = safe_add_func_uint64_t_u_u(g_407, 4))
        {
            uint8_t l_498 = 0x87L;
            int32_t l_500 = 0xB2E69329L;
            if ((g_2 = (p_62 | g_51)))
            {
                uint32_t l_502 = 1UL;
                int32_t l_515 = 0x86705CAAL;
                for (g_361 = 0; (g_361 != 22); g_361++)
                {
                    uint16_t l_519 = 0x9842L;
                    int32_t l_520 = (-3L);
                    l_501 = (((safe_div_func_int64_t_s_s(l_474, (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((0xE3093133L ^ (!p_59)) < p_60), ((safe_mod_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(p_59, ((safe_rshift_func_uint16_t_u_s(((p_61 ^ p_60) >= (l_498 = (+(-1L)))), 6)) != (~(l_500 || p_59))))), l_475)) && p_59), g_161)) | g_178))), p_62)))) && l_498) ^ p_59);
                    l_502 = g_256;
                    g_5 ^= ((((safe_add_func_int64_t_s_s((4294967287UL < (safe_mod_func_int32_t_s_s(g_3, (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((((l_519 = (safe_lshift_func_uint8_t_u_s(((g_161 != (-1L)) | (1L != (safe_div_func_uint64_t_u_u((l_515 = p_61), (safe_lshift_func_int16_t_s_s(p_60, ((!p_62) >= g_51))))))), p_60))) >= 0xB8L) <= p_62), p_61)) > l_502), 5))))), l_520)) || g_178) <= g_279) <= p_62);
                }
                if (g_167)
                    continue;
                p_60 = l_475;
                l_540 = (l_539 = (l_500 == (safe_add_func_uint16_t_u_u((!(!l_515)), (safe_sub_func_uint64_t_u_u((((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((0xD3BFB127619C6F29LL & ((safe_add_func_int32_t_s_s((!255UL), (p_60 <= g_167))) & ((g_3 = p_61) & ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(l_475, (!l_501))), 0x47C410BDAC23D5A6LL)) > 0x08D93545L)))) | g_167), g_259)), l_475)) >= 1UL) || 249UL), 0xCA5DC35F61777C78LL))))));
            }
            else
            {
                uint64_t l_543 = 0x91F2F87219A0BE3BLL;
                int32_t l_544 = 4L;
                int32_t l_562 = 0xE3075481L;
                if ((safe_rshift_func_uint8_t_u_s(0xD2L, (l_544 = l_543))))
                {
                    uint8_t l_565 = 0x90L;
                    p_60 = (0x15L > (safe_div_func_uint16_t_u_u((l_501 = ((((+(1UL != ((safe_lshift_func_int16_t_s_u((p_59 | (safe_rshift_func_uint8_t_u_u(247UL, (--p_61)))), g_261)) & ((safe_sub_func_int8_t_s_s((g_155 = (((g_155 | (safe_div_func_int64_t_s_s(0xAC8F3660658193ECLL, ((safe_add_func_uint32_t_u_u(0UL, (safe_lshift_func_int8_t_s_u(l_475, p_60)))) ^ 0xE9L)))) ^ 0x97471B37L) >= 0x03L)), l_562)) != p_60)))) > l_544) | (-6L)) >= p_60)), 0xBEFFL)));
                    l_501 = (safe_mod_func_int32_t_s_s(0x0CB7C8B6L, (g_566 |= ((p_60 = p_59) != l_565))));
                }
                else
                {
                    return l_543;
                }
            }
            for (g_6 = 15; (g_6 <= (-2)); g_6--)
            {
                uint32_t l_585 = 1UL;
                p_60 ^= 8L;
                p_60 = (safe_rshift_func_int8_t_s_s(((0x6CL > (safe_lshift_func_int16_t_s_s((1L && ((65535UL == ((safe_div_func_uint16_t_u_u((+(g_259 ^ (((g_161 < ((safe_mod_func_int64_t_s_s(8L, (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((((p_62 > (l_585 = (l_540 = (p_59 = ((!(safe_rshift_func_int16_t_s_u((251UL | 0x29L), g_178))) == g_361))))) | 0x2B415666L) >= 0L), 1)), 5)))) == 0xBBL)) <= l_474) & g_51))), 0xCBE0L)) == g_5)) > (-1L))), p_60))) >= p_60), g_279));
            }
        }
        if (p_62)
            goto lbl_595;
        g_592++;
    }
    p_60 |= p_62;
    for (l_539 = (-15); (l_539 <= (-4)); l_539 = safe_add_func_uint8_t_u_u(l_539, 1))
    {
        return l_540;
    }
    return g_588;
}
static uint16_t func_63(uint64_t p_64, uint64_t p_65, int32_t p_66, int32_t p_67)
{
    uint64_t l_288 = 0x7AC94198814D1708LL;
    int32_t l_303 = (-2L);
    int32_t l_304 = (-10L);
    int64_t l_362 = 0x10234A52FFC3B98CLL;
    int8_t l_393 = 0L;
    int32_t l_403 = 0x5E9E3D29L;
    int32_t l_404 = 0x03679C85L;
    int32_t l_406 = 0xE3F9E5FAL;
    const uint8_t l_450 = 251UL;
    l_288++;
    for (g_167 = 14; (g_167 == 20); g_167 = safe_add_func_uint64_t_u_u(g_167, 3))
    {
        uint32_t l_299 = 9UL;
        int32_t l_302 = 0x4A9DA088L;
        uint64_t l_360 = 0x0C55041328050347LL;
        int32_t l_383 = 0x04A9637FL;
        int32_t l_398 = 0xBDCC5206L;
        for (g_51 = (-13); (g_51 <= 12); ++g_51)
        {
            uint16_t l_300 = 0UL;
            int32_t l_301 = 0x3B0C7BE2L;
            g_5 = ((l_304 = ((safe_rshift_func_uint8_t_u_s((l_303 ^= (safe_lshift_func_int8_t_s_s(l_288, (((l_299 ^ p_64) && ((l_302 |= ((0L == l_288) < (l_301 &= l_300))) != g_3)) < (((((p_65 | l_300) != g_178) | 65535UL) > g_51) == l_288))))), 0)) != l_288)) || p_67);
        }
        if (((g_261 && (p_65 > (l_302 = ((g_2 > (~g_178)) | p_64)))) && ((l_304 = (((0x9C92L <= g_306) | p_66) != 8L)) > l_302)))
        {
            int32_t l_327 = 4L;
            int32_t l_328 = 0xED0E2EEFL;
            for (p_66 = 0; (p_66 <= (-16)); p_66 = safe_sub_func_uint16_t_u_u(p_66, 1))
            {
                uint32_t l_322 = 0xAA1D18F8L;
                int32_t l_359 = 4L;
                p_67 = (safe_div_func_uint16_t_u_u((((l_327 &= ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_178, 3)), (safe_div_func_int32_t_s_s((p_66 && ((+g_6) != p_64)), (safe_add_func_uint64_t_u_u(l_322, 0xD33D034B4D2A8265LL)))))) > (0xD5B2D086A49EC65FLL || (safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(g_256, (g_261 > 1UL))), 0x910C96EE17F405F9LL))))) > l_328) == g_306), p_67));
                if (p_66)
                    continue;
                p_67 = (0UL == ((safe_lshift_func_int8_t_s_s(7L, ((l_302 = l_288) > (safe_add_func_int16_t_s_s(((((((safe_rshift_func_uint16_t_u_u((l_328 = (g_361 = (g_261 = (((((~p_67) > (safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_33, ((((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(p_64, (safe_div_func_int8_t_s_s(((!(+(g_33 < ((((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(0x0293L, (~((safe_sub_func_int32_t_s_s(((l_359 ^= g_259) ^ l_304), g_2)) && p_66)))) == (-1L)), 0x00A6L)) | g_5) > 0x48L) >= l_299)))) && g_33), (-1L))))) <= l_360) != g_259), l_299)) && g_256), p_65)) >= g_256) > 2L) && p_64))), g_3)) > 0L) & (-1L)), l_322))) || p_65) ^ l_328) | p_64)))), g_2)) <= l_362) > g_178) || l_328) <= 8L) & l_360), 1UL))))) ^ p_67));
            }
            p_67 = p_67;
            g_2 &= (safe_sub_func_int8_t_s_s(g_279, ((l_288 != g_256) && 251UL)));
            p_67 = ((g_261 = (l_383 |= (((((safe_div_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u((0UL >= (safe_lshift_func_int8_t_s_u(p_67, 3))), (0x230BL <= 0xDB62L))) ^ (((safe_mod_func_uint64_t_u_u(0x2CC0702C48DB37E6LL, 0x90960BBCD69BB4E1LL)) ^ ((safe_lshift_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(0xA924ABB9B91C458BLL, (safe_sub_func_int64_t_s_s(g_256, ((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((((l_360 >= l_362) > l_327) ^ l_328), g_158)) ^ (-4L)) ^ 1UL), l_302)) > l_328))))) || 0x1FL) < 0L), l_327)) <= l_303)) == p_67)) ^ l_302), p_67)) >= l_360) & l_299) == g_361) ^ 0xC29E2988L))) | l_360);
        }
        else
        {
            int8_t l_396 = 0L;
            int32_t l_397 = 0xFE6ADB90L;
            int32_t l_399 = 0x86409701L;
            int32_t l_400 = 0L;
            int32_t l_401 = 0xED5C099BL;
            int32_t l_402 = 0L;
            int32_t l_405 = (-6L);
            l_398 |= (((safe_add_func_uint8_t_u_u(g_161, g_279)) > (((-9L) == ((((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((l_393 = (safe_sub_func_uint16_t_u_u(((g_256 = 0x9B3BL) != g_33), g_259))), ((((((l_396 = (safe_sub_func_int64_t_s_s(((0xCEL | (l_302 |= (8L <= ((3L && g_261) > g_161)))) <= g_2), g_33))) < g_178) > p_67) | l_397) >= 0xACA4354AL) || g_259))) <= p_66), 5)) & 0x7FD7L))) <= l_383) <= p_66) ^ 18446744073709551615UL)) < p_66)) == g_158);
            --g_407;
            if (g_261)
            {
                return p_67;
            }
            else
            {
                const uint32_t l_414 = 18446744073709551615UL;
                for (l_362 = (-3); (l_362 < (-23)); l_362--)
                {
                    uint8_t l_419 = 255UL;
                    g_157 = 0x16D66131L;
                    if ((p_67 &= (0x97L & (p_65 ^ l_288))))
                    {
                        g_2 = (safe_lshift_func_int8_t_s_u(l_414, p_64));
                        l_406 &= g_261;
                        g_2 = (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((l_419 & 0xE0D6846D4142E3BCLL), p_66)), (safe_add_func_int16_t_s_s(p_64, (l_401 = (g_261 = (((((((l_303 = 0x9BL) & 0xC2L) | (l_419 == 4L)) || (((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((~l_419) < l_414), g_279)), p_64)) >= p_64) != p_67)) & l_419) ^ 0x5CDD8E95L) ^ 18446744073709551607UL)))))));
                        g_157 = (p_67 || 18446744073709551611UL);
                    }
                    else
                    {
                        int32_t l_449 = 0xE6909606L;
                        int32_t l_466 = 0x7BD04F5EL;
                        l_449 |= (safe_sub_func_uint64_t_u_u((((l_404 = (safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((((0xBADB9BABAE2EA2EDLL <= (safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(0x8DL, (+l_400))) > (safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_u(l_419, (safe_lshift_func_uint8_t_u_u((((g_5 |= l_414) > p_67) & (safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(g_157, g_155)) || ((0xD4L || p_64) <= g_306)) == l_302), l_304))), 5)))) && p_66)))) > 0x025E17D8A5F0AE92LL), l_419))) ^ p_65) > (-1L)) & (-5L)), 18446744073709551615UL)), 0UL)), 0x17CA8DE8L))) >= g_6) & l_419), p_66));
                        p_67 = (((l_450 && (safe_mod_func_int8_t_s_s((((((g_407 == ((((p_64 && ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_66, (0xF087F3A99ED4DE70LL != p_67))), 4)) >= (g_261 > ((safe_div_func_uint64_t_u_u(g_155, (~((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((p_64 & g_407), g_178)), p_67)), g_6)) <= g_161)))) <= p_64))) > g_306) >= g_407)) || g_306) != 1UL) < l_360)) & p_64) && l_466) & p_65) >= 0x0508L), 0xC4L))) == p_64) < 7L);
                    }
                }
            }
        }
        return p_66;
    }
    for (l_406 = 0; (l_406 >= 29); l_406 = safe_add_func_uint64_t_u_u(l_406, 1))
    {
        uint32_t l_469 = 0xDA2DBFFCL;
        p_67 = l_303;
        ++l_469;
    }
    return g_5;
}
static uint16_t func_73(uint64_t p_74, int32_t p_75, int32_t p_76, const uint8_t p_77)
{
    int8_t l_87 = (-5L);
    int32_t l_90 = 0x58B047C1L;
    int32_t l_164 = 1L;
    int64_t l_223 = 0xC95C5D00D0454759LL;
    int32_t l_274 = 0xCE61BCC1L;
lbl_237:
    l_164 &= func_80((l_90 = ((safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(((l_87 = 0xC0ED6D23L) != (((safe_sub_func_uint8_t_u_u(l_90, (safe_add_func_uint32_t_u_u((p_77 <= 0x9FA237FFL), ((safe_sub_func_uint16_t_u_u(p_75, ((-6L) && ((safe_add_func_uint32_t_u_u(p_76, (safe_rshift_func_uint16_t_u_u(p_76, 14)))) < (safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(0xD1BD9F019D5C01CFLL, g_33)) < p_76), l_90)))))) & p_75))))) == l_90) != l_90)), p_77)) != g_33), 0x66A4358B9E0795B1LL)) > 252UL)), g_5);
    l_90 = (safe_rshift_func_uint8_t_u_u(g_158, (0x5FL ^ (g_155 | (((g_6 &= p_76) > (((g_167 &= l_90) < l_87) && 1UL)) | ((safe_mod_func_uint32_t_u_u((l_90 >= 4L), g_2)) || p_76))))));
    for (g_167 = 0; (g_167 <= 9); g_167 = safe_add_func_int32_t_s_s(g_167, 9))
    {
        uint32_t l_173 = 0x8DCBC2B7L;
        int32_t l_180 = 0x32B9FEB6L;
        int32_t l_214 = 0x6E19BD86L;
        uint16_t l_235 = 65528UL;
        int32_t l_277 = (-9L);
        int32_t l_278 = 0xEA2692C9L;
        if ((g_5 = (g_157 = g_6)))
        {
            uint16_t l_172 = 5UL;
            if (l_172)
                break;
            ++l_173;
            p_76 = g_161;
        }
        else
        {
            int8_t l_179 = 0x65L;
            g_5 = (0xDD2F3D6CL < ((((g_155 ^ l_164) > (l_180 = (g_158 = ((g_178 = (l_173 < ((safe_lshift_func_int16_t_s_u(0xEE60L, 11)) || 0xA4BBL))) | l_179)))) < (safe_add_func_int32_t_s_s(g_3, ((safe_mod_func_int64_t_s_s(l_164, p_74)) == p_77)))) <= g_161));
            return g_178;
        }
        for (g_158 = (-14); (g_158 < 2); g_158++)
        {
            uint16_t l_211 = 0x4A88L;
            uint16_t l_212 = 0x097DL;
            int32_t l_213 = 0L;
            int32_t l_250 = 1L;
            if (((((safe_unary_minus_func_int16_t_s((7L >= l_87))) != (safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u(4294967295UL, ((l_214 |= (+((safe_lshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(p_76, (l_213 = (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((((((safe_sub_func_uint16_t_u_u(((p_77 && (safe_sub_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(((((0UL < 0xDE3C26F71A791DEBLL) == (safe_div_func_int8_t_s_s((l_180 = (18446744073709551615UL | (safe_sub_func_uint8_t_u_u(l_211, 0x36L)))), p_75))) || p_74) != g_51), g_33)) ^ l_212), l_173))) != (-1L)), l_212)) == l_87) || 0xE6CDL) == l_212) ^ p_74), 1)), 15)) <= l_173) > p_77)))) && p_77) < 0UL), l_87)) && l_87))) && (-5L)))), g_161))) != p_76) == g_2))
            {
                g_2 = (safe_rshift_func_int16_t_s_u(p_77, 2));
                l_180 = 0x62234214L;
                if (l_173)
                    continue;
            }
            else
            {
                const uint8_t l_226 = 0xE2L;
                uint64_t l_234 = 1UL;
                int32_t l_236 = 1L;
                p_75 &= g_157;
                p_75 = (safe_div_func_int32_t_s_s((6UL & (0x9E6B5F6AL || ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((g_2 < (p_74 | 0x0DL)), 14)), 10)) < (l_164 = l_223)))), (((safe_mod_func_int16_t_s_s(l_226, (l_236 |= (safe_rshift_func_int8_t_s_u(((((safe_div_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s((((!g_161) > p_76) < 0x93B904D00042A173LL), l_223)) || g_157) >= l_226) || (-1L)) || l_226), l_234)) != l_235) <= l_212) != l_90), 3))))) != 0x2275L) && 1UL)));
            }
            if (g_161)
                continue;
            if (g_178)
                goto lbl_237;
            for (l_180 = 0; (l_180 == 6); l_180++)
            {
                int32_t l_255 = 1L;
                int32_t l_257 = 1L;
                int32_t l_258 = 0x0C18A675L;
                int32_t l_260 = 9L;
                l_214 = ((safe_sub_func_uint64_t_u_u((p_74 &= l_213), (g_5 >= g_161))) > (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s(g_158, 2L)) && (p_76 == (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_250 = 0x56249259ABB1F743LL), (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((((l_257 = (g_261++)) >= 0xE4F7L) > (safe_sub_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(p_77, l_87)) < p_75), p_77)) & l_180), l_173)) < p_77) && 255UL), l_211))), 0x6CFEE316L)), 0)))), l_223)))), p_75)));
                return l_255;
            }
        }
        g_157 = ((l_278 = (safe_lshift_func_uint16_t_u_u((l_274 >= ((l_90 = (safe_rshift_func_int8_t_s_u(0x7AL, 1))) & ((g_279++) | (l_277 = (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_87, 2)), 0x4177L)))))), 2))) | (g_261 = p_76));
    }
    return l_223;
}
static int32_t func_80(int64_t p_81, uint32_t p_82)
{
    uint64_t l_134 = 1UL;
    uint32_t l_135 = 0xEB51834AL;
    int32_t l_136 = 0x45A2DC96L;
    int32_t l_137 = 1L;
    int32_t l_138 = (-1L);
    int32_t l_139 = 0x9141744BL;
    int32_t l_140 = 0x87DF3DEFL;
    int32_t l_141 = (-1L);
    int32_t l_142 = (-4L);
    int32_t l_143 = 0x9839B2FDL;
    int32_t l_144 = 0xB9819055L;
    int32_t l_145 = 0xA5FB02C8L;
    int32_t l_146 = 0xA119B852L;
    int32_t l_147 = 0xA4F77C9AL;
    int32_t l_148 = 4L;
    int32_t l_149 = 0xBD54EFE8L;
    int32_t l_150 = 0xA40FDB04L;
    int64_t l_151 = 0xC87B4EC1833B1D78LL;
    int32_t l_152 = 1L;
    int64_t l_153 = 0xE0766B1C03A75F93LL;
    int32_t l_154 = 5L;
    int32_t l_156 = (-8L);
    g_2 = 0L;
    l_136 = ((g_51 = (((g_6 && (safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((((safe_sub_func_int64_t_s_s(((g_5 || 0x7DCB2139E6D59493LL) > (+(safe_add_func_uint16_t_u_u(g_33, (safe_sub_func_uint32_t_u_u((0x3FL & (+((+(safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0xE29AFBAEL, ((safe_rshift_func_int8_t_s_s(p_82, 2)) != ((safe_div_func_uint8_t_u_u(((p_81 = ((safe_div_func_int64_t_s_s((((((((safe_sub_func_uint8_t_u_u((0xFFB2EF76CAF44556LL <= l_134), g_3)) ^ g_6) == l_134) | p_81) && l_134) >= p_82) != g_33), l_135)) || 0xDDL)) != g_51), p_82)) != 0x9A83L)))), g_51)), 14)), p_82)), g_3))) >= p_82))), 0xC0225587L)))))), p_82)) ^ l_134) ^ g_51), p_82)), g_2))) != p_82) <= g_3)) < g_2);
    ++g_158;
    ++g_161;
    return g_33;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_3;
    csmith_sink_ = g_5;
    csmith_sink_ = g_6;
    csmith_sink_ = g_7;
    csmith_sink_ = g_33;
    csmith_sink_ = g_42;
    csmith_sink_ = g_51;
    csmith_sink_ = g_155;
    csmith_sink_ = g_157;
    csmith_sink_ = g_158;
    csmith_sink_ = g_161;
    csmith_sink_ = g_167;
    csmith_sink_ = g_178;
    csmith_sink_ = g_256;
    csmith_sink_ = g_259;
    csmith_sink_ = g_261;
    csmith_sink_ = g_279;
    csmith_sink_ = g_306;
    csmith_sink_ = g_361;
    csmith_sink_ = g_407;
    csmith_sink_ = g_566;
    csmith_sink_ = g_588;
    csmith_sink_ = g_590;
    csmith_sink_ = g_592;
    csmith_sink_ = g_620;
    csmith_sink_ = g_677;
    csmith_sink_ = g_788;
    csmith_sink_ = g_789;
    csmith_sink_ = g_798;
    csmith_sink_ = g_969;
    csmith_sink_ = g_974;
    csmith_sink_ = g_1006;
    platform_main_end(0,0);
    return 0;
}
