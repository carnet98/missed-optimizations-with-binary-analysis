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
static uint64_t g_2 = 0x90DA115252CB1363LL;
static int32_t g_4 = 0xC3C69AEDL;
static int32_t *g_20 = &g_4;
static int32_t **g_19 = &g_20;
static int32_t *** const g_18 = &g_19;
static int32_t ***g_22[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t * const *g_74 = &g_20;
static int32_t * const ** const g_73 = &g_74;
static int32_t * const ** const *g_72 = &g_73;
static int32_t * const ** const **g_71 = &g_72;
static int32_t g_78 = (-8L);
static uint64_t g_86 = 0x51449BABE4A9FF1DLL;
static uint16_t g_88 = 0x4B17L;
static uint8_t g_93 = 0x3CL;
static uint32_t g_95 = 4294967295UL;
static uint16_t g_109 = 0xCCDDL;
static uint32_t g_122 = 6UL;
static uint32_t g_156 = 6UL;
static int16_t g_159 = 4L;
static int32_t g_164 = (-4L);
static uint32_t g_165 = 1UL;
static int32_t g_172 = 1L;
static int32_t ***g_179 = (void*)0;
static int32_t ****g_178 = &g_179;
static int32_t *****g_177[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t ** const *g_196 = &g_19;
static int32_t ** const **g_195[8] = {&g_196,&g_196,&g_196,&g_196,&g_196,&g_196,&g_196,&g_196};
static int32_t ** const ***g_194 = &g_195[2];
static uint8_t g_239 = 255UL;
static int16_t g_247 = 0x780FL;
static int64_t g_249 = (-2L);
static uint64_t g_254[10][9][2] = {{{0x57178973CE836181LL,0x1AE78603037CC935LL},{0x13CF3447AFBABFCDLL,0x15A37453B0A82069LL},{0UL,0xBC35C1B076C08D80LL},{9UL,0UL},{0x27435C911F6C4FA1LL,18446744073709551615UL},{0UL,18446744073709551615UL},{0x15A37453B0A82069LL,0x15A37453B0A82069LL},{1UL,0x9CC582CEDBFFA52ALL},{2UL,1UL}},{{0x27435C911F6C4FA1LL,0x13CF3447AFBABFCDLL},{18446744073709551615UL,0x57178973CE836181LL},{0x1AE78603037CC935LL,0x27435C911F6C4FA1LL},{0x1AE78603037CC935LL,0x57178973CE836181LL},{18446744073709551615UL,0x13CF3447AFBABFCDLL},{0x57178973CE836181LL,0UL},{18446744073709551615UL,9UL},{0x9CC582CEDBFFA52ALL,0x27435C911F6C4FA1LL},{0x27435C911F6C4FA1LL,0UL}},{{0x07DAD963D65F5B50LL,0x15A37453B0A82069LL},{0x57178973CE836181LL,1UL},{0x460548AB624D7EAALL,2UL},{18446744073709551615UL,0x27435C911F6C4FA1LL},{0xBC35C1B076C08D80LL,18446744073709551607UL},{0x78855DD7CDD833FBLL,0x4B2532C7C98F07CFLL},{0x57178973CE836181LL,0x4B2532C7C98F07CFLL},{0x78855DD7CDD833FBLL,18446744073709551607UL},{0xBC35C1B076C08D80LL,0x27435C911F6C4FA1LL}},{{18446744073709551615UL,2UL},{0x460548AB624D7EAALL,1UL},{0x57178973CE836181LL,0x15A37453B0A82069LL},{0x07DAD963D65F5B50LL,0UL},{0x27435C911F6C4FA1LL,0x27435C911F6C4FA1LL},{0x9CC582CEDBFFA52ALL,9UL},{18446744073709551615UL,0UL},{0x57178973CE836181LL,0x13CF3447AFBABFCDLL},{18446744073709551615UL,0x57178973CE836181LL}},{{0x1AE78603037CC935LL,0x27435C911F6C4FA1LL},{0x1AE78603037CC935LL,0x57178973CE836181LL},{18446744073709551615UL,0x13CF3447AFBABFCDLL},{0x57178973CE836181LL,0UL},{18446744073709551615UL,9UL},{0x9CC582CEDBFFA52ALL,0x27435C911F6C4FA1LL},{0x27435C911F6C4FA1LL,0UL},{0x07DAD963D65F5B50LL,0x15A37453B0A82069LL},{0x57178973CE836181LL,1UL}},{{0x460548AB624D7EAALL,2UL},{18446744073709551615UL,0x27435C911F6C4FA1LL},{0xBC35C1B076C08D80LL,18446744073709551607UL},{0x78855DD7CDD833FBLL,0x4B2532C7C98F07CFLL},{0x57178973CE836181LL,0x4B2532C7C98F07CFLL},{0x78855DD7CDD833FBLL,18446744073709551607UL},{0xBC35C1B076C08D80LL,0x27435C911F6C4FA1LL},{18446744073709551615UL,2UL},{0x460548AB624D7EAALL,1UL}},{{0x57178973CE836181LL,0x15A37453B0A82069LL},{0x07DAD963D65F5B50LL,0UL},{0x27435C911F6C4FA1LL,0x27435C911F6C4FA1LL},{0x9CC582CEDBFFA52ALL,9UL},{18446744073709551615UL,0UL},{0x57178973CE836181LL,0x13CF3447AFBABFCDLL},{18446744073709551615UL,0x57178973CE836181LL},{0x1AE78603037CC935LL,0x27435C911F6C4FA1LL},{0x1AE78603037CC935LL,0x57178973CE836181LL}},{{18446744073709551615UL,0x13CF3447AFBABFCDLL},{0x57178973CE836181LL,0UL},{18446744073709551615UL,9UL},{0x9CC582CEDBFFA52ALL,0x27435C911F6C4FA1LL},{0x27435C911F6C4FA1LL,0UL},{0x07DAD963D65F5B50LL,0x15A37453B0A82069LL},{0x57178973CE836181LL,1UL},{0x460548AB624D7EAALL,2UL},{18446744073709551615UL,0x27435C911F6C4FA1LL}},{{0xBC35C1B076C08D80LL,18446744073709551607UL},{0x78855DD7CDD833FBLL,0x4B2532C7C98F07CFLL},{0x57178973CE836181LL,0x4B2532C7C98F07CFLL},{0x78855DD7CDD833FBLL,18446744073709551607UL},{0xBC35C1B076C08D80LL,0x27435C911F6C4FA1LL},{18446744073709551615UL,2UL},{0x460548AB624D7EAALL,1UL},{0x57178973CE836181LL,0x15A37453B0A82069LL},{0x07DAD963D65F5B50LL,0UL}},{{0x27435C911F6C4FA1LL,0x27435C911F6C4FA1LL},{0x9CC582CEDBFFA52ALL,9UL},{18446744073709551615UL,0UL},{0x57178973CE836181LL,0x13CF3447AFBABFCDLL},{18446744073709551615UL,0x57178973CE836181LL},{0x1AE78603037CC935LL,0x27435C911F6C4FA1LL},{0x1AE78603037CC935LL,0x57178973CE836181LL},{18446744073709551615UL,0x13CF3447AFBABFCDLL},{0x57178973CE836181LL,0UL}}};
static int8_t g_267 = 0x57L;
static const int8_t *g_266 = &g_267;
static int8_t g_290 = 0x2EL;
static uint8_t g_303[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
static int32_t func_1(void);
static int32_t * func_5(int32_t p_6);
static int32_t *** const * func_29(int32_t * const p_30, int32_t * p_31, int64_t p_32, int32_t **** p_33);
static int32_t * func_34(int32_t p_35, int32_t * const p_36, const int32_t p_37, int64_t p_38, const uint32_t p_39);
static uint16_t func_40(int64_t p_41, int32_t *** const p_42, int8_t p_43, int32_t *** p_44, int16_t p_45);
static uint32_t func_46(int32_t ** const * const * p_47);
static int32_t ***** func_56(int32_t ** const *** p_57, uint16_t p_58, uint64_t p_59, int32_t **** const p_60);
static int32_t ** const *** func_61(int64_t p_62);
static int64_t func_63(int32_t p_64, int32_t p_65, int32_t p_66);
static int8_t func_69(int32_t * const ** const ** p_70);
static int32_t func_1(void)
{
    int32_t *l_3[10][4] = {{&g_4,(void*)0,&g_4,&g_4},{&g_4,(void*)0,(void*)0,&g_4},{(void*)0,&g_4,&g_4,&g_4},{(void*)0,&g_4,(void*)0,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,(void*)0,&g_4,(void*)0},{&g_4,&g_4,&g_4,&g_4},{(void*)0,&g_4,&g_4,(void*)0},{&g_4,(void*)0,&g_4,&g_4}};
    uint32_t *l_293 = &g_95;
    uint32_t *l_296 = &g_122;
    int64_t l_310 = 0x5AECD1C5668845FDLL;
    int64_t *l_311 = &g_249;
    uint64_t l_312 = 0UL;
    uint64_t l_313 = 0x0A52AECC87DAEB41LL;
    int i, j;
    g_4 = g_2;
    g_290 |= (&g_4 == ((*g_19) = func_5(g_4)));
    l_312 = (((*l_311) |= (safe_sub_func_uint32_t_u_u(((*l_293)--), ((g_159 != ((((((*l_296) &= ((void*)0 == &l_3[4][1])) || (g_86 <= (((((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u(g_93, (g_303[4] = ((*l_296) = (g_254[4][7][0] ^ g_254[6][1][0]))))), (safe_mod_func_int8_t_s_s((*g_266), (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(g_267, g_109)) | g_247), g_164)))))) & (-5L)) , l_310) == 1L) == 0x96L))) ^ g_93) , 0x58L) > (*g_266))) < g_159)))) == g_267);
    return l_313;
}
static int32_t * func_5(int32_t p_6)
{
    int32_t *l_9 = &g_4;
    int32_t **l_8[4][9] = {{&l_9,&l_9,&l_9,(void*)0,&l_9,&l_9,&l_9,(void*)0,&l_9},{&l_9,&l_9,&l_9,&l_9,&l_9,&l_9,&l_9,&l_9,&l_9},{(void*)0,(void*)0,&l_9,(void*)0,(void*)0,(void*)0,&l_9,(void*)0,(void*)0},{&l_9,&l_9,&l_9,&l_9,&l_9,&l_9,&l_9,&l_9,&l_9}};
    int32_t ***l_7 = &l_8[0][1];
    int32_t ****l_21 = &l_7;
    int32_t *l_52 = &g_4;
    int32_t ** const l_51 = &l_52;
    int32_t ** const * const l_50 = &l_51;
    int32_t ** const * const *l_49 = &l_50;
    int32_t ** const * const **l_48 = &l_49;
    uint64_t *l_244 = &g_86;
    uint64_t **l_245 = &l_244;
    uint64_t *l_246 = &g_2;
    int64_t *l_248[9][7] = {{&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249},{&g_249,(void*)0,&g_249,(void*)0,&g_249,&g_249,(void*)0},{&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249},{(void*)0,&g_249,&g_249,&g_249,&g_249,(void*)0,&g_249},{&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249},{&g_249,&g_249,(void*)0,&g_249,(void*)0,&g_249,&g_249},{&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249},{(void*)0,&g_249,(void*)0,(void*)0,(void*)0,(void*)0,&g_249},{&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249}};
    int32_t *** const **l_286 = (void*)0;
    int32_t *** const *l_288 = &g_18;
    int32_t *** const **l_287 = &l_288;
    uint16_t *l_289 = &g_88;
    int i, j;
    (*l_7) = (void*)0;
    (*l_9) = (safe_mod_func_uint8_t_u_u((((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_uint16_t_u_s(((*l_289) = ((((p_6 , g_18) == (g_22[0] = ((*l_21) = (void*)0))) ^ (((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((((*l_287) = func_29(func_34((func_40(((g_247 |= (func_46(((*l_48) = (void*)0)) , (((*l_245) = l_244) != l_246))) , (((g_249 = g_164) & g_86) ^ g_95)), (*g_178), g_239, (*g_178), p_6) | 9L), (*l_51), p_6, g_239, p_6), (*l_51), p_6, l_21)) != (void*)0), (*g_266))), 10)) <= g_239), g_156)) , (*l_52)) != (*g_266))) > p_6)), p_6)) && g_122) , p_6) > p_6), 0)) , g_2), g_239)) | p_6) , g_267), 0x16L));
    for (g_109 = 0; g_109 < 10; g_109 += 1)
    {
        g_177[g_109] = &g_178;
    }
    return (**g_18);
}
static int32_t *** const * func_29(int32_t * const p_30, int32_t * p_31, int64_t p_32, int32_t **** p_33)
{
    int32_t *l_285[3][9][9] = {{{&g_78,&g_164,&g_78,(void*)0,&g_78,(void*)0,&g_164,&g_164,&g_78},{(void*)0,&g_4,&g_4,&g_164,(void*)0,&g_172,&g_164,&g_78,(void*)0},{&g_172,&g_78,(void*)0,&g_164,&g_78,&g_78,&g_78,&g_164,(void*)0},{&g_4,&g_4,&g_172,(void*)0,&g_78,&g_164,&g_78,(void*)0,&g_172},{(void*)0,&g_78,(void*)0,&g_172,&g_164,&g_78,&g_4,&g_4,&g_172},{&g_78,&g_4,&g_172,&g_164,&g_172,(void*)0,(void*)0,&g_78,&g_164},{&g_78,&g_78,(void*)0,&g_4,&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_4,&g_164,&g_172,&g_164,&g_4,&g_78,&g_78},{&g_78,&g_4,&g_78,&g_172,&g_164,&g_172,(void*)0,&g_78,&g_78}},{{&g_172,&g_78,&g_164,&g_164,(void*)0,&g_78,(void*)0,&g_78,&g_164},{&g_78,&g_164,(void*)0,&g_78,&g_172,(void*)0,&g_4,&g_4,(void*)0},{&g_78,&g_78,&g_78,&g_4,&g_78,&g_164,&g_78,(void*)0,(void*)0},{&g_78,&g_4,&g_78,&g_78,&g_78,&g_4,&g_78,&g_172,&g_164},{(void*)0,&g_78,(void*)0,&g_78,&g_172,&g_172,&g_78,(void*)0,&g_78},{&g_4,&g_164,(void*)0,&g_4,&g_78,&g_164,&g_164,&g_172,&g_78},{&g_164,(void*)0,&g_78,&g_172,(void*)0,&g_4,&g_4,(void*)0,(void*)0},{&g_164,&g_78,&g_172,&g_78,(void*)0,&g_172,&g_4,&g_4,&g_172},{&g_78,&g_172,&g_4,&g_172,&g_78,&g_172,&g_164,&g_78,&g_164}},{{&g_78,&g_4,&g_78,&g_164,&g_78,&g_78,&g_78,&g_78,&g_172},{&g_4,&g_78,&g_4,&g_78,&g_4,&g_172,&g_78,&g_164,&g_78},{(void*)0,&g_164,&g_78,&g_78,&g_78,&g_172,&g_78,&g_164,(void*)0},{&g_78,&g_172,&g_172,(void*)0,&g_78,&g_4,&g_4,&g_78,(void*)0},{&g_4,&g_164,&g_4,&g_78,&g_4,&g_164,(void*)0,&g_78,&g_78},{&g_164,&g_78,&g_164,(void*)0,&g_78,&g_172,(void*)0,&g_78,&g_172},{(void*)0,(void*)0,&g_78,&g_78,&g_78,&g_4,&g_78,&g_78,&g_78},{&g_78,&g_172,&g_78,(void*)0,(void*)0,&g_164,&g_78,&g_78,&g_78},{(void*)0,&g_78,&g_78,&g_78,(void*)0,(void*)0,&g_78,&g_78,&g_78}}};
    int i, j, k;
    (**g_18) = l_285[0][1][6];
    return p_33;
}
static int32_t * func_34(int32_t p_35, int32_t * const p_36, const int32_t p_37, int64_t p_38, const uint32_t p_39)
{
    int32_t *l_274 = &g_172;
    int32_t *l_275 = &g_78;
    int32_t l_276 = (-1L);
    int32_t *l_277 = &g_164;
    int32_t *l_278[10] = {&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164};
    int32_t l_279 = 0L;
    int64_t l_280 = (-1L);
    uint8_t l_281[3][7] = {{0x05L,0x76L,1UL,1UL,0x76L,0x05L,0x76L},{255UL,0x05L,0x05L,255UL,0x76L,255UL,255UL},{0x05L,0x05L,255UL,0x76L,255UL,0x05L,0x05L}};
    int32_t *l_284 = &g_4;
    int i, j;
    --l_281[0][3];
    return l_284;
}
static uint16_t func_40(int64_t p_41, int32_t *** const p_42, int8_t p_43, int32_t *** p_44, int16_t p_45)
{
    uint64_t *l_252 = &g_86;
    uint64_t *l_253 = &g_254[6][1][0];
    uint64_t *l_262 = (void*)0;
    int32_t l_263 = 1L;
    int16_t *l_268 = &g_159;
    uint64_t *l_269 = &g_2;
    int32_t l_270 = 0x3A89F367L;
    int32_t ***l_271 = &g_19;
    int8_t l_272[7][10][3] = {{{(-1L),0x32L,(-1L)},{0xA4L,(-1L),(-6L)},{0x1AL,0x2CL,0L},{0x94L,(-1L),7L},{0x10L,0x32L,0xCDL},{0xFAL,0L,(-1L)},{0xFAL,0x7FL,0L},{0x10L,1L,3L},{0x94L,7L,(-7L)},{0x1AL,(-7L),3L}},{{0xA4L,0x7CL,0L},{(-1L),0L,(-1L)},{0x58L,0L,0xCDL},{1L,0x7CL,7L},{0xB6L,(-7L),0L},{7L,7L,(-6L)},{0xB6L,1L,(-1L)},{1L,0x7FL,0x7FL},{0x58L,0L,0x7FL},{(-1L),0x32L,(-1L)}},{{0xA4L,(-1L),(-6L)},{0x1AL,0x2CL,0L},{0x94L,(-1L),7L},{0x10L,0x32L,0xCDL},{0xFAL,0L,(-1L)},{0xFAL,0x7FL,0L},{0x10L,1L,3L},{0x94L,7L,(-7L)},{0x1AL,(-7L),3L},{0xA4L,0x7CL,0L}},{{(-1L),0L,(-1L)},{0x58L,0L,0xCDL},{1L,0x7CL,7L},{0xB6L,(-7L),0L},{7L,7L,(-6L)},{0xB6L,1L,(-1L)},{1L,0x7FL,0x7FL},{0x58L,0L,0x7FL},{(-1L),0x32L,(-1L)},{0xA4L,(-1L),(-6L)}},{{0x1AL,0x2CL,0L},{0x94L,(-1L),7L},{0x10L,0x32L,0xCDL},{0xFAL,0L,(-1L)},{0xFAL,0x7FL,0L},{0x10L,1L,3L},{0x94L,7L,(-7L)},{0x1AL,(-7L),3L},{0xA4L,0x7CL,0L},{(-1L),0L,(-1L)}},{{0x58L,0L,0xCDL},{1L,0x7CL,7L},{0xB6L,(-7L),0L},{7L,7L,(-6L)},{0xB6L,1L,(-1L)},{1L,0x7FL,0x7FL},{0x58L,0L,0x7FL},{(-1L),0x32L,(-1L)},{0xA4L,(-1L),(-6L)},{0x1AL,0x2CL,0L}},{{0x94L,(-1L),7L},{0x32L,0xF7L,1L},{8L,0x11L,0L},{8L,(-1L),0x4DL},{0x32L,0x91L,0xC2L},{0xCDL,7L,0L},{0x40L,0L,0xC2L},{(-6L),0xFCL,0x4DL},{0xE9L,0xC8L,0L},{1L,0xC8L,1L}}};
    uint64_t l_273 = 0x4AB5D2E638051BDCLL;
    int i, j, k;
    l_270 ^= ((((((safe_sub_func_int64_t_s_s((((*l_269) = (((*l_253) |= ((*l_252) = g_2)) != (safe_sub_func_uint16_t_u_u((((*l_268) ^= ((0x6B81B9BBL == ((p_43 >= (((safe_lshift_func_int8_t_s_u((+((safe_add_func_int8_t_s_s(((((p_43 , &g_2) == (l_262 = l_253)) , (l_263 > (safe_mod_func_int8_t_s_s(((g_266 != (void*)0) ^ 0L), p_45)))) == g_4), g_239)) || p_43)), 1)) , g_78) > l_263)) & p_45)) , 0xAA75L)) | l_263), l_263)))) > 0x8632886206739512LL), l_263)) , 18446744073709551612UL) , l_263) != (*g_266)) == 0x8C27L) , 5L);
    l_273 ^= ((((((p_44 == l_271) <= p_45) == p_41) >= (l_263 > (0L >= ((p_42 != p_44) == p_45)))) ^ l_270) < l_272[2][3][2]);
    return g_249;
}
static uint32_t func_46(int32_t ** const * const * p_47)
{
    uint8_t l_55 = 0x1BL;
    int32_t *l_77[9][1][3] = {{{&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78}},{{(void*)0,&g_78,(void*)0}},{{&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78}},{{(void*)0,&g_78,(void*)0}},{{&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78}},{{(void*)0,&g_78,(void*)0}}};
    int32_t **l_76 = &l_77[4][0][0];
    int32_t *l_79 = &g_78;
    int32_t **l_80 = (void*)0;
    uint64_t *l_81 = &g_2;
    uint64_t *l_84 = (void*)0;
    uint64_t *l_85 = &g_86;
    uint16_t *l_87[5][2][2] = {{{(void*)0,&g_88},{&g_88,&g_88}},{{(void*)0,&g_88},{&g_88,&g_88}},{{(void*)0,&g_88},{&g_88,&g_88}},{{(void*)0,&g_88},{&g_88,&g_88}},{{(void*)0,&g_88},{&g_88,&g_88}}};
    uint8_t l_89[1][2][10] = {{{1UL,0xD0L,1UL,0x4BL,0x4BL,1UL,0xD0L,1UL,0x4BL,0x4BL},{1UL,0xD0L,1UL,0x4BL,0x4BL,1UL,0xD0L,1UL,0x4BL,0x4BL}}};
    uint8_t *l_92 = &g_93;
    uint32_t *l_94 = &g_95;
    int8_t l_96 = 1L;
    int8_t l_97 = 0x5BL;
    int32_t *****l_242 = &g_178;
    int32_t l_243 = 0x13634BA4L;
    int i, j, k;
    l_243 &= (safe_add_func_int64_t_s_s((l_55 , 0L), ((l_242 = func_56(func_61(func_63(((safe_add_func_int8_t_s_s(func_69(g_71), ((((((*l_76) = (*g_19)) == (l_79 = l_79)) , (((*l_94) = (((*l_85) = (--(*l_81))) & ((g_78 | (0L == (g_88 = (--l_89[0][0][4])))) & ((*l_92) |= ((((&g_72 == (void*)0) , g_78) | 0xE2962DE1B453F477LL) , g_78))))) != 0x3A9B16E5L)) || g_78) & 2UL))) , l_96), l_97, l_97)), g_172, g_164, &g_179)) == (void*)0)));
    return g_4;
}
static int32_t ***** func_56(int32_t ** const *** p_57, uint16_t p_58, uint64_t p_59, int32_t **** const p_60)
{
    int32_t * const **l_201 = (void*)0;
    int32_t * const ***l_200 = &l_201;
    int32_t * const ****l_199[10][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,&l_200,&l_200,&l_200,&l_200,&l_200},{&l_200,&l_200,&l_200,&l_200,(void*)0,&l_200,&l_200,&l_200,&l_200},{&l_200,(void*)0,(void*)0,(void*)0,&l_200,&l_200,&l_200,&l_200,&l_200},{&l_200,(void*)0,(void*)0,(void*)0,(void*)0,&l_200,&l_200,(void*)0,(void*)0},{&l_200,&l_200,&l_200,&l_200,&l_200,&l_200,&l_200,(void*)0,&l_200},{&l_200,&l_200,&l_200,&l_200,&l_200,&l_200,&l_200,&l_200,&l_200},{(void*)0,(void*)0,&l_200,&l_200,&l_200,&l_200,&l_200,(void*)0,(void*)0},{&l_200,&l_200,(void*)0,&l_200,&l_200,&l_200,&l_200,(void*)0,&l_200},{&l_200,(void*)0,&l_200,&l_200,&l_200,(void*)0,&l_200,&l_200,&l_200},{&l_200,&l_200,&l_200,(void*)0,&l_200,&l_200,&l_200,&l_200,(void*)0}};
    int32_t * const ****l_202[2];
    int32_t *****l_204 = (void*)0;
    int8_t l_205[5][8][3] = {{{0x0BL,1L,(-8L)},{(-2L),0x46L,0x3CL},{0x36L,0L,(-5L)},{(-2L),0L,0x36L},{(-9L),0x18L,(-2L)},{0x0BL,0x79L,0x0BL},{1L,0x94L,(-6L)},{0L,(-1L),1L}},{{(-1L),0x06L,0xA2L},{0x17L,0xDEL,0x94L},{(-1L),0x17L,0x18L},{0L,0x0BL,1L},{1L,(-8L),0x3CL},{0x0BL,5L,0xAEL},{(-9L),0xAEL,0x17L},{(-2L),0xA8L,0x17L}},{{1L,0x36L,0xAEL},{8L,0x3CL,0x3CL},{0x27L,(-2L),1L},{0xA8L,5L,0x18L},{0xFDL,0x1CL,0x94L},{1L,8L,0xA2L},{0x36L,0x1CL,1L},{0x06L,5L,(-6L)}},{{0x4FL,(-2L),0x0BL},{(-8L),0x3CL,(-2L)},{0x94L,0x36L,0x36L},{0x1CL,0xA8L,(-5L)},{0x1CL,0xAEL,(-8L)},{0x94L,5L,(-9L)},{(-8L),(-8L),0L},{0x4FL,0x0BL,6L}},{{0x06L,0x17L,0xFDL},{0x36L,0xDEL,1L},{1L,0x06L,0xFDL},{0xFDL,(-1L),6L},{0xA8L,0x94L,0L},{0x27L,0x79L,(-9L)},{8L,0x18L,(-8L)},{1L,0L,(-5L)}}};
    int16_t l_206 = 7L;
    int16_t l_207 = (-7L);
    int64_t l_208 = (-10L);
    uint16_t l_209[2][5][7] = {{{65533UL,1UL,65533UL,65535UL,0UL,1UL,0x5EDDL},{65535UL,9UL,0x3E62L,0x3E62L,9UL,65535UL,9UL},{65533UL,65535UL,0UL,1UL,0x5EDDL,1UL,0UL},{0x9AE3L,0x9AE3L,65535UL,0x3E62L,65535UL,0x9AE3L,0x9AE3L},{0xC32EL,65535UL,0x5588L,65535UL,0xC32EL,1UL,0UL}},{{1UL,9UL,1UL,65535UL,65535UL,1UL,9UL},{0UL,1UL,0x5588L,65532UL,0x5EDDL,65535UL,0x5EDDL},{1UL,65535UL,65535UL,1UL,9UL,1UL,65535UL},{0xC32EL,1UL,0UL,65532UL,0UL,1UL,0xC32EL},{0x9AE3L,65535UL,0x3E62L,65535UL,0x9AE3L,0x9AE3L,65535UL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_202[i] = &l_200;
    for (g_93 = 0; (g_93 >= 60); ++g_93)
    {
        int32_t *l_203 = &g_78;
        (*l_203) |= ((&p_60 == (l_202[1] = (l_199[5][2] = (void*)0))) < 0xF2L);
        (*l_203) = ((p_58 , p_59) >= p_58);
        return l_204;
    }
    l_205[3][4][1] ^= (-1L);
    l_209[0][0][0]--;
    for (g_88 = 0; (g_88 == 19); g_88++)
    {
        int16_t l_218 = 0x0D45L;
        uint32_t *l_236 = (void*)0;
        int32_t l_237 = 1L;
        uint32_t l_238 = 2UL;
        int32_t l_240[1][7][9];
        int32_t *****l_241 = &g_178;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 9; k++)
                    l_240[i][j][k] = (-1L);
            }
        }
        l_240[0][0][1] &= ((safe_sub_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(l_218, ((0x188C2F38L | (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((~((safe_rshift_func_int16_t_s_s((-4L), 9)) , ((((safe_mod_func_uint16_t_u_u((l_218 || ((l_218 != l_218) , (0x3232L ^ (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((-1L), (l_237 = ((safe_add_func_int16_t_s_s(p_58, 0UL)) | g_156)))) != 0UL) == p_58) , g_164), 11)) , p_59) | 4L), 11))))), g_172)) && l_218) , l_238) || g_239))), 11)), p_59)) != p_58) >= g_156)) , g_239))) || g_122), g_159)) == g_156);
        if (p_58)
            break;
        return l_241;
    }
    return &g_178;
}
static int32_t ** const *** func_61(int64_t p_62)
{
    uint32_t l_190 = 0x02BF4545L;
    int32_t ** const *l_193 = (void*)0;
    int32_t ** const **l_192 = &l_193;
    int32_t ** const ***l_191 = &l_192;
    l_190 |= p_62;
    return g_194;
}
static int64_t func_63(int32_t p_64, int32_t p_65, int32_t p_66)
{
    int32_t **l_98[6][9][3] = {{{&g_20,&g_20,(void*)0},{&g_20,&g_20,(void*)0},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20}}};
    int32_t **l_99[8] = {&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20};
    int32_t **l_100 = (void*)0;
    int32_t **l_101 = &g_20;
    uint16_t *l_120 = &g_109;
    int64_t l_121 = (-8L);
    int16_t l_154 = (-1L);
    uint16_t l_162[1][4] = {{0UL,0UL,0UL,0UL}};
    uint8_t *l_185 = &g_93;
    int i, j, k;
    (*l_101) = (**g_73);
    for (g_2 = (-4); (g_2 > 15); g_2 = safe_add_func_int32_t_s_s(g_2, 3))
    {
        int32_t **l_104[8];
        uint16_t *l_107 = &g_88;
        uint16_t *l_108 = &g_109;
        int32_t * const l_171[6][3][1] = {{{&g_172},{&g_172},{&g_172}},{{&g_172},{&g_172},{&g_172}},{{&g_172},{&g_172},{&g_172}},{{&g_172},{&g_172},{&g_172}},{{&g_172},{&g_172},{&g_172}},{{&g_172},{&g_172},{&g_172}}};
        int32_t * const *l_170 = &l_171[1][2][0];
        int32_t ***l_176 = &l_100;
        int32_t ****l_175[6][7] = {{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,(void*)0,&l_176,&l_176,(void*)0,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176}};
        int32_t *****l_174[7][10][3] = {{{&l_175[2][0],&l_175[5][1],&l_175[2][0]},{&l_175[0][3],&l_175[2][0],&l_175[2][0]},{&l_175[1][1],&l_175[2][0],&l_175[2][0]},{&l_175[2][0],&l_175[0][3],&l_175[2][0]},{&l_175[2][5],&l_175[2][4],&l_175[2][0]},{&l_175[2][6],&l_175[2][1],&l_175[0][3]},{&l_175[2][1],&l_175[2][0],&l_175[2][0]},{&l_175[1][5],&l_175[2][0],&l_175[1][5]},{(void*)0,&l_175[2][0],&l_175[4][3]},{&l_175[2][0],&l_175[2][0],&l_175[2][1]}},{{&l_175[2][0],&l_175[2][1],&l_175[5][1]},{&l_175[0][3],(void*)0,(void*)0},{&l_175[2][0],&l_175[2][0],&l_175[2][0]},{&l_175[2][0],&l_175[2][0],&l_175[0][3]},{(void*)0,&l_175[2][4],&l_175[2][0]},{&l_175[1][5],(void*)0,(void*)0},{&l_175[2][1],(void*)0,&l_175[3][3]},{&l_175[2][6],&l_175[2][1],&l_175[1][5]},{&l_175[2][5],&l_175[2][0],&l_175[3][6]},{&l_175[2][0],&l_175[2][0],&l_175[2][0]}},{{&l_175[1][1],&l_175[2][0],&l_175[2][0]},{&l_175[0][3],&l_175[2][1],&l_175[2][0]},{&l_175[2][0],(void*)0,&l_175[2][0]},{&l_175[2][0],(void*)0,&l_175[2][0]},{&l_175[2][4],&l_175[2][4],&l_175[2][1]},{(void*)0,&l_175[2][0],&l_175[4][0]},{&l_175[2][1],&l_175[2][0],&l_175[2][0]},{&l_175[2][0],(void*)0,&l_175[1][5]},{&l_175[2][0],&l_175[2][1],&l_175[2][0]},{&l_175[2][0],&l_175[2][0],&l_175[4][0]}},{{&l_175[1][4],&l_175[2][0],&l_175[2][1]},{&l_175[0][3],&l_175[2][0],&l_175[2][0]},{&l_175[2][0],&l_175[2][0],&l_175[2][0]},{&l_175[2][0],&l_175[2][1],&l_175[2][0]},{(void*)0,&l_175[2][4],&l_175[2][0]},{&l_175[5][1],&l_175[0][3],&l_175[2][0]},{&l_175[2][1],&l_175[2][0],&l_175[3][6]},{&l_175[5][1],&l_175[2][0],&l_175[1][5]},{(void*)0,&l_175[5][1],&l_175[3][3]},{&l_175[2][0],&l_175[2][0],(void*)0}},{{&l_175[2][0],&l_175[2][0],&l_175[2][0]},{&l_175[0][3],&l_175[2][0],&l_175[0][3]},{&l_175[1][4],(void*)0,&l_175[2][0]},{&l_175[2][0],&l_175[4][0],(void*)0},{&l_175[2][0],&l_175[2][4],&l_175[5][1]},{&l_175[2][0],&l_175[4][0],&l_175[2][1]},{&l_175[2][1],(void*)0,&l_175[4][3]},{(void*)0,&l_175[2][0],&l_175[1][5]},{&l_175[2][4],&l_175[2][0],&l_175[2][0]},{&l_175[2][0],&l_175[2][0],&l_175[0][3]}},{{&l_175[2][0],&l_175[5][1],&l_175[2][0]},{&l_175[0][3],&l_175[2][0],&l_175[2][1]},{&l_175[3][3],&l_175[2][0],&l_175[3][6]},{&l_175[4][0],&l_175[2][0],&l_175[2][1]},{&l_175[5][1],&l_175[2][1],&l_175[2][0]},{&l_175[2][0],(void*)0,&l_175[2][0]},{&l_175[1][1],&l_175[2][4],&l_175[2][0]},{(void*)0,&l_175[2][0],(void*)0},{&l_175[2][0],&l_175[2][0],&l_175[2][0]},{(void*)0,&l_175[0][3],(void*)0}},{{&l_175[2][0],&l_175[1][1],&l_175[1][4]},{&l_175[2][0],&l_175[2][0],&l_175[2][0]},{&l_175[2][0],&l_175[2][5],&l_175[3][6]},{(void*)0,&l_175[2][6],&l_175[2][0]},{&l_175[2][0],&l_175[2][1],&l_175[2][0]},{(void*)0,&l_175[1][5],&l_175[1][5]},{&l_175[1][1],(void*)0,&l_175[2][0]},{&l_175[2][0],&l_175[2][0],(void*)0},{&l_175[5][1],&l_175[2][0],(void*)0},{&l_175[4][0],&l_175[0][3],&l_175[2][6]}}};
        int32_t l_186 = 0x43AEAE04L;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_104[i] = &g_20;
        (*g_19) = &p_65;
        if (((g_122 = ((p_65 , (((*g_18) == l_104[7]) ^ (((safe_mod_func_uint16_t_u_u((((*l_108) = ((*l_107) = g_88)) || ((p_66 != (safe_lshift_func_uint8_t_u_s(((+(safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(g_86, ((safe_lshift_func_uint16_t_u_s((!((((((-3L) | ((l_120 != l_120) >= 0x8CL)) <= g_109) && g_86) > p_66) , p_64)), 5)) | 4L))), l_121))) == 0x41E781FFL), p_64))) <= 1UL)), p_65)) <= g_86) , g_109))) , p_65)) & 0x29A6L))
        {
            int8_t l_146 = 3L;
            int32_t l_163[10][10] = {{(-3L),(-7L),0x50D15052L,0x982148F4L,0L,9L,1L,1L,9L,0L},{(-3L),0x8E489E7FL,0x8E489E7FL,(-3L),0xA5E03110L,0L,0xE691350EL,(-2L),0L,0L},{0L,0xE691350EL,(-2L),0L,0L,(-7L),0x8E489E7FL,0xE691350EL,0L,0xD7C08194L},{0L,1L,0x50D15052L,(-3L),(-7L),9L,(-7L),0xE691350EL,9L,2L},{0x982148F4L,0x8E489E7FL,(-2L),0x982148F4L,0xA5E03110L,0L,(-7L),(-2L),(-7L),(-7L)},{0L,1L,0x8E489E7FL,0L,2L,0L,0x8E489E7FL,1L,0L,0xD7C08194L},{0x982148F4L,0xE691350EL,0x50D15052L,0L,2L,9L,0xE691350EL,(-7L),9L,(-7L)},{0L,0x8E489E7FL,0x4A6E1C48L,0L,0xA5E03110L,(-7L),1L,(-2L),0L,2L},{0L,(-7L),0x4A6E1C48L,0L,(-7L),0L,0x8E489E7FL,(-7L),(-7L),0xD7C08194L},{(-3L),(-7L),0x50D15052L,0x982148F4L,0L,9L,1L,1L,9L,0L}};
            int i, j;
            (***g_73) = p_66;
            (*g_19) = (void*)0;
            for (g_4 = (-29); (g_4 != (-12)); g_4++)
            {
                int32_t l_151 = 0x52091CAAL;
                int32_t l_155[9][10] = {{0x6A3BB2BEL,4L,0x3DC2C33AL,0x428794F9L,0x5F0EF6F4L,(-1L),(-1L),0x5F0EF6F4L,0x428794F9L,0x3DC2C33AL},{0x428794F9L,0x428794F9L,0L,0x3DC2C33AL,0x7324BB92L,(-9L),0x5F0EF6F4L,0xFDC9EDEDL,1L,0x15465196L},{0xFDC9EDEDL,6L,0x5F0EF6F4L,0x8BA31763L,(-3L),0x8BA31763L,0x5F0EF6F4L,6L,0xFDC9EDEDL,0x428794F9L},{4L,0x428794F9L,1L,0x7324BB92L,0x15465196L,0x3DC2C33AL,0L,0x428794F9L,0x428794F9L,0L},{(-3L),1L,(-9L),(-9L),1L,(-3L),(-10L),0x3DC2C33AL,0xD72D2710L,(-1L)},{(-1L),0x428794F9L,0xFDC9EDEDL,6L,0x5F0EF6F4L,0x8BA31763L,(-3L),0x8BA31763L,0x5F0EF6F4L,6L},{(-1L),0x8BA31763L,(-1L),4L,0L,(-3L),6L,0x7324BB92L,0xFDC9EDEDL,0x3DC2C33AL},{(-3L),6L,0x7324BB92L,0xFDC9EDEDL,0x3DC2C33AL,0x3DC2C33AL,0xFDC9EDEDL,0x7324BB92L,6L,(-3L)},{1L,0x6A3BB2BEL,(-1L),0x428794F9L,0xFDC9EDEDL,6L,0x5F0EF6F4L,0x8BA31763L,(-3L),0x8BA31763L}};
                int16_t *l_157 = &l_154;
                int16_t *l_158 = &g_159;
                int8_t *l_184 = &l_146;
                int i, j;
                p_66 = ((+((((g_122 != (((((*l_158) = (((p_64 || ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((*l_157) = (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((g_86 || g_2), (safe_sub_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((((9UL < (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((l_155[8][2] |= (safe_sub_func_uint64_t_u_u(((((l_146 & (((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_151 , 1L), 14)), (safe_lshift_func_int16_t_s_u((p_66 < 6L), g_88)))) && 0x09B3387B99205434LL) <= 65533UL)) >= 0UL) == g_109) == l_154), g_4))) , g_78) , 0x6355D27DBBC66260LL) <= g_156), p_66)), 0x0D72L))) > g_156) | g_95), g_2)) , 0x6063A1CEL) != p_65), l_146)))) | 0x40555863L) > p_64), g_78)) & g_88) , 0UL) && l_151), g_93))), 10)) , l_146), p_66)) ^ p_66)) > p_66) | p_65)) ^ 0x062BL) ^ p_65) == p_66)) | p_66) >= 0x75D022AC7DB9AC06LL) && 0UL)) & g_86);
                for (p_65 = 0; (p_65 > (-6)); --p_65)
                {
                    int32_t *****l_173 = (void*)0;
                    int32_t l_180 = 1L;
                    int32_t l_181 = 0x9FE6B08AL;
                    (**g_18) = &p_65;
                    if (l_162[0][1])
                        continue;
                    for (g_78 = 0; (g_78 <= 8); g_78 += 1)
                    {
                        ++g_165;
                        (*g_19) = (void*)0;
                    }
                    l_181 ^= (safe_rshift_func_int8_t_s_u((g_156 ^ (((((((((-1L) < ((l_170 = (*g_73)) == (void*)0)) , l_173) != (g_177[0] = l_174[4][4][2])) >= (p_66 && ((-1L) == p_64))) != 7UL) != 2UL) <= l_180) & 0x8FL)), 6));
                }
                l_155[0][7] &= (((**g_72) != (*g_73)) >= (0x3D107391EF432E68LL >= ((safe_lshift_func_int8_t_s_u((((*l_184) = ((void*)0 != &g_88)) ^ (p_64 , (g_88 && (l_185 == (g_122 , l_184))))), 1)) == p_65)));
            }
        }
        else
        {
            uint32_t l_187 = 1UL;
            --l_187;
        }
    }
    return p_64;
}
static int8_t func_69(int32_t * const ** const ** p_70)
{
    int64_t l_75 = 0x647D02C9AA6F5761LL;
    (**g_19) = 0xEBAE88B1L;
    return l_75;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_4;
    csmith_sink_ = g_78;
    csmith_sink_ = g_86;
    csmith_sink_ = g_88;
    csmith_sink_ = g_93;
    csmith_sink_ = g_95;
    csmith_sink_ = g_109;
    csmith_sink_ = g_122;
    csmith_sink_ = g_156;
    csmith_sink_ = g_159;
    csmith_sink_ = g_164;
    csmith_sink_ = g_165;
    csmith_sink_ = g_172;
    csmith_sink_ = g_239;
    csmith_sink_ = g_247;
    csmith_sink_ = g_249;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                csmith_sink_ = g_254[i][j][k];
            }
        }
    }
    csmith_sink_ = g_267;
    csmith_sink_ = g_290;
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_303[i];
    }
    platform_main_end(0,0);
    return 0;
}
