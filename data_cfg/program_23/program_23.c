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
   int32_t f0;
   int32_t f1;
   uint32_t f2;
   uint8_t f3;
   uint16_t f4;
};
static int32_t g_4 = 0x4CDB8FAA;
static int16_t g_6 = (-1);
static int16_t g_8 = (-1);
static int16_t g_30 = 0xC570;
static int16_t *g_29 = &g_30;
static uint8_t g_66 = 0xE6;
static struct S0 g_81 = {0xC1A33FE8,4,0xEF155D26,3U,65535U};
static int8_t g_92 = 0;
static int16_t g_94 = 0x29AF;
static int16_t g_101 = 1;
static int16_t g_104 = 8;
static int32_t *g_108 = &g_81.f0;
static int32_t **g_107 = &g_108;
static uint16_t g_190 = 1U;
static int8_t g_193 = 0xF1;
static int32_t g_194 = 0xD8232EDD;
static int8_t g_197 = 0x2D;
static uint8_t **g_313 = (void*)0;
static struct S0 *g_341 = &g_81;
static struct S0 **g_402 = (void*)0;
static struct S0 ***g_401 = &g_402;
static int32_t **g_424 = &g_108;
static int32_t **g_425 = &g_108;
static uint32_t g_428 = 0xCE087C82;
static struct S0 *g_534 = &g_81;
static int16_t *g_535 = &g_101;
static uint32_t *g_571 = &g_428;
static uint32_t **g_570 = &g_571;
static uint16_t *g_661 = &g_190;
static uint16_t **g_660 = &g_661;
static uint16_t ***g_659 = &g_660;
static uint32_t g_709 = 1U;
static int32_t *g_717 = &g_81.f1;
static int8_t func_1(void);
static int16_t func_9(int16_t * p_10, int16_t * p_11);
static int16_t * func_12(int16_t p_13, int16_t * p_14);
static int16_t * func_15(int16_t * p_16);
static int16_t * func_17(struct S0 p_18, struct S0 p_19);
static struct S0 func_20(uint16_t p_21, int16_t * p_22, struct S0 p_23, int32_t * p_24);
static int16_t * func_25(int16_t * p_26, int32_t p_27, int32_t p_28);
static uint16_t func_42(int32_t p_43, struct S0 p_44, int8_t p_45, uint16_t p_46);
static struct S0 func_47(int16_t p_48, int16_t * p_49);
static uint16_t func_55(int32_t * p_56, int32_t * p_57);
static int8_t func_1(void)
{
    int16_t *l_5 = &g_6;
    int16_t *l_7 = &g_8;
    int32_t l_36 = 5;
    int32_t l_39 = (-1);
    struct S0 l_382 = {0x656643B3,0xE9079731,4294967292U,1U,1U};
    int32_t *l_383 = (void*)0;
    uint32_t l_792 = 0xCAE0C866;
    (*g_107) = (((safe_lshift_func_int16_t_s_s(((*l_7) = ((*l_5) = g_4)), (func_9(l_5, func_12(g_4, func_15(func_17(func_20(g_4, func_25(g_29, (safe_div_func_uint8_t_u_u(((+((safe_lshift_func_uint8_t_u_s(l_36, 3)) <= (safe_mul_func_int16_t_s_s(((((*g_29) , &g_30) == l_7) & g_4), l_36)))) && l_36), l_39)), l_39), l_382, l_383), l_382)))) || l_39))) != g_4) , &l_36);
    (*g_341) = (*g_341);
    return l_792;
}
static int16_t func_9(int16_t * p_10, int16_t * p_11)
{
    uint8_t *l_735 = &g_81.f3;
    uint8_t **l_734 = &l_735;
    int32_t l_736 = 1;
    int32_t ***l_751 = &g_107;
    int32_t ****l_750 = &l_751;
    int32_t *****l_749 = &l_750;
    int32_t *****l_752 = &l_750;
    int32_t l_753 = 0xCF5BEF00;
    uint32_t l_754 = 0x16F8B90A;
    int32_t *l_755 = &l_753;
    struct S0 l_760 = {0x15AAF961,1,0U,254U,65535U};
    struct S0 ***l_767 = &g_402;
    uint32_t *l_768 = &l_754;
    struct S0 *l_788 = &l_760;
    int8_t *l_789 = &g_92;
    int32_t l_790 = 0xF25EC14D;
    int32_t l_791 = (-4);
    l_753 = (((*l_735) = (safe_add_func_int32_t_s_s((*g_717), (safe_lshift_func_uint8_t_u_u(((l_736 = (safe_div_func_uint8_t_u_u(0xA0, (safe_rshift_func_int8_t_s_s((l_734 != (void*)0), 6))))) >= (((((safe_mod_func_int16_t_s_s(((!(!8)) == (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((((*g_341) , l_749) == (l_752 = &l_750)), (*p_11))), 13)), (*p_11))), g_197))), l_753)) , l_754) >= l_754) | 0x880AA3E3) > g_81.f1)), g_81.f1))))) >= g_81.f1);
    (*g_425) = &g_4;
    (*g_424) = l_755;
    l_791 = (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((l_760 , (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((((*l_768) = (safe_mod_func_uint32_t_u_u((l_767 == (void*)0), 1))) , ((***l_751) , (safe_rshift_func_int8_t_s_u(((*l_789) = (((*****l_749) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((~(safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((((((((****l_750) , (*l_734)) == (void*)0) && (***l_751)) , 0x51A363AD) >= g_101) , (void*)0) != l_788), (***l_751))) == (*p_11)), (***l_751)))), 7)), (*l_755))) , (*****l_749)) == (****l_750)) & (*****l_749)), (****l_750))), (*****l_749))), (-9))), (*****l_749)))) > (*g_29))), l_790)))), (-5))), 0xCFC8))) & 0x4BB0) == 4294967295U), 0U)), 0xACF50A80));
    return (*g_29);
}
static int16_t * func_12(int16_t p_13, int16_t * p_14)
{
    struct S0 l_555 = {-5,-4,0x964FE7D8,0U,65535U};
    uint8_t *l_569 = (void*)0;
    uint8_t **l_568 = &l_569;
    uint32_t *l_603 = &g_428;
    int32_t *l_615 = &g_81.f0;
    int16_t *l_646 = &g_101;
    uint32_t **l_693 = (void*)0;
    uint32_t l_694 = 4294967294U;
    int32_t *l_715 = &g_81.f1;
    for (g_66 = (-29); (g_66 > 14); ++g_66)
    {
        uint16_t l_554 = 0U;
        uint8_t **l_567 = (void*)0;
        int16_t *l_577 = &g_104;
        int32_t l_578 = 0xE2FDA724;
        uint32_t **l_612 = &g_571;
        struct S0 l_635 = {0xFA2CA408,0xE0A7F2E5,3U,0xCE,0U};
        uint32_t **l_691 = (void*)0;
        uint32_t l_723 = 4294967288U;
        if (p_13)
        {
            uint32_t *l_548 = &g_428;
            uint8_t l_556 = 0xFF;
            uint32_t *l_557 = &g_81.f2;
            int32_t ***l_574 = (void*)0;
            uint8_t l_608 = 0x82;
            struct S0 l_614 = {0x4F744FA6,-1,0x3D84D2C8,255U,1U};
            int32_t *l_643 = &l_578;
            int16_t **l_647 = (void*)0;
            int8_t *l_648 = &g_197;
            int8_t *l_655 = &g_92;
            uint32_t **l_692 = &l_557;
            int32_t l_695 = (-1);
            if (((safe_sub_func_uint32_t_u_u(((*l_557) = (((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((l_548 != &g_428), (~(0 & 4294967293U)))) == (safe_lshift_func_uint16_t_u_s(p_13, 4))), (safe_mul_func_int8_t_s_s(l_554, ((l_555 , &g_108) == (((p_13 == l_556) | 1U) , &g_108)))))) == (-1)) && g_92)), p_13)) > p_13))
            {
                uint16_t l_562 = 0xBE5E;
                int32_t ***l_573 = (void*)0;
                int32_t ****l_572 = &l_573;
                int8_t l_575 = 0;
                struct S0 l_576 = {1,0x5A7EF1A6,0x96E4FF2E,0x2B,0x1A5B};
                uint32_t *l_604 = &g_428;
                int32_t *l_605 = &l_576.f1;
                uint8_t *l_606 = (void*)0;
                uint8_t *l_607 = &l_556;
                uint16_t *l_609 = &g_81.f4;
                uint16_t *l_610 = &l_554;
                int32_t *l_611 = &l_578;
                uint32_t ***l_613 = &l_612;
                if (((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_562, (2 >= (((*l_572) = ((safe_mod_func_int8_t_s_s(((((((safe_mul_func_uint16_t_u_u(((l_555 , 6) , ((l_567 = g_313) != (l_568 = g_313))), ((*p_14) = 0xD3BA))) == (((((((0x3CF5 <= ((l_562 , g_81.f2) , 9U)) || g_190) , p_13) ^ g_81.f3) , (void*)0) != g_570) <= 0U)) , 0xD4) > l_555.f2) , p_13) ^ 0xAA), p_13)) , (void*)0)) != l_574)))), p_13)) <= p_13) ^ l_575) >= l_554))
                {
                    (*g_341) = l_576;
                    if (p_13)
                        continue;
                }
                else
                {
                    return l_577;
                }
                l_578 = l_555.f2;
                (*l_611) = (safe_unary_minus_func_uint32_t_u(((g_104 ^ (safe_rshift_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_u((((g_101 > (((safe_add_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s(((*l_610) = ((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((*g_29) = (safe_lshift_func_int16_t_s_u((((((+((*l_557) = ((*g_29) >= ((*l_609) = (p_13 > (((safe_sub_func_uint16_t_u_u(0xC37C, (((-1) & (((safe_add_func_int16_t_s_s(((((*l_607) = (safe_div_func_int8_t_s_s((((*l_605) = (g_194 || ((((*g_570) = l_603) != l_604) && p_13))) > 0), p_13))) , 0x678C) >= g_193), l_555.f0)) != l_578) , g_101)) != l_578))) || l_608) & (*g_535))))))) >= g_197) , l_578) >= l_578) >= l_578), g_101))), (*g_535))) & p_13) >= p_13), 1U)), p_13)) | (-6))), (*g_535))) != l_555.f1) < 0xF2824C95), 0x97D1D2AA)) , 4294967295U) , 0x05D8)) < l_555.f2) , 0xD915), g_81.f3)) < 0U) ^ 1) || (*g_535)) || 1), 6))) , l_555.f2)));
                if (((-5) && (((&g_571 != ((*l_613) = l_612)) , &l_578) != (((*g_341) = l_614) , (l_615 = l_603)))))
                {
                    struct S0 l_618 = {1,-9,0x26440F52,0x3C,0x6B18};
                    for (g_81.f0 = (-5); (g_81.f0 < (-15)); g_81.f0--)
                    {
                        struct S0 *l_619 = &l_614;
                        int32_t *l_624 = &l_555.f1;
                        uint16_t **l_625 = &l_610;
                        uint16_t ***l_626 = (void*)0;
                        uint16_t ***l_627 = &l_625;
                        (*l_619) = l_618;
                        l_624 = ((*g_425) = (((*g_29) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((*l_611) = (8U ^ (*p_14))), (*l_605))), 0))) , &g_4));
                        (*l_627) = l_625;
                        (*g_425) = &l_578;
                    }
                    (*g_107) = l_548;
                    (*l_605) = p_13;
                    (*g_341) = l_576;
                }
                else
                {
                    uint32_t l_632 = 0x01F7759E;
                    int8_t *l_636 = &g_92;
                    for (l_555.f3 = 23; (l_555.f3 >= 60); l_555.f3 = safe_add_func_uint16_t_u_u(l_555.f3, 8))
                    {
                        (*l_615) = 1;
                        (*l_611) = (-8);
                    }
                    (*l_611) = ((safe_add_func_uint8_t_u_u((*l_615), (((g_66 , g_313) != g_313) == (l_632 , p_13)))) , (p_13 | ((0x9F && ((*l_636) = ((((l_635 , &l_614) == &l_635) & 0x16EA) , p_13))) >= (-8))));
                    return l_577;
                }
            }
            else
            {
                int32_t *l_637 = &l_635.f1;
                l_637 = &l_578;
            }
            l_635 = (l_555 = l_614);
            (*l_643) = ((((void*)0 == &g_197) <= ((*g_571) , (((((*l_557) = (p_13 , l_614.f2)) > l_635.f3) & ((*l_615) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((&l_615 == &g_108), (!g_101))), (*l_615))))) , p_13))) && l_635.f1);
            if ((l_578 = (safe_rshift_func_int16_t_s_u((((&g_101 == (g_535 = l_646)) != (p_13 < (0xD2 >= ((((*l_648) = g_193) <= p_13) ^ (safe_lshift_func_int16_t_s_u(((l_614 , ((*l_655) = (l_603 == ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((&g_190 == (void*)0) >= l_635.f3), p_13)), g_193)) , l_557)))) | 0U), (*l_643))))))) > (*l_615)), 5))))
            {
                uint16_t *l_665 = &g_81.f4;
                struct S0 l_667 = {-10,7,8U,255U,0xAD7C};
                if (p_13)
                    break;
                (*l_643) = 0x8E9A8134;
                if ((p_13 ^ 65535U))
                {
                    for (l_555.f4 = (-12); (l_555.f4 <= 22); l_555.f4++)
                    {
                        int32_t ***l_658 = &g_425;
                        (*l_643) = (((*l_658) = &g_108) == &g_108);
                    }
                }
                else
                {
                    struct S0 l_663 = {1,-1,4294967295U,1U,0U};
                    struct S0 *l_664 = &l_635;
                    int32_t *l_666 = (void*)0;
                    (*g_425) = ((p_13 > ((((*l_615) = (g_659 == (((((safe_unary_minus_func_uint8_t_u((g_81.f2 <= 0x7D))) , (l_646 = &p_13)) == (void*)0) > (((*g_660) = func_17(l_663, ((*l_664) = l_555))) != l_665)) , (void*)0))) != p_13) >= 0xAF)) , l_666);
                    if (p_13)
                    {
                        (*l_664) = l_614;
                    }
                    else
                    {
                        (*g_341) = l_614;
                        (*l_615) = l_635.f3;
                    }
                    (*g_341) = l_667;
                    if ((*l_615))
                        continue;
                }
            }
            else
            {
                uint16_t l_696 = 0x1DEE;
                uint32_t ***l_708 = &g_570;
                (*l_643) = (~((*g_29) <= ((safe_sub_func_int8_t_s_s((*l_615), (((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*p_14) = (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((((1U < (safe_mul_func_uint16_t_u_u((*g_661), (*l_615)))) ^ (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((p_13 == ((safe_mul_func_uint16_t_u_u(((l_692 = l_691) != (l_555 , l_693)), 1)) < (-1))), l_694)), 0xCF)) != 0x83) , l_695)) | 0x9D1BD775), p_13)) & g_81.f0) < l_696), g_94))), (*g_29))), p_13)) <= g_428), p_13)) || p_13), 0xDAD853EC)) == p_13) & 249U))) && 0xB2AE)));
                (*l_615) = (l_578 >= (safe_mod_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((*l_655) = p_13), g_81.f2)) | (~(l_696 || (safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((1U | p_13), ((*g_341) , p_13))), (g_709 = (l_708 != (void*)0)))) >= p_13), g_81.f1))))), (*l_615))));
            }
        }
        else
        {
            int32_t *l_714 = &l_635.f1;
            int32_t **l_716 = (void*)0;
            uint8_t ***l_718 = &l_568;
            int8_t l_724 = 0;
            int8_t *l_725 = &l_724;
            (*g_424) = l_603;
            (*l_615) = (((*l_725) = (((safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((*g_107) = l_714) != (g_717 = l_715)), (l_567 != ((*l_718) = &l_569)))) <= g_190), ((safe_div_func_uint8_t_u_u(((*l_715) <= ((*l_714) = ((((4294967294U & ((*p_14) , ((safe_rshift_func_int8_t_s_s(p_13, p_13)) , 1U))) , (-8)) ^ p_13) & 0U))), (-8))) | l_723))) >= p_13) < l_724)) <= p_13);
            (*g_424) = (*g_425);
        }
        (*g_717) = p_13;
    }
    return &g_30;
}
static int16_t * func_15(int16_t * p_16)
{
    uint16_t *l_537 = &g_190;
    uint16_t **l_536 = &l_537;
    int32_t *l_538 = (void*)0;
    struct S0 l_539 = {1,3,0x811B1D72,0xA2,0x1BEE};
    if ((251U != ((void*)0 != l_536)))
    {
        return &g_104;
    }
    else
    {
        (*g_107) = l_538;
    }
    (*g_341) = l_539;
    return &g_101;
}
static int16_t * func_17(struct S0 p_18, struct S0 p_19)
{
    return g_535;
}
static struct S0 func_20(uint16_t p_21, int16_t * p_22, struct S0 p_23, int32_t * p_24)
{
    int16_t l_391 = 0x7504;
    uint32_t *l_396 = (void*)0;
    uint32_t *l_397 = &g_81.f2;
    uint16_t *l_400 = &g_190;
    struct S0 ***l_403 = (void*)0;
    uint16_t *l_407 = &g_81.f4;
    uint8_t *l_408 = &g_81.f3;
    int32_t *l_410 = &g_4;
    int32_t **l_409 = &l_410;
    int32_t l_439 = 0x2151F2F3;
    (*l_409) = ((*g_107) = ((safe_mul_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u((((*l_408) = (safe_lshift_func_uint8_t_u_s((+(l_391 ^ (safe_add_func_uint16_t_u_u((((*l_400) = (safe_div_func_uint32_t_u_u(((*l_397) = g_194), (safe_div_func_uint16_t_u_u(0x39DC, 0xC6EC))))) == ((((g_401 == l_403) <= (((*g_29) = (l_391 > ((safe_sub_func_uint32_t_u_u(0xC14EC5ED, (((+((*l_407) = 0x3D29)) & g_81.f1) > p_23.f1))) , 0x87))) & 0x9E5F)) <= p_23.f3) && (-5))), l_391)))), 1))) , g_81.f0), p_23.f4)) | l_391) , g_30) ^ 0x47), l_391)) , p_24));
    if (g_190)
    {
        int8_t *l_415 = &g_193;
        uint16_t **l_416 = (void*)0;
        int32_t l_432 = 0x4375D102;
        int32_t l_435 = 1;
        struct S0 *l_441 = (void*)0;
        struct S0 ****l_442 = &g_401;
        int16_t l_447 = 0x3B4D;
        uint16_t l_496 = 0xEE58;
        uint32_t l_529 = 0xE8A2A857;
        if ((safe_lshift_func_uint8_t_u_s((((*l_408) = ((p_23.f3 >= p_23.f3) || (~((*l_407) = (~0x8871E699))))) && p_23.f2), ((*l_415) = (p_23.f3 >= p_23.f1)))))
        {
            uint16_t ***l_417 = &l_416;
            (*l_417) = l_416;
        }
        else
        {
            int32_t ***l_426 = &l_409;
            uint32_t *l_427 = &g_428;
            struct S0 l_431 = {0xD8E95D11,-1,1U,0U,0x01F7};
            int16_t *l_436 = (void*)0;
            int16_t *l_437 = &l_391;
            int16_t *l_438 = &g_101;
            uint8_t l_472 = 0x2B;
            int32_t *l_486 = &l_431.f0;
            if ((((safe_rshift_func_int16_t_s_u(((*l_438) = ((*l_437) = ((*g_29) = (((*l_415) = (((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((*l_427) = (g_424 != ((*l_426) = g_425))) , (safe_mul_func_int16_t_s_s((l_432 = (((*g_341) = l_431) , l_432)), (0xBF0DDE07 > (safe_mul_func_uint16_t_u_u(g_4, 0x1A18)))))) && g_197), 7)), ((*g_29) | p_23.f1))) != 0x2E) <= l_435)) || g_104)))), g_104)) ^ 0xA966) != l_439))
            {
                int8_t l_440 = 0xE9;
                struct S0 l_448 = {0xA64D3B09,0x29ADE397,0xF2E56CC4,0U,0xF087};
                uint8_t l_471 = 0x07;
                uint32_t *l_512 = &g_81.f2;
                (*g_425) = (p_23 , (*g_107));
                if (((((((1 != ((safe_mul_func_int8_t_s_s((((void*)0 == &g_108) & 0xF6E22872), l_440)) <= p_23.f2)) & ((*l_397) = ((((safe_sub_func_int32_t_s_s((p_23 , l_447), 0xB74991E2)) >= l_447) && p_23.f0) , g_81.f3))) , l_447) >= l_440) , &g_193) != (void*)0))
                {
                    int32_t ****l_466 = (void*)0;
                    int32_t *****l_465 = &l_466;
                    int32_t l_473 = 0xF2732374;
                    (*g_341) = l_448;
                    p_23.f0 = (((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((*l_438) = (((*l_465) = &l_426) == &l_426)), (((safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((((((*g_341) , ((*l_400) = p_21)) && ((*l_400) = g_66)) , &g_108) != ((0xAC5F6222 == l_471) , (void*)0)) || 4) != 255U), g_197)) > l_472), g_197)) , (-8)) > p_23.f4))), (-6))), 0)) <= g_104), (*g_29))), p_21)), 3)) || l_473) && (*g_29)), g_81.f0)) < 1), (*g_29))) , g_193) , l_435);
                }
                else
                {
                    int32_t *l_487 = &l_448.f1;
                    int32_t **l_488 = (void*)0;
                    int32_t **l_489 = &l_487;
                    uint16_t **l_494 = &l_400;
                    int8_t *l_495 = &g_197;
                    struct S0 l_531 = {0x902C0683,1,0x86FEFB1D,247U,0x92F3};
                    if ((safe_mul_func_uint16_t_u_u(((g_190 = (((safe_mod_func_int16_t_s_s(((*g_341) , ((((((*l_486) = (safe_div_func_int8_t_s_s(((*l_495) = ((l_448.f4 > (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((((*l_408) = (((p_23.f4 >= g_4) ^ ((*l_415) = (((0x3A8C0956 && (safe_add_func_int8_t_s_s(((g_190 , ((*l_407) = ((((*g_107) = l_486) == ((*l_489) = l_487)) > (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((&l_407 != l_494), l_435)), (*g_29)))))) != (-9)), p_23.f4))) ^ l_447) != 247U))) | p_23.f3)) , l_442) == l_442), 1U)), 7))) , 0x0A)), 0x4B))) || l_496) || g_30) || g_81.f3) & l_496)), 0x3E2D)) ^ 0x9B) | g_81.f0)) || (*g_29)), 0x7F7F)))
                    {
                        uint8_t l_497 = 0xB1;
                        (**l_489) = (((l_497 || (g_81.f0 && p_21)) , ((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_432 > ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_104, (safe_sub_func_int16_t_s_s(l_435, ((-1) | ((((l_512 = l_486) != p_24) || g_104) , p_23.f4)))))) , 0x5DC3), p_23.f4)), 7)) , 2U)) & p_23.f3), 5)), l_497)), g_194)) < (*g_29))) == 0xEE);
                        return p_23;
                    }
                    else
                    {
                        uint16_t l_528 = 0U;
                        int32_t l_530 = 0x1A67B9EC;
                        struct S0 *l_532 = &l_531;
                        (*g_341) = func_47((p_23.f2 > (0x3B | l_496)), &g_101);
                        (*l_532) = ((*g_341) = l_531);
                    }
                }
            }
            else
            {
                (*l_409) = (p_23.f1 , (*g_424));
                return p_23;
            }
            g_81.f0 = l_435;
        }
    }
    else
    {
        struct S0 *l_533 = (void*)0;
        g_534 = l_533;
    }
    return p_23;
}
static int16_t * func_25(int16_t * p_26, int32_t p_27, int32_t p_28)
{
    int16_t l_50 = 0x1F20;
    uint8_t *l_65 = &g_66;
    uint16_t l_229 = 0x8653;
    int32_t l_236 = 1;
    struct S0 *l_258 = &g_81;
    uint32_t *l_277 = &g_81.f2;
    uint32_t **l_305 = &l_277;
    uint32_t l_322 = 0xF4A132B8;
    struct S0 **l_368 = &g_341;
    struct S0 ***l_367 = &l_368;
    uint32_t *l_374 = &l_322;
    uint32_t **l_373 = &l_374;
    uint32_t *l_376 = &l_322;
    uint32_t **l_375 = &l_376;
    uint8_t *l_377 = &g_81.f3;
    uint8_t **l_378 = &l_65;
    uint8_t *l_380 = (void*)0;
    uint8_t **l_379 = &l_380;
    int16_t *l_381 = (void*)0;
    if ((safe_div_func_uint16_t_u_u(func_42(p_27, func_47(l_50, (((*l_65) = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((func_55(&p_28, &p_27) && ((safe_mod_func_uint32_t_u_u(((((l_50 < (~((l_50 , ((void*)0 != &g_30)) == p_28))) , p_28) , &g_4) == &p_27), g_30)) & (*g_29))), l_50)), g_4))) , &l_50)), l_50, g_4), 0x106E)))
    {
        int32_t *l_235 = (void*)0;
        if ((*g_108))
        {
            int32_t l_217 = 0xB0CDC420;
            int32_t **l_224 = &g_108;
            (**g_107) = (safe_lshift_func_int16_t_s_s((l_217 ^ ((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(0U, ((void*)0 == l_224))) > (0x775CB63E >= (func_47((**l_224), &g_104) , (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((l_229 | 0x72), (-9))), 2))))), p_28)) == g_193), 11)) , p_28)), (*p_26)));
        }
        else
        {
            uint8_t l_232 = 0x07;
            for (g_197 = 0; (g_197 >= (-29)); g_197 = safe_sub_func_uint8_t_u_u(g_197, 6))
            {
                if (l_232)
                    break;
                if (l_229)
                    break;
            }
            for (l_229 = 0; (l_229 <= 56); l_229 = safe_add_func_uint16_t_u_u(l_229, 2))
            {
                l_235 = (void*)0;
                (*g_107) = &p_27;
                (*g_107) = (*g_107);
            }
        }
        l_236 = l_229;
    }
    else
    {
        struct S0 l_237 = {-1,0x59ABB1F7,0x35F2194A,255U,65535U};
        struct S0 *l_238 = (void*)0;
        struct S0 *l_239 = &l_237;
        uint32_t l_293 = 4294967290U;
        uint32_t *l_301 = &l_237.f2;
        uint8_t *l_312 = &l_237.f3;
        uint16_t l_324 = 0x19D5;
        int16_t *l_338 = &g_30;
        int32_t ***l_359 = &g_107;
        (*l_239) = (l_229 , l_237);
        for (g_197 = 29; (g_197 <= 25); g_197--)
        {
            int16_t l_244 = 0;
            struct S0 **l_259 = &l_258;
            uint16_t *l_266 = &g_81.f4;
            uint8_t *l_269 = &l_237.f3;
            uint32_t **l_278 = &l_277;
            uint16_t *l_282 = &g_190;
            uint8_t **l_303 = &l_65;
            uint8_t ***l_302 = &l_303;
            int32_t *l_304 = &l_236;
            uint32_t l_366 = 4294967295U;
        }
    }
    (*g_108) = (safe_sub_func_uint16_t_u_u(p_27, (((*l_373) = &l_322) == ((*l_375) = &l_322))));
    (**g_107) = (((*l_378) = l_377) == ((*l_379) = l_377));
    return l_381;
}
static uint16_t func_42(int32_t p_43, struct S0 p_44, int8_t p_45, uint16_t p_46)
{
    uint32_t l_95 = 6U;
    int32_t *l_106 = (void*)0;
    int32_t **l_105 = &l_106;
    uint8_t *l_183 = &g_81.f3;
    uint8_t **l_182 = &l_183;
    int8_t l_214 = 0x89;
    for (g_81.f1 = 0; (g_81.f1 <= 24); ++g_81.f1)
    {
        uint8_t l_90 = 0x0E;
        int16_t *l_91 = (void*)0;
        int16_t *l_93 = &g_94;
        int16_t *l_100 = &g_101;
        (**g_107) = (safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0x224F168E, ((((g_104 = (safe_rshift_func_int16_t_s_u((l_90 , ((*l_93) = (g_92 = ((*g_29) = 0xFCE3)))), ((((l_95 == (safe_lshift_func_int16_t_s_u(0x8F34, 13))) > (safe_div_func_uint8_t_u_u(((p_44.f4 , (void*)0) == l_100), (safe_mod_func_uint16_t_u_u(0xA129, (-5)))))) & 254U) ^ 4294967289U)))) & (-1)) , l_105) != g_107))), 0xDE));
    }
    for (p_44.f2 = 0; (p_44.f2 > 31); p_44.f2++)
    {
        struct S0 l_111 = {-1,0xDD72F777,4294967289U,0x10,0x5C77};
        struct S0 *l_112 = (void*)0;
        g_81 = l_111;
        (*l_105) = (void*)0;
    }
    for (p_45 = 9; (p_45 > (-8)); p_45--)
    {
        int32_t ***l_115 = &l_105;
        uint8_t *l_121 = (void*)0;
        int32_t l_131 = (-1);
        struct S0 l_198 = {0xD5F48091,2,0x7D859D8D,0x1D,0U};
        (*l_115) = &l_106;
        (*l_105) = (*g_107);
        (*l_105) = (p_44.f1 , (*l_105));
        for (p_44.f1 = 0; (p_44.f1 != 12); ++p_44.f1)
        {
            int32_t *l_118 = &g_81.f1;
            int16_t *l_186 = &g_30;
            int32_t l_195 = 5;
            struct S0 l_213 = {-1,4,1U,0x1E,65535U};
            l_118 = (void*)0;
            for (p_44.f3 = (-30); (p_44.f3 > 34); ++p_44.f3)
            {
                uint8_t *l_122 = &g_66;
                uint8_t **l_123 = &l_122;
                int32_t *l_130 = &g_81.f1;
                (***l_115) = (l_121 != ((*l_123) = l_122));
                (*l_106) = p_43;
                if (((((safe_div_func_int16_t_s_s((((***l_115) = ((((p_44.f2 == ((-1) && 0xFA23)) ^ (*g_29)) , &g_81) != &g_81)) > g_66), (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(((l_130 == l_118) , 255U), p_45)) | (*g_29)), 3)))) , g_92) == l_131) > 0x8E95))
                {
                    uint32_t *l_166 = &l_95;
                    int8_t *l_184 = (void*)0;
                    int8_t *l_185 = &g_92;
                    uint32_t *l_187 = &g_81.f2;
                    uint16_t *l_188 = &g_81.f4;
                    uint16_t *l_189 = &g_190;
                    int32_t l_191 = 0x8DDD0EBF;
                    int8_t *l_192 = &g_193;
                    uint32_t *l_196 = (void*)0;
                    (*l_130) = (safe_mod_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((0U < (safe_mul_func_uint16_t_u_u(1U, (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((g_197 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(p_44.f4, (((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((*l_130), (safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_44.f3, (((*l_166) = g_104) , ((g_194 = (!(!((safe_rshift_func_uint16_t_u_s(((((*l_192) = (!(safe_div_func_int8_t_s_s(((((*l_189) = (safe_mod_func_uint16_t_u_u(((*l_188) = ((((*l_187) = ((((safe_div_func_uint8_t_u_u(((*l_122) = 0xEB), ((*l_185) = (safe_add_func_int16_t_s_s(((~(safe_unary_minus_func_uint8_t_u(((((**l_105) = ((g_81 , (((&l_122 != l_182) ^ (-1)) , (void*)0)) == l_166)) || p_44.f2) == g_81.f2)))) , (*g_29)), (*g_29)))))) || p_44.f4) , l_186) == &g_94)) & p_44.f2) | (*g_29))), 0x46C8))) | (*g_29)) ^ l_191), p_44.f2)))) & 0U) > (-1)), 11)) != p_43)))) ^ g_81.f3)))), p_44.f4)) != 0x1525), (-5))))) , l_191) && 0U), 7U)), l_195)) != g_30) && p_44.f4))) ^ 3U) < l_191), 5)), (*l_130)))), 0x61C211F7)), g_81.f1))))), g_104)), g_104)), (*g_29))) , g_94) , p_44.f1), 0xDD));
                    if (p_44.f4)
                    {
                        struct S0 *l_199 = &g_81;
                        (*l_199) = l_198;
                    }
                    else
                    {
                        (*l_130) = ((*g_108) = ((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((l_191 , &p_46) == (void*)0), g_104)), g_81.f0)) < ((*l_189) = 0x01D5)) & ((*g_29) = (safe_div_func_int32_t_s_s((g_197 > (safe_sub_func_int8_t_s_s(0x54, ((((*l_122) = ((!(safe_rshift_func_uint16_t_u_u(1U, g_104))) ^ 0xBBD39C2E)) | 0x1F) != p_44.f3)))), 0x9E6B5F6A)))) , 0xCC915B1D));
                    }
                }
                else
                {
                    struct S0 *l_212 = (void*)0;
                    struct S0 **l_211 = &l_212;
                    (*l_211) = &p_44;
                }
                l_213 = p_44;
            }
        }
    }
    (*g_108) = l_214;
    return g_197;
}
static struct S0 func_47(int16_t p_48, int16_t * p_49)
{
    uint8_t *l_67 = &g_66;
    uint16_t l_71 = 0x7E1E;
    int32_t l_76 = 2;
    int32_t *l_78 = (void*)0;
    int32_t **l_77 = &l_78;
    struct S0 l_79 = {0x2F47D66A,0x358B9E07,9U,0x72,0x66C3};
    struct S0 *l_80 = (void*)0;
    g_81 = ((((((*l_67) = p_48) > 1U) , ((!(safe_mul_func_uint16_t_u_u(((l_71 ^ ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_76 = 0x0E), ((0 || ((((void*)0 == l_77) , 0xE378) & (*g_29))) != 1U))), 0x5C01)) , g_30)) != 0), (*p_49)))) , (void*)0)) == (*l_77)) , l_79);
    return g_81;
}
static uint16_t func_55(int32_t * p_56, int32_t * p_57)
{
    int32_t *l_60 = &g_4;
    for (g_30 = (-6); (g_30 > (-22)); g_30--)
    {
        int32_t **l_61 = &l_60;
        (*l_61) = l_60;
        (*l_61) = p_56;
        (*l_61) = (void*)0;
        (*p_56) = (*p_56);
    }
    return g_4;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_6;
    csmith_sink_ = g_8;
    csmith_sink_ = g_30;
    csmith_sink_ = g_66;
    csmith_sink_ = g_81.f0;
    csmith_sink_ = g_81.f1;
    csmith_sink_ = g_81.f2;
    csmith_sink_ = g_81.f3;
    csmith_sink_ = g_81.f4;
    csmith_sink_ = g_92;
    csmith_sink_ = g_94;
    csmith_sink_ = g_101;
    csmith_sink_ = g_104;
    csmith_sink_ = g_190;
    csmith_sink_ = g_193;
    csmith_sink_ = g_194;
    csmith_sink_ = g_197;
    csmith_sink_ = g_428;
    csmith_sink_ = g_709;
    platform_main_end(0,0);
    return 0;
}
