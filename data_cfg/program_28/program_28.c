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
static int16_t g_9 = (-4L);
static int32_t g_21 = 0x440874B2L;
static int32_t g_31 = 0x7BDD4840L;
static int32_t g_82 = 0L;
static int8_t g_95 = 0x29L;
static int32_t g_128 = 0x90DD0679L;
static int8_t g_140 = 0x24L;
static uint32_t g_154 = 18446744073709551615UL;
static int32_t *g_166 = &g_21;
static int32_t **g_165 = &g_166;
static uint32_t g_210 = 4294967293UL;
static uint16_t g_289 = 0xF6A6L;
static int16_t g_322 = 0x65B9L;
static int32_t g_360 = 7L;
static int32_t g_363 = 1L;
static uint32_t g_366 = 0xAB9AC39EL;
static int8_t g_433 = 0x53L;
static int16_t g_435 = 1L;
static uint32_t g_436 = 0xD68EFFDFL;
static int8_t g_501 = 0x67L;
static uint8_t g_597 = 0x34L;
static uint8_t g_626 = 0x98L;
static uint8_t g_782 = 0xF0L;
static uint16_t func_1(void);
static int32_t * func_2(int32_t * p_3);
static int32_t * func_4(int32_t * p_5, int32_t * p_6, uint32_t p_7, int32_t p_8);
static int16_t func_10(uint32_t p_11, uint32_t p_12, int32_t * p_13);
static uint16_t func_24(int32_t p_25, int32_t * p_26, int32_t * p_27, int32_t * p_28);
static int32_t func_34(int32_t * p_35, uint32_t p_36, uint8_t p_37);
static uint32_t func_41(uint16_t p_42);
static int16_t func_43(int32_t * p_44, uint16_t p_45, uint32_t p_46);
static uint8_t func_66(int16_t p_67, int32_t * p_68, int32_t p_69, uint8_t p_70, int16_t p_71);
static int16_t func_75(uint8_t p_76, int32_t * p_77, uint32_t p_78, int8_t p_79);
static uint16_t func_1(void)
{
    int32_t *l_20 = &g_21;
    int32_t *l_833 = &g_128;
    int32_t *l_834 = &g_21;
    int32_t **l_910 = &l_834;
    (*l_910) = func_2(func_4(((((g_9 | (func_10((safe_sub_func_int8_t_s_s(g_9, (safe_mod_func_int32_t_s_s((-10L), (safe_add_func_uint16_t_u_u(((l_20 == &g_21) != ((safe_mul_func_int16_t_s_s(g_21, (((((*l_20) , ((g_21 && func_24(((*l_20) <= 0x96L), l_20, l_20, &g_21)) || g_436)) , l_833) == l_834) | g_501))) ^ g_21)), (*l_834))))))), (*l_20), l_20) | 0xF397L)) , g_140) , 0x1FC4L) , (*g_165)), l_20, (*l_834), (*l_20)));
    return g_95;
}
static int32_t * func_2(int32_t * p_3)
{
    int32_t *l_842 = (void*)0;
    int32_t l_843 = 0L;
    int8_t l_853 = 0L;
    int32_t *l_865 = &g_82;
    uint32_t l_870 = 4294967293UL;
    int32_t ***l_878 = (void*)0;
    int32_t *l_879 = &g_31;
    if ((((((((safe_lshift_func_int8_t_s_u(((((safe_mul_func_uint8_t_u_u(((l_842 != (((l_843 | (safe_sub_func_int16_t_s_s(0xC8E4L, g_366))) | (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((+l_843), 5)), (safe_mod_func_int32_t_s_s((((g_435 , func_4(&l_843, (g_140 , p_3), g_95, l_843)) != p_3) , (-4L)), g_782))))) , &l_843)) & l_853), 4UL)) || l_843) <= 0x4BL) >= g_436), l_843)) ^ 0x03EC2F4BL) | g_82) | 0x6DL) && l_843) == l_853) | g_210))
    {
        (*p_3) &= (&p_3 != &g_166);
    }
    else
    {
        int16_t l_856 = 0x9600L;
        int32_t l_857 = (-1L);
        l_857 = (safe_lshift_func_uint8_t_u_s(((&p_3 == (void*)0) ^ 0xCD453771L), (l_856 , l_853)));
    }
    (*l_865) |= ((((g_626 > (l_853 <= ((~0xC692L) | ((void*)0 != &g_166)))) && ((safe_rshift_func_uint8_t_u_s(l_853, (((((g_501 != (safe_add_func_uint16_t_u_u((&g_166 == (void*)0), g_31))) <= 0L) >= g_21) | g_433) || g_322))) | g_289)) | (*p_3)) >= 65535UL);
    (*l_879) &= (((safe_lshift_func_int8_t_s_s(g_95, 7)) , 0x14L) != (safe_add_func_uint32_t_u_u((l_870 == (((safe_add_func_uint8_t_u_u((((g_363 == ((!((+((!(((((safe_rshift_func_uint16_t_u_u((0xAB81L > 0x4E56L), ((void*)0 == l_878))) && ((&g_166 != &p_3) <= (*l_865))) | g_436) , g_322) | g_597)) == (*l_865))) > g_154)) < 0xF41F73D8L)) , g_95) , g_597), 0x7BL)) <= g_366) , g_501)), g_289)));
    (*l_865) = (g_501 , ((~(safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((+(((void*)0 == &g_166) > (safe_add_func_int32_t_s_s((~(safe_sub_func_int16_t_s_s((+((((safe_sub_func_int8_t_s_s(0xCFL, (65534UL < (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((*l_879), ((-1L) <= (*l_879)))) , (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s(((*l_865) & g_360), (*l_865))) == (*l_865)) , (*l_865)) == (*l_879)), (*p_3))), 6)), 15))), (*l_879))) < (-5L)), (*l_879)))))) , (*l_865)) < (*l_865)) != 0UL)), g_9))), 0xC207FA35L)))), 0)), g_360)), (*l_865)))) >= (*l_879)));
    return p_3;
}
static int32_t * func_4(int32_t * p_5, int32_t * p_6, uint32_t p_7, int32_t p_8)
{
    int32_t *l_835 = &g_363;
    (*l_835) &= (g_21 && ((&g_165 != (void*)0) || g_360));
    (*l_835) = (g_289 < ((2L > (*l_835)) && (safe_rshift_func_uint16_t_u_u(0xD5C9L, 13))));
    (*g_165) = (*g_165);
    p_5 = p_5;
    return l_835;
}
static int16_t func_10(uint32_t p_11, uint32_t p_12, int32_t * p_13)
{
    (*g_165) = (void*)0;
    return p_12;
}
static uint16_t func_24(int32_t p_25, int32_t * p_26, int32_t * p_27, int32_t * p_28)
{
    uint16_t l_59 = 65529UL;
    int32_t l_358 = 0xBE5D540DL;
    int32_t ***l_485 = (void*)0;
    int8_t l_558 = 0x81L;
    int32_t **l_618 = &g_166;
    int16_t l_693 = 0x5F93L;
    int32_t l_735 = 0xA63157CBL;
    int32_t l_743 = 1L;
    int32_t l_815 = 0xDD908C5EL;
    uint8_t l_816 = 250UL;
    int32_t l_827 = 0xC8160CCBL;
    int32_t *l_830 = &l_827;
    for (p_25 = 0; (p_25 < 7); p_25++)
    {
        uint32_t l_40 = 18446744073709551615UL;
        int32_t ***l_382 = &g_165;
        int32_t l_385 = (-4L);
        int32_t l_386 = 0x70FD2532L;
        int32_t l_399 = 0x412EF527L;
        int8_t l_472 = 0x4EL;
        uint32_t l_507 = 4294967287UL;
        uint32_t l_604 = 4294967291UL;
        int32_t l_619 = 9L;
        int32_t l_658 = 0x0E3DA295L;
        int32_t *l_808 = &l_399;
        for (g_31 = 0; (g_31 >= (-11)); g_31 = safe_sub_func_int16_t_s_s(g_31, 9))
        {
            int32_t *l_47 = &g_31;
            int32_t l_511 = 0L;
            int32_t l_526 = (-1L);
            int32_t l_532 = 0xACACCCADL;
            int32_t l_543 = 0x4312D83DL;
            int32_t l_567 = 0xE02231B2L;
            if (func_34(((safe_add_func_int32_t_s_s(l_40, func_41(((p_25 || (func_43(l_47, l_40, (((safe_mul_func_int8_t_s_s((p_25 , (safe_lshift_func_int8_t_s_u((0UL == 1L), (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((-10L))), 3)), (safe_mul_func_int16_t_s_s(g_31, l_59))))))), g_9)) , l_59) < g_9)) | p_25)) , l_40)))) , (void*)0), p_25, l_40))
            {
                int32_t *l_354 = &g_128;
                int32_t *l_355 = (void*)0;
                int32_t *l_356 = &g_128;
                int32_t *l_357 = &g_128;
                int32_t *l_359 = &g_82;
                int32_t *l_361 = &g_82;
                int32_t *l_362 = &g_128;
                int32_t *l_364 = (void*)0;
                int32_t *l_365 = &l_358;
                int32_t l_400 = 0x02A964E4L;
                int32_t l_410 = 0x5BF45067L;
                p_27 = &p_25;
                g_366--;
                if ((0L & ((p_25 > (-5L)) ^ p_25)))
                {
                    int32_t ***l_383 = &g_165;
                    int32_t l_392 = 0L;
                    int32_t l_431 = 0xFF01ADFFL;
                    int32_t *l_439 = &l_399;
                    int32_t *l_440 = &g_363;
                    int32_t *l_441 = &l_358;
                    int32_t *l_442 = (void*)0;
                    int32_t *l_443 = &l_386;
                    int32_t *l_444 = &g_363;
                    int32_t *l_445 = &g_128;
                    int32_t *l_446 = &g_82;
                    int32_t *l_447 = &g_363;
                    int32_t *l_448 = &l_431;
                    int32_t *l_449 = &g_128;
                    int32_t *l_450 = &l_400;
                    int32_t *l_451 = (void*)0;
                    int32_t *l_452 = (void*)0;
                    int32_t *l_453 = &g_363;
                    int32_t *l_454 = &g_82;
                    int32_t *l_455 = (void*)0;
                    int32_t *l_456 = (void*)0;
                    uint16_t l_457 = 0x106DL;
                    for (g_95 = (-19); (g_95 >= (-4)); ++g_95)
                    {
                        uint32_t l_384 = 4294967287UL;
                        int32_t *l_387 = &g_363;
                        int32_t *l_388 = &g_82;
                        int32_t *l_389 = &g_363;
                        int32_t *l_390 = &g_363;
                        int32_t *l_391 = &l_386;
                        int32_t *l_393 = &l_386;
                        int32_t *l_394 = &l_385;
                        int32_t *l_395 = (void*)0;
                        int32_t *l_396 = &g_363;
                        int32_t *l_397 = &l_385;
                        int32_t *l_398 = &g_82;
                        int32_t *l_401 = &l_385;
                        int32_t *l_402 = &l_400;
                        int32_t *l_403 = &l_400;
                        int32_t *l_404 = &l_386;
                        int32_t *l_405 = &l_400;
                        int32_t *l_406 = &l_358;
                        int32_t l_407 = 0L;
                        int32_t *l_408 = (void*)0;
                        int32_t *l_409 = &l_407;
                        int32_t *l_411 = &l_407;
                        int32_t *l_412 = &g_363;
                        int32_t *l_413 = (void*)0;
                        int32_t *l_414 = &l_399;
                        int32_t *l_415 = &l_400;
                        int32_t *l_416 = (void*)0;
                        int32_t *l_417 = (void*)0;
                        int32_t *l_418 = &l_386;
                        int32_t *l_419 = &g_128;
                        int32_t *l_420 = &l_399;
                        int32_t *l_421 = &l_410;
                        int32_t *l_422 = &l_407;
                        int32_t *l_423 = &l_358;
                        int32_t *l_424 = &l_392;
                        int32_t *l_425 = &g_128;
                        int32_t *l_426 = &l_386;
                        int32_t *l_427 = &l_386;
                        int32_t *l_428 = &g_128;
                        int32_t *l_429 = &g_363;
                        int32_t *l_430 = &l_410;
                        int32_t *l_432 = (void*)0;
                        int32_t *l_434 = &l_431;
                        l_384 = ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(0xD5L, (safe_lshift_func_int16_t_s_u((254UL | 0x69L), 15)))), 2)) & ((((1UL ^ ((safe_mul_func_int8_t_s_s(g_140, (((l_40 > ((safe_unary_minus_func_uint8_t_u(((((safe_mod_func_int8_t_s_s(((((((l_382 != &g_165) , l_383) == (void*)0) || 0x9BE9L) & g_366) , p_25), 4L)) < 0x5CF9L) > p_25) && (-5L)))) == (*l_361))) & g_128) > (**g_165)))) , 0xEBE08290L)) == (*l_357)) != (*g_166)) , p_25));
                        --g_436;
                        if ((*p_27))
                            break;
                    }
                    l_457--;
                    (*l_450) ^= ((p_25 , (((*l_47) & (*l_440)) || ((((safe_mod_func_uint16_t_u_u(0x53DBL, (((((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u((p_25 & ((p_25 | ((safe_sub_func_uint16_t_u_u(p_25, 0x839CL)) ^ ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((p_25 != (*l_47)) == 253UL) && (***l_382)), 15)), 0xCDA2L)) , g_9))) < g_366)), (***l_382))) | 0x7527L) , p_25), 6)) != 0x27ABL) , (-8L)) < g_95) & g_128))) < 0x0AL) , 4294967288UL) , l_472))) , l_358);
                }
                else
                {
                    (*l_354) ^= (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((***l_382), g_82)) & p_25), ((0x12EBCB51L == ((safe_add_func_uint8_t_u_u((*l_47), ((safe_rshift_func_uint16_t_u_s(l_358, 14)) ^ 65530UL))) < 1UL)) , (4294967295UL && (*g_166)))));
                    (*l_357) = ((***l_382) , (((((((0x2A8FL <= (safe_rshift_func_uint16_t_u_u(((void*)0 != &g_166), 14))) < (&p_28 != (void*)0)) && ((safe_add_func_uint16_t_u_u(p_25, 6UL)) , (((void*)0 != l_485) | g_95))) < 0xB4D117C2L) , (void*)0) == (void*)0) >= 3UL));
                    for (l_358 = 0; (l_358 < (-2)); --l_358)
                    {
                        (*l_356) = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((1L == 0xADD3L), ((p_25 != 0x8A185862L) , p_25))), ((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_31, 6)), p_25)), (0x8EL < ((**l_382) != (void*)0)))) & 1L)));
                    }
                }
            }
            else
            {
                int8_t l_506 = (-1L);
                int32_t *l_508 = &g_128;
                int32_t l_588 = 0x71C3BC40L;
                (*l_508) &= (p_25 && (p_25 > (!((*g_166) >= ((((g_140 & ((safe_mul_func_int8_t_s_s(((((g_501 < ((((safe_lshift_func_int16_t_s_s(p_25, 15)) == (0xA55DL > (safe_lshift_func_uint16_t_u_s(l_506, 14)))) ^ (0xF85EL | g_322)) || g_21)) >= p_25) != 0x1FL) | (**g_165)), g_140)) <= l_507)) , 0xCFL) <= 0xA4L) , g_210)))));
                for (g_140 = 0; (g_140 == (-2)); g_140--)
                {
                    int32_t *l_512 = &g_82;
                    int32_t *l_513 = &l_386;
                    int32_t *l_514 = &l_385;
                    int32_t *l_515 = (void*)0;
                    int32_t *l_516 = &l_358;
                    int32_t *l_517 = (void*)0;
                    int32_t *l_518 = &l_386;
                    int32_t *l_519 = &l_385;
                    int32_t *l_520 = &g_82;
                    int32_t l_521 = (-10L);
                    int32_t *l_522 = (void*)0;
                    int32_t *l_523 = &g_128;
                    int32_t *l_524 = &l_358;
                    int32_t *l_525 = &g_363;
                    int32_t *l_527 = &g_363;
                    int32_t *l_528 = (void*)0;
                    int32_t *l_529 = &l_521;
                    int32_t *l_530 = &l_511;
                    int32_t *l_531 = (void*)0;
                    int32_t *l_533 = (void*)0;
                    int32_t *l_534 = &g_128;
                    int32_t *l_535 = &g_128;
                    int32_t *l_536 = (void*)0;
                    int32_t *l_537 = &l_358;
                    int32_t *l_538 = &l_526;
                    int32_t *l_539 = &g_128;
                    int32_t *l_540 = &l_521;
                    int32_t *l_541 = &l_399;
                    int32_t *l_542 = &l_526;
                    int32_t *l_544 = &l_526;
                    int32_t *l_545 = &l_386;
                    int32_t *l_546 = &g_82;
                    int32_t *l_547 = (void*)0;
                    int32_t *l_548 = &l_386;
                    int32_t *l_549 = &l_521;
                    int32_t *l_550 = &l_532;
                    int32_t *l_551 = &l_358;
                    int32_t *l_552 = (void*)0;
                    int32_t *l_553 = &l_399;
                    int32_t *l_554 = &l_385;
                    int32_t *l_555 = &l_399;
                    int32_t *l_556 = &l_511;
                    int32_t *l_557 = &g_82;
                    int32_t *l_559 = &l_532;
                    int32_t *l_560 = &g_128;
                    int32_t *l_561 = &g_363;
                    int32_t *l_562 = &l_385;
                    int32_t *l_563 = &l_386;
                    int32_t *l_564 = &g_128;
                    int32_t *l_565 = &l_511;
                    int32_t *l_566 = &l_526;
                    int32_t *l_568 = &l_543;
                    int32_t l_569 = 0xF228F18FL;
                    int32_t *l_570 = &l_532;
                    int32_t *l_571 = (void*)0;
                    int32_t *l_572 = (void*)0;
                    int32_t *l_573 = &l_358;
                    int32_t *l_574 = &l_526;
                    int32_t *l_575 = &l_526;
                    int32_t *l_576 = &l_521;
                    int32_t *l_577 = &l_386;
                    int32_t *l_578 = &l_385;
                    int32_t *l_579 = &l_521;
                    int32_t *l_580 = &l_399;
                    int32_t *l_581 = &l_399;
                    int32_t *l_582 = &l_385;
                    int32_t *l_583 = (void*)0;
                    int32_t *l_584 = (void*)0;
                    int32_t *l_585 = &l_358;
                    int32_t *l_586 = &l_521;
                    int32_t *l_587 = &g_82;
                    int32_t *l_589 = (void*)0;
                    int32_t *l_590 = &l_399;
                    int32_t *l_591 = &l_399;
                    int32_t *l_592 = &l_386;
                    int32_t *l_593 = (void*)0;
                    int32_t *l_594 = &l_543;
                    int32_t *l_595 = (void*)0;
                    int32_t *l_596 = &g_128;
                    g_597++;
                }
                if ((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s((*l_508), l_604)) | (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((((9UL >= ((safe_sub_func_uint8_t_u_u(0xA8L, (*l_47))) > ((safe_mod_func_int32_t_s_s(((*l_47) , ((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(250UL, 6)), ((&g_165 == ((((g_140 , 0xA8F70EA9L) , &l_47) != l_618) , &g_165)) > 0xAD76L))) > (-4L)))) >= p_25) > (**l_618)) , (**g_165))), (*l_47))) <= (***l_382)))) < p_25) , p_25) && p_25) ^ p_25), g_210)), 65530UL))) , &g_166) == &p_27), l_619)))
                {
                    uint32_t l_637 = 0xD7B6BB72L;
                    g_626 &= ((*p_26) >= (((safe_mod_func_int32_t_s_s((((*p_26) >= (((-4L) == (0L > (&g_166 != &p_27))) == (safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((0x7A89L & p_25), 4UL)) > p_25), 0x99L)))) , 1L), 0xB490EE6CL)) , 0xDF625D81L) != 0xAA1B3EB4L));
                    for (l_59 = (-10); (l_59 < 20); ++l_59)
                    {
                        int32_t *l_629 = &l_385;
                        int32_t *l_630 = &l_567;
                        int32_t *l_631 = &l_619;
                        int32_t *l_632 = &l_386;
                        int32_t *l_633 = &l_526;
                        int32_t *l_634 = &l_543;
                        int32_t *l_635 = &l_399;
                        int32_t *l_636 = &l_567;
                        l_637++;
                        l_567 = (safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((*l_47), 1UL)) == (safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((&l_634 != &g_166) & g_289) == (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((g_322 , g_95) | (((~(~((g_289 >= (*l_47)) > (*p_26)))) && l_637) ^ l_658)), (*l_508))) , g_210), p_25))) & 5UL), (*p_26))), (*l_508))) <= 6UL) > p_25), 0x63CB65DEL))) == 5UL) <= g_128), p_25)) < p_25) , (*l_47)), 0xB4D0L));
                        return g_433;
                    }
                }
                else
                {
                    int16_t l_676 = 0x1228L;
                    (*l_508) = ((((((((((safe_rshift_func_uint16_t_u_u(p_25, ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((((((safe_rshift_func_int16_t_s_s((&g_166 != &g_166), 8)) , (g_154 && (*l_508))) , (safe_rshift_func_uint16_t_u_u(((*g_165) != ((safe_lshift_func_uint8_t_u_u((*l_508), 4)) , &p_25)), 12))) , (*g_166)) & (*g_166)) != 248UL), 65535UL)) , p_25), p_25)) & 8UL))) ^ (***l_382)) , &p_25) != (*g_165)) >= (*p_28)) >= 3UL) < (**g_165)) < (***l_382)) && (*p_28)) == 0xE8A4B93AL);
                    for (l_40 = 0; (l_40 <= 20); l_40++)
                    {
                        uint32_t l_673 = 0x37567B24L;
                        --l_673;
                        if ((**g_165))
                            break;
                        if ((***l_382))
                            break;
                    }
                    l_676 |= (-1L);
                }
            }
            if (((g_82 == 0xC0F30DADL) , (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(0x09B6L)) <= (safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((*p_26) && (!(*p_28))), 0)) , &g_166) == (*l_382)), (l_693 ^ ((*l_382) == (void*)0))))), g_436)) == 0x65B7B6F8L) != 8L), (-9L))) ^ 0x4BL), 15)), 0x5C61110AL)), g_289))))
            {
                int32_t *l_694 = (void*)0;
                int32_t *l_695 = &g_82;
                int32_t *l_696 = (void*)0;
                int32_t *l_697 = &l_386;
                int32_t *l_698 = &l_567;
                int32_t *l_699 = &l_386;
                int32_t *l_700 = &l_567;
                int32_t *l_701 = &l_386;
                int32_t *l_702 = &l_619;
                int32_t *l_703 = &l_526;
                int32_t l_704 = 0x60A48CD3L;
                int32_t *l_705 = &l_386;
                int32_t *l_706 = &l_511;
                int32_t *l_707 = &l_704;
                int32_t *l_708 = &g_128;
                int32_t *l_709 = &g_82;
                int32_t *l_710 = &l_532;
                int32_t *l_711 = (void*)0;
                int32_t *l_712 = &g_82;
                int32_t *l_713 = &l_619;
                int32_t *l_714 = &l_386;
                int32_t *l_715 = &g_128;
                int32_t l_716 = 0L;
                int32_t *l_717 = &l_399;
                int32_t *l_718 = &g_363;
                int32_t *l_719 = &l_526;
                int32_t *l_720 = &g_82;
                int32_t *l_721 = &l_704;
                int32_t *l_722 = &l_386;
                int32_t *l_723 = (void*)0;
                int32_t *l_724 = &l_543;
                int32_t *l_725 = &l_385;
                int32_t *l_726 = &l_526;
                int32_t *l_727 = &l_526;
                int32_t *l_728 = &l_399;
                int32_t *l_729 = (void*)0;
                int32_t *l_730 = (void*)0;
                int32_t *l_731 = &g_82;
                int32_t *l_732 = (void*)0;
                int32_t *l_733 = &l_543;
                int32_t *l_734 = &l_543;
                int32_t *l_736 = &l_543;
                int32_t *l_737 = &l_567;
                int32_t *l_738 = (void*)0;
                int32_t l_739 = 2L;
                int32_t *l_740 = &l_526;
                int32_t *l_741 = &l_399;
                int32_t *l_742 = &g_363;
                int32_t *l_744 = &g_363;
                int32_t *l_745 = (void*)0;
                int32_t *l_746 = &l_704;
                int32_t *l_747 = &l_704;
                int32_t *l_748 = (void*)0;
                int32_t *l_749 = &l_743;
                int32_t *l_750 = &l_567;
                int32_t *l_751 = &l_511;
                int32_t l_752 = 4L;
                int32_t *l_753 = &l_752;
                int32_t *l_754 = &l_704;
                int32_t *l_755 = (void*)0;
                int32_t *l_756 = (void*)0;
                int32_t *l_757 = &l_399;
                int32_t l_758 = 0x839F4D44L;
                int32_t *l_759 = &l_526;
                int32_t *l_760 = &l_739;
                int32_t *l_761 = &g_363;
                int32_t *l_762 = (void*)0;
                int32_t *l_763 = &l_743;
                int32_t *l_764 = &l_743;
                int32_t *l_765 = (void*)0;
                int32_t *l_766 = &l_526;
                int32_t *l_767 = &l_743;
                int32_t *l_768 = &g_363;
                int32_t *l_769 = &l_619;
                int32_t *l_770 = &l_716;
                int32_t *l_771 = &l_743;
                int32_t *l_772 = &l_543;
                int32_t *l_773 = &g_82;
                int32_t *l_774 = &l_567;
                int32_t *l_775 = &l_619;
                int32_t *l_776 = &l_743;
                int32_t *l_777 = (void*)0;
                int32_t *l_778 = &l_704;
                int32_t *l_779 = &l_704;
                int32_t *l_780 = (void*)0;
                int32_t *l_781 = &l_735;
                if ((*l_47))
                    break;
                --g_782;
                if ((**g_165))
                    break;
            }
            else
            {
                uint32_t l_798 = 0x871C2EA1L;
                int32_t *l_806 = &l_532;
                int32_t l_807 = 0xDBCB59ABL;
                for (l_567 = 0; (l_567 != 23); ++l_567)
                {
                    uint32_t l_805 = 0UL;
                    (*l_618) = (*g_165);
                    (*g_165) = ((((safe_mul_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((((safe_mul_func_int16_t_s_s(((((safe_unary_minus_func_int8_t_s(g_140)) && 0xC15DDF59L) <= ((((((safe_mul_func_uint8_t_u_u((***l_382), (***l_382))) != l_798) , (safe_add_func_int16_t_s_s(g_95, (safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u(((p_25 == l_805) > (0x8A09L & 0x740EL)), g_366)) , 1UL) & 0xCF1CL), 8))))) , l_805) , (*l_47)) > 0x1C0EL)) | l_805), (***l_382))) || (*l_47)) , (void*)0) == &p_25) > p_25), l_798)), g_82)) < p_25) , l_798) < 0x4A5FECDDL), g_21)) , 1UL) >= 0x09B29BD1L) , &p_25);
                }
                (*l_806) = 1L;
                if ((*p_28))
                    break;
                (*l_806) = ((-1L) != (l_807 && 0x9C2A4E8AL));
            }
        }
        (*l_808) |= (*g_166);
    }
    l_358 |= (((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((0xA0F8L == (((p_25 ^ p_25) < ((g_433 > (**l_618)) | (p_25 , (p_25 , l_815)))) && g_360)), p_25)) == g_597) < g_433), g_154)) | 0x40L), 0)) | (**l_618)) , l_816) != g_360) , 0xB1972C69L);
    (*l_830) = ((0xFDE2L || (g_366 < 4L)) ^ (((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((-1L) == (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_827, g_128)), 0x4EFBL))), (((**l_618) && ((safe_mul_func_uint16_t_u_u(p_25, 0UL)) || 1L)) < p_25))) == 0x4017B7A4L), 7)), p_25)) < g_363) && 0L) , g_597) , p_25));
    g_363 = (safe_sub_func_int32_t_s_s((*p_26), (*l_830)));
    return p_25;
}
static int32_t func_34(int32_t * p_35, uint32_t p_36, uint8_t p_37)
{
    int32_t ***l_205 = &g_165;
    uint32_t l_211 = 0UL;
    uint32_t l_212 = 5UL;
    int32_t l_282 = 4L;
    int32_t l_319 = 0x773BA691L;
    int32_t l_325 = (-9L);
    int8_t l_351 = 0x91L;
    if (((((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((0x121EC5D8L > (((((&g_165 == l_205) == g_154) >= ((l_205 != (((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((***l_205) || g_210) , (((((***l_205) && (0UL && p_36)) != g_82) || (**g_165)) == p_37)), 0x2A42L)), (***l_205))) , l_211) , (void*)0)) | p_36)) , (*l_205)) == &p_35)), 2)), l_212)) , p_36) , p_37) >= (***l_205)))
    {
        uint32_t l_233 = 0xECBCE0EEL;
        uint16_t l_261 = 1UL;
        int32_t l_273 = 0x4D21E74EL;
        if ((((safe_lshift_func_uint16_t_u_u(p_36, 7)) , (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u(p_36, 15)) , (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u((((((((safe_rshift_func_int8_t_s_s(1L, (((***l_205) > (p_36 , p_37)) == (((g_95 , ((0x13L || (safe_sub_func_int32_t_s_s((l_205 == l_205), g_128))) , g_154)) == p_36) , g_128)))) > (***l_205)) | 249UL) <= l_233) , &g_166) != &p_35) & g_154), g_210)) ^ 0xDDL) != (-8L)), (***l_205))) || p_36) , p_37), g_82))) , 0L) , 0L), 0x19L)) < 0xDB1C9D1CL) >= l_233), g_95)) < g_31), g_95))) | 0x2A01D187L))
        {
            uint32_t l_243 = 1UL;
            for (g_95 = (-4); (g_95 < (-26)); g_95 = safe_sub_func_int16_t_s_s(g_95, 6))
            {
                int8_t l_252 = (-1L);
                uint32_t l_260 = 3UL;
                int32_t *l_274 = &g_82;
                int32_t *l_275 = &g_128;
                int32_t *l_276 = &g_82;
                int32_t *l_277 = &g_82;
                int32_t *l_278 = &g_82;
                int32_t *l_279 = &g_128;
                int32_t *l_280 = &g_82;
                int32_t *l_281 = &l_273;
                int32_t *l_283 = &g_82;
                int32_t *l_284 = &g_128;
                int32_t *l_285 = &g_128;
                int32_t *l_286 = (void*)0;
                int32_t *l_287 = &l_282;
                int32_t *l_288 = &g_82;
                for (g_128 = (-14); (g_128 <= (-19)); g_128 = safe_sub_func_int16_t_s_s(g_128, 4))
                {
                    int32_t *l_255 = (void*)0;
                    int32_t *l_256 = (void*)0;
                    g_82 = (((safe_mul_func_uint8_t_u_u(p_36, ((safe_mul_func_uint16_t_u_u(0xCD97L, ((g_21 && ((((!l_243) , &g_165) != (((~(safe_mul_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s(1L, p_36)) != ((((~(safe_mul_func_int16_t_s_s(l_252, ((safe_rshift_func_int16_t_s_s(0x9091L, 4)) != 0x898B9DDCL)))) == 0x0010L) > p_36) < g_140)) > g_140) , p_37), g_128))) , p_36) , &g_165)) ^ p_37)) | 0x25EB2E64L))) , p_36))) == g_21) < (-6L));
                }
                g_82 ^= ((p_35 == p_35) , ((+(((0UL != l_233) && ((((((void*)0 == &p_35) >= (safe_mul_func_uint8_t_u_u(0x4FL, 255UL))) || p_36) || 255UL) ^ l_260)) > l_261)) != l_233));
                for (l_211 = 22; (l_211 <= 18); --l_211)
                {
                    int32_t *l_272 = &g_82;
                    (*l_272) |= ((((1UL ^ g_154) , &p_35) == (void*)0) <= (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x36L, (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((l_233 > p_37) > g_95), 4)), ((g_95 || g_95) > 0x8F9DL))))), l_261)));
                }
                --g_289;
            }
        }
        else
        {
            uint16_t l_331 = 65535UL;
            int32_t **l_352 = &g_166;
            for (l_212 = 8; (l_212 <= 8); l_212++)
            {
                int32_t *l_294 = &l_273;
                int32_t *l_295 = (void*)0;
                int32_t *l_296 = &l_282;
                int32_t *l_297 = &g_128;
                int32_t *l_298 = &g_82;
                int32_t *l_299 = (void*)0;
                int32_t *l_300 = (void*)0;
                int32_t *l_301 = (void*)0;
                int32_t *l_302 = (void*)0;
                int32_t *l_303 = &g_128;
                int32_t *l_304 = &g_82;
                int32_t *l_305 = &l_282;
                int32_t *l_306 = &l_282;
                int32_t *l_307 = (void*)0;
                int32_t *l_308 = (void*)0;
                int32_t l_309 = 0L;
                int32_t *l_310 = &g_82;
                int32_t *l_311 = &l_282;
                int32_t *l_312 = &g_82;
                int32_t *l_313 = &l_282;
                int32_t *l_314 = &g_128;
                int32_t *l_315 = &g_128;
                int32_t *l_316 = &g_128;
                int32_t *l_317 = &l_309;
                int32_t *l_318 = &l_273;
                int32_t *l_320 = &l_309;
                int32_t *l_321 = &g_128;
                int32_t *l_323 = &l_282;
                int32_t *l_324 = (void*)0;
                int32_t *l_326 = &g_82;
                int32_t *l_327 = &l_282;
                int32_t *l_328 = &g_128;
                int32_t *l_329 = &g_82;
                int32_t *l_330 = &l_309;
                l_331--;
                (*l_205) = (((((safe_add_func_uint16_t_u_u((0x2465L != ((safe_lshift_func_uint8_t_u_s(((7L || (((0x6AL <= ((safe_add_func_uint32_t_u_u(((l_331 < (((void*)0 != &p_35) && (safe_rshift_func_uint16_t_u_s(((void*)0 == &g_165), 3)))) < (safe_sub_func_uint32_t_u_u((((!(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_uint16_t_u_u(l_331, 1)) , (*l_320)) >= (*g_166)) < 0x9A9DL), 1)) | 0x5F8BC2CCL), 0UL)) != 0x9EL) & g_154)) > p_36) >= p_36), p_36))), l_351)) <= g_140)) | g_322) , (***l_205))) || (*g_166)), p_37)) < (**g_165))), p_37)) != 4294967286UL) >= p_37) && p_36) , l_352);
            }
        }
    }
    else
    {
        int32_t *l_353 = &l_319;
        g_128 = (l_353 == (void*)0);
        return (***l_205);
    }
    return (***l_205);
}
static uint32_t func_41(uint16_t p_42)
{
    int32_t ***l_200 = &g_165;
    (*l_200) = &g_166;
    return p_42;
}
static int16_t func_43(int32_t * p_44, uint16_t p_45, uint32_t p_46)
{
    uint16_t l_83 = 65535UL;
    int32_t l_199 = 0x29873052L;
    for (p_46 = 29; (p_46 >= 42); ++p_46)
    {
        uint8_t l_74 = 2UL;
        for (p_45 = 0; (p_45 != 21); p_45 = safe_add_func_int16_t_s_s(p_45, 3))
        {
            int32_t *l_80 = &g_31;
            if ((safe_mod_func_uint16_t_u_u((func_66((((safe_mul_func_int16_t_s_s(g_31, l_74)) < func_75(g_21, l_80, g_9, g_21)) == ((l_83 ^ ((((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((l_74 , 0x1DL) || p_46), p_46)), g_21)) ^ g_9) & g_31) , l_83)) != 0x05L)), l_80, g_9, (*l_80), p_46) , l_74), (*l_80))))
            {
                if ((*g_166))
                    break;
            }
            else
            {
                int32_t *l_198 = &g_128;
                g_128 = 0x780F4AA1L;
                if ((**g_165))
                    continue;
                (*l_198) |= l_74;
            }
        }
    }
    l_199 = (*g_166);
    return g_82;
}
static uint8_t func_66(int16_t p_67, int32_t * p_68, int32_t p_69, uint8_t p_70, int16_t p_71)
{
    int16_t l_88 = 0x0CF6L;
    int32_t l_96 = 0xFB0C4F31L;
    int32_t l_100 = 1L;
    uint8_t l_102 = 0x59L;
    uint16_t l_157 = 0xCBFFL;
    int32_t *l_167 = &l_96;
    int32_t *l_168 = &l_96;
    int32_t *l_169 = &l_96;
    int32_t *l_170 = (void*)0;
    int32_t *l_171 = &l_96;
    int32_t *l_172 = &g_82;
    int32_t *l_173 = &g_82;
    int32_t *l_174 = &l_100;
    int32_t *l_175 = &l_100;
    int32_t *l_176 = (void*)0;
    int32_t *l_177 = (void*)0;
    int32_t *l_178 = (void*)0;
    int32_t *l_179 = &g_82;
    int32_t *l_180 = &l_100;
    int32_t l_181 = 0L;
    int32_t *l_182 = &l_96;
    int32_t *l_183 = &g_82;
    int32_t *l_184 = (void*)0;
    int32_t *l_185 = &l_96;
    int32_t *l_186 = &g_128;
    int32_t *l_187 = &l_96;
    int32_t l_188 = 0x66612900L;
    int32_t *l_189 = (void*)0;
    int32_t *l_190 = &l_181;
    int32_t *l_191 = &g_128;
    int32_t *l_192 = (void*)0;
    int32_t *l_193 = &l_188;
    int32_t *l_194 = &l_100;
    uint8_t l_195 = 253UL;
    if ((g_82 | ((l_88 , l_88) || ((g_31 , (g_31 , l_88)) || (p_71 < l_88)))))
    {
        for (l_88 = 0; (l_88 != (-16)); l_88 = safe_sub_func_uint16_t_u_u(l_88, 8))
        {
            int32_t *l_91 = &g_82;
            int32_t *l_92 = &g_82;
            int32_t *l_93 = &g_82;
            int32_t *l_94 = (void*)0;
            int32_t *l_97 = &l_96;
            int32_t *l_98 = (void*)0;
            int32_t *l_99 = &l_96;
            int32_t *l_101 = &g_82;
            ++l_102;
            (*l_101) = (-1L);
        }
    }
    else
    {
        int32_t *l_113 = &g_21;
        int32_t **l_112 = &l_113;
        int32_t *l_114 = (void*)0;
        int32_t *l_115 = &l_96;
        int32_t *l_116 = &l_96;
        int32_t *l_117 = &g_82;
        int32_t *l_118 = &g_82;
        int32_t *l_119 = &g_82;
        int32_t *l_120 = &g_82;
        int32_t *l_121 = &l_96;
        int32_t *l_122 = &l_100;
        int32_t *l_123 = &l_100;
        int32_t l_124 = 3L;
        int32_t *l_125 = &l_96;
        int32_t *l_126 = &l_96;
        int32_t *l_127 = &l_124;
        int32_t *l_129 = &l_100;
        int32_t *l_130 = (void*)0;
        int32_t *l_131 = (void*)0;
        int32_t *l_132 = &g_128;
        int32_t *l_133 = &l_124;
        int32_t l_134 = 0L;
        int32_t l_135 = 0x9D3D8B2FL;
        int32_t *l_136 = &g_128;
        int32_t *l_137 = (void*)0;
        int32_t l_138 = 0x7178D33FL;
        int32_t l_139 = (-1L);
        int32_t *l_141 = &l_135;
        int32_t *l_142 = &l_96;
        int32_t *l_143 = (void*)0;
        int32_t *l_144 = &g_128;
        int32_t *l_145 = (void*)0;
        int32_t *l_146 = &l_134;
        int32_t *l_147 = &l_124;
        int32_t *l_148 = (void*)0;
        int32_t *l_149 = &l_135;
        int32_t l_150 = 0x3BBBF133L;
        int32_t *l_151 = (void*)0;
        int32_t *l_152 = &g_128;
        int32_t *l_153 = &l_124;
        for (p_70 = 0; (p_70 != 57); ++p_70)
        {
            int32_t *l_108 = &l_100;
            int32_t **l_107 = &l_108;
            int32_t *l_109 = &l_100;
            (*l_107) = &g_21;
            (*l_109) |= (**l_107);
            (*l_109) = (l_102 ^ (safe_rshift_func_uint8_t_u_s((**l_107), 1)));
        }
        (*l_112) = p_68;
        --g_154;
    }
    (*l_167) |= (l_157 == (0xFEL & (((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(4UL, g_154)), 6)) <= (safe_sub_func_uint32_t_u_u((((*p_68) , (l_102 ^ (((!(p_69 < (g_165 != &p_68))) || p_67) , 0x265DC7DFL))) , l_100), p_71))) != (-2L))));
    ++l_195;
    return p_71;
}
static int16_t func_75(uint8_t p_76, int32_t * p_77, uint32_t p_78, int8_t p_79)
{
    int32_t *l_81 = &g_82;
    (*l_81) ^= 0x1B167519L;
    return (*l_81);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_9;
    csmith_sink_ = g_21;
    csmith_sink_ = g_31;
    csmith_sink_ = g_82;
    csmith_sink_ = g_95;
    csmith_sink_ = g_128;
    csmith_sink_ = g_140;
    csmith_sink_ = g_154;
    csmith_sink_ = g_210;
    csmith_sink_ = g_289;
    csmith_sink_ = g_322;
    csmith_sink_ = g_360;
    csmith_sink_ = g_363;
    csmith_sink_ = g_366;
    csmith_sink_ = g_433;
    csmith_sink_ = g_435;
    csmith_sink_ = g_436;
    csmith_sink_ = g_501;
    csmith_sink_ = g_597;
    csmith_sink_ = g_626;
    csmith_sink_ = g_782;
    platform_main_end(0,0);
    return 0;
}
