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
static int16_t g_9 = 0;
static int32_t g_32 = 0xD0BB94D0;
static int32_t *g_31 = &g_32;
static int32_t g_84 = 0x2A26B131;
static uint32_t g_87 = 0U;
static int32_t g_102 = 0xE6D542D3;
static int32_t g_123 = 1;
static int32_t **g_155 = &g_31;
static int32_t g_294 = (-2);
static uint8_t g_297 = 3U;
static uint8_t g_477 = 1U;
static int32_t g_521 = 0x9FB92A9F;
static int32_t g_523 = 0xD4142E3B;
static int32_t *g_522 = &g_523;
static int32_t ***g_565 = &g_155;
static int32_t ****g_564 = &g_565;
static uint32_t g_674 = 0x8BF95130;
static int16_t g_765 = 0x86B1;
static int32_t g_770 = 1;
static uint16_t g_787 = 0xD959;
static uint8_t g_1074 = 8U;
static int32_t g_1100 = 1;
static int32_t func_1(void);
static int32_t * func_2(int32_t * p_3);
static int32_t * func_4(uint16_t p_5, uint32_t p_6, int32_t p_7, int32_t * p_8);
static uint16_t func_13(uint16_t p_14, int32_t * p_15, uint32_t p_16, int8_t p_17, int32_t * p_18);
static int16_t func_23(int32_t * p_24, int32_t * p_25, int32_t * p_26, int16_t p_27);
static int32_t * func_28(int32_t * p_29);
static int16_t func_36(int32_t * p_37, int32_t p_38);
static int16_t func_40(int16_t p_41, int32_t * p_42, int8_t p_43, uint8_t p_44);
static int32_t * func_45(int8_t p_46);
static int32_t * func_47(uint16_t p_48, uint16_t p_49, uint16_t p_50, int16_t p_51);
static int32_t func_1(void)
{
    uint16_t l_10 = 0x8FAA;
    int32_t *l_30 = (void*)0;
    int32_t l_836 = (-1);
    int32_t ***l_1099 = &g_155;
    int32_t l_1101 = 1;
    (**g_565) = func_2(func_4(g_9, l_10, (safe_mod_func_uint32_t_u_u(((func_13((((safe_sub_func_int16_t_s_s(l_10, (safe_rshift_func_int16_t_s_u(func_23(func_28(l_30), g_522, l_30, l_10), g_765)))) , (*g_522)) , 65535U), l_30, l_836, g_9, l_30) != (-7)) | (-1)), (-6))), l_30));
    (***l_1099) = ((((safe_rshift_func_uint16_t_u_s(((*g_564) != (g_765 , (*g_564))), 5)) <= (((safe_div_func_int32_t_s_s((l_836 || (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((g_84 <= ((((*g_564) != (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((((&g_565 != (void*)0) <= (((l_30 != l_30) , &g_565) != (void*)0)) == g_102) , g_477), 6)), 13)) ^ g_770) , l_1099)) || g_1100) || g_9)) && g_123) & g_477), 8)), l_1101)), 0))), (-1))) > g_294) & 0x76)) > g_297) < g_297);
    return g_123;
}
static int32_t * func_2(int32_t * p_3)
{
    int32_t *l_1084 = &g_123;
    return l_1084;
}
static int32_t * func_4(uint16_t p_5, uint32_t p_6, int32_t p_7, int32_t * p_8)
{
    int32_t ****l_840 = (void*)0;
    uint16_t l_843 = 0x5C92;
    int32_t ***l_850 = &g_155;
    int32_t l_853 = 0;
    int32_t l_1028 = 0x688C6A88;
    int32_t *l_1049 = &g_32;
    for (g_674 = 0; (g_674 <= 56); g_674++)
    {
        uint32_t l_844 = 0x5536CB47;
        int32_t ***l_849 = (void*)0;
        int32_t *l_854 = &g_521;
        int8_t l_870 = 0x9F;
        (****g_564) = ((l_840 == (void*)0) >= (((((((void*)0 != (*g_564)) == (((p_7 | (safe_rshift_func_uint16_t_u_s((((((0xBCEC <= ((((*g_565) == (void*)0) || g_297) , 0x58E6)) ^ g_477) , p_6) & 0xD264) >= l_843), 5))) || g_787) < (***g_565))) <= p_5) , 0x13098573) && g_102) | l_844));
        (*l_854) ^= (((**g_565) != (***g_564)) | (((safe_sub_func_int8_t_s_s((((*g_31) || (safe_unary_minus_func_int8_t_s(0x1A))) != ((g_123 > (((+g_102) , l_849) == l_850)) > (safe_sub_func_uint16_t_u_u((0x1C66547D <= (*g_522)), l_853)))), 251U)) , p_7) < (***l_850)));
        (**l_850) = &p_7;
    }
    if (((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((***l_850) == ((!((***l_850) >= p_5)) | p_7)), (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((+(***l_850)), (255U || (4294967289U != (-1))))), ((safe_rshift_func_int16_t_s_u((((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((p_7 , 4294967292U) <= (****g_564)), g_523)), (*g_522))) || (-5)), 0x364CBF23)) || 1U) , p_6), g_87)) ^ p_5))))), (-2))) & p_6))
    {
        p_8 = &p_7;
        if ((****g_564))
        {
            for (g_9 = 0; (g_9 < (-17)); g_9 = safe_sub_func_uint8_t_u_u(g_9, 7))
            {
                if ((*g_522))
                    break;
                (***g_564) = (*g_155);
                (*p_8) = (-1);
            }
        }
        else
        {
            int32_t *l_894 = &g_770;
            (*g_522) ^= (safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u(g_765, (0x1EA2 ^ (((p_7 <= (-7)) , &p_8) != &p_8))))));
            return l_894;
        }
    }
    else
    {
        int32_t l_901 = (-3);
        int32_t ****l_946 = &l_850;
        int32_t l_999 = (-1);
        int16_t l_1075 = 0x79E1;
        int16_t l_1076 = 0x3FFE;
        for (l_843 = 0; (l_843 != 16); ++l_843)
        {
            int8_t l_908 = 8;
            int32_t ****l_925 = &l_850;
            uint32_t l_1073 = 0xF5BB275C;
            if (((-1) && (safe_mod_func_uint32_t_u_u(g_787, (((safe_lshift_func_uint8_t_u_s((***l_850), (l_901 >= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((+(***l_850)) ^ (~0xDB8F9B52)), g_523)) | ((l_908 != ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((g_765 , p_7), p_7)), 15)) == (***l_850)), 4)) , l_908), l_908)), p_6)) | 0xE8E3)) == 0x7096)), p_6))))) , g_32) ^ 1)))))
            {
                int32_t *l_919 = &g_523;
                return l_919;
            }
            else
            {
                int8_t l_926 = 0;
                int32_t l_948 = 0xAFD59670;
                uint16_t l_1044 = 3U;
                (*g_522) = (((safe_rshift_func_uint16_t_u_s((!(((safe_add_func_int8_t_s_s((((l_925 == &l_850) < ((l_926 == (p_6 || (0 < 0x8606))) ^ ((0x0C > g_521) | (****l_925)))) > p_7), 0x09)) != 6) && g_523)), g_87)) || 65528U) && 65526U);
                if ((**g_155))
                {
                    uint8_t l_947 = 0U;
                    int32_t *l_949 = &g_523;
                    int32_t *l_950 = &g_521;
                    int32_t *l_951 = &l_853;
                    int32_t *l_952 = &g_102;
                    int32_t *l_953 = &l_853;
                    int32_t *l_954 = &l_853;
                    int32_t *l_955 = (void*)0;
                    int32_t *l_956 = (void*)0;
                    int32_t *l_957 = &g_123;
                    int32_t *l_958 = &g_102;
                    int32_t *l_959 = &l_853;
                    int32_t *l_960 = &g_770;
                    int32_t *l_961 = (void*)0;
                    int32_t *l_962 = &g_102;
                    int32_t *l_963 = &g_123;
                    int32_t *l_964 = (void*)0;
                    int32_t *l_965 = &g_123;
                    int32_t *l_966 = &g_523;
                    int32_t *l_967 = &g_32;
                    int32_t *l_968 = &l_853;
                    int32_t *l_969 = &l_853;
                    int32_t *l_970 = &g_123;
                    int32_t *l_971 = &g_123;
                    int32_t *l_972 = &l_948;
                    int32_t *l_973 = (void*)0;
                    int32_t *l_974 = &g_521;
                    int32_t *l_975 = &g_123;
                    int32_t *l_976 = &l_853;
                    int32_t *l_977 = (void*)0;
                    int32_t *l_978 = &g_521;
                    int32_t *l_979 = &g_770;
                    int32_t *l_980 = &l_948;
                    int32_t *l_981 = &l_853;
                    int32_t *l_982 = &g_521;
                    int32_t *l_983 = &l_948;
                    int32_t *l_984 = &l_948;
                    int32_t *l_985 = (void*)0;
                    int32_t *l_986 = (void*)0;
                    int32_t l_987 = 0x9453BF10;
                    int32_t *l_988 = &g_123;
                    int32_t *l_989 = &g_102;
                    int32_t *l_990 = (void*)0;
                    int32_t *l_991 = &l_853;
                    int32_t *l_992 = &l_948;
                    int32_t *l_993 = &g_770;
                    int32_t *l_994 = &g_523;
                    int32_t *l_995 = &g_32;
                    int32_t *l_996 = (void*)0;
                    int32_t *l_997 = &g_770;
                    int32_t *l_998 = (void*)0;
                    int32_t *l_1000 = &l_853;
                    int32_t *l_1001 = &g_84;
                    int32_t *l_1002 = &l_853;
                    int32_t l_1003 = 0x9011604B;
                    int32_t *l_1004 = &l_853;
                    int32_t *l_1005 = &l_987;
                    int32_t *l_1006 = &l_948;
                    int32_t *l_1007 = &g_32;
                    int32_t *l_1008 = &l_999;
                    int32_t *l_1009 = &l_948;
                    int32_t *l_1010 = (void*)0;
                    int32_t *l_1011 = (void*)0;
                    int32_t *l_1012 = &g_521;
                    int32_t *l_1013 = &g_102;
                    int32_t *l_1014 = &g_32;
                    int32_t *l_1015 = &g_102;
                    int32_t *l_1016 = &g_102;
                    int32_t *l_1017 = &g_32;
                    int32_t *l_1018 = &g_770;
                    int32_t *l_1019 = (void*)0;
                    int32_t *l_1020 = &l_987;
                    int32_t *l_1021 = &g_32;
                    int32_t *l_1022 = &l_853;
                    int32_t *l_1023 = &g_102;
                    int32_t *l_1024 = &l_853;
                    int32_t *l_1025 = &g_523;
                    int32_t *l_1026 = &g_523;
                    int32_t *l_1027 = &g_32;
                    int32_t *l_1029 = &g_521;
                    int32_t *l_1030 = &l_1003;
                    int32_t *l_1031 = (void*)0;
                    int32_t *l_1032 = &l_853;
                    int32_t *l_1033 = &g_84;
                    int32_t *l_1034 = &g_770;
                    int32_t *l_1035 = (void*)0;
                    int32_t *l_1036 = &g_84;
                    int32_t *l_1037 = &g_770;
                    int32_t *l_1038 = (void*)0;
                    int32_t l_1039 = (-5);
                    int32_t *l_1040 = &l_1003;
                    int32_t *l_1041 = (void*)0;
                    int32_t *l_1042 = &l_1003;
                    int32_t *l_1043 = &l_987;
                    (***l_850) = (((((safe_unary_minus_func_int32_t_s(0xA84A4CF5)) >= p_5) && (safe_rshift_func_uint16_t_u_s(((p_6 ^ (safe_div_func_uint32_t_u_u((~(2 & ((safe_rshift_func_int16_t_s_s((((**g_155) ^ (safe_mod_func_int16_t_s_s(0x99B5, (p_7 | (!(safe_add_func_uint32_t_u_u((p_5 ^ (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((void*)0 == l_946), (****l_925))), p_5))), l_947))))))) , p_6), l_926)) <= p_5))), (****l_925)))) , 0x309D), g_32))) > l_947) < g_297);
                    if ((**g_155))
                        break;
                    ++l_1044;
                }
                else
                {
                    (****l_925) = (safe_rshift_func_int16_t_s_s(1, g_9));
                    return l_1049;
                }
                l_1076 |= (safe_sub_func_int32_t_s_s(0x7BD7B7F2, ((safe_rshift_func_uint8_t_u_u((((safe_unary_minus_func_uint16_t_u(((safe_mod_func_int16_t_s_s(((65533U | (~((safe_mod_func_uint8_t_u_u((+((void*)0 == &p_7)), ((p_6 , (((((~(g_765 >= (safe_mod_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0x09, (((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((~(((***l_925) == &p_7) != g_294)), 0x8227)), l_1073)) , (void*)0) == (***l_946)))) & 254U), g_32)) & 0xBBAD09CE) , p_5) != (****l_925)) , 0x9F09), 1U)))) , g_87) >= g_523) >= g_123) == 0xCD8A)) | p_7))) > g_1074))) , p_6), l_1044)) && l_1075))) == 8U) , l_948), p_7)) != p_5)));
            }
        }
    }
    (*g_155) = ((safe_div_func_int8_t_s_s((((void*)0 != (**g_564)) < ((g_521 , (*g_564)) != (((*g_564) != (void*)0) , (*g_564)))), (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((*g_31) != (safe_unary_minus_func_int32_t_s((**g_155)))) == p_7), p_7)), 0)))) , (*g_155));
    (**g_565) = func_28(func_28((**l_850)));
    return (*g_155);
}
static uint16_t func_13(uint16_t p_14, int32_t * p_15, uint32_t p_16, int8_t p_17, int32_t * p_18)
{
    int16_t l_837 = 0xD46C;
    return l_837;
}
static int16_t func_23(int32_t * p_24, int32_t * p_25, int32_t * p_26, int16_t p_27)
{
    int32_t l_528 = 0xFDD0078B;
    int32_t *l_530 = &g_102;
    int32_t ****l_603 = &g_565;
    int32_t l_637 = 0x42934253;
    int32_t l_647 = 0xEDB64202;
    int32_t l_662 = (-10);
    int32_t l_663 = 0x276CBAF1;
    int32_t l_664 = (-10);
    if ((safe_lshift_func_int16_t_s_s(0xD1F3, 2)))
    {
        int16_t l_529 = 0;
        int32_t *l_531 = &g_123;
        int32_t l_536 = 0x04A7B01F;
        int32_t ****l_563 = (void*)0;
        int32_t ***l_592 = (void*)0;
        (*g_31) ^= (safe_sub_func_uint16_t_u_u((l_528 , (l_529 , (l_530 == l_531))), ((*l_531) <= ((4 < ((g_87 , (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_530) && (*l_531)), l_536)), 4U))) , g_297)) <= (*l_531)))));
        (**g_155) = (p_27 && (((safe_lshift_func_int8_t_s_s((((((((safe_add_func_uint16_t_u_u(0U, (safe_rshift_func_int16_t_s_u((p_27 >= ((safe_lshift_func_int8_t_s_s(((*l_530) , (safe_add_func_int8_t_s_s((0x48 | (+(safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((+(safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_297, 2)), ((safe_rshift_func_uint8_t_u_s(((((((safe_rshift_func_uint8_t_u_s(255U, 0)) == (p_27 == p_27)) <= 0U) | (*l_530)) || g_294) | g_87), 2)) , g_521))), 1U))) ^ (*l_531)), 0xA6)), p_27)))), 0x54))), 6)) || (-5))), 1)))) || 1) & g_297) >= (-1)) , l_563) != g_564) ^ 0xE552FFEF), 0)) , (*l_530)) , p_27));
        (*p_25) = (9 >= (**g_155));
        for (g_521 = 0; (g_521 > (-29)); g_521 = safe_sub_func_int8_t_s_s(g_521, 8))
        {
            int32_t l_593 = 1;
            for (g_32 = 1; (g_32 <= (-26)); g_32 = safe_sub_func_uint8_t_u_u(g_32, 7))
            {
                int16_t l_574 = (-6);
                (*p_25) &= (safe_div_func_uint8_t_u_u(0xC0, (248U ^ ((((safe_lshift_func_int16_t_s_u((4294967291U > ((*l_530) <= l_574)), 14)) & (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((+(((0xB7C3 && ((safe_sub_func_uint32_t_u_u((*l_530), (9 >= ((safe_div_func_int16_t_s_s(p_27, p_27)) <= 0xB7)))) , p_27)) ^ p_27) && 0x51)), 1U)), (*l_530)))) , (*g_155)) != (void*)0))));
            }
            l_593 |= (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_102 ^ ((*l_530) || 5)), ((safe_rshift_func_uint16_t_u_u(g_294, 5)) , g_521))), (((((safe_div_func_int8_t_s_s(((((*g_564) != l_592) , 0x0E8B8BF4) != p_27), 0xDD)) ^ 0x2492) == g_9) || g_477) | g_32)));
        }
    }
    else
    {
        uint32_t l_606 = 1U;
        int32_t l_618 = 5;
        int32_t l_629 = (-1);
        int32_t l_650 = 0x9BF46510;
        int32_t l_750 = 0xD24F352C;
        int32_t l_782 = 0xA01B54EB;
        int16_t l_820 = (-8);
        for (g_523 = 0; (g_523 >= (-29)); g_523 = safe_sub_func_int16_t_s_s(g_523, 3))
        {
            int32_t ****l_602 = &g_565;
            int32_t l_605 = 1;
            int16_t l_607 = 4;
            int32_t l_671 = (-9);
            int32_t l_743 = (-7);
            int32_t l_818 = 0x80C13886;
            uint32_t l_833 = 0xD8EA6DC8;
            if ((g_523 >= (((safe_lshift_func_uint8_t_u_s(((void*)0 == l_530), (((p_27 == (safe_div_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((l_602 == l_603), ((g_123 & (~((&g_565 == l_603) >= 2U))) , (****l_603)))) , (*l_530)) >= (****l_602)), 0x1E64))) || l_605) , 0x68))) ^ l_606) >= l_607)))
            {
                int32_t *l_608 = &g_123;
                int32_t *l_609 = &g_521;
                int32_t *l_610 = &g_123;
                int32_t *l_611 = &g_102;
                int32_t *l_612 = &g_102;
                int32_t *l_613 = (void*)0;
                int32_t *l_614 = (void*)0;
                int32_t *l_615 = (void*)0;
                int32_t *l_616 = &g_102;
                int32_t *l_617 = &g_123;
                int32_t *l_619 = &l_618;
                int32_t *l_620 = &g_123;
                int32_t *l_621 = &l_618;
                int32_t *l_622 = &g_123;
                int32_t *l_623 = &g_32;
                int32_t *l_624 = &g_521;
                int32_t *l_625 = &g_32;
                int32_t *l_626 = &g_521;
                int32_t *l_627 = &g_123;
                int32_t *l_628 = &g_521;
                int32_t *l_630 = &l_629;
                int32_t *l_631 = &g_32;
                int32_t *l_632 = &g_84;
                int32_t *l_633 = (void*)0;
                int32_t *l_634 = &g_102;
                int32_t *l_635 = &g_84;
                int32_t *l_636 = &g_521;
                int32_t *l_638 = &g_123;
                int32_t *l_639 = (void*)0;
                int32_t *l_640 = &g_521;
                int32_t *l_641 = &l_605;
                int32_t *l_642 = &l_618;
                int32_t *l_643 = (void*)0;
                int32_t *l_644 = &l_629;
                int32_t *l_645 = (void*)0;
                int32_t *l_646 = &l_637;
                int32_t *l_648 = &l_605;
                int32_t *l_649 = &l_637;
                int32_t *l_651 = &g_102;
                int32_t *l_652 = &g_521;
                int32_t *l_653 = &l_618;
                int32_t *l_654 = &g_123;
                int32_t *l_655 = &l_647;
                int32_t *l_656 = &l_650;
                int32_t *l_657 = (void*)0;
                int32_t *l_658 = &l_605;
                int32_t l_659 = 0x74E30E53;
                int32_t *l_660 = &g_32;
                int32_t *l_661 = &l_659;
                int32_t *l_665 = &l_659;
                int32_t *l_666 = &l_663;
                int32_t *l_667 = &l_647;
                int32_t *l_668 = &l_629;
                int32_t *l_669 = &l_605;
                int32_t *l_670 = &g_84;
                int32_t *l_672 = &l_662;
                int32_t *l_673 = &g_32;
                (***l_603) = (***l_603);
                if ((*p_25))
                    break;
                --g_674;
            }
            else
            {
                int32_t *l_677 = &l_650;
                int32_t *l_678 = &l_662;
                int32_t *l_679 = &g_123;
                int32_t *l_680 = (void*)0;
                int32_t *l_681 = &l_664;
                int32_t *l_682 = (void*)0;
                int32_t *l_683 = (void*)0;
                int32_t *l_684 = &l_637;
                int32_t *l_685 = &l_637;
                int32_t *l_686 = (void*)0;
                int32_t *l_687 = (void*)0;
                int32_t *l_688 = (void*)0;
                int32_t *l_689 = &l_629;
                int32_t *l_690 = &g_123;
                int32_t *l_691 = &l_618;
                int32_t *l_692 = &l_605;
                int32_t *l_693 = &l_662;
                int32_t *l_694 = &g_84;
                int32_t *l_695 = &g_102;
                int32_t *l_696 = (void*)0;
                int32_t *l_697 = &g_32;
                int32_t *l_698 = &l_605;
                int32_t *l_699 = &g_32;
                int32_t *l_700 = &l_663;
                int32_t *l_701 = &l_605;
                int32_t *l_702 = (void*)0;
                int32_t *l_703 = &l_663;
                int32_t *l_704 = &l_629;
                int32_t *l_705 = &l_664;
                int32_t *l_706 = &g_32;
                int32_t *l_707 = (void*)0;
                int32_t *l_708 = &l_605;
                int32_t *l_709 = (void*)0;
                int32_t *l_710 = &l_647;
                int32_t *l_711 = &l_618;
                int32_t *l_712 = &l_647;
                int32_t *l_713 = &l_647;
                int32_t *l_714 = &l_637;
                int32_t *l_715 = (void*)0;
                int32_t *l_716 = &l_650;
                int32_t *l_717 = &l_663;
                int32_t *l_718 = &l_605;
                int32_t *l_719 = &l_647;
                int32_t *l_720 = &l_637;
                int32_t *l_721 = (void*)0;
                int32_t *l_722 = &l_662;
                int32_t *l_723 = &l_605;
                int32_t *l_724 = &l_618;
                int32_t *l_725 = &g_102;
                int32_t *l_726 = &l_662;
                int32_t *l_727 = &l_662;
                int32_t *l_728 = &l_605;
                int32_t *l_729 = &l_605;
                int32_t *l_730 = &l_671;
                int32_t *l_731 = (void*)0;
                int32_t *l_732 = &l_663;
                int32_t *l_733 = &l_671;
                int32_t *l_734 = &l_663;
                int32_t *l_735 = &g_102;
                int32_t *l_736 = &l_664;
                int32_t *l_737 = &l_647;
                int32_t *l_738 = (void*)0;
                int32_t *l_739 = &g_521;
                int32_t *l_740 = &l_663;
                int32_t *l_741 = &l_637;
                int32_t *l_742 = &l_605;
                int32_t *l_744 = &l_743;
                int32_t *l_745 = (void*)0;
                int32_t *l_746 = &l_663;
                int32_t *l_747 = &l_618;
                int32_t *l_748 = &l_671;
                int32_t *l_749 = (void*)0;
                int32_t *l_751 = &l_750;
                int32_t *l_752 = &l_750;
                int32_t *l_753 = &l_671;
                int32_t *l_754 = &g_32;
                int32_t *l_755 = &l_671;
                int32_t *l_756 = &l_605;
                int32_t *l_757 = &g_32;
                int32_t *l_758 = (void*)0;
                int32_t *l_759 = (void*)0;
                int32_t *l_760 = &l_743;
                int32_t *l_761 = &l_743;
                int32_t *l_762 = &l_671;
                int32_t *l_763 = &g_102;
                int32_t *l_764 = &l_663;
                int32_t *l_766 = (void*)0;
                int32_t *l_767 = (void*)0;
                int32_t *l_768 = &g_521;
                int32_t *l_769 = &g_521;
                int32_t *l_771 = &g_123;
                int32_t *l_772 = (void*)0;
                int32_t *l_773 = (void*)0;
                int32_t *l_774 = &g_84;
                int32_t *l_775 = (void*)0;
                int32_t *l_776 = &g_770;
                int32_t *l_777 = &l_647;
                int32_t l_778 = (-6);
                int32_t *l_779 = (void*)0;
                int32_t *l_780 = &l_778;
                int32_t *l_781 = &g_84;
                int32_t *l_783 = &g_123;
                int32_t *l_784 = &l_782;
                int32_t *l_785 = &l_743;
                int32_t *l_786 = &l_782;
                (***l_603) = (**g_565);
                --g_787;
                for (l_782 = (-6); (l_782 == 2); l_782 = safe_add_func_int32_t_s_s(l_782, 3))
                {
                    int16_t l_819 = 0x6C90;
                    int32_t ****l_828 = &g_565;
                    if ((safe_div_func_int16_t_s_s(p_27, (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_521, 4)), ((((safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s((p_27 , (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u((p_27 & ((***g_565) , ((safe_add_func_uint32_t_u_u(((((safe_div_func_uint8_t_u_u(g_102, (((safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((g_765 != p_27), (safe_div_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u((p_27 != 0))) | p_27) <= (-5)), p_27)))), 0xA9BD7BBC)) , p_25) != (**g_565)), 0x6E)) && 65532U) , g_123))) >= g_84) , l_818) & p_27), l_819)) ^ g_102))), 10)) , p_27) > (-2)), 4))), 0x3D)))) & l_606) || (****l_602)) && 1))))))
                    {
                        int8_t l_827 = 0x4D;
                        (*l_722) = ((l_820 != (*l_701)) <= (safe_sub_func_int8_t_s_s(p_27, ((((*g_155) != &l_778) > ((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((((l_827 , (((l_602 == l_828) & ((((safe_unary_minus_func_int32_t_s(((*p_25) >= 0x2BC1A5B9))) , (****l_603)) != 1) | p_27)) , l_827)) || (****l_828)) < l_782), 0xA3)), g_102)) , 0x2FBBF1C5)) , p_27))));
                    }
                    else
                    {
                        uint32_t l_830 = 0xE3DE9200;
                        p_25 = p_25;
                        ++l_830;
                    }
                }
                ++l_833;
            }
            (*l_530) |= (****g_564);
        }
    }
    return (*l_530);
}
static int32_t * func_28(int32_t * p_29)
{
    int8_t l_35 = 0;
    int32_t *l_39 = &g_32;
    int32_t *l_520 = &g_521;
    (*g_31) |= (g_31 != (void*)0);
    (*l_520) ^= (safe_sub_func_uint16_t_u_u(l_35, func_36(l_39, (((func_40((*l_39), func_45(g_9), (g_32 == 1), (safe_div_func_uint32_t_u_u(1U, 0x4FBAEB33))) == l_35) == 1) != l_35))));
    return (*g_155);
}
static int16_t func_36(int32_t * p_37, int32_t p_38)
{
    uint32_t l_327 = 0x9024B7AE;
    int32_t **l_332 = &g_31;
    int32_t l_382 = 0x9E957A56;
    int32_t l_413 = 0x7CB9A90D;
    int32_t l_441 = 0x7DDB6465;
    int32_t l_470 = 0x912AE39D;
    int32_t l_476 = 0xAB3E2582;
    uint8_t l_507 = 0x7F;
    int8_t l_519 = 0x17;
    for (g_32 = 0; (g_32 <= (-17)); g_32--)
    {
        uint8_t l_319 = 4U;
        int32_t l_364 = 0;
        int32_t l_372 = 0x60D31FF2;
        int32_t l_400 = 0x04132805;
        int32_t l_438 = 0x04CFCC2D;
        int32_t l_447 = (-1);
        int32_t l_451 = 0x8B6DCFAA;
        uint32_t l_518 = 0U;
        for (g_297 = 0; (g_297 > 30); ++g_297)
        {
            int8_t l_306 = 0x7A;
            int32_t *l_309 = &g_102;
            for (g_294 = (-2); (g_294 < 5); g_294++)
            {
                int32_t *l_307 = &g_123;
                (*l_307) &= l_306;
            }
            (*l_309) = ((~l_306) && 0x0B29F1C3);
        }
        if (((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((((!l_319) , &g_31) != (void*)0) > (((((*g_155) == (*g_155)) ^ ((safe_rshift_func_uint8_t_u_u(((-5) & (((safe_unary_minus_func_uint32_t_u((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(l_327, g_9)) >= ((safe_lshift_func_uint8_t_u_u(p_38, p_38)) == p_38)), p_38)) > g_297) || g_297))) | p_38) || l_319)), 1)) & g_84)) != g_32) > (**g_155))), 5)) , g_123), (-1))), 5)), (*g_31))) , 0x201CB5AC))
        {
            uint32_t l_333 = 4294967291U;
            int32_t *l_336 = &g_123;
            (*g_155) = func_47(((l_319 , p_38) || ((g_297 , (((p_38 && (((safe_lshift_func_uint16_t_u_u(l_319, 14)) , 0xBE17463E) >= g_297)) , ((void*)0 == l_332)) , g_32)) == 0x95)), p_38, g_294, p_38);
            l_333 &= 0x07A8E80D;
            (*l_336) ^= (safe_lshift_func_uint16_t_u_u(g_102, g_84));
        }
        else
        {
            int32_t *l_343 = &g_84;
            int32_t *l_344 = (void*)0;
            int32_t *l_345 = &g_102;
            int32_t *l_346 = &g_123;
            int32_t *l_347 = &g_123;
            int32_t *l_348 = &g_84;
            int32_t l_349 = 0x493796DF;
            int32_t *l_350 = &g_123;
            int32_t *l_351 = &g_123;
            int32_t *l_352 = &g_102;
            int32_t *l_353 = &g_123;
            int32_t *l_354 = &l_349;
            int32_t *l_355 = &l_349;
            int32_t *l_356 = &g_123;
            int32_t *l_357 = &g_102;
            int32_t *l_358 = &g_102;
            int32_t *l_359 = (void*)0;
            int32_t *l_360 = &g_84;
            int32_t l_361 = (-4);
            int32_t *l_362 = &l_349;
            int32_t *l_363 = &g_102;
            int32_t *l_365 = &g_123;
            int32_t *l_366 = &g_123;
            int32_t *l_367 = &g_84;
            int32_t *l_368 = &g_123;
            int32_t *l_369 = &l_361;
            int32_t *l_370 = &g_123;
            int32_t *l_371 = &l_349;
            int32_t *l_373 = (void*)0;
            int32_t *l_374 = &l_361;
            int32_t *l_375 = &g_102;
            int32_t l_376 = 0xD36FC477;
            int32_t l_377 = 0x135FD466;
            int32_t *l_378 = (void*)0;
            int32_t *l_379 = &l_377;
            int32_t *l_380 = &g_84;
            int32_t l_381 = 0xB8EC8C7D;
            int32_t *l_383 = &l_382;
            int32_t *l_384 = &l_377;
            int32_t *l_385 = &l_364;
            int32_t *l_386 = &l_349;
            int32_t *l_387 = &l_376;
            int32_t *l_388 = &l_349;
            int32_t *l_389 = &l_361;
            int32_t *l_390 = &l_382;
            int32_t *l_391 = &l_361;
            int32_t *l_392 = &l_361;
            int32_t *l_393 = &g_84;
            int32_t *l_394 = &g_123;
            int32_t l_395 = 0x28AB4817;
            int32_t *l_396 = &l_364;
            int32_t *l_397 = &l_361;
            int32_t *l_398 = &l_376;
            int32_t *l_399 = &g_102;
            int32_t *l_401 = &l_349;
            int32_t *l_402 = &g_102;
            int32_t *l_403 = &l_364;
            int32_t *l_404 = &g_123;
            int32_t *l_405 = &l_381;
            int32_t *l_406 = (void*)0;
            int32_t *l_407 = &l_377;
            int32_t *l_408 = (void*)0;
            int32_t *l_409 = &l_361;
            int32_t *l_410 = (void*)0;
            int32_t *l_411 = &l_400;
            int32_t *l_412 = &g_84;
            int32_t *l_414 = (void*)0;
            int32_t *l_415 = &l_361;
            int32_t *l_416 = &g_102;
            int32_t *l_417 = &g_84;
            int32_t *l_418 = &l_400;
            int32_t *l_419 = (void*)0;
            int32_t *l_420 = &l_361;
            int32_t *l_421 = (void*)0;
            int32_t *l_422 = &l_372;
            int32_t *l_423 = &l_395;
            int32_t *l_424 = &g_102;
            int32_t l_425 = 0xFD678DBA;
            int32_t *l_426 = (void*)0;
            int32_t *l_427 = (void*)0;
            int32_t *l_428 = &l_372;
            int32_t *l_429 = (void*)0;
            int32_t *l_430 = &l_361;
            int32_t *l_431 = &l_372;
            int32_t *l_432 = (void*)0;
            int32_t *l_433 = &l_349;
            int32_t *l_434 = &l_361;
            int32_t *l_435 = &l_400;
            int32_t *l_436 = &g_102;
            int32_t *l_437 = &g_102;
            int32_t *l_439 = &l_376;
            int32_t *l_440 = &l_381;
            int32_t *l_442 = &l_349;
            int32_t *l_443 = &g_102;
            int32_t *l_444 = (void*)0;
            int32_t *l_445 = &l_425;
            int32_t *l_446 = &l_441;
            int32_t *l_448 = (void*)0;
            int32_t *l_449 = &l_395;
            int32_t *l_450 = &g_102;
            int32_t *l_452 = (void*)0;
            int32_t *l_453 = (void*)0;
            int32_t *l_454 = &l_364;
            int32_t *l_455 = &l_413;
            int32_t *l_456 = &g_84;
            int32_t *l_457 = &l_447;
            int32_t *l_458 = &l_395;
            int32_t *l_459 = &l_451;
            int32_t l_460 = 0;
            int32_t *l_461 = &l_376;
            int32_t *l_462 = &l_451;
            int32_t *l_463 = &g_84;
            int32_t l_464 = (-3);
            int32_t *l_465 = &l_364;
            int32_t *l_466 = (void*)0;
            int32_t *l_467 = &l_425;
            int32_t *l_468 = (void*)0;
            int32_t *l_469 = (void*)0;
            int32_t *l_471 = &l_395;
            int32_t *l_472 = &l_377;
            int32_t *l_473 = &l_441;
            int32_t *l_474 = &g_102;
            int32_t *l_475 = &l_441;
            g_84 &= (g_102 & (+(safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((~(l_319 || g_32)) > g_102), l_319)), 1))));
            (*g_155) = l_343;
            ++g_477;
            for (p_38 = 12; (p_38 != (-10)); p_38 = safe_sub_func_int16_t_s_s(p_38, 2))
            {
                uint8_t l_488 = 0xC0;
                int32_t **l_492 = &l_353;
                if ((((safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(l_488, g_84)) , ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((*g_155) != (*g_155)))), (l_488 & ((void*)0 == l_492)))) == ((+(safe_sub_func_uint8_t_u_u((((((&p_37 == (void*)0) ^ 0x9079) >= 8) , p_38) | 0xFBBC), g_9))) && 0xB2D17970))), 4294967295U)) >= g_123), p_38)) < 2U) >= p_38))
                {
                    uint32_t l_517 = 0x38E61717;
                    (*l_391) = (~(((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((((*p_37) , (safe_rshift_func_int8_t_s_u((p_38 > (*l_374)), ((safe_lshift_func_int16_t_s_s((p_38 , p_38), ((l_507 <= (0xDDEA7871 > (safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((p_38 || (((&l_462 == (void*)0) || p_38) > g_84)), g_102)) ^ 0), 4)))) <= (**l_492)))) , l_372)))) && p_38), (*p_37))) ^ g_9), (**g_155))), (**g_155))) == 0) && 5));
                    for (l_372 = (-5); (l_372 <= (-13)); --l_372)
                    {
                        int32_t ****l_514 = (void*)0;
                        int32_t ***l_516 = &l_332;
                        int32_t ****l_515 = &l_516;
                        (*l_515) = &l_492;
                        (*l_433) ^= ((void*)0 == (*g_155));
                        if ((**l_492))
                            continue;
                    }
                    (*l_343) = l_517;
                }
                else
                {
                    return l_518;
                }
                p_37 = &p_38;
                (*l_360) = ((*p_37) >= 4294967295U);
            }
        }
    }
    return l_519;
}
static int16_t func_40(int16_t p_41, int32_t * p_42, int8_t p_43, uint8_t p_44)
{
    int32_t l_136 = 0xEEA40FDB;
    int32_t *l_168 = &g_32;
    int32_t *l_218 = &g_123;
    int32_t *l_219 = &g_102;
    int32_t *l_220 = &g_32;
    int32_t *l_221 = &g_32;
    int32_t *l_222 = &g_102;
    int32_t *l_223 = &g_102;
    int32_t *l_224 = &g_32;
    int32_t *l_225 = (void*)0;
    int32_t *l_226 = &g_32;
    int32_t *l_227 = &g_102;
    int32_t *l_228 = &g_84;
    int32_t *l_229 = &g_102;
    int32_t *l_230 = &g_84;
    int32_t *l_231 = (void*)0;
    int32_t *l_232 = &g_32;
    int32_t *l_233 = (void*)0;
    int32_t l_234 = 0xE436573C;
    int32_t l_235 = 0xF4101603;
    int32_t *l_236 = &g_32;
    int32_t *l_237 = &l_235;
    int32_t *l_238 = &l_235;
    int32_t *l_239 = (void*)0;
    int32_t *l_240 = &l_235;
    int32_t *l_241 = (void*)0;
    int32_t *l_242 = &l_234;
    int32_t *l_243 = &l_234;
    int32_t *l_244 = &g_32;
    int32_t *l_245 = (void*)0;
    int32_t *l_246 = &l_234;
    int32_t *l_247 = &g_84;
    int32_t *l_248 = &g_102;
    int32_t *l_249 = &g_84;
    int32_t *l_250 = &g_32;
    int32_t *l_251 = &l_234;
    int32_t *l_252 = &g_123;
    int32_t *l_253 = (void*)0;
    int32_t *l_254 = &g_102;
    int32_t *l_255 = &g_102;
    int32_t *l_256 = &g_102;
    int32_t *l_257 = &l_234;
    int32_t *l_258 = &l_234;
    int32_t *l_259 = &l_235;
    int32_t *l_260 = &g_32;
    int32_t *l_261 = (void*)0;
    int32_t *l_262 = &g_32;
    int32_t l_263 = 0xF440EA31;
    int32_t l_264 = 0x8831FD11;
    int32_t *l_265 = &g_32;
    int32_t *l_266 = &g_102;
    int32_t *l_267 = &l_234;
    int32_t *l_268 = &g_84;
    int32_t *l_269 = &g_32;
    int32_t *l_270 = &g_123;
    int32_t *l_271 = &l_263;
    int32_t *l_272 = (void*)0;
    int32_t *l_273 = &g_32;
    int32_t *l_274 = &g_32;
    int32_t *l_275 = &l_264;
    int32_t *l_276 = &l_264;
    int32_t *l_277 = (void*)0;
    int32_t *l_278 = &l_263;
    int32_t *l_279 = &l_264;
    int32_t *l_280 = &g_84;
    int32_t *l_281 = &g_123;
    int32_t *l_282 = &g_84;
    int32_t *l_283 = &l_234;
    int32_t *l_284 = &l_234;
    int32_t l_285 = (-2);
    int32_t *l_286 = (void*)0;
    int32_t *l_287 = &l_234;
    int32_t *l_288 = &g_102;
    int32_t *l_289 = &l_235;
    int32_t *l_290 = &g_32;
    int32_t *l_291 = &g_102;
    int32_t *l_292 = &l_263;
    int32_t *l_293 = &g_32;
    int32_t *l_295 = (void*)0;
    int32_t *l_296 = &l_235;
    for (g_123 = (-29); (g_123 < (-15)); g_123 = safe_add_func_int8_t_s_s(g_123, 2))
    {
        int32_t *l_128 = &g_84;
        int32_t l_203 = 0x27D408D0;
    }
    (*g_31) |= (-8);
    g_297++;
    return (*l_219);
}
static int32_t * func_45(int8_t p_46)
{
    uint32_t l_65 = 0x1450187E;
    int32_t **l_106 = &g_31;
    int32_t *l_107 = &g_102;
    int8_t l_120 = (-7);
    int32_t l_121 = 0x587BB5B2;
    int32_t *l_122 = &g_123;
    (*l_106) = func_47(((p_46 , (((((-1) || 65527U) >= (((safe_lshift_func_uint8_t_u_s(0xCB, (safe_lshift_func_uint16_t_u_s(p_46, (safe_sub_func_int8_t_s_s(g_9, (((((safe_div_func_uint32_t_u_u((g_32 ^ (safe_rshift_func_uint16_t_u_u((~((void*)0 == &g_32)), 5))), p_46)) , p_46) | (*g_31)) != g_9) < p_46))))))) || 0x1F20) < 0x515E)) & g_32) & p_46)) > (-6)), l_65, g_9, g_9);
    (*l_107) = (**l_106);
    (*l_122) |= ((safe_mod_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(((void*)0 == &g_31), ((*l_107) | ((**l_106) , (p_46 < ((p_46 | ((((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((~(0xE063A29C & (((1U & ((((safe_div_func_uint16_t_u_u((p_46 == p_46), l_120)) || p_46) , g_84) < g_84)) , 0x6B) ^ 0x9F))))), p_46)) > l_121) , (void*)0) == &g_31)) > (**l_106))))))) >= g_87) , (*l_107)), g_32)) & p_46);
    return &g_84;
}
static int32_t * func_47(uint16_t p_48, uint16_t p_49, uint16_t p_50, int16_t p_51)
{
    uint8_t l_66 = 255U;
    int32_t *l_82 = &g_32;
    int32_t *l_83 = &g_84;
    (*l_83) |= (((l_66 & (~l_66)) == (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((p_50 , ((!(safe_rshift_func_uint16_t_u_s(0U, 15))) > (((safe_add_func_uint32_t_u_u(((&g_32 == (void*)0) , (safe_div_func_int16_t_s_s((g_9 , (((((((((safe_mod_func_uint32_t_u_u(((~((void*)0 == l_82)) <= p_51), 0xCC13236C)) > g_32) && 0x5E) , (*l_82)) | 0x1818) <= 1) , g_9) , (-9)) != (*l_82))), 0x1EFC))), g_32)) , 5U) == p_48))), p_49)), 14))) , (-1));
    for (g_84 = 29; (g_84 != (-23)); g_84 = safe_sub_func_int8_t_s_s(g_84, 1))
    {
        --g_87;
        g_31 = (void*)0;
        return &g_32;
    }
    (*l_83) ^= p_49;
    for (l_66 = 0; (l_66 != 8); l_66 = safe_add_func_uint32_t_u_u(l_66, 8))
    {
        uint32_t l_94 = 4294967295U;
        for (g_87 = 5; (g_87 < 59); g_87 = safe_add_func_int8_t_s_s(g_87, 1))
        {
            int32_t *l_101 = &g_102;
            (*l_101) ^= ((p_48 , ((l_94 || (g_9 | (((p_49 && g_84) <= l_94) >= (safe_rshift_func_uint16_t_u_s(0x949E, ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((&g_32 != (void*)0) <= 1), g_84)), p_51)) == 4294967295U)))))) > p_50)) , l_94);
        }
        (*l_83) = (g_32 < (safe_sub_func_int8_t_s_s(((void*)0 == l_82), (+g_87))));
    }
    return &g_32;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_9;
    csmith_sink_ = g_32;
    csmith_sink_ = g_84;
    csmith_sink_ = g_87;
    csmith_sink_ = g_102;
    csmith_sink_ = g_123;
    csmith_sink_ = g_294;
    csmith_sink_ = g_297;
    csmith_sink_ = g_477;
    csmith_sink_ = g_521;
    csmith_sink_ = g_523;
    csmith_sink_ = g_674;
    csmith_sink_ = g_765;
    csmith_sink_ = g_770;
    csmith_sink_ = g_787;
    csmith_sink_ = g_1074;
    csmith_sink_ = g_1100;
    platform_main_end(0,0);
    return 0;
}
