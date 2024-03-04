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
static int32_t g_3 = 0x60F57A7C;
static uint32_t g_47 = 0x9F3B06D9;
static int32_t g_64 = 0x4126315B;
static uint16_t g_70 = 0xA50E;
static uint8_t g_126 = 0x66;
static uint32_t g_139[8] = {5U, 5U, 0x7022D3B1, 5U, 5U, 0x7022D3B1, 5U, 5U};
static int32_t g_182 = 0x20D8B5B8;
static int32_t g_226 = 0;
static int8_t g_227 = (-8);
static uint8_t g_232 = 255U;
static uint8_t g_251 = 0U;
static uint32_t g_282 = 0U;
static uint32_t g_284 = 4294967292U;
static int32_t g_333[6] = {0, 0, 0, 0, 0, 0};
static int32_t g_402 = 0x3DC06B8A;
static int16_t g_413 = 0;
static uint32_t g_462 = 0xC1104DD7;
static uint8_t g_489 = 0x68;
static uint32_t g_490 = 4294967288U;
static uint32_t g_539 = 0U;
static int32_t g_567 = 0xA75933EB;
static uint32_t g_687 = 0x723C1EC7;
static uint16_t g_688[7] = {65534U, 65534U, 65534U, 65534U, 65534U, 65534U, 65534U};
inline static uint8_t func_1(void);
inline static int32_t func_4(uint32_t p_5);
static uint32_t func_18(int16_t p_19, int32_t p_20, uint16_t p_21);
inline static uint16_t func_24(uint32_t p_25, const uint8_t p_26, int16_t p_27);
inline static uint8_t func_31(int16_t p_32, uint32_t p_33);
static uint8_t func_37(uint8_t p_38, uint16_t p_39, const int8_t p_40, uint16_t p_41);
static int32_t func_42(uint32_t p_43, uint32_t p_44, uint16_t p_45);
inline static int32_t func_49(int32_t p_50, int32_t p_51, int16_t p_52, uint8_t p_53, int32_t p_54);
static uint16_t func_57(int32_t p_58, int32_t p_59, uint16_t p_60);
static int32_t func_61(uint32_t p_62);
inline static uint8_t func_1(void)
{
    uint32_t l_2[3];
    int32_t l_807 = 0x074E7DDB;
    int32_t l_808[8][10][3] = {{{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}, {{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}, {{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}, {{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}, {{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}, {{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}, {{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}, {{(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}, {(-1), 0, 0xD91D4A0E}}};
    int16_t l_809[6][7][4] = {{{0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}}, {{0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}}, {{0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}}, {{0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}}, {{0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}}, {{0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}, {0x414E, (-1), 0x38C8, 0xC8D8}}};
    uint16_t l_828 = 65534U;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2[i] = 0x77862FD4;
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    {
        int i;
        l_809[5][1][2] = ((func_4(l_2[g_3]) && ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(l_2[1], 3)), l_2[g_3])) > (l_2[g_3] < (l_808[3][8][0] = (safe_add_func_int16_t_s_s((g_413 = (l_807 = (~((safe_rshift_func_int16_t_s_u(((((l_2[g_3] < (((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(9U, ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(1U, l_2[1])), 1)) >= l_2[g_3]))) | (-1)), l_2[g_3])), g_47)) , g_284) == 0x36), l_2[g_3])), l_2[1])) > 0xB7871B46) <= l_2[g_3]), g_688[0])), l_2[1])) , g_64) || 1) , l_2[0]) ^ 1)) , 1) <= 0x5AB7AA9D) , 0xA6FF), g_413)) , 65535U)))), 7)))))) >= l_2[1]);
        g_333[5] = g_688[6];
    }
    l_808[3][8][0] = (g_232 & (((safe_rshift_func_uint8_t_u_u(((g_282 || (+g_333[3])) < ((((((l_808[2][4][0] & (((((l_807 = l_807) || (g_47 , (((g_251 = 0x01) > (safe_unary_minus_func_int8_t_s(((((safe_mul_func_int16_t_s_s((((0x7E == (safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0x3B67, g_284)), g_3)) > g_687), 0x2D)) ^ g_284), 7)) || 5) & g_3), g_687))) == g_413) > l_808[3][8][0]), g_227)) == l_808[1][1][0]) == 65535U) && 0x2E)))) > l_828))) & 0U) ^ l_808[3][8][0]) == 1U)) != g_232) <= g_489) && 0x9E29EF9D) < 0x31B6) <= 0x1F)), g_490)) & l_828) <= g_126));
    return l_809[5][1][2];
}
inline static int32_t func_4(uint32_t p_5)
{
    int32_t l_8 = 0;
    uint32_t l_9 = 0xAE649F6D;
    int32_t l_46[6];
    int32_t l_464 = 0xD7324796;
    int32_t l_720[4][7] = {{5, 5, 0, 5, 5, 0, 5}, {5, 5, 0, 5, 5, 0, 5}, {5, 5, 0, 5, 5, 0, 5}, {5, 5, 0, 5, 5, 0, 5}};
    uint32_t l_722 = 0x762445D9;
    int32_t l_724 = 0;
    int i, j;
    for (i = 0; i < 6; i++)
        l_46[i] = (-1);
    l_9 = (safe_rshift_func_int16_t_s_s((l_8 = g_3), p_5));
    for (p_5 = 11; (p_5 < 33); ++p_5)
    {
        int16_t l_28 = 0x96A5;
        int32_t l_34 = 0x1466AC3A;
        uint16_t l_689 = 65528U;
        int32_t l_721 = 0x809DFE4C;
        int8_t l_723 = 0x48;
        l_689 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0U, 0x5C)), (func_18(p_5, (safe_lshift_func_uint16_t_u_s(func_24((l_464 = (((l_28 ^ (safe_lshift_func_uint8_t_u_u(p_5, func_31((l_34 = l_28), ((safe_mod_func_int8_t_s_s(g_3, func_37(g_3, (func_42(l_46[3], p_5, l_28) <= g_282), p_5, l_28))) ^ l_28))))) && g_47) && l_46[4])), g_3, l_28), 4)), g_3) , 0xEE))), l_28));
        if ((l_9 | ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((l_689 | 0xBEBA) == (safe_lshift_func_uint8_t_u_u((g_126 = (g_232 = ((l_724 = (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((g_3 & ((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_721 = ((l_720[0][1] = ((((((l_34 = p_5) > (0xEC78 | (l_464 = (((((safe_mul_func_int8_t_s_s((p_5 > (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((0xF98BB2A4 == (g_333[5] = (l_689 == g_182))) , g_413), l_689)), g_139[4]))), l_9)) && 1U) ^ 9U) && 0xF4) , g_489)))) < p_5) && g_490) <= g_490) ^ 65535U)) > g_489)), 0x7C)), 0x9F63)))), l_722)), 2)) , g_227) , 0x6FA471AC))), l_689)), l_723)) ^ l_46[3])) || p_5) > (-1)), g_462)), p_5))) == p_5))), p_5))), g_47)), 9)) > 4294967295U)))
        {
            uint8_t l_732[9][6][4] = {{{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}, {{0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}, {0x60, 2U, 251U, 4U}}};
            int i, j, k;
            if (p_5)
                break;
            l_724 = (safe_sub_func_int8_t_s_s(l_689, (0x1D85 ^ (safe_rshift_func_uint8_t_u_s((l_721 = (safe_mod_func_int32_t_s_s(((0x88952656 & ((!g_251) == (g_227 = l_28))) <= l_732[6][5][2]), (safe_rshift_func_uint16_t_u_u((g_688[0] ^ p_5), 7))))), 6)))));
        }
        else
        {
            int32_t l_735 = 0x2A00E9FD;
            l_735 = 0;
            for (l_28 = 0; (l_28 > (-22)); --l_28)
            {
                uint8_t l_765[5];
                int32_t l_766[8] = {3, 1, 3, 1, 3, 1, 3, 1};
                int i;
                for (i = 0; i < 5; i++)
                    l_765[i] = 0xE5;
                for (g_126 = 0; (g_126 == 30); ++g_126)
                {
                    for (g_232 = 0; (g_232 <= 5); g_232 += 1)
                    {
                        int32_t l_740 = (-1);
                        int i;
                        l_740 = l_46[g_232];
                        if (g_3)
                            break;
                    }
                }
                g_333[3] = ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_5 , p_5), ((l_735 = ((l_721 = (!l_735)) >= (~((((g_688[1] = (2 & (safe_add_func_int16_t_s_s(((p_5 , (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((p_5 ^ (l_766[4] = (((safe_rshift_func_int8_t_s_s((((l_464 = ((g_462 & (((safe_mod_func_uint8_t_u_u(255U, (g_227 = (((((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_5, 3)) >= p_5), 2)) ^ l_765[0]) , g_227) & p_5) | p_5) < g_333[5]) , p_5)))) | g_333[0]) , g_282)) < l_689)) , 1U) == 0x93), g_567)) ^ 0) ^ p_5))), 4)) > g_139[1]), 1))) && p_5), g_139[6])))) || 0xE187) == g_64) , p_5)))) & 5U))), p_5)) , l_689), p_5)), g_687)) < g_182);
            }
            return p_5;
        }
        for (g_251 = (-3); (g_251 > 53); g_251 = safe_add_func_uint32_t_u_u(g_251, 3))
        {
            if (p_5)
                break;
        }
        g_333[2] = ((safe_rshift_func_uint16_t_u_s((!(safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(p_5, ((l_721 = (safe_mul_func_uint16_t_u_u((((l_724 = (0x5C && l_28)) && ((((g_489 >= (p_5 , (g_490 != (((((safe_mod_func_uint16_t_u_u(l_464, g_139[2])) || 1U) , g_687) , 0x21) != 0xF6)))) <= l_34) ^ l_689) < p_5)) > 0xD5F2B8EA), p_5))) , 8U))) , g_64), 3))), 6)) , g_70);
    }
    return l_46[3];
}
static uint32_t func_18(int16_t p_19, int32_t p_20, uint16_t p_21)
{
    uint8_t l_507 = 0x90;
    int32_t l_508 = 0x6CB67E40;
    int32_t l_566 = 0xCA098B23;
    uint32_t l_588[7] = {4294967290U, 0xE33565D5, 4294967290U, 0xE33565D5, 4294967290U, 0xE33565D5, 4294967290U};
    int8_t l_679 = 0x8B;
    int i;
    if (((safe_add_func_int8_t_s_s(((p_20 < (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(5, (0xEA2E9DD4 < g_47))), 2)), (g_70 = 0xAEB0))) && ((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0x77, 5)), (p_19 <= g_284))) < (((g_333[3] <= l_507) != p_20) ^ l_507)) , g_490) , p_20)), 0xB153C2F0)), l_507))) == p_21), g_232)) & p_19))
    {
        uint32_t l_515 = 0U;
        int32_t l_673 = (-7);
        int32_t l_675 = 1;
        l_508 = p_19;
        if ((safe_add_func_uint32_t_u_u(0U, 0xA6298440)))
        {
            g_333[3] = (p_20 = ((-1) || (0x0F28 <= (safe_lshift_func_uint8_t_u_s((1U >= (safe_sub_func_uint16_t_u_u(0U, l_515))), 1)))));
        }
        else
        {
            uint8_t l_516 = 0xDE;
            uint8_t l_540 = 255U;
            const uint32_t l_589 = 2U;
            int32_t l_623 = 0x6692462D;
            int32_t l_624 = (-1);
            int32_t l_625 = 5;
            if (l_516)
            {
                const int32_t l_523 = 5;
                const int32_t l_564 = 0xDCCE724B;
                int32_t l_568[6][8][5] = {{{0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}}, {{0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}}, {{0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}}, {{0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}}, {{0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}}, {{0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}, {0x8CDA6E03, 0x7EACAC37, 0xC320501D, (-2), (-1)}}};
                int i, j, k;
                for (g_226 = (-18); (g_226 == 20); g_226 = safe_add_func_uint16_t_u_u(g_226, 5))
                {
                    uint16_t l_527[8] = {0xD8A2, 0x5E86, 0xD8A2, 0x5E86, 0xD8A2, 0x5E86, 0xD8A2, 0x5E86};
                    int i;
                    g_333[3] = (safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((((l_523 > ((((+(safe_mul_func_int8_t_s_s(((g_333[4] | (1 | (((-4) != ((l_527[0] <= (safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(l_508, (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((+0xC893185E) > g_333[3]), (safe_mod_func_int32_t_s_s((g_539 = (p_20 = (((g_413 = 0xC541) < g_139[4]) < 1))), l_540)))), g_126)))) >= l_515), l_527[5]))) || g_126)) == g_402))) | l_507), p_21))) <= g_47) != g_139[6]) < (-1))) || l_515) == l_516), 3)) || g_282) <= g_227), g_47));
                    g_333[0] = g_251;
                    for (g_402 = 0; (g_402 < (-22)); g_402 = safe_sub_func_int8_t_s_s(g_402, 7))
                    {
                        uint32_t l_565 = 0U;
                        int32_t l_590 = 0x74DED6C0;
                        uint8_t l_591 = 255U;
                        l_568[2][3][0] = (g_567 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((+(l_515 >= (p_20 | (safe_unary_minus_func_uint8_t_u(((g_539 || ((((((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(p_19, 0x6F)), 15)))) && ((safe_rshift_func_uint8_t_u_u(((p_21 , ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((g_489 , (safe_lshift_func_int8_t_s_u((5 <= (((((!((+g_139[0]) , g_251)) >= 0x99) || p_21) && 65535U) > g_490)), l_564))) ^ 0x566D), p_21)), l_565)) || g_402)) && l_507), l_566)) && l_566)) || l_564) | g_462) ^ 0x97) && l_508)) && g_227)))))), l_540)), 7)));
                        g_333[4] = p_21;
                        g_333[2] = (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0, (safe_sub_func_int16_t_s_s((p_19 = (p_21 != (safe_add_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u(((((safe_mul_func_int16_t_s_s((((((g_70 = g_139[4]) <= l_540) >= ((safe_sub_func_int8_t_s_s((l_590 = ((((p_19 , (((l_527[1] , ((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(0xAB)), l_527[5])) <= (safe_add_func_int32_t_s_s(p_21, 4294967288U)))) < l_588[0]) | p_19)) != l_589) <= 0xB4EB) > 0xDA)), l_516)) < g_489)) , l_591) && 6U), p_20)) , l_540) , l_566) > g_139[7]), g_227)) | 0x97FB) == g_402) , 0), g_539)))), p_20)))), 0x76));
                        l_566 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_568[1][7][0] = (-8)), 2)), ((p_20 ^ (g_402 && ((0xEC352537 > 0xCB845241) & (safe_lshift_func_uint16_t_u_u((((((g_139[6] != (safe_add_func_uint8_t_u_u(l_516, (l_508 = g_402)))) & (((g_251 <= 5U) ^ g_489) || l_564)) >= 2) && 0) & l_527[0]), l_523))))) || g_227))) & g_64);
                    }
                }
                g_333[3] = ((safe_lshift_func_uint16_t_u_u(0xB985, 0)) | ((((l_625 = (!(safe_mod_func_int16_t_s_s(p_19, ((safe_rshift_func_int16_t_s_u((((!(0U > g_64)) && (((l_624 = (((safe_rshift_func_uint8_t_u_s(l_523, 5)) < (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_623 = (safe_mod_func_int32_t_s_s((((g_227 = (l_588[4] >= g_226)) == ((((~(((safe_add_func_uint32_t_u_u(l_588[5], (g_139[0] == 255U))) , l_515) <= g_333[3])) && g_413) > g_490) >= p_21)) && p_19), p_19))) | 0x18), 2)), l_624)) >= l_515) != 0U)) | l_566)) != g_284) || g_226)) != p_20), g_47)) , l_588[1]))))) & p_19) != p_21) < l_515));
                g_333[3] = (((safe_mod_func_int16_t_s_s((p_19 ^ ((p_20 & ((safe_rshift_func_uint8_t_u_s((g_333[3] < ((-4) <= p_19)), 6)) <= (((safe_lshift_func_uint8_t_u_u(g_139[2], 3)) < g_182) < ((g_490 , (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_625 = (g_333[3] | (-9))), 0x95772E4B)), g_284)), 7)) && p_20), l_507))) && g_47)))) <= g_333[3])), g_70)) <= 0x3B) != g_226);
                p_20 = (safe_mul_func_uint8_t_u_u(0x2F, p_21));
            }
            else
            {
                g_333[3] = 0xFCBA6236;
            }
            p_20 = p_19;
        }
        for (g_182 = 7; (g_182 >= 0); g_182 -= 1)
        {
            int i;
            if (g_139[g_182])
                break;
        }
        for (p_20 = 14; (p_20 > 14); p_20++)
        {
            uint32_t l_663 = 1U;
            int32_t l_668[8] = {1, 1, 1, 1, 1, 1, 1, 1};
            int i;
            for (p_21 = 1; (p_21 <= 7); p_21 += 1)
            {
                g_333[3] = (safe_add_func_uint8_t_u_u((!1U), l_515));
            }
            for (g_284 = 0; (g_284 <= 5); g_284 += 1)
            {
                uint32_t l_674 = 5U;
                int32_t l_676 = (-9);
                int i;
                for (g_539 = 1; (g_539 <= 6); g_539 += 1)
                {
                    int8_t l_649[2][4][3];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_649[i][j][k] = 1;
                        }
                    }
                    g_333[g_284] = g_139[(g_539 + 1)];
                    l_676 = (l_588[g_284] & ((((safe_mul_func_int8_t_s_s(((l_649[0][0][0] = l_588[g_539]) != ((((g_232 = (0xE318 && ((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((!(g_70 = (!l_588[g_539]))) | l_588[g_539]) , (((safe_mul_func_int8_t_s_s(((+(((safe_rshift_func_int8_t_s_u((((((((safe_rshift_func_uint8_t_u_u((g_333[g_284] = (g_226 <= (((((l_663 = p_19) && (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((((l_668[7] = 5) || ((safe_mul_func_int16_t_s_s((p_19 = ((((safe_rshift_func_int16_t_s_s((l_673 | g_284), 0)) > g_489) < g_139[4]) , l_515)), l_674)) ^ 5)) && 4294967291U) < p_20) > l_663), g_139[4])), 1U))) && g_232) >= 255U) < (-4)))), p_20)) , 4294967295U) & 0x979960ED) ^ 0x611C) , l_675) >= g_182) & p_20), 4)) && g_251) , g_64)) > l_515), p_20)) <= l_673) || g_490)), 0x2F69)), 65535U)) < 5))) || g_3) , 0) | p_20)), 0x6B)) < 4294967290U) != g_227) > g_539));
                    return l_676;
                }
                g_333[g_284] = 0xAA792C69;
                g_333[0] = (g_139[4] >= l_588[0]);
                for (l_515 = (-5); (l_515 > 15); ++l_515)
                {
                    l_679 = 0x8D098C8D;
                    return p_21;
                }
            }
            g_687 = (((2U | ((l_508 || ((((p_20 , ((l_668[3] = (l_515 <= (+1U))) == p_19)) > (((g_227 = ((safe_add_func_int8_t_s_s(0, (safe_mul_func_int8_t_s_s(l_566, (safe_lshift_func_uint8_t_u_s((((g_333[3] = (p_21 || l_515)) , l_507) < l_675), 7)))))) == g_282)) & (-6)) & 2)) && g_462) != 0xF4)) , p_20)) >= g_489) , l_668[2]);
            for (g_64 = 5; (g_64 >= 0); g_64 -= 1)
            {
                int i;
                l_675 = g_333[g_64];
            }
        }
    }
    else
    {
        p_20 = p_20;
        g_688[0] = (g_333[2] = p_21);
    }
    p_20 = g_227;
    return g_539;
}
inline static uint16_t func_24(uint32_t p_25, const uint8_t p_26, int16_t p_27)
{
    uint32_t l_480 = 0xB0531F4C;
    int32_t l_487 = (-8);
    int32_t l_488 = 7;
    g_333[2] = (!(p_25 , g_462));
    g_490 = (g_489 = ((g_413 = ((safe_rshift_func_uint16_t_u_s((((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(p_25, p_26)), (safe_sub_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s((p_27 = (l_480 >= (g_333[3] = p_27))), (l_488 = (safe_rshift_func_int8_t_s_u((((((safe_add_func_uint16_t_u_u(0x31D1, ((p_26 , (l_487 = ((l_480 >= ((((((safe_lshift_func_int16_t_s_u(p_26, 5)) != (l_480 > 0xE2)) < 0xF2563870) & 0) || (-1)) == (-5))) , g_126))) , l_480))) >= p_25) ^ 0x3D) , g_284) || g_126), 2))))) < l_480) & 0x76), p_25)))) ^ p_25), g_47)) | g_227), g_126)) < g_139[4]) , g_284) & 0x6AF4) | g_139[4]), g_139[6])) , g_402)) > 9));
    return p_25;
}
inline static uint8_t func_31(int16_t p_32, uint32_t p_33)
{
    int32_t l_415 = 0xDF1CC407;
    int32_t l_429 = (-1);
    int32_t l_430 = 0x482857D9;
    int32_t l_431[4];
    int32_t l_432 = 0xC820B1F8;
    int32_t l_459 = 0;
    int32_t l_463 = 0x6CD710A7;
    int i;
    for (i = 0; i < 4; i++)
        l_431[i] = 0x1FDC0918;
    l_432 = (l_431[1] = ((l_415 = (((g_70 = (l_415 == p_33)) & (g_126 < (((l_430 = (~((l_429 = (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((g_413 = (safe_add_func_int32_t_s_s(((((p_32 ^ (((p_33 ^ 0x76BD8309) <= ((((p_33 ^ (l_415 == (safe_add_func_uint16_t_u_u(((((((0x304A > 0xBC74) || l_415) >= g_402) ^ 0xD3) & 0x783F) | l_415), g_333[3])))) & l_415) && l_415) , g_333[4])) || 5U)) != g_226) && 0x3ED56C7A) > 0xED30), 0U))), l_415)) <= (-1)) && 0xD4D5) || 8), l_415)) > l_415), g_126)), l_415))) & (-3)))) ^ l_415) & g_226))) || 0xF1)) & 0xFC));
    l_463 = (((l_415 = (p_33 | p_32)) <= ((g_333[3] & ((safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((!((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_430 = (safe_add_func_uint8_t_u_u(((-3) >= ((g_413 = (l_432 = (safe_unary_minus_func_uint8_t_u((~(l_431[0] = ((((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(g_282, ((p_33 & (p_33 ^ ((g_462 = (safe_add_func_int8_t_s_s((((l_429 = ((safe_lshift_func_int8_t_s_u((g_227 = (((((l_459 ^ (safe_sub_func_int16_t_s_s((((1U || l_430) , g_226) <= 0), p_33))) ^ p_33) == p_33) || g_64) , l_431[1])), 6)) , g_284)) < 4294967288U) | 0x6D), g_226))) > p_32))) && l_430))), p_33)), p_32)) | l_432) != l_459) | p_32))))))) > g_333[3])), p_33))), 1)), g_70)) ^ g_64)), l_459)), p_32)) > g_126), g_64)))) != l_459)) & p_32)) < p_32);
    return l_431[2];
}
static uint8_t func_37(uint8_t p_38, uint16_t p_39, const int8_t p_40, uint16_t p_41)
{
    return p_41;
}
static int32_t func_42(uint32_t p_43, uint32_t p_44, uint16_t p_45)
{
    int16_t l_48[4] = {(-1), (-10), (-1), (-10)};
    int32_t l_71 = 0xE8B7DD14;
    uint8_t l_136[2];
    int32_t l_174 = 0x8C1DB4CF;
    int32_t l_175 = 0;
    int32_t l_237 = 0x3726D545;
    int8_t l_331[8][10] = {{1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}, {1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}, {1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}, {1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}, {1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}, {1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}, {1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}, {1, 0, 0x80, 0x89, 0xDD, 0xE1, (-1), 0x89, 0x9B, 0}};
    int8_t l_372 = (-5);
    int32_t l_391 = 0xBA694CA9;
    uint8_t l_414[9] = {0x66, 3U, 0x66, 3U, 0x66, 3U, 0x66, 3U, 0x66};
    int i, j;
    for (i = 0; i < 2; i++)
        l_136[i] = 0U;
    if ((g_47 = p_43))
    {
        uint32_t l_72 = 0xFC71010F;
        int32_t l_127 = 2;
        for (p_44 = 0; (p_44 <= 3); p_44 += 1)
        {
            int i;
            l_127 = (g_126 = func_49((safe_lshift_func_int8_t_s_u(l_48[p_44], 5)), (((func_57((l_72 = (l_71 = func_61(p_43))), l_48[1], (p_45 = (((safe_lshift_func_int8_t_s_s(0x3C, 1)) != 4294967295U) ^ g_47))) == ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((!(((safe_mul_func_uint8_t_u_u((g_3 != 65530U), 4U)) == p_44) < g_3)), 0x5869)) < g_3) >= p_44), (-2))) == p_44), 7)), p_43)), g_3)) & 0x36)) > g_3) < p_44), g_3, p_43, p_43));
        }
        l_127 = p_45;
        for (p_45 = 0; (p_45 <= 3); p_45 += 1)
        {
            int i;
            return l_48[p_45];
        }
    }
    else
    {
        int8_t l_140 = 0xB9;
        int32_t l_167 = 0x159496D9;
        uint32_t l_170 = 0xB2A3AB48;
        uint8_t l_171 = 0xF1;
        int32_t l_176[8] = {0, 0, 0xC92A46F7, 0, 0, 0xC92A46F7, 0, 0};
        uint8_t l_236 = 0x64;
        uint8_t l_332 = 0x90;
        int i;
        l_140 = (safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((p_43 | p_43), (safe_mul_func_uint8_t_u_u((((((((g_3 , (safe_lshift_func_uint8_t_u_s(p_44, 1))) || (l_136[0] == (((g_3 != (safe_rshift_func_uint8_t_u_s(((((((g_139[4] = 0xDFBEF98C) == p_45) | 0x6F40) != p_44) , 0x7E50) , p_45), 4))) , g_3) , g_126))) , 0x4999CA7B) >= 0x799C725F) <= g_126) , p_43) != 0x0918AE13), g_70)))) >= 0U) <= g_70), l_136[0]));
        if (g_47)
        {
            return g_3;
        }
        else
        {
            uint32_t l_156 = 0x9A7C6434;
            int32_t l_172[5] = {(-1), (-2), (-1), (-2), (-1)};
            uint32_t l_173[1][1][7];
            int32_t l_256[6];
            int16_t l_358[5] = {(-1), (-9), (-1), (-9), (-1)};
            uint32_t l_375 = 0xAD39461B;
            uint32_t l_401 = 4294967288U;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_173[i][j][k] = 0U;
                }
            }
            for (i = 0; i < 6; i++)
                l_256[i] = (-1);
            l_176[1] = ((!((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_48[1], (p_44 == (safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(0U, (((g_139[4] <= (l_175 = ((l_174 = (safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(l_156, (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_172[0] = (l_71 = (safe_rshift_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(((p_44 , (safe_lshift_func_uint8_t_u_u((l_167 = 0x88), 7))) && 0x2C60FB40), (((safe_sub_func_uint32_t_u_u(0xD2B34E31, 0x92475546)) < 7U) && l_170))) , p_45) == (-9)) , 0x9145), l_171)))), g_70)) & l_173[0][0][2]), 0)))), g_47))) > l_171))) != g_126) ^ p_43))) >= 0x7D), p_43))))), 10)), g_139[0])) > p_45)) != g_126);
            for (l_170 = 0; (l_170 > 57); l_170++)
            {
                int8_t l_179 = 0x45;
                int32_t l_207 = (-1);
                uint32_t l_300 = 0x9A67DAFA;
                int32_t l_344[7][8][1] = {{{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}};
                int i, j, k;
                for (l_171 = 0; (l_171 <= 3); l_171 += 1)
                {
                    int8_t l_183 = (-4);
                    if (l_179)
                        break;
                    if (p_43)
                    {
                        return l_170;
                    }
                    else
                    {
                        const int8_t l_188 = 0x87;
                        g_182 = (safe_lshift_func_int16_t_s_s(p_44, 15));
                        l_183 = g_47;
                        l_207 = (safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((l_188 == ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(4294967287U, (~(g_70 ^ (((safe_rshift_func_uint8_t_u_u((l_174 = (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_45, (((((l_156 | ((((p_45 == ((((safe_lshift_func_int16_t_s_s((-2), 9)) & (g_126 | (!((g_3 == g_139[0]) == l_176[1])))) >= g_70) ^ g_3)) != g_139[3]) , 0) , l_183)) | 0xDF) | l_136[1]) && g_3) && 0x8D))), l_173[0][0][6])), l_167)) && l_167), p_44))), 4)) > 0x6C1BE638) && 1))))) , l_183), p_45)) ^ l_175)), (-1))) & g_64), l_172[0]));
                    }
                    if ((l_179 , ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((l_174 = l_173[0][0][2]), (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((0x77 == (safe_mul_func_uint16_t_u_u(((((g_227 = (l_176[3] = (g_226 = p_44))) > ((safe_sub_func_uint8_t_u_u((((p_45 = ((p_44 >= ((safe_rshift_func_uint16_t_u_s(0xF892, 5)) || (8U ^ ((p_44 | (g_70 > g_3)) & l_140)))) , g_126)) != p_44) , p_45), 255U)) && 6)) | g_139[4]) == 7U), g_3))) <= l_179), p_44)), 3)), 4294967295U)))) , 1U), p_43)) || 255U), l_170)), p_44)), p_44)) | 0xF7)))
                    {
                        if (g_227)
                            break;
                    }
                    else
                    {
                        g_232 = (p_44 >= (l_207 , p_43));
                    }
                }
                if ((safe_lshift_func_int16_t_s_s(((p_43 ^ (safe_unary_minus_func_uint32_t_u(l_236))) < l_237), 10)))
                {
                    uint16_t l_250 = 1U;
                    int32_t l_257 = 0;
                    int32_t l_281 = 0;
                    int32_t l_283 = 0x393EBF62;
                    l_257 = (safe_add_func_uint8_t_u_u((g_232 = (l_256[4] = (l_71 <= (safe_rshift_func_int8_t_s_u((((l_172[2] = (((((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(1U, ((safe_mod_func_int8_t_s_s(l_175, (safe_add_func_uint8_t_u_u((l_250 <= (g_251 = 0x85C46A89)), (safe_lshift_func_int16_t_s_u(p_44, (((p_45 , ((safe_mod_func_uint8_t_u_u(l_250, l_48[3])) | p_45)) <= p_44) < l_173[0][0][2]))))))) , l_174))), 0xEB426B7B)) <= p_44) || g_47) && l_140) <= 0xFA1FB798)) | p_45) != p_44), l_250))))), l_250));
                    g_284 = (l_283 = ((safe_sub_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((p_45 <= g_47), (safe_mod_func_int32_t_s_s((p_43 ^ ((l_176[1] = ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_43, (0xDFFA3906 | (safe_add_func_int8_t_s_s(((l_174 = (g_139[4] == (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((0x05 != (((safe_add_func_int16_t_s_s(g_139[4], (((((l_281 = (l_257 = (l_207 = (safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s(((p_44 | 0x99) ^ 0xA6EBB118), l_237))))))) & l_173[0][0][2]) | l_179) < 1) > 0xE093))) && l_207) , p_44)), g_139[7])) > l_179), p_44)))) <= g_227), 0))))), l_236)), l_136[0])) != (-4))) && p_44)), p_44)))) , l_237) , g_47), g_139[2])) | g_282));
                    if (((safe_sub_func_uint16_t_u_u(((+((((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((((l_176[1] = (l_175 = (((-10) >= g_282) == (((((((safe_mod_func_int16_t_s_s((((((((safe_lshift_func_uint16_t_u_s(l_300, 13)) , ((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((((g_47 | (safe_sub_func_uint32_t_u_u((p_44 = ((safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((1 & (safe_mod_func_int32_t_s_s((p_43 >= (l_174 = ((safe_mod_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(p_45, (safe_add_func_uint16_t_u_u(((g_64 < (safe_add_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(p_43, p_43)), l_174)), 0x71DD)) != g_251), p_43))) , 0x4334), g_3)))) >= l_331[2][9]) , 0xED) != p_43), 0xEC06)) || 1))), g_284))), 0)), p_44)), 8)) && l_256[3]), g_232)) == p_45)), p_45))) >= 5U) ^ g_3) != l_332), g_251)), l_283)) <= g_282)) , (-1)) , g_3) , l_171) | g_70) == 0x4C), l_332)) ^ p_45) ^ l_332) || g_251) == l_171) && p_43) <= p_45)))) <= p_43) , l_176[1]), g_227)), g_251)), l_236)) , g_284) || p_43) && p_44) >= l_207) & (-1))) > l_173[0][0][2]), p_45)) ^ p_45))
                    {
                        g_333[3] = (0xC67531C0 ^ 0x92F73DE9);
                    }
                    else
                    {
                        int8_t l_348 = 0x00;
                        int16_t l_359 = 0;
                        l_207 = (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_232 & (0xD1B2 == (g_227 && (p_43 != (((safe_mod_func_uint8_t_u_u(((l_359 = ((safe_mod_func_uint8_t_u_u(l_344[4][4][0], ((safe_unary_minus_func_int8_t_s((((p_45 = (((safe_lshift_func_uint8_t_u_u((l_348 , ((l_176[4] = ((((safe_rshift_func_uint16_t_u_s((~0x3D38F9BD), 7)) ^ (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((g_70 = ((g_182 || (((safe_sub_func_uint32_t_u_u(l_348, g_333[4])) , p_43) >= 0xC9240290)) , l_179)) != l_175), (-4))), g_139[3]))) < p_44) <= (-2))) <= 1)), p_45)) , l_48[1]) == p_45)) != l_358[4]) | p_44))) && g_139[4]))) == 0x6F)) & l_171), 250U)) , 0x8A) || g_139[0]))))), 0xC9FE)), p_43)), l_179));
                        if (g_333[3])
                            continue;
                    }
                }
                else
                {
                    l_175 = p_44;
                    l_174 = (((g_70 = (safe_mod_func_int16_t_s_s(p_45, g_284))) ^ (l_175 == (l_172[0] = (g_333[5] = (((safe_mul_func_int16_t_s_s(0, (p_45 || ((l_71 = (safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(0xC8, (l_358[3] , (safe_add_func_uint16_t_u_u((246U != 0xDA), l_207))))), p_44)) && g_3), 0xB0CE))) == p_43)))) && l_372) && 0))))) ^ g_232);
                }
                l_391 = ((((safe_unary_minus_func_uint8_t_u((+((l_375 <= ((safe_mod_func_int8_t_s_s(l_171, (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(0x3864, ((!(((-7) != ((safe_rshift_func_uint8_t_u_s((l_175 = ((l_172[4] && (l_172[0] = 8)) <= p_44)), ((p_45 || ((safe_sub_func_uint8_t_u_u((l_174 = (safe_sub_func_int32_t_s_s((l_71 = (safe_add_func_int32_t_s_s(g_227, p_45))), 0x824BA821))), 0x20)) , 0x7C56)) != 4U))) <= g_3)) || l_136[1])) != l_207))) && 0xE038), g_139[7])))) && p_44)) , 0xF3)))) < l_173[0][0][5]) ^ 0x537D) == g_70);
            }
            g_333[4] = ((l_71 = ((((g_227 ^ (g_402 = (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_44, (((0x71F6875F && g_232) || 0xFCF7) & ((((g_251 , (((((safe_mul_func_uint16_t_u_u((~((l_167 = ((((l_171 & (safe_add_func_int32_t_s_s(l_375, (l_401 = l_375)))) ^ 0x47) >= l_175) & l_173[0][0][2])) | g_70)), g_227)) > 4294967289U) > g_282) < l_176[2]) & 0xCC)) , p_43) > p_44) ^ 0x6F)))), l_174)))) & p_45) , l_173[0][0][3]) <= l_172[2])) < p_44);
        }
    }
    l_175 = p_43;
    g_333[4] = (safe_mod_func_uint16_t_u_u((l_414[8] = (0x0C7C5717 > (safe_add_func_int8_t_s_s(p_45, (!(g_413 = ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(0x93242E56)), (((((p_45 != 0) || ((l_331[4][1] || l_48[1]) , g_402)) && (((((safe_add_func_int32_t_s_s(((g_70 | p_43) && p_44), g_232)) < g_333[3]) & p_45) || g_226) , 0)) && 1) >= l_237))) == g_3))))))), p_45));
    return g_126;
}
inline static int32_t func_49(int32_t p_50, int32_t p_51, int16_t p_52, uint8_t p_53, int32_t p_54)
{
    int32_t l_125[10][6][4] = {{{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}, {{0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}, {0xB808A635, 0x70A8D4FF, 9, 0xFF0AA60C}}};
    int i, j, k;
    return l_125[4][5][0];
}
static uint16_t func_57(int32_t p_58, int32_t p_59, uint16_t p_60)
{
    uint32_t l_79 = 0xEF28ED33;
    int8_t l_106 = 0x2D;
    int32_t l_107 = 8;
    int32_t l_108 = 0xEE0BD24A;
    uint32_t l_109 = 0x97CFCBFA;
    int32_t l_110 = 0x218558EF;
    int32_t l_111 = 0xF9DBC330;
    l_111 = ((p_58 == 0x264A3A20) < (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_79 & (safe_add_func_int32_t_s_s(0x0486D4D4, (g_47 = (l_110 = ((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(((p_58 ^ (safe_mod_func_uint8_t_u_u(0x00, (((safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((65532U >= ((safe_unary_minus_func_int16_t_s((l_108 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((+((((safe_mul_func_uint8_t_u_u((l_107 = (((safe_mul_func_uint8_t_u_u(0x61, (5 && l_106))) & g_3) != 0xF75F)), p_58)) && 4U) <= p_58) != 0x7EDF)) & l_79), 7)), 15))))) > l_79)), 7)) || l_109), 0U)) > 1U), 0x0087D4E0)) != p_60) & g_70)))) == p_59), g_64)) & p_60) < p_59), 65535U)), 2)) , g_70)))))), l_79)), l_109)));
    return p_60;
}
static int32_t func_61(uint32_t p_62)
{
    int16_t l_63[10] = {8, 0xCD43, 1, 1, 0xCD43, 8, 0xCD43, 1, 1, 0xCD43};
    int32_t l_68 = (-10);
    int32_t l_69 = 0x60DEEA39;
    int i;
    g_64 = l_63[4];
    g_70 = (!(l_69 = ((safe_sub_func_uint16_t_u_u(l_63[4], 0x5B44)) <= (l_63[4] > (l_68 = l_63[4])))));
    return g_64;
}
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_47;
    csmith_sink_ = g_64;
    csmith_sink_ = g_70;
    csmith_sink_ = g_126;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_139[i];
    }
    csmith_sink_ = g_182;
    csmith_sink_ = g_226;
    csmith_sink_ = g_227;
    csmith_sink_ = g_232;
    csmith_sink_ = g_251;
    csmith_sink_ = g_282;
    csmith_sink_ = g_284;
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_333[i];
    }
    csmith_sink_ = g_402;
    csmith_sink_ = g_413;
    csmith_sink_ = g_462;
    csmith_sink_ = g_489;
    csmith_sink_ = g_490;
    csmith_sink_ = g_539;
    csmith_sink_ = g_567;
    csmith_sink_ = g_687;
    for (i = 0; i < 7; i++)
    {
        csmith_sink_ = g_688[i];
    }
    platform_main_end(0,0);
    return 0;
}
