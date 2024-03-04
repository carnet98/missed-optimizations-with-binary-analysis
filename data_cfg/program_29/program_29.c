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
static uint8_t g_11[9][4][7] = {{{0x1DL,255UL,0xD2L,255UL,0x1DL,0x51L,255UL},{251UL,0UL,0xD2L,0x7DL,255UL,1UL,248UL},{0x7DL,0xB3L,0xB1L,1UL,1UL,0xB1L,0xB3L},{251UL,0x7DL,0UL,255UL,0x17L,0xB1L,0x51L}},{{0x1DL,0UL,8UL,0xD2L,0x4BL,1UL,0x4BL},{255UL,0x4BL,0x4BL,255UL,2UL,0x51L,0xD2L},{0x51L,0x4BL,0x1DL,1UL,0xB1L,0UL,0x51L},{0x7DL,2UL,0xD2L,255UL,0xD2L,2UL,0x7DL}},{{0x4BL,255UL,2UL,0x51L,0xD2L,248UL,8UL},{255UL,248UL,0x1DL,0xD2L,0xB1L,0xB1L,0xD2L},{2UL,0xB3L,2UL,0x17L,0UL,255UL,248UL},{2UL,0x51L,0xD2L,248UL,8UL,0xB3L,255UL}},{{255UL,0x4BL,0UL,0UL,0x4BL,255UL,251UL},{0x4BL,0xD2L,8UL,0UL,0x1DL,0xB1L,0UL},{0x7DL,255UL,1UL,248UL,0x51L,248UL,1UL},{0xD2L,0xD2L,0xB3L,0x17L,0UL,2UL,1UL}},{{251UL,0x4BL,0x17L,0xD2L,1UL,0UL,0UL},{0UL,0x51L,0x7DL,0x51L,0UL,0xD2L,251UL},{0xB1L,0xB3L,0x7DL,255UL,0x51L,0x1DL,255UL},{255UL,248UL,0x17L,0x1DL,0x1DL,0x17L,248UL}},{{0xB1L,255UL,0xB3L,251UL,0x4BL,0x17L,0xD2L},{0UL,2UL,1UL,0x7DL,8UL,0x1DL,8UL},{251UL,8UL,8UL,251UL,0UL,0xD2L,0x7DL},{0xD2L,8UL,0UL,0x1DL,0xB1L,0UL,0x51L}},{{0x7DL,2UL,0xD2L,255UL,0xD2L,2UL,0x7DL},{0x4BL,255UL,2UL,0x51L,0xD2L,248UL,8UL},{255UL,248UL,0x1DL,0xD2L,0xB1L,0xB1L,0xD2L},{2UL,0xB3L,2UL,0x17L,0UL,255UL,248UL}},{{2UL,0x51L,0xD2L,248UL,8UL,0xB3L,255UL},{255UL,0x4BL,0UL,0UL,0x4BL,255UL,251UL},{0x4BL,0xD2L,8UL,0UL,0x1DL,0xB1L,0UL},{0x7DL,255UL,1UL,248UL,0x51L,248UL,1UL}},{{0xD2L,0xD2L,0xB3L,0x17L,0UL,2UL,1UL},{251UL,0x4BL,0x17L,0xD2L,1UL,0UL,0xB3L},{2UL,0xD2L,255UL,0xD2L,2UL,0x7DL,0xB1L},{0x17L,248UL,255UL,251UL,0xD2L,0UL,0x51L}}};
static int32_t g_27 = 0xE495761BL;
static int32_t *g_26 = &g_27;
static int32_t g_108 = 3L;
static int32_t g_133[2] = {0xDC5A24BAL,0xDC5A24BAL};
static int32_t *g_132 = &g_133[0];
static int32_t ***g_139 = (void*)0;
static int32_t ****g_159 = &g_139;
static int32_t *g_491 = (void*)0;
static int16_t g_560 = 0x0E17L;
static uint16_t g_644[4] = {0UL,0UL,0UL,0UL};
static int32_t *g_646 = &g_108;
static int32_t *g_701 = &g_108;
static int32_t *****g_742 = &g_159;
static int32_t g_777 = 1L;
static uint64_t g_900 = 0xF497E9C807513CA2LL;
static int32_t *g_917 = &g_133[0];
inline static int32_t func_1(void);
static int64_t func_6(int32_t p_7, uint32_t p_8, uint32_t p_9, uint32_t p_10);
static int32_t * func_12(uint32_t p_13, int32_t p_14);
inline static uint32_t func_15(int16_t p_16, uint32_t p_17, int32_t * p_18, uint64_t p_19);
inline static int32_t * func_21(int32_t * p_22, int32_t * p_23, int32_t * p_24, uint64_t p_25);
inline static int32_t * func_28(int16_t p_29, int64_t p_30, int8_t p_31, uint64_t p_32);
static int8_t func_35(uint32_t p_36, int32_t p_37, int8_t p_38);
inline static int8_t func_41(int8_t p_42, uint8_t p_43, int32_t * p_44);
static int32_t func_50(int32_t * p_51, int32_t p_52);
static int32_t * func_55(uint16_t p_56, int64_t p_57, uint8_t p_58);
inline static int32_t func_1(void)
{
    int32_t **l_764 = (void*)0;
    int32_t ***l_763 = &l_764;
    int32_t l_765 = 0x076DD5FCL;
    int16_t l_834 = 0x6144L;
    int32_t l_856 = 0xD1716123L;
    int32_t *l_859 = &l_856;
    int32_t *l_878 = &g_27;
    int32_t *****l_889 = &g_159;
    int64_t l_910 = 0xF4BEBD37D2939033LL;
    int32_t *l_915 = &g_133[0];
    if ((safe_mod_func_int64_t_s_s((((safe_add_func_int64_t_s_s(func_6(g_11[1][1][2], g_11[5][1][3], g_11[1][1][2], g_11[4][0][5]), ((((((g_644[3] >= ((l_763 == g_139) >= 0L)) || g_11[1][1][2]) & g_644[3]) && g_644[0]) == g_644[2]) != 0x07L))) >= g_11[1][1][2]) && l_765), g_644[0])))
    {
        int64_t l_768 = 0L;
        int32_t ****l_771 = (void*)0;
        int64_t l_773 = 0x298837D9F0A78885LL;
        uint8_t l_778[2][8][5] = {{{0x76L,0x14L,0x76L,247UL,252UL},{255UL,5UL,0x76L,252UL,247UL},{255UL,0x14L,255UL,252UL,252UL},{0x76L,0x14L,0x76L,247UL,252UL},{255UL,5UL,0x76L,252UL,247UL},{255UL,0x14L,255UL,252UL,252UL},{0x76L,0x14L,0x76L,247UL,252UL},{255UL,5UL,0x76L,252UL,247UL}},{{255UL,0x14L,255UL,252UL,252UL},{0x76L,0x14L,0x76L,247UL,252UL},{255UL,5UL,0x76L,252UL,247UL},{255UL,0x14L,255UL,252UL,252UL},{0x76L,0x14L,0x76L,247UL,252UL},{255UL,5UL,0x76L,252UL,247UL},{255UL,0x14L,255UL,252UL,252UL},{0x76L,0x14L,0x76L,247UL,252UL}}};
        int32_t **l_816[1][10] = {{&g_701,&g_646,&g_646,&g_701,&g_646,&g_646,&g_701,&g_646,&g_646,&g_701}};
        int16_t l_831[6][9][4] = {{{0x4B3BL,0x17CFL,0x3739L,0x45D7L},{(-6L),0xD11AL,0x53DEL,0x5A8AL},{0x5A8AL,0xF129L,0x5A8AL,0x09DBL},{0L,0L,0x9348L,0x7D0CL},{(-1L),(-7L),0xF129L,0L},{0x7D0CL,(-7L),0xF129L,2L},{(-1L),0x9BFDL,0x9348L,0x4B3BL},{0L,0x6DF4L,0x5A8AL,0x1988L},{0x5A8AL,0x1988L,0x53DEL,0L}},{{(-6L),0xBCEEL,0x3739L,0L},{0x4B3BL,0x3739L,0xD11AL,(-8L)},{0L,5L,0x88D8L,0x9BFDL},{(-6L),(-1L),(-7L),0x4F3BL},{0L,0x45D7L,4L,4L},{0xD7A8L,0xD7A8L,2L,0x3739L},{0x1988L,0L,(-7L),(-10L)},{0x09DBL,4L,0xFF37L,(-7L)},{0xF129L,4L,0x17CFL,(-10L)}},{{4L,0L,0x9BFDL,0x3739L},{(-8L),0xD7A8L,0x4B3BL,(-7L)},{0x9348L,(-8L),0x3739L,0xF129L},{0L,(-6L),(-8L),(-7L)},{0L,0x2419L,0x4602L,0x3739L},{0x614AL,0xB03EL,0xB5C6L,0L},{0x7D0CL,0x9348L,0L,0L},{1L,0L,0x53DEL,0L},{0xD11AL,1L,0x614AL,0x45D7L}},{{1L,(-7L),0xEFD4L,7L},{0x09DBL,0xD7A8L,0x1988L,0xBCEEL},{0x09DBL,5L,0xEFD4L,0x53DEL},{1L,0xBCEEL,0x614AL,0x4602L},{0xD11AL,0x17CFL,0x53DEL,0x6DF4L},{1L,(-1L),0L,(-8L)},{0x7D0CL,0xD11AL,0xB5C6L,0xFF37L},{0x614AL,(-10L),0x4602L,1L},{0L,0x5A8AL,(-8L),(-7L)}},{{0L,0x7D0CL,0x3739L,5L},{0x9348L,0x45D7L,0x45D7L,0x9348L},{0x3739L,0x4F3BL,(-7L),(-1L)},{(-7L),0x7F37L,0xD11AL,2L},{0x17CFL,0xB5C6L,0x5A8AL,2L},{0x4602L,0x7F37L,0xD7A8L,(-1L)},{0L,0x4F3BL,7L,0x9348L},{(-6L),0x45D7L,(-7L),5L},{0x7F37L,0x7D0CL,0x09DBL,(-7L)}},{{0L,0x5A8AL,0xBFFCL,1L},{0L,(-10L),(-1L),0xFF37L},{0x45D7L,0xD11AL,0xB03EL,(-8L)},{0xB5C6L,(-1L),0L,0x6DF4L},{0x6DF4L,0x17CFL,0x6DF4L,0x4602L},{(-7L),0xBCEEL,(-10L),0x53DEL},{(-6L),5L,0x17CFL,0xBCEEL},{0x53DEL,0xD7A8L,0x17CFL,7L},{(-6L),(-7L),(-10L),0x45D7L}}};
        int i, j, k;
        if ((safe_rshift_func_uint16_t_u_s(g_644[0], l_768)))
        {
            uint32_t l_772 = 0x4326653DL;
            int32_t ****l_776 = &l_763;
            int32_t ***l_784 = &l_764;
            (*g_646) = ((safe_rshift_func_uint8_t_u_s(255UL, (((l_771 == &l_763) <= 0x6CB6B8D71E01D5C4LL) < l_772))) & ((g_133[0] >= (((l_773 && (safe_mul_func_int16_t_s_s(((g_133[0] > (((l_776 == (void*)0) & 0L) < g_133[1])) || g_777), l_778[1][0][2]))) && 0x835BL) ^ g_133[0])) || l_773));
            (*g_646) = 0x2BE0A0ACL;
            (*g_132) = (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s(((l_784 != (void*)0) & g_133[0]), 0x07L)))), (safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(g_777, (&g_159 != &l_776))) == ((1L & (*g_132)) < g_133[0])), l_778[1][0][2]))));
        }
        else
        {
            return g_133[0];
        }
        (*g_701) = (((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(255UL, (~g_644[0]))), (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((g_133[1] == (0x1D30L & ((safe_mul_func_int16_t_s_s((g_777 || (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_560, (((&g_159 == &g_159) | ((safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((l_765 | g_11[5][2][4]), 255UL)), 4L)) != l_778[1][3][3]), 1)) && g_644[0])) ^ (*g_701)))), g_560)), 0x08L))), 3L)) & g_644[2]))))) > 1UL), 0x5D29AF4DL)))) >= 0L) <= 1UL);
        for (g_27 = (-20); (g_27 <= (-4)); g_27 = safe_add_func_uint16_t_u_u(g_27, 2))
        {
            uint32_t l_815 = 9UL;
            for (l_773 = 1; (l_773 >= 0); l_773 -= 1)
            {
                int i;
                return g_133[l_773];
            }
            if (l_815)
                continue;
            (*l_763) = (*l_763);
            (*g_646) = (((g_108 != g_108) & ((((l_816[0][3] == (void*)0) >= ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_11[1][1][2] > 65535UL), 0x439DL)), ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_831[5][0][2], (safe_rshift_func_int8_t_s_s(0xF2L, g_560)))), l_834)) > (*g_132)) < g_133[1]) == g_644[0]))), (-7L))), g_27)), g_777)) ^ g_644[2])) <= l_815) == l_815)) & (*g_132));
        }
    }
    else
    {
        int8_t l_843 = 0x42L;
        int64_t l_873 = 0x8B406BDD8AA84CD4LL;
        int32_t *l_877 = &l_856;
        (*g_132) = (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(0xBFL, (safe_add_func_int32_t_s_s(l_843, ((safe_mod_func_uint8_t_u_u((g_108 != ((safe_rshift_func_uint8_t_u_s(1UL, 3)) > (+(+(safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((-6L), (-9L))) != (l_843 != l_843)) || (g_133[0] && l_843)), 0xA03F1FFFL)), 9UL)))))), l_843)) && l_843))))) > 3L), g_108)), g_11[0][3][2])) <= l_856) <= (-6L));
        for (l_843 = 11; (l_843 != (-25)); --l_843)
        {
            int32_t **l_860 = &l_859;
            (*l_860) = l_859;
            for (l_856 = 0; (l_856 != 15); l_856 = safe_add_func_int32_t_s_s(l_856, 1))
            {
                int32_t *****l_867 = (void*)0;
                (*l_860) = (*l_860);
                for (g_560 = (-29); (g_560 > 17); g_560++)
                {
                    int32_t **l_870[10] = {&l_859,(void*)0,&l_859,&l_859,(void*)0,&l_859,&l_859,(void*)0,&l_859,&l_859};
                    int i;
                    (*g_701) = (safe_sub_func_int16_t_s_s(((l_867 != (void*)0) ^ ((safe_mod_func_uint32_t_u_u(((((void*)0 != l_870[9]) ^ (((safe_mul_func_uint16_t_u_u(0xD471L, (((**l_860) && ((**l_860) >= ((((((void*)0 == &l_870[3]) | (-2L)) < 0x9EL) & 0x235297A1L) ^ (**l_860)))) | g_644[3]))) ^ g_133[1]) || l_873)) >= g_133[1]), (*g_701))) | (*g_646))), g_27));
                }
            }
        }
        for (l_834 = (-4); (l_834 < 18); l_834++)
        {
            int32_t **l_876 = &g_701;
            (*l_876) = &g_108;
            (*g_159) = (*g_159);
            l_878 = l_877;
            (*l_876) = l_877;
        }
    }
    for (l_834 = 0; (l_834 <= 3); l_834 += 1)
    {
        int32_t *l_890 = (void*)0;
        int32_t **l_891 = &l_890;
        uint8_t l_904 = 1UL;
        (*l_891) = l_890;
        for (g_27 = 3; (g_27 >= 0); g_27 -= 1)
        {
            int32_t ***l_892 = (void*)0;
            for (l_765 = 3; (l_765 >= 0); l_765 -= 1)
            {
                int i, j, k;
                (*g_646) = (((**l_889) == l_892) >= g_11[(l_834 + 1)][l_765][l_765]);
            }
            for (g_108 = 0; (g_108 <= 3); g_108 += 1)
            {
                uint64_t l_903 = 18446744073709551611UL;
                int32_t *l_905 = &g_133[0];
                l_904 = (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(0xC8C6L, 2)), (((((+(8UL == (((safe_add_func_uint8_t_u_u((g_133[0] | (0UL < ((((0xF24BL ^ 0xC704L) | (g_900 > (0xDCL < (safe_mod_func_uint32_t_u_u((g_644[0] != g_133[0]), g_644[2]))))) || g_644[0]) >= 1L))), g_900)) || l_903) == g_133[0]))) ^ g_27) ^ 0x9EFD9C26L) < (*g_132)) & g_11[1][1][2])));
                l_905 = (*l_891);
                for (g_900 = 0; (g_900 <= 3); g_900 += 1)
                {
                    uint32_t l_914 = 4294967295UL;
                    if ((safe_rshift_func_uint8_t_u_u(((((void*)0 != (*g_159)) ^ (safe_mul_func_uint16_t_u_u(l_910, (0x777BL && (((((~g_133[0]) & (safe_rshift_func_int16_t_s_s(l_914, 13))) == (g_777 & (((255UL || ((g_777 && g_644[0]) && g_644[3])) && l_914) ^ 0xCBBCL))) <= g_27) != 0xE82CEE99L))))) && g_900), g_133[0])))
                    {
                        return l_914;
                    }
                    else
                    {
                        return g_108;
                    }
                }
                for (l_904 = 0; (l_904 <= 3); l_904 += 1)
                {
                    int32_t *l_916 = (void*)0;
                    (*l_859) = (*g_646);
                    l_905 = l_915;
                    l_905 = l_916;
                    if ((*l_915))
                        continue;
                }
                for (l_765 = 0; (l_765 <= 3); l_765 += 1)
                {
                    for (g_900 = 0; (g_900 <= 3); g_900 += 1)
                    {
                        g_742 = &g_159;
                        g_917 = l_905;
                    }
                }
            }
        }
        (*l_891) = (void*)0;
        for (l_765 = 0; (l_765 <= 3); l_765 += 1)
        {
            int32_t *l_918 = (void*)0;
            for (g_27 = 0; (g_27 <= 3); g_27 += 1)
            {
                for (l_856 = 3; (l_856 >= 0); l_856 -= 1)
                {
                    (*l_891) = l_918;
                }
                (*l_915) = 0x391B883FL;
            }
            (*l_915) = ((void*)0 != (*l_889));
            (*g_132) = (*g_646);
            (*l_891) = (*l_891);
            for (g_560 = 0; (g_560 <= 3); g_560 += 1)
            {
                int32_t l_919 = (-9L);
                (*g_646) = l_919;
            }
        }
    }
    return g_11[8][1][2];
}
static int64_t func_6(int32_t p_7, uint32_t p_8, uint32_t p_9, uint32_t p_10)
{
    uint64_t l_20 = 0xEE76373A4C924B54LL;
    int32_t *l_256[4][2] = {{&g_27,&g_27},{(void*)0,&g_27},{&g_27,(void*)0},{&g_27,&g_27}};
    uint16_t l_284 = 0xD117L;
    uint32_t l_311[2][8] = {{0xCEDAAA33L,0x30380A52L,0xCEDAAA33L,0xCEDAAA33L,0x30380A52L,0xCEDAAA33L,0xCEDAAA33L,0x30380A52L},{0x30380A52L,0xCEDAAA33L,0xCEDAAA33L,0x30380A52L,0xCEDAAA33L,0xCEDAAA33L,0x30380A52L,0xCEDAAA33L}};
    int i, j;
    l_256[1][1] = func_12(func_15(p_9, l_20, func_21(g_26, &g_27, func_28(l_20, (safe_rshift_func_int8_t_s_u(func_35((safe_sub_func_uint64_t_u_u((func_41((safe_add_func_int8_t_s_s((~0xEF2FL), (safe_mod_func_uint32_t_u_u(g_11[0][0][6], func_50(&g_27, l_20))))), p_9, l_256[0][0]) < p_9), g_11[1][3][4])), g_11[1][1][2], l_284), g_11[1][1][2])), g_11[5][2][0], p_9), l_311[1][3]), p_8), p_7);
    return p_8;
}
static int32_t * func_12(uint32_t p_13, int32_t p_14)
{
    uint64_t l_340 = 0x2F921B171C3BC409LL;
    int32_t l_350 = (-1L);
    int32_t **l_357 = &g_26;
    uint16_t l_401 = 0UL;
    int32_t *l_539 = &g_133[0];
    int32_t ****l_541[1][5];
    int32_t **l_547 = &l_539;
    uint32_t l_705 = 6UL;
    uint16_t l_760 = 0x31EDL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_541[i][j] = &g_139;
    }
    if (p_14)
    {
        int32_t ****l_352[1];
        int64_t l_435 = 0L;
        uint32_t l_516 = 0x51CA1DB9L;
        int32_t *l_520 = &g_133[0];
        int32_t *l_534[3][10][3] = {{{&g_133[0],&g_133[0],&g_108},{&g_133[0],&g_133[0],&l_350},{&g_133[0],&g_133[0],(void*)0},{&g_133[0],&g_108,&l_350},{&g_133[1],&g_133[0],(void*)0},{&l_350,&g_133[1],&l_350},{&g_133[0],(void*)0,&g_108},{&g_133[0],&g_133[1],&g_133[0]},{(void*)0,&g_133[0],(void*)0},{&g_133[0],&g_108,&l_350}},{{(void*)0,&g_133[0],&g_133[0]},{&g_133[0],&g_133[0],&l_350},{&g_133[0],&g_133[0],&g_133[0]},{&l_350,&g_133[0],&l_350},{&g_133[1],(void*)0,(void*)0},{&g_133[0],&g_133[0],&g_133[0]},{&g_133[0],&g_133[0],&g_108},{&g_133[0],&g_133[0],&l_350},{&g_133[0],&g_133[0],(void*)0},{&g_133[0],&g_108,&l_350}},{{&g_133[1],&g_133[0],(void*)0},{&l_350,&g_133[1],&l_350},{&g_133[0],(void*)0,&g_108},{&g_133[0],&g_133[1],&g_133[0]},{(void*)0,&g_133[0],(void*)0},{&g_133[0],&g_108,&l_350},{(void*)0,&g_133[0],&g_133[0]},{&g_133[0],&g_133[0],&l_350},{&g_133[0],&g_133[0],&g_133[0]},{&l_350,&g_133[0],&l_350}}};
        int32_t *l_548 = (void*)0;
        uint64_t l_602 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_352[i] = &g_139;
        for (g_108 = 3; (g_108 >= 0); g_108 -= 1)
        {
            int32_t **l_333 = &g_132;
            int32_t ****l_348 = &g_139;
            int32_t *l_482 = &g_133[1];
            int32_t l_490 = 0L;
            int32_t *l_492 = &g_108;
            uint64_t l_508 = 18446744073709551609UL;
            int32_t *l_537 = &g_108;
            uint16_t l_601 = 0xC897L;
            (*g_26) = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((((g_11[1][1][2] < g_11[1][1][2]) ^ (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((p_14 < (+g_27)) < (1L ^ (*g_26))), ((safe_rshift_func_uint8_t_u_s(((void*)0 != l_333), 1)) != (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_s(1L, 5)) & p_13) > p_14) && p_13), l_340)) > p_13), 9))))), 255UL))) || p_14) > 0xC104672E093A6662LL) > 0x07L) == (-1L)), 0x38B6D6A3L)), p_13));
        }
        (*l_539) = (safe_add_func_uint16_t_u_u(g_133[0], (0xCCL ^ g_108)));
        (*l_357) = &p_14;
    }
    else
    {
        uint64_t l_677 = 18446744073709551612UL;
        int32_t *l_678[6];
        int32_t l_717 = 0x23B05B0EL;
        int32_t ***l_761 = &l_357;
        int i;
        for (i = 0; i < 6; i++)
            l_678[i] = &g_133[0];
        if ((*l_539))
        {
            uint16_t l_674 = 0xBCC8L;
            int32_t ***l_694[9][9][3] = {{{&l_357,&l_547,&l_357},{(void*)0,&l_357,&l_357},{&l_357,&l_357,&l_547},{(void*)0,&l_357,&l_547},{&l_547,&l_547,&l_357},{&l_357,&l_547,&l_357},{&l_357,&l_547,&l_357},{&l_357,&l_547,&l_547},{&l_357,&l_547,&l_547}},{{&l_357,&l_547,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_547},{&l_357,&l_357,&l_357},{&l_547,&l_357,&l_357},{(void*)0,&l_547,(void*)0},{&l_357,&l_547,&l_357},{(void*)0,&l_547,&l_357}},{{&l_357,&l_547,&l_547},{&l_547,&l_547,&l_357},{&l_357,&l_547,&l_357},{(void*)0,&l_357,&l_357},{&l_357,&l_357,&l_547},{(void*)0,&l_357,&l_547},{&l_547,&l_547,&l_357},{&l_357,&l_547,&l_357},{&l_357,&l_547,&l_357}},{{&l_357,&l_547,&l_547},{&l_357,&l_547,&l_547},{&l_357,&l_547,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_547},{&l_357,&l_357,&l_357},{&l_547,&l_357,&l_357},{(void*)0,&l_547,(void*)0}},{{&l_357,&l_547,&l_357},{(void*)0,&l_547,&l_357},{&l_357,&l_547,&l_547},{&l_547,&l_547,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_547,&l_357},{&l_547,&l_547,&l_357},{&l_357,&l_547,(void*)0},{&l_357,&l_357,&l_547}},{{&l_357,&l_547,&l_357},{&l_547,&l_357,&l_547},{&l_547,&l_357,(void*)0},{&l_357,&l_357,&l_357},{&l_357,&l_547,&l_357},{&l_357,&l_357,&l_357},{&l_547,&l_547,&l_547},{&l_547,&l_547,&l_357},{&l_357,&l_547,&l_357}},{{&l_357,&l_357,&l_547},{&l_357,&l_547,&l_357},{&l_547,&l_357,&l_547},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{(void*)0,&l_547,&l_547},{&l_357,&l_357,&l_357},{&l_357,&l_547,&l_357},{&l_547,&l_547,&l_357}},{{&l_357,&l_547,(void*)0},{&l_357,&l_357,&l_547},{&l_357,&l_547,&l_357},{&l_547,&l_357,&l_547},{&l_547,&l_357,(void*)0},{&l_357,&l_357,&l_357},{&l_357,&l_547,&l_357},{&l_357,&l_357,&l_357},{&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_357},{&l_357,&l_547,&l_357},{&l_357,&l_357,&l_547},{&l_357,&l_547,&l_357},{&l_547,&l_357,&l_547},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{(void*)0,&l_547,&l_547},{&l_357,&l_357,&l_357}}};
            int32_t *l_706 = (void*)0;
            int i, j, k;
            for (l_350 = 0; (l_350 != (-26)); l_350--)
            {
                uint64_t l_668 = 18446744073709551611UL;
                int32_t ****l_671 = (void*)0;
                (*l_547) = &p_14;
                l_678[0] = func_28(p_13, l_668, (safe_add_func_uint8_t_u_u(((l_671 != &g_139) && g_108), ((((void*)0 != &l_541[0][2]) && (safe_lshift_func_uint8_t_u_s(l_674, (+(~((p_14 || 0x7DL) >= p_13)))))) && g_133[1]))), l_677);
                p_14 = (safe_rshift_func_uint8_t_u_u((((+((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((65535UL != 65535UL), (-7L))), 10)) != g_133[1]) ^ ((((((*l_539) == 0xFCE418CE9AA004C3LL) ^ (safe_sub_func_int8_t_s_s(p_13, (safe_add_func_int32_t_s_s(((l_678[3] == &p_14) & (-5L)), p_14))))) || g_27) >= p_14) >= p_14)) <= l_674)) >= 1L) && 252UL), (*l_539)));
            }
            for (g_108 = 0; (g_108 > (-13)); g_108 = safe_sub_func_int8_t_s_s(g_108, 9))
            {
                int32_t ***l_695 = &l_547;
                (**l_357) = (((l_694[1][3][0] == l_695) & p_14) < ((+(((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((g_133[0] ^ (((**l_695) != g_701) > ((~g_644[0]) & (l_705 | (((p_14 | (-9L)) || p_13) != 0x8AF6535E73F7474DLL))))) < 0L), (-1L))), g_11[1][1][2])) ^ g_644[0]) || (***l_695))) != g_644[0]));
                return l_706;
            }
            for (l_705 = 0; (l_705 != 30); l_705 = safe_add_func_uint64_t_u_u(l_705, 2))
            {
                int32_t **l_720 = &g_646;
                int32_t ****l_737[9] = {&l_694[1][8][0],(void*)0,&l_694[1][8][0],(void*)0,&l_694[1][8][0],(void*)0,&l_694[1][8][0],(void*)0,&l_694[1][8][0]};
                int16_t l_738 = 0x4078L;
                int i;
                l_678[0] = (void*)0;
                (*l_720) = func_28(p_14, g_11[5][3][5], (safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((!((!0xC4L) < (1L && (safe_lshift_func_uint16_t_u_s(((((l_717 >= 0x71B48606F11BCAE3LL) || (safe_mod_func_uint64_t_u_u((l_720 == (void*)0), (safe_add_func_uint8_t_u_u(((p_13 <= p_13) != g_133[0]), 0x21L))))) | p_14) <= g_644[0]), p_13))))), g_644[0])) || (*g_132)) != 0xEEL), p_14)), g_11[1][1][2]);
                (*l_357) = func_28((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(4L, (0x3FD2B08F023D4949LL | 6UL))), g_11[2][3][3])), (**l_720), ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(0xFCL, ((void*)0 == l_737[7]))) || 0x06252F011F1B9830LL), g_644[3])) < 246UL) >= l_738) > 7UL), p_13)), p_14)), g_133[0])) || p_14), g_11[7][0][0]);
            }
        }
        else
        {
            int32_t *****l_741 = &l_541[0][2];
            for (g_560 = 0; (g_560 > 25); g_560 = safe_add_func_uint64_t_u_u(g_560, 1))
            {
                g_742 = l_741;
                for (l_717 = (-19); (l_717 < (-1)); l_717 = safe_add_func_int32_t_s_s(l_717, 1))
                {
                    int32_t ****l_745 = &g_139;
                    if (p_14)
                        break;
                    (*g_646) = (l_541[0][1] != l_745);
                }
                (*l_547) = &p_14;
            }
            for (l_340 = 0; l_340 < 1; l_340 += 1)
            {
                for (p_13 = 0; p_13 < 5; p_13 += 1)
                {
                    l_541[l_340][p_13] = &g_139;
                }
            }
        }
        if ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((p_14 > g_11[6][3][6]), ((void*)0 == &p_14))) && (((*l_539) & (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(0x93CE937119B6BBA0LL)), (((l_678[2] == (*l_547)) & 0x215A22E7760B8827LL) > 9L)))) == g_560)) == g_108), p_14)), 15)) & (-8L)), 6)))
        {
            int32_t *l_757 = &g_27;
            return l_757;
        }
        else
        {
            int32_t ****l_762 = (void*)0;
            (*g_701) = ((safe_rshift_func_int16_t_s_u(l_760, ((**g_742) != l_761))) & (l_762 != (void*)0));
        }
        return (**l_761);
    }
    return &g_133[0];
}
inline static uint32_t func_15(int16_t p_16, uint32_t p_17, int32_t * p_18, uint64_t p_19)
{
    uint32_t l_315 = 0x3BB46094L;
    int32_t *l_316 = &g_133[0];
    int32_t **l_321[9][4] = {{&g_26,&l_316,&l_316,&g_26},{&g_26,&l_316,(void*)0,&g_26},{&g_26,&l_316,&l_316,&g_26},{&g_26,&l_316,(void*)0,&g_26},{&g_26,&l_316,&l_316,&g_26},{&g_26,&l_316,(void*)0,&g_26},{&g_26,&l_316,&l_316,&g_26},{&g_26,&l_316,(void*)0,&g_26},{&g_26,&l_316,&l_316,&g_26}};
    int i, j;
    g_26 = func_28(((safe_rshift_func_uint8_t_u_s(((l_315 | (7UL != (((l_315 >= (l_316 == p_18)) == (0x816AL <= g_133[0])) | (safe_add_func_uint32_t_u_u((g_11[5][3][1] | (safe_rshift_func_int8_t_s_s(((p_19 ^ (*p_18)) & 0x23L), (*l_316)))), (*l_316)))))) < p_17), (*l_316))) <= 9UL), g_11[1][1][2], g_133[0], g_108);
    return p_16;
}
inline static int32_t * func_21(int32_t * p_22, int32_t * p_23, int32_t * p_24, uint64_t p_25)
{
    int32_t *l_312 = &g_133[0];
    l_312 = l_312;
    return &g_27;
}
inline static int32_t * func_28(int16_t p_29, int64_t p_30, int8_t p_31, uint64_t p_32)
{
    int16_t l_294 = (-10L);
    int32_t *l_300 = &g_133[0];
    uint64_t l_302 = 0UL;
    for (p_29 = 0; (p_29 <= 1); p_29 += 1)
    {
        uint16_t l_291 = 1UL;
        int32_t **l_299 = &g_132;
    }
    l_300 = func_55(g_11[1][1][2], p_29, ((!((&g_139 != (void*)0) || l_302)) != ((safe_sub_func_uint16_t_u_u(g_133[0], (0xFA219F341124B31ALL >= ((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(g_108, (safe_rshift_func_uint16_t_u_u(g_133[1], 0)))) < 0xC97DL), 1UL)) >= 0x01L)))) ^ (*l_300))));
    return &g_133[0];
}
static int8_t func_35(uint32_t p_36, int32_t p_37, int8_t p_38)
{
    int32_t **l_286 = &g_26;
    int32_t ***l_285[2];
    int i;
    for (i = 0; i < 2; i++)
        l_285[i] = &l_286;
    l_285[0] = l_285[0];
    return p_38;
}
inline static int8_t func_41(int8_t p_42, uint8_t p_43, int32_t * p_44)
{
    int32_t *l_258 = &g_27;
    int32_t ****l_269 = &g_139;
    for (g_108 = 1; (g_108 >= 0); g_108 -= 1)
    {
        int32_t **l_257[1];
        int32_t ****l_264 = &g_139;
        int i;
        for (i = 0; i < 1; i++)
            l_257[i] = &g_132;
        l_258 = p_44;
        g_133[g_108] = (*g_26);
        (*g_132) = (safe_lshift_func_int16_t_s_s(0x2A67L, (1L && (+(safe_sub_func_int16_t_s_s((((&g_139 == &g_139) == ((void*)0 != p_44)) | (246UL == ((((void*)0 == l_264) | 1UL) <= p_42))), g_11[1][1][2]))))));
    }
    (*g_132) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((l_269 == l_269) ^ g_133[1]), 6)), (safe_sub_func_int8_t_s_s(0x4FL, (g_11[2][3][3] ^ g_108)))));
    (*g_26) = ((safe_mod_func_uint64_t_u_u(g_108, (safe_lshift_func_uint8_t_u_s(((((((1L > ((void*)0 != (*l_269))) > p_43) != ((safe_lshift_func_uint8_t_u_s((&p_44 != &p_44), 4)) & ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(250UL, (safe_add_func_uint8_t_u_u((l_269 == (void*)0), g_11[1][1][2])))) >= g_11[1][3][4]), g_27)) ^ 1L))) >= 0UL) & p_43) == (*g_26)), p_42)))) && (*g_132));
    return g_133[0];
}
static int32_t func_50(int32_t * p_51, int32_t p_52)
{
    int32_t *l_75 = &g_27;
    int64_t l_88[6][5] = {{0x58B506EE4F120B25LL,0x20C2888A0E7B2E1DLL,(-7L),0x20C2888A0E7B2E1DLL,0x58B506EE4F120B25LL},{2L,0x20C2888A0E7B2E1DLL,0xAF5756627F1A9F13LL,(-6L),0x58B506EE4F120B25LL},{0x58B506EE4F120B25LL,(-6L),0xAF5756627F1A9F13LL,0x20C2888A0E7B2E1DLL,2L},{0x58B506EE4F120B25LL,0x20C2888A0E7B2E1DLL,(-7L),0x20C2888A0E7B2E1DLL,0x58B506EE4F120B25LL},{2L,0x20C2888A0E7B2E1DLL,0xAF5756627F1A9F13LL,(-6L),(-6L)},{(-6L),4L,0x09421A0E57C1F20CLL,(-3L),0x307D3E67B33DF123LL}};
    int32_t ****l_255 = &g_139;
    int i, j;
    for (p_52 = 17; (p_52 == (-7)); --p_52)
    {
        int64_t l_87 = 0L;
        int32_t *l_236 = &g_133[0];
        int32_t l_249 = 0L;
        int32_t **l_250 = &g_132;
    }
    (*g_132) = (((safe_sub_func_int16_t_s_s(0x1719L, ((safe_add_func_int8_t_s_s(g_133[0], ((void*)0 == &p_51))) && (*l_75)))) ^ (*l_75)) <= ((&g_139 != l_255) ^ g_11[1][1][2]));
    return (*l_75);
}
static int32_t * func_55(uint16_t p_56, int64_t p_57, uint8_t p_58)
{
    uint64_t l_89[9];
    int32_t *l_100 = (void*)0;
    int32_t ****l_169 = &g_139;
    int32_t *l_174 = &g_133[0];
    int i;
    for (i = 0; i < 9; i++)
        l_89[i] = 7UL;
    for (p_56 = 1; (p_56 <= 8); p_56 += 1)
    {
        int32_t *l_90 = (void*)0;
        int32_t ****l_143[10] = {&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139};
        int i;
        l_90 = (void*)0;
        (*g_26) = ((255UL & ((safe_lshift_func_int8_t_s_s(((~(safe_add_func_uint16_t_u_u(p_58, (l_89[8] <= (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((l_100 == (void*)0) < (~((safe_lshift_func_uint8_t_u_u(p_58, 1)) || (safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((((p_57 | (l_100 == (void*)0)) != p_57) != 9L), g_27)), g_108))))), g_11[1][1][2])), g_11[1][1][2])) != g_11[8][1][6]) & (-1L)))))) | 0xE6L), p_57)) <= p_58)) <= 0UL);
        for (g_27 = 0; (g_27 <= 8); g_27 += 1)
        {
            int32_t **l_110[8][4][8] = {{{(void*)0,&g_26,(void*)0,&g_26,(void*)0,&l_90,(void*)0,&l_90},{&l_100,&l_90,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&l_90,&l_90,&g_26,&l_100,&g_26,&g_26,(void*)0,&l_100},{&g_26,(void*)0,(void*)0,&l_90,(void*)0,(void*)0,&g_26,&l_100}},{{(void*)0,&g_26,&g_26,&l_100,&g_26,&l_90,&l_90,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&l_90,&l_100,&l_90},{(void*)0,&l_90,(void*)0,&g_26,(void*)0,&g_26,(void*)0,&l_90},{&g_26,&l_90,&l_90,(void*)0,&g_26,&l_90,&l_100,&l_100}},{{&l_90,&g_26,&g_26,&g_26,&g_26,&l_90,&l_100,(void*)0},{&l_100,&g_26,&l_90,&l_90,(void*)0,(void*)0,(void*)0,&l_90},{(void*)0,(void*)0,(void*)0,&l_90,&l_90,&g_26,&l_100,(void*)0},{&l_100,&l_90,&g_26,&g_26,&g_26,&g_26,&l_90,&l_100}},{{&l_100,&l_90,&g_26,(void*)0,&l_90,&l_90,&g_26,&l_90},{(void*)0,&g_26,(void*)0,&g_26,(void*)0,&l_90,(void*)0,&l_90},{&l_100,&l_90,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&l_90,&l_90,&g_26,&l_100,&g_26,&g_26,(void*)0,&l_100}},{{&g_26,(void*)0,(void*)0,&l_90,(void*)0,(void*)0,&g_26,&l_100},{(void*)0,&g_26,&g_26,&l_100,&g_26,&l_90,&l_90,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&l_90,&l_100,&l_90},{(void*)0,&l_90,(void*)0,&g_26,(void*)0,&g_26,(void*)0,&l_90}},{{&g_26,&l_90,&l_90,(void*)0,&g_26,&l_90,&l_100,&l_100},{&l_90,&g_26,&g_26,&g_26,&g_26,&l_90,&l_90,&l_100},{(void*)0,&g_26,&g_26,&l_90,&g_26,&l_100,&g_26,&l_90},{&g_26,&l_100,&g_26,&l_90,&g_26,&g_26,(void*)0,&l_100}},{{&l_90,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&l_90},{&l_90,&l_90,(void*)0,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,(void*)0,&l_100,(void*)0,&g_26,&g_26,&l_100,&g_26},{(void*)0,&l_90,(void*)0,&l_90,&g_26,&g_26,&l_90,(void*)0}},{{&g_26,&g_26,(void*)0,&l_90,(void*)0,&g_26,&l_100,(void*)0},{&g_26,&l_100,&l_100,&g_26,&l_100,&l_100,&g_26,(void*)0},{&l_100,&g_26,(void*)0,&l_90,(void*)0,&g_26,&g_26,(void*)0},{&l_90,&g_26,&g_26,&l_90,(void*)0,&l_90,(void*)0,&g_26}}};
            int32_t ***l_109 = &l_110[6][3][4];
            int32_t l_130 = 0x0322C85EL;
            int32_t *l_198 = &g_133[0];
            int32_t *****l_217 = &l_143[0];
            int i, j, k;
            (*l_109) = &g_26;
            if ((safe_rshift_func_int8_t_s_s(l_89[g_27], 2)))
            {
                return &g_27;
            }
            else
            {
                uint32_t l_113 = 9UL;
                int32_t l_131 = 0L;
                int32_t ****l_137 = &l_109;
                uint32_t l_158 = 7UL;
                int32_t *****l_173 = &l_143[0];
                int32_t *l_180 = &g_108;
                l_113 = (*g_26);
                for (g_108 = 3; (g_108 <= 8); g_108 += 1)
                {
                    int32_t ****l_114 = &l_109;
                    for (p_58 = 0; (p_58 <= 3); p_58 += 1)
                    {
                        int32_t *****l_115[6] = {&l_114,&l_114,&l_114,&l_114,&l_114,&l_114};
                        int i;
                        l_114 = l_114;
                        l_131 = ((&g_27 != (void*)0) && (18446744073709551615UL | (safe_mul_func_int16_t_s_s((l_89[g_108] >= (safe_unary_minus_func_uint32_t_u(((safe_mul_func_uint8_t_u_u((~p_57), 0x88L)) < (-1L))))), (safe_rshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s(3L, ((safe_rshift_func_int16_t_s_s(g_11[1][1][2], g_27)) == l_130))), 0xCE71E83BB0DECA30LL)) && (*g_26)), g_11[7][3][1]))))));
                        g_132 = &g_27;
                    }
                    for (p_57 = 0; (p_57 <= 8); p_57 += 1)
                    {
                        int32_t ****l_138[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        if (p_57)
                            break;
                        l_90 = (void*)0;
                        g_133[0] = (safe_mul_func_int16_t_s_s(((+g_108) <= (((l_137 == l_138[0]) || (1UL < (((g_139 == g_139) == ((safe_rshift_func_uint8_t_u_u(((void*)0 != g_139), (p_57 == g_133[1]))) < p_57)) & g_27))) != g_108)), p_57));
                        g_132 = &g_133[0];
                    }
                }
                for (g_108 = 5; (g_108 >= 0); g_108 -= 1)
                {
                    int32_t ***l_157 = &l_110[6][3][4];
                    int8_t l_160 = 0xA5L;
                    int32_t *l_162[10][9][2] = {{{&g_108,&l_131},{(void*)0,&l_131},{&g_108,&g_133[0]},{&g_133[0],&g_108},{&g_27,&g_133[0]},{&g_133[0],&g_108},{&g_27,&g_108},{(void*)0,&g_108},{&l_130,&g_133[0]}},{{&g_133[1],&g_133[0]},{&g_133[0],(void*)0},{&g_133[0],(void*)0},{(void*)0,&g_133[0]},{&g_27,&g_133[1]},{&l_130,&g_27},{&g_108,&g_108},{&l_130,(void*)0},{&l_131,&g_133[0]}},{{&g_133[0],&g_133[0]},{&g_133[1],&l_130},{(void*)0,&g_133[0]},{&l_131,&g_108},{&g_133[1],&g_133[0]},{&g_133[0],&g_133[0]},{&g_27,&g_108},{(void*)0,&g_108},{&g_133[0],&l_131}},{{&g_133[0],&g_27},{&g_27,&g_27},{&g_133[0],&g_108},{&l_131,(void*)0},{&l_130,&g_108},{&g_133[1],&l_130},{&l_130,&l_131},{&l_130,&l_130},{&g_133[1],&g_108}},{{&l_130,(void*)0},{&l_131,&g_108},{&g_133[0],&g_27},{&g_27,&g_27},{&g_133[0],&l_131},{&g_133[0],&g_108},{(void*)0,&g_108},{&g_27,&g_133[0]},{&g_133[0],&g_133[0]}},{{&g_133[1],&g_108},{&l_131,&g_133[0]},{&l_131,(void*)0},{(void*)0,(void*)0},{&l_130,&g_133[1]},{&l_131,&g_133[0]},{&g_27,&l_131},{(void*)0,&g_133[0]},{&g_133[0],(void*)0}},{{&g_108,&g_108},{&l_130,&g_133[0]},{(void*)0,&g_133[1]},{&g_27,(void*)0},{(void*)0,&l_130},{&g_133[0],&g_133[0]},{&l_131,&g_133[0]},{&g_133[0],&g_108},{&g_27,&g_133[1]}},{{&l_131,&g_133[0]},{&g_108,&g_108},{(void*)0,&l_130},{&g_108,&l_130},{(void*)0,&g_108},{&g_108,&g_133[0]},{&l_131,&g_133[1]},{&g_27,&g_108},{&g_133[0],&g_133[0]}},{{&l_131,&g_133[0]},{&g_133[0],&l_130},{(void*)0,(void*)0},{&g_27,&g_133[1]},{(void*)0,&g_133[0]},{&l_130,&g_108},{&g_108,(void*)0},{&g_133[0],&g_133[0]},{(void*)0,&l_131}},{{&g_27,&g_133[0]},{&l_131,&g_133[1]},{&l_130,(void*)0},{(void*)0,(void*)0},{&l_131,&g_133[0]},{&l_131,&g_133[0]},{&l_130,(void*)0},{&l_130,&g_27},{&l_131,&l_130}}};
                    int i, j, k;
                    for (l_131 = 0; (l_131 <= 8); l_131 += 1)
                    {
                        int32_t *l_142 = &g_133[1];
                        l_142 = &g_108;
                        l_90 = l_100;
                        g_133[0] = ((l_143[0] != &g_139) != (safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((((*g_26) && ((safe_lshift_func_uint8_t_u_u(p_56, 6)) == ((safe_mod_func_int16_t_s_s(((+(&l_142 != (void*)0)) | ((safe_add_func_int8_t_s_s((g_11[1][1][2] ^ (safe_mul_func_uint8_t_u_u((((l_157 == (void*)0) & g_133[0]) >= 18446744073709551610UL), g_133[0]))), g_108)) != l_158)), g_27)) != g_11[1][1][2]))) && 254UL) > 1L), 3UL)), 0xC26E64EF7B2E3071LL)));
                        if (p_57)
                            continue;
                    }
                    g_159 = l_143[0];
                    for (p_58 = 0; (p_58 <= 8); p_58 += 1)
                    {
                        int32_t l_161 = 7L;
                        l_161 = l_160;
                    }
                    l_162[0][2][0] = &g_27;
                }
                if (((safe_mul_func_int8_t_s_s(p_57, ((-1L) > (((safe_lshift_func_uint8_t_u_s(0xEBL, ((void*)0 == (**l_137)))) | 0x90A92FA6L) == (safe_rshift_func_int8_t_s_u(g_27, ((1UL != ((((l_169 != (void*)0) & g_133[0]) && p_57) < g_133[0])) == p_56))))))) || l_113))
                {
                    int32_t *l_172 = (void*)0;
                    g_133[0] = (((~(((**l_137) != (void*)0) > p_57)) || (0xEB52EEBBL | p_56)) & p_56);
                    g_133[0] = ((*l_109) != (void*)0);
                    for (l_113 = 3; (l_113 <= 8); l_113 += 1)
                    {
                        int32_t *l_171 = &l_130;
                        l_172 = l_171;
                        (*l_172) = (*l_172);
                    }
                    if ((l_172 == (void*)0))
                    {
                        int32_t *l_175 = &l_130;
                        l_173 = &g_159;
                        l_175 = l_174;
                        l_175 = l_175;
                        (*l_174) = (safe_lshift_func_int16_t_s_u(g_108, g_133[0]));
                    }
                    else
                    {
                        uint32_t l_178 = 0xA5BA27C4L;
                        int32_t **l_179 = &l_100;
                        (*l_174) = l_178;
                        (*l_174) = ((((((g_133[0] <= ((void*)0 == l_179)) > (&g_159 == (void*)0)) && g_11[1][1][2]) > (l_179 == &g_132)) == (((void*)0 != &l_137) ^ (*g_26))) || g_11[4][2][4]);
                        (*l_174) = (*g_26);
                        return &g_133[0];
                    }
                }
                else
                {
                    for (l_158 = 0; (l_158 <= 8); l_158 += 1)
                    {
                        (*l_174) = (*g_26);
                    }
                    for (p_58 = 0; (p_58 <= 8); p_58 += 1)
                    {
                        int32_t ****l_197 = &g_139;
                        g_132 = l_180;
                        (*g_132) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0xB1L | (g_133[0] && (p_57 != (&g_139 != &g_139)))), (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((l_174 == (void*)0), (safe_mul_func_uint8_t_u_u((p_56 == (safe_mul_func_uint8_t_u_u(((((void*)0 == l_197) | g_11[2][3][1]) != 0xF224L), p_56))), 249UL)))), 4)))), p_57)), p_58));
                        (*g_132) = 1L;
                        return l_198;
                    }
                    if ((*g_132))
                        continue;
                }
            }
            for (p_57 = 7; (p_57 >= 0); p_57 -= 1)
            {
                int32_t *l_199 = &g_133[1];
                g_132 = l_199;
                if ((*l_199))
                    break;
                for (p_58 = 0; (p_58 <= 8); p_58 += 1)
                {
                    int32_t *l_208 = (void*)0;
                    int32_t *****l_214 = &l_143[0];
                    for (l_130 = 3; (l_130 <= 9); l_130 += 1)
                    {
                        int i;
                    }
                    (*l_199) = (safe_sub_func_uint16_t_u_u(p_57, 0x225BL));
                    (*l_214) = &g_139;
                }
            }
        }
        (*g_132) = (*g_132);
    }
    g_132 = &g_133[1];
    return l_100;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                csmith_sink_ = g_11[i][j][k];
            }
        }
    }
    csmith_sink_ = g_27;
    csmith_sink_ = g_108;
    for (i = 0; i < 2; i++)
    {
        csmith_sink_ = g_133[i];
    }
    csmith_sink_ = g_560;
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_644[i];
    }
    csmith_sink_ = g_777;
    csmith_sink_ = g_900;
    platform_main_end(0,0);
    return 0;
}
