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
struct S0 {
   uint16_t f0;
   uint8_t f1;
   int32_t f2;
   int16_t f3;
   uint32_t f4;
};
static int32_t g_7 = (-1L);
static int8_t g_8 = 0x7DL;
static uint16_t g_9 = 0xDBDAL;
static int32_t g_65 = 0xB11082E7L;
static uint16_t g_77 = 0UL;
static uint8_t g_78 = 0x81L;
static uint16_t g_79 = 0xB213L;
static struct S0 g_87 = {0x16C3L,0x14L,-1L,0x29AFL,0xAE3B8AEAL};
static int32_t g_95 = 0xA3EDB7DEL;
static int16_t g_116 = 4L;
static int16_t g_120 = (-7L);
static uint32_t g_121 = 0UL;
static int32_t g_141 = 1L;
static uint16_t g_144 = 65531UL;
static int8_t g_236 = 0L;
static uint16_t g_237 = 0UL;
static int16_t g_358 = 0x3D99L;
static int32_t g_396 = 0L;
static uint8_t g_490 = 0x2DL;
static int8_t g_493 = 0x2FL;
static struct S0 g_603 = {65535UL,0xC2L,7L,0xD853L,18446744073709551615UL};
static int16_t g_690 = 8L;
static uint8_t g_748 = 0xD1L;
static uint32_t g_818 = 18446744073709551615UL;
static uint8_t g_914 = 255UL;
static uint8_t func_1(void);
inline static struct S0 func_12(uint32_t p_13, uint32_t p_14, int32_t p_15);
inline static int32_t func_16(uint16_t p_17, int32_t p_18, uint32_t p_19);
inline static int32_t func_24(uint16_t p_25, uint16_t p_26, int32_t p_27);
static uint16_t func_30(int32_t p_31);
inline static uint32_t func_33(uint16_t p_34, int32_t p_35, int32_t p_36, uint8_t p_37);
inline static int8_t func_38(int32_t p_39);
inline static uint32_t func_43(int32_t p_44, int16_t p_45, uint8_t p_46, uint8_t p_47, int32_t p_48);
inline static uint8_t func_54(int32_t p_55, uint16_t p_56, int16_t p_57, uint8_t p_58);
static int32_t func_59(uint16_t p_60, int8_t p_61, int8_t p_62);
static uint8_t func_1(void)
{
    int32_t l_2 = (-10L);
    int32_t l_3 = 4L;
    int32_t l_4 = 0L;
    int32_t l_5 = 0L;
    int32_t l_6 = 0x7AB3921DL;
    uint32_t l_755 = 0x75104338L;
    int32_t l_756 = 3L;
    int32_t l_784 = 0L;
    uint32_t l_892 = 3UL;
    struct S0 l_917 = {0UL,0xCBL,0L,0x04D5L,0x46057B97L};
    ++g_9;
    l_917 = func_12((func_16(((((safe_rshift_func_uint8_t_u_u((l_784 &= (safe_mod_func_int32_t_s_s(func_24((l_3 = ((l_6 < (g_9 ^ (1UL ^ l_4))) , ((safe_sub_func_int32_t_s_s(l_6, ((l_5 |= (func_30(l_2) == ((((g_690 || (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_690, l_755)), l_6))) <= l_6) , 0x6AL) ^ l_2))) & g_690))) , 0x7AABL))), l_756, g_690), g_7))), g_7)) >= 65530UL) != l_755) < 1UL), g_690, l_755) > l_756), g_818, l_892);
    return g_77;
}
inline static struct S0 func_12(uint32_t p_13, uint32_t p_14, int32_t p_15)
{
    uint16_t l_899 = 1UL;
    int32_t l_906 = 0L;
    uint16_t l_913 = 0xFF44L;
    int32_t l_915 = 4L;
    int32_t l_916 = (-10L);
    l_916 &= (l_915 = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_236, 4)), ((safe_rshift_func_int16_t_s_u(g_603.f2, l_899)) || (g_914 = (g_121 = (p_15 ^ ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_899, ((((((((safe_mod_func_int32_t_s_s((l_906 ^= p_15), (0xBBF3L | (g_77 &= ((safe_sub_func_int8_t_s_s((g_748 > (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_899, g_490)), 2)) <= 6L) ^ (-1L))), g_748)) || 0xCFD7L))))) , l_906) < 0xC4L) != p_15) && g_603.f1) || g_87.f1) > l_899) ^ 0x3BF149A4L))), l_899)) , l_913))))))));
    return g_87;
}
inline static int32_t func_16(uint16_t p_17, int32_t p_18, uint32_t p_19)
{
    uint16_t l_806 = 0xF905L;
    uint32_t l_830 = 4294967287UL;
    int32_t l_831 = 1L;
    uint32_t l_864 = 4294967291UL;
    struct S0 l_891 = {65530UL,0xB2L,0x21A240EDL,1L,0xBAF0B0EBL};
    for (g_690 = 0; (g_690 <= 20); g_690 = safe_add_func_uint32_t_u_u(g_690, 3))
    {
        uint8_t l_789 = 0x06L;
        int32_t l_790 = 0x92E6E71DL;
        int32_t l_808 = 1L;
        int32_t l_810 = 0xB7B0FEFBL;
        int8_t l_890 = 0x33L;
        for (g_144 = 0; (g_144 > 24); g_144 = safe_add_func_uint8_t_u_u(g_144, 4))
        {
            int32_t l_797 = (-1L);
            int32_t l_809 = 0x7DD741E1L;
            l_790 = l_789;
            l_810 = (l_809 |= (safe_lshift_func_uint16_t_u_s((l_808 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_797, (((safe_lshift_func_uint16_t_u_s(g_9, 14)) ^ (safe_rshift_func_int16_t_s_s(((l_790 |= (safe_sub_func_uint8_t_u_u(l_797, ((0x8AB0855CL && ((g_121 |= (safe_mod_func_int16_t_s_s(((g_603.f1 >= l_806) | p_17), p_19))) ^ ((((!0xD923L) || 2L) , p_17) | l_806))) & 2L)))) <= 2L), 4))) , g_493))), 2))), l_797)));
            if (g_78)
                break;
        }
        for (g_7 = (-9); (g_7 > (-11)); g_7 = safe_sub_func_int16_t_s_s(g_7, 2))
        {
            int32_t l_829 = 0x0C2732C7L;
            uint8_t l_855 = 0x84L;
            int32_t l_856 = 1L;
            int32_t l_857 = 0x019AF0EFL;
            l_831 = ((!((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((p_19 = g_818), g_87.f3)) ^ (-3L)), 7)) && (safe_sub_func_int16_t_s_s(((g_237 = (p_17 = g_95)) != ((safe_mod_func_int32_t_s_s(p_19, (safe_mod_func_int16_t_s_s((g_116 &= (p_19 || (safe_mod_func_int32_t_s_s(((0xF88AL != (l_790 = (safe_add_func_int8_t_s_s((-1L), l_829)))) , g_748), 0xD34B697FL)))), (-7L))))) & l_830)), p_18)))) > l_830);
            l_857 &= ((l_790 = (safe_sub_func_uint8_t_u_u(p_18, ((l_829 = (safe_lshift_func_uint16_t_u_s(((((safe_mod_func_int16_t_s_s(g_87.f3, (safe_sub_func_int16_t_s_s(l_829, (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((++g_79), ((safe_mod_func_uint16_t_u_u(((0xEED16EEAL >= (((l_856 = (safe_add_func_uint8_t_u_u((p_17 > (g_87.f0 != (((!(((((l_830 | (((0UL | l_829) > l_855) > 0x94CC8FBDL)) , g_603) , g_7) , 5L) <= p_17)) , g_818) != 0xAFL))), g_7))) <= p_18) < 0x4AL)) != p_18), p_18)) <= 0x11B7L))), p_19)))))) && 0x46903009L) , l_789) || l_790), g_396))) > p_17)))) && g_121);
            if (l_806)
                continue;
            l_790 ^= ((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((((l_789 | (l_864 > l_830)) > g_65) , ((safe_lshift_func_int16_t_s_u((((((+g_77) | (safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(l_808, 65528UL)) > ((0xA1060FE2L || (~(p_17 = (((((5UL ^ g_65) > 0xBC63L) < 0x410A1AE2L) < 2UL) > g_237)))) ^ g_87.f2)) , p_19), g_95))) <= (-6L)) < 1UL) , 1L), g_95)) < 65531UL)) , p_17), g_358)), l_806)), p_19)) == g_121);
        }
        g_396 = (((g_8 = ((g_87.f2 = (safe_lshift_func_uint8_t_u_u(((l_808 = (safe_sub_func_uint32_t_u_u(((p_17 = (p_18 <= ((((safe_mod_func_int32_t_s_s((((((safe_sub_func_uint32_t_u_u(l_831, (((g_87.f1 == (((((((p_19 && (p_17 && 5UL)) < l_831) >= (0x34C6L ^ ((safe_sub_func_uint16_t_u_u((+p_17), g_87.f4)) > p_18))) | 0x7EC2F8CCL) > (-1L)) & 0UL) , 0x58260DB4L)) ^ 0x96L) && g_236))) && g_236) | 0L) < (-1L)) , 0x7D9FCDCEL), g_690)) < l_830) , l_830) ^ p_19))) ^ 0L), g_78))) >= (-5L)), p_19))) , 0x33L)) & l_831) & 0L);
        g_87.f2 = (safe_add_func_int8_t_s_s((l_806 || ((+(g_9 & 0xC7L)) < ((l_808 &= l_789) , (((l_808 && p_19) & (g_603.f0 > (((((g_396 ^= ((safe_unary_minus_func_int16_t_s(g_79)) < (l_808 ^ 0x5CL))) , p_19) & g_141) >= l_890) == l_808))) , g_78)))), p_17));
    }
    l_891 = l_891;
    return l_891.f3;
}
inline static int32_t func_24(uint16_t p_25, uint16_t p_26, int32_t p_27)
{
    uint32_t l_757 = 0UL;
    int32_t l_776 = 0xF1F46B21L;
    int32_t l_777 = 0xC4F46B2EL;
    int32_t l_778 = 0x9ABD4CCEL;
    uint32_t l_779 = 4294967295UL;
    int8_t l_780 = 0x3AL;
    int32_t l_781 = (-4L);
    l_757++;
    l_781 = ((g_87.f4 > ((safe_mod_func_uint16_t_u_u((+(safe_lshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(g_78, p_27)) && ((safe_unary_minus_func_uint8_t_u(g_603.f0)) && (l_757 <= (g_65 ^= ((safe_mod_func_uint16_t_u_u((++p_26), (((l_779 ^= ((l_778 = ((((g_603.f4 < p_27) , 0x2814D498L) , ((safe_add_func_int16_t_s_s((l_777 = ((safe_lshift_func_int8_t_s_u((l_776 = 0x12L), p_25)) ^ 0xC71CL)), g_9)) <= l_757)) , p_25)) & 0x56F0L)) >= 0x32L) && l_780))) != l_757))))), 5))), l_757)) & g_603.f3)) , 0x1781D955L);
    for (g_77 = 0; (g_77 <= 1); g_77 = safe_add_func_uint16_t_u_u(g_77, 2))
    {
        l_776 |= 0L;
    }
    return l_780;
}
static uint16_t func_30(int32_t p_31)
{
    int32_t l_51 = (-10L);
    int32_t l_124 = (-9L);
    struct S0 l_489 = {0x67E8L,0UL,0x3EAD75A2L,0L,0xB79A9950L};
    uint32_t l_646 = 4294967295UL;
    uint32_t l_686 = 6UL;
    int32_t l_734 = 0L;
    uint16_t l_744 = 0xF09EL;
    g_490 &= (!((g_7 != ((func_33((l_51 = (func_38((safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_u(p_31, 4)) || ((((func_43((safe_sub_func_int32_t_s_s(l_51, ((safe_lshift_func_uint16_t_u_u((g_78 &= ((func_54(func_59(l_51, ((((g_9 = 0x65D6L) && (((l_51 || (9L > (((p_31 <= (safe_sub_func_int16_t_s_s(((g_65 ^= 4L) != 0x5DD2L), p_31))) > 0L) , p_31))) || 0x98L) | g_8)) != l_51) & g_8), p_31), l_51, l_51, l_51) != p_31) > g_8)), l_51)) ^ p_31))), p_31, p_31, g_7, g_8) < p_31) >= l_51) && 0x86L) > 4L))))) >= 0x19L)), g_87.f3, l_124, p_31) , l_489) , g_77)) != l_124));
    l_124 ^= (-7L);
    for (g_87.f2 = (-7); (g_87.f2 == (-23)); g_87.f2--)
    {
        uint8_t l_494 = 0x83L;
        struct S0 l_500 = {2UL,0UL,0x5C92E5A9L,-1L,1UL};
        struct S0 l_607 = {0x35A1L,254UL,1L,0xCCE6L,0xAC02156AL};
        uint32_t l_645 = 4294967295UL;
        ++l_494;
        if ((safe_lshift_func_int8_t_s_u(l_489.f1, 0)))
        {
            struct S0 l_499 = {0xE6CBL,255UL,0x15677B58L,0x60A4L,6UL};
            l_500 = l_499;
            return g_120;
        }
        else
        {
            int32_t l_511 = 0xF38A70ACL;
            int32_t l_541 = 1L;
            l_500.f2 |= ((p_31 <= ((g_9 = g_65) != (((safe_sub_func_int32_t_s_s(((l_489.f2 = (l_124 = (((+(safe_add_func_int16_t_s_s(0x0C32L, g_87.f2))) , l_124) != 4294967295UL))) | (p_31 > (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((1UL < (p_31 & g_121)))), p_31)) <= 0x1C66547DL) <= l_511), 1)))), g_493)) && g_144) > g_493))) && g_358);
            p_31 = (l_51 = (!((safe_sub_func_int16_t_s_s((g_141 || (((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(p_31, (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u((p_31 == ((((((safe_add_func_int8_t_s_s(((((safe_unary_minus_func_int16_t_s((l_511 = (((((l_500.f3 , g_396) || ((((safe_rshift_func_uint8_t_u_s(((p_31 != (safe_mod_func_uint32_t_u_u((p_31 > ((g_358 , (safe_add_func_uint16_t_u_u((p_31 , l_494), l_500.f3))) , g_490)), g_493))) & 2UL), g_116)) && 0x9BL) != 4294967295UL) < 0xD7L)) <= p_31) & 3UL) != p_31)))) == g_141) > (-1L)) | l_489.f4), l_541)) | 0xF9BDL) , p_31) , g_396) | 0x0D70L) >= p_31)), g_144)))), 0)))) , 4294967295UL) , 0L), g_87.f2)), 14)) , p_31), l_541)), l_500.f3)) || g_77), g_95)) >= g_121) == l_500.f2)), l_489.f2)) , g_87.f2)));
        }
        l_500.f2 ^= (((+(--g_78)) >= (g_8 || (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((g_490 &= ((safe_unary_minus_func_uint16_t_u(g_120)) != ((((safe_mod_func_int32_t_s_s(((((((((l_494 <= g_236) < ((((0xB7L & p_31) > p_31) && (((safe_add_func_int32_t_s_s(g_236, l_500.f3)) , 0x7208L) == p_31)) < 0xBE76DD2CL)) != l_500.f4) , l_500.f0) > l_489.f1) , 0xFEL) & l_500.f4) , g_9), 0x386950EFL)) != p_31) || g_120) ^ p_31))) <= g_7), g_87.f3)), g_236)))) < 3L);
        if (l_489.f0)
        {
            int16_t l_567 = 8L;
            uint16_t l_578 = 0x37E9L;
            int32_t l_586 = 5L;
            int32_t l_599 = 0xE2B68E3AL;
            uint16_t l_649 = 0xFD21L;
            uint32_t l_662 = 0x4558568AL;
            p_31 = (((safe_sub_func_uint8_t_u_u((((+(safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(g_237, 1)) & (safe_mod_func_int16_t_s_s((((((safe_mod_func_int32_t_s_s((((0x1F9675A4L <= (l_567 = g_141)) <= 0x00L) > 0x3EDCL), p_31)) != (safe_lshift_func_int16_t_s_u(0L, 4))) < ((g_116 = ((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((g_87.f2 > ((-1L) != 0xD939F5B8L)), l_500.f2)), (-6L))), (-1L))) | 0x14A8554CL)) >= 65535UL)) < l_124) && g_7), l_489.f1))), l_578))) , l_567) , 1UL), 0xBEL)) , 0x0730L) < l_578);
            if (((1L >= (safe_unary_minus_func_int32_t_s((g_396 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((((0xAF9DL ^ 8L) ^ (g_9 &= p_31)) ^ (((((p_31 >= (((safe_rshift_func_uint8_t_u_s(((((l_586 &= 1L) & l_489.f4) < ((g_493 = (safe_mod_func_int8_t_s_s((l_599 = (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((++g_237) < ((((+((safe_mod_func_int32_t_s_s(((g_87.f2 && (safe_unary_minus_func_int8_t_s((g_141 != l_489.f4)))) , l_500.f1), 0x09DB3076L)) & l_567)) == l_578) > l_500.f2) | g_396)), p_31)) <= p_31), 0x5DC0L))), p_31))) && g_7)) , g_396), p_31)) && l_578) >= p_31)) ^ 3UL) | 0xCAD40FDCL) < (-1L)) != 0xAC42B420L)) == g_490) , g_77), g_77)), g_87.f0)) >= p_31))))) && g_87.f0))
            {
                struct S0 l_602 = {1UL,1UL,0xE14E4104L,-10L,0x58ADA008L};
                uint32_t l_606 = 18446744073709551614UL;
                uint32_t l_717 = 18446744073709551611UL;
                for (l_500.f3 = 0; (l_500.f3 != 16); l_500.f3++)
                {
                    g_603 = l_602;
                    p_31 = ((g_603.f0 < l_500.f2) , (((-10L) && ((((g_87.f3 = (safe_mod_func_int16_t_s_s((0x7CF4CA57L <= (g_87.f1 & 1L)), g_95))) <= l_602.f1) & (((l_606 |= p_31) >= l_586) >= p_31)) & 0x61375C96L)) <= 1UL));
                    l_607 = (l_489 = g_603);
                    if (l_599)
                        continue;
                }
                for (g_95 = 0; (g_95 != 4); ++g_95)
                {
                    int8_t l_631 = 0xEAL;
                    int32_t l_648 = (-1L);
                    struct S0 l_691 = {0x204AL,0x08L,0x6E0336BBL,0L,0x20B60699L};
                    if (l_602.f1)
                    {
                        uint8_t l_643 = 0UL;
                        int8_t l_644 = 0x67L;
                        int32_t l_647 = 1L;
                        g_65 = g_87.f2;
                        g_65 ^= (l_646 = (((g_144 = (safe_add_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_s(252UL, (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((l_489.f3 , 0x2CEACCE7L) != (safe_add_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s((0x860E1631L < (+l_631)), (((((((((!(((g_120 &= 0xB80AL) > (((((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(((((0x09L >= (p_31 == (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(g_396, 0xF1L)), p_31)), g_603.f2)))) & l_643) , g_78) == 0x0C3FC382L), g_95)) > 0xD9D3L) & p_31), 4)) ^ g_87.f1) , g_8) && g_95) || l_644)) < g_8)) < p_31) && 0x1DL) , l_500.f4) & p_31) , p_31) && 0x0285L) , l_500.f4) | l_607.f3))) > 0xDBCFL) , g_87.f0) >= l_586), l_631)), l_643)) > 0xF81391E3L) | (-1L)) < g_236), g_116))) <= 0UL), l_644)), l_500.f1)), 0xE7L)))) && 0xD5L) < g_116) < 1UL) <= g_77), l_644)) == g_603.f1) == l_645) | 0UL), g_9))) <= (-8L)) && g_95));
                        l_649++;
                        g_603.f2 ^= (-10L);
                    }
                    else
                    {
                        int32_t l_671 = 0x851A363AL;
                        l_500.f2 &= (safe_lshift_func_int16_t_s_s(p_31, (safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_603.f1, (g_116 = p_31))), (safe_sub_func_int32_t_s_s((((7L <= l_662) || (--g_121)) || (safe_add_func_uint16_t_u_u((p_31 ^ (0x6EL <= ((safe_mod_func_uint8_t_u_u(((l_607.f2 != (l_631 <= 65529UL)) , g_7), 250UL)) == p_31))), g_236))), 0xFACD502BL)))), 5))));
                        if (l_671)
                            break;
                        p_31 = (((g_603.f1 , (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((1UL | (safe_rshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((-1L), (((p_31 != (safe_add_func_uint8_t_u_u((l_648 |= (1UL & (l_686 = g_87.f2))), (l_602.f0 | (((g_65 <= (+(((((l_602.f2 = (safe_rshift_func_int16_t_s_s((g_236 < p_31), g_603.f3))) == p_31) && l_631) || 0x16B2L) ^ g_603.f0))) , p_31) & 0xF867L))))) && l_671) || l_602.f4))), p_31)), 0UL)) , 0x73462F29L) | g_690), 2))), 2)), 6))) , p_31) > 0x098DL);
                    }
                    l_489 = l_691;
                    l_691.f2 |= (l_500.f1 > (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_490 = (safe_rshift_func_uint16_t_u_s(g_87.f2, 12))), ((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_144, p_31)), ((l_586 &= ((+((safe_sub_func_uint16_t_u_u(((l_51 = (((((((~1L) , l_567) | (((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_u(((l_717 |= (!(l_489.f2 = g_237))) , l_567), (((safe_mod_func_uint32_t_u_u(((l_124 ^= (g_87.f1 >= l_691.f0)) ^ g_690), g_121)) , g_87.f3) < 65529UL))) ^ l_489.f0) > (-1L)) & l_602.f0) , l_607.f4), 0xFF6EL)), g_65)), 11)) < p_31) <= 247UL) , p_31) , l_602.f1)) < (-1L)) == 1L) <= l_599) == p_31)) != 0UL), 0xCAB7L)) & 0x5936L)) && g_65)) && 0x7CL))) >= 3L))), p_31)), p_31)));
                }
            }
            else
            {
                int32_t l_735 = 0xEAF84AE5L;
                l_735 &= ((safe_sub_func_uint8_t_u_u((((((safe_sub_func_uint8_t_u_u((g_78 = (~(g_603 , (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(g_603.f4, 5)) || l_489.f4), (safe_unary_minus_func_uint8_t_u((g_603.f1 = 0xF7L))))), 4)), g_87.f1))))), 0x53L)) ^ p_31) != l_567) <= ((((l_607.f2 &= p_31) ^ 0x6106L) ^ 0x39L) > p_31)) != l_734), g_603.f2)) || g_87.f1);
            }
        }
        else
        {
            uint16_t l_739 = 0x2FFAL;
            uint16_t l_740 = 65528UL;
            int32_t l_741 = (-1L);
            int32_t l_742 = 0xFC2D84C4L;
            int32_t l_743 = 1L;
            int8_t l_747 = 0xDDL;
            p_31 = ((!(safe_mod_func_int32_t_s_s(l_739, (l_740 , g_493)))) , g_77);
            l_744++;
            g_748++;
        }
    }
    return g_87.f1;
}
inline static uint32_t func_33(uint16_t p_34, int32_t p_35, int32_t p_36, uint8_t p_37)
{
    uint16_t l_125 = 65532UL;
    int32_t l_143 = 1L;
    int8_t l_184 = 0x80L;
    int32_t l_274 = 0xDBD7C481L;
    int8_t l_380 = 0x61L;
    int32_t l_381 = 0x4BD4938FL;
    uint32_t l_430 = 4294967295UL;
    uint16_t l_431 = 0x66E6L;
    uint32_t l_452 = 0xCCA6D61BL;
    int32_t l_465 = 0xA2B8D369L;
    int32_t l_488 = 0L;
    ++l_125;
    if ((g_87.f4 & 0xB6L))
    {
        uint32_t l_132 = 0xC331A2D7L;
        int32_t l_139 = (-10L);
        g_87.f2 = ((p_35 == (((p_36 = (safe_sub_func_int16_t_s_s(g_87.f0, 0x7E66L))) | (((safe_lshift_func_int8_t_s_u(l_132, (g_87.f1 |= ((safe_add_func_int16_t_s_s(((l_139 = ((((safe_sub_func_uint32_t_u_u((0xB2EE2B33L > (l_132 ^ l_125)), ((((((((((safe_rshift_func_uint16_t_u_s(g_77, ((((8UL == l_132) | g_116) < l_125) , p_37))) >= p_34) & p_34) , 65535UL) > 65527UL) || p_37) >= 7L) != 0xFD82L) , p_35) & g_87.f4))) == g_9) > l_125) , g_121)) , p_35), l_125)) | p_37)))) , g_65) >= g_95)) < 4294967288UL)) , g_7);
    }
    else
    {
        uint32_t l_140 = 0xD58AA24FL;
        int32_t l_142 = 1L;
        int8_t l_160 = 0L;
        uint16_t l_171 = 65535UL;
        int32_t l_173 = 7L;
        int32_t l_218 = 0x3B0C7BE2L;
        int32_t l_219 = 0x10FE33B6L;
        struct S0 l_266 = {0xA90CL,246UL,0x13280503L,-1L,0x2E575A53L};
        int16_t l_357 = (-4L);
        int16_t l_379 = 0x3A99L;
        int32_t l_415 = 0xD59C3A3EL;
        if (l_140)
        {
            uint32_t l_157 = 0x9D43CF30L;
            int32_t l_158 = 0L;
            g_144++;
            l_158 ^= (0L & (safe_add_func_uint32_t_u_u((!(safe_unary_minus_func_int16_t_s((g_7 , (!0x45A54E76L))))), (safe_lshift_func_int16_t_s_s((p_35 < (safe_rshift_func_int8_t_s_u(((0xFDL || ((1L && ((safe_unary_minus_func_uint16_t_u((g_9 = 0UL))) == (l_157 > l_143))) < 65535UL)) <= 0x98A83C55L), 1))), 5)))));
        }
        else
        {
            uint32_t l_159 = 4294967293UL;
            int16_t l_172 = 0xABCBL;
            int32_t l_174 = 0L;
            struct S0 l_175 = {65533UL,255UL,0x555B3299L,0x2AD0L,18446744073709551612UL};
            l_160 = l_159;
            if ((safe_sub_func_int16_t_s_s((-1L), (l_174 = (((g_141 |= ((0L && (((safe_add_func_uint32_t_u_u(g_87.f1, g_144)) == (l_171 = ((((safe_sub_func_uint8_t_u_u((0x79L == (g_78 = (safe_rshift_func_uint16_t_u_s(0UL, 12)))), ((((((safe_mod_func_int32_t_s_s(9L, ((g_8 > 0x5475L) & 0xE2E2A71EL))) , p_34) & g_144) >= g_116) < l_159) ^ 0UL))) != g_8) < g_8) ^ 0x21L))) , l_172)) & p_35)) , l_173) != 65529UL)))))
            {
                int16_t l_181 = (-1L);
                uint32_t l_189 = 0x7C8831FDL;
                int32_t l_208 = 0x1B1BC71CL;
                int32_t l_217 = (-1L);
                int32_t l_220 = 0x5220B7D1L;
                g_87 = l_175;
                l_142 |= (p_36 = (((p_36 <= 0xB0B1L) > g_95) > p_35));
                l_142 = (g_8 == ((safe_lshift_func_int16_t_s_s(p_36, 6)) , ((((((g_120 || ((((+p_36) >= (l_142 >= (g_87.f3 = l_181))) == (safe_add_func_int32_t_s_s((l_184 & (g_116 ^ (g_87.f1 || 0x25L))), 0L))) > 0x4BL)) > p_36) < 0xE0L) < l_173) , p_37) && 0x3549L)));
                l_220 &= (safe_rshift_func_int8_t_s_u((l_219 ^= (l_125 ^ (safe_lshift_func_int8_t_s_s((((l_189 > g_87.f3) , (+(g_87.f0 ^ (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((l_218 = ((safe_rshift_func_int8_t_s_u((((((((safe_sub_func_uint32_t_u_u(4294967295UL, (safe_lshift_func_int16_t_s_u((l_217 = (l_142 = ((safe_lshift_func_int16_t_s_u(1L, (((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((((!(((l_208 |= p_34) || p_36) || (+(!(safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_u(((l_171 <= l_208) && g_65), p_34)) != 0x5B47L) , p_34) ^ p_35), 0x7081L)), 14)))))) >= 0xBFB3L) ^ 4UL), 255UL)), 12)) <= 0x0673L) | g_87.f4))) < l_160))), 1)))) | 0x5003L) && g_120) || 0xC5L) <= 0xEA0A8481L) , 1L) == p_36), g_65)) > p_36)) , 0xF74AL), p_35)), (-5L)))))) <= 0x45C51EADL), g_120)))), 2));
            }
            else
            {
                uint16_t l_225 = 65535UL;
                int32_t l_228 = 0x4ADBFCEAL;
                uint32_t l_308 = 18446744073709551614UL;
                l_228 |= ((p_36 , (((p_34 ^ (p_36 , (0L || (safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((g_77 <= (l_225 ^ l_175.f0)), (safe_mod_func_uint32_t_u_u((1UL >= 1UL), 0x66AF2F86L)))) & g_87.f4), l_225))))) != l_173) <= l_184)) < 0x53FBDC80L);
                if ((p_35 , ((safe_add_func_int32_t_s_s(((+(g_121++)) || ((g_8 &= (g_9 ^ g_116)) <= p_35)), ((g_237++) | ((!(++p_34)) && (safe_rshift_func_uint8_t_u_s((g_87.f1 &= g_77), 6)))))) != ((((g_87.f2 < ((g_65 = (l_175.f2 &= ((safe_lshift_func_uint16_t_u_u((l_219 > (l_228 ^= ((safe_lshift_func_uint16_t_u_s(((l_174 &= p_36) >= (safe_mod_func_int32_t_s_s(l_225, g_144))), 12)) & g_144))), 5)) || p_37))) < g_95)) != (-3L)) , 0UL) > p_37))))
                {
                    uint8_t l_265 = 255UL;
                    int32_t l_273 = 1L;
                    int32_t l_288 = 0xDBC32845L;
                    int8_t l_309 = 3L;
                    for (l_174 = 0; (l_174 < 2); l_174++)
                    {
                        uint32_t l_264 = 0UL;
                        int32_t l_289 = 0x64655A23L;
                        l_175.f2 = ((safe_mod_func_int32_t_s_s(((l_125 & (-2L)) <= (((p_37 ^ ((safe_add_func_uint32_t_u_u(((g_121 = 0xA3FD36FCL) == l_172), p_35)) == (p_36 | g_237))) > ((((safe_mod_func_int32_t_s_s((~(safe_sub_func_uint32_t_u_u(((l_264 | l_142) <= 5L), p_37))), (-6L))) > g_236) >= 0xA7AC4E5CL) | g_7)) > l_173)), l_265)) >= 0x1255D904L);
                        g_87 = l_266;
                        l_289 = (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(254UL, (safe_lshift_func_uint8_t_u_s(((g_121--) , (g_78 ^= (safe_lshift_func_uint16_t_u_u(g_77, (safe_sub_func_int32_t_s_s(l_172, (l_288 &= (l_265 || (safe_sub_func_uint16_t_u_u(l_175.f1, ((safe_sub_func_uint8_t_u_u(((!((l_273 <= (((safe_sub_func_uint8_t_u_u(8UL, ((l_273 != g_120) & l_171))) , 0x97L) || p_36)) , l_264)) ^ p_37), g_87.f3)) && 1UL))))))))))), p_36)))), g_8));
                    }
                    l_174 = ((((p_36 = (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(0x3AD1F110L, ((l_228 ^= ((((((((safe_add_func_int16_t_s_s(1L, l_142)) ^ (safe_lshift_func_uint16_t_u_s((((safe_sub_func_int16_t_s_s(0L, (g_87.f0 & (safe_sub_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s(p_35, (safe_sub_func_int32_t_s_s((g_237 , g_237), (g_79 | g_78))))) != g_236) , 5UL) >= p_36), g_116))))) && p_36) == l_142), 4))) < 0x24DFL) <= (-1L)) & p_34) & 3UL) < 65526UL) == 0xABL)) ^ 0x7201F38DL))), l_308)) < 1L) < 0x694FL), 6))) != 0x02A8841FL) && p_35) && l_309);
                    p_36 = l_309;
                    l_228 = ((g_87.f4 ^ (p_37 || 5L)) && p_34);
                }
                else
                {
                    return p_37;
                }
            }
            l_219 &= (safe_add_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u(0x15L, ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((g_95 == (((g_87.f0 |= 0UL) , ((safe_sub_func_uint16_t_u_u((l_142 ^= ((((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s(((-1L) < (safe_rshift_func_uint16_t_u_u((((l_125 && ((safe_mod_func_uint32_t_u_u((g_121 = (l_266.f2 = (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(l_140, (l_175.f2 = ((((safe_rshift_func_uint8_t_u_s(((p_37 & 0xFA60L) != (g_78 = ((p_34 = ((safe_mod_func_uint32_t_u_u((((l_274 | 0x3C18L) , p_36) , p_37), l_266.f2)) ^ g_87.f2)) >= g_95))), 6)) > p_37) , g_87.f1) <= 0x6070L)))), p_37)))), g_8)) || p_35)) || g_65) , p_35), 12))), g_87.f0)) <= g_77) | 0x1E699FB9L), p_37)) != 0xF4L) | 6L) > 0xE3BCCD2FL)), l_172)) > l_143)) < l_274)) != 0xE012L), l_159)), l_125)) >= p_36))) , l_125) , p_36) > 0UL), 0xC1A50624L));
        }
        p_36 = (!((safe_add_func_int8_t_s_s((((g_121 <= (safe_add_func_uint8_t_u_u((g_87.f1--), (safe_lshift_func_int8_t_s_u(((l_143 = p_35) , ((((safe_sub_func_int8_t_s_s((1L >= ((p_37--) == ((((safe_rshift_func_uint16_t_u_u(l_218, (safe_lshift_func_int8_t_s_u((g_8 = (((g_87.f2 &= ((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint8_t_u_u((((((g_358 ^= (l_143 ^= l_357)) <= 0UL) & ((p_35 != ((l_381 |= (((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_mod_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s(((((+((safe_mod_func_uint32_t_u_u((l_125 || (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((((!(safe_mod_func_uint16_t_u_u(((l_274 = ((((p_34 ^= (g_77 = ((0x33L > 0L) , p_35))) >= g_65) >= l_160) == 0xBB56L)) & l_218), 0xADE3L))) , p_35) | p_35), 6)), l_379))), p_35)) || g_95)) , 0x378C7E57L) <= 9L) & l_171), g_8)) || p_35) < p_36) && (-6L)), g_8)) <= l_266.f2) | p_36) == 0x14D8A2F0L), 1)), l_380)) ^ 0xBB53ACB9L) < p_35) || l_266.f0) || p_36)) <= p_35)) >= 0UL)) < p_35) , 0UL), g_8)) <= l_125) >= p_36) <= 4294967295UL), 5)) & 3UL)) > l_184) ^ (-1L))), 3)))) & p_36) ^ l_266.f1) && p_36))), 0xA4L)) > p_36) ^ l_160) || g_116)), 0))))) && g_141) ^ p_35), l_184)) != l_266.f2));
        l_274 = ((p_36 | ((g_396 = (g_236 = (l_143 = ((safe_unary_minus_func_int16_t_s(((g_141 | ((p_37--) > (l_266.f2 &= (g_87.f1 = (((safe_add_func_uint16_t_u_u((g_87.f0 && p_36), ((g_8 = (0x1F92L < (((g_87.f2 |= (!g_87.f4)) >= (((l_380 < (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(g_8, ((-1L) && 0x414C40C3L))), 2)), 6)) || g_79) >= l_219)) == (-8L)) > g_9)) , 0x90A1L))) & (-1L)))) < p_34) & 0xC4L))))) , 0L))) && 0xD5L)))) && p_34)) && g_9);
        if (((((safe_mod_func_uint32_t_u_u(((((!((g_87.f2 <= ((safe_rshift_func_int16_t_s_u(((0x5CAA28A9L > p_36) && g_87.f4), 13)) > ((g_87.f1++) , (((l_219 = (safe_lshift_func_uint16_t_u_s(((l_143 ^= ((g_121 = ((+(safe_rshift_func_uint16_t_u_u((l_184 || (safe_mod_func_uint32_t_u_u(((0x0BL && (safe_mod_func_uint8_t_u_u(255UL, (safe_rshift_func_uint16_t_u_s(((((0x5F8EL <= (g_65 | l_140)) >= p_35) > p_35) & 1UL), g_87.f2))))) , g_87.f2), 0x30E5366CL))), 2))) && g_237)) , g_7)) <= 0x65L), l_173))) == 0xF9L) | g_87.f4)))) > l_415)) ^ g_95) || g_141) <= p_34), 3L)) ^ 0xD5A6EB08L) | g_78) >= g_87.f2))
        {
            struct S0 l_416 = {0x6B74L,1UL,0L,1L,18446744073709551607UL};
            l_416 = g_87;
            g_65 = l_416.f4;
            for (l_266.f4 = 28; (l_266.f4 < 28); l_266.f4 = safe_add_func_uint16_t_u_u(l_266.f4, 1))
            {
                uint16_t l_419 = 0UL;
                ++l_419;
                g_87 = l_416;
                l_274 |= ((l_266.f2 ^ (((g_87.f0 ^ ((((l_416.f3 , (((safe_mod_func_int32_t_s_s((g_396 = ((p_36 ^ ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((-1L), ((g_77 != (l_142 |= p_37)) ^ (((l_143 = g_8) < (safe_rshift_func_uint16_t_u_u((l_266 , 0x44EAL), g_237))) & l_430)))), p_36)) | g_87.f3)) == (-1L))), p_37)) || 0xA2L) , 0x75L)) < g_79) & g_78) & g_87.f1)) , 0xCA912DC9L) , p_35)) <= l_160);
            }
            l_266 = l_266;
        }
        else
        {
            int32_t l_451 = 0L;
            uint32_t l_467 = 1UL;
            --l_431;
            l_381 ^= l_218;
            g_87 = g_87;
            if ((((g_7 , (p_34 >= (safe_add_func_int32_t_s_s(g_87.f2, p_37)))) & (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((0UL | (p_36 | (safe_rshift_func_int16_t_s_u(((((~p_35) > ((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((g_87.f3 = (-8L)) < ((((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((((l_451 >= l_266.f4) >= g_7) != g_77) == 0x15L), g_116)), g_9)) | p_34) , g_87.f4) & p_34) >= g_358) || p_36)) , g_87.f4), 0x14C6972DL)), 0UL)) ^ g_9)) , 0x861BL) , 0x8BDAL), p_35)))) | l_452), p_34)), g_87.f0))) < g_95))
            {
                uint16_t l_466 = 3UL;
                l_266.f2 = p_34;
                l_142 = (g_87.f2 = (l_466 = ((safe_add_func_int32_t_s_s(((0xC4L || 249UL) & (l_451 = (~(((safe_mul_func_int32_t_s_s(p_35, (((((((safe_lshift_func_int8_t_s_u(p_36, (safe_lshift_func_uint16_t_u_s(((p_34 != (((l_451 , ((safe_sub_func_int32_t_s_s(((g_358 | (g_87.f0 ^ (l_381 = ((safe_unary_minus_func_int8_t_s(l_451)) < p_36)))) , p_35), g_141)) > 0x7A9BD7BBL)) <= l_451) == l_465)) != g_87.f4), p_36)))) ^ 0x86L) == g_141) && 65532UL) ^ p_34) || 0xEAL) == 3UL))) , 0x096FL) <= l_171)))), 0xCF5C49D3L)) == p_34)));
            }
            else
            {
                g_396 = 0xA0556B74L;
                return l_467;
            }
        }
    }
    l_488 &= ((l_143 = (((((l_381 = ((((safe_unary_minus_func_uint8_t_u((p_36 & (safe_rshift_func_uint8_t_u_u((l_465 = (p_37 ^= (((safe_sub_func_int32_t_s_s((l_274 = 7L), (p_36 > (((safe_add_func_uint32_t_u_u(p_36, l_380)) | (safe_sub_func_uint32_t_u_u(3UL, (((safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((((safe_sub_func_uint32_t_u_u((((g_8 != p_35) != (safe_sub_func_int32_t_s_s(p_35, 0xAF597063L))) & g_79), 7UL)) , 0x5EL) , l_430) > g_77) == 4L), l_430)), l_184)) , l_452))) & l_381) , 65529UL), 13)) | g_87.f2) >= p_34)))) | 0x6C59L)))) <= l_125) > l_381))), 6))))) ^ 0xAB95L) , g_65) || 0xC529L)) == 0xA2L) & p_34) > p_36) < 0xD243L)) > 0x6CL);
    return g_87.f4;
}
inline static int8_t func_38(int32_t p_39)
{
    int8_t l_82 = (-8L);
    int8_t l_92 = 0x54L;
    uint8_t l_112 = 0x3BL;
    int32_t l_115 = 0L;
    struct S0 l_118 = {1UL,0UL,4L,1L,0x3B65DD65L};
    if (l_82)
    {
        int32_t l_93 = (-8L);
        int32_t l_94 = 5L;
        int32_t l_96 = 0x9F9B9B76L;
        l_96 ^= (0UL > (g_95 ^= (safe_add_func_int32_t_s_s((((safe_mod_func_int8_t_s_s((g_87 , (l_94 |= ((((p_39 ^ 246UL) < (safe_sub_func_uint16_t_u_u(g_87.f1, ((((((((p_39 , (1UL || ((safe_sub_func_uint8_t_u_u(((l_92 , 0x11L) <= 0x08L), g_78)) != g_8))) >= 0xADD72F77L) , g_78) == 0x10L) , g_78) ^ 0x5621C9A8L) < p_39) > p_39)))) , l_82) | l_93))), l_93)) != 0xA1048D1DL) >= l_82), g_79))));
    }
    else
    {
        uint16_t l_113 = 65526UL;
        int32_t l_114 = (-2L);
        int32_t l_117 = 0x2FC4CEA7L;
        for (g_87.f0 = (-1); (g_87.f0 == 15); g_87.f0++)
        {
            struct S0 l_119 = {65533UL,8UL,0x7B85BF16L,0x7F25L,18446744073709551615UL};
            l_117 = ((g_87 , ((g_116 |= ((((((+(-1L)) > (((p_39 < (((safe_lshift_func_int8_t_s_s(0x1CL, 6)) >= 0x41L) == g_77)) > (((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_115 = (l_114 = (safe_sub_func_int32_t_s_s(g_65, ((safe_sub_func_int8_t_s_s(l_112, (p_39 || l_113))) != p_39))))), p_39)), 0x13389D4FL)), l_113)) <= 4294967288UL) , l_113)) , (-1L))) , p_39) ^ 0xA1E5L) > g_87.f4) && p_39)) | 0x8C96F5F5L)) , l_114);
            l_119 = l_118;
        }
        g_121++;
    }
    return p_39;
}
inline static uint32_t func_43(int32_t p_44, int16_t p_45, uint8_t p_46, uint8_t p_47, int32_t p_48)
{
    g_79++;
    return g_65;
}
inline static uint8_t func_54(int32_t p_55, uint16_t p_56, int16_t p_57, uint8_t p_58)
{
    return g_65;
}
static int32_t func_59(uint16_t p_60, int8_t p_61, int8_t p_62)
{
    int32_t l_72 = (-5L);
    int32_t l_75 = 0x9D5C01CFL;
    int32_t l_76 = 1L;
    g_77 &= ((9L >= 0x6C21L) || (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((0x1C2AL & ((safe_sub_func_int32_t_s_s(5L, 0L)) && (l_76 = (0xEDL <= ((((l_72 != ((safe_lshift_func_int8_t_s_s((((l_75 = g_65) || (g_65 || g_65)) , 0x3FL), g_8)) != l_72)) & g_9) & 1UL) | l_72))))), l_72)) < 0xAAA84115L), 10)));
    return l_72;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_8;
    csmith_sink_ = g_9;
    csmith_sink_ = g_65;
    csmith_sink_ = g_77;
    csmith_sink_ = g_78;
    csmith_sink_ = g_79;
    csmith_sink_ = g_87.f0;
    csmith_sink_ = g_87.f1;
    csmith_sink_ = g_87.f2;
    csmith_sink_ = g_87.f3;
    csmith_sink_ = g_87.f4;
    csmith_sink_ = g_95;
    csmith_sink_ = g_116;
    csmith_sink_ = g_120;
    csmith_sink_ = g_121;
    csmith_sink_ = g_141;
    csmith_sink_ = g_144;
    csmith_sink_ = g_236;
    csmith_sink_ = g_237;
    csmith_sink_ = g_358;
    csmith_sink_ = g_396;
    csmith_sink_ = g_490;
    csmith_sink_ = g_493;
    csmith_sink_ = g_603.f0;
    csmith_sink_ = g_603.f1;
    csmith_sink_ = g_603.f2;
    csmith_sink_ = g_603.f3;
    csmith_sink_ = g_603.f4;
    csmith_sink_ = g_690;
    csmith_sink_ = g_748;
    csmith_sink_ = g_818;
    csmith_sink_ = g_914;
    platform_main_end(0,0);
    return 0;
}
