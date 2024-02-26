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
static int8_t g_8 = (-6L);
static uint32_t g_62 = 0UL;
static int32_t g_63 = 0x4B79A97AL;
static int32_t g_64 = (-1L);
static int16_t g_65 = 0x0D29L;
static uint32_t g_68 = 0xBA7DA828L;
static uint16_t g_87 = 0x0DD0L;
static int16_t g_133 = (-9L);
static int32_t g_136 = 0L;
static uint8_t g_202 = 0xDBL;
static int8_t g_207 = (-5L);
static uint16_t g_334 = 65534UL;
static int32_t g_336 = 1L;
static int32_t g_439 = 2L;
static uint32_t g_520 = 0UL;
static int32_t g_547 = 0x5AADB8AAL;
static int32_t g_548 = 0xA2F6E2ABL;
static int8_t g_735 = (-6L);
static uint16_t g_736 = 0UL;
static uint32_t g_740 = 0xCC72E72BL;
static int32_t g_769 = 0xC007FAAAL;
static int32_t g_770 = 0x2BCA897FL;
static int32_t g_773 = 1L;
static int8_t g_776 = 0xF7L;
static int32_t g_779 = 0xA6DE3D14L;
static uint16_t g_784 = 1UL;
static uint8_t g_893 = 4UL;
static int32_t g_916 = 0x5E0515BCL;
static uint8_t func_1(void);
inline static uint8_t func_4(int32_t p_5);
inline static const uint16_t func_6(int32_t p_7);
inline static uint16_t func_13(int32_t p_14, uint32_t p_15, uint16_t p_16);
inline static uint16_t func_18(int16_t p_19);
static int16_t func_20(int32_t p_21, uint32_t p_22);
inline static uint16_t func_27(int16_t p_28, uint32_t p_29, int8_t p_30, int32_t p_31, int32_t p_32);
inline static int8_t func_38(int8_t p_39, uint16_t p_40, uint8_t p_41);
static uint32_t func_44(uint32_t p_45, int16_t p_46, uint32_t p_47);
inline static int8_t func_50(int8_t p_51, uint8_t p_52, int8_t p_53, uint16_t p_54);
static uint8_t func_1(void)
{
    int32_t l_17 = 1L;
    uint32_t l_55 = 0x353EA3A7L;
    int8_t l_134 = 4L;
    int32_t l_135 = 0x60324A0BL;
    uint32_t l_137 = 18446744073709551613UL;
    int32_t l_831 = 0x4D06275DL;
    const int32_t l_901 = 0x7DE999B7L;
    int32_t l_917 = 0x36788534L;
    g_893 &= (safe_mul_func_uint8_t_u_u(func_4((l_831 = ((0L | func_6(((g_8 || ((safe_mod_func_int32_t_s_s(((((func_13(l_17, l_17, func_18(func_20(g_8, (safe_mul_func_uint8_t_u_u(g_8, (safe_lshift_func_uint16_t_u_u(func_27(g_8, l_17, (!(safe_sub_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u((g_136 &= func_38((l_135 = (l_134 &= (g_133 = ((((safe_add_func_uint32_t_u_u(func_44((safe_rshift_func_int8_t_s_u(func_50(g_8, l_17, l_55, g_8), g_63)), l_17, l_55), g_63)) == l_55) > 1L) <= l_55)))), l_17, l_55)), l_137)) > 0x7660L) & l_17) || 0x5F02L) != l_137), g_63))), g_63, l_137), 4))))))) | 1L) <= l_137) < g_769) ^ 4294967290UL), g_439)) != 0UL)) || l_55))) ^ (-1L)))), 0UL));
    g_770 = (~(safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(g_63, (1L < (safe_add_func_uint32_t_u_u(l_901, 4294967291UL))))) && (safe_div_func_uint16_t_u_u((((((safe_lshift_func_int8_t_s_u(((g_202 &= l_55) ^ (safe_mod_func_int16_t_s_s(((255UL || (((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_831 = (((safe_rshift_func_int8_t_s_s((l_135 = (safe_rshift_func_int16_t_s_u(7L, l_137))), 7)) != (l_55 != g_63)) < g_63)), g_207)), g_916)) == l_901) ^ 0xC1F0L)) == l_137), g_334))), 6)) < g_65) <= l_901) || 6UL) ^ g_520), 0x7FEDL))) > 0x1A2C8A0DL), g_63)));
    return l_917;
}
inline static uint8_t func_4(int32_t p_5)
{
    uint32_t l_834 = 4294967292UL;
    int32_t l_843 = 0xA3B379B8L;
    int16_t l_844 = (-5L);
    int8_t l_848 = 0x68L;
    int32_t l_849 = 0x9D565244L;
    l_849 = ((g_334 ^ ((g_547 & (safe_rshift_func_int16_t_s_s((g_133 = (((l_834 || (safe_div_func_uint32_t_u_u(((g_64 != (safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(p_5, l_834)) < (safe_sub_func_uint8_t_u_u(((l_843 == ((l_844 = 0L) > ((+((safe_div_func_uint32_t_u_u(0xBD025288L, 0xB3E79E45L)) >= l_848)) != g_779))) && 0x4AL), l_848))), g_773))) >= 1L), l_834))) | g_770) >= p_5)), l_834))) | 0x3638035FL)) == g_547);
    p_5 = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_849 = 0L), (safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((-1L) > (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_844, 11)), (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0xD484L, ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(9L, (p_5 == g_87))), (safe_sub_func_int16_t_s_s(p_5, (safe_rshift_func_uint16_t_u_s((!(safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((0xFFCE4598L < g_334), 1)), p_5))), g_87)))))) | 0x0425BB62L), l_834)) || g_68), l_844)), 0x720DL)) <= l_844))), l_844)), 0)) && l_848) ^ g_202))) && g_63), 2))), p_5)) == l_848), g_63)))), 6)), g_740)), l_844)) <= 0UL);
    return g_769;
}
inline static const uint16_t func_6(int32_t p_7)
{
    const int32_t l_830 = 2L;
    return l_830;
}
inline static uint16_t func_13(int32_t p_14, uint32_t p_15, uint16_t p_16)
{
    int16_t l_793 = (-2L);
    int32_t l_794 = 0xB8F6F7FDL;
    int32_t l_795 = 0xCD9760A1L;
    uint16_t l_816 = 0x2CF7L;
    if ((safe_rshift_func_uint8_t_u_u(((0xCFL != (safe_sub_func_int32_t_s_s(0x3FC89E2BL, (safe_add_func_int8_t_s_s(l_793, (l_793 <= (((((((l_794 ^= g_547) > (0L > (0UL != (p_15 < (p_16--))))) || (safe_sub_func_uint8_t_u_u((l_794 = 1UL), l_795))) | 0xAE83L) <= p_14) >= p_14) ^ p_14))))))) | g_784), g_64)))
    {
        int32_t l_810 = 0x4722D623L;
        int32_t l_825 = (-1L);
        int32_t l_826 = 0L;
        for (g_68 = 0; (g_68 >= 35); ++g_68)
        {
            int16_t l_811 = 0x1B4CL;
            int32_t l_819 = (-1L);
            int32_t l_827 = 0x8B21EA59L;
            g_770 ^= (p_16 ^ ((g_334 != (l_811 = (g_773 = (1L >= (safe_div_func_int16_t_s_s(p_15, ((safe_unary_minus_func_uint32_t_u(((g_769 == l_794) && (((0xDD971EFDL <= (safe_rshift_func_int16_t_s_u((((g_735 = p_15) || (safe_unary_minus_func_int8_t_s((((safe_mod_func_int32_t_s_s((g_8 || p_16), l_810)) != l_795) | l_810)))) <= 0x0F8C35CBL), g_779))) != (-1L)) || l_810)))) ^ 6L))))))) | l_794));
            l_827 ^= ((l_816 ^= (safe_div_func_int16_t_s_s(0x299EL, (safe_add_func_int8_t_s_s((g_776 = 0x61L), g_520))))) && ((((l_794 = (l_826 = (safe_div_func_int8_t_s_s((l_825 = ((((l_795 = l_819) == (~(p_15 < (g_740 == ((l_810 = (((g_64 || ((safe_add_func_int8_t_s_s(p_14, 0xFCL)) > p_14)) == g_547) | p_16)) & g_62))))) > l_816) >= 0xBBL)), l_819)))) >= g_136) > 0x90L) || g_68));
        }
        l_826 = g_779;
    }
    else
    {
        for (g_776 = 0; (g_776 >= 22); g_776 = safe_add_func_uint8_t_u_u(g_776, 7))
        {
            return p_14;
        }
        g_548 &= ((p_15 || g_136) & 0xF1E1F361L);
    }
    return p_16;
}
inline static uint16_t func_18(int16_t p_19)
{
    int8_t l_190 = 0L;
    int32_t l_199 = 7L;
    const uint16_t l_260 = 0xB9B0L;
    int32_t l_278 = 0x4766B9EEL;
    int32_t l_342 = 0x30310DE8L;
    int32_t l_451 = (-1L);
    uint16_t l_515 = 65535UL;
    uint8_t l_549 = 0x39L;
    int32_t l_675 = 0xC814CA00L;
    int8_t l_715 = 0x62L;
    int32_t l_767 = 0x37F816B1L;
    int32_t l_768 = 0x39C98014L;
    int32_t l_771 = 0xA78A989CL;
    int32_t l_772 = 4L;
    int32_t l_774 = 0x40D2DA0EL;
    int32_t l_775 = 4L;
    int32_t l_777 = (-2L);
    int32_t l_778 = (-10L);
    int32_t l_780 = 0x7E70B852L;
    int32_t l_781 = (-10L);
    int32_t l_782 = 0x437ABDA9L;
    int32_t l_783 = 0x5720C289L;
    if ((((safe_unary_minus_func_int32_t_s((-2L))) < ((!l_190) && ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((g_87 != ((l_199 = 1UL) && (l_199 < p_19))), p_19)) >= g_63), (safe_mul_func_uint16_t_u_u(l_190, 65535UL)))), (-1L))), 0xE94AL)) >= l_190))) < g_65))
    {
        uint16_t l_214 = 0UL;
        int32_t l_215 = 0x0F2447E6L;
        int8_t l_277 = 0x10L;
        int32_t l_363 = 0x9765F1DFL;
        uint16_t l_454 = 0xB6A1L;
        int8_t l_509 = 0xD3L;
        int32_t l_693 = 0x53CF38F0L;
        g_64 = 0L;
lbl_739:
        if (((g_202 = 0xCDL) || (((safe_unary_minus_func_uint32_t_u((l_199 = (!((p_19 | g_63) || ((l_214 = (g_207 >= (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((-1L) & (safe_mul_func_int16_t_s_s(p_19, p_19))), p_19)) == 0L), (-7L))))) == g_63)))))) ^ l_215) <= (-2L))))
        {
            int8_t l_218 = 0xEEL;
            int32_t l_223 = 1L;
            uint8_t l_246 = 255UL;
            g_64 = (safe_rshift_func_int16_t_s_u(((l_218 || (l_218 == (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((--g_202), (((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(p_19, p_19)) >= 0x7BCEL) >= ((0x2B377A34L != l_214) != (((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_214, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((l_215 = g_63), p_19)), 0)))), g_136)) < p_19) | 0x44ECL))), 4)), l_214)), g_8)) & g_207) == g_8))), 0)))) != p_19), l_214));
            if (((g_63 ^ g_202) & (safe_sub_func_int32_t_s_s((p_19 != g_63), (g_64 = (safe_add_func_uint16_t_u_u((l_246 = 0x4C1BL), (safe_add_func_uint32_t_u_u((!((safe_mul_func_uint8_t_u_u((p_19 | (g_65 < (((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(1L, (safe_sub_func_int8_t_s_s(((l_215 = ((safe_rshift_func_uint16_t_u_s(65535UL, 8)) & 0x326FL)) && 255UL), p_19)))), 0x6F50L)) || 0xA60DL) | 0xF96CBEDFL))), g_133)) && g_65)), l_260)))))))))
            {
                int32_t l_293 = 0xD3CF241CL;
                g_64 |= (l_278 = ((((g_87 ^= l_199) && ((0xE9FEL || (((safe_add_func_uint16_t_u_u(p_19, (safe_mul_func_int8_t_s_s(g_8, (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_8, (p_19 < 247UL))), ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((l_199 ^= l_260), ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((g_133 & 4294967289UL), p_19)) != l_277), p_19)) ^ p_19))), 4)) ^ g_68))))))) ^ 8UL) & p_19)) | (-1L))) < 0x5AL) > g_65));
                if (((g_64 < (g_65 ^ p_19)) <= (~l_246)))
                {
                    uint32_t l_294 = 4294967295UL;
                    int32_t l_296 = 0xA9EB16ADL;
                    uint32_t l_340 = 4294967292UL;
                    l_294 &= ((((safe_mul_func_uint16_t_u_u(0UL, (safe_unary_minus_func_uint8_t_u(g_87)))) > ((0xF002BF45L & (safe_div_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((g_202 |= (l_278 = ((safe_mod_func_int8_t_s_s(l_215, (-1L))) | p_19))) != ((p_19 >= ((l_223 = 1L) >= ((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_218, 7UL)), l_293)) > l_260))) >= (-8L))), p_19)) != 0xE373L) >= p_19), g_136))) >= 65535UL)) == 4294967295UL) == (-2L));
                    l_296 &= (safe_unary_minus_func_int16_t_s(l_278));
                    if (g_207)
                        goto lbl_337;
                    if ((0xA53668A9L && (g_87 <= ((p_19 != (+0UL)) & ((safe_lshift_func_int8_t_s_s((0x6AL && (((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint32_t_u_u((g_65 <= (((g_64 = (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((l_214 ^ (l_293 && (safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((p_19 && g_62), 4294967295UL)), 0xD1CDC8FDL)))) < p_19), g_136)) || l_218), 0x60F2L)), 0UL))) != g_207) <= 9UL)), p_19)) || p_19), p_19)) < 255UL) ^ 4294967295UL)), p_19)) > p_19)))))
                    {
                        uint32_t l_335 = 0x14BD8925L;
                        g_336 = (g_64 = ((safe_add_func_int8_t_s_s((~(l_335 = ((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((g_87 ^= (g_64 | g_63)), (l_293 <= g_136))), ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((~(l_223 = p_19)), (safe_add_func_int16_t_s_s(l_218, p_19)))), (g_334 ^= (((l_214 != 0x45L) & g_202) != l_293)))) ^ l_296))), g_8)) | 0xE57589B6L), g_65)) > 4294967286UL), 0UL)) || g_87))), g_133)) || 0xDA19L));
                    }
                    else
                    {
lbl_337:
                        g_64 = l_199;
                        l_223 = 0xDD4E24FCL;
                        g_64 = (safe_rshift_func_uint8_t_u_s((l_223 = l_340), 3));
                    }
                }
                else
                {
                    g_64 = g_136;
                }
            }
            else
            {
                int8_t l_341 = 0x15L;
                return l_341;
            }
        }
        else
        {
            uint32_t l_343 = 0xF9A101D9L;
            l_215 = p_19;
            l_343--;
        }
        if ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_215 = (safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_199, (p_19 &= g_136))), (l_342 &= g_87)))) == (safe_lshift_func_uint8_t_u_u(l_190, ((safe_lshift_func_int8_t_s_s(((((l_278 & (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((l_363 = (l_214 | ((l_214 || 7UL) == l_199))) != l_277))), l_214)) && l_277), l_199))) > 0x7821L) <= (-2L)) == 0xABFC40FAL), l_278)) == g_63)))), 0x1853L)), 0xC0L)))
        {
            uint32_t l_391 = 0x9984349FL;
            int32_t l_392 = 1L;
            uint32_t l_438 = 5UL;
            int32_t l_440 = 0xA1F9972EL;
            uint16_t l_494 = 0x7E6AL;
            if (((safe_sub_func_int16_t_s_s(((((((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((p_19 || l_214), 1)) | 0xD0C9CB34L) | (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((l_363 = (0x4DL < g_202)), g_65)) < (safe_sub_func_uint16_t_u_u(g_136, (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((l_391 ^= (safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((0x9181E833L >= (!g_68)), p_19)), p_19))) > 65535UL), l_392)) > 5UL), g_62)), p_19)) > 0x1626L), p_19)) || l_392), l_214))))), 7))), 0UL)) ^ (-2L)) ^ 0x65L) < p_19) > l_392) ^ p_19), g_202)) > 0x50L))
            {
                uint8_t l_430 = 0x73L;
                int32_t l_468 = (-1L);
                l_440 &= ((safe_lshift_func_uint16_t_u_s((!((safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(1UL, (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((!(safe_sub_func_uint16_t_u_u(l_214, g_65))) | p_19), (safe_unary_minus_func_int32_t_s((((((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_215, (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_363, (safe_div_func_int32_t_s_s(l_430, (safe_mod_func_int16_t_s_s(((~((0x4EB96B6AL <= ((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(0L, 0x9DL)) != g_133), g_8)) | l_392)) >= l_438)) > l_430), 0xB3F9L)))))) != p_19), l_214)), 0xF1L)))), g_64)), l_342)) & g_64) <= l_438) > l_430) > 1UL))))), 2)) != g_136) && g_336) > l_278) < 0x00048D73L), 4)) >= g_62) && 0x3CL), g_8)) & (-10L)), 1UL)) < p_19), g_202)))) != 255UL), l_438)) && g_439)), l_190)) < p_19);
                g_64 = (safe_sub_func_uint16_t_u_u(((l_430 != l_278) || (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((++g_87) < (g_334 = ((((l_277 > (safe_add_func_uint32_t_u_u(l_260, (g_62 = (l_451 |= l_277))))) >= ((safe_add_func_int16_t_s_s(l_215, l_277)) == 1L)) && 253UL) < l_278))) <= l_430), g_136)), l_454)) ^ g_64) || l_214)), l_278));
                g_64 = (~(l_440 = ((l_214 && (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_214, (safe_add_func_int32_t_s_s((l_199 = (((((safe_mul_func_uint8_t_u_u(l_260, g_87)) || ((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((((g_68--) <= (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(g_202, (safe_lshift_func_uint8_t_u_u((l_430 <= (safe_mul_func_uint16_t_u_u((g_439 != ((safe_rshift_func_uint16_t_u_u((!((safe_sub_func_int8_t_s_s(p_19, (((safe_rshift_func_uint16_t_u_u((l_440 <= 7UL), 14)) <= l_468) < p_19))) != p_19)), 9)) ^ g_439)), p_19))), 2)))) != g_136), p_19)), g_87)), p_19))) > 0x02L), p_19)) ^ g_87), 0L)) && p_19)) == 0x90L) | 1L) != g_202)), p_19)))), l_392))) && p_19)));
            }
            else
            {
                l_451 &= (p_19 != ((65529UL <= g_133) != (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((g_202 ^= l_214) & ((l_494 <= (g_133 & (l_392 && (safe_add_func_uint8_t_u_u(g_336, 1L))))) & l_199)) == 0x60L), p_19)), g_68))));
                return l_278;
            }
            l_215 &= (g_202 < (safe_lshift_func_uint8_t_u_u(0x48L, 5)));
        }
        else
        {
            uint8_t l_518 = 1UL;
            uint16_t l_519 = 1UL;
            int32_t l_523 = (-1L);
            int32_t l_545 = (-6L);
            g_64 = (l_451 &= (p_19 | (0xEC5BL != 0x12A1L)));
            if ((l_451 = (((g_64 = p_19) & (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((l_363 = (g_207 == (safe_mul_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(l_509, 6)), g_68)) & g_65) > p_19), ((safe_sub_func_int16_t_s_s((g_65 >= ((safe_lshift_func_int16_t_s_s((((~(((l_515 <= (g_8 = (safe_add_func_int32_t_s_s((-5L), p_19)))) && p_19) > 0x65F5L)) >= 1L) >= g_207), g_334)) > p_19)), p_19)) > 0xA52AL))))), l_260)) && l_518), l_519))) <= l_509)))
            {
                ++g_520;
            }
            else
            {
                l_523 = p_19;
lbl_546:
                l_199 = (safe_add_func_int16_t_s_s((l_545 = (0L == (((safe_sub_func_int16_t_s_s((g_336 < ((--g_87) == p_19)), 9L)) && (g_87 = ((safe_rshift_func_int16_t_s_u(0x5B29L, 12)) < 3L))) < ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(l_215)) == ((safe_mul_func_int16_t_s_s(((l_214 ^ (-7L)) <= 0xC5L), g_63)) > 65529UL)), p_19)), g_136)) | 0x4CL), 0L)), p_19)) && l_199)))), 0xAC3DL));
            }
            if (g_334)
                goto lbl_546;
            l_549--;
        }
        for (l_515 = (-2); (l_515 == 10); l_515++)
        {
            uint32_t l_562 = 0x10CA1BCAL;
            int32_t l_678 = 6L;
            uint32_t l_694 = 0x5837F951L;
            int32_t l_695 = (-1L);
            int32_t l_696 = 0xBEE10AEBL;
            int32_t l_697 = 0x96C0E560L;
            if (p_19)
                break;
            for (g_62 = 0; (g_62 > 15); g_62 = safe_add_func_int16_t_s_s(g_62, 6))
            {
                if ((l_199 = p_19))
                {
                    return g_63;
                }
                else
                {
                    uint32_t l_558 = 0xA02113A6L;
                    if (g_8)
                    {
                        int16_t l_556 = 0x6DD2L;
                        int32_t l_557 = 1L;
                        g_548 = l_509;
                        g_547 = l_454;
                        ++l_558;
                    }
                    else
                    {
                        int16_t l_561 = 9L;
                        --l_562;
                    }
                }
            }
            for (l_278 = (-9); (l_278 <= 6); ++l_278)
            {
                uint32_t l_579 = 0x38100C5AL;
                int32_t l_626 = 0x0E0E7673L;
                int32_t l_663 = 0L;
                for (l_342 = 0; (l_342 == (-26)); l_342 = safe_sub_func_int32_t_s_s(l_342, 4))
                {
                    int8_t l_597 = 1L;
                    int32_t l_604 = (-10L);
                    int32_t l_627 = 0x52115EF3L;
                    for (g_8 = (-17); (g_8 > 2); g_8 = safe_add_func_int8_t_s_s(g_8, 2))
                    {
                        l_597 = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((0xECA8A1A8L != p_19), ((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((l_579 < 1UL), (safe_lshift_func_uint16_t_u_u((!(safe_mul_func_int8_t_s_s((-8L), (safe_rshift_func_int16_t_s_s((0xA6L || (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((((0x5CF4L | g_548) ^ (safe_mul_func_int16_t_s_s(g_336, 0xBDCDL))) || l_509) & p_19), g_136)), g_8)), p_19)), g_520))), l_509))))), 11)))), 10)) & p_19) > g_62) > g_65))), 7));
                        g_547 = 3L;
                    }
                    for (l_199 = 0; (l_199 > (-17)); l_199--)
                    {
                        int32_t l_618 = (-1L);
                        int16_t l_625 = (-1L);
                        l_627 = (safe_rshift_func_int16_t_s_s(((g_334 = g_207) & (l_618 = (p_19 = (safe_mul_func_int16_t_s_s(((l_604 = 0xE1E3CCB0L) <= l_597), (!(l_626 &= (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_618 <= (safe_mod_func_uint16_t_u_u(((-1L) < ((l_597 != (safe_add_func_int32_t_s_s(0xFCF93BFCL, (((safe_sub_func_int32_t_s_s(l_363, g_202)) ^ p_19) != l_597)))) & l_515)), p_19))), g_65)), 0x93L)), l_625)) || p_19), p_19)) >= 0L) < p_19) <= 0xE8L), l_579)) ^ g_207), l_190))))))))), l_562));
                        l_626 = (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_214, (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_div_func_int32_t_s_s(p_19, (safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(0x71616FBDL, (safe_lshift_func_uint16_t_u_s((p_19 >= (safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(g_207, 3UL)) != ((~((0xB6764243L & (safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(((p_19 && ((safe_unary_minus_func_uint16_t_u(((g_68 ^ l_627) == 0xE3A9L))) <= 1L)) != 0xDEL), 7UL)) >= g_520), 4294967295UL))) > 65530UL)) == 0xFD152FD2L)), p_19))), p_19)))), g_334)))) <= p_19))), g_63)))), g_8));
                        g_547 = (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((l_675 ^= (safe_add_func_int8_t_s_s(p_19, (((safe_div_func_int8_t_s_s((l_663 = (1L || (l_626 ^= p_19))), l_562)) != (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(g_548, l_579)), (~(safe_mul_func_int16_t_s_s((((-6L) == (l_451 = p_19)) > (safe_mul_func_uint8_t_u_u(((p_19 == 1L) | 3L), g_547))), g_62))))), g_64))) | g_63)))) & l_618) ^ 0xFB30L), g_63)), g_439)), 0xB0L));
                    }
                }
                g_548 |= ((g_64 = (g_547 = (safe_mod_func_uint8_t_u_u(((l_695 = (((((8UL != (l_678 = (0xF43C1102L | p_19))) | 6UL) == ((safe_rshift_func_uint8_t_u_s((4294967288UL >= (safe_add_func_uint16_t_u_u(65530UL, 65535UL))), ((safe_unary_minus_func_uint8_t_u(((+(g_334 = (safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((safe_div_func_int8_t_s_s((4294967295UL && p_19), l_215)) | l_451) <= g_202), p_19)) != 0xBC50L), l_693)), 0xD7L)))) | l_694))) > g_520))) > 4294967286UL)) < p_19) && g_8)) == l_663), l_215)))) == g_336);
                g_547 = (l_693 = (g_548 = g_547));
                if ((((l_695 = (g_334++)) < 0L) <= (safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((g_8 = ((safe_mul_func_uint16_t_u_u(l_696, p_19)) || ((safe_rshift_func_uint16_t_u_u(65526UL, (((((3UL ^ (~((l_697 != (safe_sub_func_uint32_t_u_u(4294967287UL, 4294967291UL))) ^ (g_133 &= ((safe_lshift_func_uint16_t_u_u((((g_202 != p_19) < g_62) == l_549), l_715)) != p_19))))) & l_214) >= 1L) || g_87) | g_63))) | g_62))), 0x20L)) < l_515) > p_19), 0x5066L)), l_626))))
                {
                    uint8_t l_724 = 0x04L;
                    int32_t l_733 = (-2L);
                    l_342 = (safe_mod_func_int32_t_s_s(p_19, l_694));
                    if (((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_207 = ((p_19 != (l_678 = 9UL)) <= (safe_mod_func_uint8_t_u_u(l_724, p_19)))), (safe_div_func_uint32_t_u_u((l_724 <= (((safe_div_func_int32_t_s_s(((l_199 = g_136) && ((safe_mod_func_uint32_t_u_u((g_62 = (safe_sub_func_int16_t_s_s((g_547 || (g_68 = p_19)), (((((0x7AL < g_547) && l_549) & l_363) ^ l_454) >= l_277)))), g_64)) ^ l_579)), 0xCA4684CCL)) != p_19) || g_520)), 0x452EECA2L)))), l_697)) != 0xB6L) ^ p_19) <= 0UL))
                    {
                        int32_t l_734 = (-1L);
                        l_733 = p_19;
                        l_734 = (g_548 = (l_342 > l_454));
                    }
                    else
                    {
                        g_736++;
                        return l_694;
                    }
                }
                else
                {
                    if (g_136)
                        goto lbl_739;
                }
            }
            ++g_740;
        }
    }
    else
    {
        uint8_t l_757 = 1UL;
        int32_t l_764 = (-6L);
        l_767 = (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(g_735, (g_8 = g_64))), 6)) < (safe_lshift_func_int16_t_s_u((l_199 | ((l_757 &= 0x30A52AECL) != (((safe_div_func_uint32_t_u_u((l_764 = (g_68 = ((safe_add_func_int32_t_s_s((p_19 <= (safe_rshift_func_int16_t_s_u(((l_764 <= (0x65276332L >= (safe_lshift_func_uint8_t_u_u(p_19, 0)))) > (((l_764 > p_19) >= p_19) <= p_19)), p_19))), 4294967290UL)) && l_549))), p_19)) ^ 255UL) < 0xC631L))), g_202))), 0xCFL)), 14)), 8)) && (-7L)) || g_8);
    }
    g_784--;
    return l_715;
}
static int16_t func_20(int32_t p_21, uint32_t p_22)
{
    int32_t l_161 = 0L;
    int32_t l_168 = 0x091CAA3EL;
    int32_t l_187 = (-7L);
    l_161 = (g_65 > (((safe_unary_minus_func_uint32_t_u((((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((g_68 = (0xB9E2L & (((((safe_add_func_uint32_t_u_u((((l_161 > g_136) <= (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((l_187 = (safe_add_func_int32_t_s_s(((l_168 &= 0x726EL) && (safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(l_168, (safe_lshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(0xEEL, 5)) & ((safe_rshift_func_int16_t_s_u(0x32ECL, (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((g_133 ^ l_168), 7)) != 0L), 5)))) >= g_68)), 0x4651966EL)) >= 0xA6L), 0xBB2BL)) || p_22) >= p_21), p_22)))) <= g_8) | g_68), l_161))), 0L))), 2)) != g_63), 0x3CEE9F7DL))) > p_21), g_68)) && 0x78DD8142L) >= g_63) < p_21) >= 0xE40C6877L))) && g_133), 1L)), p_21)) >= 1UL) | l_161))) || l_187) < 1L));
    return p_21;
}
inline static uint16_t func_27(int16_t p_28, uint32_t p_29, int8_t p_30, int32_t p_31, int32_t p_32)
{
    uint16_t l_146 = 0xBB39L;
    int8_t l_148 = 1L;
    if ((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(g_62, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_146, p_29)), p_32)))), (g_64 |= (+l_148)))))
    {
        int8_t l_149 = 0x34L;
        uint32_t l_150 = 0x5C768A6AL;
        l_150--;
    }
    else
    {
        int32_t l_153 = 6L;
        return l_153;
    }
    return g_62;
}
inline static int8_t func_38(int8_t p_39, uint16_t p_40, uint8_t p_41)
{
    return p_39;
}
static uint32_t func_44(uint32_t p_45, int16_t p_46, uint32_t p_47)
{
    int32_t l_97 = (-1L);
    int32_t l_104 = 0xD02BD444L;
    int32_t l_123 = 0L;
    int32_t l_124 = 0x0F83D54BL;
    uint8_t l_132 = 0x8AL;
    l_124 = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(0UL, l_97)), (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((p_46 ^= (safe_rshift_func_uint8_t_u_u((l_104 = g_68), (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u(0x9E29L, ((safe_mod_func_uint8_t_u_u((!((safe_sub_func_int32_t_s_s(g_68, ((safe_rshift_func_int8_t_s_s((!p_47), 5)) | ((0xAFL ^ (l_123 = ((((g_64 != 0xC9L) & l_97) ^ 0xC2D96A12L) <= 0x26B30262L))) >= l_97)))) ^ g_65)), 0x14L)) && 0UL))) < p_47) < l_97), 1UL)), g_64)), p_47))))) < 0xFE0EL), 0xCDL)), p_45)))), 1UL)), 3)) > 0xBBL);
    l_124 = (((safe_mod_func_uint32_t_u_u(g_87, p_45)) || (l_104 |= ((p_46 == (safe_unary_minus_func_int16_t_s((g_65 ^= ((((safe_add_func_int32_t_s_s((p_46 | 0xF94FL), 0UL)) >= l_97) | p_47) < ((((safe_mul_func_uint16_t_u_u(((0x98C05957L >= (-1L)) > l_124), l_132)) && p_45) > p_47) && p_45)))))) != 0xFE16L))) & p_45);
    return l_104;
}
inline static int8_t func_50(int8_t p_51, uint8_t p_52, int8_t p_53, uint16_t p_54)
{
    int32_t l_58 = 0x548E01AFL;
    int32_t l_59 = 0x83A09977L;
    uint32_t l_61 = 18446744073709551614UL;
    int32_t l_66 = 0xD890F6DAL;
    int32_t l_67 = 0L;
    l_59 = (l_58 = (safe_add_func_uint32_t_u_u(0x1BB30B13L, p_54)));
    g_62 &= (!(l_59 = l_61));
    --g_68;
    for (g_68 = (-30); (g_68 == 19); g_68++)
    {
        uint32_t l_73 = 7UL;
        uint32_t l_76 = 0xA47399D0L;
        int32_t l_88 = 0L;
        if (l_73)
            break;
        l_66 ^= ((((l_59 = ((g_64 &= 7L) & l_76)) > 246UL) | ((safe_rshift_func_uint16_t_u_u((((l_88 = ((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((p_52 = (safe_rshift_func_uint8_t_u_s(g_8, (p_53 & p_54)))), ((((g_87 = (l_58 = (safe_mod_func_uint16_t_u_u(g_68, g_8)))) && ((g_68 & p_51) ^ g_8)) != p_54) <= g_62))), l_67)) & 4L)) || l_58) & 0xCCE42BF6L), 5)) > g_68)) || p_52);
    }
    return l_59;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_62;
    csmith_sink_ = g_63;
    csmith_sink_ = g_64;
    csmith_sink_ = g_65;
    csmith_sink_ = g_68;
    csmith_sink_ = g_87;
    csmith_sink_ = g_133;
    csmith_sink_ = g_136;
    csmith_sink_ = g_202;
    csmith_sink_ = g_207;
    csmith_sink_ = g_334;
    csmith_sink_ = g_336;
    csmith_sink_ = g_439;
    csmith_sink_ = g_520;
    csmith_sink_ = g_547;
    csmith_sink_ = g_548;
    csmith_sink_ = g_735;
    csmith_sink_ = g_736;
    csmith_sink_ = g_740;
    csmith_sink_ = g_769;
    csmith_sink_ = g_770;
    csmith_sink_ = g_773;
    csmith_sink_ = g_776;
    csmith_sink_ = g_779;
    csmith_sink_ = g_784;
    csmith_sink_ = g_893;
    csmith_sink_ = g_916;
    platform_main_end(0,0);
    return 0;
}
