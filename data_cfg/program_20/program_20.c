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
static int8_t g_10 = 0xD4;
static int32_t g_32 = 0;
static int32_t *g_62 = &g_32;
static int32_t **g_61 = &g_62;
static int32_t g_100 = 0x8D9E2CD2;
static int16_t g_235 = 0xF10B;
static int32_t ***g_347 = (void*)0;
static int32_t ****g_346 = &g_347;
static int32_t g_351 = 0x100964AE;
static int32_t *g_350 = &g_351;
static int32_t g_406 = 0x4350790C;
static int32_t *****g_515 = &g_346;
static int16_t g_945 = 1;
static uint32_t g_969 = 4294967294U;
static int32_t func_1(void);
static int32_t func_2(uint32_t p_3, uint32_t p_4, uint32_t p_5);
static int16_t func_13(int32_t p_14, uint8_t p_15, uint16_t p_16, uint16_t p_17);
static int8_t func_21(uint16_t p_22, int32_t p_23, int32_t p_24, int16_t p_25);
static int8_t func_28(int16_t p_29);
static int32_t ** func_33(int32_t ** p_34, int32_t * p_35, int16_t p_36);
static int32_t ** func_37(int32_t p_38, int32_t * p_39, int32_t p_40);
static int32_t *** func_41(int32_t p_42, int32_t ** p_43, int32_t * p_44);
static uint16_t func_51(int8_t p_52, int32_t * p_53);
static int32_t * func_55(uint32_t p_56, int32_t ** p_57, int32_t *** p_58, uint16_t p_59, int8_t p_60);
static int32_t func_1(void)
{
    int32_t l_20 = 0x54DBBE56;
    int32_t l_1021 = 0xF6022152;
    int32_t *l_1023 = &g_100;
    (*l_1023) = func_2((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_10, (((0x4888 > ((safe_sub_func_int16_t_s_s(func_13(g_10, (safe_add_func_uint8_t_u_u(g_10, l_20)), g_10, (func_21(l_20, (safe_mul_func_int16_t_s_s((func_28(g_10) <= l_20), 6U)), g_406, g_10) != g_406)), g_10)) & 65535U)) && l_20) == l_20))), g_406)), g_10, l_1021);
    ((void) sizeof ((g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100 || g_62 == 0) ? 1 : 0), __extension__ ({ if (g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100 || g_62 == 0) ; else __assert_fail ("g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100 || g_62 == 0", "/tmp/tmphyaun_77.c", 63, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ? 1 : 0), __extension__ ({ if (g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ; else __assert_fail ("g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100", "/tmp/tmphyaun_77.c", 65, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_1023);
}
static int32_t func_2(uint32_t p_3, uint32_t p_4, uint32_t p_5)
{
    uint32_t l_1022 = 4294967292U;
    return l_1022;
}
static int16_t func_13(int32_t p_14, uint8_t p_15, uint16_t p_16, uint16_t p_17)
{
    int8_t l_881 = 0xFC;
    int32_t ***l_882 = &g_61;
    int32_t l_895 = 7;
    int32_t *****l_903 = &g_346;
    int32_t *l_939 = &g_100;
    uint32_t l_940 = 0U;
    (**l_882) = func_55((safe_mul_func_uint8_t_u_u((l_881 <= ((void*)0 != l_882)), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(g_32, 7)) ^ (safe_sub_func_int16_t_s_s(((***l_882) | (((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s((g_235 > (((safe_lshift_func_uint16_t_u_s(l_895, 0)) > 0x05BAE702) && (&p_14 != (void*)0))), g_10)) == 0), g_235)) | g_235) || p_16)), g_100))), p_17)))), (*l_882), l_882, (***l_882), g_10);
    if ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((5 & (((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u(((((l_903 != l_903) > ((g_10 > (p_15 >= p_14)) | (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_17, (***l_882))), 0U)))) == (***l_882)) & 249U), g_406)))) < g_100) | p_15)), (***l_882))), (***l_882))))
    {
        uint16_t l_921 = 0x800C;
        int32_t **l_926 = &g_62;
        (*l_926) = func_55((safe_mod_func_int8_t_s_s((1 | (0x55 | ((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_351, (+((safe_mod_func_int32_t_s_s((**g_61), 0x195C2867)) != (***l_882))))), (safe_mul_func_int16_t_s_s(((*g_350) | l_921), ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((***l_882) < p_14), l_921)), l_921)) < 0x18B12E78))))), l_921)) & 0xBF))), l_921)), l_926, (**l_903), (**l_926), g_10);
        (*l_926) = (void*)0;
        ((void) sizeof ((g_62 == 0) ? 1 : 0), __extension__ ({ if (g_62 == 0) ; else __assert_fail ("g_62 == 0", "/tmp/tmphyaun_77.c", 103, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t l_927 = 0;
        int32_t **l_936 = &g_62;
        (***l_882) = p_14;
        if ((&p_14 == &p_14))
        {
            (**l_882) = (**l_882);
        }
        else
        {
            int32_t ***l_964 = &l_936;
            int32_t l_1008 = 0x3388D810;
            int32_t *****l_1020 = &g_346;
            (*g_62) = l_927;
            for (p_17 = 1; (p_17 == 27); p_17 = safe_add_func_uint32_t_u_u(p_17, 1))
            {
                int32_t **l_938 = &g_62;
                uint32_t l_1007 = 0x1B5C6717;
                for (p_16 = 12; (p_16 <= 26); p_16++)
                {
                    int32_t **l_937 = &g_350;
                    (*g_61) = (void*)0;
                    ((void) sizeof ((g_62 == 0) ? 1 : 0), __extension__ ({ if (g_62 == 0) ; else __assert_fail ("g_62 == 0", "/tmp/tmphyaun_77.c", 129, __extension__ __PRETTY_FUNCTION__); }));
                    p_14 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0, ((p_14 <= (((void*)0 == l_936) & ((void*)0 == l_936))) || 0xD7))), ((void*)0 == (*g_515)))) > 0U);
                    l_938 = l_937;
                    ((void) sizeof ((l_938 == &g_350) ? 1 : 0), __extension__ ({ if (l_938 == &g_350) ; else __assert_fail ("l_938 == &g_350", "/tmp/tmphyaun_77.c", 133, __extension__ __PRETTY_FUNCTION__); }));
                    (**l_882) = l_939;
                    ((void) sizeof ((g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == &g_100) ; else __assert_fail ("g_62 == &g_100", "/tmp/tmphyaun_77.c", 136, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_938 == &g_350 || l_938 == &g_62) ? 1 : 0), __extension__ ({ if (l_938 == &g_350 || l_938 == &g_62) ; else __assert_fail ("l_938 == &g_350 || l_938 == &g_62", "/tmp/tmphyaun_77.c", 139, __extension__ __PRETTY_FUNCTION__); }));
                if (((l_940 == 7) | (**l_938)))
                {
                    uint32_t l_955 = 1U;
                    (**l_936) = (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(g_945, 15)) & (g_32 == (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(2U, ((***l_882) != 0xDF5B))), (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0U, ((+(-4)) > g_10))), l_955)))))) && g_100), g_100));
                }
                else
                {
                    if ((**g_61))
                        break;
                    (*g_62) = ((*l_939) == 9);
                }
                if ((!(((((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(g_235, ((**l_938) ^ (!1U)))), 0)) | (safe_lshift_func_int8_t_s_s(((-7) < ((void*)0 == l_964)), p_16))) & (g_406 >= (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(0x60, 6)), p_17)))) ^ 0x86) ^ g_969)))
                {
                    int32_t *****l_987 = &g_346;
                    (***l_964) = p_16;
                    p_14 = (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(p_15, p_16)), (+(safe_lshift_func_int8_t_s_u(((*l_938) != (void*)0), (((p_16 || p_17) == g_945) < 0x7D6B1D30)))))), (65526U || (***l_964)))), 0))));
                    if ((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((**l_938), ((***l_964) ^ (!(**l_936))))), (((g_351 < 0xB124EE66) & ((1U & ((l_987 != &g_346) != (((safe_add_func_uint32_t_u_u((p_17 < 0xCB), (**l_938))) || (-1)) != g_969))) != g_235)) <= g_32))))
                    {
                        (*l_964) = l_936;
                        (*g_61) = (*g_61);
                        if ((***l_964))
                            break;
                    }
                    else
                    {
                        int32_t *l_990 = (void*)0;
                        (**l_882) = func_55(g_235, func_33(func_33(func_33((*l_964), (*g_61), (((**l_936) | ((((**l_938) && (255U == (-3))) || g_351) >= (g_10 > 0U))) ^ (*g_350))), l_990, p_14), l_990, p_17), (**l_903), p_15, g_406);
                        if ((*g_62))
                            break;
                    }
                }
                else
                {
                    int32_t l_991 = 0x5C6CEE5A;
                    int32_t **l_992 = &g_62;
                    (*g_346) = &l_936;
                    ((void) sizeof ((g_347 == &l_936) ? 1 : 0), __extension__ ({ if (g_347 == &l_936) ; else __assert_fail ("g_347 == &l_936", "/tmp/tmphyaun_77.c", 177, __extension__ __PRETTY_FUNCTION__); }));
                    if ((safe_lshift_func_uint8_t_u_u(5U, 3)))
                    {
                        p_14 = ((safe_sub_func_uint8_t_u_u((0x80 && (l_964 != (**l_903))), (0x709DBC24 & (~((g_351 && (((*g_62) == p_16) & p_16)) == ((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_32, (***l_964))), 0xEE917749)) | (*l_939))))))) | (****g_346));
                    }
                    else
                    {
                        (***g_346) = (***g_346);
                        if ((*****g_515))
                            break;
                    }
                }
                for (l_881 = (-8); (l_881 > 28); ++l_881)
                {
                    (*l_936) = (**l_964);
                    (*g_350) = (l_1020 != l_1020);
                    (*l_938) = (*g_61);
                }
            }
            ((void) sizeof ((g_347 == &l_936 || g_347 == 0) ? 1 : 0), __extension__ ({ if (g_347 == &l_936 || g_347 == 0) ; else __assert_fail ("g_347 == &l_936 || g_347 == 0", "/tmp/tmphyaun_77.c", 197, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ? 1 : 0), __extension__ ({ if (g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ; else __assert_fail ("g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100", "/tmp/tmphyaun_77.c", 198, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_347 == &l_936 || g_347 == 0) ? 1 : 0), __extension__ ({ if (g_347 == &l_936 || g_347 == 0) ; else __assert_fail ("g_347 == &l_936 || g_347 == 0", "/tmp/tmphyaun_77.c", 201, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ? 1 : 0), __extension__ ({ if (g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ; else __assert_fail ("g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100", "/tmp/tmphyaun_77.c", 202, __extension__ __PRETTY_FUNCTION__); }));
        (*l_882) = l_936;
    }
    ((void) sizeof ((g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100 || g_62 == 0) ? 1 : 0), __extension__ ({ if (g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100 || g_62 == 0) ; else __assert_fail ("g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100 || g_62 == 0", "/tmp/tmphyaun_77.c", 206, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ? 1 : 0), __extension__ ({ if (g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100) ; else __assert_fail ("g_350 == &g_351 || g_350 == &g_32 || g_350 == &g_100", "/tmp/tmphyaun_77.c", 208, __extension__ __PRETTY_FUNCTION__); }));
    return p_14;
}
static int8_t func_21(uint16_t p_22, int32_t p_23, int32_t p_24, int16_t p_25)
{
    int8_t l_557 = 1;
    int32_t *l_587 = &g_351;
    int16_t l_588 = 0;
    int32_t ***l_589 = &g_61;
    int8_t l_608 = (-1);
    int32_t *****l_624 = (void*)0;
    int32_t ****l_771 = &g_347;
    int32_t *l_776 = &g_351;
    uint8_t l_877 = 0x60;
    for (g_235 = (-5); (g_235 != 16); ++g_235)
    {
        uint32_t l_526 = 0x32996BED;
        int32_t *l_549 = &g_351;
        int32_t l_556 = 0xF7AADC6A;
        int32_t ****l_582 = &g_347;
        for (p_23 = 14; (p_23 > 4); p_23 = safe_sub_func_int8_t_s_s(p_23, 8))
        {
            int32_t **l_522 = (void*)0;
            int32_t ****l_581 = &g_347;
            for (p_22 = (-19); (p_22 == 57); ++p_22)
            {
                int32_t ***l_523 = &g_61;
                (**l_523) = (*g_61);
                for (p_24 = 0; (p_24 == 15); ++p_24)
                {
                    int16_t l_546 = 1;
                    int32_t *l_576 = &g_351;
                    if (l_526)
                    {
                        int32_t *l_541 = &g_32;
                        (*g_350) = ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(g_351, (safe_rshift_func_int16_t_s_u(p_24, ((0xE55C < (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((void*)0 == l_541) && ((-7) ^ ((safe_add_func_int8_t_s_s(((**g_515) == (**g_515)), 0)) <= (*l_541)))), 6)), p_23)), g_32))) && p_24))))) & p_22) >= 0U), g_351)), 1)) ^ p_22);
                        (*g_61) = func_55((0xBF4B ^ (((safe_mul_func_uint16_t_u_u(p_23, l_546)) > (safe_sub_func_int16_t_s_s(p_25, ((((l_549 != l_541) ^ ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*l_549), (l_522 == (*l_523)))), 0xE30A)) & l_556), 0xF218528C)) != p_22)) > (*l_549)) <= 1)))) || (**g_61))), &l_541, &l_522, g_10, l_557);
                        ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 253, __extension__ __PRETTY_FUNCTION__); }));
                        (**g_61) = ((safe_rshift_func_uint8_t_u_u(0xC2, 2)) <= (+(safe_sub_func_int8_t_s_s(((((g_32 <= (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((&l_522 != (void*)0) & (*l_549)), 15)), 0))) == (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((+(safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_557, 3)), (g_351 > g_351)))), (-1))), g_32))) && p_24) & 0xDD94), 6U))));
                        (**l_523) = l_576;
                        ((void) sizeof ((g_62 == &g_351) ? 1 : 0), __extension__ ({ if (g_62 == &g_351) ; else __assert_fail ("g_62 == &g_351", "/tmp/tmphyaun_77.c", 257, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    else
                    {
                        l_576 = (void*)0;
                        ((void) sizeof ((l_576 == 0) ? 1 : 0), __extension__ ({ if (l_576 == 0) ; else __assert_fail ("l_576 == 0", "/tmp/tmphyaun_77.c", 263, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((l_576 == 0 || l_576 == &g_351) ? 1 : 0), __extension__ ({ if (l_576 == 0 || l_576 == &g_351) ; else __assert_fail ("l_576 == 0 || l_576 == &g_351", "/tmp/tmphyaun_77.c", 266, __extension__ __PRETTY_FUNCTION__); }));
                }
            }
            (*g_350) = p_23;
            (*g_61) = func_55((~(~((((l_581 == l_582) <= (g_32 & ((safe_mul_func_int16_t_s_s(((((void*)0 != &g_346) && g_100) > (safe_rshift_func_int8_t_s_s((g_10 ^ ((g_351 < (l_587 != (void*)0)) > 0)), 1))), 0xB61C)) && 0))) <= l_588) < 0))), &l_587, l_589, g_351, (*l_587));
            ((void) sizeof ((g_62 == &g_351) ? 1 : 0), __extension__ ({ if (g_62 == &g_351) ; else __assert_fail ("g_62 == &g_351", "/tmp/tmphyaun_77.c", 272, __extension__ __PRETTY_FUNCTION__); }));
        }
        (*l_549) = 0x121491CC;
        (***l_589) = ((safe_sub_func_uint16_t_u_u(g_235, ((&l_589 == (void*)0) && (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_351, (!(&l_589 != (*g_515))))), (safe_mul_func_int16_t_s_s((***l_589), (3 == (-10))))))))) || (***l_589));
        (*l_582) = (**g_515);
    }
    ((void) sizeof ((g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100) ; else __assert_fail ("g_62 == &g_351 || g_62 == &g_32 || g_62 == &g_100", "/tmp/tmphyaun_77.c", 279, __extension__ __PRETTY_FUNCTION__); }));
    if ((((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(g_10, 3)), (0x160C | (safe_add_func_int8_t_s_s(((*l_589) == (void*)0), (g_10 <= ((&g_346 == &g_346) && p_22))))))) ^ 0x32932B40) < (***l_589)) > p_22) && 1U))
    {
        int32_t *l_605 = &g_32;
        l_605 = (**l_589);
        ((void) sizeof ((l_605 == &g_351 || l_605 == &g_32 || l_605 == &g_100) ? 1 : 0), __extension__ ({ if (l_605 == &g_351 || l_605 == &g_32 || l_605 == &g_100) ; else __assert_fail ("l_605 == &g_351 || l_605 == &g_32 || l_605 == &g_100", "/tmp/tmphyaun_77.c", 285, __extension__ __PRETTY_FUNCTION__); }));
        l_605 = func_55((p_22 >= ((l_608 > p_24) <= (((**l_589) != l_605) ^ (safe_mod_func_uint16_t_u_u(((*g_62) < ((((safe_add_func_uint16_t_u_u(1U, ((65535U <= 0xA5FD) <= (*l_605)))) >= p_23) <= g_100) ^ p_24)), g_100))))), &l_605, l_589, g_406, (*l_605));
        (*g_350) = (&l_589 != (*g_515));
    }
    else
    {
        int32_t *l_617 = &g_351;
        int32_t *****l_641 = &g_346;
        int32_t l_691 = 0x2F7637BE;
        int16_t l_692 = 2;
        for (p_22 = 5; (p_22 > 26); p_22 = safe_add_func_int32_t_s_s(p_22, 5))
        {
            int32_t ***l_620 = &g_61;
            (*g_62) = (1U == p_24);
            for (g_235 = 0; (g_235 != 4); g_235 = safe_add_func_uint8_t_u_u(g_235, 4))
            {
                int32_t ***l_625 = (void*)0;
            }
            for (p_25 = 0; (p_25 > 9); p_25 = safe_add_func_int16_t_s_s(p_25, 6))
            {
                (*g_61) = (*g_61);
                (*l_587) = (safe_add_func_uint8_t_u_u(0x24, (g_10 <= ((((((((((safe_lshift_func_int8_t_s_u(0xB5, 6)) != (&g_346 == l_641)) && ((safe_rshift_func_uint16_t_u_u(p_25, (p_23 ^ ((safe_mul_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((1 & (0x2754901E & g_351)), g_351)) > g_10) >= (-1)), p_22)) | 5U)))) ^ p_24)) != 0U) & g_351) || 255U) ^ (**g_61)) <= p_25) & 0xBFE7BD98) && 65533U))));
                (*g_62) = (safe_sub_func_int16_t_s_s(0, (p_24 > ((*l_617) <= 4294967295U))));
            }
        }
