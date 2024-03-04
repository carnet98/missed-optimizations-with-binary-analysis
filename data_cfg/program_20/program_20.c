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
static uint32_t g_14 = 18446744073709551613UL;
static uint32_t g_15 = 0xC7516A20L;
static int32_t g_72 = 1L;
static uint16_t g_73 = 0xC8E8L;
static uint32_t g_86 = 1UL;
static uint32_t g_101 = 18446744073709551612UL;
static int16_t g_103 = 0x7A12L;
static int32_t g_118 = 1L;
static uint16_t g_119 = 0UL;
static uint32_t g_134 = 0x8985BB29L;
static int8_t g_144 = (-1L);
static int16_t g_153 = 0L;
static uint8_t g_350 = 0x04L;
static int16_t g_532 = (-10L);
static uint32_t g_760 = 0UL;
static int32_t g_761 = 0L;
static int16_t g_762 = 0L;
static int8_t g_806 = 0xF3L;
static uint32_t g_878 = 4294967295UL;
static uint16_t g_923 = 0x2161L;
static uint32_t g_1091 = 0x1701E58CL;
static int8_t func_1(void);
static uint16_t func_4(uint32_t p_5, uint8_t p_6, uint16_t p_7, uint32_t p_8);
static int32_t func_9(uint32_t p_10, int16_t p_11, int32_t p_12);
static int8_t func_38(uint16_t p_39, int32_t p_40);
static uint8_t func_42(uint32_t p_43, uint8_t p_44);
static int16_t func_48(uint32_t p_49, int32_t p_50);
static uint8_t func_60(int32_t p_61);
static int16_t func_62(uint32_t p_63);
static uint32_t func_64(int32_t p_65, int16_t p_66);
static uint32_t func_80(uint8_t p_81, int32_t p_82, int32_t p_83, int16_t p_84, uint8_t p_85);
static int8_t func_1(void)
{
    uint32_t l_13 = 0x5E08CCCDL;
    int32_t l_814 = 0x47D36788L;
    int32_t l_824 = 0xF8A205D5L;
    int32_t l_840 = 0xE3F57EACL;
    uint32_t l_909 = 0x5E8F43E1L;
    uint32_t l_981 = 1UL;
    uint32_t l_1003 = 0xD1173FEBL;
    int32_t l_1029 = 0x1FACB4F4L;
    int16_t l_1031 = 0xD341L;
    uint32_t l_1135 = 4294967295UL;
lbl_1134:
    if (((safe_add_func_uint16_t_u_u(func_4((func_9(l_13, l_13, (g_15 = (g_14 = (-1L)))) == (l_13 || 0x6108L)), (safe_mul_func_int8_t_s_s(l_13, 255UL)), (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(l_13, g_134)), l_13)), g_134), 0L)) & l_814))
    {
        uint32_t l_819 = 0x00822B6BL;
        int32_t l_829 = 0xC8519B97L;
        int32_t l_830 = 0x48A71A11L;
        int32_t l_838 = 0x645D82A7L;
        int32_t l_839 = (-8L);
        for (g_86 = 0; (g_86 <= 17); g_86++)
        {
            uint32_t l_837 = 8UL;
            l_840 = (safe_rshift_func_int8_t_s_s((g_119 < (l_819 && (safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((g_73 = (l_824 = g_118)), (l_830 = (safe_add_func_int16_t_s_s(g_532, (safe_lshift_func_uint8_t_u_u((l_829 = l_819), 3))))))) <= g_72), (safe_rshift_func_uint16_t_u_s(((l_839 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_837 = 65527UL), 10)), ((l_838 = (g_761 = l_814)) | 0xE77618C1L)))) != 0UL), 2)))))), g_14));
        }
        l_830 = (l_829 != (g_73 = (l_838 = g_153)));
    }
    else
    {
        uint8_t l_863 = 0UL;
        int32_t l_873 = (-3L);
        int32_t l_881 = (-1L);
        int32_t l_939 = 0xB1D10BFDL;
        for (g_73 = 0; (g_73 <= 13); g_73 = safe_add_func_int16_t_s_s(g_73, 6))
        {
            uint16_t l_853 = 0x9E69L;
            int32_t l_862 = (-2L);
            int32_t l_864 = (-10L);
            int32_t l_865 = 0L;
            for (g_153 = 0; (g_153 <= (-3)); g_153 = safe_sub_func_uint32_t_u_u(g_153, 1))
            {
                int32_t l_854 = 0xA7095881L;
                int32_t l_857 = 2L;
                for (g_532 = 15; (g_532 > 12); g_532 = safe_sub_func_uint32_t_u_u(g_532, 4))
                {
                    int32_t l_852 = (-4L);
                    int32_t l_960 = 1L;
                    for (l_814 = (-2); (l_814 != (-14)); l_814 = safe_sub_func_int8_t_s_s(l_814, 6))
                    {
                        l_853 = ((safe_mul_func_uint16_t_u_u(g_73, g_350)) <= (safe_unary_minus_func_uint8_t_u(l_852)));
                        if (g_86)
                            continue;
                        if (g_761)
                            break;
                        if (l_854)
                            continue;
                    }
                    if (((g_103 <= (l_865 = (((0x5D57L | g_144) <= ((((safe_mul_func_int8_t_s_s((g_761 ^ l_857), l_853)) != ((safe_sub_func_uint16_t_u_u(g_762, 1L)) < ((l_862 = (~((+g_153) == g_806))) && l_863))) == 0xC976DBF2L) == l_864)) ^ l_852))) | g_144))
                    {
                        uint32_t l_866 = 0xDC788159L;
                        int32_t l_882 = 0xB5C9A086L;
                        uint32_t l_883 = 0x59527B9EL;
                        if (l_866)
                            break;
                        l_883 = (safe_sub_func_int8_t_s_s((l_882 = ((l_862 = ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(0x7E38L, ((l_840 = ((0x10L != (((l_873 = l_814) ^ 0x42BADE8BL) ^ ((safe_add_func_int16_t_s_s((l_881 = ((g_72 = g_350) | ((safe_lshift_func_int8_t_s_u((g_806 = 0x11L), (g_878 = (l_866 <= 0xBF591591L)))) != (g_15 = (safe_mul_func_uint8_t_u_u(l_854, 0x4EL)))))), l_863)) && 1L))) & 0xA5L)) <= g_153))) <= l_854), 4L)) && l_863)) < g_101)), g_761));
                        l_882 = l_852;
                        if (g_14)
                            break;
                    }
                    else
                    {
                        int8_t l_922 = 0x89L;
                        g_72 = ((safe_add_func_uint32_t_u_u((~(0xA1L & (safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((g_923 = (safe_add_func_uint32_t_u_u(((l_881 || (g_119 = (safe_div_func_int32_t_s_s((((((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((g_760 < (7UL && l_881)) < (l_854 = (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(g_15, l_909)) ^ (safe_sub_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((((((0x23L <= (+((safe_add_func_int16_t_s_s((+((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((-6L) | 0L), g_878)), 255UL)) ^ 0x9AADE5CDL)), g_806)) ^ l_840))) ^ l_865) >= l_857) != 1L) > g_532), 0x1EL)) && g_762) <= 0xB603L) >= l_863), (-3L)))), l_909)), 5UL)), 2)))), l_13)), l_922)) > g_118) && g_760) <= g_806) > 0UL), l_852)))) && g_144), l_922))), l_873)) || g_350), l_857)), g_153)))), g_72)) > g_878);
                        l_873 = l_857;
                        l_854 = g_923;
                    }
                    g_761 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((l_909 == (l_854 = (l_840 = (0x0285L < ((l_873 = (((safe_mul_func_int8_t_s_s(8L, (safe_add_func_uint8_t_u_u((0x09D0L || (g_923 = ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((-1L), 0)) > l_824), (!(l_852 = (((l_862 = l_939) && ((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_144, (safe_rshift_func_int16_t_s_u(l_865, 13)))), g_103)) ^ l_852)) | 0L))))) != l_854), g_119)) > g_923))), (-1L))))) <= g_760) < g_153)) ^ 8L))))), g_15)), 10));
                    l_852 = ((((safe_mul_func_uint16_t_u_u(l_852, 4L)) ^ ((l_960 = (l_873 = ((safe_lshift_func_int8_t_s_u((((safe_div_func_uint16_t_u_u(0xE9D1L, (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(g_72, l_909)) < (l_854 = g_15)), ((g_72 & (((safe_rshift_func_uint8_t_u_u(((((g_806 = l_852) >= (safe_div_func_int8_t_s_s(8L, 1L))) > l_863) == g_923), g_878)) ^ l_852) < g_14)) <= g_923))))) && l_863) > l_852), 0)) & g_73))) <= l_852)) && 0x5492L) ^ l_13);
                }
                for (l_840 = 15; (l_840 < 11); l_840--)
                {
                    g_761 = (-1L);
                }
            }
            l_862 = (((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_103, (l_909 <= ((safe_div_func_int32_t_s_s(l_873, l_863)) | l_873)))), (safe_mod_func_uint16_t_u_u((((g_119 = g_923) | ((((safe_rshift_func_uint16_t_u_s(g_86, (((((l_863 == 0L) && l_939) <= 8UL) && 1UL) == l_939))) | l_13) == g_103) >= 0x7E88A430L)) ^ 253UL), g_14)))), 6)), 0x31L)) != g_144), l_873)) == g_153) > l_881);
            for (l_814 = (-13); (l_814 > 27); l_814 = safe_add_func_int16_t_s_s(l_814, 7))
            {
                int16_t l_984 = 1L;
                int32_t l_985 = 0x87673ECBL;
                if (l_981)
                    break;
                l_824 = 0x1947D46EL;
                l_985 = ((safe_rshift_func_uint16_t_u_u(l_984, 13)) & (1L & l_873));
                if (l_873)
                    continue;
            }
        }
        l_881 = (safe_sub_func_int8_t_s_s(((-8L) >= l_814), (-1L)));
        g_118 = ((safe_rshift_func_uint16_t_u_s(65534UL, 12)) || (l_873 | ((safe_div_func_int16_t_s_s(g_532, (safe_rshift_func_uint16_t_u_s(65527UL, 4)))) || g_103)));
    }
    if ((safe_mul_func_int8_t_s_s((g_806 = (l_840 = ((l_814 && (safe_div_func_int8_t_s_s(g_532, g_73))) | ((l_824 = ((l_909 & 9UL) == (g_15 = (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_144 != l_840), (((g_923 = (((+g_134) || l_840) & l_824)) != l_1003) > l_13))), l_13))))) > l_981)))), g_14)))
    {
        int32_t l_1014 = 0x6DD4881FL;
        uint8_t l_1030 = 253UL;
        g_118 = (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(l_840, g_101)) || l_824), ((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((g_103 = (safe_sub_func_int32_t_s_s(g_760, (g_350 | l_1014)))), (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(l_1014, ((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(1UL, (l_1029 = l_13))) >= 0L), l_840)) ^ 1UL), 6)), 0xB5L)) >= g_762) && l_1030), g_144)) <= g_86))) || g_86), l_1031)))), l_1031)) <= 1L)));
    }
    else
    {
        uint32_t l_1051 = 0xC7B1D34EL;
        int32_t l_1058 = 1L;
        uint16_t l_1090 = 0x1238L;
        uint8_t l_1133 = 0xD8L;
lbl_1124:
        if ((l_1029 = g_762))
        {
            uint16_t l_1032 = 65530UL;
            int32_t l_1047 = (-4L);
            int32_t l_1056 = (-1L);
            int8_t l_1057 = 0x6FL;
            int32_t l_1067 = 0xCDB26DBEL;
            int32_t l_1110 = 0x559B1B95L;
            l_1058 = ((g_15 = g_806) & ((l_1032 <= ((safe_unary_minus_func_uint32_t_u(((((l_1057 = (((((safe_div_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_1056 = (safe_lshift_func_uint8_t_u_u((g_350 = (safe_add_func_uint8_t_u_u(((((safe_unary_minus_func_int16_t_s((safe_sub_func_uint8_t_u_u((l_1047 = g_153), ((safe_rshift_func_int8_t_s_s((-3L), 6)) && (g_144 = g_72)))))) <= (l_1029 = (~(l_909 || l_1051)))) ^ (safe_rshift_func_uint16_t_u_s((((-1L) && (((safe_div_func_uint32_t_u_u((0x782DL != l_1051), 4294967291UL)) < g_101) != g_350)) < g_14), 14))) > (-1L)), g_134))), l_1051))) > 0xDAL), g_153)), g_14)) == 0x93L) && l_824), 0x0DEC79F3L)) == 0x91ADL) >= l_1051) < g_14) & g_14)) >= l_13) > g_86) || l_1047))) >= (-1L))) && 0x8490L));
            if (((0xE44BL | (safe_mod_func_int8_t_s_s((g_144 = l_1047), 255UL))) && ((((g_101 && ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_1047 = 6UL), 7)), (safe_rshift_func_int8_t_s_s(3L, 5)))) < 3L)) == (g_72 & 0x8EL)) <= g_806) == l_1067)))
            {
                uint32_t l_1092 = 0x4C3A915FL;
                int32_t l_1111 = (-7L);
                if (g_878)
                {
                    g_761 = l_1032;
                }
                else
                {
                    uint32_t l_1071 = 4294967295UL;
                    g_72 = ((safe_unary_minus_func_uint8_t_u((safe_mul_func_uint8_t_u_u(l_1071, (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((g_761 = g_101) & (0xF784L != (safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((l_1092 = (l_909 ^ (safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((g_1091 = (0L || ((safe_lshift_func_int8_t_s_s(l_1032, 5)) ^ ((g_14 < (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x0F78L, l_1090)), g_878))) & g_923)))), 0UL)) < 0xD1L), 0x00L)))) & g_923), 1L)), g_15)))) != 4294967295UL), l_1032)), g_73)))))) && l_1047);
                    return l_1092;
                }
                l_1111 = (safe_mul_func_int8_t_s_s(9L, (((g_134 > (safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(l_1056, 1)) >= 0x548BL), 10))) > (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_1047, 2)), 3))) & (safe_mul_func_uint16_t_u_u(65534UL, ((safe_add_func_int16_t_s_s((g_153 = (~((((((safe_div_func_int8_t_s_s((l_1110 = ((-1L) >= (0x9CL < ((l_1067 = (4UL ^ l_1092)) ^ l_814)))), 247UL)) < l_1058) != 1L) != g_118) & g_15) && l_1057))), g_762)) && l_1047))))));
            }
            else
            {
                return l_1090;
            }
            if (l_814)
                goto lbl_1124;
        }
        else
        {
            int8_t l_1116 = (-2L);
            g_118 = (g_761 = 0x6A77D604L);
            for (g_806 = 4; (g_806 < (-13)); g_806--)
            {
                int32_t l_1123 = 1L;
                l_1058 = ((g_878 = 0x89D32B67L) | (((safe_div_func_uint16_t_u_u(((g_1091 >= l_1116) > l_1116), 65531UL)) > 0x3FL) & (safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((g_1091 <= (g_86 = (safe_div_func_uint32_t_u_u(l_1123, g_144)))), g_806)) & g_101) || l_1003), l_1123))));
            }
        }
        g_118 = ((((safe_lshift_func_uint8_t_u_s(((l_840 == (l_1051 >= (6L <= (g_72 > ((((safe_lshift_func_int8_t_s_u((g_761 & g_101), 3)) | 0xF7A588D8L) == (safe_mod_func_int8_t_s_s(l_1029, l_1058))) < l_981))))) && l_1051), l_1003)) <= l_1051) <= 0x5BA2L) | l_1133);
        if (g_134)
            goto lbl_1134;
    }
    return l_1135;
}
static uint16_t func_4(uint32_t p_5, uint8_t p_6, uint16_t p_7, uint32_t p_8)
{
    int32_t l_776 = 1L;
    int32_t l_805 = 0x5FF6A7CAL;
    int32_t l_809 = (-1L);
    int32_t l_810 = 1L;
    int32_t l_811 = 0xAE1EF332L;
    int32_t l_812 = (-5L);
    int32_t l_813 = 0xDD1781A2L;
    l_776 = 3L;
    l_813 = (l_812 = (l_811 = (p_7 >= (safe_mul_func_int8_t_s_s((g_760 >= (((((safe_lshift_func_uint16_t_u_u((l_810 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((l_809 = (safe_add_func_int16_t_s_s(l_776, (g_119 = (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_776, (p_6 > (safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_776, ((g_73 = (safe_rshift_func_uint8_t_u_u((((((g_806 = (g_350 = (safe_rshift_func_int8_t_s_s((l_805 = g_14), 6)))) == l_776) != ((safe_add_func_uint32_t_u_u(g_760, l_776)) >= 0x02A9L)) == l_776) > l_776), g_144))) != l_776))) <= p_5), 0x7C49L))))), g_134)), g_760)), g_119)) > g_103), 3)))))), 0)), g_15))), g_761)) > p_6) || p_8) > g_101) < 0x1250L)), 0xC0L)))));
    return g_103;
}
static int32_t func_9(uint32_t p_10, int16_t p_11, int32_t p_12)
{
    int32_t l_41 = 0xC3997B09L;
    int32_t l_768 = 0xA9DE29E1L;
    uint32_t l_769 = 0x5CD436BAL;
    l_768 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_10, 0xB4EFL)), ((safe_sub_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(0xBAL, (l_41 = (safe_lshift_func_int8_t_s_s((func_38(l_41, l_41) >= (((g_762 = (safe_rshift_func_int8_t_s_u((g_760 = g_134), (g_761 = 0xCCL)))) >= ((+(((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_12, 15)), p_10)) && p_10) | g_134)) >= p_10)) > (-1L))), p_11))))) == l_768) || g_119), 2UL)) > 0xC53FL), l_768)) && p_12))), p_12)) != l_768), (-10L))), p_12)), p_12));
    l_769 = p_11;
    return g_103;
}
static int8_t func_38(uint16_t p_39, int32_t p_40)
{
    int32_t l_45 = 0x4779D44FL;
    int32_t l_749 = 0x593B1CDBL;
    l_749 = (l_45 = (func_42(l_45, g_14) <= 1UL));
    l_45 = (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(p_39, 1)), (safe_sub_func_int8_t_s_s((l_749 = p_40), p_39)))), g_14));
    return l_45;
}
static uint8_t func_42(uint32_t p_43, uint8_t p_44)
{
    uint32_t l_51 = 0x258D0336L;
    int32_t l_690 = 0xB98D4522L;
    int32_t l_697 = 0x35CB5F3DL;
    int32_t l_731 = 0xF18A2567L;
    int32_t l_734 = (-7L);
    l_697 = (safe_add_func_uint16_t_u_u(((func_48(g_15, l_51) || (g_134 < (((safe_lshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((((l_690 = 0x97L) <= (p_44 = g_532)) <= ((safe_sub_func_int8_t_s_s((-2L), (safe_rshift_func_uint8_t_u_u(g_14, 7)))) != (p_43 != p_43))), l_51)) ^ 255UL) > l_51), g_350)), l_51)) > (-1L)) <= 1L), p_43)) || 0x2547L) == p_43))) | l_51), l_51));
    for (g_153 = 0; (g_153 >= 5); ++g_153)
    {
        uint32_t l_703 = 0x61017FAEL;
        int32_t l_704 = 0x46DAC0E3L;
        int16_t l_730 = 1L;
        int32_t l_733 = 0x8A2C2046L;
        l_690 = g_350;
        for (g_72 = 0; (g_72 >= 23); g_72++)
        {
            int16_t l_729 = 9L;
            int32_t l_732 = (-10L);
            l_734 = ((-1L) & ((~l_703) != (l_733 = (l_51 & (l_732 = ((l_704 = g_86) == (p_44 = (l_731 = ((g_153 < ((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_730 = (safe_mod_func_uint8_t_u_u(p_43, ((safe_mod_func_int8_t_s_s((g_144 = (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_44, (safe_mod_func_uint32_t_u_u((g_15 = (l_697 = (l_690 = ((0x2DL || (((safe_div_func_uint32_t_u_u(1UL, 0xDE8BFD0AL)) & 0x46L) && 0x24L)) < l_703)))), g_72)))), l_729)), g_532))), g_119)) & 255UL)))), l_51)), g_532)) | g_532) > l_729) | 0L), g_86)), g_119)) ^ 0xF8L)) > p_43)))))))));
            for (g_86 = 0; (g_86 <= 5); g_86++)
            {
                if (p_43)
                    break;
            }
        }
        g_118 = ((((safe_mod_func_int8_t_s_s(0L, p_44)) <= l_51) | (-6L)) != ((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((0x48L < ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((-1L), ((((safe_rshift_func_uint8_t_u_s(l_734, 3)) > (g_103 && g_119)) & g_350) < g_119))), 0x45A6750BL)) ^ g_72)) | g_14), p_43)), l_51)) < 1UL));
        l_733 = (l_690 = (-10L));
    }
    return p_44;
}
static int16_t func_48(uint32_t p_49, int32_t p_50)
{
    uint32_t l_54 = 4294967293UL;
    int32_t l_59 = (-3L);
    int32_t l_681 = 0x8107CF97L;
    for (p_49 = 0; (p_49 != 57); p_49++)
    {
        int16_t l_164 = 0L;
        uint8_t l_165 = 0x39L;
        int32_t l_680 = (-6L);
        l_54 = 0L;
        l_681 = (safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((0x8EL && (((l_59 = 0x36L) <= func_60((func_62(func_64(((g_73 = (safe_div_func_int16_t_s_s(0xD296L, (safe_mul_func_int8_t_s_s((+0xE1DC630DL), (g_72 = p_50)))))) > (g_15 = (safe_mod_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0xA6L, 5)), g_15)) > (g_14 == func_80((l_54 ^ l_54), g_86, g_86, g_86, g_14))) ^ 0x438EE533L) == l_164), l_165)))), g_14)) || g_153))) & 0x67E3C8A0L)), 1)) | l_680), l_164));
    }
    return g_532;
}
static uint8_t func_60(int32_t p_61)
{
    int32_t l_679 = 0x9760A137L;
    g_72 = (0UL && (g_350 = (safe_mul_func_uint8_t_u_u(l_679, g_72))));
    return g_103;
}
static int16_t func_62(uint32_t p_63)
{
    uint8_t l_667 = 255UL;
    int32_t l_672 = 0x8CC5E52AL;
    int32_t l_675 = 0xD18EFFA9L;
    int32_t l_676 = 0x46107DB0L;
    g_72 = ((g_532 = ((((l_667 = 0xC472A42CL) > (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((g_86 < (((65535UL & l_672) && (safe_mul_func_int8_t_s_s((l_672 = p_63), g_532))) | 0x86L)), 6)), (((l_675 = ((-4L) ^ (g_103 || p_63))) < l_676) == l_676)))) || g_119) < l_676)) ^ p_63);
    return g_144;
}
static uint32_t func_64(int32_t p_65, int16_t p_66)
{
    int8_t l_170 = 1L;
    int32_t l_171 = 0x76B16355L;
    int32_t l_184 = (-3L);
    int32_t l_185 = 0x9FDC9EDEL;
    int16_t l_295 = 0x5A53L;
    uint16_t l_306 = 65535UL;
    int32_t l_657 = (-10L);
    for (p_65 = (-2); (p_65 <= (-10)); p_65 = safe_sub_func_uint16_t_u_u(p_65, 3))
    {
        uint32_t l_180 = 0xE453FC63L;
        int32_t l_181 = 0xBB92A5F0L;
        int32_t l_182 = 0xC948D72DL;
        int32_t l_183 = 0xE863DC2CL;
        uint32_t l_307 = 0xAC4C18ACL;
        int8_t l_509 = 0xBCL;
        uint32_t l_531 = 0xCCB0F604L;
        int32_t l_616 = 1L;
        l_185 = ((((safe_rshift_func_uint8_t_u_s(p_66, 5)) >= l_170) < (l_171 = p_65)) ^ (l_184 = (l_183 = ((safe_mod_func_uint8_t_u_u(8UL, (((((-1L) ^ (g_153 != (l_182 = (safe_add_func_uint32_t_u_u((l_181 = (safe_add_func_int8_t_s_s(((p_66 || (g_103 = g_119)) > (p_65 == l_180)), 0x1BL))), l_170))))) != p_66) >= p_65) & 7UL))) | g_144))));
        g_118 = p_65;
        if ((0x6355D27DL <= g_14))
        {
            int16_t l_198 = 0xA655L;
            int32_t l_227 = 0x23647BCEL;
            g_118 = ((l_171 = 0x50E3L) | (((safe_sub_func_uint16_t_u_u(p_65, 0x0CC6L)) & (safe_div_func_int32_t_s_s((g_72 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((p_65 == (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_65, 0x79E5L)), 5L))) & 4UL), p_65)), g_118))), p_66))) || l_198));
            if (p_65)
            {
                int32_t l_214 = 0xB982148FL;
                g_72 = (g_118 = ((!p_65) && (l_214 = (safe_lshift_func_uint16_t_u_s((0x62BFL | (safe_rshift_func_int8_t_s_u(0xDDL, 0))), ((safe_div_func_int16_t_s_s((l_198 <= (g_153 = ((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(p_66, (0x4AE7L <= (0x820FL >= (safe_mod_func_int8_t_s_s(g_15, g_73)))))), g_119)) || p_66), 4)) & g_14) & l_214) == p_66))), p_65)) >= l_170))))));
            }
            else
            {
                int16_t l_228 = 0x3426L;
                int32_t l_229 = (-1L);
                int32_t l_234 = 5L;
                if (((g_101 & 0x26L) >= g_73))
                {
                    int16_t l_226 = (-4L);
                    l_227 = (safe_div_func_int8_t_s_s(((g_86 || (p_66 <= (((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(g_134)) && p_65), g_101)), (safe_mul_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((p_65 && g_118), (g_119 && g_86))) || l_185) != l_183), 0x35B1L)))) < 0x1AE0L) != g_72))) | l_182), l_226));
                    l_227 = p_65;
                    l_228 = g_103;
                }
                else
                {
                    int32_t l_239 = 0x429D60EDL;
                    int32_t l_240 = (-5L);
                    uint8_t l_251 = 0x80L;
                    g_72 = (g_118 = ((p_66 == (l_229 = 0x4445L)) & ((g_144 = ((-1L) ^ ((p_65 | (safe_mul_func_int8_t_s_s(g_134, (-3L)))) == (l_240 = (safe_rshift_func_int16_t_s_s(((((((l_234 = 4L) < (safe_add_func_uint8_t_u_u(p_66, ((safe_mod_func_uint16_t_u_u(g_119, l_227)) || p_66)))) < l_227) & 2L) ^ p_66) != l_182), l_239)))))) || l_239)));
                    l_182 = (~(((!(safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((l_228 <= ((0x60D7D18FL || l_251) <= (((safe_sub_func_int16_t_s_s((g_73 != l_183), ((((g_72 | p_66) >= (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((!((l_239 && l_180) || (-3L))), 1)), p_66))) && g_153) && p_65))) & l_239) || l_228))), 0xC7F8L)), 11)), l_240)) & p_65), p_65))) != 0x4BFDL) && g_86));
                }
            }
            g_118 = ((p_66 < ((safe_add_func_int8_t_s_s((p_66 < (!(l_227 = (((safe_mul_func_uint8_t_u_u(l_184, (safe_rshift_func_uint8_t_u_u((p_65 || l_170), 7)))) > (safe_rshift_func_uint16_t_u_s(p_66, (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(g_101, ((g_118 == (g_153 == g_72)) & g_103))) != l_181), p_66))))) >= 0xD5L)))), 0x9BL)) | g_73)) < p_65);
        }
        else
        {
            int32_t l_280 = 0xBB7FEAD5L;
            int32_t l_329 = 0x340F2FB4L;
            int32_t l_351 = 0L;
            uint16_t l_436 = 65529UL;
            int16_t l_490 = 1L;
            int8_t l_517 = 0x14L;
            int32_t l_563 = (-1L);
            int8_t l_584 = 0x47L;
            for (g_119 = 27; (g_119 == 60); g_119 = safe_add_func_int32_t_s_s(g_119, 3))
            {
                int16_t l_308 = 0xBE36L;
                int32_t l_391 = 0L;
                int32_t l_392 = 0xD9079CEFL;
                uint16_t l_394 = 1UL;
                uint32_t l_489 = 1UL;
                g_118 = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((l_280 | l_180), 0)) <= (safe_mul_func_int16_t_s_s(((p_65 && (safe_add_func_int16_t_s_s(l_170, (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((((((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s((l_295 = p_65), ((safe_mul_func_uint8_t_u_u((p_65 >= (safe_rshift_func_int8_t_s_s((p_66 <= (l_307 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_65, ((((g_15 < 65533UL) < p_66) != l_306) && p_65))), g_144)), l_280)))), p_65))), 1L)) & 1UL))) && g_103), g_119)), 4)) > g_144) != 0xE171L) & g_86) ^ 1UL) != (-1L)), 0x58DED1CDL)), l_308))))) > 0x930141AFL), 0x279CL))) || g_72), l_280)), g_86));
                if (((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_66, (p_65 ^ (safe_div_func_int8_t_s_s((((((p_65 != (safe_rshift_func_int16_t_s_s(((g_144 = l_280) < (safe_lshift_func_uint8_t_u_u((((g_72 = ((g_72 <= p_65) & ((p_65 && ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((1UL <= ((g_86 = (safe_sub_func_uint32_t_u_u((0x7F93EFDEL <= l_183), g_86))) != p_66)), g_153)) || g_134), l_280)) != l_280) < l_308), 5)) ^ l_181), 7)) != 65526UL)) >= 4294967295UL))) > g_153) ^ 0x9CL), l_308))), g_73))) < 1UL) == g_15) == g_15) == g_153), 0x7DL))))), 65535UL)) | g_73))
                {
                    int32_t l_331 = 3L;
                    int32_t l_388 = (-1L);
                    uint32_t l_393 = 0UL;
                    int32_t l_410 = 0xCE5C9CA6L;
                    if (p_65)
                    {
                        l_329 = g_14;
                    }
                    else
                    {
                        int32_t l_330 = 0x58159E85L;
                        int32_t l_332 = 0x5FF36FFFL;
                        int32_t l_333 = 0x404F5728L;
                        l_183 = (l_330 == (p_66 > ((l_181 = l_329) != g_144)));
                        l_182 = 0xF9A101D9L;
                        l_333 = (l_332 = l_331);
                    }
                    l_183 = ((0xF6D5L && (l_184 = ((-1L) >= (safe_div_func_uint32_t_u_u(((l_351 = (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((-3L) != (g_73 = g_101)), (!(safe_div_func_uint16_t_u_u((g_350 = (safe_mul_func_uint16_t_u_u(((l_181 = ((l_329 = ((safe_lshift_func_uint8_t_u_u((+(safe_rshift_func_int16_t_s_s(l_308, ((((((((((((l_181 ^ (g_144 = g_119)) == l_308) && p_66) & g_119) <= g_119) >= 0x8D7F249FL) != 1L) <= l_181) || 1L) ^ p_66) > p_66) >= p_65)))), l_331)) >= l_331)) >= l_280)) & p_65), 0x94ABL))), l_280))))), 7))) < g_14), g_14))))) ^ p_66);
                    for (g_73 = 0; (g_73 != 48); g_73 = safe_add_func_uint8_t_u_u(g_73, 8))
                    {
                        uint32_t l_390 = 0xB3EB5E6DL;
                        int32_t l_433 = (-9L);
                        l_181 = (safe_rshift_func_uint8_t_u_s(0xB1L, (g_86 == ((((safe_rshift_func_int8_t_s_u(0L, 4)) && (safe_lshift_func_uint16_t_u_s((l_180 > (0UL >= (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((((((((((l_393 = (safe_lshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u((l_331 = l_308), 15)) > (~(safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_392 = (((((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_15 = (((((+(l_185 = ((safe_lshift_func_uint16_t_u_s((l_391 = ((((safe_sub_func_int16_t_s_s(l_388, (((l_280 <= (~(g_350 ^ l_390))) ^ p_66) <= 4294967295UL))) == l_390) > 0x63639430L) ^ g_153)), g_103)) ^ l_308))) == p_65) <= (-1L)) < p_65) | l_170)), 0UL)), 0x73L)) != p_65) < g_14) <= g_153) >= g_350)) ^ p_65), p_65)), 6)))) >= g_103), l_307)) || g_86), p_65)) == l_308), l_181))) > g_119) != 0x3068DE9FL) >= 0x9D7EL) ^ g_118) & 0xF951E7C5L) <= p_66) ^ p_65) > 0L), g_153)) < g_14) < l_388), 0)), p_66)))), 0))) >= l_394) ^ g_134))));
                        l_181 = (l_391 ^ (safe_div_func_int16_t_s_s((l_184 = (safe_mul_func_int16_t_s_s(1L, (255UL & (g_350 = g_153))))), (safe_sub_func_uint16_t_u_u((p_66 ^ (safe_div_func_uint32_t_u_u((g_15 == (p_65 == p_66)), g_119))), g_119)))));
                        g_72 = (((~((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_410 = (0L || (0x17ABL && l_410))), ((safe_rshift_func_int16_t_s_u(0x597BL, 10)) != (safe_sub_func_int16_t_s_s((((safe_unary_minus_func_uint8_t_u((l_331 = (safe_add_func_int8_t_s_s(g_86, (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((l_433 = (~(((safe_add_func_int32_t_s_s(((g_118 = (safe_div_func_int16_t_s_s((p_66 = (g_103 = (safe_rshift_func_int8_t_s_u(2L, 3)))), (+(((safe_mul_func_uint8_t_u_u(255UL, (safe_add_func_int8_t_s_s((-3L), l_394)))) | 1UL) || 0x87B1L))))) | l_329), 0x6D9E332CL)) | g_73) & l_306))))) && l_308), p_65))))))) && l_308) && p_65), 0x564FL))))), p_65)), 1UL)) != l_307)) == (-8L)) == g_134);
                        g_72 = (safe_sub_func_uint8_t_u_u(l_390, (l_436 >= g_118)));
                    }
                }
                else
                {
                    return g_134;
                }
                if ((g_86 <= ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_div_func_uint32_t_u_u((~p_65), g_118)) ^ ((p_66 == (((((~((safe_div_func_int16_t_s_s(l_329, (g_153 = (safe_mul_func_uint8_t_u_u((g_73 < (((l_351 != (p_65 | (safe_rshift_func_int8_t_s_u(p_65, p_65)))) | g_118) && l_170)), l_182))))) ^ 0x7767F09AL)) ^ g_15) < g_134) ^ 6UL) >= p_66)) >= 1L)) > g_134), 0xC5C3L)), g_86)) > l_351)))
                {
                    for (l_436 = 0; (l_436 < 21); l_436++)
                    {
                        uint8_t l_474 = 248UL;
                        l_474 = (((safe_mul_func_uint16_t_u_u((l_171 = g_101), ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((1L == (l_392 = (0x3AL < (safe_lshift_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s((g_153 = (safe_sub_func_uint32_t_u_u((9UL & g_73), (~(g_72 = (g_118 = (+(p_66 = l_183)))))))), ((safe_sub_func_int16_t_s_s((l_394 ^ p_65), (((safe_div_func_int8_t_s_s((~0xBBL), g_134)) >= (-1L)) || 0x1B07L))) > g_101))) && l_351) > 0L) | 4294967288UL), g_103))))), g_73)), 0x59CCL)) && p_66))) || 0x4605L) < 0xB6L);
                    }
                }
                else
                {
                    int32_t l_477 = 0L;
                    l_490 = (((safe_sub_func_uint16_t_u_u((l_477 | (6UL >= ((p_65 == ((1UL == (p_65 & ((0xFBL ^ (safe_rshift_func_uint8_t_u_u(g_15, (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((p_65 | (+(((safe_lshift_func_uint8_t_u_u((((g_350 = ((l_183 = (safe_sub_func_int16_t_s_s((p_66 = (g_153 = l_489)), 0x3C2EL))) >= l_181)) >= g_14) & p_65), 6)) == (-10L)) <= l_394))), g_86)), 12))))) > p_65))) <= l_391)) | 65532UL))), p_65)) ^ (-1L)) == 0L);
                    for (l_183 = 22; (l_183 <= (-3)); --l_183)
                    {
                        l_185 = p_66;
                    }
                    l_184 = (safe_lshift_func_uint16_t_u_u((p_65 || (safe_add_func_int32_t_s_s((((0x2A28L <= (safe_rshift_func_int16_t_s_s(g_86, 1))) < 9UL) <= (g_73 = (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((g_153 >= (p_65 || 0L)), (safe_mul_func_uint8_t_u_u((g_118 < g_144), 255UL)))), 3)))), 7UL))), 2));
                }
                l_329 = 3L;
            }
            if (((safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(l_509, 5)) ^ (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_73 = ((g_118 == (l_185 = p_65)) && 0x92C0D943L)), 11)), g_119))) >= ((g_103 == p_65) & ((+(((safe_mul_func_int8_t_s_s(1L, (l_181 = (g_144 = (l_306 | l_351))))) && g_101) & p_66)) > l_517))), l_184)) >= 0x10D8L))
            {
                int32_t l_561 = 0xA43F426DL;
                int32_t l_562 = (-10L);
                int32_t l_583 = 0x8F6F16FDL;
                for (g_86 = 0; (g_86 > 9); ++g_86)
                {
                    uint16_t l_529 = 65535UL;
                    int32_t l_600 = 5L;
                    uint32_t l_601 = 0x9FEDD757L;
                    uint8_t l_627 = 0x62L;
                    if (((safe_lshift_func_uint8_t_u_s((((g_119 = ((g_532 = ((((255UL < (((safe_mod_func_int8_t_s_s(l_171, (((safe_lshift_func_int16_t_s_s(l_306, 4)) ^ ((safe_rshift_func_uint16_t_u_s(l_517, g_118)) & ((((~(l_185 <= (l_529 ^ 0xB3A9L))) != (((+l_183) < l_171) >= p_65)) == p_66) == p_65))) || l_531))) > p_65) || 0xCE7EL)) >= 0xE41395B5L) <= g_14) | g_144)) ^ 2L)) & p_66) > 0xC5D40D41L), 2)) && 0x174EL))
                    {
                        uint8_t l_542 = 0xDCL;
                        int32_t l_585 = 0xB30E97A3L;
                        g_118 = l_185;
                        l_563 = (safe_rshift_func_int8_t_s_u((l_184 = (!0x91B6409FL)), (safe_mul_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u((l_542 & ((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_u(p_66, 15)) > (((safe_add_func_uint8_t_u_u((!(safe_lshift_func_uint8_t_u_u((l_561 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((((p_66 < g_103) > (safe_unary_minus_func_int32_t_s(g_86))) && ((g_144 = p_65) ^ ((safe_rshift_func_int8_t_s_u(((l_517 < l_542) < p_66), p_66)) != l_529))) || 1L), p_65)), p_65)) & l_542)), l_562))), l_436)) > g_350) > l_542)) & l_306) ^ 0x4329L), g_14)) <= 0UL)), 1)) > l_542) ^ l_563) && (-9L)) ^ g_86), g_532))));
                        l_585 = ((0xA555L > 0xDFD1L) && ((-9L) == (safe_rshift_func_uint8_t_u_s((l_184 = (safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((((((safe_mod_func_int16_t_s_s(g_134, (safe_mod_func_int8_t_s_s((-1L), (safe_rshift_func_uint8_t_u_u(g_350, 1)))))) | l_562) <= (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_65, (((~((safe_mul_func_int16_t_s_s(((l_583 = 2L) > l_170), l_170)) && 0x4777L)) && g_101) && 7L))), 5))) > 0xE8L) > 0xCD7C1FDBL) == l_584), l_529)) || l_171), 4294967287UL))), 0))));
                    }
                    else
                    {
                        uint8_t l_593 = 4UL;
                        uint32_t l_602 = 0xB66011E2L;
                        l_182 = (safe_mul_func_uint16_t_u_u(p_65, (p_66 = p_65)));
                        l_182 = (l_329 = ((+((safe_div_func_int8_t_s_s((p_66 & ((l_602 = ((l_170 & (p_66 || ((((((safe_mul_func_int8_t_s_s(((l_593 && (safe_lshift_func_uint8_t_u_u(p_65, (7UL >= 0x7D38L)))) ^ ((-4L) == ((((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_600 = ((p_66 < l_529) < 8UL)), g_118)), l_593)) != p_66) != l_185) == l_601))), p_65)) & g_532) || 0x9A225837L) < l_583) != 0x6792E31EL) | p_66))) ^ 65527UL)) >= 0x75C6A7C0L)), g_101)) ^ g_118)) & p_65));
                        l_562 = (l_183 = (l_529 ^ ((g_134 ^ l_295) || ((0L > (((g_350 | l_180) <= ((safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(g_14, 6)) != (safe_mul_func_int8_t_s_s(g_101, (safe_rshift_func_int8_t_s_s((((~(l_185 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_65, p_65)), 13)))) != g_134) <= g_119), 3))))) | l_562), p_65)) > p_66)) || l_616)) == l_306))));
                    }
                    for (l_171 = (-8); (l_171 >= (-22)); l_171 = safe_sub_func_uint8_t_u_u(l_171, 8))
                    {
                        int32_t l_625 = 0xA5F728D2L;
                        if (g_15)
                            break;
                        g_72 = ((0x8C10L || (safe_add_func_int16_t_s_s((-1L), (safe_rshift_func_int16_t_s_s(0L, (p_66 = l_561)))))) | (safe_div_func_uint16_t_u_u((0x28E93201L && l_280), g_119)));
                        g_72 = l_625;
                        l_600 = (l_183 = (safe_unary_minus_func_int8_t_s(l_627)));
                    }
                }
                g_118 = (g_14 == (safe_rshift_func_uint8_t_u_s((((g_350 = (l_171 = (p_65 > l_170))) & (((safe_lshift_func_int8_t_s_s((l_616 && l_182), (safe_add_func_int16_t_s_s((((((((g_103 = (((safe_mul_func_int16_t_s_s((((g_86 = (l_562 = 1UL)) || (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(0L, (p_65 >= ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_181 = (safe_add_func_int8_t_s_s(p_65, 0xDDL))), 3L)), g_153)) > (-2L))))) != l_562), p_65))) >= 0xCAL), g_72)) && g_15) <= p_66)) | l_306) <= l_517) >= l_182) == p_66) && l_306) >= 1L), (-1L))))) <= l_563) <= p_66)) & l_561), 7)));
                l_351 = g_119;
            }
            else
            {
                int16_t l_660 = 5L;
                int32_t l_663 = 0xBECF8EA8L;
                g_72 = (safe_sub_func_int16_t_s_s((((safe_unary_minus_func_uint16_t_u((((l_663 = (l_183 = ((safe_rshift_func_int8_t_s_s(((g_118 = l_295) == (safe_lshift_func_uint16_t_u_s((251UL & ((safe_add_func_int16_t_s_s(g_86, ((g_153 = p_65) > (l_657 = l_509)))) > ((safe_lshift_func_uint8_t_u_u((l_181 = 0x98L), p_65)) || (l_184 = (l_181 = ((((l_660 && (((safe_div_func_int8_t_s_s((p_66 > g_72), g_532)) != l_170) & l_329)) > g_350) || 65530UL) < g_532)))))), 3))), p_65)) < g_72))) >= 5L) & p_66))) <= l_170) != 0xDDB63E37L), g_350));
            }
        }
    }
    l_185 = p_66;
    g_118 = ((((~(safe_div_func_uint8_t_u_u(p_65, 0xACL))) <= l_306) > 0xA4100DE2L) > ((l_184 ^ (l_171 = (-1L))) != p_66));
    return g_86;
}
static uint32_t func_80(uint8_t p_81, int32_t p_82, int32_t p_83, int16_t p_84, uint8_t p_85)
{
    int16_t l_99 = 0x94A2L;
    uint32_t l_102 = 18446744073709551615UL;
    int8_t l_117 = (-6L);
    int32_t l_163 = 0xA74C462FL;
    g_103 = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(g_86, (0xD0L | l_99))) || (((g_101 = ((g_86 == p_83) | (!(l_99 || 0x6CCCE42BL)))) != g_86) ^ (-4L))), 6)), l_102)) && p_82), 0x78915D48L)), p_82)), l_102));
    if ((((0UL & (((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((g_119 = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_102 ^ (safe_lshift_func_uint8_t_u_s((p_81 = (g_118 = (p_83 && ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((g_101 || (p_84 >= 0x54L)) >= l_117))), 1L)) != p_83)))), g_86))), 1)), g_15))), l_102)), g_15)) && g_118) == l_99)) != (-6L)) & g_86))
    {
        uint32_t l_120 = 0UL;
        int32_t l_135 = 0x427CCDDEL;
        l_120 = p_83;
        p_83 = (((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_84 = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_86, ((l_135 = (safe_sub_func_int8_t_s_s(g_101, (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(g_134)) ^ g_101), (250UL && (-7L))))))) == (0x4D58F1AFL || (safe_mod_func_int32_t_s_s(((g_144 = (((l_120 < (safe_lshift_func_int8_t_s_u((((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0x0BL, 0x6AL)), l_120)) >= g_101) != g_118), 7))) != p_83) ^ 0x3298L)) <= 2UL), l_102)))))), 0))), g_101)), p_82)) || 65535UL) <= g_119);
        g_118 = p_85;
    }
    else
    {
        int32_t l_145 = 0x4DDF0F57L;
        int32_t l_162 = 0x68A6AAB0L;
        l_163 = (((l_99 & l_145) && ((((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_83, g_134)), ((g_119 = (safe_mul_func_uint8_t_u_u(((+(4294967295UL && ((g_153 = g_144) & g_118))) == (safe_lshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_162 = (safe_rshift_func_int16_t_s_s((g_134 | ((0xEE3948B2L & g_144) <= g_118)), g_119))), l_99)), l_145)) < p_83), 1))), p_84))) <= 0x6A3DL))) <= 1L) > g_103) > p_81)) ^ 1UL);
    }
    return l_117;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_14;
    csmith_sink_ = g_15;
    csmith_sink_ = g_72;
    csmith_sink_ = g_73;
    csmith_sink_ = g_86;
    csmith_sink_ = g_101;
    csmith_sink_ = g_103;
    csmith_sink_ = g_118;
    csmith_sink_ = g_119;
    csmith_sink_ = g_134;
    csmith_sink_ = g_144;
    csmith_sink_ = g_153;
    csmith_sink_ = g_350;
    csmith_sink_ = g_532;
    csmith_sink_ = g_760;
    csmith_sink_ = g_761;
    csmith_sink_ = g_762;
    csmith_sink_ = g_806;
    csmith_sink_ = g_878;
    csmith_sink_ = g_923;
    csmith_sink_ = g_1091;
    platform_main_end(0,0);
    return 0;
}
