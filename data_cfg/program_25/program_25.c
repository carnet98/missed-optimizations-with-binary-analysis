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
struct S0 {
   uint8_t f0;
   int64_t f1;
   int64_t f2;
};
struct S1 {
   uint64_t f0;
   int32_t f1;
   uint64_t f2;
   int32_t f3;
   int16_t f4;
   int32_t f5;
   uint16_t f6;
};
static uint64_t g_18 = 0xB722BA7B7E80D68FLL;
static uint64_t g_26 = 0x258D0336D065835ALL;
static uint32_t g_52 = 0xF61CA727L;
static uint32_t g_83 = 0x5AE90980L;
static int16_t g_99 = 0x985BL;
static struct S1 g_101 = {18446744073709551612UL,0x56116ABEL,0xF132C5A173F20374LL,-4L,0xD0F3L,1L,0x0D67L};
static struct S0 g_102 = {7UL,0xD896CD2A541E781FLL,-10L};
static uint64_t g_150 = 0xA7E5B6355D27DBBCLL;
static int16_t g_157 = 0x8EBDL;
static int32_t g_175 = (-6L);
static uint16_t g_187 = 1UL;
static int32_t g_194 = 0xEC947174L;
static int32_t g_235 = 0x62F29F11L;
static int8_t g_254 = (-1L);
static int32_t g_255 = 3L;
static int64_t g_258 = 1L;
static uint8_t g_259 = 0x46L;
static uint64_t g_262 = 0x0E2737E1BAF48159LL;
static int16_t g_282 = 0x7DA6L;
static int8_t g_316 = 0xF4L;
static int16_t g_359 = 0x0C97L;
static uint32_t g_460 = 0x76D7F5B2L;
static uint32_t g_467 = 0x8445573CL;
static int32_t g_607 = 4L;
static int64_t g_633 = 0x0B8E471CA4684CC4LL;
static uint64_t g_644 = 18446744073709551615UL;
static int64_t g_649 = 0x3288B0B0584A9D03LL;
static int32_t g_682 = 3L;
static int64_t g_684 = 7L;
static int64_t g_686 = 0x73D433844ACF8816LL;
static int16_t g_687 = (-1L);
static uint32_t g_688 = 4294967292UL;
static uint64_t g_741 = 0x2F7C87E3B5D45A67LL;
static int64_t g_782 = (-9L);
static int64_t g_783 = 0L;
static int32_t g_784 = 0xCA38454AL;
static int32_t g_785 = 9L;
static int32_t g_811 = 0L;
static uint32_t g_812 = 0xEB2506BEL;
static int16_t g_815 = 0xE6CDL;
static int32_t g_892 = (-4L);
static uint32_t g_978 = 0x1C757A3AL;
static int64_t g_979 = (-1L);
static struct S0 g_1025 = {0UL,0xD00766CD0AE853CBLL,-8L};
static int32_t g_1030 = 0x25A1B066L;
inline static int16_t func_1(void);
static struct S1 func_2(uint32_t p_3, int8_t p_4, int64_t p_5, uint8_t p_6, uint16_t p_7);
inline static uint16_t func_10(int8_t p_11, struct S0 p_12, uint8_t p_13, uint64_t p_14, uint16_t p_15);
static int8_t func_16(int32_t p_17);
inline static struct S0 func_20(struct S0 p_21, uint32_t p_22);
inline static uint16_t func_42(struct S0 p_43, uint32_t p_44, uint64_t p_45);
static struct S0 func_46(uint8_t p_47, uint32_t p_48, uint64_t p_49, uint32_t p_50);
static uint32_t func_59(int16_t p_60);
static uint64_t func_63(struct S1 p_64, int32_t p_65, uint64_t p_66, struct S0 p_67, int8_t p_68);
static struct S1 func_69(int32_t p_70, uint16_t p_71, int32_t p_72);
inline static int16_t func_1(void)
{
    struct S0 l_23 = {248UL,0x4DF8E3BF118C84B7LL,0x831966C4779D44F4LL};
    int32_t l_24 = 0x18B9628EL;
    int32_t l_25 = 0x2F4E55B6L;
    struct S1 l_658 = {0xAA104E273E507135LL,-1L,7UL,0L,0x63A6L,0x68F39C98L,0x1408L};
    struct S1 l_659 = {0x1740D2DA0EE495ECLL,0x2979685FL,0UL,-1L,-1L,8L,0UL};
    struct S1 l_660 = {1UL,1L,0x437ABDA94D545F57LL,0x0C289E62L,2L,0L,4UL};
    int32_t l_672 = 0L;
    int64_t l_724 = (-1L);
    uint32_t l_730 = 0x14E77CB0L;
    uint32_t l_735 = 0xBC016521L;
    int16_t l_754 = (-2L);
    uint16_t l_848 = 65535UL;
    int32_t l_849 = 1L;
    uint32_t l_921 = 3UL;
    uint32_t l_976 = 1UL;
    uint16_t l_1023 = 0xEACAL;
    l_660 = (l_659 = (l_658 = func_2((safe_add_func_int8_t_s_s((func_10(func_16(g_18), func_20(l_23, (((g_26--) && (l_23.f2 && (safe_div_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((!((safe_mul_func_int8_t_s_s((g_607 = (safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((0x18L ^ (l_25 |= (func_42(func_46(l_23.f2, g_26, g_18, g_18), l_23.f2, g_18) ^ (-1L)))), g_255)) ^ g_26), 0x78L))), 0x35L)) <= l_23.f0)), l_23.f0)), (-9L))) >= 0UL), g_150)))) && l_24)), l_23.f1, l_23.f1, l_23.f2) & l_23.f1), g_157)), g_18, g_150, g_633, g_150)));
    for (g_460 = 0; (g_460 != 48); ++g_460)
    {
        int32_t l_669 = (-2L);
        int32_t l_673 = 0x6DCF8277L;
        int32_t l_683 = 1L;
        int32_t l_685 = (-1L);
        g_101.f3 ^= ((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((g_101.f6 |= l_658.f5), l_669)) ^ (-9L)) < (safe_add_func_int64_t_s_s(g_101.f0, (l_673 = l_672)))), ((safe_mod_func_int16_t_s_s((l_658.f3 > (~(safe_unary_minus_func_int64_t_s(l_23.f1)))), l_659.f0)) ^ (((safe_mod_func_int8_t_s_s((-8L), g_101.f4)) == l_669) > 0xD3AE8310E1F8B289LL)))), 0x07CFL)) ^ l_24);
        l_669 &= (0xBD615530713DA440LL && (safe_sub_func_int16_t_s_s((l_673 = l_660.f3), l_659.f0)));
        g_688--;
        l_24 = g_235;
    }
    l_658.f3 |= (-5L);
    if ((l_659.f6 > l_659.f3))
    {
        uint16_t l_715 = 65534UL;
        uint32_t l_722 = 0xA113D644L;
        uint16_t l_723 = 0xF462L;
        int32_t l_725 = (-2L);
        uint16_t l_798 = 0x4B44L;
        int32_t l_807 = 0x04B9B014L;
        int32_t l_808 = 3L;
        int32_t l_809 = 0x82E470AFL;
        uint32_t l_835 = 4294967294UL;
        uint16_t l_893 = 65535UL;
        int64_t l_916 = (-1L);
        g_101.f3 = ((g_101.f1 ^= (safe_add_func_uint64_t_u_u((g_262 = ((l_725 = (safe_mod_func_int64_t_s_s(((safe_add_func_int16_t_s_s(1L, (safe_add_func_int16_t_s_s(((g_101.f4 = ((((safe_sub_func_int8_t_s_s((g_316 &= (((safe_add_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_359 == l_23.f1), (g_282 ^ (safe_mul_func_int8_t_s_s((g_254 = ((((safe_lshift_func_uint16_t_u_s(65535UL, 1)) && ((safe_div_func_uint16_t_u_u(g_684, (l_715 = g_235))) <= (0xA7E6960AF9E2C309LL == (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((0x4E4AA5A9EBCC252DLL ^ g_101.f2), l_722)), 6)), l_723))))) == g_259) && g_460)), g_644))))), l_723)) < g_649) == 0xCFL), l_723)) > l_660.f3) | g_467)), 5L)) & g_101.f2) >= 0x1EL) && l_660.f1)) && l_23.f1), l_659.f2)))) <= (-1L)), l_724))) == g_101.f3)), g_102.f1))) && g_688);
        if (((+(((g_52 >= (safe_unary_minus_func_int8_t_s((l_730 = (safe_div_func_uint32_t_u_u(9UL, (l_658.f5 &= g_102.f0))))))) <= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_735, 1)), ((safe_add_func_uint8_t_u_u(((((l_658.f3 = (safe_add_func_uint8_t_u_u((+g_52), ((g_741 >= (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_52, g_316)), (safe_mod_func_uint8_t_u_u(((g_101.f5 = (safe_sub_func_uint16_t_u_u((l_725 || 4294967291UL), l_660.f3))) != l_725), l_725)))), l_658.f3)), l_660.f4))) | l_754)))) || 0L) <= 0x21FF8510L) ^ g_258), (-8L))) == g_187)))) | (-1L))) & 5UL))
        {
            uint32_t l_774 = 4294967292UL;
            int32_t l_775 = 0xBEEF292DL;
            int16_t l_776 = (-1L);
            int32_t l_777 = 0x5771CC63L;
            for (g_741 = 0; (g_741 < 40); ++g_741)
            {
                int32_t l_763 = 0xD249AC53L;
                l_777 = (0xE8L > ((((g_282 = 0xF068L) <= ((safe_sub_func_uint64_t_u_u((((l_725 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(65535UL, (((l_763 >= ((g_101.f5 |= ((safe_rshift_func_int8_t_s_u((g_101.f0 == ((((safe_sub_func_int32_t_s_s((0x76L < ((safe_rshift_func_int8_t_s_u(((((g_682 = (safe_mod_func_int64_t_s_s(0x341F96CBD749B7FCLL, (safe_mul_func_uint8_t_u_u(l_763, (l_774 >= l_763)))))) ^ 0xEACDB5E2L) != l_775) ^ 0UL), g_99)) || g_101.f0)), l_775)) > l_658.f5) ^ 0x728DL) == l_715)), 5)) & 0L)) & l_775)) > g_99) < g_102.f0))), g_644))) <= l_723) | l_776), g_607)) || g_255)) ^ l_660.f0) & 18446744073709551611UL));
            }
        }
        else
        {
            uint32_t l_786 = 0UL;
            uint64_t l_791 = 0x4C1F03871125067DLL;
            int64_t l_803 = 0xA9FE3F57EACDEB8FLL;
            int32_t l_804 = 0x4FD9A4FEL;
            int32_t l_805 = 1L;
            int32_t l_806 = 4L;
            int32_t l_810 = 0L;
            uint16_t l_816 = 65530UL;
            for (l_658.f5 = 0; (l_658.f5 <= (-15)); --l_658.f5)
            {
                int8_t l_780 = 0xF6L;
                int32_t l_781 = 0x162F56DDL;
                l_725 |= (-1L);
                l_660.f3 ^= l_780;
                l_786++;
            }
            g_101.f1 ^= (((safe_rshift_func_uint16_t_u_s((((l_791 && (safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((g_359 = g_101.f3), (((g_785 |= g_687) != (l_798 <= g_259)) != (((((((8UL != ((((((safe_mul_func_uint16_t_u_u((0x2FL <= ((safe_div_func_int32_t_s_s(0x519B97B3L, g_684)) | l_791)), g_26)) | l_722) && 0x93D07BB1L) == l_722) <= l_786) || 0UL)) <= l_724) == 1L) == 0x0645D82A794E7761LL) > 3L) != g_460) < l_803)))) < g_101.f6), g_741))) != g_259) < 0x29L), l_715)) > g_649) && l_658.f6);
            ++g_812;
            --l_816;
        }
        l_660.f3 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((g_784 &= (g_785 = g_101.f2)) == (l_658.f3 &= l_659.f5)), 10)), l_798));
        if ((g_467 < (safe_rshift_func_uint8_t_u_u((g_460 ^ 0x76DBF247L), 0))))
        {
            uint32_t l_850 = 0x59527B9EL;
            int32_t l_871 = 0x254F4BB6L;
            struct S1 l_872 = {8UL,0x97F29B7CL,0x50D690BDB1B2CE89LL,0xD35094B4L,0xF2F4L,0L,65535UL};
            g_682 |= ((safe_add_func_uint64_t_u_u((((l_659.f1 = (((safe_div_func_uint16_t_u_u(((~(safe_sub_func_int32_t_s_s((+g_101.f3), (g_467 = (0x70L != ((g_259 = (safe_lshift_func_uint16_t_u_s(l_835, l_808))) == (l_25 |= ((g_316 || ((safe_lshift_func_int16_t_s_s(0x7B4BL, (((((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((-4L) || ((safe_div_func_uint8_t_u_u(0x13L, (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(g_783, g_101.f0)), 0x461FC064L)))) < 4294967295UL)), l_848)), l_849)) >= g_26) <= g_258) & g_811) < g_688))) == g_687)) < g_254)))))))) <= g_812), l_850)) & g_101.f2) > l_658.f3)) < l_660.f1) && l_850), g_688)) == 0UL);
            l_808 = (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((g_687 = (safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((!(g_262 && (safe_mod_func_uint64_t_u_u(((((l_658.f2 >= (safe_lshift_func_int16_t_s_s(g_682, (((safe_lshift_func_int8_t_s_u((((g_649 >= (safe_unary_minus_func_uint32_t_u((g_467 = (l_659.f5 || (g_815 = g_194)))))) == (safe_rshift_func_int16_t_s_u(g_18, 13))) > (l_809 = ((g_102.f2 ^= g_783) <= (l_871 = (((safe_div_func_int64_t_s_s((g_633 |= ((g_101.f5 && l_850) >= 0x91CEL)), g_157)) || g_101.f2) && g_359))))), g_282)) | g_101.f0) < l_735)))) >= g_101.f2) != l_24) >= 0xDE5CL), 0x3C74C59BA08C20A7LL)))) != l_23.f1), 0x4EB5B2F5L)), 1L))), (-9L))), 0x603D689DL));
            l_872 = l_872;
        }
        else
        {
            uint8_t l_880 = 0x03L;
            uint8_t l_881 = 247UL;
            int32_t l_894 = (-8L);
            uint8_t l_915 = 0x96L;
            int32_t l_1028 = 0x23390158L;
            int32_t l_1029 = 1L;
            int32_t l_1068 = 8L;
            g_101 = g_101;
            if ((l_894 = ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((g_316 = (l_660.f3 = (safe_mod_func_uint32_t_u_u((+((l_880 & (-6L)) <= l_881)), (safe_lshift_func_uint8_t_u_s(l_880, ((safe_div_func_int8_t_s_s(((g_255 < (((g_688 = (((((safe_rshift_func_uint8_t_u_s((g_259 = g_785), (g_254 = (safe_lshift_func_int8_t_s_s((((((l_658.f1 | l_881) || g_892) > 0x6EEB0BD3L) >= 0UL) | l_658.f5), 0))))) <= g_811) ^ 0x350376C1L) && g_101.f4) <= l_880)) >= 0x56CE36EBL) == l_893)) || g_633), g_101.f0)) < 0x956EA87B755BC7DELL))))))), 2)) >= l_849), 0xCDED7C79L)) && 0xE9L)))
            {
                int32_t l_903 = 5L;
                int32_t l_906 = 1L;
                int32_t l_951 = 0xEC5186ACL;
                uint64_t l_954 = 8UL;
                uint8_t l_975 = 255UL;
                uint8_t l_977 = 0xB5L;
                l_916 = ((safe_sub_func_uint16_t_u_u(l_894, (safe_mul_func_uint16_t_u_u(((((g_262 |= ((g_101.f0 != (safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((l_725 = (l_660.f1 = (l_903 | (safe_div_func_int32_t_s_s((l_809 < ((l_906 &= l_903) | 0UL)), (safe_sub_func_uint8_t_u_u(6UL, (l_807 = (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((-8L) > (safe_rshift_func_uint8_t_u_u((g_687 & g_783), l_715))), g_644)), g_783)))))))))) <= g_684), 0xDCB2L)) <= l_881), 1L))) || l_906)) ^ 0x304A18843AEB4B7CLL) == g_187) | g_102.f0), l_915)))) & l_715);
                if ((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(l_715, l_921)), 13)))
                {
                    int32_t l_922 = 1L;
                    int32_t l_952 = 0x8542845BL;
                    int32_t l_953 = 0x5F748339L;
                    l_922 = 0L;
                    if ((((g_467 && (safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((-4L), ((safe_mod_func_uint32_t_u_u(((l_808 = (g_254 = 0x62L)) < l_881), ((safe_lshift_func_int16_t_s_u(((0x14B6C8AEL ^ ((((l_894 |= (g_101.f2 = g_18)) < l_880) && g_316) && (safe_div_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((++g_259))), (safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(0x2303308098ED6EB2LL, 0x55FC969011223F38LL)), 6)))), 0x8091BE74L)) < g_682))) & l_915), l_922)) && 0x5D4031AD093B9F63LL), 3)) ^ l_894), 0UL)) == g_175) == l_659.f1), l_922)))) > l_722), l_24)) || l_903))) < 0x04L))), l_23.f0))) > l_906) >= g_783))
                    {
                        --l_954;
                        l_807 = (4UL > 0x5898L);
                    }
                    else
                    {
                        g_784 = 0x7AB91DB8L;
                        l_894 = g_187;
                        l_660.f1 = ((safe_mod_func_int8_t_s_s(0x21L, 0x97L)) < (4294967295UL ^ (safe_add_func_int32_t_s_s(l_660.f2, (safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((g_101.f3 = l_952) && (g_784 ^ (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_976 = (safe_rshift_func_uint16_t_u_s(l_722, (safe_mul_func_uint16_t_u_u((l_894 < ((((safe_sub_func_int64_t_s_s(((18446744073709551614UL || l_952) ^ g_782), (-5L))) && g_18) & l_975) == g_684)), 1L))))), l_977)), g_607)))) > 0x27B372FAL), 0x49L)) == 0xF6L), l_894))))));
                        g_194 = ((g_979 ^= g_978) | 0x1DC69EC829FC2DE6LL);
                    }
                    g_194 = (safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(g_258, ((safe_rshift_func_uint16_t_u_s(g_682, 0)) && ((safe_lshift_func_int16_t_s_u((l_953 >= ((l_915 > ((l_952 |= g_150) < ((safe_mul_func_uint8_t_u_u((((~(safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(3L, (g_175 != ((safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((l_807 || g_150) == l_835), l_880)) == 65535UL), g_682)) != 0x98240AA1FBCC38D8LL)))), 14)), g_187)), 1)), g_687))) & g_467) | g_460), g_157)) != l_954))) & 0xE507L)), 0)) >= l_894)))) <= 3L), 1)))), l_953))));
                }
                else
                {
                    uint32_t l_1024 = 0x6FC11100L;
                    l_894 = g_686;
                    l_659.f1 = (((safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((g_157 = g_688), 4)) ^ g_892), (g_102.f2 | (safe_sub_func_int32_t_s_s((((((g_682 | g_782) >= g_467) && ((g_815 = g_649) == (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_906, ((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((0x3DL || 0xC2L), 0xE7L)) ^ l_880), l_1023)) <= g_649))), 4294967287UL)))) > 0xBC4EL) < l_1024), l_951))))) != l_1024) < l_881);
                    g_1025 = (g_102 = func_20(l_23, g_785));
                }
            }
            else
            {
                int8_t l_1034 = 0x82L;
                for (g_259 = (-13); (g_259 > 26); g_259++)
                {
                    uint32_t l_1031 = 1UL;
                    int32_t l_1067 = 0L;
                    l_1031++;
                    if (g_686)
                        continue;
                    if ((g_255 == l_1034))
                    {
                        g_785 = (safe_mul_func_int8_t_s_s(l_715, 255UL));
                    }
                    else
                    {
                        l_807 &= (safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_1031, (~((((g_467++) == (0UL || (g_892 == ((safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s((((safe_unary_minus_func_int8_t_s(0x67L)) && 0L) != 0UL), (safe_unary_minus_func_int8_t_s(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((((((l_809 |= ((((safe_div_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((~(((safe_mod_func_uint8_t_u_u(l_976, 0x09L)) ^ (safe_div_func_uint16_t_u_u(((((l_1034 == 0L) | l_893) | g_150) != g_102.f1), 65535UL))) || 0x50ECL)), l_1067)) == g_684) && 0x6C11018EL), l_1031)) > g_1025.f1) <= 0x3CFB35BA337B437FLL) <= l_725)) < 0xD6049ECEL) <= 0xB319E10E3891B830LL) == 0UL) && l_1028), l_1029)) | g_811) == l_1031), l_1031)), g_649)) | 0x0AB5L))))) < 1UL), 65531UL)) == 0x1224CC231891B3FFLL)))) > g_687) && g_101.f2)))) != (-1L)), 0xD6D3L));
                        g_101.f1 ^= l_1067;
                    }
                    g_101.f3 |= l_1034;
                }
                l_1068 = (-1L);
            }
        }
    }
    else
    {
        int32_t l_1082 = 9L;
        int32_t l_1085 = 0xD5BB8D54L;
        uint16_t l_1092 = 65534UL;
        int32_t l_1093 = 0x6596FA3EL;
        struct S0 l_1096 = {0xDAL,0x3ED52AF9D107974ELL,0x0CFFBDC15EC8E3C2LL};
        for (g_26 = 5; (g_26 == 16); ++g_26)
        {
            uint32_t l_1073 = 9UL;
            l_1093 ^= (safe_div_func_int64_t_s_s(l_1073, (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_div_func_uint32_t_u_u(l_1073, (7L | 255UL))) && ((safe_lshift_func_int8_t_s_s(l_1082, ((l_1073 != (safe_div_func_uint32_t_u_u(((l_1085 = g_99) > (0L != (safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((0x1EED3894630CB5DALL & l_1092) & l_730) != l_1082), 8UL)), 0xCEL)), l_1073)))), g_359))) ^ g_101.f3))) & l_659.f1)) || g_101.f1), 8)), 0x65L))));
            for (g_101.f5 = 0; (g_101.f5 < (-5)); g_101.f5 = safe_sub_func_uint8_t_u_u(g_101.f5, 8))
            {
                l_1096 = (g_1025 = g_102);
            }
        }
        l_660.f3 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0x8358L, 15)), 4));
        l_1082 ^= (!g_194);
        return g_812;
    }
    return l_659.f6;
}
static struct S1 func_2(uint32_t p_3, int8_t p_4, int64_t p_5, uint8_t p_6, uint16_t p_7)
{
    int32_t l_657 = 0x8EA86473L;
    g_101.f1 &= (safe_add_func_int8_t_s_s((g_649 & g_101.f2), (((safe_mul_func_uint8_t_u_u((((0xB03E5DB0A236A0E8LL || (g_644 |= g_262)) >= (~g_359)) & (1UL <= g_282)), (l_657 |= ((--g_467) & (safe_unary_minus_func_int16_t_s((~1L))))))) > (g_101.f0 && p_4)) || l_657)));
    return g_101;
}
inline static uint16_t func_10(int8_t p_11, struct S0 p_12, uint8_t p_13, uint64_t p_14, uint16_t p_15)
{
    int8_t l_637 = 0xA0L;
    int32_t l_638 = 0x104D1C60L;
    int32_t l_639 = (-1L);
    int32_t l_640 = (-8L);
    int32_t l_641 = 0L;
    int32_t l_642 = 0L;
    int32_t l_643 = 0x52AECC87L;
    g_644++;
    return g_644;
}
static int8_t func_16(int32_t p_17)
{
    uint16_t l_19 = 6UL;
    return l_19;
}
inline static struct S0 func_20(struct S0 p_21, uint32_t p_22)
{
    uint16_t l_619 = 0xAECDL;
    int32_t l_632 = (-1L);
    int32_t l_634 = (-1L);
    int32_t l_635 = (-1L);
    int32_t l_636 = 0xD62FD9E3L;
    l_636 = (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((g_99 &= ((((safe_mul_func_int8_t_s_s(((!((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((4294967295UL | p_21.f1), (l_619 = (-1L)))) > g_150), p_22)) || (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((((l_635 = (safe_lshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((l_619 != ((l_619 == ((l_634 = ((safe_sub_func_uint8_t_u_u((l_632 |= ((0xDAL != l_619) ^ l_619)), g_633)) && 0UL)) | 8UL)) <= l_619)) < l_619), 0x29L)), g_101.f3)), 9))) & g_235) <= 0x9733126D1AA99E74LL), p_21.f0)), l_619)))) | l_636), l_636)) || l_635) > g_460) <= 0xEC177AAEL)) || 0UL), l_636)), l_636)) && l_619) || 0L);
    return g_102;
}
inline static uint16_t func_42(struct S0 p_43, uint32_t p_44, uint64_t p_45)
{
    int8_t l_589 = 4L;
    int32_t l_605 = 0L;
    struct S0 l_606 = {1UL,0xF5CE4DA1F375FB84LL,1L};
    l_606 = func_46((((safe_lshift_func_uint16_t_u_u(0UL, ((p_43.f1 > l_589) | ((((l_605 = (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((8L & ((((!p_45) != (((g_262 ^= ((g_99 != (~l_589)) & 0xBEE10AEB0365C96CLL)) < (safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(0xA88BL, g_101.f2)), l_589)) < g_101.f1), g_259)) <= l_589), g_52))) > g_101.f4)) < g_101.f3) == 9L)))), p_43.f0))) < p_43.f2) > 0xCBL) == g_26)))) > g_102.f0) | p_45), g_18, g_255, p_43.f0);
    return g_194;
}
static struct S0 func_46(uint8_t p_47, uint32_t p_48, uint64_t p_49, uint32_t p_50)
{
    int32_t l_55 = 0x55A9D45CL;
    int32_t l_266 = 0x05B1F0BCL;
    int32_t l_267 = (-8L);
    int16_t l_308 = 0xD4E3L;
    uint32_t l_313 = 0x2C634368L;
    uint16_t l_360 = 0x96B6L;
    uint64_t l_361 = 0x9A5F5D61C98CFF19LL;
    int32_t l_362 = 1L;
    uint8_t l_363 = 3UL;
    struct S1 l_378 = {0xB8A31F7803BE8F81LL,0x5B06E9F9L,0x4B579935A896354CLL,8L,0x9CACL,0x483999EBL,0UL};
    uint32_t l_432 = 0x9F6DDA77L;
    struct S0 l_584 = {0UL,0L,0x05750D7EFAC047BCLL};
    l_267 = (((g_52 = (safe_unary_minus_func_int32_t_s(p_48))) | (safe_rshift_func_uint16_t_u_s((((((func_16(l_55) || ((g_194 = func_16(((!(g_262 |= func_59((safe_mod_func_uint8_t_u_u(255UL, p_50))))) < ((g_254 = p_48) >= (l_266 = (~((safe_rshift_func_uint16_t_u_s(l_55, p_49)) ^ l_55))))))) & l_55)) <= 0x61D12E86L) == 0x85BBL) > g_157) != 0L), p_47))) & g_26);
    for (g_52 = (-19); (g_52 >= 8); ++g_52)
    {
        uint64_t l_275 = 0x1842AC9BB6F5C222LL;
        int32_t l_280 = 0xC7F93EFDL;
        int32_t l_281 = (-1L);
        struct S0 l_309 = {255UL,2L,7L};
        uint16_t l_322 = 0UL;
        struct S1 l_340 = {18446744073709551615UL,-5L,18446744073709551612UL,3L,0xC233L,3L,65534UL};
        l_280 = (safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((~((l_266 < (0xE6L > l_275)) && (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((--p_50) ^ (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(0x6DA6L, ((safe_sub_func_int64_t_s_s(g_254, ((safe_unary_minus_func_int16_t_s(((safe_lshift_func_int16_t_s_s(((g_187 |= l_55) == ((l_267 ^= l_275) >= g_259)), 14)) <= l_280))) >= g_282))) >= g_101.f0))) || p_49), 0x42L))), 65535UL)), g_150)))), 0x159EL)), p_48));
        l_281 = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(l_267, 0)) <= (((g_150 ^ g_254) & ((safe_sub_func_uint16_t_u_u(g_101.f0, (l_55 && ((l_308 != 0L) ^ g_83)))) || p_48)) > g_99)), g_52)) & g_255) >= g_101.f5), 0xC09FFE99L)) && (-1L)), l_267)), 1));
        if (g_99)
        {
            uint32_t l_310 = 0x4616B0BCL;
            g_102 = l_309;
            l_310++;
            if (l_313)
            {
                uint64_t l_319 = 18446744073709551615UL;
                g_101.f1 = (safe_mul_func_uint16_t_u_u(((g_316 = g_101.f5) > (safe_div_func_int32_t_s_s((l_319 |= g_101.f1), (safe_div_func_uint64_t_u_u(4UL, p_49))))), g_282));
            }
            else
            {
                uint32_t l_339 = 4294967290UL;
                l_322 = g_187;
                l_340 = func_69((0L > (((l_266 = 255UL) & l_322) == (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(g_187, (safe_div_func_uint64_t_u_u((0x5E4DCB4F3F161F6DLL & (g_258 = ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_47, g_254)), l_310)) | (((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u(4294967289UL, p_50)), l_339)) > l_55) <= 0x99181E83345E133CLL)))), l_309.f2)))), l_309.f2)), 0x79L)))), l_313, l_339);
                g_101 = g_101;
            }
        }
        else
        {
            if (g_101.f3)
                break;
        }
    }
    if (((l_362 |= ((0x18132221L <= 1UL) | ((l_361 = (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((+0xDE8CL) && ((((safe_add_func_uint8_t_u_u((g_254 & p_50), (7L & (safe_mod_func_int32_t_s_s((l_267 = ((safe_add_func_int8_t_s_s(((((g_101.f6 = (l_266 = (((safe_rshift_func_uint8_t_u_s((((l_55 && (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((~g_316), g_359)), 0x0BL))) && p_48) > (-1L)), g_101.f0)) == l_313) < p_47))) || 0L) < l_313) || g_359), l_360)) != 248UL)), p_50))))) ^ 1UL) <= l_308) | g_101.f1)), l_313)), 0x78231FD8L))) | l_308))) == l_363))
    {
        uint16_t l_377 = 0x16D7L;
        g_101.f5 = (((g_101.f4 & (safe_sub_func_uint8_t_u_u(g_282, (safe_mod_func_int8_t_s_s(l_55, (safe_mod_func_int32_t_s_s((g_194 = (g_150 || l_55)), (safe_add_func_int16_t_s_s((!(-5L)), (g_359 = ((l_266 = (safe_div_func_int16_t_s_s(p_48, ((safe_mod_func_int8_t_s_s((((0xDDB9L | 8UL) > l_377) & (-1L)), 0x92L)) & 0xF3L)))) == 0x7FL))))))))))) | 0x3596L) & p_47);
    }
    else
    {
        uint16_t l_408 = 65526UL;
        int64_t l_429 = 0x36ECE72C066E181ELL;
        int32_t l_433 = 0x2ADB1AD0L;
        int32_t l_454 = 7L;
        int32_t l_455 = 0x7178973CL;
        int32_t l_456 = 0x78855DD7L;
        int32_t l_457 = 5L;
        int32_t l_517 = (-1L);
        if (p_49)
        {
            int32_t l_406 = 0xF7C61B3FL;
            int32_t l_407 = 0x8AE991FCL;
            l_378 = g_101;
            l_362 ^= (g_194 >= (safe_div_func_uint8_t_u_u(g_101.f6, (safe_mul_func_int16_t_s_s((g_282 &= g_259), ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_316 <= (p_47 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((+((((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((p_47 != (safe_rshift_func_uint8_t_u_u((l_406 |= (safe_mod_func_uint16_t_u_u((p_49 && (p_48 & (safe_lshift_func_int16_t_s_s((-1L), 12)))), p_47))), l_407))), g_235)), l_407)), p_47)) <= l_407) != l_363) == l_408)) ^ (-1L)), (-7L))), p_49)))) | p_50), p_50)), g_101.f4)), p_50)) <= 0xF03459CEL))))));
        }
        else
        {
            uint64_t l_445 = 0x8C41C65E760D366CLL;
            struct S0 l_449 = {253UL,0x07F084D59CC582CELL,1L};
            int32_t l_464 = 0x1A0A197FL;
            int32_t l_465 = 0x2A156F87L;
            for (l_55 = 2; (l_55 != 10); l_55 = safe_add_func_int32_t_s_s(l_55, 8))
            {
                uint8_t l_434 = 6UL;
                int32_t l_453 = 0xA82069F2L;
                int64_t l_458 = 0x50104BB7613CF344LL;
                int32_t l_459 = 0xFCD6ECBCL;
                struct S0 l_520 = {0xDCL,-4L,0xF3164F34E5C46421LL};
                struct S0 l_521 = {1UL,0x0BD70E0E76739539LL,0x41A7B9ABF6895211LL};
                if ((l_378.f5 = (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((0UL || (((l_408 && ((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u(p_48)) <= (0xC9L != (safe_sub_func_uint64_t_u_u((((g_101.f6 = 0x2D78L) < g_316) && ((((safe_unary_minus_func_uint16_t_u(0xEE3DL)) & p_48) <= ((l_433 = (safe_lshift_func_uint8_t_u_u((++g_259), (g_102.f0 &= l_432)))) || 0xBCEAL)) <= g_83)), p_49)))), p_50)), l_429)) >= l_313), 1L)) || g_52)) > p_49) <= g_101.f5)), 4)), l_434))))
                {
                    int8_t l_441 = 0x89L;
                    struct S0 l_452 = {0x2CL,0xC98F07CFA1AE7860LL,-1L};
                    g_101.f3 = (((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_441, p_49)), ((((l_434 && ((safe_rshift_func_int16_t_s_u((!l_360), 2)) ^ l_445)) && (+((((safe_sub_func_int32_t_s_s(g_101.f4, p_47)) < (l_378.f1 = g_175)) == (((-10L) >= 0x17F358C7L) && p_47)) && l_434))) > l_445) == g_255))), 12)) < g_258) < g_359);
                    g_102 = l_449;
                    for (g_83 = 0; (g_83 == 37); g_83 = safe_add_func_uint32_t_u_u(g_83, 8))
                    {
                        if (g_101.f6)
                            break;
                        return l_452;
                    }
                    --g_460;
                }
                else
                {
                    int32_t l_463 = 0x6B81B9BBL;
                    int32_t l_466 = (-1L);
                    ++g_467;
                }
                if ((0x29L & (safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u((p_48 || (safe_mod_func_int8_t_s_s((!((safe_mul_func_int16_t_s_s((((l_464 = ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_50, 1L)), 1)) == (safe_mul_func_uint16_t_u_u((p_49 && 0x6A2F6E2AL), (g_101.f6 = (p_49 && (safe_rshift_func_int8_t_s_s(g_26, (!l_449.f0))))))))) & 0L) == g_99), p_50)) && l_361)), 1UL))), g_259)), 1L))))
                {
                    uint8_t l_494 = 0UL;
                    int8_t l_516 = 0x81L;
                    g_194 = (safe_add_func_int32_t_s_s(((l_459 = ((((p_49 != ((g_175 < (0xD14BL || ((((-1L) > (g_258 <= (safe_lshift_func_uint8_t_u_u((p_47 = (l_453 < 0x0DL)), 3)))) != 1UL) | (safe_mod_func_int32_t_s_s(((-2L) && g_316), l_429))))) > g_150)) >= p_50) && 0UL) && l_378.f1)) & l_494), l_449.f0));
                    l_433 = l_408;
                    g_194 = ((safe_div_func_uint32_t_u_u((l_458 || (((l_458 != ((((g_467 |= (safe_div_func_uint32_t_u_u((((((safe_mul_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u((l_456 = l_454), (safe_mul_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s(l_449.f1, (safe_div_func_uint16_t_u_u((((g_316 < (!0x3F63L)) | (-9L)) == l_465), (safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(g_255, p_47)), l_449.f2)), l_516)))))) || g_102.f1) == (-1L)) | l_454), l_454)))) >= 0x3EL) <= 0L) < 0x604BL), l_458)) && l_445) >= 0x3514E3EEL) && l_453) <= 7UL), g_235))) ^ g_259) || g_101.f1) >= p_49)) < l_517) == p_50)), g_175)) >= p_47);
                }
                else
                {
                    int32_t l_551 = 0xC0178596L;
                    int32_t l_552 = 6L;
                    l_517 = (p_47 ^ (g_254 = (!(~0xFC5EL))));
                    if ((9UL || (l_378.f3 | g_101.f1)))
                    {
                        g_102 = l_520;
                        g_101.f3 = (l_465 = 0xBEA63802L);
                        l_521 = g_102;
                    }
                    else
                    {
                        int32_t l_550 = 0xA5839F48L;
                        g_101.f3 &= (safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_465 ^= 0xE12FL), (g_359 & (g_282 = l_449.f0)))), g_101.f4)), 5));
                        l_552 &= (l_551 = (safe_add_func_uint8_t_u_u(l_449.f1, ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((g_101.f5 |= (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((0xF02D1D45L ^ p_47), (p_49 ^ g_101.f4))), ((p_50 <= (g_194 ^= (safe_sub_func_int8_t_s_s(g_101.f3, (safe_mod_func_int32_t_s_s(((l_464 = (safe_rshift_func_uint8_t_u_s((((l_465 = (g_99 |= (safe_sub_func_int16_t_s_s(0xD2FEL, (g_101.f6++))))) > (l_550 == l_550)) > p_50), 1))) >= g_102.f1), p_47)))))) & g_102.f1)))), l_445)) || (-8L)), g_460)), g_259)) >= l_458))));
                    }
                }
                if (g_52)
                    break;
            }
        }
        l_267 ^= l_408;
    }
    for (l_308 = 0; (l_308 < 3); l_308 = safe_add_func_int64_t_s_s(l_308, 6))
    {
        int32_t l_577 = 1L;
        int32_t l_583 = 6L;
        l_378.f1 &= (-1L);
        for (l_378.f3 = 14; (l_378.f3 == 19); l_378.f3++)
        {
            uint64_t l_559 = 0x15368788BC8206E4LL;
            int32_t l_572 = 3L;
            int32_t l_573 = 4L;
            for (g_101.f0 = 17; (g_101.f0 != 5); g_101.f0 = safe_sub_func_int16_t_s_s(g_101.f0, 4))
            {
                int32_t l_562 = 1L;
                l_559 &= (-8L);
                for (g_52 = 0; (g_52 != 12); g_52 = safe_add_func_uint32_t_u_u(g_52, 6))
                {
                    g_102 = g_102;
                    if (l_562)
                        continue;
                }
                if (g_175)
                    break;
            }
            l_583 &= (safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((!((safe_sub_func_int32_t_s_s((((8L != (safe_sub_func_int64_t_s_s((l_573 &= (l_572 = 1L)), ((+0x54D7976DL) || 0xF2135F33L)))) ^ (safe_add_func_uint8_t_u_u((p_47 = (g_102.f0 |= l_577)), ((safe_add_func_uint8_t_u_u(((g_262 < (!(((safe_div_func_uint64_t_u_u(0UL, (0xB0D78328L && 1L))) & 1UL) == l_559))) | l_559), p_50)) && l_378.f2)))) > 4294967288UL), 9UL)) >= p_49)) || l_360), g_282)) > l_577), 5));
        }
    }
    return l_584;
}
static uint32_t func_59(int16_t p_60)
{
    int8_t l_77 = 0xFAL;
    int32_t l_78 = 0x4BC07302L;
    int8_t l_79 = 0x02L;
    int32_t l_80 = 4L;
    int32_t l_81 = 0x2DC50754L;
    int32_t l_82 = 0xB7607968L;
    uint8_t l_95 = 0x95L;
    struct S0 l_126 = {1UL,-1L,-9L};
    int8_t l_240 = 0x4BL;
    int32_t l_251 = 0x160E171AL;
    int32_t l_253 = (-1L);
    int32_t l_257 = 0x943D24E9L;
    if (((-1L) > func_63((g_101 = func_69((safe_mul_func_int8_t_s_s(((~g_18) && (~(++g_83))), g_26)), (((~l_79) > (safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s((0xB16E5D1C1BBB80EALL && ((0x016EL >= ((((safe_mul_func_uint16_t_u_u(l_82, g_18)) == g_26) != g_26) <= 0x4390AC9F79E4B39CLL)) & p_60)), 0UL)), g_18))) || 0UL), l_95)), p_60, p_60, g_102, g_102.f1)))
    {
        uint32_t l_122 = 0UL;
        int32_t l_125 = 1L;
        int64_t l_156 = 0x4CFDF4E952D19C51LL;
        int32_t l_186 = 0xB377A342L;
        uint64_t l_216 = 1UL;
        int32_t l_217 = 0xEF432E68L;
        struct S0 l_218 = {0xF6L,0x7F8FBDC1381652B8LL,-1L};
        for (g_83 = 7; (g_83 <= 27); g_83++)
        {
            --l_122;
        }
        l_125 = p_60;
        l_126 = g_102;
        for (g_101.f1 = 20; (g_101.f1 <= 3); --g_101.f1)
        {
            int8_t l_143 = 9L;
            int32_t l_151 = 0L;
            int64_t l_209 = 1L;
            uint32_t l_215 = 0x805B927CL;
            struct S0 l_219 = {0x96L,5L,-10L};
            if ((0x3D09B338L && (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((1UL | (safe_mul_func_int16_t_s_s((l_151 = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((l_122 >= (safe_lshift_func_int8_t_s_s((l_143 |= 1L), 4))), (safe_mul_func_int16_t_s_s((g_102.f0 | ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_150 > (((((l_151 >= (safe_rshift_func_int8_t_s_s((l_125 = ((safe_add_func_uint32_t_u_u((g_101.f5 || p_60), g_83)) == l_151)), p_60))) ^ 0x3E1B125E79E523DBLL) < (-1L)) ^ l_80) <= (-6L))), g_101.f3)), 0x5277L)) || 1L)), l_156)))), g_157)) != 1L)), 0x96B1L))), p_60)), l_81)), l_156))))
            {
                uint32_t l_178 = 4294967295UL;
                int32_t l_183 = 0xE3D7E29CL;
                for (g_101.f4 = 0; (g_101.f4 >= (-8)); g_101.f4--)
                {
                    int32_t l_166 = (-8L);
                    uint32_t l_181 = 6UL;
                    int32_t l_182 = 1L;
                    l_78 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(l_151, l_166)), 7)), (((l_125 = (l_182 &= (safe_sub_func_uint64_t_u_u(((((g_101.f0 > (l_166 && (((safe_rshift_func_int16_t_s_s(g_150, (l_82 = (((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((((g_175 = g_102.f0) & (l_178 = (safe_rshift_func_uint8_t_u_u(l_82, 7)))) ^ (-1L)) >= (safe_rshift_func_uint16_t_u_s(g_18, 13))), 5)) <= p_60) | 0xFFBD2F48C2FE74D0LL), l_166)) > 4UL) ^ g_99)))) && p_60) == l_181))) && (-1L)) != p_60) >= 0x2ACCF633L), g_101.f4)))) & l_183) | p_60)));
                }
                for (l_122 = 0; (l_122 != 7); l_122 = safe_add_func_int64_t_s_s(l_122, 7))
                {
                    l_186 &= (0UL <= 5L);
                    g_187++;
                    l_125 |= g_150;
                }
            }
            else
            {
                uint32_t l_196 = 0UL;
                for (l_95 = 0; (l_95 != 35); l_95 = safe_add_func_int16_t_s_s(l_95, 5))
                {
                    uint8_t l_192 = 0UL;
                    int32_t l_193 = (-5L);
                    int32_t l_195 = 0x551692F6L;
                    if (p_60)
                        break;
                    if (p_60)
                        break;
                    if (l_192)
                        continue;
                    --l_196;
                }
            }
            l_217 ^= (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((l_186 = 0UL), (((l_82 == (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u(((((((8UL > (l_151 = (l_209 | (((safe_mul_func_uint8_t_u_u(p_60, ((l_151 || (1L <= ((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((l_80 = l_215))), g_175)) < p_60))) < l_95))) < p_60) >= p_60)))) == p_60) & 0x77F79E9FL) <= p_60) >= g_175) ^ (-4L)), 3L)) > g_194) & l_125) & l_216), g_102.f1)), g_150))) < p_60) && l_216))) == g_102.f2), 1));
            l_218 = (l_219 = l_218);
            l_151 = (-1L);
        }
    }
    else
    {
        int64_t l_227 = 1L;
        int32_t l_236 = (-3L);
        int32_t l_239 = 0xE57383A1L;
        int32_t l_241 = 0x9EB16AD8L;
        int32_t l_242 = (-1L);
        uint8_t l_249 = 0xF5L;
        int32_t l_250 = 0L;
        int32_t l_252 = 0x6518EE95L;
        int32_t l_256 = 0L;
        g_101.f1 = ((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((((l_80 < (~l_227)) > (((((l_242 = (l_241 = ((safe_lshift_func_uint8_t_u_s((255UL > ((l_239 |= (((0xB45EL > (((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((l_236 = (~(g_235 |= l_227))) >= (g_102.f2 == p_60)) == p_60), ((safe_mod_func_uint8_t_u_u(0x9FL, p_60)) ^ l_80))), p_60)) != p_60) > l_95)) & g_101.f6) < p_60)) > l_240)), g_99)) < l_227))) & l_227) < l_240) >= g_102.f0) >= p_60)) ^ l_81) & g_101.f4), g_101.f1)) ^ l_240) < l_227), 255UL)), 15)) & l_82);
        l_249 = (safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(255UL, l_227)), l_242)), l_95));
        g_259++;
    }
    return p_60;
}
static uint64_t func_63(struct S1 p_64, int32_t p_65, uint64_t p_66, struct S0 p_67, int8_t p_68)
{
    struct S0 l_105 = {252UL,0xA6A910B13A75C332LL,0x1310918DDDCD3E82LL};
    for (p_68 = 0; (p_68 > (-3)); p_68--)
    {
        g_102 = l_105;
    }
    g_101.f5 ^= ((safe_unary_minus_func_uint8_t_u((g_102.f0 = (safe_add_func_int8_t_s_s((-1L), (((((g_102.f1 && p_67.f1) == l_105.f2) && ((~((safe_sub_func_uint8_t_u_u(0xFDL, (-1L))) > (safe_sub_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(l_105.f1, (((((safe_mod_func_int32_t_s_s((0xAE26L != (safe_mul_func_int16_t_s_s(0L, l_105.f1))), 1L)) > p_68) & g_99) <= g_102.f0) != l_105.f0))) <= p_68) == l_105.f1), p_64.f0)))) == g_101.f2)) != p_64.f0) & p_67.f2)))))) < 0x67F30D379EBF7ADELL);
    return g_101.f3;
}
static struct S1 func_69(int32_t p_70, uint16_t p_71, int32_t p_72)
{
    uint32_t l_98 = 3UL;
    struct S1 l_100 = {0x4B5BC1773A67FE42LL,0xCCDDECA6L,18446744073709551615UL,0L,0xD58FL,0xAF85E685L,0xC0FEL};
    g_99 = ((g_18 < (safe_sub_func_uint16_t_u_u(p_72, (-6L)))) ^ l_98);
    l_100 = l_100;
    return l_100;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_18;
    csmith_sink_ = g_26;
    csmith_sink_ = g_52;
    csmith_sink_ = g_83;
    csmith_sink_ = g_99;
    csmith_sink_ = g_101.f0;
    csmith_sink_ = g_101.f1;
    csmith_sink_ = g_101.f2;
    csmith_sink_ = g_101.f3;
    csmith_sink_ = g_101.f4;
    csmith_sink_ = g_101.f5;
    csmith_sink_ = g_101.f6;
    csmith_sink_ = g_102.f0;
    csmith_sink_ = g_102.f1;
    csmith_sink_ = g_102.f2;
    csmith_sink_ = g_150;
    csmith_sink_ = g_157;
    csmith_sink_ = g_175;
    csmith_sink_ = g_187;
    csmith_sink_ = g_194;
    csmith_sink_ = g_235;
    csmith_sink_ = g_254;
    csmith_sink_ = g_255;
    csmith_sink_ = g_258;
    csmith_sink_ = g_259;
    csmith_sink_ = g_262;
    csmith_sink_ = g_282;
    csmith_sink_ = g_316;
    csmith_sink_ = g_359;
    csmith_sink_ = g_460;
    csmith_sink_ = g_467;
    csmith_sink_ = g_607;
    csmith_sink_ = g_633;
    csmith_sink_ = g_644;
    csmith_sink_ = g_649;
    csmith_sink_ = g_682;
    csmith_sink_ = g_684;
    csmith_sink_ = g_686;
    csmith_sink_ = g_687;
    csmith_sink_ = g_688;
    csmith_sink_ = g_741;
    csmith_sink_ = g_782;
    csmith_sink_ = g_783;
    csmith_sink_ = g_784;
    csmith_sink_ = g_785;
    csmith_sink_ = g_811;
    csmith_sink_ = g_812;
    csmith_sink_ = g_815;
    csmith_sink_ = g_892;
    csmith_sink_ = g_978;
    csmith_sink_ = g_979;
    csmith_sink_ = g_1025.f0;
    csmith_sink_ = g_1025.f1;
    csmith_sink_ = g_1025.f2;
    csmith_sink_ = g_1030;
    platform_main_end(0,0);
    return 0;
}
