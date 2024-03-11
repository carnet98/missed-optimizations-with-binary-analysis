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
static uint8_t g_6 = 0x24L;
static int32_t *g_28 = (void*)0;
static int32_t g_30 = 0xBF58AAE0L;
static int32_t **g_143 = &g_28;
static int32_t ***g_142 = &g_143;
static int8_t g_216 = 0x7AL;
static int16_t g_223 = 0xE2A7L;
static int32_t *****g_229 = (void*)0;
static int8_t g_266 = (-1L);
static int8_t g_339 = 0xA9L;
static int32_t g_725 = (-1L);
static int32_t *g_724 = &g_725;
static int32_t func_1(void);
static int32_t * func_2(int32_t p_3);
static int32_t func_10(int16_t p_11, int32_t * p_12, int32_t * p_13, int32_t * p_14, int32_t p_15);
static int32_t * func_31(int32_t * p_32);
static int32_t * func_52(int32_t * p_53, int32_t ** p_54, int8_t p_55, int32_t ** p_56, int32_t * p_57);
static int32_t * func_59(int32_t * p_60);
static uint32_t func_71(int8_t p_72, int8_t p_73, int32_t ** p_74, uint16_t p_75);
static int32_t func_76(uint8_t p_77, int32_t p_78, int32_t * p_79, uint32_t p_80);
static uint32_t func_90(int32_t ** p_91, int32_t * p_92, uint32_t p_93, uint8_t p_94, int32_t p_95);
static int32_t func_98(uint32_t p_99, uint16_t p_100, int32_t p_101);
static int32_t func_1(void)
{
    int32_t l_7 = (-1L);
    int32_t **l_726 = &g_724;
    (*l_726) = func_2(((safe_mul_func_uint16_t_u_u((g_6 <= l_7), 0x7AB3L)) < g_6));
    return g_223;
}
static int32_t * func_2(int32_t p_3)
{
    uint32_t l_27 = 4UL;
    int32_t *l_29 = &g_30;
    int16_t l_58 = 8L;
    (*l_29) = (((safe_lshift_func_uint8_t_u_s(0UL, 2)) != func_10((safe_sub_func_uint32_t_u_u((+(safe_add_func_int8_t_s_s((-8L), (safe_sub_func_int8_t_s_s(g_6, (safe_lshift_func_uint8_t_u_u(p_3, 0))))))), (((safe_lshift_func_int16_t_s_s(l_27, p_3)) || (0x13L & 0xFDL)) == ((p_3 || g_6) >= g_6)))), g_28, l_29, l_29, (*l_29))) || p_3);
    (*g_724) = func_10((!((void*)0 == &g_28)), &g_30, func_52(&g_30, &l_29, l_58, &l_29, func_31(func_31(func_59(&g_30)))), g_724, p_3);
    return l_29;
}
static int32_t func_10(int16_t p_11, int32_t * p_12, int32_t * p_13, int32_t * p_14, int32_t p_15)
{
    int32_t **l_33 = &g_28;
    int16_t l_34 = 1L;
    (*l_33) = func_31(p_14);
    (**l_33) = (l_34 > ((p_14 != (void*)0) > (**l_33)));
    for (l_34 = (-7); (l_34 <= 14); l_34 = safe_add_func_uint8_t_u_u(l_34, 5))
    {
        uint32_t l_37 = 0x898CBDB6L;
        int32_t *l_47 = &g_30;
        (**l_33) = (l_37 == (safe_rshift_func_int8_t_s_s((-3L), (~(l_37 == (safe_add_func_uint8_t_u_u((&p_12 == &g_28), p_11)))))));
        for (p_11 = 0; (p_11 == (-8)); --p_11)
        {
            int8_t l_48 = 1L;
            for (g_30 = 0; (g_30 != (-25)); g_30 = safe_sub_func_uint32_t_u_u(g_30, 1))
            {
                (*l_33) = func_31(func_31(func_31(l_47)));
            }
            if (l_48)
                break;
        }
        for (p_11 = (-5); (p_11 > 15); p_11++)
        {
            (*l_33) = func_31(func_31(func_31(l_47)));
        }
    }
    return (*g_28);
}
static int32_t * func_31(int32_t * p_32)
{
    return p_32;
}
static int32_t * func_52(int32_t * p_53, int32_t ** p_54, int8_t p_55, int32_t ** p_56, int32_t * p_57)
{
    int32_t *l_342 = &g_30;
    int32_t *****l_345 = (void*)0;
    int32_t ****l_347 = (void*)0;
    int32_t *****l_346 = &l_347;
    int32_t l_487 = 1L;
    uint8_t l_541 = 3UL;
    int32_t l_592 = 0xD41E486DL;
    (*g_143) = l_342;
    if ((((safe_add_func_uint8_t_u_u((p_55 || (g_229 != (void*)0)), (65531UL ^ 0UL))) || (l_345 != l_346)) ^ (0UL ^ 5UL)))
    {
        int32_t ****l_348 = (void*)0;
        (*l_346) = l_348;
        (**g_142) = (*g_143);
    }
    else
    {
        int32_t *****l_357 = &l_347;
        int32_t l_377 = (-4L);
        uint32_t l_378 = 1UL;
        (***g_142) = ((((&p_53 == (void*)0) | (safe_lshift_func_uint16_t_u_u((((((safe_add_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s((((((safe_add_func_uint16_t_u_u(((void*)0 != l_357), (safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((0x88C05FBDL | (safe_add_func_int32_t_s_s(((p_55 <= (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_55, (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((g_223 >= (-2L)) <= 0x315CL) <= (-1L)) || 0xAAL), g_266)), g_223)))), l_377)), 4))) & l_378), (**p_56)))), 1)), g_223)) | (*g_28)))) ^ g_223) >= g_339), (*p_57))))) < g_216) ^ p_55) == g_6) ^ g_223), 0xDC43L)) != (*l_342)) ^ g_339) && g_216), (-5L))) || g_223) || 0xD6846D41L) | 0UL) || g_30), p_55))) == 0x3BL) || p_55);
        for (g_216 = (-4); (g_216 <= (-3)); g_216++)
        {
            int32_t *l_383 = &g_30;
            if ((*p_57))
            {
                int32_t *l_386 = &l_377;
                if ((**p_54))
                {
                    (**p_56) = (safe_mul_func_uint8_t_u_u(g_266, g_266));
                    (**p_56) = 0xBA6F3B49L;
                    (**g_142) = (**g_142);
                    return l_383;
                }
                else
                {
                    (*l_383) = (**p_54);
                    (*p_53) = (*p_53);
                    for (g_6 = 0; (g_6 > 46); g_6 = safe_add_func_int8_t_s_s(g_6, 3))
                    {
                        l_386 = (void*)0;
                    }
                    (*p_56) = (*g_143);
                }
            }
            else
            {
                int32_t ***l_395 = &g_143;
                (**p_54) = (safe_rshift_func_uint8_t_u_s(((0xF3L && ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_395 != &g_143), (safe_sub_func_uint8_t_u_u(((((**l_395) != (*p_56)) && (~((void*)0 == (*p_54)))) <= (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((p_55 >= 0x1EL), (*l_383))), 0x40L))), p_55)))), p_55)) >= p_55), g_6)) >= p_55)) == 0L), g_266));
                (*g_28) = (***g_142);
            }
            if ((***g_142))
                break;
            return (*g_143);
        }
    }
    if ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((safe_lshift_func_int8_t_s_u(p_55, 0)) ^ g_6))), ((8UL & ((void*)0 != &l_347)) & ((safe_mod_func_int8_t_s_s(((**g_142) != (*p_54)), (((safe_mul_func_int8_t_s_s((((((safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((&g_142 == (void*)0), g_339)) < g_216), 0x45L)) && p_55) & 0x865C0EDCL) & p_55) & g_216), g_30)) > (*l_342)) || 0x2BL))) <= 1UL)))))
    {
        uint32_t l_425 = 7UL;
        int32_t *****l_440 = &l_347;
        int32_t l_524 = 1L;
        int32_t l_538 = 0xADD14C69L;
        (*p_56) = func_59(func_31((*g_143)));
        (*p_56) = func_59((*p_56));
        if (((0x7741L > (p_55 == ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_u((l_425 > 0x8A2FL), 5)))), 0x51L)), ((safe_sub_func_uint16_t_u_u(65535UL, g_339)) <= 0xCB93F0E8L))) & (safe_sub_func_int16_t_s_s(((((+p_55) < 1UL) && g_223) != g_30), 4L))), p_55)) && 0L))) != 1L))
        {
            int32_t l_436 = (-3L);
            int32_t *****l_441 = (void*)0;
            int32_t *l_479 = &g_30;
            if ((~0x5DL))
            {
                int8_t l_439 = 0x7EL;
                (*l_342) = (((((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(l_436, 0x1BDDDD12L)) <= p_55), 4294967287UL)) ^ (safe_sub_func_int8_t_s_s((l_439 <= ((l_440 != l_441) != (safe_mul_func_uint8_t_u_u(((*g_142) == (void*)0), p_55)))), g_339))) || p_55) >= g_216) != 0xE3093133L);
                for (g_6 = 7; (g_6 < 56); ++g_6)
                {
                    (*p_53) = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_339, 0)), (safe_lshift_func_uint8_t_u_u(((1UL < 0xB60CL) != (p_55 >= ((*l_342) == (safe_add_func_int8_t_s_s(0x63L, (!((-6L) < (l_439 != (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(p_55, 1L)) > p_55) || 0x6A233A8CL), l_439)), p_55)) < l_439), 1)) >= 0xA0L), 4UL)))))))))), p_55))));
                }
            }
            else
            {
                int16_t l_486 = (-1L);
                int32_t ***l_492 = &g_143;
                if ((safe_rshift_func_uint16_t_u_u((1UL || 0L), ((safe_sub_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((0x6D7FL > g_266) | (g_223 & ((((((((((safe_lshift_func_uint8_t_u_s((l_479 == (void*)0), (safe_add_func_int16_t_s_s(((**p_54) >= ((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_55 | p_55), l_486)), 0xD2L)) && 1L)), g_223)))) > g_216) || 4L) != (-1L)) < (*l_479)) <= 7UL) > g_266) == 0x82E4L) > 4L) != 0x76CBL))), g_6)) > l_487) >= (-1L)), p_55)) <= 0xD16D59C3L) && (-5L)), l_486)) || (*p_53)))))
                {
                    int32_t *l_488 = (void*)0;
                    (*p_56) = func_31(l_488);
                }
                else
                {
                    for (l_486 = (-27); (l_486 > (-1)); l_486 = safe_add_func_uint8_t_u_u(l_486, 6))
                    {
                        int32_t **l_493 = (void*)0;
                        if ((**g_143))
                            break;
                        (**p_54) = (~((&p_56 == l_492) && (l_493 != &p_53)));
                        if ((***g_142))
                            continue;
                        if ((**p_54))
                            break;
                    }
                }
            }
            (*p_56) = (*p_54);
        }
        else
        {
            int32_t ***l_527 = (void*)0;
            (*p_53) = (safe_add_func_int16_t_s_s(g_216, (safe_mul_func_uint8_t_u_u(((**g_142) == (void*)0), 0x84L))));
            for (g_30 = 0; (g_30 != (-2)); g_30 = safe_sub_func_int16_t_s_s(g_30, 1))
            {
                int32_t ***l_526 = &g_143;
                if ((~(safe_sub_func_uint32_t_u_u(2UL, p_55))))
                {
                    int32_t l_522 = 0xDC977273L;
                    int8_t l_523 = 0x9CL;
                    int32_t l_525 = (-3L);
                    l_525 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((1UL == ((((safe_sub_func_uint8_t_u_u(g_339, (safe_mod_func_int32_t_s_s((p_55 != ((void*)0 != &g_142)), ((safe_sub_func_int32_t_s_s((((1L <= 0x34L) & (safe_mul_func_int8_t_s_s((+(safe_sub_func_int16_t_s_s(p_55, (safe_rshift_func_uint8_t_u_s(p_55, p_55))))), p_55))) == g_6), 0L)) ^ 0xA6L))))) || 0x9EL) & 1UL) >= l_522)), l_523)), l_524));
                }
                else
                {
                    uint32_t l_532 = 0x9621E6B4L;
                    int32_t l_533 = 0xE73530DFL;
                    int32_t *****l_534 = &l_347;
                    l_527 = l_526;
                    for (g_216 = 27; (g_216 == (-13)); --g_216)
                    {
                        int32_t *l_537 = &l_487;
                        (*l_537) = ((((safe_mul_func_int8_t_s_s(0x97L, (l_532 & (l_533 < ((g_229 != l_534) != (safe_rshift_func_uint16_t_u_u(p_55, 4))))))) < ((0L >= ((**g_142) == (*p_56))) | (*p_57))) ^ g_339) > p_55);
                        (**l_526) = (void*)0;
                    }
                }
                l_538 = (*p_53);
                if ((*l_342))
                    continue;
                if ((*p_57))
                    break;
            }
        }
    }
    else
    {
        int32_t l_542 = 0x72B964FEL;
        int8_t l_606 = 1L;
        int32_t l_619 = 0x0C32995CL;
        int32_t *l_639 = &l_619;
        int32_t ****l_652 = (void*)0;
        uint32_t l_671 = 0x5DFC3F0EL;
        int32_t l_706 = (-4L);
        if ((safe_add_func_uint32_t_u_u((l_541 | ((*g_28) && (0x2CL || (((l_542 != (l_542 & ((+g_6) <= (l_542 != (((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((+p_55), p_55)), 0x1CB5L)) <= g_223) < g_223))))) <= p_55) < 0x45L)))), g_266)))
        {
            int32_t l_572 = (-5L);
            int32_t l_573 = 1L;
            for (g_339 = 0; (g_339 == (-1)); g_339--)
            {
                int8_t l_567 = 0x49L;
                for (g_30 = 0; (g_30 >= (-14)); g_30 = safe_sub_func_int8_t_s_s(g_30, 8))
                {
                    l_572 = (safe_mul_func_uint8_t_u_u((~((safe_unary_minus_func_int16_t_s(((void*)0 != &l_347))) >= (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(g_223, 1)) || (((safe_add_func_uint8_t_u_u(0x1FL, (safe_mul_func_int16_t_s_s(g_30, (*l_342))))) ^ (safe_rshift_func_uint8_t_u_s(((*l_342) < l_567), 0))) < (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(1L, 0x32L)), (-6L))))), 6)))), (-10L)));
                }
            }
            l_573 = (*g_28);
        }
        else
        {
            int8_t l_584 = 8L;
            int32_t *l_601 = (void*)0;
            int32_t ****l_617 = &g_142;
            int32_t l_638 = 5L;
            if ((safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((((p_55 ^ (((safe_rshift_func_int8_t_s_s((((l_584 != ((safe_add_func_int8_t_s_s(g_216, ((l_542 & ((p_55 ^ ((0x5BL & (safe_add_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(246UL, (+g_339))) & 0UL) <= l_584), l_584))) && 1L)) && 0x3AE2L)) > g_266))) == l_584)) >= g_266) != 0xE2F4FFE4L), 2)) != l_592) | 1L)) == l_584) && p_55) >= 0x06343A8DL), (-1L))), l_542)) | 1UL), 0x26L)) <= p_55), l_584)))
            {
                int32_t ****l_618 = &g_142;
                if ((safe_mul_func_uint8_t_u_u(p_55, (((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(0x0391L, 3)) >= (l_601 == (*p_56))), ((p_55 ^ (safe_rshift_func_uint16_t_u_s((&g_142 != (void*)0), (0xFA2E92F0L && (safe_mod_func_int8_t_s_s((g_339 > l_542), g_30)))))) < p_55))), 2UL)) ^ l_606) < p_55))))
                {
                    int32_t l_607 = 0x9D2D8EECL;
                    uint32_t l_650 = 4UL;
                    int32_t ****l_651 = &g_142;
                    int32_t *l_673 = &l_638;
                    if (l_607)
                    {
                        int32_t ****l_612 = &g_142;
                        l_619 = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((void*)0 == l_612), 12)) & ((((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((l_617 == l_618) < ((**g_142) == (***l_617))) & (**p_56)) <= (((void*)0 != (*p_54)) != p_55)), 0x981DL)), 0x09L)) == (****l_612)) && l_607) <= (*g_28))), g_6));
                        (***l_618) = (void*)0;
                    }
                    else
                    {
                        (**g_143) = (safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((g_229 == g_229) < (&p_56 == &p_54)), (+(safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((*g_28) > (((((*p_54) != (void*)0) && (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(g_223, 0)), ((((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u(9UL, (***g_142))))) < l_638) == 0x2FL) > 0x0E5EL))), 2))) > (****l_617)) != g_6)) <= p_55), 6)), g_223))))) == g_216), g_216));
                        (****l_618) = 4L;
                        (***l_618) = (void*)0;
                        (***l_618) = (*p_54);
                    }
                    if ((**p_56))
                    {
                        int32_t l_653 = 1L;
                        (***l_618) = l_639;
                        (*l_342) = (**p_54);
                        (**p_56) = (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(0x2B68L, (safe_sub_func_int16_t_s_s(((((-2L) & (((((safe_add_func_uint16_t_u_u((g_339 > (safe_lshift_func_int16_t_s_s(l_650, 6))), ((l_651 == l_652) > g_6))) >= ((g_6 >= g_223) >= (****l_651))) <= (-1L)) || 5L) != p_55)) ^ p_55) >= g_216), l_653)))), (*l_639)));
                    }
                    else
                    {
                        (*p_53) = 0x7B141089L;
                        (*l_639) = (+3L);
                        (*l_618) = &p_56;
                        (*p_56) = (*g_143);
                    }
                    if ((p_55 != (safe_mod_func_uint16_t_u_u((((0xA4086E0AL || ((g_216 && ((safe_lshift_func_int16_t_s_s(g_216, ((((+p_55) != (g_216 > ((void*)0 != (**l_651)))) > (0x74L & g_223)) & g_216))) <= 0x5E86082FL)) < 0x6772L)) ^ p_55) || p_55), p_55))))
                    {
                        uint32_t l_672 = 0x7C9C6825L;
                        (*p_57) = (((g_266 == (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((((!0x50L) <= ((*p_53) > p_55)) == ((g_339 <= 0x3A01L) || (l_652 != l_652))) == ((safe_sub_func_uint32_t_u_u(p_55, 0x65595804L)) != p_55)), l_671)) != (*l_639)), p_55)) && 255UL), p_55)), 0L))) == l_672) != g_339);
                        (*p_57) = 0x247009E8L;
                        (*g_143) = (***l_618);
                        l_673 = (*p_56);
                    }
                    else
                    {
                        return (*p_54);
                    }
                }
                else
                {
                    int32_t *l_678 = &l_592;
                    if (((safe_lshift_func_uint16_t_u_u(g_339, 13)) <= (safe_mod_func_uint32_t_u_u((((*p_56) != l_678) || (safe_rshift_func_int8_t_s_s(((*p_57) && (safe_add_func_int32_t_s_s((-1L), 0x2093C4DBL))), ((**p_54) && (safe_rshift_func_uint8_t_u_s(p_55, 7)))))), (safe_mod_func_uint16_t_u_u((+((*l_678) != g_216)), p_55))))))
                    {
                        int16_t l_700 = (-1L);
                        (****l_617) = ((0xBDL >= (g_30 < 1L)) < (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_223 >= (((((g_266 ^ (****l_618)) >= (safe_mod_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((*p_54) == (*p_56)), ((safe_mul_func_uint8_t_u_u(0UL, p_55)) >= 0xA5C3A70CL))) == (-4L)) || l_700), p_55))) && p_55) | g_6) & 0L)), 5)), g_339)));
                    }
                    else
                    {
                        (*p_54) = func_59((*p_54));
                    }
                    (***l_618) = (**g_142);
                }
                (*g_143) = (void*)0;
            }
            else
            {
                int32_t l_703 = (-9L);
                for (l_584 = 0; (l_584 == (-19)); l_584--)
                {
                    (*g_28) = (**p_56);
                }
                (*l_342) = l_703;
            }
            (*p_53) = (*l_639);
        }
        (*p_57) = (safe_rshift_func_int8_t_s_s((l_706 < ((-6L) > (4294967295UL >= ((+(-10L)) > (safe_mod_func_uint32_t_u_u((((void*)0 != &p_57) & ((*l_639) && ((&g_142 == l_652) >= g_216))), p_55)))))), 4));
        (*l_342) = (safe_lshift_func_int16_t_s_u((g_216 != g_216), (((safe_add_func_int32_t_s_s(((p_55 ^ (1L > (-8L))) && (0x1DEEL == (safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((&p_56 == &p_56), (safe_mod_func_uint16_t_u_u(((p_55 != (*l_342)) == p_55), 0xF03CL)))), 0xDAL)) <= p_55) == g_30), 0x42L)) && 0L), g_266)))), g_266)) != 0x45L) && g_216)));
        (*p_53) = (0x443F7C68L && 9L);
    }
    (*l_342) = ((*p_54) == (*p_56));
    return (**g_142);
}
static int32_t * func_59(int32_t * p_60)
{
    int32_t l_82 = 1L;
    uint32_t l_320 = 4294967288UL;
    int32_t *l_322 = &g_30;
    int32_t l_325 = 0x52FFC3B9L;
    int32_t l_329 = 0x9B3D71B0L;
    int32_t ****l_332 = &g_142;
    for (g_30 = 0; (g_30 <= (-30)); g_30 = safe_sub_func_int16_t_s_s(g_30, 3))
    {
        uint16_t l_63 = 0x0D5DL;
        uint32_t l_81 = 4294967292UL;
        int32_t *l_319 = (void*)0;
        int32_t **l_318 = &l_319;
        int32_t l_321 = (-1L);
    }
    if ((safe_add_func_uint16_t_u_u((((l_325 && (*l_322)) == (65530UL <= ((safe_mul_func_uint16_t_u_u((0xD7L > 1L), ((*l_322) | (g_266 < (((+((void*)0 == p_60)) != l_329) >= 0xFC4D6C54L))))) != (*l_322)))) == 0xDB94EEF0L), (*l_322))))
    {
        return p_60;
    }
    else
    {
        int32_t ****l_333 = (void*)0;
        (*g_28) = (safe_mod_func_uint32_t_u_u((l_332 == l_333), 0x372CC070L));
    }
    l_332 = l_332;
    if ((g_216 || (****l_332)))
    {
        (*p_60) = (safe_lshift_func_uint16_t_u_s((+(safe_add_func_uint8_t_u_u(g_339, ((0x87L > (((((g_229 != (void*)0) | (safe_lshift_func_uint8_t_u_s(0x1DL, (((*g_142) == (void*)0) && (g_229 == (void*)0))))) <= (****l_332)) || 0xBF25L) < 0x7EL)) && 0xF425L)))), 12));
    }
    else
    {
        (**l_332) = (**l_332);
    }
    return (***l_332);
}
static uint32_t func_71(int8_t p_72, int8_t p_73, int32_t ** p_74, uint16_t p_75)
{
    return p_72;
}
static int32_t func_76(uint8_t p_77, int32_t p_78, int32_t * p_79, uint32_t p_80)
{
    int32_t **l_96 = (void*)0;
    int32_t **l_102 = &g_28;
    int32_t l_103 = 0xEA5693CDL;
    uint16_t l_231 = 65535UL;
    int32_t ****l_281 = &g_142;
    int32_t l_282 = 0xFF8C8359L;
    uint32_t l_285 = 0UL;
    if ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(g_6)), (safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((0x4B7C80BFL == func_90(l_96, &g_30, p_78, (safe_unary_minus_func_uint32_t_u(0xCCC4EFF4L)), func_98((l_96 != l_102), l_103, (**l_102)))), g_6)) <= g_30), p_78)))))
    {
        uint32_t l_224 = 4294967295UL;
        int32_t *l_225 = &l_103;
        (*l_225) = l_224;
        (*l_102) = &p_78;
        (*l_225) = (((safe_lshift_func_int8_t_s_u((((*l_225) == ((p_80 || p_78) >= (~g_216))) > 0x70AFL), 5)) > 0xB3L) <= (g_229 != g_229));
    }
    else
    {
        int32_t ****l_240 = &g_142;
        int32_t l_244 = 1L;
        uint16_t l_245 = 0UL;
        l_245 = (+(l_231 || ((g_30 | (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_6, 0x0889L)), ((safe_add_func_uint16_t_u_u(p_80, (p_77 < ((safe_rshift_func_int8_t_s_u((&g_142 == l_240), (((safe_lshift_func_uint16_t_u_s((!l_244), p_80)) ^ g_223) && 0x38L))) & g_223)))) > 0x7B023839L)))) == p_77)));
        (***l_240) = &p_78;
        if (((1UL ^ (safe_lshift_func_uint8_t_u_s((&p_79 != (*g_142)), ((&g_143 != &l_96) ^ ((void*)0 == &l_240))))) ^ ((((safe_unary_minus_func_uint8_t_u(g_6)) != (((g_229 == g_229) == p_80) | 0L)) ^ p_77) && p_80)))
        {
            int32_t *l_260 = &g_30;
            if ((safe_sub_func_int8_t_s_s(p_77, g_223)))
            {
                int32_t l_257 = 1L;
                int32_t *l_261 = &l_103;
                (***g_142) = (-1L);
                (***g_142) = (safe_add_func_int32_t_s_s((~g_223), (safe_rshift_func_uint8_t_u_s((****l_240), 4))));
                if (((p_78 < p_78) | (safe_unary_minus_func_uint32_t_u(l_257))))
                {
                    (*l_102) = &p_78;
                    for (l_245 = 0; (l_245 < 57); ++l_245)
                    {
                        (*l_102) = &p_78;
                        (*g_143) = l_260;
                        (*g_143) = func_31((**g_142));
                    }
                }
                else
                {
                    (*g_143) = l_261;
                    for (p_77 = 0; (p_77 != 40); p_77++)
                    {
                        int32_t *l_264 = &l_244;
                        l_264 = l_261;
                        (*g_143) = (*g_143);
                    }
                }
                (*g_143) = func_31((**g_142));
            }
            else
            {
                (***l_240) = (**g_142);
            }
        }
        else
        {
            uint8_t l_273 = 246UL;
            int32_t *****l_278 = &l_240;
            int32_t l_307 = 0x7F45CD96L;
            if ((*p_79))
            {
                int32_t *l_265 = (void*)0;
                (*g_143) = l_265;
                g_266 = ((*g_142) == (*g_142));
                l_282 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((l_273 >= g_266), 7)) != (safe_lshift_func_uint16_t_u_u(p_77, (safe_mul_func_int8_t_s_s((l_278 == l_278), (safe_lshift_func_uint8_t_u_u(g_216, ((l_281 == (void*)0) && (-1L))))))))) <= p_80), 0)), (*p_79)));
            }
            else
            {
                int8_t l_302 = 0L;
                if ((*p_79))
                {
                    (**l_102) = 8L;
                }
                else
                {
                    for (l_231 = 0; (l_231 <= 51); ++l_231)
                    {
                        (**l_102) = (**g_143);
                        if ((*p_79))
                            break;
                    }
                }
                (****l_278) = (**g_142);
                (****l_281) = (((*p_79) <= g_266) != 4294967295UL);
                (***g_142) = ((-4L) != (g_30 != ((l_285 && ((((((0x1EL && (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x8EL, ((((**g_143) ^ 0UL) ^ 0x82656994L) == (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(0x2DL, g_223)) && p_80), 0x7F40L)) || p_77), 7))))), 4)) || (***g_142)), p_78)), 0x3BL))) && l_302) == 0x68F5L) >= p_78) > p_77) && p_78)) ^ 0x3796DFD0L)));
            }
            if ((((void*)0 != &l_240) > (safe_add_func_uint8_t_u_u(p_77, (((safe_mul_func_int8_t_s_s((-9L), l_307)) == ((safe_sub_func_uint32_t_u_u(g_216, (safe_rshift_func_uint16_t_u_u((p_80 <= (((*g_143) != &p_78) | 0x160DL)), 1)))) <= 0x24D7L)) ^ (-1L))))))
            {
                l_244 = ((~p_78) && g_216);
            }
            else
            {
                p_78 = (((~g_216) | (((void*)0 == (*g_142)) == g_30)) > (safe_mul_func_uint16_t_u_u(g_30, p_77)));
                (*l_102) = (**g_142);
                return (*p_79);
            }
        }
        l_103 = ((safe_sub_func_int16_t_s_s(g_30, 65534UL)) <= p_80);
    }
    return (*p_79);
}
static uint32_t func_90(int32_t ** p_91, int32_t * p_92, uint32_t p_93, uint8_t p_94, int32_t p_95)
{
    uint8_t l_213 = 1UL;
    int32_t *l_214 = (void*)0;
    int32_t l_215 = 0x694C051FL;
    l_215 = l_213;
    g_216 = (p_94 != p_94);
    for (l_213 = 29; (l_213 > 48); ++l_213)
    {
        uint16_t l_221 = 0x5DCCL;
        int32_t *l_222 = (void*)0;
        g_223 = ((*p_92) <= (safe_mod_func_int8_t_s_s(g_6, l_221)));
    }
    return p_93;
}
static int32_t func_98(uint32_t p_99, uint16_t p_100, int32_t p_101)
{
    int32_t l_115 = 0x1225765CL;
    int16_t l_210 = 0L;
    for (p_100 = 0; (p_100 <= 11); p_100 = safe_add_func_int16_t_s_s(p_100, 1))
    {
        uint32_t l_120 = 0xFFB2EF76L;
        int32_t ****l_174 = &g_142;
        uint8_t l_212 = 0xF6L;
        for (p_99 = 13; (p_99 == 22); p_99++)
        {
            int32_t l_131 = 1L;
            int16_t l_182 = 0xC331L;
            int32_t **l_197 = &g_28;
            int32_t l_200 = 0x11F742CEL;
            for (p_101 = (-24); (p_101 != (-22)); p_101++)
            {
                uint16_t l_110 = 65528UL;
                int32_t *l_121 = &l_115;
                int32_t **l_122 = &l_121;
                (*l_121) = (l_110 ^ ((0xE3L ^ (safe_mod_func_uint32_t_u_u((((((safe_mod_func_uint32_t_u_u(g_6, l_115)) && (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((*g_28), (p_99 || p_101))), l_110))) >= ((g_6 < 0x43E0L) | 1L)) && 4L) <= l_115), l_120))) && p_100));
                (*l_122) = (void*)0;
                (*l_122) = &g_30;
            }
            g_28 = func_31(func_31(&g_30));
            if ((safe_lshift_func_uint8_t_u_u(g_6, (g_6 ^ (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_131, 9L)), ((((safe_mod_func_uint32_t_u_u((+((&g_28 == (void*)0) || (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, ((void*)0 != &g_28))), 3)))), 0x501E45A2L)) ^ p_99) ^ l_131) & g_6))), 0xEBL))))))
            {
                int32_t *l_145 = &l_115;
                for (l_120 = 0; (l_120 > 29); l_120 = safe_add_func_uint32_t_u_u(l_120, 5))
                {
                    int32_t **l_141 = &g_28;
                    int32_t ****l_144 = &g_142;
                    (*l_141) = func_31(&g_30);
                    (*l_144) = g_142;
                }
                (*l_145) = 0xE219839BL;
                for (l_131 = 0; (l_131 != 8); l_131 = safe_add_func_int8_t_s_s(l_131, 8))
                {
                    uint32_t l_165 = 5UL;
                    int32_t ****l_194 = (void*)0;
                    (*l_145) = ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((void*)0 != &g_143), 4)) ^ (-1L)), 4)) & (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((+(***g_142)), ((safe_add_func_int16_t_s_s(l_165, (~(*l_145)))) ^ 0x02E2L))), p_100)), (0xE5CCA7CCL | 0x2BDA1E5BL))) > p_99), p_100)), 7)));
                    if (((g_6 ^ (((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((&l_145 != (void*)0), 1)) <= (safe_rshift_func_int8_t_s_u(l_165, 3))), g_30)) & ((((*l_145) < (*l_145)) > ((safe_unary_minus_func_int8_t_s(g_30)) > (l_115 >= l_115))) >= p_101)) != p_100)) == 0x04L))
                    {
                        int32_t *****l_175 = (void*)0;
                        int32_t *****l_176 = &l_174;
                        (*l_176) = l_174;
                        (*l_145) = l_115;
                        return l_115;
                    }
                    else
                    {
                        p_101 = ((((****l_174) >= ((safe_mul_func_int16_t_s_s(p_101, 0xA2C1L)) == p_99)) && ((!l_131) > (0x91L != 0UL))) && l_182);
                    }
                    (*l_145) = ((safe_rshift_func_int16_t_s_u(((*g_28) <= ((p_101 && ((((p_100 | ((void*)0 != l_174)) ^ ((safe_mul_func_uint8_t_u_u((p_101 < ((safe_sub_func_uint8_t_u_u((+(safe_lshift_func_int8_t_s_s(p_101, 0))), (((((void*)0 == l_194) || p_99) & (-1L)) | 1UL))) > g_30)), 0x2CL)) || 0x8534C0AFL)) & g_6) < g_6)) > 1UL)), g_30)) != p_101);
                }
                for (p_101 = 0; (p_101 <= 20); p_101 = safe_add_func_uint16_t_u_u(p_101, 3))
                {
                    int32_t **l_211 = (void*)0;
                    (*l_145) = 0x635580C9L;
                    l_197 = (*g_142);
                    l_212 = (((0xC9D4L == ((l_200 == (((*g_143) != (void*)0) > (safe_rshift_func_uint16_t_u_s((p_101 <= ((**l_197) || 0x9DL)), 4)))) < (+(safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(((l_210 > ((void*)0 == l_211)) ^ (**g_143)), p_99)) != p_100), 10)) == (*l_145)) <= g_6), 0UL))))) | (*l_145)) || g_30);
                    return l_210;
                }
            }
            else
            {
                return (***g_142);
            }
        }
    }
    l_115 = ((&l_115 != &p_101) > l_115);
    (**g_142) = &p_101;
    (*g_142) = (*g_142);
    return p_101;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_6;
    csmith_sink_ = g_30;
    csmith_sink_ = g_216;
    csmith_sink_ = g_223;
    csmith_sink_ = g_266;
    csmith_sink_ = g_339;
    csmith_sink_ = g_725;
    platform_main_end(0,0);
    return 0;
}
