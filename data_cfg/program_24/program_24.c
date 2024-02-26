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
static int32_t g_10 = 0L;
static int32_t *g_55 = &g_10;
static int32_t **g_54 = &g_55;
static int32_t g_59 = (-3L);
static int32_t g_170 = 1L;
static int64_t g_195 = 8L;
static int32_t ***g_226 = &g_54;
static int32_t ****g_225 = &g_226;
static int32_t g_256 = (-10L);
static int64_t g_277 = 4L;
static int32_t g_382 = 0x3F51DE6EL;
static uint32_t g_501 = 18446744073709551614UL;
static int64_t g_564 = 0x9D4ABB65AF1EE802LL;
static uint32_t g_745 = 0xA36CF1C5L;
static int32_t ****g_865 = (void*)0;
static int16_t func_1(void);
static int64_t func_7(uint64_t p_8, uint32_t p_9);
static uint32_t func_11(int64_t p_12, int8_t p_13);
inline static int32_t func_14(int16_t p_15, int32_t p_16);
inline static int16_t func_29(int32_t p_30, uint64_t p_31, int16_t p_32, uint64_t p_33, uint32_t p_34);
static int8_t func_56(int32_t * p_57);
static int32_t * func_64(int32_t p_65);
static uint32_t func_76(int32_t ** p_77, int32_t p_78);
inline static int32_t ** func_79(int32_t ** p_80, uint16_t p_81);
inline static int8_t func_83(int32_t p_84, uint32_t p_85);
static int16_t func_1(void)
{
    int32_t ***l_822 = &g_54;
    int32_t l_823 = (-1L);
    int32_t *****l_880 = &g_865;
    if ((safe_add_func_uint64_t_u_u((~((safe_rshift_func_int8_t_s_s(0x08L, (func_7(g_10, func_11(g_10, g_10)) >= 6L))) && ((((g_10 , (((6UL && 0x0BL) | g_501) < 0x01L)) , l_822) == (void*)0) , l_823))), g_501)))
    {
        uint32_t l_826 = 0x98837D9FL;
        uint32_t l_833 = 7UL;
        int64_t l_834 = (-6L);
        int32_t *l_835 = (void*)0;
        int32_t *l_836 = &l_823;
        int32_t *l_837 = &g_256;
        (*l_836) = (safe_rshift_func_uint16_t_u_s((((((&g_225 == (void*)0) >= l_826) ^ ((((void*)0 == &g_226) & ((4UL <= ((safe_rshift_func_uint8_t_u_u((((&l_823 == &l_823) > (safe_sub_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(l_826, g_382)) > 0UL), g_745))) && 9UL), 5)) && 0UL)) && l_826)) < l_833)) != g_501) >= l_834), l_833));
        (**l_822) = l_837;
        ((void) sizeof ((g_55 == &g_256) ? 1 : 0), __extension__ ({ if (g_55 == &g_256) ; else __assert_fail ("g_55 == &g_256", "/tmp/tmpwddtust7.c", 70, __extension__ __PRETTY_FUNCTION__); }));
        (*g_54) = (**g_226);
    }
    else
    {
        int16_t l_846 = 0x5A55L;
        int32_t *l_866 = &g_170;
        uint64_t l_867 = 1UL;
        int32_t ***l_872 = &g_54;
        (*g_54) = l_866;
        ((void) sizeof ((g_55 == &g_170) ? 1 : 0), __extension__ ({ if (g_55 == &g_170) ; else __assert_fail ("g_55 == &g_170", "/tmp/tmpwddtust7.c", 81, __extension__ __PRETTY_FUNCTION__); }));
        (**g_54) = (g_195 & ((((((*g_226) != (void*)0) || l_867) != ((((((***l_822) >= (safe_mod_func_int16_t_s_s(0L, g_501))) > ((((safe_lshift_func_uint8_t_u_u((0L >= (18446744073709551608UL ^ (***l_822))), (*l_866))) < (*g_55)) , (*l_866)) != 0xC01A8435L)) > 1UL) , (***l_822)) | (***l_822))) & 0L) && (*l_866)));
        l_872 = &g_54;
    }
    ((void) sizeof ((g_55 == &g_170 || g_55 == &g_256) ? 1 : 0), __extension__ ({ if (g_55 == &g_170 || g_55 == &g_256) ; else __assert_fail ("g_55 == &g_170 || g_55 == &g_256", "/tmp/tmpwddtust7.c", 86, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_225 == &g_226 || g_225 == 0) ? 1 : 0), __extension__ ({ if (g_225 == &g_226 || g_225 == 0) ; else __assert_fail ("g_225 == &g_226 || g_225 == 0", "/tmp/tmpwddtust7.c", 87, __extension__ __PRETTY_FUNCTION__); }));
    for (g_564 = 0; (g_564 > (-3)); g_564--)
    {
        int32_t **l_881 = &g_55;
        for (g_277 = (-1); (g_277 <= (-27)); g_277--)
        {
            int8_t l_877 = 0x97L;
            int32_t *l_885 = &l_823;
            l_877 = ((void*)0 != &l_822);
        }
        return (**l_881);
    }
    return g_195;
}
static int64_t func_7(uint64_t p_8, uint32_t p_9)
{
    for (g_170 = (-14); (g_170 < 18); g_170++)
    {
        int32_t *l_821 = &g_10;
        (*l_821) = 0x6239076DL;
        (*l_821) = 0x10731883L;
    }
    return p_9;
}
static uint32_t func_11(int64_t p_12, int8_t p_13)
{
    int8_t l_22 = 1L;
    int32_t *l_818 = &g_256;
    (*l_818) = func_14((p_13 <= (0x79C63C40L || (((safe_rshift_func_int8_t_s_s((((!(0x373A4C92L == (safe_sub_func_uint16_t_u_u((l_22 , (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_10 ^ g_10), 7)), 1))), ((safe_rshift_func_int16_t_s_s(func_29((safe_add_func_uint32_t_u_u(l_22, 0x4AF7BDD4L)), ((((safe_add_func_uint16_t_u_u(g_10, 1UL)) >= l_22) , l_22) && p_13), l_22, g_10, g_10), g_10)) , g_10))))) | 0xC0AC77ACAEC2B2A8LL) >= 0x02D78BEAL), g_10)) & g_10) ^ l_22))), (**g_54));
    ((void) sizeof ((g_225 == &g_226 || g_225 == 0) ? 1 : 0), __extension__ ({ if (g_225 == &g_226 || g_225 == 0) ; else __assert_fail ("g_225 == &g_226 || g_225 == 0", "/tmp/tmpwddtust7.c", 132, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_818);
}
inline static int32_t func_14(int16_t p_15, int32_t p_16)
{
    int32_t **l_86 = (void*)0;
    int32_t l_87 = 0x039A2479L;
    int32_t *****l_707 = &g_225;
    uint32_t l_724 = 1UL;
    int32_t ****l_771 = &g_226;
    int32_t *l_772 = &g_59;
    p_16 = (g_59 == (18446744073709551606UL >= (func_76(func_79((((safe_unary_minus_func_uint32_t_u((func_83((l_86 == l_86), (g_59 && l_87)) < (0xB0C4F31BL | ((p_16 != p_15) == l_87))))) , g_59) , l_86), g_10), g_10) || 0xA6D87F4DL)));
    if ((safe_mod_func_int32_t_s_s(p_15, (p_15 ^ 0xA4ADDCB0DFDFF30ELL))))
    {
        int32_t l_690 = 0xF5802DB8L;
        int32_t *****l_722 = &g_225;
        uint32_t l_782 = 2UL;
        int32_t ****l_799 = &g_226;
        if (((l_690 | ((p_16 || l_690) < g_501)) > ((((safe_sub_func_int16_t_s_s(p_15, ((safe_rshift_func_uint16_t_u_u((((void*)0 == (**g_225)) & (safe_mod_func_uint16_t_u_u(((g_277 , (!((((0UL ^ g_59) , l_86) == (*g_226)) >= p_15))) , p_15), (-8L)))), 10)) == p_16))) == g_170) != g_382) && g_564)))
        {
            uint16_t l_723 = 65530UL;
            (*g_54) = &p_16;
            ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 164, __extension__ __PRETTY_FUNCTION__); }));
            for (g_256 = (-11); (g_256 == (-5)); ++g_256)
            {
                int32_t *****l_706 = &g_225;
                if (p_16)
                    break;
                (****g_225) = ((safe_unary_minus_func_uint64_t_u((~((l_690 && (safe_rshift_func_int8_t_s_u((((void*)0 != (**g_225)) , (safe_add_func_uint16_t_u_u((l_706 != l_707), (((safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((((((safe_lshift_func_uint8_t_u_s((((void*)0 == (**l_706)) != ((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((g_10 == (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((void*)0 == &p_16), p_15)), 13))) , (void*)0) == (void*)0), 0L)), (*****l_706))) < g_277)), 1)) && p_15) || 0x576CL) & p_15) == 1UL) > (*****l_707)), g_277)), 6)) , l_722) == (void*)0)))), 7))) , l_723)))) && l_724);
            }
        }
        else
        {
            uint8_t l_737 = 0xCFL;
            int32_t **l_744 = &g_55;
            int32_t ****l_781 = &g_226;
            if (p_16)
            {
                (**g_226) = &p_16;
                ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 182, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                int64_t l_725 = 0x07BEB0E5B5705721LL;
                if (l_725)
                {
                    for (l_690 = 0; (l_690 >= (-25)); l_690 = safe_sub_func_int64_t_s_s(l_690, 1))
                    {
                        (***g_225) = &p_16;
                        ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 193, __extension__ __PRETTY_FUNCTION__); }));
                        if ((**g_54))
                            break;
                    }
                    (*l_722) = ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u(((g_195 == l_737) >= ((0x0FE14FD5L <= (safe_rshift_func_uint8_t_u_u((0x30L || (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(p_16, 4)) , ((*g_226) == l_744)), (g_195 == p_15)))), g_10))) , g_277)), 3)))), p_16)) != g_256) <= p_16), g_745)) ^ 0xA349E405L), 0x77L)) , (void*)0);
                    ((void) sizeof ((g_225 == 0) ? 1 : 0), __extension__ ({ if (g_225 == 0) ; else __assert_fail ("g_225 == 0", "/tmp/tmpwddtust7.c", 201, __extension__ __PRETTY_FUNCTION__); }));
                    p_16 = (safe_sub_func_uint16_t_u_u((g_277 && (((l_725 ^ p_15) > (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_16, (l_690 != (safe_lshift_func_int8_t_s_s((p_16 , (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(250UL, (p_15 , p_16))), g_501))), p_16))))), 1))) == p_15)), 0L));
                }
                else
                {
                    int32_t l_769 = 0xD440F6A7L;
                    int32_t ****l_770 = &g_226;
                    for (p_15 = (-29); (p_15 > (-16)); p_15++)
                    {
                        p_16 = (-6L);
                    }
                    (*l_744) = ((((g_256 || (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(l_725, 12)) | ((((((((1UL & ((+(((((((safe_rshift_func_uint16_t_u_u(g_170, 14)) < 6UL) == ((l_725 , (safe_add_func_uint64_t_u_u(p_16, p_15))) , (2UL && 0x98E987EF5AA12001LL))) || p_15) ^ p_15) , g_277) || 0L)) <= l_769)) || l_725) >= p_15) ^ 0x0698L) != (-2L)) ^ p_15) == 0L) <= p_16)) || p_15), l_725))) , l_770) != l_771) , l_772);
                    ((void) sizeof ((g_55 == &g_59) ? 1 : 0), __extension__ ({ if (g_55 == &g_59) ; else __assert_fail ("g_55 == &g_59", "/tmp/tmpwddtust7.c", 214, __extension__ __PRETTY_FUNCTION__); }));
                    (****l_770) = (p_15 < (&p_16 != (*g_54)));
                }
                ((void) sizeof ((g_225 == &g_226 || g_225 == 0) ? 1 : 0), __extension__ ({ if (g_225 == &g_226 || g_225 == 0) ; else __assert_fail ("g_225 == &g_226 || g_225 == 0", "/tmp/tmpwddtust7.c", 219, __extension__ __PRETTY_FUNCTION__); }));
                for (g_277 = (-18); (g_277 >= 22); g_277 = safe_add_func_int64_t_s_s(g_277, 2))
                {
                    (*l_772) = ((-1L) == ((safe_lshift_func_uint8_t_u_s(p_16, ((&p_16 == &p_16) , 0x6EL))) == (safe_add_func_uint32_t_u_u(7UL, (255UL != (safe_add_func_int16_t_s_s((&g_226 == l_781), 0xFD2BL)))))));
                    if (l_782)
                        break;
                }
                (*l_744) = &p_16;
                ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 228, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 231, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_225 == &g_226 || g_225 == 0) ? 1 : 0), __extension__ ({ if (g_225 == &g_226 || g_225 == 0) ; else __assert_fail ("g_225 == &g_226 || g_225 == 0", "/tmp/tmpwddtust7.c", 232, __extension__ __PRETTY_FUNCTION__); }));
            p_16 = ((&g_226 != (*l_707)) && (safe_mod_func_int32_t_s_s(0x924B33EDL, ((***g_226) && ((safe_sub_func_uint8_t_u_u(0UL, (safe_add_func_uint64_t_u_u((p_15 , (safe_add_func_int32_t_s_s(((((~(p_16 , (((g_195 , &l_771) == (void*)0) == g_170))) , (-5L)) < 0xF8F5L) == p_16), (*l_772)))), g_382)))) , (****l_781))))));
            (*g_55) = (((255UL == ((****l_771) ^ (safe_unary_minus_func_int32_t_s((**l_744))))) > ((**l_744) , p_16)) || g_501);
            (***g_226) = (((((safe_sub_func_uint64_t_u_u(g_10, ((0xBF34B68D74AC8410LL & ((((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((((((*l_722) != l_799) < (g_256 ^ (((safe_rshift_func_int16_t_s_u((((((safe_add_func_uint32_t_u_u(((p_15 ^ (safe_rshift_func_int16_t_s_u(p_15, (&g_225 != ((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(255UL, g_277)), (**l_744))), p_16)) , (void*)0))))) , (****l_781)), p_15)) >= g_382) > 3L) , g_256) , g_170), 10)) && p_15) == 0x99E377C5L))) <= 65530UL) != g_501), 4)) == (****l_781)), g_256)) , 0xE3L) | 0x31L) >= g_195)) <= p_15))) || g_564) & g_256) <= (**l_744)) & g_10);
        }
        ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 238, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_225 == &g_226 || g_225 == 0) ? 1 : 0), __extension__ ({ if (g_225 == &g_226 || g_225 == 0) ; else __assert_fail ("g_225 == &g_226 || g_225 == 0", "/tmp/tmpwddtust7.c", 239, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        (****l_707) = &p_16;
        ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 245, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_55 == &p_16) ? 1 : 0), __extension__ ({ if (g_55 == &p_16) ; else __assert_fail ("g_55 == &p_16", "/tmp/tmpwddtust7.c", 248, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_225 == &g_226 || g_225 == 0) ? 1 : 0), __extension__ ({ if (g_225 == &g_226 || g_225 == 0) ; else __assert_fail ("g_225 == &g_226 || g_225 == 0", "/tmp/tmpwddtust7.c", 249, __extension__ __PRETTY_FUNCTION__); }));
    for (g_745 = 9; (g_745 == 50); g_745 = safe_add_func_int64_t_s_s(g_745, 9))
    {
    }
    (*l_772) = (safe_rshift_func_uint16_t_u_s(((p_16 > g_277) > (g_170 < g_195)), 0));
    return p_15;
}
inline static int16_t func_29(int32_t p_30, uint64_t p_31, int16_t p_32, uint64_t p_33, uint32_t p_34)
{
    int32_t *l_39 = (void*)0;
    int32_t **l_40 = &l_39;
    int32_t *l_62 = (void*)0;
    int32_t *l_63 = &g_59;
    uint16_t l_66 = 3UL;
    (*l_40) = l_39;
    for (p_34 = 21; (p_34 <= 5); --p_34)
    {
        if (p_34)
            break;
    }
    (*l_63) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((void*)0 != &g_10) ^ g_10), (~(safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(8UL, (g_54 == (((func_56((*l_40)) >= (safe_sub_func_uint8_t_u_u(g_10, 0x58L))) , 0xB296AD98L) , (void*)0)))), p_31))))), 3)), 6));
    (*l_40) = func_64(l_66);
    return p_30;
}
static int8_t func_56(int32_t * p_57)
{
    int32_t *l_58 = &g_59;
    (*l_58) = (**g_54);
    return (*l_58);
}
static int32_t * func_64(int32_t p_65)
{
    int8_t l_67 = 0x2BL;
    int32_t *l_72 = (void*)0;
    int32_t *l_73 = (void*)0;
    int32_t *l_74 = (void*)0;
    int32_t *l_75 = &g_59;
    l_67 = p_65;
    (*l_75) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(0x55L, 4)), (g_10 || ((**g_54) == l_67))));
    return l_73;
}
static uint32_t func_76(int32_t ** p_77, int32_t p_78)
{
    int32_t ***l_95 = &g_54;
    uint32_t l_121 = 4UL;
    int32_t l_331 = 7L;
    int32_t l_426 = 0x5DCF1321L;
    int32_t l_458 = 0x2B1C8441L;
    uint64_t l_523 = 6UL;
    int32_t l_610 = 0x9338CB86L;
    (*l_95) = &g_55;
    ((void) sizeof ((g_54 == &g_55) ? 1 : 0), __extension__ ({ if (g_54 == &g_55) ; else __assert_fail ("g_54 == &g_55", "/tmp/tmpwddtust7.c", 333, __extension__ __PRETTY_FUNCTION__); }));
    if (((**l_95) != ((safe_lshift_func_int16_t_s_u((p_78 , g_10), 6)) , (**l_95))))
    {
        int32_t **l_108 = (void*)0;
        uint8_t l_137 = 0x12L;
        uint32_t l_167 = 4294967288UL;
        if ((safe_mod_func_uint8_t_u_u((((1UL <= ((**p_77) , ((((safe_unary_minus_func_uint64_t_u(p_78)) != g_59) > (((!0xE38899A8624A7E6DLL) < (((safe_add_func_int32_t_s_s((p_78 > p_78), (safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(0x78EDL, ((g_10 == g_10) == p_78))) & (***l_95)), p_78)))) , (void*)0) != l_108)) >= (-1L))) , g_59))) , &g_55) == p_77), p_78)))
        {
            int32_t l_118 = 0x431F4830L;
            int32_t *l_122 = &g_59;
            if ((p_78 && (safe_rshift_func_int8_t_s_s(((((g_10 > (+(248UL > (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((p_78 != ((p_78 >= 0x2CFE06C79296E562LL) && (((((((((((safe_add_func_int32_t_s_s(((l_118 ^ (((0xD03F0CD8B2F8DC5ALL | (safe_mod_func_uint16_t_u_u((((((((0x2900EB00L == l_121) , 2UL) || (-1L)) & l_118) < g_10) ^ (***l_95)) <= 1UL), p_78))) || p_78) == g_10)) > l_118), 0xE780F4AAL)) == g_10) , (void*)0) != (*g_54)) != (***l_95)) , p_78) , (*g_54)) != (void*)0) && (-9L)) & l_118) <= g_59))), 5UL)), g_10))))) ^ 0x53783AD51AC0D59BLL) , l_122) == (void*)0), g_10))))
            {
                (*p_77) = (*g_54);
                (*p_77) = (*g_54);
            }
            else
            {
                (*p_77) = (*g_54);
                (*g_54) = (*g_54);
            }
        }
        else
        {
            uint32_t l_123 = 0x77AA3FF9L;
            int32_t l_124 = (-4L);
            l_124 = l_123;
            (**l_95) = (*g_54);
            for (p_78 = 0; (p_78 <= (-10)); p_78 = safe_sub_func_int8_t_s_s(p_78, 9))
            {
                int32_t *l_127 = &l_124;
                (*p_77) = (*g_54);
                (*l_127) = 0xB82FD53FL;
                if ((**g_54))
                    continue;
                if ((**p_77))
                    break;
            }
            (*g_54) = ((p_78 != 0xC10E4350L) , (*g_54));
        }
        if ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((p_78 | (p_78 != ((p_77 != (void*)0) | ((((1UL != (~(p_78 > ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((0L == ((((***l_95) && (**g_54)) <= 1UL) || p_78)) , 0xFAL), p_78)), p_78)) < 0UL)))) || g_59) || g_59) ^ p_78)))), 0L)), p_78)))
        {
            return p_78;
        }
        else
        {
            uint32_t l_147 = 18446744073709551606UL;
            (**l_95) = (*p_77);
            if (l_137)
            {
                uint64_t l_149 = 1UL;
                for (l_121 = 8; (l_121 > 59); l_121++)
                {
                    int32_t *l_148 = &g_59;
                    (**l_95) = (*g_54);
                    l_149 = ((((void*)0 == (*g_54)) , (((!(safe_rshift_func_int8_t_s_u((((void*)0 == &p_77) >= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_147 , (((*g_54) == l_148) , (((void*)0 == l_95) < p_78))), p_78)), 0))), g_59))) == g_59) < (-1L))) , (**g_54));
                }
                for (l_137 = 0; (l_137 <= 51); l_137 = safe_add_func_int8_t_s_s(l_137, 5))
                {
                    int32_t *l_154 = &g_10;
                    int32_t *l_191 = &g_170;
                    for (p_78 = (-25); (p_78 <= (-1)); p_78++)
                    {
                        if ((**g_54))
                            break;
                        (*p_77) = l_154;
                    }
                    for (l_149 = 0; (l_149 <= 5); l_149 = safe_add_func_int16_t_s_s(l_149, 5))
                    {
                        int8_t l_168 = (-1L);
                        int32_t *l_169 = &g_170;
                        uint8_t l_184 = 254UL;
                        (*l_169) = (((&l_108 != (void*)0) >= (safe_add_func_uint16_t_u_u(1UL, ((safe_sub_func_int32_t_s_s(((g_10 || ((g_59 , ((l_149 && (0x1F3FAF8EL ^ ((safe_lshift_func_int16_t_s_s((((*l_95) == ((safe_add_func_int64_t_s_s(((((((safe_add_func_int8_t_s_s(g_59, g_10)) >= g_10) , g_59) , g_59) , l_108) != p_77), 0x81AE91000105832DLL)) , (void*)0)) <= (-1L)), g_10)) , (**p_77)))) < p_78)) != (-4L))) ^ l_167), l_149)) , l_168)))) > (***l_95));
                        (*l_169) = (safe_rshift_func_int16_t_s_u((p_77 == (void*)0), (***l_95)));
                        (*l_169) = ((g_170 , (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((&p_77 == &l_108), ((safe_add_func_int32_t_s_s((**g_54), (~l_149))) < ((((((safe_mod_func_uint16_t_u_u((g_10 && ((g_170 != ((((((0x1CL < (safe_add_func_uint8_t_u_u(((((-1L) && p_78) <= g_10) && (-1L)), (-1L)))) != p_78) , 0x65D8L) , (-1L)) | p_78) , 3UL)) & 0xBDL)), (-5L))) ^ g_10) != l_184) | g_10) , g_10) | 0x769405CEL)))), p_78))) == p_78);
                        (*l_169) = 0x4936EB09L;
                    }
                    (*l_191) = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((0x75L == 0x7BL), ((((((0xDAL != ((p_78 , (void*)0) != (*g_54))) < 0x8CA0L) , l_154) == (void*)0) == g_10) , p_78))) >= 0xC0L) < 0L), 3)) & 0x09L), g_10));
                    (*l_95) = p_77;
                }
            }
            else
            {
                return p_78;
            }
        }
    }
    else
    {
        int32_t *l_192 = &g_170;
        (*l_192) = (**g_54);
        (*p_77) = (**l_95);
        for (g_170 = (-17); (g_170 > (-19)); g_170 = safe_sub_func_int32_t_s_s(g_170, 8))
        {
            g_195 = (**g_54);
            return g_59;
        }
    }
    if ((!p_78))
    {
        int32_t *l_197 = &g_170;
        int32_t *****l_254 = &g_225;
        (*l_197) = (&g_55 != p_77);
        p_78 = (**g_54);
        if ((((~(**p_77)) && ((safe_unary_minus_func_int64_t_s((g_170 && ((g_195 != 0xBACBL) & (((~(p_78 , g_59)) , (((((safe_lshift_func_int16_t_s_s(((*l_197) | ((((***l_95) < 4294967295UL) >= g_10) != p_78)), 7)) | 1L) ^ 0x03A0161F22465FA9LL) , p_77) == (void*)0)) , g_59))))) && p_78)) ^ p_78))
        {
            uint64_t l_207 = 1UL;
            int32_t ****l_233 = (void*)0;
            (*l_197) = ((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(255UL, l_207)) || (safe_sub_func_int32_t_s_s(((&g_55 == p_77) || (l_207 != p_78)), (safe_rshift_func_int8_t_s_u((0UL & ((safe_lshift_func_uint8_t_u_s((0xFBL < ((((*p_77) != (void*)0) , 0xBCF0D4CE2010D2CALL) != p_78)), 3)) < l_207)), 5))))), 0x4EL)) | (***l_95));
            for (g_170 = (-17); (g_170 >= (-14)); g_170 = safe_add_func_int64_t_s_s(g_170, 8))
            {
                int32_t l_221 = 1L;
            }
            if ((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(((((p_78 , (0L < g_10)) & 0x13E4L) < (safe_lshift_func_uint16_t_u_s(0x9A1AL, 2))) && (safe_add_func_int16_t_s_s(g_10, (p_78 , ((void*)0 != &g_225))))))) ^ (****g_225)), (**p_77))))
            {
                uint64_t l_278 = 0UL;
                int32_t *l_300 = &g_59;
                (**g_226) = (*p_77);
                for (g_170 = (-4); (g_170 > 25); ++g_170)
                {
                    int32_t *l_255 = &g_256;
                    (*l_255) = ((l_254 == &g_225) | g_10);
                    return (*****l_254);
                }
                if ((**p_77))
                {
                    int8_t l_274 = 3L;
                    int32_t *l_279 = &g_170;
                    if ((18446744073709551615UL == ((((**g_54) , (safe_lshift_func_uint8_t_u_u((((g_170 <= (safe_mod_func_int64_t_s_s(0x0CB62A19D67C5E2BLL, (p_78 , 6L)))) && (safe_unary_minus_func_int32_t_s((**p_77)))) == (((safe_lshift_func_uint8_t_u_u(p_78, (g_59 > 0xA964L))) , 0xBE54L) && p_78)), 6))) , 0x57D9L) ^ 1UL)))
                    {
                        (***g_225) = (****l_254);
                        (*l_197) = (*g_55);
                    }
                    else
                    {
                        int8_t l_276 = 1L;
                        l_278 = ((((safe_rshift_func_int16_t_s_s(g_170, 5)) ^ (((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_59, (***l_95))), (((((((((-7L) || (0xF7B5C9E1L > ((((((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(l_274, (+g_170))) && ((0UL < g_195) & g_10)), g_256)) <= l_274) , (*g_54)) == (***g_225)) , 0x3BD95B1CF1519C01LL) != 0x7F4D557F31CA4282LL))) && g_59) < p_78) , l_276) && g_277) , g_10) >= l_276) == l_276))) , g_170) , g_170)) > 1L) , l_276);
                        (***g_225) = l_279;
                        ((void) sizeof ((g_55 == &g_170) ? 1 : 0), __extension__ ({ if (g_55 == &g_170) ; else __assert_fail ("g_55 == &g_170", "/tmp/tmpwddtust7.c", 471, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((g_55 == &g_170 || g_55 == &g_10) ? 1 : 0), __extension__ ({ if (g_55 == &g_170 || g_55 == &g_10) ; else __assert_fail ("g_55 == &g_170 || g_55 == &g_10", "/tmp/tmpwddtust7.c", 474, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_279) = (!((-6L) != (safe_lshift_func_int16_t_s_s((g_59 && ((p_78 , ((***l_95) < (p_78 == (safe_add_func_uint8_t_u_u(g_170, 1L))))) > (safe_add_func_int16_t_s_s((g_256 >= ((((((((safe_mod_func_int8_t_s_s(0xCCL, p_78)) >= (***l_95)) , p_78) , (*l_197)) , 0xA2L) <= p_78) || g_256) , p_78)), g_170)))), 2))));
                }
                else
                {
                    uint32_t l_291 = 1UL;
                    if ((((safe_sub_func_uint64_t_u_u((((((l_291 && ((~(p_78 >= (((+0xEFDB948781A7FB56LL) , (*g_225)) == (**l_254)))) <= (safe_lshift_func_int16_t_s_u((g_59 && (((safe_lshift_func_uint16_t_u_s(p_78, 9)) || ((**p_77) , (&p_77 != (*g_225)))) <= 0L)), p_78)))) == 248UL) < p_78) < 0xE804L) ^ p_78), g_10)) , g_59) ^ 1L))
                    {
                        int16_t l_311 = 0xD367L;
                        (*g_54) = l_300;
                        ((void) sizeof ((g_55 == &g_59) ? 1 : 0), __extension__ ({ if (g_55 == &g_59) ; else __assert_fail ("g_55 == &g_59", "/tmp/tmpwddtust7.c", 485, __extension__ __PRETTY_FUNCTION__); }));
                        (*g_54) = (**g_226);
                        p_78 = ((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s(((g_277 > (p_78 <= ((safe_lshift_func_int8_t_s_s((0UL <= (((g_195 && (((safe_lshift_func_uint16_t_u_u(65529UL, 6)) , (safe_sub_func_uint8_t_u_u(4UL, l_291))) >= (-1L))) , (*g_225)) == &p_77)), 2)) | 0x9995L))) , 0xE90CL), l_311)) | 0x1AC8A185L) ^ 18446744073709551614UL) > 65535UL), 2)) > 0x26D7F1537B6BF432LL);
                    }
                    else
                    {
                        return p_78;
                    }
                    ((void) sizeof ((g_55 == &g_59) ? 1 : 0), __extension__ ({ if (g_55 == &g_59) ; else __assert_fail ("g_55 == &g_59", "/tmp/tmpwddtust7.c", 494, __extension__ __PRETTY_FUNCTION__); }));
                    for (g_195 = 0; (g_195 <= 26); g_195++)
                    {
                        (**l_95) = (**g_226);
                        (**l_95) = (****l_254);
                    }
                }
                ((void) sizeof ((g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10) ? 1 : 0), __extension__ ({ if (g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10) ; else __assert_fail ("g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10", "/tmp/tmpwddtust7.c", 502, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                (***g_225) = (***g_225);
            }
            ((void) sizeof ((g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10) ? 1 : 0), __extension__ ({ if (g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10) ; else __assert_fail ("g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10", "/tmp/tmpwddtust7.c", 509, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            (*l_197) = (-1L);
            (**l_95) = (*p_77);
        }
        ((void) sizeof ((g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10) ? 1 : 0), __extension__ ({ if (g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10) ; else __assert_fail ("g_55 == &g_59 || g_55 == &g_170 || g_55 == &g_10", "/tmp/tmpwddtust7.c", 517, __extension__ __PRETTY_FUNCTION__); }));
        (*p_77) = (**g_226);
    }
    else
    {
        int32_t *****l_318 = &g_225;
        int8_t l_327 = 1L;
        int32_t ***l_330 = &g_54;
        uint8_t l_380 = 7UL;
        uint16_t l_381 = 65529UL;
        uint64_t l_406 = 0x7261D153DDF38A95LL;
        int32_t ***l_502 = &g_54;
        uint32_t l_547 = 1UL;
        uint8_t l_601 = 247UL;
        int8_t l_602 = 0xA5L;
        uint32_t l_652 = 0UL;
        l_331 = (((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((((l_318 != &g_225) , (((safe_sub_func_uint32_t_u_u(((p_78 , (((*****l_318) == ((0x97431A8FL ^ ((safe_add_func_int64_t_s_s(((((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(l_327, (safe_rshift_func_int8_t_s_s(((*g_225) == l_330), 3)))), 15)) > (***l_95)) <= 7UL) < 0x1DD7L), g_195)) | g_195)) <= 4294967290UL)) & p_78)) == g_10), 0xCE41174DL)) , (*****l_318)) & (***l_95))) || 65526UL), 13)) , 0UL) == 0x5748L), (**p_77))) > p_78) != g_59);
        if ((+1L))
        {
            int32_t *****l_333 = (void*)0;
            l_333 = l_333;
            if (((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(0UL, (0x6CB6D5B2L > g_256))), 3)) && (*****l_318)) || (((+((p_78 , ((***l_95) < (((!(safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((!(safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(g_195, ((((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint8_t_u_u(5UL, 5)))) <= ((safe_unary_minus_func_uint16_t_u(((((safe_sub_func_int64_t_s_s((-6L), g_195)) , (***l_330)) , p_78) && (****g_225)))) ^ p_78)) , (***l_95)) && g_277))), (***l_330)))), 0xC9L)), 2)), g_277))) > 0x9E35L) != (*****l_318)))) || 1UL)) , g_10) || 3L)) != p_78))
            {
                (***g_225) = (p_78 , (*g_54));
            }
            else
            {
                int32_t *l_357 = &l_331;
                (***g_225) = l_357;
                ((void) sizeof ((g_55 == &l_331) ? 1 : 0), __extension__ ({ if (g_55 == &l_331) ; else __assert_fail ("g_55 == &l_331", "/tmp/tmpwddtust7.c", 547, __extension__ __PRETTY_FUNCTION__); }));
                (***g_226) = 0L;
            }
            ((void) sizeof ((g_55 == &l_331 || g_55 == &g_10) ? 1 : 0), __extension__ ({ if (g_55 == &l_331 || g_55 == &g_10) ; else __assert_fail ("g_55 == &l_331 || g_55 == &g_10", "/tmp/tmpwddtust7.c", 551, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            for (l_121 = 0; (l_121 > 20); l_121++)
            {
                (*g_54) = (****l_318);
                (**g_226) = (*p_77);
                (**g_226) = (***g_225);
            }
        }
        ((void) sizeof ((g_55 == &l_331 || g_55 == &g_10) ? 1 : 0), __extension__ ({ if (g_55 == &l_331 || g_55 == &g_10) ; else __assert_fail ("g_55 == &l_331 || g_55 == &g_10", "/tmp/tmpwddtust7.c", 563, __extension__ __PRETTY_FUNCTION__); }));
        if (((l_95 != (void*)0) == ((void*)0 == &p_77)))
        {
            int32_t ***l_383 = &g_54;
            int32_t ****l_453 = &l_383;
            int32_t l_486 = (-1L);
            for (l_331 = (-14); (l_331 < (-15)); l_331 = safe_sub_func_uint16_t_u_u(l_331, 8))
            {
                int8_t l_362 = 0x15L;
                int32_t *l_384 = &g_256;
                int32_t *l_416 = (void*)0;
                int8_t l_425 = (-1L);
            }
            for (l_426 = (-16); (l_426 >= 27); l_426++)
            {
                int32_t ***l_439 = &g_54;
                int64_t l_475 = 0x996BEDF1BFF0094ELL;
                for (g_382 = 14; (g_382 < 5); g_382--)
                {
                    int32_t *l_431 = &g_170;
                    (*l_431) = (*g_55);
                    for (g_277 = 2; (g_277 <= (-1)); --g_277)
                    {
                        (*l_431) = ((((((~((***l_330) != ((p_78 , (((safe_add_func_uint32_t_u_u(((p_78 == ((p_78 , (*g_225)) == l_439)) | (safe_add_func_int8_t_s_s(((0x5EABL | (safe_mod_func_int8_t_s_s(((*p_77) != (**g_226)), p_78))) , g_277), 0x15L))), (***l_383))) ^ g_382) | p_78)) < (-1L)))) && 0xAC515AA2L) | (***l_383)) , g_277) < g_256) > (***l_383));
                        (*l_431) = (0xBF67L | (safe_unary_minus_func_uint8_t_u(((***l_383) , g_256))));
                        return g_59;
                    }
                    return (*l_431);
                }
                if ((***l_330))
                {
                    int8_t l_445 = 0x5AL;
                    int32_t ****l_480 = &g_226;
                    int8_t l_485 = 0x62L;
                    (****l_318) = ((l_445 & (safe_add_func_int64_t_s_s(((p_78 == p_78) <= ((safe_mod_func_int8_t_s_s((((p_78 & (***l_383)) , ((*****l_318) , (4294967288UL & (safe_unary_minus_func_int16_t_s((-8L)))))) & (l_453 != &g_226)), 1UL)) > p_78)), 18446744073709551615UL))) , (**g_226));
                    p_78 = (**p_77);
                    l_458 = ((((***l_439) < ((***l_95) , (safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((((g_10 < p_78) == (((((((***l_330) != (-8L)) < (****l_453)) , 18446744073709551615UL) , p_78) > g_256) != 1L)) & p_78), (***l_439))) && 0UL), p_78)))) < l_445) >= g_382);
                    if (((**g_225) == ((safe_add_func_int64_t_s_s((((((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((((-4L) != (safe_rshift_func_int16_t_s_u((0xBDE5L >= ((safe_rshift_func_int16_t_s_s((247UL & (safe_add_func_int32_t_s_s(((***l_439) | (((1L != ((safe_lshift_func_uint8_t_u_s((g_382 != g_170), p_78)) >= g_256)) <= l_475) | (***l_95))), (***l_330)))), 11)) , 0x8DDCL)), g_170))) < p_78), 0xDC77L)) < (-3L)), (**p_77))) && 0x40L) ^ (**p_77)) <= p_78) | p_78), (***l_95))) , (*g_226))))
                    {
                        return l_445;
                    }
                    else
                    {
                        int32_t *l_487 = (void*)0;
                        int32_t ****l_488 = (void*)0;
                        g_256 = ((0x78L | (safe_lshift_func_uint16_t_u_s(((****l_453) & p_78), (((&l_439 != ((p_78 != (safe_rshift_func_int8_t_s_s((***l_383), 2))) , l_480)) > (((((((*****l_318) | (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((((g_170 , g_256) && (***l_330)) , l_485) == 18446744073709551606UL), p_78)) , l_486), p_78))) < g_277) == (***l_439)) , (void*)0) == (*l_95)) && 7L)) ^ 0UL)))) && 0xD2L);
                        if ((*****l_318))
                            continue;
                        g_170 = ((void*)0 == l_488);
                        (***g_225) = (**l_383);
                    }
                }
                else
                {
                    int32_t *l_491 = &g_170;
                    (****l_318) = (**g_226);
                    (*l_491) = ((safe_add_func_uint8_t_u_u((1L & (***l_439)), 255UL)) < 0x61A7614259A3E50DLL);
                    (**g_226) = (**l_95);
                }
                (****l_318) = (((((**g_54) <= (&g_226 == ((((safe_add_func_int16_t_s_s(g_382, (***l_439))) > (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((((((+((*l_330) != (**g_225))) , 0x49E0L) , (*l_453)) == &p_77) || g_501) | (****l_453)), 14)) , 0xF921L), p_78)) & 0x39L), 3))) > (***l_383)) , (void*)0))) > (***l_439)) != 0L) , (*g_54));
                if ((***l_95))
                {
                    l_486 = ((((**g_226) != (*p_77)) ^ ((l_502 != &p_77) > p_78)) && ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((p_78 >= 5L) , (p_78 <= (p_78 || 0UL))))), 13)) , g_382));
                }
                else
                {
                    uint32_t l_506 = 0xEE59FCD1L;
                    int32_t l_507 = (-1L);
                    l_507 = l_506;
                }
            }
            (**l_383) = (*p_77);
        }
        else
        {
            int32_t *****l_512 = &g_225;
            uint8_t l_520 = 0UL;
            uint16_t l_607 = 0x9C2EL;
            int32_t ***l_675 = &g_54;
            for (l_327 = 7; (l_327 == (-4)); l_327 = safe_sub_func_uint8_t_u_u(l_327, 6))
            {
                int8_t l_517 = 1L;
                p_78 = (safe_mod_func_int8_t_s_s((((&g_225 != l_512) | p_78) & (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(l_517, 9)) < ((***l_502) && ((void*)0 == (**g_225)))) ^ (((safe_rshift_func_int16_t_s_u((***l_330), 12)) != g_382) || g_382)), p_78))), g_256));
                l_520 = 0x6CF41A44L;
                (***g_225) = (*g_54);
            }
            for (g_277 = (-1); (g_277 == (-15)); g_277 = safe_sub_func_uint8_t_u_u(g_277, 8))
            {
                int32_t l_534 = 0x447C7C14L;
                int32_t *****l_625 = &g_225;
                uint64_t l_644 = 0xC6C15BF0AE782E7FLL;
                int16_t l_651 = 0x6D1EL;
            }
        }
    }
    ((void) sizeof ((g_55 == &l_331 || g_55 == &g_10 || g_55 == &g_59 || g_55 == &g_170) ? 1 : 0), __extension__ ({ if (g_55 == &l_331 || g_55 == &g_10 || g_55 == &g_59 || g_55 == &g_170) ; else __assert_fail ("g_55 == &l_331 || g_55 == &g_10 || g_55 == &g_59 || g_55 == &g_170", "/tmp/tmpwddtust7.c", 665, __extension__ __PRETTY_FUNCTION__); }));
    return p_78;
}
inline static int32_t ** func_79(int32_t ** p_80, uint16_t p_81)
{
    int32_t *l_88 = (void*)0;
    int32_t **l_93 = &l_88;
    int32_t **l_94 = (void*)0;
    g_54 = ((((((*g_54) == (void*)0) , l_88) != l_88) || ((((safe_lshift_func_uint8_t_u_s((g_10 > 6L), 7)) && 6UL) , (safe_rshift_func_uint16_t_u_u(g_10, (((p_81 >= g_10) , l_93) != l_94)))) , g_59)) , p_80);
    ((void) sizeof ((g_54 == 0) ? 1 : 0), __extension__ ({ if (g_54 == 0) ; else __assert_fail ("g_54 == 0", "/tmp/tmpwddtust7.c", 684, __extension__ __PRETTY_FUNCTION__); }));
    return &g_55;
}
inline static int8_t func_83(int32_t p_84, uint32_t p_85)
{
    (*g_54) = (*g_54);
    (*g_54) = (*g_54);
    return p_85;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10;
    csmith_sink_ = g_59;
    csmith_sink_ = g_170;
    csmith_sink_ = g_195;
    csmith_sink_ = g_256;
    csmith_sink_ = g_277;
    csmith_sink_ = g_382;
    csmith_sink_ = g_501;
    csmith_sink_ = g_564;
    csmith_sink_ = g_745;
    platform_main_end(0,0);
    return 0;
}
