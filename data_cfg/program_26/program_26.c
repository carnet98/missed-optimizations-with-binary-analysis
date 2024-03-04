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
static int32_t g_19 = 1L;
static int32_t *g_18 = &g_19;
static int32_t g_80 = 0x74126315L;
static const int32_t g_81 = 0x6F739807L;
static uint16_t g_99 = 0xE6E2L;
static int8_t g_117 = (-1L);
static uint16_t g_121 = 0UL;
static int16_t g_127 = 0x58A7L;
static int8_t g_132 = (-1L);
static int8_t g_134 = 0x9DL;
static int32_t g_136 = 0x6E9852BCL;
static int8_t *g_139 = &g_132;
static int8_t **g_138 = &g_139;
static int8_t g_175 = 0x09L;
static int32_t g_190 = 1L;
static int8_t g_319 = 9L;
static uint32_t g_321 = 8UL;
static uint16_t ***g_405 = (void*)0;
static int32_t **g_408 = &g_18;
static uint16_t g_412 = 1UL;
static int32_t ***g_415 = &g_408;
static int32_t ****g_414 = &g_415;
static int8_t *g_470 = &g_319;
static int8_t *g_473 = &g_134;
static uint8_t g_477 = 255UL;
static int16_t *g_494 = (void*)0;
static int32_t g_533 = (-1L);
static int16_t g_542 = 0L;
static uint8_t g_563 = 255UL;
static uint8_t g_599 = 255UL;
static uint16_t ****g_611 = &g_405;
static int16_t g_661 = (-5L);
static int8_t g_676 = 2L;
static uint8_t g_689 = 0x1AL;
static int16_t g_734 = 0x9F1DL;
static uint16_t g_743 = 65529UL;
static int32_t * const **g_756 = (void*)0;
static int32_t * const ***g_755 = &g_756;
static int32_t * const ****g_754 = &g_755;
static int8_t g_761 = 1L;
static uint32_t g_762 = 0UL;
static int16_t g_854 = 0L;
static uint8_t g_880 = 1UL;
static int32_t g_903 = (-1L);
static int8_t g_1002 = 1L;
static int32_t g_1005 = (-1L);
static uint32_t g_1006 = 0xE6DCCE72L;
static uint32_t g_1041 = 0x08369C14L;
static uint32_t *g_1068 = (void*)0;
static uint16_t *g_1127 = (void*)0;
static uint16_t * const *g_1126 = &g_1127;
static uint16_t * const **g_1125 = &g_1126;
static uint16_t * const ***g_1124 = &g_1125;
static uint32_t g_1150 = 0UL;
static const int8_t g_1182 = 0xF5L;
static int8_t * const *g_1207 = &g_473;
static int8_t * const **g_1206 = &g_1207;
static uint8_t g_1396 = 247UL;
static int8_t ***g_1421 = &g_138;
static int8_t ****g_1420 = &g_1421;
static uint8_t *g_1446 = &g_689;
static uint8_t **g_1445 = &g_1446;
static uint32_t g_1448 = 0x8FBCE68FL;
static uint32_t g_1451 = 0xCDC70681L;
static int8_t g_1462 = (-1L);
static const int32_t g_1490 = 0x65076BC7L;
static int32_t g_1583 = 0x91C2DEBAL;
static uint8_t g_1586 = 0x60L;
static int8_t * const ****g_1648 = (void*)0;
static uint8_t g_1727 = 0xD3L;
static int16_t g_1782 = 0x876BL;
static uint8_t g_1792 = 0xF6L;
static uint16_t g_1829 = 65535UL;
static int32_t g_1980 = 0x65F259E5L;
static uint32_t func_1(void);
static int32_t * func_2(int8_t p_3, int32_t p_4, int8_t p_5);
static uint16_t func_10(int32_t * p_11, uint32_t p_12);
static int32_t * func_13(int16_t p_14, int32_t * p_15, int32_t * p_16);
static int8_t func_26(int32_t p_27, int8_t p_28, uint32_t p_29);
static uint8_t func_34(uint32_t p_35, uint16_t p_36);
static uint32_t func_37(uint8_t p_38, int32_t * p_39, const int32_t * p_40, int32_t p_41);
static uint8_t func_42(int32_t * p_43, uint8_t p_44, const int32_t p_45, int8_t p_46, uint8_t p_47);
static int32_t * func_48(int32_t * p_49, int16_t p_50, int32_t * p_51);
static int16_t func_62(int32_t * p_63, int32_t p_64, int8_t p_65, const int32_t p_66);
static uint32_t func_1(void)
{
    uint8_t l_17 = 0xF6L;
    uint32_t l_1804 = 9UL;
    uint16_t ****l_1807 = &g_405;
    uint16_t *****l_1808 = &l_1807;
    int16_t l_2095 = 0xB28BL;
    (***g_414) = func_2((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(func_10(((**g_415) = func_13(l_17, g_18, &g_19)), (l_17 == ((safe_mod_func_int8_t_s_s((l_17 , (l_1804 == (safe_mod_func_int32_t_s_s((&g_405 != ((*l_1808) = l_1807)), g_563)))), l_1804)) <= l_1804))), g_1396)), 0x97L)) | l_1804) < l_2095), l_1804, l_1804);
    (***g_414) = (**g_415);
    (**g_415) = ((*g_1446) , (**g_415));
    return l_2095;
}
static int32_t * func_2(int8_t p_3, int32_t p_4, int8_t p_5)
{
    const uint16_t *l_2101 = &g_412;
    const uint16_t **l_2100 = &l_2101;
    const uint16_t ***l_2099 = &l_2100;
    const uint16_t ****l_2098 = &l_2099;
    int32_t l_2115 = 1L;
    int32_t l_2119 = 0x2193168FL;
    int32_t *l_2121 = &g_1583;
    int32_t **l_2120 = &l_2121;
    int32_t l_2122 = (-8L);
    (**g_408) = (safe_add_func_int32_t_s_s(((l_2098 == &l_2099) && ((void*)0 == &g_1445)), ((((safe_sub_func_uint16_t_u_u((0x07B6L <= (((safe_sub_func_uint32_t_u_u(((~(((((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((((((**g_415) == ((*l_2120) = ((safe_add_func_uint16_t_u_u(((l_2115 = p_5) || p_3), (((((l_2119 = (((safe_mod_func_uint32_t_u_u((!((**g_1207) = 1L)), 0x3E6AE0D7L)) | p_5) , p_3)) , l_2119) < 0x57L) & 0x6AAE2E1FL) , p_5))) , &l_2119))) , 0UL) , 0xEE74L) && (**l_2120)), l_2122)), 7)) <= p_5), (**g_408))) && p_3) | p_3) == p_4) > (**g_408))) & 0x97L), 0xDC9D5580L)) , (*l_2121)) , 0x93EDL)), 65530UL)) , 0x6EA22F59L) , 0xA33CL) , p_3)));
    for (g_1586 = 0; (g_1586 > 4); ++g_1586)
    {
        (*l_2121) = (p_3 >= (!0xFD211CE6L));
    }
    (*l_2121) &= ((safe_lshift_func_int16_t_s_s(1L, 4)) && (**g_1207));
    return (***g_414);
}
static uint16_t func_10(int32_t * p_11, uint32_t p_12)
{
    int32_t *l_1819 = &g_80;
    uint32_t l_1824 = 0xE8ECAF38L;
    int32_t l_1825 = 4L;
    uint16_t **l_1826 = &g_1127;
    uint16_t *l_1841 = (void*)0;
    uint16_t *l_1842 = &g_121;
    uint16_t * const ***l_1845 = &g_1125;
    uint16_t ****l_1846 = (void*)0;
    uint16_t *****l_1847 = (void*)0;
    uint16_t ****l_1848 = &g_405;
    uint32_t l_1855 = 0UL;
    int8_t l_1860 = 0x62L;
    int16_t *l_1861 = &g_127;
    int16_t *l_1862 = &g_734;
    int16_t l_1875 = (-1L);
    int32_t l_1878 = 0x37A872E4L;
    uint32_t l_1897 = 4294967293UL;
    int32_t l_1945 = 0xB14ACE71L;
    int32_t l_1947 = (-1L);
    int32_t l_1994 = 4L;
    l_1825 |= ((*g_473) < (safe_sub_func_int8_t_s_s((****g_1420), ((0x7973FD4CL ^ (safe_rshift_func_int8_t_s_u((((*l_1819) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((p_11 != l_1819) == 0x15L), (((*l_1819) >= (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_1824 ^ ((0x9CF99A87L <= (*l_1819)) , (*p_11))), (***g_1206))), (*p_11)))) , p_12))) > 0xECC8L), 3)), 0))) ^ 0xBEAFL), 1))) | g_136))));
    l_1826 = l_1826;
    if ((safe_add_func_uint32_t_u_u((((g_1829 |= p_12) , (*l_1819)) == (~((*l_1819) < ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0xB8L, (safe_add_func_int16_t_s_s((((*l_1862) = (g_1782 = ((*l_1861) = ((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((((*l_1842)++) , l_1845) == (l_1848 = l_1846)), (safe_add_func_int8_t_s_s(((+(safe_unary_minus_func_int32_t_s(((****g_414) ^= (((((safe_mul_func_int8_t_s_s((*l_1819), (l_1855 | (((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0xA2618D06L, g_412)), p_12)) | (*l_1819)) <= (*g_1446))))) , p_12) && (*g_1446)) , 1UL) <= g_761))))) < (*l_1819)), l_1860)))), p_12)) > (*l_1819))))) >= (*l_1819)), (*l_1819))))), 0xD9L)) > (*l_1819))))), g_1583)))
    {
        uint32_t l_1863 = 18446744073709551606UL;
        uint8_t *l_1868 = &g_563;
        uint32_t *l_1876 = (void*)0;
        int32_t *l_1877 = &g_533;
        uint16_t ***l_1881 = &l_1826;
        int16_t **l_1896 = &l_1861;
        int32_t l_1901 = 0x3F3DB9D1L;
        int32_t l_1903 = 9L;
        int32_t l_1948 = 0L;
        int32_t l_1995 = (-8L);
        int32_t l_1996 = (-3L);
        int32_t l_2016 = (-1L);
        int32_t l_2027 = 0x53BE0105L;
        uint8_t l_2047 = 246UL;
        ++l_1863;
        if ((safe_mod_func_int32_t_s_s(l_1863, ((((((((*l_1819) >= ((*l_1868) &= ((**g_1445) = l_1863))) , ((-3L) < (((*l_1877) |= (l_1863 >= (g_762 = (((safe_mod_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((**g_1445) <= (((p_12 == ((((*g_1446) != l_1875) ^ 0x16L) | 0x0AB8L)) || (*p_11)) , 0x16L)), (-1L))) || g_80), l_1863)) != p_12) > (*l_1819))))) , 0x5EL))) | l_1878) , p_12) , (*l_1819)) >= 0xC7L) && (*l_1819)))))
        {
            (*g_408) = (**g_415);
        }
        else
        {
            (*g_408) = l_1877;
        }
        (*l_1819) ^= (*p_11);
        if ((safe_mul_func_int8_t_s_s(((void*)0 != l_1881), (safe_div_func_int32_t_s_s(((*l_1819) >= (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_12, 3)), (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((*g_18), ((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((&g_494 == (l_1896 = l_1896)), (((*l_1819) >= (((*g_1445) == (void*)0) | 0x98AEL)) >= l_1863))) != 0xCCECL) || l_1863), 9)) > l_1863))), l_1897))))), g_19)))))
        {
            uint16_t l_1898 = 0x6044L;
            return l_1898;
        }
        else
        {
            uint16_t l_1983 = 0xF325L;
            int32_t l_1990 = 0xEF8DECC5L;
            int32_t l_1991 = 6L;
            int32_t l_1992 = 0xEF84A09CL;
            int8_t ** const l_2045 = &g_473;
            uint8_t **l_2046 = &g_1446;
            uint16_t *****l_2080 = &l_1848;
            for (g_743 = 0; (g_743 < 16); g_743++)
            {
                int32_t *l_1902 = &l_1825;
                int32_t *l_1904 = &g_19;
                int32_t *l_1905 = &g_80;
                int32_t l_1906 = 0xCC05D92CL;
                int32_t *l_1907 = &l_1825;
                int32_t *l_1908 = &g_1583;
                int32_t *l_1909 = &g_190;
                int32_t *l_1910 = &l_1901;
                int32_t *l_1911 = &g_190;
                int32_t *l_1912 = &g_1583;
                int32_t *l_1913 = (void*)0;
                int32_t *l_1914 = &g_1005;
                int32_t *l_1915 = &l_1906;
                int32_t *l_1916 = &l_1825;
                int32_t *l_1917 = &g_190;
                int32_t *l_1918 = &l_1901;
                int32_t *l_1919 = &l_1903;
                int32_t *l_1920 = &g_136;
                int32_t *l_1921 = &g_1583;
                int32_t *l_1922 = &g_136;
                int32_t *l_1923 = &g_136;
                int32_t *l_1924 = &l_1825;
                int32_t *l_1925 = &g_190;
                int32_t *l_1926 = (void*)0;
                int32_t *l_1927 = &g_19;
                int32_t *l_1928 = &l_1825;
                int32_t *l_1929 = (void*)0;
                int32_t *l_1930 = &g_136;
                int32_t *l_1931 = &l_1901;
                int32_t *l_1932 = (void*)0;
                int32_t *l_1933 = (void*)0;
                int32_t *l_1934 = &l_1825;
                int32_t *l_1935 = &l_1901;
                int32_t *l_1936 = &g_190;
                int32_t *l_1937 = &g_190;
                int32_t *l_1938 = &g_1583;
                int32_t *l_1939 = (void*)0;
                int32_t *l_1940 = &l_1906;
                int32_t *l_1941 = &g_136;
                int32_t *l_1942 = &g_1583;
                int32_t *l_1943 = &g_19;
                int32_t *l_1944 = &g_80;
                int32_t *l_1946 = &g_19;
                int32_t *l_1949 = (void*)0;
                int32_t *l_1950 = &l_1948;
                int32_t *l_1951 = &g_1005;
                int32_t *l_1952 = &g_190;
                int32_t *l_1953 = (void*)0;
                int32_t *l_1954 = &l_1903;
                int32_t *l_1955 = &l_1903;
                int32_t *l_1956 = (void*)0;
                int32_t *l_1957 = &l_1906;
                int32_t *l_1958 = (void*)0;
                int32_t *l_1959 = &l_1906;
                int32_t *l_1960 = &l_1903;
                int32_t *l_1961 = &l_1945;
                int32_t *l_1962 = &g_1005;
                int32_t *l_1963 = &g_19;
                int32_t *l_1964 = &l_1948;
                int32_t *l_1965 = &l_1903;
                int32_t *l_1966 = &l_1906;
                int32_t *l_1967 = &l_1945;
                int32_t l_1968 = 0xBE57EC12L;
                int32_t *l_1969 = &g_190;
                int32_t l_1970 = 6L;
                int32_t *l_1971 = &l_1903;
                int32_t *l_1972 = &g_136;
                int32_t *l_1973 = &l_1948;
                int32_t *l_1974 = &l_1903;
                int32_t *l_1975 = &g_1005;
                int32_t *l_1976 = &l_1825;
                int32_t *l_1977 = &l_1903;
                int32_t *l_1978 = &g_19;
                int32_t *l_1979 = (void*)0;
                int32_t *l_1981 = &l_1906;
                int32_t *l_1982 = &l_1903;
                uint8_t **l_2044 = &g_1446;
                int8_t *****l_2060 = &g_1420;
                uint16_t ** const l_2062 = (void*)0;
                --l_1983;
                (**g_408) = ((*l_1951) = (safe_div_func_uint32_t_u_u(g_121, (*p_11))));
                for (g_1583 = 0; (g_1583 < 0); g_1583 = safe_add_func_int32_t_s_s(g_1583, 5))
                {
                    int8_t l_1993 = (-7L);
                    int32_t *l_1997 = &l_1991;
                    int32_t *l_1998 = (void*)0;
                    int32_t *l_1999 = &g_1005;
                    int32_t *l_2000 = &l_1992;
                    int32_t *l_2001 = (void*)0;
                    int32_t *l_2002 = &l_1992;
                    int32_t *l_2003 = &g_190;
                    int32_t *l_2004 = &g_19;
                    int32_t *l_2005 = &g_190;
                    int32_t *l_2006 = &l_1991;
                    int32_t *l_2007 = &l_1996;
                    int32_t *l_2008 = &l_1995;
                    int32_t *l_2009 = &l_1945;
                    int32_t *l_2010 = (void*)0;
                    int32_t *l_2011 = &g_19;
                    int32_t *l_2012 = &g_136;
                    int32_t *l_2013 = &g_190;
                    int32_t *l_2014 = (void*)0;
                    int32_t *l_2015 = (void*)0;
                    int32_t *l_2017 = &l_1825;
                    int32_t *l_2018 = &l_1901;
                    int32_t *l_2019 = &l_1990;
                    int32_t *l_2020 = &l_2016;
                    int32_t *l_2021 = (void*)0;
                    int32_t *l_2022 = (void*)0;
                    int32_t *l_2023 = &l_1825;
                    int32_t l_2024 = (-1L);
                    int32_t *l_2025 = &l_1968;
                    int32_t *l_2026 = &l_1990;
                    int32_t *l_2028 = &l_1825;
                    int32_t *l_2029 = &l_2027;
                    int32_t *l_2030 = &l_1945;
                    uint32_t l_2031 = 1UL;
                    uint8_t **l_2039 = &l_1868;
                    uint8_t ***l_2038 = &l_2039;
                    uint8_t *l_2048 = &g_1586;
                    uint16_t **l_2061 = (void*)0;
                    if ((*p_11))
                        break;
                    ++l_2031;
                    (*l_1955) = ((**g_1445) == (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((((l_1901 ^ (((***g_1206) = (((*l_2038) = (((**g_408) , ((*g_1420) == (void*)0)) , &g_1446)) == (((*l_2048) |= ((*l_1868) ^= ((((l_1992 & (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_2044 != (((l_2045 != (void*)0) && p_12) , l_2046)), 0x35E9BBECL)), 15))) , 0x17A8L) >= l_2047) <= 0x9442BE17L))) , (void*)0))) & 0x80L)) > 1L) != g_880), (*l_1819))), 0xBA41L)));
                    for (g_1041 = 0; (g_1041 <= 39); g_1041 = safe_add_func_uint32_t_u_u(g_1041, 7))
                    {
                        int32_t l_2065 = 0x7BD2B91BL;
                        uint32_t *l_2072 = (void*)0;
                        uint32_t *l_2073 = &g_1451;
                        (*g_408) = (***g_414);
                        (*l_1982) = (((safe_div_func_int32_t_s_s(((((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_uint32_t_u_u(p_12, ((*l_1941) = (safe_sub_func_int16_t_s_s((((*l_2011) , l_2060) == (void*)0), (l_2061 != l_2062)))))))), p_12)) , p_12) >= (safe_mul_func_uint8_t_u_u(((**l_2039) = p_12), 2L))) , (*p_11)), l_2065)) == (*l_1819)) < (*l_1946));
                        (*l_1977) = (((**g_1445) ^= ((void*)0 == &l_1860)) < p_12);
                        (*l_1952) = ((l_1992 = (g_412 ^ ((safe_mod_func_uint8_t_u_u((+(~((safe_sub_func_uint32_t_u_u(((*l_2073)++), p_12)) ^ (safe_rshift_func_uint16_t_u_u((l_1990 = ((safe_mod_func_uint16_t_u_u((p_12 < (((void*)0 == l_2080) , (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(((((0xC9L && ((safe_add_func_int16_t_s_s((p_12 != ((-3L) < 0x04C9L)), 2L)) < (*p_11))) | p_12) & p_12) , 1UL))) >= l_2065), (*g_18))))), (*l_1944))) || g_743)), 11))))), (*l_2000))) == p_12))) != 8L);
                    }
                }
                if ((**g_408))
                    break;
            }
        }
    }
    else
    {
        uint16_t l_2094 = 65528UL;
        for (l_1897 = 0; (l_1897 != 21); l_1897 = safe_add_func_int8_t_s_s(l_1897, 7))
        {
            for (g_854 = 0; (g_854 == 2); ++g_854)
            {
                for (p_12 = (-23); (p_12 >= 9); ++p_12)
                {
                    return p_12;
                }
                (*p_11) = (**g_408);
                (**g_415) = p_11;
            }
            (*l_1819) ^= ((*p_11) = l_2094);
        }
    }
    return p_12;
}
static int32_t * func_13(int16_t p_14, int32_t * p_15, int32_t * p_16)
{
    uint32_t l_479 = 1UL;
    int32_t *l_883 = (void*)0;
    int16_t l_1047 = 3L;
    int32_t l_1106 = 0xFE244826L;
    uint8_t *l_1168 = &g_599;
    uint16_t ***l_1192 = (void*)0;
    int32_t l_1328 = 1L;
    int32_t l_1361 = 0L;
    int8_t ****l_1417 = (void*)0;
    const uint16_t l_1423 = 0x2605L;
    uint16_t l_1722 = 0x000AL;
    int32_t *l_1729 = &l_1106;
    int32_t *l_1730 = &l_1361;
    int32_t *l_1731 = &g_136;
    int32_t *l_1732 = &g_190;
    int32_t *l_1733 = (void*)0;
    int32_t *l_1734 = &l_1361;
    int32_t *l_1735 = (void*)0;
    int32_t *l_1736 = &g_190;
    int32_t *l_1737 = &l_1361;
    int32_t *l_1738 = &g_1583;
    int32_t *l_1739 = &l_1361;
    int32_t *l_1740 = &l_1328;
    int32_t *l_1741 = (void*)0;
    int32_t *l_1742 = &g_80;
    int32_t *l_1743 = &l_1106;
    int32_t *l_1744 = &l_1328;
    int32_t *l_1745 = &g_80;
    int32_t *l_1746 = &l_1106;
    int32_t *l_1747 = &g_1583;
    int32_t *l_1748 = &g_1005;
    int32_t *l_1749 = &l_1328;
    int32_t *l_1750 = &g_136;
    int32_t *l_1751 = &g_1583;
    int32_t *l_1752 = &g_19;
    int32_t *l_1753 = &g_1583;
    int32_t *l_1754 = &l_1106;
    int32_t *l_1755 = &l_1106;
    int32_t *l_1756 = &g_1583;
    int32_t *l_1757 = &g_1005;
    int32_t *l_1758 = &g_190;
    int32_t *l_1759 = &g_190;
    int32_t *l_1760 = &g_19;
    int32_t *l_1761 = &g_19;
    int32_t *l_1762 = (void*)0;
    int32_t *l_1763 = &l_1106;
    int32_t *l_1764 = &l_1328;
    int32_t *l_1765 = &g_80;
    int32_t *l_1766 = &l_1361;
    int32_t *l_1767 = &g_19;
    int32_t *l_1768 = &g_80;
    int32_t *l_1769 = &g_80;
    int32_t *l_1770 = &l_1328;
    int32_t l_1771 = 0x8EE163EAL;
    int32_t *l_1772 = &l_1361;
    int32_t *l_1773 = &g_80;
    int32_t *l_1774 = (void*)0;
    int32_t *l_1775 = &l_1771;
    int32_t *l_1776 = &g_19;
    int32_t *l_1777 = (void*)0;
    int32_t *l_1778 = &g_80;
    int32_t *l_1779 = &g_1005;
    int32_t *l_1780 = &l_1361;
    int32_t *l_1781 = &g_19;
    int32_t l_1783 = 0xEF733BF6L;
    int32_t *l_1784 = &g_1005;
    int32_t *l_1785 = &g_1005;
    int32_t *l_1786 = &l_1361;
    int32_t *l_1787 = &l_1361;
    int32_t *l_1788 = &g_136;
    int32_t *l_1789 = &l_1328;
    int32_t *l_1790 = &g_1583;
    int32_t *l_1791 = &l_1771;
    int32_t ***l_1795 = &g_408;
    int16_t l_1796 = 0x074FL;
    uint32_t l_1797 = 0x67A1C0D4L;
    for (p_14 = (-8); (p_14 == (-19)); p_14 = safe_sub_func_uint32_t_u_u(p_14, 6))
    {
        int32_t *l_52 = &g_19;
        int16_t l_1048 = 3L;
        int32_t ** const *l_1155 = &g_408;
        int8_t * const **l_1208 = &g_1207;
        int32_t l_1261 = 8L;
        int32_t l_1342 = 0x28D326F8L;
        int32_t l_1370 = 0x7A56C9A5L;
        const int32_t *l_1489 = &g_1490;
        const int32_t **l_1488 = &l_1489;
        const int32_t ***l_1487 = &l_1488;
        const int32_t ****l_1486 = &l_1487;
        const int32_t *****l_1485 = &l_1486;
        uint32_t l_1515 = 0xC5C08EE6L;
        int32_t l_1578 = 0x36FACC7EL;
        uint8_t l_1626 = 7UL;
        uint32_t *l_1656 = (void*)0;
        uint16_t ** const *l_1664 = (void*)0;
        uint16_t ** const **l_1663 = &l_1664;
        l_1106 |= (safe_div_func_uint32_t_u_u((((((((safe_mod_func_uint8_t_u_u(((0xFCL != func_26((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s(func_34(func_37(func_42(func_48(l_52, ((g_19 != (*l_52)) || (g_19 , (*g_18))), &g_19), g_175, p_14, l_479, p_14), l_883, (*g_408), g_190), g_661), 4)) , 0xA51829DBL) , p_14) & p_14), l_1047)), l_1048, p_14)) | p_14), 0x25L)) , (*g_408)) == l_883) , 0UL) && (**g_138)) < p_14) > p_14), p_14));
        for (g_533 = 0; (g_533 < (-19)); g_533 = safe_sub_func_uint32_t_u_u(g_533, 1))
        {
            const int32_t * const ***l_1123 = (void*)0;
            const int32_t * const ****l_1122 = &l_1123;
            int32_t l_1136 = (-4L);
            int32_t l_1138 = 0x8CE2040EL;
            int32_t l_1141 = (-1L);
            int8_t ***l_1193 = &g_138;
            int16_t l_1214 = 0x6620L;
            uint16_t *l_1239 = &g_412;
            int8_t l_1242 = (-8L);
            int32_t l_1447 = 0x1C8D4CAAL;
            const int32_t *l_1484 = &g_80;
            const int32_t **l_1483 = &l_1484;
            const int32_t ***l_1482 = &l_1483;
            const int32_t ****l_1481 = &l_1482;
            const int32_t *****l_1480 = &l_1481;
            const uint16_t l_1717 = 4UL;
            uint16_t l_1720 = 0xC0CDL;
            int16_t l_1721 = (-1L);
            int16_t l_1728 = 0x1AC3L;
            for (g_117 = 24; (g_117 <= (-18)); g_117 = safe_sub_func_uint8_t_u_u(g_117, 1))
            {
                uint16_t * const ****l_1128 = (void*)0;
                uint16_t * const ****l_1129 = (void*)0;
                uint16_t * const ****l_1130 = &g_1124;
                uint16_t *l_1131 = &g_412;
                int8_t *l_1132 = &g_676;
                int32_t l_1158 = 0x2C8D39A3L;
                uint8_t *l_1169 = &g_477;
                uint32_t l_1181 = 0x5841A13FL;
                int8_t l_1183 = (-1L);
                int32_t ****l_1257 = &g_415;
            }
            (*l_52) = (*p_16);
        }
    }
    ++g_1792;
    (*p_16) |= ((void*)0 == l_1795);
    ++l_1797;
    return (*g_408);
}
static int8_t func_26(int32_t p_27, int8_t p_28, uint32_t p_29)
{
    uint32_t l_1054 = 0xAFE179C9L;
    int16_t *l_1066 = (void*)0;
    int16_t *l_1067 = &g_854;
    int32_t l_1073 = 1L;
    uint16_t *l_1074 = &g_412;
    uint16_t *l_1085 = &g_121;
    int32_t *l_1093 = &g_903;
    const int8_t *l_1102 = &g_319;
    const int8_t * const *l_1101 = &l_1102;
    uint16_t *l_1103 = (void*)0;
    uint16_t **l_1104 = &l_1074;
    int32_t *l_1105 = (void*)0;
    (**g_408) = (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((((((!p_29) > (l_1054 ^ ((safe_mul_func_int16_t_s_s(((!((((safe_lshift_func_int8_t_s_u(((void*)0 == (*g_138)), (&g_321 != (g_1068 = ((safe_lshift_func_int16_t_s_s((l_1054 ^ p_28), ((safe_mod_func_int32_t_s_s(((((*l_1067) = ((safe_mul_func_int16_t_s_s(((l_1066 == l_1066) < 255UL), 0x074DL)) > p_29)) >= l_1054) , (***g_415)), g_321)) == 0x82L))) , &p_29))))) & g_542) > p_27) >= 0xC8FB82FFL)) >= 0xC9L), p_28)) , p_28))) >= l_1054) && 0x14L) < 0x938AL) > p_28), (*g_470))), 0x4D8CF652L));
    (****g_414) = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((--(*l_1074)), ((((*l_1093) ^= (safe_div_func_int16_t_s_s((0x24L | ((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((*l_1085) &= 0x2161L), (safe_div_func_uint8_t_u_u(((&g_755 != (void*)0) != (p_29 == (+(((void*)0 == &g_414) & (safe_mul_func_uint8_t_u_u(p_28, (safe_add_func_uint32_t_u_u(8UL, (**g_408))))))))), l_1073)))), 11)), p_29)) || l_1073)), p_28))) , (**g_138)) || (**g_138)))), 13));
    l_1105 = func_48(&l_1073, l_1054, (((((p_27 >= (safe_add_func_uint16_t_u_u((&p_27 != (((safe_unary_minus_func_uint32_t_u((((*g_139) = ((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((p_27 || (((((void*)0 == l_1101) | ((l_1103 == ((*l_1104) = l_1074)) , 3UL)) && p_28) | (*g_139))) & g_903) < p_29), l_1073)) & g_19), (****g_414))) != p_27)) <= p_27))) || l_1073) , &p_27)), p_28))) <= p_28) ^ 0x31852832L) ^ 0xECL) , (*g_408)));
    return (*g_139);
}
static uint8_t func_34(uint32_t p_35, uint16_t p_36)
{
    int32_t *l_1045 = &g_1005;
    int32_t *l_1046 = (void*)0;
    l_1045 = l_1045;
    return g_1006;
}
static uint32_t func_37(uint8_t p_38, int32_t * p_39, const int32_t * p_40, int32_t p_41)
{
    const int8_t l_886 = 0x41L;
    int8_t ***l_896 = &g_138;
    int32_t ****l_899 = &g_415;
    uint8_t l_902 = 0x34L;
    uint32_t l_929 = 0xFF34442FL;
    int32_t l_934 = 0L;
    int32_t l_959 = 0xFF1B54D9L;
    int32_t l_966 = (-3L);
    int32_t l_987 = 0x4436AAF7L;
    for (g_19 = (-13); (g_19 <= (-14)); g_19--)
    {
        int16_t l_887 = (-4L);
        int8_t l_892 = (-1L);
        int32_t l_893 = 0x5BDC0AB1L;
        uint8_t *l_898 = &g_477;
        int32_t *****l_900 = &l_899;
        int32_t **** const l_901 = &g_415;
        int32_t l_935 = 0L;
        int32_t l_936 = 0xF85484A3L;
        int32_t l_937 = 0x6C2D7645L;
        int32_t l_938 = (-1L);
        uint8_t l_956 = 0x09L;
        uint8_t l_1009 = 1UL;
        int8_t **l_1025 = &g_139;
        if (((0x470F29F9L >= l_886) <= ((((l_887 && (safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_893 &= l_892), (safe_rshift_func_int8_t_s_s(((void*)0 != l_896), 1)))), (((!(9UL != ((*l_898) = l_887))) > (((((*l_900) = l_899) == l_901) , l_902) <= p_38)) ^ p_41)))) == g_734) & 0xE2L) != (****l_901))))
        {
            return g_903;
        }
        else
        {
            int32_t *l_904 = &g_80;
            int32_t *l_905 = (void*)0;
            int32_t *l_906 = &g_80;
            int32_t *l_907 = &g_136;
            int32_t *l_908 = (void*)0;
            int32_t *l_909 = &g_80;
            int32_t *l_910 = (void*)0;
            int32_t l_911 = 0x3B70C761L;
            int32_t *l_912 = (void*)0;
            int32_t *l_913 = (void*)0;
            int32_t *l_914 = &g_80;
            int32_t *l_915 = &g_136;
            int32_t *l_916 = &l_911;
            int32_t *l_917 = &g_190;
            int32_t *l_918 = &l_911;
            int32_t *l_919 = &g_80;
            int32_t *l_920 = &g_80;
            int32_t *l_921 = &g_190;
            int32_t *l_922 = &g_190;
            int32_t *l_923 = &g_80;
            int32_t *l_924 = &g_190;
            int32_t *l_925 = &g_80;
            int32_t *l_926 = &g_190;
            int32_t *l_927 = &l_911;
            int32_t *l_928 = &g_136;
            int32_t l_996 = (-1L);
            int32_t l_1001 = 0x200CB1E2L;
            int8_t **l_1026 = &g_139;
            uint32_t *l_1033 = &g_762;
            uint32_t *l_1040 = &g_1041;
            uint8_t *l_1042 = &g_689;
            uint8_t *l_1043 = (void*)0;
            uint8_t *l_1044 = &l_902;
            ++l_929;
            for (g_99 = 0; (g_99 != 5); g_99++)
            {
                int32_t *l_939 = &g_136;
                int32_t *l_940 = &g_190;
                int32_t *l_941 = &l_893;
                int32_t *l_942 = &l_911;
                int32_t *l_943 = (void*)0;
                int32_t *l_944 = &l_935;
                int32_t *l_945 = &g_80;
                int32_t *l_946 = &g_80;
                int32_t *l_947 = (void*)0;
                int32_t *l_948 = &l_893;
                int32_t *l_949 = &l_936;
                int32_t *l_950 = &l_893;
                int32_t *l_951 = (void*)0;
                int32_t *l_952 = (void*)0;
                int32_t *l_953 = &l_937;
                int32_t *l_954 = &g_80;
                int32_t *l_955 = &l_911;
                int32_t *l_960 = &l_935;
                int32_t *l_961 = &l_938;
                int32_t *l_962 = &l_893;
                int32_t *l_963 = &l_937;
                int32_t *l_964 = &l_938;
                int32_t *l_965 = &l_936;
                int32_t *l_967 = &l_911;
                int32_t *l_968 = &l_937;
                int32_t *l_969 = &l_935;
                int32_t *l_970 = &l_937;
                int32_t *l_971 = &g_136;
                int32_t *l_972 = &l_938;
                int32_t *l_973 = &g_80;
                int32_t *l_974 = &g_80;
                int32_t *l_975 = (void*)0;
                int32_t *l_976 = (void*)0;
                int32_t *l_977 = &g_80;
                int32_t *l_978 = &l_893;
                int32_t *l_979 = (void*)0;
                int32_t *l_980 = &l_966;
                int32_t *l_981 = &l_937;
                int32_t *l_982 = &l_935;
                int32_t *l_983 = &l_911;
                int32_t *l_984 = (void*)0;
                int32_t *l_985 = &l_937;
                int32_t *l_986 = (void*)0;
                int32_t *l_988 = &g_80;
                int32_t *l_989 = (void*)0;
                int32_t *l_990 = &g_190;
                int32_t *l_991 = (void*)0;
                int32_t *l_992 = &g_80;
                int32_t *l_993 = &g_80;
                int32_t *l_994 = (void*)0;
                int32_t *l_995 = &l_987;
                int32_t *l_997 = &l_996;
                int32_t *l_998 = &l_937;
                int32_t *l_999 = &l_893;
                int32_t *l_1000 = &l_938;
                int32_t *l_1003 = &l_893;
                int32_t *l_1004 = &l_911;
                l_956++;
                --g_1006;
                if ((*p_40))
                    continue;
                l_1009++;
            }
            (*l_928) &= (((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((*l_898) = (~0x79L)), (((((safe_sub_func_int16_t_s_s((((*l_1044) = ((safe_lshift_func_uint16_t_u_u((****l_899), 15)) , ((*l_1042) ^= (((*l_1040) ^= (((*l_922) = 0x52DA7EACL) == ((*l_923) |= ((((l_1026 = l_1025) == (void*)0) < ((((((***l_896) = (0x28D92066L ^ (((safe_mul_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((****l_899), (safe_div_func_int16_t_s_s((((*l_1033) &= (****l_901)) && ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((((safe_mod_func_int8_t_s_s(0x30L, p_38)) < (*p_40)) , p_38) == p_41) , p_38) , 0xC2L), p_38)), 0x3EL)) > 0UL)), (*****l_900))))) && (-1L)) , (*g_473)), g_1006)) != (****l_901)) != 0x9E8AC9FAL))) >= 6L) <= 0x501DBA4EL) , p_41) , p_38)) <= g_175)))) || 0x7E2C7542L)))) || (*l_922)), 0L)) , (void*)0) == (void*)0) == (*g_18)) < g_321))), (*****l_900))), 0xD3211514L)), 0xC149F11BL)) , (*p_40)) || 1UL);
        }
    }
    return p_41;
}
static uint8_t func_42(int32_t * p_43, uint8_t p_44, const int32_t p_45, int8_t p_46, uint8_t p_47)
{
    int8_t l_486 = 1L;
    int32_t l_502 = 0x1FF17B4EL;
    int32_t l_503 = 0x0CE1A13BL;
    int32_t l_552 = 0L;
    int32_t *****l_753 = &g_414;
    uint16_t *l_803 = &g_99;
    uint16_t **l_802 = &l_803;
    int32_t l_845 = 0L;
    int32_t l_846 = 0x5824C1C6L;
    int32_t l_849 = 8L;
    int32_t l_851 = (-4L);
    int32_t l_873 = 8L;
    int32_t l_878 = 0x60C0C00EL;
    return p_44;
}
static int32_t * func_48(int32_t * p_49, int16_t p_50, int32_t * p_51)
{
    uint32_t l_53 = 4UL;
    int32_t *l_77 = &g_19;
    int32_t *l_78 = (void*)0;
    int32_t *l_79 = &g_80;
    int32_t **l_84 = (void*)0;
    int32_t **l_85 = &l_78;
    uint32_t l_88 = 0x6696B495L;
    uint16_t *l_97 = (void*)0;
    uint16_t *l_98 = &g_99;
    uint32_t l_128 = 0xBDC21833L;
    int8_t l_143 = 0xAAL;
    int8_t * const *l_148 = &g_139;
    int32_t l_161 = 0xB37417BDL;
    uint16_t l_193 = 65535UL;
    int32_t l_374 = 0L;
    int8_t l_403 = 0x69L;
    int32_t * const *l_431 = (void*)0;
    int32_t * const **l_430 = &l_431;
    int32_t * const *** const l_429 = &l_430;
    int32_t *l_478 = &g_136;
    (*p_51) = (l_53 <= (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_53, (&g_19 == (void*)0))), (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((func_62(p_51, l_53, (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_19, ((*l_79) ^= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((p_50 , l_77) == (void*)0), (*l_77))), 0))))), p_50)), p_50)), g_81) , g_81), 7)) == g_81), 4294967295UL)))));
    (*l_85) = p_49;
    if ((((((g_80 , &p_49) == ((p_50 || (safe_sub_func_int16_t_s_s(0xED18L, l_88))) , &p_49)) , ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(((((((*l_98) |= (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(1UL, ((((*l_78) , &l_78) == &p_49) ^ g_81))) , &g_19) == p_49), 8L))) != (*l_79)) && p_50) && (*l_79)) , 8UL), 0x79L)) || 0x91L), (*l_77))) , (**l_85))) < g_19) | (*l_78)))
    {
        uint8_t l_100 = 3UL;
        int32_t **l_106 = &l_78;
        uint16_t l_122 = 0xD6CDL;
        int8_t **l_140 = &g_139;
        l_100 ^= (**l_85);
        if (g_99)
            goto lbl_137;
lbl_137:
        for (g_99 = (-22); (g_99 != 56); g_99 = safe_add_func_int16_t_s_s(g_99, 1))
        {
            int32_t *l_105 = (void*)0;
            int8_t *l_116 = &g_117;
            uint16_t *l_120 = &g_121;
            int32_t ** const *l_125 = &l_85;
            int16_t *l_126 = &g_127;
            int8_t *l_129 = (void*)0;
            int8_t *l_130 = (void*)0;
            int8_t *l_131 = &g_132;
            int8_t *l_133 = &g_134;
            int32_t l_135 = 0L;
            for (p_50 = (-20); (p_50 <= (-14)); p_50++)
            {
                int32_t ***l_107 = &l_106;
                l_105 = &g_19;
                if ((*g_18))
                    continue;
                (*l_107) = l_106;
            }
            g_136 |= (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*l_133) = (((safe_lshift_func_int8_t_s_s(((*l_116) |= (**l_106)), 5)) , (-1L)) || (((*l_131) &= (((p_50 == (((((-2L) == (safe_mul_func_int16_t_s_s(((*l_126) &= (((((((*l_120) = 1UL) <= ((0xF019L ^ (l_122 = (**l_106))) , ((((safe_rshift_func_int8_t_s_u(((l_125 != &l_106) < (**l_106)), (**l_106))) != (*l_79)) , 0x43L) > g_117))) < 3L) > (-5L)) , l_116) != &g_117)), p_50))) >= l_128) >= (***l_125)) >= g_19)) != p_50) <= p_50)) & (*l_79)))), g_99)), 8)) || l_135), g_80));
            g_136 |= (*g_18);
            if ((*g_18))
                continue;
        }
        l_140 = g_138;
        (*l_79) = (g_134 & (p_50 == (safe_add_func_uint32_t_u_u(0x0776C575L, (l_143 = 0x110172C6L)))));
    }
    else
    {
        uint32_t l_160 = 0x321B6B7DL;
        int32_t l_227 = 1L;
        int32_t l_273 = 0L;
        uint16_t * const *l_413 = &l_97;
        int8_t *l_472 = &g_319;
        int8_t **l_471 = &l_472;
        uint8_t *l_476 = &g_477;
        for (p_50 = (-17); (p_50 > (-23)); --p_50)
        {
            int32_t l_159 = 0x6DEEB808L;
            uint16_t *l_202 = &g_121;
            int32_t *l_214 = &g_19;
            int32_t l_221 = (-9L);
            int32_t l_225 = 0x3D635D9AL;
            int32_t l_248 = 0L;
            int32_t l_266 = 1L;
            int32_t l_293 = (-9L);
            uint32_t l_456 = 0xD5F59C59L;
            const uint32_t l_466 = 2UL;
        }
        g_136 |= (((!g_321) ^ (p_50 , ((((*l_476) = (((*g_138) != (g_473 = ((safe_add_func_int16_t_s_s(p_50, (l_273 == (((*l_471) = (g_470 = (*g_138))) == (*l_148))))) , (*l_471)))) , ((safe_lshift_func_int16_t_s_s(p_50, 0)) == 0x93L))) , l_273) , p_50))) , (*p_49));
    }
    l_478 = (void*)0;
    return p_51;
}
static int16_t func_62(int32_t * p_63, int32_t p_64, int8_t p_65, const int32_t p_66)
{
    int32_t *l_82 = &g_80;
    uint8_t l_83 = 0x2FL;
    (*l_82) |= (*p_63);
    return l_83;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_1068 = 0;
    csmith_sink_ = g_19;
    csmith_sink_ = g_80;
    csmith_sink_ = g_81;
    csmith_sink_ = g_99;
    csmith_sink_ = g_117;
    csmith_sink_ = g_121;
    csmith_sink_ = g_127;
    csmith_sink_ = g_132;
    csmith_sink_ = g_134;
    csmith_sink_ = g_136;
    csmith_sink_ = g_175;
    csmith_sink_ = g_190;
    csmith_sink_ = g_319;
    csmith_sink_ = g_321;
    csmith_sink_ = g_412;
    csmith_sink_ = g_477;
    csmith_sink_ = g_533;
    csmith_sink_ = g_542;
    csmith_sink_ = g_563;
    csmith_sink_ = g_599;
    csmith_sink_ = g_661;
    csmith_sink_ = g_676;
    csmith_sink_ = g_689;
    csmith_sink_ = g_734;
    csmith_sink_ = g_743;
    csmith_sink_ = g_761;
    csmith_sink_ = g_762;
    csmith_sink_ = g_854;
    csmith_sink_ = g_880;
    csmith_sink_ = g_903;
    csmith_sink_ = g_1002;
    csmith_sink_ = g_1005;
    csmith_sink_ = g_1006;
    csmith_sink_ = g_1041;
    csmith_sink_ = g_1150;
    csmith_sink_ = g_1182;
    csmith_sink_ = g_1396;
    csmith_sink_ = g_1448;
    csmith_sink_ = g_1451;
    csmith_sink_ = g_1462;
    csmith_sink_ = g_1490;
    csmith_sink_ = g_1583;
    csmith_sink_ = g_1586;
    csmith_sink_ = g_1727;
    csmith_sink_ = g_1782;
    csmith_sink_ = g_1792;
    csmith_sink_ = g_1829;
    csmith_sink_ = g_1980;
    platform_main_end(0,0);
    return 0;
}