lbl_813:
        (*g_346) = (void*)0;
        if ((~((safe_mul_func_uint8_t_u_u((g_351 >= ((safe_lshift_func_int16_t_s_u((-2), 9)) || (safe_rshift_func_uint16_t_u_s((l_617 != (void*)0), (safe_add_func_int32_t_s_s(6, (!((((void*)0 == (**g_515)) >= 1U) & ((safe_rshift_func_uint16_t_u_u(0xD823, 1)) < g_406))))))))), g_10)) & 2)))
        {
            int32_t l_676 = 1;
            int16_t l_711 = 0xA4C6;
            int32_t **l_717 = &l_617;
            if ((p_24 == (safe_rshift_func_uint16_t_u_u((0xAB81 | (g_100 < (safe_mod_func_int32_t_s_s(6, (safe_mul_func_uint8_t_u_u((1 < (safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(0x3AC1E6FC, (safe_lshift_func_uint8_t_u_s(g_32, 5)))) || (safe_add_func_uint32_t_u_u(0x7EB40730, g_406))), 7))), g_235)))))), 13))))
            {
                int32_t **l_678 = &l_587;
                if ((*l_617))
                {
                    l_676 = p_22;
                }
                else
                {
                    int32_t **l_677 = &l_587;
                    (**g_61) = (g_406 >= ((l_677 == l_678) ^ (safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_100, (safe_rshift_func_int8_t_s_s((((((safe_sub_func_uint32_t_u_u((g_351 != p_23), ((***l_589) <= (0x9C > ((safe_lshift_func_int16_t_s_s(0x4659, l_691)) > l_692))))) && l_676) == p_22) & l_676) & p_22), l_676)))), 0)) <= 0x04) < 1U), p_25))));
                    for (p_25 = 0; (p_25 < 12); ++p_25)
                    {
                        int32_t ***l_695 = &l_678;
                        g_515 = &g_346;
                        (*l_617) = (**l_678);
                        (*l_587) = ((((void*)0 == l_624) && ((void*)0 != l_695)) <= ((safe_add_func_uint16_t_u_u(p_22, ((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_676 == (***l_589)), (((**l_678) < (((((safe_mod_func_int8_t_s_s((p_22 < 1), g_100)) || 0xC7DE) && p_23) > g_235) < p_24)) <= (**g_61)))), 1)), 0x70)) <= (-5)))) ^ p_25));
                    }
                    (*l_587) = (g_351 != ((*l_617) || (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((!65535U) < l_711) < g_100), (&l_678 == (void*)0))) == g_100), (p_25 > p_22)))));
                }
            }
            else
            {
                return g_406;
            }
            (*g_62) = (((((safe_sub_func_int16_t_s_s(((((void*)0 == (*g_515)) == (~(g_235 < (safe_mul_func_int8_t_s_s(((l_717 == l_717) > (safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((((g_351 < ((((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(p_24, (safe_add_func_int8_t_s_s(p_22, (safe_rshift_func_int16_t_s_u(p_25, g_10)))))) ^ 1), g_10)))) | (-1)), 5)) > g_10) || (-1)) | p_24)) & p_24) && (***l_589)), 1)) >= 1U), p_22))), (-2)))))) || 65535U), g_406)) != g_10) || p_22) != p_22) == g_100);
            (*g_515) = (*g_515);
            for (l_557 = 10; (l_557 != 19); l_557++)
            {
                (**g_61) = p_24;
                if ((**g_61))
                    continue;
            }
        }
        else
        {
            (**g_61) = (g_10 | 0xCE284FCC);
            return (***l_589);
        }
        if ((safe_mul_func_uint8_t_u_u(((+p_23) && (~((((void*)0 == (*g_346)) > p_23) != (*l_587)))), 0x07)))
        {
            int8_t l_741 = 0xA9;
            (*l_587) = ((4294967294U > 4294967295U) < ((((safe_rshift_func_int16_t_s_u(l_741, (safe_lshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((void*)0 == l_617), ((safe_lshift_func_uint8_t_u_u((((p_22 ^ (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0x41, ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((p_23 == p_23) | 0x36), 0x84)), g_406)) || p_24))), g_10))) && 0x245B6C2B) || (***l_589)), 5)) == g_406))) != p_24) == g_100), 1)))) || l_741) < g_351) == l_741));
        }
        else
        {
            uint32_t l_769 = 4294967291U;
            int32_t ****l_770 = &l_589;
            int16_t l_814 = (-2);
            int16_t l_849 = 0x0C34;
            if ((safe_add_func_uint16_t_u_u((p_23 >= (1 ^ ((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((p_23 < g_406) || g_351), 0)), (safe_sub_func_uint32_t_u_u(((((void*)0 == &g_346) == p_22) & (!(((safe_mul_func_uint16_t_u_u((7 != (*l_587)), g_235)) != (***l_589)) & g_32))), p_24)))), 5)) ^ 65531U) == g_10) < l_769))), g_100)))
            {
                int32_t *l_772 = (void*)0;
                l_771 = l_770;
                ((void) sizeof ((l_771 == &l_589) ? 1 : 0), __extension__ ({ if (l_771 == &l_589) ; else __assert_fail ("l_771 == &l_589", "/tmp/tmphyaun_77.c", 372, __extension__ __PRETTY_FUNCTION__); }));
                l_772 = (***l_770);
                ((void) sizeof ((l_772 == &g_351 || l_772 == &g_32 || l_772 == &g_100) ? 1 : 0), __extension__ ({ if (l_772 == &g_351 || l_772 == &g_32 || l_772 == &g_100) ; else __assert_fail ("l_772 == &g_351 || l_772 == &g_32 || l_772 == &g_100", "/tmp/tmphyaun_77.c", 375, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                int32_t **l_788 = &g_62;
                int32_t *****l_835 = &l_771;
                int32_t **l_843 = &l_776;
                if ((*g_350))
                {
                    int32_t **l_773 = &l_617;
                    (*g_350) = 0;
                    (***l_589) = (0x1D != ((l_773 == (**l_770)) == (0xBC <= g_100)));
                    for (l_769 = 18; (l_769 > 34); l_769 = safe_add_func_int8_t_s_s(l_769, 5))
                    {
                        (*g_350) = p_22;
                    }
                }
                else
                {
                    uint32_t l_781 = 0U;
                    int32_t **l_803 = &l_617;
                    int32_t ***l_804 = &g_61;
                    (***l_770) = l_776;
                    ((void) sizeof ((g_62 == &g_351) ? 1 : 0), __extension__ ({ if (g_62 == &g_351) ; else __assert_fail ("g_62 == &g_351", "/tmp/tmphyaun_77.c", 399, __extension__ __PRETTY_FUNCTION__); }));
                    (*g_62) = (safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(p_22, l_781)) >= (((safe_mul_func_int16_t_s_s(p_25, (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((void*)0 != l_788) < (&g_346 != &g_346)) & ((***l_770) == (void*)0)), p_23)), g_100)))) > 0x1923) < 0x737E)), (-4)));
                    (*l_776) = 0x4DC187B9;
                    (**l_804) = func_55((((safe_lshift_func_int8_t_s_u(((0 == (+(-3))) == p_23), 1)) > (safe_rshift_func_uint8_t_u_s(g_351, ((safe_add_func_uint32_t_u_u(g_351, ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((**l_788), ((safe_rshift_func_uint16_t_u_s((!g_351), 5)) | ((((l_803 != (void*)0) > p_23) < p_22) >= 5U)))) > (*l_617)), p_22)) && 0x13AB0AC0))) == (****l_770))))) <= 1U), l_788, l_804, p_22, (****l_770));
                }
                for (g_32 = 0; (g_32 >= 7); ++g_32)
                {
                    return p_23;
                }
                if (((**l_788) | (**l_788)))
                {
                    return (****l_770);
                }
                else
                {
                    int8_t l_807 = 0xDD;
                    int32_t *l_812 = (void*)0;
                    if (l_807)
                    {
                        int16_t l_808 = 0x166D;
                        l_812 = func_55((**l_788), (**l_770), (**g_515), (((**l_788) & ((l_808 ^ ((safe_rshift_func_int16_t_s_u(((+((**g_515) != (void*)0)) | (&g_346 == (void*)0)), l_808)) <= 1U)) > p_23)) || g_10), (**l_788));
                        ((void) sizeof ((l_812 == &g_351 || l_812 == &g_32 || l_812 == &g_100) ? 1 : 0), __extension__ ({ if (l_812 == &g_351 || l_812 == &g_32 || l_812 == &g_100) ; else __assert_fail ("l_812 == &g_351 || l_812 == &g_32 || l_812 == &g_100", "/tmp/tmphyaun_77.c", 421, __extension__ __PRETTY_FUNCTION__); }));
                        (**l_589) = (***l_770);
                    }
                    else
                    {
                        int32_t **l_821 = &l_812;
                        int32_t ***l_822 = &g_61;
                        if (p_25)
                            goto lbl_813;
                        (***l_770) = func_55((l_814 > (safe_rshift_func_int8_t_s_u((((-1) & (safe_mod_func_uint16_t_u_u((((*g_61) != (**l_589)) | (1U <= (0x6676 == (safe_mod_func_int8_t_s_s((l_821 != &l_812), g_100))))), 0x51C9))) | (*g_350)), 1))), (*l_589), &l_821, g_32, (*l_617));
                        (**l_788) = ((l_822 != (void*)0) < ((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s((****l_770), (safe_mod_func_int32_t_s_s(((-1) <= ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((*l_776), ((((safe_unary_minus_func_uint8_t_u(((safe_add_func_int8_t_s_s(((((g_10 != ((void*)0 != l_835)) & (safe_add_func_uint32_t_u_u(((((((4294967291U | 0x36CF1C58) || (-1)) && p_22) < g_32) ^ g_406) == g_235), g_235))) < g_100) < 0U), 0xE2)) & p_24))) < g_351) >= p_23) || (-1)))), p_24)) & g_100)), 4294967295U)))))) >= (-1)));
                    }
                    ((void) sizeof ((l_812 == 0 || l_812 == &g_351 || l_812 == &g_32 || l_812 == &g_100) ? 1 : 0), __extension__ ({ if (l_812 == 0 || l_812 == &g_351 || l_812 == &g_32 || l_812 == &g_100) ; else __assert_fail ("l_812 == 0 || l_812 == &g_351 || l_812 == &g_32 || l_812 == &g_100", "/tmp/tmphyaun_77.c", 434, __extension__ __PRETTY_FUNCTION__); }));
                }
                for (p_25 = 0; (p_25 >= 14); p_25 = safe_add_func_int16_t_s_s(p_25, 7))
                {
                    int32_t *l_842 = (void*)0;
                    if (((g_235 >= (safe_sub_func_uint16_t_u_u((*l_776), (((*l_788) == l_842) < ((0x43 != 0x47) < (l_843 != &l_842)))))) & p_24))
                    {
                        uint16_t l_848 = 0xF622;
                        (**g_61) = ((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((*l_617), (((**l_589) == (void*)0) ^ ((p_25 <= g_32) < ((((g_32 > (l_848 | (*l_617))) < l_849) > (*l_617)) | 0x18))))) ^ 2), p_23)) || 0x7A0E);
                        (*g_62) = p_22;
                    }
                    else
                    {
                        int8_t l_852 = 1;
                        int32_t *l_878 = &g_32;
                        (*l_776) = ((safe_lshift_func_int16_t_s_s(((*g_350) && l_852), (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((!(((safe_rshift_func_int8_t_s_u(g_235, 2)) & (safe_mod_func_int16_t_s_s(p_23, g_100))) & (&l_842 == &l_842))), p_23)), ((((safe_mul_func_int16_t_s_s(((!(safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((g_10 <= 4294967292U), p_25)) == (****l_770)), p_25)), g_235)), (**l_788)))) && g_235), 0x46AE)) || l_877) <= p_24) <= p_22))), p_22)), g_100)))) ^ g_100);
                        (**l_788) = (**g_61);
                        if (l_852)
                            break;
                        (***l_770) = l_878;
                        ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 455, __extension__ __PRETTY_FUNCTION__); }));
                    }
                }
            }
            ((void) sizeof ((l_771 == &g_347 || l_771 == &l_589) ? 1 : 0), __extension__ ({ if (l_771 == &g_347 || l_771 == &l_589) ; else __assert_fail ("l_771 == &g_347 || l_771 == &l_589", "/tmp/tmphyaun_77.c", 460, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_771 == &g_347 || l_771 == &l_589) ? 1 : 0), __extension__ ({ if (l_771 == &g_347 || l_771 == &l_589) ; else __assert_fail ("l_771 == &g_347 || l_771 == &l_589", "/tmp/tmphyaun_77.c", 463, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((l_771 == &g_347 || l_771 == &l_589) ? 1 : 0), __extension__ ({ if (l_771 == &g_347 || l_771 == &l_589) ; else __assert_fail ("l_771 == &g_347 || l_771 == &l_589", "/tmp/tmphyaun_77.c", 466, __extension__ __PRETTY_FUNCTION__); }));
    (*g_61) = (**l_589);
    (*g_61) = (*g_61);
    return (*l_776);
}
static int8_t func_28(int16_t p_29)
{
    int32_t *l_31 = &g_32;
    int32_t **l_30 = &l_31;
    int32_t ***l_512 = &l_30;
    (*l_30) = (void*)0;
    ((void) sizeof ((l_31 == 0) ? 1 : 0), __extension__ ({ if (l_31 == 0) ; else __assert_fail ("l_31 == 0", "/tmp/tmphyaun_77.c", 485, __extension__ __PRETTY_FUNCTION__); }));
    (*l_512) = func_33(func_37((g_10 && 0x09B4), &g_32, g_10), (*l_30), p_29);
    ((void) sizeof ((l_30 == &g_62) ? 1 : 0), __extension__ ({ if (l_30 == &g_62) ; else __assert_fail ("l_30 == &g_62", "/tmp/tmphyaun_77.c", 488, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_62 == &g_32 || g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == &g_32 || g_62 == &g_100) ; else __assert_fail ("g_62 == &g_32 || g_62 == &g_100", "/tmp/tmphyaun_77.c", 489, __extension__ __PRETTY_FUNCTION__); }));
    for (g_100 = 0; (g_100 < 0); g_100 = safe_add_func_int32_t_s_s(g_100, 8))
    {
        g_515 = &g_346;
    }
    (*l_30) = (*l_30);
    return p_29;
}
static int32_t ** func_33(int32_t ** p_34, int32_t * p_35, int16_t p_36)
{
    uint8_t l_457 = 1U;
    int32_t l_458 = 1;
    int32_t ****l_461 = (void*)0;
    int32_t ****l_462 = (void*)0;
    int32_t **l_478 = &g_350;
    int16_t l_481 = 0xA162;
    int32_t l_494 = 0xC9BEFE6A;
    int32_t l_499 = 0x01D12309;
    (*g_62) = (0x464F || g_32);
    l_458 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_32, (((0xC1858084 & (**p_34)) <= (((safe_mul_func_uint8_t_u_u(1U, ((void*)0 == (*p_34)))) || g_351) || g_235)) <= ((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(65529U, p_36)) != g_406), 10)) != 2U)))), l_457)) < g_351), 5));
    for (l_457 = 0; (l_457 >= 6); l_457 = safe_add_func_int16_t_s_s(l_457, 6))
    {
        uint32_t l_469 = 4294967295U;
        int32_t l_470 = (-7);
        int32_t **l_506 = &g_350;
        (*g_62) = (((((&g_347 != l_461) ^ (l_461 != l_462)) == (safe_sub_func_int32_t_s_s((g_406 && ((safe_add_func_uint16_t_u_u(((1 | (((((safe_lshift_func_uint16_t_u_u(((-1) && 0xE38EC4F9), 2)) | g_100) ^ 0xD6) == 4294967286U) == (*g_350))) == (**p_34)), p_36)) == g_32)), l_469))) >= p_36) | l_470);
        for (g_100 = 28; (g_100 < 3); --g_100)
        {
            int32_t ****l_479 = &g_347;
        }
    }
    return &g_62;
}
static int32_t ** func_37(int32_t p_38, int32_t * p_39, int32_t p_40)
{
    uint32_t l_54 = 0x38E5161E;
    int32_t ***l_63 = &g_61;
    (*g_346) = func_41((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(65535U, ((safe_sub_func_uint16_t_u_u(func_51(l_54, func_55(g_32, g_61, &g_61, l_54, (l_63 == &g_61))), 0x1BB5)) < p_38))), g_10)), (*l_63), g_350);
    ((void) sizeof ((g_62 == &g_32 || g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == &g_32 || g_62 == &g_100) ; else __assert_fail ("g_62 == &g_32 || g_62 == &g_100", "/tmp/tmphyaun_77.c", 544, __extension__ __PRETTY_FUNCTION__); }));
    return &g_62;
}
static int32_t *** func_41(int32_t p_42, int32_t ** p_43, int32_t * p_44)
{
    int32_t l_373 = 8;
    uint32_t l_443 = 0U;
    for (g_32 = 20; (g_32 != (-13)); --g_32)
    {
        uint32_t l_360 = 4294967293U;
        int32_t ****l_379 = (void*)0;
        for (g_235 = 0; (g_235 >= 26); g_235 = safe_add_func_int8_t_s_s(g_235, 9))
        {
            int32_t l_377 = (-5);
            int32_t **l_384 = &g_350;
            if ((((safe_sub_func_uint8_t_u_u(p_42, (safe_mul_func_int8_t_s_s((l_360 != (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((g_10 || ((safe_add_func_int16_t_s_s((0xF970 || ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((((l_360 || (((safe_mod_func_int8_t_s_s((l_373 != (safe_mul_func_uint16_t_u_u((+(6 ^ 8)), 65529U))), 0x6E)) ^ p_42) | p_42)) >= g_32) & g_100), 0)), g_100)) >= g_100) == 0xCED1) > l_377)), g_351)) | 8)), p_42)), g_32))), p_42)))) != 0x144BCF00) <= 0x574B))
            {
                int32_t ****l_378 = &g_347;
                int32_t l_417 = 0xBC3DCDBF;
                (*p_44) = (((l_378 == l_379) == (-1)) | (safe_mul_func_int8_t_s_s(l_373, ((0 <= ((void*)0 != &g_62)) || (0xA29D <= (safe_mod_func_uint8_t_u_u(p_42, p_42)))))));
                if ((((void*)0 == l_384) >= 0U))
                {
                    int32_t l_407 = 0x818A9741;
                    int32_t **l_425 = &g_350;
                    (*g_350) = (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((**l_384), p_42)), ((safe_sub_func_uint32_t_u_u(0U, (*p_44))) <= (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(0x4B78, 65534U)) || ((((!(safe_add_func_int8_t_s_s(0x02, p_42))) == (safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(g_406, l_373)) > (**l_384)), (-1)))) & l_407) & g_406)), p_42))))), g_32)) & g_351), (-6)));
                    if ((p_42 > ((safe_mod_func_uint32_t_u_u((4294967291U && (g_351 > 1)), (safe_add_func_uint8_t_u_u((((**p_43) & (-1)) > ((*g_350) != (**p_43))), 1U)))) == l_407)))
                    {
                        uint8_t l_414 = 255U;
                        int32_t **l_424 = &g_350;
                        l_414 = (0x0ACD78A6 && (((1U < p_42) | (g_100 != p_42)) & (l_407 < g_235)));
                        (*p_43) = (*p_43);
                        (**l_384) = (**l_384);
                        (**l_384) = ((-5) < ((p_42 & 4294967295U) < ((safe_lshift_func_uint16_t_u_u((l_417 ^ (l_407 && (safe_mul_func_int8_t_s_s(l_373, (&p_43 != (void*)0))))), (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((l_424 == l_425), p_42)), 0x0FD7342C)))) ^ 0xFD3BF148)));
                    }
                    else
                    {
                        (*g_61) = (*p_43);
                    }
                }
                else
                {
                    (*g_350) = (**l_384);
                }
                return (*g_346);
            }
            else
            {
                int32_t **l_434 = &g_62;
                int8_t l_444 = (-1);
                for (g_351 = (-12); (g_351 >= 8); g_351 = safe_add_func_uint16_t_u_u(g_351, 1))
                {
                    p_42 = (((safe_sub_func_int8_t_s_s(0, (safe_lshift_func_uint16_t_u_s(0x1F33, 2)))) > 0x04) | ((safe_add_func_int8_t_s_s((l_434 != (void*)0), ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_42, (safe_rshift_func_uint16_t_u_s((((void*)0 != &p_44) ^ ((void*)0 == (*l_384))), p_42)))), g_235)) | g_406), l_443)) & l_444))) || 0xE30274D7));
                }
            }
            (*p_43) = (*p_43);
        }
    }
    return (*g_346);
}
static uint16_t func_51(int8_t p_52, int32_t * p_53)
{
    int32_t *l_219 = &g_100;
    int32_t ***l_236 = &g_61;
    (*g_61) = l_219;
    ((void) sizeof ((g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == &g_100) ; else __assert_fail ("g_62 == &g_100", "/tmp/tmphyaun_77.c", 629, __extension__ __PRETTY_FUNCTION__); }));
    for (g_100 = 0; (g_100 < 9); g_100 = safe_add_func_int8_t_s_s(g_100, 1))
    {
        int32_t ***l_222 = &g_61;
        int32_t l_225 = 0x31BCC979;
        (**l_222) = p_53;
        ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 636, __extension__ __PRETTY_FUNCTION__); }));
        (*p_53) = ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s((((**l_222) != (*g_61)) | 255U), 6)) == ((safe_lshift_func_uint8_t_u_s(0x0F, ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((g_235 != g_235) ^ 1))), (l_236 == l_236))) >= 4294967289U))) == (***l_222))), 13)) ^ g_10);
    }
    ((void) sizeof ((g_62 == &g_32 || g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == &g_32 || g_62 == &g_100) ; else __assert_fail ("g_62 == &g_32 || g_62 == &g_100", "/tmp/tmphyaun_77.c", 640, __extension__ __PRETTY_FUNCTION__); }));
    if ((*p_53))
    {
        int8_t l_241 = 1;
        int32_t **l_248 = &l_219;
        int32_t **l_251 = &g_62;
        (**l_236) = func_55(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((g_32 ^ l_241), (((void*)0 == (*g_61)) > (safe_add_func_int8_t_s_s(g_32, (0x2E != (((((safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((***l_236) < g_32), g_10)) < g_32), p_52)) > (*g_62)) & 0xA055E4C5) != (**g_61)) != 0))))))), g_100)) || p_52), l_248, &g_61, p_52, g_100);
        ((void) sizeof ((g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == &g_100) ; else __assert_fail ("g_62 == &g_100", "/tmp/tmphyaun_77.c", 648, __extension__ __PRETTY_FUNCTION__); }));
        for (g_235 = (-22); (g_235 <= (-24)); g_235 = safe_sub_func_int8_t_s_s(g_235, 6))
        {
            uint32_t l_254 = 1U;
            int32_t ***l_265 = &g_61;
            (**l_236) = (*g_61);
            (*l_219) = ((void*)0 != l_251);
        }
    }
    else
    {
        uint32_t l_279 = 0x533681B2;
        int32_t ****l_289 = &l_236;
        (**g_61) = (0x42 || 0xC8);
        if ((**g_61))
        {
            int32_t ***l_309 = (void*)0;
            if ((safe_sub_func_int16_t_s_s((+(safe_lshift_func_int16_t_s_u(p_52, 1))), l_279)))
            {
                int32_t ***l_284 = &g_61;
                (**l_236) = func_55((((safe_add_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((void*)0 != l_284), (g_235 | (((safe_mod_func_uint16_t_u_u(65533U, (safe_lshift_func_uint16_t_u_s(((((*p_53) | ((*g_61) != p_53)) & g_32) | (l_289 == (void*)0)), (****l_289))))) | (****l_289)) >= p_52)))) || (*g_62)) >= g_10), g_10)) | 1U) > (*p_53)), &g_62, &g_61, p_52, (***l_236));
                if ((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(0x48, (safe_sub_func_uint8_t_u_u(255U, g_32)))), 7)), (safe_mod_func_uint16_t_u_u(((***l_289) == (*g_61)), (~((safe_sub_func_uint32_t_u_u(((&l_236 == (void*)0) > (*g_62)), ((void*)0 == &g_61))) != 0x1FEC)))))), (****l_289))), g_32)), g_10)) >= (***l_284)) && g_10))
                {
                    int16_t l_310 = (-1);
                    (**l_236) = func_55((****l_289), (*l_236), l_309, (****l_289), p_52);
                    if ((****l_289))
                    {
                        int32_t l_323 = 1;
                        (***l_289) = func_55(l_310, &g_62, (*l_289), g_10, (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(g_10, p_52)) <= (safe_lshift_func_int16_t_s_u((g_100 < (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_323, (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0x7E153554, (*p_53))), g_32)), 5)), (*l_219))))), (****l_289)))), 15))), (***l_236))), 3)));
                        return g_32;
                    }
                    else
                    {
                        (***l_284) = (*p_53);
                    }
                    (**l_284) = p_53;
                    ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 685, __extension__ __PRETTY_FUNCTION__); }));
                }
                else
                {
                    int32_t **l_336 = (void*)0;
                    (*g_61) = p_53;
                    ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 692, __extension__ __PRETTY_FUNCTION__); }));
                    (**l_284) = p_53;
                }
                ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 696, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                (*g_62) = (-1);
                (*p_53) = 0x248648ED;
                return g_32;
            }
            ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 705, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            int32_t *l_348 = &g_100;
            for (l_279 = 0; (l_279 >= 9); l_279 = safe_add_func_int16_t_s_s(l_279, 2))
            {
                uint32_t l_349 = 2U;
                (*g_62) = ((((void*)0 != (*l_289)) > (safe_unary_minus_func_int8_t_s((0x37C15CB5 > (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(1, (((*l_219) >= g_235) | (safe_lshift_func_int16_t_s_u(0x5C7D, 8))))), ((void*)0 != g_346))))))) != (*p_53));
                (**l_236) = (***l_289);
                (****l_289) = (((void*)0 != &p_53) | ((((((****l_289) >= ((*l_289) != (void*)0)) | p_52) < p_52) < (l_348 != (*g_61))) && l_349));
                (**l_236) = p_53;
                ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 718, __extension__ __PRETTY_FUNCTION__); }));
            }
            (**l_236) = (void*)0;
            ((void) sizeof ((g_62 == 0) ? 1 : 0), __extension__ ({ if (g_62 == 0) ; else __assert_fail ("g_62 == 0", "/tmp/tmphyaun_77.c", 722, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_62 == 0 || g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == 0 || g_62 == &g_32) ; else __assert_fail ("g_62 == 0 || g_62 == &g_32", "/tmp/tmphyaun_77.c", 725, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_62 == 0 || g_62 == &g_32 || g_62 == &g_100) ? 1 : 0), __extension__ ({ if (g_62 == 0 || g_62 == &g_32 || g_62 == &g_100) ; else __assert_fail ("g_62 == 0 || g_62 == &g_32 || g_62 == &g_100", "/tmp/tmphyaun_77.c", 728, __extension__ __PRETTY_FUNCTION__); }));
    (**l_236) = p_53;
    ((void) sizeof ((g_62 == &g_32) ? 1 : 0), __extension__ ({ if (g_62 == &g_32) ; else __assert_fail ("g_62 == &g_32", "/tmp/tmphyaun_77.c", 731, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_219);
}
static int32_t * func_55(uint32_t p_56, int32_t ** p_57, int32_t *** p_58, uint16_t p_59, int8_t p_60)
{
    int32_t l_80 = (-3);
    int32_t ***l_83 = &g_61;
    uint8_t l_160 = 0x25;
    int32_t ***l_203 = &g_61;
    for (p_59 = 6; (p_59 != 34); ++p_59)
    {
        int32_t *l_77 = &g_32;
        (*g_62) = (((1 != ((safe_lshift_func_int8_t_s_u(((0xD982 < g_32) & (((safe_add_func_int8_t_s_s((((void*)0 != &g_61) > (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s(((l_77 == (void*)0) <= g_32), (safe_mul_func_int8_t_s_s(((-3) > p_56), l_80)))))), p_56)), (*l_77)))), (*l_77))) & (*l_77)) >= g_10)), (*l_77))) < (-1))) && (*l_77)) ^ p_60);
    }
    (*g_61) = (*p_57);
    return (*g_61);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_347 = 0;
    csmith_sink_ = g_10;
    csmith_sink_ = g_32;
    csmith_sink_ = g_100;
    csmith_sink_ = g_235;
    csmith_sink_ = g_351;
    csmith_sink_ = g_406;
    csmith_sink_ = g_945;
    csmith_sink_ = g_969;
    platform_main_end(0,0);
    return 0;
}
