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
static int32_t g_14 = 0x1A9565E0L;
static int32_t *g_13 = &g_14;
static uint16_t g_90 = 0x8CF4L;
static int32_t ****g_91 = (void*)0;
static int32_t g_94 = (-1L);
static int32_t *g_225 = (void*)0;
static int16_t g_229 = 0xE665L;
static int32_t ***g_281 = (void*)0;
static int32_t *****g_726 = &g_91;
static int16_t g_814 = (-1L);
static const int32_t *g_877 = (void*)0;
static const int32_t **g_876 = &g_877;
inline static uint16_t func_1(void);
inline static int32_t * func_2(int16_t p_3, int32_t * p_4, int32_t * p_5, int32_t p_6, int32_t p_7);
static int16_t func_8(int32_t * p_9, int32_t * p_10, uint32_t p_11, const int32_t * p_12);
inline static int32_t * func_15(int16_t p_16, int32_t * p_17, int8_t p_18, uint32_t p_19);
inline static int8_t func_22(int32_t * p_23, uint8_t p_24, int32_t p_25, const uint8_t p_26);
inline static const int16_t func_32(int32_t * p_33, uint32_t p_34);
static uint16_t func_38(int32_t * p_39, int32_t * p_40, int32_t * const p_41);
static int32_t * func_42(uint8_t p_43, int32_t * p_44, uint16_t p_45);
static int16_t func_50(int32_t * p_51);
static int32_t * func_52(int8_t p_53, uint32_t p_54, uint16_t p_55, uint16_t p_56, int8_t p_57);
inline static uint16_t func_1(void)
{
    uint8_t l_20 = 0x75L;
    int32_t *l_21 = (void*)0;
    const int32_t l_27 = 0x884CB8F6L;
    int32_t **l_891 = &l_21;
    (*l_891) = func_2(func_8(g_13, func_15(l_20, l_21, func_22(l_21, g_14, (*g_13), l_27), (safe_mod_func_uint32_t_u_u((0xD834L > 0x39FAL), (-9L)))), l_20, l_21), l_21, l_21, g_229, g_229);
    return g_94;
}
inline static int32_t * func_2(int16_t p_3, int32_t * p_4, int32_t * p_5, int32_t p_6, int32_t p_7)
{
    int8_t l_535 = 4L;
    int32_t ***l_548 = (void*)0;
    uint32_t l_681 = 0UL;
    const int32_t *l_695 = (void*)0;
    int32_t l_781 = 0x7E6CD3EAL;
    uint32_t l_827 = 0xB85AA118L;
    const int32_t ***l_878 = (void*)0;
    const int32_t ***l_879 = &g_876;
    const int32_t *l_886 = &g_94;
    if ((safe_mod_func_uint16_t_u_u((!0xEEL), l_535)))
    {
        int32_t ** const l_549 = &g_225;
        int32_t ** const **l_555 = (void*)0;
        int32_t ** const ***l_554 = &l_555;
        int32_t *l_602 = &g_94;
        uint32_t l_668 = 0UL;
        uint8_t l_682 = 0x0AL;
        int32_t l_715 = 0xDF65B01AL;
        (*g_225) = ((safe_lshift_func_uint8_t_u_u(p_3, g_90)) ^ (safe_mod_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((((0x3C11021AL | (((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((void*)0 == l_548), 7)) >= (l_549 != &p_4)), ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((l_554 == &l_555) && p_7) > g_94), p_7)), p_6)) <= 4L))), p_3)) & 0x95L) ^ g_229) || 255UL) <= p_3)) | (*g_13)) != p_6), p_7)) == p_6) == (*g_13)), 0xE3961EA5L)));
        p_5 = (*l_549);
        if ((safe_lshift_func_uint16_t_u_s((((((+((safe_add_func_uint8_t_u_u(((((*l_554) == &g_281) | g_90) | (safe_sub_func_int8_t_s_s(0xB5L, (safe_mul_func_int8_t_s_s(((void*)0 != &g_13), (**l_549)))))), (1UL | (**l_549)))) != g_94)) == 0L) || (**l_549)) | (-1L)) || p_7), (**l_549))))
        {
            int32_t **l_570 = &g_13;
            int32_t ***l_569 = &l_570;
            if (((0xCE4DL & p_7) == p_7))
            {
                int16_t l_577 = 0L;
                int32_t *l_611 = &g_14;
                int32_t *l_612 = &g_14;
                int32_t ****l_614 = &g_281;
                (*g_13) = (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((l_569 != (void*)0), (safe_lshift_func_int16_t_s_s(g_94, p_6)))) && ((safe_rshift_func_int8_t_s_s(((**l_549) && (((((**l_549) != 65527UL) & (safe_mod_func_uint8_t_u_u(g_94, l_577))) & p_7) & p_6)), g_229)) && g_90)) && 6L), p_7));
                (*g_13) = (safe_add_func_uint16_t_u_u((**l_549), ((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(0x45FD41A6L, (p_3 || (g_14 | (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(65535UL, (((void*)0 == &g_91) < (((0x5D77L == (safe_sub_func_uint8_t_u_u(p_3, 0x27L))) > (**l_570)) > 0UL)))), g_14)) != 0x9248L), g_90)))))) > p_6) < (***l_569)), g_14)), (*g_13))), 65532UL)) == p_7)));
                if (((safe_rshift_func_uint8_t_u_u((p_3 | ((void*)0 != &l_569)), (0x227B02F8L ^ p_3))) <= (((safe_sub_func_int32_t_s_s((&p_6 == l_602), (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((((*p_5) > ((((((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(p_3, p_6)), 0xA052L)) && g_229) & 0xCBL) <= 0xFAL) <= l_577) >= p_3)) != g_229), g_90)), 0x42B0L)))) & 0UL) && p_7)))
                {
                    (*l_569) = &p_4;
                    (*l_569) = &p_4;
                    (*l_570) = l_611;
                }
                else
                {
                    int32_t ****l_613 = &l_569;
                    (**l_569) = l_612;
                    (*l_570) = (void*)0;
                    (*p_5) = (((l_613 == l_614) >= g_229) > ((g_90 < (p_7 && (safe_lshift_func_uint8_t_u_u(g_94, 7)))) ^ ((!(l_548 != &l_570)) != (-1L))));
                    (**l_569) = &g_14;
                }
                (**l_549) = ((&p_6 == &p_7) || ((0x9EL && (safe_mod_func_uint16_t_u_u(g_94, ((0x29L && (g_14 != (*g_13))) | (safe_mul_func_int8_t_s_s((g_229 != (0x3AD60E80L != 0xDC9CFD18L)), 7L)))))) <= 0xC4L));
            }
            else
            {
                int32_t *l_630 = &g_94;
                (*l_549) = (**l_569);
                l_630 = &p_6;
            }
            for (p_6 = 0; (p_6 > 7); p_6 = safe_add_func_uint16_t_u_u(p_6, 4))
            {
                int32_t l_651 = 7L;
                int32_t l_669 = 0L;
                (**l_569) = (*l_570);
                if (((safe_rshift_func_int8_t_s_u((p_6 | g_90), (safe_rshift_func_uint8_t_u_s(p_7, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(p_7, (safe_mod_func_uint16_t_u_u((0x0E51L <= ((safe_lshift_func_uint16_t_u_s(((0UL & (&p_7 == (void*)0)) >= (safe_sub_func_int16_t_s_s(p_6, l_651))), g_94)) && p_7)), p_3)))), 3)) > l_651), g_94)), p_7)))))) && p_7))
                {
                    int32_t *l_652 = &g_94;
                    (*l_570) = l_652;
                    if ((*g_225))
                        continue;
                    l_669 = (g_14 == (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((5L | g_94), ((+(&p_4 != (void*)0)) > (safe_mul_func_uint16_t_u_u(p_6, (safe_mod_func_uint8_t_u_u(0x4CL, ((g_14 >= (((0xFDL & g_90) >= (*l_602)) < p_3)) && g_94)))))))) ^ l_668), 5)), 7)) < (*p_5)) & g_14), 13)), p_6)));
                }
                else
                {
                    int32_t l_674 = 0x29B64416L;
                    (*l_602) = (safe_unary_minus_func_int32_t_s((+(safe_sub_func_uint8_t_u_u(l_674, 0UL)))));
                }
                (*l_549) = &p_7;
                if ((safe_mul_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((((p_6 ^ 4294967288UL) & p_3) & g_94), (((safe_lshift_func_int8_t_s_u(l_681, (l_682 | (safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u((&l_669 != (**l_569)), (((((void*)0 == &p_4) >= g_94) == 0x1874L) == g_90))) != p_3) | g_90) & 4294967290UL), 0x18A2L))))) <= p_3) == g_14))) || (*g_225)) & (**l_549)), 1UL)))
                {
                    int32_t *l_687 = &g_94;
                    p_5 = &p_6;
                }
                else
                {
                    int16_t l_724 = 0x37A3L;
                    int32_t ***** const l_725 = &g_91;
                    g_91 = (void*)0;
                    for (g_90 = 0; (g_90 <= 6); g_90 = safe_add_func_int16_t_s_s(g_90, 6))
                    {
                        uint16_t l_719 = 0x24C7L;
                        (**l_569) = (*l_549);
                        (**l_549) = (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(1L, (safe_rshift_func_int8_t_s_s(p_6, l_715)))) > ((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(g_14)) <= l_719), ((((safe_add_func_uint8_t_u_u((((l_719 < (safe_sub_func_uint16_t_u_u(g_14, (((&g_91 != &g_91) || l_724) < l_651)))) < p_3) ^ l_669), 0xE2L)) == 1UL) <= (-1L)) <= 254UL))) ^ p_6)), 0x55L));
                        if (l_719)
                            break;
                        g_726 = l_725;
                    }
                }
            }
            (*p_5) = ((safe_lshift_func_uint8_t_u_u(p_6, 4)) >= (&l_570 != (void*)0));
        }
        else
        {
            int32_t *** const *l_730 = &g_281;
            int32_t *** const **l_729 = &l_730;
            (*g_13) = ((-1L) != (&g_91 == l_729));
        }
        p_5 = (*l_549);
    }
    else
    {
        int32_t * const *l_736 = &g_225;
        int32_t * const ** const l_735 = &l_736;
        int32_t * const ** const *l_734 = &l_735;
        int32_t * const ** const **l_733 = &l_734;
        uint8_t l_774 = 1UL;
        int32_t *l_777 = &g_94;
        int32_t *l_790 = &g_94;
        uint32_t l_791 = 6UL;
        uint32_t l_828 = 1UL;
        if ((((g_14 && ((safe_add_func_uint16_t_u_u((&g_91 == l_733), (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((((safe_mod_func_int8_t_s_s((9UL <= (safe_lshift_func_int8_t_s_s(((*****l_733) <= (((0x6C83L ^ (safe_rshift_func_int8_t_s_s(1L, 7))) != 0xF3E48AECL) > g_94)), p_3))), (-1L))) <= g_229) > g_94) == g_90) > 0x52F21D3CL), g_14)), g_229)))) || (***l_735))) | (-7L)) < p_3))
        {
            for (g_90 = 0; (g_90 <= 45); g_90 = safe_add_func_uint16_t_u_u(g_90, 9))
            {
                int32_t ***l_760 = (void*)0;
                if ((safe_sub_func_uint32_t_u_u(p_7, g_94)))
                {
                    int32_t * const ** const l_751 = &l_736;
                    p_5 = func_42(g_90, func_52(p_3, ((&l_548 == (void*)0) | ((l_751 != (*l_734)) & 1UL)), g_94, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_760 != (*l_734)), 5)), (****l_734))), g_14)), p_3)), p_7), p_7);
                    (****l_734) = (*g_225);
                }
                else
                {
                    int32_t **l_764 = &g_225;
                    int32_t ***l_763 = &l_764;
                    (***l_735) = (safe_rshift_func_uint16_t_u_s(((void*)0 != l_763), (safe_add_func_uint8_t_u_u((g_14 == p_6), (safe_rshift_func_int16_t_s_s(((*l_764) != (void*)0), ((safe_sub_func_uint16_t_u_u(((((&g_91 == &g_91) ^ (safe_mod_func_uint8_t_u_u((~(((void*)0 == &g_91) <= g_94)), g_14))) != 0xB0L) < 0xF3L), g_94)) ^ g_94)))))));
                    if (l_774)
                        break;
                    for (l_681 = (-8); (l_681 != 15); l_681 = safe_add_func_uint8_t_u_u(l_681, 1))
                    {
                        p_4 = func_15((*****l_733), l_777, (safe_unary_minus_func_uint32_t_u((((void*)0 != (*l_734)) < p_6))), g_94);
                    }
                    l_781 = (safe_mul_func_int16_t_s_s(p_6, 0x6DFBL));
                }
            }
        }
        else
        {
            const int32_t **l_785 = &l_695;
            const int32_t ***l_784 = &l_785;
            int32_t l_813 = 1L;
            uint16_t l_829 = 65535UL;
            (**l_784) = func_15(((g_281 != g_281) | (safe_lshift_func_int8_t_s_s((((void*)0 != l_784) < ((safe_add_func_uint8_t_u_u(g_90, (*l_777))) == (safe_mul_func_int8_t_s_s(g_14, p_3)))), 4))), l_790, l_791, g_90);
            (*l_785) = func_52(p_7, (safe_add_func_uint8_t_u_u(((void*)0 == &g_91), ((g_14 & (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((**l_785), (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((~0xB0EAL) == (p_7 | (-1L))), ((safe_mod_func_uint8_t_u_u(p_7, 0xE3L)) == g_229))), g_90)), g_94)), g_94)), (***l_784))) > p_7) >= l_813))), (*l_777))), 7))) != (*l_790)))), g_14, g_814, g_90);
            (*l_785) = func_52((safe_unary_minus_func_int16_t_s(((~p_6) && (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((*g_13) && ((((safe_mul_func_int8_t_s_s((4294967290UL & ((-1L) == (safe_mul_func_uint8_t_u_u((p_7 | g_14), p_7)))), ((((&p_5 == (void*)0) != 1UL) > (**l_785)) != p_7))) && 0x99078D1FL) & l_827) | (**l_785))), 1)), g_94)), 1L))))), l_828, l_829, g_90, g_814);
        }
        for (l_828 = 0; (l_828 > 49); l_828++)
        {
            uint32_t l_846 = 0UL;
            uint32_t l_847 = 0x94C51FBAL;
            int32_t **l_874 = (void*)0;
            int32_t **l_875 = &l_790;
            p_5 = func_52(((safe_sub_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s(p_7, ((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((**l_733) != (void*)0), (g_94 <= (&l_734 == (void*)0)))) == p_3), (safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s(((0x0DL >= 5UL) != g_14), l_846)) && 1UL) >= 1UL) | (****l_734)), 0xBD7CL)) || p_7), p_6)))) == g_90))) < 1UL) | g_14) && 0x762BL), (*g_13))) == l_847), p_3, l_846, (*l_777), p_3);
            (*p_5) = (((l_846 & (((safe_unary_minus_func_uint8_t_u((((((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((*p_5) <= (((-5L) || (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((!(safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*l_790), (safe_mod_func_int16_t_s_s((****l_734), g_90)))), (0UL < (((safe_mul_func_uint8_t_u_u(g_814, (safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(0xC7DEL, p_7)) || 1UL), l_846)) >= g_814) == p_7), 1)))) == p_6) != l_846))))), 2)), (-10L))), p_7))) && l_847)), l_846)) | 0UL), (***l_735))) < 0xB33DA5E9L) <= g_94) <= p_7) > 0xB8C05A2AL))) > 4294967286UL) > (*p_5))) || p_6) >= 4294967295UL);
            (*l_875) = (***l_734);
        }
    }
    (*l_879) = g_876;
    (*g_876) = (**l_879);
    return &g_14;
}
static int16_t func_8(int32_t * p_9, int32_t * p_10, uint32_t p_11, const int32_t * p_12)
{
    int8_t l_531 = (-9L);
    (*g_13) = (((safe_mod_func_uint32_t_u_u(((((g_14 <= ((&p_10 == &p_12) <= ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u((((void*)0 == p_12) <= (g_94 <= (+(*g_13)))), (&g_91 != (void*)0))) | g_94) != 0x368788BCL), g_14)) ^ p_11))) >= p_11) ^ 0x943D29F5L) ^ p_11), 0xFF6CD7C1L)) >= l_531) && p_11);
    return l_531;
}
inline static int32_t * func_15(int16_t p_16, int32_t * p_17, int8_t p_18, uint32_t p_19)
{
    const int32_t l_371 = 7L;
    int32_t ****l_372 = &g_281;
    const uint32_t l_375 = 1UL;
    int32_t **l_376 = &g_225;
    uint32_t l_493 = 1UL;
    int32_t *l_517 = &g_14;
    (*l_376) = func_52((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(0UL)), 3)), ((((safe_sub_func_int16_t_s_s((((((9UL > 0xC763L) < l_371) & (((l_372 != &g_281) ^ 0L) > ((safe_sub_func_uint32_t_u_u(0xA7560527L, p_16)) == p_19))) == (-1L)) >= g_90), 65526UL)) && 1L) ^ 0xB3F9A5F5L) >= l_375), g_14, l_371, g_90);
    if ((p_18 && ((p_18 > 0x1AL) | ((safe_rshift_func_uint8_t_u_s(g_14, 2)) & (safe_sub_func_int16_t_s_s((&l_372 == &g_91), p_16))))))
    {
        for (g_94 = 0; (g_94 > 7); ++g_94)
        {
            uint8_t l_385 = 0UL;
            (**l_376) = (safe_unary_minus_func_int16_t_s(((~l_385) > (safe_sub_func_uint16_t_u_u(g_94, (0xDBL & 0x46L))))));
            (**l_376) = (g_14 & g_229);
        }
    }
    else
    {
        int32_t **l_396 = &g_13;
        uint32_t l_415 = 0x4C05448FL;
        int32_t * const *l_481 = &g_13;
        int32_t * const **l_480 = &l_481;
        int32_t *l_513 = &g_14;
        uint32_t l_516 = 7UL;
        g_225 = func_52((((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((4UL < p_18), ((safe_add_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(((void*)0 != l_396), (**l_396))) && 65535UL) >= ((safe_sub_func_uint16_t_u_u((**l_396), ((safe_rshift_func_uint8_t_u_s((0x3445A74AL || ((*l_376) == (void*)0)), 1)) | p_18))) || g_229)), 0x91L)) | g_94))), p_19)) != 0x0344L) == g_90), g_229, g_229, p_19, g_94);
        if ((**l_396))
        {
            int32_t l_407 = 0xC2F3897FL;
            int32_t * const *l_435 = &g_13;
            int32_t * const **l_434 = &l_435;
            int32_t * const ***l_433 = &l_434;
            int32_t *l_470 = &g_14;
            uint32_t l_482 = 2UL;
            for (p_16 = (-15); (p_16 <= (-26)); --p_16)
            {
                uint32_t l_409 = 0x8AE991FCL;
                (*l_376) = p_17;
                (**l_396) = (0x9F472009L | ((safe_rshift_func_int16_t_s_u(p_16, (l_407 & l_407))) && (!(-2L))));
                (*l_376) = func_52(p_18, g_94, p_18, l_409, (((((safe_mul_func_uint16_t_u_u((+0xFD79L), l_407)) | (safe_lshift_func_uint16_t_u_s((g_90 >= 0x83L), g_229))) && l_415) && 0x1587L) ^ p_19));
            }
            if (((safe_mul_func_int8_t_s_s(0x46L, g_90)) & (safe_sub_func_uint16_t_u_u((g_94 != (&g_91 == (void*)0)), (((~(safe_add_func_uint8_t_u_u(0xC9L, (**l_376)))) || (((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((**l_376), (safe_mul_func_int16_t_s_s((**l_376), 6L)))), 1)) <= p_18), g_90)) | p_16) > 0xEFL)) || g_94)))))
            {
                uint16_t l_436 = 65528UL;
                l_436 = (safe_rshift_func_int8_t_s_u((l_433 != &g_281), 7));
            }
            else
            {
                uint32_t l_439 = 7UL;
                int32_t *l_488 = &g_14;
                (*g_225) = (safe_add_func_int16_t_s_s(p_18, ((l_439 < (6L | 0x04CDL)) > ((safe_add_func_int8_t_s_s((((safe_add_func_int8_t_s_s((g_94 >= ((****l_433) >= l_439)), (safe_mul_func_uint8_t_u_u((p_19 > (**l_396)), 255UL)))) | p_19) | (**l_396)), (**l_396))) <= (-1L)))));
                if ((safe_mod_func_uint8_t_u_u((0x143FL && ((safe_mod_func_int8_t_s_s((((((**l_396) ^ ((safe_sub_func_int32_t_s_s(0xC502A78DL, (p_19 ^ ((((l_439 == ((!(+((0xA5L & (0x22L > ((**l_396) >= 0xF5B5L))) != (**l_396)))) ^ p_16)) > 0xA5L) & p_18) ^ (**l_376))))) < g_90)) <= 0L) && p_18) && p_19), 0xFAL)) || p_19)), p_18)))
                {
                    (****l_433) = (safe_mul_func_int16_t_s_s(g_229, (safe_rshift_func_uint16_t_u_s((g_90 || 6UL), 10))));
                    (*g_13) = (&g_91 != (void*)0);
                }
                else
                {
                    int8_t l_463 = (-6L);
                    (*g_225) = (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u((p_18 > l_463), (p_18 < l_463)))));
                    if ((0xEF98C274L > 4294967287UL))
                    {
                        uint32_t l_475 = 8UL;
                        (****l_433) = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_439, (safe_rshift_func_int8_t_s_u((((void*)0 != &g_91) >= (0x32F5L >= 0x3813L)), 3)))), (***l_434)));
                        l_470 = l_470;
                        (***l_434) = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((((l_463 || (((*l_470) && (l_463 | ((-9L) == g_90))) || (l_475 != p_19))) < (p_16 | ((0UL != 65535UL) || (-1L)))) ^ g_94) == g_14), 7)) != g_229), (**l_435)));
                        (*l_376) = func_52((safe_rshift_func_uint8_t_u_u(((l_480 == (void*)0) == ((l_482 != (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_90, (safe_unary_minus_func_uint8_t_u((l_475 == (0x4FL == p_19)))))), 12))) == (((g_90 < ((l_372 != (void*)0) <= p_18)) < 65535UL) & p_16))), l_475)), p_19, l_439, g_229, p_16);
                    }
                    else
                    {
                        return (*l_396);
                    }
                }
                (*l_376) = l_488;
            }
            (*l_376) = func_42((*l_470), p_17, (**l_396));
        }
        else
        {
            int8_t l_508 = 0x09L;
            for (p_16 = 0; (p_16 > 25); p_16++)
            {
                for (p_18 = 15; (p_18 < (-4)); p_18 = safe_sub_func_uint8_t_u_u(p_18, 8))
                {
                    (*l_376) = p_17;
                }
                p_17 = &g_94;
                if (l_493)
                    continue;
                (*l_376) = func_52(((safe_mul_func_int16_t_s_s((((**l_396) >= (p_19 || p_19)) <= (g_94 == (((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((void*)0 != &g_91) <= ((safe_sub_func_uint32_t_u_u((0UL | (p_18 == (safe_add_func_int16_t_s_s(((*g_13) > 0x18116297L), 0xC19DL)))), g_90)) <= (**l_396))), 255UL)) && (***l_480)), p_16)) != p_16) & g_14))), g_14)) != p_19), g_94, g_90, p_18, g_14);
            }
            (*l_376) = func_52((0x40L ^ (p_17 != (*l_396))), ((safe_mod_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(l_508, (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(((void*)0 != l_513), p_18)) ^ (~((~((p_19 | (((&l_480 != (void*)0) & g_229) ^ p_19)) || g_94)) >= p_18))) | (**l_481)), p_16)))) > p_19), (-1L))) != 0x8E0BD70EL), g_229, l_516, p_19);
            (*l_376) = func_52((**l_396), (*l_513), g_229, (l_508 == 0xC20E41F5L), p_16);
        }
        p_17 = l_517;
        (**l_376) = ((safe_rshift_func_int16_t_s_u(1L, 13)) != ((((safe_mod_func_int16_t_s_s((0x7295ACF0L >= g_90), p_16)) != ((+(((p_18 < (&g_91 != (void*)0)) >= (~((0x93669B76L > (((void*)0 == &l_480) <= 0xA3C9L)) || g_94))) < g_14)) & p_18)) != (*l_513)) || 255UL));
    }
    return p_17;
}
inline static int8_t func_22(int32_t * p_23, uint8_t p_24, int32_t p_25, const uint8_t p_26)
{
    int32_t *l_35 = &g_14;
    int32_t ****l_363 = &g_281;
    int32_t *****l_362 = &l_363;
    (*l_35) = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((func_32(l_35, g_14) == (0UL || ((void*)0 != l_362))), 5)), 7));
    return p_25;
}
inline static const int16_t func_32(int32_t * p_33, uint32_t p_34)
{
    int32_t *l_36 = &g_14;
    int32_t *l_37 = (void*)0;
    uint8_t l_66 = 9UL;
    int32_t * const l_93 = &g_94;
    const int32_t *l_188 = (void*)0;
    int32_t ** const l_192 = (void*)0;
    int32_t ** const *l_191 = &l_192;
    int32_t ** const **l_190 = &l_191;
    int32_t ** const ***l_189 = &l_190;
    int16_t l_258 = 0x0439L;
    int32_t *l_355 = (void*)0;
    (*g_13) = ((l_36 == l_37) <= (func_38(func_42(((((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(func_50(func_52(((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_14, g_14)), (l_36 != p_33))), 1)) ^ (safe_mul_func_int16_t_s_s(l_66, ((p_34 < 255UL) & 0x6ED7L)))) < 0x4B79L) >= 0UL), (*l_36), (*l_36), g_14, g_14)), g_90)) <= g_90), p_34)) | 9UL) && p_34) == g_90), l_37, p_34), l_37, l_93) < g_90));
    if (((((~(safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xB0L, 0UL)), (*l_36))), (g_14 & (&l_93 == &p_33))))) & ((safe_add_func_int8_t_s_s(g_94, (safe_add_func_int8_t_s_s(((void*)0 != l_188), p_34)))) != g_14)) == g_90) <= (*l_93)))
    {
        int32_t *****l_193 = &g_91;
        int32_t l_209 = (-6L);
        int32_t *l_210 = &l_209;
        int16_t l_286 = 0x93EDL;
        int32_t **l_301 = &g_225;
        uint32_t l_310 = 18446744073709551615UL;
        if (((l_189 == l_193) < 0xAC06L))
        {
            uint32_t l_194 = 0xDDEF21ECL;
            const int32_t ***l_240 = (void*)0;
            const int32_t ****l_239 = &l_240;
            (*l_36) = l_194;
            (*g_13) = (*g_13);
            for (l_194 = 0; (l_194 != 44); ++l_194)
            {
                (*p_33) = (safe_mod_func_int32_t_s_s(((*p_33) == ((*p_33) == (~(safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((((&g_91 != l_193) || g_90) != ((+((safe_lshift_func_int16_t_s_s(l_194, 11)) || g_14)) ^ 0x37L)) | (safe_add_func_int32_t_s_s((p_34 && 0xE7L), 0x11020B4DL))), l_209)), 10))))), p_34));
                l_210 = p_33;
            }
            if ((g_14 <= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((p_34 ^ (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_91 == (void*)0), (safe_lshift_func_int16_t_s_s(0x6E1CL, (p_34 > (*p_33)))))), 3))), (p_33 == (void*)0))), p_34)), g_14))))
            {
                int32_t *l_275 = &g_94;
                if ((safe_lshift_func_int8_t_s_s(p_34, 0)))
                {
                    return p_34;
                }
                else
                {
                    int32_t **l_226 = &l_210;
                    uint32_t l_255 = 6UL;
                    g_225 = (void*)0;
                    (*l_226) = (void*)0;
                    (*l_226) = p_33;
                    if (((safe_mul_func_int16_t_s_s(g_229, (((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((!g_90) && 0xB318L) | (safe_mul_func_int16_t_s_s((l_239 != g_91), ((((0xDB9B34ADL < (*p_33)) <= 0UL) || (safe_rshift_func_int16_t_s_s(0x8287L, 3))) > g_94)))), 0xB190C615L)), (**l_226))), 0x1808F800L)) >= 0x6FL) == (**l_226)))) || g_90))
                    {
                        uint32_t l_249 = 0x08A47727L;
                        (*g_13) = ((void*)0 != (*l_190));
                        (*l_36) = (safe_lshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((*p_33) | (((65529UL ^ (safe_add_func_int8_t_s_s((p_34 <= l_249), ((*p_33) ^ (safe_rshift_func_int8_t_s_s(1L, 5)))))) <= 250UL) == (~0xD107L))), (safe_mod_func_int32_t_s_s(0x8C3BF28DL, p_34)))) || g_229) && (-3L)), l_255));
                        return g_229;
                    }
                    else
                    {
                        (*p_33) = 0xCB84BFDFL;
                        (*l_226) = &g_14;
                        p_33 = func_42(g_90, p_33, g_94);
                        (*g_13) = (*p_33);
                    }
                }
                l_275 = func_42(((safe_mul_func_int8_t_s_s((l_258 | g_229), (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(((0x7D67L < (g_14 ^ (safe_add_func_int16_t_s_s(0x5F00L, (*l_210))))) >= 9L), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_34 || g_14), 3)), 7UL)))) & 4L), (*l_93))) >= (-3L)), 5L)) && 0x60FA43BBL), 10)), g_14)))) > 0x9F115A30L), l_275, p_34);
                (*l_210) = (((safe_add_func_int16_t_s_s(((0x57383A17L >= (~(safe_lshift_func_uint8_t_u_s((((void*)0 == g_281) != (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_286 > ((g_94 || (p_34 & (((safe_mul_func_uint8_t_u_u(0x8BL, (9UL > g_94))) && (*p_33)) ^ g_14))) | g_90)), g_90)), 10))), 0)))) <= (*p_33)), g_90)) != g_94) <= g_94);
                (*l_93) = (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint32_t_u((g_281 != (void*)0))))), ((void*)0 == (*l_193)))) ^ (g_14 ^ ((p_34 < (safe_mul_func_int16_t_s_s(((void*)0 == p_33), (*l_275)))) & p_34))), 13));
            }
            else
            {
                const int8_t l_306 = 1L;
                (*l_301) = func_42(g_229, func_42((safe_sub_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s(((void*)0 != l_301), (safe_add_func_int16_t_s_s(g_229, ((safe_lshift_func_int8_t_s_s(l_306, (((~(g_14 ^ ((*g_13) > (safe_sub_func_uint32_t_u_u(p_34, ((void*)0 != g_281)))))) & 0x2959L) >= 0x06L))) && 249UL))))) != p_34) || g_90) || 0xF72DL), g_90)), p_33, l_310), g_90);
            }
        }
        else
        {
            int32_t *****l_322 = (void*)0;
            (*l_93) = (safe_mod_func_uint16_t_u_u(((!0xB6L) < ((safe_mod_func_int32_t_s_s(((p_34 == (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((((((*p_33) == (safe_mul_func_uint16_t_u_u((((void*)0 != l_322) | (safe_add_func_int32_t_s_s((*l_93), (((safe_lshift_func_uint8_t_u_s(255UL, (((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((*l_210) == (+((*l_210) > (*l_93)))), 3)) >= (*g_13)), g_90)) < p_34) >= p_34))) < g_90) ^ p_34)))), g_14))) == 0xD5L) == 0UL) | 0L) == (*l_210)), 0)), g_229))) < 0x83L), 1UL)) & g_94)), g_229));
            p_33 = (void*)0;
        }
        (*l_93) = ((p_34 <= g_14) && (*l_210));
    }
    else
    {
        int32_t **l_332 = &g_225;
        (*l_332) = (void*)0;
        (*l_332) = func_42(g_90, func_52(g_229, (!((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(9UL, (safe_add_func_uint8_t_u_u((((!(((((g_90 ^ (safe_rshift_func_int16_t_s_s((0UL != (g_14 <= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((g_14 ^ (((*p_33) && (*p_33)) < 0xDD0C9CB3L)), p_34)) != 0x2EEBL), p_34)), 3L)), 8)))), 1))) != 0x4DCBL) || 9UL) != 249UL) < 0xD9L)) < (-1L)) > 0xC4744A53L), 0x0CL)))) == (*l_36)), p_34)) & g_229)), p_34, p_34, g_94), g_94);
    }
    p_33 = func_52(((((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((l_355 == p_33), p_34)) != (p_34 & (safe_mul_func_uint8_t_u_u(g_14, (0x172DE909L == p_34))))), g_229)) && (((safe_mul_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(g_229, g_14)) || 65535UL) ^ p_34), p_34)) | (-1L)) | g_94)) <= 0x4BA9F67FL) || g_14), g_14, g_229, p_34, p_34);
    (*g_13) = (*p_33);
    return g_229;
}
static uint16_t func_38(int32_t * p_39, int32_t * p_40, int32_t * const p_41)
{
    int32_t **l_102 = &g_13;
    int32_t ***l_101 = &l_102;
    int32_t *****l_117 = &g_91;
    int32_t l_123 = 0x2CD5B9AAL;
    int32_t *l_125 = &g_94;
    int32_t **l_124 = &l_125;
    uint8_t l_128 = 0x0BL;
    int32_t *****l_129 = &g_91;
    int32_t l_153 = 0xED55ED51L;
    uint32_t l_176 = 0xBC662609L;
    (*l_124) = func_52((~(((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((l_101 != &l_102) >= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((~(((safe_add_func_int32_t_s_s((+(**l_102)), (((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((**l_102), ((((***l_101) <= (safe_mul_func_uint8_t_u_u(((void*)0 == l_117), (+(safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((**l_102) <= (***l_101)) > (**l_102)), 0x6BA864CCL)), g_94)))))) < (-3L)) | (**l_102)))) ^ g_90), l_123)) <= g_90) | g_94))) && (**l_102)) <= 4294967295UL)) > g_94), 9)), 0x7596L))), 13)), 1)))) == g_90) > (***l_101))), (***l_101), (***l_101), (***l_101), (***l_101));
    (*l_124) = func_42(((*p_41) && ((g_91 != g_91) ^ (**l_124))), (**l_101), (0x42L == (g_94 < (safe_add_func_uint16_t_u_u(l_128, ((void*)0 != l_129))))));
    for (g_14 = 0; (g_14 != 23); g_14 = safe_add_func_int32_t_s_s(g_14, 1))
    {
        int32_t l_132 = 0x77EE7E4EL;
        g_94 = l_132;
        for (l_123 = 0; (l_123 >= (-29)); l_123 = safe_sub_func_uint32_t_u_u(l_123, 4))
        {
            const int8_t l_137 = 0xCCL;
            (*p_41) = ((*l_125) <= (((l_137 < 2UL) > (safe_rshift_func_int16_t_s_u(0xEB87L, g_14))) != ((((safe_add_func_int16_t_s_s(g_14, (safe_sub_func_uint32_t_u_u(l_137, l_137)))) ^ (1UL ^ l_132)) <= 8UL) == l_137)));
            (*l_124) = func_42(l_137, p_39, l_137);
        }
        (*p_41) = (*p_39);
        if ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((g_14 >= (+0xB061D97AL)) && g_90), (**l_124))), (0x35L > (***l_101)))), (0xA3D77AE2L || l_132))))
        {
            (*p_41) = (safe_lshift_func_int8_t_s_u(0xC4L, 1));
        }
        else
        {
            return l_132;
        }
    }
    p_40 = func_52(l_153, (((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0x4235L, (safe_rshift_func_int16_t_s_s((0xFB93L < (safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((((g_94 >= (safe_lshift_func_int16_t_s_u(((((+((**l_102) ^ (~1UL))) > ((**l_102) >= (safe_sub_func_uint32_t_u_u(g_90, (safe_sub_func_int16_t_s_s(((*l_125) & (*l_125)), 65535UL)))))) || g_14) || (-1L)), g_90))) <= 0x6F4DL) <= g_90), g_90)) != g_14), (*l_125)))), (*l_125))))), g_14)), g_14)) >= g_90), (**l_124))) <= 0xED60BA8BL) && (-7L)), (**l_102), g_90, l_176);
    return g_90;
}
static int32_t * func_42(uint8_t p_43, int32_t * p_44, uint16_t p_45)
{
    int32_t *****l_92 = &g_91;
    (*l_92) = g_91;
    return &g_14;
}
static int16_t func_50(int32_t * p_51)
{
    int8_t l_77 = 0xE8L;
    int32_t l_89 = 0xFF1DB06DL;
    l_89 = (safe_rshift_func_int8_t_s_s(l_77, (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_77, 0x6FL)), ((((((l_77 >= (safe_mod_func_int8_t_s_s((l_77 <= ((void*)0 != &g_14)), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((+(&g_13 != (void*)0)), 7)), l_77))))) <= l_77) | g_14) < 65529UL) ^ (*g_13)) ^ l_77)))));
    return l_89;
}
static int32_t * func_52(int8_t p_53, uint32_t p_54, uint16_t p_55, uint16_t p_56, int8_t p_57)
{
    int32_t *l_74 = &g_14;
    for (p_53 = 0; (p_53 >= 22); p_53 = safe_add_func_uint16_t_u_u(p_53, 9))
    {
        int32_t ***l_69 = (void*)0;
        int32_t **l_71 = (void*)0;
        int32_t ***l_70 = &l_71;
        (*l_70) = &g_13;
    }
    (*g_13) = (safe_add_func_int16_t_s_s(g_14, p_55));
    return l_74;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_13 = 0;
    g_225 = 0;
    csmith_sink_ = g_14;
    csmith_sink_ = g_90;
    csmith_sink_ = g_94;
    csmith_sink_ = g_229;
    csmith_sink_ = g_814;
    platform_main_end(0,0);
    return 0;
}
