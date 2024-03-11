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
   uint32_t f0;
};
struct S1 {
   signed f0 : 26;
   signed f1 : 5;
   signed f2 : 10;
   unsigned f3 : 25;
   signed f4 : 22;
   signed f5 : 20;
   unsigned f6 : 2;
   unsigned f7 : 19;
   signed f8 : 22;
};
struct S2 {
   unsigned f0 : 10;
   signed f1 : 25;
   signed f2 : 10;
   signed f3 : 17;
   signed f4 : 24;
};
struct S3 {
   signed f0 : 9;
};
static uint32_t g_10 = 0xC4307E4AL;
static uint16_t g_21 = 0x452FL;
static int32_t g_47 = 1L;
static uint16_t g_54 = 65535UL;
static uint16_t g_56 = 65535UL;
static struct S2 g_87 = {14,504,-14,51,-1716};
static uint32_t g_133 = 0UL;
static uint16_t *g_142 = &g_56;
static int32_t *g_150 = &g_47;
static int32_t **g_149 = &g_150;
static struct S1 g_158 = {5813,-0,-22,2663,1583,357,1,438,-1912};
static struct S1 *g_157 = &g_158;
static int32_t g_413 = 0x68258067L;
static int32_t g_415 = 0x0311DD1DL;
static uint8_t g_422 = 0xD8L;
static int32_t g_425 = 2L;
static uint32_t g_426 = 0x9A60E030L;
static int32_t g_432 = (-8L);
static uint16_t g_434 = 0xCA24L;
static uint16_t *g_433 = &g_434;
static struct S0 g_454 = {0UL};
static struct S0 *g_453 = &g_454;
static int8_t g_468 = 0x90L;
static int16_t g_526 = (-1L);
static int16_t g_532 = 0xEBEBL;
static int64_t g_1010 = (-1L);
static int32_t g_1015 = 0x512807B3L;
static int16_t g_1016 = 1L;
static uint64_t g_1018 = 18446744073709551615UL;
static uint8_t *g_1044 = &g_422;
static uint8_t **g_1043 = &g_1044;
static uint8_t ***g_1042 = &g_1043;
static uint16_t **g_1196 = &g_142;
static uint16_t ***g_1195 = &g_1196;
static struct S3 g_1200 = {13};
static struct S3 *g_1199 = &g_1200;
static int8_t g_1233 = (-1L);
static struct S2 **g_1292 = (void*)0;
static uint64_t *g_1322 = &g_1018;
static uint64_t **g_1321 = &g_1322;
static int8_t g_1353 = (-1L);
static int16_t g_1571 = 0x6B74L;
static int64_t g_1573 = 0x1B317EB4B1DBB0C3LL;
static int32_t g_1587 = 0L;
static int64_t g_1614 = 0x5F3DD572776C7A3FLL;
static uint32_t g_1620 = 0xD16EEA33L;
static int16_t g_1912 = 0x2E30L;
static struct S0 **g_1943 = &g_453;
static struct S0 ***g_1942 = &g_1943;
static int64_t g_2080 = 1L;
static int8_t g_2088 = 1L;
static uint16_t g_2097 = 0x6211L;
static uint8_t g_2115 = 0x4EL;
static uint8_t g_2125 = 0xCEL;
static struct S2 *g_2167 = &g_87;
static int32_t g_2171 = 0x6797C3D7L;
static uint64_t g_2271 = 0x523C120095FB4521LL;
static uint8_t g_2498 = 0x3EL;
static int8_t g_2725 = (-4L);
static struct S1 ***g_2767 = (void*)0;
static struct S1 **g_2770 = &g_157;
static struct S1 ***g_2769 = &g_2770;
static int32_t g_2771 = 7L;
static int8_t *g_2786 = &g_2725;
static uint32_t *g_2797 = &g_1620;
static uint64_t g_2955 = 0xBE82D2F5FECACC0ALL;
static uint8_t ***g_2966 = &g_1043;
static struct S2 ***g_2993 = &g_1292;
static int32_t g_3054 = 0xFC0C9207L;
static uint64_t g_3210 = 18446744073709551610UL;
static int8_t g_3348 = 0xA7L;
static uint64_t g_3357 = 0xB8CD7701C4060D3DLL;
static struct S1 **g_3366 = &g_157;
static int32_t ***g_3493 = &g_149;
static int32_t ****g_3492 = &g_3493;
static int64_t func_1(void);
static int32_t func_3(struct S0 p_4, uint64_t p_5, int8_t p_6, int32_t p_7, int32_t p_8);
static int64_t func_22(uint16_t p_23, uint16_t * p_24, uint64_t p_25);
static int32_t * func_26(struct S2 p_27, struct S1 p_28, struct S3 p_29);
inline static struct S2 func_30(int32_t * p_31, uint16_t * p_32, uint16_t * p_33, int32_t p_34);
static int32_t * func_35(struct S1 p_36, int32_t * p_37, int32_t * p_38, int32_t p_39);
static struct S1 func_40(int32_t p_41);
inline static struct S1 func_42(struct S0 p_43);
static struct S0 func_44(int32_t * p_45);
inline static int16_t func_58(uint8_t p_59, int32_t p_60, int64_t p_61, uint32_t p_62);
static int64_t func_1(void)
{
    int32_t l_2 = 7L;
    struct S0 l_9 = {0xC10977A1L};
    uint16_t *l_20 = &g_21;
    int64_t *l_2346 = (void*)0;
    int64_t *l_2347 = &g_1010;
    int16_t *l_2348 = &g_1016;
    int16_t *l_2349 = &g_1571;
    struct S1 l_2743 = {-5067,-0,-2,2016,-621,551,0,664,638};
    struct S2 l_2744 = {13,1188,-29,-54,-101};
    int16_t l_2847 = 1L;
    uint64_t l_2950 = 0x2CF7861F62292532LL;
    struct S3 *l_2981 = &g_1200;
    int64_t l_3375 = 0x507BBFB5047A0FC7LL;
    int64_t l_3394 = 0L;
    struct S1 **l_3477 = &g_157;
    uint64_t l_3478 = 0xB501604A571DEBACLL;
    uint16_t ***l_3489 = &g_1196;
    int32_t *****l_3494 = &g_3492;
    uint64_t l_3495 = 0UL;
    l_2 = 1L;
    if (func_3(l_9, g_10, g_10, ((safe_add_func_uint64_t_u_u(0xAA32F3F6085E0710LL, (safe_sub_func_uint64_t_u_u(3UL, (0x5FFFL < (!(((*l_20) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(0x77L, 0)), g_10))) && ((*l_2349) = ((*l_2348) = (((*l_2347) = func_22(l_9.f0, l_20, l_9.f0)) <= l_2)))))))))) != (*g_1322)), l_9.f0))
    {
        uint64_t ***l_2742 = &g_1321;
        int32_t *l_2745 = &g_432;
        uint64_t *l_2760 = &g_1018;
        uint64_t l_2781 = 0x614C5BB74731F965LL;
        int32_t l_2834 = 0xB7A3B6F0L;
        int32_t l_2876 = 0x6B00A60DL;
        int32_t l_2903 = 7L;
        int32_t l_2907 = 0x25BD1BA5L;
        int32_t l_2914 = 1L;
        int32_t l_2920 = (-1L);
        int32_t l_2923 = 0xDF0CC1A8L;
        uint8_t ***l_2967 = &g_1043;
        struct S0 ***l_2990 = &g_1943;
        struct S1 **l_2994 = &g_157;
        int32_t l_3123 = 0xB729F80BL;
        uint8_t l_3215 = 1UL;
        uint32_t **l_3233 = (void*)0;
        uint64_t l_3392 = 0x4E0F58EF58BF16B2LL;
        uint16_t *l_3469 = &g_54;
    }
    else
    {
        for (g_1233 = (-23); (g_1233 <= (-21)); ++g_1233)
        {
            uint8_t l_3473 = 1UL;
            if ((**g_149))
                break;
            (*g_150) ^= ((+0x85B9E3DF07594B61LL) != l_3473);
        }
    }
    (*g_149) = func_26(func_30(&l_2, l_2348, l_20, ((1L == ((**g_1196) ^ ((l_2847 | ((*g_2786) = ((l_2950 >= ((((!(safe_add_func_uint32_t_u_u((l_2743.f5 ^ (l_3477 != (void*)0)), 7L))) > 0x9DL) ^ 0xA1FF8F27L) != (*g_150))) <= l_2744.f4))) == 0xD314BD08L))) != l_9.f0)), (**l_3477), (*l_2981));
    g_87.f4 = (((l_3478 >= (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((((*g_142)++) > 0x91AFL), (safe_lshift_func_uint16_t_u_s(l_2743.f5, (l_2743.f4 ^ (*g_1322)))))) || (l_2743.f5 < (safe_add_func_uint8_t_u_u(((&g_1196 == l_3489) && (safe_mod_func_int32_t_s_s(((***g_3493) = (((*l_3494) = g_3492) != (void*)0)), l_2744.f3))), (*g_2786))))), 4))) ^ l_3495) <= 0L);
    return (*****l_3494);
}
static int32_t func_3(struct S0 p_4, uint64_t p_5, int8_t p_6, int32_t p_7, int32_t p_8)
{
    uint32_t l_2350 = 4UL;
    struct S0 l_2353 = {4294967295UL};
    struct S0 ***l_2354 = &g_1943;
    struct S0 ****l_2355 = &g_1942;
    int32_t l_2361 = 0x6968330AL;
    int32_t l_2439 = 0x3E4A6E6AL;
    int32_t l_2483 = 0x3165502AL;
    int32_t l_2636 = 0x8CC68007L;
    int32_t l_2641 = (-6L);
    int32_t l_2642 = (-10L);
    int32_t l_2652 = 0x96CAA364L;
    int32_t l_2669 = 0x81B89D65L;
    int32_t l_2677 = 0xFB2F7E47L;
    int32_t l_2700 = 7L;
    int32_t l_2701 = 1L;
    int32_t *l_2731 = (void*)0;
    int32_t *l_2732 = &l_2677;
    int32_t *l_2733 = &g_432;
    int32_t *l_2734 = &l_2677;
    int32_t *l_2735 = &g_432;
    int32_t *l_2736 = (void*)0;
    int32_t *l_2737 = &l_2652;
    int32_t *l_2738 = &l_2636;
    uint16_t l_2739 = 4UL;
    ++l_2350;
    (**g_1943) = l_2353;
    if (((18446744073709551615UL <= ((((*l_2355) = l_2354) != l_2354) ^ (247UL >= ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_5, (***g_1042))), (**g_1043))) && 4294967295UL)))) ^ 0x78069EE2L))
    {
        int32_t *l_2360 = &g_432;
        int32_t *l_2362 = &l_2361;
        int32_t *l_2363 = &g_47;
        int32_t *l_2364 = (void*)0;
        int32_t l_2365 = 1L;
        int32_t *l_2366 = (void*)0;
        int32_t *l_2367 = (void*)0;
        int32_t *l_2368 = &g_47;
        int32_t *l_2369 = &g_432;
        int32_t *l_2370 = (void*)0;
        int32_t *l_2371 = &l_2361;
        int32_t *l_2372 = &l_2365;
        int32_t *l_2373 = &l_2361;
        int32_t *l_2374 = &g_47;
        int32_t *l_2375 = (void*)0;
        int32_t *l_2376 = (void*)0;
        int32_t *l_2377 = &g_47;
        int32_t *l_2378 = &l_2361;
        int32_t *l_2379 = &g_47;
        int32_t *l_2380 = &g_432;
        int32_t *l_2381 = &g_432;
        int32_t *l_2382 = &l_2361;
        int32_t *l_2383 = (void*)0;
        int32_t *l_2384 = &g_47;
        int32_t *l_2385 = &g_432;
        int32_t *l_2386 = &g_47;
        int32_t *l_2387 = &l_2365;
        int32_t *l_2388 = &g_47;
        int32_t l_2389 = (-9L);
        int32_t *l_2390 = (void*)0;
        int32_t *l_2391 = &l_2365;
        int32_t *l_2392 = &l_2389;
        int32_t l_2393 = 0xBC6A27A1L;
        int32_t *l_2394 = &l_2389;
        int32_t *l_2395 = &l_2393;
        int32_t *l_2396 = (void*)0;
        int32_t *l_2397 = &l_2365;
        int32_t *l_2398 = &g_432;
        int32_t *l_2399 = &g_47;
        int32_t *l_2400 = &l_2389;
        int32_t *l_2401 = (void*)0;
        int32_t *l_2402 = (void*)0;
        int32_t *l_2403 = &l_2393;
        int32_t *l_2404 = &g_47;
        int32_t *l_2405 = &l_2361;
        int32_t *l_2406 = &l_2365;
        int32_t *l_2407 = &l_2393;
        int32_t *l_2408 = &g_432;
        int32_t *l_2409 = (void*)0;
        int32_t *l_2410 = (void*)0;
        int32_t *l_2411 = &g_432;
        int32_t *l_2412 = &g_432;
        int32_t *l_2413 = &g_47;
        int32_t *l_2414 = &l_2389;
        int32_t *l_2415 = (void*)0;
        int32_t *l_2416 = &l_2365;
        int32_t *l_2417 = &g_432;
        int32_t *l_2418 = &g_432;
        int32_t *l_2419 = &l_2365;
        int32_t *l_2420 = &g_432;
        int32_t *l_2421 = &l_2389;
        int32_t *l_2422 = &l_2393;
        int32_t *l_2423 = &l_2389;
        int32_t *l_2424 = &l_2393;
        int32_t *l_2425 = &l_2361;
        int32_t *l_2426 = &l_2393;
        int32_t *l_2427 = &g_432;
        int32_t *l_2428 = &l_2389;
        int32_t *l_2429 = &l_2361;
        int32_t *l_2430 = &g_47;
        int32_t *l_2431 = &g_432;
        int32_t *l_2432 = &l_2389;
        int32_t *l_2433 = &l_2389;
        int32_t *l_2434 = &l_2389;
        int32_t *l_2435 = &g_47;
        int32_t *l_2436 = (void*)0;
        int32_t l_2437 = 0xB5959F4DL;
        int32_t *l_2438 = (void*)0;
        int32_t *l_2440 = (void*)0;
        int32_t *l_2441 = &g_47;
        int32_t *l_2442 = &l_2393;
        int32_t *l_2443 = &l_2365;
        int32_t *l_2444 = (void*)0;
        int32_t *l_2445 = (void*)0;
        int32_t *l_2446 = (void*)0;
        int32_t *l_2447 = &l_2361;
        int32_t *l_2448 = &l_2365;
        int32_t *l_2449 = (void*)0;
        int32_t *l_2450 = &l_2365;
        int32_t *l_2451 = &l_2393;
        int32_t *l_2452 = (void*)0;
        int32_t *l_2453 = &l_2365;
        int32_t *l_2454 = &l_2439;
        int32_t *l_2455 = &l_2437;
        int32_t *l_2456 = &l_2365;
        int32_t *l_2457 = &l_2439;
        int32_t l_2458 = (-3L);
        int32_t *l_2459 = &g_47;
        int32_t *l_2460 = &g_47;
        int32_t *l_2461 = &l_2361;
        int32_t *l_2462 = &l_2458;
        int32_t *l_2463 = &l_2389;
        int32_t *l_2464 = &l_2458;
        int32_t *l_2465 = &l_2361;
        int32_t *l_2466 = (void*)0;
        int32_t *l_2467 = &l_2361;
        int32_t *l_2468 = (void*)0;
        int32_t *l_2469 = &l_2361;
        int32_t *l_2470 = &l_2393;
        int32_t *l_2471 = &l_2458;
        int32_t *l_2472 = (void*)0;
        int32_t *l_2473 = &l_2458;
        int32_t *l_2474 = (void*)0;
        int32_t *l_2475 = &g_47;
        int32_t *l_2476 = &l_2439;
        int32_t *l_2477 = &g_432;
        int32_t *l_2478 = &l_2439;
        int32_t *l_2479 = (void*)0;
        int32_t *l_2480 = &l_2458;
        int32_t *l_2481 = (void*)0;
        int32_t *l_2482 = &l_2365;
        int32_t *l_2484 = &g_432;
        int32_t *l_2485 = &l_2483;
        int32_t l_2486 = 0xDF249B8EL;
        int32_t l_2487 = (-1L);
        int32_t *l_2488 = &l_2483;
        int32_t *l_2489 = &l_2483;
        int32_t *l_2490 = &l_2486;
        int32_t *l_2491 = &l_2439;
        int32_t *l_2492 = (void*)0;
        int32_t *l_2493 = &l_2439;
        int32_t *l_2494 = &l_2483;
        int32_t *l_2495 = (void*)0;
        int32_t *l_2496 = &l_2486;
        int32_t l_2497 = 1L;
        g_2498--;
    }
    else
    {
        int32_t *l_2501 = &l_2483;
        int32_t *l_2502 = &l_2483;
        int32_t *l_2503 = &l_2361;
        int32_t *l_2504 = &g_47;
        int32_t *l_2505 = &g_47;
        int32_t *l_2506 = &l_2483;
        int32_t *l_2507 = &g_432;
        int32_t *l_2508 = &l_2439;
        int32_t *l_2509 = (void*)0;
        int32_t *l_2510 = &l_2361;
        int32_t *l_2511 = &l_2361;
        int32_t *l_2512 = &g_47;
        int32_t *l_2513 = (void*)0;
        int32_t *l_2514 = &l_2361;
        int32_t *l_2515 = &l_2439;
        int32_t *l_2516 = &l_2483;
        int32_t *l_2517 = &g_432;
        int32_t *l_2518 = &l_2483;
        int32_t *l_2519 = &l_2483;
        int32_t *l_2520 = &l_2439;
        int32_t *l_2521 = &l_2439;
        int32_t *l_2522 = (void*)0;
        int32_t *l_2523 = &l_2361;
        int32_t *l_2524 = &l_2361;
        int32_t *l_2525 = (void*)0;
        int32_t *l_2526 = &l_2439;
        int32_t *l_2527 = &l_2483;
        int32_t *l_2528 = &g_432;
        int32_t *l_2529 = &g_432;
        int32_t *l_2530 = &g_47;
        int32_t *l_2531 = &l_2439;
        int32_t *l_2532 = (void*)0;
        int32_t *l_2533 = (void*)0;
        int32_t *l_2534 = &l_2439;
        int32_t *l_2535 = &g_47;
        int32_t *l_2536 = &l_2483;
        int32_t *l_2537 = &l_2361;
        int32_t *l_2538 = (void*)0;
        int32_t *l_2539 = &l_2483;
        int32_t *l_2540 = &l_2483;
        int32_t *l_2541 = &l_2439;
        int32_t *l_2542 = &l_2483;
        int32_t *l_2543 = (void*)0;
        int32_t *l_2544 = &g_432;
        int32_t *l_2545 = &g_47;
        int32_t *l_2546 = &l_2483;
        int32_t *l_2547 = (void*)0;
        int32_t *l_2548 = &l_2361;
        int32_t *l_2549 = (void*)0;
        int32_t *l_2550 = (void*)0;
        int32_t l_2551 = (-1L);
        int32_t *l_2552 = &g_47;
        int32_t *l_2553 = &l_2551;
        int32_t *l_2554 = (void*)0;
        int32_t *l_2555 = &g_47;
        int32_t *l_2556 = &l_2483;
        int32_t *l_2557 = (void*)0;
        int32_t *l_2558 = (void*)0;
        int32_t *l_2559 = &l_2439;
        int32_t *l_2560 = (void*)0;
        int32_t *l_2561 = &l_2361;
        int32_t *l_2562 = &l_2551;
        int32_t *l_2563 = &l_2361;
        int32_t *l_2564 = &g_432;
        int32_t *l_2565 = &l_2361;
        int32_t *l_2566 = (void*)0;
        int32_t *l_2567 = (void*)0;
        int32_t *l_2568 = &l_2551;
        int32_t *l_2569 = &l_2361;
        int32_t *l_2570 = &g_432;
        int32_t *l_2571 = &l_2361;
        int32_t *l_2572 = &g_432;
        int32_t *l_2573 = &l_2361;
        int32_t *l_2574 = &g_47;
        int32_t *l_2575 = (void*)0;
        int32_t *l_2576 = &l_2361;
        int32_t *l_2577 = (void*)0;
        int32_t *l_2578 = &l_2483;
        int32_t *l_2579 = &l_2551;
        int32_t *l_2580 = &g_432;
        int32_t *l_2581 = &l_2483;
        int32_t *l_2582 = &l_2439;
        int32_t *l_2583 = &l_2551;
        int32_t *l_2584 = (void*)0;
        int32_t *l_2585 = &g_47;
        int32_t l_2586 = 0L;
        int32_t *l_2587 = &l_2361;
        int32_t *l_2588 = &l_2361;
        int32_t l_2589 = 0xE61CF0A9L;
        int32_t *l_2590 = &l_2551;
        int32_t *l_2591 = &l_2439;
        int32_t *l_2592 = &l_2361;
        int32_t *l_2593 = &l_2483;
        int32_t *l_2594 = (void*)0;
        int32_t *l_2595 = &l_2586;
        int32_t *l_2596 = &l_2551;
        int32_t *l_2597 = (void*)0;
        int32_t *l_2598 = &l_2589;
        int32_t *l_2599 = &l_2586;
        int32_t *l_2600 = &g_47;
        int32_t *l_2601 = &l_2586;
        int32_t *l_2602 = &g_47;
        int32_t *l_2603 = &l_2439;
        int32_t *l_2604 = &g_432;
        int32_t *l_2605 = &g_432;
        int32_t *l_2606 = (void*)0;
        int32_t *l_2607 = &g_432;
        int32_t *l_2608 = (void*)0;
        int32_t *l_2609 = &l_2361;
        int32_t *l_2610 = &g_432;
        int32_t *l_2611 = &l_2361;
        int32_t *l_2612 = (void*)0;
        int32_t *l_2613 = &l_2483;
        int32_t *l_2614 = (void*)0;
        int32_t *l_2615 = (void*)0;
        int32_t *l_2616 = &l_2586;
        int32_t *l_2617 = (void*)0;
        int32_t *l_2618 = (void*)0;
        int32_t *l_2619 = &g_432;
        int32_t *l_2620 = &l_2439;
        int32_t *l_2621 = &l_2586;
        int32_t *l_2622 = &l_2551;
        int32_t *l_2623 = &l_2439;
        int32_t *l_2624 = &l_2589;
        int32_t *l_2625 = &l_2586;
        int32_t *l_2626 = &l_2551;
        int32_t *l_2627 = &l_2483;
        int32_t *l_2628 = &l_2483;
        int32_t *l_2629 = (void*)0;
        int32_t *l_2630 = &l_2589;
        int32_t *l_2631 = (void*)0;
        int32_t l_2632 = 6L;
        int32_t *l_2633 = &l_2632;
        int32_t *l_2634 = &l_2632;
        int32_t *l_2635 = &l_2483;
        int32_t *l_2637 = &g_432;
        int32_t *l_2638 = &g_432;
        int32_t *l_2639 = &l_2636;
        int32_t *l_2640 = (void*)0;
        int32_t *l_2643 = &l_2551;
        int32_t *l_2644 = &l_2642;
        int32_t *l_2645 = (void*)0;
        int32_t *l_2646 = &g_47;
        int32_t *l_2647 = &l_2361;
        int32_t l_2648 = 6L;
        int32_t *l_2649 = &l_2439;
        int32_t *l_2650 = &g_432;
        int32_t *l_2651 = &l_2648;
        int32_t *l_2653 = (void*)0;
        int32_t *l_2654 = &l_2642;
        int32_t *l_2655 = &l_2361;
        int32_t *l_2656 = &l_2439;
        int32_t *l_2657 = (void*)0;
        int32_t *l_2658 = &l_2589;
        int32_t *l_2659 = &l_2636;
        int32_t *l_2660 = &l_2361;
        int32_t *l_2661 = (void*)0;
        int32_t *l_2662 = &l_2636;
        int32_t *l_2663 = (void*)0;
        int32_t *l_2664 = &g_47;
        int32_t *l_2665 = &l_2642;
        int32_t *l_2666 = &g_432;
        int32_t *l_2667 = &l_2551;
        int32_t *l_2668 = (void*)0;
        int32_t *l_2670 = (void*)0;
        int32_t *l_2671 = &l_2648;
        int32_t *l_2672 = &l_2669;
        int32_t l_2673 = 0x5261B4B2L;
        int32_t *l_2674 = &l_2652;
        int32_t *l_2675 = (void*)0;
        int32_t *l_2676 = &l_2641;
        int32_t *l_2678 = &l_2641;
        int32_t *l_2679 = &l_2589;
        int32_t *l_2680 = (void*)0;
        int32_t *l_2681 = &l_2632;
        int32_t *l_2682 = &l_2652;
        int32_t *l_2683 = &l_2669;
        int32_t *l_2684 = &l_2632;
        int32_t *l_2685 = (void*)0;
        int32_t *l_2686 = (void*)0;
        int32_t *l_2687 = &g_47;
        int32_t *l_2688 = &l_2648;
        int32_t l_2689 = 0x9F4979E1L;
        int32_t *l_2690 = &l_2361;
        int32_t *l_2691 = &l_2642;
        int32_t *l_2692 = &l_2361;
        int32_t *l_2693 = &l_2586;
        int32_t *l_2694 = &g_47;
        int32_t *l_2695 = &l_2673;
        int32_t *l_2696 = &l_2551;
        int32_t *l_2697 = &l_2439;
        int32_t *l_2698 = &l_2586;
        int32_t *l_2699 = &l_2632;
        int32_t *l_2702 = &l_2669;
        int32_t *l_2703 = &l_2641;
        int32_t l_2704 = (-1L);
        int32_t *l_2705 = &l_2648;
        int32_t *l_2706 = &l_2641;
        int32_t *l_2707 = &l_2704;
        int32_t *l_2708 = &l_2677;
        int32_t *l_2709 = &l_2551;
        int32_t *l_2710 = &l_2586;
        int32_t *l_2711 = &l_2677;
        int32_t *l_2712 = (void*)0;
        int32_t l_2713 = (-2L);
        int32_t *l_2714 = &l_2689;
        int32_t l_2715 = 0L;
        int32_t *l_2716 = &l_2673;
        int32_t *l_2717 = &l_2689;
        int32_t l_2718 = 0xAD646AD3L;
        int32_t *l_2719 = &l_2677;
        int32_t *l_2720 = &l_2589;
        int32_t *l_2721 = &l_2589;
        int32_t *l_2722 = &l_2439;
        int32_t *l_2723 = &l_2636;
        int32_t *l_2724 = &l_2689;
        int32_t *l_2726 = (void*)0;
        int32_t *l_2727 = &l_2586;
        uint64_t l_2728 = 0x775DBA5A7C1CB519LL;
        ++l_2728;
        return (*g_150);
    }
    l_2739--;
    return (*g_150);
}
static int64_t func_22(uint16_t p_23, uint16_t * p_24, uint64_t p_25)
{
    int32_t *l_431 = &g_432;
    uint16_t *l_435 = &g_434;
    struct S1 l_2179 = {7713,-4,-25,4235,1374,-22,0,586,-269};
    uint16_t ***l_2219 = &g_1196;
    uint32_t l_2223 = 0x60D73692L;
    int64_t *l_2283 = &g_1573;
    uint8_t *l_2297 = &g_422;
    uint32_t l_2335 = 0x236DD5CCL;
    return p_23;
}
static int32_t * func_26(struct S2 p_27, struct S1 p_28, struct S3 p_29)
{
    uint64_t **l_2180 = (void*)0;
    uint64_t **l_2181 = &g_1322;
    int32_t l_2182 = 0x1051E8C1L;
    int32_t l_2189 = 0x85026264L;
    int32_t l_2194 = 1L;
    int32_t *l_2195 = &l_2189;
    int32_t *l_2196 = &g_47;
    (*l_2195) = ((((p_28.f4 >= ((l_2180 == (l_2181 = l_2180)) ^ (l_2182 &= g_454.f0))) == ((safe_rshift_func_uint16_t_u_u(0xD56EL, 11)) ^ (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((**g_149) = l_2189), (safe_sub_func_uint32_t_u_u(p_28.f4, (p_27.f2 & (l_2194 &= (safe_rshift_func_uint16_t_u_u((((*g_1042) = (*g_1042)) != (void*)0), (***g_1195))))))))), 65530UL)))) <= 0xA2D7L) && g_1571);
    ((void) sizeof ((l_2181 == 0) ? 1 : 0), __extension__ ({ if (l_2181 == 0) ; else __assert_fail ("l_2181 == 0", "/tmp/tmpzcka0jiw.c", 638, __extension__ __PRETTY_FUNCTION__); }));
    return l_2196;
}
inline static struct S2 func_30(int32_t * p_31, uint16_t * p_32, uint16_t * p_33, int32_t p_34)
{
    uint32_t l_438 = 0xDFD013E8L;
    struct S2 *l_448 = &g_87;
    struct S1 **l_458 = &g_157;
    int32_t l_593 = 0L;
    int32_t l_621 = 0x8294B830L;
    struct S0 l_716 = {0xA4653772L};
    int32_t l_789 = (-5L);
    int32_t l_806 = 0x7F5ED74EL;
    uint32_t l_896 = 6UL;
    struct S0 *l_1030 = (void*)0;
    uint16_t l_1145 = 0x7A30L;
    uint8_t **l_1181 = &g_1044;
    uint32_t l_1253 = 0x1FBEB08BL;
    int32_t l_1308 = 0x17DE7866L;
    uint32_t l_1915 = 0xF39E5F5CL;
    struct S0 ***l_1944 = (void*)0;
    uint16_t **l_2118 = (void*)0;
    int8_t l_2173 = 0xCDL;
    struct S2 l_2175 = {5,5616,27,-94,-2127};
    return (*g_2167);
}
static int32_t * func_35(struct S1 p_36, int32_t * p_37, int32_t * p_38, int32_t p_39)
{
    return p_38;
}
static struct S1 func_40(int32_t p_41)
{
    int32_t *l_46 = &g_47;
    struct S1 **l_430 = &g_157;
    (*g_157) = func_42(func_44(l_46));
    l_430 = (void*)0;
    ((void) sizeof ((l_430 == 0) ? 1 : 0), __extension__ ({ if (l_430 == 0) ; else __assert_fail ("l_430 == 0", "/tmp/tmpzcka0jiw.c", 700, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_157);
}
inline static struct S1 func_42(struct S0 p_43)
{
    int32_t *l_161 = &g_47;
    int32_t *l_162 = (void*)0;
    int32_t l_163 = 0xAA9F20BBL;
    int32_t *l_164 = &l_163;
    int32_t *l_165 = &g_47;
    int32_t *l_166 = (void*)0;
    int32_t *l_167 = (void*)0;
    int32_t *l_168 = &g_47;
    int32_t *l_169 = (void*)0;
    int32_t *l_170 = &l_163;
    int32_t *l_171 = &l_163;
    int32_t *l_172 = (void*)0;
    int32_t *l_173 = &g_47;
    int32_t *l_174 = (void*)0;
    int32_t *l_175 = &g_47;
    int32_t *l_176 = &l_163;
    int32_t *l_177 = &l_163;
    int32_t *l_178 = (void*)0;
    int32_t *l_179 = &l_163;
    int32_t *l_180 = (void*)0;
    int32_t *l_181 = (void*)0;
    int32_t *l_182 = &l_163;
    int32_t *l_183 = &g_47;
    int32_t l_184 = (-1L);
    int32_t *l_185 = &l_163;
    int32_t *l_186 = &l_184;
    int32_t *l_187 = &g_47;
    int32_t *l_188 = (void*)0;
    int32_t l_189 = 0L;
    int32_t *l_190 = (void*)0;
    int32_t *l_191 = &l_189;
    int32_t *l_192 = &g_47;
    int32_t *l_193 = (void*)0;
    int32_t *l_194 = &l_189;
    int32_t *l_195 = &l_163;
    int32_t l_196 = (-1L);
    int32_t *l_197 = &l_184;
    int32_t *l_198 = (void*)0;
    int32_t *l_199 = &l_189;
    int32_t *l_200 = &l_189;
    int32_t *l_201 = &l_196;
    int32_t *l_202 = &g_47;
    int32_t *l_203 = &g_47;
    int32_t *l_204 = &l_189;
    int32_t *l_205 = &l_184;
    int32_t *l_206 = &l_163;
    int32_t *l_207 = &l_184;
    int32_t l_208 = 0x6DAB5352L;
    int32_t *l_209 = &l_208;
    int32_t *l_210 = (void*)0;
    int32_t l_211 = (-1L);
    int32_t *l_212 = &l_184;
    int32_t *l_213 = (void*)0;
    int32_t *l_214 = &l_184;
    int32_t *l_215 = (void*)0;
    int32_t *l_216 = (void*)0;
    int32_t *l_217 = (void*)0;
    int32_t *l_218 = &l_196;
    int32_t l_219 = 0L;
    int32_t l_220 = (-9L);
    int32_t *l_221 = (void*)0;
    int32_t *l_222 = &l_211;
    int32_t *l_223 = &l_184;
    int32_t *l_224 = &l_163;
    int32_t *l_225 = &l_189;
    int32_t *l_226 = &l_189;
    int32_t *l_227 = &l_189;
    int32_t l_228 = 0x7A964C9DL;
    int32_t *l_229 = &l_219;
    int32_t l_230 = 0x9B2D93A8L;
    int32_t *l_231 = &l_189;
    int32_t *l_232 = (void*)0;
    int32_t *l_233 = &l_184;
    int32_t *l_234 = (void*)0;
    int32_t *l_235 = &l_220;
    int32_t *l_236 = &l_184;
    int32_t *l_237 = &l_184;
    int32_t *l_238 = &l_211;
    int32_t *l_239 = (void*)0;
    int32_t *l_240 = &l_228;
    int32_t *l_241 = &l_163;
    int32_t *l_242 = (void*)0;
    int32_t *l_243 = &l_184;
    int32_t *l_244 = &l_163;
    int32_t *l_245 = &l_219;
    int32_t *l_246 = &l_211;
    int32_t *l_247 = &l_211;
    int32_t *l_248 = (void*)0;
    int32_t *l_249 = &l_228;
    int32_t *l_250 = (void*)0;
    int32_t *l_251 = &l_228;
    int32_t *l_252 = &l_211;
    int32_t *l_253 = (void*)0;
    int32_t l_254 = 0L;
    int32_t *l_255 = &l_219;
    int32_t *l_256 = (void*)0;
    int32_t l_257 = (-10L);
    int32_t *l_258 = &l_257;
    int32_t *l_259 = &l_208;
    int32_t l_260 = 0x7ACCF6E1L;
    int32_t *l_261 = &l_211;
    int32_t *l_262 = (void*)0;
    int32_t *l_263 = &l_254;
    int32_t *l_264 = &l_260;
    int32_t *l_265 = (void*)0;
    int32_t *l_266 = &l_189;
    int32_t *l_267 = &l_196;
    int32_t *l_268 = &l_220;
    int32_t *l_269 = &l_163;
    int32_t *l_270 = &l_257;
    int32_t l_271 = 0x04652DBFL;
    int32_t *l_272 = (void*)0;
    int32_t *l_273 = &g_47;
    int32_t *l_274 = &l_189;
    int32_t *l_275 = &l_219;
    int32_t *l_276 = &l_220;
    int32_t *l_277 = &l_189;
    int32_t *l_278 = &l_219;
    int32_t *l_279 = &l_254;
    int32_t *l_280 = &l_163;
    int32_t *l_281 = &l_260;
    int32_t *l_282 = &l_220;
    int32_t *l_283 = &l_260;
    int32_t *l_284 = &l_211;
    int32_t *l_285 = &l_220;
    int32_t *l_286 = &l_254;
    int32_t *l_287 = &l_228;
    int32_t *l_288 = (void*)0;
    int32_t *l_289 = &l_208;
    int32_t *l_290 = &l_208;
    int32_t *l_291 = (void*)0;
    int32_t *l_292 = &l_211;
    int32_t *l_293 = &l_208;
    int32_t *l_294 = &l_219;
    int32_t *l_295 = &l_220;
    int32_t *l_296 = &l_208;
    int32_t *l_297 = &l_220;
    int32_t *l_298 = &l_230;
    int32_t l_299 = 0xDD9E1A7EL;
    int32_t l_300 = 0xCDC420A7L;
    int32_t *l_301 = &g_47;
    int32_t *l_302 = &l_211;
    int32_t l_303 = 1L;
    int32_t *l_304 = &l_260;
    int32_t *l_305 = &l_254;
    int32_t *l_306 = &l_208;
    int32_t *l_307 = &l_189;
    int32_t l_308 = 1L;
    int32_t l_309 = 0x5EF7775CL;
    int32_t *l_310 = &l_308;
    int32_t l_311 = 0xF555B329L;
    int32_t *l_312 = (void*)0;
    int32_t *l_313 = &l_184;
    int32_t *l_314 = (void*)0;
    int32_t *l_315 = &l_211;
    int32_t *l_316 = &l_196;
    int32_t *l_317 = &l_257;
    int32_t *l_318 = (void*)0;
    int32_t *l_319 = (void*)0;
    int32_t *l_320 = &l_163;
    int32_t *l_321 = &l_300;
    int32_t l_322 = 0xB1069581L;
    int32_t l_323 = 1L;
    int32_t l_324 = 8L;
    int32_t *l_325 = &l_260;
    int32_t l_326 = 0x696D6245L;
    int32_t *l_327 = &l_311;
    int32_t *l_328 = &l_220;
    int32_t *l_329 = &l_196;
    int32_t *l_330 = &l_311;
    int32_t *l_331 = &l_230;
    int32_t *l_332 = &l_299;
    int32_t l_333 = 0x36A63138L;
    int32_t l_334 = (-1L);
    int32_t *l_335 = &l_260;
    int32_t *l_336 = &l_271;
    int32_t *l_337 = &l_184;
    int32_t *l_338 = &l_257;
    int32_t *l_339 = &l_211;
    int32_t *l_340 = &l_211;
    int32_t *l_341 = &l_303;
    int32_t *l_342 = &l_311;
    int32_t *l_343 = &l_208;
    int32_t *l_344 = &l_322;
    int32_t *l_345 = &l_271;
    int32_t *l_346 = &l_326;
    int32_t *l_347 = (void*)0;
    int32_t *l_348 = &l_322;
    int32_t *l_349 = &l_257;
    int32_t *l_350 = &l_271;
    int32_t *l_351 = &l_163;
    int32_t l_352 = 0x57E4F707L;
    int32_t *l_353 = &l_333;
    int32_t *l_354 = (void*)0;
    int32_t *l_355 = &l_309;
    int32_t *l_356 = &l_254;
    int32_t *l_357 = &l_303;
    int32_t *l_358 = (void*)0;
    int32_t *l_359 = &l_334;
    int32_t l_360 = 0L;
    int32_t *l_361 = &l_326;
    int32_t *l_362 = (void*)0;
    int32_t *l_363 = &l_208;
    int32_t *l_364 = &l_184;
    int32_t *l_365 = &l_352;
    int32_t *l_366 = &g_47;
    int32_t *l_367 = &l_254;
    int32_t *l_368 = (void*)0;
    int32_t *l_369 = (void*)0;
    int32_t *l_370 = (void*)0;
    int32_t *l_371 = &l_254;
    int32_t *l_372 = &l_309;
    int32_t *l_373 = &l_230;
    int32_t *l_374 = &l_196;
    int32_t *l_375 = &l_196;
    int32_t *l_376 = (void*)0;
    int32_t *l_377 = &l_219;
    int32_t *l_378 = &l_309;
    int32_t *l_379 = (void*)0;
    int32_t *l_380 = &l_211;
    int32_t l_381 = 1L;
    int32_t *l_382 = &l_324;
    int32_t *l_383 = &l_334;
    int32_t *l_384 = &l_254;
    int32_t *l_385 = &l_324;
    int32_t l_386 = (-10L);
    int32_t *l_387 = &l_208;
    int32_t *l_388 = &l_208;
    int32_t *l_389 = &l_254;
    int32_t *l_390 = &l_333;
    int32_t *l_391 = &l_220;
    int32_t *l_392 = &l_308;
    int32_t *l_393 = (void*)0;
    int32_t l_394 = 1L;
    int32_t *l_395 = &l_308;
    int32_t *l_396 = &l_208;
    int32_t *l_397 = (void*)0;
    int32_t *l_398 = &l_163;
    int32_t *l_399 = &l_386;
    int32_t *l_400 = &l_228;
    int32_t *l_401 = &l_219;
    int32_t l_402 = 0x25D64D03L;
    int32_t *l_403 = &l_322;
    int32_t *l_404 = &l_211;
    int32_t *l_405 = (void*)0;
    int32_t *l_406 = &l_271;
    int32_t *l_407 = &l_333;
    int32_t *l_408 = &g_47;
    int32_t *l_409 = (void*)0;
    int32_t *l_410 = &l_394;
    int32_t *l_411 = &l_326;
    int32_t *l_412 = &l_333;
    int32_t *l_414 = &l_324;
    int32_t *l_416 = &l_333;
    int32_t *l_417 = &l_326;
    int32_t l_418 = 1L;
    int32_t *l_419 = &l_386;
    int32_t *l_420 = &l_308;
    int32_t *l_421 = &l_333;
    struct S1 l_429 = {7606,-2,26,222,1800,397,1,592,2011};
    --g_422;
    (*l_389) |= 0x84810435L;
    g_426--;
    return l_429;
}
static struct S0 func_44(int32_t * p_45)
{
    uint16_t *l_50 = &g_21;
    uint16_t *l_53 = &g_54;
    uint16_t *l_55 = &g_56;
    int32_t l_57 = 0x0BDEC7E1L;
    int32_t l_68 = (-7L);
    uint64_t l_83 = 0x6A1EA5693CDB7CFFLL;
    int32_t l_103 = 0x0D6E0D24L;
    struct S1 *l_159 = &g_158;
    struct S0 l_160 = {0UL};
    if ((safe_sub_func_uint16_t_u_u((((((*l_55) = ((*l_53) = (++(*l_50)))) == (((((1L & (l_57 < func_58((safe_rshift_func_uint8_t_u_u((~l_57), (safe_rshift_func_int8_t_s_s((l_68 = (l_57 & g_47)), 6)))), l_57, (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u(18446744073709551615UL, (safe_rshift_func_uint8_t_u_s(255UL, 4)))) | (safe_lshift_func_int8_t_s_u(g_47, l_57))) | l_57), 1L)), g_10)) < 5L), l_57)) >= l_83), l_83)), g_47))) ^ l_83) < g_10) == l_57) > l_57)) != g_10) ^ 0xADL), l_57)))
    {
        int32_t *l_94 = &l_57;
        int32_t **l_93 = &l_94;
        int32_t l_98 = 1L;
        int32_t l_108 = (-1L);
        int32_t l_114 = 1L;
        uint16_t *l_141 = &g_56;
        (*l_93) = p_45;
        ((void) sizeof ((l_94 == &g_47) ? 1 : 0), __extension__ ({ if (l_94 == &g_47) ; else __assert_fail ("l_94 == &g_47", "/tmp/tmpzcka0jiw.c", 1005, __extension__ __PRETTY_FUNCTION__); }));
        if ((*p_45))
        {
            int32_t *l_95 = &g_47;
            int32_t *l_96 = &l_68;
            int32_t *l_97 = &l_57;
            int32_t *l_99 = &l_68;
            int32_t *l_100 = &g_47;
            int32_t l_101 = 1L;
            int32_t *l_102 = &l_57;
            int32_t *l_104 = (void*)0;
            int32_t *l_105 = &l_101;
            int32_t l_106 = 6L;
            int32_t *l_107 = &l_101;
            int32_t *l_109 = &l_106;
            int32_t *l_110 = &l_103;
            int32_t *l_111 = &g_47;
            int32_t *l_112 = (void*)0;
            int32_t *l_113 = &l_101;
            int32_t *l_115 = &l_68;
            int32_t *l_116 = &l_108;
            int32_t *l_117 = (void*)0;
            int32_t *l_118 = &l_98;
            int32_t *l_119 = &l_103;
            int32_t *l_120 = &l_108;
            int32_t *l_121 = &l_106;
            int32_t *l_122 = &l_98;
            int32_t *l_123 = &l_98;
            int32_t *l_124 = &l_103;
            int32_t *l_125 = (void*)0;
            int32_t *l_126 = &l_106;
            int32_t *l_127 = (void*)0;
            int32_t l_128 = 0x97794FBAL;
            int32_t *l_129 = (void*)0;
            int32_t *l_130 = (void*)0;
            int32_t *l_131 = &l_128;
            int32_t *l_132 = &l_68;
            ++g_133;
            (*l_93) = (void*)0;
            ((void) sizeof ((l_94 == 0) ? 1 : 0), __extension__ ({ if (l_94 == 0) ; else __assert_fail ("l_94 == 0", "/tmp/tmpzcka0jiw.c", 1045, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            uint16_t **l_140 = &l_55;
            g_87.f3 ^= (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((**l_93), ((&g_47 == (void*)0) ^ ((((*l_140) = l_50) != (g_142 = l_141)) >= 0x58L)))), g_87.f2));
            ((void) sizeof ((l_55 == &g_21) ? 1 : 0), __extension__ ({ if (l_55 == &g_21) ; else __assert_fail ("l_55 == &g_21", "/tmp/tmpzcka0jiw.c", 1052, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_55 == &g_21 || l_55 == &g_56) ? 1 : 0), __extension__ ({ if (l_55 == &g_21 || l_55 == &g_56) ; else __assert_fail ("l_55 == &g_21 || l_55 == &g_56", "/tmp/tmpzcka0jiw.c", 1055, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_94 == &g_47 || l_94 == 0) ? 1 : 0), __extension__ ({ if (l_94 == &g_47 || l_94 == 0) ; else __assert_fail ("l_94 == &g_47 || l_94 == 0", "/tmp/tmpzcka0jiw.c", 1056, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *l_143 = &l_57;
        int32_t **l_144 = &l_143;
        int32_t **l_151 = &l_143;
        (*l_144) = l_143;
        for (g_21 = 13; (g_21 > 53); ++g_21)
        {
            (**l_144) = 0x947EB498L;
        }
        (*l_143) ^= 0x6B1C03A7L;
        (**g_149) &= ((((void*)0 != p_45) > (safe_sub_func_int32_t_s_s(((*l_143) = ((-10L) > (0xAC90574DL >= (g_149 == l_151)))), l_68))) & (l_103 = ((safe_rshift_func_uint16_t_u_s(l_68, (+(safe_sub_func_uint16_t_u_u(0x765FL, 1UL))))) > l_103)));
    }
    ((void) sizeof ((l_55 == &g_21 || l_55 == &g_56) ? 1 : 0), __extension__ ({ if (l_55 == &g_21 || l_55 == &g_56) ; else __assert_fail ("l_55 == &g_21 || l_55 == &g_56", "/tmp/tmpzcka0jiw.c", 1072, __extension__ __PRETTY_FUNCTION__); }));
    l_159 = g_157;
    return l_160;
}
inline static int16_t func_58(uint8_t p_59, int32_t p_60, int64_t p_61, uint32_t p_62)
{
    int8_t l_85 = (-10L);
    int32_t *l_86 = &g_47;
    struct S2 *l_88 = (void*)0;
    struct S2 *l_89 = (void*)0;
    struct S2 *l_90 = (void*)0;
    struct S2 *l_91 = &g_87;
    int32_t **l_92 = &l_86;
    (*l_86) |= ((~l_85) && p_61);
    (*l_91) = g_87;
    (*l_92) = &g_47;
    (*l_92) = &g_47;
    return p_61;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10;
    csmith_sink_ = g_21;
    csmith_sink_ = g_47;
    csmith_sink_ = g_54;
    csmith_sink_ = g_56;
    csmith_sink_ = g_87.f0;
    csmith_sink_ = g_87.f1;
    csmith_sink_ = g_87.f2;
    csmith_sink_ = g_87.f3;
    csmith_sink_ = g_87.f4;
    csmith_sink_ = g_133;
    csmith_sink_ = g_158.f0;
    csmith_sink_ = g_158.f1;
    csmith_sink_ = g_158.f2;
    csmith_sink_ = g_158.f3;
    csmith_sink_ = g_158.f4;
    csmith_sink_ = g_158.f5;
    csmith_sink_ = g_158.f6;
    csmith_sink_ = g_158.f7;
    csmith_sink_ = g_158.f8;
    csmith_sink_ = g_413;
    csmith_sink_ = g_415;
    csmith_sink_ = g_422;
    csmith_sink_ = g_425;
    csmith_sink_ = g_426;
    csmith_sink_ = g_432;
    csmith_sink_ = g_434;
    csmith_sink_ = g_454.f0;
    csmith_sink_ = g_468;
    csmith_sink_ = g_526;
    csmith_sink_ = g_532;
    csmith_sink_ = g_1010;
    csmith_sink_ = g_1015;
    csmith_sink_ = g_1016;
    csmith_sink_ = g_1018;
    csmith_sink_ = g_1200.f0;
    csmith_sink_ = g_1233;
    csmith_sink_ = g_1353;
    csmith_sink_ = g_1571;
    csmith_sink_ = g_1573;
    csmith_sink_ = g_1587;
    csmith_sink_ = g_1614;
    csmith_sink_ = g_1620;
    csmith_sink_ = g_1912;
    csmith_sink_ = g_2080;
    csmith_sink_ = g_2088;
    csmith_sink_ = g_2097;
    csmith_sink_ = g_2115;
    csmith_sink_ = g_2125;
    csmith_sink_ = g_2171;
    csmith_sink_ = g_2271;
    csmith_sink_ = g_2498;
    csmith_sink_ = g_2725;
    csmith_sink_ = g_2771;
    csmith_sink_ = g_2955;
    csmith_sink_ = g_3054;
    csmith_sink_ = g_3210;
    csmith_sink_ = g_3348;
    csmith_sink_ = g_3357;
    platform_main_end(0,0);
    return 0;
}
